/*
==============
RB_Stats_Clear
==============
*/

void __fastcall RB_Stats_Clear(unsigned int trackFrameIndex)
{
  ?RB_Stats_Clear@@YAXI@Z(trackFrameIndex);
}

/*
==============
RB_TrackDrawPrimCall
==============
*/

void __fastcall RB_TrackDrawPrimCall(unsigned int trackFrameIndex, GfxViewStatsTarget viewStatsTarget, GfxPrimStatsTarget primStatsTarget, GfxPrimStatsTriSource triSource, unsigned int triCount, unsigned int instanceCount)
{
  ?RB_TrackDrawPrimCall@@YAXIW4GfxViewStatsTarget@@W4GfxPrimStatsTarget@@W4GfxPrimStatsTriSource@@II@Z(trackFrameIndex, viewStatsTarget, primStatsTarget, triSource, triCount, instanceCount);
}

/*
==============
RB_Stats_GatherPrimStatTotals
==============
*/

void __fastcall RB_Stats_GatherPrimStatTotals(GfxPrimStatTotals *outTotals)
{
  ?RB_Stats_GatherPrimStatTotals@@YAXPEAUGfxPrimStatTotals@@@Z(outTotals);
}

/*
==============
RB_Stats_UpdateMaxs
==============
*/

void __fastcall RB_Stats_UpdateMaxs(unsigned int trackFrameIndex, GfxFrameStats *frameStatsMax)
{
  ?RB_Stats_UpdateMaxs@@YAXIPEAUGfxFrameStats@@@Z(trackFrameIndex, frameStatsMax);
}

/*
==============
RB_DrawPrimHistogramOverlay
==============
*/

void __fastcall RB_DrawPrimHistogramOverlay(GfxCmdBufContext *gfxContext, unsigned int trackFrameIndex)
{
  ?RB_DrawPrimHistogramOverlay@@YAXUGfxCmdBufContext@@I@Z(gfxContext, trackFrameIndex);
}

/*
==============
RB_Stats_f
==============
*/

void RB_Stats_f(void)
{
  ?RB_Stats_f@@YAXXZ();
}

