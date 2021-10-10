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
  __int64 v12; 
  __int64 v13; 
  GfxCmdBufContext v15; 

  v8 = vertCount;
  if ( vertCount + 2 > vertLimit )
  {
    v15 = *gfxContext;
    RB_DrawLines3D(&v15, vertCount / 2, 1, verts, depthTest);
    v8 = 0;
  }
  v12 = v8;
  v13 = v8 + 1i64;
  *(GfxColor *)verts[v12].color = color;
  *(GfxColor *)verts[v13].color = color;
  verts[v12].xyz.v[0] = start->v[0];
  verts[v12].xyz.v[1] = start->v[1];
  verts[v12].xyz.v[2] = start->v[2];
  verts[v13].xyz.v[0] = end->v[0];
  verts[v13].xyz.v[1] = end->v[1];
  verts[v13].xyz.v[2] = end->v[2];
  return (unsigned int)(v8 + 2);
}

/*
==============
RB_DrawDebug
==============
*/
void RB_DrawDebug(GfxCmdBufContext *gfxContext, const GfxViewParms *viewParms, const GfxViewInfo *viewInfo)
{
  const GfxViewInfo *v3; 
  const GfxBackEndData *v6; 
  int v7; 
  GfxCmdBufSourceState *v8; 
  __int64 v9; 
  GfxDebugPlume *plumes; 
  int v11; 
  GfxDebugPlume *v12; 
  float v13; 
  float v14; 
  int duration; 
  float v16; 
  float v17; 
  float v18; 
  const char *v19; 
  const GfxBackEndData *v20; 
  unsigned int polyCount; 
  trDebugPoly_t *polys; 
  unsigned int vertCount; 
  vec3_t *verts; 
  unsigned int externPolyCount; 
  trDebugPoly_t *externPolys; 
  unsigned int externVertCount; 
  vec3_t *externVerts; 
  GfxCmdBufContext sourcea; 
  GfxCmdBufContext sourceb; 
  GfxCmdBufContext v32; 

  v3 = viewInfo;
  if ( !viewParms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp", 494, ASSERT_TYPE_ASSERT, "(viewParms)", (const char *)&queryFormat, "viewParms") )
    __debugbreak();
  v32 = *gfxContext;
  RB_SetUIColorimetryParams(&v32);
  v6 = backEndData;
  v7 = 0;
  v32 = *gfxContext;
  if ( backEndData->debugGlobals.plumeCount > 0 )
  {
    v8 = v32.source;
    v9 = 0i64;
    do
    {
      plumes = v6->debugGlobals.plumes;
      v11 = v8->sceneDef.time - plumes[v9].startTime;
      if ( v11 >= 0 && v11 <= plumes[v9].duration )
      {
        plumes[v9].color.v[3] = 1.0;
        v12 = v6->debugGlobals.plumes;
        v14 = (float)v11;
        v13 = v14;
        duration = v12[v9].duration;
        if ( 2 * v11 > duration )
        {
          v12[v9].color.v[3] = 2.0 - (float)((float)(v14 * 2.0) / (float)duration);
          v12 = v6->debugGlobals.plumes;
        }
        v16 = sinf_0((float)(v14 * 0.012566371) + (float)v7) * 4.0;
        v17 = v16 * viewParms->camera.axis.m[1].v[1];
        *(float *)&v32.source = (float)(v16 * viewParms->camera.axis.m[1].v[0]) + v12[v9].origin.v[0];
        v18 = v16 * viewParms->camera.axis.m[1].v[2];
        *((float *)&v32.source + 1) = v17 + v12[v9].origin.v[1];
        *(float *)&v32.state = (float)(v18 + v12[v9].origin.v[2]) + (float)(v13 * 0.064000003);
        v19 = j_va("%i", (unsigned int)v6->debugGlobals.plumes[v9].score);
        R_AddDebugString(&backEndData->debugGlobals, (const vec3_t *)&v32, &backEndData->debugGlobals.plumes[v7].color, 8.0, v19);
        v6 = backEndData;
      }
      ++v7;
      ++v9;
    }
    while ( v7 < v6->debugGlobals.plumeCount );
    v3 = viewInfo;
  }
  CG_Edge_FlushDebugPolys(&v6->debugGlobals);
  v20 = backEndData;
  sourcea = *gfxContext;
  polyCount = backEndData->debugGlobals.polyCount;
  polys = backEndData->debugGlobals.polys;
  vertCount = backEndData->debugGlobals.vertCount;
  verts = backEndData->debugGlobals.verts;
  if ( polyCount )
  {
    v32 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v32);
    R_Set3D(sourcea.source);
    v32 = *gfxContext;
    RB_DrawPolyInteriors(&v32, verts, vertCount, polys, polyCount);
    v32 = *gfxContext;
    RB_DrawPolyOutlines(&v32, verts, vertCount, polys, polyCount, g_debugPolyVerts);
    v20 = backEndData;
  }
  externPolyCount = v20->debugGlobals.externPolyCount;
  externPolys = v20->debugGlobals.externPolys;
  externVertCount = v20->debugGlobals.externVertCount;
  externVerts = v20->debugGlobals.externVerts;
  sourceb = *gfxContext;
  if ( externPolyCount )
  {
    v32 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v32);
    R_Set3D(sourceb.source);
    v32 = *gfxContext;
    RB_DrawPolyInteriors(&v32, externVerts, externVertCount, externPolys, externPolyCount);
    v32 = *gfxContext;
    RB_DrawPolyOutlines(&v32, externVerts, externVertCount, externPolys, externPolyCount, g_debugExternPolyVerts);
  }
  v32 = *gfxContext;
  Physics_RenderDebug(&v32);
  v32 = *gfxContext;
  RB_DrawDebugLines(&v32, backEndData->debugGlobals.lines, backEndData->debugGlobals.lineCount, g_debugLineVerts);
  v32 = *gfxContext;
  RB_DrawDebugLines(&v32, backEndData->debugGlobals.externLines, backEndData->debugGlobals.externLineCount, g_debugExternLineVerts);
  v32 = *gfxContext;
  RB_DrawDebugStrings(&v32, backEndData->debugGlobals.strings, backEndData->debugGlobals.stringCount);
  v32 = *gfxContext;
  RB_DrawDebugStrings(&v32, backEndData->debugGlobals.externStrings, backEndData->debugGlobals.externStringCount);
  v32 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v32);
  v32 = *gfxContext;
  RB_DrawDepthOfFieldDebug(&v32, viewParms, v3);
  v32 = *gfxContext;
  RB_Stream_TreeDebugDraw(&v32, v3);
  v32 = *gfxContext;
  RB_Stream_XModelTreeDebugDraw(&v32, v3);
}

