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
char FX_GlassPiecesInSphere(const Sphere *sphere, unsigned __int16 *pieceIndices, unsigned int maxPieces, unsigned int *pieceCount)
{
  __int64 v6; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  unsigned int pieceWordCount; 

  __asm { prefetcht0 byte ptr cs:?fxWorld@@3UFxWorld@@A.glassSys.time; FxWorld fxWorld }
  v6 = 0i64;
  *pieceCount = 0;
  v30 = 0;
  pieceWordCount = fxWorld.glassSys.pieceWordCount;
  if ( !fxWorld.glassSys.pieceWordCount )
    return 1;
  while ( 1 )
  {
    v7 = fxWorld.glassSys.isInUse[v6];
    if ( v7 )
      break;
LABEL_18:
    v6 = (unsigned int)(v6 + 1);
    v30 = v6;
    if ( (unsigned int)v6 >= pieceWordCount )
      return 1;
  }
  v8 = 32 * v6;
  v29 = 32 * v6;
  while ( 1 )
  {
    v9 = __lzcnt(v7);
    if ( v9 >= 0x20 )
    {
      LODWORD(v28) = 32;
      LODWORD(v27) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    _RSI = v9 | v8;
    v7 &= ~(0x80000000 >> v9);
    _RAX = fxWorld.glassSys.pieceStates;
    _RBX = _RSI;
    __asm { prefetcht0 byte ptr [rbx+rax] }
    if ( (fxWorld.glassSys.pieceStates[_RSI].flags & 0x48) != 0 )
      goto LABEL_16;
    _RDI = fxWorld.glassSys.piecePlaces;
    __asm { prefetcht0 byte ptr [rbx+rdi] }
    v14 = sphere->origin.v[0] - fxWorld.glassSys.piecePlaces[_RBX].frame.origin.v[0];
    v15 = sphere->origin.v[1] - fxWorld.glassSys.piecePlaces[_RBX].frame.origin.v[1];
    v16 = sphere->origin.v[2] - fxWorld.glassSys.piecePlaces[_RBX].frame.origin.v[2];
    v17 = fxWorld.glassSys.piecePlaces[_RBX].radius + sphere->radius;
    if ( (float)((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16)) <= (float)(v17 * v17) )
    {
      _R12 = fxWorld.glassSys.halfThickness;
      __asm { prefetcht0 byte ptr [r12+rsi*4] }
      v19 = fxWorld.glassSys.piecePlaces[_RBX].frame.quat.v[1];
      v20 = fxWorld.glassSys.piecePlaces[_RBX].frame.quat.v[0];
      v21 = fxWorld.glassSys.piecePlaces[_RBX].frame.quat.v[2];
      v22 = fxWorld.glassSys.piecePlaces[_RBX].frame.quat.v[3];
      v23 = (float)((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21)) + (float)(v22 * v22);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 38, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v20, v19, v21, v22, fsqrt(v23)) )
        __debugbreak();
      v24 = _RDI[_RBX].frame.quat.v[1];
      v25 = _RDI[_RBX].frame.quat.v[0];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)((float)(v24 * _RDI[_RBX].frame.quat.v[2]) - (float)(v25 * _RDI[_RBX].frame.quat.v[3])) * 2.0) * v15) + (float)((float)((float)((float)(v25 * _RDI[_RBX].frame.quat.v[2]) + (float)(v24 * _RDI[_RBX].frame.quat.v[3])) * 2.0) * v14)) + (float)((float)(1.0 - (float)((float)((float)(v25 * v25) + (float)(v24 * v24)) * 2.0)) * v16)) & _xmm) <= (float)(sphere->radius + _R12[_RSI]) )
        break;
    }
LABEL_15:
    v8 = v29;
LABEL_16:
    if ( !v7 )
    {
      LODWORD(v6) = v30;
      goto LABEL_18;
    }
  }
  if ( *pieceCount < maxPieces )
  {
    pieceIndices[(*pieceCount)++] = truncate_cast<unsigned short,unsigned int>(_RSI);
    goto LABEL_15;
  }
  return 0;
}

/*
==============
FX_GlassTrisInPiece
==============
*/
char FX_GlassTrisInPiece(unsigned int pieceIndex, const vec3_t *normal, GlassTri *tris, unsigned int maxTris, vec3_t *verts, unsigned int maxVerts, unsigned int *triCount, vec3_t *outGlassNormal)
{
  __int64 v10; 
  __int64 v11; 
  float v15; 
  __m128 v16; 
  float v17; 
  vec3_t *v18; 
  float v19; 
  FxGlassGeometryData *v20; 
  unsigned int vertIndex; 
  vec3_t *v27; 
  vec3_t *v28; 
  FxGlassGeometryData *geoData; 
  tmat33_t<vec3_t> axis; 

  v28 = verts;
  v27 = outGlassNormal;
  v10 = pieceIndex;
  if ( maxVerts > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1357, ASSERT_TYPE_ASSERT, "(maxVerts <= 0xffff)", (const char *)&queryFormat, "maxVerts <= USHRT_MAX") )
    __debugbreak();
  __asm
  {
    prefetcht0 byte ptr cs:?fxWorld@@3UFxWorld@@A.glassGlob.defCount; FxWorld fxWorld
    prefetcht0 byte ptr cs:?fxWorld@@3UFxWorld@@A.glassSys.time; FxWorld fxWorld
  }
  *triCount = 0;
  v11 = v10;
  _R14 = &fxWorld.glassSys.pieceStates[v10];
  vertIndex = 0;
  __asm { prefetcht0 byte ptr [r14] }
  _R12 = &fxWorld.glassSys.piecePlaces[v11];
  __asm { prefetcht0 byte ptr [r12] }
  _R15 = &fxWorld.glassGlob.defs[fxWorld.glassSys.pieceStates[v11].defIndex];
  __asm { prefetcht0 byte ptr [r15] }
  geoData = &fxWorld.glassSys.geoData[fxWorld.glassSys.pieceStates[v11].geoDataStart];
  __asm { prefetcht0 byte ptr [rax] }
  UnitQuatToAxis(&fxWorld.glassSys.piecePlaces[v11].frame.quat, &axis);
  v15 = 0.03125 * axis.m[1].v[1];
  v16 = _mm128_mul_ps((__m128)_xmm, *(__m128 *)axis.m[0].v);
  v17 = 0.03125 * axis.m[1].v[2];
  v18 = v27;
  v19 = axis.m[2].v[2];
  v20 = geoData;
  v27->v[0] = axis.m[2].v[0];
  v18->v[2] = v19;
  axis.m[1].v[1] = v15;
  v18->v[1] = axis.m[2].v[1];
  *(__m128 *)axis.m[0].v = v16;
  axis.m[1].v[2] = v17;
  _XMM1 = LODWORD(FLOAT_N1_0);
  _XMM0 = 0i64;
  __asm
  {
    vcmpltss xmm4, xmm0, xmm2
    vblendvps xmm6, xmm1, xmm3, xmm4
  }
  if ( FX_GlassTris_AddGlassPieceVerts(&fxWorld.glassSys, _R15, _R14, _R12, v20, &axis, *(float *)&_XMM6, v28, &vertIndex, maxVerts) && FX_GlassTris_AddGlassPieceTris(&fxWorld.glassSys, _R15, _R14, _R12, v20, &axis, *(float *)&_XMM6, 0, tris, triCount, maxTris) )
    return 1;
  *triCount = 0;
  return 0;
}