/*
==============
RB_DrawPrimHistogramOverlay
==============
*/
void RB_DrawPrimHistogramOverlay(GfxCmdBufContext *gfxContext, unsigned int trackFrameIndex)
{
  const RB_Stats_Buffer *LockEldest; 
  __int64 v16; 
  volatile int v17; 
  volatile int *drawPrimHistogram; 
  __int64 v19; 
  volatile int *v20; 
  __int64 v21; 
  const char **v34; 
  const char *v36; 
  unsigned int v43; 
  __int64 v44; 
  unsigned int v51; 
  int *v52; 
  char *v53; 
  __int64 *v54; 
  char *v55; 
  unsigned int *v56; 
  unsigned int v57; 
  int v60; 
  int *v61; 
  __int64 v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  __int64 v120; 
  __int64 v121; 
  unsigned int *v132; 
  __int64 v133; 
  materialCommands_t *Tess; 
  materialCommands_t *v145; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  GfxColor v164; 
  float v165; 
  float v166; 
  float v167; 
  float v168; 
  float v169; 
  float v170; 
  float v171; 
  float v172; 
  float v173; 
  float v174; 
  float v175; 
  float v176; 
  float v177; 
  float v178; 
  float v179; 
  float v180; 
  float v181; 
  float v182; 
  float v183; 
  float v184; 
  float v185; 
  float v186; 
  float v187; 
  float v188; 
  float v189; 
  unsigned int v190; 
  unsigned int packed; 
  unsigned int v192; 
  unsigned int v195; 
  GfxColor *v197; 
  const RB_Stats_Buffer *v198; 
  int *v201; 
  __int64 v202; 
  __int64 v203; 
  __int64 v204; 
  GfxCmdBufContext v205; 
  GfxCmdBufContext v206; 
  GfxCmdBufContext v207; 
  GfxCmdBufContext v208; 
  GfxCmdBufContext v209; 
  GfxCmdBufContext v210; 
  GfxCmdBufContext v211; 
  GfxCmdBufContext v212; 
  GfxCmdBufContext v213; 
  GfxCmdBufContext v214; 
  int v215; 
  int v216; 
  int v217; 
  int v218; 
  int v219; 
  int v220; 
  __int64 v221[6]; 
  char v222[4]; 
  char v223; 
  char v224; 
  char dest[32]; 

  _RDI = gfxContext;
  LockEldest = &g_RB_Stats_Internal.buffers[trackFrameIndex & 3];
  v198 = LockEldest;
  RB_Stats_ReadLockBuffer(LockEldest);
  if ( LockEldest->frameIndex != trackFrameIndex )
  {
    RB_Stats_ReadUnlockBuffer(LockEldest);
    LockEldest = RB_Stats_ReadLockEldest();
    v198 = LockEldest;
  }
  v16 = LockEldest->frameIndex & 0x8000003F;
  if ( LockEldest->frameIndex < 0 )
    v16 = ((unsigned __int8)((LockEldest->frameIndex & 0x3F) - 1) | 0xFFFFFFC0) + 1;
  v17 = 0;
  drawPrimHistogram = backEnd.frameStatsMax.viewStats[0].drawPrimHistogram;
  v19 = 16i64;
  do
  {
    v20 = drawPrimHistogram;
    v21 = 10i64;
    do
    {
      if ( v17 < *v20 )
        v17 = *v20;
      v20 += 56;
      --v21;
    }
    while ( v21 );
    ++drawPrimHistogram;
    --v19;
  }
  while ( v19 );
  if ( v17 )
  {
    __asm
    {
      vmovaps [rsp+320h+var_48+8], xmm6
      vmovaps [rsp+320h+var_58+8], xmm7
      vmovaps [rsp+320h+var_68+8], xmm8
      vmovaps [rsp+320h+var_78+8], xmm9
      vmovaps [rsp+320h+var_88+8], xmm10
      vmovaps [rsp+320h+var_98+8], xmm11
      vmovaps [rsp+320h+var_A8+8], xmm12
      vmovaps [rsp+320h+var_B8+8], xmm13
      vmovaps [rsp+320h+var_C8+8], xmm14
      vmovaps [rsp+320h+var_D8+8], xmm15
    }
    R_TextHeight(backEnd.debugFont);
    __asm
    {
      vxorps  xmm11, xmm11, xmm11
      vcvtsi2ss xmm11, xmm11, eax
      vmovss  [rsp+320h+var_2BC], xmm11
    }
    R_TextWidth("8888 ", 5, backEnd.debugFont);
    __asm
    {
      vxorps  xmm10, xmm10, xmm10
      vcvtsi2ss xmm10, xmm10, eax
      vmovss  [rsp+320h+var_2C0], xmm10
    }
    R_TextWidth("8888:", 5, backEnd.debugFont);
    __asm
    {
      vmovss  xmm1, cs:__real@41d9999a
      vaddss  xmm7, xmm11, cs:__real@423c0000
      vmovss  xmm8, cs:__real@41f9999a
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm0, xmm0, cs:__real@42500000
      vmovss  dword ptr [rsp+320h+var_2B8+4], xmm0
      vmovaps xmm6, xmm0
      vsubss  xmm14, xmm1, xmm10
    }
    v34 = s_viewStatsHeader;
    do
    {
      __asm { vmovups xmm0, xmmword ptr [rdi] }
      v36 = *v34;
      __asm
      {
        vmovaps xmm3, xmm6
        vmovups [rbp+220h+var_270], xmm0
        vmovss  dword ptr [rsp+320h+fmt], xmm7
      }
      RB_DrawText(&v205, v36, backEnd.debugFont, *(float *)&_XMM3, fmt, (const GfxColor)-1);
      ++v34;
      __asm { vaddss  xmm6, xmm6, xmm8 }
    }
    while ( (__int64)v34 < (__int64)primStatsLabel );
    __asm { vmovss  xmm6, cs:__real@42400000 }
    v215 = -12566273;
    v218 = -16777056;
    v216 = -12517377;
    __asm { vaddss  xmm15, xmm11, xmm6 }
    v219 = -16736096;
    v217 = -12517568;
    v220 = -16736256;
    memset(v221, 0, 40);
    memset_0(v222, 0, 0x78ui64);
    __asm
    {
      vmovss  xmm13, cs:__real@40800000
      vmovss  xmm7, cs:__real@3f800000
      vmovss  xmm12, cs:__real@40000000
    }
    v43 = 0;
    v44 = 0i64;
    v195 = 0;
    v203 = 0i64;
    v204 = (5 * v16 - 10) << 7;
    __asm { vxorps  xmm8, xmm8, xmm8 }
    do
    {
      if ( v43 >= 0xF )
        Core_strcpy(dest, 0x20ui64, "more:");
      else
        Com_sprintf<32>((char (*)[32])dest, "%4i: ", *(const unsigned int *)((char *)drawPrimHistogramLimit + v44));
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups [rbp+220h+var_260], xmm0
        vaddss  xmm0, xmm15, xmm11
        vsubss  xmm9, xmm0, xmm7
        vmovaps xmm3, xmm6
        vmovss  [rbp+220h+var_2A0], xmm9
        vmovss  dword ptr [rsp+320h+fmt], xmm9
        vmovss  [rbp+220h+var_29C], xmm0
      }
      RB_DrawText(&v206, dest, backEnd.debugFont, *(float *)&_XMM3, fmta, (const GfxColor)-1);
      __asm { vmovss  xmm6, dword ptr [rsp+320h+var_2B8+4] }
      if ( v43 == 15 || (v51 = *(const unsigned int *)((char *)drawPrimHistogramLimit + v44), v51 > 0x12C) )
      {
        v201 = &v220;
        v53 = &v224;
        v52 = &v217;
      }
      else if ( v51 <= 0x32 )
      {
        v201 = &v218;
        v52 = &v215;
        v53 = v222;
      }
      else
      {
        v201 = &v219;
        v52 = &v216;
        v53 = &v223;
      }
      v197 = (GfxColor *)v52;
      v54 = v221;
      v55 = (char *)g_RB_Stats_Internal.histogramHistory[2] + v44;
      v202 = 10i64;
      v56 = (unsigned int *)((char *)LockEldest->frame.viewStats[0].drawPrimHistogram + v44);
      do
      {
        v57 = *v56;
        *(_DWORD *)v53 += *v56;
        *(_DWORD *)v54 += v57;
        if ( v57 )
        {
          Com_sprintf<32>((char (*)[32])dest, "%4i", v57);
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovaps xmm3, xmm6
          }
          v164 = *v197;
          __asm
          {
            vmovss  dword ptr [rsp+320h+fmt], xmm9
            vmovups [rbp+220h+var_250], xmm0
          }
          RB_DrawText(&v207, dest, backEnd.debugFont, *(float *)&_XMM3, fmtb, v164);
        }
        __asm { vaddss  xmm9, xmm6, xmm10 }
        v60 = v57;
        v61 = (int *)v55;
        v62 = 2i64;
        do
        {
          v63 = *(v61 - 320);
          if ( v60 >= v63 )
            v63 = v60;
          v64 = *(v61 - 160);
          if ( v63 >= v64 )
            v64 = v63;
          v65 = *v61;
          if ( v64 >= *v61 )
            v65 = v64;
          v66 = v61[160];
          if ( v65 >= v66 )
            v66 = v65;
          v67 = v61[320];
          if ( v66 >= v67 )
            v67 = v66;
          v68 = v61[480];
          if ( v67 >= v68 )
            v68 = v67;
          v69 = v61[640];
          if ( v68 >= v69 )
            v69 = v68;
          v70 = v61[800];
          if ( v69 >= v70 )
            v70 = v69;
          v71 = v61[960];
          if ( v70 >= v71 )
            v71 = v70;
          v72 = v61[1120];
          if ( v71 >= v72 )
            v72 = v71;
          v73 = v61[1280];
          if ( v72 >= v73 )
            v73 = v72;
          v74 = v61[1440];
          if ( v73 >= v74 )
            v74 = v73;
          v75 = v61[1600];
          if ( v74 >= v75 )
            v75 = v74;
          v76 = v61[1760];
          if ( v75 >= v76 )
            v76 = v75;
          v77 = v61[1920];
          if ( v76 >= v77 )
            v77 = v76;
          v78 = v61[2080];
          if ( v77 >= v78 )
            v78 = v77;
          v79 = v61[2240];
          if ( v78 >= v79 )
            v79 = v78;
          v80 = v61[2400];
          if ( v79 >= v80 )
            v80 = v79;
          v81 = v61[2560];
          if ( v80 >= v81 )
            v81 = v80;
          v82 = v61[2720];
          if ( v81 >= v82 )
            v82 = v81;
          v83 = v61[2880];
          if ( v82 >= v83 )
            v83 = v82;
          v84 = v61[3040];
          if ( v83 >= v84 )
            v84 = v83;
          v85 = v61[3200];
          if ( v84 >= v85 )
            v85 = v84;
          v86 = v61[3360];
          if ( v85 >= v86 )
            v86 = v85;
          v87 = v61[3520];
          if ( v86 >= v87 )
            v87 = v86;
          v88 = v61[3680];
          if ( v87 >= v88 )
            v88 = v87;
          v89 = v61[3840];
          if ( v88 >= v89 )
            v89 = v88;
          v90 = v61[4000];
          v61 += 5120;
          if ( v89 >= v90 )
            v90 = v89;
          v91 = *(v61 - 960);
          if ( v90 >= v91 )
            v91 = v90;
          v92 = *(v61 - 800);
          if ( v91 >= v92 )
            v92 = v91;
          v93 = *(v61 - 640);
          if ( v92 >= v93 )
            v93 = v92;
          v60 = *(v61 - 480);
          if ( v93 >= v60 )
            v60 = v93;
          --v62;
        }
        while ( v62 );
        if ( v60 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r12d
            vdivss  xmm10, xmm7, xmm0
            vmovss  [rsp+320h+var_2D8], xmm7
            vmovss  [rsp+320h+var_2E0], xmm7
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vmulss  xmm1, xmm0, xmm14
            vmovups xmm0, xmmword ptr [rdi]
            vmulss  xmm6, xmm1, xmm10
            vmovss  [rsp+320h+var_2E8], xmm8
            vsubss  xmm1, xmm11, xmm13
            vaddss  xmm4, xmm6, xmm13
            vmovss  [rsp+320h+var_2F0], xmm8
            vmovss  [rsp+320h+var_2F8], xmm1
            vaddss  xmm3, xmm15, xmm12
            vsubss  xmm2, xmm9, xmm12
            vmovss  dword ptr [rsp+320h+fmt], xmm4
            vmovups [rbp+220h+var_240], xmm0
          }
          RB_DrawStretchPic(&v208, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v165, v170, v175, v180, v185, 0xFF000000, GFX_PRIM_STATS_DEBUG);
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vsubss  xmm11, xmm11, cs:__real@41000000
          }
          v190 = *v201;
          __asm
          {
            vmovss  [rsp+320h+var_2D8], xmm7
            vmovss  [rsp+320h+var_2E0], xmm7
            vmovss  [rsp+320h+var_2E8], xmm8
            vmovss  [rsp+320h+var_2F0], xmm8
            vaddss  xmm12, xmm15, xmm13
            vmovss  [rsp+320h+var_2F8], xmm11
            vmovaps xmm3, xmm12
            vmovaps xmm2, xmm9
            vmovss  dword ptr [rsp+320h+fmt], xmm6
            vmovups [rbp+220h+var_230], xmm0
          }
          RB_DrawStretchPic(&v209, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v166, v171, v176, v181, v186, v190, GFX_PRIM_STATS_DEBUG);
          if ( v57 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi]
              vxorps  xmm1, xmm1, xmm1
            }
            packed = v197->packed;
            __asm
            {
              vmovss  [rsp+320h+var_2D8], xmm7
              vmovss  [rsp+320h+var_2E0], xmm7
              vmovss  [rsp+320h+var_2E8], xmm8
              vcvtsi2ss xmm1, xmm1, ebx
              vmulss  xmm2, xmm1, xmm14
              vmovups [rbp+220h+var_220], xmm0
              vmulss  xmm0, xmm2, xmm10
              vmovss  [rsp+320h+var_2F0], xmm8
              vmovss  [rsp+320h+var_2F8], xmm11
              vmovaps xmm3, xmm12
              vmovaps xmm2, xmm9
              vmovss  dword ptr [rsp+320h+fmt], xmm0
            }
            RB_DrawStretchPic(&v210, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v167, v172, v177, v182, v187, packed, GFX_PRIM_STATS_DEBUG);
          }
          __asm
          {
            vmovss  xmm10, [rsp+320h+var_2C0]
            vmovss  xmm12, cs:__real@40000000
            vmovss  xmm11, [rsp+320h+var_2BC]
          }
        }
        v56 += 56;
        __asm { vaddss  xmm4, xmm14, xmm13 }
        v53 += 12;
        v54 = (__int64 *)((char *)v54 + 4);
        __asm
        {
          vaddss  xmm6, xmm9, xmm4
          vmovss  xmm9, [rbp+220h+var_2A0]
        }
        *(_DWORD *)&v55[v204] = v57;
        v55 += 64;
        --v202;
      }
      while ( v202 );
      __asm
      {
        vmovss  xmm15, [rbp+220h+var_29C]
        vmovss  xmm6, cs:__real@42400000
      }
      LockEldest = v198;
      v43 = v195 + 1;
      v44 = v203 + 4;
      v195 = v43;
      v203 += 4i64;
    }
    while ( v43 < 0x10 );
    __asm { vmovss  xmm0, dword ptr [rsp+320h+var_2B8+4] }
    v120 = 0i64;
    v121 = 80i64;
    do
    {
      __asm { vaddss  xmm9, xmm0, xmm10 }
      if ( *((_DWORD *)v221 + v120) )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi]
          vmovss  [rsp+320h+var_2D8], xmm7
          vmovss  [rsp+320h+var_2E0], xmm7
          vmovss  [rsp+320h+var_2E8], xmm8
          vsubss  xmm1, xmm11, xmm13
          vmovss  [rsp+320h+var_2F0], xmm8
          vmovss  [rsp+320h+var_2F8], xmm1
          vaddss  xmm3, xmm15, xmm12
          vsubss  xmm2, xmm9, xmm12
          vmovss  dword ptr [rsp+320h+fmt], xmm4
          vmovups [rbp+220h+var_210], xmm0
        }
        RB_DrawStretchPic(&v211, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v168, v173, v178, v183, v188, 0xFF000000, GFX_PRIM_STATS_DEBUG);
        __asm
        {
          vsubss  xmm11, xmm11, cs:__real@41000000
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebx
          vdivss  xmm10, xmm7, xmm0
          vaddss  xmm12, xmm15, xmm13
        }
        v132 = (unsigned int *)&v215;
        v133 = 3i64;
        do
        {
          v192 = *v132;
          __asm
          {
            vmovss  [rsp+320h+var_2D8], xmm7
            vmovss  [rsp+320h+var_2E0], xmm7
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [r14+rbx]
            vmulss  xmm1, xmm0, xmm14
            vmovups xmm0, xmmword ptr [rdi]
            vmovss  [rsp+320h+var_2E8], xmm8
            vmulss  xmm6, xmm1, xmm10
            vmovss  [rsp+320h+var_2F0], xmm8
            vmovss  [rsp+320h+var_2F8], xmm11
            vmovaps xmm3, xmm12
            vmovaps xmm2, xmm9
            vmovss  dword ptr [rsp+320h+fmt], xmm6
            vmovups [rbp+220h+var_200], xmm0
          }
          RB_DrawStretchPic(&v212, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, v169, v174, v179, v184, v189, v192, GFX_PRIM_STATS_DEBUG);
          ++v132;
          __asm { vaddss  xmm9, xmm9, xmm6 }
          --v133;
        }
        while ( v133 );
        __asm
        {
          vmovss  xmm10, [rsp+320h+var_2C0]
          vaddss  xmm0, xmm9, xmm13
          vaddss  xmm4, xmm14, xmm13
        }
      }
      else
      {
        __asm { vaddss  xmm0, xmm9, xmm4 }
      }
      __asm
      {
        vmovss  xmm11, [rsp+320h+var_2BC]
        vmovss  xmm12, cs:__real@40000000
      }
      ++v120;
      v121 += 12i64;
    }
    while ( v120 < 10 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rbp+220h+var_1F0], xmm0
    }
    Tess = R_GetTess(&v213);
    __asm { vmovaps xmm15, [rsp+320h+var_D8+8] }
    v145 = Tess;
    __asm
    {
      vmovaps xmm14, [rsp+320h+var_C8+8]
      vmovaps xmm13, [rsp+320h+var_B8+8]
      vmovaps xmm12, [rsp+320h+var_A8+8]
      vmovaps xmm11, [rsp+320h+var_98+8]
      vmovaps xmm10, [rsp+320h+var_88+8]
      vmovaps xmm9, [rsp+320h+var_78+8]
      vmovaps xmm8, [rsp+320h+var_68+8]
      vmovaps xmm7, [rsp+320h+var_58+8]
      vmovaps xmm6, [rsp+320h+var_48+8]
    }
    if ( Tess->vertexCount )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups [rbp+220h+var_1E0], xmm0
      }
      RB_EndTessSurfaceInternal(&v214, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
    }
    else
    {
      if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
        __debugbreak();
      v145->viewStatsTarget = GFX_VIEW_STATS_INVALID;
      v145->primStatsTarget = GFX_PRIM_STATS_INVALID;
    }
  }
  if ( LockEldest->readWriteLockCount != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 147, ASSERT_TYPE_ASSERT, "(buffer->readWriteLockCount == -1)", (const char *)&queryFormat, "buffer->readWriteLockCount == -1") )
    __debugbreak();
  LockEldest->readWriteLockCount = 0;
}

