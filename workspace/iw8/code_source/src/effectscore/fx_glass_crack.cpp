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
  bool v5; 

  _RAX = 32i64 * *index1;
  _R9 = s_fringePieceSortWork->glassSys->pieceStates;
  _R8 = *index0;
  v5 = __CFSHL__(_R8, 5);
  _R8 *= 32i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+r9+1Ch]
    vcomiss xmm0, dword ptr [r8+r9+1Ch]
  }
  return v5;
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
  bool v5; 

  glassSys = work->glassSys;
  _RBX = work;
  v4 = pieceIndex;
  v5 = __CFADD__(glassSys->pieceStates, v4 * 32) || &glassSys->pieceStates[v4] == NULL;
  _RDI = &glassSys->pieceStates[v4];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vcomiss xmm0, dword ptr [rbx+54ACh]
  }
  if ( v5 )
  {
    if ( !_RDI->supportMask )
      return;
    __asm { vcomiss xmm0, dword ptr [rbx+54B0h] }
    if ( !_RDI->supportMask )
      goto LABEL_7;
  }
  if ( work->pieceStackLevel >= 0x20 )
  {
LABEL_7:
    if ( _RDI->supportMask && glassSys->pieceDynamics[pieceIndex].fallTime == 0x7FFFFFFF && work->fringePieceCount < 0x20 )
    {
      work->fringePieces[work->fringePieceCount] = truncate_cast<unsigned short,unsigned int>(pieceIndex);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1Ch]
        vaddss  xmm1, xmm0, dword ptr [rbx+553Ch]
      }
      ++_RBX->fringePieceCount;
      __asm { vmovss  dword ptr [rbx+553Ch], xmm1 }
    }
  }
  else
  {
    work->pieceStack[work->pieceStackLevel] = truncate_cast<unsigned short,unsigned int>(pieceIndex);
    ++_RBX->pieceStackLevel;
  }
}

/*
==============
Glass_CrackPiece
==============
*/
void Glass_CrackPiece(FxGlassCrackWork *work, FxGlassSystem *glassSys, unsigned int pieceIndex, const tmat33_t<vec3_t> *axis, const FxGlassVertex breakOrg, const vec3_t *breakDir, float avgCrackLength)
{
  unsigned int v9; 
  __int64 v12; 
  FxGlassPieceState *v15; 
  FxGlassDef *v16; 
  float halfThickness; 
  int v26; 
  bool Cracks; 

  _RDI = work;
  work->glassSys = glassSys;
  v9 = 0;
  work->ptCount = 0;
  work->edgeCount = 0;
  work->firstFreeEdge = NULL;
  work->branchStackLevel = 0;
  work->pieceIndex = pieceIndex;
  v12 = pieceIndex;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, [rsp+38h+avgCrackLength]
    vmulss  xmm0, xmm6, cs:__real@3f400000
  }
  work->piecePlace = &glassSys->piecePlaces[v12];
  v15 = &glassSys->pieceStates[v12];
  _RDI->pieceState = v15;
  v16 = &fxWorld.glassGlob.defs[v15->defIndex];
  _RDI->def = v16;
  halfThickness = v16->halfThickness;
  __asm { vmovss  dword ptr [rdi+4F4Ch], xmm0 }
  _RDI->halfThickness = halfThickness;
  __asm { vmovss  dword ptr [rdi+4F50h], xmm6 }
  _RDI->impactDir = *breakDir;
  __asm
  {
    vmovups ymm0, ymmword ptr [r9]
    vmovups ymmword ptr [rdi+4F70h], ymm0
  }
  _RDI->axis.m[2].v[2] = axis->m[2].v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4F8Ch]
    vmulss  xmm3, xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rdi+4F88h]
    vmulss  xmm2, xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdi+4F90h]
    vmulss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  xmm0, cs:__real@bf800000
  }
  v26 = s_glassRandSeed;
  __asm
  {
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm3, xmm4, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm2, xmm2, xmm2
    vcmpless xmm5, xmm2, xmm3
    vblendvps xmm1, xmm0, xmm1, xmm5
    vmovss  dword ptr [rdi+4F94h], xmm1
    vmovss  cs:s_glassCrackAssert.avgCrackLength, xmm6
  }
  s_glassCrackAssert.work = _RDI;
  s_glassCrackAssert.breakOrg = breakOrg;
  s_glassCrackAssert.randSeed = v26;
  SetAssertCallbackHandler(Glass_PrintCrackPieceAssertReproData);
  if ( glass_spam->current.enabled )
    Glass_PrintCrackPieceAssertReproData();
  Glass_MakeOuterPieceLoop(_RDI);
  Glass_MakeHolePieceLoops(_RDI);
  Glass_MakeCrackPieceLoops(_RDI);
  if ( _RDI->loopCount )
  {
    do
      Glass_CalcLoopBounds(_RDI, &_RDI->loops[v9++]);
    while ( v9 < _RDI->loopCount );
  }
  _RDI->breakOrgIndex = Glass_UnpackAndAddVertex(_RDI, breakOrg);
  Cracks = Glass_CreateCracks(_RDI);
  SetAssertCallbackHandler(NULL);
  if ( Cracks )
    Glass_FreePiece(glassSys, pieceIndex);
  else
    Glass_ConsiderBreakingPiece(_RDI, pieceIndex);
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
Glass_CreateCracks
==============
*/
bool Glass_CreateCracks(FxGlassCrackWork *work)
{
  FxGlassCrackEdge *v13; 
  unsigned int v14; 
  unsigned int i1; 
  FxGlassCrackEdge *next; 
  FxGlassCrackEdge *twin; 
  char v48; 
  char v49; 
  unsigned __int8 *v50; 
  bool result; 
  unsigned int branchStackLevel; 
  unsigned int v81; 
  unsigned int v90; 
  __int64 v91; 
  int v97; 
  unsigned int v105; 
  FxGlassCrackEdge *firstEdge; 
  FxGlassCrackEdge *v107; 
  unsigned int loopCount; 
  FxGlassCrackEdge *v109; 
  FxGlassCrackEdge *v110; 
  FxGlassCrackEdge *v111; 
  __int64 v121; 
  __int64 v122; 
  float c; 
  float s; 
  vec2_t outSeedDir; 
  FxGlassShard outShard; 
  FxGlassCrackEdge *inLoops[32]; 
  char v129; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm14
  }
  _RBX = work;
  _RAX = Glass_PickSeedDir(work, &outSeedDir);
  v13 = _RAX;
  v14 = 1;
  __asm { vmovss  xmm14, cs:__real@3f800000 }
  if ( _RAX )
  {
    i1 = _RAX->i1;
    __asm { vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000 }
    _RBX->breakOrgIndex = i1;
    next = _RAX->next;
    __asm
    {
      vmovss  xmm7, dword ptr [rax+0Ch]
      vmovss  xmm6, dword ptr [rax+8]
      vmovaps [rsp+9E8h+var_A8], xmm13
      vmulss  xmm1, xmm7, dword ptr [r15+8]
      vmulss  xmm2, xmm6, dword ptr [r15+8]
      vmulss  xmm0, xmm6, dword ptr [r15+0Ch]
      vsubss  xmm0, xmm1, xmm0; Y
      vmulss  xmm1, xmm7, dword ptr [r15+0Ch]
      vaddss  xmm3, xmm2, xmm1
      vxorps  xmm1, xmm3, xmm11; X
    }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovss  xmm13, cs:__real@40c90fdb }
    twin = v13->twin;
    __asm
    {
      vxorps  xmm12, xmm12, xmm12
      vcmpless xmm1, xmm12, xmm0
      vblendvps xmm1, xmm13, xmm12, xmm1
      vaddss  xmm8, xmm1, xmm0
      vxorps  xmm6, xmm6, xmm11
      vxorps  xmm7, xmm7, xmm11
    }
    if ( twin && twin->next == v13 )
    {
      for ( _RDI = next->next; _RDI->i1 != i1; _RDI = _RDI->next )
        ;
      if ( _RDI == v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2668, ASSERT_TYPE_ASSERT, "(prevEdge != onEdge)", (const char *)&queryFormat, "prevEdge != onEdge") )
        __debugbreak();
      __asm
      {
        vmovss  xmm9, dword ptr [rdi+0Ch]
        vmovss  xmm10, dword ptr [rdi+8]
        vmulss  xmm1, xmm9, dword ptr [rax+8]
        vmulss  xmm0, xmm10, dword ptr [rax+0Ch]
        vmulss  xmm2, xmm10, dword ptr [rax+8]
        vsubss  xmm0, xmm1, xmm0; Y
        vmulss  xmm1, xmm9, dword ptr [rax+0Ch]
        vaddss  xmm2, xmm2, xmm1
        vxorps  xmm1, xmm2, xmm11; X
      }
      *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vcmpless xmm1, xmm12, xmm0
        vblendvps xmm1, xmm13, xmm12, xmm1
        vaddss  xmm2, xmm1, xmm0
        vcomiss xmm8, xmm2
      }
      if ( !(v48 | v49) )
      {
        __asm
        {
          vmovaps xmm8, xmm2
          vxorps  xmm6, xmm10, xmm11
          vxorps  xmm7, xmm9, xmm11
        }
      }
    }
    else
    {
      v50 = (unsigned __int8 *)&next->twin->0;
      if ( v50 )
      {
        _RDI = (unsigned __int8 *)&next->next->0;
        if ( _RDI == v50 )
        {
          for ( ; *_RDI != i1; _RDI = (unsigned __int8 *)*((_QWORD *)_RDI + 3) )
            ;
          if ( _RDI == (unsigned __int8 *)next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2685, ASSERT_TYPE_ASSERT, "(nextEdge != onEdge->next)", (const char *)&queryFormat, "nextEdge != onEdge->next") )
            __debugbreak();
          __asm
          {
            vmovss  xmm5, dword ptr [rdi+8]
            vmovss  xmm2, dword ptr [rdi+0Ch]
            vmulss  xmm0, xmm2, dword ptr [rbp+8]
            vmulss  xmm1, xmm5, dword ptr [rbp+0Ch]
            vmulss  xmm2, xmm2, dword ptr [rbp+0Ch]
            vsubss  xmm0, xmm1, xmm0; Y
            vmulss  xmm1, xmm5, dword ptr [rbp+8]
            vaddss  xmm2, xmm2, xmm1
            vxorps  xmm1, xmm2, xmm11; X
          }
          atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vcmpless xmm1, xmm12, xmm0
            vblendvps xmm1, xmm13, xmm12, xmm1
            vaddss  xmm0, xmm1, xmm0
            vminss  xmm8, xmm0, xmm8
          }
        }
      }
    }
    __asm { vmovaps xmm13, [rsp+9E8h+var_A8] }
    if ( ++s_glassRandSeed == 16361 )
      s_glassRandSeed = 0;
    __asm
    {
      vaddss  xmm1, xmm14, dword ptr [r15+rax*4]
      vmulss  xmm2, xmm1, cs:__real@3ef47644
      vmulss  xmm3, xmm2, xmm8
      vcvttss2si edi, xmm3
    }
    if ( !_EDI )
    {
      __asm { vcomiss xmm8, cs:__real@3f85e842 }
      result = 0;
      goto LABEL_64;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vdivss  xmm0, xmm8, xmm0
    }
  }
  else
  {
    LODWORD(_RAX) = s_glassRandSeed + 1;
    s_glassRandSeed = _RAX;
    if ( (_DWORD)_RAX == 16361 )
    {
      s_glassRandSeed = 0;
      LODWORD(_RAX) = 0;
    }
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+9E8h+outSeedDir+4]
      vmovss  xmm6, dword ptr [rsp+9E8h+outSeedDir]
    }
    _RAX = (int)_RAX;
    _R15 = fx_randomTable;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+rax*4]
      vmulss  xmm1, xmm0, cs:__real@40400000
      vmovss  xmm0, cs:__real@40c90fdb
      vcvttss2si rdi, xmm1
    }
    _EDI = _RDI + 3;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vdivss  xmm0, xmm0, xmm1; radians
    }
  }
  branchStackLevel = _RBX->branchStackLevel;
  _RBX->breakOrgLoop = v13;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  _RBX->branchStackLevel += _EDI;
  v81 = _RBX->branchStackLevel;
  __asm
  {
    vmovss  xmm4, [rsp+9E8h+c]
    vmulss  xmm0, xmm4, cs:__real@3e800000
    vaddss  xmm8, xmm0, cs:__real@3f400000
  }
  if ( _EDI )
  {
    __asm
    {
      vmovss  xmm9, cs:__real@3f000000
      vmovss  xmm11, cs:__real@40600000
      vmovss  xmm12, cs:__real@bf800000
      vaddss  xmm0, xmm8, xmm14
      vmulss  xmm10, xmm0, xmm9
    }
    v90 = branchStackLevel;
    v91 = _EDI;
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm0, xmm7, [rsp+9E8h+s]
        vmulss  xmm2, xmm6, [rsp+9E8h+s]
        vmulss  xmm1, xmm6, xmm4
        vsubss  xmm3, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm4
        vaddss  xmm7, xmm2, xmm1
        vmovss  dword ptr [rsp+9E8h+outSeedDir+4], xmm7
        vmovss  dword ptr [rsp+9E8h+outSeedDir], xmm3
        vmovaps xmm6, xmm3
      }
      if ( v90 >= 0x20 )
      {
        LODWORD(v122) = 32;
        LODWORD(v121) = v90;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2722, ASSERT_TYPE_ASSERT, "(unsigned)( initialBranchStackLevel + angleIter ) < (unsigned)( ( sizeof( *array_counter( work->branchStack ) ) + 0 ) )", "initialBranchStackLevel + angleIter doesn't index ARRAY_COUNT( work->branchStack )\n\t%i not in [0, %i)", v121, v122) )
          __debugbreak();
      }
      v97 = 0;
      _RDI = v90;
      _RBX->branchStack[_RDI].afterEdge = NULL;
      _RBX->branchStack[_RDI].startIndex = _RBX->breakOrgIndex;
      if ( s_glassRandSeed != 16360 )
        v97 = s_glassRandSeed + 1;
      __asm { vaddss  xmm1, xmm11, dword ptr [r15+rax*4] }
      s_glassRandSeed = v97 + 1;
      __asm { vmovss  dword ptr [rbx+rdi*8+4FBCh], xmm1 }
      if ( v97 == 16360 )
        s_glassRandSeed = 0;
      __asm
      {
        vmovaps xmm1, xmm14; cosMax
        vcmpless xmm0, xmm9, dword ptr [r15+rax*4]
        vblendvps xmm2, xmm12, xmm14, xmm0; sign
        vmovaps xmm0, xmm10; cosMin
      }
      Glass_DeflectVectorWithSign(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &outSeedDir, &_RBX->branchStack[v90].dir);
      __asm
      {
        vmovss  dword ptr [rbx+rdi*8+4FC0h], xmm6
        vmovss  dword ptr [rbx+rdi*8+4FC4h], xmm7
      }
      ++v90;
      _RBX->branchStack[_RDI].priorCrackLength = 0.0;
      __asm { vmovss  dword ptr [rbx+rdi*8+4FC8h], xmm8 }
      if ( !--v91 )
        break;
      __asm { vmovss  xmm4, [rsp+9E8h+c] }
    }
    v81 = _RBX->branchStackLevel;
    v14 = 1;
  }
  for ( ; v81 > branchStackLevel; v81 = _RBX->branchStackLevel )
  {
    v105 = v81 - 1;
    _RBX->branchStackLevel = v105;
    if ( v105 >= 0x20 )
    {
      LODWORD(v122) = 32;
      LODWORD(v121) = v105;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1428, ASSERT_TYPE_ASSERT, "(unsigned)( work->branchStackLevel ) < (unsigned)( 32 )", "work->branchStackLevel doesn't index GLASS_CRACK_STACK_SIZE\n\t%i not in [0, %i)", v121, v122) )
        __debugbreak();
    }
    Glass_ProcessCrack(_RBX, &_RBX->branchStack[_RBX->branchStackLevel]);
  }
  firstEdge = _RBX->loops[0].firstEdge;
  v107 = firstEdge;
  while ( v107->twin )
  {
    v107 = v107->next;
    if ( v107 == firstEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1980, ASSERT_TYPE_ASSERT, "(edgeIter != edgeLoop)", (const char *)&queryFormat, "edgeIter != edgeLoop") )
      __debugbreak();
  }
  loopCount = _RBX->loopCount;
  inLoops[0] = v107;
  if ( loopCount > 1 )
  {
    do
    {
      inLoops[v14] = NULL;
      v109 = _RBX->loops[v14].firstEdge;
      v110 = v109;
      while ( v110->twin )
      {
        v111 = v110->next;
        if ( v111->i1 == v110->i0 )
        {
          inLoops[v14] = v110;
          v111 = v110->next;
        }
        v110 = v111;
        if ( v111 == v109 )
        {
          v110 = inLoops[v14];
          goto LABEL_57;
        }
      }
      inLoops[v14] = v110;
LABEL_57:
      if ( !v110 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2002, ASSERT_TYPE_ASSERT, "(loops[loopIter] != 0)", (const char *)&queryFormat, "loops[loopIter] != NULL") )
        __debugbreak();
      loopCount = _RBX->loopCount;
      ++v14;
    }
    while ( v14 < loopCount );
  }
  if ( Glass_ConvertLoopsToPiece(_RBX, inLoops, loopCount, &outShard) )
    Glass_FinalizeShard(_RBX, &outShard);
  result = 1;
LABEL_64:
  _R11 = &v129;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
  return result;
}

