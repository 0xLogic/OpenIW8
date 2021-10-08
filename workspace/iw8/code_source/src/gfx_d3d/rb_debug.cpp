/*
==============
RB_AddDebugLine
==============
*/

int __fastcall RB_AddDebugLine(GfxCmdBufContext *gfxContext, const vec3_t *start, const vec3_t *end, const GfxColor color, bool depthTest, int vertCount, int vertLimit, GfxPointVertex *verts)
{
  return ?RB_AddDebugLine@@YAHUGfxCmdBufContext@@AEBTvec3_t@@1TGfxColor@@_NHHQEAUGfxPointVertex@@@Z(gfxContext, start, end, color, depthTest, vertCount, vertLimit, verts);
}

/*
==============
RB_EndDebugLines
==============
*/

int __fastcall RB_EndDebugLines(GfxCmdBufContext *gfxContext, bool depthTest, int vertCount, const GfxPointVertex *verts)
{
  return ?RB_EndDebugLines@@YAHUGfxCmdBufContext@@_NHQEBUGfxPointVertex@@@Z(gfxContext, depthTest, vertCount, verts);
}

/*
==============
RB_DrawDepthOfFieldDebug_DrawText
==============
*/

void __fastcall RB_DrawDepthOfFieldDebug_DrawText(GfxCmdBufContext *gfxContext, const char *text, float x, float y, const GfxColor color)
{
  ?RB_DrawDepthOfFieldDebug_DrawText@@YAXUGfxCmdBufContext@@PEBDMMTGfxColor@@@Z(gfxContext, text, x, y, color);
}

/*
==============
RB_DrawDebugPolys
==============
*/

void __fastcall RB_DrawDebugPolys(GfxCmdBufContext *gfxContext, vec3_t *polyVerts, unsigned int polyVertCount, trDebugPoly_t *polys, unsigned int polyCount, GfxPointVertex *verts)
{
  ?RB_DrawDebugPolys@@YAXUGfxCmdBufContext@@PEATvec3_t@@IPEAUtrDebugPoly_t@@IPEAUGfxPointVertex@@@Z(gfxContext, polyVerts, polyVertCount, polys, polyCount, verts);
}

/*
==============
RB_NeedDrawDebug
==============
*/

bool __fastcall RB_NeedDrawDebug()
{
  return ?RB_NeedDrawDebug@@YA_NXZ();
}

/*
==============
RB_DrawDepthOfFieldDebug
==============
*/

void __fastcall RB_DrawDepthOfFieldDebug(GfxCmdBufContext *gfxContext, const GfxViewParms *viewParms, const GfxViewInfo *viewInfo)
{
  ?RB_DrawDepthOfFieldDebug@@YAXUGfxCmdBufContext@@PEBUGfxViewParms@@PEBUGfxViewInfo@@@Z(gfxContext, viewParms, viewInfo);
}

/*
==============
RB_DrawDebug
==============
*/

void __fastcall RB_DrawDebug(GfxCmdBufContext *gfxContext, const GfxViewParms *viewParms, const GfxViewInfo *viewInfo)
{
  ?RB_DrawDebug@@YAXUGfxCmdBufContext@@PEBUGfxViewParms@@PEBUGfxViewInfo@@@Z(gfxContext, viewParms, viewInfo);
}

/*
==============
RB_SetPolyVert
==============
*/

void __fastcall RB_SetPolyVert(GfxCmdBufContext *gfxContext, const vec3_t *xyz, GfxColor color, int tessVertIndex)
{
  ?RB_SetPolyVert@@YAXUGfxCmdBufContext@@AEBTvec3_t@@TGfxColor@@H@Z(gfxContext, xyz, color, tessVertIndex);
}

/*
==============
RB_AddDebugLine
==============
*/
__int64 RB_AddDebugLine(GfxCmdBufContext *gfxContext, const vec3_t *start, const vec3_t *end, const GfxColor color, bool depthTest, int vertCount, int vertLimit, GfxPointVertex *verts)
{
  int v8; 
  __int64 v13; 
  __int64 v14; 
  GfxCmdBufContext v16; 

  v8 = vertCount;
  if ( vertCount + 2 > vertLimit )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
    }
    RB_DrawLines3D(&v16, vertCount / 2, 1, verts, depthTest);
    v8 = 0;
  }
  v13 = v8;
  v14 = v8 + 1i64;
  *(GfxColor *)verts[v13].color = color;
  *(GfxColor *)verts[v14].color = color;
  verts[v13].xyz.v[0] = start->v[0];
  verts[v13].xyz.v[1] = start->v[1];
  verts[v13].xyz.v[2] = start->v[2];
  verts[v14].xyz.v[0] = end->v[0];
  verts[v14].xyz.v[1] = end->v[1];
  verts[v14].xyz.v[2] = end->v[2];
  return (unsigned int)(v8 + 2);
}