/*
==============
RB_Stats_Clear
==============
*/
void RB_Stats_Clear(unsigned int trackFrameIndex)
{
  RB_Stats_Buffer *v2; 

  v2 = &g_RB_Stats_Internal.buffers[trackFrameIndex & 3];
  RB_Stats_ReadLockBuffer(v2);
  v2->frameIndex = trackFrameIndex;
  memset_0(&v2->frame, 0, sizeof(v2->frame));
  RB_Stats_ReadUnlockBuffer(v2);
}

/*
==============
RB_Stats_GatherPrimStatTotals
==============
*/
void RB_Stats_GatherPrimStatTotals(GfxPrimStatTotals *outTotals)
{
  int v2; 
  const RB_Stats_Buffer *LockEldest; 
  unsigned int v4; 
  volatile int *triCount; 
  __int64 v6; 
  volatile int *v7; 
  __int64 v8; 
  int v9; 
  volatile int *v10; 
  __int64 v11; 
  int v12; 
  unsigned int v13; 
  volatile int *v14; 
  __int64 v15; 
  int v16; 
  volatile int *v17; 
  __int64 v18; 
  int v19; 
  unsigned int v20; 
  GfxFrameStats *p_frame; 
  GfxViewStatsTarget i; 
  unsigned int v23; 
  unsigned int v24; 
  __int64 v25; 
  GfxFrameStats *v26; 
  __int64 v27; 
  volatile int primCount; 

  Sys_ProfBeginNamedEvent(0xFFFF7F50, "dev perf counters");
  if ( (unsigned int)g_RB_Stats_gatherFrameDelay >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 393, ASSERT_TYPE_ASSERT, "(g_RB_Stats_gatherFrameDelay < GFX_STATS_BUFFER_COUNT)", (const char *)&queryFormat, "g_RB_Stats_gatherFrameDelay < GFX_STATS_BUFFER_COUNT") )
    __debugbreak();
  v2 = 0;
  if ( frontEndDataOut->endSwapFrame - g_RB_Stats_gatherFrameDelay > 0 )
    v2 = frontEndDataOut->endSwapFrame - g_RB_Stats_gatherFrameDelay;
  LockEldest = &g_RB_Stats_Internal.buffers[v2 & 3];
  RB_Stats_ReadLockBuffer(LockEldest);
  if ( LockEldest->frameIndex != v2 )
  {
    RB_Stats_ReadUnlockBuffer(LockEldest);
    LockEldest = RB_Stats_ReadLockEldest();
  }
  v4 = 0;
  triCount = LockEldest->frame.viewStats[0].primStats[0].triCount;
  v6 = 10i64;
  do
  {
    v7 = triCount;
    v8 = 6i64;
    do
    {
      v9 = 0;
      v10 = v7;
      v11 = 3i64;
      do
      {
        v12 = *v10++;
        v9 += v12;
        --v11;
      }
      while ( v11 );
      v7 += 4;
      v4 += v9 + 2 * v9;
      --v8;
    }
    while ( v8 );
    triCount += 56;
    --v6;
  }
  while ( v6 );
  v13 = 0;
  v14 = LockEldest->frame.viewStats[0].primStats[6].triCount;
  v15 = 10i64;
  do
  {
    v16 = 0;
    v17 = v14;
    v18 = 3i64;
    do
    {
      v19 = *v17++;
      v16 += v19;
      --v18;
    }
    while ( v18 );
    v14 += 56;
    v13 += v16 + 2 * v16;
    --v15;
  }
  while ( v15 );
  v20 = 0;
  p_frame = &LockEldest->frame;
  for ( i = GFX_VIEW_STATS_2D; i != GFX_VIEW_STATS_SHADOW_SUN; ++i )
    v20 += RB_Stats_ViewIndexCount(&LockEldest->frame, i);
  v23 = 0;
  do
    v23 += RB_Stats_ViewIndexCount(&LockEldest->frame, i++);
  while ( i != GFX_VIEW_STATS_COUNT );
  v24 = 0;
  v25 = 10i64;
  do
  {
    v26 = p_frame;
    v27 = 10i64;
    do
    {
      primCount = v26->viewStats[0].primStats[0].primCount;
      v26 = (GfxFrameStats *)((char *)v26 + 16);
      v24 += primCount;
      --v27;
    }
    while ( v27 );
    p_frame = (GfxFrameStats *)((char *)p_frame + 224);
    --v25;
  }
  while ( v25 );
  if ( LockEldest->readWriteLockCount != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 147, ASSERT_TYPE_ASSERT, "(buffer->readWriteLockCount == -1)", (const char *)&queryFormat, "buffer->readWriteLockCount == -1") )
    __debugbreak();
  LockEldest->readWriteLockCount = 0;
  outTotals->geoIndexCount = v4;
  outTotals->fxIndexCount = v13;
  outTotals->viewIndexCount = v20;
  outTotals->shadowIndexCount = v23;
  outTotals->primCount = v24;
  Sys_ProfEndNamedEvent();
}

