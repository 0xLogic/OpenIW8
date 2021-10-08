/*
==============
Glass_GetGlassSystemForTransientIndex
==============
*/

FxGlassSystem *__fastcall Glass_GetGlassSystemForTransientIndex(const unsigned int transientIndex)
{
  return ?Glass_GetGlassSystemForTransientIndex@@YAPEAUFxGlassSystem@@I@Z(transientIndex);
}

/*
==============
FX_GenerateGlassVertsCmd
==============
*/

void __fastcall FX_GenerateGlassVertsCmd(const void *const cmdInfo)
{
  ?FX_GenerateGlassVertsCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
FX_GlassPiecesInSphere
==============
*/

bool __fastcall FX_GlassPiecesInSphere(const Sphere *sphere, unsigned __int16 *pieceIndices, unsigned int maxPieces, unsigned int *pieceCount)
{
  return ?FX_GlassPiecesInSphere@@YA_NPEBUSphere@@PEAGIPEAI@Z(sphere, pieceIndices, maxPieces, pieceCount);
}

/*
==============
FX_GlassTrisInPiece
==============
*/

bool __fastcall FX_GlassTrisInPiece(unsigned int pieceIndex, const vec3_t *normal, GlassTri *tris, unsigned int maxTris, vec3_t *verts, unsigned int maxVerts, unsigned int *triCount, vec3_t *outGlassNormal)
{
  return ?FX_GlassTrisInPiece@@YA_NIAEBTvec3_t@@PEAUGlassTri@@IPEAT1@IPEAIAEAT1@@Z(pieceIndex, normal, tris, maxTris, verts, maxVerts, triCount, outGlassNormal);
}

/*
==============
FX_GlassPieceMaterial
==============
*/

const Material *__fastcall FX_GlassPieceMaterial(unsigned int pieceIndex)
{
  return ?FX_GlassPieceMaterial@@YAPEBUMaterial@@I@Z(pieceIndex);
}

/*
==============
FX_GlassUpdatePieceLightingCmd
==============
*/

void __fastcall FX_GlassUpdatePieceLightingCmd(const void *const cmd)
{
  ?FX_GlassUpdatePieceLightingCmd@@YAXQEBX@Z(cmd);
}

/*
==============
FX_GenerateGlassVertsCmd
==============
*/
void FX_GenerateGlassVertsCmd(const void *const cmdInfo)
{
  if ( !*((_QWORD *)cmdInfo + 12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1463, ASSERT_TYPE_ASSERT, "(cmd->glassGlobals)", (const char *)&queryFormat, "cmd->glassGlobals") )
    __debugbreak();
  Glass_GenerateVerts(*((const FxGlassGlobals **)cmdInfo + 12), *((FxGlassVisInfo **)cmdInfo + 17), (const FxGenerateGlassVertsCmd *const)cmdInfo);
}

/*
==============
FX_GlassPieceMaterial
==============
*/
Material *FX_GlassPieceMaterial(unsigned int pieceIndex)
{
  __asm { prefetcht0 byte ptr cs:?fxWorld@@3UFxWorld@@A.glassSys.time; FxWorld fxWorld }
  _RAX = &fxWorld.glassSys.pieceStates[pieceIndex];
  __asm
  {
    prefetcht0 byte ptr [rax]
    prefetcht0 byte ptr cs:?fxWorld@@3UFxWorld@@A.glassGlob.defCount; FxWorld fxWorld
  }
  _RAX = &fxWorld.glassGlob.defs[_RAX->defIndex];
  __asm { prefetcht0 byte ptr [rax] }
  return _RAX->material;
}

/*
==============
FX_GlassPiecesInSphere
==============
*/
bool FX_GlassPiecesInSphere(const Sphere *sphere, unsigned __int16 *pieceIndices, unsigned int maxPieces, unsigned int *pieceCount)
{
  __int64 v16; 
  unsigned int v21; 
  int v22; 
  unsigned int v23; 
  bool v62; 
  bool result; 
  __int64 v97; 
  double v98; 
  __int64 v99; 
  double v100; 
  double v101; 
  double v102; 
  double v103; 
  int v104; 
  int v105; 
  unsigned int pieceWordCount; 
  char v110; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _R13 = sphere;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps [rsp+138h+var_C8], xmm14
    prefetcht0 byte ptr cs:?fxWorld@@3UFxWorld@@A.glassSys.time; FxWorld fxWorld
  }
  v16 = 0i64;
  *pieceCount = 0;
  v105 = 0;
  pieceWordCount = fxWorld.glassSys.pieceWordCount;
  if ( fxWorld.glassSys.pieceWordCount )
  {
    __asm
    {
      vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm12, cs:__real@3f800000
      vmovss  xmm13, cs:__real@3b03126f
      vmovss  xmm14, cs:__real@40000000
    }
    do
    {
      v21 = fxWorld.glassSys.isInUse[v16];
      if ( v21 )
      {
        v22 = 32 * v16;
        v104 = 32 * v16;
        while ( 1 )
        {
          v23 = __lzcnt(v21);
          if ( v23 >= 0x20 )
          {
            LODWORD(v99) = 32;
            LODWORD(v97) = v23;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v97, v99) )
              __debugbreak();
          }
          _RSI = v23 | v22;
          v21 &= ~(0x80000000 >> v23);
          _RAX = fxWorld.glassSys.pieceStates;
          _RBX = _RSI;
          __asm { prefetcht0 byte ptr [rbx+rax] }
          if ( (fxWorld.glassSys.pieceStates[_RSI].flags & 0x48) == 0 )
          {
            _RDI = fxWorld.glassSys.piecePlaces;
            __asm
            {
              prefetcht0 byte ptr [rbx+rdi]
              vmovss  xmm0, dword ptr [r13+0]
              vsubss  xmm8, xmm0, dword ptr [rbx+rdi+10h]
              vmovss  xmm0, dword ptr [r13+8]
              vmovss  xmm1, dword ptr [r13+4]
              vsubss  xmm9, xmm1, dword ptr [rbx+rdi+14h]
              vsubss  xmm10, xmm0, dword ptr [rbx+rdi+18h]
              vmovss  xmm0, dword ptr [rbx+rdi+1Ch]
              vaddss  xmm5, xmm0, dword ptr [r13+0Ch]
              vmulss  xmm1, xmm8, xmm8
              vmulss  xmm2, xmm9, xmm9
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm10, xmm10
              vaddss  xmm4, xmm3, xmm0
              vmulss  xmm1, xmm5, xmm5
              vcomiss xmm4, xmm1
            }
            if ( (fxWorld.glassSys.pieceStates[_RBX].flags & 0x48) == 0 )
            {
              _R12 = fxWorld.glassSys.halfThickness;
              __asm
              {
                prefetcht0 byte ptr [r12+rsi*4]
                vmovss  xmm4, dword ptr [rbx+rdi+4]
                vmovss  xmm5, dword ptr [rbx+rdi]
                vmovss  xmm6, dword ptr [rbx+rdi+8]
                vmovss  xmm7, dword ptr [rbx+rdi+0Ch]
                vmulss  xmm1, xmm5, xmm5
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm6, xmm6
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm7, xmm7
                vaddss  xmm2, xmm3, xmm0
                vsubss  xmm1, xmm2, xmm12
                vandps  xmm1, xmm1, xmm11
                vcomiss xmm1, xmm13
                vsqrtss xmm0, xmm2, xmm2
                vcvtss2sd xmm1, xmm0, xmm0
                vmovsd  [rsp+138h+var_F0], xmm1
                vcvtss2sd xmm0, xmm4, xmm4
                vcvtss2sd xmm2, xmm7, xmm7
                vmovsd  [rsp+138h+var_F8], xmm2
                vcvtss2sd xmm3, xmm6, xmm6
                vmovsd  [rsp+138h+var_100], xmm3
                vmovsd  [rsp+138h+var_108], xmm0
                vcvtss2sd xmm4, xmm5, xmm5
                vmovsd  [rsp+138h+var_110], xmm4
              }
              v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 38, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v98, v100, v101, v102, v103);
              if ( v62 )
                __debugbreak();
              __asm
              {
                vmovss  xmm7, dword ptr [rbx+rdi+4]
                vmovss  xmm6, dword ptr [rbx+rdi]
                vmulss  xmm1, xmm7, dword ptr [rbx+rdi+8]
                vmulss  xmm0, xmm6, dword ptr [rbx+rdi+0Ch]
                vmulss  xmm3, xmm6, dword ptr [rbx+rdi+8]
                vsubss  xmm1, xmm1, xmm0
                vmulss  xmm0, xmm7, dword ptr [rbx+rdi+0Ch]
                vmulss  xmm2, xmm1, xmm14
                vaddss  xmm1, xmm3, xmm0
                vmulss  xmm4, xmm2, xmm9
                vmulss  xmm2, xmm1, xmm14
                vmulss  xmm3, xmm2, xmm8
                vmulss  xmm1, xmm6, xmm6
                vmulss  xmm0, xmm7, xmm7
                vaddss  xmm1, xmm1, xmm0
                vmulss  xmm2, xmm1, xmm14
                vsubss  xmm0, xmm12, xmm2
                vmulss  xmm1, xmm0, xmm10
                vmovss  xmm0, dword ptr [r13+0Ch]
                vaddss  xmm5, xmm4, xmm3
                vaddss  xmm3, xmm5, xmm1
                vaddss  xmm1, xmm0, dword ptr [r12+rsi*4]
                vandps  xmm3, xmm3, xmm11
                vcomiss xmm3, xmm1
              }
              if ( !v62 )
              {
                if ( *pieceCount >= maxPieces )
                {
                  result = 0;
                  goto LABEL_20;
                }
                pieceIndices[(*pieceCount)++] = truncate_cast<unsigned short,unsigned int>(_RSI);
              }
            }
            v22 = v104;
          }
          if ( !v21 )
          {
            LODWORD(v16) = v105;
            break;
          }
        }
      }
      v16 = (unsigned int)(v16 + 1);
      v105 = v16;
    }
    while ( (unsigned int)v16 < pieceWordCount );
  }
  result = 1;
LABEL_20:
  __asm { vmovaps xmm14, [rsp+138h+var_C8] }
  _R11 = &v110;
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
FX_GlassTrisInPiece
==============
*/
bool FX_GlassTrisInPiece(unsigned int pieceIndex, const vec3_t *normal, GlassTri *tris, unsigned int maxTris, vec3_t *verts, unsigned int maxVerts, unsigned int *triCount, vec3_t *outGlassNormal)
{
  __int64 v11; 
  __int64 v12; 
  FxGlassGeometryData *v23; 
  bool result; 
  float v37; 
  float v38; 
  unsigned int vertIndex; 
  vec3_t *v40; 
  vec3_t *v41; 
  FxGlassGeometryData *geoData; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+0F8h+var_48], xmm6 }
  v41 = verts;
  v40 = outGlassNormal;
  v11 = pieceIndex;
  if ( maxVerts > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1357, ASSERT_TYPE_ASSERT, "(maxVerts <= 0xffff)", (const char *)&queryFormat, "maxVerts <= USHRT_MAX") )
    __debugbreak();
  __asm
  {
    prefetcht0 byte ptr cs:?fxWorld@@3UFxWorld@@A.glassGlob.defCount; FxWorld fxWorld
    prefetcht0 byte ptr cs:?fxWorld@@3UFxWorld@@A.glassSys.time; FxWorld fxWorld
  }
  *triCount = 0;
  v12 = v11;
  _R14 = &fxWorld.glassSys.pieceStates[v11];
  vertIndex = 0;
  __asm { prefetcht0 byte ptr [r14] }
  _R12 = &fxWorld.glassSys.piecePlaces[v12];
  __asm { prefetcht0 byte ptr [r12] }
  _R15 = &fxWorld.glassGlob.defs[fxWorld.glassSys.pieceStates[v12].defIndex];
  __asm { prefetcht0 byte ptr [r15] }
  geoData = &fxWorld.glassSys.geoData[fxWorld.glassSys.pieceStates[v12].geoDataStart];
  __asm { prefetcht0 byte ptr [rax] }
  UnitQuatToAxis(&fxWorld.glassSys.piecePlaces[v12].frame.quat, &axis);
  __asm
  {
    vmovaps xmm3, cs:__xmm@3d0000003d0000003d0000003d000000
    vmulss  xmm0, xmm3, dword ptr [rsp+0F8h+axis+10h]
    vmulps  xmm1, xmm3, xmmword ptr [rsp+0F8h+axis]
    vmulss  xmm2, xmm3, dword ptr [rsp+0F8h+axis+14h]
  }
  _RAX = v40;
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0F8h+axis+18h]
    vmovss  xmm3, dword ptr [rsp+0F8h+axis+20h]
  }
  v23 = geoData;
  __asm
  {
    vmovss  dword ptr [rax], xmm4
    vmovss  dword ptr [rax+8], xmm3
    vmovss  dword ptr [rsp+0F8h+axis+10h], xmm0
    vmovss  xmm0, dword ptr [rsp+0F8h+axis+1Ch]
    vmovss  dword ptr [rax+4], xmm0
    vmovups xmmword ptr [rsp+0F8h+axis], xmm1
    vmulss  xmm1, xmm0, dword ptr [r13+4]
    vmulss  xmm0, xmm4, dword ptr [r13+0]
    vmovss  dword ptr [rsp+0F8h+axis+14h], xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [r13+8]
    vmovss  xmm3, cs:__real@3f800000
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@bf800000
    vxorps  xmm0, xmm0, xmm0
    vcmpltss xmm4, xmm0, xmm2
    vblendvps xmm6, xmm1, xmm3, xmm4
    vmovss  [rsp+0F8h+var_C8], xmm6
  }
  if ( !FX_GlassTris_AddGlassPieceVerts(&fxWorld.glassSys, _R15, _R14, _R12, v23, &axis, v37, v41, &vertIndex, maxVerts) )
    goto LABEL_5;
  __asm { vmovss  [rsp+0F8h+var_C8], xmm6 }
  if ( FX_GlassTris_AddGlassPieceTris(&fxWorld.glassSys, _R15, _R14, _R12, v23, &axis, v38, 0, tris, triCount, maxTris) )
  {
    result = 1;
  }
  else
  {
LABEL_5:
    *triCount = 0;
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+0F8h+var_48] }
  return result;
}

