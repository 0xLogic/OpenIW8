/*
==============
RB_IsSunEnabled
==============
*/

bool __fastcall RB_IsSunEnabled()
{
  return ?RB_IsSunEnabled@@YA_NXZ();
}

/*
==============
RB_DrawSunPostEffects
==============
*/

void __fastcall RB_DrawSunPostEffects(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_DrawSunPostEffects@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_AllocSunSpriteQueries
==============
*/

void RB_AllocSunSpriteQueries(void)
{
  ?RB_AllocSunSpriteQueries@@YAXXZ();
}

/*
==============
RB_DrawSun
==============
*/

void __fastcall RB_DrawSun(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_DrawSun@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_AddSunEffects
==============
*/
void RB_AddSunEffects(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, SunFlareDynamic *sunFlare)
{
  float v6; 
  GfxWorld *world; 
  GfxCmdBufContext v8; 
  float sunspriteSizeOverride; 
  GfxCmdBufState *v10; 
  float height; 
  GfxCmdBufContext v12; 
  GfxCmdBufState *state[2]; 
  GfxViewport outViewport; 

  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 157, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !sunFlare && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 158, ASSERT_TYPE_ASSERT, "(sunFlare)", (const char *)&queryFormat, "sunFlare") )
    __debugbreak();
  v6 = (float)((float)(gfxContext->source->viewParms3D.camera.axis.m[0].v[1] * rgp.world->sun.sunFxPosition.v[1]) + (float)(rgp.world->sun.sunFxPosition.v[0] * gfxContext->source->viewParms3D.camera.axis.m[0].v[0])) + (float)(gfxContext->source->viewParms3D.camera.axis.m[0].v[2] * rgp.world->sun.sunFxPosition.v[2]);
  sunFlare->lastDot = v6;
  if ( v6 > 0.0 )
  {
    world = rgp.world;
    v8 = *gfxContext;
    *(GfxCmdBufContext *)state = *gfxContext;
    if ( !rgp.world )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 45, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
        __debugbreak();
      world = rgp.world;
    }
    sunspriteSizeOverride = rg.sunspriteSizeOverride;
    if ( rg.sunspriteSizeOverride < 0.0 )
      sunspriteSizeOverride = world->sun.spriteSize;
    if ( world->sun.spriteMaterial && sunspriteSizeOverride > 0.0 )
    {
      v12 = v8;
      RB_EndSurfaceIfNeeded(&v12);
      v12 = v8;
      RB_SetTessTechnique(&v12, rgp.world->sun.spriteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_COUNT_GEO);
      v12 = v8;
      RB_SetIdentity(&v12);
      v10 = state[1];
      if ( viewInfo->dualViewScopeState.m_fade > 0.0 )
        R_SetDepthBoundsEnable(state[1], 0.0, 0.984375);
      R_GetViewport(v8.source, &outViewport);
      height = (float)outViewport.height;
      *(GfxCmdBufContext *)state = v8;
      if ( RB_TessSunBillboard((GfxCmdBufContext *)state, &rgp.world->sun.sunFxPosition, (float)(sunspriteSizeOverride * 0.0020833334) * height, (float)(sunspriteSizeOverride * 0.0020833334) * height, (GfxColor)-1) )
      {
        *(GfxCmdBufContext *)state = v8;
        RB_EndTessSurfaceInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp(73)");
      }
      if ( viewInfo->dualViewScopeState.m_fade > 0.0 )
        R_SetDepthBoundsDisable(v10);
    }
  }
}

/*
==============
RB_AllocSunSpriteQueries
==============
*/
void RB_AllocSunSpriteQueries(void)
{
  int v0; 
  unsigned __int16 *v1; 
  unsigned __int16 v2; 

  if ( !sunQueryInited )
  {
    v0 = 0;
    v1 = (unsigned __int16 *)&unk_1544B52C0;
    do
    {
      v2 = RB_AllocOcclusionQuery((LocalClientNum_t)v0++, NULL, 0, 0.0);
      *v1 = v2;
      v1 += 14;
    }
    while ( v0 < 2 );
    sunQueryInited = 1;
  }
}