/*
==============
RB_Stats_ReadLockBuffer
==============
*/
void RB_Stats_ReadLockBuffer(const RB_Stats_Buffer *buffer)
{
  volatile int *p_readWriteLockCount; 

  p_readWriteLockCount = &buffer->readWriteLockCount;
  do
  {
    if ( *p_readWriteLockCount )
    {
      Sys_PushUnblockDatabaseThread();
      Sys_Sleep(1);
      Sys_PopUnblockDatabaseThread();
    }
    if ( ((unsigned __int8)p_readWriteLockCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_readWriteLockCount) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(p_readWriteLockCount, -1, 0) );
}

/*
==============
RB_Stats_ReadLockEldest
==============
*/
const RB_Stats_Buffer *RB_Stats_ReadLockEldest()
{
  unsigned int v0; 
  RB_Stats_Internal *v1; 
  __int64 v2; 
  volatile unsigned int frameIndex; 
  RB_Stats_Buffer *v4; 
  volatile signed __int32 *p_readWriteLockCount; 

  while ( 1 )
  {
    v0 = -1;
    v1 = &g_RB_Stats_Internal;
    v2 = 4i64;
    do
    {
      frameIndex = v1->buffers[0].frameIndex;
      v1 = (RB_Stats_Internal *)((char *)v1 + 2252);
      if ( frameIndex < v0 )
        v0 = frameIndex;
      --v2;
    }
    while ( v2 );
    v4 = &g_RB_Stats_Internal.buffers[v0 & 3];
    p_readWriteLockCount = &v4->readWriteLockCount;
    do
    {
      if ( *p_readWriteLockCount )
      {
        Sys_PushUnblockDatabaseThread();
        Sys_Sleep(1);
        Sys_PopUnblockDatabaseThread();
      }
      if ( ((unsigned __int8)p_readWriteLockCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v4->readWriteLockCount) )
        __debugbreak();
    }
    while ( _InterlockedCompareExchange(p_readWriteLockCount, -1, 0) );
    if ( v4->frameIndex == v0 )
      break;
    if ( *p_readWriteLockCount != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 147, ASSERT_TYPE_ASSERT, "(buffer->readWriteLockCount == -1)", (const char *)&queryFormat, "buffer->readWriteLockCount == -1") )
      __debugbreak();
    *p_readWriteLockCount = 0;
  }
  return (const RB_Stats_Buffer *)((char *)&g_RB_Stats_Internal + 2252 * (v0 & 3));
}