/*
==============
RB_DrawDebug
==============
*/
void RB_DrawDebug(GfxCmdBufContext *gfxContext, const GfxViewParms *viewParms, const GfxViewInfo *viewInfo)
{
  const GfxViewInfo *v9; 
  const GfxBackEndData *v13; 
  int v14; 
  GfxCmdBufSourceState *v16; 
  GfxDebugPlume *plumes; 
  int v24; 
  const char *v43; 
  const GfxBackEndData *v51; 
  unsigned int polyCount; 
  trDebugPoly_t *polys; 
  unsigned int vertCount; 
  vec3_t *verts; 
  unsigned int externPolyCount; 
  trDebugPoly_t *externPolys; 
  unsigned int externVertCount; 
  vec3_t *externVerts; 
  __int128 sourcea; 
  __int128 sourceb; 
  GfxCmdBufContext v78; 

  v9 = viewInfo;
  _R15 = gfxContext;
  if ( !viewParms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp", 494, ASSERT_TYPE_ASSERT, "(viewParms)", (const char *)&queryFormat, "viewParms") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  RB_SetUIColorimetryParams(&v78);
  v13 = backEndData;
  v14 = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  if ( backEndData->debugGlobals.plumeCount > 0 )
  {
    v16 = v78.source;
    _RBX = 0i64;
    __asm
    {
      vmovaps [rsp+0F0h+var_50], xmm7
      vmovss  xmm7, cs:__real@40000000
      vmovaps [rsp+0F0h+var_60], xmm8
      vmovss  xmm8, cs:__real@3c4de32e
      vmovaps [rsp+0F0h+var_70], xmm9
      vmovss  xmm9, cs:__real@40800000
      vmovaps [rsp+0F0h+var_80], xmm10
      vmovss  xmm10, cs:__real@3d83126f
      vmovaps [rsp+0F0h+var_90], xmm11
      vmovss  xmm11, cs:__real@41000000
      vmovaps [rsp+0F0h+var_40], xmm6
    }
    do
    {
      plumes = v13->debugGlobals.plumes;
      v24 = v16->sceneDef.time - plumes[_RBX].startTime;
      if ( v24 >= 0 && v24 <= plumes[_RBX].duration )
      {
        plumes[_RBX].color.v[3] = 1.0;
        _R14 = v13->debugGlobals.plumes;
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
        }
        if ( 2 * v24 > _R14[_RBX].duration )
        {
          __asm
          {
            vmulss  xmm1, xmm6, xmm7
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vdivss  xmm2, xmm1, xmm0
            vsubss  xmm1, xmm7, xmm2
            vmovss  dword ptr [rbx+r14+18h], xmm1
          }
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
          vmulss  xmm1, xmm6, xmm8
          vaddss  xmm0, xmm1, xmm0; X
        }
        *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
        __asm
        {
          vmulss  xmm2, xmm0, xmm9
          vmulss  xmm0, xmm2, dword ptr [r12+118h]
          vaddss  xmm1, xmm0, dword ptr [rbx+r14]
          vmulss  xmm0, xmm2, dword ptr [r12+11Ch]
          vmovss  dword ptr [rbp+57h+var_B0], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbx+r14+4]
          vmulss  xmm0, xmm2, dword ptr [r12+120h]
          vmovss  dword ptr [rbp+57h+var_B0+4], xmm1
          vaddss  xmm2, xmm0, dword ptr [rbx+r14+8]
          vmulss  xmm1, xmm6, xmm10
          vaddss  xmm2, xmm2, xmm1
          vmovss  dword ptr [rbp+57h+var_B0+8], xmm2
        }
        v43 = j_va("%i", (unsigned int)v13->debugGlobals.plumes[_RBX].score);
        __asm { vmovaps xmm3, xmm11; size }
        R_AddDebugString(&backEndData->debugGlobals, (const vec3_t *)&v78, &backEndData->debugGlobals.plumes[v14].color, *(float *)&_XMM3, v43);
        v13 = backEndData;
      }
      ++v14;
      ++_RBX;
    }
    while ( v14 < v13->debugGlobals.plumeCount );
    v9 = viewInfo;
    __asm
    {
      vmovaps xmm11, [rsp+0F0h+var_90]
      vmovaps xmm10, [rsp+0F0h+var_80]
      vmovaps xmm9, [rsp+0F0h+var_70]
      vmovaps xmm8, [rsp+0F0h+var_60]
      vmovaps xmm7, [rsp+0F0h+var_50]
      vmovaps xmm6, [rsp+0F0h+var_40]
    }
  }
  CG_Edge_FlushDebugPolys(&v13->debugGlobals);
  v51 = backEndData;
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmmword ptr [rbp+57h+source], xmm0
  }
  polyCount = backEndData->debugGlobals.polyCount;
  polys = backEndData->debugGlobals.polys;
  vertCount = backEndData->debugGlobals.vertCount;
  verts = backEndData->debugGlobals.verts;
  if ( polyCount )
  {
    __asm { vmovups [rbp+57h+var_B0], xmm0 }
    RB_EndSurfaceIfNeeded(&v78);
    R_Set3D((GfxCmdBufSourceState *)sourcea);
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups [rbp+57h+var_B0], xmm0
    }
    RB_DrawPolyInteriors(&v78, verts, vertCount, polys, polyCount);
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups [rbp+57h+var_B0], xmm0
    }
    RB_DrawPolyOutlines(&v78, verts, vertCount, polys, polyCount, g_debugPolyVerts);
    v51 = backEndData;
  }
  __asm { vmovups xmm0, xmmword ptr [r15] }
  externPolyCount = v51->debugGlobals.externPolyCount;
  externPolys = v51->debugGlobals.externPolys;
  externVertCount = v51->debugGlobals.externVertCount;
  externVerts = v51->debugGlobals.externVerts;
  __asm { vmovups xmmword ptr [rbp+57h+source], xmm0 }
  if ( externPolyCount )
  {
    __asm { vmovups [rbp+57h+var_B0], xmm0 }
    RB_EndSurfaceIfNeeded(&v78);
    R_Set3D((GfxCmdBufSourceState *)sourceb);
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups [rbp+57h+var_B0], xmm0
    }
    RB_DrawPolyInteriors(&v78, externVerts, externVertCount, externPolys, externPolyCount);
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups [rbp+57h+var_B0], xmm0
    }
    RB_DrawPolyOutlines(&v78, externVerts, externVertCount, externPolys, externPolyCount, g_debugExternPolyVerts);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  Physics_RenderDebug(&v78);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  RB_DrawDebugLines(&v78, backEndData->debugGlobals.lines, backEndData->debugGlobals.lineCount, g_debugLineVerts);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  RB_DrawDebugLines(&v78, backEndData->debugGlobals.externLines, backEndData->debugGlobals.externLineCount, g_debugExternLineVerts);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  RB_DrawDebugStrings(&v78, backEndData->debugGlobals.strings, backEndData->debugGlobals.stringCount);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  RB_DrawDebugStrings(&v78, backEndData->debugGlobals.externStrings, backEndData->debugGlobals.externStringCount);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  RB_EndSurfaceIfNeeded(&v78);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  RB_DrawDepthOfFieldDebug(&v78, viewParms, v9);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  RB_Stream_TreeDebugDraw(&v78, v9);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  RB_Stream_XModelTreeDebugDraw(&v78, v9);
}

/*
==============
RB_DrawDebugLines
==============
*/
void RB_DrawDebugLines(GfxCmdBufContext *gfxContext, trDebugLine_t *lines, int lineCount, GfxPointVertex *verts)
{
  __int64 v6; 
  __int64 v9; 
  unsigned __int8 v10; 
  int v11; 
  __int64 v12; 
  float *v13; 
  unsigned __int8 v14; 
  int v16; 
  __int64 v18; 
  __int64 v19; 
  float v20; 
  GfxCmdBufContext v22[2]; 

  if ( lineCount )
  {
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _R14 = gfxContext;
    v6 = lineCount;
    __asm { vmovups [rsp+58h+var_28], xmm0 }
    RB_EndSurfaceIfNeeded(v22);
    R_Set3D(_R14->source);
    v9 = v6;
    v10 = lines->depthTest != 0;
    v11 = 0;
    if ( (int)v6 > 0 )
    {
      v12 = 0i64;
      v13 = &lines->end.v[2];
      do
      {
        v14 = *((_DWORD *)v13 + 2) != 0;
        if ( v10 != v14 )
        {
          if ( v11 / 2 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [r14]
              vmovups [rsp+58h+var_28], xmm0
            }
            RB_DrawLines3D(v22, v11 / 2, 1, verts, v10);
          }
          v11 = 0;
          v10 = v14;
          v12 = 0i64;
        }
        v16 = *((_DWORD *)v13 + 1);
        if ( v11 + 2 > 0x7FFF )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [r14]
            vmovups [rsp+58h+var_28], xmm0
          }
          RB_DrawLines3D(v22, v11 / 2, 1, verts, v10);
          v11 = 0;
          v12 = 0i64;
        }
        v18 = v12;
        v19 = v12 + 1;
        v11 += 2;
        v12 += 2i64;
        *(_DWORD *)verts[v18].color = v16;
        *(_DWORD *)verts[v19].color = v16;
        verts[v18].xyz.v[0] = *(v13 - 5);
        verts[v18].xyz.v[1] = *(v13 - 4);
        verts[v18].xyz.v[2] = *(v13 - 3);
        verts[v19].xyz.v[0] = *(v13 - 2);
        verts[v19].xyz.v[1] = *(v13 - 1);
        v20 = *v13;
        v13 += 8;
        verts[v19].xyz.v[2] = v20;
        --v9;
      }
      while ( v9 );
    }
    if ( v11 / 2 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups [rsp+58h+var_28], xmm0
      }
      RB_DrawLines3D(v22, v11 / 2, 1, verts, v10);
    }
  }
}

/*
==============
RB_DrawDebugPolys
==============
*/
void RB_DrawDebugPolys(GfxCmdBufContext *gfxContext, vec3_t *polyVerts, unsigned int polyVertCount, trDebugPoly_t *polys, unsigned int polyCount, GfxPointVertex *verts)
{
  GfxCmdBufContext v13; 

  _RDI = gfxContext;
  if ( polyCount )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
    }
    RB_EndSurfaceIfNeeded(&v13);
    R_Set3D(_RDI->source);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
    }
    RB_DrawPolyInteriors(&v13, polyVerts, polyVertCount, polys, polyCount);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
    }
    RB_DrawPolyOutlines(&v13, polyVerts, polyVertCount, polys, polyCount, verts);
  }
}

