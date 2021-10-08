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
  const FxGlassCrackEdge *v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v31; 
  unsigned int v59; 
  __int64 *v135; 
  __int64 v165; 
  __int64 v166; 
  __int64 v173[2]; 
  __int64 v174; 
  char v176; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
    vmovaps xmmword ptr [r11-0A8h], xmm13
    vmovaps xmmword ptr [r11-0B8h], xmm14
  }
  _RSI = scaledCentroid;
  _R15 = work;
  v17 = edgeLoop;
  v18 = 0;
  do
  {
    v19 = v18;
    if ( v18 >= 0x80 )
    {
      LODWORD(v166) = 128;
      LODWORD(v165) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 779, ASSERT_TYPE_ASSERT, "(unsigned)( vertCount ) < (unsigned)( ( sizeof( *array_counter( coord ) ) + 0 ) )", "vertCount doesn't index ARRAY_COUNT( coord )\n\t%i not in [0, %i)", v165, v166) )
        __debugbreak();
    }
    _RCX = v17->i0;
    v17 = v17->next;
    _RAX = v18++;
    _RAX *= 2i64;
    __asm
    {
      vmovss  xmm12, dword ptr [r15+rcx*8+3FCh]
      vmovss  xmm13, dword ptr [r15+rcx*8+400h]
      vcvtss2sd xmm12, xmm12, xmm12
      vcvtss2sd xmm13, xmm13, xmm13
      vmovsd  [rsp+rax*8+930h+var_8D0], xmm12
      vmovsd  [rsp+rax*8+930h+var_8C8], xmm13
    }
  }
  while ( v17 != edgeLoop );
  __asm
  {
    vmovsd  xmm6, [rsp+930h+var_8D0]
    vmovsd  xmm11, [rsp+930h+var_8C8]
    vsubsd  xmm8, xmm13, [rsp+930h+var_8B8]
    vmovsd  xmm4, [rsp+930h+var_8C0]
  }
  _RCX = 2i64 * (v18 - 2);
  v31 = 1;
  __asm
  {
    vmovsd  xmm10, [rsp+rcx*8+930h+var_8C8]
    vmovsd  xmm2, [rsp+rcx*8+930h+var_8D0]
    vsubsd  xmm1, xmm6, xmm2
    vmulsd  xmm3, xmm1, xmm13
    vsubsd  xmm0, xmm10, xmm11
    vmulsd  xmm9, xmm0, xmm12
    vmulsd  xmm0, xmm8, xmm6
    vaddsd  xmm14, xmm0, xmm9
    vaddsd  xmm0, xmm2, xmm12
    vaddsd  xmm2, xmm0, xmm6
    vmulsd  xmm5, xmm3, xmm2
    vsubsd  xmm0, xmm4, xmm12
    vmulsd  xmm3, xmm0, xmm11
    vaddsd  xmm1, xmm12, xmm6
    vaddsd  xmm2, xmm1, xmm4
    vmulsd  xmm0, xmm3, xmm2
    vaddsd  xmm3, xmm5, xmm0
    vaddsd  xmm0, xmm3, qword ptr [rsi]
    vmovsd  [rsp+930h+var_8E8], xmm0
    vmovsd  qword ptr [rsi], xmm0
    vaddsd  xmm0, xmm13, xmm11
    vaddsd  xmm2, xmm0, [rsp+930h+var_8B8]
    vmulsd  xmm1, xmm8, xmm6
    vmulsd  xmm3, xmm2, xmm1
    vaddsd  xmm0, xmm10, xmm13
    vaddsd  xmm2, xmm0, xmm11
    vmulsd  xmm1, xmm2, xmm9
    vaddsd  xmm3, xmm3, xmm1
    vaddsd  xmm10, xmm3, qword ptr [rsi+8]
    vmovsd  qword ptr [rsi+8], xmm10
    vmovsd  [rsp+930h+var_8F0], xmm14
  }
  if ( v19 > 1 )
  {
    if ( v19 - 1 >= 4 )
    {
      __asm { vmovaps xmmword ptr [rsp+930h+var_C8+8], xmm15 }
      v59 = 2;
      _RBX = &v174;
      do
      {
        _RCX = 2i64 * v59;
        _R9 = 2i64 * (v59 - 2);
        _RDX = 2i64 * (v59 + 1);
        _R8 = 2i64 * (v59 + 2);
        _R10 = 2i64 * v31;
        __asm
        {
          vmovsd  xmm8, [rsp+rcx*8+930h+var_8C8]
          vmovsd  xmm1, [rsp+r9*8+930h+var_8C8]
          vmovsd  xmm9, [rsp+rdx*8+930h+var_8C8]
          vmovsd  xmm5, [rsp+r8*8+930h+var_8C8]
          vmovsd  xmm11, [rsp+r8*8+930h+var_8D0]
          vmovsd  xmm4, [rsp+r10*8+930h+var_8C8]
          vmovsd  xmm15, [rsp+rdx*8+930h+var_8D0]
          vsubsd  xmm0, xmm1, xmm8
          vmulsd  xmm3, xmm0, qword ptr [rbx-8]
          vmovsd  [rsp+930h+var_8E0], xmm3
          vsubsd  xmm0, xmm4, xmm9
          vmulsd  xmm7, xmm0, qword ptr [rbx+8]
          vsubsd  xmm0, xmm8, xmm5
          vmulsd  xmm6, xmm0, qword ptr [rbx+18h]
          vaddsd  xmm0, xmm1, qword ptr [rbx]
          vaddsd  xmm1, xmm0, xmm8
          vaddsd  xmm0, xmm4, qword ptr [rbx+10h]
          vmulsd  xmm2, xmm1, xmm3
          vaddsd  xmm1, xmm0, xmm9
          vaddsd  xmm0, xmm8, qword ptr [rbx+20h]
          vaddsd  xmm3, xmm2, xmm10
          vmulsd  xmm2, xmm1, xmm7
          vaddsd  xmm4, xmm3, xmm2
          vaddsd  xmm1, xmm0, xmm5
          vmulsd  xmm2, xmm1, xmm6
          vmovsd  xmm1, [rsp+930h+var_8E0]
          vaddsd  xmm1, xmm1, [rsp+930h+var_8F0]
          vaddsd  xmm13, xmm4, xmm2
          vaddsd  xmm2, xmm1, xmm7
          vmovsd  xmm1, [rsp+r9*8+930h+var_8D0]
          vmovsd  xmm7, qword ptr [rbx+30h]
        }
        _R8 = 2i64 * (v59 + 3);
        __asm
        {
          vmovsd  xmm10, [rsp+r8*8+930h+var_8C8]
          vsubsd  xmm0, xmm9, xmm10
          vmulsd  xmm9, xmm0, qword ptr [rbx+28h]
          vaddsd  xmm0, xmm2, xmm6
          vmovsd  xmm2, [rsp+rcx*8+930h+var_8D0]
          vmovsd  xmm6, [rsp+r8*8+930h+var_8D0]
          vaddsd  xmm0, xmm0, xmm9
          vmovsd  [rsp+930h+var_8F0], xmm0
          vsubsd  xmm0, xmm2, xmm1
          vaddsd  xmm1, xmm1, qword ptr [rbx-8]
          vmulsd  xmm3, xmm0, qword ptr [rbx]
          vaddsd  xmm2, xmm1, xmm2
          vmovsd  xmm1, [rsp+rdx*8+930h+var_8D0]
          vmulsd  xmm0, xmm3, xmm2
          vaddsd  xmm4, xmm0, [rsp+930h+var_8E8]
          vmovsd  xmm0, [rsp+r10*8+930h+var_8D0]
          vsubsd  xmm1, xmm1, xmm0
          vmulsd  xmm3, xmm1, qword ptr [rbx+10h]
          vaddsd  xmm0, xmm0, qword ptr [rbx+8]
          vaddsd  xmm2, xmm0, xmm15
          vmulsd  xmm1, xmm3, xmm2
          vaddsd  xmm5, xmm4, xmm1
          vmovsd  xmm1, [rsp+rcx*8+930h+var_8D0]
          vaddsd  xmm0, xmm1, qword ptr [rbx+18h]
          vaddsd  xmm3, xmm0, xmm11
          vsubsd  xmm1, xmm11, xmm1
          vmulsd  xmm2, xmm1, qword ptr [rbx+20h]
          vaddsd  xmm1, xmm15, qword ptr [rbx+28h]
          vmulsd  xmm0, xmm3, xmm2
          vaddsd  xmm4, xmm5, xmm0
          vsubsd  xmm0, xmm6, xmm15
          vmulsd  xmm2, xmm0, xmm7
          vaddsd  xmm0, xmm7, [rsp+rdx*8+930h+var_8C8]
          vaddsd  xmm3, xmm1, xmm6
          vmulsd  xmm1, xmm3, xmm2
          vaddsd  xmm3, xmm4, xmm1
          vmovsd  [rsp+930h+var_8E8], xmm3
          vaddsd  xmm2, xmm0, xmm10
        }
        v31 += 4;
        _RBX += 8;
        v59 += 4;
        __asm
        {
          vmulsd  xmm1, xmm2, xmm9
          vaddsd  xmm10, xmm13, xmm1
        }
      }
      while ( v31 < v19 - 3 );
      __asm
      {
        vmovsd  xmm14, [rsp+930h+var_8F0]
        vmovaps xmm15, xmmword ptr [rsp+930h+var_C8+8]
        vmovsd  qword ptr [rsi], xmm3
        vmovsd  qword ptr [rsi+8], xmm10
      }
    }
    if ( v31 < v19 )
    {
      v135 = &v173[2 * v31];
      do
      {
        _RCX = 2i64 * (v31 - 1);
        v135 += 2;
        _RAX = 2i64 * ++v31;
        __asm
        {
          vmovsd  xmm8, [rsp+rcx*8+930h+var_8C8]
          vmovsd  xmm1, [rsp+rcx*8+930h+var_8D0]
          vmovsd  xmm2, [rsp+rax*8+930h+var_8D0]
          vmovsd  xmm7, [rsp+rax*8+930h+var_8C8]
          vsubsd  xmm0, xmm8, xmm7
          vmulsd  xmm6, xmm0, qword ptr [rdx-18h]
          vaddsd  xmm0, xmm1, qword ptr [rdx-18h]
          vaddsd  xmm3, xmm0, xmm2
          vsubsd  xmm1, xmm2, xmm1
          vmulsd  xmm2, xmm1, qword ptr [rdx-10h]
          vaddsd  xmm1, xmm8, qword ptr [rdx-10h]
          vmulsd  xmm3, xmm3, xmm2
          vaddsd  xmm4, xmm3, qword ptr [rsi]
          vaddsd  xmm2, xmm1, xmm7
          vmulsd  xmm3, xmm2, xmm6
          vaddsd  xmm10, xmm10, xmm3
          vmovsd  qword ptr [rsi], xmm4
          vaddsd  xmm14, xmm14, xmm6
        }
      }
      while ( v31 < v19 );
      __asm { vmovsd  qword ptr [rsi+8], xmm10 }
    }
  }
  __asm { vmovaps xmm0, xmm14 }
  _R11 = &v176;
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
  }
  return *(double *)&_XMM0;
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
  int v5; 
  unsigned int v10; 
  FxGlassCrackEdge *firstEdge; 
  unsigned __int8 ptCount; 
  FxGlassVertex *p_vert; 
  int v14; 
  __int16 v16; 

  v5 = 0;
  _RDI = outShard;
  outShard->loopCount = 0;
  outShard->crackCount = 0;
  _RBP = work;
  v10 = 0;
  if ( inLoopCount )
  {
    while ( Glass_ExtractCracksAndHolesFromLoop(_RBP, _RDI, *inLoops) )
    {
      ++v10;
      ++inLoops;
      if ( v10 >= inLoopCount )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( Glass_SetupShard(_RBP, _RDI) )
    {
      _RDI->supportMask = 0;
      firstEdge = _RDI->loops[0].firstEdge;
      do
      {
        ptCount = _RDI->ptCount;
        if ( !firstEdge->type )
          _RDI->supportMask |= 0x80000000 >> ptCount;
        p_vert = &_RDI->geoData[ptCount].vert;
        Glass_EmitShardVertex(_RBP, _RDI, firstEdge->i0, p_vert);
        firstEdge = firstEdge->next;
        v14 = p_vert->y * p_vert->y + p_vert->x * p_vert->x;
        if ( v5 > v14 )
          v14 = v5;
        v5 = v14;
      }
      while ( firstEdge != _RDI->loops[0].firstEdge );
      __asm { vmovss  xmm0, dword ptr [rbp+4C08h] }
      v16 = _RDI->ptCount;
      __asm
      {
        vmulss  xmm2, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, r14
        vmulss  xmm0, xmm1, cs:__real@3a800000
        vaddss  xmm2, xmm2, xmm0
        vsqrtss xmm3, xmm2, xmm2
        vmovss  dword ptr [rdi+4], xmm3
      }
      if ( v16 != _RDI->loops[0].vertCount && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1218, ASSERT_TYPE_SANITY, "( shard->ptCount == shard->loops[0].vertCount )", (const char *)&queryFormat, "shard->ptCount == shard->loops[0].vertCount") )
        __debugbreak();
      _RDI->geoDataUsed += _RDI->ptCount;
      if ( Glass_PackShardHoles(_RBP, _RDI) )
      {
        Glass_PackShardCracks(_RBP, _RDI);
        Glass_TriangulateShard(_RBP, _RDI);
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
  __int64 v35; 
  unsigned int v36; 
  FxGlassCrackEdge *v37; 
  bool v38; 
  __int64 v39; 
  __int64 v40; 
  unsigned int v42; 
  __int64 v43; 
  __int64 *v44; 
  unsigned __int8 **v45; 
  __int64 v46; 
  char *v47; 
  char v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned __int8 *v51; 
  unsigned int v52; 
  char v53; 
  unsigned int v54; 
  unsigned int v55; 
  __int64 v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  __int64 v60; 
  unsigned int v65; 
  __int16 v66; 
  __int64 v67; 
  unsigned __int16 parentLoopIndex; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  FxGlassCrackEdge *v72; 
  unsigned __int8 *v74; 
  __int64 v75[287]; 
  char v76[256]; 

  _RBX = shard;
  memset_0(v76, 255, work->ptCount);
  loopCount = _RBX->loopCount;
  LODWORD(v6) = 0;
  v7 = NULL;
  v8 = edgeLoop;
  v71 = 0i64;
  do
  {
    v9 = (unsigned int)(v6 - 2);
    next = v8->next;
    v72 = next;
    v11 = (unsigned __int8)v76[v8->i1];
    if ( v11 == (_DWORD)v9 )
    {
      v6 = (unsigned int)(v6 - 1);
      if ( (unsigned __int8)v76[v8->i0] != (_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 896, ASSERT_TYPE_SANITY, "( emitAtIndex[edgeIter->i0] == borderCount )", (const char *)&queryFormat, "emitAtIndex[edgeIter->i0] == borderCount") )
        __debugbreak();
      v12 = v75[v6 - 1];
      i0 = v8->i0;
      v71 = v12;
      *(_QWORD *)(v12 + 24) = v7;
      v7 = (FxGlassCrackEdge *)v12;
      v76[i0] = -1;
      if ( (*(_BYTE *)(v12 + 1) != v8->i0 || *(_BYTE *)v12 != v8->i1) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 900, ASSERT_TYPE_SANITY, "( activeCrack->i1 == edgeIter->i0 && activeCrack->i0 == edgeIter->i1 )", (const char *)&queryFormat, "activeCrack->i1 == edgeIter->i0 && activeCrack->i0 == edgeIter->i1") )
        __debugbreak();
      if ( *(_BYTE *)(v75[(unsigned int)(v6 - 1) - 1] + 1) != v8->i1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 901, ASSERT_TYPE_SANITY, "( border[borderCount - 1]->i1 == edgeIter->i1 )", (const char *)&queryFormat, "border[borderCount - 1]->i1 == edgeIter->i1") )
        __debugbreak();
      if ( *((_BYTE *)&v75[255] + v8->i1) )
      {
        crackCount = _RBX->crackCount;
        if ( (_DWORD)crackCount != 64 )
        {
          _RBX->cracks[crackCount] = v7;
          ++_RBX->crackCount;
        }
        v7 = NULL;
        v71 = 0i64;
      }
    }
    else
    {
      if ( v7 )
      {
        v15 = _RBX->crackCount;
        if ( (_DWORD)v15 != 64 )
        {
          _RBX->cracks[v15] = v7;
          ++_RBX->crackCount;
        }
        v7 = NULL;
        v71 = 0i64;
      }
      if ( v11 == 255 )
      {
        if ( (unsigned int)v6 >= 0xFF )
        {
          LODWORD(v70) = 255;
          LODWORD(v69) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 926, ASSERT_TYPE_ASSERT, "(unsigned)( borderCount ) < (unsigned)( ( sizeof( *array_counter( border ) ) + 0 ) )", "borderCount doesn't index ARRAY_COUNT( border )\n\t%i not in [0, %i)", v69, v70) )
            __debugbreak();
        }
        i1 = v8->i1;
        v76[i1] = v6;
        if ( i1 >= 0xFF )
        {
          j___report_rangecheckfailure(v9);
          JUMPOUT(0x141FF8F79i64);
        }
        *((_BYTE *)&v75[255] + i1) = 0;
        v17 = (unsigned int)v6;
        LODWORD(v6) = v6 + 1;
        v75[v17 - 1] = (__int64)v8;
      }
      else
      {
        v18 = _RBX->loopCount;
        if ( v18 == 16 || !(_DWORD)v6 )
          return 0;
        if ( v11 >= (unsigned int)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 941, ASSERT_TYPE_SANITY, "( priorIndex < borderCount - 2 )", (const char *)&queryFormat, "priorIndex < borderCount - 2") )
          __debugbreak();
        v19 = v11 + 2;
        if ( (unsigned int)v19 < (unsigned int)v6 )
        {
          v20 = &v75[v19 - 1];
          do
          {
            v21 = v75[(unsigned int)(v19 - 1) - 1];
            v76[*(unsigned __int8 *)(v21 + 1)] = -1;
            v22 = (char *)*v20;
            *(_QWORD *)(v21 + 24) = *v20;
            v23 = *v22;
            if ( *((_BYTE *)&v75[255] + (unsigned __int8)*v22) )
            {
              v24 = _RBX->loopCount;
              v25 = loopCount;
              if ( loopCount < v24 )
              {
                do
                {
                  if ( _RBX->loops[v25].firstEdge->i0 == v23 )
                    _RBX->loops[v25].parentLoopIndex = v24;
                  ++v25;
                  LOWORD(v24) = _RBX->loopCount;
                }
                while ( v25 < _RBX->loopCount );
              }
            }
            LODWORD(v19) = v19 + 1;
            ++v20;
          }
          while ( (unsigned int)v19 < (unsigned int)v6 );
          v18 = _RBX->loopCount;
        }
        v26 = v75[(unsigned int)(v6 - 1) - 1];
        v27 = *(unsigned __int8 *)(v26 + 1);
        *(_QWORD *)(v26 + 24) = v8;
        v28 = v18;
        v29 = v8->i0;
        v76[v27] = -1;
        if ( *((_BYTE *)&v75[255] + v29) )
        {
          v30 = loopCount;
          if ( loopCount < v18 )
          {
            do
            {
              if ( _RBX->loops[v30].firstEdge->i0 == (_BYTE)v29 )
                _RBX->loops[v30].parentLoopIndex = v18;
              v28 = _RBX->loopCount;
              ++v30;
              LOWORD(v18) = v28;
            }
            while ( v30 < v28 );
          }
        }
        v31 = v8->i1;
        v32 = v28;
        v8->next = (FxGlassCrackEdge *)v75[v11];
        if ( *((_BYTE *)&v75[255] + v31) )
        {
          v33 = loopCount;
          if ( loopCount < v28 )
          {
            do
            {
              if ( _RBX->loops[v33].firstEdge->i0 == (_BYTE)v31 )
                _RBX->loops[v33].parentLoopIndex = v28;
              v32 = _RBX->loopCount;
              ++v33;
              LOWORD(v28) = v32;
            }
            while ( v33 < v32 );
          }
        }
        v34 = v32;
        if ( v32 >= 0x10 )
        {
          LODWORD(v70) = 16;
          LODWORD(v69) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 953, ASSERT_TYPE_ASSERT, "(unsigned)( shard->loopCount ) < (unsigned)( ( sizeof( *array_counter( shard->loops ) ) + 0 ) )", "shard->loopCount doesn't index ARRAY_COUNT( shard->loops )\n\t%i not in [0, %i)", v69, v70) )
          {
            __debugbreak();
            v34 = _RBX->loopCount;
          }
        }
        v35 = (__int64)&_RBX->loops[v34];
        v36 = v34 + 1;
        next = v72;
        _RBX->loopCount = v36;
        v37 = v8->next;
        *(_WORD *)(v35 + 8) = v6 - v11;
        LODWORD(v6) = v11 + 1;
        v7 = (FxGlassCrackEdge *)v71;
        *(_QWORD *)v35 = v37;
        *(_WORD *)(v35 + 10) = -1;
        *((_BYTE *)&v75[255] + v37->i0) = 1;
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
    v39 = v75[0];
    if ( (*v74 != *(_BYTE *)(v75[0] + 1) || v74[1] != *(_BYTE *)v75[0]) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 972, ASSERT_TYPE_SANITY, "( border[0]->i0 == border[1]->i1 && border[0]->i1 == border[1]->i0 )", (const char *)&queryFormat, "border[0]->i0 == border[1]->i1 && border[0]->i1 == border[1]->i0") )
      __debugbreak();
    v40 = _RBX->crackCount;
    *(_QWORD *)(v39 + 24) = v7;
    if ( (_DWORD)v40 != 64 )
    {
      _RBX->cracks[v40] = (FxGlassCrackEdge *)v39;
      ++_RBX->crackCount;
    }
    Glass_ReverseLoopsStartingAt(_RBX, loopCount);
    return 1;
  }
  else
  {
    v42 = _RBX->loopCount;
    if ( v42 == 16 )
      return 0;
    if ( v7 )
    {
      v43 = _RBX->crackCount;
      if ( (_DWORD)v43 != 64 )
      {
        _RBX->cracks[v43] = v7;
        ++_RBX->crackCount;
        v42 = _RBX->loopCount;
      }
    }
    if ( (unsigned int)v6 > 1 )
    {
      v44 = v75;
      v45 = &v74;
      v46 = (unsigned int)(v6 - 1);
      do
      {
        v47 = (char *)*v44;
        *((_QWORD *)*v45 + 3) = *v44;
        v48 = *v47;
        if ( *((_BYTE *)&v75[255] + (unsigned __int8)*v47) )
        {
          v49 = _RBX->loopCount;
          v50 = loopCount;
          if ( loopCount < v49 )
          {
            do
            {
              if ( _RBX->loops[v50].firstEdge->i0 == v48 )
                _RBX->loops[v50].parentLoopIndex = v49;
              ++v50;
              LOWORD(v49) = _RBX->loopCount;
            }
            while ( v50 < _RBX->loopCount );
          }
        }
        ++v45;
        ++v44;
        --v46;
      }
      while ( v46 );
      v42 = _RBX->loopCount;
    }
    v51 = v74;
    *(_QWORD *)(v75[(unsigned int)(v6 - 1) - 1] + 24) = v74;
    v52 = v42;
    v53 = *v51;
    if ( *((_BYTE *)&v75[255] + *v51) )
    {
      v54 = loopCount;
      if ( loopCount < v42 )
      {
        do
        {
          if ( _RBX->loops[v54].firstEdge->i0 == v53 )
            _RBX->loops[v54].parentLoopIndex = v42;
          v52 = _RBX->loopCount;
          ++v54;
          LOWORD(v42) = v52;
        }
        while ( v54 < v52 );
      }
    }
    v55 = v52;
    if ( v52 >= 0x10 )
    {
      LODWORD(v70) = 16;
      LODWORD(v69) = v52;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1003, ASSERT_TYPE_ASSERT, "(unsigned)( shard->loopCount ) < (unsigned)( ( sizeof( *array_counter( shard->loops ) ) + 0 ) )", "shard->loopCount doesn't index ARRAY_COUNT( shard->loops )\n\t%i not in [0, %i)", v69, v70) )
      {
        __debugbreak();
        v55 = _RBX->loopCount;
      }
    }
    v56 = (__int64)&_RBX->loops[v55];
    _RBX->loopCount = v55 + 1;
    *(_QWORD *)v56 = v51;
    *(_WORD *)(v56 + 8) = v6;
    *(_WORD *)(v56 + 10) = -1;
    v57 = _RBX->loopCount;
    if ( loopCount + 1 < v57 )
    {
      v58 = loopCount;
      v59 = v57 - 1;
      do
      {
        v60 = v58++;
        _RCX = (__int64)&_RBX->loops[v60];
        __asm { vmovups xmm1, xmmword ptr [rcx] }
        _RAX = 2i64 * v59--;
        __asm
        {
          vmovups xmm0, xmmword ptr [rbx+rax*8+18h]
          vmovups xmmword ptr [rcx], xmm0
          vmovups xmmword ptr [rbx+rax*8+18h], xmm1
        }
      }
      while ( v58 < v59 );
      v65 = _RBX->loopCount;
      v66 = v65 + loopCount - 1;
      if ( loopCount < v65 )
      {
        do
        {
          v67 = loopCount;
          parentLoopIndex = _RBX->loops[v67].parentLoopIndex;
          if ( parentLoopIndex != 0xFFFF )
            _RBX->loops[v67].parentLoopIndex = v66 - parentLoopIndex;
          ++loopCount;
        }
        while ( loopCount < _RBX->loopCount );
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
  const FxGlassCrackEdge *v4; 
  __int64 i1; 

  v4 = edgeLoop;
  __asm
  {
    vxorps  xmm5, xmm5, xmm5
    vxorps  xmm4, xmm4, xmm4
  }
  _R10 = &work->pts[edgeLoop->i0];
  do
  {
    i1 = v4->i1;
    _R8 = _R10;
    __asm { vmovss  xmm0, dword ptr [r8+4] }
    v4 = v4->next;
    _R10 = &work->pts[i1];
    __asm
    {
      vmovss  xmm1, dword ptr [r10+4]
      vmulss  xmm2, xmm1, dword ptr [r8]
      vmulss  xmm3, xmm0, dword ptr [r10]
      vsubss  xmm0, xmm3, xmm2
      vaddss  xmm4, xmm4, xmm0
    }
  }
  while ( v4 != edgeLoop );
  __asm { vcomiss xmm4, xmm5 }
  return v4 < edgeLoop;
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
bool Glass_PackShardHoles(const FxGlassCrackShardWork *work, FxGlassShard *shard)
{
  FxGlassCrackEdge *v4; 
  FxGlassCrackEdge *firstEdge; 
  __int64 i1; 
  int v18; 
  FxGlassGeometryData *v19; 
  FxGlassCrackEdge *v21; 
  FxGlassCrackEdge *v22; 
  __int64 v24; 
  FxGlassCrackEdge *v31; 
  __int64 i0; 
  int uniqueVertCount; 
  bool result; 

  __asm
  {
    vmovaps [rsp+68h+var_38], xmm6
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm4, xmm4, xmm4
  }
  firstEdge = shard->loops[0].firstEdge;
  v4 = firstEdge;
  _R9 = &work->pts[firstEdge->i0];
  do
  {
    i1 = firstEdge->i1;
    _R8 = _R9;
    __asm { vmovss  xmm0, dword ptr [r8+4] }
    firstEdge = firstEdge->next;
    _R9 = &work->pts[i1];
    __asm
    {
      vmovss  xmm1, dword ptr [r9+4]
      vmulss  xmm2, xmm1, dword ptr [r8]
      vmulss  xmm3, xmm0, dword ptr [r9]
      vsubss  xmm0, xmm3, xmm2
      vaddss  xmm4, xmm4, xmm0
    }
  }
  while ( firstEdge != v4 );
  __asm { vcomiss xmm4, xmm6 }
  if ( firstEdge < v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1230, ASSERT_TYPE_SANITY, "( !Glass_IsEdgeLoopBackwards( work, shard->loops[0].firstEdge ) )", (const char *)&queryFormat, "!Glass_IsEdgeLoopBackwards( work, shard->loops[0].firstEdge )") )
    __debugbreak();
  v18 = 1;
  v19 = &shard->geoData[shard->geoDataUsed];
  shard->holeDataCount = 0;
  if ( shard->loopCount <= 1 )
  {
LABEL_28:
    result = 1;
  }
  else
  {
    while ( 1 )
    {
      __asm { vmovaps xmm4, xmm6 }
      v21 = shard->loops[v18].firstEdge;
      v22 = v21;
      _R8 = &work->pts[v21->i0];
      do
      {
        v24 = v22->i1;
        _RCX = _R8;
        __asm { vmovss  xmm0, dword ptr [rcx+4] }
        v22 = v22->next;
        _R8 = &work->pts[v24];
        __asm
        {
          vmovss  xmm1, dword ptr [r8+4]
          vmulss  xmm2, xmm1, dword ptr [rcx]
          vmulss  xmm3, xmm0, dword ptr [r8]
          vsubss  xmm0, xmm3, xmm2
          vaddss  xmm4, xmm4, xmm0
        }
      }
      while ( v22 != v21 );
      __asm { vcomiss xmm4, xmm6 }
      if ( v22 >= v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1237, ASSERT_TYPE_SANITY, "( Glass_IsEdgeLoopBackwards( work, loop->firstEdge ) )", (const char *)&queryFormat, "Glass_IsEdgeLoopBackwards( work, loop->firstEdge )") )
        __debugbreak();
      v31 = shard->loops[v18].firstEdge;
      i0 = v31->i0;
      if ( shard->loops[v18].parentLoopIndex == 0xFFFF )
      {
        if ( shard->ptIndexMap[i0] != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1241, ASSERT_TYPE_SANITY, "( shard->ptIndexMap[edgeIter->i0] == 0xff )", (const char *)&queryFormat, "shard->ptIndexMap[edgeIter->i0] == GLASS_VERT_INDEX_NONE") )
          __debugbreak();
        v19->vert.x = shard->loops[v18].vertCount;
        v19->vert.y = 255;
      }
      else
      {
        if ( shard->ptIndexMap[i0] == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1250, ASSERT_TYPE_SANITY, "( shard->ptIndexMap[edgeIter->i0] != 0xff )", (const char *)&queryFormat, "shard->ptIndexMap[edgeIter->i0] != GLASS_VERT_INDEX_NONE") )
          __debugbreak();
        v19->vert.x = shard->loops[v18].vertCount - 1;
        v19->vert.y = shard->ptIndexMap[v31->i0];
        v31 = v31->next;
      }
      uniqueVertCount = v19->hole.uniqueVertCount;
      if ( uniqueVertCount + (unsigned int)shard->ptCount > 0x80 )
        break;
      shard->geoDataUsed += uniqueVertCount + 1;
      shard->holeDataCount += v19->hole.uniqueVertCount + 1;
      ++v19;
      do
      {
        Glass_EmitShardVertex(work, shard, v31->i0, &v19->vert);
        v31 = v31->next;
        ++v19;
      }
      while ( v31 != shard->loops[v18].firstEdge );
      if ( v19 != &shard->geoData[shard->geoDataUsed] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1273, ASSERT_TYPE_SANITY, "( geoData == &shard->geoData[shard->geoDataUsed] )", (const char *)&queryFormat, "geoData == &shard->geoData[shard->geoDataUsed]") )
        __debugbreak();
      if ( ++v18 >= shard->loopCount )
        goto LABEL_28;
    }
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
  return result;
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
  __int64 v14; 
  unsigned int v15; 
  bool v17; 
  FxGlassShardEdge *v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v23; 
  int v42; 
  int v43; 
  bool v56; 
  __int64 v59; 
  unsigned int v62; 
  __int64 i0; 

  edgeCount = triang->edgeCount;
  _R11 = triang;
  if ( evalTime > 2u )
    return (3 * edgeCount) >> 4;
  v14 = 0i64;
  __asm { vmovaps [rsp+78h+var_58], xmm10 }
  v15 = edgeCount;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  v17 = edgeCount <= 4;
  if ( edgeCount >= 4 )
  {
    v18 = &_R11->edges[1];
    v19 = edgeCount - 3;
    v20 = 2;
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovaps [rsp+78h+var_28], xmm7
      vmovaps [rsp+78h+var_38], xmm8
      vmovaps [rsp+78h+var_48], xmm9
      vmovaps [rsp+78h+var_68], xmm11
      vmovss  xmm11, dword ptr [r11+0CF4h]
      vmovaps [rsp+78h+var_78], xmm12
      vmovss  xmm12, dword ptr [r11+0CF8h]
    }
    do
    {
      v18 += 4;
      v23 = v14;
      __asm
      {
        vsubss  xmm1, xmm11, dword ptr [r10+rax*8+3FCh]
        vsubss  xmm0, xmm12, dword ptr [r10+rax*8+400h]
        vmulss  xmm1, xmm1, xmm1
        vmulss  xmm2, xmm0, xmm0
        vaddss  xmm8, xmm2, xmm1
        vsubss  xmm1, xmm11, dword ptr [r10+rax*8+3FCh]
        vsubss  xmm0, xmm12, dword ptr [r10+rax*8+400h]
        vcomiss xmm8, xmm10
        vmulss  xmm2, xmm0, xmm0
      }
      if ( v17 )
        v23 = edgeCount;
      edgeCount = v20 + 1;
      __asm
      {
        vsubss  xmm0, xmm12, dword ptr [r10+rax*8+400h]
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm6, xmm2, xmm1
        vsubss  xmm1, xmm11, dword ptr [r10+rax*8+3FCh]
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm4, xmm2, xmm1
        vsubss  xmm0, xmm12, dword ptr [r10+rax*8+400h]
        vsubss  xmm1, xmm11, dword ptr [r10+rax*8+3FCh]
        vmaxss  xmm9, xmm8, xmm10
        vcomiss xmm6, xmm9
      }
      v42 = v20 - 1;
      if ( v17 )
        v42 = v23;
      v43 = v20;
      __asm
      {
        vmaxss  xmm7, xmm6, xmm9
        vcomiss xmm4, xmm7
        vmulss  xmm2, xmm0, xmm0
      }
      if ( v17 )
        v43 = v42;
      __asm
      {
        vmaxss  xmm5, xmm4, xmm7
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm5
        vmaxss  xmm0, xmm3, xmm5
      }
      if ( v17 )
        edgeCount = v43;
      v14 = (unsigned int)(v14 + 4);
      v20 += 4;
      __asm { vmovaps xmm10, xmm0 }
      v17 = (unsigned int)v14 <= v19;
    }
    while ( (unsigned int)v14 < v19 );
    __asm
    {
      vmovaps xmm12, [rsp+78h+var_78]
      vmovaps xmm11, [rsp+78h+var_68]
      vmovaps xmm9, [rsp+78h+var_48]
      vmovaps xmm8, [rsp+78h+var_38]
      vmovaps xmm7, [rsp+78h+var_28]
      vmovaps xmm6, [rsp+78h+var_18]
    }
  }
  v56 = (unsigned int)v14 <= v15;
  if ( (unsigned int)v14 < v15 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [r11+0CF4h]
      vmovss  xmm5, dword ptr [r11+0CF8h]
    }
    v59 = (__int64)&_R11->edges[v14];
    do
    {
      v59 += 2i64;
      __asm
      {
        vsubss  xmm1, xmm4, dword ptr [r10+rax*8+3FCh]
        vsubss  xmm0, xmm5, dword ptr [r10+rax*8+400h]
      }
      v62 = v14;
      __asm
      {
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm10
        vmaxss  xmm10, xmm3, xmm10
      }
      if ( v56 )
        v62 = edgeCount;
      LODWORD(v14) = v14 + 1;
      edgeCount = v62;
      v56 = (unsigned int)v14 <= v15;
    }
    while ( (unsigned int)v14 < v15 );
  }
  __asm { vmovaps xmm10, [rsp+78h+var_58] }
  result = edgeCount;
  i0 = _R11->edges[edgeCount].fields.i0;
  _R11->awayFromPoint.v[0] = work->pts[i0].xy.v[0];
  _R11->awayFromPoint.v[1] = work->pts[i0].xy.v[1];
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
  unsigned int v11; 
  __int16 v12; 
  unsigned __int16 parentLoopIndex; 

  loopCount = shard->loopCount;
  _R8 = shard;
  if ( firstLoopIndex + 1 < loopCount )
  {
    v4 = firstLoopIndex;
    v5 = loopCount - 1;
    do
    {
      v6 = v4++;
      _RCX = (__int64)&_R8->loops[v6];
      __asm { vmovups xmm1, xmmword ptr [rcx] }
      _RAX = 2i64 * v5--;
      __asm
      {
        vmovups xmm0, xmmword ptr [r8+rax*8+18h]
        vmovups xmmword ptr [rcx], xmm0
        vmovups xmmword ptr [r8+rax*8+18h], xmm1
      }
    }
    while ( v4 < v5 );
    v11 = _R8->loopCount;
    v12 = v11 + firstLoopIndex - 1;
    if ( firstLoopIndex < v11 )
    {
      do
      {
        parentLoopIndex = _R8->loops[firstLoopIndex].parentLoopIndex;
        if ( parentLoopIndex != 0xFFFF )
          _R8->loops[firstLoopIndex].parentLoopIndex = v12 - parentLoopIndex;
        ++firstLoopIndex;
      }
      while ( firstLoopIndex < _R8->loopCount );
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
  unsigned int v11; 
  unsigned __int16 *p_parentLoopIndex; 
  unsigned int v14; 

  v3 = i1;
  _RDI = shard;
  v5 = i0;
  if ( i0 >= i1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1056, ASSERT_TYPE_SANITY, "( i0 < i1 )", (const char *)&queryFormat, "i0 < i1") )
    __debugbreak();
  v6 = v3;
  _RDX = (__int64)&_RDI->loops[v3];
  __asm { vmovups xmm1, xmmword ptr [rdx] }
  if ( (unsigned int)v3 > (unsigned int)v5 )
  {
    do
    {
      --v6;
      _RDX -= 16i64;
      _RAX = 2i64 * v6;
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi+rax*8+18h]
        vmovups xmmword ptr [rdx+10h], xmm0
      }
    }
    while ( v6 > (unsigned int)v5 );
  }
  v11 = v5 + 1;
  _RAX = 2 * v5;
  __asm { vmovups xmmword ptr [rdi+rax*8+18h], xmm1 }
  if ( (unsigned int)(v5 + 1) < _RDI->loopCount )
  {
    do
    {
      p_parentLoopIndex = &_RDI->loops[v11].parentLoopIndex;
      v14 = *p_parentLoopIndex;
      if ( v14 <= (unsigned int)v3 )
      {
        if ( v14 == (_DWORD)v3 )
        {
          *p_parentLoopIndex = v5;
        }
        else if ( v14 >= (unsigned int)v5 )
        {
          *p_parentLoopIndex = v14 + 1;
        }
      }
      ++v11;
    }
    while ( v11 < _RDI->loopCount );
  }
}