/*
==============
Glass_CreatePhysics
==============
*/
void Glass_CreatePhysics(FxGlassSystem *glassSys, unsigned int pieceIndex, bool addImmediate, bool trySpawnDeactived)
{
  FxGlassPieceState *pieceStates; 
  FxGlassPieceDynamics *pieceDynamics; 
  __int64 v20; 
  __int64 v21; 
  unsigned __int16 v25; 
  unsigned __int8 v26; 
  int v27; 
  unsigned __int64 v28; 
  FxGlassGeometryData *v29; 
  signed __int64 v30; 
  __int64 v35; 
  unsigned __int64 v40; 
  __int64 v41; 
  signed __int64 v50; 
  unsigned __int64 v53; 
  FxGlassGeometryData *v54; 
  hknpShape *ShapeConvexHull; 
  hknpShape *v115; 
  unsigned int v124; 
  bool v125; 
  FxGlassDef *v128; 
  int v129; 
  int ref; 
  FxGlassGeometryData *v131; 
  __int64 v132; 
  __int64 v133; 
  __int64 v134; 
  __int64 v135; 
  __int64 v136; 
  FxGlassPieceDynamics *v137; 
  FxGlassPiecePlace *v138; 
  PhysicsAsset *physicsAsset; 
  Physics_InstantiateShapeOverride shapeOverride; 
  vec4_t orientationAsQuat; 
  vec3_t centerOfMass; 
  hkMassProperties massProperties; 
  vec3_t verts[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  pieceStates = glassSys->pieceStates;
  _RCX = glassSys->piecePlaces;
  __asm { vmovaps xmmword ptr [r11-68h], xmm7 }
  pieceDynamics = glassSys->pieceDynamics;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm8
    vmovaps xmmword ptr [r11-88h], xmm9
    vmovaps xmmword ptr [r11-98h], xmm10
  }
  _RDI = 32i64 * pieceIndex;
  __asm { vmovaps xmmword ptr [r11-0A8h], xmm11 }
  v138 = _RCX;
  __asm { vmovss  xmm0, dword ptr [rdi+rcx] }
  v20 = *(&pieceStates->defIndex + _RDI);
  v21 = 5i64 * pieceIndex;
  __asm
  {
    vmovss  dword ptr [rbp+450h+var_438], xmm0
    vmovss  xmm1, dword ptr [rdi+rcx+4]
    vmovss  dword ptr [rbp+450h+var_438+4], xmm1
    vmovss  xmm0, dword ptr [rdi+rcx+8]
    vmovaps xmmword ptr [r11-0B8h], xmm12
    vmovss  dword ptr [rbp+450h+var_438+8], xmm0
    vmovss  xmm1, dword ptr [rdi+rcx+0Ch]
    vmovss  dword ptr [rbp+450h+var_438+0Ch], xmm1
  }
  v135 = _RDI;
  v136 = v21;
  v137 = pieceDynamics;
  v128 = &fxWorld.glassGlob.defs[v20];
  if ( !pieceDynamics[pieceIndex].pendingCreation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 941, ASSERT_TYPE_ASSERT, "(pieceDynamics->pendingCreation)", (const char *)&queryFormat, "pieceDynamics->pendingCreation") )
    __debugbreak();
  if ( pieceIndex >= 0x400000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 944, ASSERT_TYPE_ASSERT, "(pieceIndex < g_PhysicsMaxNumSupportedParticles)", (const char *)&queryFormat, "pieceIndex < g_PhysicsMaxNumSupportedParticles") )
    __debugbreak();
  v25 = truncate_cast<unsigned short,unsigned int>((unsigned __int16)pieceIndex);
  v26 = truncate_cast<unsigned char,unsigned int>(HIWORD(pieceIndex));
  v27 = Physics_MakeRef(Physics_RefSystem_Particles, Physics_RelationshipSystem_None, v26 | 0x40, v25);
  v28 = pieceStates->pad[_RDI + 1];
  ref = v27;
  physicsAsset = (PhysicsAsset *)v128->physicsAsset;
  v129 = v28;
  v29 = &glassSys->geoData[*(unsigned int *)((char *)&pieceStates->geoDataStart + _RDI)];
  if ( (unsigned int)v28 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 952, ASSERT_TYPE_ASSERT, "(vertexCount >= 3)", (const char *)&queryFormat, "vertexCount >= 3") )
    __debugbreak();
  if ( (unsigned int)v28 > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 953, ASSERT_TYPE_ASSERT, "(vertexCount <= 32)", (const char *)&queryFormat, "vertexCount <= GLASS_VERT_PER_BORDER_LIMIT") )
    __debugbreak();
  v30 = v28;
  __asm
  {
    vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm7, cs:__real@3d000000
  }
  _RCX = 120i64 * *(&pieceStates->defIndex + _RDI);
  _RAX = fxWorld.glassGlob.defs;
  v35 = 0i64;
  __asm
  {
    vxorps  xmm12, xmm12, xmm12
    vmovss  xmm10, dword ptr [rcx+rax]
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm9, xmm9, xmm9
  }
  if ( v28 >= 4 )
  {
    __asm { vmovaps xmmword ptr [rsp+550h+var_58+8], xmm6 }
    v131 = v29 + 2;
    v40 = (v28 - 4) >> 2;
    v41 = 12 * v28;
    _RDX = &verts[v28].v[2];
    v132 = -12i64 * v28;
    _RDI = -4i64 - 12 * v28;
    _R13 = 8 - 12 * v28;
    _R15 = 20 - 12 * v28;
    _R10 = 32 - v41;
    _R12 = -8 - v41;
    _R11 = 12 - v41;
    _RSI = 16 - v41;
    v133 = 3 * (2 - v30);
    v50 = 3 - v30;
    _R14 = 28 - v41;
    _R9 = 4 - v41;
    v53 = v40 + 1;
    v134 = 4 * v53;
    v54 = v131;
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [r12+rdx], xmm1
        vxorps  xmm0, xmm0, xmm0
      }
      _RCX = v132;
      __asm
      {
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm6, xmm0, xmm7
        vmovss  dword ptr [rdi+rdx], xmm6
        vmovss  xmm5, dword ptr [r12+rdx]
        vmovss  dword ptr [rcx+rdx], xmm10
      }
      *(_RDX - 2) = *(float *)((char *)_RDX + _R12);
      *(_RDX - 1) = *(float *)((char *)_RDX + _RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rdx]
        vxorps  xmm1, xmm0, xmm11
        vmovss  dword ptr [rdx], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [r9+rdx], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm4, xmm0, xmm7
        vmovss  dword ptr [rdx+r13], xmm4
        vmovss  xmm2, dword ptr [r9+rdx]
        vmovss  dword ptr [r11+rdx], xmm10
      }
      _RDX[1] = *(float *)((char *)_RDX + _R9);
      _RDX[2] = *(float *)((char *)_RDX + _R13);
      __asm
      {
        vmovss  xmm0, dword ptr [r11+rdx]
        vxorps  xmm1, xmm0, xmm11
        vmovss  dword ptr [rdx+0Ch], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rsi+rdx], xmm1
        vxorps  xmm0, xmm0, xmm0
      }
      _RCX = v133;
      __asm
      {
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm3, xmm0, xmm7
        vmovss  dword ptr [r15+rdx], xmm3
        vaddss  xmm0, xmm8, xmm5
        vaddss  xmm1, xmm0, xmm2
        vaddss  xmm5, xmm1, dword ptr [rsi+rdx]
        vmovss  dword ptr [rdx+rcx*4], xmm10
      }
      _RDX[4] = *(float *)((char *)_RDX + _RSI);
      _RDX[5] = *(float *)((char *)_RDX + _R15);
      __asm
      {
        vaddss  xmm2, xmm9, xmm6
        vaddss  xmm0, xmm2, xmm4
        vaddss  xmm4, xmm0, xmm3
        vmovss  xmm0, dword ptr [rdx+rcx*4]
        vxorps  xmm1, xmm0, xmm11
        vmovss  dword ptr [rdx+18h], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [r14+rdx], xmm1
        vmulss  xmm1, xmm0, xmm7
      }
      _RCX = 3 * v50;
      v54 += 4;
      __asm
      {
        vmovss  dword ptr [r10+rdx], xmm1
        vaddss  xmm8, xmm5, dword ptr [r14+rdx]
        vaddss  xmm9, xmm4, xmm1
        vmovss  dword ptr [rdx+rcx*4], xmm10
      }
      _RDX[7] = *(float *)((char *)_RDX + _R14);
      _RDX[8] = *(float *)((char *)_RDX + _R10);
      __asm { vmovss  xmm0, dword ptr [rdx+rcx*4] }
      _RDX += 12;
      __asm
      {
        vxorps  xmm1, xmm0, xmm11
        vmovss  dword ptr [rdx-0Ch], xmm1
      }
      --v53;
    }
    while ( v53 );
    LODWORD(v28) = v129;
    v35 = v134;
    _RDI = v135;
    v30 = v129;
    v21 = v136;
    pieceDynamics = v137;
    __asm { vmovaps xmm6, xmmword ptr [rsp+550h+var_58+8] }
  }
  if ( v35 < v30 )
  {
    _RDX = &verts[v35 + v30].v[2];
    _R10 = -4 - 12 * v30;
    _RBX = -12 * v30;
    _R11 = -8 - 12 * v30;
    do
    {
      _RDX += 3;
      __asm { vxorps  xmm0, xmm0, xmm0 }
      ++v35;
      __asm
      {
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm2, xmm0, xmm7
        vmovss  dword ptr [r11+rdx-0Ch], xmm2
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [r10+rdx-0Ch], xmm1
        vmovss  dword ptr [rbx+rdx-0Ch], xmm10
      }
      *(_RDX - 5) = *(float *)((char *)_RDX + _R11 - 12);
      *(_RDX - 4) = *(float *)((char *)_RDX + _R10 - 12);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rdx-0Ch]
        vaddss  xmm9, xmm9, xmm1
        vxorps  xmm1, xmm0, xmm11
        vmovss  dword ptr [rdx-0Ch], xmm1
        vaddss  xmm8, xmm8, xmm2
      }
    }
    while ( v35 < v30 );
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r15d
    vdivss  xmm2, xmm0, xmm1
    vmulss  xmm1, xmm8, xmm2
    vmulss  xmm0, xmm9, xmm2
    vmovss  dword ptr [rbp+450h+centerOfMass], xmm1
    vmovss  dword ptr [rbp+450h+centerOfMass+4], xmm0
    vmovss  dword ptr [rbp+450h+centerOfMass+8], xmm12
  }
  ShapeConvexHull = Physics_CreateShapeConvexHull(verts, 2 * (int)v28, 0, 0);
  __asm { vmovaps xmm11, [rsp+550h+var_A8+8] }
  v115 = ShapeConvexHull;
  __asm
  {
    vmovaps xmm10, [rsp+550h+var_98+8]
    vmovaps xmm9, [rsp+550h+var_88+8]
    vmovaps xmm8, [rsp+550h+var_78+8]
    vmovaps xmm7, [rsp+550h+var_68+8]
  }
  shape = ShapeConvexHull;
  if ( !ShapeConvexHull )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 971, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    v115 = shape;
  }
  _RAX = glass_piece_mass;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+450h+massProperties.m_volume], xmm12
    vmovss  [rbp+450h+massProperties.m_mass], xmm12
    vmovups ymmword ptr [rbp+450h+massProperties.m_centerOfMass.m_quad], ymm0
    vmovups ymmword ptr [rbp+450h+massProperties.m_inertiaTensor.m_col1.m_quad], ymm0
    vmovss  xmm1, dword ptr [rax+28h]; mass
  }
  Physics_CalculateMassProperties(v115, *(float *)&_XMM1, &massProperties);
  Physics_SetMassPropertiesCenterOfMass(&massProperties, &centerOfMass);
  __asm { vmovaps xmm12, [rsp+550h+var_B8+8] }
  if ( *(&pieceDynamics->physicsInstance + 2 * v21) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 977, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsInstance == 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsInstance == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( *(&pieceDynamics->physicsDetailInstance + 2 * v21) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 978, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsDetailInstance == 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsDetailInstance == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  shapeOverride.customShape = shape;
  shapeOverride.massProperties = &massProperties;
  shapeOverride.physicsAssetAddendum = NULL;
  shapeOverride.shapeOverride = -1;
  shapeOverride.shapeAddendum = -1;
  *(_WORD *)&shapeOverride.overrideMass = 256;
  shapeOverride.overrideTensor = 1;
  *(&pieceDynamics->physicsInstance + 2 * v21) = Physics_InstantiateAsset(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, NULL, physicsAsset, ref, (const vec3_t *)((char *)&v138->frame.origin + _RDI), &orientationAsQuat, 1, addImmediate, trySpawnDeactived, &shapeOverride, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeNone, 0);
  v124 = Physics_InstantiateAsset(PHYSICS_WORLD_ID_CLIENT0_DETAIL, NULL, physicsAsset, ref, (const vec3_t *)((char *)&v138->frame.origin + _RDI), &orientationAsQuat, 1, addImmediate, trySpawnDeactived, &shapeOverride, Physics_InstantiationForceTypeKeyframedAtMost, Physics_InstantiationFilterTypeNone, 0);
  v125 = *(&pieceDynamics->physicsInstance + 2 * v21) == -1;
  *(&pieceDynamics->physicsDetailInstance + 2 * v21) = v124;
  if ( v125 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 986, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( *(&pieceDynamics->physicsDetailInstance + 2 * v21) == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 987, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsDetailInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsDetailInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  Physics_ReleaseShape(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, shape, 0);
  *(&pieceDynamics->pendingCreation + 8 * v21) = 0;
}

/*
==============
Glass_CreatePhysicsFromDeferredData
==============
*/
void Glass_CreatePhysicsFromDeferredData(ParticleDeferredPhysicsGlassCreateData *pDeferredPhysicsGlassCreateData, Physics_WorldId authWorldId)
{
  char v6; 
  char v7; 
  __int64 pieceIndex; 
  FxGlassSystem *glassSys; 
  FxGlassPieceDynamics *pieceDynamics; 
  unsigned int v11; 
  unsigned int physicsInstance; 
  unsigned int m_serialAndIndex; 
  __int64 v14; 
  unsigned int NumRigidBodys; 
  hknpBodyId result; 

  if ( !pDeferredPhysicsGlassCreateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1023, ASSERT_TYPE_ASSERT, "(pDeferredPhysicsGlassCreateData)", (const char *)&queryFormat, "pDeferredPhysicsGlassCreateData") )
    __debugbreak();
  *(double *)&_XMM0 = Physics_GetFixedMemoryPoolUsage(authWorldId);
  _RAX = glass_physics_memory_threshold;
  __asm { vcomiss xmm0, dword ptr [rax+28h] }
  if ( v6 | v7 )
  {
    pieceIndex = pDeferredPhysicsGlassCreateData->pieceIndex;
    glassSys = pDeferredPhysicsGlassCreateData->glassSys;
    pieceDynamics = pDeferredPhysicsGlassCreateData->glassSys->pieceDynamics;
    Glass_CreatePhysics(pDeferredPhysicsGlassCreateData->glassSys, pDeferredPhysicsGlassCreateData->pieceIndex, 0, 0);
    v11 = 0;
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
          LODWORD(v14) = authWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
            __debugbreak();
        }
        if ( physicsInstance == -1 )
        {
          LODWORD(v14) = authWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v14) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(authWorldId - 2) <= 5 )
        {
          LODWORD(v14) = authWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v14) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)authWorldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v14) = authWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v14) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, authWorldId, physicsInstance, v11)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1043, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        Physics_SetRigidBodyLinAngVel(authWorldId, m_serialAndIndex, &pDeferredPhysicsGlassCreateData->vel, &pDeferredPhysicsGlassCreateData->avel);
        ++v11;
      }
      while ( v11 < NumRigidBodys );
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
  unsigned __int64 v15; 
  FxGlassGeometryData *geoData; 
  unsigned int v18; 
  unsigned int supportMask; 
  FxGlassGeometryData *v26; 
  unsigned int v27; 
  unsigned int v50; 
  unsigned int v51; 
  __int64 v52; 
  bool v53; 
  bool v75; 
  bool v76; 
  bool v77; 
  __int64 friction; 
  __int64 angleMin; 
  FxGlassGeometryData *v123; 
  tmat33_t<vec3_t> axis; 
  char v130; 
  void *retaddr; 

  _RAX = &retaddr;
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
  pieceStates = glassSys->pieceStates;
  v15 = pieceIndex;
  _R13 = &glassSys->piecePlaces[v15];
  if ( glassSys->pieceDynamics[pieceIndex].physicsDetailInstance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 862, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsDetailInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsDetailInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  UnitQuatToAxis(&_R13->frame.quat, &axis);
  geoData = glassSys->geoData;
  v18 = 0;
  supportMask = pieceStates[v15].supportMask;
  __asm
  {
    vmovss  xmm11, dword ptr [rbp+90h+axis+14h]
    vmovss  xmm12, dword ptr [rbp+90h+axis+10h]
    vmovss  xmm13, dword ptr [rbp+90h+axis+0Ch]
    vmovss  xmm14, dword ptr [rbp+90h+axis+8]
    vmovss  xmm15, dword ptr [rsp+190h+axis+4]
    vmovss  xmm10, cs:__real@3d000000
  }
  v26 = &geoData[pieceStates[v15].geoDataStart];
  v123 = v26;
  do
  {
    v27 = __lzcnt(supportMask);
    if ( v27 >= 0x20 )
    {
      LODWORD(angleMin) = 32;
      LODWORD(friction) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", friction, angleMin) )
        __debugbreak();
    }
    __asm { vmovss  xmm9, dword ptr [rsp+190h+axis] }
    supportMask &= ~(0x80000000 >> v27);
    _EAX = (__int16)HIWORD(*(_DWORD *)&v26[v27]);
    __asm { vmovd   xmm0, eax }
    _EAX = (__int16)*(_DWORD *)&v26[v27];
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm5, xmm0, xmm10
      vmovd   xmm1, eax
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm4, xmm1, xmm10
      vmulss  xmm0, xmm9, xmm4
      vaddss  xmm2, xmm0, dword ptr [r13+10h]
      vmulss  xmm1, xmm13, xmm5
      vaddss  xmm7, xmm2, xmm1
      vmulss  xmm0, xmm15, xmm4
      vaddss  xmm3, xmm0, dword ptr [r13+14h]
      vmulss  xmm1, xmm12, xmm5
      vmulss  xmm0, xmm14, xmm4
      vaddss  xmm2, xmm0, dword ptr [r13+18h]
      vaddss  xmm8, xmm3, xmm1
      vmulss  xmm1, xmm11, xmm5
      vaddss  xmm6, xmm2, xmm1
    }
    if ( v18 )
    {
      __asm
      {
        vmovss  xmm9, dword ptr [rbp+90h+position+8]
        vcomiss xmm6, xmm9
      }
      if ( v18 == 1 )
      {
        __asm
        {
          vmovss  [rbp+90h+var_E4], xmm7
          vmovss  [rbp+90h+var_E0], xmm8
          vmovss  [rbp+90h+var_DC], xmm6
        }
        v18 = 2;
      }
      else
      {
        __asm { vcomiss xmm6, dword ptr [rbp+90h+position+8] }
      }
      __asm { vmovss  xmm9, dword ptr [rsp+190h+axis] }
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rbp+90h+position], xmm7
        vmovss  dword ptr [rbp+90h+position+4], xmm8
        vmovss  dword ptr [rbp+90h+position+8], xmm6
      }
      v18 = 1;
    }
    v50 = pieceStates[v15].supportMask;
    v51 = (v27 + 1) % pieceStates[v15].vertCount;
    v52 = v51;
    if ( v51 >= 0x20 )
    {
      LODWORD(angleMin) = 32;
      LODWORD(friction) = v51;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", friction, angleMin) )
        __debugbreak();
    }
    v53 = ((0x80000000 >> v52) & v50) == 0;
    v26 = v123;
    if ( v53 )
    {
      _EAX = (__int16)HIWORD(*(_DWORD *)&v123[v52]);
      __asm { vmovd   xmm0, eax }
      _EAX = (__int16)*(_DWORD *)&v123[v52];
      __asm
      {
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm5, xmm0, xmm10
        vmovd   xmm1, eax
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm4, xmm1, xmm10
        vmulss  xmm0, xmm9, xmm4
        vaddss  xmm2, xmm0, dword ptr [r13+10h]
        vmulss  xmm1, xmm13, xmm5
        vaddss  xmm7, xmm2, xmm1
        vmulss  xmm0, xmm15, xmm4
        vaddss  xmm3, xmm0, dword ptr [r13+14h]
        vmulss  xmm1, xmm12, xmm5
        vmulss  xmm0, xmm14, xmm4
        vaddss  xmm2, xmm0, dword ptr [r13+18h]
        vaddss  xmm8, xmm3, xmm1
        vmulss  xmm1, xmm11, xmm5
        vaddss  xmm6, xmm2, xmm1
        vmovss  xmm9, dword ptr [rbp+90h+position+8]
        vcomiss xmm6, xmm9
      }
      if ( v18 == 1 )
      {
        __asm
        {
          vmovss  [rbp+90h+var_E4], xmm7
          vmovss  [rbp+90h+var_E0], xmm8
          vmovss  [rbp+90h+var_DC], xmm6
        }
        v18 = 2;
      }
      else
      {
        __asm { vcomiss xmm6, dword ptr [rbp+90h+position+8] }
      }
    }
  }
  while ( supportMask );
  v75 = v18 < 2;
  v76 = v18 <= 2;
  if ( v18 != 2 )
  {
    v77 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 882, ASSERT_TYPE_ASSERT, "(hingeVertCount == 2)", (const char *)&queryFormat, "hingeVertCount == 2");
    v75 = 0;
    v76 = !v77;
    if ( v77 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rbp+90h+var_E4]
    vsubss  xmm4, xmm0, dword ptr [rbp+90h+position]
    vmovss  xmm1, [rbp+90h+var_E0]
    vsubss  xmm6, xmm1, dword ptr [rbp+90h+position+4]
    vmovss  xmm0, [rbp+90h+var_DC]
    vsubss  xmm5, xmm0, dword ptr [rbp+90h+position+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm10, xmm2, xmm2
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm0, xmm10, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm4, xmm4, xmm2
    vmulss  xmm3, xmm6, xmm2
    vmulss  xmm5, xmm5, xmm2
    vmovss  dword ptr [rsp+190h+direction+4], xmm3
    vmovss  dword ptr [rsp+190h+direction], xmm4
    vmovss  dword ptr [rsp+190h+direction+8], xmm5
    vmovss  xmm0, dword ptr [r13+14h]
    vsubss  xmm1, xmm0, dword ptr [rbp+90h+position+4]
    vmovss  xmm2, dword ptr [r13+10h]
    vsubss  xmm0, xmm2, dword ptr [rbp+90h+position]
    vmovss  xmm2, dword ptr [r13+18h]
    vmulss  xmm3, xmm1, xmm3
    vmulss  xmm1, xmm0, xmm4
    vsubss  xmm0, xmm2, dword ptr [rbp+90h+position+8]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm3, xmm4, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm3, xmm2
  }
  if ( !v75 )
  {
    __asm { vcomiss xmm3, xmm10 }
    if ( v76 )
    {
      __asm
      {
        vandps  xmm5, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm5, cs:__real@3f000000
      }
    }
  }
  pieceStates[v15].supportMask = 0;
  _R11 = &v130;
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
Glass_DeflectVectorWithSign
==============
*/

void __fastcall Glass_DeflectVectorWithSign(double cosMin, double cosMax, double sign, const vec2_t *inDir, vec2_t *outDir)
{
  double v38; 
  double v39; 

  __asm
  {
    vcomiss xmm0, xmm1
    vmovaps [rsp+88h+var_18], xmm6
  }
  _RBX = inDir;
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
    vmovaps xmm7, xmm0
    vcvtss2sd xmm3, xmm6, xmm1
    vmovsd  [rsp+88h+var_48], xmm3
    vcvtss2sd xmm4, xmm7, xmm0
    vmovsd  [rsp+88h+var_50], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1465, ASSERT_TYPE_ASSERT, "( cosMin ) < ( cosMax )", "%s < %s\n\t%g, %g", "cosMin", "cosMax", v38, v39) )
    __debugbreak();
  LODWORD(_RAX) = s_glassRandSeed + 1;
  s_glassRandSeed = _RAX;
  if ( (_DWORD)_RAX == 16361 )
  {
    LODWORD(_RAX) = 0;
    s_glassRandSeed = 0;
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+4]
    vsubss  xmm1, xmm7, xmm6
    vmovaps xmm7, [rsp+88h+var_28]
  }
  _RCX = fx_randomTable;
  _RAX = (int)_RAX;
  __asm { vmovss  xmm0, dword ptr [rcx+rax*4] }
  _RAX = outDir;
  __asm
  {
    vmulss  xmm2, xmm0, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmulss  xmm2, xmm2, xmm1
    vaddss  xmm6, xmm2, xmm6
    vmulss  xmm3, xmm6, xmm6
    vsubss  xmm1, xmm0, xmm3
    vmovss  xmm3, dword ptr [rbx]
    vsqrtss xmm2, xmm1, xmm1
    vmulss  xmm5, xmm2, xmm8
    vmovaps xmm8, [rsp+88h+var_38]
    vmulss  xmm1, xmm6, xmm4
    vmulss  xmm0, xmm5, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm3
    vmovaps xmm6, [rsp+88h+var_18]
    vmulss  xmm0, xmm5, xmm4
    vsubss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rax], xmm1
    vmovss  dword ptr [rax+4], xmm2
  }
}

/*
==============
Glass_DestroyPiece
==============
*/
void Glass_DestroyPiece(FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *impactPos, const vec3_t *impactDir, Glass_BreakData *breakData)
{
  signed __int64 v5; 
  void *v8; 
  unsigned __int16 flags; 
  LocalClientNum_t v17; 
  connstate_t *p_connectionState; 
  __int16 v21; 
  unsigned int pieceStackLevel; 
  unsigned __int16 v30; 
  char v32; 
  char v53; 
  __int64 v58; 
  __int64 v59; 
  int v60; 
  unsigned int v61; 
  bool v62; 
  FxGlassDef *v64; 
  unsigned int v65; 
  __int64 v66; 
  unsigned int v69; 
  FxGlassPieceState *pieceStates; 
  unsigned int v72; 
  __int64 v73; 
  __int64 v79; 
  FxGlassPieceState *v80; 
  FxGlassGeometryData *geoData; 
  __int64 geoDataStart; 
  FxGlassVertex v86; 
  FxGlassPieceState *v87; 
  FxGlassGeometryData *v88; 
  bool *p_valid; 
  int v90; 
  const FxGlassGeometryData *v91; 
  __int64 v92; 
  float fmt; 
  vec3_t *breakDir; 
  __int64 avgCrackLength; 
  float avgCrackLengtha; 
  char v100; 
  FxGlassVertex v101; 
  int quantizedPos[2]; 
  unsigned int v103; 
  int point[2]; 
  const vec3_t *v105; 
  FxGlassDef *v106; 
  vec3_t *impactDira; 
  FxGlassCrackWork work; 
  tmat33_t<vec3_t> axis; 
  FxGlassInitialCrackVert outputVerts[32]; 
  char v113; 

  v8 = alloca(v5);
  __asm
  {
    vmovaps [rsp+5850h+var_40], xmm6
    vmovaps [rsp+5850h+var_50], xmm7
  }
  _RBX = breakData;
  *(_QWORD *)quantizedPos = breakData;
  impactDira = (vec3_t *)impactDir;
  _RDI = impactPos;
  v105 = impactPos;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Glass_DestroyPiece");
  _R12 = glassSys->pieceStates;
  _R14 = pieceIndex;
  *(_QWORD *)point = &glassSys->piecePlaces[_R14];
  _R13 = *(const vec4_t **)point;
  UnitQuatToAxis(*(const vec4_t **)point, &axis);
  v106 = &fxWorld.glassGlob.defs[_R12[_R14].defIndex];
  Glass_ReprojectCrackDecals(glassSys, pieceIndex, impactDira, &axis);
  flags = _R12[_R14].flags;
  if ( (flags & 2) == 0 )
  {
    v17 = LOCAL_CLIENT_0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      p_connectionState = &clientUIActives[0].connectionState;
      do
      {
        if ( (unsigned int)v17 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(avgCrackLength) = 2;
          LODWORD(breakDir) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", breakDir, avgCrackLength) )
            __debugbreak();
        }
        if ( *p_connectionState == CA_ACTIVE )
          FX_MarkGlassDetachAll(v17, pieceIndex);
        ++v17;
        p_connectionState += 110;
      }
      while ( v17 < SLODWORD(cl_maxLocalClients) );
      flags = _R12[_R14].flags;
      _R13 = *(const vec4_t **)point;
      _RDI = v105;
    }
    _RBX = *(Glass_BreakData **)quantizedPos;
  }
  _R12[_R14].flags = flags | 2;
  work.pieceStackLevel = 0;
  work.fringePieceCount = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rbp+5750h+work.fringeAreaX2], xmm6
    vmovss  xmm7, dword ptr [r12+r14+1Ch]
  }
  Glass_GetVertexForPos(glassSys, pieceIndex, _RDI, &axis, quantizedPos);
  v101.x = truncate_cast<short,int>(quantizedPos[0]);
  v21 = truncate_cast<short,int>(quantizedPos[1]);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+5750h+work.impactPos], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+5750h+work.impactPos+4], xmm1
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rbp+5750h+work.impactPos+8], xmm0
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  dword ptr [rbp+5750h+work.playerOrigin], xmm1
    vmovss  xmm1, dword ptr [rbx+10h]
    vmovss  dword ptr [rbp+5750h+work.playerOrigin+4], xmm0
    vmovss  dword ptr [rbp+5750h+work.playerOrigin+8], xmm1
    vmovss  xmm0, dword ptr [r13+1Ch]
  }
  v101.y = v21;
  pieceStackLevel = work.pieceStackLevel;
  __asm { vmovss  [rbp+5750h+work.originalRadius], xmm0 }
  if ( _R12[_R14].vertCount )
    pieceStackLevel = 1;
  work.pieceStackLevel = pieceStackLevel;
  v30 = truncate_cast<unsigned short,unsigned int>(pieceIndex);
  _RCX = impactDira;
  v32 = 1;
  __asm { vmovss  xmm5, dword ptr [rbx+4] }
  work.pieceStack[0] = v30;
  _RAX = glass_shard_maxsize;
  v100 = 1;
  __asm { vmovss  xmm4, dword ptr [rax+28h] }
  _RAX = glass_fringe_maxsize;
  __asm
  {
    vmulss  xmm2, xmm4, cs:__real@40000000
    vmovss  xmm0, dword ptr [rax+28h]
    vmulss  xmm0, xmm0, cs:__real@40000000
    vmovss  [rbp+5750h+work.maxEdgePieceArea], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+28h]
    vdivss  xmm1, xmm5, xmm0
    vmulss  xmm3, xmm1, cs:__real@3fc00000
    vmaxss  xmm0, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmovss  [rbp+5750h+work.maxPieceArea], xmm0
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm6
  }
  if ( !(v53 | v62) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r12+r14+1Ch]
      vxorps  xmm1, xmm1, xmm1
      vdivss  xmm2, xmm0, xmm5
      vcvtsi2ss xmm1, xmm1, dword ptr [rax+28h]
      vmulss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rsp+5850h+fmt], xmm0
    }
    Glass_PlayShatterEffects(glassSys, pieceIndex, &axis, impactDira, fmt);
  }
  LODWORD(v58) = work.pieceStackLevel;
  v59 = 0i64;
  v60 = -1;
  v61 = 0;
  LODWORD(v105) = -1;
  v62 = work.pieceStackLevel == 0;
  if ( work.pieceStackLevel )
  {
    __asm { vmovss  xmm6, cs:__real@41000000 }
    v64 = v106;
    while ( 1 )
    {
      v58 = (unsigned int)(v58 - 1);
      work.pieceStackLevel = v58;
      v65 = work.pieceStack[v58];
      v66 = work.pieceStack[v58];
      if ( v65 != v60 )
        break;
      v103 = ++v61;
      if ( v61 <= 0xA || v61 <= 2 * (unsigned int)glassSys->pieceStates[v65].vertCount )
        goto LABEL_30;
LABEL_21:
      v60 = (int)v105;
LABEL_22:
      v32 = v100;
      v59 = 0i64;
      v62 = (_DWORD)v58 == 0;
      if ( !(_DWORD)v58 )
        goto LABEL_23;
    }
    v103 = 0;
LABEL_30:
    v79 = v66;
    if ( v32 )
    {
      v80 = &glassSys->pieceStates[v79];
      point[0] = v101.x;
      geoData = glassSys->geoData;
      point[1] = v101.y;
      v100 = 0;
      if ( Glass_DoesPieceContainPoint(v80, &geoData[v80->geoDataStart], point) )
      {
        v101.x = truncate_cast<short,int>(point[0]);
        v101.y = truncate_cast<short,int>(point[1]);
        v86 = v101;
      }
      else
      {
        geoDataStart = v80->geoDataStart;
        if ( ++s_glassRandSeed == 16361 )
          s_glassRandSeed = 0;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm0, xmm0, dword ptr [rax+rcx*4]
          vcvttss2si ecx, xmm0
        }
        v86 = (FxGlassVertex)geoData[geoDataStart + _ECX];
        v101 = v86;
      }
      if ( v64->numCrackRings >= 0 )
        Glass_GetVertexPatternForCracks(glassSys, v65, v86, &axis, outputVerts);
    }
    else
    {
      v87 = &glassSys->pieceStates[v79];
      v88 = glassSys->geoData;
      if ( v106->numCrackRings < 0 )
      {
        v92 = v87->geoDataStart;
        if ( ++s_glassRandSeed == 16361 )
          s_glassRandSeed = 0;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm0, xmm0, dword ptr [r9+rcx*4]
          vcvttss2si ecx, xmm0
        }
        v86 = (FxGlassVertex)v88[v92 + _ECX];
        v101 = v86;
      }
      else
      {
        p_valid = &outputVerts[0].valid;
        v90 = 0;
        v91 = &v88[v87->geoDataStart];
        while ( 1 )
        {
          Glass_GetVertexForPos(glassSys, v65, &outputVerts[v90].pos, &axis, quantizedPos);
          if ( *p_valid && Glass_DoesPieceContainPoint(v87, v91, quantizedPos) )
            break;
          ++v90;
          ++v59;
          p_valid += 16;
          if ( v90 >= 32 )
          {
            LODWORD(v58) = work.pieceStackLevel;
            v61 = v103;
            v64 = v106;
            goto LABEL_21;
          }
        }
        v101.x = quantizedPos[0];
        v101.y = quantizedPos[1];
        v86 = v101;
        outputVerts[v59].valid = 0;
      }
      v64 = v106;
    }
    __asm { vmovss  [rsp+5850h+avgCrackLength], xmm6 }
    Glass_CrackPiece(&work, glassSys, v65, &axis, v86, impactDira, avgCrackLengtha);
    LODWORD(v58) = work.pieceStackLevel;
    v61 = v103;
    v60 = v65;
    LODWORD(v105) = v65;
    goto LABEL_22;
  }