/*
==============
FX_GlassTris_AddGlassPieceTris
==============
*/
bool FX_GlassTris_AddGlassPieceTris(const FxGlassSystem *glassSys, const FxGlassDef *def, const FxGlassPieceState *pieceState, const FxGlassPiecePlace *piecePlace, const FxGlassGeometryData *geoData, const tmat33_t<vec3_t> *axis, float side, unsigned int startVertIndex, GlassTri *tris, unsigned int *triIndex, unsigned int maxTris)
{
  unsigned __int8 fanDataCount; 
  int vertCount; 
  unsigned int v17; 
  unsigned int v18; 
  GlassTri *v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  bool result; 
  unsigned int *v25; 
  const FxGlassGeometryData *v28; 
  __int64 v29; 
  unsigned int v30; 
  unsigned __int8 v31; 
  __int64 v32; 
  unsigned __int16 v33; 
  GlassTri *v34; 
  __int16 v35; 
  __int64 v36; 
  bool v37; 
  unsigned __int16 v38; 
  __int16 v39; 
  __int64 v40; 
  unsigned __int16 v41; 
  __int64 v44; 
  __int64 v45; 
  const FxGlassGeometryData *v48; 

  fanDataCount = pieceState->fanDataCount;
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
  }
  if ( fanDataCount )
  {
    v25 = triIndex;
    __asm
    {
      vmovss  xmm6, [rsp+88h+side]
      vxorps  xmm7, xmm7, xmm7
    }
    v28 = &geoData[pieceState->vertCount + pieceState->holeDataCount + (unsigned __int64)pieceState->crackDataCount];
    v29 = fanDataCount;
    v30 = *triIndex;
    v48 = &v28[v29];
    v31 = v28->asBytes[0];
LABEL_11:
    LODWORD(v32) = 2;
    v33 = startVertIndex + v31;
    while ( v30 + 1 <= maxTris )
    {
      if ( v30 >= maxTris )
      {
        LODWORD(v45) = maxTris;
        LODWORD(v44) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1279, ASSERT_TYPE_ASSERT, "(unsigned)( *triIndex ) < (unsigned)( maxTris )", "*triIndex doesn't index maxTris\n\t%i not in [0, %i)", v44, v45) )
          __debugbreak();
        v25 = triIndex;
      }
      v34 = &tris[*v25];
      v34->indices[0] = v33;
      v35 = v28->asBytes[(unsigned int)(v32 - 1)];
      v36 = 1i64;
      v37 = __CFADD__((_WORD)startVertIndex, v35) || (_WORD)startVertIndex + v35 == 0;
      v38 = startVertIndex + v35;
      __asm { vcomiss xmm6, xmm7 }
      if ( v37 )
        v36 = 2i64;
      v34->indices[v36] = v38;
      v39 = v28->asBytes[(unsigned int)v32];
      v40 = 2i64;
      v37 = __CFADD__((_WORD)startVertIndex, v39) || (_WORD)startVertIndex + v39 == 0;
      v41 = startVertIndex + v39;
      __asm { vcomiss xmm6, xmm7 }
      if ( v37 )
        v40 = 1i64;
      v32 = (unsigned int)(v32 + 1);
      v34->indices[v40] = v41;
      v30 = *v25 + 1;
      *v25 = v30;
      if ( v28->asBytes[v32] == 0xFF )
      {
        v28 = (const FxGlassGeometryData *)((char *)v28 + (unsigned int)(v32 + 1));
        v31 = v28->asBytes[0];
        if ( v28->asBytes[0] != 0xFF && v28 != v48 )
          goto LABEL_11;
        goto LABEL_24;
      }
    }
    goto LABEL_25;
  }
  vertCount = pieceState->vertCount;
  v17 = *triIndex;
  if ( vertCount + *triIndex - 2 > maxTris )
  {
LABEL_25:
    result = 0;
    goto LABEL_26;
  }
  v18 = 2;
  if ( (unsigned __int8)vertCount <= 2u )
  {
LABEL_24:
    result = 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+88h+side]
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
    do
    {
      if ( v17 >= maxTris )
      {
        LODWORD(v45) = maxTris;
        LODWORD(v44) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1254, ASSERT_TYPE_ASSERT, "(unsigned)( *triIndex ) < (unsigned)( maxTris )", "*triIndex doesn't index maxTris\n\t%i not in [0, %i)", v44, v45) )
          __debugbreak();
      }
      v21 = &tris[*triIndex];
      v21->indices[0] = startVertIndex;
      v22 = startVertIndex + v18;
      v23 = startVertIndex + v18++ - 1;
      v21->indices[1] = v23;
      v21->indices[2] = v22;
      v17 = ++*triIndex;
    }
    while ( v18 < pieceState->vertCount );
    result = 1;
  }
LABEL_26:
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
  return result;
}

/*
==============
FX_GlassTris_AddGlassPieceVerts
==============
*/
char FX_GlassTris_AddGlassPieceVerts(const FxGlassSystem *glassSys, const FxGlassDef *def, const FxGlassPieceState *pieceState, const FxGlassPiecePlace *piecePlace, const FxGlassGeometryData *geoData, const tmat33_t<vec3_t> *axis, float side, vec3_t *verts, unsigned int *vertIndex, unsigned int maxVerts)
{
  unsigned int vertCount; 
  unsigned int v15; 
  unsigned int v17; 
  const FxGlassGeometryData *v33; 
  unsigned int uniqueVertCount; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 v53; 
  __int64 v54; 
  unsigned int *vertIndexa; 

  vertCount = pieceState->vertCount;
  v15 = *vertIndex;
  if ( vertCount + *vertIndex <= maxVerts )
  {
    _R13 = verts;
    v17 = 0;
    if ( pieceState->vertCount )
    {
      do
      {
        if ( v15 >= maxVerts )
        {
          LODWORD(v54) = maxVerts;
          LODWORD(v53) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1181, ASSERT_TYPE_ASSERT, "(unsigned)( *vertIndex ) < (unsigned)( maxVerts )", "*vertIndex doesn't index maxVerts\n\t%i not in [0, %i)", v53, v54) )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm3, xmm3, xmm3
          vxorps  xmm4, xmm4, xmm4
        }
        _RDX = 3i64 * *vertIndex;
        __asm
        {
          vcvtsi2ss xmm3, xmm3, eax
          vmulss  xmm0, xmm3, dword ptr [rbp+0]
          vaddss  xmm2, xmm0, dword ptr [r12+10h]
        }
        ++v17;
        __asm
        {
          vcvtsi2ss xmm4, xmm4, eax
          vmulss  xmm1, xmm4, dword ptr [rbp+0Ch]
          vaddss  xmm0, xmm2, xmm1
          vmovss  dword ptr [r13+rdx*4+0], xmm0
          vmulss  xmm2, xmm3, dword ptr [rbp+4]
          vaddss  xmm1, xmm2, dword ptr [r12+14h]
          vmulss  xmm0, xmm4, dword ptr [rbp+10h]
          vaddss  xmm1, xmm1, xmm0
          vmovss  dword ptr [r13+rdx*4+4], xmm1
          vmulss  xmm0, xmm3, dword ptr [rbp+8]
          vaddss  xmm2, xmm0, dword ptr [r12+18h]
          vmulss  xmm1, xmm4, dword ptr [rbp+14h]
          vaddss  xmm2, xmm2, xmm1
          vmovss  dword ptr [r13+rdx*4+8], xmm2
        }
        ++*vertIndex;
        vertCount = pieceState->vertCount;
        v15 = *vertIndex;
      }
      while ( v17 < vertCount );
    }
    v33 = &geoData[(unsigned __int8)vertCount];
    vertIndexa = (unsigned int *)&v33[pieceState->holeDataCount];
    if ( v33 == (const FxGlassGeometryData *)vertIndexa )
      return 1;
    while ( 1 )
    {
      uniqueVertCount = v33->hole.uniqueVertCount;
      v35 = *vertIndex;
      if ( *vertIndex + uniqueVertCount > maxVerts )
        break;
      v36 = 0;
      if ( v33->vert.x )
      {
        do
        {
          if ( v35 >= maxVerts )
          {
            LODWORD(v54) = maxVerts;
            LODWORD(v53) = v35;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( *vertIndex ) < (unsigned)( maxVerts )", "*vertIndex doesn't index maxVerts\n\t%i not in [0, %i)", v53, v54) )
              __debugbreak();
          }
          __asm
          {
            vxorps  xmm3, xmm3, xmm3
            vxorps  xmm4, xmm4, xmm4
          }
          _RDX = 3i64 * *vertIndex;
          __asm { vcvtsi2ss xmm3, xmm3, eax }
          ++v36;
          __asm
          {
            vmulss  xmm0, xmm3, dword ptr [rbp+0]
            vaddss  xmm2, xmm0, dword ptr [r12+10h]
            vcvtsi2ss xmm4, xmm4, eax
            vmulss  xmm1, xmm4, dword ptr [rbp+0Ch]
            vaddss  xmm0, xmm2, xmm1
            vmovss  dword ptr [r13+rdx*4+0], xmm0
            vmulss  xmm2, xmm3, dword ptr [rbp+4]
            vaddss  xmm1, xmm2, dword ptr [r12+14h]
            vmulss  xmm0, xmm4, dword ptr [rbp+10h]
            vaddss  xmm1, xmm1, xmm0
            vmovss  dword ptr [r13+rdx*4+4], xmm1
            vmulss  xmm0, xmm3, dword ptr [rbp+8]
            vaddss  xmm2, xmm0, dword ptr [r12+18h]
            vmulss  xmm1, xmm4, dword ptr [rbp+14h]
            vaddss  xmm2, xmm2, xmm1
            vmovss  dword ptr [r13+rdx*4+8], xmm2
          }
          ++*vertIndex;
          uniqueVertCount = v33->hole.uniqueVertCount;
          v35 = *vertIndex;
        }
        while ( v36 < uniqueVertCount );
      }
      v33 += (unsigned __int16)uniqueVertCount + 1;
      if ( v33 == (const FxGlassGeometryData *)vertIndexa )
        return 1;
    }
  }
  return 0;
}