/*
==============
Glass_SetupShard
==============
*/

bool __fastcall Glass_SetupShard(const FxGlassCrackShardWork *work, FxGlassShard *shard, double _XMM2_8)
{
  unsigned int loopCount; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v16; 
  char v18; 
  __int16 v29; 
  __int16 v36; 
  size_t ptCount; 
  bool result; 
  long double scaledCentroid[2]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps [rsp+0B8h+var_58], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
  }
  loopCount = shard->loopCount;
  __asm { vmovsd  xmm8, cs:__real@4020000000000000 }
  _R14 = shard;
  v12 = 0;
  v13 = loopCount;
  __asm
  {
    vxorpd  xmm6, xmm6, xmm6
    vmovupd xmmword ptr [rsp+0B8h+scaledCentroid], xmm6
    vxorpd  xmm7, xmm7, xmm7
  }
  if ( loopCount )
  {
    v16 = loopCount;
    do
    {
      *(double *)&_XMM0 = Glass_AreaX2AndScaledCentroidForEdgeLoop(work, _R14->loops[v12].firstEdge, scaledCentroid);
      __asm
      {
        vcomisd xmm8, xmm0
        vmovaps xmm6, xmm0
        vaddsd  xmm7, xmm7, xmm0
      }
      v13 = v16;
      if ( v18 )
      {
        if ( loopCount != v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1149, ASSERT_TYPE_SANITY, "( outerIndex == shard->loopCount )", (const char *)&queryFormat, "outerIndex == shard->loopCount") )
        {
          __debugbreak();
          v13 = _R14->loopCount;
        }
        loopCount = v12;
        __asm { vmovaps xmm8, xmm6 }
      }
      ++v12;
      v16 = v13;
    }
    while ( v12 < v13 );
    __asm { vmovupd xmm6, xmmword ptr [rsp+0B8h+scaledCentroid] }
  }
  __asm { vmovddup xmm8, xmm7 }
  if ( loopCount == v13 )
    goto LABEL_20;
  if ( loopCount )
  {
    if ( _R14->loops[loopCount].parentLoopIndex == 0xFFFF || (loopCount = Glass_SwapLoopParentChildRelationship_r(_R14, loopCount)) != 0 )
    {
      Glass_RotateLoops(_R14, 0, loopCount);
      Glass_AssertValidLoopOrder(_R14);
    }
  }
  if ( _R14->loops[0].vertCount > 0x20u )
  {
LABEL_20:
    result = 0;
  }
  else
  {
    __asm { vcomisd xmm7, cs:__real@3eb0c6f7a0b5ed8d }
    if ( _R14->loops[0].vertCount <= 0x20u && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1163, ASSERT_TYPE_SANITY, "( totalAreaX2 > 1.0E-6 )", (const char *)&queryFormat, "totalAreaX2 > ZERO_EPSILON") )
      __debugbreak();
    __asm
    {
      vmulpd  xmm1, xmm8, cs:__xmm@40080000000000004008000000000000
      vcvtsd2ss xmm0, xmm7, xmm7
      vmovss  dword ptr [r14], xmm0
      vdivpd  xmm0, xmm6, xmm1
      vcvtpd2ps xmm8, xmm0
      vmulss  xmm0, xmm8, cs:__real@42000000
      vaddss  xmm1, xmm0, cs:__real@3f000000
      vxorps  xmm2, xmm2, xmm2
      vroundss xmm2, xmm2, xmm1, 1
      vcvttss2si ecx, xmm2; val
    }
    v29 = truncate_cast<short,int>(_ECX);
    __asm
    {
      vshufps xmm0, xmm8, xmm8, 55h ; 'U'
      vmulss  xmm0, xmm0, cs:__real@42000000
      vaddss  xmm1, xmm0, cs:__real@3f000000
      vxorps  xmm2, xmm2, xmm2
      vroundss xmm2, xmm2, xmm1, 1
      vcvttss2si ecx, xmm2; val
    }
    _R14->packedCentroid.x = v29;
    v36 = truncate_cast<short,int>(_ECX);
    ptCount = work->ptCount;
    _R14->packedCentroid.y = v36;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, cs:__real@3d000000
      vmovss  dword ptr [r14+8], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3d000000
      vmovss  dword ptr [r14+0Ch], xmm1
    }
    _R14->geoDataUsed = 0;
    _R14->ptCount = 0;
    memset_0(_R14->ptIndexMap, 255, ptCount);
    result = 1;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
    vmovaps xmm8, [rsp+0B8h+var_68]
  }
  return result;
}