LABEL_23:
  __asm
  {
    vmovss  xmm0, [rbp+5750h+work.fringeAreaX2]
    vmulss  xmm1, xmm7, dword ptr [rax+28h]
    vcomiss xmm0, xmm1
  }
  if ( !v62 )
  {
    s_fringePieceSortWork = &work;
    std::_Sort_unchecked<unsigned short *,bool (*)(unsigned short const &,unsigned short const &)>(work.fringePieces, &work.fringePieces[work.fringePieceCount], work.fringePieceCount, CompareFringePieceArea);
    v69 = 0;
    if ( work.fringePieceCount )
    {
      pieceStates = glassSys->pieceStates;
      __asm { vmovss  xmm1, [rbp+5750h+work.fringeAreaX2] }
      do
      {
        v72 = work.fringePieces[v69];
        v73 = work.fringePieces[v69];
        __asm
        {
          vsubss  xmm0, xmm1, dword ptr [rax+rdi+1Ch]
          vmovss  [rbp+5750h+work.fringeAreaX2], xmm0
        }
        pieceStates[v73].supportMask = 0;
        Glass_StartImmediateFall(&work, v72, v72);
        __asm
        {
          vmovss  xmm1, [rbp+5750h+work.fringeAreaX2]
          vmulss  xmm0, xmm7, dword ptr [rax+28h]
          vcomiss xmm1, xmm0
        }
        if ( v53 | v62 )
          break;
        ++v69;
      }
      while ( v69 < work.fringePieceCount );
    }
  }
  Glass_CompactData(glassSys);
  Sys_ProfEndNamedEvent();
  _R11 = &v113;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Glass_DestroySimplePiece
==============
*/
void Glass_DestroySimplePiece(FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *impactPos, const vec3_t *impactDir, const vec3_t *playerOrigin)
{
  signed __int64 v5; 
  void *v7; 
  __int64 v10; 
  const vec4_t *v13; 
  LocalClientNum_t v14; 
  connstate_t *p_connectionState; 
  __int16 v19; 
  __int16 v20; 
  __int16 v22; 
  char v38; 
  int v39; 
  FxGlassPieceState *pieceStates; 
  const FxGlassPieceState *v41; 
  int v42; 
  FxGlassGeometryData *geoData; 
  __int64 geoDataStart; 
  FxGlassVertex v49; 
  FxGlassPieceState *v51; 
  __int64 v52; 
  bool v53; 
  FxCombinedDef *p_crackDecalEffect; 
  float fmt; 
  vec3_t *breakDir; 
  __int64 avgCrackLength; 
  float avgCrackLengtha; 
  int quantizedPos[2]; 
  const vec4_t *v61; 
  tmat33_t<vec3_t> axis; 
  FxGlassCrackWork work; 

  v7 = alloca(v5);
  __asm { vmovaps [rsp+5620h+var_50], xmm6 }
  _RSI = impactDir;
  v10 = 32i64 * pieceIndex;
  _R13 = impactPos;
  v13 = (vec4_t *)((char *)&glassSys->piecePlaces->frame.quat + v10);
  *(_QWORD *)quantizedPos = v10;
  v61 = v13;
  UnitQuatToAxis(v13, &axis);
  v14 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_connectionState = &clientUIActives[0].connectionState;
    do
    {
      if ( (unsigned int)v14 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(avgCrackLength) = 2;
        LODWORD(breakDir) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", breakDir, avgCrackLength) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE )
        FX_MarkGlassDetachAll(v14, pieceIndex);
      ++v14;
      p_connectionState += 110;
    }
    while ( v14 < SLODWORD(cl_maxLocalClients) );
    v10 = *(_QWORD *)quantizedPos;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vmovss  xmm1, dword ptr [r13+4]
    vmovss  dword ptr [rbp+5520h+work.impactPos], xmm0
    vmovss  xmm0, dword ptr [r13+8]
    vmovss  dword ptr [rbp+5520h+work.impactPos+8], xmm0
    vmovss  dword ptr [rbp+5520h+work.impactPos+4], xmm1
  }
  Glass_GetVertexForPos(glassSys, pieceIndex, _R13, &axis, quantizedPos);
  v19 = truncate_cast<short,int>(quantizedPos[0]);
  v20 = truncate_cast<short,int>(quantizedPos[1]);
  _RCX = playerOrigin;
  v22 = v20;
  __asm
  {
    vmovss  xmm1, cs:__real@7f7fffff
    vmovss  xmm2, dword ptr [rsi+4]
    vmovss  xmm3, dword ptr [rsi+8]
  }
  _RAX = (__int64)v61;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm0, dword ptr [rax+1Ch]
    vmovss  [rbp+5520h+work.originalRadius], xmm0
    vmovss  xmm0, dword ptr [rcx]
    vmovss  dword ptr [rbp+5520h+work.playerOrigin], xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rbp+5520h+work.maxPieceArea], xmm1
    vmovss  [rbp+5520h+work.maxEdgePieceArea], xmm1
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  dword ptr [rbp+5520h+work.playerOrigin+8], xmm0
    vmovss  xmm0, dword ptr [rsi]
    vmovss  dword ptr [rbp+5520h+work.playerOrigin+4], xmm1
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm6
  }
  work.pieceStackLevel = 0;
  if ( !(v38 | v53) )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [rsp+5620h+fmt], xmm0
    }
    Glass_PlayShatterEffects(glassSys, pieceIndex, &axis, _RSI, fmt);
  }
  v39 = v19;
  pieceStates = glassSys->pieceStates;
  quantizedPos[0] = v39;
  v41 = (FxGlassPieceState *)((char *)pieceStates + v10);
  v42 = v22;
  geoData = glassSys->geoData;
  quantizedPos[1] = v42;
  if ( Glass_DoesPieceContainPoint(v41, &geoData[v41->geoDataStart], quantizedPos) )
  {
    LOWORD(v61) = truncate_cast<short,int>(quantizedPos[0]);
    WORD1(v61) = truncate_cast<short,int>(quantizedPos[1]);
    v49 = (FxGlassVertex)v61;
  }
  else
  {
    geoDataStart = v41->geoDataStart;
    if ( ++s_glassRandSeed == 16361 )
      s_glassRandSeed = 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, dword ptr [r8+rcx*4]
      vcvttss2si ecx, xmm0
    }
    v49 = (FxGlassVertex)geoData[geoDataStart + _ECX];
  }
  __asm
  {
    vmovss  xmm0, cs:__real@41000000
    vmovss  [rsp+5620h+avgCrackLength], xmm0
  }
  Glass_CrackPiece(&work, glassSys, pieceIndex, &axis, v49, _RSI, avgCrackLengtha);
  Glass_CompactData(glassSys);
  v51 = glassSys->pieceStates;
  if ( (*((_BYTE *)&v51->flags + v10) & 0x48) == 0 )
  {
    v52 = *(&v51->defIndex + v10);
    v53 = fxWorld.glassGlob.defs[v52].crackDecalEffect.particleSystemDef == NULL;
    p_crackDecalEffect = &fxWorld.glassGlob.defs[v52].crackDecalEffect;
    if ( !v53 )
    {
      __asm { vucomiss xmm6, dword ptr [rsi] }
      if ( v53 )
      {
        __asm { vucomiss xmm6, dword ptr [rsi+4] }
        if ( v53 )
          __asm { vucomiss xmm6, dword ptr [rsi+8] }
      }
      Glass_PlayEffectWithMark(p_crackDecalEffect, _R13, _RSI);
    }
  }
  __asm { vmovaps xmm6, [rsp+5620h+var_50] }
}

/*
==============
Glass_DoCrackWalk
==============
*/
bool Glass_DoCrackWalk(FxGlassCrackWork *work, FxGlassCrackWalk *walk)
{
  char v23; 
  unsigned int v28; 
  unsigned int v38; 
  FxGlassCrackEdge *hitEdge; 
  FxGlassCrackEdge *v77; 
  float len; 
  FxGlassCrackEdge *v83; 
  int v86; 
  int v87; 
  FxGlassCrackEdge *frontTail; 
  __int64 branchStackLevel; 
  int v107; 
  int v108; 
  bool result; 
  FxGlassCrackEdge *v117; 
  FxGlassCrackEdge *hitEdgePrev; 
  FxGlassCrackEdge *v119; 
  __int64 v131; 
  __int64 v132; 
  vec2_t maxs; 
  vec2_t mins; 
  vec2_t v; 
  vec2_t outDir; 
  char v138; 
  void *retaddr; 

  _RAX = &retaddr;
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
    vmovaps [rsp+148h+var_D8], xmm15
    vmovss  xmm14, cs:__real@40800000
    vmovss  xmm8, cs:__real@3c23d70a
    vmovss  xmm15, cs:__real@42000000
    vmovss  xmm9, cs:__real@3f000000
    vmovss  xmm12, cs:__real@3ee00000
    vmovss  xmm13, cs:__real@3fc40000
    vmovss  xmm10, cs:__real@3f7746ea
    vmovss  xmm11, cs:__real@3f3504f3
    vmovss  xmm6, cs:__real@3f800000
  }
  _RBP = walk;
  v23 = 0;
  walk->frontHead = NULL;
  walk->backHead = NULL;
  _RBX = work;
  walk->frontTail = NULL;
  walk->backTail = NULL;
  walk->clip.hitEdge = NULL;
  walk->clip.hitAtVertex = 0;
LABEL_2:
  __asm { vmovss  xmm7, cs:__real@bf800000 }
  while ( 1 )
  {
    __asm { vaddss  xmm1, xmm14, dword ptr [rbp+14h] }
    _R15 = _RBP->clip.startIndex;
    __asm { vmovss  dword ptr [rbp+14h], xmm1 }
    v28 = 0;
    _RBP->clip.isBad = 0;
    while ( 1 )
    {
      _RBP->clip.wasDeflected = 0;
      Glass_ClipSegmentWithinEdgeLoop(_RBX, &_RBP->clip, _RBX->loops[0].firstEdge);
      if ( _RBX->loopCount > 1 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rbp+14h]
          vmulss  xmm0, xmm2, dword ptr [rbp+18h]
          vaddss  xmm1, xmm0, dword ptr [rbx+r15*8+3FCh]
          vmulss  xmm0, xmm2, dword ptr [rbp+1Ch]
          vmovss  dword ptr [rsp+148h+v], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbx+r15*8+400h]
          vmovss  dword ptr [rsp+148h+v+4], xmm1
          vmovss  xmm2, dword ptr [rbx+r15*8+3FCh]
          vmovss  dword ptr [rsp+148h+mins], xmm2
          vmovss  xmm0, dword ptr [rbx+r15*8+400h]
          vmovss  dword ptr [rsp+148h+mins+4], xmm0
          vmovss  xmm1, dword ptr [rbx+r15*8+3FCh]
          vmovss  dword ptr [rsp+148h+maxs], xmm1
          vmovss  xmm0, dword ptr [rbx+r15*8+400h]
          vmovss  dword ptr [rsp+148h+maxs+4], xmm0
        }
        AddPointToBounds2D(&v, &mins, &maxs);
        v38 = 1;
        do
        {
          if ( BoundsOverlap2D(&mins, &maxs, &_RBX->loops[v38].mins, &_RBX->loops[v38].maxs) )
            Glass_ClipSegmentWithinEdgeLoop(_RBX, &_RBP->clip, _RBX->loops[v38].firstEdge);
          ++v38;
        }
        while ( v38 < _RBX->loopCount );
      }
      if ( !_RBP->clip.wasDeflected )
        break;
      if ( !_RBP->clip.hitAtVertex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1793, ASSERT_TYPE_ASSERT, "(clip->hitAtVertex)", (const char *)&queryFormat, "clip->hitAtVertex") )
        __debugbreak();
      ++v28;
      _RBP->clip.dir.v[0] = _RBP->clip.deflectDir.v[0];
      _RBP->clip.dir.v[1] = _RBP->clip.deflectDir.v[1];
      __asm
      {
        vaddss  xmm1, xmm8, dword ptr [rbp+34h]
        vmovss  dword ptr [rbp+14h], xmm1
      }
      if ( v28 > _RBX->ptCount )
      {
        _RBP->clip.isBad = 1;
        goto LABEL_17;
      }
    }
    if ( !_RBP->clip.hitEdge )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+14h]
        vsubss  xmm1, xmm0, xmm14
        vmovss  dword ptr [rbp+14h], xmm1
      }
    }
LABEL_17:
    if ( _RBP->clip.isBad )
      goto LABEL_68;
    hitEdge = _RBP->clip.hitEdge;
    if ( hitEdge )
    {
      if ( hitEdge->loopIndex == _RBP->loopIndex && _RBX->loopCount >= 0x20 )
        goto LABEL_68;
    }
    if ( _RBP->clip.hitAtVertex )
    {
      if ( !hitEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1878, ASSERT_TYPE_ASSERT, "(walk->clip.hitEdge)", (const char *)&queryFormat, "walk->clip.hitEdge") )
        __debugbreak();
      _R15 = (unsigned __int64)_RBP->clip.hitEdge->nextFree;
    }
    else
    {
      if ( _RBX->ptCount >= 0xFF )
      {
        LODWORD(v132) = 255;
        LODWORD(v131) = _RBX->ptCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1883, ASSERT_TYPE_ASSERT, "(unsigned)( work->ptCount ) < (unsigned)( ( sizeof( *array_counter( work->pts ) ) + 0 ) )", "work->ptCount doesn't index ARRAY_COUNT( work->pts )\n\t%i not in [0, %i)", v131, v132) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+14h]
        vmulss  xmm0, xmm2, dword ptr [rbp+18h]
      }
      _R15 = _RBX->ptCount;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rbx+rax*8+3FCh]
        vmovss  dword ptr [rbx+r15*8+3FCh], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbp+1Ch]
        vaddss  xmm3, xmm0, dword ptr [rbx+rax*8+400h]
        vmulss  xmm0, xmm1, xmm15
        vaddss  xmm1, xmm0, xmm9
        vxorps  xmm2, xmm2, xmm2
        vroundss xmm2, xmm2, xmm1, 1
        vcvttss2si eax, xmm2
        vmovss  dword ptr [rbx+r15*8+400h], xmm3
      }
      if ( (int)abs32(_EAX) > 0x7FFF )
        goto LABEL_67;
      __asm
      {
        vmulss  xmm0, xmm3, xmm15
        vaddss  xmm1, xmm0, xmm9
        vxorps  xmm2, xmm2, xmm2
        vroundss xmm2, xmm2, xmm1, 1
        vcvttss2si eax, xmm2
      }
      if ( (int)abs32(_EAX) > 0x7FFF )
      {
LABEL_67:
        Com_PrintWarning(1, "Glass_DoCrackWalk: Failed to pack glass vertex, bailing out.\n");
LABEL_68:
        result = 0;
        goto LABEL_69;
      }
      ++_RBX->ptCount;
      __asm
      {
        vmulss  xmm1, xmm15, dword ptr [rbx+r15*8+3FCh]
        vaddss  xmm2, xmm1, xmm9
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm0, xmm0, xmm2, 1
        vcvttss2si ecx, xmm0; val
      }
      _RBX->packedPts[_R15].x = truncate_cast<short,int>(_ECX);
      __asm
      {
        vmulss  xmm1, xmm15, dword ptr [rbx+r15*8+400h]
        vaddss  xmm2, xmm1, xmm9
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm0, xmm0, xmm2, 1
        vcvttss2si ecx, xmm0; val
      }
      _RBX->packedPts[_R15].y = truncate_cast<short,int>(_ECX);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3d000000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rbx+r15*8+3FCh], xmm1
        vmulss  xmm1, xmm0, cs:__real@3d000000
        vmovss  dword ptr [rbx+r15*8+400h], xmm1
      }
    }
    AddPointToBounds2D(&_RBX->pts[_R15].xy, &_RBX->loops[_RBP->loopIndex].mins, &_RBX->loops[_RBP->loopIndex].maxs);
    _RDI = Glass_AllocCrackEdge(_RBX, _RBP->clip.startIndex, _R15, _RBP->loopIndex, 1u);
    _RAX = Glass_GetFreeEdge(_RBX);
    v77 = _RAX;
    _RAX->i0 = _RDI->i1;
    _RAX->i1 = _RDI->i0;
    _RAX->loopIndex = _RDI->loopIndex;
    _RAX->type = _RDI->type;
    _RAX->twin = _RDI;
    len = _RDI->len;
    _RDI->twin = _RAX;
    _RAX->len = len;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+8]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rax+8], xmm1
      vmovss  xmm2, dword ptr [rdi+0Ch]
      vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rax+0Ch], xmm0
    }
    if ( _RBP->frontHead )
    {
      if ( _RBP->frontTail->i1 != _RDI->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1901, ASSERT_TYPE_ASSERT, "(walk->frontTail->i1 == newFrontEdge->i0)", (const char *)&queryFormat, "walk->frontTail->i1 == newFrontEdge->i0") )
        __debugbreak();
      if ( v77->i1 != _RBP->backHead->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1902, ASSERT_TYPE_ASSERT, "(newBackEdge->i1 == walk->backHead->i0)", (const char *)&queryFormat, "newBackEdge->i1 == walk->backHead->i0") )
        __debugbreak();
      _RBP->frontTail->next = _RDI;
      v77->next = _RBP->backHead;
    }
    else
    {
      _RBP->frontHead = _RDI;
      _RBP->backTail = _RAX;
    }
    v83 = _RBP->clip.hitEdge;
    _RBP->frontTail = _RDI;
    _RBP->backHead = v77;
    if ( v83 )
      break;
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+14h]
      vaddss  xmm0, xmm3, dword ptr [rbp+8]
    }
    v86 = s_glassRandSeed;
    ++v23;
    __asm { vmovss  dword ptr [rbp+8], xmm0 }
    if ( _RBX->branchStackLevel != 32 )
    {
      v87 = ++v86;
      if ( v86 == 16361 )
      {
        v86 = 0;
        v87 = 0;
      }
      if ( (int)LOWORD(fx_randomTable[v86]) >> 12 < 1 << v23 )
      {
        v23 = 0;
        s_glassRandSeed = v87 + 1;
        if ( v87 == 16360 )
          s_glassRandSeed = 0;
        __asm
        {
          vmovaps xmm0, xmm11; cosMin
          vmulss  xmm1, xmm12, dword ptr [r12+rax*4]
          vaddss  xmm2, xmm1, xmm13
          vmulss  xmm6, xmm2, xmm3
          vmovss  xmm2, cs:__real@bf800000; sign
          vmovaps xmm1, xmm10; cosMax
        }
        Glass_DeflectVectorWithSign(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, &_RBP->clip.dir, &outDir);
        frontTail = _RBP->frontTail;
        __asm { vmovss  xmm7, dword ptr [rbp+8] }
        if ( _RBX->branchStackLevel >= 0x20 )
        {
          LODWORD(v132) = 32;
          LODWORD(v131) = _RBX->branchStackLevel;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1411, ASSERT_TYPE_ASSERT, "(unsigned)( work->branchStackLevel ) < (unsigned)( 32 )", "work->branchStackLevel doesn't index GLASS_CRACK_STACK_SIZE\n\t%i not in [0, %i)", v131, v132) )
            __debugbreak();
        }
        branchStackLevel = _RBX->branchStackLevel;
        __asm
        {
          vmovss  xmm1, dword ptr [rsp+148h+outDir]
          vmovss  xmm0, dword ptr [rsp+148h+outDir+4]
        }
        _RCX = branchStackLevel;
        _RBX->branchStackLevel = branchStackLevel + 1;
        _RBX->branchStack[_RCX].afterEdge = frontTail;
        _RBX->branchStack[_RCX].startIndex = frontTail->i1;
        LODWORD(branchStackLevel) = s_glassRandSeed;
        __asm
        {
          vmovss  dword ptr [rbx+rcx*8+4FB4h], xmm1
          vmovss  dword ptr [rbx+rcx*8+4FB8h], xmm0
          vmovss  dword ptr [rbx+rcx*8+4FBCh], xmm6
          vmovss  dword ptr [rbx+rcx*8+4FC0h], xmm1
          vmovss  dword ptr [rbx+rcx*8+4FC4h], xmm0
        }
        LODWORD(branchStackLevel) = branchStackLevel + 1;
        _RBX->branchStack[_RCX].deflectLimit = 0.96592581;
        s_glassRandSeed = branchStackLevel;
        __asm { vmovss  dword ptr [rbx+rcx*8+4FCCh], xmm7 }
        _RBP->clip.startIndex = _R15;
        if ( (_DWORD)branchStackLevel == 16361 )
          s_glassRandSeed = 0;
        __asm
        {
          vmovss  xmm6, cs:__real@3f800000
          vmovaps xmm0, xmm11; cosMin
          vmulss  xmm1, xmm12, dword ptr [r12+rax*4]
          vaddss  xmm2, xmm1, xmm13
          vmulss  xmm3, xmm2, dword ptr [rbp+14h]
          vmovaps xmm2, xmm6; sign
          vmovaps xmm1, xmm10; cosMax
          vmovss  dword ptr [rbp+14h], xmm3
        }
        Glass_DeflectVectorWithSign(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, &_RBP->clip.dir, &_RBP->clip.dir);
        _RBP->clip.baseDir.v[0] = _RBP->clip.dir.v[0];
        _RBP->clip.baseDir.v[1] = _RBP->clip.dir.v[1];
        _RBP->clip.deflectLimit = 0.96592581;
        goto LABEL_2;
      }
    }
    _RBP->clip.baseDir.v[0] = _RBP->clip.dir.v[0];
    v107 = 0;
    _RBP->clip.baseDir.v[1] = _RBP->clip.dir.v[1];
    _RBP->clip.deflectLimit = 0.70710677;
    _RBP->clip.startIndex = _R15;
    if ( v86 != 16360 )
      v107 = v86 + 1;
    v108 = v107 + 1;
    s_glassRandSeed = v108;
    __asm
    {
      vmulss  xmm1, xmm12, dword ptr [r12+rax*4]
      vaddss  xmm2, xmm1, xmm13
      vmulss  xmm3, xmm2, xmm3
      vmovss  dword ptr [rbp+14h], xmm3
    }
    if ( v108 == 16361 )
      s_glassRandSeed = 0;
    __asm
    {
      vmovaps xmm1, xmm10; cosMax
      vcmpless xmm0, xmm9, dword ptr [r12+rax*4]
      vblendvps xmm2, xmm7, xmm6, xmm0; sign
      vmovaps xmm0, xmm11; cosMin
    }
    Glass_DeflectVectorWithSign(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, &_RBP->clip.dir, &_RBP->clip.dir);
  }
  if ( _RBP->clip.hitAtVertex )
  {
    _RBP->clippedEdge = _RBP->clip.hitEdgePrev;
    result = 1;
  }
  else
  {
    v117 = Glass_AllocCrackEdge(_RBX, v83->i0, _R15, v83->loopIndex, v83->type);
    hitEdgePrev = _RBP->clip.hitEdgePrev;
    _RBP->clippedEdge = v117;
    if ( hitEdgePrev->i1 != v117->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1924, ASSERT_TYPE_ASSERT, "(walk->clip.hitEdgePrev->i1 == walk->clippedEdge->i0)", (const char *)&queryFormat, "walk->clip.hitEdgePrev->i1 == walk->clippedEdge->i0") )
      __debugbreak();
    _RBP->clip.hitEdgePrev->next = _RBP->clippedEdge;
    _RBP->clippedEdge->next = _RBP->clip.hitEdge;
    _RBP->clip.hitEdge->i0 = truncate_cast<unsigned char,unsigned int>(_R15);
    Glass_SetCrackEdgeDelta(_RBX, _RBP->clip.hitEdge);
    v119 = _RBP->clip.hitEdge;
    if ( v119->twin )
      Glass_SplitTwin(_RBX, _RBP->clippedEdge, v119);
    result = 1;
  }