/*
==============
FX_GlassTris_AddGlassPieceTris
==============
*/
char FX_GlassTris_AddGlassPieceTris(const FxGlassSystem *glassSys, const FxGlassDef *def, const FxGlassPieceState *pieceState, const FxGlassPiecePlace *piecePlace, const FxGlassGeometryData *geoData, const tmat33_t<vec3_t> *axis, float side, unsigned int startVertIndex, GlassTri *tris, unsigned int *triIndex, unsigned int maxTris)
{
  unsigned __int8 fanDataCount; 
  int vertCount; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  GlassTri *v18; 
  unsigned __int16 v19; 
  unsigned __int16 v20; 
  unsigned int *v22; 
  const FxGlassGeometryData *v23; 
  __int64 v24; 
  unsigned int v25; 
  unsigned __int8 v26; 
  __int64 v27; 
  unsigned __int16 v28; 
  GlassTri *v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int16 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  const FxGlassGeometryData *v36; 

  fanDataCount = pieceState->fanDataCount;
  if ( fanDataCount )
  {
    v22 = triIndex;
    v23 = &geoData[pieceState->vertCount + pieceState->holeDataCount + (unsigned __int64)pieceState->crackDataCount];
    v24 = fanDataCount;
    v25 = *triIndex;
    v36 = &v23[v24];
    v26 = v23->asBytes[0];
LABEL_15:
    LODWORD(v27) = 2;
    v28 = startVertIndex + v26;
    while ( v25 + 1 <= maxTris )
    {
      if ( v25 >= maxTris )
      {
        LODWORD(v34) = maxTris;
        LODWORD(v33) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1279, ASSERT_TYPE_ASSERT, "(unsigned)( *triIndex ) < (unsigned)( maxTris )", "*triIndex doesn't index maxTris\n\t%i not in [0, %i)", v33, v34) )
          __debugbreak();
        v22 = triIndex;
      }
      v29 = &tris[*v22];
      v29->indices[0] = v28;
      v30 = 1i64;
      if ( side <= 0.0 )
        v30 = 2i64;
      v29->indices[v30] = startVertIndex + v23->asBytes[(unsigned int)(v27 - 1)];
      v31 = 2i64;
      v32 = startVertIndex + v23->asBytes[(unsigned int)v27];
      if ( side <= 0.0 )
        v31 = 1i64;
      v27 = (unsigned int)(v27 + 1);
      v29->indices[v31] = v32;
      v25 = *v22 + 1;
      *v22 = v25;
      if ( v23->asBytes[v27] == 0xFF )
      {
        v23 = (const FxGlassGeometryData *)((char *)v23 + (unsigned int)(v27 + 1));
        v26 = v23->asBytes[0];
        if ( v23->asBytes[0] != 0xFF && v23 != v36 )
          goto LABEL_15;
        return 1;
      }
    }
    return 0;
  }
  vertCount = pieceState->vertCount;
  v14 = *triIndex;
  if ( vertCount + *triIndex - 2 > maxTris )
    return 0;
  v15 = 2;
  if ( (unsigned __int8)vertCount <= 2u )
    return 1;
  v16 = 4i64;
  v17 = 1i64;
  if ( side <= 0.0 )
    v17 = 2i64;
  if ( side <= 0.0 )
    v16 = 2i64;
  v35 = v16;
  do
  {
    if ( v14 >= maxTris )
    {
      LODWORD(v34) = maxTris;
      LODWORD(v33) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1254, ASSERT_TYPE_ASSERT, "(unsigned)( *triIndex ) < (unsigned)( maxTris )", "*triIndex doesn't index maxTris\n\t%i not in [0, %i)", v33, v34) )
        __debugbreak();
    }
    v18 = &tris[*triIndex];
    v18->indices[0] = startVertIndex;
    v19 = startVertIndex + v15;
    v20 = startVertIndex + v15++ - 1;
    v18->indices[v17] = v20;
    *(unsigned __int16 *)((char *)v18->indices + v35) = v19;
    v14 = ++*triIndex;
  }
  while ( v15 < pieceState->vertCount );
  return 1;
}