/*
==============
RB_DrawDebugStrings
==============
*/
void RB_DrawDebugStrings(GfxCmdBufContext *gfxContext, trDebugString_t *strings, int stringCount)
{
  __int64 v7; 
  int v9; 
  __int64 v10; 
  int v11; 
  __int64 v13; 
  GfxFont *v17; 
  std::_Ref_fn<<lambda_b2c6cc94deacc1af8931569b96b09bbe> > v21; 
  __int64 v22; 
  const FontGlowStyle *LegacyFontStyle; 
  GfxFont *v39; 
  bool v40; 
  float v44; 
  float v45; 
  float v46; 
  GfxColor v47; 
  GfxCmdBufContext v48; 
  GfxCmdBufContext v49; 
  RB_DrawDebugStrings::__l2::<lambda_b2c6cc94deacc1af8931569b96b09bbe> _Val; 

  if ( stringCount )
  {
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _R15 = gfxContext;
    v7 = stringCount;
    __asm { vmovups [rsp+0D8h+var_78], xmm0 }
    RB_EndSurfaceIfNeeded(&v49);
    _R12 = _R15->source;
    R_Set2D(_R15->source);
    v9 = 0;
    v10 = v7;
    v11 = 0;
    if ( (int)v7 > 0 )
    {
      _RBX = &strings->color;
      v13 = v10;
      do
      {
        if ( _RBX[21].packed )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [r15]
            vmovss  xmm1, dword ptr [rbx-0Ch]
            vmovss  xmm3, dword ptr [rbx+4]
          }
          v17 = *(GfxFont **)_RBX[-5].array;
          v47 = *_RBX;
          __asm
          {
            vmovups [rsp+0D8h+var_78], xmm0
            vmovss  xmm0, dword ptr [rbx-8]
            vmovss  dword ptr [rsp+0D8h+var_B0], xmm0
            vmovss  [rsp+0D8h+var_B8], xmm1
          }
          RB_DrawTextWithSize(&v49, strings[v11].text, v17, *(const float *)&_XMM3, v44, v46, v47);
        }
        ++v11;
        _RBX += 28;
        --v13;
      }
      while ( v13 );
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups [rsp+0D8h+var_78], xmm0
    }
    RB_EndSurfaceIfNeeded(&v49);
    R_Set3D(_R12);
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups [rsp+0D8h+var_88], xmm0
    }
    v21._Fn = std::_Pass_fn__lambda_b2c6cc94deacc1af8931569b96b09bbe__0_(&_Val)._Fn;
    std::_Sort_unchecked_trDebugString_t___std::_Ref_fn__lambda_b2c6cc94deacc1af8931569b96b09bbe_____(strings, (trDebugString_t *)((char *)strings + v22), v22 / 112, (std::_Ref_fn<<lambda_b2c6cc94deacc1af8931569b96b09bbe> >)v21._Fn->gfxContext.source);
    if ( v10 > 0 )
    {
      __asm { vmovaps [rsp+0D8h+var_48], xmm6 }
      _RBX = &strings->isCentered;
      __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
      do
      {
        if ( !*(_RBX - 1) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r12+2728h]
            vxorps  xmm1, xmm0, xmm6
            vmovss  dword ptr [rsp+0D8h+var_78], xmm1
            vmovss  xmm2, dword ptr [r12+272Ch]
            vxorps  xmm0, xmm2, xmm6
            vmovss  dword ptr [rsp+0D8h+var_78+4], xmm0
            vmovss  xmm1, dword ptr [r12+2730h]
            vxorps  xmm2, xmm1, xmm6
            vmovss  dword ptr [rsp+0D8h+var_78+8], xmm2
            vmovss  xmm0, dword ptr [r12+2734h]
            vxorps  xmm1, xmm0, xmm6
            vmovss  dword ptr [rsp+0D8h+_Val.gfxContext.source], xmm1
            vmovss  xmm2, dword ptr [r12+2738h]
            vxorps  xmm0, xmm2, xmm6
            vmovss  dword ptr [rsp+0D8h+_Val.gfxContext.source+4], xmm0
            vmovss  xmm1, dword ptr [r12+273Ch]
            vxorps  xmm2, xmm1, xmm6
            vmovss  dword ptr [rsp+0D8h+_Val.gfxContext.state], xmm2
          }
          LegacyFontStyle = R_Font_GetLegacyFontStyle(7);
          __asm { vmovups xmm0, xmmword ptr [r15] }
          v39 = *(GfxFont **)(_RBX - 27);
          v40 = *_RBX == 0;
          __asm
          {
            vmovups [rsp+0D8h+var_88], xmm0
            vmovss  xmm0, dword ptr [rbx-54h]
            vmovss  [rsp+0D8h+var_B8], xmm0
          }
          RB_DrawTextInSpace(&v48, strings[v9].text, v39, &strings[v9].xyz, v45, (const vec3_t *)&v49, (const vec3_t *)&_Val, *(_RBX - 22), LegacyFontStyle, !v40);
        }
        ++v9;
        _RBX += 28;
        --v10;
      }
      while ( v10 );
      __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups [rsp+0D8h+var_88], xmm0
    }
    RB_EndSurfaceIfNeeded(&v48);
  }
}

