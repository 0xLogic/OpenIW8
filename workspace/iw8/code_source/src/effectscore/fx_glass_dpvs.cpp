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
  unsigned __int8 PieceDrawFlags; 
  __int64 v13; 
  __int64 v14; 
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
      _R14 = v8 + 32 * (_DWORD)v7;
      if ( v8 >= 0x20 )
      {
        LODWORD(v14) = 32;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( (v5 & (0x80000000 >> v8)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v5 &= ~(0x80000000 >> v8);
      if ( !visData[_R14] )
      {
        _RAX = halfThickness;
        __asm { vmovss  xmm1, dword ptr [rax+r14*4]; halfThickness }
        PieceDrawFlags = Glass_GetPieceDrawFlags(&piecePlaces[_R14], *(float *)&_XMM1, (const vec3_t *)((char *)data + 16), *((unsigned __int16 *)data + 6), planes);
        if ( PieceDrawFlags )
        {
          if ( PieceDrawFlags > 3u )
          {
            LODWORD(v13) = PieceDrawFlags;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_dpvs.cpp", 216, ASSERT_TYPE_ASSERT, "( ( drawFlags <= (GLASS_DRAW_FACES | GLASS_DRAW_SIDES) ) )", "( drawFlags ) = %i", v13) )
              __debugbreak();
          }
          visData[_R14] = PieceDrawFlags;
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
  unsigned int localClientViewIndex; 
  __int64 v15; 
  bool v16; 
  int IsBoxVisible; 
  unsigned __int8 v49; 
  unsigned __int8 v55; 
  vec3_t normal; 
  Bounds bounds; 
  void *retaddr; 

  _R11 = &retaddr;
  visData = glassSys->visData;
  _RDI = pieceIndex;
  if ( !visData[pieceIndex] )
  {
    _RAX = glassSys->halfThickness;
    localClientViewIndex = cmd->localClientViewIndex;
    __asm
    {
      vmovaps xmmword ptr [r11-28h], xmm6
      vmovaps xmmword ptr [r11-38h], xmm7
      vmovaps xmmword ptr [r11-48h], xmm8
      vmovss  xmm8, dword ptr [rax+rdi*4]
      vmovaps xmmword ptr [r11-58h], xmm9
    }
    v15 = pieceIndex;
    v16 = __CFADD__(glassSys->piecePlaces, v15 * 32);
    _RBX = &glassSys->piecePlaces[v15];
    __asm
    {
      vmovaps xmmword ptr [r11-68h], xmm10
      vmovaps xmmword ptr [r11-78h], xmm11
      vmovss  xmm0, dword ptr [rbx+10h]
      vsubss  xmm9, xmm0, dword ptr [rdx]
      vmovss  xmm1, dword ptr [rbx+14h]
      vsubss  xmm10, xmm1, dword ptr [rdx+4]
      vmovss  xmm0, dword ptr [rbx+18h]
      vsubss  xmm11, xmm0, dword ptr [rdx+8]
      vmulss  xmm0, xmm9, xmm9
      vmulss  xmm1, xmm10, xmm10
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vmulss  xmm1, xmm11, xmm11
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm0, xmm6, cs:__real@36ec6e01
      vmulss  xmm1, xmm8, xmm8
      vsubss  xmm7, xmm2, xmm1
      vcomiss xmm7, xmm0
    }
    if ( !v16 )
    {
      UnitQuatToNormal(&_RBX->frame.quat, &normal);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+1Ch]
        vmovss  xmm0, dword ptr [rbx+10h]
        vmovss  xmm1, dword ptr [rbx+14h]
        vmovss  dword ptr [rsp+0C8h+bounds.midPoint], xmm0
        vmovss  xmm0, dword ptr [rbx+18h]
        vmovss  dword ptr [rsp+0C8h+bounds.midPoint+8], xmm0
        vmovss  dword ptr [rsp+0C8h+bounds.midPoint+4], xmm1
        vmovss  dword ptr [rsp+0C8h+bounds.halfSize], xmm2
        vmovss  dword ptr [rsp+0C8h+bounds.halfSize+4], xmm2
        vmovss  dword ptr [rsp+0C8h+bounds.halfSize+8], xmm2
      }
      IsBoxVisible = R_Umbra_IsBoxVisible(&bounds, 0, localClientViewIndex, 0);
      if ( IsBoxVisible )
      {
        __asm
        {
          vsubss  xmm4, xmm6, xmm7
          vcomiss xmm4, cs:__real@3f800000
          vmulss  xmm1, xmm9, dword ptr [rsp+0C8h+normal]
          vmulss  xmm0, xmm10, dword ptr [rsp+0C8h+normal+4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm11, dword ptr [rsp+0C8h+normal+8]
          vmulss  xmm0, xmm4, cs:__real@3aadf670
          vaddss  xmm3, xmm2, xmm1
          vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmulss  xmm1, xmm3, dword ptr [rbx+1Ch]
          vcomiss xmm0, xmm1
          vmulss  xmm0, xmm3, xmm3
        }
        v49 = (IsBoxVisible == 0) + 2;
        __asm
        {
          vsubss  xmm1, xmm6, xmm0
          vmulss  xmm2, xmm1, xmm8
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm1, xmm0, cs:__real@35ec6e01
          vmulss  xmm3, xmm2, xmm8
          vcomiss xmm1, xmm3
        }
        v55 = v49 & 0xFD;
        if ( (v49 & 0xFD) == 0 )
          v55 = v49;
        if ( v55 )
          visData[_RDI] = v55;
      }
    }
    __asm
    {
      vmovaps xmm10, [rsp+0C8h+var_68]
      vmovaps xmm9, [rsp+0C8h+var_58]
      vmovaps xmm8, [rsp+0C8h+var_48]
      vmovaps xmm7, [rsp+0C8h+var_38]
      vmovaps xmm6, [rsp+0C8h+var_28]
      vmovaps xmm11, [rsp+0C8h+var_78]
    }
  }
}

/*
==============
Glass_GetPieceDrawFlags
==============
*/

unsigned __int8 __fastcall Glass_GetPieceDrawFlags(const FxGlassPiecePlace *piecePlace, double halfThickness, const vec3_t *viewOrg, const unsigned int planeCount, const DpvsPlane *planes)
{
  unsigned int v38; 
  bool v39; 
  __int64 v40; 
  bool v41; 
  unsigned __int8 result; 
  vec3_t normal; 
  char v99; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovaps [rsp+0F8h+var_98], xmm14
    vmovaps [rsp+0F8h+var_A8], xmm15
    vmovss  xmm0, dword ptr [rcx+14h]
    vsubss  xmm7, xmm0, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [rcx+18h]
    vsubss  xmm3, xmm0, dword ptr [r8+8]
    vmovss  xmm15, dword ptr [rcx+10h]
    vsubss  xmm6, xmm15, dword ptr [r8]
    vmovaps xmm9, xmm1
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmulss  xmm1, xmm3, xmm3
    vmovss  [rsp+0F8h+var_D0], xmm3
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm14, xmm2, xmm1
    vmulss  xmm1, xmm14, cs:__real@36ec6e01
    vsubss  xmm8, xmm3, xmm0
    vcomiss xmm8, xmm1
    vmovss  [rsp+0F8h+var_D8], xmm6
    vmovss  [rsp+0F8h+var_D4], xmm7
  }
  UnitQuatToNormal(&piecePlace->frame.quat, &normal);
  __asm
  {
    vmovss  xmm11, dword ptr [rsp+0F8h+normal+8]
    vmovss  xmm12, dword ptr [rsp+0F8h+normal+4]
    vmovss  xmm13, dword ptr [rsp+0F8h+normal]
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  v38 = 0;
  v39 = planeCount == 0;
  if ( planeCount )
  {
    while ( 1 )
    {
      v40 = v38;
      v41 = __CFADD__(planes, v40 * 16);
      _RAX = &planes[v40];
      __asm
      {
        vmovss  xmm5, dword ptr [rax+4]
        vmulss  xmm1, xmm13, dword ptr [rax]
        vmovss  xmm6, dword ptr [rax+8]
        vmulss  xmm0, xmm12, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm11, xmm6
        vaddss  xmm7, xmm2, xmm1
        vmulss  xmm1, xmm15, dword ptr [rax]
        vandps  xmm0, xmm7, xmm10
        vmulss  xmm3, xmm0, xmm9
        vmulss  xmm0, xmm5, dword ptr [rdi+14h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, dword ptr [rdi+18h]
        vaddss  xmm2, xmm2, xmm1
        vaddss  xmm0, xmm2, dword ptr [rax+0Ch]
        vaddss  xmm3, xmm3, xmm0
        vandps  xmm1, xmm3, xmm10
        vmulss  xmm4, xmm1, xmm3
        vmulss  xmm0, xmm7, xmm8
        vmulss  xmm1, xmm0, xmm7
        vsubss  xmm2, xmm1, xmm8
        vcomiss xmm4, xmm2
      }
      if ( v41 )
        break;
      v39 = ++v38 <= planeCount;
      if ( v38 >= planeCount )
      {
        __asm
        {
          vmovss  xmm6, [rsp+0F8h+var_D8]
          vmovss  xmm7, [rsp+0F8h+var_D4]
        }
        goto LABEL_5;
      }
    }
    result = 0;
  }
  else
  {
LABEL_5:
    __asm
    {
      vsubss  xmm4, xmm14, xmm8
      vcomiss xmm4, cs:__real@3f800000
    }
    result = 3;
    if ( !v39 )
    {
      __asm
      {
        vmulss  xmm1, xmm12, xmm7
        vmulss  xmm0, xmm6, xmm13
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm11, [rsp+0F8h+var_D0]
        vmulss  xmm0, xmm4, cs:__real@3aadf670
        vaddss  xmm3, xmm2, xmm1
        vandps  xmm3, xmm3, xmm10
        vmulss  xmm1, xmm3, dword ptr [rdi+1Ch]
        vcomiss xmm0, xmm1
        vmulss  xmm0, xmm3, xmm3
        vsubss  xmm1, xmm14, xmm0
        vmulss  xmm2, xmm1, xmm9
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm0, cs:__real@35ec6e01
        vmulss  xmm3, xmm2, xmm9
        vcomiss xmm1, xmm3
      }
      result = 2;
    }
  }
  _R11 = &v99;
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
    vmovaps xmm14, [rsp+0F8h+var_98]
    vmovaps xmm15, [rsp+0F8h+var_A8]
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
  __int64 v4; 
  bool v5; 
  unsigned int pieceWordCount; 
  unsigned int *cellBits; 
  Bounds bounds; 

  v2 = pieceIndex;
  v4 = pieceIndex;
  v5 = __CFADD__(glassSys->piecePlaces, v4 * 32);
  _RDX = &glassSys->piecePlaces[v4];
  _R9 = glassSys->linkOrg;
  _RCX = 3 * v2;
  __asm
  {
    vmovss  xmm5, dword ptr [rdx+10h]
    vmovss  xmm0, dword ptr [r9+rcx*4]
    vsubss  xmm2, xmm0, xmm5
    vmovss  xmm0, dword ptr [r9+rcx*4+4]
    vsubss  xmm1, xmm0, dword ptr [rdx+14h]
    vmovss  xmm0, dword ptr [r9+rcx*4+8]
    vsubss  xmm4, xmm0, dword ptr [rdx+18h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm1, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@43800000
  }
  if ( !v5 )
  {
    __asm { vmovss  dword ptr [r9+rcx*4], xmm5 }
    _R9[v2].v[1] = _RDX->frame.origin.v[1];
    _R9[v2].v[2] = _RDX->frame.origin.v[2];
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+1Ch]
      vmovss  xmm1, dword ptr [rdx+10h]
      vaddss  xmm2, xmm0, cs:__real@41800000
    }
    pieceWordCount = glassSys->pieceWordCount;
    cellBits = glassSys->cellBits;
    __asm
    {
      vmovss  dword ptr [rsp+48h+bounds.midPoint], xmm1
      vmovss  xmm0, dword ptr [rdx+14h]
      vmovss  dword ptr [rsp+48h+bounds.midPoint+4], xmm0
      vmovss  xmm1, dword ptr [rdx+18h]
      vmovss  dword ptr [rsp+48h+bounds.midPoint+8], xmm1
      vmovss  dword ptr [rsp+48h+bounds.halfSize], xmm2
      vmovss  dword ptr [rsp+48h+bounds.halfSize+4], xmm2
      vmovss  dword ptr [rsp+48h+bounds.halfSize+8], xmm2
    }
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
  __int64 v8; 
  bool v9; 
  unsigned int pieceWordCount; 
  unsigned int *cellBits; 
  vec3_t normal; 
  Bounds bounds; 

  v8 = pieceIndex;
  v9 = &glassSys->piecePlaces[v8] == NULL;
  _RBX = &glassSys->piecePlaces[v8];
  _RCX = glassSys->linkOrg;
  _RBP = pieceIndex;
  _RAX = 3i64 * pieceIndex;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rax*4]
    vucomiss xmm0, dword ptr [rbx+10h]
  }
  if ( !v9 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rax*4+4]
    vucomiss xmm0, dword ptr [rbx+14h]
  }
  if ( !v9 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rax*4+8]
    vucomiss xmm0, dword ptr [rbx+18h]
  }
  if ( !v9 )
  {
LABEL_4:
    _RCX[pieceIndex].v[0] = 262144.0;
    _RCX[pieceIndex].v[1] = 262144.0;
    _RCX[pieceIndex].v[2] = 262144.0;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10h]
      vmovaps [rsp+0B8h+var_28], xmm6
      vmovss  dword ptr [rsp+0B8h+bounds.midPoint], xmm0
      vmovss  xmm1, dword ptr [rbx+14h]
      vmovaps [rsp+0B8h+var_38], xmm7
      vmovss  dword ptr [rsp+0B8h+bounds.midPoint+4], xmm1
      vmovss  xmm0, dword ptr [rbx+18h]
      vmovaps [rsp+0B8h+var_48], xmm8
      vmovaps [rsp+0B8h+var_58], xmm9
      vmovss  dword ptr [rsp+0B8h+bounds.midPoint+8], xmm0
      vmovaps [rsp+0B8h+var_68], xmm10
    }
    UnitQuatToNormal(&_RBX->frame.quat, &normal);
    __asm
    {
      vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm4, dword ptr [rsp+0B8h+normal]
      vmovss  xmm6, dword ptr [rsp+0B8h+normal+4]
      vmovss  xmm10, dword ptr [rsp+0B8h+normal+8]
    }
    _RAX = glassSys->halfThickness;
    pieceWordCount = glassSys->pieceWordCount;
    cellBits = glassSys->cellBits;
    __asm
    {
      vmulss  xmm3, xmm10, xmm10
      vmovss  xmm8, dword ptr [rax+rbp*4]
      vmulss  xmm9, xmm4, xmm4
      vmulss  xmm7, xmm6, xmm6
      vaddss  xmm0, xmm3, xmm7
      vsqrtss xmm1, xmm0, xmm0
      vmulss  xmm2, xmm1, dword ptr [rbx+1Ch]
      vandps  xmm4, xmm4, xmm5
      vmulss  xmm0, xmm4, xmm8
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rsp+0B8h+bounds.halfSize], xmm1
      vaddss  xmm2, xmm3, xmm9
      vsqrtss xmm0, xmm2, xmm2
      vmulss  xmm1, xmm0, dword ptr [rbx+1Ch]
      vandps  xmm6, xmm6, xmm5
      vmulss  xmm0, xmm6, xmm8
      vaddss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rsp+0B8h+bounds.halfSize+4], xmm1
      vaddss  xmm2, xmm7, xmm9
      vsqrtss xmm0, xmm2, xmm2
      vmulss  xmm1, xmm0, dword ptr [rbx+1Ch]
      vandps  xmm10, xmm10, xmm5
      vmulss  xmm0, xmm10, xmm8
      vaddss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rsp+0B8h+bounds.halfSize+8], xmm1
    }
    R_FilterThingIntoCells(_RBP, &bounds, cellBits, pieceWordCount);
    __asm
    {
      vmovaps xmm10, [rsp+0B8h+var_68]
      vmovaps xmm9, [rsp+0B8h+var_58]
      vmovaps xmm8, [rsp+0B8h+var_48]
      vmovaps xmm7, [rsp+0B8h+var_38]
      vmovaps xmm6, [rsp+0B8h+var_28]
    }
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