/*
==============
FX_GlassUpdatePieceLightingCmd
==============
*/
void FX_GlassUpdatePieceLightingCmd(const void *const cmd)
{
  int v2; 
  unsigned __int16 *activeTransientZones; 
  unsigned __int16 v4; 
  __int64 v5; 
  unsigned int v6; 
  _DWORD *v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  char v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned __int8 v19; 
  unsigned int v33; 
  unsigned __int16 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  char v38; 
  int v39; 
  unsigned __int16 v40; 
  __int64 v41; 
  unsigned __int16 *v42; 
  _DWORD *v43; 
  __int64 v44; 

  _R13 = (FxGlassVisInfo *)*((_QWORD *)cmd + 2);
  _R13->visCount = 0;
  FX_GlassUpdatePieceLightingForGlassSystem(&fxWorld.glassSys, 0, (const vec3_t *)cmd, _R13);
  v2 = 0;
  v39 = 0;
  if ( fxWorld.activeTransientZoneCount )
  {
    activeTransientZones = fxWorld.activeTransientZones;
    v42 = fxWorld.activeTransientZones;
    do
    {
      if ( _R13->visCount == 65520 )
        break;
      v40 = *activeTransientZones;
      v4 = *activeTransientZones;
      if ( *activeTransientZones >= fxWorld.transientZoneCount )
      {
        LODWORD(v36) = fxWorld.transientZoneCount;
        LODWORD(v35) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1159, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( fxWorld.transientZoneCount )", "transientIndex doesn't index fxWorld.transientZoneCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      v5 = *(_QWORD *)&fxWorld.activeTransientZones[4 * v4 - 6144];
      v41 = v5;
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 28);
        if ( v6 )
        {
          v7 = *(_DWORD **)(v5 + 88);
          LODWORD(v8) = 0;
          v43 = v7;
          if ( !*v7 )
          {
            do
            {
              if ( (unsigned int)v8 >= v6 )
                goto LABEL_37;
              v8 = (unsigned int)(v8 + 1);
            }
            while ( !v7[v8] );
          }
          if ( (unsigned int)v8 < v6 )
          {
            v9 = v7[(unsigned int)v8];
            v10 = __lzcnt(v9);
            v11 = ~BitShift(v10) & v9;
            v12 = v10 | (32 * v8);
            _R14 = *(_QWORD *)(v5 + 56) + 32i64 * v12;
            __asm { prefetcht0 byte ptr [r14] }
            v14 = 0;
            v38 = 0;
            while ( 1 )
            {
              v15 = v12;
              v44 = _R14;
              if ( v11 )
              {
LABEL_17:
                v16 = __lzcnt(v11);
                if ( v16 >= 0x20 )
                {
                  LODWORD(v36) = 32;
                  LODWORD(v35) = v16;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v35, v36) )
                    __debugbreak();
                  v14 = v38;
                }
                v11 &= ~(0x80000000 >> v16);
                v12 = v16 | (32 * v8);
                v17 = v41;
                _R14 = *(_QWORD *)(v41 + 56) + 32i64 * v12;
                __asm { prefetcht0 byte ptr [r14] }
              }
              else
              {
                while ( 1 )
                {
                  v8 = (unsigned int)(v8 + 1);
                  if ( (_DWORD)v8 == v6 )
                    break;
                  v11 = v43[v8];
                  if ( v11 )
                    goto LABEL_17;
                }
                v17 = v41;
                v14 = 1;
                v38 = 1;
              }
              v18 = *(_DWORD *)(v17 + 24);
              if ( (unsigned int)v15 >= v18 )
              {
                LODWORD(v36) = v18;
                LODWORD(v35) = v15;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1121, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( glassSys->pieceLimit )", "pieceIndex doesn't index glassSys->pieceLimit\n\t%i not in [0, %i)", v35, v36) )
                  __debugbreak();
                v14 = v38;
              }
              v19 = *(_BYTE *)(v15 + *(_QWORD *)(v41 + 104));
              if ( v19 )
              {
                if ( v19 > 3u )
                {
                  LODWORD(v37) = v15;
                  LODWORD(v36) = v19;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1125, ASSERT_TYPE_ASSERT, "(glassSys->visData[pieceIndex] <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES))", "%s\n\tvalue: %d, pieceIndex: %d", "glassSys->visData[pieceIndex] <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES)", v36, v37) )
                    __debugbreak();
                }
                _R13->visList[_R13->visCount].pieceIndex = v15;
                _R13->visList[_R13->visCount].transientIndex = v40;
                _R13->visList[_R13->visCount].drawFlags = *(_BYTE *)(v15 + *(_QWORD *)(v41 + 104));
                _RAX = cmd;
                __asm
                {
                  vmovss  xmm0, dword ptr [rax]
                  vmovss  xmm1, dword ptr [rax+4]
                  vsubss  xmm3, xmm0, dword ptr [rcx]
                  vmovss  xmm0, dword ptr [rax+8]
                  vsubss  xmm2, xmm1, dword ptr [rcx+4]
                  vsubss  xmm4, xmm0, dword ptr [rcx+8]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm3, xmm3
                }
                _RAX = 2i64 * _R13->visCount;
                __asm
                {
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm3, xmm2, xmm1
                  vaddss  xmm4, xmm3, xmm0
                  vmovss  dword ptr [r13+rax*8+4], xmm4
                }
                v33 = R_AddGlassProbeLighting((const vec3_t *)(v44 + 16));
                v34 = v33;
                if ( v33 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v33, "unsigned", v33) )
                  __debugbreak();
                _R13->visList[_R13->visCount++].lightingHandle = v34;
                if ( _R13->visCount == 65520 )
                {
LABEL_36:
                  activeTransientZones = v42;
                  break;
                }
                v14 = v38;
              }
              if ( v14 )
                goto LABEL_36;
            }
          }
LABEL_37:
          v2 = v39;
        }
      }
      ++v2;
      ++activeTransientZones;
      v39 = v2;
      v42 = activeTransientZones;
    }
    while ( v2 < fxWorld.activeTransientZoneCount );
  }
}

/*
==============
FX_GlassUpdatePieceLightingForGlassSystem
==============
*/
void FX_GlassUpdatePieceLightingForGlassSystem(const FxGlassSystem *glassSys, const unsigned __int16 transientIndex, const vec3_t *viewOrg, FxGlassVisInfo *visInfo)
{
  unsigned int pieceWordCount; 
  __int64 v6; 
  unsigned int *isInUse; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  const FxGlassSystem *v12; 
  char v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned __int8 *visData; 
  unsigned __int8 v19; 
  unsigned int v33; 
  unsigned __int16 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  char v38; 
  unsigned int v39; 
  FxGlassPiecePlace *v42; 

  pieceWordCount = glassSys->pieceWordCount;
  _R13 = visInfo;
  if ( pieceWordCount )
  {
    v6 = 0i64;
    isInUse = glassSys->isInUse;
    if ( *isInUse )
    {
LABEL_5:
      if ( (unsigned int)v6 < pieceWordCount )
      {
        v8 = isInUse[v6];
        v9 = __lzcnt(v8);
        v10 = ~BitShift(v9) & v8;
        v11 = v9 | (32 * v6);
        v12 = glassSys;
        _R12 = &glassSys->piecePlaces[v11];
        __asm { prefetcht0 byte ptr [r12] }
        v14 = 0;
        v38 = 0;
        do
        {
          v42 = _R12;
          v15 = v11;
          v39 = v11;
          if ( v10 )
          {
LABEL_10:
            v16 = __lzcnt(v10);
            if ( v16 >= 0x20 )
            {
              LODWORD(v36) = 32;
              LODWORD(v35) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v35, v36) )
                __debugbreak();
              v14 = v38;
              v15 = v11;
            }
            v11 = v16 | (32 * v6);
            v17 = 0x80000000 >> v16;
            v12 = glassSys;
            v10 &= ~v17;
            _R12 = &glassSys->piecePlaces[v11];
            __asm { prefetcht0 byte ptr [r12] }
          }
          else
          {
            while ( 1 )
            {
              v6 = (unsigned int)(v6 + 1);
              if ( (_DWORD)v6 == pieceWordCount )
                break;
              v10 = isInUse[v6];
              if ( v10 )
                goto LABEL_10;
            }
            v14 = 1;
            v38 = 1;
          }
          if ( v15 >= v12->pieceLimit )
          {
            LODWORD(v36) = v12->pieceLimit;
            LODWORD(v35) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1121, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( glassSys->pieceLimit )", "pieceIndex doesn't index glassSys->pieceLimit\n\t%i not in [0, %i)", v35, v36) )
              __debugbreak();
            v14 = v38;
            v15 = v39;
          }
          visData = v12->visData;
          v19 = visData[v15];
          if ( v19 )
          {
            if ( v19 > 3u )
            {
              LODWORD(v37) = v15;
              LODWORD(v36) = v19;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1125, ASSERT_TYPE_ASSERT, "(glassSys->visData[pieceIndex] <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES))", "%s\n\tvalue: %d, pieceIndex: %d", "glassSys->visData[pieceIndex] <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES)", v36, v37) )
              {
                __debugbreak();
                visData = glassSys->visData;
              }
              v15 = v39;
            }
            _R13->visList[_R13->visCount].pieceIndex = v15;
            _R13->visList[_R13->visCount].transientIndex = transientIndex;
            _R13->visList[_R13->visCount].drawFlags = visData[v15];
            _RAX = viewOrg;
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vmovss  xmm1, dword ptr [rax+4]
              vsubss  xmm3, xmm0, dword ptr [rcx]
              vmovss  xmm0, dword ptr [rax+8]
              vsubss  xmm2, xmm1, dword ptr [rcx+4]
              vsubss  xmm4, xmm0, dword ptr [rcx+8]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
            }
            _RAX = 2i64 * _R13->visCount;
            __asm
            {
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm4, xmm3, xmm0
              vmovss  dword ptr [r13+rax*8+4], xmm4
            }
            v33 = R_AddGlassProbeLighting(&v42->frame.origin);
            v34 = v33;
            if ( v33 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v33, "unsigned", v33) )
              __debugbreak();
            _R13->visList[_R13->visCount++].lightingHandle = v34;
            if ( _R13->visCount == 65520 )
              return;
            v14 = v38;
          }
          v12 = glassSys;
        }
        while ( !v14 );
      }
    }
    else
    {
      while ( (unsigned int)v6 < pieceWordCount )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( isInUse[v6] )
          goto LABEL_5;
      }
    }
  }
}

/*
==============
Glass_CompareVisRefs
==============
*/
bool Glass_CompareVisRefs(FxGlassPieceVisRef *visRef0, FxGlassPieceVisRef *visRef1)
{
  unsigned __int16 materialSortedIndex; 
  unsigned __int16 v3; 

  materialSortedIndex = visRef0->materialSortedIndex;
  v3 = visRef1->materialSortedIndex;
  if ( materialSortedIndex == v3 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vcomiss xmm0, dword ptr [rcx]
    }
  }
  return materialSortedIndex < v3;
}

