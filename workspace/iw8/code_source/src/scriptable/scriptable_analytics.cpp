/*
==============
Scriptable_Analytics_AddRuntimeMemoryCount
==============
*/

void __fastcall Scriptable_Analytics_AddRuntimeMemoryCount(Scriptable_Analytics_Zone zone, int bytes)
{
  ?Scriptable_Analytics_AddRuntimeMemoryCount@@YAXW4Scriptable_Analytics_Zone@@H@Z(zone, bytes);
}

/*
==============
Scriptable_Analytics_DebugDraw
==============
*/

void __fastcall Scriptable_Analytics_DebugDraw(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?Scriptable_Analytics_DebugDraw@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
Scriptable_Analytics_AddStateChangeCount
==============
*/

void __fastcall Scriptable_Analytics_AddStateChangeCount(Scriptable_Analytics_Zone zone, int changeCount)
{
  ?Scriptable_Analytics_AddStateChangeCount@@YAXW4Scriptable_Analytics_Zone@@H@Z(zone, changeCount);
}

/*
==============
Scriptable_Analytics_AddScriptableCount
==============
*/

void __fastcall Scriptable_Analytics_AddScriptableCount(Scriptable_Analytics_Zone zone, int scriptableCount)
{
  ?Scriptable_Analytics_AddScriptableCount@@YAXW4Scriptable_Analytics_Zone@@H@Z(zone, scriptableCount);
}

/*
==============
Scriptable_Analytics_AddClientCollisionActivationCount
==============
*/

void __fastcall Scriptable_Analytics_AddClientCollisionActivationCount(Scriptable_Analytics_Zone zone, int activationCount)
{
  ?Scriptable_Analytics_AddClientCollisionActivationCount@@YAXW4Scriptable_Analytics_Zone@@H@Z(zone, activationCount);
}

/*
==============
Scriptable_Analytics_InitClient
==============
*/

void __fastcall Scriptable_Analytics_InitClient(LocalClientNum_t localClientNum)
{
  ?Scriptable_Analytics_InitClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Scriptable_Analytics_InitServer
==============
*/

void Scriptable_Analytics_InitServer(void)
{
  ?Scriptable_Analytics_InitServer@@YAXXZ();
}

/*
==============
Scriptable_Analytics_AddCollisionInstanceCount
==============
*/

void __fastcall Scriptable_Analytics_AddCollisionInstanceCount(Scriptable_Analytics_Zone zone, int activationCount)
{
  ?Scriptable_Analytics_AddCollisionInstanceCount@@YAXW4Scriptable_Analytics_Zone@@H@Z(zone, activationCount);
}

/*
==============
Scriptable_Analytics_AddPartCount
==============
*/

void __fastcall Scriptable_Analytics_AddPartCount(Scriptable_Analytics_Zone zone, int partCount)
{
  ?Scriptable_Analytics_AddPartCount@@YAXW4Scriptable_Analytics_Zone@@H@Z(zone, partCount);
}

/*
==============
Scriptable_Analytics_FlipServerFrame
==============
*/

void Scriptable_Analytics_FlipServerFrame(void)
{
  ?Scriptable_Analytics_FlipServerFrame@@YAXXZ();
}

/*
==============
Scriptable_Analytics_FlipClientFrame
==============
*/

void __fastcall Scriptable_Analytics_FlipClientFrame(LocalClientNum_t localClientNum)
{
  ?Scriptable_Analytics_FlipClientFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Scriptable_Analytics_AddClientCollisionActivationCount
==============
*/
void Scriptable_Analytics_AddClientCollisionActivationCount(Scriptable_Analytics_Zone zone, int activationCount)
{
  __int64 v2; 
  __int64 serverStartIdx; 
  __int64 v5; 
  volatile signed __int32 *v6; 

  v2 = zone;
  if ( (unsigned int)zone >= Scriptable_Analytics_Zone_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_analytics.cpp", 146, ASSERT_TYPE_ASSERT, "(unsigned)( zone ) < (unsigned)( Scriptable_Analytics_Zone_Count )", "zone doesn't index Scriptable_Analytics_Zone_Count\n\t%i not in [0, %i)", zone, 5) )
    __debugbreak();
  serverStartIdx = s_scriptableAnalyticsData.serverStartIdx;
  if ( (_DWORD)v2 == 4 )
    serverStartIdx = s_scriptableAnalyticsData.clientStartIdx;
  v5 = (v2 << 7) + serverStartIdx;
  v6 = &s_scriptableAnalyticsData.collisionActivationCount[0][v5];
  if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (char *)s_scriptableAnalyticsData.collisionActivationCount + 4 * v5) )
    __debugbreak();
  _InterlockedExchangeAdd(v6, activationCount);
}

/*
==============
Scriptable_Analytics_AddCollisionInstanceCount
==============
*/
void Scriptable_Analytics_AddCollisionInstanceCount(Scriptable_Analytics_Zone zone, int activationCount)
{
  __int64 v2; 
  __int64 serverStartIdx; 
  __int64 v5; 
  volatile signed __int32 *v6; 

  v2 = zone;
  if ( (unsigned int)zone >= Scriptable_Analytics_Zone_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_analytics.cpp", 133, ASSERT_TYPE_ASSERT, "(unsigned)( zone ) < (unsigned)( Scriptable_Analytics_Zone_Count )", "zone doesn't index Scriptable_Analytics_Zone_Count\n\t%i not in [0, %i)", zone, 5) )
    __debugbreak();
  serverStartIdx = s_scriptableAnalyticsData.serverStartIdx;
  if ( (_DWORD)v2 == 4 )
    serverStartIdx = s_scriptableAnalyticsData.clientStartIdx;
  v5 = (v2 << 7) + serverStartIdx;
  v6 = &s_scriptableAnalyticsData.collisionInstanceCount[0][v5];
  if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (char *)s_scriptableAnalyticsData.collisionInstanceCount + 4 * v5) )
    __debugbreak();
  _InterlockedExchangeAdd(v6, activationCount);
}

/*
==============
Scriptable_Analytics_AddPartCount
==============
*/
void Scriptable_Analytics_AddPartCount(Scriptable_Analytics_Zone zone, int partCount)
{
  __int64 v2; 
  __int64 serverStartIdx; 

  v2 = zone;
  if ( (unsigned int)zone >= Scriptable_Analytics_Zone_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_analytics.cpp", 120, ASSERT_TYPE_ASSERT, "(unsigned)( zone ) < (unsigned)( Scriptable_Analytics_Zone_Count )", "zone doesn't index Scriptable_Analytics_Zone_Count\n\t%i not in [0, %i)", zone, 5) )
    __debugbreak();
  serverStartIdx = s_scriptableAnalyticsData.serverStartIdx;
  if ( (_DWORD)v2 == 4 )
    serverStartIdx = s_scriptableAnalyticsData.clientStartIdx;
  s_scriptableAnalyticsData.partCount[v2][serverStartIdx] += partCount;
}

/*
==============
Scriptable_Analytics_AddRuntimeMemoryCount
==============
*/
void Scriptable_Analytics_AddRuntimeMemoryCount(Scriptable_Analytics_Zone zone, int bytes)
{
  __int64 v2; 
  __int64 serverStartIdx; 

  v2 = zone;
  if ( (unsigned int)zone >= Scriptable_Analytics_Zone_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_analytics.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( zone ) < (unsigned)( Scriptable_Analytics_Zone_Count )", "zone doesn't index Scriptable_Analytics_Zone_Count\n\t%i not in [0, %i)", zone, 5) )
    __debugbreak();
  serverStartIdx = s_scriptableAnalyticsData.serverStartIdx;
  if ( (_DWORD)v2 == 4 )
    serverStartIdx = s_scriptableAnalyticsData.clientStartIdx;
  s_scriptableAnalyticsData.runtimeMemoryCount[v2][serverStartIdx] += bytes;
}

/*
==============
Scriptable_Analytics_AddScriptableCount
==============
*/
void Scriptable_Analytics_AddScriptableCount(Scriptable_Analytics_Zone zone, int scriptableCount)
{
  __int64 v2; 
  __int64 serverStartIdx; 

  v2 = zone;
  if ( (unsigned int)zone >= Scriptable_Analytics_Zone_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_analytics.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( zone ) < (unsigned)( Scriptable_Analytics_Zone_Count )", "zone doesn't index Scriptable_Analytics_Zone_Count\n\t%i not in [0, %i)", zone, 5) )
    __debugbreak();
  serverStartIdx = s_scriptableAnalyticsData.serverStartIdx;
  if ( (_DWORD)v2 == 4 )
    serverStartIdx = s_scriptableAnalyticsData.clientStartIdx;
  s_scriptableAnalyticsData.scriptableCount[v2][serverStartIdx] += scriptableCount;
}

/*
==============
Scriptable_Analytics_AddStateChangeCount
==============
*/
void Scriptable_Analytics_AddStateChangeCount(Scriptable_Analytics_Zone zone, int changeCount)
{
  __int64 v2; 
  __int64 serverStartIdx; 
  __int64 v5; 
  volatile signed __int32 *v6; 

  v2 = zone;
  if ( (unsigned int)zone >= Scriptable_Analytics_Zone_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_analytics.cpp", 172, ASSERT_TYPE_ASSERT, "(unsigned)( zone ) < (unsigned)( Scriptable_Analytics_Zone_Count )", "zone doesn't index Scriptable_Analytics_Zone_Count\n\t%i not in [0, %i)", zone, 5) )
    __debugbreak();
  serverStartIdx = s_scriptableAnalyticsData.serverStartIdx;
  if ( (_DWORD)v2 == 4 )
    serverStartIdx = s_scriptableAnalyticsData.clientStartIdx;
  v5 = (v2 << 7) + serverStartIdx;
  v6 = &s_scriptableAnalyticsData.stateChangeCount[0][v5];
  if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (char *)s_scriptableAnalyticsData.stateChangeCount + 4 * v5) )
    __debugbreak();
  _InterlockedExchangeAdd(v6, changeCount);
}

/*
==============
Scriptable_Analytics_DebugDraw
==============
*/

void __fastcall Scriptable_Analytics_DebugDraw(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  __int64 dataStartIdx; 
  __int64 v10; 
  __int128 v11; 
  float v13; 
  __int64 v15; 
  float v16; 
  float v17; 
  __int128 v19; 
  const char *v20; 
  float v21; 
  float v22; 
  const char *v23; 
  float v24; 
  float v25; 
  const char *v26; 
  float v28; 
  float v29; 
  __int64 v30; 
  int *v33; 
  __int128 v40; 
  Scriptable_Analytics_Data *v44; 
  __int64 v45; 
  __int128 v52; 
  float v54; 
  __int64 v55; 
  int *v56; 
  __int128 v64; 
  float v66; 
  float v67; 
  __int128 v69; 
  const char *v70; 
  float v71; 
  float v72; 
  const char *v73; 
  float v74; 
  float v75; 
  const char *v76; 
  float v78; 
  float v79; 
  __int64 v80; 
  int *v83; 
  __int128 v90; 
  float v92; 
  __int64 v93; 
  int (*partCount)[128]; 
  __int128 v103; 
  float v105; 
  __int64 v106; 
  int *v107; 
  __int128 v115; 
  int *v117; 
  float v118; 
  float v119; 
  __int128 v121; 
  const char *v122; 
  float v123; 
  float v124; 
  const char *v125; 
  float v126; 
  float v127; 
  const char *v128; 
  float v130; 
  float v131; 
  int *v135; 
  __int64 v136; 
  __int128 v143; 
  int (*runtimeMemoryCount)[128]; 
  __int64 v148; 
  __int128 v155; 
  float v157; 
  __int64 v159; 
  int *v161; 
  __int128 v168; 
  int *v172; 
  __int64 v173; 
  __int128 v180; 
  float v181; 
  __int64 v182; 
  int *v183; 
  __int128 v191; 
  float v193; 
  float v194; 
  __int128 v196; 
  const char *v197; 
  float v198; 
  float v199; 
  const char *v200; 
  float v201; 
  float v202; 
  const char *v203; 
  float v205; 
  float v206; 
  __int64 v210; 
  __int128 v217; 
  float v219; 
  __int64 v220; 
  int (*stateChangeCount)[128]; 
  __int128 v230; 
  float v232; 
  __int64 v233; 
  int *v234; 
  __int128 v242; 
  float v244; 
  float v245; 
  __int128 v247; 
  const char *v248; 
  float v249; 
  float v250; 
  const char *v251; 
  float v252; 
  float v253; 
  const char *v254; 
  float v255; 
  float v256; 
  const char *v257; 
  float v258; 
  float v259; 
  const char *v260; 
  float v262; 
  float v263; 
  __int64 v264; 
  int *v268; 
  __int128 v275; 
  float v277; 
  __int64 v278; 
  int *v281; 
  __int128 v288; 
  float v290; 
  int *v292; 
  __int128 v299; 

  dataStartIdx = (LOBYTE(s_scriptableAnalyticsData.serverStartIdx) - 1) & 0x7F;
  v10 = (LOBYTE(s_scriptableAnalyticsData.clientStartIdx) - 1) & 0x7F;
  v11 = *(_OWORD *)&tabWidth;
  _XMM7 = LODWORD(charHeight);
  v13 = FLOAT_10_0;
  _XMM10 = LODWORD(FLOAT_1024_0);
  v15 = 16i64;
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_scriptable_debugAnalytics_Count, "scriptable_debugAnalytics_Count") )
  {
    v16 = *y;
    v17 = *y;
    if ( *y > 0.0 && v16 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v16, "Scriptable Analytics: Count", &colorWhite, 0, 1, charHeight, 0);
      v17 = *y;
    }
    *y = v17 + charHeight;
    v19 = *(_OWORD *)&tabWidth;
    *(float *)&v19 = *(float *)&tabWidth + *x;
    _XMM1 = v19;
    *x = *(float *)&v19;
    v20 = j_va("Server/Client Clipmap:  %i", (unsigned int)s_scriptableAnalyticsData.scriptableCount[2][dataStartIdx]);
    v21 = *y;
    v22 = *y;
    if ( *y > 0.0 && v21 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v21, v20, &colorBlue, 0, 1, charHeight, 0);
      v22 = *y;
    }
    *y = v22 + charHeight;
    v23 = j_va("Server/Client Reserved: %i", (unsigned int)s_scriptableAnalyticsData.scriptableCount[0][dataStartIdx]);
    v24 = *y;
    v25 = *y;
    if ( *y > 0.0 && v24 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v24, v23, &colorRed, 0, 1, charHeight, 0);
      v25 = *y;
    }
    *y = v25 + charHeight;
    v26 = j_va("Client Only Clipmap:    %i", (unsigned int)s_scriptableAnalyticsData.scriptableCount[4][v10]);
    _XMM2 = *(unsigned int *)y;
    v28 = *y;
    if ( *(float *)&_XMM2 > 0.0 && *(float *)&_XMM2 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v26, &colorGreen, 0, 1, charHeight, 0);
      v28 = *y;
    }
    v29 = (float)(v28 + charHeight) + 10.0;
    v30 = 16i64;
    *y = v29;
    __asm
    {
      vpxor   xmm6, xmm6, xmm6
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v33 = s_scriptableAnalyticsData.scriptableCount[2];
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v33 += 8;
      --v30;
    }
    while ( v30 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v40 = 0i64;
    *(float *)&v40 = (float)(int)_XMM0;
    _XMM1 = v40;
    __asm { vmaxss  xmm3, xmm1, xmm10 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v29, 512.0, 100.0, 0.0, *(float *)&_XMM3, s_scriptableAnalyticsData.scriptableCount[2], 0x80u, dataStartIdx, &colorBlue);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    *y = *y + 110.0;
    _XMM2 = _XMM6;
    _XMM3 = _XMM6;
    v44 = &s_scriptableAnalyticsData;
    v45 = 16i64;
    do
    {
      __asm
      {
        vpmaxsd xmm2, xmm2, xmmword ptr [rax]
        vpmaxsd xmm3, xmm3, xmmword ptr [rax+10h]
      }
      v44 = (Scriptable_Analytics_Data *)((char *)v44 + 32);
      --v45;
    }
    while ( v45 );
    __asm
    {
      vpmaxsd xmm1, xmm2, xmm3
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    ScriptableCommon_AssertCountsInitialized();
    v52 = 0i64;
    *(float *)&v52 = (float)g_scriptableWorldCounts.runtimeInstanceCount;
    _XMM1 = v52;
    __asm { vmaxss  xmm2, xmm1, xmm0 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 512.0, 100.0, 0.0, *(float *)&_XMM2, (int *)&s_scriptableAnalyticsData, 0x80u, dataStartIdx, &colorRed);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    v54 = *y + 110.0;
    v55 = 16i64;
    *y = v54;
    v56 = s_scriptableAnalyticsData.scriptableCount[4];
    _XMM1 = _XMM6;
    do
    {
      __asm
      {
        vpmaxsd xmm6, xmm6, xmmword ptr [rax]
        vpmaxsd xmm1, xmm1, xmmword ptr [rax+10h]
      }
      v56 += 8;
      --v55;
    }
    while ( v55 );
    __asm
    {
      vpmaxsd xmm1, xmm6, xmm1
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v64 = 0i64;
    *(float *)&v64 = (float)(int)_XMM0;
    _XMM1 = v64;
    __asm { vmaxss  xmm3, xmm1, xmm10 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v54, 512.0, 100.0, 0.0, *(float *)&_XMM3, s_scriptableAnalyticsData.scriptableCount[4], 0x80u, v10, &colorGreen);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    *y = *y + 110.0;
    *x = *x - *(float *)&v11;
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_scriptable_debugAnalytics_PartCount, "scriptable_debugAnalytics_PartCount") )
  {
    v66 = *y;
    v67 = *y;
    if ( *y > 0.0 && v66 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v66, "Scriptable Analytics: Part Count", &colorWhite, 0, 1, charHeight, 0);
      v67 = *y;
    }
    *y = v67 + charHeight;
    v69 = v11;
    *(float *)&v69 = *(float *)&v11 + *x;
    _XMM1 = v69;
    *x = *(float *)&v69;
    v70 = j_va("Server/Client Clipmap:  %i", (unsigned int)s_scriptableAnalyticsData.partCount[2][dataStartIdx]);
    v71 = *y;
    v72 = *y;
    if ( *y > 0.0 && v71 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v71, v70, &colorBlue, 0, 1, charHeight, 0);
      v72 = *y;
    }
    *y = v72 + charHeight;
    v73 = j_va("Server/Client Reserved: %i", (unsigned int)s_scriptableAnalyticsData.partCount[0][dataStartIdx]);
    v74 = *y;
    v75 = *y;
    if ( *y > 0.0 && v74 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v74, v73, &colorRed, 0, 1, charHeight, 0);
      v75 = *y;
    }
    *y = v75 + charHeight;
    v76 = j_va("Client Only Clipmap:    %i", (unsigned int)s_scriptableAnalyticsData.partCount[4][v10]);
    _XMM2 = *(unsigned int *)y;
    v78 = *y;
    if ( *(float *)&_XMM2 > 0.0 && *(float *)&_XMM2 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v76, &colorGreen, 0, 1, charHeight, 0);
      v78 = *y;
    }
    v79 = (float)(v78 + charHeight) + 10.0;
    v80 = 16i64;
    *y = v79;
    __asm
    {
      vpxor   xmm6, xmm6, xmm6
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v83 = s_scriptableAnalyticsData.partCount[2];
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v83 += 8;
      --v80;
    }
    while ( v80 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v90 = 0i64;
    *(float *)&v90 = (float)(int)_XMM0;
    _XMM1 = v90;
    __asm { vmaxss  xmm3, xmm1, cs:__real@461c4000 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v79, 512.0, 100.0, 0.0, *(float *)&_XMM3, s_scriptableAnalyticsData.partCount[2], 0x80u, dataStartIdx, &colorBlue);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    v92 = *y + 110.0;
    v93 = 16i64;
    *y = v92;
    partCount = s_scriptableAnalyticsData.partCount;
    _XMM1 = _XMM6;
    _XMM2 = _XMM6;
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      partCount = (int (*)[128])((char *)partCount + 32);
      --v93;
    }
    while ( v93 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v103 = 0i64;
    *(float *)&v103 = (float)(int)_XMM0;
    _XMM1 = v103;
    __asm { vmaxss  xmm3, xmm1, cs:__real@45200000 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v92, 512.0, 100.0, 0.0, *(float *)&_XMM3, s_scriptableAnalyticsData.partCount[0], 0x80u, dataStartIdx, &colorRed);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    v105 = *y + 110.0;
    v106 = 16i64;
    *y = v105;
    v107 = s_scriptableAnalyticsData.partCount[4];
    _XMM1 = _XMM6;
    do
    {
      __asm
      {
        vpmaxsd xmm6, xmm6, xmmword ptr [rax]
        vpmaxsd xmm1, xmm1, xmmword ptr [rax+10h]
      }
      v107 += 8;
      --v106;
    }
    while ( v106 );
    __asm
    {
      vpmaxsd xmm1, xmm6, xmm1
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v115 = 0i64;
    *(float *)&v115 = (float)(int)_XMM0;
    _XMM1 = v115;
    __asm { vmaxss  xmm3, xmm1, xmm10 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v105, 512.0, 100.0, 0.0, *(float *)&_XMM3, s_scriptableAnalyticsData.partCount[4], 0x80u, v10, &colorGreen);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    *y = *y + 110.0;
    *x = *x - *(float *)&v11;
  }
  v117 = s_scriptableAnalyticsData.runtimeMemoryCount[2];
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_scriptable_debugAnalytics_Memory, "scriptable_debugAnalytics_Memory") )
  {
    v118 = *y;
    v119 = *y;
    if ( *y > 0.0 && v118 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v118, "Scriptable Analytics: Event Buffer Memory", &colorWhite, 0, 1, charHeight, 0);
      v119 = *y;
    }
    *y = v119 + charHeight;
    v121 = v11;
    *(float *)&v121 = *(float *)&v11 + *x;
    _XMM1 = v121;
    *x = *(float *)&v121;
    v122 = j_va("Server/Client Clipmap:  %i bytes S %i bytes C", (unsigned int)s_scriptableAnalyticsData.runtimeMemoryCount[2][dataStartIdx], (unsigned int)s_scriptableAnalyticsData.runtimeMemoryCount[3][dataStartIdx]);
    v123 = *y;
    v124 = *y;
    if ( *y > 0.0 && v123 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v123, v122, &colorBlue, 0, 1, charHeight, 0);
      v124 = *y;
    }
    *y = v124 + charHeight;
    v125 = j_va("Server/Client Reserved: %i bytes %i bytes C", (unsigned int)s_scriptableAnalyticsData.runtimeMemoryCount[0][dataStartIdx], (unsigned int)s_scriptableAnalyticsData.runtimeMemoryCount[1][dataStartIdx]);
    v126 = *y;
    v127 = *y;
    if ( *y > 0.0 && v126 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v126, v125, &colorRed, 0, 1, charHeight, 0);
      v127 = *y;
    }
    *y = v127 + charHeight;
    v128 = j_va("Client Only Clipmap:    %i bytes", (unsigned int)s_scriptableAnalyticsData.runtimeMemoryCount[4][v10]);
    _XMM2 = *(unsigned int *)y;
    v130 = *y;
    if ( *(float *)&_XMM2 > 0.0 && *(float *)&_XMM2 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v128, &colorGreen, 0, 1, charHeight, 0);
      v130 = *y;
    }
    v131 = (float)(v130 + charHeight) + 10.0;
    *y = v131;
    __asm
    {
      vpxor   xmm10, xmm10, xmm10
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v135 = s_scriptableAnalyticsData.runtimeMemoryCount[2];
    v136 = 16i64;
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v135 += 8;
      --v136;
    }
    while ( v136 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v143 = 0i64;
    *(float *)&v143 = (float)(int)_XMM0;
    _XMM1 = v143;
    _XMM2 = _XMM10;
    __asm { vmaxss  xmm5, xmm1, xmm11 }
    _XMM3 = _XMM10;
    runtimeMemoryCount = s_scriptableAnalyticsData.runtimeMemoryCount;
    v148 = 16i64;
    do
    {
      __asm
      {
        vpmaxsd xmm2, xmm2, xmmword ptr [rax]
        vpmaxsd xmm3, xmm3, xmmword ptr [rax+10h]
      }
      runtimeMemoryCount = (int (*)[128])((char *)runtimeMemoryCount + 32);
      --v148;
    }
    while ( v148 );
    __asm
    {
      vpmaxsd xmm1, xmm2, xmm3
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v155 = 0i64;
    *(float *)&v155 = (float)(int)_XMM0;
    _XMM1 = v155;
    __asm { vmaxss  xmm6, xmm1, xmm5 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v131, 512.0, 100.0, 0.0, *(float *)&_XMM6, s_scriptableAnalyticsData.runtimeMemoryCount[2], 0x80u, dataStartIdx, &colorBlue);
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 512.0, 100.0, 0.0, *(float *)&_XMM6, s_scriptableAnalyticsData.runtimeMemoryCount[0], 0x80u, dataStartIdx, &colorRed);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    v157 = *y + 110.0;
    _XMM1 = _XMM10;
    v159 = 16i64;
    *y = v157;
    _XMM2 = _XMM10;
    v161 = s_scriptableAnalyticsData.runtimeMemoryCount[3];
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v161 += 8;
      --v159;
    }
    while ( v159 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v168 = 0i64;
    *(float *)&v168 = (float)(int)_XMM0;
    _XMM1 = v168;
    _XMM2 = _XMM10;
    __asm { vmaxss  xmm4, xmm1, xmm11 }
    _XMM3 = _XMM10;
    v172 = s_scriptableAnalyticsData.runtimeMemoryCount[1];
    v173 = 16i64;
    do
    {
      __asm
      {
        vpmaxsd xmm2, xmm2, xmmword ptr [rax]
        vpmaxsd xmm3, xmm3, xmmword ptr [rax+10h]
      }
      v172 += 8;
      --v173;
    }
    while ( v173 );
    __asm
    {
      vpmaxsd xmm1, xmm2, xmm3
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v180 = 0i64;
    *(float *)&v180 = (float)(int)_XMM0;
    _XMM1 = v180;
    __asm { vmaxss  xmm6, xmm1, xmm4 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v157, 512.0, 100.0, 0.0, *(float *)&_XMM6, s_scriptableAnalyticsData.runtimeMemoryCount[3], 0x80u, dataStartIdx, &colorBlue);
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 512.0, 100.0, 0.0, *(float *)&_XMM6, s_scriptableAnalyticsData.runtimeMemoryCount[1], 0x80u, dataStartIdx, &colorRed);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    v181 = *y + 110.0;
    v182 = 16i64;
    *y = v181;
    v183 = s_scriptableAnalyticsData.runtimeMemoryCount[4];
    _XMM1 = _XMM10;
    do
    {
      __asm
      {
        vpmaxsd xmm10, xmm10, xmmword ptr [rax]
        vpmaxsd xmm1, xmm1, xmmword ptr [rax+10h]
      }
      v183 += 8;
      --v182;
    }
    while ( v182 );
    __asm
    {
      vpmaxsd xmm1, xmm10, xmm1
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v191 = 0i64;
    *(float *)&v191 = (float)(int)_XMM0;
    _XMM1 = v191;
    __asm { vmaxss  xmm3, xmm1, xmm11 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v181, 512.0, 100.0, 0.0, *(float *)&_XMM3, s_scriptableAnalyticsData.runtimeMemoryCount[4], 0x80u, v10, &colorGreen);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    v13 = FLOAT_10_0;
    *y = *y + 110.0;
    *x = *x - *(float *)&v11;
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_scriptable_debugAnalytics_StateChange, "scriptable_debugAnalytics_StateChange") )
  {
    v193 = *y;
    v194 = *y;
    if ( *y > 0.0 && v193 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v193, "Scriptable Analytics: State Change Count", &colorWhite, 0, 1, charHeight, 0);
      v194 = *y;
    }
    *y = v194 + charHeight;
    v196 = v11;
    *(float *)&v196 = *(float *)&v11 + *x;
    _XMM1 = v196;
    *x = *(float *)&v196;
    v197 = j_va("Server/Client Clipmap:  %i", (unsigned int)s_scriptableAnalyticsData.stateChangeCount[2][dataStartIdx]);
    v198 = *y;
    v199 = *y;
    if ( *y > 0.0 && v198 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v198, v197, &colorBlue, 0, 1, charHeight, 0);
      v199 = *y;
    }
    *y = v199 + charHeight;
    v200 = j_va("Server/Client Reserved: %i", (unsigned int)s_scriptableAnalyticsData.stateChangeCount[0][dataStartIdx]);
    v201 = *y;
    v202 = *y;
    if ( *y > 0.0 && v201 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v201, v200, &colorRed, 0, 1, charHeight, 0);
      v202 = *y;
    }
    *y = v202 + charHeight;
    v203 = j_va("Client Only Clipmap:    %i", (unsigned int)s_scriptableAnalyticsData.stateChangeCount[4][v10]);
    _XMM2 = *(unsigned int *)y;
    v205 = *y;
    if ( *(float *)&_XMM2 > 0.0 && *(float *)&_XMM2 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v203, &colorGreen, 0, 1, charHeight, 0);
      v205 = *y;
    }
    v206 = (float)(v205 + charHeight) + v13;
    *y = v206;
    __asm
    {
      vpxor   xmm6, xmm6, xmm6
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v210 = 16i64;
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rbx]
        vpmaxsd xmm2, xmm2, xmmword ptr [rbx+10h]
      }
      v117 += 8;
      --v210;
    }
    while ( v210 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v217 = 0i64;
    *(float *)&v217 = (float)(int)_XMM0;
    _XMM1 = v217;
    __asm { vmaxss  xmm0, xmm1, xmm10 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v206, 512.0, 100.0, 0.0, *(float *)&_XMM0, s_scriptableAnalyticsData.stateChangeCount[2], 0x80u, dataStartIdx, &colorBlue);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    v219 = *y + 110.0;
    v220 = 16i64;
    *y = v219;
    stateChangeCount = s_scriptableAnalyticsData.stateChangeCount;
    _XMM1 = _XMM6;
    _XMM2 = _XMM6;
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      stateChangeCount = (int (*)[128])((char *)stateChangeCount + 32);
      --v220;
    }
    while ( v220 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v230 = 0i64;
    *(float *)&v230 = (float)(int)_XMM0;
    _XMM1 = v230;
    __asm { vmaxss  xmm3, xmm1, xmm10 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v219, 512.0, 100.0, 0.0, *(float *)&_XMM3, s_scriptableAnalyticsData.stateChangeCount[0], 0x80u, dataStartIdx, &colorRed);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    v232 = *y + 110.0;
    v233 = 16i64;
    *y = v232;
    v234 = s_scriptableAnalyticsData.stateChangeCount[4];
    _XMM1 = _XMM6;
    do
    {
      __asm
      {
        vpmaxsd xmm6, xmm6, xmmword ptr [rax]
        vpmaxsd xmm1, xmm1, xmmword ptr [rax+10h]
      }
      v234 += 8;
      --v233;
    }
    while ( v233 );
    __asm
    {
      vpmaxsd xmm1, xmm6, xmm1
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v242 = 0i64;
    *(float *)&v242 = (float)(int)_XMM0;
    _XMM1 = v242;
    __asm { vmaxss  xmm3, xmm1, xmm10 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v232, 512.0, 100.0, 0.0, *(float *)&_XMM3, s_scriptableAnalyticsData.stateChangeCount[4], 0x80u, v10, &colorGreen);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    *y = *y + 110.0;
    *x = *x - *(float *)&v11;
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_scriptable_debugAnalytics_CollisionActivation, "scriptable_debugAnalytics_CollisionActivation") )
  {
    v244 = *y;
    v245 = *y;
    if ( *y > 0.0 && v244 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v244, "Scriptable Analytics: Collision Active/Instance Count", &colorWhite, 0, 1, charHeight, 0);
      v245 = *y;
    }
    *y = v245 + charHeight;
    v247 = v11;
    *(float *)&v247 = *(float *)&v11 + *x;
    _XMM1 = v247;
    *x = *(float *)&v247;
    v248 = j_va("Server/Client Clipmap Server Instances: %i", (unsigned int)s_scriptableAnalyticsData.collisionInstanceCount[2][dataStartIdx]);
    v249 = *y;
    v250 = *y;
    if ( *y > 0.0 && v249 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v249, v248, &colorWhite, 0, 1, charHeight, 0);
      v250 = *y;
    }
    *y = v250 + charHeight;
    v251 = j_va("Server/Client Reserved Server Instances: %i", (unsigned int)s_scriptableAnalyticsData.collisionInstanceCount[0][dataStartIdx]);
    v252 = *y;
    v253 = *y;
    if ( *y > 0.0 && v252 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v252, v251, &colorWhite, 0, 1, charHeight, 0);
      v253 = *y;
    }
    *y = v253 + charHeight;
    v254 = j_va("Server/Client Clipmap Client Active/Instances: %i / %i", (unsigned int)s_scriptableAnalyticsData.collisionActivationCount[3][v10], (unsigned int)s_scriptableAnalyticsData.collisionInstanceCount[3][v10]);
    v255 = *y;
    v256 = *y;
    if ( *y > 0.0 && v255 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v255, v254, &colorBlue, 0, 1, charHeight, 0);
      v256 = *y;
    }
    *y = v256 + charHeight;
    v257 = j_va("Server/Client Reserved Client Active/Instances: %i / %i", (unsigned int)s_scriptableAnalyticsData.collisionActivationCount[1][v10], (unsigned int)s_scriptableAnalyticsData.collisionInstanceCount[1][v10]);
    v258 = *y;
    v259 = *y;
    if ( *y > 0.0 && v258 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, v258, v257, &colorRed, 0, 1, charHeight, 0);
      v259 = *y;
    }
    *y = v259 + charHeight;
    v260 = j_va("Client Only Clipmap Active/Instances:    %i / %i", (unsigned int)s_scriptableAnalyticsData.collisionActivationCount[4][v10], (unsigned int)s_scriptableAnalyticsData.collisionInstanceCount[4][v10]);
    _XMM2 = *(unsigned int *)y;
    v262 = *y;
    if ( *(float *)&_XMM2 > 0.0 && *(float *)&_XMM2 < 1080.0 )
    {
      _XMM1 = *(unsigned int *)x;
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v260, &colorGreen, 0, 1, charHeight, 0);
      v262 = *y;
    }
    v263 = (float)(v262 + charHeight) + v13;
    v264 = 16i64;
    *y = v263;
    __asm
    {
      vpxor   xmm7, xmm7, xmm7
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v268 = s_scriptableAnalyticsData.collisionInstanceCount[3];
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v268 += 8;
      --v264;
    }
    while ( v264 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v275 = 0i64;
    *(float *)&v275 = (float)(int)_XMM0;
    _XMM1 = v275;
    __asm { vmaxss  xmm6, xmm1, xmm9 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v263, 512.0, 100.0, 0.0, *(float *)&_XMM6, s_scriptableAnalyticsData.collisionActivationCount[3], 0x80u, dataStartIdx, &colorBlue);
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 512.0, 100.0, 0.0, *(float *)&_XMM6, s_scriptableAnalyticsData.collisionInstanceCount[3], 0x80u, dataStartIdx, &colorLtBlue);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    v277 = *y + 110.0;
    v278 = 16i64;
    *y = v277;
    _XMM1 = _XMM7;
    _XMM2 = _XMM7;
    v281 = s_scriptableAnalyticsData.collisionInstanceCount[1];
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v281 += 8;
      --v278;
    }
    while ( v278 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v288 = 0i64;
    *(float *)&v288 = (float)(int)_XMM0;
    _XMM1 = v288;
    __asm { vmaxss  xmm6, xmm1, xmm9 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v277, 512.0, 100.0, 0.0, *(float *)&_XMM6, s_scriptableAnalyticsData.collisionActivationCount[1], 0x80u, dataStartIdx, &colorRed);
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 512.0, 100.0, 0.0, *(float *)&_XMM6, s_scriptableAnalyticsData.collisionInstanceCount[1], 0x80u, dataStartIdx, &colorLtRed);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    v290 = *y + 110.0;
    *y = v290;
    _XMM1 = _XMM7;
    v292 = s_scriptableAnalyticsData.collisionInstanceCount[4];
    do
    {
      __asm
      {
        vpmaxsd xmm7, xmm7, xmmword ptr [rax]
        vpmaxsd xmm1, xmm1, xmmword ptr [rax+10h]
      }
      v292 += 8;
      --v15;
    }
    while ( v15 );
    __asm
    {
      vpmaxsd xmm1, xmm7, xmm1
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v299 = 0i64;
    *(float *)&v299 = (float)(int)_XMM0;
    _XMM1 = v299;
    __asm { vmaxss  xmm6, xmm1, xmm9 }
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, v290, 512.0, 100.0, 0.0, *(float *)&_XMM6, s_scriptableAnalyticsData.collisionActivationCount[4], 0x80u, v10, &colorGreen);
    CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 512.0, 100.0, 0.0, *(float *)&_XMM6, s_scriptableAnalyticsData.collisionInstanceCount[4], 0x80u, v10, &colorLtGreen);
    CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
    *y = *y + 110.0;
    *x = *x - *(float *)&v11;
  }
}