/*
==============
RB_Stats_ReadUnlockBuffer
==============
*/
void RB_Stats_ReadUnlockBuffer(const RB_Stats_Buffer *buffer)
{
  if ( buffer->readWriteLockCount == -1 )
  {
    buffer->readWriteLockCount = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 147, ASSERT_TYPE_ASSERT, "(buffer->readWriteLockCount == -1)", (const char *)&queryFormat, "buffer->readWriteLockCount == -1") )
      __debugbreak();
    buffer->readWriteLockCount = 0;
  }
}

/*
==============
RB_Stats_Summarize
==============
*/
void RB_Stats_Summarize(const char *label, const GfxViewStats *viewStats, int useHistogram)
{
  unsigned int v6; 
  volatile int *triCount; 
  int v11; 
  __int64 v12; 
  int v13; 
  volatile int *v14; 
  __int64 v15; 
  int v16; 
  const char **v17; 
  const GfxViewStats *v18; 
  volatile int *v19; 
  volatile int *v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  volatile int *drawPrimHistogram; 
  volatile int v25; 
  volatile int *v26; 
  __int64 v27; 
  signed __int64 v29; 
  __int64 v30; 
  const char *v31; 
  int v38; 
  __int64 v39; 
  GfxPrimStats primStats; 

  v6 = 0;
  triCount = viewStats->primStats[0].triCount;
  v11 = 0;
  v12 = 10i64;
  do
  {
    v13 = 0;
    v14 = triCount;
    v15 = 3i64;
    do
    {
      v16 = *v14++;
      v13 += v16;
      --v15;
    }
    while ( v15 );
    triCount += 4;
    v11 += v13 + 2 * v13;
    --v12;
  }
  while ( v12 );
  if ( v11 )
  {
    Com_Printf(8, "\n=== %s Geometry ===\n", label);
    Com_Printf(8, "|--------------|-----|-------|-------|-------|-------|\n");
    Com_Printf(8, "|geometry type |prims|   tris| static|dynamic|   tess|\n");
    Com_Printf(8, "|--------------|-----|-------|-------|-------|-------|\n");
    v17 = primStatsLabel;
    *(_QWORD *)&primStats.primCount = 0i64;
    *(_QWORD *)&primStats.triCount[1] = 0i64;
    v18 = viewStats;
    do
    {
      RB_Stats_SummarizePrimStats(*v17, v18->primStats);
      v19 = primStats.triCount;
      v20 = primStats.triCount;
      primStats.primCount += v18->primStats[0].primCount;
      v21 = 3i64;
      do
      {
        v22 = *(volatile int *)((char *)v19 + (char *)v18 - (char *)&primStats);
        ++v20;
        v23 = *v19++;
        *((_DWORD *)v20 - 1) = v23 + v22;
        --v21;
      }
      while ( v21 );
      v18 = (const GfxViewStats *)((char *)v18 + 16);
      ++v17;
    }
    while ( (__int64)v17 < (__int64)&unk_1482E03A0 );
    Com_Printf(8, "|--------------|-----|-------|-------|-------|-------|\n");
    RB_Stats_SummarizePrimStats("total", &primStats);
    Com_Printf(8, "|--------------|-----|-------|-------|-------|-------|\n");
    if ( useHistogram )
    {
      drawPrimHistogram = viewStats->drawPrimHistogram;
      v25 = 0;
      v26 = viewStats->drawPrimHistogram;
      v27 = 16i64;
      do
      {
        if ( v25 < *v26 )
          v25 = *v26;
        ++v26;
        --v27;
      }
      while ( v27 );
      if ( v25 )
      {
        __asm { vmovaps [rsp+78h+var_38], xmm6 }
        Com_Printf(8, "\nTriangles Per Primitive Histogram:\n");
        __asm { vmovss  xmm6, cs:__real@42c80000 }
        v29 = (char *)drawPrimHistogramLimit - (char *)viewStats;
        do
        {
          if ( v6 >= 0xF )
            v30 = *(unsigned int *)((char *)drawPrimHistogram + v29 - 164);
          else
            v30 = *(unsigned int *)((char *)drawPrimHistogram + v29 - 160);
          v31 = "<= %4i: ";
          if ( v6 >= 0xF )
            v31 = " > %4i: ";
          Com_Printf(8, v31, v30);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vxorps  xmm1, xmm1, xmm1
            vmulss  xmm2, xmm0, xmm6
            vcvtsi2ss xmm1, xmm1, eax
            vdivss  xmm0, xmm2, xmm1
            vcvtss2sd xmm3, xmm0, xmm0
            vmovq   r9, xmm3
          }
          Com_Printf(8, "%4i (%4.1f%%) ", *(unsigned int *)drawPrimHistogram, *(double *)&_XMM3);
          v38 = (v25 / 2 + 40 * *drawPrimHistogram) / v25;
          if ( v38 > 0 )
          {
            v39 = (unsigned int)v38;
            do
            {
              Com_Printf(8, "#");
              --v39;
            }
            while ( v39 );
          }
          Com_Printf(8, "\n");
          ++v6;
          ++drawPrimHistogram;
        }
        while ( v6 < 0x10 );
        __asm { vmovaps xmm6, [rsp+78h+var_38] }
      }
    }
  }
}