/*
==============
RB_DrawDepthOfFieldDebug
==============
*/
void RB_DrawDepthOfFieldDebug(GfxCmdBufContext *gfxContext, const GfxViewParms *viewParms, const GfxViewInfo *viewInfo)
{
  GfxColor v26; 
  const char *v28; 
  const char *v29; 
  bool v168; 
  float v222; 
  float v223; 
  float v224; 
  float v225; 
  float v226; 
  float v227; 
  float v228; 
  float v229; 
  float v230; 
  float v231; 
  float v232; 
  float v233; 
  float v234; 
  float v235; 
  float v236; 
  float v237; 
  float v238; 
  float v239; 
  __int64 v240; 
  float v241; 
  float v242; 
  float v243; 
  float v244; 
  float v245; 
  float v246; 
  float v247; 
  float v248; 
  float v249; 
  float v250; 
  float v251; 
  float v252; 
  float v253; 
  float v254; 
  float v255; 
  float v256; 
  double v257; 
  float v258; 
  float v259; 
  double v260; 
  float v261; 
  float v262; 
  float v263; 
  float v264; 
  GfxCmdBufContext v265; 
  GfxColor v266; 
  char dest[512]; 

  _R13 = viewInfo;
  _RSI = gfxContext;
  if ( r_dof_physical_distanceMeter->current.enabled )
  {
    R_Set2D(gfxContext->source);
    if ( _R13->dofPhysical.enabled )
    {
      __asm
      {
        vmovaps [rsp+330h+var_40], xmm6
        vmovss  xmm6, dword ptr [r13+0C90h]
        vmovaps [rsp+330h+var_50], xmm7
        vmovss  xmm7, dword ptr [r13+134h]
        vmovaps [rsp+330h+var_60], xmm8
        vmovaps [rsp+330h+var_70], xmm9
        vmovss  xmm9, dword ptr [r13+130h]
        vmovaps [rsp+330h+var_80], xmm10
        vmovaps [rsp+330h+var_90], xmm11
        vmovaps [rsp+330h+var_A0], xmm12
        vmovaps [rsp+330h+var_B0], xmm13
        vmovaps [rsp+330h+var_C0], xmm14
      }
      *(double *)&_XMM0 = R_DOF_GetPhysicalHipSharpCocDiameter();
      __asm { vmovaps xmm1, xmm6; filmDiagonalLength }
      *(double *)&_XMM0 = R_GetScaledSharpCocDiameter(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmovaps xmm10, xmm0 }
      *(double *)&_XMM0 = R_DOF_GetBokehMaxCocDiameter(_R13);
      __asm
      {
        vmovss  xmm11, cs:__real@42ca0000
        vmovaps xmm12, xmm0
        vmovups xmm0, xmmword ptr [rsi]
      }
      v266.packed = -16777216;
      __asm
      {
        vmovaps xmm3, xmm11
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  dword ptr [rsp+330h+var_310], xmm11
      }
      RB_DrawText(&v265, "PHYSICAL DOF = ON / BOKEH", backEnd.debugFont, *(float *)&_XMM3, v222, (const GfxColor)-16777216);
      __asm
      {
        vmovss  xmm14, cs:__real@42c80000
        vmovups xmm0, xmmword ptr [rsi]
      }
      v26.packed = -1;
      __asm
      {
        vmovaps xmm3, xmm14
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  dword ptr [rsp+330h+var_310], xmm14
      }
      RB_DrawText(&v265, "PHYSICAL DOF = ON / BOKEH", backEnd.debugFont, *(float *)&_XMM3, v223, (const GfxColor)-1);
      v28 = "OFF";
      v29 = "OFF";
      if ( _R13->dofPhysical.hipEnabled )
        v29 = "ON";
      Com_sprintf(dest, 0x200ui64, "HYPERFOCAL MODE = %s", v29);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@42de0000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v224, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm13, cs:__real@42dc0000
        vmovaps xmm3, xmm14
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  dword ptr [rsp+330h+var_310], xmm13
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v225, (const GfxColor)-1);
      if ( _R13->dofPhysical.scriptingEnabled )
        v28 = "ON";
      Com_sprintf(dest, 0x200ui64, "SCRIPTING MODE = %s", v28);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@42f20000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v226, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@42f00000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v227, (const GfxColor)-1);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+0CA0h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "FOCUS DISTANCE = %.3f in", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@430d0000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v228, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@430c0000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v229, (const GfxColor)-1);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+0C9Ch]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "APERTURE = %.3f f-stops", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@43170000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v230, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@43160000
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
        vmovaps xmm3, xmm14
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v231, (const GfxColor)-1);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+0CACh]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "VIEW MODEL FOCUS DISTANCE = %.3f in", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@432b0000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v232, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@432a0000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v233, (const GfxColor)-1);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+0CA8h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "VIEW MODEL APERTURE = %.3f f-stops", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@43350000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v234, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@43340000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v235, (const GfxColor)-1);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+0C90h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "FILM DIAGONAL = %.3f mm", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@43490000
        vmovss  dword ptr [rsp+330h+var_310], xmm0
        vmovaps xmm3, xmm11
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v236, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@43480000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v237, (const GfxColor)-1);
      __asm
      {
        vmovss  xmm0, dword ptr [r13+150h]
        vmulss  xmm1, xmm0, cs:__real@41cb332c
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "FOCAL LENGTH = %.3f mm", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@43530000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v238, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@43520000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v239, (const GfxColor)-1);
      __asm
      {
        vmovaps xmm0, xmm7; X
        vxorps  xmm8, xmm8, xmm8
      }
      *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@42e52ee0
        vaddss  xmm2, xmm1, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm2, xmm1, xmm2
        vroundss xmm3, xmm8, xmm2, 1
        vmovaps xmm0, xmm9; X
        vcvttss2si edi, xmm3
      }
      *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@42e52ee0
        vaddss  xmm3, xmm1, cs:__real@3f000000
        vxorps  xmm2, xmm2, xmm2
        vmovss  xmm0, xmm2, xmm3
        vroundss xmm1, xmm8, xmm0, 1
        vcvttss2si r9d, xmm1
      }
      LODWORD(v240) = _EDI;
      Com_sprintf(dest, 0x200ui64, "FOV (H/V) = %d/%d", _R9, v240);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@435d0000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v241, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@435c0000
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
        vmovaps xmm3, xmm14
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v242, (const GfxColor)-1);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+0C94h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "MIN FOCUS DISTANCE = %.3f in", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@43670000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v243, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@43660000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v244, (const GfxColor)-1);
      __asm
      {
        vcvtss2sd xmm3, xmm12, xmm12
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "MAX COC DIAMETER = %.3f px", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@43710000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v245, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@43700000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v246, (const GfxColor)-1);
      __asm
      {
        vmulss  xmm2, xmm10, cs:__real@3d21428b; sharpCoc
        vmovss  xmm1, dword ptr [r13+0C9Ch]; fstop
        vmovss  xmm0, dword ptr [r13+150h]; focalLength
      }
      *(double *)&_XMM0 = R_GetHyperfocalDistance(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "HYPERFOCAL DISTANCE = %.3f in", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@43828000
        vmovss  dword ptr [rsp+330h+var_310], xmm0
        vmovaps xmm3, xmm11
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v247, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@43820000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v248, (const GfxColor)-1);
      *(double *)&_XMM0 = R_DOF_GetPhysicalHipFstop();
      __asm
      {
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "HYPERFOCAL APERTURE = %.3f f-stops", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@43878000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v249, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@43870000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v250, (const GfxColor)-1);
      *(double *)&_XMM0 = R_DOF_GetPhysicalHipSharpCocDiameter();
      __asm
      {
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "HYPERFOCAL SHARP COC DIAMETER = %.3f mm", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@438c8000
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v251, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@438c0000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v252, (const GfxColor)-1);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  xmm0, cs:__real@439b8000
        vmovss  dword ptr [rsp+330h+var_310], xmm0
        vmovaps xmm3, xmm11
      }
      RB_DrawText(&v265, "FOV DEGREES AND PIXELS (PX) IN SCENE BUFFER UNITS (NOT VIRTUAL)", backEnd.debugFont, *(float *)&_XMM3, v253, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm1, cs:__real@439b0000
        vmovaps xmm3, xmm14
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, "FOV DEGREES AND PIXELS (PX) IN SCENE BUFFER UNITS (NOT VIRTUAL)", backEnd.debugFont, *(float *)&_XMM3, v254, (const GfxColor)-1);
      v168 = R_UsingDepthOfField(_R13);
      __asm { vmovaps xmm11, [rsp+330h+var_90] }
      if ( !v168 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups [rsp+330h+var_2F0], xmm0
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm0, xmm0, rdi
        }
        v26.packed = -8355712;
        __asm
        {
          vsubss  xmm3, xmm0, xmm13
          vcvtsi2ss xmm2, xmm2, r14
        }
        RB_DrawDepthOfFieldDebug_DrawText(&v265, "DOF DISABLED", *(float *)&_XMM2, *(float *)&_XMM3, (const GfxColor)-8355712);
      }
      *(double *)&_XMM0 = RB_DOF_GetDistance();
      __asm
      {
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x200ui64, "DISTANCE = %.3f in", *(double *)&_XMM3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm7, cs:__real@3f800000
        vmovups [rsp+330h+var_2F0], xmm0
        vxorps  xmm9, xmm9, xmm9
        vcvtsi2ss xmm9, xmm9, rax
        vxorps  xmm10, xmm10, xmm10
        vcvtsi2ss xmm10, xmm10, rax
        vsubss  xmm6, xmm9, xmm14
        vaddss  xmm0, xmm6, xmm7
        vaddss  xmm8, xmm10, xmm7
        vmovaps xmm3, xmm8
        vmovss  dword ptr [rsp+330h+var_310], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v255, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovaps xmm3, xmm10
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  dword ptr [rsp+330h+var_310], xmm6
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v256, v26);
      *(double *)&_XMM0 = RB_DOF_GetCircleOfConfusionClip();
      __asm { vcvtss2sd xmm6, xmm0, xmm0 }
      *(double *)&_XMM0 = RB_DOF_GetCircleOfConfusionClip();
      __asm
      {
        vminss  xmm1, xmm0, xmm12
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
        vmovsd  [rsp+330h+var_310], xmm6
      }
      Com_sprintf(dest, 0x200ui64, "COC DIAMETER (CLIP) = %.3f px (%.3f px)", *(double *)&_XMM3, v257);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vsubss  xmm6, xmm9, cs:__real@42b40000
        vaddss  xmm1, xmm6, xmm7
        vmovaps xmm3, xmm8
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v258, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovaps xmm3, xmm10
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  dword ptr [rsp+330h+var_310], xmm6
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v259, v26);
      *(double *)&_XMM0 = RB_DOF_GetCircleOfConfusionLinear();
      __asm { vcvtss2sd xmm6, xmm0, xmm0 }
      *(double *)&_XMM0 = RB_DOF_GetCircleOfConfusionLinear();
      __asm
      {
        vminss  xmm1, xmm0, xmm12
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
        vmovsd  [rsp+330h+var_310], xmm6
      }
      Com_sprintf(dest, 0x200ui64, "COC DIAMETER (LINEAR) = %.3f px (%.3f px)", *(double *)&_XMM3, v260);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vsubss  xmm6, xmm9, cs:__real@42a00000
        vaddss  xmm1, xmm6, xmm7
        vmovaps xmm3, xmm8
        vmovss  dword ptr [rsp+330h+var_310], xmm1
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v261, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovaps xmm3, xmm10
        vmovups [rsp+330h+var_2F0], xmm0
        vmovss  dword ptr [rsp+330h+var_310], xmm6
      }
      RB_DrawText(&v265, dest, backEnd.debugFont, *(float *)&_XMM3, v262, v26);
      __asm
      {
        vmovaps xmm14, [rsp+330h+var_C0]
        vmovaps xmm13, [rsp+330h+var_B0]
        vmovaps xmm12, [rsp+330h+var_A0]
        vmovaps xmm10, [rsp+330h+var_80]
        vmovaps xmm9, [rsp+330h+var_70]
        vmovaps xmm8, [rsp+330h+var_60]
        vmovaps xmm7, [rsp+330h+var_50]
        vmovaps xmm6, [rsp+330h+var_40]
      }
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm3, cs:__real@42ca0000
        vmovss  dword ptr [rsp+330h+var_310], xmm3
      }
      v266.packed = -8355712;
      __asm { vmovups [rsp+330h+var_2F0], xmm0 }
      RB_DrawText(&v265, "PHYSICAL DOF = OFF", backEnd.debugFont, *(float *)&_XMM3, v263, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovss  xmm3, cs:__real@42c80000
        vmovss  dword ptr [rsp+330h+var_310], xmm3
        vmovups [rsp+330h+var_2F0], xmm0
      }
      RB_DrawText(&v265, "PHYSICAL DOF = OFF", backEnd.debugFont, *(float *)&_XMM3, v264, v266);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+330h+var_2F0], xmm0
    }
    RB_EndSurfaceIfNeeded(&v265);
  }
}