/*
==============
RB_DrawDebugLines
==============
*/
void RB_DrawDebugLines(GfxCmdBufContext *gfxContext, trDebugLine_t *lines, int lineCount, GfxPointVertex *verts)
{
  __int64 v5; 
  __int64 v8; 
  unsigned __int8 v9; 
  int v10; 
  __int64 v11; 
  float *v12; 
  unsigned __int8 v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  float v17; 
  GfxCmdBufContext v18[2]; 

  if ( lineCount )
  {
    v5 = lineCount;
    v18[0] = *gfxContext;
    RB_EndSurfaceIfNeeded(v18);
    R_Set3D(gfxContext->source);
    v8 = v5;
    v9 = lines->depthTest != 0;
    v10 = 0;
    if ( (int)v5 > 0 )
    {
      v11 = 0i64;
      v12 = &lines->end.v[2];
      do
      {
        v13 = *((_DWORD *)v12 + 2) != 0;
        if ( v9 != v13 )
        {
          if ( v10 / 2 )
          {
            v18[0] = *gfxContext;
            RB_DrawLines3D(v18, v10 / 2, 1, verts, v9);
          }
          v10 = 0;
          v9 = v13;
          v11 = 0i64;
        }
        v14 = *((_DWORD *)v12 + 1);
        if ( v10 + 2 > 0x7FFF )
        {
          v18[0] = *gfxContext;
          RB_DrawLines3D(v18, v10 / 2, 1, verts, v9);
          v10 = 0;
          v11 = 0i64;
        }
        v15 = v11;
        v16 = v11 + 1;
        v10 += 2;
        v11 += 2i64;
        *(_DWORD *)verts[v15].color = v14;
        *(_DWORD *)verts[v16].color = v14;
        verts[v15].xyz.v[0] = *(v12 - 5);
        verts[v15].xyz.v[1] = *(v12 - 4);
        verts[v15].xyz.v[2] = *(v12 - 3);
        verts[v16].xyz.v[0] = *(v12 - 2);
        verts[v16].xyz.v[1] = *(v12 - 1);
        v17 = *v12;
        v12 += 8;
        verts[v16].xyz.v[2] = v17;
        --v8;
      }
      while ( v8 );
    }
    if ( v10 / 2 )
    {
      v18[0] = *gfxContext;
      RB_DrawLines3D(v18, v10 / 2, 1, verts, v9);
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
  GfxCmdBufContext v10; 

  if ( polyCount )
  {
    v10 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v10);
    R_Set3D(gfxContext->source);
    v10 = *gfxContext;
    RB_DrawPolyInteriors(&v10, polyVerts, polyVertCount, polys, polyCount);
    v10 = *gfxContext;
    RB_DrawPolyOutlines(&v10, polyVerts, polyVertCount, polys, polyCount, verts);
  }
}

/*
==============
RB_DrawDebugStrings
==============
*/
void RB_DrawDebugStrings(GfxCmdBufContext *gfxContext, trDebugString_t *strings, int stringCount)
{
  __int64 v5; 
  GfxCmdBufSourceState *source; 
  int v7; 
  __int64 v8; 
  int v9; 
  GfxColor *p_color; 
  __int64 v11; 
  float v12; 
  float v13; 
  GfxFont *v14; 
  std::_Ref_fn<<lambda_b2c6cc94deacc1af8931569b96b09bbe> > v15; 
  __int64 v16; 
  int *p_isCentered; 
  const FontGlowStyle *LegacyFontStyle; 
  GfxFont *v19; 
  bool v20; 
  GfxColor v21; 
  GfxCmdBufContext v22; 
  GfxCmdBufContext v23; 
  RB_DrawDebugStrings::__l2::<lambda_b2c6cc94deacc1af8931569b96b09bbe> _Val; 

  if ( stringCount )
  {
    v5 = stringCount;
    v23 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v23);
    source = gfxContext->source;
    R_Set2D(gfxContext->source);
    v7 = 0;
    v8 = v5;
    v9 = 0;
    if ( (int)v5 > 0 )
    {
      p_color = &strings->color;
      v11 = v8;
      do
      {
        if ( p_color[21].packed )
        {
          v12 = *(float *)&p_color[-3].packed;
          v13 = *(float *)&p_color[1].packed;
          v14 = *(GfxFont **)p_color[-5].array;
          v21 = *p_color;
          v23 = *gfxContext;
          RB_DrawTextWithSize(&v23, strings[v9].text, v14, v13, v12, *(float *)&p_color[-2].packed, v21);
        }
        ++v9;
        p_color += 28;
        --v11;
      }
      while ( v11 );
    }
    v23 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v23);
    R_Set3D(source);
    v22 = *gfxContext;
    v15._Fn = std::_Pass_fn__lambda_b2c6cc94deacc1af8931569b96b09bbe__0_(&_Val)._Fn;
    std::_Sort_unchecked_trDebugString_t___std::_Ref_fn__lambda_b2c6cc94deacc1af8931569b96b09bbe_____(strings, (trDebugString_t *)((char *)strings + v16), v16 / 112, (std::_Ref_fn<<lambda_b2c6cc94deacc1af8931569b96b09bbe> >)v15._Fn->gfxContext.source);
    if ( v8 > 0 )
    {
      p_isCentered = &strings->isCentered;
      do
      {
        if ( !*(p_isCentered - 1) )
        {
          LODWORD(v23.source) = LODWORD(source->viewParms.camera.axis.m[1].v[0]) ^ _xmm;
          HIDWORD(v23.source) = LODWORD(source->viewParms.camera.axis.m[1].v[1]) ^ _xmm;
          LODWORD(v23.state) = LODWORD(source->viewParms.camera.axis.m[1].v[2]) ^ _xmm;
          LODWORD(_Val.gfxContext.source) = LODWORD(source->viewParms.camera.axis.m[2].v[0]) ^ _xmm;
          HIDWORD(_Val.gfxContext.source) = LODWORD(source->viewParms.camera.axis.m[2].v[1]) ^ _xmm;
          LODWORD(_Val.gfxContext.state) = LODWORD(source->viewParms.camera.axis.m[2].v[2]) ^ _xmm;
          LegacyFontStyle = R_Font_GetLegacyFontStyle(7);
          v19 = *(GfxFont **)(p_isCentered - 27);
          v20 = *p_isCentered == 0;
          v22 = *gfxContext;
          RB_DrawTextInSpace(&v22, strings[v7].text, v19, &strings[v7].xyz, *((const float *)p_isCentered - 21), (const vec3_t *)&v23, (const vec3_t *)&_Val, *(p_isCentered - 22), LegacyFontStyle, !v20);
        }
        ++v7;
        p_isCentered += 28;
        --v8;
      }
      while ( v8 );
    }
    v22 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v22);
  }
}