/*
==============
RB_Stats_SummarizePrimStats
==============
*/
void RB_Stats_SummarizePrimStats(const char *label, const GfxPrimStats *primStats)
{
  volatile int *triCount; 
  int v5; 
  __int64 v6; 
  int v7; 
  unsigned int v8; 
  char *v9; 
  char *v10; 
  char *v11; 
  char *v12; 
  char dest[32]; 

  triCount = primStats->triCount;
  v5 = 0;
  v6 = 3i64;
  do
  {
    v7 = *triCount++;
    v5 += v7;
    --v6;
  }
  while ( v6 );
  v8 = 3 * v5;
  if ( 3 * v5 )
  {
    Com_Printf(8, "|%-14s", label);
    v9 = (char *)&queryFormat.fmt + 3;
    if ( primStats->primCount )
    {
      Com_sprintf(dest, 0x20ui64, "%i", (unsigned int)primStats->primCount);
      v10 = dest;
    }
    else
    {
      v10 = (char *)&queryFormat.fmt + 3;
    }
    Com_Printf(8, "|%5s", v10);
    Com_sprintf(dest, 0x20ui64, "%i", v8);
    Com_Printf(8, "|%7s", dest);
    if ( primStats->triCount[0] )
    {
      Com_sprintf(dest, 0x20ui64, "%i", (unsigned int)primStats->triCount[0]);
      v11 = dest;
    }
    else
    {
      v11 = (char *)&queryFormat.fmt + 3;
    }
    Com_Printf(8, "|%7s", v11);
    if ( primStats->triCount[1] )
    {
      Com_sprintf(dest, 0x20ui64, "%i", (unsigned int)primStats->triCount[1]);
      v12 = dest;
    }
    else
    {
      v12 = (char *)&queryFormat.fmt + 3;
    }
    Com_Printf(8, "|%7s", v12);
    if ( primStats->triCount[2] )
    {
      Com_sprintf(dest, 0x20ui64, "%i", (unsigned int)primStats->triCount[2]);
      v9 = dest;
    }
    Com_Printf(8, "|%7s|\n", v9);
  }
}

/*
==============
RB_Stats_UpdateMaxs
==============
*/
void RB_Stats_UpdateMaxs(unsigned int trackFrameIndex, GfxFrameStats *frameStatsMax)
{
  const RB_Stats_Buffer *v4; 
  __int64 v5; 
  __int64 v6; 
  volatile int v7; 

  v4 = &g_RB_Stats_Internal.buffers[trackFrameIndex & 3];
  RB_Stats_ReadLockBuffer(v4);
  if ( v4->frameIndex == trackFrameIndex )
  {
    v5 = 561i64;
    v6 = (char *)&v4->frame - (char *)frameStatsMax;
    do
    {
      v7 = *(volatile int *)((char *)&frameStatsMax->viewStats[0].primStats[0].primCount + v6);
      if ( frameStatsMax->viewStats[0].primStats[0].primCount < v7 )
        frameStatsMax->viewStats[0].primStats[0].primCount = v7;
      frameStatsMax = (GfxFrameStats *)((char *)frameStatsMax + 4);
      --v5;
    }
    while ( v5 );
    if ( v4->readWriteLockCount != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 147, ASSERT_TYPE_ASSERT, "(buffer->readWriteLockCount == -1)", (const char *)&queryFormat, "buffer->readWriteLockCount == -1") )
      __debugbreak();
    v4->readWriteLockCount = 0;
  }
  else
  {
    RB_Stats_ReadUnlockBuffer(v4);
  }
}