/*
==============
RB_DrawDepthOfFieldDebug_DrawText
==============
*/

void __fastcall RB_DrawDepthOfFieldDebug_DrawText(GfxCmdBufContext *gfxContext, const char *text, double x, double y, const GfxColor color)
{
  GfxFont *debugFont; 
  float v20; 
  float v21; 
  GfxCmdBufContext v22[3]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vaddss  xmm4, xmm3, cs:__real@3f800000
  }
  debugFont = backEnd.debugFont;
  _RBX = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovups xmmword ptr [rax-38h], xmm0
    vmovaps xmm6, xmm3
    vaddss  xmm3, xmm2, cs:__real@3f800000
    vmovss  [rsp+68h+var_48], xmm4
    vmovaps xmm7, xmm2
  }
  RB_DrawText(v22, text, debugFont, *(float *)&_XMM3, v20, (const GfxColor)-16777216);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovaps xmm3, xmm7
    vmovss  [rsp+68h+var_48], xmm6
    vmovups [rsp+68h+var_38], xmm0
  }
  RB_DrawText(v22, text, backEnd.debugFont, *(float *)&_XMM3, v21, color);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
RB_DrawPolyInteriors
==============
*/
void RB_DrawPolyInteriors(GfxCmdBufContext *gfxContext, vec3_t *polyVerts, unsigned int polyVertCount, trDebugPoly_t *polys, unsigned int polyCount)
{
  GfxCmdBufSourceState *source; 
  trDebugPoly_t *v11; 
  vec3_t *v12; 
  int v13; 
  int v14; 
  bool *p_drawDepthTest; 
  __int64 v16; 
  bool v17; 
  int v18; 
  materialCommands_t *Tess; 
  bool *v25; 
  unsigned __int8 v34; 
  unsigned __int8 v39; 
  unsigned __int8 v44; 
  unsigned __int8 v47; 
  unsigned int v48; 
  materialCommands_t *v49; 
  materialCommands_t *v50; 
  unsigned int v51; 
  signed int vertexCount; 
  vec3_t *v53; 
  materialCommands_t *v54; 
  float v55; 
  __int64 v56; 
  GfxVertex *verts; 
  __int64 v58; 
  materialCommands_t *v59; 
  __int64 v60; 
  GfxVertex *v61; 
  __int64 v62; 
  materialCommands_t *v63; 
  __int64 v64; 
  GfxVertex *v65; 
  unsigned int *p_firstVert; 
  unsigned __int8 v78; 
  unsigned __int8 v83; 
  unsigned __int8 v88; 
  unsigned __int8 v91; 
  unsigned int v92; 
  materialCommands_t *v93; 
  materialCommands_t *v94; 
  unsigned int v95; 
  signed int v96; 
  vec3_t *v97; 
  materialCommands_t *v98; 
  float v99; 
  __int64 v100; 
  GfxVertex *v101; 
  __int64 v102; 
  materialCommands_t *v103; 
  __int64 v104; 
  GfxVertex *v105; 
  __int64 v106; 
  materialCommands_t *v107; 
  __int64 v108; 
  GfxVertex *v109; 
  bool *v113; 
  __int64 v117; 
  vec3_t *v120; 
  unsigned __int8 v124; 
  unsigned __int8 v129; 
  unsigned __int8 v134; 
  unsigned __int8 v137; 
  unsigned int v138; 
  materialCommands_t *v139; 
  materialCommands_t *v140; 
  unsigned int v141; 
  signed int v142; 
  materialCommands_t *v145; 
  __int64 v146; 
  GfxVertex *v147; 
  __int64 v148; 
  materialCommands_t *v151; 
  __int64 v152; 
  GfxVertex *v153; 
  __int64 v154; 
  materialCommands_t *v157; 
  __int64 v158; 
  GfxVertex *v159; 
  __int64 v165; 
  GfxColor v166; 
  GfxColor v167; 
  GfxColor v168; 
  int v169; 
  int v170; 
  vec3_t *v171; 
  vec3_t *v172; 
  GfxCmdBufContext v173; 
  GfxCmdBufContext v174[2]; 
  char v176; 
  void *retaddr; 

  _RAX = &retaddr;
  source = (GfxCmdBufSourceState *)polyCount;
  _R13 = gfxContext;
  __asm { vmovaps xmmword ptr [rax-58h], xmm7 }
  v11 = polys;
  __asm { vmovaps xmmword ptr [rax-68h], xmm8 }
  v12 = polyVerts;
  if ( !polyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp", 81, ASSERT_TYPE_ASSERT, "(polyCount > 0)", (const char *)&queryFormat, "polyCount > 0") )
    __debugbreak();
  v13 = 0;
  v14 = 0;
  v170 = 0;
  v169 = 0;
  if ( polyCount )
  {
    p_drawDepthTest = &v11->drawDepthTest;
    v16 = polyCount;
    do
    {
      v17 = *p_drawDepthTest;
      v18 = *(p_drawDepthTest - 1) && !v17;
      v13 += v18;
      p_drawDepthTest += 28;
      v14 += v17;
      --v16;
    }
    while ( v16 );
    v170 = v13;
    v169 = v14;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0]
    vmovaps xmmword ptr [rsp+0D0h+var_48+8], xmm6
    vmovups [rbp+4Fh+var_80], xmm0
    vmovss  xmm7, cs:__real@437f0000
    vmovss  xmm8, cs:__real@3f000000
  }
  Tess = R_GetTess(&v173);
  if ( polyCount - v14 != v13 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups [rbp+4Fh+var_80], xmm0
    }
    RB_BeginSurface(&v173, rgp.whiteCullMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG, 1);
    if ( polyCount )
    {
      v25 = &v11->drawDepthTest;
      v173.source = (GfxCmdBufSourceState *)polyCount;
      do
      {
        if ( !*(v25 - 1) && !*v25 )
        {
          __asm
          {
            vmulss  xmm1, xmm7, dword ptr [r15-1Ah]
            vmovups xmm6, xmmword ptr [r13+0]
            vaddss  xmm3, xmm1, xmm8
          }
          v171 = &v12[*(unsigned int *)(v25 - 10)];
          __asm
          {
            vxorps  xmm4, xmm4, xmm4
            vroundss xmm1, xmm4, xmm3, 1
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm7, dword ptr [r15-16h]
            vaddss  xmm3, xmm1, xmm8
          }
          if ( _ECX > 255 )
            _ECX = 255;
          v34 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v34 = 0;
          __asm
          {
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm7, dword ptr [r15-12h]
          }
          v166.array[0] = v34;
          __asm { vaddss  xmm3, xmm1, xmm8 }
          if ( _ECX > 255 )
            _ECX = 255;
          v39 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v39 = 0;
          __asm
          {
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm7, dword ptr [r15-0Eh]
          }
          v166.array[1] = v39;
          __asm { vaddss  xmm3, xmm1, xmm8 }
          if ( _ECX > 255 )
            _ECX = 255;
          v44 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v44 = 0;
          __asm { vcvttss2si ecx, xmm1 }
          v166.array[2] = v44;
          __asm { vmovups [rbp+4Fh+var_70], xmm6 }
          if ( _ECX > 255 )
            _ECX = 255;
          v47 = _ECX;
          if ( _ECX < 0 )
            v47 = 0;
          v166.array[3] = v47;
          v48 = 3 * *(_DWORD *)(v25 - 6) - 6;
          v49 = R_GetTess(v174);
          if ( v48 > v49->maxVertices )
          {
            LODWORD(v165) = v48;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v165) )
              __debugbreak();
          }
          if ( v48 > v49->maxIndices )
          {
            LODWORD(v165) = v48;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v165) )
              __debugbreak();
          }
          __asm { vmovdqa [rbp+4Fh+var_70], xmm6 }
          v50 = R_GetTess(v174);
          if ( v50->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * (v48 + v50->vertexCount) < v48 + v50->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
            __debugbreak();
          if ( v48 + v49->vertexCount > v49->maxVertices || v48 + v49->indexCount > v49->maxIndices )
          {
            __asm { vmovdqa [rbp+4Fh+var_70], xmm6 }
            RB_TessOverflowInternal(v174, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
          }
          v51 = 2;
          if ( *(_DWORD *)(v25 - 6) > 2u )
          {
            vertexCount = Tess->vertexCount;
            v53 = v171;
            do
            {
              __asm { vmovups [rbp+4Fh+var_70], xmm6 }
              v54 = R_GetTess(v174);
              v55 = v53->v[0];
              v56 = vertexCount;
              verts = v54->verts;
              __asm { vmovups [rbp+4Fh+var_70], xmm6 }
              verts[v56].xyzw.v[0] = v55;
              verts[v56].xyzw.v[1] = v53->v[1];
              verts[v56].xyzw.v[2] = v53->v[2];
              verts[v56].xyzw.v[3] = 1.0;
              verts[v56].normal.packed = 1073643391;
              v54->verts[v56].color = v166;
              v54->verts[v56].texCoord = 0i64;
              v58 = (int)Tess->vertexCount;
              v59 = R_GetTess(v174);
              v60 = v58 + 1;
              __asm { vmovups [rbp+4Fh+var_70], xmm6 }
              v61 = v59->verts;
              v61[v60].xyzw.v[0] = v171[v51].v[0];
              v61[v60].xyzw.v[1] = v171[v51].v[1];
              v61[v60].xyzw.v[2] = v171[v51].v[2];
              v61[v60].xyzw.v[3] = 1.0;
              v61[v60].normal.packed = 1073643391;
              v59->verts[v60].color = v166;
              v59->verts[v60].texCoord = 0i64;
              v62 = (int)Tess->vertexCount;
              v63 = R_GetTess(v174);
              v64 = v62 + 2;
              v53 = v171;
              v64 *= 32i64;
              v65 = v63->verts;
              *(float *)((char *)v65->xyzw.v + v64) = v171[v51 - 1].v[0];
              *(float *)((char *)&v65->xyzw.v[1] + v64) = v171[v51 - 1].v[1];
              *(float *)((char *)&v65->xyzw.v[2] + v64) = v171[v51 - 1].v[2];
              *(float *)((char *)&v65->xyzw.v[3] + v64) = 1.0;
              *(unsigned int *)((char *)&v65->normal.packed + v64) = 1073643391;
              *(GfxColor *)((char *)&v63->verts->color + v64) = v166;
              *(vec2_t *)((char *)&v63->verts->texCoord + v64) = 0i64;
              Tess->indices[Tess->indexCount] = Tess->vertexCount;
              Tess->indices[Tess->indexCount + 1] = LOWORD(Tess->vertexCount) + 1;
              ++v51;
              Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
              Tess->vertexCount += 3;
              Tess->indexCount += 3;
              vertexCount = Tess->vertexCount;
            }
            while ( v51 < *(_DWORD *)(v25 - 6) );
            source = v173.source;
          }
          v12 = polyVerts;
        }
        v25 += 28;
        source = (GfxCmdBufSourceState *)((char *)source - 1);
        v173.source = source;
      }
      while ( source );
      v14 = v169;
      source = (GfxCmdBufSourceState *)polyCount;
      v11 = polys;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups [rbp+4Fh+var_70], xmm0
    }
    RB_EndTessSurfaceInternal(v174, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp(121)");
  }
  if ( v14 > 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups [rbp+4Fh+var_70], xmm0
    }
    RB_BeginSurface(v174, rgp.whiteDepthtestMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG, 1);
    if ( (_DWORD)source )
    {
      p_firstVert = &v11->firstVert;
      v173.source = source;
      do
      {
        if ( *((_BYTE *)p_firstVert + 10) )
        {
          __asm
          {
            vmulss  xmm1, xmm7, dword ptr [r15-10h]
            vmovups xmm6, xmmword ptr [r13+0]
            vaddss  xmm3, xmm1, xmm8
          }
          v172 = &v12[*p_firstVert];
          __asm
          {
            vxorps  xmm4, xmm4, xmm4
            vroundss xmm1, xmm4, xmm3, 1
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm7, dword ptr [r15-0Ch]
            vaddss  xmm3, xmm1, xmm8
          }
          if ( _ECX > 255 )
            _ECX = 255;
          v78 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v78 = 0;
          __asm
          {
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm7, dword ptr [r15-8]
          }
          v167.array[0] = v78;
          __asm { vaddss  xmm3, xmm1, xmm8 }
          if ( _ECX > 255 )
            _ECX = 255;
          v83 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v83 = 0;
          __asm
          {
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm7, dword ptr [r15-4]
          }
          v167.array[1] = v83;
          __asm { vaddss  xmm3, xmm1, xmm8 }
          if ( _ECX > 255 )
            _ECX = 255;
          v88 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v88 = 0;
          __asm { vcvttss2si ecx, xmm1 }
          v167.array[2] = v88;
          __asm { vmovups [rbp+4Fh+var_70], xmm6 }
          if ( _ECX > 255 )
            _ECX = 255;
          v91 = _ECX;
          if ( _ECX < 0 )
            v91 = 0;
          v167.array[3] = v91;
          v92 = 3 * p_firstVert[1] - 6;
          v93 = R_GetTess(v174);
          if ( v92 > v93->maxVertices )
          {
            LODWORD(v165) = v92;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v165) )
              __debugbreak();
          }
          if ( v92 > v93->maxIndices )
          {
            LODWORD(v165) = v92;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v165) )
              __debugbreak();
          }
          __asm { vmovdqa [rbp+4Fh+var_70], xmm6 }
          v94 = R_GetTess(v174);
          if ( v94->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * (v92 + v94->vertexCount) < v92 + v94->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
            __debugbreak();
          if ( v92 + v93->vertexCount > v93->maxVertices || v92 + v93->indexCount > v93->maxIndices )
          {
            __asm { vmovdqa [rbp+4Fh+var_70], xmm6 }
            RB_TessOverflowInternal(v174, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
          }
          v95 = 2;
          if ( p_firstVert[1] > 2 )
          {
            v96 = Tess->vertexCount;
            v97 = v172;
            do
            {
              __asm { vmovups [rbp+4Fh+var_70], xmm6 }
              v98 = R_GetTess(v174);
              v99 = v97->v[0];
              v100 = v96;
              v101 = v98->verts;
              __asm { vmovups [rbp+4Fh+var_70], xmm6 }
              v101[v100].xyzw.v[0] = v99;
              v101[v100].xyzw.v[1] = v97->v[1];
              v101[v100].xyzw.v[2] = v97->v[2];
              v101[v100].xyzw.v[3] = 1.0;
              v101[v100].normal.packed = 1073643391;
              v98->verts[v100].color = v167;
              v98->verts[v100].texCoord = 0i64;
              v102 = (int)Tess->vertexCount;
              v103 = R_GetTess(v174);
              v104 = v102 + 1;
              __asm { vmovups [rbp+4Fh+var_70], xmm6 }
              v105 = v103->verts;
              v105[v104].xyzw.v[0] = v172[v95].v[0];
              v105[v104].xyzw.v[1] = v172[v95].v[1];
              v105[v104].xyzw.v[2] = v172[v95].v[2];
              v105[v104].xyzw.v[3] = 1.0;
              v105[v104].normal.packed = 1073643391;
              v103->verts[v104].color = v167;
              v103->verts[v104].texCoord = 0i64;
              v106 = (int)Tess->vertexCount;
              v107 = R_GetTess(v174);
              v108 = v106 + 2;
              v97 = v172;
              v108 *= 32i64;
              v109 = v107->verts;
              *(float *)((char *)v109->xyzw.v + v108) = v172[v95 - 1].v[0];
              *(float *)((char *)&v109->xyzw.v[1] + v108) = v172[v95 - 1].v[1];
              *(float *)((char *)&v109->xyzw.v[2] + v108) = v172[v95 - 1].v[2];
              *(float *)((char *)&v109->xyzw.v[3] + v108) = 1.0;
              *(unsigned int *)((char *)&v109->normal.packed + v108) = 1073643391;
              *(GfxColor *)((char *)&v107->verts->color + v108) = v167;
              *(vec2_t *)((char *)&v107->verts->texCoord + v108) = 0i64;
              Tess->indices[Tess->indexCount] = Tess->vertexCount;
              Tess->indices[Tess->indexCount + 1] = LOWORD(Tess->vertexCount) + 1;
              ++v95;
              Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
              Tess->vertexCount += 3;
              Tess->indexCount += 3;
              v96 = Tess->vertexCount;
            }
            while ( v95 < p_firstVert[1] );
            source = v173.source;
          }
        }
        v12 = polyVerts;
        p_firstVert += 7;
        source = (GfxCmdBufSourceState *)((char *)source - 1);
        v173.source = source;
      }
      while ( source );
      source = (GfxCmdBufSourceState *)polyCount;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups [rbp+4Fh+var_70], xmm0
    }
    RB_EndTessSurfaceInternal(v174, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp(152)");
  }
  if ( v170 > 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups [rbp+4Fh+var_70], xmm0
    }
    RB_BeginSurface(v174, rgp.whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG, 1);
    if ( (_DWORD)source )
    {
      v113 = &polys->drawDepthTest;
      v173.source = source;
      do
      {
        if ( *(v113 - 1) && !*v113 )
        {
          __asm
          {
            vmulss  xmm1, xmm7, dword ptr [r15-1Ah]
            vmovups xmm6, xmmword ptr [r13+0]
            vaddss  xmm3, xmm1, xmm8
          }
          v117 = *(unsigned int *)(v113 - 10);
          __asm
          {
            vxorps  xmm4, xmm4, xmm4
            vroundss xmm1, xmm4, xmm3, 1
            vmovups [rbp+4Fh+var_70], xmm6
          }
          v120 = &polyVerts[v117];
          __asm
          {
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm7, dword ptr [r15-16h]
            vaddss  xmm3, xmm1, xmm8
          }
          if ( _ECX > 255 )
            _ECX = 255;
          v124 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v124 = 0;
          __asm
          {
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm7, dword ptr [r15-12h]
          }
          v168.array[0] = v124;
          __asm { vaddss  xmm3, xmm1, xmm8 }
          if ( _ECX > 255 )
            _ECX = 255;
          v129 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v129 = 0;
          __asm
          {
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm7, dword ptr [r15-0Eh]
          }
          v168.array[1] = v129;
          __asm { vaddss  xmm3, xmm1, xmm8 }
          if ( _ECX > 255 )
            _ECX = 255;
          v134 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v134 = 0;
          __asm { vcvttss2si ecx, xmm1 }
          v168.array[2] = v134;
          if ( _ECX > 255 )
            _ECX = 255;
          v137 = _ECX;
          if ( _ECX < 0 )
            v137 = 0;
          v168.array[3] = v137;
          v138 = 3 * *(_DWORD *)(v113 - 6) - 6;
          v139 = R_GetTess(v174);
          if ( v138 > v139->maxVertices )
          {
            LODWORD(v165) = v138;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v165) )
              __debugbreak();
          }
          if ( v138 > v139->maxIndices )
          {
            LODWORD(v165) = v138;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v165) )
              __debugbreak();
          }
          __asm { vmovdqa [rbp+4Fh+var_70], xmm6 }
          v140 = R_GetTess(v174);
          if ( v140->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * (v138 + v140->vertexCount) < v138 + v140->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
            __debugbreak();
          if ( v138 + v139->vertexCount > v139->maxVertices || v138 + v139->indexCount > v139->maxIndices )
          {
            __asm { vmovdqa [rbp+4Fh+var_70], xmm6 }
            RB_TessOverflowInternal(v174, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
          }
          v141 = 2;
          if ( *(_DWORD *)(v113 - 6) > 2u )
          {
            v142 = Tess->vertexCount;
            do
            {
              _RAX = gfxContext;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax]
                vmovups [rbp+4Fh+var_70], xmm0
              }
              v145 = R_GetTess(v174);
              v146 = v142;
              v147 = v145->verts;
              v147[v146].xyzw.v[0] = v120->v[0];
              v147[v146].xyzw.v[1] = v120->v[1];
              v147[v146].xyzw.v[2] = v120->v[2];
              v147[v146].xyzw.v[3] = 1.0;
              v147[v146].normal.packed = 1073643391;
              v145->verts[v146].color = v168;
              v145->verts[v146].texCoord = 0i64;
              v148 = (int)Tess->vertexCount;
              _RAX = gfxContext;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax]
                vmovups [rbp+4Fh+var_70], xmm0
              }
              v151 = R_GetTess(v174);
              v152 = v148 + 1;
              v153 = v151->verts;
              v153[v152].xyzw.v[0] = v120[v141].v[0];
              v153[v152].xyzw.v[1] = v120[v141].v[1];
              v153[v152].xyzw.v[2] = v120[v141].v[2];
              v153[v152].xyzw.v[3] = 1.0;
              v153[v152].normal.packed = 1073643391;
              v151->verts[v152].color = v168;
              v151->verts[v152].texCoord = 0i64;
              v154 = (int)Tess->vertexCount;
              _RAX = gfxContext;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax]
                vmovups [rbp+4Fh+var_70], xmm0
              }
              v157 = R_GetTess(v174);
              v158 = v154 + 2;
              v159 = v157->verts;
              v159[v158].xyzw.v[0] = v120[v141 - 1].v[0];
              v159[v158].xyzw.v[1] = v120[v141 - 1].v[1];
              v159[v158].xyzw.v[2] = v120[v141 - 1].v[2];
              v159[v158].xyzw.v[3] = 1.0;
              v159[v158].normal.packed = 1073643391;
              v157->verts[v158].color = v168;
              v157->verts[v158].texCoord = 0i64;
              Tess->indices[Tess->indexCount] = Tess->vertexCount;
              Tess->indices[Tess->indexCount + 1] = LOWORD(Tess->vertexCount) + 1;
              ++v141;
              Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
              Tess->vertexCount += 3;
              Tess->indexCount += 3;
              v142 = Tess->vertexCount;
            }
            while ( v141 < *(_DWORD *)(v113 - 6) );
            source = v173.source;
          }
          _R13 = gfxContext;
        }
        v113 += 28;
        source = (GfxCmdBufSourceState *)((char *)source - 1);
        v173.source = source;
      }
      while ( source );
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups [rbp+4Fh+var_70], xmm0
    }
    RB_EndTessSurfaceInternal(v174, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp(183)");
  }
  __asm { vmovaps xmm6, xmmword ptr [rsp+0D0h+var_48+8] }
  _R11 = &v176;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