/*
==============
FX_GlassTris_AddGlassPieceVerts
==============
*/
char FX_GlassTris_AddGlassPieceVerts(const FxGlassSystem *glassSys, const FxGlassDef *def, const FxGlassPieceState *pieceState, const FxGlassPiecePlace *piecePlace, const FxGlassGeometryData *geoData, const tmat33_t<vec3_t> *axis, float side, vec3_t *verts, unsigned int *vertIndex, unsigned int maxVerts)
{
  unsigned int vertCount; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  float x; 
  int y; 
  const FxGlassGeometryData *v19; 
  unsigned int uniqueVertCount; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  float v24; 
  int v25; 
  __int64 v27; 
  __int64 v28; 
  unsigned int *vertIndexa; 

  vertCount = pieceState->vertCount;
  v14 = *vertIndex;
  if ( vertCount + *vertIndex <= maxVerts )
  {
    v15 = 0i64;
    if ( pieceState->vertCount )
    {
      do
      {
        if ( v14 >= maxVerts )
        {
          LODWORD(v28) = maxVerts;
          LODWORD(v27) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1181, ASSERT_TYPE_ASSERT, "(unsigned)( *vertIndex ) < (unsigned)( maxVerts )", "*vertIndex doesn't index maxVerts\n\t%i not in [0, %i)", v27, v28) )
            __debugbreak();
        }
        v16 = *vertIndex;
        x = (float)geoData[v15].vert.x;
        y = geoData[v15].vert.y;
        v15 = (unsigned int)(v15 + 1);
        verts[v16].v[0] = (float)((float)(x * axis->m[0].v[0]) + piecePlace->frame.origin.v[0]) + (float)((float)y * axis->m[1].v[0]);
        verts[v16].v[1] = (float)((float)(x * axis->m[0].v[1]) + piecePlace->frame.origin.v[1]) + (float)((float)y * axis->m[1].v[1]);
        verts[v16].v[2] = (float)((float)(x * axis->m[0].v[2]) + piecePlace->frame.origin.v[2]) + (float)((float)y * axis->m[1].v[2]);
        ++*vertIndex;
        vertCount = pieceState->vertCount;
        v14 = *vertIndex;
      }
      while ( (unsigned int)v15 < vertCount );
    }
    v19 = &geoData[(unsigned __int8)vertCount];
    vertIndexa = (unsigned int *)&v19[pieceState->holeDataCount];
    if ( v19 == (const FxGlassGeometryData *)vertIndexa )
      return 1;
    while ( 1 )
    {
      uniqueVertCount = v19->hole.uniqueVertCount;
      v21 = *vertIndex;
      if ( *vertIndex + uniqueVertCount > maxVerts )
        break;
      v22 = 0i64;
      if ( v19->vert.x )
      {
        do
        {
          if ( v21 >= maxVerts )
          {
            LODWORD(v28) = maxVerts;
            LODWORD(v27) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( *vertIndex ) < (unsigned)( maxVerts )", "*vertIndex doesn't index maxVerts\n\t%i not in [0, %i)", v27, v28) )
              __debugbreak();
          }
          v23 = *vertIndex;
          v24 = (float)v19[v22 + 1].vert.x;
          v25 = v19[v22 + 1].vert.y;
          v22 = (unsigned int)(v22 + 1);
          verts[v23].v[0] = (float)((float)(v24 * axis->m[0].v[0]) + piecePlace->frame.origin.v[0]) + (float)((float)v25 * axis->m[1].v[0]);
          verts[v23].v[1] = (float)((float)(v24 * axis->m[0].v[1]) + piecePlace->frame.origin.v[1]) + (float)((float)v25 * axis->m[1].v[1]);
          verts[v23].v[2] = (float)((float)(v24 * axis->m[0].v[2]) + piecePlace->frame.origin.v[2]) + (float)((float)v25 * axis->m[1].v[2]);
          ++*vertIndex;
          uniqueVertCount = v19->hole.uniqueVertCount;
          v21 = *vertIndex;
        }
        while ( (unsigned int)v22 < uniqueVertCount );
      }
      v19 += (unsigned __int16)uniqueVertCount + 1;
      if ( v19 == (const FxGlassGeometryData *)vertIndexa )
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
  FxGlassVisInfo *v1; 
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
  float v20; 
  float v21; 
  unsigned int v22; 
  unsigned __int16 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  char v27; 
  int v28; 
  unsigned __int16 v29; 
  __int64 v30; 
  unsigned __int16 *v31; 
  _DWORD *v32; 
  __int64 v33; 

  v1 = (FxGlassVisInfo *)*((_QWORD *)cmd + 2);
  v1->visCount = 0;
  FX_GlassUpdatePieceLightingForGlassSystem(&fxWorld.glassSys, 0, (const vec3_t *)cmd, v1);
  v2 = 0;
  v28 = 0;
  if ( fxWorld.activeTransientZoneCount )
  {
    activeTransientZones = fxWorld.activeTransientZones;
    v31 = fxWorld.activeTransientZones;
    do
    {
      if ( v1->visCount == 65520 )
        break;
      v29 = *activeTransientZones;
      v4 = *activeTransientZones;
      if ( *activeTransientZones >= fxWorld.transientZoneCount )
      {
        LODWORD(v25) = fxWorld.transientZoneCount;
        LODWORD(v24) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1159, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( fxWorld.transientZoneCount )", "transientIndex doesn't index fxWorld.transientZoneCount\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v5 = *(_QWORD *)&fxWorld.activeTransientZones[4 * v4 - 6144];
      v30 = v5;
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 28);
        if ( v6 )
        {
          v7 = *(_DWORD **)(v5 + 88);
          LODWORD(v8) = 0;
          v32 = v7;
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
            v27 = 0;
            while ( 1 )
            {
              v15 = v12;
              v33 = _R14;
              if ( v11 )
              {
LABEL_17:
                v16 = __lzcnt(v11);
                if ( v16 >= 0x20 )
                {
                  LODWORD(v25) = 32;
                  LODWORD(v24) = v16;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v24, v25) )
                    __debugbreak();
                  v14 = v27;
                }
                v11 &= ~(0x80000000 >> v16);
                v12 = v16 | (32 * v8);
                v17 = v30;
                _R14 = *(_QWORD *)(v30 + 56) + 32i64 * v12;
                __asm { prefetcht0 byte ptr [r14] }
              }
              else
              {
                while ( 1 )
                {
                  v8 = (unsigned int)(v8 + 1);
                  if ( (_DWORD)v8 == v6 )
                    break;
                  v11 = v32[v8];
                  if ( v11 )
                    goto LABEL_17;
                }
                v17 = v30;
                v14 = 1;
                v27 = 1;
              }
              v18 = *(_DWORD *)(v17 + 24);
              if ( (unsigned int)v15 >= v18 )
              {
                LODWORD(v25) = v18;
                LODWORD(v24) = v15;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1121, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( glassSys->pieceLimit )", "pieceIndex doesn't index glassSys->pieceLimit\n\t%i not in [0, %i)", v24, v25) )
                  __debugbreak();
                v14 = v27;
              }
              v19 = *(_BYTE *)(v15 + *(_QWORD *)(v30 + 104));
              if ( v19 )
              {
                if ( v19 > 3u )
                {
                  LODWORD(v26) = v15;
                  LODWORD(v25) = v19;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1125, ASSERT_TYPE_ASSERT, "(glassSys->visData[pieceIndex] <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES))", "%s\n\tvalue: %d, pieceIndex: %d", "glassSys->visData[pieceIndex] <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES)", v25, v26) )
                    __debugbreak();
                }
                v1->visList[v1->visCount].pieceIndex = v15;
                v1->visList[v1->visCount].transientIndex = v29;
                v1->visList[v1->visCount].drawFlags = *(_BYTE *)(v15 + *(_QWORD *)(v30 + 104));
                v20 = *((float *)cmd + 1) - *(float *)(v33 + 20);
                v21 = *((float *)cmd + 2) - *(float *)(v33 + 24);
                v1->visList[v1->visCount].distSq = (float)((float)(v20 * v20) + (float)((float)(*(float *)cmd - *(float *)(v33 + 16)) * (float)(*(float *)cmd - *(float *)(v33 + 16)))) + (float)(v21 * v21);
                v22 = R_AddGlassProbeLighting((const vec3_t *)(v33 + 16));
                v23 = v22;
                if ( v22 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v22, "unsigned", v22) )
                  __debugbreak();
                v1->visList[v1->visCount++].lightingHandle = v23;
                if ( v1->visCount == 65520 )
                {
LABEL_36:
                  activeTransientZones = v31;
                  break;
                }
                v14 = v27;
              }
              if ( v14 )
                goto LABEL_36;
            }
          }
LABEL_37:
          v2 = v28;
        }
      }
      ++v2;
      ++activeTransientZones;
      v28 = v2;
      v31 = activeTransientZones;
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
  float v20; 
  float v21; 
  unsigned int v22; 
  unsigned __int16 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  char v27; 
  unsigned int v28; 
  FxGlassPiecePlace *v31; 

  pieceWordCount = glassSys->pieceWordCount;
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
        v27 = 0;
        do
        {
          v31 = _R12;
          v15 = v11;
          v28 = v11;
          if ( v10 )
          {
LABEL_10:
            v16 = __lzcnt(v10);
            if ( v16 >= 0x20 )
            {
              LODWORD(v25) = 32;
              LODWORD(v24) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v24, v25) )
                __debugbreak();
              v14 = v27;
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
            v27 = 1;
          }
          if ( v15 >= v12->pieceLimit )
          {
            LODWORD(v25) = v12->pieceLimit;
            LODWORD(v24) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1121, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( glassSys->pieceLimit )", "pieceIndex doesn't index glassSys->pieceLimit\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
            v14 = v27;
            v15 = v28;
          }
          visData = v12->visData;
          v19 = visData[v15];
          if ( v19 )
          {
            if ( v19 > 3u )
            {
              LODWORD(v26) = v15;
              LODWORD(v25) = v19;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 1125, ASSERT_TYPE_ASSERT, "(glassSys->visData[pieceIndex] <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES))", "%s\n\tvalue: %d, pieceIndex: %d", "glassSys->visData[pieceIndex] <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES)", v25, v26) )
              {
                __debugbreak();
                visData = glassSys->visData;
              }
              v15 = v28;
            }
            visInfo->visList[visInfo->visCount].pieceIndex = v15;
            visInfo->visList[visInfo->visCount].transientIndex = transientIndex;
            visInfo->visList[visInfo->visCount].drawFlags = visData[v15];
            v20 = viewOrg->v[1] - v31->frame.origin.v[1];
            v21 = viewOrg->v[2] - v31->frame.origin.v[2];
            visInfo->visList[visInfo->visCount].distSq = (float)((float)(v20 * v20) + (float)((float)(viewOrg->v[0] - v31->frame.origin.v[0]) * (float)(viewOrg->v[0] - v31->frame.origin.v[0]))) + (float)(v21 * v21);
            v22 = R_AddGlassProbeLighting(&v31->frame.origin);
            v23 = v22;
            if ( v22 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v22, "unsigned", v22) )
              __debugbreak();
            visInfo->visList[visInfo->visCount++].lightingHandle = v23;
            if ( visInfo->visCount == 65520 )
              return;
            v14 = v27;
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
  bool v4; 

  materialSortedIndex = visRef0->materialSortedIndex;
  v3 = visRef1->materialSortedIndex;
  v4 = materialSortedIndex < v3;
  if ( materialSortedIndex == v3 )
    return visRef1->distSq < visRef0->distSq;
  return v4;
}

