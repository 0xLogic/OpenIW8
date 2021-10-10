/*
==============
Glass_LinkPiece_Static
==============
*/

void __fastcall Glass_LinkPiece_Static(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  ?Glass_LinkPiece_Static@@YAXPEIAUFxGlassSystem@@I@Z(glassSys, pieceIndex);
}

/*
==============
FX_AddCellGlassSurfacesInFrustumCmd
==============
*/

void __fastcall FX_AddCellGlassSurfacesInFrustumCmd(const void *const data)
{
  ?FX_AddCellGlassSurfacesInFrustumCmd@@YAXQEBX@Z(data);
}

/*
==============
Glass_UnlinkPiece
==============
*/

void __fastcall Glass_UnlinkPiece(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  ?Glass_UnlinkPiece@@YAXPEIAUFxGlassSystem@@I@Z(glassSys, pieceIndex);
}

/*
==============
Glass_LinkPiece_Dynamic
==============
*/

void __fastcall Glass_LinkPiece_Dynamic(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  ?Glass_LinkPiece_Dynamic@@YAXPEIAUFxGlassSystem@@I@Z(glassSys, pieceIndex);
}

/*
==============
FX_AddGlassSurfacesInUmbraFrustumCmd
==============
*/

void __fastcall FX_AddGlassSurfacesInUmbraFrustumCmd(const void *const data)
{
  ?FX_AddGlassSurfacesInUmbraFrustumCmd@@YAXQEBX@Z(data);
}

/*
==============
FX_ClearGlassVisData
==============
*/

void FX_ClearGlassVisData(void)
{
  ?FX_ClearGlassVisData@@YAXXZ();
}

/*
==============
FX_AddCellGlassSurfacesInFrustumCmd
==============
*/
void FX_AddCellGlassSurfacesInFrustumCmd(const void *const data)
{
  unsigned int pieceWordCount; 
  unsigned __int8 *visData; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int *v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned __int8 PieceDrawFlags; 
  __int64 v11; 
  __int64 v12; 
  FxGlassPiecePlace *piecePlaces; 
  DpvsPlane *planes; 
  float *halfThickness; 

  pieceWordCount = fxWorld.glassSys.pieceWordCount;
  if ( fxWorld.glassSys.pieceWordCount )
  {
    if ( !fxWorld.glassSys.cellBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_dpvs.cpp", 196, ASSERT_TYPE_ASSERT, "(glassSys->cellBits)", (const char *)&queryFormat, "glassSys->cellBits") )
      __debugbreak();
    visData = fxWorld.glassSys.visData;
    v4 = pieceWordCount * *((unsigned __int16 *)data + 7);
    v5 = fxWorld.glassSys.cellBits[v4];
    v6 = &fxWorld.glassSys.cellBits[v4];
    LODWORD(v7) = 0;
    planes = *(DpvsPlane **)data;
    piecePlaces = fxWorld.glassSys.piecePlaces;
    halfThickness = fxWorld.glassSys.halfThickness;
    while ( v5 )
    {
LABEL_9:
      v8 = __lzcnt(v5);
      v9 = v8 + 32 * (_DWORD)v7;
      if ( v8 >= 0x20 )
      {
        LODWORD(v12) = 32;
        LODWORD(v11) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      if ( (v5 & (0x80000000 >> v8)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v5 &= ~(0x80000000 >> v8);
      if ( !visData[v9] )
      {
        PieceDrawFlags = Glass_GetPieceDrawFlags(&piecePlaces[v9], halfThickness[v9], (const vec3_t *)((char *)data + 16), *((unsigned __int16 *)data + 6), planes);
        if ( PieceDrawFlags )
        {
          if ( PieceDrawFlags > 3u )
          {
            LODWORD(v11) = PieceDrawFlags;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_dpvs.cpp", 216, ASSERT_TYPE_ASSERT, "( ( drawFlags <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES) ) )", "( drawFlags ) = %i", v11) )
              __debugbreak();
          }
          visData[v9] = PieceDrawFlags;
        }
      }
    }
    while ( 1 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= pieceWordCount )
        break;
      v5 = v6[v7];
      if ( v5 )
        goto LABEL_9;
    }
  }
}

/*
==============
FX_AddGlassSurfacesInUmbraFrustumCmd
==============
*/
void FX_AddGlassSurfacesInUmbraFrustumCmd(const void *const data)
{
  int v2; 
  unsigned __int16 *activeTransientZones; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int v6; 
  FxGlassSystem *v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  unsigned int v15; 
  unsigned __int16 *v16; 

  Glass_ForEachPiece<UmbraCullGlassCmd const *,void (*)(FxGlassSystem restrict *,UmbraCullGlassCmd const *,unsigned int)>(&fxWorld.glassSys, (const UmbraCullGlassCmd *)data, FX_EvaluateGlassVisibility);
  v2 = 0;
  v14 = 0;
  if ( fxWorld.activeTransientZoneCount )
  {
    activeTransientZones = fxWorld.activeTransientZones;
    v16 = fxWorld.activeTransientZones;
    do
    {
      v4 = *activeTransientZones;
      if ( v4 >= fxWorld.transientZoneCount )
      {
        LODWORD(v13) = fxWorld.transientZoneCount;
        LODWORD(v12) = *activeTransientZones;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_dpvs.cpp", 256, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( fxWorld.transientZoneCount )", "transientIndex doesn't index fxWorld.transientZoneCount\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
        v2 = v14;
      }
      v5 = *(_QWORD *)&fxWorld.activeTransientZones[4 * (unsigned __int16)v4 - 6144];
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 28);
        v7 = (FxGlassSystem *)(v5 + 16);
        v15 = v6;
        v8 = 0;
        if ( v6 )
        {
          v9 = 0i64;
          do
          {
            v10 = v7->isInUse[v9];
            if ( v10 )
            {
              do
              {
                v11 = __lzcnt(v10);
                if ( v11 >= 0x20 )
                {
                  LODWORD(v13) = 32;
                  LODWORD(v12) = v11;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v12, v13) )
                    __debugbreak();
                }
                v10 &= ~(0x80000000 >> v11);
                FX_EvaluateGlassVisibility(v7, (const UmbraCullGlassCmd *)data, v11 | (32 * v8));
              }
              while ( v10 );
              v6 = v15;
            }
            ++v8;
            ++v9;
          }
          while ( v8 < v6 );
          v2 = v14;
        }
      }
      activeTransientZones = v16 + 1;
      ++v2;
      ++v16;
      v14 = v2;
    }
    while ( v2 < fxWorld.activeTransientZoneCount );
  }
}