/*
==============
RB_Stats_ViewIndexCount
==============
*/
__int64 RB_Stats_ViewIndexCount(const GfxFrameStats *frameStats, GfxViewStatsTarget viewStatsTarget)
{
  __int64 v2; 
  __int64 v3; 
  unsigned int v5; 
  volatile int *triCount; 
  int v7; 
  volatile int *v8; 
  __int64 v9; 
  int v10; 

  v2 = viewStatsTarget;
  v3 = 10i64;
  if ( (unsigned int)viewStatsTarget >= GFX_VIEW_STATS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 297, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( viewStatsTarget ) ) < (unsigned)( ( sizeof( *array_counter( frameStats->viewStats ) ) + 0 ) )", "static_cast<uint>( viewStatsTarget ) doesn't index ARRAY_COUNT( frameStats->viewStats )\n\t%i not in [0, %i)", viewStatsTarget, 10) )
    __debugbreak();
  v5 = 0;
  triCount = frameStats->viewStats[v2].primStats[0].triCount;
  do
  {
    v7 = 0;
    v8 = triCount;
    v9 = 3i64;
    do
    {
      v10 = *v8++;
      v7 += v10;
      --v9;
    }
    while ( v9 );
    triCount += 4;
    v5 += v7 + 2 * v7;
    --v3;
  }
  while ( v3 );
  return v5;
}

/*
==============
RB_Stats_WriteUnlockBuffer
==============
*/
void RB_Stats_WriteUnlockBuffer(RB_Stats_Buffer *buffer)
{
  volatile int *p_readWriteLockCount; 
  signed __int32 v2; 

  p_readWriteLockCount = &buffer->readWriteLockCount;
  do
  {
    v2 = *p_readWriteLockCount;
    if ( *(int *)p_readWriteLockCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 207, ASSERT_TYPE_ASSERT, "(readWriteLockCount > 0)", (const char *)&queryFormat, "readWriteLockCount > 0") )
      __debugbreak();
    if ( ((unsigned __int8)p_readWriteLockCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_readWriteLockCount) )
      __debugbreak();
  }
  while ( v2 != _InterlockedCompareExchange(p_readWriteLockCount, v2 - 1, v2) );
}

/*
==============
RB_Stats_f
==============
*/
void RB_Stats_f(void)
{
  int v0; 
  GfxFrameStats *p_frame; 
  int v2; 
  unsigned int v3; 
  const char *v4; 
  const char *v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  const char **v12; 
  const GfxViewStats *v13; 
  __int64 v14; 
  unsigned int v15; 
  volatile int *triCount; 
  __int64 v17; 
  int v18; 
  volatile int *v19; 
  __int64 v20; 
  int v21; 
  volatile int *v22; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  GfxFrameStats *v27; 
  __int64 v28; 
  volatile int primCount; 
  const char *v30; 
  __int64 v31; 
  int v32; 
  __int64 v33; 
  int v34; 
  int v35; 
  int v36; 
  const char *v37; 
  const char *v38; 
  const RB_Stats_Buffer *LockEldest; 

  R_SyncRenderThread();
  LockEldest = RB_Stats_ReadLockEldest();
  v0 = 0;
  p_frame = &LockEldest->frame;
  v2 = 1;
  v3 = Cmd_Argc();
  if ( v3 > 1 )
  {
    while ( 2 )
    {
      v4 = "max";
      v5 = Cmd_Argv(v2);
      v6 = 0x7FFFFFFFi64;
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      while ( 1 )
      {
        v7 = (unsigned __int8)v4[v5 - "max"];
        v8 = v6;
        v9 = *(unsigned __int8 *)v4++;
        --v6;
        if ( !v8 )
        {
LABEL_13:
          p_frame = &backEnd.frameStatsMax;
          goto LABEL_14;
        }
        if ( v7 != v9 )
        {
          v10 = v7 + 32;
          if ( (unsigned int)(v7 - 65) > 0x19 )
            v10 = v7;
          v7 = v10;
          v11 = v9 + 32;
          if ( (unsigned int)(v9 - 65) > 0x19 )
            v11 = v9;
          if ( v7 != v11 )
            break;
        }
        if ( !v7 )
          goto LABEL_13;
      }
      v30 = "cur";
      v31 = 0x7FFFFFFFi64;
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      while ( 1 )
      {
        v32 = (unsigned __int8)v30[v5 - "cur"];
        v33 = v31;
        v34 = *(unsigned __int8 *)v30++;
        --v31;
        if ( !v33 )
        {
LABEL_43:
          p_frame = &LockEldest->frame;
          goto LABEL_14;
        }
        if ( v32 != v34 )
        {
          v35 = v32 + 32;
          if ( (unsigned int)(v32 - 65) > 0x19 )
            v35 = v32;
          v32 = v35;
          v36 = v34 + 32;
          if ( (unsigned int)(v34 - 65) > 0x19 )
            v36 = v34;
          if ( v32 != v36 )
            break;
        }
        if ( !v32 )
          goto LABEL_43;
      }
      if ( I_stricmp(v5, "hist") )
      {
        if ( I_stricmp(v5, "bsp") )
        {
          Com_Printf(8, "Unknown argument '%s'\n", v5);
          v38 = Cmd_Argv(0);
          Com_Printf(8, "USAGE: %s [args]\n", v38);
          Com_Printf(8, "Valid arguments:\n");
          Com_Printf(8, "  cur                      - Use current stats\n");
          Com_Printf(8, "  max                      - Use maximum stats instead of current stats\n");
          Com_Printf(8, "  hist                     - Include histogram in output\n");
          Com_Printf(8, "  bsp [optionalFileSuffix] - Dumps all visible bsp surfs emitted by frontend to game/%%plaform%%/r_stats_[optionalFileSuffix]_[drawlistType].csv\n");
          Com_Printf(8, "\n");
          goto LABEL_28;
        }
        if ( ++v2 >= v3 )
        {
          R_Stats_DumpBspInfo((const char *)&queryFormat.fmt + 3);
        }
        else
        {
          v37 = Cmd_Argv(v2);
          R_Stats_DumpBspInfo(v37);
        }
      }
      else
      {
        v0 = 1;
      }
LABEL_14:
      if ( ++v2 < v3 )
        continue;
      break;
    }
  }
  v12 = s_viewStatsName;
  v13 = (const GfxViewStats *)p_frame;
  v14 = 10i64;
  do
  {
    RB_Stats_Summarize(*v12++, v13++, v0);
    --v14;
  }
  while ( v14 );
  Com_Printf(8, "SUMMARY:\n");
  Com_Printf(8, "%i raw tris\n", (unsigned int)(p_frame->geoIndexCount / 3));
  v15 = 0;
  triCount = p_frame->viewStats[0].primStats[0].triCount;
  v17 = 10i64;
  do
  {
    v18 = 0;
    v19 = triCount;
    v20 = 10i64;
    do
    {
      v21 = 0;
      v22 = v19;
      v23 = 3i64;
      do
      {
        v24 = *v22++;
        v21 += v24;
        --v23;
      }
      while ( v23 );
      v19 += 4;
      v18 += v21 + 2 * v21;
      --v20;
    }
    while ( v20 );
    v15 += v18;
    triCount += 56;
    --v17;
  }
  while ( v17 );
  Com_Printf(8, "%i total tris\n", v15 / 3);
  LODWORD(v25) = 0;
  v26 = 10i64;
  do
  {
    v27 = p_frame;
    v28 = 10i64;
    do
    {
      primCount = v27->viewStats[0].primStats[0].primCount;
      v27 = (GfxFrameStats *)((char *)v27 + 16);
      v25 = (unsigned int)(primCount + v25);
      --v28;
    }
    while ( v28 );
    p_frame = (GfxFrameStats *)((char *)p_frame + 224);
    --v26;
  }
  while ( v26 );
  Com_Printf(8, "%i total prims\n", v25);
LABEL_28:
  if ( LockEldest->readWriteLockCount != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 147, ASSERT_TYPE_ASSERT, "(buffer->readWriteLockCount == -1)", (const char *)&queryFormat, "buffer->readWriteLockCount == -1") )
    __debugbreak();
  LockEldest->readWriteLockCount = 0;
}