/*
==============
Glass_DrawBorderSegment
==============
*/
void Glass_DrawBorderSegment(FxGlassDrawState *drawState, unsigned int i0, unsigned int i1, unsigned int i2, unsigned int i3, bool usedLastEdge)
{
  unsigned __int16 baseVertex; 
  __int64 v15; 
  __int64 v16; 
  unsigned int packed; 
  __int64 v23; 
  PackedUnitVec v38; 
  PackedQuatDec3n v65; 
  PackedQuatDec3n v69; 
  __int64 v70; 
  unsigned int v78; 
  unsigned int lightingHandle; 
  PackedUnitVec v99; 
  PackedQuatDec3n v126; 
  unsigned int v132; 
  r_double_index_t *dstIndices; 
  unsigned int totalIndexCount; 
  unsigned __int64 v144; 
  unsigned int totalVertCount; 
  unsigned int v153; 
  __int64 v155; 
  vec3_t cross; 
  vec3_t out; 
  vec3_t v1; 
  vec3_t mat1; 
  vec4_t quat; 
  char v161; 
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
  }
  baseVertex = drawState->baseVertex;
  _R15 = drawState;
  v15 = i2;
  v16 = i1;
  _R13 = R_GlassMeshVertIter_Begin(baseVertex);
  __asm
  {
    vmovss  xmm10, cs:__real@bf800000
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm11, cs:__real@80000000
  }
  packed = _R15->def->color.packed;
  _EAX = 0;
  v23 = (unsigned int)v15;
  v155 = v15;
  if ( usedLastEdge )
  {
    lightingHandle = _R15->lightingHandle;
    v153 = lightingHandle;
  }
  else
  {
    __asm
    {
      vmovd   xmm1, dword ptr [r15+860h]
      vmovd   xmm0, eax
      vpcmpgtd xmm2, xmm0, xmm1
      vblendvps xmm8, xmm9, xmm10, xmm2
    }
    _RAX = 3 * v15;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+rax*4]
      vsubss  xmm1, xmm0, dword ptr [r15+rcx*4]
      vmovss  xmm2, dword ptr [r15+rax*4+4]
      vsubss  xmm0, xmm2, dword ptr [r15+rcx*4+4]
      vmovss  dword ptr [rbp+47h+v1], xmm1
      vmovss  xmm1, dword ptr [r15+rax*4+8]
      vsubss  xmm2, xmm1, dword ptr [r15+rcx*4+8]
      vmovss  dword ptr [rbp+47h+v1+8], xmm2
      vmovss  dword ptr [rbp+47h+v1+4], xmm0
    }
    Vec3Cross(&_R15->axis.m[2], &v1, &cross);
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+110h+cross]
      vmovss  xmm6, dword ptr [rsp+110h+cross+4]
      vmovss  xmm4, dword ptr [rsp+110h+cross+8]
    }
    v38.packed = _R15->packedTangentBinormalSign.packed;
    __asm
    {
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm0, xmm3, xmm9, xmm0
      vdivss  xmm2, xmm9, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rsp+110h+cross], xmm0
      vmulss  xmm0, xmm4, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rsp+110h+cross+8], xmm0
      vmovss  dword ptr [rsp+110h+cross+4], xmm1
    }
    Vec3UnpackUnitVec(v38, &out);
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+47h+out+8]
      vmovss  xmm2, dword ptr [rsp+110h+cross+8]
      vmovss  xmm7, dword ptr [rsp+110h+cross+4]
      vmovss  xmm6, dword ptr [rbp+47h+out+4]
      vmulss  xmm0, xmm2, xmm6
      vmulss  xmm2, xmm2, dword ptr [rsp+110h+out]
      vmulss  xmm1, xmm7, xmm5
      vsubss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm5, dword ptr [rsp+110h+cross]
      vmovss  dword ptr [rbp+47h+mat1], xmm1
      vsubss  xmm1, xmm2, xmm0
      vmulss  xmm2, xmm6, dword ptr [rsp+110h+cross]
      vmulss  xmm0, xmm7, dword ptr [rsp+110h+out]
      vmovss  dword ptr [rbp+47h+mat1+4], xmm1
      vsubss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rbp+47h+mat1+8], xmm1
    }
    AxisComponentsToQuat(&out, &mat1, &cross, &quat);
    __asm
    {
      vmovaps xmm1, xmm8; binormalSign
      vmovss  dword ptr [rsp+110h+var_E8], xmm8
    }
    v65.packed = UnitQuatToQuatDec3n(&quat, *(float *)&_XMM1).packed;
    __asm
    {
      vmovss  xmm8, dword ptr [r15+854h]
      vmovss  xmm7, dword ptr [r15+858h]
      vmovss  xmm6, dword ptr [r15+85Ch]
    }
    v69.packed = v65.packed;
    v70 = (unsigned int)v16;
    _R14 = 3 * v16;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+r14*4]
      vsubss  xmm1, xmm0, xmm8
      vmovss  xmm0, dword ptr [r15+r14*4+4]
      vmovss  dword ptr [r13+0], xmm1
      vsubss  xmm1, xmm0, xmm7
      vmovss  xmm0, dword ptr [r15+r14*4+8]
      vmovss  dword ptr [r13+4], xmm1
      vsubss  xmm1, xmm0, xmm6
    }
    v78 = _R15->texCoords[v70].packed;
    LODWORD(v70) = _R15->lightingHandle;
    __asm { vmovss  dword ptr [r13+8], xmm1 }
    v153 = v70;
    _R13->lgvIndex = v70;
    _R13->color = packed;
    _R13->texcoord = v78;
    _R13->tangentFrame = v69.packed;
    __asm
    {
      vaddss  xmm0, xmm8, dword ptr [r15+r14*4]
      vaddss  xmm1, xmm7, dword ptr [r15+r14*4+4]
    }
    _R13 = R_GlassMeshVertIter_Next(_R13);
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vaddss  xmm0, xmm6, dword ptr [r15+r14*4+8]
    }
    _R15->totalVertCount += 2;
    lightingHandle = _R15->lightingHandle;
    baseVertex += 2;
    __asm
    {
      vmovss  dword ptr [rax+4], xmm1
      vmovss  dword ptr [rax+8], xmm0
    }
    _R13->texcoord = v78;
    v23 = v155;
    _R15->baseVertex = baseVertex;
    _R13->color = packed;
    _R13->tangentFrame = v69.packed;
    _R13->lgvIndex = lightingHandle;
  }
  _EDX = _R15->packedTangentBinormalSign.packed;
  __asm { vmovd   xmm1, edx }
  totalVertCount = _R15->totalVertCount;
  _EAX = 0;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpgtd xmm2, xmm0, xmm1
    vblendvps xmm8, xmm9, xmm10, xmm2
  }
  _RDX = 3i64 * i3;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+rdx*4]
    vsubss  xmm1, xmm0, dword ptr [r15+r8*4]
    vmovss  xmm2, dword ptr [r15+rdx*4+4]
    vsubss  xmm0, xmm2, dword ptr [r15+r8*4+4]
    vmovss  dword ptr [rbp+47h+v1], xmm1
    vmovss  xmm1, dword ptr [r15+rdx*4+8]
    vsubss  xmm2, xmm1, dword ptr [r15+r8*4+8]
    vmovss  dword ptr [rbp+47h+v1+8], xmm2
    vmovss  dword ptr [rbp+47h+v1+4], xmm0
  }
  Vec3Cross(&_R15->axis.m[2], &v1, &cross);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+110h+cross]
    vmovss  xmm6, dword ptr [rsp+110h+cross+4]
    vmovss  xmm4, dword ptr [rsp+110h+cross+8]
  }
  v99.packed = _R15->packedTangentBinormalSign.packed;
  __asm
  {
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm0, xmm3, xmm9, xmm0
    vdivss  xmm2, xmm9, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+110h+cross], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+110h+cross+8], xmm0
    vmovss  dword ptr [rsp+110h+cross+4], xmm1
  }
  Vec3UnpackUnitVec(v99, &out);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+47h+out+8]
    vmovss  xmm2, dword ptr [rsp+110h+cross+8]
    vmovss  xmm7, dword ptr [rsp+110h+cross+4]
    vmovss  xmm6, dword ptr [rbp+47h+out+4]
    vmulss  xmm0, xmm2, xmm6
    vmulss  xmm2, xmm2, dword ptr [rsp+110h+out]
    vmulss  xmm1, xmm7, xmm5
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm5, dword ptr [rsp+110h+cross]
    vmovss  dword ptr [rbp+47h+mat1], xmm1
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm6, dword ptr [rsp+110h+cross]
    vmulss  xmm0, xmm7, dword ptr [rsp+110h+out]
    vmovss  dword ptr [rbp+47h+mat1+4], xmm1
    vsubss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rbp+47h+mat1+8], xmm1
  }
  AxisComponentsToQuat(&out, &mat1, &cross, &quat);
  __asm { vmovaps xmm1, xmm8; binormalSign }
  v126.packed = UnitQuatToQuatDec3n(&quat, *(float *)&_XMM1).packed;
  if ( !usedLastEdge )
  {
    _R13 = R_GlassMeshVertIter_Next(_R13);
    v153 = lightingHandle;
    totalVertCount = _R15->totalVertCount;
  }
  _R14 = 3 * v23;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+r14*4]
    vmovss  xmm8, dword ptr [r15+854h]
    vmovss  xmm7, dword ptr [r15+858h]
    vmovss  xmm6, dword ptr [r15+85Ch]
  }
  v132 = _R15->texCoords[v23].packed;
  __asm
  {
    vsubss  xmm1, xmm0, xmm8
    vmovss  xmm0, dword ptr [r15+r14*4+4]
    vmovss  dword ptr [r13+0], xmm1
    vsubss  xmm1, xmm0, xmm7
    vmovss  xmm0, dword ptr [r15+r14*4+8]
    vmovss  dword ptr [r13+4], xmm1
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [r13+8], xmm1
  }
  _R13->color = packed;
  _R13->texcoord = v132;
  _R13->tangentFrame = v126.packed;
  _R13->lgvIndex = v153;
  _RAX = R_GlassMeshVertIter_Next(_R13);
  __asm
  {
    vaddss  xmm0, xmm8, dword ptr [r15+r14*4]
    vaddss  xmm1, xmm7, dword ptr [r15+r14*4+4]
    vmovss  dword ptr [rax], xmm0
    vaddss  xmm0, xmm6, dword ptr [r15+r14*4+8]
    vmovss  dword ptr [rax+8], xmm0
    vmovss  dword ptr [rax+4], xmm1
  }
  _RAX->lgvIndex = v153;
  _RAX->color = packed;
  _RAX->texcoord = v132;
  _RAX->tangentFrame = v126.packed;
  R_GlassMeshVertIter_End(_RAX);
  dstIndices = _R15->dstIndices;
  totalIndexCount = _R15->totalIndexCount;
  v144 = (unsigned __int64)totalIndexCount >> 1;
  _R15->totalVertCount = totalVertCount + 2;
  _R15->baseVertex = baseVertex + 2;
  dstIndices[v144].value[0] = baseVertex - 1;
  dstIndices[v144 + 1].value[0] = baseVertex + 1;
  dstIndices[v144 + 1].value[1] = baseVertex + 1;
  _R15->totalIndexCount = totalIndexCount + 6;
  dstIndices[v144].value[1] = baseVertex - 2;
  dstIndices[v144 + 2].value[0] = baseVertex - 2;
  dstIndices[v144 + 2].value[1] = baseVertex;
  _R11 = &v161;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
Glass_DrawPiece
==============
*/
void Glass_DrawPiece(unsigned int pieceIndex, const FxGlassPiecePlace *piecePlace, const FxGlassPieceState *pieceState, const FxGlassDef *def, const FxGlassGeometryData *geoData, const FxGenerateGlassVertsCmd *cmd, unsigned int drawFlags, unsigned int lightingHandle, float *glassDist, unsigned __int16 materialSortedIndex, const unsigned __int16 transientIndex)
{
  const GfxBackEndData *backendData; 
  Material *materialShattered; 
  unsigned __int64 p1; 
  unsigned int v18; 
  unsigned int v19; 
  bool v28; 
  unsigned int v29; 
  unsigned int totalIndexCount; 
  r_double_index_t *dstIndices; 
  vec3_t *camOrg; 
  __int64 v43; 
  __int64 v44; 
  unsigned int reserveIndexCount; 
  unsigned int reserveVertCount; 
  unsigned int pieceIndexa; 
  FxGlassPiecePlace *piecePlacea; 
  float *v49; 
  FxGlassDrawState drawState; 

  _RBP = cmd;
  backendData = cmd->backendData;
  piecePlacea = (FxGlassPiecePlace *)piecePlace;
  pieceIndexa = pieceIndex;
  v49 = glassDist;
  if ( !backendData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( transientIndex >= 0x600u )
  {
    LODWORD(camOrg) = transientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", camOrg, 1536) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (transientIndex & 0x1F)) & backendData->transientVisibility.array[(unsigned __int64)transientIndex >> 5]) != 0 )
  {
    if ( (pieceState->flags & 1) != 0 )
      materialShattered = def->materialShattered;
    else
      materialShattered = def->material;
    if ( !materialShattered && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 849, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
      __debugbreak();
    p1 = materialShattered->drawSurf.packed.p1;
    if ( (_WORD)p1 != materialSortedIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 850, ASSERT_TYPE_ASSERT, "( material->drawSurf.fields.materialSortedIndex ) == ( materialSortedIndex )", "%s == %s\n\t%u, %u", "material->drawSurf.fields.materialSortedIndex", "materialSortedIndex", (unsigned __int16)p1, materialSortedIndex) )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbp+78h] }
    drawState.lightingHandle = lightingHandle;
    __asm { vmovss  [rsp+948h+drawState.shatteredScale], xmm0 }
    Glass_GetBufferReserveCounts(pieceState, geoData, drawFlags, &reserveVertCount, &reserveIndexCount);
    v18 = reserveIndexCount;
    if ( !reserveIndexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 856, ASSERT_TYPE_ASSERT, "(reserveIndexCount)", (const char *)&queryFormat, "reserveIndexCount") )
      __debugbreak();
    v19 = reserveVertCount;
    if ( R_ReserveGlassMeshVerts(reserveVertCount, &drawState.baseVertex) && R_ReserveGlassMeshIndices(v18, &drawState.dstIndices) )
    {
      Glass_MakePieceGeometry(&drawState, piecePlacea, pieceState, def, geoData, &cmd->viewOrg, drawFlags);
      if ( drawState.totalIndexCount )
      {
        if ( drawState.totalIndexCount > v18 )
        {
          LODWORD(v44) = v18;
          LODWORD(v43) = drawState.totalIndexCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 865, ASSERT_TYPE_ASSERT, "( drawState.totalIndexCount ) <= ( reserveIndexCount )", "%s <= %s\n\t%i, %i", "drawState.totalIndexCount", "reserveIndexCount", v43, v44) )
            __debugbreak();
        }
        if ( drawState.totalVertCount > v19 )
        {
          LODWORD(v44) = v19;
          LODWORD(v43) = drawState.totalVertCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 866, ASSERT_TYPE_ASSERT, "( drawState.totalVertCount ) <= ( reserveVertCount )", "%s <= %s\n\t%i, %i", "drawState.totalVertCount", "reserveVertCount", v43, v44) )
            __debugbreak();
        }
        if ( !cmd->lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 869, ASSERT_TYPE_ASSERT, "(cmd->lodParms.valid)", (const char *)&queryFormat, "cmd->lodParms.valid") )
          __debugbreak();
        _RAX = pieceState->defIndex;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0Ch]
          vsubss  xmm3, xmm0, dword ptr [r14+10h]
          vmovss  xmm1, dword ptr [rbp+10h]
          vsubss  xmm2, xmm1, dword ptr [r14+14h]
          vmovss  xmm0, dword ptr [rbp+14h]
          vsubss  xmm4, xmm0, dword ptr [r14+18h]
        }
        _RCX = v49;
        v28 = (pieceState->flags & 0x48) == 0;
        v29 = pieceIndexa;
        totalIndexCount = drawState.totalIndexCount;
        dstIndices = drawState.dstIndices;
        __asm
        {
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm2, xmm2, xmm2
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vmovss  xmm0, dword ptr [rcx+rax*4]
          vsqrtss xmm1, xmm2, xmm2
          vsubss  xmm3, xmm1, dword ptr [r14+1Ch]
          vmulss  xmm4, xmm3, dword ptr [rbp+4Ch]
          vminss  xmm1, xmm0, xmm4
          vmovss  dword ptr [rcx+rax*4], xmm1
        }
        R_AddGlassSurf(materialShattered, dstIndices, totalIndexCount, v29, v28);
      }
      if ( drawState.totalVertCount < v19 )
        R_ReturnGlassMeshVerts(v19 - drawState.totalVertCount);
      if ( drawState.totalIndexCount < v18 )
        R_ReturnGlassMeshIndices(v18 - drawState.totalIndexCount);
    }
  }
}