/*
==============
FX_ClearGlassVisData
==============
*/
void FX_ClearGlassVisData(void)
{
  int v0; 
  unsigned __int16 *activeTransientZones; 
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  memset_0(fxWorld.glassSys.visData, 0, (fxWorld.glassSys.pieceLimit + 15) & 0xFFFFFFF0);
  v0 = 0;
  if ( fxWorld.activeTransientZoneCount )
  {
    activeTransientZones = fxWorld.activeTransientZones;
    do
    {
      v2 = *activeTransientZones;
      if ( v2 >= fxWorld.transientZoneCount )
      {
        LODWORD(v5) = fxWorld.transientZoneCount;
        LODWORD(v4) = *activeTransientZones;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_dpvs.cpp", 277, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( fxWorld.transientZoneCount )", "transientIndex doesn't index fxWorld.transientZoneCount\n\t%i not in [0, %i)", v4, v5) )
          __debugbreak();
      }
      v3 = *(_QWORD *)&fxWorld.activeTransientZones[4 * (unsigned __int16)v2 - 6144];
      if ( v3 )
        memset_0(*(void **)(v3 + 104), 0, (*(_DWORD *)(v3 + 24) + 15) & 0xFFFFFFF0);
      ++v0;
      ++activeTransientZones;
    }
    while ( v0 < fxWorld.activeTransientZoneCount );
  }
}

