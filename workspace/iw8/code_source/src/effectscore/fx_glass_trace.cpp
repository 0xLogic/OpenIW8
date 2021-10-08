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
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vcomiss xmm0, dword ptr [rdx+8]
  }
  return v2;
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
  __int64 hitCount; 
  char v33; 
  bool v34; 
  bool v69; 
  FxGlassPieceState *pieceStates; 
  __int64 geoDataStart; 
  FxGlassGeometryData *geoData; 
  unsigned __int8 vertCount; 
  const FxGlassVertex *p_vert; 
  int v152; 
  unsigned __int8 holeDataCount; 
  __int64 v154; 
  const FxGlassVertex *v155; 
  unsigned __int16 *v156; 
  unsigned __int8 y; 
  const FxGlassVertex *v158; 
  unsigned int x; 
  const FxGlassVertex *v160; 
  int v161; 
  __int64 v162; 
  __int64 v163; 
  __int16 v164; 
  int v165; 
  unsigned int v166; 
  __int64 v175; 
  double v176; 
  __int64 v177; 
  double v178; 
  double v179; 
  double v180; 
  double v181; 
  int point; 
  int val; 
  unsigned int v184; 
  int v185[16]; 
  char v188; 
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
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RDI = glassSys->piecePlaces;
  _RBP = trace;
  hitCount = trace->hitCount;
  _RBX = pieceIndex;
  v184 = pieceIndex;
  _R15 = hitCount;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rdi+10h]
    vsubss  xmm11, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rbx+rdi+14h]
    vsubss  xmm10, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rbx+rdi+18h]
    vsubss  xmm9, xmm0, dword ptr [rdx+8]
    vmulss  xmm0, xmm11, dword ptr [rdx+0Ch]
    vmulss  xmm1, xmm10, dword ptr [rdx+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rdx+14h]
    vaddss  xmm0, xmm2, xmm1; val
    vmovss  xmm2, dword ptr [rdx+18h]; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm15, xmm15, xmm15
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm3, dword ptr [rbp+0Ch]
    vmulss  xmm0, xmm3, dword ptr [rbp+10h]
    vmovss  xmm5, dword ptr [rbx+rdi+1Ch]
    vaddss  xmm6, xmm1, xmm11
    vmulss  xmm1, xmm3, dword ptr [rbp+14h]
    vaddss  xmm2, xmm0, xmm10
    vaddss  xmm4, xmm1, xmm9
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm5, xmm5
    vcomiss xmm4, xmm0
  }
  if ( v33 | v34 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+rdi+4]
      vmovss  xmm5, dword ptr [rbx+rdi]
      vmovss  xmm6, dword ptr [rbx+rdi+8]
      vmovss  xmm7, dword ptr [rbx+rdi+0Ch]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmovaps [rsp+178h+var_A8], xmm12
      vmulss  xmm0, xmm7, xmm7
      vmovaps [rsp+178h+var_B8], xmm13
      vmovss  xmm13, cs:__real@3f800000
      vaddss  xmm2, xmm3, xmm0
      vsubss  xmm1, xmm2, xmm13
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, cs:__real@3b03126f
    }
    if ( !v33 )
    {
      __asm
      {
        vsqrtss xmm0, xmm2, xmm2
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+178h+var_130], xmm1
        vcvtss2sd xmm0, xmm4, xmm4
        vcvtss2sd xmm2, xmm7, xmm7
        vmovsd  [rsp+178h+var_138], xmm2
        vcvtss2sd xmm3, xmm6, xmm6
        vmovsd  [rsp+178h+var_140], xmm3
        vmovsd  [rsp+178h+var_148], xmm0
        vcvtss2sd xmm4, xmm5, xmm5
        vmovsd  [rsp+178h+var_150], xmm4
      }
      v69 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v176, v178, v179, v180, v181);
      v33 = 0;
      v34 = !v69;
      if ( v69 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+rdi+4]
      vmovss  xmm4, dword ptr [rbx+rdi+8]
      vmovss  xmm3, dword ptr [rbx+rdi+0Ch]
      vmovss  xmm5, cs:__real@40000000
      vmulss  xmm1, xmm5, dword ptr [rbx+rdi]
      vmulss  xmm12, xmm1, dword ptr [rbx+rdi]
      vmulss  xmm9, xmm4, xmm1
      vmulss  xmm6, xmm2, xmm1
      vmulss  xmm10, xmm3, xmm1
      vmulss  xmm0, xmm2, xmm5
      vmulss  xmm11, xmm2, xmm0
      vmulss  xmm8, xmm4, xmm0
      vmulss  xmm7, xmm3, xmm0
      vmulss  xmm0, xmm4, xmm5
      vmulss  xmm2, xmm0, xmm3
      vmulss  xmm5, xmm0, xmm4
      vaddss  xmm1, xmm5, xmm11
      vsubss  xmm0, xmm13, xmm1
      vmovss  dword ptr [rbp+r15*8+2Ch], xmm0
      vsubss  xmm0, xmm9, xmm7
      vaddss  xmm1, xmm2, xmm6
      vmovss  dword ptr [rbp+r15*8+30h], xmm1
      vmovss  dword ptr [rbp+r15*8+34h], xmm0
      vsubss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rbp+r15*8+38h], xmm1
      vaddss  xmm1, xmm8, xmm10
      vaddss  xmm0, xmm5, xmm12
      vsubss  xmm0, xmm13, xmm0
      vmovss  dword ptr [rbp+r15*8+3Ch], xmm0
      vmovss  dword ptr [rbp+r15*8+40h], xmm1
      vaddss  xmm0, xmm7, xmm9
      vmovss  dword ptr [rbp+r15*8+44h], xmm0
      vsubss  xmm1, xmm8, xmm10
      vmovss  dword ptr [rbp+r15*8+48h], xmm1
      vaddss  xmm0, xmm11, xmm12
      vmovaps xmm12, [rsp+178h+var_A8]
      vsubss  xmm0, xmm13, xmm0
      vmovaps xmm13, [rsp+178h+var_B8]
      vmovss  dword ptr [rbp+r15*8+4Ch], xmm0
      vmovss  xmm7, dword ptr [rbp+r15*8+48h]
      vmulss  xmm1, xmm7, dword ptr [rbp+10h]
      vmovss  xmm3, dword ptr [rbp+r15*8+44h]
      vmovaps xmm8, xmm0
      vmulss  xmm0, xmm3, dword ptr [rbp+0Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rbp+14h]
      vaddss  xmm9, xmm2, xmm1
      vandps  xmm0, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3a83126f
    }
    if ( !v33 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rdi+10h]
        vsubss  xmm4, xmm0, dword ptr [rbp+0]
        vmovss  xmm1, dword ptr [rbx+rdi+14h]
        vmovss  xmm0, dword ptr [rbx+rdi+18h]
        vsubss  xmm5, xmm1, dword ptr [rbp+4]
        vsubss  xmm6, xmm0, dword ptr [rbp+8]
        vmulss  xmm0, xmm3, xmm4
        vmulss  xmm1, xmm7, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm6
        vaddss  xmm2, xmm2, xmm1
        vdivss  xmm3, xmm2, xmm9
        vcomiss xmm3, xmm15
        vmovss  dword ptr [rbp+r15*8+28h], xmm3
      }
      if ( !(v33 | v34) )
      {
        __asm { vcomiss xmm3, dword ptr [rbp+18h] }
        if ( v33 )
        {
          __asm
          {
            vmulss  xmm0, xmm3, dword ptr [rbp+0Ch]
            vmulss  xmm1, xmm3, dword ptr [rbp+10h]
          }
          pieceStates = glassSys->pieceStates;
          __asm
          {
            vsubss  xmm7, xmm0, xmm4
            vmulss  xmm0, xmm3, dword ptr [rbp+14h]
            vsubss  xmm6, xmm0, xmm6
            vmulss  xmm0, xmm7, dword ptr [rbp+r15*8+2Ch]
          }
          geoDataStart = pieceStates[_RBX].geoDataStart;
          __asm
          {
            vsubss  xmm5, xmm1, xmm5
            vmulss  xmm1, xmm5, dword ptr [rbp+r15*8+30h]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, dword ptr [rbp+r15*8+34h]
            vaddss  xmm0, xmm2, xmm1
            vmulss  xmm2, xmm0, cs:__real@42000000
            vaddss  xmm1, xmm2, cs:__real@3f000000
            vxorps  xmm0, xmm0, xmm0
            vroundss xmm0, xmm0, xmm1, 1
            vmulss  xmm1, xmm5, dword ptr [rbp+r15*8+3Ch]
            vcvttss2si eax, xmm0
            vmulss  xmm0, xmm7, dword ptr [rbp+r15*8+38h]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, dword ptr [rbp+r15*8+40h]
            vaddss  xmm0, xmm2, xmm1
            vmulss  xmm2, xmm0, cs:__real@42000000
            vaddss  xmm3, xmm2, cs:__real@3f000000
          }
          point = _EAX;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vroundss xmm1, xmm1, xmm3, 1
            vcvttss2si eax, xmm1
          }
          val = _EAX;
          geoData = glassSys->geoData;
          vertCount = pieceStates[_RBX].vertCount;
          p_vert = &geoData[geoDataStart].vert;
          if ( vertCount )
          {
            v152 = vertCount;
            if ( Glass_DoesEdgeLoopContainPoint(p_vert, p_vert + 1, vertCount - 1, 0, &point) )
            {
              holeDataCount = pieceStates[_RBX].holeDataCount;
              if ( holeDataCount )
              {
                v154 = 0i64;
                v155 = &p_vert[vertCount];
                v156 = (unsigned __int16 *)&v155[holeDataCount];
                while ( 1 )
                {
                  y = v155->y;
                  if ( y == 0xFF )
                  {
                    v158 = v155 + 2;
                    x = (unsigned __int16)v155->x - 1;
                    v160 = v155 + 1;
                  }
                  else
                  {
                    v161 = v154;
                    if ( (_DWORD)v154 )
                    {
                      do
                      {
                        v162 = (unsigned int)(v161 - 1);
                        if ( y >= (unsigned int)v185[v162] )
                          break;
                        --v161;
                      }
                      while ( (_DWORD)v162 );
                    }
                    x = (unsigned __int16)v155->x;
                    v158 = v155 + 1;
                    v160 = &p_vert[v161 + y];
                  }
                  if ( !Glass_DoesEdgeLoopContainPoint(v160, v158, x, 1, &point) )
                    break;
                  if ( (unsigned int)v154 >= 0xF )
                  {
                    LODWORD(v177) = 15;
                    LODWORD(v175) = v154;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_trace.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( holeCount ) < (unsigned)( ( sizeof( *array_counter( firstHoleVert ) ) + 0 ) )", "holeCount doesn't index ARRAY_COUNT( firstHoleVert )\n\t%i not in [0, %i)", v175, v177) )
                      __debugbreak();
                  }
                  v163 = (unsigned __int16)v155->x;
                  v185[v154] = v152;
                  v154 = (unsigned int)(v154 + 1);
                  v152 += v163;
                  v155 += v163 + 1;
                  if ( v155 == (const FxGlassVertex *)v156 )
                    goto LABEL_23;
                }
              }
              else
              {
LABEL_23:
                v164 = truncate_cast<short,int>(point);
                v165 = val;
                _RBP->hits[_R15].breakOrg.x = v164;
                _RBP->hits[_R15].breakOrg.y = truncate_cast<short,int>(v165);
                _RBP->hits[_R15].pieceIndex = v184;
                v166 = _RBP->hitCount;
                if ( v166 == 4 )
                  std::_Sort_unchecked<FxGlassTraceHit *,bool (*)(FxGlassTraceHit const &,FxGlassTraceHit const &)>(_RBP->hits, (FxGlassTraceHit *)&_RBP[1], 5i64, Glass_CompareTraceHits);
                else
                  _RBP->hitCount = v166 + 1;
              }
            }
          }
        }
      }
    }
  }
  _R11 = &v188;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