/*
==============
Scriptable_Analytics_FlipClientFrame
==============
*/
void Scriptable_Analytics_FlipClientFrame(LocalClientNum_t localClientNum)
{
  __int64 clientStartIdx; 
  __int64 v2; 
  __int64 v3; 
  int value; 
  const char *v5; 
  __int64 v6; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    clientStartIdx = s_scriptableAnalyticsData.clientStartIdx;
    v2 = (LOBYTE(s_scriptableAnalyticsData.clientStartIdx) + 1) & 0x7F;
    v3 = s_scriptableAnalyticsData.clientStartIdx;
    s_scriptableAnalyticsData.clientStartIdx = (LOBYTE(s_scriptableAnalyticsData.clientStartIdx) + 1) & 0x7F;
    value = s_scriptableAnalyticsData.stateChangeCount[4][clientStartIdx];
    if ( value > 128 )
    {
      v5 = j_va("Scriptables changed %i client states this frame - budget %i", (unsigned int)value, 128i64);
      StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_SCRIPTABLE_STATE_CHANGE_C, 3000, v5, value);
    }
    v6 = v2;
    s_scriptableAnalyticsData.scriptableCount[4][v6] = s_scriptableAnalyticsData.scriptableCount[4][v3];
    s_scriptableAnalyticsData.partCount[4][v6] = s_scriptableAnalyticsData.partCount[4][v3];
    s_scriptableAnalyticsData.runtimeMemoryCount[4][v6] = s_scriptableAnalyticsData.runtimeMemoryCount[4][v3];
    s_scriptableAnalyticsData.stateChangeCount[4][v6] = 0;
    s_scriptableAnalyticsData.collisionInstanceCount[4][v6] = s_scriptableAnalyticsData.collisionInstanceCount[4][v3];
    s_scriptableAnalyticsData.collisionActivationCount[4][v6] = s_scriptableAnalyticsData.collisionActivationCount[4][v3];
  }
}

