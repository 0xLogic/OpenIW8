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
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  const RB_Stats_Buffer *LockEldest; 
  __int64 v15; 
  int v16; 
  volatile int *drawPrimHistogram; 
  __int64 v18; 
  volatile int *v19; 
  __int64 v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  float v25; 
  const char **v26; 
  const char *v27; 
  __int128 v28; 
  float v29; 
  float v30; 
  float v31; 
  unsigned int v32; 
  __int64 v33; 
  float v34; 
  __int128 v35; 
  unsigned int v36; 
  int *v37; 
  char *v38; 
  __int64 *v39; 
  char *v40; 
  int *v41; 
  int v42; 
  __int128 v43; 
  int v44; 
  int *v45; 
  __int64 v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
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
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  __int128 v82; 
  __int64 v83; 
  __int64 v84; 
  int v85; 
  __int128 v86; 
  __int128 v87; 
  float v88; 
  float v89; 
  unsigned int *v90; 
  __int64 v91; 
  float v92; 
  __int128 v93; 
  materialCommands_t *Tess; 
  materialCommands_t *v95; 
  GfxColor v96; 
  unsigned int v97; 
  unsigned int packed; 
  unsigned int v99; 
  float v100; 
  float v101; 
  unsigned int v102; 
  float v103; 
  GfxColor *v104; 
  const RB_Stats_Buffer *v105; 
  float v106; 
  float v107; 
  int *v108; 
  __int64 v109; 
  __int64 v110; 
  __int64 v111; 
  GfxCmdBufContext v112; 
  GfxCmdBufContext v113; 
  GfxCmdBufContext v114; 
  GfxCmdBufContext v115; 
  GfxCmdBufContext v116; 
  GfxCmdBufContext v117; 
  GfxCmdBufContext v118; 
  GfxCmdBufContext v119; 
  GfxCmdBufContext v120; 
  GfxCmdBufContext v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  __int64 v128[6]; 
  char v129[4]; 
  char v130; 
  char v131; 
  char dest[32]; 
  __int128 v133; 
  __int128 v134; 
  __int128 v135; 
  __int128 v136; 
  __int128 v137; 
  __int128 v138; 
  __int128 v139; 
  __int128 v140; 
  __int128 v141; 
  __int128 v142; 

  LockEldest = &g_RB_Stats_Internal.buffers[trackFrameIndex & 3];
  v105 = LockEldest;
  RB_Stats_ReadLockBuffer(LockEldest);
  if ( LockEldest->frameIndex != trackFrameIndex )
  {
    RB_Stats_ReadUnlockBuffer(LockEldest);
    LockEldest = RB_Stats_ReadLockEldest();
    v105 = LockEldest;
  }
  v15 = LockEldest->frameIndex & 0x8000003F;
  if ( LockEldest->frameIndex < 0 )
    v15 = ((unsigned __int8)((LockEldest->frameIndex & 0x3F) - 1) | 0xFFFFFFC0) + 1;
  v16 = 0;
  drawPrimHistogram = backEnd.frameStatsMax.viewStats[0].drawPrimHistogram;
  v18 = 16i64;
  do
  {
    v19 = drawPrimHistogram;
    v20 = 10i64;
    do
    {
      if ( v16 < *v19 )
        v16 = *v19;
      v19 += 56;
      --v20;
    }
    while ( v20 );
    ++drawPrimHistogram;
    --v18;
  }
  while ( v18 );
  if ( v16 )
  {
    v142 = v2;
    v141 = v3;
    v140 = v4;
    v139 = v5;
    v138 = v6;
    v137 = v7;
    v136 = v8;
    v135 = v9;
    v134 = v10;
    v133 = v11;
    v21 = (float)R_TextHeight(backEnd.debugFont);
    v101 = v21;
    v22 = (float)R_TextWidth("8888 ", 5, backEnd.debugFont);
    v100 = v22;
    v23 = 0i64;
    *(float *)&v23 = (float)R_TextWidth("8888:", 5, backEnd.debugFont) + 52.0;
    v103 = *(float *)&v23;
    v24 = v23;
    v25 = 27.200001 - v22;
    v26 = s_viewStatsHeader;
    do
    {
      v27 = *v26;
      v112 = *gfxContext;
      RB_DrawText(&v112, v27, backEnd.debugFont, *(float *)&v24, v21 + 47.0, (const GfxColor)-1);
      ++v26;
      v28 = v24;
      *(float *)&v28 = *(float *)&v24 + 31.200001;
      v24 = v28;
    }
    while ( (__int64)v26 < (__int64)primStatsLabel );
    v29 = FLOAT_48_0;
    v122 = -12566273;
    v125 = -16777056;
    v123 = -12517377;
    v30 = v21 + 48.0;
    v126 = -16736096;
    v124 = -12517568;
    v127 = -16736256;
    memset(v128, 0, 40);
    memset_0(v129, 0, 0x78ui64);
    v31 = FLOAT_2_0;
    v32 = 0;
    v33 = 0i64;
    v102 = 0;
    v110 = 0i64;
    v111 = (5 * v15 - 10) << 7;
    do
    {
      if ( v32 >= 0xF )
        Core_strcpy(dest, 0x20ui64, "more:");
      else
        Com_sprintf<32>((char (*)[32])dest, "%4i: ", *(const unsigned int *)((char *)drawPrimHistogramLimit + v33));
      v113 = *gfxContext;
      v34 = (float)(v30 + v21) - 1.0;
      v106 = v34;
      v107 = v30 + v21;
      RB_DrawText(&v113, dest, backEnd.debugFont, v29, v34, (const GfxColor)-1);
      v35 = LODWORD(v103);
      if ( v32 == 15 || (v36 = *(const unsigned int *)((char *)drawPrimHistogramLimit + v33), v36 > 0x12C) )
      {
        v108 = &v127;
        v38 = &v131;
        v37 = &v124;
      }
      else if ( v36 <= 0x32 )
      {
        v108 = &v125;
        v37 = &v122;
        v38 = v129;
      }
      else
      {
        v108 = &v126;
        v37 = &v123;
        v38 = &v130;
      }
      v104 = (GfxColor *)v37;
      v39 = v128;
      v40 = (char *)g_RB_Stats_Internal.histogramHistory[2] + v33;
      v109 = 10i64;
      v41 = (int *)((char *)LockEldest->frame.viewStats[0].drawPrimHistogram + v33);
      do
      {
        v42 = *v41;
        *(_DWORD *)v38 += *v41;
        *(_DWORD *)v39 += v42;
        if ( v42 )
        {
          Com_sprintf<32>((char (*)[32])dest, "%4i", (unsigned int)v42);
          v96 = *v104;
          v114 = *gfxContext;
          RB_DrawText(&v114, dest, backEnd.debugFont, *(float *)&v35, v34, v96);
        }
        v43 = v35;
        *(float *)&v43 = *(float *)&v35 + v22;
        v44 = v42;
        v45 = (int *)v40;
        v46 = 2i64;
        do
        {
          v47 = *(v45 - 320);
          if ( v44 >= v47 )
            v47 = v44;
          v48 = *(v45 - 160);
          if ( v47 >= v48 )
            v48 = v47;
          v49 = *v45;
          if ( v48 >= *v45 )
            v49 = v48;
          v50 = v45[160];
          if ( v49 >= v50 )
            v50 = v49;
          v51 = v45[320];
          if ( v50 >= v51 )
            v51 = v50;
          v52 = v45[480];
          if ( v51 >= v52 )
            v52 = v51;
          v53 = v45[640];
          if ( v52 >= v53 )
            v53 = v52;
          v54 = v45[800];
          if ( v53 >= v54 )
            v54 = v53;
          v55 = v45[960];
          if ( v54 >= v55 )
            v55 = v54;
          v56 = v45[1120];
          if ( v55 >= v56 )
            v56 = v55;
          v57 = v45[1280];
          if ( v56 >= v57 )
            v57 = v56;
          v58 = v45[1440];
          if ( v57 >= v58 )
            v58 = v57;
          v59 = v45[1600];
          if ( v58 >= v59 )
            v59 = v58;
          v60 = v45[1760];
          if ( v59 >= v60 )
            v60 = v59;
          v61 = v45[1920];
          if ( v60 >= v61 )
            v61 = v60;
          v62 = v45[2080];
          if ( v61 >= v62 )
            v62 = v61;
          v63 = v45[2240];
          if ( v62 >= v63 )
            v63 = v62;
          v64 = v45[2400];
          if ( v63 >= v64 )
            v64 = v63;
          v65 = v45[2560];
          if ( v64 >= v65 )
            v65 = v64;
          v66 = v45[2720];
          if ( v65 >= v66 )
            v66 = v65;
          v67 = v45[2880];
          if ( v66 >= v67 )
            v67 = v66;
          v68 = v45[3040];
          if ( v67 >= v68 )
            v68 = v67;
          v69 = v45[3200];
          if ( v68 >= v69 )
            v69 = v68;
          v70 = v45[3360];
          if ( v69 >= v70 )
            v70 = v69;
          v71 = v45[3520];
          if ( v70 >= v71 )
            v71 = v70;
          v72 = v45[3680];
          if ( v71 >= v72 )
            v72 = v71;
          v73 = v45[3840];
          if ( v72 >= v73 )
            v73 = v72;
          v74 = v45[4000];
          v45 += 5120;
          if ( v73 >= v74 )
            v74 = v73;
          v75 = *(v45 - 960);
          if ( v74 >= v75 )
            v75 = v74;
          v76 = *(v45 - 800);
          if ( v75 >= v76 )
            v76 = v75;
          v77 = *(v45 - 640);
          if ( v76 >= v77 )
            v77 = v76;
          v44 = *(v45 - 480);
          if ( v77 >= v44 )
            v44 = v77;
          --v46;
        }
        while ( v46 );
        if ( v44 )
        {
          v78 = 1.0 / (float)v16;
          v79 = (float)((float)v44 * v25) * v78;
          v115 = *gfxContext;
          RB_DrawStretchPic(&v115, rgp.whiteMaterial, *(float *)&v43 - v31, v30 + v31, v79 + 4.0, v21 - 4.0, 0.0, 0.0, 1.0, 1.0, 0xFF000000, GFX_PRIM_STATS_DEBUG);
          v80 = v21 - 8.0;
          v97 = *v108;
          v116 = *gfxContext;
          RB_DrawStretchPic(&v116, rgp.whiteMaterial, *(float *)&v43, v30 + 4.0, v79, v80, 0.0, 0.0, 1.0, 1.0, v97, GFX_PRIM_STATS_DEBUG);
          if ( v42 )
          {
            packed = v104->packed;
            v117 = *gfxContext;
            RB_DrawStretchPic(&v117, rgp.whiteMaterial, *(float *)&v43, v30 + 4.0, (float)((float)v42 * v25) * v78, v80, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
          }
          v22 = v100;
          v31 = FLOAT_2_0;
          v21 = v101;
        }
        v41 += 56;
        v81 = v25 + 4.0;
        v38 += 12;
        v39 = (__int64 *)((char *)v39 + 4);
        *(float *)&v43 = *(float *)&v43 + (float)(v25 + 4.0);
        v35 = v43;
        v34 = v106;
        *(_DWORD *)&v40[v111] = v42;
        v40 += 64;
        --v109;
      }
      while ( v109 );
      v30 = v107;
      v29 = FLOAT_48_0;
      LockEldest = v105;
      v32 = v102 + 1;
      v33 = v110 + 4;
      v102 = v32;
      v110 += 4i64;
    }
    while ( v32 < 0x10 );
    v82 = LODWORD(v103);
    v83 = 0i64;
    v84 = 20i64;
    do
    {
      v85 = *((_DWORD *)v128 + v83);
      v87 = v82;
      *(float *)&v87 = *(float *)&v82 + v22;
      v86 = v87;
      if ( v85 )
      {
        v118 = *gfxContext;
        RB_DrawStretchPic(&v118, rgp.whiteMaterial, *(float *)&v87 - v31, v107 + v31, v81, v21 - 4.0, 0.0, 0.0, 1.0, 1.0, 0xFF000000, GFX_PRIM_STATS_DEBUG);
        v88 = v21 - 8.0;
        v89 = 1.0 / (float)v85;
        v90 = (unsigned int *)&v122;
        v91 = 3i64;
        do
        {
          v99 = *v90;
          v92 = (float)((float)(int)v90[v84] * v25) * v89;
          v119 = *gfxContext;
          RB_DrawStretchPic(&v119, rgp.whiteMaterial, *(float *)&v86, v107 + 4.0, v92, v88, 0.0, 0.0, 1.0, 1.0, v99, GFX_PRIM_STATS_DEBUG);
          ++v90;
          v93 = v86;
          *(float *)&v93 = *(float *)&v86 + v92;
          v86 = v93;
          --v91;
        }
        while ( v91 );
        v22 = v100;
        *(float *)&v93 = *(float *)&v93 + 4.0;
        v82 = v93;
        v81 = v25 + 4.0;
      }
      else
      {
        *(float *)&v87 = *(float *)&v87 + v81;
        v82 = v87;
      }
      v21 = v101;
      v31 = FLOAT_2_0;
      ++v83;
      v84 += 3i64;
    }
    while ( v83 < 10 );
    v120 = *gfxContext;
    Tess = R_GetTess(&v120);
    v95 = Tess;
    if ( Tess->vertexCount )
    {
      v121 = *gfxContext;
      RB_EndTessSurfaceInternal(&v121, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
    }
    else
    {
      if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
        __debugbreak();
      v95->viewStatsTarget = GFX_VIEW_STATS_INVALID;
      v95->primStatsTarget = GFX_PRIM_STATS_INVALID;
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
  unsigned int v3; 
  volatile int *triCount; 
  int v8; 
  __int64 v9; 
  int v10; 
  volatile int *v11; 
  __int64 v12; 
  int v13; 
  const char **v14; 
  const GfxViewStats *v15; 
  volatile int *v16; 
  volatile int *v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  volatile int *drawPrimHistogram; 
  volatile int v22; 
  volatile int *v23; 
  __int64 v24; 
  signed __int64 v25; 
  __int64 v26; 
  const char *v27; 
  int v28; 
  __int64 v29; 
  GfxPrimStats primStats; 

  v3 = 0;
  triCount = viewStats->primStats[0].triCount;
  v8 = 0;
  v9 = 10i64;
  do
  {
    v10 = 0;
    v11 = triCount;
    v12 = 3i64;
    do
    {
      v13 = *v11++;
      v10 += v13;
      --v12;
    }
    while ( v12 );
    triCount += 4;
    v8 += v10 + 2 * v10;
    --v9;
  }
  while ( v9 );
  if ( v8 )
  {
    Com_Printf(8, "\n=== %s Geometry ===\n", label);
    Com_Printf(8, "|--------------|-----|-------|-------|-------|-------|\n");
    Com_Printf(8, "|geometry type |prims|   tris| static|dynamic|   tess|\n");
    Com_Printf(8, "|--------------|-----|-------|-------|-------|-------|\n");
    v14 = primStatsLabel;
    *(_QWORD *)&primStats.primCount = 0i64;
    *(_QWORD *)&primStats.triCount[1] = 0i64;
    v15 = viewStats;
    do
    {
      RB_Stats_SummarizePrimStats(*v14, v15->primStats);
      v16 = primStats.triCount;
      v17 = primStats.triCount;
      primStats.primCount += v15->primStats[0].primCount;
      v18 = 3i64;
      do
      {
        v19 = *(volatile int *)((char *)v16 + (char *)v15 - (char *)&primStats);
        ++v17;
        v20 = *v16++;
        *((_DWORD *)v17 - 1) = v20 + v19;
        --v18;
      }
      while ( v18 );
      v15 = (const GfxViewStats *)((char *)v15 + 16);
      ++v14;
    }
    while ( (__int64)v14 < (__int64)&unk_1482E03A0 );
    Com_Printf(8, "|--------------|-----|-------|-------|-------|-------|\n");
    RB_Stats_SummarizePrimStats("total", &primStats);
    Com_Printf(8, "|--------------|-----|-------|-------|-------|-------|\n");
    if ( useHistogram )
    {
      drawPrimHistogram = viewStats->drawPrimHistogram;
      v22 = 0;
      v23 = viewStats->drawPrimHistogram;
      v24 = 16i64;
      do
      {
        if ( v22 < *v23 )
          v22 = *v23;
        ++v23;
        --v24;
      }
      while ( v24 );
      if ( v22 )
      {
        Com_Printf(8, "\nTriangles Per Primitive Histogram:\n");
        v25 = (char *)drawPrimHistogramLimit - (char *)viewStats;
        do
        {
          if ( v3 >= 0xF )
            v26 = *(unsigned int *)((char *)drawPrimHistogram + v25 - 164);
          else
            v26 = *(unsigned int *)((char *)drawPrimHistogram + v25 - 160);
          v27 = "<= %4i: ";
          if ( v3 >= 0xF )
            v27 = " > %4i: ";
          Com_Printf(8, v27, v26);
          Com_Printf(8, "%4i (%4.1f%%) ", *(unsigned int *)drawPrimHistogram, (float)((float)((float)*(int *)drawPrimHistogram * 100.0) / (float)primStats.primCount));
          v28 = (v22 / 2 + 40 * *drawPrimHistogram) / v22;
          if ( v28 > 0 )
          {
            v29 = (unsigned int)v28;
            do
            {
              Com_Printf(8, "#");
              --v29;
            }
            while ( v29 );
          }
          Com_Printf(8, "\n");
          ++v3;
          ++drawPrimHistogram;
        }
        while ( v3 < 0x10 );
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