/*
==============
Glass_GenerateVerts
==============
*/
void Glass_GenerateVerts(const FxGlassGlobals *glassGlob, FxGlassVisInfo *visInfo, const FxGenerateGlassVertsCmd *const cmd)
{
  char *Value; 
  int *v6; 
  _QWORD *v7; 
  char *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  ThreadContext CurrentThreadContext; 
  __int64 defCount; 
  float *v13; 
  unsigned int visCount; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v18; 
  FxGlassPieceState *v19; 
  __int64 v20; 
  __int64 v21; 
  Material *materialShattered; 
  unsigned __int16 p1; 
  __int64 v25; 
  unsigned int v26; 
  unsigned int v27; 
  FxGlassSystem *GlassSystemForTransientIndex; 
  __int64 v29; 
  const FxGlassPieceState *v32; 
  unsigned int v33; 
  unsigned __int16 materialSortedIndex; 
  bool v35; 
  unsigned __int16 transientIndex; 
  FxGlassSystem *v37; 
  unsigned int v38; 
  FxGlassSystem *v39; 
  __int64 v40; 
  FxGenerateGlassVertsCmd *cmda; 
  __int64 drawFlags; 
  __int64 lightingHandle; 
  float *glassDist; 
  unsigned int pieceIndex; 
  FxGlassPiecePlace *v48; 
  FxGlassPieceState *v49; 
  float *distances; 
  FxGlassPiecePlace *piecePlace; 
  unsigned int v53; 
  unsigned int v55; 

  Value = (char *)Sys_GetValue(0);
  v6 = (int *)(Value + 25056);
  if ( (unsigned int)(*((_DWORD *)Value + 6264) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 6264) + 1, 3) )
    __debugbreak();
  if ( (unsigned int)++*v6 >= 3 )
  {
    LODWORD(drawFlags) = 3;
    LODWORD(cmda) = *v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", cmda, drawFlags) )
      __debugbreak();
  }
  v7 = Value + 2088;
  v8 = Value + 40;
  if ( *v7 < (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v7 += 8i64;
  if ( *v7 >= (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v7 = v6;
  if ( *v7 <= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v9 = *v6;
  v10 = __rdtsc();
  v6[v9 + 2] = v10;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 574, NULL, 0);
  distances = glassGlob->distances;
  if ( glassGlob->defCount )
  {
    defCount = glassGlob->defCount;
    v13 = glassGlob->distances;
    while ( defCount )
    {
      *v13++ = 1000000.0;
      --defCount;
    }
  }
  visCount = visInfo->visCount;
  if ( visInfo->visCount )
  {
    v15 = 0;
    v16 = visInfo->visList[0].pieceIndex;
    _R14 = &Glass_GetGlassSystemForTransientIndex(visInfo->visList[0].transientIndex)->pieceStates[v16];
    __asm { prefetcht0 byte ptr [r14] }
    LODWORD(v18) = visInfo->visCount;
    while ( 1 )
    {
      v19 = _R14;
      v20 = v15++;
      if ( v15 != (_DWORD)v18 )
      {
        v21 = visInfo->visList[v15].pieceIndex;
        _R14 = &Glass_GetGlassSystemForTransientIndex(visInfo->visList[v15].transientIndex)->pieceStates[v21];
        __asm { prefetcht0 byte ptr [r14] }
      }
      _RDI = &glassGlob->defs[v19->defIndex];
      __asm { prefetcht0 byte ptr [rdi] }
      if ( (v19->flags & 1) != 0 )
        materialShattered = _RDI->materialShattered;
      else
        materialShattered = _RDI->material;
      if ( materialShattered )
      {
        if ( SLOBYTE(materialShattered->surfaceFlags) >= 0 )
        {
          p1 = materialShattered->drawSurf.packed.p1;
          visInfo->visList[v20].materialSortedIndex = p1;
          v25 = p1;
          if ( p1 >= rgp.materialCount )
          {
            LODWORD(drawFlags) = rgp.materialCount;
            LODWORD(cmda) = p1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", cmda, drawFlags) )
              __debugbreak();
          }
          if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v25]) != materialShattered && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 991, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( material->drawSurf.fields.materialSortedIndex ) == material)", (const char *)&queryFormat, "R_GetSortedMaterial( material->drawSurf.fields.materialSortedIndex ) == material") )
            __debugbreak();
          goto LABEL_38;
        }
        R_WarnOncePerFrame(R_WARN_VFX_INVALID_MATERIAL, materialShattered->name, "FUNC_GLASS", "SURF_NODRAW");
      }
      visInfo->visList[v20].materialSortedIndex = -1;
      --visCount;
LABEL_38:
      v18 = visInfo->visCount;
      if ( v15 == (_DWORD)v18 )
      {
        std::_Sort_unchecked<FxGlassPieceVisRef *,bool (*)(FxGlassPieceVisRef &,FxGlassPieceVisRef &)>(visInfo->visList, &visInfo->visList[v18], (16 * v18) >> 4, Glass_CompareVisRefs);
        visInfo->visCount = visCount;
        if ( DB_AssetCount(ASSET_TYPE_FXWORLD) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1001, ASSERT_TYPE_ASSERT, "(DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1)", (const char *)&queryFormat, "DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1") )
          __debugbreak();
        R_BeginGlassMeshVerts();
        v26 = 0;
        if ( visInfo->visCount > 0x300 )
        {
          v26 = visInfo->visCount - 768;
          R_WarnOncePerFrame(R_WARN_GFX_GLASS_SURF_LIMIT);
        }
        v27 = visInfo->visList[v26].pieceIndex;
        v53 = v27;
        GlassSystemForTransientIndex = Glass_GetGlassSystemForTransientIndex(visInfo->visList[v26].transientIndex);
        v29 = v27;
        _RCX = &GlassSystemForTransientIndex->piecePlaces[v29];
        v48 = _RCX;
        __asm { prefetcht0 byte ptr [rcx] }
        _RAX = &GlassSystemForTransientIndex->pieceStates[v29];
        v49 = (FxGlassPieceState *)_RAX;
        __asm { prefetcht0 byte ptr [rax] }
        while ( 1 )
        {
          pieceIndex = v27;
          v32 = _RAX;
          piecePlace = _RCX;
          v33 = visInfo->visList[v26].drawFlags;
          materialSortedIndex = visInfo->visList[v26].materialSortedIndex;
          v55 = visInfo->visList[v26].lightingHandle;
          if ( !visInfo->visList[v26].drawFlags )
            break;
          if ( v33 > 3 )
          {
            LODWORD(cmda) = visInfo->visList[v26].drawFlags;
            v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1030, ASSERT_TYPE_ASSERT, "( ( drawFlags <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES) ) )", "( drawFlags ) = %i", cmda);
LABEL_51:
            if ( v35 )
              __debugbreak();
          }
          if ( materialSortedIndex >= 0xB400u )
          {
            LODWORD(glassDist) = 46080;
            LODWORD(lightingHandle) = materialSortedIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1031, ASSERT_TYPE_ASSERT, "( materialSortedIndex ) < ( ((( 43 * 1024 ) + 1024) + 1024) )", "%s < %s\n\t%i, %i", "materialSortedIndex", "MAX_MATERIALS", lightingHandle, glassDist) )
              __debugbreak();
          }
          transientIndex = visInfo->visList[v26++].transientIndex;
          v37 = Glass_GetGlassSystemForTransientIndex(transientIndex);
          if ( v26 != visInfo->visCount )
          {
            v38 = visInfo->visList[v26].pieceIndex;
            v53 = v38;
            v39 = Glass_GetGlassSystemForTransientIndex(visInfo->visList[v26].transientIndex);
            v40 = v38;
            v48 = &v39->piecePlaces[v40];
            __asm { prefetcht0 byte ptr [rcx] }
            v49 = &v39->pieceStates[v40];
            __asm { prefetcht0 byte ptr [rax] }
          }
          _R9 = &glassGlob->defs[v32->defIndex];
          __asm { prefetcht0 byte ptr [r9] }
          _RAX = &v37->geoData[v32->geoDataStart];
          __asm { prefetcht0 byte ptr [rax] }
          Glass_DrawPiece(pieceIndex, piecePlace, v32, _R9, _RAX, cmd, v33, v55, distances, materialSortedIndex, transientIndex);
          v27 = v53;
          _RCX = v48;
          _RAX = v49;
          if ( v26 == visInfo->visCount )
          {
            R_EndGlassMeshVerts();
            goto LABEL_60;
          }
        }
        LODWORD(cmda) = 0;
        v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1029, ASSERT_TYPE_ASSERT, "( ( drawFlags ) )", "( drawFlags ) = %i", cmda);
        goto LABEL_51;
      }
    }
  }
LABEL_60:
  Profile_EndInternal(NULL);
}