/*
==============
Scriptable_Analytics_FlipServerFrame
==============
*/
void Scriptable_Analytics_FlipServerFrame(void)
{
  __int64 serverStartIdx; 
  __int64 v1; 
  __int64 v2; 
  int value; 
  const char *v4; 

  serverStartIdx = s_scriptableAnalyticsData.serverStartIdx;
  v1 = s_scriptableAnalyticsData.serverStartIdx;
  v2 = (LOBYTE(s_scriptableAnalyticsData.serverStartIdx) + 1) & 0x7F;
  s_scriptableAnalyticsData.serverStartIdx = (LOBYTE(s_scriptableAnalyticsData.serverStartIdx) + 1) & 0x7F;
  value = s_scriptableAnalyticsData.stateChangeCount[0][serverStartIdx] + s_scriptableAnalyticsData.stateChangeCount[2][serverStartIdx];
  if ( value > 128 )
  {
    v4 = j_va("Scriptables changed %i server/client states this frame - budget %i", (unsigned int)value, 128i64);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_SCRIPTABLE_STATE_CHANGE_SC, 3000, v4, value);
  }
  s_scriptableAnalyticsData.scriptableCount[0][v2] = s_scriptableAnalyticsData.scriptableCount[0][v1];
  s_scriptableAnalyticsData.partCount[0][v2] = s_scriptableAnalyticsData.partCount[0][v1];
  s_scriptableAnalyticsData.runtimeMemoryCount[0][v2] = s_scriptableAnalyticsData.runtimeMemoryCount[0][v1];
  s_scriptableAnalyticsData.stateChangeCount[0][v2] = 0;
  s_scriptableAnalyticsData.collisionInstanceCount[0][v2] = s_scriptableAnalyticsData.collisionInstanceCount[0][v1];
  s_scriptableAnalyticsData.collisionActivationCount[0][v2] = s_scriptableAnalyticsData.collisionActivationCount[0][v1];
  s_scriptableAnalyticsData.scriptableCount[1][v2] = s_scriptableAnalyticsData.scriptableCount[1][v1];
  s_scriptableAnalyticsData.partCount[1][v2] = s_scriptableAnalyticsData.partCount[1][v1];
  s_scriptableAnalyticsData.runtimeMemoryCount[1][v2] = s_scriptableAnalyticsData.runtimeMemoryCount[1][v1];
  s_scriptableAnalyticsData.stateChangeCount[1][v2] = 0;
  s_scriptableAnalyticsData.collisionInstanceCount[1][v2] = s_scriptableAnalyticsData.collisionInstanceCount[1][v1];
  s_scriptableAnalyticsData.collisionActivationCount[1][v2] = s_scriptableAnalyticsData.collisionActivationCount[1][v1];
  s_scriptableAnalyticsData.scriptableCount[2][v2] = s_scriptableAnalyticsData.scriptableCount[2][v1];
  s_scriptableAnalyticsData.partCount[2][v2] = s_scriptableAnalyticsData.partCount[2][v1];
  s_scriptableAnalyticsData.runtimeMemoryCount[2][v2] = s_scriptableAnalyticsData.runtimeMemoryCount[2][v1];
  s_scriptableAnalyticsData.stateChangeCount[2][v2] = 0;
  s_scriptableAnalyticsData.collisionInstanceCount[2][v2] = s_scriptableAnalyticsData.collisionInstanceCount[2][v1];
  s_scriptableAnalyticsData.collisionActivationCount[2][v2] = s_scriptableAnalyticsData.collisionActivationCount[2][v1];
  s_scriptableAnalyticsData.scriptableCount[3][v2] = s_scriptableAnalyticsData.scriptableCount[3][v1];
  s_scriptableAnalyticsData.partCount[3][v2] = s_scriptableAnalyticsData.partCount[3][v1];
  s_scriptableAnalyticsData.runtimeMemoryCount[3][v2] = s_scriptableAnalyticsData.runtimeMemoryCount[3][v1];
  s_scriptableAnalyticsData.stateChangeCount[3][v2] = 0;
  s_scriptableAnalyticsData.collisionInstanceCount[3][v2] = s_scriptableAnalyticsData.collisionInstanceCount[3][v1];
  s_scriptableAnalyticsData.collisionActivationCount[3][v2] = s_scriptableAnalyticsData.collisionActivationCount[3][v1];
}