LABEL_69:
  _R11 = &v138;
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
    vmovaps xmm15, [rsp+148h+var_D8]
  }
  return result;
}

/*
==============
Glass_DoesLoopContainLoop
==============
*/
bool Glass_DoesLoopContainLoop(const FxGlassCrackWork *work, const FxGlassCrackLoop *outerLoop, const FxGlassCrackLoop *innerLoop)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vcomiss xmm0, dword ptr [r8+8]
  }
  return 0;
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
  bool v20; 
  bool v21; 
  bool result; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _R14 = end;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  _R15 = start;
  __asm { vmovaps xmmword ptr [rax-48h], xmm8 }
  _RBP = work;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0E8h+var_88], xmm12
    vmovaps [rsp+0E8h+var_98], xmm13
  }
  if ( !edgePrev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1495, ASSERT_TYPE_ASSERT, "(edgePrev)", (const char *)&queryFormat, "edgePrev") )
    __debugbreak();
  if ( !edge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1496, ASSERT_TYPE_ASSERT, "(edge)", (const char *)&queryFormat, "edge") )
    __debugbreak();
  i1 = edgePrev->i1;
  i0 = edge->i0;
  v20 = i1 < edge->i0;
  if ( i1 != edge->i0 )
  {
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1497, ASSERT_TYPE_ASSERT, "( edgePrev->i1 ) == ( edge->i0 )", "%s == %s\n\t%i, %i", "edgePrev->i1", "edge->i0", i1, edge->i0);
    v20 = 0;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, dword ptr [r15]
    vmovss  xmm6, dword ptr [r14]
    vmovss  xmm11, dword ptr [r15+4]
  }
  _RAX = i0;
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vmovss  xmm0, dword ptr [rbp+rax*8+3FCh]
    vmovss  xmm1, dword ptr [rbp+rax*8+400h]
    vsubss  xmm12, xmm6, xmm0
    vsubss  xmm8, xmm7, xmm0
    vmovss  xmm0, dword ptr [r14+4]
    vmulss  xmm2, xmm8, dword ptr [rbx+0Ch]
    vsubss  xmm13, xmm0, xmm1
    vsubss  xmm9, xmm11, xmm1
    vmulss  xmm1, xmm12, dword ptr [rbx+0Ch]
    vsubss  xmm5, xmm0, xmm11
    vmulss  xmm0, xmm13, dword ptr [rbx+8]
    vsubss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rbx+8]
    vsubss  xmm0, xmm2, xmm1
    vmulss  xmm3, xmm3, xmm0
    vcomiss xmm3, xmm10
    vsubss  xmm6, xmm6, xmm7
  }
  if ( v20 )
  {
    _RAX = edge->i1;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rax*8+3FCh]
      vmovss  xmm2, dword ptr [rbp+rax*8+400h]
      vsubss  xmm1, xmm0, xmm7
      vmulss  xmm3, xmm1, xmm5
      vsubss  xmm0, xmm2, xmm11
      vmulss  xmm1, xmm0, xmm6
      vsubss  xmm4, xmm3, xmm1
      vmulss  xmm0, xmm8, xmm5
      vmulss  xmm2, xmm6, xmm9
      vsubss  xmm1, xmm2, xmm0
      vmulss  xmm3, xmm4, xmm1
      vcomiss xmm3, xmm10
    }
    if ( v20 )
      goto LABEL_14;
  }
  __asm
  {
    vmulss  xmm1, xmm12, dword ptr [rdi+0Ch]
    vmulss  xmm0, xmm13, dword ptr [rdi+8]
    vmulss  xmm2, xmm8, dword ptr [rdi+0Ch]
    vsubss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rdi+8]
    vsubss  xmm0, xmm2, xmm1
    vmulss  xmm3, xmm3, xmm0
    vcomiss xmm3, xmm10
  }
  if ( !v20 )
    goto LABEL_15;
  _RAX = edgePrev->i0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+rax*8+3FCh]
    vmovss  xmm2, dword ptr [rbp+rax*8+400h]
    vsubss  xmm1, xmm0, xmm7
    vmulss  xmm3, xmm1, xmm5
    vsubss  xmm0, xmm2, xmm11
    vmulss  xmm1, xmm0, xmm6
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm8, xmm5
    vmulss  xmm2, xmm9, xmm6
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm3, xmm4, xmm1
    vcomiss xmm3, xmm10
  }
  if ( v20 )
LABEL_14:
    result = 1;
  else
LABEL_15:
    result = 0;
  _R11 = &v86;
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
  return result;
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
  FxGlassSystem *v16; 
  FxGlassPiecePlace *piecePlaces; 
  FxGlassPieceState *pieceStates; 
  __int64 v23; 
  FxGlassDef *v34; 
  FxGlassSystem *v58; 
  unsigned __int16 flags; 
  size_t v60; 
  __int64 v61; 
  int v62; 

  pieceIndex = work->pieceIndex;
  _RBX = shard;
  vertCount_low = LOBYTE(shard->loops[0].vertCount);
  v6 = truncate_cast<unsigned char,unsigned int>(shard->holeDataCount);
  v7 = truncate_cast<unsigned char,unsigned int>(_RBX->crackDataCount);
  v8 = truncate_cast<unsigned char,unsigned int>(_RBX->fanDataCount);
  if ( v6 + v7 - _RBX->crackCount - _RBX->loopCount + vertCount_low + 1 > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1343, ASSERT_TYPE_ASSERT, "(totalVertCount <= 128)", (const char *)&queryFormat, "totalVertCount <= GLASS_VERT_PER_PIECE_LIMIT") )
    __debugbreak();
  v9 = Glass_AllocPiece(work->glassSys, vertCount_low, v6, v7, v8);
  v10 = v9;
  if ( v9 != 0xFFFF )
  {
    glassSys = work->glassSys;
    vertCount = _RBX->loops[0].vertCount;
    _RDI = (unsigned int)v10;
    _RBP = glassSys->pieceStates;
    _R12 = glassSys->piecePlaces;
    if ( _RBP[_RDI].vertCount != vertCount )
    {
      v62 = vertCount;
      LODWORD(v61) = _RBP[_RDI].vertCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1352, ASSERT_TYPE_SANITY, "( newPieceState->vertCount ) == ( shard->loops[0].vertCount )", "newPieceState->vertCount == shard->loops[0].vertCount\n\t%i, %i", v61, v62) )
        __debugbreak();
    }
    v16 = work->glassSys;
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+8]
      vmovss  xmm4, dword ptr [rbx+0Ch]
      vmulss  xmm0, xmm3, dword ptr [rsi+4F70h]
    }
    piecePlaces = v16->piecePlaces;
    pieceStates = v16->pieceStates;
    __asm { vmulss  xmm1, xmm4, dword ptr [rsi+4F7Ch] }
    v23 = pieceIndex;
    __asm
    {
      vaddss  xmm2, xmm0, dword ptr [rdx+rcx+10h]
      vaddss  xmm0, xmm2, xmm1
      vmulss  xmm1, xmm3, dword ptr [rsi+4F74h]
      vmovss  dword ptr [rdi+r12+10h], xmm0
      vaddss  xmm2, xmm1, dword ptr [rdx+rcx+14h]
      vmulss  xmm0, xmm4, dword ptr [rsi+4F80h]
      vaddss  xmm1, xmm2, xmm0
      vmulss  xmm0, xmm3, dword ptr [rsi+4F78h]
      vmovss  dword ptr [rdi+r12+14h], xmm1
      vaddss  xmm2, xmm0, dword ptr [rdx+rcx+18h]
      vmulss  xmm1, xmm4, dword ptr [rsi+4F84h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rdi+r12+18h], xmm0
    }
    _R12[_RDI].nextFree = piecePlaces[pieceIndex].nextFree;
    _R12[_RDI].frame.quat.v[1] = piecePlaces[pieceIndex].frame.quat.v[1];
    _R12[_RDI].frame.quat.v[2] = piecePlaces[pieceIndex].frame.quat.v[2];
    _R12[_RDI].frame.quat.v[3] = piecePlaces[pieceIndex].frame.quat.v[3];
    _R12[_RDI].radius = _RBX->radius;
    if ( (pieceStates[pieceIndex].flags & 1) == 0 || (v34 = &fxWorld.glassGlob.defs[pieceStates[pieceIndex].defIndex], v34->materialShattered == v34->material) )
    {
      _EAX = _RBX->packedCentroid.x;
      __asm { vmovd   xmm3, eax }
      _EAX = _RBX->packedCentroid.y;
      __asm
      {
        vcvtdq2ps xmm3, xmm3
        vmulss  xmm0, xmm3, dword ptr [rcx+4]
        vaddss  xmm2, xmm0, dword ptr [rdx+r8]
        vmovd   xmm4, eax
        vcvtdq2ps xmm4, xmm4
        vmulss  xmm1, xmm4, dword ptr [rcx+8]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+rbp], xmm0
        vmulss  xmm1, xmm3, dword ptr [rcx+0Ch]
        vaddss  xmm2, xmm1, dword ptr [rdx+r8+4]
        vmulss  xmm0, xmm4, dword ptr [rcx+10h]
        vaddss  xmm4, xmm2, xmm0
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@3d000000
        vdivss  xmm1, xmm0, dword ptr [rcx+28h]
        vaddss  xmm2, xmm1, dword ptr [rdx+r8]
        vmovss  dword ptr [rdi+rbp], xmm2
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3d000000
        vdivss  xmm2, xmm1, dword ptr [rcx+28h]
        vaddss  xmm4, xmm2, dword ptr [rdx+r8+4]
      }
    }
    __asm { vmovss  dword ptr [rdi+rbp+4], xmm4 }
    v58 = work->glassSys;
    _RBP[_RDI].supportMask = _RBX->supportMask;
    _RBP[_RDI].initIndex = pieceStates[v23].initIndex;
    _RBP[_RDI].defIndex = pieceStates[v23].defIndex;
    flags = pieceStates[v23].flags;
    v60 = 4i64 * _RBX->geoDataUsed;
    _RBP[_RDI].flags = flags & 0xFFF9 | 2;
    _RBP[_RDI].areaX2 = _RBX->areaX2;
    v58->halfThickness[v10] = v58->halfThickness[pieceIndex];
    memcpy_0(&v58->geoData[_RBP[_RDI].geoDataStart], _RBX->geoData, v60);
    Glass_SetupDynamics(work, _RBX, v10, pieceIndex, NULL);
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
  int v11; 
  FxGlassCrackEdge *v13; 
  FxGlassCrackEdge *firstEdge; 
  bool v54; 
  FxGlassCrackEdge *v55; 
  FxGlassCrackEdge *result; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  loopCount = work->loopCount;
  v11 = 0;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = work;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  v13 = NULL;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
  }
  _RSI = i1;
  __asm { vmovss  xmm5, cs:__real@7f7fffff }
  if ( loopCount )
  {
    __asm
    {
      vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm11, cs:__real@80000000
      vmovss  xmm8, cs:__real@3f800000
      vmovss  xmm6, [rsp+98h+arg_0]
      vmovss  xmm7, [rsp+98h+arg_0]
      vxorps  xmm10, xmm10, xmm10
    }
    while ( 1 )
    {
      firstEdge = work->loops[--loopCount].firstEdge;
      do
      {
        if ( firstEdge->i1 == i0 )
        {
          if ( v11 )
          {
            if ( v11 == 1 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+rsi*8+3FCh]
                vsubss  xmm4, xmm0, dword ptr [rdi+r11*8+3FCh]
                vmovss  xmm1, dword ptr [rdi+rsi*8+400h]
                vsubss  xmm5, xmm1, dword ptr [rdi+r11*8+400h]
                vmulss  xmm0, xmm4, xmm4
                vmulss  xmm2, xmm5, xmm5
                vaddss  xmm1, xmm2, xmm0
                vsqrtss xmm3, xmm1, xmm1
                vcmpless xmm0, xmm3, xmm11
                vblendvps xmm0, xmm3, xmm8, xmm0
                vdivss  xmm1, xmm8, xmm0
                vmulss  xmm6, xmm1, xmm5
                vmulss  xmm0, xmm6, dword ptr [r10+0Ch]
                vmulss  xmm7, xmm1, xmm4
                vmulss  xmm1, xmm7, dword ptr [r10+8]
                vmulss  xmm2, xmm7, dword ptr [r10+0Ch]
                vaddss  xmm1, xmm1, xmm0
                vmulss  xmm0, xmm6, dword ptr [r10+8]
                vsubss  xmm4, xmm1, xmm8
                vsubss  xmm1, xmm2, xmm0
                vcmpless xmm0, xmm10, xmm1
                vxorps  xmm3, xmm4, xmm9
                vblendvps xmm5, xmm3, xmm4, xmm0
              }
            }
            __asm
            {
              vmulss  xmm1, xmm7, dword ptr [rdx+8]
              vmulss  xmm0, xmm6, dword ptr [rdx+0Ch]
              vmulss  xmm2, xmm7, dword ptr [rdx+0Ch]
              vaddss  xmm1, xmm1, xmm0
              vmulss  xmm0, xmm6, dword ptr [rdx+8]
              vsubss  xmm4, xmm1, xmm8
              vsubss  xmm1, xmm2, xmm0
              vcmpless xmm0, xmm10, xmm1
              vxorps  xmm3, xmm4, xmm9
              vblendvps xmm2, xmm3, xmm4, xmm0
            }
            v54 = v11 == 0 || v11 == -1;
            ++v11;
            v55 = firstEdge;
            __asm
            {
              vcomiss xmm5, xmm2
              vmovss  [rsp+98h+arg_0], xmm2
            }
            if ( v54 )
              v55 = v13;
            v13 = v55;
            __asm { vminss  xmm5, xmm2, xmm5 }
          }
          else
          {
            v13 = firstEdge;
            v11 = 1;
          }
        }
        firstEdge = firstEdge->next;
      }
      while ( firstEdge != work->loops[loopCount].firstEdge );
      if ( v13 )
        break;
      if ( !loopCount )
        goto LABEL_15;
    }
    result = v13;
  }
  else
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 390, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "inconceivable") )
      __debugbreak();
    result = NULL;
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
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
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RSI = impactPos;
  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  if ( !quantizedPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2915, ASSERT_TYPE_ASSERT, "(quantizedPos)", (const char *)&queryFormat, "quantizedPos") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm7, xmm0, dword ptr [rcx+rax+10h]
    vsubss  xmm5, xmm1, dword ptr [rcx+rax+14h]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm6, xmm0, dword ptr [rcx+rax+18h]
    vmulss  xmm0, xmm7, dword ptr [rdi]
    vmulss  xmm1, xmm5, dword ptr [rdi+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+8]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, cs:__real@42000000
    vaddss  xmm1, xmm2, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm1, 1
    vcvttss2si eax, xmm0
  }
  *quantizedPos = _EAX;
  __asm
  {
    vmulss  xmm0, xmm7, dword ptr [rdi+0Ch]
    vmulss  xmm1, xmm5, dword ptr [rdi+10h]
    vmovaps xmm7, [rsp+58h+var_28]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+14h]
    vmovaps xmm6, [rsp+58h+var_18]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, cs:__real@42000000
    vaddss  xmm3, xmm2, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm3, 1
    vcvttss2si eax, xmm1
  }
  quantizedPos[1] = _EAX;
}

/*
==============
Glass_GetVertexPatternForCracks
==============
*/
void Glass_GetVertexPatternForCracks(FxGlassSystem *glassSys, unsigned int pieceIndex, FxGlassVertex impactVertex, const tmat33_t<vec3_t> *axis, FxGlassInitialCrackVert *outputVerts)
{
  int v9; 
  __int16 x; 
  int v15; 
  int numCrackRings; 
  int v45; 
  __int16 y; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RAX = glassSys->piecePlaces;
  v9 = 0;
  __asm { vmovaps ymm0, cs:__ymm@3f3504f33f3504f33f800000000000003f3504f3bf3504f300000000bf800000 }
  x = impactVertex.x;
  _R14 = pieceIndex;
  __asm
  {
    vmovups [rsp+108h+var_A8], ymm0
    vmovaps ymm0, cs:__ymm@bf3504f3bf3504f3bf80000000000000bf3504f33f3504f3000000003f800000
    vmovups [rsp+108h+var_88], ymm0
    vmovss  xmm0, dword ptr [r14+rax+1Ch]
  }
  v15 = 0;
  y = impactVertex.y;
  __asm { vmulss  xmm6, xmm0, dword ptr [rax+28h] }
  numCrackRings = fxWorld.glassGlob.defs[glassSys->pieceStates[_R14].defIndex].numCrackRings;
  if ( numCrackRings > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2979, ASSERT_TYPE_ASSERT, "( numRings ) <= ( 4 )", "%s <= %s\n\t%i, %i", "numRings", "GLASS_MAX_CRACK_RINGS", fxWorld.glassGlob.defs[glassSys->pieceStates[_R14].defIndex].numCrackRings, 4) )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, cs:__real@3d000000
    vmovss  xmm5, cs:__real@40000000
  }
  _R8 = &outputVerts->pos.v[1];
  do
  {
    if ( v9 >= numCrackRings )
      break;
    *((_BYTE *)_R8 + 8) = 1;
    ++v15;
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rsp+rcx*8+108h+var_A8+4]
      vmulss  xmm1, xmm6, dword ptr [rsp+rcx*8+108h+var_A8]
      vcvttss2si eax, xmm0
    }
    _EAX = (__int16)(y + _EAX);
    __asm
    {
      vmovd   xmm0, eax
      vcvttss2si eax, xmm1
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, xmm7
    }
    _EAX = (__int16)(x + _EAX);
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm3, xmm0, xmm7
      vmulss  xmm1, xmm3, dword ptr [r15]
      vaddss  xmm2, xmm1, dword ptr [r14+rdx+10h]
      vmulss  xmm0, xmm4, dword ptr [r15+0Ch]
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [r8-4], xmm1
      vmulss  xmm0, xmm3, dword ptr [r15+4]
      vaddss  xmm2, xmm0, dword ptr [r14+rdx+14h]
      vmulss  xmm1, xmm4, dword ptr [r15+10h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [r8], xmm0
      vmulss  xmm1, xmm3, dword ptr [r15+8]
      vaddss  xmm2, xmm1, dword ptr [r14+rdx+18h]
      vmulss  xmm0, xmm4, dword ptr [r15+14h]
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [r8+4], xmm1
    }
    _R8 += 4;
    if ( !(v15 % 8) )
      __asm { vmulss  xmm6, xmm6, xmm5 }
    v45 = v9 + 1;
    if ( v15 % 8 )
      v45 = v9;
    v9 = v45;
  }
  while ( v15 < 32 );
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Glass_InertiaScale
==============
*/