/*
==============
Glass_GetBufferReserveCounts
==============
*/
void Glass_GetBufferReserveCounts(const FxGlassPieceState *pieceState, const FxGlassGeometryData *geoData, unsigned int drawFlags, unsigned int *reserveVertCount, unsigned int *reserveIndexCount)
{
  int vertCount; 
  int v6; 
  unsigned int holeDataCount; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int i; 
  __int64 v15; 
  int uniqueVertCount; 
  BOOL v17; 
  const char *v18; 
  int v19; 
  unsigned int v20; 
  int v21; 
  int v22; 
  unsigned int j; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  unsigned int v28; 
  unsigned int crackDataCount; 
  int v30; 

  vertCount = pieceState->vertCount;
  v6 = 0;
  holeDataCount = pieceState->holeDataCount;
  crackDataCount = pieceState->crackDataCount;
  v10 = vertCount;
  v11 = vertCount - 2;
  v12 = vertCount;
  v13 = vertCount + 1;
  for ( i = 0; i < holeDataCount; v13 += uniqueVertCount + v17 + 1 )
  {
    v15 = i + vertCount;
    uniqueVertCount = geoData[v15].hole.uniqueVertCount;
    v17 = geoData[v15].hole.touchVert != 0xFF;
    v10 += uniqueVertCount;
    i += uniqueVertCount + 1;
    v11 += uniqueVertCount - v17 + 2;
    v12 += uniqueVertCount + v17;
  }
  v30 = 3 * v11;
  if ( drawFlags )
  {
    if ( drawFlags <= 3 )
      goto LABEL_9;
    v28 = drawFlags;
    v18 = "( ( drawFlags <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES) ) )";
    v19 = 174;
  }
  else
  {
    v28 = 0;
    v18 = "( ( drawFlags ) )";
    v19 = 173;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", v19, ASSERT_TYPE_ASSERT, v18, "( drawFlags ) = %i", v28) )
    __debugbreak();
LABEL_9:
  v20 = drawFlags & 1;
  v21 = v20 * v10;
  v22 = v20 * v30;
  if ( (drawFlags & 2) != 0 )
  {
    for ( j = 0; j < crackDataCount; v12 = v12 + v26 - 1 )
    {
      v24 = holeDataCount + vertCount + j;
      v25 = geoData[v24].hole.uniqueVertCount;
      j += v25 + 1;
      v26 = v25 + (geoData[v24].hole.pad[0] != 0xFF) + (geoData[v24].hole.touchVert != 0xFF);
      v13 = v13 + 2 * v26 - 2;
    }
    v27 = 6 * v12;
    v6 = 2 * v13;
  }
  else
  {
    v27 = 0;
  }
  *reserveVertCount = v6 + v21;
  *reserveIndexCount = (v27 + v22 + 1) & 0xFFFFFFFE;
}

/*
==============
Glass_GetGlassSystemForTransientIndex
==============
*/
FxGlassSystem *Glass_GetGlassSystemForTransientIndex(const unsigned int transientIndex)
{
  __int64 v1; 

  v1 = transientIndex;
  if ( transientIndex >= fxWorld.transientZoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 898, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( fxWorld.transientZoneCount )", "transientIndex doesn't index fxWorld.transientZoneCount\n\t%i not in [0, %i)", transientIndex, fxWorld.transientZoneCount) )
    __debugbreak();
  if ( (_DWORD)v1 == 0xFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 899, ASSERT_TYPE_ASSERT, "( transientIndex ) != ( TRANSIENT_ZONE_INVALID )", "%s != %s\n\t%u, %u", "transientIndex", "TRANSIENT_ZONE_INVALID", 0xFFFF, 0xFFFF) )
      __debugbreak();
    return (FxGlassSystem *)(*(_QWORD *)&fxWorld.activeTransientZones[4 * v1 - 6144] + 16i64);
  }
  if ( (_DWORD)v1 )
    return (FxGlassSystem *)(*(_QWORD *)&fxWorld.activeTransientZones[4 * v1 - 6144] + 16i64);
  return &fxWorld.glassSys;
}

/*
==============
Glass_MakeAllCrackBorderGeometry
==============
*/
void Glass_MakeAllCrackBorderGeometry(FxGlassDrawState *drawState, const vec3_t *camOrg, const FxGlassGeometryData *geoData, unsigned int crackDataCount)
{
  const FxGlassGeometryData *v7; 
  const FxGlassGeometryData *v9; 
  const FxGlassGeometryData *v10; 
  __int64 v11; 
  unsigned int v12; 
  char v20; 
  char v21; 
  unsigned int v33; 
  unsigned int vertCount; 
  unsigned __int8 touchVert; 
  char v36; 
  unsigned __int64 uniqueVertCount; 
  _BOOL8 v38; 
  unsigned __int64 i; 
  char v40; 
  unsigned __int64 v41; 
  unsigned int v42; 
  bool v43; 
  unsigned __int64 v44; 
  const vec3_t *v45; 
  unsigned int v46; 
  unsigned int v66; 
  __int64 v67; 
  unsigned int v68; 
  __int64 v69; 
  __int64 usedLastEdge; 
  __int64 v72; 
  const FxGlassGeometryData *v74; 
  const FxGlassGeometryData *v75; 
  const FxGlassGeometryData *v76; 
  vec3_t v1; 
  vec3_t cross; 
  vec3_t v79; 
  vec3_t v80; 
  char v81; 
  char v82; 
  char v83[39]; 

  __asm { vmovaps [rsp+120h+var_40], xmm6 }
  _R14 = camOrg;
  _R15 = drawState;
  v7 = geoData;
  v76 = &geoData[crackDataCount];
  __asm { vxorps  xmm6, xmm6, xmm6 }
  do
  {
    v9 = v7;
    v74 = v7;
    v10 = v7++;
    v75 = v7;
    if ( v9->vert.x )
    {
      vertCount = _R15->vertCount;
      Glass_TransformVertexArray(_R15, &v7->vert, v9->hole.uniqueVertCount);
      touchVert = v9->hole.touchVert;
      v36 = v83[0];
      uniqueVertCount = v10->hole.uniqueVertCount;
      if ( touchVert != 0xFF )
        v36 = v9->hole.touchVert;
      v83[0] = v36;
      v38 = touchVert != 0xFF;
      for ( i = 0i64; i < uniqueVertCount; ++i )
        v83[v38 + i] = vertCount + i;
      v40 = v10->hole.pad[0];
      v41 = v38 + uniqueVertCount;
      if ( v40 != -1 )
        v83[v41++] = v40;
      v42 = 0;
      v82 = v83[0];
      v43 = 0;
      v44 = 1i64;
      v83[v41] = v83[v41 - 1];
      if ( v41 > 1 )
      {
        v45 = &_R15->axis.m[2];
        do
        {
          v46 = (unsigned __int8)v83[v44 - 1];
          _RAX = 3i64 * (unsigned __int8)v83[v44];
          __asm
          {
            vmovss  xmm0, dword ptr [r15+rax*4]
            vmovss  xmm2, dword ptr [r15+rax*4+4]
            vsubss  xmm1, xmm0, dword ptr [r15+rbx*4]
            vsubss  xmm0, xmm2, dword ptr [r15+rbx*4+4]
            vmovss  dword ptr [rbp+57h+var_90], xmm1
            vmovss  xmm1, dword ptr [r15+rax*4+8]
            vsubss  xmm2, xmm1, dword ptr [r15+rbx*4+8]
            vmovss  dword ptr [rbp+57h+var_90+8], xmm2
            vmovss  dword ptr [rbp+57h+var_90+4], xmm0
          }
          Vec3Cross(v45, &v79, &v80);
          _RAX = camOrg;
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vsubss  xmm4, xmm0, dword ptr [r15+rbx*4]
            vmovss  xmm0, dword ptr [rax+4]
            vsubss  xmm2, xmm0, dword ptr [r15+rbx*4+4]
            vmovss  xmm1, dword ptr [rax+8]
            vmulss  xmm0, xmm4, dword ptr [rbp+57h+var_80]
            vmulss  xmm3, xmm2, dword ptr [rbp+57h+var_80+4]
            vsubss  xmm5, xmm1, dword ptr [r15+rbx*4+8]
            vmulss  xmm1, xmm5, dword ptr [rbp+57h+var_80+8]
            vaddss  xmm4, xmm3, xmm0
            vaddss  xmm0, xmm4, xmm1
            vcomiss xmm0, xmm6
          }
          if ( v20 | v21 )
          {
            v66 = v41 - v44;
            if ( v41 - v44 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", v66, "unsigned", v41 - v44) )
              __debugbreak();
            if ( v66 >= 0x20 )
            {
              LODWORD(v72) = 32;
              LODWORD(usedLastEdge) = v41 - v44;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", usedLastEdge, v72) )
                __debugbreak();
            }
            v42 |= 0x80000000 >> v66;
            v43 = 0;
          }
          else
          {
            Glass_DrawBorderSegment(_R15, (unsigned __int8)*(&v81 + v44), v46, (unsigned __int8)v83[v44], (unsigned __int8)v83[v44 + 1], v43);
            v43 = 1;
          }
          ++v44;
          v45 = &_R15->axis.m[2];
        }
        while ( v44 < v41 );
      }
      v67 = -1i64;
      while ( v42 )
      {
        v68 = __lzcnt(v42);
        if ( v68 >= 0x20 )
        {
          LODWORD(v72) = 32;
          LODWORD(usedLastEdge) = v68;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", usedLastEdge, v72) )
            __debugbreak();
        }
        v42 &= ~(0x80000000 >> v68);
        v69 = v41 - v68;
        Glass_DrawBorderSegment(_R15, (unsigned __int8)v83[v69 + 1], (unsigned __int8)v83[v69], (unsigned __int8)v83[v69 - 1], (unsigned __int8)*(&v81 + v69), v69 == v67 - 1);
        v67 = v69;
      }
      _R14 = camOrg;
      v7 = &v75[v74->hole.uniqueVertCount];
    }
    else
    {
      if ( (v9->hole.touchVert == 0xFF || v9->hole.pad[0] == 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 626, ASSERT_TYPE_ASSERT, "(crack->beginVertIndex != 0xff && crack->endVertIndex != 0xff)", (const char *)&queryFormat, "crack->beginVertIndex != GLASS_VERT_INDEX_NONE && crack->endVertIndex != GLASS_VERT_INDEX_NONE") )
        __debugbreak();
      v11 = v10->hole.pad[0];
      v12 = v10->hole.touchVert;
      _RAX = 3 * v11;
      __asm
      {
        vmovss  xmm0, dword ptr [r15+rax*4]
        vmovss  xmm2, dword ptr [r15+rax*4+4]
        vsubss  xmm1, xmm0, dword ptr [r15+rcx*4]
        vsubss  xmm0, xmm2, dword ptr [r15+rcx*4+4]
        vmovss  dword ptr [rbp+57h+v1], xmm1
        vmovss  xmm1, dword ptr [r15+rax*4+8]
        vsubss  xmm2, xmm1, dword ptr [r15+rcx*4+8]
        vmovss  dword ptr [rbp+57h+v1+8], xmm2
        vmovss  dword ptr [rbp+57h+v1+4], xmm0
      }
      Vec3Cross(&_R15->axis.m[2], &v1, &cross);
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vmovss  xmm1, dword ptr [r14+4]
        vsubss  xmm2, xmm0, dword ptr [r15+rax*4]
        vmulss  xmm3, xmm2, dword ptr [rbp+57h+cross]
        vmovss  xmm0, dword ptr [r14+8]
        vsubss  xmm4, xmm1, dword ptr [r15+rax*4+4]
        vmulss  xmm2, xmm4, dword ptr [rbp+57h+cross+4]
        vsubss  xmm5, xmm0, dword ptr [r15+rax*4+8]
        vmulss  xmm0, xmm5, dword ptr [rbp+57h+cross+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm0
        vcomiss xmm2, xmm6
      }
      v33 = v12;
      if ( !(v20 | v21) )
      {
        v33 = v11;
        if ( !(v20 | v21) )
          LODWORD(v11) = v12;
      }
      Glass_DrawBorderSegment(_R15, v11, v11, v33, v33, 0);
    }
  }
  while ( v7 != v76 );
  __asm { vmovaps xmm6, [rsp+120h+var_40] }
}