/*
==============
RB_DrawSun
==============
*/
void RB_DrawSun(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  __int64 clientIndex; 
  SunFlareDynamic *v5; 
  double OcclusionQueryVisibility; 
  __int64 v7; 
  unsigned int maxClientRenderViews; 
  GfxCmdBufContext v9; 

  clientIndex = viewInfo->clientIndex;
  if ( (!RB_IsSunEnabled() || !sunQueryInited) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 221, ASSERT_TYPE_ASSERT, "(RB_IsSunEnabled() && sunQueryInited)", (const char *)&queryFormat, "RB_IsSunEnabled() && sunQueryInited") )
    __debugbreak();
  if ( (unsigned int)clientIndex >= gfxCfg.maxClientRenderViews )
  {
    maxClientRenderViews = gfxCfg.maxClientRenderViews;
    LODWORD(v7) = clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 223, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientRenderViews )", "localClientNum doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", v7, maxClientRenderViews) )
      __debugbreak();
  }
  v5 = &sunFlareArray[clientIndex];
  v9 = *gfxContext;
  RB_SetIdentity(&v9);
  if ( v5->occlusionQueryHandle == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 229, ASSERT_TYPE_ASSERT, "(sunFlare->occlusionQueryHandle != 0xffff)", (const char *)&queryFormat, "sunFlare->occlusionQueryHandle != OQ_HANDLE_NONE") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 233, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  RB_SetOcclusionQueryPosition(v5->occlusionQueryHandle, &rgp.world->sun.sunFxPosition);
  OcclusionQueryVisibility = RB_GetOcclusionQueryVisibility(v5->occlusionQueryHandle);
  v9 = *gfxContext;
  v5->lastVisibility = *(float *)&OcclusionQueryVisibility;
  RB_AddSunEffects(&v9, viewInfo, v5);
  v9 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v9);
}

/*
==============
RB_DrawSunFlare
==============
*/
void RB_DrawSunFlare(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, SunFlareDynamic *sunFlare, int frameTime)
{
  __int128 v4; 
  GfxWorld *world; 
  float lastDot; 
  float flareMinDot; 
  float flareMaxDot; 
  float v13; 
  float v14; 
  float flareMaxAlpha; 
  float v16; 
  float v17; 
  float lastVisibility; 
  double updated; 
  float v20; 
  GfxCmdBufContext v21; 
  int v24; 
  GfxCmdBufState *v25; 
  unsigned int v26; 
  float height; 
  GfxCmdBufContext v28; 
  GfxCmdBufState *state[2]; 
  GfxViewport outViewport; 
  __int128 v31; 

  if ( !sunFlare && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 124, ASSERT_TYPE_ASSERT, "(sunFlare)", (const char *)&queryFormat, "sunFlare") )
    __debugbreak();
  world = rgp.world;
  if ( rgp.world->sun.flareMaterial )
  {
    lastDot = sunFlare->lastDot;
    flareMinDot = rgp.world->sun.flareMinDot;
    if ( lastDot > flareMinDot )
    {
      flareMaxDot = rgp.world->sun.flareMaxDot;
      v31 = v4;
      if ( lastDot < flareMaxDot )
      {
        v14 = (float)(lastDot - flareMinDot) / (float)(flareMaxDot - flareMinDot);
        v13 = v14;
        if ( v14 < 0.0 || v14 > 1.0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 137, ASSERT_TYPE_SANITY, "( ( lerp >= 0.0f && lerp <= 1.0f ) )", "( lerp ) = %g", v14) )
            __debugbreak();
          world = rgp.world;
        }
      }
      else
      {
        v13 = FLOAT_1_0;
      }
      flareMaxAlpha = world->sun.flareMaxAlpha;
      if ( flareMaxAlpha < 0.0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 138, ASSERT_TYPE_SANITY, "( ( rgp.world->sun.flareMaxAlpha >= 0.0f ) )", "( rgp.world->sun.flareMaxAlpha ) = %g", flareMaxAlpha) )
          __debugbreak();
        world = rgp.world;
      }
      v16 = v13 * world->sun.flareMaxAlpha;
      v17 = (float)(v13 * world->sun.flareMaxSize) + world->sun.flareMinSize;
      if ( sunFlare->flareIntensity < 0.0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 143, ASSERT_TYPE_ASSERT, "( ( sunFlare->flareIntensity >= 0.0f ) )", "( sunFlare->flareIntensity ) = %g", sunFlare->flareIntensity) )
          __debugbreak();
        world = rgp.world;
      }
      lastVisibility = sunFlare->lastVisibility;
      if ( lastVisibility < 0.0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 144, ASSERT_TYPE_ASSERT, "( ( sunFlare->lastVisibility >= 0.0f ) )", "( sunFlare->lastVisibility ) = %g", lastVisibility) )
          __debugbreak();
        world = rgp.world;
      }
      updated = R_UpdateOverTime(sunFlare->flareIntensity, sunFlare->lastVisibility, world->sun.flareFadeInTime, world->sun.flareFadeOutTime, frameTime);
      sunFlare->flareIntensity = *(float *)&updated;
      if ( *(float *)&updated < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 148, ASSERT_TYPE_ASSERT, "( ( sunFlare->flareIntensity >= 0.0f ) )", "( sunFlare->flareIntensity ) = %g", *(float *)&updated) )
        __debugbreak();
      if ( v16 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 149, ASSERT_TYPE_ASSERT, "( ( alpha >= 0.0f ) )", "( alpha ) = %g", v16) )
        __debugbreak();
      v20 = v16 * sunFlare->flareIntensity;
      v21 = *gfxContext;
      *(GfxCmdBufContext *)state = *gfxContext;
      if ( (v20 < 0.0 || v20 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 90, ASSERT_TYPE_ASSERT, "( ( alpha >= 0 && alpha <= 1 ) )", "( alpha ) = %g", v20) )
        __debugbreak();
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      v24 = (int)*(float *)&_XMM4;
      if ( (unsigned __int8)(int)*(float *)&_XMM4 )
      {
        v28 = v21;
        RB_EndSurfaceIfNeeded(&v28);
        v28 = v21;
        RB_SetIdentity(&v28);
        v28 = v21;
        RB_SetTessTechnique(&v28, rgp.world->sun.flareMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_COUNT_GEO);
        v25 = state[1];
        v26 = (unsigned __int8)v24 | (((unsigned __int8)v24 | ((v24 | 0xFFFFFF00) << 8)) << 8);
        if ( viewInfo->dualViewScopeState.m_fade > 0.0 )
          R_SetDepthBoundsEnable(state[1], 0.0, 0.984375);
        R_GetViewport(v21.source, &outViewport);
        height = (float)outViewport.height;
        *(GfxCmdBufContext *)state = v21;
        if ( RB_TessSunBillboard((GfxCmdBufContext *)state, &rgp.world->sun.sunFxPosition, (float)(v17 * 0.0020833334) * height, (float)(v17 * 0.0020833334) * height, (GfxColor)v26) )
        {
          *(GfxCmdBufContext *)state = v21;
          RB_EndTessSurfaceInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp(109)");
        }
        if ( viewInfo->dualViewScopeState.m_fade > 0.0 )
          R_SetDepthBoundsDisable(v25);
      }
    }
  }
}