float __fastcall Glass_InertiaScale(double areaX2)
{
  char v6; 
  char v7; 

  __asm
  {
    vmovss  xmm2, cs:__real@45000000; max
    vmovss  xmm1, cs:__real@43000000; min
    vmovaps [rsp+48h+var_18], xmm6
  }
  areaX2 = I_fclamp(*(float *)&areaX2, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm6, xmm0
  }
  if ( v6 | v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
    __debugbreak();
  __asm
  {
    vmovaps xmm1, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm2, xmm0, xmm1
    vrsqrtss xmm2, xmm2, xmm2
    vmulss  xmm0, xmm2, cs:__real@413504f3
  }
  return *(float *)&_XMM0;
}

/*
==============
Glass_MakeCrackPieceLoops
==============
*/
void Glass_MakeCrackPieceLoops(FxGlassCrackWork *work)
{
  const FxGlassPieceState *pieceState; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int ptCount; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  FxGlassVertex v17; 
  unsigned int v18; 
  unsigned __int8 v25; 
  unsigned int loopCount; 
  FxGlassCrackEdge *ExistingEdgeBeforeNewEdge; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  FxGlassCrackEdge *v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int v35; 
  __int64 v36; 
  __int64 v37; 
  unsigned int v38; 
  FxGlassCrackEdge *v39; 
  float len; 
  __int64 *p_next; 
  unsigned __int8 v47; 
  unsigned __int8 v48; 
  __int64 v49; 
  unsigned __int8 v50; 
  unsigned __int8 i0; 
  unsigned __int8 i1; 
  unsigned int v53; 
  FxGlassCrackEdge *v54; 
  unsigned int loopIndex; 
  unsigned int v56; 
  __int64 v57; 
  FxGlassCrackEdge *firstEdge; 
  FxGlassCrackEdge *v60; 
  __int64 v61; 
  FxGlassCrackEdge *v65; 
  FxGlassCrackEdge *v66; 
  FxGlassCrackEdge *v67; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  float v73; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  int crackDataCount; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 *v87; 
  FxGlassCrackEdge *v88; 
  __int64 v89; 
  void *retaddr; 
  unsigned int v93; 
  unsigned int v94; 
  unsigned int v95; 
  FxGlassCrackEdge *v96; 

  _R11 = &retaddr;
  _RDI = work;
  pieceState = work->pieceState;
  crackDataCount = pieceState->crackDataCount;
  if ( pieceState->crackDataCount )
  {
    v7 = 0;
    v8 = (__int64)&_RDI->glassSys->geoData[pieceState->geoDataStart + pieceState->vertCount + pieceState->holeDataCount];
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm6
      vmovss  xmm6, cs:__real@3d000000
      vmovaps xmmword ptr [r11-68h], xmm7
      vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    v86 = v8;
    while ( 1 )
    {
      ptCount = _RDI->ptCount;
      v12 = 0;
      v13 = v7;
      v14 = v7 + 1;
      v89 = v13;
      v95 = v14;
      v94 = ptCount;
      v15 = *(unsigned __int16 *)(v8 + 4 * v13);
      v93 = v15;
      if ( *(_WORD *)(v8 + 4 * v13) )
      {
        v16 = v14;
        do
        {
          v17 = *(FxGlassVertex *)(v8 + 4i64 * (v12 + v16));
          v18 = _RDI->ptCount;
          LODWORD(v96) = v17;
          if ( v18 >= 0xFF )
          {
            LODWORD(v80) = 255;
            LODWORD(v79) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( work->ptCount ) < (unsigned)( ( sizeof( *array_counter( work->pts ) ) + 0 ) )", "work->ptCount doesn't index ARRAY_COUNT( work->pts )\n\t%i not in [0, %i)", v79, v80) )
              __debugbreak();
            v8 = v86;
          }
          _RCX = _RDI->ptCount;
          ++v12;
          __asm { vxorps  xmm0, xmm0, xmm0 }
          _RDI->ptCount = _RCX + 1;
          _RDI->packedPts[_RCX] = v17;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm6
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmovss  dword ptr [rdi+rcx*8+3FCh], xmm1
            vmulss  xmm1, xmm0, xmm6
            vmovss  dword ptr [rdi+rcx*8+400h], xmm1
          }
        }
        while ( v12 < v15 );
        ptCount = v94;
      }
      v25 = *(_BYTE *)(v8 + 4 * v13 + 2);
      if ( v25 == 0xFF )
      {
        loopCount = _RDI->loopCount;
        ExistingEdgeBeforeNewEdge = NULL;
        v88 = NULL;
        v28 = 1;
        v29 = ptCount;
      }
      else
      {
        v28 = 0;
        v29 = v25;
        if ( v15 )
          v30 = ptCount;
        else
          v30 = *(unsigned __int8 *)(v8 + 4 * v13 + 3);
        ExistingEdgeBeforeNewEdge = Glass_FindExistingEdgeBeforeNewEdge(_RDI, v25, v30);
        v88 = ExistingEdgeBeforeNewEdge;
        loopCount = ExistingEdgeBeforeNewEdge->loopIndex;
      }
      v31 = v93;
      v32 = NULL;
      v87 = (__int64 *)&v96;
      v33 = 0i64;
      v96 = NULL;
      v85 = 0i64;
      v84 = 0i64;
      if ( v28 >= v93 )
      {
        p_next = (__int64 *)&v96;
      }
      else
      {
        v34 = 0i64;
        v35 = v28 + ptCount;
        v36 = 0i64;
        v37 = v93 - v28;
        do
        {
          v38 = v29;
          v29 = v35;
          v39 = Glass_AllocCrackEdge(_RDI, v38, v35, loopCount, 1u);
          _RDX = (__int64)_RDI->firstFreeEdge;
          _RBX = v39;
          if ( _RDX )
          {
            _RDI->firstFreeEdge = *(FxGlassCrackEdge **)_RDX;
          }
          else
          {
            if ( _RDI->edgeCount >= 0x200 )
            {
              LODWORD(v80) = 512;
              LODWORD(v79) = _RDI->edgeCount;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( work->edgeCount ) < (unsigned)( ( sizeof( *array_counter( work->edges ) ) + 0 ) )", "work->edgeCount doesn't index ARRAY_COUNT( work->edges )\n\t%i not in [0, %i)", v79, v80) )
                __debugbreak();
            }
            _RDX = (__int64)&_RDI->edges[_RDI->edgeCount++];
          }
          *(_BYTE *)_RDX = _RBX->i1;
          *(_BYTE *)(_RDX + 1) = _RBX->i0;
          *(_BYTE *)(_RDX + 2) = _RBX->loopIndex;
          *(_BYTE *)(_RDX + 3) = _RBX->type;
          *(_QWORD *)(_RDX + 16) = _RBX;
          len = _RBX->len;
          _RBX->twin = (FxGlassCrackEdge *)_RDX;
          *(float *)(_RDX + 4) = len;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+8]
            vxorps  xmm1, xmm0, xmm7
            vmovss  dword ptr [rdx+8], xmm1
            vmovss  xmm2, dword ptr [rbx+0Ch]
          }
          *v87 = (__int64)_RBX;
          p_next = (__int64 *)&_RBX->next;
          v87 = p_next;
          __asm
          {
            vxorps  xmm0, xmm2, xmm7
            vmovss  dword ptr [rdx+0Ch], xmm0
          }
          *(_QWORD *)(_RDX + 24) = v36;
          v36 = _RDX;
          if ( v34 )
            _RDX = v34;
          ++v35;
          v34 = _RDX;
          --v37;
        }
        while ( v37 );
        v32 = v96;
        v33 = _RDX;
        ExistingEdgeBeforeNewEdge = v88;
        v85 = v36;
        ptCount = v94;
        v84 = _RDX;
        v31 = v93;
      }
      v47 = *(_BYTE *)(v86 + 4 * v89 + 2);
      v48 = *(_BYTE *)(v86 + 4 * v89 + 3);
      if ( v47 == 0xFF )
      {
        if ( v48 != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 610, ASSERT_TYPE_ASSERT, "(crack->endVertIndex == 0xff)", (const char *)&queryFormat, "crack->endVertIndex == GLASS_VERT_INDEX_NONE") )
          __debugbreak();
        if ( _RDI->loopCount >= 0x20 )
        {
          LODWORD(v80) = 32;
          LODWORD(v79) = _RDI->loopCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 611, ASSERT_TYPE_ASSERT, "(unsigned)( work->loopCount ) < (unsigned)( ( sizeof( *array_counter( work->loops ) ) + 0 ) )", "work->loopCount doesn't index ARRAY_COUNT( work->loops )\n\t%i not in [0, %i)", v79, v80) )
            __debugbreak();
        }
        if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 612, ASSERT_TYPE_ASSERT, "(frontHead)", (const char *)&queryFormat, "frontHead") )
          __debugbreak();
        if ( !v85 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 613, ASSERT_TYPE_ASSERT, "(backHead)", (const char *)&queryFormat, "backHead") )
          __debugbreak();
        *v87 = v85;
        v49 = (__int64)v96;
        *(_QWORD *)(v33 + 24) = v96;
        _RDI->loops[_RDI->loopCount++].firstEdge = (FxGlassCrackEdge *)v49;
      }
      else
      {
        if ( v48 != 0xFF )
        {
          v53 = ptCount + v31 - 1;
          if ( !v31 )
            v53 = v47;
          v54 = Glass_FindExistingEdgeBeforeNewEdge(_RDI, v48, v53);
          if ( v88->loopIndex != loopCount )
          {
            LODWORD(v82) = loopCount;
            LODWORD(v81) = v88->loopIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 632, ASSERT_TYPE_ASSERT, "( afterEdge->loopIndex ) == ( loopIndex )", "%s == %s\n\t%i, %i", "afterEdge->loopIndex", "loopIndex", v81, v82) )
              __debugbreak();
          }
          if ( v54->loopIndex == loopCount )
          {
            LODWORD(v82) = loopCount;
            LODWORD(v81) = v54->loopIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 633, ASSERT_TYPE_ASSERT, "( beforeEdge->loopIndex ) != ( loopIndex )", "%s != %s\n\t%i, %i", "beforeEdge->loopIndex", "loopIndex", v81, v82) )
              __debugbreak();
          }
          loopIndex = v54->loopIndex;
          if ( loopCount < loopIndex )
          {
            v56 = loopCount;
            loopCount = v54->loopIndex;
            goto LABEL_62;
          }
          v56 = v54->loopIndex;
          if ( v32 )
          {
            v57 = v84;
            *p_next = v85;
            v70 = (__int64)v96;
            *(_QWORD *)(v84 + 24) = v96;
            if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 517, ASSERT_TYPE_ASSERT, "(edgeLoop)", (const char *)&queryFormat, "edgeLoop") )
              __debugbreak();
            v71 = v70;
            do
            {
              *(_BYTE *)(v71 + 2) = loopIndex;
              v71 = *(_QWORD *)(v71 + 24);
            }
            while ( v71 != v70 );
          }
          else
          {
LABEL_62:
            v57 = v84;
          }
          _RSI = 3i64 * loopCount;
          firstEdge = _RDI->loops[loopCount].firstEdge;
          if ( !firstEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 517, ASSERT_TYPE_ASSERT, "(edgeLoop)", (const char *)&queryFormat, "edgeLoop") )
            __debugbreak();
          v60 = firstEdge;
          do
          {
            v60->loopIndex = v56;
            v60 = v60->next;
          }
          while ( v60 != firstEdge );
          v61 = --_RDI->loopCount;
          if ( (_DWORD)v61 != loopCount )
          {
            _RCX = 3 * v61;
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi+rcx*8+4C18h]
              vmovups xmmword ptr [rdi+rsi*8+4C18h], xmm0
              vmovsd  xmm1, qword ptr [rdi+rcx*8+4C28h]
              vmovsd  qword ptr [rdi+rsi*8+4C28h], xmm1
            }
            v65 = _RDI->loops[loopCount].firstEdge;
            if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 517, ASSERT_TYPE_ASSERT, "(edgeLoop)", (const char *)&queryFormat, "edgeLoop") )
              __debugbreak();
            v66 = v65;
            do
            {
              v66->loopIndex = loopCount;
              v66 = v66->next;
            }
            while ( v66 != v65 );
          }
          v67 = Glass_AllocCrackEdge(_RDI, v53, *(unsigned __int8 *)(v86 + 4 * v89 + 3), v56, 1u);
          _RDX = (__int64)_RDI->firstFreeEdge;
          _RBX = v67;
          if ( _RDX )
          {
            _RDI->firstFreeEdge = *(FxGlassCrackEdge **)_RDX;
          }
          else
          {
            if ( _RDI->edgeCount >= 0x200 )
            {
              LODWORD(v80) = 512;
              LODWORD(v79) = _RDI->edgeCount;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( work->edgeCount ) < (unsigned)( ( sizeof( *array_counter( work->edges ) ) + 0 ) )", "work->edgeCount doesn't index ARRAY_COUNT( work->edges )\n\t%i not in [0, %i)", v79, v80) )
                __debugbreak();
            }
            _RDX = (__int64)&_RDI->edges[_RDI->edgeCount++];
          }
          v72 = _RDX;
          *(_BYTE *)_RDX = _RBX->i1;
          if ( v57 )
            v72 = v57;
          *(_BYTE *)(_RDX + 1) = _RBX->i0;
          *(_BYTE *)(_RDX + 2) = _RBX->loopIndex;
          *(_BYTE *)(_RDX + 3) = _RBX->type;
          *(_QWORD *)(_RDX + 16) = _RBX;
          v73 = _RBX->len;
          _RBX->twin = (FxGlassCrackEdge *)_RDX;
          *(float *)(_RDX + 4) = v73;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+8]
            vxorps  xmm1, xmm0, xmm7
            vmovss  dword ptr [rdx+8], xmm1
            vmovss  xmm2, dword ptr [rbx+0Ch]
          }
          *v87 = (__int64)_RBX;
          __asm
          {
            vxorps  xmm0, xmm2, xmm7
            vmovss  dword ptr [rdx+0Ch], xmm0
          }
          *(_QWORD *)(_RDX + 24) = v85;
          *(_QWORD *)(v72 + 24) = v88->next;
          v88->next = v96;
          _RBX->next = v54->next;
          v54->next = (FxGlassCrackEdge *)_RDX;
          goto LABEL_90;
        }
        v50 = *(_BYTE *)(v33 + 1);
        i0 = ExistingEdgeBeforeNewEdge->next->i0;
        if ( v50 != i0 )
        {
          LODWORD(v82) = i0;
          LODWORD(v81) = v50;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 622, ASSERT_TYPE_ASSERT, "( backTail->i1 ) == ( afterEdge->next->i0 )", "%s == %s\n\t%i, %i", "backTail->i1", "afterEdge->next->i0", v81, v82) )
            __debugbreak();
        }
        i1 = ExistingEdgeBeforeNewEdge->i1;
        if ( i1 != v32->i0 )
        {
          LODWORD(v82) = v32->i0;
          LODWORD(v81) = i1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 623, ASSERT_TYPE_ASSERT, "( afterEdge->i1 ) == ( frontHead->i0 )", "%s == %s\n\t%i, %i", "afterEdge->i1", "frontHead->i0", v81, v82) )
            __debugbreak();
        }
        *p_next = v85;
        *(_QWORD *)(v33 + 24) = ExistingEdgeBeforeNewEdge->next;
        ExistingEdgeBeforeNewEdge->next = v96;
      }