RB_DrawPolyOutlines
==============
*/
void RB_DrawPolyOutlines(GfxCmdBufContext *gfxContext, vec3_t *inPolyVerts, unsigned int polyVertCount, trDebugPoly_t *polys, unsigned int polyCount, GfxPointVertex *verts)
{
  int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int *p_firstVert; 
  unsigned int v17; 
  vec3_t *v20; 
  char v25; 
  char v30; 
  char v35; 
  char v38; 
  unsigned int v39; 
  unsigned int v40; 
  __int64 v41; 
  __int64 v43; 
  __int64 v44; 
  GfxCmdBufContext v48; 
  __int64 v51; 
  vec3_t *v52; 
  int v53; 

  v52 = inPolyVerts;
  _R12 = gfxContext;
  if ( !polyCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp", 198, ASSERT_TYPE_ASSERT, "(polyCount > 0)", (const char *)&queryFormat, "polyCount > 0") )
      __debugbreak();
    inPolyVerts = v52;
  }
  v11 = 0;
  if ( polyCount )
  {
    v12 = polyCount;
    v13 = 0i64;
    p_firstVert = &polys->firstVert;
    __asm
    {
      vmovaps [rsp+98h+var_48], xmm6
      vmovss  xmm6, cs:__real@437f0000
      vmovaps [rsp+98h+var_58], xmm7
      vmovss  xmm7, cs:__real@3f000000
    }
    v51 = polyCount;
    do
    {
      if ( *((_BYTE *)p_firstVert + 8) )
      {
        v17 = 0;
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [r13-10h]
          vaddss  xmm3, xmm1, xmm7
          vxorps  xmm4, xmm4, xmm4
        }
        v20 = &inPolyVerts[*p_firstVert];
        __asm
        {
          vroundss xmm1, xmm4, xmm3, 1
          vcvttss2si ecx, xmm1
          vmulss  xmm1, xmm6, dword ptr [r13-0Ch]
          vaddss  xmm3, xmm1, xmm7
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v25 = _ECX;
        __asm { vroundss xmm1, xmm4, xmm3, 1 }
        if ( _ECX < 0 )
          v25 = 0;
        LOBYTE(v53) = v25;
        __asm
        {
          vcvttss2si ecx, xmm1
          vmulss  xmm1, xmm6, dword ptr [r13-8]
          vaddss  xmm3, xmm1, xmm7
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v30 = _ECX;
        __asm { vroundss xmm1, xmm4, xmm3, 1 }
        if ( _ECX < 0 )
          v30 = 0;
        BYTE1(v53) = v30;
        __asm
        {
          vcvttss2si ecx, xmm1
          vmulss  xmm1, xmm6, dword ptr [r13-4]
          vaddss  xmm3, xmm1, xmm7
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v35 = _ECX;
        __asm { vroundss xmm1, xmm4, xmm3, 1 }
        if ( _ECX < 0 )
          v35 = 0;
        BYTE2(v53) = v35;
        __asm { vcvttss2si ecx, xmm1 }
        if ( _ECX > 255 )
          _ECX = 255;
        v38 = _ECX;
        if ( _ECX < 0 )
          v38 = 0;
        HIBYTE(v53) = v38;
        v39 = p_firstVert[1];
        v40 = v39 - 1;
        if ( v39 )
        {
          do
          {
            v41 = v40;
            if ( v11 + 2 > 0x7FFF )
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [r12]
                vmovups [rsp+98h+var_68], xmm0
              }
              RB_DrawLines3D(&v48, v11 / 2, 1, verts, 0);
              v11 = 0;
              v13 = 0i64;
            }
            v43 = v13 + 1;
            v44 = v13;
            v11 += 2;
            v13 += 2i64;
            *(_DWORD *)verts[v43].color = v53;
            *(_DWORD *)verts[v44].color = v53;
            verts[v44].xyz.v[0] = v20[v41].v[0];
            verts[v44].xyz.v[1] = v20[v41].v[1];
            verts[v44].xyz.v[2] = v20[v41].v[2];
            verts[v43].xyz.v[0] = v20[v17].v[0];
            verts[v43].xyz.v[1] = v20[v17].v[1];
            verts[v43].xyz.v[2] = v20[v17].v[2];
            v40 = v17++;
          }
          while ( v17 < p_firstVert[1] );
          v12 = v51;
        }
      }
      inPolyVerts = v52;
      p_firstVert += 7;
      v51 = --v12;
    }
    while ( v12 );
    __asm
    {
      vmovaps xmm7, [rsp+98h+var_58]
      vmovaps xmm6, [rsp+98h+var_48]
    }
  }
  if ( v11 / 2 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups [rsp+98h+var_68], xmm0
    }
    RB_DrawLines3D(&v48, v11 / 2, 1, verts, 0);
  }
}

