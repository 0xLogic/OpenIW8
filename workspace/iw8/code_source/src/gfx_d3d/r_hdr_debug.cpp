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
  const GfxBackEndData *data; 
  GfxFont *debugFont; 
  const GfxViewInfo *viewInfo; 
  unsigned __int64 integer; 
  __int64 v25; 
  bool v26; 
  const char *v72; 
  char v74; 
  const char *v93; 
  char v111; 
  unsigned __int8 v128; 
  int v137; 
  unsigned __int8 v138; 
  int v139; 
  unsigned __int8 v140; 
  int v141; 
  unsigned __int8 v142; 
  unsigned __int8 v161; 
  int v164; 
  unsigned __int8 v165; 
  int v166; 
  unsigned __int8 v167; 
  int v168; 
  unsigned __int8 v169; 
  unsigned __int8 v202; 
  int v211; 
  unsigned __int8 v212; 
  int v213; 
  unsigned __int8 v214; 
  int v215; 
  unsigned __int8 v216; 
  unsigned __int8 v236; 
  int v238; 
  unsigned __int8 v239; 
  int v240; 
  unsigned __int8 v241; 
  int v242; 
  unsigned __int8 v243; 
  const char *v327; 
  const char *v341; 
  materialCommands_t *Tess; 
  materialCommands_t *v361; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  char *fmtg; 
  float fmth; 
  char *fmti; 
  float fmtj; 
  char *fmt; 
  float fmtk; 
  char *fmta; 
  float fmtl; 
  char *fmtm; 
  float fmtn; 
  char *fmtb; 
  float fmto; 
  char *fmtc; 
  float fmtp; 
  char *fmtq; 
  float fmtr; 
  float fmts; 
  char *fmtt; 
  char *fmtu; 
  float fmtv; 
  float fmtw; 
  float fmtx; 
  float fmty; 
  float fmtz; 
  float fmtba; 
  float fmtbb; 
  float fmtbc; 
  float fmtbd; 
  float fmtbe; 
  float fmtbf; 
  float fmtbg; 
  char *fmtbh; 
  float fmtbi; 
  float fmtbj; 
  float fmtbk; 
  float fmtbl; 
  float *imageKey; 
  float *imageKeya; 
  float *imageKeyd; 
  float *imageKeyb; 
  float *imageKeyc; 
  float *imageKeye; 
  float *imageKeyf; 
  float *imageKeyg; 
  __int64 v416; 
  __int64 v417; 
  __int64 v418; 
  R_RT_ColorHandle result; 
  float outRadiometricScale; 
  float exposure; 
  float sceneAvgKiloNits; 
  float v424; 
  float sceneAmbientAvgKiloNits; 
  vec3_t color; 
  GfxCmdBufContext v427; 
  GfxPointVertex v428; 
  int v432; 
  int v436; 
  int v440; 
  int v444; 
  int v448; 
  int v452; 
  int v456; 
  int v460; 
  int v464; 
  int v468; 
  int v472; 
  char v473[256]; 
  char v474[256]; 
  char dest[256]; 
  char v476[256]; 

  _RSI = gfxContext;
  data = gfxContext->state->data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_debug.cpp", 139, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->viewInfo && r_hdrSpotmeter->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+630h+var_30], xmm6
      vmovaps [rsp+630h+var_40], xmm7
      vmovaps [rsp+630h+var_50], xmm8
      vmovaps [rsp+630h+var_60], xmm9
      vmovaps [rsp+630h+var_70], xmm10
      vmovaps [rsp+630h+var_80], xmm11
      vmovaps [rsp+630h+var_90], xmm12
      vmovaps [rsp+630h+var_A0], xmm13
      vmovaps [rsp+630h+var_B0], xmm14
      vmovaps [rsp+630h+var_C0], xmm15
    }
    R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    R_RT_Handle::GetSurface(&result);
    R_RT_Handle::GetSurface(&result);
    debugFont = backEnd.debugFont;
    viewInfo = data->viewInfo;
    R_Set2D(_RSI->source);
    if ( r_hdrScopesRenderStage->current.integer && r_hdrScopesResizeScreen->current.enabled && r_hdrScopesLayout->current.integer != 1 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rbx
        vmulss  xmm0, xmm0, dword ptr [rax+28h]
        vcvttss2si rax, xmm0
      }
    }
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vcvtsi2ss xmm8, xmm8, rax
      vxorps  xmm9, xmm9, xmm9
      vcvtsi2ss xmm9, xmm9, rax
    }
    integer = r_debugShaderMaterial->current.integer;
    v26 = 0;
    if ( (unsigned int)integer <= 0x25 )
    {
      v25 = 0x21400001FAi64;
      if ( _bittest64(&v25, integer) )
        v26 = 1;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vsubss  xmm7, xmm9, cs:__real@40a00000
      vsubss  xmm2, xmm8, cs:__real@431b0000
      vmovss  xmm3, cs:__real@43960000
      vmovups [rbp+530h+var_5A0], xmm0
      vmovss  xmm0, cs:__real@43020000
      vmovaps xmm1, xmm7
      vmovss  dword ptr [rsp+630h+fmt], xmm0
    }
    RB_DrawRect2D(&v427, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, (const GfxColor)0x80000000);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm8, cs:__real@42340000
      vmovss  xmm3, cs:__real@43960000
      vmovups [rbp+530h+var_5A0], xmm0
      vmovss  xmm0, cs:__real@425c0000
      vmovaps xmm1, xmm7
      vmovss  dword ptr [rsp+630h+fmt], xmm0
    }
    RB_DrawRect2D(&v427, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, (const GfxColor)0x80000000);
    __asm
    {
      vmovss  xmm0, cs:__real@41800000
      vxorps  xmm4, xmm4, xmm4
      vaddss  xmm1, xmm9, xmm0
      vsubss  xmm3, xmm9, xmm0
      vsubss  xmm2, xmm8, xmm0
      vaddss  xmm0, xmm8, xmm0
      vmovss  [rbp+530h+var_55C], xmm0
      vmovss  [rbp+530h+var_54C], xmm0
      vmovss  [rbp+530h+var_53C], xmm0
      vmovss  [rbp+530h+var_52C], xmm0
      vmovss  [rbp+530h+var_580], xmm1
      vmovss  [rbp+530h+var_570], xmm1
      vmovss  [rbp+530h+var_560], xmm1
      vmovss  [rbp+530h+var_550], xmm1
      vmovss  xmm1, cs:__real@40800000
      vsubss  xmm0, xmm9, xmm1
      vmovss  [rbp+530h+var_510], xmm0
      vaddss  xmm0, xmm9, xmm1
      vmovss  [rbp+530h+var_500], xmm0
      vsubss  xmm0, xmm8, xmm1
      vmovss  [rbp+530h+var_4EC], xmm0
      vaddss  xmm0, xmm8, xmm1
      vmovss  [rbp+530h+var_4DC], xmm0
      vmovups xmm0, xmmword ptr [rsi]
      vmovss  [rbp+530h+var_590], xmm3
      vmovss  [rbp+530h+var_58C], xmm2
      vmovss  [rbp+530h+var_588], xmm4
      vmovss  [rbp+530h+var_57C], xmm2
      vmovss  [rbp+530h+var_578], xmm4
      vmovss  [rbp+530h+var_56C], xmm2
      vmovss  [rbp+530h+var_568], xmm4
      vmovss  [rbp+530h+var_558], xmm4
      vmovss  [rbp+530h+var_548], xmm4
      vmovss  [rbp+530h+var_540], xmm3
      vmovss  [rbp+530h+var_538], xmm4
      vmovss  [rbp+530h+var_530], xmm3
      vmovss  [rbp+530h+var_528], xmm4
      vmovss  [rbp+530h+var_520], xmm3
      vmovss  [rbp+530h+var_51C], xmm2
      vmovss  [rbp+530h+var_518], xmm4
      vmovss  [rbp+530h+var_50C], xmm8
      vmovss  [rbp+530h+var_508], xmm4
      vmovss  [rbp+530h+var_4FC], xmm8
      vmovss  [rbp+530h+var_4F8], xmm4
      vmovss  [rbp+530h+var_4F0], xmm9
      vmovss  [rbp+530h+var_4E8], xmm4
      vmovss  [rbp+530h+var_4E0], xmm9
      vmovss  [rbp+530h+var_4D8], xmm4
    }
    *(_DWORD *)v428.color = 0x40000000;
    v432 = 0x40000000;
    v436 = 0x40000000;
    v440 = 0x40000000;
    v444 = 0x40000000;
    v448 = 0x40000000;
    v452 = 0x40000000;
    v456 = 0x40000000;
    v460 = 0x40000000;
    v464 = 0x40000000;
    v468 = 0x40000000;
    v472 = 0x40000000;
    __asm { vmovups [rbp+530h+var_5A0], xmm0 }
    RB_DrawLines2D(&v427, 6, 1, &v428);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vsubss  xmm1, xmm8, cs:__real@430c0000
      vmovaps xmm3, xmm9
      vmovss  dword ptr [rsp+630h+fmt], xmm1
      vmovups [rbp+530h+var_5A0], xmm0
    }
    RB_DrawText(&v427, "PRE TONEMAPPING", debugFont, *(float *)&_XMM3, fmtf, (const GfxColor)-1);
    R_Tonemap_GetRadiometricScale(data, viewInfo, &outRadiometricScale, NULL);
    __asm
    {
      vmovss  xmm1, dword ptr cs:s_centerPixel+4
      vmulss  xmm2, xmm1, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+4; vec3_t const vec3_colorluminance
      vmovss  xmm0, dword ptr cs:s_centerPixel
      vmulss  xmm3, xmm0, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B; vec3_t const vec3_colorluminance
      vmovss  xmm0, dword ptr cs:s_centerPixel+8
      vmulss  xmm1, xmm0, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+8; vec3_t const vec3_colorluminance
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vdivss  xmm7, xmm2, [rsp+630h+outRadiometricScale]
      vmulss  xmm6, xmm7, cs:__real@447a0000
      vaddss  xmm0, xmm6, cs:__real@387fda40; X
    }
    *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3fb8aa3b
      vaddss  xmm0, xmm1, cs:__real@4035c28f
      vmovss  xmm11, cs:__real@3dcccccd
      vcvtss2sd xmm2, xmm0, xmm0
      vcmpless xmm0, xmm11, xmm7
      vblendvps xmm0, xmm6, xmm7, xmm0
      vcvtss2sd xmm3, xmm0, xmm0
      vcomiss xmm7, xmm11
    }
    v72 = "PNT LUM  = %.3fkn (EV %.3f)";
    __asm { vmovq   r9, xmm3 }
    if ( v74 )
      v72 = "PNT LUM  = %.3fn (EV %.3f)";
    __asm { vmovsd  [rsp+630h+fmt], xmm2 }
    Com_sprintf(dest, 0x100ui64, v72, _R9, fmtg);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vsubss  xmm1, xmm8, cs:__real@43000000
      vmovaps xmm3, xmm9
      vmovss  dword ptr [rsp+630h+fmt], xmm1
      vmovups [rbp+530h+var_5A0], xmm0
    }
    RB_DrawText(&v427, dest, debugFont, *(float *)&_XMM3, fmth, (const GfxColor)-1);
    __asm
    {
      vmovss  xmm1, dword ptr cs:s_centerAverage+4
      vmulss  xmm2, xmm1, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+4; vec3_t const vec3_colorluminance
      vmovss  xmm0, dword ptr cs:s_centerAverage
      vmulss  xmm3, xmm0, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B; vec3_t const vec3_colorluminance
      vmovss  xmm0, dword ptr cs:s_centerAverage+8
      vmulss  xmm1, xmm0, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+8; vec3_t const vec3_colorluminance
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vdivss  xmm7, xmm2, [rsp+630h+outRadiometricScale]
      vmulss  xmm6, xmm7, cs:__real@447a0000
      vaddss  xmm0, xmm6, cs:__real@387fda40; X
    }
    *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3fb8aa3b
      vaddss  xmm2, xmm1, cs:__real@4035c28f
      vcmpless xmm0, xmm11, xmm7
      vcomiss xmm7, xmm11
      vblendvps xmm0, xmm6, xmm7, xmm0
    }
    v93 = "AVG LUM  = %.3fkn (EV %.3f)";
    __asm
    {
      vcvtss2sd xmm3, xmm0, xmm0
      vcvtss2sd xmm4, xmm2, xmm2
    }
    if ( v74 )
      v93 = "AVG LUM  = %.3fn (EV %.3f)";
    __asm
    {
      vmovq   r9, xmm3
      vmovsd  [rsp+630h+fmt], xmm4
    }
    Com_sprintf(dest, 0x100ui64, v93, _R9, fmti);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vsubss  xmm1, xmm8, cs:__real@42e80000
      vmovaps xmm3, xmm9
      vmovss  dword ptr [rsp+630h+fmt], xmm1
      vmovups [rbp+530h+var_5A0], xmm0
    }
    RB_DrawText(&v427, dest, debugFont, *(float *)&_XMM3, fmtj, (const GfxColor)-1);
    __asm
    {
      vmovss  xmm6, dword ptr cs:s_centerPixel+8
      vmovss  xmm13, dword ptr cs:s_centerPixel
      vmovss  xmm14, dword ptr cs:s_centerPixel+4
      vunpcklps xmm0, xmm13, xmm14
      vmovss  dword ptr [rbp+530h+var_5A0+8], xmm6
      vmovsd  qword ptr [rsp+630h+color], xmm0
    }
    color.v[2] = *(float *)&v427.state;
    __asm { vmovss  [rsp+630h+var_5CC], xmm6 }
    LinearToGammaColor_Srgb(&color);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+8; vec3_t const vec3_colorluminance
      vmulss  xmm3, xmm13, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B; vec3_t const vec3_colorluminance
      vmulss  xmm2, xmm14, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+4; vec3_t const vec3_colorluminance
      vmovss  xmm6, cs:__real@3ed55555
      vmovss  xmm15, cs:__real@454de99a
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm11, xmm4, xmm1
      vcomiss xmm11, cs:__real@3b4d2e1c
    }
    if ( v74 | v111 )
    {
      __asm { vmulss  xmm12, xmm11, xmm15 }
    }
    else
    {
      __asm
      {
        vmovaps xmm1, xmm6; Y
        vmovaps xmm0, xmm11; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@43868333
        vsubss  xmm12, xmm1, cs:__real@41606666
      }
    }
    __asm
    {
      vmovss  xmm10, cs:__real@437f0000
      vmovss  xmm7, cs:__real@3f000000
    }
    if ( v26 )
    {
      __asm
      {
        vmulss  xmm0, xmm11, xmm10
        vmovss  xmm11, [rsp+630h+var_5CC]
        vaddss  xmm2, xmm0, xmm7
        vxorps  xmm6, xmm6, xmm6
        vroundss xmm0, xmm6, xmm2, 1
        vcvttss2si r8d, xmm0
        vmulss  xmm0, xmm11, xmm10
      }
      if ( _ER8 > 255 )
        _ER8 = 255;
      __asm
      {
        vaddss  xmm2, xmm0, xmm7
        vroundss xmm0, xmm6, xmm2, 1
        vcvttss2si edx, xmm0
      }
      v128 = _ER8;
      __asm { vmulss  xmm0, xmm14, xmm10 }
      if ( _EDX > 255 )
        _EDX = 255;
      __asm
      {
        vaddss  xmm2, xmm0, xmm7
        vroundss xmm0, xmm6, xmm2, 1
        vcvttss2si ecx, xmm0
        vmulss  xmm0, xmm13, xmm10
      }
      if ( _ECX > 255 )
        _ECX = 255;
      __asm
      {
        vaddss  xmm2, xmm0, xmm7
        vroundss xmm0, xmm6, xmm2, 1
        vcvttss2si r9d, xmm0
      }
      if ( _ER9 > 255 )
        _ER9 = 255;
      if ( _ER8 < 0 )
        v128 = 0;
      v137 = v128;
      v138 = _EDX;
      if ( _EDX < 0 )
        v138 = 0;
      v139 = v138;
      v140 = _ECX;
      LODWORD(imageKey) = v139;
      if ( _ECX < 0 )
        v140 = 0;
      v141 = v140;
      v142 = _ER9;
      if ( _ER9 < 0 )
        v142 = 0;
      LODWORD(fmt) = v141;
      Com_sprintf(v474, 0x100ui64, "PNT RGB  = %i, %i, %i (Lum %i) ", v142, fmt, imageKey, v137);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vsubss  xmm1, xmm8, cs:__real@42bc0000
        vmovaps xmm3, xmm9
        vmovss  dword ptr [rsp+630h+fmt], xmm1
        vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      }
      RB_DrawText((GfxCmdBufContext *)&result, v474, debugFont, *(float *)&_XMM3, fmtk, (const GfxColor)-1);
      __asm
      {
        vaddss  xmm1, xmm12, xmm7
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vroundss xmm2, xmm6, xmm1, 1
        vmulss  xmm1, xmm10, dword ptr [rbp+530h+color+8]
        vaddss  xmm3, xmm1, xmm7
        vroundss xmm1, xmm6, xmm3, 1
        vcvttss2si edx, xmm1
        vmulss  xmm1, xmm10, dword ptr [rsp+630h+color+4]
        vaddss  xmm3, xmm1, xmm7
        vroundss xmm1, xmm6, xmm3, 1
        vcvttss2si ecx, xmm1
        vmulss  xmm1, xmm10, dword ptr [rsp+630h+color]
        vcvttss2si r8d, xmm2
        vaddss  xmm3, xmm1, xmm7
      }
      if ( _ER8 > 255 )
        _ER8 = 255;
      if ( _EDX > 255 )
        _EDX = 255;
      if ( _ECX > 255 )
        _ECX = 255;
      v161 = _ER8;
      __asm
      {
        vroundss xmm1, xmm6, xmm3, 1
        vcvttss2si r9d, xmm1
      }
      if ( _ER9 > 255 )
        _ER9 = 255;
      if ( _ER8 < 0 )
        v161 = 0;
      v164 = v161;
      v165 = _EDX;
      if ( _EDX < 0 )
        v165 = 0;
      LODWORD(v417) = v164;
      v166 = v165;
      v167 = _ECX;
      LODWORD(imageKeya) = v166;
      if ( _ECX < 0 )
        v167 = 0;
      v168 = v167;
      v169 = _ER9;
      if ( _ER9 < 0 )
        v169 = 0;
      LODWORD(fmta) = v168;
      Com_sprintf(v474, 0x100ui64, "PNT sRGB = %i, %i, %i (Lum %i) ", v169, fmta, imageKeya, v417);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vsubss  xmm1, xmm8, cs:__real@42a40000
        vmovaps xmm3, xmm9
        vmovss  dword ptr [rsp+630h+fmt], xmm1
        vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      }
      RB_DrawText((GfxCmdBufContext *)&result, v474, debugFont, *(float *)&_XMM3, fmtl, (const GfxColor)-1);
      __asm { vmovss  xmm6, cs:__real@3ed55555 }
    }
    else
    {
      __asm { vmovss  xmm11, [rsp+630h+var_5CC] }
    }
    __asm
    {
      vcvtss2sd xmm0, xmm11, xmm11
      vcvtss2sd xmm3, xmm13, xmm13
      vcvtss2sd xmm1, xmm14, xmm14
      vmovsd  [rsp+630h+imageKey], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+630h+fmt], xmm1
    }
    Com_sprintf(v474, 0x100ui64, "PNT LIN  = %.5f, %.5f, %.5f", *(double *)&_XMM3, *(double *)&fmtm, *(double *)&imageKeyd);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vsubss  xmm1, xmm8, cs:__real@428c0000
      vmovaps xmm3, xmm9
      vmovss  dword ptr [rsp+630h+fmt], xmm1
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
    }
    RB_DrawText((GfxCmdBufContext *)&result, v474, debugFont, *(float *)&_XMM3, fmtn, (const GfxColor)-1);
    __asm
    {
      vmovss  xmm12, dword ptr cs:s_centerAverage
      vmovss  xmm13, dword ptr cs:s_centerAverage+4
      vmovss  xmm14, dword ptr cs:s_centerAverage+8
      vunpcklps xmm0, xmm12, xmm13
      vmovss  dword ptr [rbp+530h+var_5A0+8], xmm14
      vmovsd  qword ptr [rsp+630h+color], xmm0
    }
    color.v[2] = *(float *)&v427.state;
    LinearToGammaColor_Srgb(&color);
    __asm
    {
      vmulss  xmm3, xmm12, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B; vec3_t const vec3_colorluminance
      vmulss  xmm2, xmm13, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+4; vec3_t const vec3_colorluminance
      vmulss  xmm1, xmm14, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+8; vec3_t const vec3_colorluminance
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm11, xmm4, xmm1
      vcomiss xmm11, cs:__real@3b4d2e1c
    }
    if ( v74 | v111 )
    {
      __asm { vmulss  xmm15, xmm11, xmm15 }
    }
    else
    {
      __asm
      {
        vmovaps xmm1, xmm6; Y
        vmovaps xmm0, xmm11; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@43868333
        vsubss  xmm15, xmm1, cs:__real@41606666
      }
    }
    if ( v26 )
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vmulss  xmm0, xmm11, xmm10
        vaddss  xmm2, xmm0, xmm7
        vroundss xmm0, xmm6, xmm2, 1
        vcvttss2si r8d, xmm0
        vmulss  xmm0, xmm14, xmm10
      }
      if ( _ER8 > 255 )
        _ER8 = 255;
      __asm
      {
        vaddss  xmm2, xmm0, xmm7
        vroundss xmm0, xmm6, xmm2, 1
        vcvttss2si edx, xmm0
      }
      v202 = _ER8;
      __asm { vmulss  xmm0, xmm13, xmm10 }
      if ( _EDX > 255 )
        _EDX = 255;
      __asm
      {
        vaddss  xmm2, xmm0, xmm7
        vroundss xmm0, xmm6, xmm2, 1
        vcvttss2si ecx, xmm0
        vmulss  xmm0, xmm12, xmm10
      }
      if ( _ECX > 255 )
        _ECX = 255;
      __asm
      {
        vaddss  xmm2, xmm0, xmm7
        vroundss xmm0, xmm6, xmm2, 1
        vcvttss2si r9d, xmm0
      }
      if ( _ER9 > 255 )
        _ER9 = 255;
      if ( _ER8 < 0 )
        v202 = 0;
      v211 = v202;
      v212 = _EDX;
      if ( _EDX < 0 )
        v212 = 0;
      LODWORD(v416) = v211;
      v213 = v212;
      v214 = _ECX;
      LODWORD(imageKeyb) = v213;
      if ( _ECX < 0 )
        v214 = 0;
      v215 = v214;
      v216 = _ER9;
      if ( _ER9 < 0 )
        v216 = 0;
      LODWORD(fmtb) = v215;
      Com_sprintf(v474, 0x100ui64, "AVG RGB  = %i, %i, %i (Lum %i) ", v216, fmtb, imageKeyb, v416);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vsubss  xmm1, xmm8, cs:__real@42400000
        vmovaps xmm3, xmm9
        vmovss  dword ptr [rsp+630h+fmt], xmm1
        vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      }
      RB_DrawText((GfxCmdBufContext *)&result, v474, debugFont, *(float *)&_XMM3, fmto, (const GfxColor)-1);
      __asm
      {
        vaddss  xmm1, xmm15, xmm7
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vroundss xmm2, xmm6, xmm1, 1
        vmulss  xmm1, xmm10, dword ptr [rbp+530h+color+8]
        vaddss  xmm3, xmm1, xmm7
        vroundss xmm1, xmm6, xmm3, 1
        vcvttss2si edx, xmm1
        vmulss  xmm1, xmm10, dword ptr [rsp+630h+color+4]
        vaddss  xmm3, xmm1, xmm7
        vroundss xmm1, xmm6, xmm3, 1
        vcvttss2si ecx, xmm1
        vmulss  xmm1, xmm10, dword ptr [rsp+630h+color]
        vcvttss2si r8d, xmm2
        vaddss  xmm3, xmm1, xmm7
      }
      if ( _ER8 > 255 )
        _ER8 = 255;
      __asm { vroundss xmm1, xmm6, xmm3, 1 }
      if ( _EDX > 255 )
        _EDX = 255;
      if ( _ECX > 255 )
        _ECX = 255;
      v236 = _ER8;
      __asm { vcvttss2si r9d, xmm1 }
      if ( _ER9 > 255 )
        _ER9 = 255;
      if ( _ER8 < 0 )
        v236 = 0;
      v238 = v236;
      v239 = _EDX;
      if ( _EDX < 0 )
        v239 = 0;
      LODWORD(v418) = v238;
      v240 = v239;
      v241 = _ECX;
      LODWORD(imageKeyc) = v240;
      if ( _ECX < 0 )
        v241 = 0;
      v242 = v241;
      v243 = _ER9;
      if ( _ER9 < 0 )
        v243 = 0;
      LODWORD(fmtc) = v242;
      Com_sprintf(v474, 0x100ui64, "AVG sRGB = %i, %i, %i (Lum %i) ", v243, fmtc, imageKeyc, v418);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vsubss  xmm1, xmm8, cs:__real@42100000
        vmovaps xmm3, xmm9
        vmovss  dword ptr [rsp+630h+fmt], xmm1
        vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      }
      RB_DrawText((GfxCmdBufContext *)&result, v474, debugFont, *(float *)&_XMM3, fmtp, (const GfxColor)-1);
    }
    __asm
    {
      vcvtss2sd xmm0, xmm14, xmm14
      vcvtss2sd xmm3, xmm12, xmm12
      vcvtss2sd xmm1, xmm13, xmm13
      vmovsd  [rsp+630h+imageKey], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+630h+fmt], xmm1
    }
    Com_sprintf(v476, 0x100ui64, "AVG LIN  = %.5f, %.5f, %.5f", *(double *)&_XMM3, *(double *)&fmtq, *(double *)&imageKeye);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vsubss  xmm1, xmm8, cs:__real@41c00000
      vmovaps xmm3, xmm9
      vmovss  dword ptr [rsp+630h+fmt], xmm1
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
    }
    RB_DrawText((GfxCmdBufContext *)&result, v476, debugFont, *(float *)&_XMM3, fmtr, (const GfxColor)-1);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm1, xmm8, cs:__real@42700000
      vmovaps xmm3, xmm9
      vmovss  dword ptr [rsp+630h+fmt], xmm1
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
    }
    RB_DrawText((GfxCmdBufContext *)&result, "POST TONEMAPPING", debugFont, *(float *)&_XMM3, fmts, (const GfxColor)-1);
    __asm
    {
      vmovss  xmm0, dword ptr cs:s_centerPixel+14h
      vmovss  xmm3, dword ptr cs:s_centerPixel+0Ch
      vmovss  xmm1, dword ptr cs:s_centerPixel+10h
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+630h+imageKey], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+630h+fmt], xmm1
    }
    Com_sprintf(v474, 0x100ui64, "PNT RGB = %.3f, %.3f, %.3f", *(double *)&_XMM3, *(double *)&fmtt, *(double *)&imageKeyf);
    __asm
    {
      vmovss  xmm0, dword ptr cs:s_centerAverage+14h
      vmovss  xmm3, dword ptr cs:s_centerAverage+0Ch
      vmovss  xmm1, dword ptr cs:s_centerAverage+10h
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+630h+imageKey], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+630h+fmt], xmm1
    }
    Com_sprintf(v476, 0x100ui64, "AVG RGB = %.3f, %.3f, %.3f", *(double *)&_XMM3, *(double *)&fmtu, *(double *)&imageKeyg);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm1, xmm8, cs:__real@42b40000
      vmovaps xmm3, xmm9
      vmovss  dword ptr [rsp+630h+fmt], xmm1
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
    }
    RB_DrawText((GfxCmdBufContext *)&result, v474, debugFont, *(float *)&_XMM3, fmtv, (const GfxColor)-1);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm1, xmm8, cs:__real@42cc0000
      vmovaps xmm3, xmm9
      vmovss  dword ptr [rsp+630h+fmt], xmm1
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
    }
    RB_DrawText((GfxCmdBufContext *)&result, v476, debugFont, *(float *)&_XMM3, fmtw, (const GfxColor)-1);
    R_Tonemap_GetExposureInfo(data, viewInfo, &exposure, &sceneAvgKiloNits, &sceneAmbientAvgKiloNits, &v424);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovss  xmm10, cs:__real@42f00000
      vmovss  xmm3, cs:__real@43c80000
      vmovss  xmm2, cs:__real@429e0000
      vmovss  xmm1, cs:__real@42be0000
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm10
    }
    RB_DrawRect2D((GfxCmdBufContext *)&result, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtx, (const GfxColor)0x80000000);
    __asm
    {
      vmovss  xmm3, [rsp+630h+outRadiometricScale]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovq   r9, xmm3
    }
    Com_sprintf(v473, 0x100ui64, "%g", *(double *)&_XMM3);
    __asm
    {
      vmovss  xmm8, cs:__real@42c80000
      vmovups xmm0, xmmword ptr [rsi]
      vmovaps xmm3, xmm8
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm8
    }
    RB_DrawText((GfxCmdBufContext *)&result, "RADIOMETRIC SCALE", debugFont, *(float *)&_XMM3, fmty, (const GfxColor)-1);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovss  xmm9, cs:__real@43a00000
      vmovaps xmm3, xmm9
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm8
    }
    RB_DrawText((GfxCmdBufContext *)&result, v473, debugFont, *(float *)&_XMM3, fmtz, (const GfxColor)-1);
    __asm
    {
      vmovss  xmm3, cs:?s_world@@3UGfxWorld@@A.draw.bakedLightScale; GfxWorld s_world
      vcvtss2sd xmm3, xmm3, xmm3
      vxorps  xmm12, xmm12, xmm12
      vcvtsi2ss xmm12, xmm12, r13d
      vmovq   r9, xmm3
      vaddss  xmm6, xmm12, xmm8
    }
    Com_sprintf(v473, 0x100ui64, "%g", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovaps xmm3, xmm8
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)&result, "BAKE LIGHT SCALE", debugFont, *(float *)&_XMM3, fmtba, (const GfxColor)-1);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovaps xmm3, xmm9
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)&result, v473, debugFont, *(float *)&_XMM3, fmtbb, (const GfxColor)-1);
    __asm
    {
      vmovss  xmm7, cs:__real@43340000
      vdivss  xmm0, xmm7, dword ptr [r12+3858h]
      vmovss  xmm13, cs:__real@387fda40
      vaddss  xmm0, xmm0, xmm13; X
      vaddss  xmm6, xmm6, xmm12
    }
    *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  xmm11, cs:__real@3fb8aa3b
      vmovss  xmm14, cs:__real@4035c28f
      vmulss  xmm1, xmm0, xmm11
      vaddss  xmm2, xmm1, xmm14
      vcvtss2sd xmm3, xmm2, xmm2
      vmovq   r9, xmm3
    }
    Com_sprintf(v473, 0x100ui64, "EV %.3f", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovaps xmm3, xmm8
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)&result, "STATIC EXPOSURE", debugFont, *(float *)&_XMM3, fmtbc, (const GfxColor)-1);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovaps xmm3, xmm9
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)&result, v473, debugFont, *(float *)&_XMM3, fmtbd, (const GfxColor)-1);
    __asm
    {
      vdivss  xmm0, xmm7, [rsp+630h+exposure]
      vaddss  xmm0, xmm0, xmm13; X
      vaddss  xmm6, xmm6, xmm12
    }
    *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, xmm11
      vaddss  xmm2, xmm1, xmm14
      vcvtss2sd xmm3, xmm2, xmm2
      vmovq   r9, xmm3
    }
    Com_sprintf(v473, 0x100ui64, "EV %.3f", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovaps xmm3, xmm8
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)&result, "CURRENT EXPOSURE", debugFont, *(float *)&_XMM3, fmtbe, (const GfxColor)-1);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovaps xmm3, xmm9
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)&result, v473, debugFont, *(float *)&_XMM3, fmtbf, (const GfxColor)-1);
    v327 = "Disabled";
    if ( viewInfo->tonemap.autoExposure )
      v327 = "Enabled";
    __asm { vaddss  xmm6, xmm6, xmm12 }
    Com_sprintf(v473, 0x100ui64, "AUTO EXPOSURE (%s)", v327);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovaps xmm3, xmm8
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)&result, v473, debugFont, *(float *)&_XMM3, fmtbg, (const GfxColor)-16711936);
    __asm
    {
      vmovss  xmm7, [rsp+630h+sceneAvgKiloNits]
      vmulss  xmm8, xmm7, cs:__real@447a0000
      vaddss  xmm0, xmm8, xmm13; X
      vaddss  xmm6, xmm6, xmm12
    }
    *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
    __asm
    {
      vmovaps xmm15, [rsp+630h+var_C0]
      vmovaps xmm13, [rsp+630h+var_A0]
      vmulss  xmm1, xmm0, xmm11
      vaddss  xmm2, xmm1, xmm14
      vmovaps xmm14, [rsp+630h+var_B0]
      vcvtss2sd xmm3, xmm2, xmm2
      vcomiss xmm7, cs:__real@3dcccccd
    }
    if ( v74 )
    {
      v341 = "EV %.3f (%.3fn)";
      __asm { vmovaps xmm7, xmm8 }
    }
    else
    {
      v341 = "EV %.3f (%.3fkn)";
    }
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovq   r9, xmm3
      vmovsd  [rsp+630h+fmt], xmm0
    }
    Com_sprintf(v473, 0x100ui64, v341, _R9, fmtbh);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovaps xmm3, xmm10
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)&result, "AVG SCENE", debugFont, *(float *)&_XMM3, fmtbi, (const GfxColor)-1);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovaps xmm3, xmm9
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)&result, v473, debugFont, *(float *)&_XMM3, fmtbj, (const GfxColor)-1);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm6, xmm6, xmm12
      vmovaps xmm3, xmm10
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)&result, "AUTO EXPOSURE ADJUST", debugFont, *(float *)&_XMM3, fmtbk, (const GfxColor)-1);
    __asm { vmovss  xmm0, [rsp+630h+var_5C0]; X }
    *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
    __asm
    {
      vsubss  xmm1, xmm0, cs:__real@bfdb7e83
      vmulss  xmm2, xmm1, xmm11
      vcvtss2sd xmm3, xmm2, xmm2
      vmovq   r9, xmm3
    }
    Com_sprintf(v473, 0x100ui64, "EV %.3f", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovaps xmm3, xmm9
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      vmovss  dword ptr [rsp+630h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)&result, v473, debugFont, *(float *)&_XMM3, fmtbl, (const GfxColor)-1);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
    }
    Tess = R_GetTess((GfxCmdBufContext *)&result);
    __asm { vmovaps xmm12, [rsp+630h+var_90] }
    v361 = Tess;
    __asm
    {
      vmovaps xmm11, [rsp+630h+var_80]
      vmovaps xmm10, [rsp+630h+var_70]
      vmovaps xmm9, [rsp+630h+var_60]
      vmovaps xmm8, [rsp+630h+var_50]
      vmovaps xmm7, [rsp+630h+var_40]
      vmovaps xmm6, [rsp+630h+var_30]
    }
    if ( Tess->vertexCount )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rsp+630h+result.baseclass_0.m_surfaceID], xmm0
      }
      RB_EndTessSurfaceInternal((GfxCmdBufContext *)&result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
    }
    else
    {
      if ( Tess->indexCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
          __debugbreak();
      }
      v361->viewStatsTarget = GFX_VIEW_STATS_INVALID;
      v361->primStatsTarget = GFX_PRIM_STATS_INVALID;
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
  R_RT_ColorHandle v14; 

  _RSI = colorRt;
  _RBX = gfxContext;
  if ( r_hdrSpotmeter->current.enabled && !viewInfo->viewInfoIndex )
  {
    if ( s_spotMeterTarget.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&s_spotMeterTarget);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups xmmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], xmm0
      }
      R_UnbindRenderTarget((GfxCmdBufContext *)&v14);
      __asm { vmovups ymm0, ymmword ptr [rsi] }
      state = _RBX->state;
      __asm { vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0 }
      R_HW_AddResourceTransition(state, &v14, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi]
        vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
      }
      R_HDRSpotMeter_ProcessStage(GfxComputeCmdBufState, viewInfo, &v14, spotMeterId);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi]
        vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
      }
      R_HW_AddResourceTransition(state, &v14, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
    _RAX = R_RT_CreateInternal(&result, 0x20u, 0x20u, 0x20u, 0x20u, 1u, 1u, 1u, g_R_RT_renderTargetFmts[32], R_RT_Flag_Readback|R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime, &colorBlack, D3D12_RESOURCE_STATE_COPY_DEST, "Spot Meter Target", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_debug.cpp(48)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rsp+108h+var_48], ymm0
      vmovups ymmword ptr [rsp+108h+var_68.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v4);
      if ( (R_RT_Handle::GetSurface(&v4)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+108h+var_68.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+108h+var_68.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        __asm { vmovups ymm0, [rsp+108h+var_48] }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr cs:s_spotMeterTarget.baseclass_0.m_surfaceID, ymm0 }
  }
}