/*
==============
Glass_DrawBorderSegment
==============
*/
void Glass_DrawBorderSegment(FxGlassDrawState *drawState, unsigned int i0, unsigned int i1, unsigned int i2, unsigned int i3, bool usedLastEdge)
{
  unsigned __int16 baseVertex; 
  __int64 v8; 
  __int64 v9; 
  GfxGlassVertex *v10; 
  GfxColor color; 
  __int64 v13; 
  unsigned int packed; 
  __int128 v18; 
  PackedQuatDec3n v22; 
  float v23; 
  float v24; 
  PackedQuatDec3n v25; 
  __int64 v26; 
  __int64 v27; 
  float v28; 
  unsigned int v29; 
  GfxGlassVertex *v30; 
  float v31; 
  __int64 v32; 
  unsigned int lightingHandle; 
  unsigned int v37; 
  __int128 v38; 
  PackedQuatDec3n v42; 
  __int64 v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  unsigned int v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  GfxGlassVertex *v53; 
  float v54; 
  r_double_index_t *dstIndices; 
  unsigned int totalIndexCount; 
  unsigned __int64 v57; 
  unsigned int totalVertCount; 
  unsigned int v60; 
  __int64 v61; 
  __int64 v62; 
  vec3_t cross; 
  vec3_t out; 
  vec3_t v1; 
  vec3_t mat1; 
  vec4_t quat; 

  baseVertex = drawState->baseVertex;
  v8 = i2;
  v9 = i1;
  v10 = R_GlassMeshVertIter_Begin(baseVertex);
  _XMM9 = LODWORD(FLOAT_1_0);
  color = drawState->def->color;
  v13 = (unsigned int)v8;
  v62 = v8;
  if ( usedLastEdge )
  {
    v32 = v9;
    lightingHandle = drawState->lightingHandle;
    v60 = lightingHandle;
  }
  else
  {
    _XMM0 = 0u;
    __asm
    {
      vpcmpgtd xmm2, xmm0, xmm1
      vblendvps xmm8, xmm9, xmm10, xmm2
    }
    *(float *)&_XMM0 = drawState->localVerts[v8].v[1] - drawState->localVerts[i0].v[1];
    v1.v[0] = drawState->localVerts[v8].v[0] - drawState->localVerts[i0].v[0];
    v1.v[2] = drawState->localVerts[v8].v[2] - drawState->localVerts[i0].v[2];
    v1.v[1] = *(float *)&_XMM0;
    Vec3Cross(&drawState->axis.m[2], &v1, &cross);
    packed = drawState->packedTangentBinormalSign.packed;
    v18 = LODWORD(cross.v[0]);
    *(float *)&v18 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
    _XMM3 = v18;
    __asm
    {
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm0, xmm3, xmm9, xmm0
    }
    cross.v[0] = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
    cross.v[2] = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
    cross.v[1] = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
    Vec3UnpackUnitVec((const PackedUnitVec)packed, &out);
    mat1.v[0] = (float)(cross.v[1] * out.v[2]) - (float)(cross.v[2] * out.v[1]);
    mat1.v[1] = (float)(cross.v[2] * out.v[0]) - (float)(out.v[2] * cross.v[0]);
    mat1.v[2] = (float)(out.v[1] * cross.v[0]) - (float)(cross.v[1] * out.v[0]);
    AxisComponentsToQuat(&out, &mat1, &cross, &quat);
    v22.packed = UnitQuatToQuatDec3n(&quat, *(float *)&_XMM8).packed;
    *(float *)&_XMM8 = drawState->thicknessOffset.v[0];
    v23 = drawState->thicknessOffset.v[1];
    v24 = drawState->thicknessOffset.v[2];
    v25.packed = v22.packed;
    v26 = (unsigned int)v9;
    v27 = v9;
    v61 = v26;
    *(float *)&_XMM0 = drawState->localVerts[v27].v[1];
    v10->position.v[0] = drawState->localVerts[v27].v[0] - *(float *)&_XMM8;
    v28 = *(float *)&_XMM0 - v23;
    *(float *)&_XMM0 = drawState->localVerts[v27].v[2];
    v10->position.v[1] = v28;
    v29 = drawState->texCoords[v26].packed;
    LODWORD(v26) = drawState->lightingHandle;
    v10->position.v[2] = *(float *)&_XMM0 - v24;
    v60 = v26;
    v10->lgvIndex = v26;
    v10->color = color.packed;
    v10->texcoord = v29;
    v10->tangentFrame = v25.packed;
    v30 = R_GlassMeshVertIter_Next(v10);
    v31 = v23 + drawState->localVerts[v27].v[1];
    v32 = v61;
    v10 = v30;
    v30->position.v[0] = *(float *)&_XMM8 + drawState->localVerts[v27].v[0];
    *(float *)&v18 = v24 + drawState->localVerts[v27].v[2];
    drawState->totalVertCount += 2;
    lightingHandle = drawState->lightingHandle;
    baseVertex += 2;
    v30->position.v[1] = v31;
    v30->position.v[2] = *(float *)&v18;
    v30->texcoord = v29;
    v13 = v62;
    drawState->baseVertex = baseVertex;
    v30->color = color.packed;
    v30->tangentFrame = v25.packed;
    v30->lgvIndex = lightingHandle;
  }
  totalVertCount = drawState->totalVertCount;
  _XMM0 = 0u;
  __asm
  {
    vpcmpgtd xmm2, xmm0, xmm1
    vblendvps xmm8, xmm9, xmm10, xmm2
  }
  *(float *)&_XMM0 = drawState->localVerts[i3].v[1] - drawState->localVerts[v32].v[1];
  v1.v[0] = drawState->localVerts[i3].v[0] - drawState->localVerts[v32].v[0];
  v1.v[2] = drawState->localVerts[i3].v[2] - drawState->localVerts[v32].v[2];
  v1.v[1] = *(float *)&_XMM0;
  Vec3Cross(&drawState->axis.m[2], &v1, &cross);
  v37 = drawState->packedTangentBinormalSign.packed;
  v38 = LODWORD(cross.v[0]);
  *(float *)&v38 = fsqrt((float)((float)(*(float *)&v38 * *(float *)&v38) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
  _XMM3 = v38;
  __asm
  {
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm0, xmm3, xmm9, xmm0
  }
  cross.v[0] = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
  cross.v[2] = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
  cross.v[1] = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
  Vec3UnpackUnitVec((const PackedUnitVec)v37, &out);
  mat1.v[0] = (float)(cross.v[1] * out.v[2]) - (float)(cross.v[2] * out.v[1]);
  mat1.v[1] = (float)(cross.v[2] * out.v[0]) - (float)(out.v[2] * cross.v[0]);
  mat1.v[2] = (float)(out.v[1] * cross.v[0]) - (float)(cross.v[1] * out.v[0]);
  AxisComponentsToQuat(&out, &mat1, &cross, &quat);
  v42.packed = UnitQuatToQuatDec3n(&quat, *(float *)&_XMM8).packed;
  if ( !usedLastEdge )
  {
    v10 = R_GlassMeshVertIter_Next(v10);
    v60 = lightingHandle;
    totalVertCount = drawState->totalVertCount;
  }
  v43 = v13;
  v44 = drawState->localVerts[v13].v[0];
  v45 = drawState->thicknessOffset.v[0];
  v46 = drawState->thicknessOffset.v[1];
  v47 = drawState->thicknessOffset.v[2];
  v48 = drawState->texCoords[v13].packed;
  v49 = v44 - v45;
  v50 = drawState->localVerts[v43].v[1];
  v10->position.v[0] = v49;
  v51 = v50 - v46;
  v52 = drawState->localVerts[v43].v[2];
  v10->position.v[1] = v51;
  v10->position.v[2] = v52 - v47;
  v10->color = color.packed;
  v10->texcoord = v48;
  v10->tangentFrame = v42.packed;
  v10->lgvIndex = v60;
  v53 = R_GlassMeshVertIter_Next(v10);
  v54 = v46 + drawState->localVerts[v43].v[1];
  v53->position.v[0] = v45 + drawState->localVerts[v43].v[0];
  v53->position.v[2] = v47 + drawState->localVerts[v43].v[2];
  v53->position.v[1] = v54;
  v53->lgvIndex = v60;
  v53->color = color.packed;
  v53->texcoord = v48;
  v53->tangentFrame = v42.packed;
  R_GlassMeshVertIter_End(v53);
  dstIndices = drawState->dstIndices;
  totalIndexCount = drawState->totalIndexCount;
  v57 = (unsigned __int64)totalIndexCount >> 1;
  drawState->totalVertCount = totalVertCount + 2;
  drawState->baseVertex = baseVertex + 2;
  dstIndices[v57].value[0] = baseVertex - 1;
  dstIndices[v57 + 1].value[0] = baseVertex + 1;
  dstIndices[v57 + 1].value[1] = baseVertex + 1;
  drawState->totalIndexCount = totalIndexCount + 6;
  dstIndices[v57].value[1] = baseVertex - 2;
  dstIndices[v57 + 2].value[0] = baseVertex - 2;
  dstIndices[v57 + 2].value[1] = baseVertex;
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
  float shatteredScale; 
  unsigned int v17; 
  unsigned int v18; 
  const FxGlassDef *v19; 
  FxGlassPiecePlace *v20; 
  __int64 defIndex; 
  float v22; 
  float v23; 
  float v24; 
  bool v25; 
  unsigned int v26; 
  unsigned int totalIndexCount; 
  r_double_index_t *dstIndices; 
  vec3_t *camOrg; 
  __int64 v32; 
  __int64 v33; 
  unsigned int reserveIndexCount; 
  unsigned int reserveVertCount; 
  unsigned int pieceIndexa; 
  FxGlassPiecePlace *piecePlacea; 
  float *v38; 
  FxGlassDrawState drawState; 

  backendData = cmd->backendData;
  piecePlacea = (FxGlassPiecePlace *)piecePlace;
  pieceIndexa = pieceIndex;
  v38 = glassDist;
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
    shatteredScale = cmd->shatteredScale;
    drawState.lightingHandle = lightingHandle;
    drawState.shatteredScale = shatteredScale;
    Glass_GetBufferReserveCounts(pieceState, geoData, drawFlags, &reserveVertCount, &reserveIndexCount);
    v17 = reserveIndexCount;
    if ( !reserveIndexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 856, ASSERT_TYPE_ASSERT, "(reserveIndexCount)", (const char *)&queryFormat, "reserveIndexCount") )
      __debugbreak();
    v18 = reserveVertCount;
    if ( R_ReserveGlassMeshVerts(reserveVertCount, &drawState.baseVertex) && R_ReserveGlassMeshIndices(v17, &drawState.dstIndices) )
    {
      v19 = def;
      v20 = piecePlacea;
      Glass_MakePieceGeometry(&drawState, piecePlacea, pieceState, v19, geoData, &cmd->viewOrg, drawFlags);
      if ( drawState.totalIndexCount )
      {
        if ( drawState.totalIndexCount > v17 )
        {
          LODWORD(v33) = v17;
          LODWORD(v32) = drawState.totalIndexCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 865, ASSERT_TYPE_ASSERT, "( drawState.totalIndexCount ) <= ( reserveIndexCount )", "%s <= %s\n\t%i, %i", "drawState.totalIndexCount", "reserveIndexCount", v32, v33) )
            __debugbreak();
        }
        if ( drawState.totalVertCount > v18 )
        {
          LODWORD(v33) = v18;
          LODWORD(v32) = drawState.totalVertCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 866, ASSERT_TYPE_ASSERT, "( drawState.totalVertCount ) <= ( reserveVertCount )", "%s <= %s\n\t%i, %i", "drawState.totalVertCount", "reserveVertCount", v32, v33) )
            __debugbreak();
        }
        if ( !cmd->lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 869, ASSERT_TYPE_ASSERT, "(cmd->lodParms.valid)", (const char *)&queryFormat, "cmd->lodParms.valid") )
          __debugbreak();
        defIndex = pieceState->defIndex;
        v22 = cmd->lodParms.origin.v[0] - v20->frame.origin.v[0];
        v23 = cmd->lodParms.origin.v[1] - v20->frame.origin.v[1];
        v24 = cmd->lodParms.origin.v[2] - v20->frame.origin.v[2];
        v25 = (pieceState->flags & 0x48) == 0;
        v26 = pieceIndexa;
        totalIndexCount = drawState.totalIndexCount;
        dstIndices = drawState.dstIndices;
        _XMM0 = LODWORD(v38[defIndex]);
        fsqrt((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24));
        __asm { vminss  xmm1, xmm0, xmm4 }
        v38[defIndex] = *(float *)&_XMM1;
        R_AddGlassSurf(materialShattered, dstIndices, totalIndexCount, v26, v25);
      }
      if ( drawState.totalVertCount < v18 )
        R_ReturnGlassMeshVerts(v18 - drawState.totalVertCount);
      if ( drawState.totalIndexCount < v17 )
        R_ReturnGlassMeshIndices(v17 - drawState.totalIndexCount);
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
  const vec3_t *v4; 
  const FxGlassGeometryData *v6; 
  const FxGlassGeometryData *v7; 
  const FxGlassGeometryData *v8; 
  __int64 v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  unsigned int v13; 
  unsigned int vertCount; 
  unsigned __int8 touchVert; 
  char v16; 
  unsigned __int64 uniqueVertCount; 
  _BOOL8 v18; 
  unsigned __int64 i; 
  char v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  bool v23; 
  unsigned __int64 v24; 
  vec3_t *v25; 
  __int64 v26; 
  __int64 v27; 
  float v28; 
  unsigned int v29; 
  __int64 v30; 
  unsigned int v31; 
  __int64 v32; 
  __int64 usedLastEdge; 
  __int64 v34; 
  const FxGlassGeometryData *v36; 
  const FxGlassGeometryData *v37; 
  const FxGlassGeometryData *v38; 
  vec3_t v1; 
  vec3_t cross; 
  vec3_t v41; 
  vec3_t v42; 
  char v43; 
  char v44; 
  char v45[39]; 

  v4 = camOrg;
  v6 = geoData;
  v38 = &geoData[crackDataCount];
  do
  {
    v7 = v6;
    v36 = v6;
    v8 = v6++;
    v37 = v6;
    if ( v7->vert.x )
    {
      vertCount = drawState->vertCount;
      Glass_TransformVertexArray(drawState, &v6->vert, v7->hole.uniqueVertCount);
      touchVert = v7->hole.touchVert;
      v16 = v45[0];
      uniqueVertCount = v8->hole.uniqueVertCount;
      if ( touchVert != 0xFF )
        v16 = v7->hole.touchVert;
      v45[0] = v16;
      v18 = touchVert != 0xFF;
      for ( i = 0i64; i < uniqueVertCount; ++i )
        v45[v18 + i] = vertCount + i;
      v20 = v8->hole.pad[0];
      v21 = v18 + uniqueVertCount;
      if ( v20 != -1 )
        v45[v21++] = v20;
      v22 = 0;
      v44 = v45[0];
      v23 = 0;
      v24 = 1i64;
      v45[v21] = v45[v21 - 1];
      if ( v21 > 1 )
      {
        v25 = &drawState->axis.m[2];
        do
        {
          v26 = (unsigned __int8)v45[v24 - 1];
          v27 = (unsigned __int8)v45[v24];
          v28 = drawState->localVerts[(unsigned __int8)v45[v24]].v[1] - drawState->localVerts[v26].v[1];
          v41.v[0] = drawState->localVerts[(unsigned __int8)v45[v24]].v[0] - drawState->localVerts[v26].v[0];
          v41.v[2] = drawState->localVerts[v27].v[2] - drawState->localVerts[v26].v[2];
          v41.v[1] = v28;
          Vec3Cross(v25, &v41, &v42);
          if ( (float)((float)((float)((float)(camOrg->v[1] - drawState->localVerts[v26].v[1]) * v42.v[1]) + (float)((float)(camOrg->v[0] - drawState->localVerts[v26].v[0]) * v42.v[0])) + (float)((float)(camOrg->v[2] - drawState->localVerts[v26].v[2]) * v42.v[2])) > 0.0 )
          {
            Glass_DrawBorderSegment(drawState, (unsigned __int8)*(&v43 + v24), v26, (unsigned __int8)v45[v24], (unsigned __int8)v45[v24 + 1], v23);
            v23 = 1;
          }
          else
          {
            v29 = v21 - v24;
            if ( v21 - v24 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", v29, "unsigned", v21 - v24) )
              __debugbreak();
            if ( v29 >= 0x20 )
            {
              LODWORD(v34) = 32;
              LODWORD(usedLastEdge) = v21 - v24;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", usedLastEdge, v34) )
                __debugbreak();
            }
            v22 |= 0x80000000 >> v29;
            v23 = 0;
          }
          ++v24;
          v25 = &drawState->axis.m[2];
        }
        while ( v24 < v21 );
      }
      v30 = -1i64;
      while ( v22 )
      {
        v31 = __lzcnt(v22);
        if ( v31 >= 0x20 )
        {
          LODWORD(v34) = 32;
          LODWORD(usedLastEdge) = v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", usedLastEdge, v34) )
            __debugbreak();
        }
        v22 &= ~(0x80000000 >> v31);
        v32 = v21 - v31;
        Glass_DrawBorderSegment(drawState, (unsigned __int8)v45[v32 + 1], (unsigned __int8)v45[v32], (unsigned __int8)v45[v32 - 1], (unsigned __int8)*(&v43 + v32), v32 == v30 - 1);
        v30 = v32;
      }
      v4 = camOrg;
      v6 = &v37[v36->hole.uniqueVertCount];
    }
    else
    {
      if ( (v7->hole.touchVert == 0xFF || v7->hole.pad[0] == 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 626, ASSERT_TYPE_ASSERT, "(crack->beginVertIndex != 0xff && crack->endVertIndex != 0xff)", (const char *)&queryFormat, "crack->beginVertIndex != GLASS_VERT_INDEX_NONE && crack->endVertIndex != GLASS_VERT_INDEX_NONE") )
        __debugbreak();
      v9 = v8->hole.pad[0];
      v10 = v8->hole.touchVert;
      v11 = drawState->localVerts[v9].v[1] - drawState->localVerts[v10].v[1];
      v1.v[0] = drawState->localVerts[v9].v[0] - drawState->localVerts[v10].v[0];
      v1.v[2] = drawState->localVerts[v9].v[2] - drawState->localVerts[v10].v[2];
      v1.v[1] = v11;
      Vec3Cross(&drawState->axis.m[2], &v1, &cross);
      v12 = (float)((float)((float)(v4->v[0] - drawState->localVerts[v10].v[0]) * cross.v[0]) + (float)((float)(v4->v[1] - drawState->localVerts[v10].v[1]) * cross.v[1])) + (float)((float)(v4->v[2] - drawState->localVerts[v10].v[2]) * cross.v[2]);
      v13 = v10;
      if ( v12 > 0.0 )
        v13 = v9;
      if ( v12 > 0.0 )
        LODWORD(v9) = v10;
      Glass_DrawBorderSegment(drawState, v9, v9, v13, v13, 0);
    }
  }
  while ( v6 != v38 );
}

