/*
==============
R_HDRSpotMeter_Initialize
==============
*/

void R_HDRSpotMeter_Initialize(void)
{
  ?R_HDRSpotMeter_Initialize@@YAXXZ();
}

/*
==============
R_HDRSpotMeter_Shutdown
==============
*/

void R_HDRSpotMeter_Shutdown(void)
{
  ?R_HDRSpotMeter_Shutdown@@YAXXZ();
}

/*
==============
RB_HDRSpotMeter_ProcessStage
==============
*/

void __fastcall RB_HDRSpotMeter_ProcessStage(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *colorRt, SpotMeterId spotMeterId)
{
  ?RB_HDRSpotMeter_ProcessStage@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@W4SpotMeterId@@@Z(gfxContext, viewInfo, colorRt, spotMeterId);
}

/*
==============
R_HDRSpotMeter_ProcessStage
==============
*/

void __fastcall R_HDRSpotMeter_ProcessStage(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt, SpotMeterId spotMeterId)
{
  ?R_HDRSpotMeter_ProcessStage@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@W4SpotMeterId@@@Z(state, viewInfo, srcRt, spotMeterId);
}

/*
==============
RB_HDRSpotMeter_Draw
==============
*/

void __fastcall RB_HDRSpotMeter_Draw(GfxCmdBufContext *gfxContext)
{
  ?RB_HDRSpotMeter_Draw@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_HDRSpotMeter_Draw
==============
*/
void RB_HDRSpotMeter_Draw(GfxCmdBufContext *gfxContext)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  const GfxBackEndData *data; 
  unsigned int width; 
  const R_RT_Surface *Surface; 
  GfxFont *debugFont; 
  const GfxViewInfo *viewInfo; 
  __int64 height; 
  int pixelHeight; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  float v22; 
  bool enabled; 
  float v24; 
  float v25; 
  float v26; 
  unsigned __int64 integer; 
  __int64 v28; 
  bool v29; 
  GfxCmdBufContext v30; 
  __int128 v31; 
  float v32; 
  double v35; 
  const char *v38; 
  __int128 v39; 
  float v40; 
  float v42; 
  const char *v45; 
  float v46; 
  float v48; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  int v56; 
  int v58; 
  unsigned __int8 v59; 
  int v61; 
  int v63; 
  int v64; 
  unsigned __int8 v65; 
  int v66; 
  unsigned __int8 v67; 
  int v68; 
  unsigned __int8 v69; 
  int v72; 
  int v74; 
  int v75; 
  unsigned __int8 v76; 
  int v78; 
  int v79; 
  unsigned __int8 v80; 
  int v81; 
  unsigned __int8 v82; 
  int v83; 
  unsigned __int8 v84; 
  float v86; 
  float v87; 
  float v89; 
  int v92; 
  int v94; 
  unsigned __int8 v95; 
  int v97; 
  int v99; 
  int v100; 
  unsigned __int8 v101; 
  int v102; 
  unsigned __int8 v103; 
  int v104; 
  unsigned __int8 v105; 
  int v108; 
  int v110; 
  int v111; 
  unsigned __int8 v113; 
  int v114; 
  int v115; 
  unsigned __int8 v116; 
  int v117; 
  unsigned __int8 v118; 
  int v119; 
  unsigned __int8 v120; 
  float v121; 
  float v122; 
  float v123; 
  double v124; 
  float v125; 
  const char *v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  double v131; 
  const char *v132; 
  float v133; 
  float v134; 
  materialCommands_t *Tess; 
  materialCommands_t *v136; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  float *imageKey; 
  float *imageKeya; 
  float *imageKeyb; 
  float *imageKeyc; 
  __int64 v145; 
  __int64 v146; 
  __int64 v147; 
  R_RT_ColorHandle result; 
  float outRadiometricScale; 
  float v150; 
  float exposure; 
  float sceneAvgKiloNits; 
  float v153; 
  float sceneAmbientAvgKiloNits; 
  vec3_t color; 
  GfxCmdBufContext v156; 
  GfxPointVertex v157; 
  float v158; 
  float v159; 
  float v160; 
  int v161; 
  float v162; 
  float v163; 
  float v164; 
  int v165; 
  float v166; 
  float v167; 
  float v168; 
  int v169; 
  float v170; 
  float v171; 
  float v172; 
  int v173; 
  float v174; 
  float v175; 
  float v176; 
  int v177; 
  float v178; 
  float v179; 
  float v180; 
  int v181; 
  float v182; 
  float v183; 
  float v184; 
  int v185; 
  float v186; 
  float v187; 
  float v188; 
  int v189; 
  float v190; 
  float v191; 
  float v192; 
  int v193; 
  float v194; 
  float v195; 
  float v196; 
  int v197; 
  float v198; 
  float v199; 
  float v200; 
  int v201; 
  char v202[256]; 
  char v203[256]; 
  char dest[256]; 
  char v205[256]; 
  __int128 v206; 
  __int128 v207; 
  __int128 v208; 
  __int128 v209; 
  __int128 v210; 
  __int128 v211; 
  __int128 v212; 
  __int128 v213; 
  __int128 v214; 
  __int128 v215; 

  data = gfxContext->state->data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_debug.cpp", 139, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->viewInfo && r_hdrSpotmeter->current.enabled )
  {
    v215 = v1;
    v214 = v2;
    v213 = v3;
    v212 = v4;
    v211 = v5;
    v210 = v6;
    v209 = v7;
    v208 = v8;
    v207 = v9;
    v206 = v10;
    R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    width = R_RT_Handle::GetSurface(&result)->m_image.m_base.width;
    Surface = R_RT_Handle::GetSurface(&result);
    debugFont = backEnd.debugFont;
    viewInfo = data->viewInfo;
    height = Surface->m_image.m_base.height;
    pixelHeight = backEnd.debugFont->pixelHeight;
    R_Set2D(gfxContext->source);
    if ( r_hdrScopesRenderStage->current.integer && r_hdrScopesResizeScreen->current.enabled )
    {
      if ( r_hdrScopesLayout->current.integer == 1 )
      {
        v19 = width >> 2;
        v20 = (unsigned int)height >> 2;
        goto LABEL_18;
      }
      v21 = 1024;
      v19 = width >> 1;
      v22 = (float)height;
      if ( (int)(float)(v22 * r_hdrScopesOverlaySplit->current.value) < 1024 )
        v21 = (int)(float)(v22 * r_hdrScopesOverlaySplit->current.value);
      enabled = 0;
      if ( v21 )
        enabled = r_hdrScopesDrawWaveform->current.enabled;
      if ( enabled )
        LODWORD(height) = height - v21;
    }
    else
    {
      v19 = width >> 1;
    }
    v20 = (unsigned int)height >> 1;
LABEL_18:
    v24 = (float)v20;
    v26 = (float)v19;
    v25 = v26;
    integer = r_debugShaderMaterial->current.integer;
    v29 = 0;
    if ( (unsigned int)integer <= 0x25 )
    {
      v28 = 0x21400001FAi64;
      if ( _bittest64(&v28, integer) )
        v29 = 1;
    }
    v156 = *gfxContext;
    RB_DrawRect2D(&v156, v26 - 5.0, v24 - 155.0, 300.0, 130.0, (const GfxColor)0x80000000);
    v156 = *gfxContext;
    RB_DrawRect2D(&v156, v26 - 5.0, v24 + 45.0, 300.0, 55.0, (const GfxColor)0x80000000);
    v167 = v24 + 16.0;
    v171 = v24 + 16.0;
    v175 = v24 + 16.0;
    v179 = v24 + 16.0;
    v158 = v26 + 16.0;
    v162 = v26 + 16.0;
    v166 = v26 + 16.0;
    v170 = v26 + 16.0;
    v186 = v26 - 4.0;
    v190 = v26 + 4.0;
    v195 = v24 - 4.0;
    v199 = v24 + 4.0;
    v30 = *gfxContext;
    v157.xyz.v[0] = v26 - 16.0;
    v157.xyz.v[1] = v24 - 16.0;
    v157.xyz.v[2] = 0.0;
    v159 = v24 - 16.0;
    v160 = 0.0;
    v163 = v24 - 16.0;
    v164 = 0.0;
    v168 = 0.0;
    v172 = 0.0;
    v174 = v26 - 16.0;
    v176 = 0.0;
    v178 = v26 - 16.0;
    v180 = 0.0;
    v182 = v26 - 16.0;
    v183 = v24 - 16.0;
    v184 = 0.0;
    v187 = v24;
    v188 = 0.0;
    v191 = v24;
    v192 = 0.0;
    v194 = (float)v19;
    v196 = 0.0;
    v198 = v194;
    v200 = 0.0;
    *(_DWORD *)v157.color = 0x40000000;
    v161 = 0x40000000;
    v165 = 0x40000000;
    v169 = 0x40000000;
    v173 = 0x40000000;
    v177 = 0x40000000;
    v181 = 0x40000000;
    v185 = 0x40000000;
    v189 = 0x40000000;
    v193 = 0x40000000;
    v197 = 0x40000000;
    v201 = 0x40000000;
    v156 = v30;
    RB_DrawLines2D(&v156, 6, 1, &v157);
    v156 = *gfxContext;
    RB_DrawText(&v156, "PRE TONEMAPPING", debugFont, v26, v24 - 140.0, (const GfxColor)-1);
    R_Tonemap_GetRadiometricScale(data, viewInfo, &outRadiometricScale, NULL);
    v31 = LODWORD(s_centerPixel[0].v[0]);
    v32 = (float)((float)((float)(s_centerPixel[0].v[0] * 0.21259999) + (float)(s_centerPixel[0].v[1] * 0.71520001)) + (float)(s_centerPixel[0].v[2] * 0.0722)) / outRadiometricScale;
    *(float *)&v31 = v32 * 1000.0;
    _XMM6 = v31;
    _XMM11 = LODWORD(FLOAT_0_1);
    v35 = (float)((float)(logf_0((float)(v32 * 1000.0) + 0.000060999999) * 1.442695) + 2.8399999);
    __asm
    {
      vcmpless xmm0, xmm11, xmm7
      vblendvps xmm0, xmm6, xmm7, xmm0
    }
    v38 = "PNT LUM  = %.3fkn (EV %.3f)";
    if ( v32 < 0.1 )
      v38 = "PNT LUM  = %.3fn (EV %.3f)";
    Com_sprintf(dest, 0x100ui64, v38, *(float *)&_XMM0, v35);
    v156 = *gfxContext;
    RB_DrawText(&v156, dest, debugFont, v25, v24 - 128.0, (const GfxColor)-1);
    v39 = LODWORD(s_centerAverage[0].v[0]);
    v40 = (float)((float)((float)(s_centerAverage[0].v[0] * 0.21259999) + (float)(s_centerAverage[0].v[1] * 0.71520001)) + (float)(s_centerAverage[0].v[2] * 0.0722)) / outRadiometricScale;
    *(float *)&v39 = v40 * 1000.0;
    _XMM6 = v39;
    v42 = (float)(logf_0((float)(v40 * 1000.0) + 0.000060999999) * 1.442695) + 2.8399999;
    __asm
    {
      vcmpless xmm0, xmm11, xmm7
      vblendvps xmm0, xmm6, xmm7, xmm0
    }
    v45 = "AVG LUM  = %.3fkn (EV %.3f)";
    if ( v40 < 0.1 )
      v45 = "AVG LUM  = %.3fn (EV %.3f)";
    Com_sprintf(dest, 0x100ui64, v45, *(float *)&_XMM0, v42);
    v156 = *gfxContext;
    RB_DrawText(&v156, dest, debugFont, v25, v24 - 116.0, (const GfxColor)-1);
    v46 = s_centerPixel[0].v[2];
    _XMM13 = LODWORD(s_centerPixel[0].v[0]);
    v48 = s_centerPixel[0].v[1];
    __asm { vunpcklps xmm0, xmm13, xmm14 }
    *(float *)&v156.state = s_centerPixel[0].v[2];
    *(double *)color.v = *(double *)&_XMM0;
    color.v[2] = s_centerPixel[0].v[2];
    v150 = s_centerPixel[0].v[2];
    LinearToGammaColor_Srgb(&color);
    v50 = v46 * 0.0722;
    v51 = FLOAT_0_41666666;
    v52 = (float)((float)(*(float *)&_XMM13 * 0.21259999) + (float)(v48 * 0.71520001)) + v50;
    if ( v52 > 0.0031308001 )
      powf_0(v52, 0.41666666);
    if ( v29 )
    {
      v53 = v150;
      _XMM6 = 0i64;
      __asm { vroundss xmm0, xmm6, xmm2, 1 }
      v56 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v56 = 255;
      __asm { vroundss xmm0, xmm6, xmm2, 1 }
      v58 = (int)*(float *)&_XMM0;
      v59 = v56;
      if ( (int)*(float *)&_XMM0 > 255 )
        v58 = 255;
      __asm { vroundss xmm0, xmm6, xmm2, 1 }
      v61 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v61 = 255;
      __asm { vroundss xmm0, xmm6, xmm2, 1 }
      v63 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v63 = 255;
      if ( v56 < 0 )
        v59 = 0;
      v64 = v59;
      v65 = v58;
      if ( v58 < 0 )
        v65 = 0;
      v66 = v65;
      v67 = v61;
      LODWORD(imageKey) = v66;
      if ( v61 < 0 )
        v67 = 0;
      v68 = v67;
      v69 = v63;
      if ( v63 < 0 )
        v69 = 0;
      LODWORD(fmt) = v68;
      Com_sprintf(v203, 0x100ui64, "PNT RGB  = %i, %i, %i (Lum %i) ", v69, fmt, imageKey, v64);
      *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
      RB_DrawText((GfxCmdBufContext *)&result, v203, debugFont, v25, v24 - 94.0, (const GfxColor)-1);
      __asm
      {
        vroundss xmm2, xmm6, xmm1, 1
        vroundss xmm1, xmm6, xmm3, 1
      }
      v72 = (int)*(float *)&_XMM1;
      __asm { vroundss xmm1, xmm6, xmm3, 1 }
      v74 = (int)*(float *)&_XMM1;
      v75 = (int)*(float *)&_XMM2;
      if ( (int)*(float *)&_XMM2 > 255 )
        v75 = 255;
      if ( v72 > 255 )
        v72 = 255;
      if ( v74 > 255 )
        v74 = 255;
      v76 = v75;
      __asm { vroundss xmm1, xmm6, xmm3, 1 }
      v78 = (int)*(float *)&_XMM1;
      if ( (int)*(float *)&_XMM1 > 255 )
        v78 = 255;
      if ( v75 < 0 )
        v76 = 0;
      v79 = v76;
      v80 = v72;
      if ( v72 < 0 )
        v80 = 0;
      LODWORD(v146) = v79;
      v81 = v80;
      v82 = v74;
      LODWORD(imageKeya) = v81;
      if ( v74 < 0 )
        v82 = 0;
      v83 = v82;
      v84 = v78;
      if ( v78 < 0 )
        v84 = 0;
      LODWORD(fmta) = v83;
      Com_sprintf(v203, 0x100ui64, "PNT sRGB = %i, %i, %i (Lum %i) ", v84, fmta, imageKeya, v146);
      *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
      RB_DrawText((GfxCmdBufContext *)&result, v203, debugFont, v25, v24 - 82.0, (const GfxColor)-1);
      v51 = FLOAT_0_41666666;
    }
    else
    {
      v53 = v150;
    }
    Com_sprintf(v203, 0x100ui64, "PNT LIN  = %.5f, %.5f, %.5f", *(float *)&_XMM13, v48, v53);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, v203, debugFont, v25, v24 - 70.0, (const GfxColor)-1);
    _XMM12 = LODWORD(s_centerAverage[0].v[0]);
    v86 = s_centerAverage[0].v[1];
    v87 = s_centerAverage[0].v[2];
    __asm { vunpcklps xmm0, xmm12, xmm13 }
    *(float *)&v156.state = s_centerAverage[0].v[2];
    *(double *)color.v = *(double *)&_XMM0;
    color.v[2] = s_centerAverage[0].v[2];
    LinearToGammaColor_Srgb(&color);
    v89 = (float)((float)(*(float *)&_XMM12 * 0.21259999) + (float)(v86 * 0.71520001)) + (float)(v87 * 0.0722);
    if ( v89 > 0.0031308001 )
      powf_0(v89, v51);
    if ( v29 )
    {
      _XMM6 = 0i64;
      __asm { vroundss xmm0, xmm6, xmm2, 1 }
      v92 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v92 = 255;
      __asm { vroundss xmm0, xmm6, xmm2, 1 }
      v94 = (int)*(float *)&_XMM0;
      v95 = v92;
      if ( (int)*(float *)&_XMM0 > 255 )
        v94 = 255;
      __asm { vroundss xmm0, xmm6, xmm2, 1 }
      v97 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v97 = 255;
      __asm { vroundss xmm0, xmm6, xmm2, 1 }
      v99 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 > 255 )
        v99 = 255;
      if ( v92 < 0 )
        v95 = 0;
      v100 = v95;
      v101 = v94;
      if ( v94 < 0 )
        v101 = 0;
      LODWORD(v145) = v100;
      v102 = v101;
      v103 = v97;
      LODWORD(imageKeyb) = v102;
      if ( v97 < 0 )
        v103 = 0;
      v104 = v103;
      v105 = v99;
      if ( v99 < 0 )
        v105 = 0;
      LODWORD(fmtb) = v104;
      Com_sprintf(v203, 0x100ui64, "AVG RGB  = %i, %i, %i (Lum %i) ", v105, fmtb, imageKeyb, v145);
      *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
      RB_DrawText((GfxCmdBufContext *)&result, v203, debugFont, v25, v24 - 48.0, (const GfxColor)-1);
      __asm
      {
        vroundss xmm2, xmm6, xmm1, 1
        vroundss xmm1, xmm6, xmm3, 1
      }
      v108 = (int)*(float *)&_XMM1;
      __asm { vroundss xmm1, xmm6, xmm3, 1 }
      v110 = (int)*(float *)&_XMM1;
      v111 = (int)*(float *)&_XMM2;
      if ( (int)*(float *)&_XMM2 > 255 )
        v111 = 255;
      __asm { vroundss xmm1, xmm6, xmm3, 1 }
      if ( v108 > 255 )
        v108 = 255;
      if ( v110 > 255 )
        v110 = 255;
      v113 = v111;
      v114 = (int)*(float *)&_XMM1;
      if ( (int)*(float *)&_XMM1 > 255 )
        v114 = 255;
      if ( v111 < 0 )
        v113 = 0;
      v115 = v113;
      v116 = v108;
      if ( v108 < 0 )
        v116 = 0;
      LODWORD(v147) = v115;
      v117 = v116;
      v118 = v110;
      LODWORD(imageKeyc) = v117;
      if ( v110 < 0 )
        v118 = 0;
      v119 = v118;
      v120 = v114;
      if ( v114 < 0 )
        v120 = 0;
      LODWORD(fmtc) = v119;
      Com_sprintf(v203, 0x100ui64, "AVG sRGB = %i, %i, %i (Lum %i) ", v120, fmtc, imageKeyc, v147);
      *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
      RB_DrawText((GfxCmdBufContext *)&result, v203, debugFont, v25, v24 - 36.0, (const GfxColor)-1);
    }
    Com_sprintf(v205, 0x100ui64, "AVG LIN  = %.5f, %.5f, %.5f", *(float *)&_XMM12, v86, v87);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, v205, debugFont, v25, v24 - 24.0, (const GfxColor)-1);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, "POST TONEMAPPING", debugFont, v25, v24 + 60.0, (const GfxColor)-1);
    Com_sprintf(v203, 0x100ui64, "PNT RGB = %.3f, %.3f, %.3f", s_centerPixel[1].v[0], s_centerPixel[1].v[1], s_centerPixel[1].v[2]);
    Com_sprintf(v205, 0x100ui64, "AVG RGB = %.3f, %.3f, %.3f", s_centerAverage[1].v[0], s_centerAverage[1].v[1], s_centerAverage[1].v[2]);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, v203, debugFont, v25, v24 + 90.0, (const GfxColor)-1);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, v205, debugFont, v25, v24 + 102.0, (const GfxColor)-1);
    R_Tonemap_GetExposureInfo(data, viewInfo, &exposure, &sceneAvgKiloNits, &sceneAmbientAvgKiloNits, &v153);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawRect2D((GfxCmdBufContext *)&result, 95.0, 79.0, 400.0, 120.0, (const GfxColor)0x80000000);
    Com_sprintf(v202, 0x100ui64, "%g", outRadiometricScale);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, "RADIOMETRIC SCALE", debugFont, 100.0, 100.0, (const GfxColor)-1);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, v202, debugFont, 320.0, 100.0, (const GfxColor)-1);
    v121 = (float)pixelHeight;
    v122 = (float)pixelHeight + 100.0;
    Com_sprintf(v202, 0x100ui64, "%g", s_world.draw.bakedLightScale);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, "BAKE LIGHT SCALE", debugFont, 100.0, v122, (const GfxColor)-1);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, v202, debugFont, 320.0, v122, (const GfxColor)-1);
    v123 = v122 + (float)pixelHeight;
    v124 = (float)((float)(logf_0((float)(180.0 / viewInfo->tonemap.staticExposureLinear) + 0.000060999999) * 1.442695) + 2.8399999);
    Com_sprintf(v202, 0x100ui64, "EV %.3f", v124);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, "STATIC EXPOSURE", debugFont, 100.0, v123, (const GfxColor)-1);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, v202, debugFont, 320.0, v123, (const GfxColor)-1);
    v125 = v123 + (float)pixelHeight;
    *(float *)&v124 = (float)(logf_0((float)(180.0 / exposure) + 0.000060999999) * 1.442695) + 2.8399999;
    Com_sprintf(v202, 0x100ui64, "EV %.3f", *(float *)&v124);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, "CURRENT EXPOSURE", debugFont, 100.0, v125, (const GfxColor)-1);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, v202, debugFont, 320.0, v125, (const GfxColor)-1);
    v126 = "Disabled";
    if ( viewInfo->tonemap.autoExposure )
      v126 = "Enabled";
    v127 = v125 + v121;
    Com_sprintf(v202, 0x100ui64, "AUTO EXPOSURE (%s)", v126);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, v202, debugFont, 100.0, v127, (const GfxColor)-16711936);
    v128 = sceneAvgKiloNits;
    v129 = sceneAvgKiloNits * 1000.0;
    v130 = v127 + v121;
    v131 = (float)((float)(logf_0((float)(sceneAvgKiloNits * 1000.0) + 0.000060999999) * 1.442695) + 2.8399999);
    if ( v128 < 0.1 )
    {
      v132 = "EV %.3f (%.3fn)";
      v128 = v129;
    }
    else
    {
      v132 = "EV %.3f (%.3fkn)";
    }
    Com_sprintf(v202, 0x100ui64, v132, v131, v128);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, "AVG SCENE", debugFont, 120.0, v130, (const GfxColor)-1);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, v202, debugFont, 320.0, v130, (const GfxColor)-1);
    v133 = v130 + v121;
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, "AUTO EXPOSURE ADJUST", debugFont, 120.0, v133, (const GfxColor)-1);
    v134 = (float)(logf_0(v153) - -1.7147983) * 1.442695;
    Com_sprintf(v202, 0x100ui64, "EV %.3f", v134);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)&result, v202, debugFont, 320.0, v133, (const GfxColor)-1);
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    Tess = R_GetTess((GfxCmdBufContext *)&result);
    v136 = Tess;
    if ( Tess->vertexCount )
    {
      *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
      RB_EndTessSurfaceInternal((GfxCmdBufContext *)&result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
    }
    else
    {
      if ( Tess->indexCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
          __debugbreak();
      }
      v136->viewStatsTarget = GFX_VIEW_STATS_INVALID;
      v136->primStatsTarget = GFX_PRIM_STATS_INVALID;
    }
  }
}