/*
==============
RB_DrawDepthOfFieldDebug
==============
*/
void RB_DrawDepthOfFieldDebug(GfxCmdBufContext *gfxContext, const GfxViewParms *viewParms, const GfxViewInfo *viewInfo)
{
  __int128 v3; 
  unsigned int width; 
  unsigned int height; 
  float filmDiagonal; 
  float tanHalfFovY; 
  float tanHalfFovX; 
  double PhysicalHipSharpCocDiameter; 
  double ScaledSharpCocDiameter; 
  float v13; 
  double BokehMaxCocDiameter; 
  float v15; 
  GfxCmdBufContext v16; 
  GfxColor v17; 
  const char *v18; 
  const char *v19; 
  double HyperfocalDistance; 
  double PhysicalHipFstop; 
  double v25; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int v28; 
  float v29; 
  float v30; 
  float v31; 
  double Distance; 
  float v33; 
  float v34; 
  double v36; 
  double v38; 
  GfxCmdBufContext v40; 
  __int64 v41; 
  GfxCmdBufContext v42; 
  GfxColor v43; 
  char dest[512]; 
  __int128 v45; 

  if ( r_dof_physical_distanceMeter->current.enabled )
  {
    R_Set2D(gfxContext->source);
    if ( viewInfo->dofPhysical.enabled )
    {
      width = viewInfo->sceneViewport.width;
      height = viewInfo->sceneViewport.height;
      filmDiagonal = viewInfo->dofPhysical.filmDiagonal;
      tanHalfFovY = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
      tanHalfFovX = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX;
      v45 = v3;
      PhysicalHipSharpCocDiameter = R_DOF_GetPhysicalHipSharpCocDiameter();
      ScaledSharpCocDiameter = R_GetScaledSharpCocDiameter(*(float *)&PhysicalHipSharpCocDiameter, filmDiagonal);
      v13 = *(float *)&ScaledSharpCocDiameter;
      BokehMaxCocDiameter = R_DOF_GetBokehMaxCocDiameter(viewInfo);
      v15 = *(float *)&BokehMaxCocDiameter;
      v16 = *gfxContext;
      v43.packed = -16777216;
      v42 = v16;
      RB_DrawText(&v42, "PHYSICAL DOF = ON / BOKEH", backEnd.debugFont, 101.0, 101.0, (const GfxColor)-16777216);
      v17.packed = -1;
      v42 = *gfxContext;
      RB_DrawText(&v42, "PHYSICAL DOF = ON / BOKEH", backEnd.debugFont, 100.0, 100.0, (const GfxColor)-1);
      v18 = "OFF";
      v19 = "OFF";
      if ( viewInfo->dofPhysical.hipEnabled )
        v19 = "ON";
      Com_sprintf(dest, 0x200ui64, "HYPERFOCAL MODE = %s", v19);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 111.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 110.0, (const GfxColor)-1);
      if ( viewInfo->dofPhysical.scriptingEnabled )
        v18 = "ON";
      Com_sprintf(dest, 0x200ui64, "SCRIPTING MODE = %s", v18);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 121.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 120.0, (const GfxColor)-1);
      Com_sprintf(dest, 0x200ui64, "FOCUS DISTANCE = %.3f in", viewInfo->dofPhysical.focusDistance);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 141.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 140.0, (const GfxColor)-1);
      Com_sprintf(dest, 0x200ui64, "APERTURE = %.3f f-stops", viewInfo->dofPhysical.fstop);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 151.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 150.0, (const GfxColor)-1);
      Com_sprintf(dest, 0x200ui64, "VIEW MODEL FOCUS DISTANCE = %.3f in", viewInfo->dofPhysical.viewModelFocusDistance);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 171.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 170.0, (const GfxColor)-1);
      Com_sprintf(dest, 0x200ui64, "VIEW MODEL APERTURE = %.3f f-stops", viewInfo->dofPhysical.viewModelFstop);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 181.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 180.0, (const GfxColor)-1);
      Com_sprintf(dest, 0x200ui64, "FILM DIAGONAL = %.3f mm", viewInfo->dofPhysical.filmDiagonal);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 201.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 200.0, (const GfxColor)-1);
      Com_sprintf(dest, 0x200ui64, "FOCAL LENGTH = %.3f mm", (float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.focalLength * 25.399986));
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 211.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 210.0, (const GfxColor)-1);
      _XMM8 = 0i64;
      atanf_0(tanHalfFovY);
      __asm { vroundss xmm3, xmm8, xmm2, 1 }
      atanf_0(tanHalfFovX);
      __asm { vroundss xmm1, xmm8, xmm0, 1 }
      LODWORD(v41) = (int)*(float *)&_XMM3;
      Com_sprintf(dest, 0x200ui64, "FOV (H/V) = %d/%d", (unsigned int)(int)*(float *)&_XMM1, v41);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 221.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 220.0, (const GfxColor)-1);
      Com_sprintf(dest, 0x200ui64, "MIN FOCUS DISTANCE = %.3f in", viewInfo->dofPhysical.minFocusDistance);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 231.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 230.0, (const GfxColor)-1);
      Com_sprintf(dest, 0x200ui64, "MAX COC DIAMETER = %.3f px", v15);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 241.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 240.0, (const GfxColor)-1);
      HyperfocalDistance = R_GetHyperfocalDistance(viewInfo->viewParmsSet.frames[0].viewParms.camera.focalLength, viewInfo->dofPhysical.fstop, v13 * 0.039370101);
      Com_sprintf(dest, 0x200ui64, "HYPERFOCAL DISTANCE = %.3f in", *(float *)&HyperfocalDistance);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 261.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 260.0, (const GfxColor)-1);
      PhysicalHipFstop = R_DOF_GetPhysicalHipFstop();
      Com_sprintf(dest, 0x200ui64, "HYPERFOCAL APERTURE = %.3f f-stops", *(float *)&PhysicalHipFstop);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 271.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 270.0, (const GfxColor)-1);
      v25 = R_DOF_GetPhysicalHipSharpCocDiameter();
      Com_sprintf(dest, 0x200ui64, "HYPERFOCAL SHARP COC DIAMETER = %.3f mm", *(float *)&v25);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 101.0, 281.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, 100.0, 280.0, (const GfxColor)-1);
      v42 = *gfxContext;
      RB_DrawText(&v42, "FOV DEGREES AND PIXELS (PX) IN SCENE BUFFER UNITS (NOT VIRTUAL)", backEnd.debugFont, 101.0, 311.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, "FOV DEGREES AND PIXELS (PX) IN SCENE BUFFER UNITS (NOT VIRTUAL)", backEnd.debugFont, 100.0, 310.0, (const GfxColor)-1);
      v26 = height >> 1;
      v27 = width >> 1;
      if ( R_UsingDepthOfField(viewInfo) )
      {
        v28 = v26;
      }
      else
      {
        v42 = *gfxContext;
        v28 = v26;
        v29 = (float)v26;
        v17.packed = -8355712;
        v30 = v29 - 110.0;
        v31 = (float)v27;
        RB_DrawDepthOfFieldDebug_DrawText(&v42, "DOF DISABLED", v31, v30, (const GfxColor)-8355712);
      }
      Distance = RB_DOF_GetDistance();
      Com_sprintf(dest, 0x200ui64, "DISTANCE = %.3f in", *(float *)&Distance);
      v42 = *gfxContext;
      v33 = (float)v28;
      v34 = (float)(unsigned int)v27;
      RB_DrawText(&v42, dest, backEnd.debugFont, v34 + 1.0, (float)(v33 - 100.0) + 1.0, (const GfxColor)-16777216);
      _XMM0 = *gfxContext;
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, v34, v33 - 100.0, v17);
      *(double *)&_XMM0.source = RB_DOF_GetCircleOfConfusionClip();
      v36 = *(float *)&_XMM0.source;
      *(double *)&_XMM0.source = RB_DOF_GetCircleOfConfusionClip();
      __asm { vminss  xmm1, xmm0, xmm12 }
      Com_sprintf(dest, 0x200ui64, "COC DIAMETER (CLIP) = %.3f px (%.3f px)", *(float *)&_XMM1, v36);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, v34 + 1.0, (float)(v33 - 90.0) + 1.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      _XMM0.state = v42.state;
      RB_DrawText(&v42, dest, backEnd.debugFont, v34, v33 - 90.0, v17);
      *(double *)&_XMM0.source = RB_DOF_GetCircleOfConfusionLinear();
      v38 = *(float *)&_XMM0.source;
      *(double *)&_XMM0.source = RB_DOF_GetCircleOfConfusionLinear();
      __asm { vminss  xmm1, xmm0, xmm12 }
      Com_sprintf(dest, 0x200ui64, "COC DIAMETER (LINEAR) = %.3f px (%.3f px)", *(float *)&_XMM1, v38);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, v34 + 1.0, (float)(v33 - 80.0) + 1.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, dest, backEnd.debugFont, v34, v33 - 80.0, v17);
    }
    else
    {
      v40 = *gfxContext;
      v43.packed = -8355712;
      v42 = v40;
      RB_DrawText(&v42, "PHYSICAL DOF = OFF", backEnd.debugFont, 101.0, 101.0, (const GfxColor)-16777216);
      v42 = *gfxContext;
      RB_DrawText(&v42, "PHYSICAL DOF = OFF", backEnd.debugFont, 100.0, 100.0, v43);
    }
    v42 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v42);
  }
}