/*
==============
Glass_MakeAllHoleBorderGeometry
==============
*/
void Glass_MakeAllHoleBorderGeometry(FxGlassDrawState *drawState, const vec3_t *camOrg, const FxGlassGeometryData *geoData, unsigned int holeDataCount, unsigned int firstVert)
{
  const FxGlassGeometryData *v6; 
  const vec3_t *v7; 
  unsigned int v8; 
  unsigned int touchVert; 
  unsigned int uniqueVertCount; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  bool usedLastEdge; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  const FxGlassGeometryData *v18; 
  const FxGlassGeometryData *v20; 

  v20 = geoData;
  v6 = geoData;
  v7 = camOrg;
  v18 = &geoData[holeDataCount];
  v8 = firstVert;
  do
  {
    touchVert = v6->hole.touchVert;
    uniqueVertCount = v6->hole.uniqueVertCount;
    if ( touchVert == 255 )
    {
      if ( uniqueVertCount < 3 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 561, ASSERT_TYPE_ASSERT, "(uniqueVertCount >= 3)", (const char *)&queryFormat, "uniqueVertCount >= 3") )
          __debugbreak();
        v8 = firstVert;
      }
      v11 = uniqueVertCount + v8;
      usedLastEdge = 0;
      v12 = uniqueVertCount + v8 - 3;
      v13 = uniqueVertCount + v8 - 2;
      touchVert = uniqueVertCount + v8 - 1;
    }
    else
    {
      if ( uniqueVertCount < 2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 545, ASSERT_TYPE_ASSERT, "(uniqueVertCount >= 2)", (const char *)&queryFormat, "uniqueVertCount >= 2") )
          __debugbreak();
        v8 = firstVert;
      }
      v11 = uniqueVertCount + v8;
      v12 = uniqueVertCount + v8 - 2;
      v13 = uniqueVertCount + v8 - 1;
      if ( Glass_TestCamAgainstBorderSegmentPlane(drawState, v7, v11 - 2, v11 - 1) > 0.0 )
      {
        v15 = touchVert;
        if ( uniqueVertCount != 2 )
          v15 = v11 - 3;
        Glass_DrawBorderSegment(drawState, v15, v12, v13, touchVert, 0);
        v8 = firstVert;
        usedLastEdge = 1;
      }
      else
      {
        v8 = firstVert;
        usedLastEdge = 0;
      }
    }
    v16 = v8;
    do
    {
      if ( Glass_TestCamAgainstBorderSegmentPlane(drawState, camOrg, v13, touchVert) > 0.0 )
      {
        Glass_DrawBorderSegment(drawState, v12, v13, touchVert, v16, usedLastEdge);
        usedLastEdge = 1;
      }
      else
      {
        usedLastEdge = 0;
      }
      v12 = v13;
      v13 = touchVert;
      touchVert = v16++;
    }
    while ( v16 != v11 );
    v7 = camOrg;
    v17 = v20->hole.uniqueVertCount;
    v8 = v17 + firstVert;
    firstVert += v17;
    v6 = &v20[v17 + 1];
    v20 = v6;
  }
  while ( v6 != v18 );
}