/*
==============
RB_TrackDrawPrimCall
==============
*/
void RB_TrackDrawPrimCall(unsigned int trackFrameIndex, GfxViewStatsTarget viewStatsTarget, GfxPrimStatsTarget primStatsTarget, GfxPrimStatsTriSource triSource, unsigned int triCount, unsigned int instanceCount)
{
  __int64 v6; 
  __int64 v7; 
  RB_Stats_Buffer *v9; 
  signed __int32 readWriteLockCount; 
  volatile signed __int32 *p_readWriteLockCount; 
  __int64 v12; 
  volatile signed __int32 *v13; 
  volatile signed __int32 *v14; 
  __int64 v15; 
  const unsigned int *v16; 
  volatile signed __int32 *v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 

  v6 = primStatsTarget;
  v7 = viewStatsTarget;
  v9 = &g_RB_Stats_Internal.buffers[trackFrameIndex & 3];
  readWriteLockCount = v9->readWriteLockCount;
  p_readWriteLockCount = &v9->readWriteLockCount;
  if ( readWriteLockCount >= 0 )
  {
    while ( 1 )
    {
      if ( ((unsigned __int8)p_readWriteLockCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v9->readWriteLockCount) )
        __debugbreak();
      if ( readWriteLockCount == _InterlockedCompareExchange(p_readWriteLockCount, readWriteLockCount + 1, readWriteLockCount) )
        break;
      readWriteLockCount = *p_readWriteLockCount;
      if ( *(int *)p_readWriteLockCount < 0 )
        return;
    }
    if ( v9->frameIndex == trackFrameIndex )
    {
      if ( (unsigned int)v7 >= 0xA )
      {
        v20 = 10;
        LODWORD(v18) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 250, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( viewStatsTarget ) ) < (unsigned)( GFX_VIEW_STATS_COUNT )", "static_cast<uint>( viewStatsTarget ) doesn't index GFX_VIEW_STATS_COUNT\n\t%i not in [0, %i)", v18, v20) )
          __debugbreak();
      }
      if ( (unsigned int)v6 >= 0xA )
      {
        LODWORD(v19) = 10;
        LODWORD(v18) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 251, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( primStatsTarget ) ) < (unsigned)( GFX_PRIM_STATS_COUNT )", "static_cast<uint>( primStatsTarget ) doesn't index GFX_PRIM_STATS_COUNT\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( (unsigned int)triSource >= GFX_TRI_SOURCE_COUNT )
      {
        LODWORD(v19) = 3;
        LODWORD(v18) = triSource;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_stats.cpp", 252, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( triSource ) ) < (unsigned)( GFX_TRI_SOURCE_COUNT )", "static_cast<uint>( triSource ) doesn't index GFX_TRI_SOURCE_COUNT\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v12 = (__int64)&v9->frame.viewStats[v7];
      v13 = (volatile signed __int32 *)(v12 + 16 * v6);
      if ( (((_BYTE)v9 - 56) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v9->frame.geoIndexCount) )
        __debugbreak();
      _InterlockedExchangeAdd(&v9->frame.geoIndexCount, 3 * instanceCount * triCount);
      v14 = &v13[triSource + 1];
      if ( ((unsigned __int8)v14 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&v13[triSource + 1]) )
        __debugbreak();
      _InterlockedExchangeAdd(v14, instanceCount * triCount);
      if ( ((unsigned __int8)v13 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v13) )
        __debugbreak();
      _InterlockedExchangeAdd(v13, instanceCount);
      v15 = 0i64;
      v16 = drawPrimHistogramLimit;
      while ( triCount > *v16 )
      {
        if ( triCount <= v16[1] )
        {
          v15 = (unsigned int)(v15 + 1);
          break;
        }
        if ( triCount <= v16[2] )
        {
          v15 = (unsigned int)(v15 + 2);
          break;
        }
        if ( triCount <= v16[3] )
        {
          v15 = (unsigned int)(v15 + 3);
          break;
        }
        if ( triCount <= v16[4] )
        {
          v15 = (unsigned int)(v15 + 4);
          break;
        }
        v16 += 5;
        v15 = (unsigned int)(v15 + 5);
        if ( (unsigned int)v15 >= 0xF )
          break;
      }
      v17 = (volatile signed __int32 *)(v12 + 4 * v15 + 160);
      if ( (((_BYTE)v12 + 4 * (_BYTE)v15 - 96) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)(v12 + 4 * v15 + 160)) )
        __debugbreak();
      _InterlockedExchangeAdd(v17, instanceCount);
    }
    RB_Stats_WriteUnlockBuffer(v9);
  }
}