/*
==============
Glass_SimplifyTriangleFan
==============
*/
__int64 Glass_SimplifyTriangleFan(const FxGlassCrackShardWork *work, FxGlassShardTriangulate *triang, unsigned int fanVertCount)
{
  unsigned int edgeCount; 
  unsigned __int8 *v14; 
  unsigned int v15; 
  unsigned __int8 v16; 
  unsigned __int8 v17; 
  unsigned __int8 *v18; 
  __int64 v20; 
  unsigned __int8 v22; 
  unsigned int v23; 
  FxGlassShardEdge *edges; 
  unsigned int v25; 
  bool v26; 
  bool v27; 
  FxGlassShardEdge *v28; 
  __int64 v59; 
  __int16 v68; 
  __int16 v69; 

  _R12 = work;
  if ( fanVertCount <= 6 )
    return fanVertCount;
  edgeCount = triang->edgeCount;
  if ( fanVertCount >= edgeCount - 1 )
    return fanVertCount;
  v14 = &triang->fanData[triang->fanDataUsed];
  v15 = 2;
  v16 = v14[1];
  v17 = v14[2];
  v18 = v14 + 3;
  __asm
  {
    vmovaps [rsp+0A8h+var_88], xmm11
    vmovaps [rsp+0A8h+var_98], xmm12
    vmovss  xmm12, cs:__real@3e8930a3
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps [rsp+0A8h+var_58], xmm8
    vmovaps [rsp+0A8h+var_68], xmm9
    vmovaps [rsp+0A8h+var_78], xmm10
  }
  v20 = fanVertCount - 3;
  __asm { vxorps  xmm11, xmm11, xmm11 }
  do
  {
    v22 = v17;
    LOBYTE(v68) = v16;
    v17 = *v18;
    v23 = 0;
    HIBYTE(v68) = v22;
    if ( edgeCount )
    {
      edges = triang->edges;
      while ( edges->packed != v68 )
      {
        ++v23;
        ++edges;
        if ( v23 >= edgeCount )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v25 = 0;
      LOBYTE(v69) = v22;
      v26 = 0;
      v27 = edgeCount == 0;
      if ( edgeCount )
      {
        v28 = triang->edges;
        while ( 1 )
        {
          HIBYTE(v69) = *v18;
          if ( v28->packed == v69 )
            break;
          ++v25;
          ++v28;
          v26 = v25 < edgeCount;
          v27 = v25 <= edgeCount;
          if ( v25 >= edgeCount )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        _RAX = v22;
        _RCX = v16;
        __asm
        {
          vmovss  xmm1, dword ptr [r12+rax*8+3FCh]
          vmovss  xmm0, dword ptr [r12+rax*8+400h]
          vmovss  xmm7, dword ptr [r12+rcx*8+3FCh]
          vmovss  xmm8, dword ptr [r12+rcx*8+400h]
        }
        _RAX = v17;
        __asm
        {
          vsubss  xmm2, xmm1, xmm7
          vsubss  xmm3, xmm0, xmm8
          vmovss  xmm9, dword ptr [r12+rax*8+3FCh]
          vmovss  xmm10, dword ptr [r12+rax*8+400h]
          vsubss  xmm4, xmm9, xmm1
          vsubss  xmm5, xmm10, xmm0
          vmulss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm5, xmm2
          vsubss  xmm6, xmm1, xmm0
          vcomiss xmm6, xmm11
        }
        if ( !v27 )
        {
          __asm
          {
            vmulss  xmm0, xmm4, xmm2
            vmulss  xmm1, xmm5, xmm3
            vaddss  xmm1, xmm1, xmm0
            vmulss  xmm2, xmm1, xmm12
            vcomiss xmm6, xmm2
          }
          if ( !v26 )
          {
            _RAX = *v14;
            __asm
            {
              vmovss  xmm4, dword ptr [r12+rax*8+3FCh]
              vmovss  xmm2, dword ptr [r12+rax*8+400h]
              vsubss  xmm0, xmm2, xmm8
              vsubss  xmm1, xmm9, xmm4
              vmulss  xmm3, xmm1, xmm0
              vsubss  xmm1, xmm4, xmm7
              vsubss  xmm2, xmm10, xmm2
              vmulss  xmm0, xmm2, xmm1
              vsubss  xmm3, xmm3, xmm0
              vcomiss xmm3, xmm11
            }
          }
        }
      }
    }
    v59 = v15;
    v16 = v22;
    ++v15;
    v14[v59] = v22;
    ++v18;
    --v20;
  }
  while ( v20 );
  __asm
  {
    vmovaps xmm12, [rsp+0A8h+var_98]
    vmovaps xmm11, [rsp+0A8h+var_88]
    vmovaps xmm10, [rsp+0A8h+var_78]
    vmovaps xmm9, [rsp+0A8h+var_68]
    vmovaps xmm8, [rsp+0A8h+var_58]
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm6, [rsp+0A8h+var_38]
  }
  v14[v15] = v14[fanVertCount - 1];
  return v15 + 1;
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
  FxGlassShard *v5; 
  const FxGlassCrackShardWork *v6; 
  __int64 geoDataUsed; 
  unsigned int loopCount; 
  __int64 v9; 
  unsigned int v10; 
  int v11; 
  FxGlassShardEdgeLoop *loops; 
  __int64 v14; 
  FxGlassCrackEdge *firstEdge; 
  int v16; 
  FxGlassCrackEdge *v17; 
  unsigned __int8 i1; 
  __int64 v21; 
  unsigned __int8 i0; 
  unsigned int v30; 
  unsigned int ShardTriangleFanForBaseEdge; 
  unsigned int v32; 
  unsigned int fanDataLimit; 
  unsigned int fanDataUsed; 
  unsigned __int8 *fanData; 
  unsigned __int8 *v36; 
  unsigned __int8 v37; 
  __int64 v38; 
  unsigned int edgeCount; 
  unsigned __int8 v40; 
  int v41; 
  __int64 v42; 
  __int64 v43; 
  unsigned int v44; 
  unsigned int v45; 
  __int64 v46; 
  unsigned __int8 v47; 
  unsigned __int8 v48; 
  unsigned int v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  unsigned __int8 v54; 
  __int16 v55; 
  unsigned int v56; 
  FxGlassShardTriangulate triang; 

  ptCount = work->ptCount;
  v5 = shard;
  v6 = work;
  geoDataUsed = shard->geoDataUsed;
  triang.fanData = (unsigned __int8 *)&v5->geoData[geoDataUsed];
  triang.fanDataLimit = 4 * (231 - geoDataUsed);
  memset_0(triang.evalTime, 0, ptCount);
  loopCount = v5->loopCount;
  v9 = 0i64;
  v10 = 0;
  v11 = 0;
  triang.edgeCount = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+10C0h+triang.awayFromPoint], xmm0
    vmovss  dword ptr [rbp+10C0h+triang.awayFromPoint+4], xmm0
  }
  if ( loopCount )
  {
    loops = v5->loops;
    v14 = loopCount;
    do
    {
      firstEdge = loops->firstEdge;
      v16 = 0;
      v17 = loops->firstEdge;
      do
      {
        __asm { vmovss  xmm0, dword ptr [rbp+10C0h+triang.awayFromPoint] }
        i1 = v17->i1;
        ++v16;
        __asm { vmovss  xmm2, dword ptr [rbp+10C0h+triang.awayFromPoint+4] }
        v21 = v10;
        i0 = v17->i0;
        __asm
        {
          vaddss  xmm1, xmm0, dword ptr [r13+rdx*8+3FCh]
          vaddss  xmm0, xmm2, dword ptr [r13+rdx*8+400h]
        }
        v17 = v17->next;
        __asm
        {
          vmovss  dword ptr [rbp+10C0h+triang.awayFromPoint+4], xmm0
          vmovss  dword ptr [rbp+10C0h+triang.awayFromPoint], xmm1
        }
        triang.edges[v21].fields.i0 = i0;
        triang.edges[triang.edgeCount].fields.i1 = i1;
        v10 = ++triang.edgeCount;
      }
      while ( v17 != firstEdge );
      v11 += v16;
      ++loops;
      --v14;
    }
    while ( v14 );
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vdivss  xmm3, xmm0, xmm1
    vmulss  xmm2, xmm3, dword ptr [rbp+10C0h+triang.awayFromPoint]
    vmulss  xmm1, xmm3, dword ptr [rbp+10C0h+triang.awayFromPoint+4]
    vmovss  dword ptr [rbp+10C0h+triang.awayFromPoint], xmm2
    vmovss  dword ptr [rbp+10C0h+triang.awayFromPoint+4], xmm1
  }
  triang.fanDataUsed = 0;
  v54 = 1;
  v30 = Glass_PickShardTriangleFanBaseEdge(v6, &triang, 1u);
  ShardTriangleFanForBaseEdge = Glass_GetShardTriangleFanForBaseEdge(v6, &triang, 1u, v30);
  v56 = Glass_SimplifyTriangleFan(v6, &triang, ShardTriangleFanForBaseEdge);
  v32 = v56;
  if ( v56 <= 2 )
  {
LABEL_27:
    Core_PrintWarning_Unchecked("GLASS: fanVertCount %u must be greater than 2. Shard will not be triangulated\n", v32);
LABEL_40:
    v5->fanDataCount = 0;
  }
  else
  {
    while ( 1 )
    {
      fanDataLimit = triang.fanDataLimit;
      fanDataUsed = triang.fanDataUsed;
      if ( v32 > triang.fanDataLimit - triang.fanDataUsed - 1 )
      {
        v5 = shard;
        goto LABEL_40;
      }
      fanData = triang.fanData;
      v36 = &triang.fanData[triang.fanDataUsed];
      v37 = v36[v32 - 1];
      if ( v32 )
      {
        v38 = v32;
        edgeCount = triang.edgeCount;
        do
        {
          v40 = v37;
          v37 = *v36;
          HIBYTE(v55) = *v36;
          v41 = 0;
          LOBYTE(v55) = v40;
          if ( edgeCount )
          {
            while ( triang.edges[v41].packed != v55 )
            {
              if ( ++v41 >= edgeCount )
                goto LABEL_13;
            }
            triang.edgeCount = edgeCount - 1;
            triang.edges[v41].packed = triang.edges[edgeCount - 1].packed;
            edgeCount = triang.edgeCount;
          }
          else
          {
LABEL_13:
            if ( edgeCount >= 0x200 )
            {
              LODWORD(v51) = 512;
              LODWORD(v50) = edgeCount;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 563, ASSERT_TYPE_ASSERT, "(unsigned)( triang->edgeCount ) < (unsigned)( 512 )", "triang->edgeCount doesn't index GLASS_CRACK_EDGE_LIMIT\n\t%i not in [0, %i)", v50, v51) )
                __debugbreak();
            }
            triang.edges[edgeCount].fields.i0 = v37;
            triang.edges[triang.edgeCount].fields.i1 = v40;
            edgeCount = ++triang.edgeCount;
          }
          ++v36;
          --v38;
        }
        while ( v38 );
        v6 = work;
        fanData = triang.fanData;
        fanDataLimit = triang.fanDataLimit;
        fanDataUsed = triang.fanDataUsed;
      }
      else
      {
        edgeCount = triang.edgeCount;
      }
      if ( fanDataUsed + v56 + 1 > fanDataLimit )
      {
        LODWORD(v53) = fanDataLimit;
        LODWORD(v52) = fanDataUsed + v56 + 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 723, ASSERT_TYPE_ASSERT, "( triang.fanDataUsed + fanVertCount + 1 ) <= ( triang.fanDataLimit )", "%s <= %s\n\t%i, %i", "triang.fanDataUsed + fanVertCount + 1", "triang.fanDataLimit", v52, v53) )
          __debugbreak();
      }
      v42 = fanDataUsed + v56;
      v43 = (unsigned int)(v42 + 1);
      triang.fanDataUsed = v42 + 1;
      fanData[v42] = -1;
      if ( !edgeCount )
        break;
      v44 = Glass_PickShardTriangleFanBaseEdge(v6, &triang, ++v54);
      v45 = Glass_GetShardTriangleFanForBaseEdge(v6, &triang, v54, v44);
      v56 = Glass_SimplifyTriangleFan(v6, &triang, v45);
      v32 = v56;
      if ( v56 <= 2 )
      {
        v5 = shard;
        goto LABEL_27;
      }
    }
    if ( v54 == 1 )
    {
      v46 = *fanData;
      shard->fanDataCount = 0;
      Glass_RotateBorderVerts(shard, shard->ptIndexMap[v46]);
    }
    else
    {
      if ( (_DWORD)v42 != -1 )
      {
        do
        {
          v47 = fanData[v9];
          if ( v47 != 0xFF )
          {
            v48 = shard->ptIndexMap[v47];
            fanData[v9] = v48;
            if ( v48 == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 742, ASSERT_TYPE_SANITY, "( triang.fanData[fanVertIter] != 0xff )", (const char *)&queryFormat, "triang.fanData[fanVertIter] != GLASS_VERT_INDEX_NONE") )
              __debugbreak();
          }
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < (unsigned int)v43 );
      }
      for ( ; (v43 & 3) != 0; v43 = (unsigned int)(v43 + 1) )
        fanData[v43] = -1;
      v49 = (unsigned int)v43 >> 2;
      shard->geoDataUsed += v49;
      shard->fanDataCount = v49;
    }
  }
}