Glass_TraceLine
==============
*/
void Glass_TraceLine(FxGlassSystem *glassSys, const vec3_t *start, const vec3_t *end, const vec3_t *playerOrigin)
{
  const vec3_t *v8; 
  unsigned int pieceWordCount; 
  unsigned int v17; 
  unsigned int hitCount; 
  unsigned int v19; 
  unsigned int v38; 
  __int64 v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int pieceIndex; 
  __int64 v51; 
  __int64 v52; 
  unsigned int v53; 
  vec3_t impactPos; 
  FxGlassTrace trace; 

  _R13 = start;
  v8 = playerOrigin;
  _RBX = end;
  if ( Sys_IsWorkerCmdWaiting(WRKCMD_DPVS_CELL_GLASS, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_trace.cpp", 206, ASSERT_TYPE_ASSERT, "(!Sys_IsWorkerCmdWaiting( WRKCMD_DPVS_CELL_GLASS, nullptr ))", (const char *)&queryFormat, "!Sys_IsWorkerCmdWaiting( WRKCMD_DPVS_CELL_GLASS, nullptr )") )
    __debugbreak();
  if ( glass_break->current.enabled )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [r13+0]
      vmovss  xmm3, dword ptr [r13+4]
      vmovss  xmm2, dword ptr [r13+8]
      vmovss  xmm0, dword ptr [rbx]
    }
    pieceWordCount = glassSys->pieceWordCount;
    __asm
    {
      vsubss  xmm5, xmm0, xmm1
      vmovss  xmm0, dword ptr [rbx+8]
    }
    v17 = 0;
    hitCount = 0;
    __asm { vmovaps [rsp+1E8h+var_48], xmm6 }
    v19 = 0;
    __asm { vmovaps [rsp+1E8h+var_58], xmm7 }
    trace.hitCount = 0;
    v53 = pieceWordCount;
    __asm
    {
      vsubss  xmm7, xmm0, xmm2
      vmovss  dword ptr [rsp+1E8h+trace.start], xmm1
      vmovss  xmm1, dword ptr [rbx+4]
      vsubss  xmm6, xmm1, xmm3
      vmulss  xmm0, xmm7, xmm7
      vmovss  dword ptr [rsp+1E8h+trace.start+8], xmm2
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vmovss  dword ptr [rsp+1E8h+trace.start+4], xmm3
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovaps xmm6, [rsp+1E8h+var_48]
      vmovss  dword ptr [rsp+1E8h+trace.dir], xmm0
      vmulss  xmm0, xmm7, xmm2
      vmovaps xmm7, [rsp+1E8h+var_58]
      vmovss  dword ptr [rsp+1E8h+trace.dir+8], xmm0
      vmovss  dword ptr [rsp+1E8h+trace.dir+4], xmm1
      vmovss  [rsp+1E8h+trace.len], xmm4
    }
    if ( pieceWordCount )
    {
      v38 = pieceWordCount;
      v39 = 0i64;
      do
      {
        v40 = glassSys->isInUse[v39];
        if ( v40 )
        {
          do
          {
            v41 = __lzcnt(v40);
            if ( v41 >= 0x20 )
            {
              LODWORD(v52) = 32;
              LODWORD(v51) = v41;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v51, v52) )
                __debugbreak();
            }
            v40 &= ~(0x80000000 >> v41);
            Glass_TraceAgainstPiece(glassSys, &trace, v41 | (32 * v19));
          }
          while ( v40 );
          v38 = v53;
        }
        ++v19;
        ++v39;
      }
      while ( v19 < v38 );
      hitCount = trace.hitCount;
      v8 = playerOrigin;
    }
    if ( hitCount )
    {
      do
      {
        _RCX = 6i64 * v17;
        pieceIndex = trace.hits[v17].pieceIndex;
        if ( (glassSys->pieceStates[pieceIndex].flags & 2) != 0 )
        {
          __asm
          {
            vmovss  xmm3, [rsp+rcx*8+1E8h+trace.hits.dist]
            vmulss  xmm1, xmm3, dword ptr [rsp+1E8h+trace.dir]
            vaddss  xmm2, xmm1, dword ptr [r13+0]
            vmulss  xmm1, xmm3, dword ptr [rsp+1E8h+trace.dir+4]
            vmovss  dword ptr [rsp+1E8h+impactPos], xmm2
            vaddss  xmm2, xmm1, dword ptr [r13+4]
            vmulss  xmm1, xmm3, dword ptr [rsp+1E8h+trace.dir+8]
            vmovss  dword ptr [rsp+1E8h+impactPos+4], xmm2
            vaddss  xmm2, xmm1, dword ptr [r13+8]
            vmovss  dword ptr [rsp+1E8h+impactPos+8], xmm2
          }
          Glass_DestroySimplePiece(glassSys, pieceIndex, &impactPos, &trace.dir, v8);
          hitCount = trace.hitCount;
        }
        ++v17;
      }
      while ( v17 < hitCount );
    }
    Glass_CompactData(glassSys);
  }
}