/*
==============
Glass_MakeAllHoleBorderGeometry
==============
*/
void Glass_MakeAllHoleBorderGeometry(FxGlassDrawState *drawState, const vec3_t *camOrg, const FxGlassGeometryData *geoData, unsigned int holeDataCount, unsigned int firstVert)
{
  const FxGlassGeometryData *v8; 
  const vec3_t *v9; 
  unsigned int v11; 
  unsigned int touchVert; 
  unsigned int uniqueVertCount; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  char v17; 
  char v18; 
  bool usedLastEdge; 
  unsigned int v20; 
  unsigned int v21; 
  __int64 v22; 
  const FxGlassGeometryData *v24; 
  const FxGlassGeometryData *v27; 

  v27 = geoData;
  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  v8 = geoData;
  v9 = camOrg;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v24 = &geoData[holeDataCount];
  v11 = firstVert;
  do
  {
    touchVert = v8->hole.touchVert;
    uniqueVertCount = v8->hole.uniqueVertCount;
    if ( touchVert == 255 )
    {
      if ( uniqueVertCount < 3 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 561, ASSERT_TYPE_ASSERT, "(uniqueVertCount >= 3)", (const char *)&queryFormat, "uniqueVertCount >= 3") )
          __debugbreak();
        v11 = firstVert;
      }
      v14 = uniqueVertCount + v11;
      usedLastEdge = 0;
      v15 = uniqueVertCount + v11 - 3;
      v16 = uniqueVertCount + v11 - 2;
      touchVert = uniqueVertCount + v11 - 1;
    }
    else
    {
      if ( uniqueVertCount < 2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 545, ASSERT_TYPE_ASSERT, "(uniqueVertCount >= 2)", (const char *)&queryFormat, "uniqueVertCount >= 2") )
          __debugbreak();
        v11 = firstVert;
      }
      v14 = uniqueVertCount + v11;
      v15 = uniqueVertCount + v11 - 2;
      v16 = uniqueVertCount + v11 - 1;
      *(float *)&_XMM0 = Glass_TestCamAgainstBorderSegmentPlane(drawState, v9, v14 - 2, v14 - 1);
      __asm { vcomiss xmm0, xmm6 }
      if ( v17 | v18 )
      {
        v11 = firstVert;
        usedLastEdge = 0;
      }
      else
      {
        v20 = touchVert;
        if ( uniqueVertCount != 2 )
          v20 = v14 - 3;
        Glass_DrawBorderSegment(drawState, v20, v15, v16, touchVert, 0);
        v11 = firstVert;
        usedLastEdge = 1;
      }
    }
    v21 = v11;
    do
    {
      *(float *)&_XMM0 = Glass_TestCamAgainstBorderSegmentPlane(drawState, camOrg, v16, touchVert);
      __asm { vcomiss xmm0, xmm6 }
      if ( v17 | v18 )
      {
        usedLastEdge = 0;
      }
      else
      {
        Glass_DrawBorderSegment(drawState, v15, v16, touchVert, v21, usedLastEdge);
        usedLastEdge = 1;
      }
      v15 = v16;
      v16 = touchVert;
      touchVert = v21++;
    }
    while ( v21 != v14 );
    v9 = camOrg;
    v22 = v27->hole.uniqueVertCount;
    v11 = v22 + firstVert;
    firstVert += v22;
    v8 = &v27[v22 + 1];
    v27 = v8;
  }
  while ( v8 != v24 );
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
}

/*
==============
Glass_MakeFaceGeometry
==============
*/
void Glass_MakeFaceGeometry(FxGlassDrawState *drawState, const vec3_t *camOrg, unsigned int vertCount, const FxGlassGeometryData *geoData, unsigned int fanCount)
{
  char v42; 
  char v43; 
  unsigned int packed; 
  PackedQuatDec3n v94; 
  PackedQuatDec3n v96; 
  unsigned int v97; 
  unsigned int lightingHandle; 
  PackedTexCoords *texCoords; 
  float *i; 
  __int16 v112; 
  __int16 v113; 
  __int64 v117; 
  int v118; 
  unsigned int v119; 
  int v121; 
  vec3_t mat2; 
  vec3_t mat1; 
  vec3_t mat0; 
  int v126; 
  vec4_t out; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovss  xmm0, dword ptr [rcx+808h]
    vsubss  xmm1, xmm0, dword ptr [rdx+4]
    vmulss  xmm3, xmm1, dword ptr [rcx+82Ch]
    vmovss  xmm2, dword ptr [rcx+804h]
    vsubss  xmm0, xmm2, dword ptr [rdx]
    vmulss  xmm1, xmm0, dword ptr [rcx+828h]
    vmovss  xmm2, dword ptr [rcx+80Ch]
    vsubss  xmm0, xmm2, dword ptr [rdx+8]
  }
  _RDI = drawState->def;
  __asm
  {
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rcx+830h]
    vaddss  xmm6, xmm4, xmm1
    vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, dword ptr [rdi]
    vcomiss xmm0, xmm7
  }
  v119 = vertCount;
  _RSI = drawState;
  if ( (unsigned __int64)&v117 != _security_cookie )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovaps xmmword ptr [r11-0A8h], xmm12
    }
    XSurfacePackSelfVisibility(&kDefaultGlassSelfVisibility);
    _RAX = _RSI->texVecs;
    __asm
    {
      vmovss  xmm12, cs:__real@3f800000
      vxorps  xmm4, xmm4, xmm4
      vcomiss xmm6, xmm4
      vmovss  xmm0, dword ptr [rax+0Ch]
      vmovss  xmm1, dword ptr [rax+8]
      vmulss  xmm2, xmm1, dword ptr [rax+4]
      vmulss  xmm3, xmm0, dword ptr [rax]
      vsubss  xmm0, xmm3, xmm2
      vcmpless xmm1, xmm4, xmm0
      vmovss  xmm0, cs:__real@bf800000
      vblendvps xmm1, xmm0, xmm12, xmm1
      vmovss  dword ptr [rsp+150h+var_120], xmm1
    }
    if ( v42 | v43 )
    {
      _RSI->totalIndexCount += Glass_MakeFaceIndices(_RSI, vertCount, geoData, fanCount, 1, 2);
      __asm
      {
        vmovss  xmm8, dword ptr [rsi+828h]
        vmovss  xmm10, dword ptr [rsi+830h]
        vmovss  xmm9, dword ptr [rsi+82Ch]
        vmulss  xmm0, xmm8, xmm7
        vmovss  dword ptr [rsp+150h+var_118], xmm0
        vmulss  xmm0, xmm10, xmm7
        vmovss  [rsp+150h+var_110], xmm0
        vmovss  xmm0, dword ptr [rsp+150h+var_120]
        vxorps  xmm11, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm1, xmm9, xmm7
      }
    }
    else
    {
      __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
      _RSI->totalIndexCount += Glass_MakeFaceIndices(_RSI, vertCount, geoData, fanCount, 2, 1);
      __asm
      {
        vmovss  xmm5, dword ptr [rsi+828h]
        vmovss  xmm2, dword ptr [rsi+830h]
        vmovss  xmm4, dword ptr [rsi+82Ch]
        vmovss  xmm11, dword ptr [rsp+150h+var_120]
        vxorps  xmm3, xmm7, xmm6
        vmulss  xmm0, xmm5, xmm3
        vmovss  dword ptr [rsp+150h+var_118], xmm0
        vmulss  xmm0, xmm2, xmm3
        vmovss  [rsp+150h+var_110], xmm0
        vmulss  xmm1, xmm4, xmm3
        vxorps  xmm8, xmm5, xmm6
        vxorps  xmm9, xmm4, xmm6
        vxorps  xmm10, xmm2, xmm6
      }
    }
    _RAX = _RSI->texVecs;
    packed = _RDI->color.packed;
    __asm
    {
      vmovss  dword ptr [rsp+150h+var_118+4], xmm1
      vmovss  dword ptr [rsp+150h+mat2+8], xmm10
      vmovss  dword ptr [rsp+150h+mat2+4], xmm9
      vmovss  dword ptr [rsp+150h+mat2], xmm8
      vmovss  xmm3, dword ptr [rax+4]
      vmovss  xmm4, dword ptr [rax]
      vmulss  xmm1, xmm3, dword ptr [rsi+81Ch]
      vmulss  xmm2, xmm3, dword ptr [rsi+820h]
      vmulss  xmm0, xmm4, dword ptr [rsi+810h]
      vaddss  xmm5, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [rsi+824h]
      vmulss  xmm0, xmm4, dword ptr [rsi+814h]
      vaddss  xmm7, xmm2, xmm0
      vmulss  xmm0, xmm4, dword ptr [rsi+818h]
      vaddss  xmm6, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm2, xmm7, xmm7
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm12, xmm0
      vdivss  xmm2, xmm12, xmm0
      vmulss  xmm3, xmm6, xmm2
      vmulss  xmm4, xmm7, xmm2
      vmulss  xmm1, xmm3, xmm9
      vmulss  xmm5, xmm5, xmm2
      vmulss  xmm0, xmm4, xmm10
      vsubss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm8, xmm3
      vmovss  dword ptr [rsp+150h+mat1], xmm1
      vmulss  xmm2, xmm5, xmm10
      vsubss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rsp+150h+mat0+8], xmm3
      vmulss  xmm0, xmm5, xmm9
      vmulss  xmm3, xmm4, xmm8
      vmovss  dword ptr [rsp+150h+mat1+4], xmm1
      vsubss  xmm1, xmm3, xmm0
      vmovss  dword ptr [rsp+150h+mat1+8], xmm1
      vmovss  dword ptr [rsp+150h+mat0], xmm5
      vmovss  dword ptr [rsp+150h+mat0+4], xmm4
    }
    AxisComponentsToQuat(&mat0, &mat1, &mat2, &out);
    __asm { vmovaps xmm1, xmm11; binormalSign }
    v94.packed = UnitQuatToQuatDec3n(&out, *(float *)&_XMM1).packed;
    __asm { vmovaps xmm12, [rsp+150h+var_A8+8] }
    v96.packed = v94.packed;
    v97 = vertCount;
    __asm
    {
      vmovaps xmm11, [rsp+150h+var_98+8]
      vmovaps xmm10, [rsp+150h+var_88+8]
      vmovaps xmm9, [rsp+150h+var_78+8]
    }
    v126 = v121;
    __asm
    {
      vmovsd  xmm0, [rsp+150h+var_118]
      vmovsd  [rsp+150h+anonymous_0], xmm0
    }
    if ( !vertCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 259, ASSERT_TYPE_ASSERT, "(vertCount)", (const char *)&queryFormat, "vertCount") )
      __debugbreak();
    LOWORD(v118) = _RSI->baseVertex;
    _RAX = R_GlassMeshVertIter_Begin(v118);
    lightingHandle = _RSI->lightingHandle;
    texCoords = _RSI->texCoords;
    __asm
    {
      vmovss  xmm6, [rbp+50h+var_D0]
      vmovss  xmm7, dword ptr [rsp+150h+anonymous_0+4]
      vmovss  xmm8, dword ptr [rsp+150h+anonymous_0]
    }
    for ( i = &_RSI->localVerts[0].v[2]; ; i += 3 )
    {
      __asm
      {
        vaddss  xmm0, xmm8, dword ptr [r14-8]
        vaddss  xmm1, xmm7, dword ptr [r14-4]
        vmovss  dword ptr [rax], xmm0
        vaddss  xmm0, xmm6, dword ptr [r14]
        vmovss  dword ptr [rax+8], xmm0
        vmovss  dword ptr [rax+4], xmm1
      }
      _RAX->color = packed;
      _RAX->texcoord = texCoords->packed;
      _RAX->tangentFrame = v96.packed;
      _RAX->lgvIndex = lightingHandle;
      if ( !--v97 )
        break;
      ++texCoords;
      _RAX = R_GlassMeshVertIter_Next(_RAX);
    }
    R_GlassMeshVertIter_End(_RAX);
    v112 = v119;
    v113 = v118;
    _RSI->totalVertCount += v119;
    __asm { vmovaps xmm8, [rsp+150h+var_68+8] }
    _RSI->baseVertex = v112 + v113;
  }
  __asm
  {
    vmovaps xmm6, [rsp+150h+var_48+8]
    vmovaps xmm7, [rsp+150h+var_58+8]
  }
}