/*
==============
Glass_MakeFaceGeometry
==============
*/
void Glass_MakeFaceGeometry(FxGlassDrawState *drawState, const vec3_t *camOrg, unsigned int vertCount, const FxGlassGeometryData *geoData, unsigned int fanCount)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  const FxGlassDef *def; 
  float v11; 
  float halfThickness; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  const vec2_t *texVecs; 
  unsigned int packed; 
  float v29; 
  __int128 v30; 
  float v31; 
  float v32; 
  float v33; 
  float v37; 
  float v38; 
  float v39; 
  PackedQuatDec3n v40; 
  unsigned int v41; 
  GfxGlassVertex *v42; 
  unsigned int lightingHandle; 
  PackedTexCoords *texCoords; 
  float v45; 
  float v46; 
  float v47; 
  float *i; 
  float v49; 
  unsigned __int16 baseVertex; 
  double v52; 
  float v53; 
  vec3_t mat2; 
  vec3_t mat1; 
  vec3_t mat0; 
  double v57; 
  float v58; 
  vec4_t out; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 

  def = drawState->def;
  v11 = (float)((float)((float)(drawState->origin.v[1] - camOrg->v[1]) * drawState->axis.m[2].v[1]) + (float)((float)(drawState->origin.v[0] - camOrg->v[0]) * drawState->axis.m[2].v[0])) + (float)((float)(drawState->origin.v[2] - camOrg->v[2]) * drawState->axis.m[2].v[2]);
  halfThickness = def->halfThickness;
  if ( COERCE_FLOAT(LODWORD(v11) & _xmm) > def->halfThickness )
  {
    v63 = v5;
    v62 = v6;
    v61 = v7;
    v60 = v8;
    XSurfacePackSelfVisibility(&kDefaultGlassSelfVisibility);
    _XMM4 = 0i64;
    __asm { vcmpless xmm1, xmm4, xmm0 }
    _XMM0 = LODWORD(FLOAT_N1_0);
    __asm { vblendvps xmm1, xmm0, xmm12, xmm1 }
    if ( v11 <= 0.0 )
    {
      drawState->totalIndexCount += Glass_MakeFaceIndices(drawState, vertCount, geoData, fanCount, 1, 2);
      v24 = drawState->axis.m[2].v[0];
      v26 = drawState->axis.m[2].v[2];
      v25 = drawState->axis.m[2].v[1];
      *(float *)&v52 = v24 * halfThickness;
      v53 = v26 * halfThickness;
      LODWORD(v22) = _XMM1 ^ _xmm;
      v23 = v25 * halfThickness;
    }
    else
    {
      drawState->totalIndexCount += Glass_MakeFaceIndices(drawState, vertCount, geoData, fanCount, 2, 1);
      v19 = drawState->axis.m[2].v[0];
      v20 = drawState->axis.m[2].v[2];
      v21 = drawState->axis.m[2].v[1];
      v22 = *(float *)&_XMM1;
      *(float *)&v52 = v19 * COERCE_FLOAT(LODWORD(halfThickness) ^ _xmm);
      v53 = v20 * COERCE_FLOAT(LODWORD(halfThickness) ^ _xmm);
      v23 = v21 * COERCE_FLOAT(LODWORD(halfThickness) ^ _xmm);
      LODWORD(v24) = LODWORD(v19) ^ _xmm;
      LODWORD(v25) = LODWORD(v21) ^ _xmm;
      LODWORD(v26) = LODWORD(v20) ^ _xmm;
    }
    texVecs = drawState->texVecs;
    packed = def->color.packed;
    *((float *)&v52 + 1) = v23;
    mat2.v[2] = v26;
    mat2.v[1] = v25;
    mat2.v[0] = v24;
    v29 = texVecs->v[1];
    v30 = LODWORD(v29);
    v31 = (float)(v29 * drawState->axis.m[1].v[0]) + (float)(texVecs->v[0] * drawState->axis.m[0].v[0]);
    v32 = (float)(v29 * drawState->axis.m[1].v[1]) + (float)(texVecs->v[0] * drawState->axis.m[0].v[1]);
    v33 = (float)(v29 * drawState->axis.m[1].v[2]) + (float)(texVecs->v[0] * drawState->axis.m[0].v[2]);
    *(float *)&v30 = fsqrt((float)((float)(v32 * v32) + (float)(v31 * v31)) + (float)(v33 * v33));
    _XMM1 = v30;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm12, xmm0
    }
    v37 = v33 * (float)(1.0 / *(float *)&_XMM0);
    v38 = v32 * (float)(1.0 / *(float *)&_XMM0);
    v39 = v31 * (float)(1.0 / *(float *)&_XMM0);
    mat1.v[0] = (float)(v37 * v25) - (float)(v38 * v26);
    mat0.v[2] = v37;
    mat1.v[1] = (float)(v39 * v26) - (float)(v24 * v37);
    mat1.v[2] = (float)(v38 * v24) - (float)(v39 * v25);
    mat0.v[0] = v39;
    mat0.v[1] = v38;
    AxisComponentsToQuat(&mat0, &mat1, &mat2, &out);
    v40.packed = UnitQuatToQuatDec3n(&out, v22).packed;
    v41 = vertCount;
    v58 = v53;
    v57 = v52;
    if ( !vertCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 259, ASSERT_TYPE_ASSERT, "(vertCount)", (const char *)&queryFormat, "vertCount") )
      __debugbreak();
    baseVertex = drawState->baseVertex;
    v42 = R_GlassMeshVertIter_Begin(baseVertex);
    lightingHandle = drawState->lightingHandle;
    texCoords = drawState->texCoords;
    v45 = v58;
    v46 = *((float *)&v57 + 1);
    v47 = *(float *)&v57;
    for ( i = &drawState->localVerts[0].v[2]; ; i += 3 )
    {
      v49 = v46 + *(i - 1);
      v42->position.v[0] = v47 + *(i - 2);
      v42->position.v[2] = v45 + *i;
      v42->position.v[1] = v49;
      v42->color = packed;
      v42->texcoord = texCoords->packed;
      v42->tangentFrame = v40.packed;
      v42->lgvIndex = lightingHandle;
      if ( !--v41 )
        break;
      ++texCoords;
      v42 = R_GlassMeshVertIter_Next(v42);
    }
    R_GlassMeshVertIter_End(v42);
    drawState->totalVertCount += vertCount;
    drawState->baseVertex = vertCount + baseVertex;
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
  unsigned int v8; 
  const vec3_t *v10; 
  __int64 v12; 
  bool v13; 
  vec2_t *texVecs; 
  const FxGlassGeometryData *v15; 
  const FxGlassGeometryData *v16; 
  unsigned int v17; 
  float halfThickness; 
  bool v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  const FxGlassGeometryData *v24; 
  __int64 usedLastEdge; 
  __int64 v26; 
  unsigned int crackDataCount; 
  unsigned int vertCount; 
  int v30[4]; 

  holeDataCount = pieceState->holeDataCount;
  v8 = pieceState->crackDataCount;
  v10 = camOrg;
  v12 = pieceState->vertCount;
  *(_QWORD *)&drawState->totalVertCount = 0i64;
  drawState->origin = *(vec3_t *)(&piecePlace->nextFree + 4);
  drawState->texCoordOrigin = pieceState->texCoordOrigin;
  crackDataCount = v8;
  UnitQuatToAxis(&piecePlace->frame.quat, &drawState->axis);
  *(__m128 *)drawState->axis.m[0].v = _mm128_mul_ps((__m128)_xmm, *(__m128 *)drawState->axis.m[0].v);
  drawState->axis.m[1].v[1] = 0.03125 * drawState->axis.m[1].v[1];
  v13 = (pieceState->flags & 1) == 0;
  drawState->axis.m[1].v[2] = 0.03125 * drawState->axis.m[1].v[2];
  drawState->def = def;
  if ( v13 || def->materialShattered == def->material )
  {
    texVecs = def->texVecs;
  }
  else
  {
    *(float *)v30 = 0.03125 / drawState->shatteredScale;
    v30[3] = v30[0];
    *(float *)&v30[1] = 0.0;
    *(float *)&v30[2] = 0.0;
    texVecs = (vec2_t *)v30;
  }
  drawState->texVecs = texVecs;
  drawState->vertCount = 0;
  Glass_TransformVertexArray(drawState, &geoData->vert, v12);
  if ( (_DWORD)holeDataCount )
  {
    v15 = &geoData[v12];
    v16 = &v15[holeDataCount];
    do
    {
      Glass_TransformVertexArray(drawState, &v15[1].vert, v15->hole.uniqueVertCount);
      v15 += v15->hole.uniqueVertCount + 1;
    }
    while ( v15 != v16 );
    v8 = crackDataCount;
  }
  v17 = drawState->vertCount;
  vertCount = v17;
  if ( (drawFlags & 2) != 0 )
  {
    halfThickness = def->halfThickness;
    drawState->thicknessOffset.v[0] = def->halfThickness * drawState->axis.m[2].v[0];
    drawState->thicknessOffset.v[1] = halfThickness * drawState->axis.m[2].v[1];
    drawState->thicknessOffset.v[2] = halfThickness * drawState->axis.m[2].v[2];
    v19 = 0;
    drawState->packedTangentBinormalSign = Vec3PackUnitVecWithAlpha(&drawState->axis.m[2], 0.0);
    if ( (unsigned int)v12 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_draw.cpp", 513, ASSERT_TYPE_ASSERT, "(vertCount >= 3)", (const char *)&queryFormat, "vertCount >= 3") )
      __debugbreak();
    v20 = v12 - 3;
    v21 = v12 - 2;
    v22 = 0;
    v23 = v12 - 1;
    do
    {
      if ( v21 >= 0x20 )
      {
        LODWORD(v26) = 32;
        LODWORD(usedLastEdge) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", usedLastEdge, v26) )
          __debugbreak();
      }
      if ( ((0x80000000 >> v21) & pieceState->supportMask) != 0 )
      {
        v19 = 0;
      }
      else if ( Glass_TestCamAgainstBorderSegmentPlane(drawState, camOrg, v21, v23) > 0.0 )
      {
        Glass_DrawBorderSegment(drawState, v20, v21, v23, v22, v19);
        v19 = 1;
      }
      else
      {
        v19 = 0;
      }
      v20 = v21;
      v21 = v23;
      v23 = v22++;
    }
    while ( v22 != (_DWORD)v12 );
    v24 = geoData;
    v10 = camOrg;
    if ( (_DWORD)holeDataCount )
      Glass_MakeAllHoleBorderGeometry(drawState, camOrg, &geoData[v12], holeDataCount, v12);
    v8 = crackDataCount;
    if ( crackDataCount )
      Glass_MakeAllCrackBorderGeometry(drawState, camOrg, &geoData[(unsigned int)(holeDataCount + v12)], crackDataCount);
    v17 = vertCount;
  }
  else
  {
    v24 = geoData;
  }
  if ( (drawFlags & 1) != 0 )
    Glass_MakeFaceGeometry(drawState, v10, v17, &v24[(unsigned int)v12 + v8 + (_DWORD)holeDataCount], pieceState->fanDataCount);
  drawState->texVecs = NULL;
}