/*
==============
RB_DrawDepthOfFieldDebug_DrawText
==============
*/
void RB_DrawDepthOfFieldDebug_DrawText(GfxCmdBufContext *gfxContext, const char *text, float x, float y, const GfxColor color)
{
  GfxCmdBufContext v7; 

  v7 = *gfxContext;
  RB_DrawText(&v7, text, backEnd.debugFont, x + 1.0, y + 1.0, (const GfxColor)-16777216);
  v7 = *gfxContext;
  RB_DrawText(&v7, text, backEnd.debugFont, x, y, color);
}

/*
==============
RB_DrawPolyInteriors
==============
*/
void RB_DrawPolyInteriors(GfxCmdBufContext *gfxContext, vec3_t *polyVerts, unsigned int polyVertCount, trDebugPoly_t *polys, unsigned int polyCount)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext *v6; 
  trDebugPoly_t *v7; 
  vec3_t *v8; 
  int v9; 
  int v10; 
  bool *p_drawDepthTest; 
  __int64 v12; 
  bool v13; 
  int v14; 
  materialCommands_t *Tess; 
  bool *v16; 
  GfxCmdBufContext v17; 
  int v20; 
  unsigned __int8 v21; 
  int v23; 
  unsigned __int8 v24; 
  int v26; 
  unsigned __int8 v27; 
  int v29; 
  unsigned __int8 v30; 
  unsigned int v31; 
  materialCommands_t *v32; 
  materialCommands_t *v33; 
  unsigned int v34; 
  signed int vertexCount; 
  vec3_t *v36; 
  materialCommands_t *v37; 
  float v38; 
  __int64 v39; 
  GfxVertex *verts; 
  __int64 v41; 
  materialCommands_t *v42; 
  __int64 v43; 
  GfxVertex *v44; 
  __int64 v45; 
  materialCommands_t *v46; 
  __int64 v47; 
  GfxVertex *v48; 
  unsigned int *p_firstVert; 
  GfxCmdBufContext v50; 
  int v53; 
  unsigned __int8 v54; 
  int v56; 
  unsigned __int8 v57; 
  int v59; 
  unsigned __int8 v60; 
  int v62; 
  unsigned __int8 v63; 
  unsigned int v64; 
  materialCommands_t *v65; 
  materialCommands_t *v66; 
  unsigned int v67; 
  signed int v68; 
  vec3_t *v69; 
  materialCommands_t *v70; 
  float v71; 
  __int64 v72; 
  GfxVertex *v73; 
  __int64 v74; 
  materialCommands_t *v75; 
  __int64 v76; 
  GfxVertex *v77; 
  __int64 v78; 
  materialCommands_t *v79; 
  __int64 v80; 
  GfxVertex *v81; 
  bool *v82; 
  GfxCmdBufContext v83; 
  __int64 v84; 
  vec3_t *v87; 
  int v88; 
  unsigned __int8 v89; 
  int v91; 
  unsigned __int8 v92; 
  int v94; 
  unsigned __int8 v95; 
  int v97; 
  unsigned __int8 v98; 
  unsigned int v99; 
  materialCommands_t *v100; 
  materialCommands_t *v101; 
  unsigned int v102; 
  signed int v103; 
  materialCommands_t *v104; 
  __int64 v105; 
  GfxVertex *v106; 
  __int64 v107; 
  materialCommands_t *v108; 
  __int64 v109; 
  GfxVertex *v110; 
  __int64 v111; 
  materialCommands_t *v112; 
  __int64 v113; 
  GfxVertex *v114; 
  __int64 v115; 
  GfxColor v116; 
  GfxColor v117; 
  GfxColor v118; 
  int v119; 
  int v120; 
  vec3_t *v121; 
  vec3_t *v122; 
  GfxCmdBufContext v123; 
  GfxCmdBufContext v124[2]; 

  source = (GfxCmdBufSourceState *)polyCount;
  v6 = gfxContext;
  v7 = polys;
  v8 = polyVerts;
  if ( !polyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp", 81, ASSERT_TYPE_ASSERT, "(polyCount > 0)", (const char *)&queryFormat, "polyCount > 0") )
    __debugbreak();
  v9 = 0;
  v10 = 0;
  v120 = 0;
  v119 = 0;
  if ( polyCount )
  {
    p_drawDepthTest = &v7->drawDepthTest;
    v12 = polyCount;
    do
    {
      v13 = *p_drawDepthTest;
      v14 = *(p_drawDepthTest - 1) && !v13;
      v9 += v14;
      p_drawDepthTest += 28;
      v10 += v13;
      --v12;
    }
    while ( v12 );
    v120 = v9;
    v119 = v10;
  }
  v123 = *v6;
  Tess = R_GetTess(&v123);
  if ( polyCount - v10 != v9 )
  {
    v123 = *v6;
    RB_BeginSurface(&v123, rgp.whiteCullMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG, 1);
    if ( polyCount )
    {
      v16 = &v7->drawDepthTest;
      v123.source = (GfxCmdBufSourceState *)polyCount;
      do
      {
        if ( !*(v16 - 1) && !*v16 )
        {
          v17 = *v6;
          v121 = &v8[*(unsigned int *)(v16 - 10)];
          _XMM4 = 0i64;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          v20 = (int)*(float *)&_XMM1;
          if ( (int)*(float *)&_XMM1 > 255 )
            v20 = 255;
          v21 = v20;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( v20 < 0 )
            v21 = 0;
          v23 = (int)*(float *)&_XMM1;
          v116.array[0] = v21;
          if ( (int)*(float *)&_XMM1 > 255 )
            v23 = 255;
          v24 = v23;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( v23 < 0 )
            v24 = 0;
          v26 = (int)*(float *)&_XMM1;
          v116.array[1] = v24;
          if ( (int)*(float *)&_XMM1 > 255 )
            v26 = 255;
          v27 = v26;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( v26 < 0 )
            v27 = 0;
          v29 = (int)*(float *)&_XMM1;
          v116.array[2] = v27;
          v124[0] = *v6;
          if ( (int)*(float *)&_XMM1 > 255 )
            v29 = 255;
          v30 = v29;
          if ( v29 < 0 )
            v30 = 0;
          v116.array[3] = v30;
          v31 = 3 * *(_DWORD *)(v16 - 6) - 6;
          v32 = R_GetTess(v124);
          if ( v31 > v32->maxVertices )
          {
            LODWORD(v115) = v31;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v115) )
              __debugbreak();
          }
          if ( v31 > v32->maxIndices )
          {
            LODWORD(v115) = v31;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v115) )
              __debugbreak();
          }
          v124[0] = v17;
          v33 = R_GetTess(v124);
          if ( v33->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * (v31 + v33->vertexCount) < v31 + v33->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
            __debugbreak();
          if ( v31 + v32->vertexCount > v32->maxVertices || v31 + v32->indexCount > v32->maxIndices )
          {
            v124[0] = v17;
            RB_TessOverflowInternal(v124, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
          }
          v34 = 2;
          if ( *(_DWORD *)(v16 - 6) > 2u )
          {
            vertexCount = Tess->vertexCount;
            v36 = v121;
            do
            {
              v124[0] = v17;
              v37 = R_GetTess(v124);
              v38 = v36->v[0];
              v39 = vertexCount;
              verts = v37->verts;
              v124[0] = v17;
              verts[v39].xyzw.v[0] = v38;
              verts[v39].xyzw.v[1] = v36->v[1];
              verts[v39].xyzw.v[2] = v36->v[2];
              verts[v39].xyzw.v[3] = 1.0;
              verts[v39].normal.packed = 1073643391;
              v37->verts[v39].color = v116;
              v37->verts[v39].texCoord = 0i64;
              v41 = (int)Tess->vertexCount;
              v42 = R_GetTess(v124);
              v43 = v41 + 1;
              v124[0] = v17;
              v44 = v42->verts;
              v44[v43].xyzw.v[0] = v121[v34].v[0];
              v44[v43].xyzw.v[1] = v121[v34].v[1];
              v44[v43].xyzw.v[2] = v121[v34].v[2];
              v44[v43].xyzw.v[3] = 1.0;
              v44[v43].normal.packed = 1073643391;
              v42->verts[v43].color = v116;
              v42->verts[v43].texCoord = 0i64;
              v45 = (int)Tess->vertexCount;
              v46 = R_GetTess(v124);
              v47 = v45 + 2;
              v36 = v121;
              v47 *= 32i64;
              v48 = v46->verts;
              *(float *)((char *)v48->xyzw.v + v47) = v121[v34 - 1].v[0];
              *(float *)((char *)&v48->xyzw.v[1] + v47) = v121[v34 - 1].v[1];
              *(float *)((char *)&v48->xyzw.v[2] + v47) = v121[v34 - 1].v[2];
              *(float *)((char *)&v48->xyzw.v[3] + v47) = 1.0;
              *(unsigned int *)((char *)&v48->normal.packed + v47) = 1073643391;
              *(GfxColor *)((char *)&v46->verts->color + v47) = v116;
              *(vec2_t *)((char *)&v46->verts->texCoord + v47) = 0i64;
              Tess->indices[Tess->indexCount] = Tess->vertexCount;
              Tess->indices[Tess->indexCount + 1] = LOWORD(Tess->vertexCount) + 1;
              ++v34;
              Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
              Tess->vertexCount += 3;
              Tess->indexCount += 3;
              vertexCount = Tess->vertexCount;
            }
            while ( v34 < *(_DWORD *)(v16 - 6) );
            source = v123.source;
          }
          v8 = polyVerts;
        }
        v16 += 28;
        source = (GfxCmdBufSourceState *)((char *)source - 1);
        v123.source = source;
      }
      while ( source );
      v10 = v119;
      source = (GfxCmdBufSourceState *)polyCount;
      v7 = polys;
    }
    v124[0] = *v6;
    RB_EndTessSurfaceInternal(v124, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp(121)");
  }
  if ( v10 > 0 )
  {
    v124[0] = *v6;
    RB_BeginSurface(v124, rgp.whiteDepthtestMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG, 1);
    if ( (_DWORD)source )
    {
      p_firstVert = &v7->firstVert;
      v123.source = source;
      do
      {
        if ( *((_BYTE *)p_firstVert + 10) )
        {
          v50 = *v6;
          v122 = &v8[*p_firstVert];
          _XMM4 = 0i64;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          v53 = (int)*(float *)&_XMM1;
          if ( (int)*(float *)&_XMM1 > 255 )
            v53 = 255;
          v54 = v53;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( v53 < 0 )
            v54 = 0;
          v56 = (int)*(float *)&_XMM1;
          v117.array[0] = v54;
          if ( (int)*(float *)&_XMM1 > 255 )
            v56 = 255;
          v57 = v56;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( v56 < 0 )
            v57 = 0;
          v59 = (int)*(float *)&_XMM1;
          v117.array[1] = v57;
          if ( (int)*(float *)&_XMM1 > 255 )
            v59 = 255;
          v60 = v59;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( v59 < 0 )
            v60 = 0;
          v62 = (int)*(float *)&_XMM1;
          v117.array[2] = v60;
          v124[0] = *v6;
          if ( (int)*(float *)&_XMM1 > 255 )
            v62 = 255;
          v63 = v62;
          if ( v62 < 0 )
            v63 = 0;
          v117.array[3] = v63;
          v64 = 3 * p_firstVert[1] - 6;
          v65 = R_GetTess(v124);
          if ( v64 > v65->maxVertices )
          {
            LODWORD(v115) = v64;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v115) )
              __debugbreak();
          }
          if ( v64 > v65->maxIndices )
          {
            LODWORD(v115) = v64;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v115) )
              __debugbreak();
          }
          v124[0] = v50;
          v66 = R_GetTess(v124);
          if ( v66->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * (v64 + v66->vertexCount) < v64 + v66->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
            __debugbreak();
          if ( v64 + v65->vertexCount > v65->maxVertices || v64 + v65->indexCount > v65->maxIndices )
          {
            v124[0] = v50;
            RB_TessOverflowInternal(v124, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
          }
          v67 = 2;
          if ( p_firstVert[1] > 2 )
          {
            v68 = Tess->vertexCount;
            v69 = v122;
            do
            {
              v124[0] = v50;
              v70 = R_GetTess(v124);
              v71 = v69->v[0];
              v72 = v68;
              v73 = v70->verts;
              v124[0] = v50;
              v73[v72].xyzw.v[0] = v71;
              v73[v72].xyzw.v[1] = v69->v[1];
              v73[v72].xyzw.v[2] = v69->v[2];
              v73[v72].xyzw.v[3] = 1.0;
              v73[v72].normal.packed = 1073643391;
              v70->verts[v72].color = v117;
              v70->verts[v72].texCoord = 0i64;
              v74 = (int)Tess->vertexCount;
              v75 = R_GetTess(v124);
              v76 = v74 + 1;
              v124[0] = v50;
              v77 = v75->verts;
              v77[v76].xyzw.v[0] = v122[v67].v[0];
              v77[v76].xyzw.v[1] = v122[v67].v[1];
              v77[v76].xyzw.v[2] = v122[v67].v[2];
              v77[v76].xyzw.v[3] = 1.0;
              v77[v76].normal.packed = 1073643391;
              v75->verts[v76].color = v117;
              v75->verts[v76].texCoord = 0i64;
              v78 = (int)Tess->vertexCount;
              v79 = R_GetTess(v124);
              v80 = v78 + 2;
              v69 = v122;
              v80 *= 32i64;
              v81 = v79->verts;
              *(float *)((char *)v81->xyzw.v + v80) = v122[v67 - 1].v[0];
              *(float *)((char *)&v81->xyzw.v[1] + v80) = v122[v67 - 1].v[1];
              *(float *)((char *)&v81->xyzw.v[2] + v80) = v122[v67 - 1].v[2];
              *(float *)((char *)&v81->xyzw.v[3] + v80) = 1.0;
              *(unsigned int *)((char *)&v81->normal.packed + v80) = 1073643391;
              *(GfxColor *)((char *)&v79->verts->color + v80) = v117;
              *(vec2_t *)((char *)&v79->verts->texCoord + v80) = 0i64;
              Tess->indices[Tess->indexCount] = Tess->vertexCount;
              Tess->indices[Tess->indexCount + 1] = LOWORD(Tess->vertexCount) + 1;
              ++v67;
              Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
              Tess->vertexCount += 3;
              Tess->indexCount += 3;
              v68 = Tess->vertexCount;
            }
            while ( v67 < p_firstVert[1] );
            source = v123.source;
          }
        }
        v8 = polyVerts;
        p_firstVert += 7;
        source = (GfxCmdBufSourceState *)((char *)source - 1);
        v123.source = source;
      }
      while ( source );
      source = (GfxCmdBufSourceState *)polyCount;
    }
    v124[0] = *v6;
    RB_EndTessSurfaceInternal(v124, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp(152)");
  }
  if ( v120 > 0 )
  {
    v124[0] = *v6;
    RB_BeginSurface(v124, rgp.whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG, 1);
    if ( (_DWORD)source )
    {
      v82 = &polys->drawDepthTest;
      v123.source = source;
      do
      {
        if ( *(v82 - 1) && !*v82 )
        {
          v83 = *v6;
          v84 = *(unsigned int *)(v82 - 10);
          _XMM4 = 0i64;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          v124[0] = *v6;
          v87 = &polyVerts[v84];
          v88 = (int)*(float *)&_XMM1;
          if ( (int)*(float *)&_XMM1 > 255 )
            v88 = 255;
          v89 = v88;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( v88 < 0 )
            v89 = 0;
          v91 = (int)*(float *)&_XMM1;
          v118.array[0] = v89;
          if ( (int)*(float *)&_XMM1 > 255 )
            v91 = 255;
          v92 = v91;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( v91 < 0 )
            v92 = 0;
          v94 = (int)*(float *)&_XMM1;
          v118.array[1] = v92;
          if ( (int)*(float *)&_XMM1 > 255 )
            v94 = 255;
          v95 = v94;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( v94 < 0 )
            v95 = 0;
          v97 = (int)*(float *)&_XMM1;
          v118.array[2] = v95;
          if ( (int)*(float *)&_XMM1 > 255 )
            v97 = 255;
          v98 = v97;
          if ( v97 < 0 )
            v98 = 0;
          v118.array[3] = v98;
          v99 = 3 * *(_DWORD *)(v82 - 6) - 6;
          v100 = R_GetTess(v124);
          if ( v99 > v100->maxVertices )
          {
            LODWORD(v115) = v99;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v115) )
              __debugbreak();
          }
          if ( v99 > v100->maxIndices )
          {
            LODWORD(v115) = v99;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v115) )
              __debugbreak();
          }
          v124[0] = v83;
          v101 = R_GetTess(v124);
          if ( v101->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * (v99 + v101->vertexCount) < v99 + v101->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
            __debugbreak();
          if ( v99 + v100->vertexCount > v100->maxVertices || v99 + v100->indexCount > v100->maxIndices )
          {
            v124[0] = v83;
            RB_TessOverflowInternal(v124, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
          }
          v102 = 2;
          if ( *(_DWORD *)(v82 - 6) > 2u )
          {
            v103 = Tess->vertexCount;
            do
            {
              v124[0] = *gfxContext;
              v104 = R_GetTess(v124);
              v105 = v103;
              v106 = v104->verts;
              v106[v105].xyzw.v[0] = v87->v[0];
              v106[v105].xyzw.v[1] = v87->v[1];
              v106[v105].xyzw.v[2] = v87->v[2];
              v106[v105].xyzw.v[3] = 1.0;
              v106[v105].normal.packed = 1073643391;
              v104->verts[v105].color = v118;
              v104->verts[v105].texCoord = 0i64;
              v107 = (int)Tess->vertexCount;
              v124[0] = *gfxContext;
              v108 = R_GetTess(v124);
              v109 = v107 + 1;
              v110 = v108->verts;
              v110[v109].xyzw.v[0] = v87[v102].v[0];
              v110[v109].xyzw.v[1] = v87[v102].v[1];
              v110[v109].xyzw.v[2] = v87[v102].v[2];
              v110[v109].xyzw.v[3] = 1.0;
              v110[v109].normal.packed = 1073643391;
              v108->verts[v109].color = v118;
              v108->verts[v109].texCoord = 0i64;
              v111 = (int)Tess->vertexCount;
              v124[0] = *gfxContext;
              v112 = R_GetTess(v124);
              v113 = v111 + 2;
              v114 = v112->verts;
              v114[v113].xyzw.v[0] = v87[v102 - 1].v[0];
              v114[v113].xyzw.v[1] = v87[v102 - 1].v[1];
              v114[v113].xyzw.v[2] = v87[v102 - 1].v[2];
              v114[v113].xyzw.v[3] = 1.0;
              v114[v113].normal.packed = 1073643391;
              v112->verts[v113].color = v118;
              v112->verts[v113].texCoord = 0i64;
              Tess->indices[Tess->indexCount] = Tess->vertexCount;
              Tess->indices[Tess->indexCount + 1] = LOWORD(Tess->vertexCount) + 1;
              ++v102;
              Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
              Tess->vertexCount += 3;
              Tess->indexCount += 3;
              v103 = Tess->vertexCount;
            }
            while ( v102 < *(_DWORD *)(v82 - 6) );
            source = v123.source;
          }
          v6 = gfxContext;
        }
        v82 += 28;
        source = (GfxCmdBufSourceState *)((char *)source - 1);
        v123.source = source;
      }
      while ( source );
    }
    v124[0] = *v6;
    RB_EndTessSurfaceInternal(v124, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp(183)");
  }
}