/*
==============
FX_EvaluateGlassVisibility
==============
*/
void FX_EvaluateGlassVisibility(FxGlassSystem *glassSys, const UmbraCullGlassCmd *cmd, unsigned int pieceIndex)
{
  unsigned __int8 *visData; 
  __int64 v4; 
  unsigned int localClientViewIndex; 
  float v6; 
  FxGlassPiecePlace *v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float radius; 
  float v14; 
  float v15; 
  char v16; 
  float v17; 
  vec3_t normal; 
  Bounds bounds; 

  visData = glassSys->visData;
  v4 = pieceIndex;
  if ( !visData[pieceIndex] )
  {
    localClientViewIndex = cmd->localClientViewIndex;
    v6 = glassSys->halfThickness[pieceIndex];
    v7 = &glassSys->piecePlaces[pieceIndex];
    v8 = v7->frame.origin.v[0] - cmd->viewOrg.v[0];
    v9 = v7->frame.origin.v[1] - cmd->viewOrg.v[1];
    v10 = v7->frame.origin.v[2] - cmd->viewOrg.v[2];
    v11 = (float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10);
    v12 = (float)(v7->radius * v7->radius) - (float)(v6 * v6);
    if ( v12 >= (float)(v11 * 0.0000070461542) )
    {
      UnitQuatToNormal(&v7->frame.quat, &normal);
      radius = v7->radius;
      v14 = v7->frame.origin.v[1];
      bounds.midPoint.v[0] = v7->frame.origin.v[0];
      bounds.midPoint.v[2] = v7->frame.origin.v[2];
      bounds.midPoint.v[1] = v14;
      bounds.halfSize.v[0] = radius;
      bounds.halfSize.v[1] = radius;
      bounds.halfSize.v[2] = radius;
      if ( R_Umbra_IsBoxVisible(&bounds, 0, localClientViewIndex, 0) )
      {
        v15 = v11 - v12;
        if ( (float)(v11 - v12) <= 1.0 )
        {
          v16 = 3;
LABEL_9:
          visData[v4] = v16;
          return;
        }
        LODWORD(v17) = COERCE_UNSIGNED_INT((float)((float)(v8 * normal.v[0]) + (float)(v9 * normal.v[1])) + (float)(v10 * normal.v[2])) & _xmm;
        v16 = (((float)(v15 * 0.0013272297) <= (float)(v17 * v7->radius)) + 2) & 0xFD;
        if ( (float)((float)(v15 * v15) * 0.0000017615386) <= (float)((float)((float)(v11 - (float)(v17 * v17)) * v6) * v6) )
          v16 = ((float)((float)(v11 - v12) * 0.0013272297) <= (float)(v17 * v7->radius)) + 2;
        if ( v16 )
          goto LABEL_9;
      }
    }
  }
}

/*
==============
Glass_GetPieceDrawFlags
==============
*/
char Glass_GetPieceDrawFlags(const FxGlassPiecePlace *piecePlace, float halfThickness, const vec3_t *viewOrg, const unsigned int planeCount, const DpvsPlane *planes)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  int v13; 
  const DpvsPlane *v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  char result; 
  char v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  vec3_t normal; 

  v5 = piecePlace->frame.origin.v[1] - viewOrg->v[1];
  v6 = piecePlace->frame.origin.v[2] - viewOrg->v[2];
  v7 = piecePlace->frame.origin.v[0];
  v8 = v7 - viewOrg->v[0];
  v24 = v6;
  v9 = (float)((float)(v5 * v5) + (float)(v8 * v8)) + (float)(v6 * v6);
  v10 = (float)(piecePlace->radius * piecePlace->radius) - (float)(halfThickness * halfThickness);
  v22 = v8;
  v23 = v5;
  if ( v10 < (float)(v9 * 0.0000070461542) )
    return 0;
  UnitQuatToNormal(&piecePlace->frame.quat, &normal);
  v13 = 0;
  if ( planeCount )
  {
    while ( 1 )
    {
      v14 = &planes[v13];
      v15 = v14->coeffs.v[1];
      v16 = v14->coeffs.v[2];
      v17 = (float)((float)(normal.v[0] * v14->coeffs.v[0]) + (float)(normal.v[1] * v15)) + (float)(normal.v[2] * v16);
      v18 = (float)(COERCE_FLOAT(LODWORD(v17) & _xmm) * halfThickness) + (float)((float)((float)((float)(v7 * v14->coeffs.v[0]) + (float)(v15 * piecePlace->frame.origin.v[1])) + (float)(v16 * piecePlace->frame.origin.v[2])) + v14->coeffs.v[3]);
      if ( (float)(COERCE_FLOAT(LODWORD(v18) & _xmm) * v18) < (float)((float)((float)(v17 * v10) * v17) - v10) )
        return 0;
      if ( ++v13 >= planeCount )
      {
        v8 = v22;
        v5 = v23;
        break;
      }
    }
  }
  result = 3;
  if ( (float)(v9 - v10) > 1.0 )
  {
    v20 = 3;
    LODWORD(v21) = COERCE_UNSIGNED_INT((float)((float)(normal.v[1] * v5) + (float)(v8 * normal.v[0])) + (float)(normal.v[2] * v24)) & _xmm;
    if ( (float)((float)(v9 - v10) * 0.0013272297) > (float)(v21 * piecePlace->radius) )
      v20 = 2;
    result = v20 & 0xFD;
    if ( (float)((float)((float)(v9 - v10) * (float)(v9 - v10)) * 0.0000017615386) <= (float)((float)((float)(v9 - (float)(v21 * v21)) * halfThickness) * halfThickness) )
      return v20;
  }
  return result;
}