/*
==============
Scriptable_Analytics_InitClient
==============
*/
void Scriptable_Analytics_InitClient(LocalClientNum_t localClientNum)
{
  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    memset_0(s_scriptableAnalyticsData.scriptableCount[4], 0, sizeof(s_scriptableAnalyticsData.scriptableCount[4]));
    memset_0(s_scriptableAnalyticsData.partCount[4], 0, sizeof(s_scriptableAnalyticsData.partCount[4]));
    memset_0(s_scriptableAnalyticsData.runtimeMemoryCount[4], 0, sizeof(s_scriptableAnalyticsData.runtimeMemoryCount[4]));
    memset_0(s_scriptableAnalyticsData.stateChangeCount[4], 0, sizeof(s_scriptableAnalyticsData.stateChangeCount[4]));
    memset_0(s_scriptableAnalyticsData.collisionInstanceCount[4], 0, sizeof(s_scriptableAnalyticsData.collisionInstanceCount[4]));
    memset_0(s_scriptableAnalyticsData.collisionActivationCount[4], 0, sizeof(s_scriptableAnalyticsData.collisionActivationCount[4]));
    s_scriptableAnalyticsData.clientStartIdx = 0;
  }
}

/*
==============
Scriptable_Analytics_InitServer
==============
*/
void Scriptable_Analytics_InitServer(void)
{
  int (*partCount)[128]; 
  __int64 v1; 

  partCount = s_scriptableAnalyticsData.partCount;
  v1 = 4i64;
  do
  {
    memset_0(&(*partCount)[-640], 0, sizeof(int[128]));
    memset_0(partCount, 0, sizeof(int[128]));
    memset_0(&(*partCount)[640], 0, sizeof(int[128]));
    memset_0(&(*partCount)[1280], 0, sizeof(int[128]));
    memset_0(&(*partCount)[1920], 0, sizeof(int[128]));
    memset_0(&(*partCount++)[2560], 0, sizeof(int[128]));
    --v1;
  }
  while ( v1 );
  s_scriptableAnalyticsData.serverStartIdx = 0;
}