/*
==============
Glass_MakeFaceIndices
==============
*/
__int64 Glass_MakeFaceIndices(const FxGlassDrawState *drawState, unsigned int borderVertCount, const FxGlassGeometryData *geoData, unsigned int fanDataCount, int i1, int i2)
{
  const FxGlassGeometryData *v6; 
  unsigned __int16 baseVertex; 
  r_double_index_t *v9; 
  unsigned int v10; 
  bool i; 
  __int16 v12; 
  __int16 v13; 
  int v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned __int8 v18; 
  unsigned __int8 touchVert; 
  __int64 v20; 
  int v21; 
  const FxGlassGeometryData *v22; 
  r_double_index_t v23; 
  int v24; 
  r_double_index_t v25; 
  r_double_index_t v26; 

  v6 = geoData;
  baseVertex = drawState->baseVertex;
  v9 = &drawState->dstIndices[(unsigned __int64)drawState->totalIndexCount >> 1];
  if ( fanDataCount )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0i64;
    v22 = &geoData[fanDataCount];
    v18 = geoData->asBytes[0];
    do
    {
      touchVert = v6->hole.touchVert;
      LODWORD(v20) = 2;
      do
      {
        *((_WORD *)&v24 + 3 * v17) = baseVertex + v18;
        v16 += 3;
        *((_WORD *)&v24 + 3 * v17 + i1) = baseVertex + v6->asBytes[(unsigned int)(v20 - 1)];
        *((_WORD *)&v24 + 3 * v17 + i2) = baseVertex + touchVert;
        v21 = v24;
        v15 = 1 - v15;
        v17 = 1 - v17;
        if ( !v17 )
        {
          v9[1] = v25;
          v9[2] = v26;
          *v9 = (r_double_index_t)v21;
          v9 += 3;
        }
        v20 = (unsigned int)(v20 + 1);
        touchVert = v6->asBytes[v20];
      }
      while ( touchVert != 0xFF );
      v6 = (const FxGlassGeometryData *)((char *)v6 + (unsigned int)(v20 + 1));
      v18 = v6->asBytes[0];
    }
    while ( v6->asBytes[0] != 0xFF && v6 != v22 );
    if ( v15 )
    {
      *v9 = (r_double_index_t)v21;
      v25.value[1] = -1;
      v9[1] = v25;
    }
    return v16;
  }
  else
  {
    v10 = 3;
    LOWORD(v22) = drawState->baseVertex;
    HIWORD(v22) = baseVertex;
    for ( i = borderVertCount == 3; v10 < borderVertCount; i = v10 == borderVertCount )
    {
      v12 = baseVertex + v10;
      v10 += 2;
      *((_WORD *)&v22 + i1) = v12 - 2;
      *((_WORD *)&v22 + i2) = v12 - 1;
      *((_WORD *)&v22 + i1 + 3) = v12 - 1;
      *((_WORD *)&v22 + i2 + 3) = v12;
      *(_QWORD *)v9->value = v22;
      v9[2] = v23;
      v9 += 3;
    }
    if ( i )
    {
      v13 = baseVertex + v10;
      *((_WORD *)&v22 + i1) = v13 - 2;
      *((_WORD *)&v22 + i2) = v13 - 1;
      *(_QWORD *)v9->value = v22;
    }
    return 3 * borderVertCount - 6;
  }
}

/*
==============
Glass_MakePieceGeometry
==============
*/
void Glass_MakePieceGeometry(FxGlassDrawState *drawState, const FxGlassPiecePlace *piecePlace, const FxGlassPieceState *pieceState, const FxGlassDef *def, const FxGlassGeometryData *geoData, const vec3_t *camOrg, unsigned int drawFlags)
{
  __int64 holeDataCount; 
  unsigned int v9; 
  const vec3_t *v11; 
  __int64 v13; 
  bool v17; 
  int *texVecs; 
  const FxGlassGeometryData *v22; 
  const FxGlassGeometryData *v23; 
  unsigned int v24; 
  bool v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  char v35; 
  const FxGlassGeometryData *v36; 
  __int64 usedLastEdge; 
  __int64 v39; 
  unsigned int crackDataCount; 
  unsigned int vertCount; 
  int v43[4]; 

  __asm { vmovaps [rsp+0C8h+var_48], xmm6 }
  holeDataCount = pieceState->holeDataCount;
  v9 = pieceState->crackDataCount;
  _RSI = drawState;
  v11 = camOrg;
  _R14 = def;
  v13 = pieceState->vertCount;
  *(_QWORD *)&drawState->totalVertCount = 0i64;
  drawState->origin = *(vec3_t *)(&piecePlace->nextFree + 4);
  drawState->texCoordOrigin = pieceState->texCoordOrigin;
  crackDataCount = v9;
  UnitQuatToAxis(&piecePlace->frame.quat, &drawState->axis);
  __asm
  {
    vmovaps xmm2, cs:__xmm@3d0000003d0000003d0000003d000000
    vmulps  xmm0, xmm2, xmmword ptr [rsi+810h]
    vmovups xmmword ptr [rsi+810h], xmm0
    vmulss  xmm0, xmm2, dword ptr [rsi+820h]
    vmovss  dword ptr [rsi+820h], xmm0
  }
  v17 = (pieceState->flags & 1) == 0;
  __asm
  {
    vmulss  xmm0, xmm2, dword ptr [rsi+824h]
    vmovss  dword ptr [rsi+824h], xmm0
  }
  _RSI->def = _R14;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( v17 || _R14->materialShattered == _R14->material )
  {
    texVecs = (int *)_R14->texVecs;
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm2, dword ptr [rsi+87Ch]
      vmovss  [rsp+0C8h+var_60], xmm0
      vmovss  [rsp+0C8h+var_54], xmm0
      vmovss  [rsp+0C8h+var_5C], xmm6
      vmovss  [rsp+0C8h+var_58], xmm6
    }
    texVecs = v43;
  }
  _RSI->texVecs = (const vec2_t *)texVecs;
  _RSI->vertCount = 0;
  Glass_TransformVertexArray(_RSI, &geoData->vert, v13);
  if ( (_DWORD)holeDataCount )
  {
    v22 = &geoData[v13];
    v23 = &v22[holeDataCount];
    do
    {
      Glass_TransformVertexArray(_RSI, &v22[1].vert, v22->hole.uniqueVertCount);
      v22 += v22->hole.uniqueVertCount + 1;
    }
    while ( v22 != v23 );
    v9 = crackDataCount;
  }
  v24 = _RSI->vertCount;
  vertCount = v24;
  if ( (drawFlags & 2) != 0 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [r14]
      vmulss  xmm0, xmm2, dword ptr [rcx]
      vmovss  dword ptr [rsi+854h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rcx+4]
      vmovss  dword ptr [rsi+858h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rcx+8]
      vmovaps xmm1, xmm6; alpha
      vmovss  dword ptr [rsi+85Ch], xmm0
    }
    v30 = 0;
    _RSI->packedTangentBinormalSign = Vec3PackUnitVecWithAlpha(&_RSI->axis.m[2], *(float *)&_XMM1);
    if ( (unsigned int)v13 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 513, ASSERT_TYPE_ASSERT, "(vertCount >= 3)", (const char *)&queryFormat, "vertCount >= 3") )
      __debugbreak();
    v31 = v13 - 3;
    v32 = v13 - 2;
    v33 = 0;
    v34 = v13 - 1;
    do
    {
      if ( v32 >= 0x20 )
      {
        LODWORD(v39) = 32;
        LODWORD(usedLastEdge) = v32;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", usedLastEdge, v39) )
          __debugbreak();
      }
      if ( ((0x80000000 >> v32) & pieceState->supportMask) != 0 )
      {
        v30 = 0;
      }
      else
      {
        *(float *)&_XMM0 = Glass_TestCamAgainstBorderSegmentPlane(_RSI, camOrg, v32, v34);
        __asm { vcomiss xmm0, xmm6 }
        if ( v35 | v17 )
        {
          v30 = 0;
        }
        else
        {
          Glass_DrawBorderSegment(_RSI, v31, v32, v34, v33, v30);
          v30 = 1;
        }
      }
      v31 = v32;
      v32 = v34;
      v34 = v33++;
    }
    while ( v33 != (_DWORD)v13 );
    v36 = geoData;
    v11 = camOrg;
    if ( (_DWORD)holeDataCount )
      Glass_MakeAllHoleBorderGeometry(_RSI, camOrg, &geoData[v13], holeDataCount, v13);
    v9 = crackDataCount;
    if ( crackDataCount )
      Glass_MakeAllCrackBorderGeometry(_RSI, camOrg, &geoData[(unsigned int)(holeDataCount + v13)], crackDataCount);
    v24 = vertCount;
  }
  else
  {
    v36 = geoData;
  }
  if ( (drawFlags & 1) != 0 )
    Glass_MakeFaceGeometry(_RSI, v11, v24, &v36[(unsigned int)v13 + v9 + (_DWORD)holeDataCount], pieceState->fanDataCount);
  _RSI->texVecs = NULL;
  __asm { vmovaps xmm6, [rsp+0C8h+var_48] }
}

/*
==============
Glass_TestCamAgainstBorderSegmentPlane
==============
*/
float Glass_TestCamAgainstBorderSegmentPlane(const FxGlassDrawState *drawState, const vec3_t *camOrg, unsigned int i1, unsigned int i2)
{
  vec3_t v1; 
  vec3_t cross; 

  _RDI = camOrg;
  _R8 = 3i64 * i2;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+r8*4]
    vsubss  xmm1, xmm0, dword ptr [rcx+rbx*4]
    vmovss  xmm2, dword ptr [rcx+r8*4+4]
    vsubss  xmm0, xmm2, dword ptr [rcx+rbx*4+4]
    vmovss  dword ptr [rsp+58h+v1], xmm1
    vmovss  xmm1, dword ptr [rcx+r8*4+8]
    vsubss  xmm2, xmm1, dword ptr [rcx+rbx*4+8]
    vmovss  dword ptr [rsp+58h+v1+8], xmm2
    vmovss  dword ptr [rsp+58h+v1+4], xmm0
  }
  Vec3Cross(&drawState->axis.m[2], &v1, &cross);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, dword ptr [rsi+rbx*4+4]
    vmulss  xmm3, xmm1, dword ptr [rsp+58h+cross+4]
    vmovss  xmm2, dword ptr [rdi]
    vsubss  xmm0, xmm2, dword ptr [rsi+rbx*4]
    vmulss  xmm1, xmm0, dword ptr [rsp+58h+cross]
    vmovss  xmm2, dword ptr [rdi+8]
    vsubss  xmm0, xmm2, dword ptr [rsi+rbx*4+8]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rsp+58h+cross+8]
    vaddss  xmm0, xmm4, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
Glass_TransformVertexArray
==============
*/
void Glass_TransformVertexArray(FxGlassDrawState *drawState, const FxGlassVertex *vertArray, unsigned int vertCount)
{
  __int64 v9; 
  __int64 v11; 
  __int64 v42; 
  unsigned int v53; 

  _R9 = drawState->texVecs;
  v9 = drawState->vertCount;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v11 = 0i64;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm6, dword ptr [r9+4]
    vmovss  xmm7, dword ptr [r9]
    vmovaps [rsp+58h+var_38], xmm8
    vmovss  xmm8, dword ptr [r9+0Ch]
  }
  _RBX = &drawState->localVerts[v9];
  __asm
  {
    vmovaps [rsp+58h+var_48], xmm9
    vmovss  xmm9, dword ptr [r9+8]
  }
  drawState->vertCount = v9 + vertCount;
  do
  {
    _EAX = vertArray[v11].x;
    __asm { vmovd   xmm3, eax }
    _EAX = vertArray[v11].y;
    __asm
    {
      vcvtdq2ps xmm3, xmm3
      vmulss  xmm0, xmm3, dword ptr [r10+810h]
      vaddss  xmm2, xmm0, dword ptr [r10+804h]
      vmovd   xmm4, eax
      vcvtdq2ps xmm4, xmm4
      vmulss  xmm1, xmm4, dword ptr [r10+81Ch]
      vaddss  xmm2, xmm2, xmm1
    }
    _RAX = 3 * v11;
    __asm
    {
      vmovss  dword ptr [rbx+rax*4], xmm2
      vmulss  xmm1, xmm4, dword ptr [r10+820h]
      vmulss  xmm0, xmm3, dword ptr [r10+814h]
      vaddss  xmm2, xmm0, dword ptr [r10+808h]
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rbx+rax*4+4], xmm2
      vmulss  xmm1, xmm4, dword ptr [r10+824h]
      vmulss  xmm0, xmm3, dword ptr [r10+818h]
      vaddss  xmm2, xmm0, dword ptr [r10+80Ch]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rbx+rax*4+8], xmm0
      vmulss  xmm2, xmm6, xmm4
      vmulss  xmm1, xmm7, xmm3
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm5, xmm0, dword ptr [r10+834h]
      vmulss  xmm1, xmm8, xmm4
      vxorps  xmm4, xmm4, xmm4
    }
    v42 = v9 + (unsigned int)v11;
    v11 = (unsigned int)(v11 + 1);
    __asm
    {
      vmulss  xmm3, xmm9, xmm3
      vaddss  xmm0, xmm3, xmm1
      vaddss  xmm2, xmm0, dword ptr [r10+838h]
      vinsertps xmm4, xmm4, xmm5, 0
      vinsertps xmm4, xmm4, xmm2, 10h
      vcvtps2ph xmm0, xmm4, 0
      vmovss  [rsp+58h+var_58], xmm0
    }
    drawState->texCoords[v42].packed = v53;
  }
  while ( (_DWORD)v11 != vertCount );
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm9, [rsp+58h+var_48]
  }
}