/*
==============
RB_EndDebugLines
==============
*/
__int64 RB_EndDebugLines(GfxCmdBufContext *gfxContext, bool depthTest, int vertCount, const GfxPointVertex *verts)
{
  GfxCmdBufContext v6; 

  if ( vertCount )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
    }
    RB_DrawLines3D(&v6, vertCount, 1, verts, depthTest);
  }
  return 0i64;
}

/*
==============
RB_NeedDrawDebug
==============
*/
bool RB_NeedDrawDebug()
{
  return backEndData->debugGlobals.plumeCount || backEndData->debugGlobals.polyCount || backEndData->debugGlobals.externPolyCount || backEndData->debugGlobals.lineCount || backEndData->debugGlobals.externLineCount || backEndData->debugGlobals.stringCount || backEndData->debugGlobals.externStringCount || r_dof_physical_distanceMeter->current.enabled;
}

/*
==============
RB_SetPolyVert
==============
*/
void RB_SetPolyVert(GfxCmdBufContext *gfxContext, const vec3_t *xyz, GfxColor color, int tessVertIndex)
{
  __int64 v5; 
  materialCommands_t *Tess; 
  __int64 v9; 
  GfxVertex *verts; 
  GfxCmdBufContext v11; 

  __asm { vmovups xmm0, xmmword ptr [rcx] }
  v5 = tessVertIndex;
  __asm { vmovups xmmword ptr [rsp+38h+var_18.source], xmm0 }
  Tess = R_GetTess(&v11);
  v9 = v5;
  verts = Tess->verts;
  verts[v9].xyzw.xyz = *xyz;
  verts[v9].xyzw.v[3] = 1.0;
  verts[v9].normal.packed = 1073643391;
  Tess->verts[v9].color = color;
  Tess->verts[v9].texCoord = 0i64;
}