/*
==============
R_HDRSpotMeter_ProcessStage
==============
*/
void R_HDRSpotMeter_ProcessStage(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt, SpotMeterId spotMeterId)
{
  __int64 v6; 
  unsigned int width; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v12; 
  const GfxTexture *v13; 
  int v16; 
  unsigned __int8 *v19; 
  unsigned int v20; 
  unsigned __int8 *v23; 
  __int64 v24; 
  __int64 v25; 
  int srcY; 
  float v129; 
  float v130; 
  R_RT_ColorHandle v131; 
  unsigned int v132; 

  v6 = spotMeterId;
  width = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(srcRt);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  v12 = R_RT_Handle::GetSurface(&s_spotMeterTarget);
  v13 = R_Texture_GetResident(v12->m_image.m_base.textureId);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+98h+var_48], xmm0
    vmovss  [rsp+98h+var_50], xmm1
  }
  srcY = (height >> 1) - 16;
  v16 = 0;
  R_CopyTextureRect(state, v13, Resident, 0, 0, (width >> 1) - 16, srcY, 0x20u, 0x20u, v129, v130);
  R_AcquireGpuFenceLock();
  R_FinishGpuFence();
  R_InsertGpuFence();
  R_FinishGpuFence();
  R_ReleaseGpuFenceLock();
  _RAX = s_spotMeterReadbackTarget;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+98h+var_38], ymm0
  }
  v19 = R_MapReadbackRt(state, &v131, 0, &v132, NULL);
  v20 = v132;
  _R8 = v6;
  _R11 = 0x140000000ui64;
  v23 = v19;
  v24 = 16 * v132;
  s_centerPixel[_R8].v[0] = *(float *)&v19[v24 + 256];
  s_centerPixel[_R8].v[1] = *(float *)&v19[v24 + 260];
  s_centerPixel[_R8].v[2] = *(float *)&v19[v24 + 264];
  *(_QWORD *)s_centerAverage[_R8].v = 0i64;
  s_centerAverage[_R8].v[2] = 0.0;
  do
  {
    v25 = 2i64;
    _RCX = &v23[v20 * v16 + 24];
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx-18h]
        vaddss  xmm3, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm3
        vmovss  xmm1, dword ptr [rcx-14h]
        vaddss  xmm0, xmm1, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm2, dword ptr [rcx-10h]
        vaddss  xmm1, xmm2, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm1
        vaddss  xmm0, xmm3, dword ptr [rcx-8]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx-4]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vaddss  xmm1, xmm0, dword ptr [rcx]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm1
        vmovss  xmm0, dword ptr [rcx+8]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx+0Ch]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx+10h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx+18h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx+1Ch]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx+20h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx+28h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx+2Ch]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx+30h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx+38h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx+3Ch]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx+40h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx+48h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx+4Ch]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx+50h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx+58h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx+5Ch]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx+60h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx+68h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx+6Ch]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx+70h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx+78h]
      }
      _RCX += 256;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx-84h]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx-80h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx-78h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx-74h]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx-70h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx-68h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx-64h]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx-60h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx-58h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx-54h]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx-50h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx-48h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx-44h]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx-40h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx-38h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx-34h]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx-30h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
        vmovss  xmm0, dword ptr [rcx-28h]
        vaddss  xmm1, xmm0, dword ptr rva s_centerAverage[r11+r8*4]
        vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm1
        vmovss  xmm2, dword ptr [rcx-24h]
        vaddss  xmm0, xmm2, dword ptr (rva s_centerAverage+4)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm0
        vmovss  xmm1, dword ptr [rcx-20h]
        vaddss  xmm2, xmm1, dword ptr (rva s_centerAverage+8)[r11+r8*4]
        vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm2
      }
      --v25;
    }
    while ( v25 );
    ++v16;
  }
  while ( v16 < 32 );
  __asm
  {
    vmovss  xmm3, cs:__real@3a800000
    vmulss  xmm0, xmm3, dword ptr rva s_centerAverage[r11+r8*4]
  }
  _RAX = s_spotMeterReadbackTarget;
  __asm
  {
    vmovss  dword ptr rva s_centerAverage[r11+r8*4], xmm0
    vmulss  xmm2, xmm3, dword ptr (rva s_centerAverage+4)[r11+r8*4]
    vmovss  dword ptr (rva s_centerAverage+4)[r11+r8*4], xmm2
    vmulss  xmm1, xmm3, dword ptr (rva s_centerAverage+8)[r11+r8*4]
    vmovss  dword ptr (rva s_centerAverage+8)[r11+r8*4], xmm1
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+98h+var_38], ymm0
  }
  R_UnmapReadbackRt(state, &v131);
}

/*
==============
R_HDRSpotMeter_Shutdown
==============
*/

void __fastcall R_HDRSpotMeter_Shutdown(double _XMM0_8)
{
  R_RT_Handle v5; 

  if ( s_spotMeterTarget.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_spotMeterTarget);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_spotMeterTarget.baseclass_0.m_surfaceID
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v5);
      if ( (R_RT_Handle::GetSurface(&v5)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+58h+var_28.m_surfaceID]
        vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
      }
      R_RT_DestroyInternal(&v5);
    }
    else if ( s_spotMeterTarget.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_spotMeterTarget.m_surfaceID = 0;
    s_spotMeterTarget.m_tracking.m_allocCounter = 0;
    __asm { vmovdqu xmmword ptr cs:s_spotMeterTarget.baseclass_0.m_tracking.m_name, xmm0 }
  }
  else if ( s_spotMeterTarget.m_tracking.m_allocCounter != s_spotMeterTarget.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}