LABEL_90:
      v7 = v93 + v95;
      v8 = v86;
      if ( v93 + v95 == crackDataCount )
      {
        __asm
        {
          vmovaps xmm7, [rsp+0F8h+var_68]
          vmovaps xmm6, [rsp+0F8h+var_58]
        }
        return;
      }
    }
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
  __int64 v5; 
  unsigned int v6; 
  unsigned int ptCount; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  FxGlassVertex v13; 
  unsigned __int8 v20; 
  FxGlassCrackEdge *ExistingEdgeBeforeNewEdge; 
  FxGlassCrackEdge *next; 
  FxGlassCrackEdge *v23; 
  FxGlassCrackEdge **v24; 
  __int64 v25; 
  unsigned int v26; 
  FxGlassCrackEdge *v27; 
  FxGlassCrackEdge *v28; 
  __int64 loopCount; 
  unsigned int v30; 
  FxGlassCrackLoop *p_next; 
  __int64 v32; 
  unsigned int v33; 
  FxGlassCrackEdge *v34; 
  FxGlassCrackEdge *v35; 
  __int64 v36; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  int holeDataCount; 
  __int64 v43; 

  _RDI = work;
  pieceState = work->pieceState;
  holeDataCount = pieceState->holeDataCount;
  if ( pieceState->holeDataCount )
  {
    v5 = (__int64)&_RDI->glassSys->geoData[pieceState->geoDataStart + pieceState->vertCount];
    __asm { vmovaps [rsp+0A8h+var_58], xmm6 }
    v6 = 0;
    __asm { vmovss  xmm6, cs:__real@3d000000 }
    v43 = v5;
    do
    {
      if ( _RDI->loopCount >= 0x20 )
      {
        LODWORD(v39) = 32;
        LODWORD(v38) = _RDI->loopCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 456, ASSERT_TYPE_ASSERT, "(unsigned)( work->loopCount ) < (unsigned)( ( sizeof( *array_counter( work->loops ) ) + 0 ) )", "work->loopCount doesn't index ARRAY_COUNT( work->loops )\n\t%i not in [0, %i)", v38, v39) )
          __debugbreak();
      }
      ptCount = _RDI->ptCount;
      v9 = 0;
      v10 = v6;
      v11 = v6 + 1;
      v40 = v10;
      v12 = *(unsigned __int16 *)(v5 + 4 * v10);
      if ( *(_WORD *)(v5 + 4 * v10) )
      {
        do
        {
          v13 = *(FxGlassVertex *)(v5 + 4i64 * (v9 + v11));
          if ( _RDI->ptCount >= 0xFF )
          {
            LODWORD(v39) = 255;
            LODWORD(v38) = _RDI->ptCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( work->ptCount ) < (unsigned)( ( sizeof( *array_counter( work->pts ) ) + 0 ) )", "work->ptCount doesn't index ARRAY_COUNT( work->pts )\n\t%i not in [0, %i)", v38, v39) )
              __debugbreak();
          }
          _RCX = _RDI->ptCount;
          ++v9;
          __asm { vxorps  xmm0, xmm0, xmm0 }
          _RDI->ptCount = _RCX + 1;
          _RDI->packedPts[_RCX] = v13;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm6
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmovss  dword ptr [rdi+rcx*8+3FCh], xmm1
            vmulss  xmm1, xmm0, xmm6
            vmovss  dword ptr [rdi+rcx*8+400h], xmm1
          }
        }
        while ( v9 < v12 );
        v10 = v40;
      }
      v20 = *(_BYTE *)(v5 + 4 * v10 + 2);
      if ( v20 == 0xFF )
      {
        loopCount = _RDI->loopCount;
        v30 = ptCount;
        p_next = &_RDI->loops[loopCount];
        if ( v12 != 1 )
        {
          v32 = v12 - 1;
          do
          {
            v33 = v30++;
            v34 = Glass_AllocCrackEdge(_RDI, v33, v30, _RDI->loopCount, 1u);
            p_next->firstEdge = v34;
            p_next = (FxGlassCrackLoop *)&v34->next;
            --v32;
          }
          while ( v32 );
          LODWORD(loopCount) = _RDI->loopCount;
        }
        v35 = Glass_AllocCrackEdge(_RDI, v30, ptCount, loopCount, 1u);
        p_next->firstEdge = v35;
        v36 = _RDI->loopCount;
        v35->next = _RDI->loops[_RDI->loopCount].firstEdge;
        if ( !Glass_IsEdgeLoopBackwards(_RDI, _RDI->loops[v36].firstEdge) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 505, ASSERT_TYPE_ASSERT, "(Glass_IsEdgeLoopBackwards( work, work->loops[work->loopCount].firstEdge ))", (const char *)&queryFormat, "Glass_IsEdgeLoopBackwards( work, work->loops[work->loopCount].firstEdge )") )
          __debugbreak();
        ++_RDI->loopCount;
      }
      else
      {
        if ( v20 >= _RDI->ptCount )
        {
          LODWORD(v39) = _RDI->ptCount;
          LODWORD(v38) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 467, ASSERT_TYPE_ASSERT, "(unsigned)( hole->touchVert ) < (unsigned)( work->ptCount )", "hole->touchVert doesn't index work->ptCount\n\t%i not in [0, %i)", v38, v39) )
            __debugbreak();
        }
        ExistingEdgeBeforeNewEdge = Glass_FindExistingEdgeBeforeNewEdge(_RDI, *(unsigned __int8 *)(v5 + 4 * v10 + 2), ptCount);
        next = ExistingEdgeBeforeNewEdge->next;
        v23 = Glass_AllocCrackEdge(_RDI, *(unsigned __int8 *)(v43 + 4 * v10 + 2), ptCount, ExistingEdgeBeforeNewEdge->loopIndex, 1u);
        ExistingEdgeBeforeNewEdge->next = v23;
        v24 = &v23->next;
        if ( v12 != 1 )
        {
          v25 = v12 - 1;
          do
          {
            v26 = ptCount++;
            v27 = Glass_AllocCrackEdge(_RDI, v26, ptCount, ExistingEdgeBeforeNewEdge->loopIndex, 1u);
            *v24 = v27;
            v24 = &v27->next;
            --v25;
          }
          while ( v25 );
          v10 = v40;
        }
        v28 = Glass_AllocCrackEdge(_RDI, ptCount, *(unsigned __int8 *)(v43 + 4 * v10 + 2), ExistingEdgeBeforeNewEdge->loopIndex, 1u);
        *v24 = v28;
        v28->next = next;
        if ( Glass_IsEdgeLoopBackwards(_RDI, _RDI->loops[_RDI->loopCount - 1].firstEdge) != (_RDI->loopCount != 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 487, ASSERT_TYPE_ASSERT, "(Glass_IsEdgeLoopBackwards( work, work->loops[work->loopCount - 1].firstEdge ) == (work->loopCount != 1))", (const char *)&queryFormat, "Glass_IsEdgeLoopBackwards( work, work->loops[work->loopCount - 1].firstEdge ) == (work->loopCount != 1)") )
          __debugbreak();
      }
      v5 = v43;
      v6 = v12 + v11;
    }
    while ( v6 != holeDataCount );
    __asm { vmovaps xmm6, [rsp+0A8h+var_58] }
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
  unsigned int v4; 
  __int64 geoDataStart; 
  unsigned int vertCount; 
  FxGlassSystem *glassSys; 
  FxGlassGeometryData *v9; 
  __int64 v11; 
  FxGlassVertex vert; 
  const FxGlassCrackEdge **p_firstEdge; 
  FxGlassCrackLoop *loops; 
  unsigned int v22; 
  unsigned int supportMask; 
  FxGlassCrackEdge *v24; 
  unsigned int v25; 
  FxGlassCrackEdge *v26; 
  const FxGlassCrackEdge *v27; 
  __int64 v28; 
  __int64 v29; 

  pieceState = work->pieceState;
  v4 = 0;
  _RDI = work;
  geoDataStart = pieceState->geoDataStart;
  vertCount = pieceState->vertCount;
  glassSys = work->glassSys;
  work->ptCount = 0;
  v9 = &glassSys->geoData[geoDataStart];
  if ( vertCount )
  {
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm6
      vmovss  xmm6, cs:__real@3d000000
    }
    v11 = vertCount;
    do
    {
      vert = v9->vert;
      if ( _RDI->ptCount >= 0xFF )
      {
        LODWORD(v29) = 255;
        LODWORD(v28) = _RDI->ptCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( work->ptCount ) < (unsigned)( ( sizeof( *array_counter( work->pts ) ) + 0 ) )", "work->ptCount doesn't index ARRAY_COUNT( work->pts )\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      _RCX = _RDI->ptCount;
      ++v9;
      __asm { vxorps  xmm0, xmm0, xmm0 }
      _RDI->ptCount = _RCX + 1;
      _RDI->packedPts[_RCX] = vert;
      __asm
      {
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rdi+rcx*8+3FCh], xmm1
        vmulss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rdi+rcx*8+400h], xmm1
      }
      --v11;
    }
    while ( v11 );
    __asm { vmovaps xmm6, [rsp+78h+var_38] }
  }
  _RDI->loopCount = 1;
  p_firstEdge = (const FxGlassCrackEdge **)&_RDI->loops[0].firstEdge;
  loops = _RDI->loops;
  v22 = vertCount - 1;
  if ( v22 )
  {
    do
    {
      supportMask = pieceState->supportMask;
      if ( v4 >= 0x20 )
      {
        LODWORD(v29) = 32;
        LODWORD(v28) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      v24 = Glass_AllocCrackEdge(_RDI, v4, v4 + 1, 0, ((0x80000000 >> v4) & supportMask) == 0);
      loops->firstEdge = v24;
      ++v4;
      loops = (FxGlassCrackLoop *)&v24->next;
    }
    while ( v4 < v22 );
    p_firstEdge = (const FxGlassCrackEdge **)&_RDI->loops[0].firstEdge;
  }
  v25 = pieceState->supportMask;
  if ( v4 >= 0x20 )
  {
    LODWORD(v29) = 32;
    LODWORD(v28) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v28, v29) )
      __debugbreak();
  }
  v26 = Glass_AllocCrackEdge(_RDI, v4, 0, 0, ((0x80000000 >> v4) & v25) == 0);
  loops->firstEdge = v26;
  v27 = *p_firstEdge;
  v26->next = (FxGlassCrackEdge *)*p_firstEdge;
  if ( Glass_IsEdgeLoopBackwards(_RDI, v27) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 424, ASSERT_TYPE_ASSERT, "(!Glass_IsEdgeLoopBackwards( work, work->loops[0].firstEdge ))", (const char *)&queryFormat, "!Glass_IsEdgeLoopBackwards( work, work->loops[0].firstEdge )") )
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
  unsigned int loopCount; 
  unsigned int v13; 
  FxGlassCrackEdge *firstEdge; 
  FxGlassCrackEdge *v15; 
  FxGlassCrackEdge **v16; 
  FxGlassCrackEdge *v17; 
  FxGlassCrackEdge *next; 
  FxGlassCrackLoop *outerLoop; 
  FxGlassCrackEdge *loops[32]; 

  _RSI = work;
  v4 = 1i64;
  v5 = &work->loops[otherPieceLoopIndex];
  outerLoop = &work->loops[work->loopCount];
  loops[0] = outerLoop->firstEdge;
  v6 = 0;
  v7 = 1;
  if ( Glass_DoesLoopContainLoop(work, outerLoop, v5) )
    v6 = 1;
  if ( _RSI->loopCount > 1 )
  {
    do
    {
      if ( v7 == otherPieceLoopIndex || (_R14 = &_RSI->loops[v7], !Glass_DoesLoopContainLoop(_RSI, outerLoop, _R14)) || v6 && Glass_DoesLoopContainLoop(_RSI, v5, &_RSI->loops[v7]) )
      {
        ++v7;
      }
      else
      {
        loops[v4] = _R14->firstEdge;
        v4 = (unsigned int)(v4 + 1);
        _RCX = 3i64 * --_RSI->loopCount;
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi+rcx*8+4C18h]
          vmovups xmmword ptr [r14], xmm0
          vmovsd  xmm1, qword ptr [rsi+rcx*8+4C28h]
          vmovsd  qword ptr [r14+10h], xmm1
        }
      }
      loopCount = _RSI->loopCount;
    }
    while ( v7 < loopCount );
    v13 = 1;
    if ( (_DWORD)v4 != 1 && loopCount > 1 )
    {
      do
      {
        firstEdge = _RSI->loops[v13].firstEdge;
        if ( firstEdge->loopIndex != v13 )
        {
          if ( !firstEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 517, ASSERT_TYPE_ASSERT, "(edgeLoop)", (const char *)&queryFormat, "edgeLoop") )
            __debugbreak();
          v15 = firstEdge;
          do
          {
            v15->loopIndex = v13;
            v15 = v15->next;
          }
          while ( v15 != firstEdge );
        }
        ++v13;
      }
      while ( v13 < _RSI->loopCount );
    }
  }
  Glass_MakePiece(_RSI, loops, v4);
  if ( (_DWORD)v4 )
  {
    v16 = loops;
    do
    {
      if ( !*v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 270, ASSERT_TYPE_ASSERT, "(loops[loopIter])", (const char *)&queryFormat, "loops[loopIter]") )
        __debugbreak();
      v17 = *v16;
      do
      {
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 274, ASSERT_TYPE_ASSERT, "(edge)", (const char *)&queryFormat, "edge") )
          __debugbreak();
        if ( !v17->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 275, ASSERT_TYPE_ASSERT, "(edge->next)", (const char *)&queryFormat, "edge->next") )
          __debugbreak();
        next = v17->next;
        v17->dir = (vec2_t)-1i64;
        v17->twin = (FxGlassCrackEdge *)-1i64;
        v17->next = (FxGlassCrackEdge *)-1i64;
        v17->nextFree = _RSI->firstFreeEdge;
        _RSI->firstFreeEdge = v17;
        v17 = next;
      }
      while ( next && next != *v16 );
      ++v16;
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
  FxGlassCrackEdge *v13; 
  unsigned int v16; 
  __int64 v17; 
  FxGlassCrackPoint *inOutBreakOrg; 
  bool v21; 
  bool v22; 
  FxGlassCrackEdge *firstEdge; 
  FxGlassCrackEdge *v30; 
  FxGlassCrackEdge *result; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  v13 = NULL;
  __asm
  {
    vmovss  xmm6, cs:__real@7f7fffff
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  v16 = 0;
  v17 = work->ptCount - 1;
  *outSeedDir = 0i64;
  __asm
  {
    vmovaps [rsp+0E8h+var_A8], xmm15
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm15, xmm15, xmm15
  }
  inOutBreakOrg = &work->pts[v17];
  v21 = 0;
  v22 = work->loopCount == 0;
  if ( !work->loopCount )
    goto LABEL_14;
  __asm
  {
    vmovaps [rsp+0E8h+var_28], xmm7
    vmovaps [rsp+0E8h+var_48], xmm9
    vmovaps [rsp+0E8h+var_58], xmm10
    vmovaps [rsp+0E8h+var_68], xmm11
    vmovaps [rsp+0E8h+var_78], xmm12
    vmovaps [rsp+0E8h+var_88], xmm13
    vmovaps [rsp+0E8h+var_98], xmm14
    vmovss  xmm14, cs:__real@3f800000
  }
  do
  {
    __asm
    {
      vmovaps xmm4, xmm8
      vmovaps xmm3, xmm8
    }
    firstEdge = work->loops[v16].firstEdge;
    _RCX = firstEdge;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  xmm1, dword ptr [rdi+4]
      }
      v30 = _RCX;
      _RCX = _RCX->next;
      __asm
      {
        vmovss  xmm11, dword ptr [rcx+8]
        vmovss  xmm13, dword ptr [rcx+4]
        vsubss  xmm9, xmm0, dword ptr [r9+rax*8+3FCh]
        vsubss  xmm10, xmm1, dword ptr [r9+rax*8+400h]
        vmulss  xmm1, xmm10, dword ptr [rcx+0Ch]
        vmulss  xmm2, xmm10, xmm10
        vmulss  xmm0, xmm9, xmm9
        vaddss  xmm7, xmm2, xmm0
        vmulss  xmm2, xmm13, cs:__real@3f000000
        vmulss  xmm0, xmm11, xmm9
        vaddss  xmm5, xmm1, xmm0
        vsubss  xmm12, xmm5, xmm2
        vandps  xmm0, xmm12, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vsubss  xmm1, xmm2, xmm0
        vcomiss xmm1, xmm8
      }
      if ( v22 )
        goto LABEL_18;
      __asm
      {
        vmulss  xmm0, xmm5, xmm5
        vsubss  xmm3, xmm7, xmm0
        vcomiss xmm3, xmm14
        vmovaps xmm4, xmm5
      }
      if ( !v21 )
      {
LABEL_18:
        __asm { vcomiss xmm1, cs:__real@40800000 }
        if ( v21 )
        {
          __asm
          {
            vmulss  xmm2, xmm5, cs:__real@40000000
            vcmpless xmm0, xmm8, xmm12
            vblendvps xmm1, xmm8, xmm13, xmm0
            vsubss  xmm0, xmm1, xmm2
            vmovaps xmm4, xmm1
            vmulss  xmm1, xmm0, xmm1
            vaddss  xmm3, xmm1, xmm7
          }
        }
      }
      __asm { vcomiss xmm6, xmm3 }
      if ( !v22 )
      {
        __asm
        {
          vxorps  xmm2, xmm4, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm0, xmm11, xmm2
          vaddss  xmm1, xmm0, xmm9
          vmovss  dword ptr [rdx], xmm1
          vmulss  xmm0, xmm2, dword ptr [rcx+0Ch]
          vaddss  xmm1, xmm0, xmm10
          vmovss  dword ptr [rdx+4], xmm1
          vmovaps xmm6, xmm3
        }
        v13 = v30;
        __asm { vmovaps xmm15, xmm4 }
      }
      v21 = _RCX < firstEdge;
      v22 = _RCX <= firstEdge;
    }
    while ( _RCX != firstEdge );
    v21 = ++v16 < work->loopCount;
    v22 = v16 <= work->loopCount;
  }
  while ( v16 < work->loopCount );
  __asm
  {
    vmovaps xmm13, [rsp+0E8h+var_88]
    vmovaps xmm12, [rsp+0E8h+var_78]
    vmovaps xmm11, [rsp+0E8h+var_68]
    vmovaps xmm10, [rsp+0E8h+var_58]
    vmovaps xmm9, [rsp+0E8h+var_48]
    vmovaps xmm7, [rsp+0E8h+var_28]
    vcomiss xmm6, xmm14
    vmovaps xmm14, [rsp+0E8h+var_98]
  }
  if ( v16 <= work->loopCount )
  {
    __asm
    {
      vmovaps xmm3, xmm6; __formal
      vmovaps xmm2, xmm15; hitEdgeLen
    }
    result = Glass_SnapSeedDirToEdge(work, v13, *(float *)&_XMM2, *(float *)&_XMM3, &inOutBreakOrg->xy, outSeedDir);
  }
  else
  {
LABEL_14:
    __asm
    {
      vmovss  xmm0, cs:__real@bf800000
      vsqrtss xmm1, xmm6, xmm6
      vdivss  xmm2, xmm0, xmm1
      vmulss  xmm1, xmm2, dword ptr [rdx]
      vmulss  xmm0, xmm2, dword ptr [rdx+4]
      vmovss  dword ptr [rdx], xmm1
      vmovss  dword ptr [rdx+4], xmm0
    }
    result = NULL;
  }
  __asm { vmovaps xmm15, [rsp+0E8h+var_A8] }
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
Glass_PlayShatterEffects
==============
*/
void Glass_PlayShatterEffects(FxGlassSystem *glassSys, unsigned int pieceIndex, const tmat33_t<vec3_t> *axis, const vec3_t *shatterDir, float maxEffects)
{
  char v6; 
  FxGlassPiecePlace *piecePlaces; 
  __int64 defIndex; 
  __int64 geoDataStart; 
  FxGlassGeometryData *geoData; 
  int y; 
  FxGlassGeometryData *v38; 
  unsigned int vertCount; 
  int v40; 
  int x; 
  int v42; 
  FxGlassGeometryData *v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  bool v47; 
  int v48; 
  int v49; 
  int v52; 
  int v53; 
  bool v67; 
  int v68; 
  int v72; 
  int v73; 
  int v75; 
  int v76; 
  __int64 v77; 
  int v78; 
  int v79; 
  int v80; 
  __int64 v81; 
  int point; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  FxGlassPieceState *v116; 
  __int64 v117; 
  __int64 v118; 
  FxGlassPiecePlace *v119; 
  FxGlassDef *v120; 
  vec3_t normal; 
  vec3_t v122; 
  vec3_t origin; 

  _R12 = axis;
  __asm
  {
    vmovss  xmm4, dword ptr [r12+1Ch]
    vmulss  xmm1, xmm4, dword ptr [r9+4]
    vmovss  xmm3, dword ptr [r12+18h]
    vmulss  xmm0, xmm3, dword ptr [r9]
    vmovss  xmm5, dword ptr [r12+20h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [r9+8]
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
  }
  if ( v6 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm3, xmm2
      vmovss  dword ptr [rbp+4Fh+normal], xmm0
      vxorps  xmm0, xmm5, xmm2
      vxorps  xmm1, xmm4, xmm2
      vmovss  dword ptr [rbp+4Fh+normal+8], xmm0
      vmovss  dword ptr [rbp+4Fh+normal+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rbp+4Fh+normal], xmm3
      vmovss  dword ptr [rbp+4Fh+normal+4], xmm4
      vmovss  dword ptr [rbp+4Fh+normal+8], xmm5
    }
  }
  __asm { vmovss  xmm0, cs:__real@45000000 }
  piecePlaces = glassSys->piecePlaces;
  _R9 = &glassSys->pieceStates[pieceIndex];
  v118 = 32i64 * pieceIndex;
  v116 = _R9;
  v119 = piecePlaces;
  defIndex = _R9->defIndex;
  __asm { vcomiss xmm0, dword ptr [r9+1Ch] }
  v120 = &fxWorld.glassGlob.defs[defIndex];
  if ( !__CFADD__(fxWorld.glassGlob.defs, 120 * defIndex) && v120 != NULL )
  {
    __asm
    {
      vmovss  xmm2, [rbp+4Fh+maxEffects]
      vmovss  xmm1, cs:__real@3f000000
      vcomiss xmm2, xmm1
      vmovss  xmm3, cs:__real@3d000000
      vmulss  xmm0, xmm3, dword ptr [r12+0Ch]
    }
    point = 0;
    v108 = 1;
    __asm
    {
      vaddss  xmm1, xmm0, dword ptr [r10+rbx+10h]
      vmulss  xmm0, xmm3, dword ptr [r12+10h]
      vmovss  dword ptr [rbp+4Fh+origin], xmm1
      vaddss  xmm1, xmm0, dword ptr [r10+rbx+14h]
      vmulss  xmm0, xmm3, dword ptr [r12+14h]
      vmovss  dword ptr [rbp+4Fh+origin+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [r10+rbx+18h]
      vmovss  dword ptr [rbp+4Fh+origin+8], xmm1
    }
    Glass_PlayEffect(&fxWorld.glassGlob.defs[defIndex].shatterSmallEffect, &origin, &normal);
    return;
  }
  geoDataStart = _R9->geoDataStart;
  geoData = glassSys->geoData;
  y = geoData[geoDataStart].vert.y;
  v38 = &geoData[geoDataStart];
  vertCount = _R9->vertCount;
  v40 = y;
  x = v38->vert.x;
  v111 = y;
  v42 = x;
  *(_QWORD *)origin.v = v38;
  if ( vertCount > 1 )
  {
    v43 = v38 + 1;
    v44 = vertCount - 1;
    do
    {
      v45 = v42;
      v42 = v43->vert.x;
      v46 = x;
      ++v43;
      v47 = v42 < x;
      v48 = v40;
      v40 = v43[-1].vert.y;
      v49 = y;
      x = v42;
      y = v40;
      if ( !v47 )
        x = v46;
      if ( v40 >= v49 )
        y = v49;
      if ( v42 <= v45 )
        v42 = v45;
      if ( v40 <= v48 )
        v40 = v48;
      --v44;
    }
    while ( v44 );
    _R9 = v116;
    v111 = y;
  }
  __asm
  {
    vmovss  xmm2, [rbp+4Fh+maxEffects]
    vxorps  xmm0, xmm0, xmm0
  }
  v52 = v42 - x;
  v53 = v40 - y;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, r14d
    vmulss  xmm0, xmm0, cs:__real@3a000000
    vcvttss2si edx, xmm0
  }
  v113 = v52;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, esi
    vmulss  xmm1, xmm0, cs:__real@3a000000
  }
  v112 = v53;
  __asm { vcvttss2si ecx, xmm1 }
  if ( _EDX < 1 )
    _EDX = 1;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( _ECX < 1 )
    _ECX = 1;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, r13d
    vcomiss xmm0, xmm2
  }
  if ( ((unsigned __int64)(_EDX * (__int64)_ECX) >> 32 != 0) | v6 )
    goto LABEL_34;
  LODWORD(_RAX) = s_glassRandSeed + 1;
  s_glassRandSeed = _RAX;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm2, 1
    vcvttss2si r8d, xmm1
  }
  v67 = (unsigned int)_RAX < 0x3FE9;
  if ( (_DWORD)_RAX == 16361 )
  {
    s_glassRandSeed = 0;
    v67 = 0;
    LODWORD(_RAX) = 0;
  }
  v47 = v67 || _ER8 == -1;
  v68 = _ER8 + 1;
  _RAX = (int)_RAX;
  _RDI = fx_randomTable;
  __asm
  {
    vsubss  xmm0, xmm2, xmm1
    vcomiss xmm0, dword ptr [rdi+rax*4]
    vcvttss2si eax, xmm1
  }
  if ( v47 )
    v68 = _EAX;
  if ( v68 >= 1 )
  {
    if ( _EDX * _ECX > v68 )
    {
      do
      {
        v72 = _EDX - 1;
        if ( _EDX <= 1 )
          v72 = _EDX;
        _EDX = v72;
        v73 = _ECX - 1;
        if ( _ECX <= 1 )
          v73 = _ECX;
        _ECX = v73;
      }
      while ( _EDX * v73 > v68 );
    }
LABEL_34:
    __asm
    {
      vmovaps [rsp+0F0h+var_40], xmm6
      vmovss  xmm6, cs:__real@3d000000
    }
    v75 = 2 * _ECX;
    v109 = 0;
    v114 = 2 * _ECX;
    if ( 2 * _ECX <= 1 )
      goto LABEL_44;
    v76 = 2 * _EDX;
    v77 = ((unsigned int)(v75 - 2) >> 1) + 1;
    v110 = 2 * _EDX;
    v117 = (unsigned int)v77;
    v115 = 2 * v53;
    do
    {
      v108 = y + v53 / v75;
      if ( v76 > 1 )
      {
        v78 = 2 * v52;
        v79 = v52;
        v80 = v110;
        v81 = ((unsigned int)(v110 - 2) >> 1) + 1;
        do
        {
          point = x + v79 / v80;
          if ( Glass_DoesPieceContainPoint(_R9, *(const FxGlassGeometryData **)origin.v, &point) )
          {
            __asm
            {
              vmovd   xmm0, [rsp+0F0h+point]
              vmovd   xmm1, [rbp+4Fh+var_CC]
              vcvtdq2ps xmm0, xmm0
              vmulss  xmm3, xmm0, xmm6
              vmulss  xmm0, xmm3, dword ptr [r12]
              vaddss  xmm2, xmm0, dword ptr [rsi+rax+10h]
              vcvtdq2ps xmm1, xmm1
              vmulss  xmm4, xmm1, xmm6
              vmulss  xmm1, xmm4, dword ptr [r12+0Ch]
              vaddss  xmm0, xmm2, xmm1
              vmulss  xmm1, xmm3, dword ptr [r12+4]
              vaddss  xmm2, xmm1, dword ptr [rsi+rax+14h]
              vmovss  dword ptr [rbp+4Fh+var_70], xmm0
              vmulss  xmm0, xmm4, dword ptr [r12+10h]
              vaddss  xmm1, xmm2, xmm0
              vmulss  xmm0, xmm3, dword ptr [r12+8]
              vaddss  xmm2, xmm0, dword ptr [rsi+rax+18h]
              vmovss  dword ptr [rbp+4Fh+var_70+4], xmm1
              vmulss  xmm1, xmm4, dword ptr [r12+14h]
              vaddss  xmm0, xmm2, xmm1
              vmovss  dword ptr [rbp+4Fh+var_70+8], xmm0
            }
            Glass_PlayEffect(&v120->shatterEffect, &v122, &normal);
            ++v109;
          }
          _R9 = v116;
          v79 += v78;
          --v81;
        }
        while ( v81 );
        v53 = v112;
        v52 = v113;
        v76 = v110;
        y = v111;
        v77 = v117;
        v75 = v114;
      }
      v53 += v115;
      _R9 = v116;
      v117 = --v77;
      v112 = v53;
    }
    while ( v77 );
    if ( !v109 )
    {
LABEL_44:
      __asm { vmulss  xmm1, xmm6, dword ptr [r12+0Ch] }
      point = 0;
      v108 = 1;
      __asm
      {
        vaddss  xmm2, xmm1, dword ptr [r10+rbx+10h]
        vmulss  xmm1, xmm6, dword ptr [r12+10h]
        vmovss  dword ptr [rbp+4Fh+var_70], xmm2
        vaddss  xmm2, xmm1, dword ptr [r10+rbx+14h]
        vmulss  xmm1, xmm6, dword ptr [r12+14h]
        vmovss  dword ptr [rbp+4Fh+var_70+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [r10+rbx+18h]
        vmovss  dword ptr [rbp+4Fh+var_70+8], xmm2
      }
      Glass_PlayEffect(&v120->shatterEffect, &v122, &normal);
    }
    __asm { vmovaps xmm6, [rsp+0F0h+var_40] }
  }
}

/*
==============
Glass_PrintCrackPieceAssertReproData
==============
*/