/*
==============
RB_DrawSunPostEffects
==============
*/
void RB_DrawSunPostEffects(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  __int64 clientIndex; 
  SunFlareDynamic *v5; 
  int lastTime; 
  int time; 
  int v8; 
  GfxCmdBufContext v9; 
  GfxCmdBufContext v10; 

  clientIndex = viewInfo->clientIndex;
  if ( (unsigned int)clientIndex >= gfxCfg.maxClientRenderViews && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 266, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientRenderViews )", "localClientNum doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", clientIndex, gfxCfg.maxClientRenderViews) )
    __debugbreak();
  v10 = *gfxContext;
  v5 = &sunFlareArray[clientIndex];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 246, ASSERT_TYPE_ASSERT, "(sunFlare)", (const char *)&queryFormat, "sunFlare") )
    __debugbreak();
  lastTime = v5->lastTime;
  if ( lastTime && (time = v10.source->sceneDef.time, lastTime <= time) )
    v8 = time - lastTime;
  else
    v8 = 10;
  v9 = *gfxContext;
  v5->lastTime = v10.source->sceneDef.time;
  v10 = v9;
  RB_DrawSunFlare(&v10, viewInfo, v5, v8);
}

/*
==============
RB_IsSunEnabled
==============
*/
bool RB_IsSunEnabled()
{
  return rg.drawSun && rgp.world && rgp.world->sun.hasValidData;
}

/*
==============
RB_TessSunBillboard
==============
*/
bool RB_TessSunBillboard(GfxCmdBufContext *gfxContext, const vec3_t *sunPos, float widthInPixels, float heightInPixels, GfxColor color)
{
  GfxCmdBufContext v5; 
  bool v8; 
  unsigned int v9[3]; 
  GfxViewport v10; 
  GfxCmdBufContext v11; 
  GfxViewport v12; 

  v5 = *gfxContext;
  R_GetViewport(gfxContext->source, &v12);
  v10 = v12;
  v11 = v5;
  RB_TessRectBillboard(&v11, sunPos, 0, 0, widthInPixels, heightInPixels, color, 0.0, &v10, 0, v9, &v8);
  return v9[0] != 0;
}