/*
==============
RB_DrawPolyOutlines
==============
*/
void RB_DrawPolyOutlines(GfxCmdBufContext *gfxContext, vec3_t *inPolyVerts, unsigned int polyVertCount, trDebugPoly_t *polys, unsigned int polyCount, GfxPointVertex *verts)
{
  int v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int *p_firstVert; 
  unsigned int v12; 
  vec3_t *v14; 
  int v16; 
  char v17; 
  int v19; 
  char v20; 
  int v22; 
  char v23; 
  int v25; 
  char v26; 
  unsigned int v27; 
  unsigned int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  GfxCmdBufContext v32; 
  __int64 v33; 
  vec3_t *v34; 
  int v35; 

  v34 = inPolyVerts;
  if ( !polyCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_debug.cpp", 198, ASSERT_TYPE_ASSERT, "(polyCount > 0)", (const char *)&queryFormat, "polyCount > 0") )
      __debugbreak();
    inPolyVerts = v34;
  }
  v8 = 0;
  if ( polyCount )
  {
    v9 = polyCount;
    v10 = 0i64;
    p_firstVert = &polys->firstVert;
    v33 = polyCount;
    do
    {
      if ( *((_BYTE *)p_firstVert + 8) )
      {
        v12 = 0;
        _XMM4 = 0i64;
        v14 = &inPolyVerts[*p_firstVert];
        __asm { vroundss xmm1, xmm4, xmm3, 1 }
        v16 = (int)*(float *)&_XMM1;
        if ( (int)*(float *)&_XMM1 > 255 )
          v16 = 255;
        v17 = v16;
        __asm { vroundss xmm1, xmm4, xmm3, 1 }
        if ( v16 < 0 )
          v17 = 0;
        LOBYTE(v35) = v17;
        v19 = (int)*(float *)&_XMM1;
        if ( (int)*(float *)&_XMM1 > 255 )
          v19 = 255;
        v20 = v19;
        __asm { vroundss xmm1, xmm4, xmm3, 1 }
        if ( v19 < 0 )
          v20 = 0;
        BYTE1(v35) = v20;
        v22 = (int)*(float *)&_XMM1;
        if ( (int)*(float *)&_XMM1 > 255 )
          v22 = 255;
        v23 = v22;
        __asm { vroundss xmm1, xmm4, xmm3, 1 }
        if ( v22 < 0 )
          v23 = 0;
        BYTE2(v35) = v23;
        v25 = (int)*(float *)&_XMM1;
        if ( (int)*(float *)&_XMM1 > 255 )
          v25 = 255;
        v26 = v25;
        if ( v25 < 0 )
          v26 = 0;
        HIBYTE(v35) = v26;
        v27 = p_firstVert[1];
        v28 = v27 - 1;
        if ( v27 )
        {
          do
          {
            v29 = v28;
            if ( v8 + 2 > 0x7FFF )
            {
              v32 = *gfxContext;
              RB_DrawLines3D(&v32, v8 / 2, 1, verts, 0);
              v8 = 0;
              v10 = 0i64;
            }
            v30 = v10 + 1;
            v31 = v10;
            v8 += 2;
            v10 += 2i64;
            *(_DWORD *)verts[v30].color = v35;
            *(_DWORD *)verts[v31].color = v35;
            verts[v31].xyz.v[0] = v14[v29].v[0];
            verts[v31].xyz.v[1] = v14[v29].v[1];
            verts[v31].xyz.v[2] = v14[v29].v[2];
            verts[v30].xyz.v[0] = v14[v12].v[0];
            verts[v30].xyz.v[1] = v14[v12].v[1];
            verts[v30].xyz.v[2] = v14[v12].v[2];
            v28 = v12++;
          }
          while ( v12 < p_firstVert[1] );
          v9 = v33;
        }
      }
      inPolyVerts = v34;
      p_firstVert += 7;
      v33 = --v9;
    }
    while ( v9 );
  }
  if ( v8 / 2 )
  {
    v32 = *gfxContext;
    RB_DrawLines3D(&v32, v8 / 2, 1, verts, 0);
  }
}

/*
==============
RB_EndDebugLines
==============
*/
__int64 RB_EndDebugLines(GfxCmdBufContext *gfxContext, bool depthTest, int vertCount, const GfxPointVertex *verts)
{
  GfxCmdBufContext v5; 

  if ( vertCount )
  {
    v5 = *gfxContext;
    RB_DrawLines3D(&v5, vertCount, 1, verts, depthTest);
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
  __int64 v4; 
  materialCommands_t *Tess; 
  __int64 v8; 
  GfxVertex *verts; 
  GfxCmdBufContext v10; 

  v4 = tessVertIndex;
  v10 = *gfxContext;
  Tess = R_GetTess(&v10);
  v8 = v4;
  verts = Tess->verts;
  verts[v8].xyzw.xyz = *xyz;
  verts[v8].xyzw.v[3] = 1.0;
  verts[v8].normal.packed = 1073643391;
  Tess->verts[v8].color = color;
  Tess->verts[v8].texCoord = 0i64;
}