void __fastcall Glass_PrintCrackPieceAssertReproData(double _XMM0_8)
{
  __int64 geoDataStart; 
  FxGlassGeometryData *geoData; 
  FxGlassGeometryData *v4; 
  const char *v9; 
  const char *v11; 
  char v12; 
  const char *v19; 
  const char *v26; 
  const char *v33; 
  const char *v36; 
  const char *v43; 
  const char *v50; 
  const char *v61; 
  const char *v68; 
  const char *v75; 
  const char *v82; 
  const char *v89; 
  const char *v96; 
  const char *v103; 
  const char *v110; 
  unsigned __int8 vertCount; 
  __int64 v119; 
  FxGlassGeometryData *v120; 
  unsigned __int8 holeDataCount; 
  FxGlassGeometryData *v122; 
  __int64 v123; 
  __int64 v124; 
  unsigned __int8 crackDataCount; 
  FxGlassGeometryData *v126; 
  __int64 v127; 
  FxGlassGeometryData *v128; 

  _RDI = s_glassCrackAssert.work;
  geoDataStart = s_glassCrackAssert.work->pieceState->geoDataStart;
  geoData = s_glassCrackAssert.work->glassSys->geoData;
  v4 = &geoData[geoDataStart];
  Com_Printf(1, "---------------------------------------------------------------\n");
  Com_Printf(1, "Glass assert repro data\n");
  Com_Printf(1, "\tconst uint randomSeed = %i;\n", (unsigned int)s_glassCrackAssert.randSeed);
  Com_Printf(1, "\tconst float avgCrackLength = ");
  __asm
  {
    vmovss  xmm1, cs:s_glassCrackAssert.avgCrackLength
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
  }
  v9 = "%.8g.0f%s";
  __asm { vcvtss2sd xmm2, xmm1, xmm1 }
  v11 = "%.8g.0f%s";
  if ( !v12 )
    v11 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v11, _R8, ";\n");
  Com_Printf(1, "\tconst FxGlassVertex breakOrg = { %i, %i };\n", (unsigned int)s_glassCrackAssert.breakOrg.x, (unsigned int)s_glassCrackAssert.breakOrg.y);
  Com_Printf(1, "\tconst vec3_t breakDir = { ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F64h]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  v19 = "%.8g.0f%s";
  if ( !v12 )
    v19 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v19, _R8, ", ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F68h]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  v26 = "%.8g.0f%s";
  if ( !v12 )
    v26 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v26, _R8, ", ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F6Ch]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  v33 = "%.8g.0f%s";
  if ( !v12 )
    v33 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v33, _R8, " };\n");
  Com_Printf(1, "\n");
  Com_Printf(1, "\tconst vec3_t origin = { ");
  _RAX = _RDI->piecePlace;
  v36 = "%.8g.0f%s";
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rax+10h]
    vcvttss2si eax, xmm1
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  if ( !v12 )
    v36 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v36, _R8, ", ");
  _RAX = _RDI->piecePlace;
  v43 = "%.8g.0f%s";
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rax+14h]
    vcvttss2si eax, xmm1
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  if ( !v12 )
    v43 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v43, _R8, ", ");
  _RAX = _RDI->piecePlace;
  v50 = "%.8g.0f%s";
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rax+18h]
    vcvttss2si eax, xmm1
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  if ( !v12 )
    v50 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v50, _R8, " };\n");
  Com_Printf(1, "\tconst mat33_t axis = \n");
  Com_Printf(1, "\t{\n");
  Com_Printf(1, "\t\t{ ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F70h]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  v61 = "%.8g.0f%s";
  if ( !v12 )
    v61 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v61, _R8, ", ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F74h]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  v68 = "%.8g.0f%s";
  if ( !v12 )
    v68 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v68, _R8, ", ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F78h]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  v75 = "%.8g.0f%s";
  if ( !v12 )
    v75 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v75, _R8, " },\n");
  Com_Printf(1, "\t\t{ ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F7Ch]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  v82 = "%.8g.0f%s";
  if ( !v12 )
    v82 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v82, _R8, ", ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F80h]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  v89 = "%.8g.0f%s";
  if ( !v12 )
    v89 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v89, _R8, ", ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F84h]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  v96 = "%.8g.0f%s";
  if ( !v12 )
    v96 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v96, _R8, " },\n");
  Com_Printf(1, "\t\t{ ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F88h]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  v103 = "%.8g.0f%s";
  if ( !v12 )
    v103 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v103, _R8, ", ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F8Ch]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  v110 = "%.8g.0f%s";
  if ( !v12 )
    v110 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v110, _R8, ", ");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F90h]
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vcvtss2sd xmm2, xmm1, xmm1
  }
  if ( !v12 )
    v9 = "%.8gf%s";
  __asm { vmovq   r8, xmm2 }
  Com_Printf(1, v9, _R8, " },\n");
  Com_Printf(1, "\t};\n");
  Com_Printf(1, "\n");
  Com_Printf(1, "\tconst uint supportMask = 0x%08x;\n", _RDI->pieceState->supportMask);
  Com_Printf(1, "\tconst uint vertCount = %i;\n", _RDI->pieceState->vertCount);
  Com_Printf(1, "\tconst uint holeDataCount = %i;\n", _RDI->pieceState->holeDataCount);
  Com_Printf(1, "\tconst uint crackDataCount = %i;\n", _RDI->pieceState->crackDataCount);
  Com_Printf(1, "\tconst uint fanDataCount = %i;\n", _RDI->pieceState->fanDataCount);
  Com_Printf(1, "\n");
  Com_Printf(1, "\tconst FxGlassGeometryData srcGeoData[] =\n");
  Com_Printf(1, "\t{\n");
  vertCount = _RDI->pieceState->vertCount;
  Com_Printf(1, (const char *)&queryFormat, "\t\t
  if ( vertCount )
  {
    v119 = vertCount;
    do
    {
      Com_Printf(1, "\t\t{ %i, %i },\n", (unsigned int)v4->vert.x, (unsigned int)v4->vert.y);
      ++v4;
      --v119;
    }
    while ( v119 );
  }
  v120 = &geoData[geoDataStart + vertCount];
  holeDataCount = _RDI->pieceState->holeDataCount;
  Com_Printf(1, (const char *)&queryFormat, "\n\t\t
  if ( holeDataCount )
  {
    v122 = v120;
    v123 = holeDataCount;
    do
    {
      Com_Printf(1, "\t\t{ %i, %i },\n", (unsigned int)v122->vert.x, (unsigned int)v122->vert.y);
      ++v122;
      --v123;
    }
    while ( v123 );
  }
  v124 = holeDataCount;
  crackDataCount = _RDI->pieceState->crackDataCount;
  v126 = &v120[v124];
  Com_Printf(1, (const char *)&queryFormat, "\n\t\t
  if ( crackDataCount )
  {
    v127 = crackDataCount;
    do
    {
      Com_Printf(1, "\t\t{ %i, %i },\n", (unsigned int)v126->vert.x, (unsigned int)v126->vert.y);
      ++v126;
      --v127;
    }
    while ( v127 );
  }
  v128 = &v120[v124 + crackDataCount];
  LOBYTE(_RDI) = _RDI->pieceState->fanDataCount;
  Com_Printf(1, (const char *)&queryFormat, "\n\t\t
  if ( (_BYTE)_RDI )
  {
    _RDI = (const FxGlassCrackWork *)(unsigned __int8)_RDI;
    do
    {
      Com_Printf(1, "\t\t{ %i, %i },\n", (unsigned int)v128->vert.x, (unsigned int)v128->vert.y);
      ++v128;
      _RDI = (const FxGlassCrackWork *)((char *)_RDI - 1);
    }
    while ( _RDI );
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
  unsigned int startIndex; 
  __int64 loopIndex; 
  __int64 breakOrgIndex; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  bool v42; 
  FxGlassCrackEdge *clippedEdge; 
  __int64 v46; 
  FxGlassCrackEdge *frontHead; 
  FxGlassCrackEdge *backTail; 
  FxGlassCrackEdge *frontTail; 
  __int64 v50; 
  unsigned __int8 v51; 
  __int64 v52; 
  unsigned __int8 v53; 
  __int64 v55; 
  FxGlassCrackEdge *hitEdge; 
  FxGlassCrackEdge *backHead; 
  FxGlassCrackEdge *v61; 
  FxGlassCrackEdge *v62; 
  FxGlassCrackEdge *v63; 
  FxGlassCrackEdge *v64; 
  FxGlassCrackEdge *v65; 
  FxGlassCrackWork *v66; 
  unsigned int loopCount; 
  FxGlassCrackEdge *v68; 
  FxGlassCrackEdge *v72; 
  __int64 v73; 
  unsigned int v74; 
  FxGlassCrackEdge *v75; 
  FxGlassCrackEdge *v76; 
  FxGlassCrackEdge *v77; 
  FxGlassCrackEdge *v78; 
  FxGlassCrackEdge *v79; 
  __int64 v80; 
  unsigned __int8 v81; 
  int v82; 
  FxGlassCrackWalk walk; 
  void *retaddr; 

  _R11 = &retaddr;
  startIndex = branch->startIndex;
  _RSI = branch;
  __asm { vmovaps xmmword ptr [r11-68h], xmm8 }
  _RBX = work;
  __asm { vmovaps xmmword ptr [r11-78h], xmm9 }
  walk.clip.startIndex = startIndex;
  if ( startIndex == work->breakOrgIndex )
  {
    if ( branch->afterEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2262, ASSERT_TYPE_SANITY, "( branch->afterEdge == 0 )", (const char *)&queryFormat, "branch->afterEdge == NULL") )
      __debugbreak();
    _RDI = _RBX->breakOrgLoop;
    if ( !_RDI )
    {
      breakOrgIndex = _RBX->breakOrgIndex;
      walk.loopIndex = _RBX->loopCount;
      loopIndex = walk.loopIndex;
      v13 = 3i64 * walk.loopIndex + 2436;
      _RBX->packedPts[2 * v13] = (FxGlassVertex)LODWORD(_RBX->pts[breakOrgIndex].xy.v[0]);
      _RBX->packedPts[2 * v13 + 1] = (FxGlassVertex)LODWORD(_RBX->pts[breakOrgIndex].xy.v[1]);
      v14 = loopIndex;
      v15 = _RBX->breakOrgIndex;
      _RBX->loops[v14].maxs.v[0] = _RBX->pts[v15].xy.v[0];
      _RBX->loops[v14].maxs.v[1] = _RBX->pts[v15].xy.v[1];
      goto LABEL_12;
    }
    if ( _RDI->i1 != startIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2272, ASSERT_TYPE_SANITY, "( startEdge->i1 == walk.clip.startIndex )", (const char *)&queryFormat, "startEdge->i1 == walk.clip.startIndex") )
      __debugbreak();
  }
  else
  {
    _RDI = branch->afterEdge;
  }
  walk.loopIndex = _RDI->loopIndex;
LABEL_12:
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+14h]
    vmovss  xmm1, dword ptr [rsi+18h]
    vmovss  xmm9, dword ptr [rsi+0Ch]
    vmovss  xmm8, dword ptr [rsi+10h]
    vmovss  [rsp+150h+walk.clip.len], xmm0
    vmovss  xmm0, dword ptr [rsi+1Ch]
  }
  ++s_glassRandSeed;
  __asm
  {
    vmovss  dword ptr [rsp+150h+walk.clip.baseDir+4], xmm0
    vmovss  xmm0, dword ptr [rsi+24h]
    vmovss  dword ptr [rsp+150h+walk.clip.baseDir], xmm1
    vmovss  xmm1, dword ptr [rsi+20h]
    vmovss  [rsp+150h+walk.totalCrackLength], xmm0
    vmovss  dword ptr [rsp+150h+walk.clip.dir], xmm9
    vmovss  dword ptr [rsp+150h+walk.clip.dir+4], xmm8
    vmovss  [rsp+150h+walk.clip.deflectLimit], xmm1
  }
  if ( s_glassRandSeed == 16361 )
    s_glassRandSeed = 0;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+4F4Ch]
    vmovss  xmm0, dword ptr [rbx+4F50h]
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm1, xmm1, dword ptr [rcx+rax*4]
    vaddss  xmm0, xmm1, xmm2
    vmovss  [rsp+150h+walk.cutoffCrackLength], xmm0
  }
  if ( _RDI )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+8]
      vmovaps [rsp+150h+var_48+8], xmm6
      vmovss  xmm6, dword ptr [rdi+0Ch]
      vmulss  xmm0, xmm6, dword ptr [rax+0Ch]
      vmulss  xmm1, xmm3, dword ptr [rax+8]
      vmulss  xmm2, xmm6, xmm8
      vmovaps [rsp+150h+var_58+8], xmm7
      vaddss  xmm7, xmm1, xmm0
      vmulss  xmm0, xmm6, dword ptr [rax+8]
      vmulss  xmm1, xmm3, xmm9
      vaddss  xmm2, xmm2, xmm1
      vmulss  xmm1, xmm3, dword ptr [rax+0Ch]
      vcomiss xmm1, xmm0
      vmulss  xmm9, xmm9, xmm6
      vmovaps xmm6, [rsp+150h+var_48+8]
      vmulss  xmm8, xmm8, xmm3
      vcomiss xmm8, xmm9
      vcomiss xmm2, xmm7
      vmovaps xmm7, [rsp+150h+var_58+8]
    }
  }
  v42 = Glass_DoCrackWalk(_RBX, &walk);
  __asm
  {
    vmovaps xmm9, [rsp+150h+var_78+8]
    vmovaps xmm8, [rsp+150h+var_68+8]
  }
  if ( v42 )
  {
    clippedEdge = walk.clippedEdge;
    if ( !walk.clippedEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2295, ASSERT_TYPE_ASSERT, "(walk.clippedEdge)", (const char *)&queryFormat, "walk.clippedEdge") )
      __debugbreak();
    v46 = walk.loopIndex;
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
      v50 = clippedEdge->loopIndex;
      if ( (unsigned int)v46 >= (unsigned int)v50 )
      {
        v53 = clippedEdge->loopIndex;
        frontTail->next = walk.backHead;
        v82 = v50;
        LODWORD(v50) = v46;
        v81 = v53;
        backTail->next = frontHead;
        Glass_RenumberLoop(frontHead, v53);
        if ( (unsigned int)v46 >= _RBX->loopCount )
        {
LABEL_36:
          _R13 = 3i64 * (unsigned int)v50;
          ExpandBounds2D(&_RBX->loops[(unsigned int)v50].mins, &_RBX->loops[(unsigned int)v50].maxs, &_RBX->loops[v82].mins, &_RBX->loops[v82].maxs);
          if ( _RDI )
          {
            v55 = _RBX->loopCount - 1;
            _RBX->loopCount = v55;
            if ( (_DWORD)v50 != (_DWORD)v55 )
            {
              _RCX = 3 * v55;
              __asm
              {
                vmovups xmm0, xmmword ptr [rbx+rcx*8+4C18h]
                vmovups xmmword ptr [rbx+r13*8+4C18h], xmm0
                vmovsd  xmm1, qword ptr [rbx+rcx*8+4C28h]
                vmovsd  qword ptr [rbx+r13*8+4C28h], xmm1
              }
              Glass_RenumberLoop(_RBX->loops[(unsigned int)v50].firstEdge, v50);
            }
            backTail->next = _RDI->next;
            _RDI->next = frontHead;
          }
          else
          {
            backTail->next = frontHead;
            _RBX->breakOrgLoop = backTail;
          }
          hitEdge = walk.clip.hitEdge;
          clippedEdge->next = walk.backHead;
          walk.frontTail->next = hitEdge;
          if ( _RBX->breakOrgLoop->i1 != _RBX->breakOrgIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2345, ASSERT_TYPE_SANITY, "( work->breakOrgLoop->i1 == work->breakOrgIndex )", (const char *)&queryFormat, "work->breakOrgLoop->i1 == work->breakOrgIndex") )
            __debugbreak();
          return;
        }
        v51 = v81;
        v52 = v46;
      }
      else
      {
        v51 = v46;
        v52 = v50;
        v82 = v46;
      }
      Glass_RenumberLoop(_RBX->loops[v52].firstEdge, v51);
      goto LABEL_36;
    }
    if ( _RBX->loopCount >= 0x20 )
    {
      LODWORD(v80) = _RBX->loopCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2350, ASSERT_TYPE_ASSERT, "(unsigned)( work->loopCount ) < (unsigned)( ( sizeof( *array_counter( work->loops ) ) + 0 ) )", "work->loopCount doesn't index ARRAY_COUNT( work->loops )\n\t%i not in [0, %i)", v80, 32) )
        __debugbreak();
    }
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2353, ASSERT_TYPE_ASSERT, "(startEdge)", (const char *)&queryFormat, "startEdge") )
      __debugbreak();
    backHead = walk.backHead;
    if ( clippedEdge->i1 != walk.backHead->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2354, ASSERT_TYPE_ASSERT, "(walk.clippedEdge->i1 == walk.backHead->i0)", (const char *)&queryFormat, "walk.clippedEdge->i1 == walk.backHead->i0") )
      __debugbreak();
    v61 = walk.backTail;
    if ( walk.backTail->i1 != _RDI->next->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2355, ASSERT_TYPE_ASSERT, "(walk.backTail->i1 == startEdge->next->i0)", (const char *)&queryFormat, "walk.backTail->i1 == startEdge->next->i0") )
      __debugbreak();
    v62 = walk.frontHead;
    clippedEdge->next = backHead;
    v61->next = _RDI->next;
    if ( _RDI->i1 != v62->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2360, ASSERT_TYPE_ASSERT, "(startEdge->i1 == walk.frontHead->i0)", (const char *)&queryFormat, "startEdge->i1 == walk.frontHead->i0") )
      __debugbreak();
    v63 = walk.clip.hitEdge;
    v64 = walk.frontTail;
    if ( walk.frontTail->i1 != walk.clip.hitEdge->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2361, ASSERT_TYPE_ASSERT, "(walk.frontTail->i1 == walk.clip.hitEdge->i0)", (const char *)&queryFormat, "walk.frontTail->i1 == walk.clip.hitEdge->i0") )
      __debugbreak();
    _RDI->next = v62;
    v65 = _RDI;
    v64->next = v63;
    v66 = _RBX;
    if ( (_DWORD)v46 )
    {
      if ( Glass_IsEdgeLoopBackwards(_RBX, _RDI) )
      {
        loopCount = _RBX->loopCount;
        v68 = clippedEdge;
        v65 = _RDI;
      }
      else
      {
        Glass_RenumberLoop(_RBX->loops[0].firstEdge, _RBX->loopCount);
        loopCount = 0;
        __asm { vmovups xmm0, xmmword ptr [rbx+4C18h] }
        v68 = _RDI;
        _RDX = 3i64 * _RBX->loopCount;
        __asm
        {
          vmovups xmmword ptr [rbx+rdx*8+4C18h], xmm0
          vmovsd  xmm1, qword ptr [rbx+4C28h]
          vmovsd  qword ptr [rbx+rdx*8+4C28h], xmm1
        }
        v65 = clippedEdge;
      }
      v66 = _RBX;
    }
    else
    {
      loopCount = _RBX->loopCount;
      v68 = clippedEdge;
    }
    Glass_SplitLoop(v66, v65, v68, loopCount);
    Glass_MakePieceForOuterLoop(_RBX, _RDI->loopIndex);
  }
  else
  {
    v72 = walk.frontHead;
    if ( walk.frontHead )
    {
      if ( _RDI )
      {
        v77 = walk.backTail;
        if ( walk.backTail->i1 != _RDI->next->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2411, ASSERT_TYPE_ASSERT, "(walk.backTail->i1 == startEdge->next->i0)", (const char *)&queryFormat, "walk.backTail->i1 == startEdge->next->i0") )
          __debugbreak();
        v78 = walk.backHead;
        v79 = walk.frontTail;
        if ( walk.frontTail->i1 != walk.backHead->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2412, ASSERT_TYPE_ASSERT, "(walk.frontTail->i1 == walk.backHead->i0)", (const char *)&queryFormat, "walk.frontTail->i1 == walk.backHead->i0") )
          __debugbreak();
        if ( _RDI->i1 != v72->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2413, ASSERT_TYPE_ASSERT, "(startEdge->i1 == walk.frontHead->i0)", (const char *)&queryFormat, "startEdge->i1 == walk.frontHead->i0") )
          __debugbreak();
        v77->next = _RDI->next;
        v79->next = v78;
        _RDI->next = v72;
      }
      else
      {
        v73 = walk.loopIndex;
        v74 = _RBX->loopCount;
        if ( walk.loopIndex != v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2402, ASSERT_TYPE_ASSERT, "(walk.loopIndex == work->loopCount)", (const char *)&queryFormat, "walk.loopIndex == work->loopCount") )
          __debugbreak();
        _RBX->loopCount = v74 + 1;
        v75 = walk.backHead;
        _RBX->loops[v73].firstEdge = v72;
        walk.frontTail->next = v75;
        v76 = walk.backTail;
        _RBX->breakOrgLoop = walk.backTail;
        v76->next = v72;
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
  FxGlassDef *v7; 
  LocalClientNum_t v8; 
  connstate_t *p_connectionState; 
  FxMarksSystem *MarksSystem; 
  unsigned __int16 firstGlassMarkHandle; 
  __int64 v13; 
  int v14; 
  vec3_t *v15; 
  __int64 v17; 
  __int64 v18; 
  connstate_t *v20; 
  LocalClientNum_t v21; 

  _RBP = impactDir;
  v7 = &fxWorld.glassGlob.defs[glassSys->pieceStates[pieceIndex].defIndex];
  if ( v7->crackDecalEffect.particleSystemDef )
  {
    v8 = LOCAL_CLIENT_0;
    v21 = LOCAL_CLIENT_0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      p_connectionState = &clientUIActives[0].connectionState;
      __asm
      {
        vmovaps [rsp+88h+var_48], xmm6
        vxorps  xmm6, xmm6, xmm6
      }
      v20 = &clientUIActives[0].connectionState;
      do
      {
        if ( (unsigned int)v8 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v18) = 2;
          LODWORD(v17) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        if ( *p_connectionState == CA_ACTIVE )
        {
          MarksSystem = FX_GetMarksSystem(v8);
          firstGlassMarkHandle = MarksSystem->firstGlassMarkHandle;
          if ( firstGlassMarkHandle != 0xFFFF )
          {
            do
            {
              if ( firstGlassMarkHandle >= 0x200u )
              {
                LODWORD(v18) = 512;
                LODWORD(v17) = firstGlassMarkHandle;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v17, v18) )
                  __debugbreak();
              }
              v13 = (__int64)&MarksSystem->marks[firstGlassMarkHandle];
              firstGlassMarkHandle = *(_WORD *)(v13 + 2);
              if ( v13 == -76 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2157, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
                  __debugbreak();
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
                  __debugbreak();
              }
              if ( *(_BYTE *)(v13 + 76) != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2158, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS") )
                __debugbreak();
              v14 = *(unsigned __int16 *)(v13 + 80);
              if ( v14 == pieceIndex )
              {
                __asm { vucomiss xmm6, dword ptr [rbp+0] }
                if ( v14 != pieceIndex )
                  goto LABEL_24;
                __asm { vucomiss xmm6, dword ptr [rbp+4] }
                if ( v14 != pieceIndex )
                  goto LABEL_24;
                __asm { vucomiss xmm6, dword ptr [rbp+8] }
                v15 = &axis->m[2];
                if ( v14 != pieceIndex )
LABEL_24:
                  v15 = (vec3_t *)_RBP;
                Glass_PlayEffectWithMark(&v7->crackDecalEffect, (const vec3_t *)(v13 + 16), v15);
              }
            }
            while ( firstGlassMarkHandle != 0xFFFF );
            v8 = v21;
            p_connectionState = v20;
          }
        }
        ++v8;
        p_connectionState += 110;
        v21 = v8;
        v20 = p_connectionState;
      }
      while ( v8 < SLODWORD(cl_maxLocalClients) );
      __asm { vmovaps xmm6, [rsp+88h+var_48] }
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
  char v58; 
  double v104; 
  double v105; 
  double v106; 
  double v107; 
  double v108; 
  vec3_t dir; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> out; 
  char v112; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm0, dword ptr [rdx]; areaX2
  }
  _RDI = pivotEdge;
  _RBX = piecePlace;
  _RSI = work;
  *(float *)&_XMM0 = Glass_InertiaScale(*(double *)&_XMM0);
  __asm { vmovaps xmm7, xmm0 }
  if ( _RDI->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 910, ASSERT_TYPE_ASSERT, "(pivotEdge->type == FX_GLASS_EDGE_SUPPORTING)", (const char *)&queryFormat, "pivotEdge->type == FX_GLASS_EDGE_SUPPORTING") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+0Ch]
    vmovss  xmm2, dword ptr [rdi+8]
    vmulss  xmm0, xmm2, dword ptr [rsi+4F70h]
    vmulss  xmm1, xmm3, dword ptr [rsi+4F7Ch]
    vmovss  xmm8, cs:__real@3f800000
  }
  _RCX = glass_edge_angle;
  ++s_glassRandSeed;
  __asm
  {
    vaddss  xmm6, xmm1, xmm0
    vmulss  xmm0, xmm2, dword ptr [rsi+4F74h]
    vmulss  xmm1, xmm3, dword ptr [rsi+4F80h]
    vaddss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm2, dword ptr [rsi+4F78h]
    vmulss  xmm1, xmm3, dword ptr [rsi+4F84h]
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rsp+118h+dir], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+118h+dir+8], xmm0
    vmovss  dword ptr [rsp+118h+dir+4], xmm1
  }
  if ( s_glassRandSeed == 16361 )
    s_glassRandSeed = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+2Ch]
    vsubss  xmm1, xmm0, dword ptr [rcx+28h]
    vmulss  xmm0, xmm7, dword ptr [rsi+4F94h]
    vmulss  xmm1, xmm1, dword ptr [rdx+rax*4]
    vaddss  xmm2, xmm1, dword ptr [rcx+28h]
    vmulss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, cs:__real@3c8efa35; radians
  }
  MatrixRotationRad(&mat, &dir, *(float *)&_XMM2);
  MatrixMultiply(&_RSI->axis, &mat, &out);
  AxisToQuat(&out, &_RBX->frame.quat);
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm6, dword ptr [rbx+8]
    vmovss  xmm7, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm8
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
  }
  if ( !v58 )
  {
    __asm
    {
      vsqrtss xmm0, xmm2, xmm2
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+118h+var_D0], xmm1
      vcvtss2sd xmm0, xmm4, xmm4
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+118h+var_D8], xmm2
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  [rsp+118h+var_E0], xmm3
      vmovsd  [rsp+118h+var_E8], xmm0
      vcvtss2sd xmm4, xmm5, xmm5
      vmovsd  [rsp+118h+var_F0], xmm4
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 917, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( piecePlace->frame.quat ) )", "(%g, %g, %g, %g) len: %g", v104, v105, v106, v107, v108) )
      __debugbreak();
  }
  _RAX = _RDI->i0;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+rax*8+3FCh]
    vsubss  xmm3, xmm0, dword ptr [rbp+8]
    vmulss  xmm0, xmm3, dword ptr [rsi+4F70h]
    vmovss  xmm1, dword ptr [rsi+rax*8+400h]
    vsubss  xmm4, xmm1, dword ptr [rbp+0Ch]
    vmulss  xmm2, xmm4, dword ptr [rsi+4F7Ch]
    vmulss  xmm1, xmm4, dword ptr [rsi+4F80h]
    vaddss  xmm6, xmm2, xmm0
    vmulss  xmm0, xmm3, dword ptr [rsi+4F74h]
    vmulss  xmm2, xmm3, dword ptr [rsi+4F78h]
    vaddss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm4, dword ptr [rsi+4F84h]
    vmulss  xmm1, xmm5, dword ptr [rsp+118h+mat+0Ch]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+118h+mat]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rsp+118h+mat+18h]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm5, dword ptr [rsp+118h+mat+10h]
    vsubss  xmm0, xmm6, xmm2
    vaddss  xmm3, xmm0, dword ptr [rbx+10h]
    vmulss  xmm0, xmm6, dword ptr [rsp+118h+mat+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rsp+118h+mat+1Ch]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm5, dword ptr [rsp+118h+mat+14h]
    vsubss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbx+10h], xmm3
    vaddss  xmm3, xmm0, dword ptr [rbx+14h]
    vmulss  xmm0, xmm6, dword ptr [rsp+118h+mat+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rsp+118h+mat+20h]
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbx+14h], xmm3
    vaddss  xmm3, xmm0, dword ptr [rbx+18h]
    vmovss  dword ptr [rbx+18h], xmm3
  }
  _R11 = &v112;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