/*
==============
RB_HDRSpotMeter_ProcessStage
==============
*/
void RB_HDRSpotMeter_ProcessStage(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *colorRt, SpotMeterId spotMeterId)
{
  GfxCmdBufState *state; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  R_RT_ColorHandle v10; 

  if ( r_hdrSpotmeter->current.enabled && !viewInfo->viewInfoIndex )
  {
    if ( s_spotMeterTarget.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&s_spotMeterTarget);
      *(GfxCmdBufContext *)&v10.m_surfaceID = *gfxContext;
      R_UnbindRenderTarget((GfxCmdBufContext *)&v10);
      state = gfxContext->state;
      v10 = *colorRt;
      R_HW_AddResourceTransition(state, &v10, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
      v10 = *colorRt;
      R_HDRSpotMeter_ProcessStage(GfxComputeCmdBufState, viewInfo, &v10, spotMeterId);
      v10 = *colorRt;
      R_HW_AddResourceTransition(state, &v10, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
    }
    else if ( s_spotMeterTarget.m_tracking.m_allocCounter != s_spotMeterTarget.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
  }
}

/*
==============
R_HDRSpotMeter_Initialize
==============
*/

void __fastcall R_HDRSpotMeter_Initialize(double _XMM0_8)
{
  R_RT_Handle v1; 
  R_RT_Handle v3; 
  R_RT_Handle v4; 
  R_RT_Handle result; 

  if ( s_spotMeterTarget.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_spotMeterTarget);
  }
  else
  {
    if ( s_spotMeterTarget.m_tracking.m_allocCounter != s_spotMeterTarget.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_spotMeterTarget.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    v1 = *R_RT_CreateInternal(&result, 0x20u, 0x20u, 0x20u, 0x20u, 1u, 1u, 1u, g_R_RT_renderTargetFmts[32], R_RT_Flag_Readback|R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime, &colorBlack, D3D12_RESOURCE_STATE_COPY_DEST, "Spot Meter Target", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_debug.cpp(48)");
    v4 = v1;
    v3 = v1;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v3);
      if ( (R_RT_Handle::GetSurface(&v3)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v1 = v3;
        __debugbreak();
      }
      else
      {
        v1 = v3;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v1 = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    s_spotMeterTarget = (R_RT_ColorHandle)v1;
  }
}

/*
==============
R_HDRSpotMeter_ProcessStage
==============
*/
void R_HDRSpotMeter_ProcessStage(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt, SpotMeterId spotMeterId)
{
  __int64 v5; 
  unsigned int width; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v11; 
  const GfxTexture *v12; 
  int v13; 
  unsigned __int8 *v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned __int8 *v17; 
  __int64 v18; 
  __int64 v19; 
  float *v20; 
  float v21; 
  float v22; 
  R_RT_ColorHandle *v23; 
  int srcY; 
  R_RT_ColorHandle v25; 
  unsigned int v26; 

  v5 = spotMeterId;
  width = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(srcRt);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  v11 = R_RT_Handle::GetSurface(&s_spotMeterTarget);
  v12 = R_Texture_GetResident(v11->m_image.m_base.textureId);
  srcY = (height >> 1) - 16;
  v13 = 0;
  R_CopyTextureRect(state, v12, Resident, 0, 0, (width >> 1) - 16, srcY, 0x20u, 0x20u, 1.0, 0.0);
  R_AcquireGpuFenceLock();
  R_FinishGpuFence();
  R_InsertGpuFence();
  R_FinishGpuFence();
  R_ReleaseGpuFenceLock();
  v25 = *s_spotMeterReadbackTarget;
  v14 = R_MapReadbackRt(state, &v25, 0, &v26, NULL);
  v15 = v26;
  v16 = v5;
  v17 = v14;
  v18 = 16 * v26;
  s_centerPixel[v16].v[0] = *(float *)&v14[v18 + 256];
  s_centerPixel[v16].v[1] = *(float *)&v14[v18 + 260];
  s_centerPixel[v16].v[2] = *(float *)&v14[v18 + 264];
  *(_QWORD *)s_centerAverage[v16].v = 0i64;
  s_centerAverage[v16].v[2] = 0.0;
  do
  {
    v19 = 2i64;
    v20 = (float *)&v17[v15 * v13 + 24];
    do
    {
      v21 = *(v20 - 6) + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[0] = v21;
      s_centerAverage[v5].v[1] = *(v20 - 5) + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = *(v20 - 4) + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = v21 + *(v20 - 2);
      s_centerAverage[v5].v[1] = *(v20 - 1) + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = s_centerAverage[v5].v[2] + *v20;
      s_centerAverage[v5].v[0] = v20[2] + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = v20[3] + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = v20[4] + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = v20[6] + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = v20[7] + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = v20[8] + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = v20[10] + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = v20[11] + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = v20[12] + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = v20[14] + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = v20[15] + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = v20[16] + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = v20[18] + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = v20[19] + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = v20[20] + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = v20[22] + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = v20[23] + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = v20[24] + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = v20[26] + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = v20[27] + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = v20[28] + s_centerAverage[v5].v[2];
      v22 = v20[30];
      v20 += 64;
      s_centerAverage[v5].v[0] = v22 + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = *(v20 - 33) + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = *(v20 - 32) + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = *(v20 - 30) + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = *(v20 - 29) + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = *(v20 - 28) + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = *(v20 - 26) + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = *(v20 - 25) + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = *(v20 - 24) + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = *(v20 - 22) + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = *(v20 - 21) + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = *(v20 - 20) + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = *(v20 - 18) + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = *(v20 - 17) + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = *(v20 - 16) + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = *(v20 - 14) + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = *(v20 - 13) + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = *(v20 - 12) + s_centerAverage[v5].v[2];
      s_centerAverage[v5].v[0] = *(v20 - 10) + s_centerAverage[v5].v[0];
      s_centerAverage[v5].v[1] = *(v20 - 9) + s_centerAverage[v5].v[1];
      s_centerAverage[v5].v[2] = *(v20 - 8) + s_centerAverage[v5].v[2];
      --v19;
    }
    while ( v19 );
    ++v13;
  }
  while ( v13 < 32 );
  v23 = s_spotMeterReadbackTarget;
  s_centerAverage[v5].v[0] = 0.0009765625 * s_centerAverage[v5].v[0];
  s_centerAverage[v5].v[1] = 0.0009765625 * s_centerAverage[v5].v[1];
  s_centerAverage[v5].v[2] = 0.0009765625 * s_centerAverage[v5].v[2];
  v25 = *v23;
  R_UnmapReadbackRt(state, &v25);
}

/*
==============
R_HDRSpotMeter_Shutdown
==============
*/

void __fastcall R_HDRSpotMeter_Shutdown(double _XMM0_8)
{
  R_RT_Handle v2; 

  if ( s_spotMeterTarget.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_spotMeterTarget);
    v2 = (R_RT_Handle)s_spotMeterTarget;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v2);
      if ( (R_RT_Handle::GetSurface(&v2)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame", *(_QWORD *)&v2.m_surfaceID, *(_QWORD *)&v2.m_tracking.m_allocCounter, v2.m_tracking.m_name, v2.m_tracking.m_location) )
        __debugbreak();
      R_RT_DestroyInternal(&v2);
    }
    else if ( s_spotMeterTarget.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v2.m_surfaceID, *(_QWORD *)&v2.m_tracking.m_allocCounter, v2.m_tracking.m_name, v2.m_tracking.m_location) )
    {
      __debugbreak();
    }
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_spotMeterTarget.m_surfaceID = 0;
    s_spotMeterTarget.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&s_spotMeterTarget.m_tracking.m_name = _XMM0;
  }
  else if ( s_spotMeterTarget.m_tracking.m_allocCounter != s_spotMeterTarget.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}