/*
==============
Glass_LinkPiece_Dynamic
==============
*/
void Glass_LinkPiece_Dynamic(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  __int64 v2; 
  FxGlassPiecePlace *v3; 
  vec3_t *linkOrg; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  unsigned int pieceWordCount; 
  unsigned int *cellBits; 
  Bounds bounds; 

  v2 = pieceIndex;
  v3 = &glassSys->piecePlaces[pieceIndex];
  linkOrg = glassSys->linkOrg;
  v5 = v3->frame.origin.v[0];
  v6 = linkOrg[v2].v[1] - v3->frame.origin.v[1];
  v7 = linkOrg[v2].v[2] - v3->frame.origin.v[2];
  if ( (float)((float)((float)((float)(linkOrg[v2].v[0] - v5) * (float)(linkOrg[v2].v[0] - v5)) + (float)(v6 * v6)) + (float)(v7 * v7)) >= 256.0 )
  {
    linkOrg[v2].v[0] = v5;
    linkOrg[v2].v[1] = v3->frame.origin.v[1];
    linkOrg[v2].v[2] = v3->frame.origin.v[2];
    v8 = v3->radius + 16.0;
    pieceWordCount = glassSys->pieceWordCount;
    cellBits = glassSys->cellBits;
    bounds.midPoint.v[0] = v3->frame.origin.v[0];
    *(_QWORD *)&bounds.midPoint.y = *(_QWORD *)(&v3->nextFree + 5);
    bounds.halfSize.v[0] = v8;
    bounds.halfSize.v[1] = v8;
    bounds.halfSize.v[2] = v8;
    R_FilterThingIntoCells(v2, &bounds, cellBits, pieceWordCount);
  }
}

/*
==============
Glass_LinkPiece_Static
==============
*/
void Glass_LinkPiece_Static(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  FxGlassPiecePlace *v3; 
  vec3_t *linkOrg; 
  __int64 v5; 
  unsigned int pieceWordCount; 
  unsigned int *cellBits; 
  float v8; 
  vec3_t normal; 
  Bounds bounds; 

  v3 = &glassSys->piecePlaces[pieceIndex];
  linkOrg = glassSys->linkOrg;
  v5 = pieceIndex;
  if ( linkOrg[pieceIndex].v[0] != v3->frame.origin.v[0] || linkOrg[pieceIndex].v[1] != v3->frame.origin.v[1] || linkOrg[pieceIndex].v[2] != v3->frame.origin.v[2] )
  {
    linkOrg[pieceIndex].v[0] = 262144.0;
    linkOrg[pieceIndex].v[1] = 262144.0;
    linkOrg[pieceIndex].v[2] = 262144.0;
    bounds.midPoint.v[0] = v3->frame.origin.v[0];
    *(_QWORD *)&bounds.midPoint.y = *(_QWORD *)(&v3->nextFree + 5);
    UnitQuatToNormal(&v3->frame.quat, &normal);
    pieceWordCount = glassSys->pieceWordCount;
    cellBits = glassSys->cellBits;
    v8 = glassSys->halfThickness[v5];
    bounds.halfSize.v[0] = (float)(fsqrt((float)(normal.v[2] * normal.v[2]) + (float)(normal.v[1] * normal.v[1])) * v3->radius) + (float)(COERCE_FLOAT(LODWORD(normal.v[0]) & _xmm) * v8);
    bounds.halfSize.v[1] = (float)(fsqrt((float)(normal.v[2] * normal.v[2]) + (float)(normal.v[0] * normal.v[0])) * v3->radius) + (float)(COERCE_FLOAT(LODWORD(normal.v[1]) & _xmm) * v8);
    bounds.halfSize.v[2] = (float)(fsqrt((float)(normal.v[1] * normal.v[1]) + (float)(normal.v[0] * normal.v[0])) * v3->radius) + (float)(COERCE_FLOAT(LODWORD(normal.v[2]) & _xmm) * v8);
    R_FilterThingIntoCells(v5, &bounds, cellBits, pieceWordCount);
  }
}

/*
==============
Glass_UnlinkPiece
==============
*/
void Glass_UnlinkPiece(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  vec3_t *linkOrg; 
  __int64 v3; 
  unsigned int *cellBits; 
  __int64 v5; 

  linkOrg = glassSys->linkOrg;
  v3 = pieceIndex;
  cellBits = glassSys->cellBits;
  v5 = v3;
  linkOrg[v5].v[0] = 262144.0;
  linkOrg[v5].v[1] = 262144.0;
  linkOrg[v5].v[2] = 262144.0;
  R_UnfilterThingFromCells(v3, cellBits, glassSys->pieceWordCount);
}