Glass_SetCrackEdgeDelta
==============
*/
void Glass_SetCrackEdgeDelta(const FxGlassCrackWork *work, FxGlassCrackEdge *edge)
{
  _RAX = edge->i1;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rax*8+3FCh]
    vsubss  xmm3, xmm0, dword ptr [rcx+r8*8+3FCh]
    vmovss  dword ptr [rdx+8], xmm3
    vmovss  xmm0, dword ptr [rcx+rax*8+400h]
    vsubss  xmm2, xmm0, dword ptr [rcx+r8*8+400h]
    vmovss  dword ptr [rdx+0Ch], xmm2
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm4, xmm1, xmm1
    vcomiss xmm4, cs:__real@3d947ae1
    vcmpless xmm0, xmm4, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rdx+8], xmm0
    vmulss  xmm1, xmm1, dword ptr [rdx+0Ch]
    vmovss  dword ptr [rdx+0Ch], xmm1
    vmovss  dword ptr [rdx+4], xmm4
  }
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
  __int64 v12; 
  FxGlassPieceState *pieceStates; 
  __int64 v14; 
  FxGlassPieceState *v16; 
  bool v17; 
  __int64 v18; 
  bool v19; 
  FxGlassCrackEdge *firstEdge; 
  bool v49; 
  bool v50; 
  char v59; 
  int v60; 
  FxGlassSystem *v78; 
  unsigned int v79; 
  FxGlassPieceState *v80; 
  __int64 v81; 
  __int64 v82; 

  glassSys = work->glassSys;
  _R14 = shard;
  pieceDynamics = glassSys->pieceDynamics;
  v12 = 5i64 * newPieceIndex;
  pieceStates = glassSys->pieceStates;
  v14 = newPieceIndex;
  _R13 = &glassSys->piecePlaces[v14];
  v16 = &pieceStates[basePieceIndex];
  v79 = basePieceIndex;
  v17 = 1;
  v18 = 5i64 * basePieceIndex;
  v82 = v12;
  v80 = v16;
  v81 = v18;
  if ( *(&pieceDynamics->physicsInstance + 2 * v12) != -1 )
  {
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1207, ASSERT_TYPE_SANITY, "( newPieceDynamics->physicsInstance == 0xFFFFFFFF )", (const char *)&queryFormat, "newPieceDynamics->physicsInstance == PHYSICSINSTANCEID_INVALID");
    v17 = !v19;
    if ( v19 )
      __debugbreak();
    v12 = v82;
    v18 = v81;
    basePieceIndex = v79;
    v16 = v80;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r13+10h]
    vsubss  xmm5, xmm0, dword ptr [rbx+4F98h]
    vmovss  xmm1, dword ptr [r13+14h]
    vsubss  xmm2, xmm1, dword ptr [rbx+4F9Ch]
    vmovss  xmm0, dword ptr [r13+18h]
    vsubss  xmm3, xmm0, dword ptr [rbx+4FA0h]
  }
  _RAX = glass_physics_maxdist;
  __asm
  {
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm4, dword ptr [rax+28h]
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vcomiss xmm3, xmm0
  }
  if ( !v17 )
    pieceStates[v14].flags |= 4u;
  if ( pieceStates[v14].supportMask )
  {
    firstEdge = _R14->loops[0].firstEdge;
    __asm { vmovaps [rsp+0B8h+var_58], xmm6 }
    _RAX = firstEdge;
    __asm
    {
      vmovss  xmm6, cs:__real@3e800000
      vmovaps [rsp+0B8h+var_68], xmm7
      vmovss  xmm7, cs:__real@3f400000
      vxorps  xmm5, xmm5, xmm5
    }
    do
    {
      if ( !_RAX->type )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+8]
          vmulss  xmm3, xmm0, dword ptr [rbx+4F84h]
          vmovss  xmm1, dword ptr [rax+0Ch]
          vmulss  xmm2, xmm1, dword ptr [rbx+4F78h]
          vsubss  xmm4, xmm3, xmm2
          vmulss  xmm0, xmm4, xmm6
          vmulss  xmm1, xmm0, xmm4
          vmulss  xmm2, xmm1, xmm4
          vsubss  xmm0, xmm7, xmm2
          vmulss  xmm1, xmm0, dword ptr [rax+4]
          vaddss  xmm5, xmm5, xmm1
        }
      }
      _RAX = _RAX->next;
      v49 = _RAX < firstEdge;
      v50 = _RAX <= firstEdge;
    }
    while ( _RAX != firstEdge );
    _RAX = glass_fall_ratio;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4]
      vmovaps xmm7, [rsp+0B8h+var_68]
      vmovaps xmm6, [rsp+0B8h+var_58]
      vmovss  xmm3, dword ptr [rax+28h]
      vmovss  xmm4, dword ptr [rax+2Ch]
      vdivss  xmm1, xmm0, xmm5
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm2, xmm3
    }
    if ( v50 )
    {
      v59 = 0;
      v60 = 0x7FFFFFFF;
    }
    else
    {
      __asm { vcomiss xmm2, xmm4 }
      if ( v49 )
      {
        __asm
        {
          vsubss  xmm1, xmm2, xmm3
          vsubss  xmm0, xmm4, xmm3
          vdivss  xmm3, xmm1, xmm0
          vmovss  xmm1, cs:__real@40000000
          vsubss  xmm2, xmm1, xmm3
          vmulss  xmm1, xmm3, xmm2
        }
      }
      else
      {
        __asm { vmovss  xmm1, cs:__real@3f800000 }
      }
      _RAX = glass_fall_delay;
      v59 = 1;
      __asm
      {
        vmovss  xmm2, dword ptr [rax+2Ch]
        vsubss  xmm0, xmm2, dword ptr [rax+28h]
        vmulss  xmm1, xmm0, xmm1
        vsubss  xmm2, xmm2, xmm1
        vmulss  xmm3, xmm2, cs:__real@447a0000
        vaddss  xmm4, xmm3, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm3, xmm1, xmm4, 1
        vcvttss2si ecx, xmm3
      }
      v60 = work->glassSys->time + _ECX;
    }
    *(&pieceDynamics->fallTime + 2 * v12) = v60;
    if ( !v59 )
    {
      if ( pivotEdge )
        Glass_RotatePieceAroundEdge(work, _R14, _R13, pivotEdge);
      Glass_LinkPiece_Static(work->glassSys, newPieceIndex);
      return;
    }
    if ( *(&pieceDynamics->physicsInstance + 2 * v18) != -1 )
      pieceStates[v14].supportMask = 0;
  }
  v78 = work->glassSys;
  if ( v78->time )
  {
    if ( (v16->flags & 8) != 0 && !pieceStates[v14].supportMask )
      pieceStates[v14].flags |= 8u;
    Glass_StartImmediateFall(work, newPieceIndex, basePieceIndex);
  }
  else
  {
    Glass_FreePiece(v78, newPieceIndex);
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
  char v10; 
  bool v12; 
  bool v13; 
  unsigned __int16 flags; 
  char v18; 
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
  LODWORD(_RAX) = s_glassRandSeed + 1;
  v9->supportMask = 0;
  s_glassRandSeed = _RAX;
  v12 = (unsigned int)_RAX < 0x3FE9;
  v13 = (_DWORD)_RAX == 16361;
  if ( (_DWORD)_RAX == 16361 )
  {
    s_glassRandSeed = 0;
    LODWORD(_RAX) = 0;
  }
  flags = v9->flags;
  _RCX = fx_randomTable;
  _RAX = (int)_RAX;
  __asm { vmovss  xmm0, dword ptr [rcx+rax*4] }
  _RAX = glass_physics_chance;
  __asm { vcomiss xmm0, dword ptr [rax+28h] }
  v18 = v12 || v13;
  if ( (flags & 8) != 0 )
    v18 = 1;
  if ( (flags & 4) == 0 )
    v10 = v18;
  if ( v10 )
  {
    v8->fallTime = 0x7FFFFFFF;
    *(double *)&_XMM0 = Physics_GetFixedMemoryPoolUsage(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE);
    _RAX = glass_physics_memory_threshold;
    __asm { vcomiss xmm0, dword ptr [rax+28h] }
    if ( (v12 || v13) && v8->physicsInstance == -1 )
      Particle_AddDeferredPhysicsGlassCreate(LOCAL_CLIENT_0, glassSys, v4, vel, avel, 0);
  }
  else
  {
    v13 = v8->physicsInstance == -1;
    v8->fallTime = glassSys->time;
    if ( !v13 )
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

FxGlassCrackEdge *__fastcall Glass_SnapSeedDirToEdge(FxGlassCrackWork *work, FxGlassCrackEdge *hitEdgePrev, double hitEdgeLen, float __formal, vec2_t *inOutBreakOrg, vec2_t *inOutSeedDir)
{
  unsigned int ptCount; 
  char v37; 
  FxGlassCrackEdge *result; 
  FxGlassCrackEdge *v39; 
  unsigned int breakOrgIndex; 
  unsigned int v43; 

  _RDI = hitEdgePrev->next;
  _RAX = inOutSeedDir;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm8
    vmovss  xmm4, dword ptr [rdi+4]
    vmulss  xmm1, xmm4, cs:__real@3f000000
    vsubss  xmm3, xmm2, xmm1
    vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm1, xmm1, xmm0
    vcomiss xmm1, cs:__real@3f800000
    vmovaps xmm6, xmm2
    vxorps  xmm8, xmm8, xmm8
    vmovss  xmm3, dword ptr [rax]
  }
  _RSI = inOutBreakOrg;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm1, xmm0, xmm3
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rsi], xmm1
    vsubss  xmm1, xmm0, dword ptr [rax+4]
    vmovss  dword ptr [rsi+4], xmm1
  }
  ptCount = work->ptCount;
  if ( work->breakOrgIndex != ptCount - 1 )
  {
    v43 = ptCount - 1;
    breakOrgIndex = work->breakOrgIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2493, ASSERT_TYPE_SANITY, "( work->breakOrgIndex ) == ( work->ptCount - 1 )", "work->breakOrgIndex == work->ptCount - 1\n\t%i, %i", breakOrgIndex, v43) )
      __debugbreak();
  }
  if ( inOutBreakOrg != (vec2_t *)&work->pts[work->breakOrgIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2494, ASSERT_TYPE_SANITY, "( &inOutBreakOrg == &work->pts[work->breakOrgIndex].xy )", (const char *)&queryFormat, "&inOutBreakOrg == &work->pts[work->breakOrgIndex].xy") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, cs:__real@42000000
    vmulss  xmm0, xmm3, dword ptr [rsi]
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, cs:__real@3d000000
    vmulss  xmm2, xmm3, dword ptr [rsi+4]
    vmovss  dword ptr [rsi], xmm0
    vaddss  xmm0, xmm2, cs:__real@3f000000
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm0, 1
    vmulss  xmm0, xmm3, cs:__real@3d000000
    vmovss  dword ptr [rsi+4], xmm0
  }
  Glass_PackVertex(inOutBreakOrg, &work->packedPts[work->breakOrgIndex]);
  __asm { vucomiss xmm6, xmm8 }
  if ( v37 )
  {
    --work->ptCount;
    result = hitEdgePrev;
  }
  else
  {
    __asm { vucomiss xmm6, dword ptr [rdi+4] }
    if ( v37 )
    {
      --work->ptCount;
      result = _RDI;
    }
    else
    {
      v39 = Glass_AllocCrackEdge(work, _RDI->i0, work->breakOrgIndex, _RDI->loopIndex, _RDI->type);
      _RDI->i0 = truncate_cast<unsigned char,unsigned int>(work->breakOrgIndex);
      v39->next = _RDI;
      hitEdgePrev->next = v39;
      Glass_SetCrackEdgeDelta(work, v39);
      Glass_SetCrackEdgeDelta(work, _RDI);
      if ( _RDI->twin )
        Glass_SplitTwin(work, v39, _RDI);
      result = v39;
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm8, [rsp+68h+var_28]
  }
  return result;
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
  unsigned __int8 i1; 
  float len; 
  FxGlassCrackEdge *twin; 
  FxGlassCrackEdge *i; 
  int v23; 
  int i0; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RDI = edge12;
  _RSI = edge01;
  if ( (edge01->next != edge12 || edge01->i1 != edge12->i0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1818, ASSERT_TYPE_ASSERT, "(edge01->next == edge12 && edge01->i1 == edge12->i0)", (const char *)&queryFormat, "edge01->next == edge12 && edge01->i1 == edge12->i0") )
    __debugbreak();
  if ( (_RSI->twin || !_RDI->twin) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1819, ASSERT_TYPE_ASSERT, "(edge01->twin == 0 && edge12->twin != 0)", (const char *)&queryFormat, "edge01->twin == NULL && edge12->twin != NULL") )
    __debugbreak();
  _RBX = _RDI->twin;
  i1 = _RBX->i1;
  if ( i1 != _RSI->i0 )
  {
    i0 = _RSI->i0;
    v23 = i1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1822, ASSERT_TYPE_ASSERT, "( twin10->i1 ) == ( edge01->i0 )", "%s == %s\n\t%i, %i", "twin10->i1", "edge01->i0", v23, i0) )
      __debugbreak();
  }
  __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
  _RBX->i0 = _RSI->i1;
  _RBX->len = _RSI->len;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vxorps  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  xmm1, dword ptr [rsi+0Ch]
    vxorps  xmm2, xmm1, xmm6
    vmovss  dword ptr [rbx+0Ch], xmm2
  }
  _RBX->twin = _RSI;
  _RSI->twin = _RBX;
  _RDX = Glass_GetFreeEdge(work);
  _RDX->i0 = _RDI->i1;
  _RDX->i1 = _RDI->i0;
  _RDX->loopIndex = _RDI->loopIndex;
  _RDX->type = _RDI->type;
  _RDX->twin = _RDI;
  len = _RDI->len;
  _RDI->twin = _RDX;
  _RDX->len = len;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vxorps  xmm1, xmm0, xmm6
    vmovss  dword ptr [rax+8], xmm1
    vmovss  xmm2, dword ptr [rdi+0Ch]
    vxorps  xmm0, xmm2, xmm6
    vmovss  dword ptr [rax+0Ch], xmm0
  }
  _RDX->next = _RBX;
  twin = _RDI->next->twin;
  if ( !twin || twin->next != _RBX )
  {
    twin = _RBX->next;
    for ( i = twin->next; i != _RBX; i = i->next )
      twin = i;
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  twin->next = _RDX;
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
  int v21; 
  int v23; 
  int v24; 
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
    __asm
    {
      vmovss  xmm3, cs:__real@40400000
      vmovss  xmm4, cs:__real@3fc00000
    }
    v21 = 0;
    if ( s_glassRandSeed != 16360 )
      v21 = s_glassRandSeed + 1;
    __asm { vmulss  xmm1, xmm3, dword ptr [rdx+rax*4] }
    v23 = v21 + 1;
    v24 = 0;
    __asm { vsubss  xmm0, xmm1, xmm4 }
    if ( v23 != 16361 )
      v24 = v23;
    s_glassRandSeed = v24 + 1;
    __asm
    {
      vmovss  dword ptr [rsp+0A8h+vel], xmm0
      vmulss  xmm1, xmm3, dword ptr [rdx+rax*4]
      vsubss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rsp+0A8h+vel+4], xmm2
    }
    if ( v24 == 16360 )
      s_glassRandSeed = 0;
    __asm
    {
      vmulss  xmm1, xmm3, dword ptr [rdx+rax*4]
      vsubss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rsp+0A8h+vel+8], xmm2
    }
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
    __asm
    {
      vmovss  xmm3, cs:__real@42000000
      vmulss  xmm0, xmm3, dword ptr [rsp+0A8h+linVel.m_quad+4]
      vmulss  xmm1, xmm3, dword ptr [rsp+0A8h+linVel.m_quad]
      vmulss  xmm2, xmm3, dword ptr [rsp+0A8h+linVel.m_quad+8]
      vmovss  dword ptr [rsp+0A8h+vel+4], xmm0
      vmovss  xmm0, dword ptr [rsp+0A8h+angVel.m_quad]
      vmovss  dword ptr [rsp+0A8h+linVel.m_quad], xmm0
      vmovss  xmm0, dword ptr [rsp+0A8h+angVel.m_quad+8]
      vmovss  dword ptr [rsp+0A8h+vel], xmm1
      vmovss  xmm1, dword ptr [rsp+0A8h+angVel.m_quad+4]
      vmovss  dword ptr [rsp+0A8h+linVel.m_quad+8], xmm0
      vmovss  dword ptr [rsp+0A8h+vel+8], xmm2
      vmovss  dword ptr [rsp+0A8h+linVel.m_quad+4], xmm1
    }
    Glass_SetupPieceFall(glassSys, pieceIndex, &vel, (const vec3_t *)&linVel);
  }
}

/*
==============
Glass_StartImmediateFall
==============
*/

void __fastcall Glass_StartImmediateFall(const FxGlassCrackWork *work, unsigned int newPieceIndex, unsigned int basePieceIndex, double _XMM3_8)
{
  __int64 v10; 
  FxGlassSystem *glassSys; 
  __int64 v17; 
  FxGlassPieceDynamics *pieceDynamics; 
  unsigned int physicsInstance; 
  unsigned int RigidBodyID; 
  int v33; 
  bool v34; 
  int v56; 
  int v57; 
  int v59; 
  char v114; 
  __int128 linVel; 
  vec3_t avel; 
  char v124; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0E8h+var_88], xmm10
  }
  v10 = newPieceIndex;
  _RBX = work;
  glassSys = work->glassSys;
  _RDI = v10;
  _R15 = glassSys->pieceStates;
  _R12 = glassSys->piecePlaces;
  v17 = basePieceIndex;
  pieceDynamics = glassSys->pieceDynamics;
  __asm { vmovss  xmm0, dword ptr [rdi+r15+1Ch]; areaX2 }
  *(float *)&_XMM0 = Glass_InertiaScale(*(double *)&_XMM0);
  physicsInstance = pieceDynamics[v17].physicsInstance;
  __asm
  {
    vmovaps xmm8, xmm0
    vxorps  xmm6, xmm6, xmm6
  }
  if ( physicsInstance == -1 )
  {
    __asm
    {
      vxorps  xmm5, xmm5, xmm5
      vxorps  xmm3, xmm3, xmm3
      vxorps  xmm4, xmm4, xmm4
    }
  }
  else
  {
    if ( !Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, physicsInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1141, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( authWorldId, basePieceDynamics->physicsInstance ) >= 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( authWorldId, basePieceDynamics->physicsInstance ) >= 1") )
      __debugbreak();
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, pieceDynamics[v17].physicsInstance, 0);
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1143, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    Physics_GetRigidBodyLinVel(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, RigidBodyID, (vec3_t *)&linVel);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0E8h+linVel+8]
      vmovss  xmm3, dword ptr [rsp+0E8h+linVel+4]
      vmovss  xmm5, dword ptr [rsp+0E8h+linVel]
    }
  }
  _RDX = glass_linear_vel;
  v33 = s_glassRandSeed + 1;
  s_glassRandSeed = v33;
  v34 = v33 == 16361;
  if ( v33 == 16361 )
  {
    s_glassRandSeed = 0;
    v33 = 0;
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+4F64h]
    vmovss  xmm0, dword ptr [rdx+2Ch]
    vsubss  xmm1, xmm0, dword ptr [rdx+28h]
    vmulss  xmm1, xmm1, dword ptr [r13+rax*4+0]
    vaddss  xmm0, xmm1, dword ptr [rdx+28h]
    vmovss  xmm1, dword ptr [rbx+4F68h]
    vmulss  xmm7, xmm0, xmm8
    vmulss  xmm0, xmm2, xmm7
    vaddss  xmm9, xmm0, xmm5
    vmulss  xmm0, xmm1, xmm7
    vaddss  xmm10, xmm0, xmm3
    vmovss  xmm3, dword ptr [rbx+4F6Ch]
    vmulss  xmm0, xmm3, xmm7
    vaddss  xmm4, xmm0, xmm4
    vmulss  xmm1, xmm1, xmm1
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vucomiss xmm3, xmm6
    vmovss  dword ptr [rsp+0E8h+linVel], xmm9
    vmovss  dword ptr [rsp+0E8h+linVel+4], xmm10
    vmovss  dword ptr [rsp+0E8h+linVel+8], xmm4
  }
  if ( v34 )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@40400000
      vmovss  xmm3, cs:__real@3fc00000
    }
    v56 = v33 + 1;
    v57 = 0;
    if ( v56 != 16361 )
      v57 = v56;
    __asm { vmulss  xmm1, xmm2, dword ptr [r13+rax*4+0] }
    v59 = 0;
    __asm { vsubss  xmm4, xmm1, xmm3 }
    if ( v57 != 16360 )
      v59 = v57 + 1;
    s_glassRandSeed = v59 + 1;
    __asm
    {
      vmulss  xmm1, xmm2, dword ptr [r13+rax*4+0]
      vsubss  xmm5, xmm1, xmm3
    }
    if ( v59 == 16360 )
      s_glassRandSeed = 0;
    __asm
    {
      vmulss  xmm1, xmm5, xmm8
      vmovss  dword ptr [rsp+0E8h+avel+4], xmm1
      vmulss  xmm0, xmm4, xmm8
      vmovss  dword ptr [rsp+0E8h+avel], xmm0
      vmulss  xmm1, xmm2, dword ptr [r13+rax*4+0]
      vsubss  xmm2, xmm1, xmm3
      vmulss  xmm3, xmm2, xmm8
      vmovss  dword ptr [rsp+0E8h+avel+8], xmm3
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm7, cs:__real@3f000000
      vdivss  xmm3, xmm0, dword ptr [rbx+4F54h]
      vmovss  xmm1, dword ptr [rdi+r12+10h]
      vsubss  xmm2, xmm1, dword ptr [rbx+4F58h]
      vmovss  xmm0, dword ptr [rdi+r12+14h]
      vsubss  xmm1, xmm0, dword ptr [rbx+4F5Ch]
      vmulss  xmm6, xmm1, xmm3
      vmulss  xmm7, xmm2, xmm3
      vmovss  xmm2, dword ptr [rdi+r12+18h]
      vsubss  xmm0, xmm2, dword ptr [rbx+4F60h]
      vmulss  xmm5, xmm0, xmm3
      vaddss  xmm1, xmm7, xmm9
      vmovss  dword ptr [rsp+0E8h+linVel], xmm1
      vaddss  xmm0, xmm6, xmm10
      vmovss  dword ptr [rsp+0E8h+linVel+4], xmm0
      vaddss  xmm1, xmm5, xmm4
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm2, xmm6, xmm6
      vmovss  dword ptr [rsp+0E8h+linVel+8], xmm1
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm3, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm9, xmm6, xmm1
      vmulss  xmm6, xmm5, xmm1
      vmulss  xmm7, xmm7, xmm1
    }
    if ( &_RBX->axis.row2 == &avel && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross", linVel) )
      __debugbreak();
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rsi+4]
      vmulss  xmm0, xmm9, dword ptr [rsi+8]
      vmulss  xmm2, xmm7, dword ptr [rsi+8]
      vmulss  xmm3, xmm9, dword ptr [rsi]
    }
    _RCX = glass_angular_vel;
    ++s_glassRandSeed;
    __asm
    {
      vsubss  xmm5, xmm1, xmm0
      vmulss  xmm0, xmm6, dword ptr [rsi]
      vmulss  xmm1, xmm7, dword ptr [rsi+4]
      vsubss  xmm6, xmm2, xmm0
      vsubss  xmm4, xmm3, xmm1
    }
    if ( s_glassRandSeed == 16361 )
      s_glassRandSeed = 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2Ch]
      vsubss  xmm1, xmm0, dword ptr [rcx+28h]
      vmulss  xmm0, xmm8, dword ptr [rbx+4F94h]
      vmulss  xmm1, xmm1, dword ptr [r13+rax*4+0]
      vaddss  xmm2, xmm1, dword ptr [rcx+28h]
      vmulss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm3, xmm5
      vmovss  dword ptr [rsp+0E8h+avel], xmm1
      vmulss  xmm1, xmm3, xmm4
      vmulss  xmm0, xmm3, xmm6
      vmovss  dword ptr [rsp+0E8h+avel+8], xmm1
      vmovss  dword ptr [rsp+0E8h+avel+4], xmm0
    }
  }
  if ( _R15[_RDI].supportMask )
  {
    *(double *)&_XMM0 = Physics_GetFixedMemoryPoolUsage(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE);
    _RAX = glass_physics_memory_threshold;
    __asm { vcomiss xmm0, dword ptr [rax+28h] }
    if ( v114 | v34 )
      Particle_AddDeferredPhysicsGlassCreate(LOCAL_CLIENT_0, _RBX->glassSys, newPieceIndex, (const vec3_t *)&linVel, &avel, 1);
  }
  else
  {
    Glass_SetupPieceFall(_RBX->glassSys, newPieceIndex, (const vec3_t *)&linVel, &avel);
  }
  _R11 = &v124;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
Glass_TraceCrackAgainstEdge
==============
*/
void Glass_TraceCrackAgainstEdge(FxGlassCrackWork *work, FxGlassClipSegment *clip, const vec2_t *start, FxGlassCrackEdge *edgeIter)
{
  char v49; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+0Ch]
    vmovss  xmm4, dword ptr [rdx+8]
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovss  xmm9, dword ptr [r9+8]
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovss  xmm10, dword ptr [r9+0Ch]
    vmovaps [rsp+0F8h+var_88], xmm12
    vmulss  xmm0, xmm10, xmm4
    vmulss  xmm1, xmm9, xmm3
    vmovaps [rsp+0F8h+var_98], xmm13
    vsubss  xmm13, xmm1, xmm0
    vxorps  xmm12, xmm12, xmm12
    vcomiss xmm13, xmm12
    vmovss  xmm0, dword ptr [r8]
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm7
    vsubss  xmm6, xmm0, dword ptr [rcx+rax*8+3FCh]
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm7, xmm0, dword ptr [rcx+rax*8+400h]
    vmulss  xmm0, xmm7, xmm9
    vmulss  xmm1, xmm6, xmm10
    vmovaps [rsp+0F8h+var_A8], xmm14
    vsubss  xmm14, xmm1, xmm0
    vcomiss xmm14, xmm12
    vmovss  [rsp+0F8h+var_C8], xmm6
    vmovss  [rsp+0F8h+var_C4], xmm7
    vmulss  xmm2, xmm13, cs:__real@3c23d70a
    vmovaps xmmword ptr [r11-78h], xmm11
    vmovss  xmm11, dword ptr [rdx+4]
    vmulss  xmm0, xmm11, xmm13
    vsubss  xmm5, xmm14, xmm0
    vcomiss xmm5, xmm2
    vmovaps xmm11, [rsp+0F8h+var_78]
    vmovaps xmm6, [rsp+0F8h+var_28]
    vmovaps xmm7, [rsp+0F8h+var_38]
    vmovaps xmm14, [rsp+0F8h+var_A8]
    vmovaps xmm13, [rsp+0F8h+var_98]
  }
  _R11 = &v49;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm12, xmmword ptr [r11-78h]
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
  int v14; 

  _RDI = work;
  if ( work->ptCount >= 0xFF )
  {
    v14 = 255;
    ptCount = work->ptCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( work->ptCount ) < (unsigned)( ( sizeof( *array_counter( work->pts ) ) + 0 ) )", "work->ptCount doesn't index ARRAY_COUNT( work->pts )\n\t%i not in [0, %i)", ptCount, v14) )
      __debugbreak();
  }
  result = _RDI->ptCount;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
  }
  _RDI->ptCount = result + 1;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm0, xmm0, cs:__real@3d000000
  }
  _RDI->packedPts[result] = vert;
  __asm
  {
    vcvtsi2ss xmm1, xmm1, ecx
    vmovss  dword ptr [rdi+rax*8+3FCh], xmm0
    vmulss  xmm0, xmm1, cs:__real@3d000000
    vmovss  dword ptr [rdi+rax*8+400h], xmm0
  }
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