/*
==============
Glass_TestCamAgainstBorderSegmentPlane
==============
*/
float Glass_TestCamAgainstBorderSegmentPlane(const FxGlassDrawState *drawState, const vec3_t *camOrg, unsigned int i1, unsigned int i2)
{
  __int64 v6; 
  float v7; 
  vec3_t v1; 
  vec3_t cross; 

  v6 = i1;
  v7 = drawState->localVerts[i2].v[1] - drawState->localVerts[i1].v[1];
  v1.v[0] = drawState->localVerts[i2].v[0] - drawState->localVerts[i1].v[0];
  v1.v[2] = drawState->localVerts[i2].v[2] - drawState->localVerts[i1].v[2];
  v1.v[1] = v7;
  Vec3Cross(&drawState->axis.m[2], &v1, &cross);
  return (float)((float)((float)(camOrg->v[1] - drawState->localVerts[v6].v[1]) * cross.v[1]) + (float)((float)(camOrg->v[0] - drawState->localVerts[v6].v[0]) * cross.v[0])) + (float)((float)(camOrg->v[2] - drawState->localVerts[v6].v[2]) * cross.v[2]);
}

/*
==============
Glass_TransformVertexArray
==============
*/
void Glass_TransformVertexArray(FxGlassDrawState *drawState, const FxGlassVertex *vertArray, unsigned int vertCount)
{
  __int64 v4; 
  __int64 v6; 
  vec3_t *v7; 
  float v8; 
  float v9; 
  __int64 v10; 
  __int64 v12; 

  v4 = drawState->vertCount;
  v6 = 0i64;
  v7 = &drawState->localVerts[v4];
  drawState->vertCount = v4 + vertCount;
  do
  {
    v8 = _mm_cvtepi32_ps((__m128i)(unsigned int)vertArray[v6].x).m128_f32[0];
    v9 = _mm_cvtepi32_ps((__m128i)(unsigned int)vertArray[v6].y).m128_f32[0];
    v10 = v6;
    v7[v10].v[0] = (float)((float)(v8 * drawState->axis.m[0].v[0]) + drawState->origin.v[0]) + (float)(v9 * drawState->axis.m[1].v[0]);
    v7[v10].v[1] = (float)((float)(v8 * drawState->axis.m[0].v[1]) + drawState->origin.v[1]) + (float)(v9 * drawState->axis.m[1].v[1]);
    v7[v10].v[2] = (float)((float)(v8 * drawState->axis.m[0].v[2]) + drawState->origin.v[2]) + (float)(v9 * drawState->axis.m[1].v[2]);
    _XMM4 = 0i64;
    v12 = v4 + (unsigned int)v6;
    v6 = (unsigned int)(v6 + 1);
    __asm
    {
      vinsertps xmm4, xmm4, xmm5, 0
      vinsertps xmm4, xmm4, xmm2, 10h
      vcvtps2ph xmm0, xmm4, 0
    }
    drawState->texCoords[v12].packed = _XMM0;
  }
  while ( (_DWORD)v6 != vertCount );
}

