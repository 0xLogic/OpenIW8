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
  char serverStartIdx; 
  char clientStartIdx; 
  const dvar_t *v20; 
  __int64 dataStartIdx; 
  int v23; 
  __int64 v33; 
  char v38; 
  const char *v39; 
  char v42; 
  char v44; 
  const char *v45; 
  char v49; 
  const char *v50; 
  __int64 v55; 
  int *v58; 
  Scriptable_Analytics_Data *v77; 
  __int64 v78; 
  __int64 v97; 
  int *v98; 
  char v122; 
  const char *v123; 
  char v127; 
  const char *v128; 
  char v132; 
  const char *v133; 
  __int64 v138; 
  int *v141; 
  __int64 v158; 
  int (*partCount)[128]; 
  __int64 v178; 
  int *v179; 
  int *v199; 
  char v204; 
  const char *v205; 
  char v209; 
  const char *v210; 
  char v214; 
  const char *v215; 
  int *v223; 
  __int64 v224; 
  int (*runtimeMemoryCount)[128]; 
  __int64 v238; 
  __int64 v259; 
  int *v261; 
  int *v273; 
  __int64 v274; 
  __int64 v293; 
  int *v294; 
  char v319; 
  const char *v320; 
  char v327; 
  const char *v328; 
  __int64 v336; 
  __int64 v354; 
  int (*stateChangeCount)[128]; 
  __int64 v374; 
  int *v375; 
  char v400; 
  const char *v401; 
  char v405; 
  const char *v406; 
  char v410; 
  const char *v411; 
  char v415; 
  const char *v416; 
  char v420; 
  const char *v421; 
  __int64 v426; 
  int *v430; 
  __int64 v451; 
  int *v454; 
  int *v475; 
  float setColor; 
  float setColora; 
  float setColorb; 
  float setColorc; 
  float setColord; 
  float setColore; 
  float setColorf; 
  float setColorg; 
  float setColorh; 
  float setColori; 
  float setColorj; 
  float setColork; 
  float setColorl; 
  float setColorm; 
  float setColorn; 
  float setColoro; 
  float setColorp; 
  float setColorq; 
  float setColorr; 
  float setColors; 
  float setColort; 
  float setColoru; 
  float setColorv; 
  float setColorw; 
  float setColorx; 
  float setColory; 
  float setColorz; 
  float setColorba; 
  float setColorbb; 
  float setColorbc; 
  float setColorbd; 
  float setColorbe; 
  float setColorbf; 
  float setColorbg; 
  float setColorbh; 
  int forceColor; 
  int forceColora; 
  int forceColorb; 
  int forceColorc; 
  int forceColord; 
  int forceColore; 
  int forceColorf; 
  int forceColorg; 
  int forceColorh; 
  int forceColori; 
  int forceColorj; 
  int forceColork; 
  int forceColorl; 
  int forceColorm; 
  int forceColorn; 
  int forceColoro; 
  int forceColorp; 
  int forceColorq; 
  int forceColorr; 
  int forceColors; 
  int shadow; 
  int shadowa; 
  int shadowb; 
  int shadowc; 
  int shadowd; 
  int shadowe; 
  int shadowf; 
  int shadowg; 
  int shadowh; 
  int shadowi; 
  int shadowj; 
  int shadowk; 
  int shadowl; 
  int shadowm; 
  int shadown; 
  int shadowo; 
  int shadowp; 
  int shadowq; 
  int shadowr; 
  int shadows; 
  float data; 
  float dataa; 
  float datab; 
  float datac; 
  float datad; 
  float datae; 
  float dataf; 
  float datag; 
  float datah; 
  float datai; 
  float dataj; 
  float datak; 
  float datal; 
  float datam; 
  float datan; 
  float datao; 
  char v601; 
  void *retaddr; 

  _RAX = &retaddr;
  serverStartIdx = s_scriptableAnalyticsData.serverStartIdx;
  _RSI = x;
  clientStartIdx = s_scriptableAnalyticsData.clientStartIdx;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v20 = DVARBOOL_scriptable_debugAnalytics_Count;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RDI = y;
  __asm { vmovaps xmmword ptr [rax-68h], xmm9 }
  dataStartIdx = (serverStartIdx - 1) & 0x7F;
  __asm { vmovaps xmmword ptr [rax-88h], xmm11 }
  v23 = (clientStartIdx - 1) & 0x7F;
  __asm
  {
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps [rsp+128h+var_B8], xmm14
    vmovaps [rsp+128h+var_C8], xmm15
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmm15, xmm3
    vmovss  xmm7, [rsp+128h+charHeight]
    vmovss  xmm9, cs:__real@44870000
    vmovss  xmm11, cs:__real@41200000
    vmovss  xmm10, cs:__real@44800000
    vmovss  xmm12, cs:__real@42c80000
    vmovss  xmm13, cs:__real@44000000
    vmovss  xmm14, cs:__real@42dc0000
    vxorps  xmm8, xmm8, xmm8
  }
  v33 = 16i64;
  if ( Dvar_GetBool_Internal_DebugName(v20, "scriptable_debugAnalytics_Count") )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
      vcomiss xmm2, xmm9
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm15, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
    }
    v39 = j_va("Server/Client Clipmap:  %i", (unsigned int)s_scriptableAnalyticsData.scriptableCount[2][dataStartIdx]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v38 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v38 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v39, &colorBlue, 0, 1, data, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    v45 = j_va("Server/Client Reserved: %i", (unsigned int)s_scriptableAnalyticsData.scriptableCount[0][dataStartIdx]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v44 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v44 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v45, &colorRed, 0, 1, dataa, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    v50 = j_va("Client Only Clipmap:    %i", (unsigned int)s_scriptableAnalyticsData.scriptableCount[4][v23]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v49 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v49 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v50, &colorGreen, 0, 1, datab, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vaddss  xmm4, xmm0, xmm11
    }
    v55 = 16i64;
    __asm
    {
      vmovss  dword ptr [rdi], xmm4
      vpxor   xmm6, xmm6, xmm6
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v58 = s_scriptableAnalyticsData.scriptableCount[2];
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v58 += 8;
      --v55;
    }
    while ( v55 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm3, xmm1, xmm10
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm3
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColor, *(float *)&forceColor, *(float *)&shadow, s_scriptableAnalyticsData.scriptableCount[2], 0x80u, dataStartIdx, &colorBlue);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColora, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm14, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
      vmovdqu xmm2, xmm6
      vmovdqu xmm3, xmm6
    }
    v77 = &s_scriptableAnalyticsData;
    v78 = 16i64;
    do
    {
      __asm
      {
        vpmaxsd xmm2, xmm2, xmmword ptr [rax]
        vpmaxsd xmm3, xmm3, xmmword ptr [rax+10h]
      }
      v77 = (Scriptable_Analytics_Data *)((char *)v77 + 32);
      --v78;
    }
    while ( v78 );
    __asm
    {
      vpmaxsd xmm1, xmm2, xmm3
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   ebx, xmm0
    }
    ScriptableCommon_AssertCountsInitialized();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmaxss  xmm2, xmm1, xmm0
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm2
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorb, *(float *)&forceColora, *(float *)&shadowa, (int *)&s_scriptableAnalyticsData, 0x80u, dataStartIdx, &colorRed);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorc, &colorWhite);
    __asm { vaddss  xmm4, xmm14, dword ptr [rdi] }
    v97 = 16i64;
    __asm { vmovss  dword ptr [rdi], xmm4 }
    v98 = s_scriptableAnalyticsData.scriptableCount[4];
    __asm { vmovdqu xmm1, xmm6 }
    do
    {
      __asm
      {
        vpmaxsd xmm6, xmm6, xmmword ptr [rax]
        vpmaxsd xmm1, xmm1, xmmword ptr [rax+10h]
      }
      v98 += 8;
      --v97;
    }
    while ( v97 );
    __asm
    {
      vpmaxsd xmm1, xmm6, xmm1
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm3, xmm1, xmm10
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm3
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColord, *(float *)&forceColorb, *(float *)&shadowb, s_scriptableAnalyticsData.scriptableCount[4], 0x80u, v23, &colorGreen);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColore, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm14, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rsi]
      vsubss  xmm0, xmm2, xmm15
      vmovss  dword ptr [rsi], xmm0
    }
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_scriptable_debugAnalytics_PartCount, "scriptable_debugAnalytics_PartCount") )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
      vcomiss xmm2, xmm9
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm15, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
    }
    v123 = j_va("Server/Client Clipmap:  %i", (unsigned int)s_scriptableAnalyticsData.partCount[2][dataStartIdx]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v122 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v122 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v123, &colorBlue, 0, 1, datac, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    v128 = j_va("Server/Client Reserved: %i", (unsigned int)s_scriptableAnalyticsData.partCount[0][dataStartIdx]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v127 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v127 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v128, &colorRed, 0, 1, datad, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    v133 = j_va("Client Only Clipmap:    %i", (unsigned int)s_scriptableAnalyticsData.partCount[4][v23]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v132 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v132 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v133, &colorGreen, 0, 1, datae, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vaddss  xmm4, xmm0, xmm11
    }
    v138 = 16i64;
    __asm
    {
      vmovss  dword ptr [rdi], xmm4
      vpxor   xmm6, xmm6, xmm6
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v141 = s_scriptableAnalyticsData.partCount[2];
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v141 += 8;
      --v138;
    }
    while ( v138 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm3, xmm1, cs:__real@461c4000
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm3
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorf, *(float *)&forceColorc, *(float *)&shadowc, s_scriptableAnalyticsData.partCount[2], 0x80u, dataStartIdx, &colorBlue);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorg, &colorWhite);
    __asm { vaddss  xmm4, xmm14, dword ptr [rdi] }
    v158 = 16i64;
    __asm { vmovss  dword ptr [rdi], xmm4 }
    partCount = s_scriptableAnalyticsData.partCount;
    __asm
    {
      vmovdqu xmm1, xmm6
      vmovdqu xmm2, xmm6
    }
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      partCount = (int (*)[128])((char *)partCount + 32);
      --v158;
    }
    while ( v158 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm3, xmm1, cs:__real@45200000
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm3
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorh, *(float *)&forceColord, *(float *)&shadowd, s_scriptableAnalyticsData.partCount[0], 0x80u, dataStartIdx, &colorRed);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColori, &colorWhite);
    __asm { vaddss  xmm4, xmm14, dword ptr [rdi] }
    v178 = 16i64;
    __asm { vmovss  dword ptr [rdi], xmm4 }
    v179 = s_scriptableAnalyticsData.partCount[4];
    __asm { vmovdqu xmm1, xmm6 }
    do
    {
      __asm
      {
        vpmaxsd xmm6, xmm6, xmmword ptr [rax]
        vpmaxsd xmm1, xmm1, xmmword ptr [rax+10h]
      }
      v179 += 8;
      --v178;
    }
    while ( v178 );
    __asm
    {
      vpmaxsd xmm1, xmm6, xmm1
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm3, xmm1, xmm10
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm3
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorj, *(float *)&forceColore, *(float *)&shadowe, s_scriptableAnalyticsData.partCount[4], 0x80u, v23, &colorGreen);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColork, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm14, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rsi]
      vsubss  xmm0, xmm2, xmm15
      vmovss  dword ptr [rsi], xmm0
    }
  }
  v199 = s_scriptableAnalyticsData.runtimeMemoryCount[2];
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_scriptable_debugAnalytics_Memory, "scriptable_debugAnalytics_Memory") )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
      vcomiss xmm2, xmm9
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm15, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
    }
    v205 = j_va("Server/Client Clipmap:  %i bytes S %i bytes C", (unsigned int)s_scriptableAnalyticsData.runtimeMemoryCount[2][dataStartIdx], (unsigned int)s_scriptableAnalyticsData.runtimeMemoryCount[3][dataStartIdx]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v204 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v204 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v205, &colorBlue, 0, 1, dataf, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    v210 = j_va("Server/Client Reserved: %i bytes %i bytes C", (unsigned int)s_scriptableAnalyticsData.runtimeMemoryCount[0][dataStartIdx], (unsigned int)s_scriptableAnalyticsData.runtimeMemoryCount[1][dataStartIdx]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v209 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v209 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v210, &colorRed, 0, 1, datag, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    v215 = j_va("Client Only Clipmap:    %i bytes", (unsigned int)s_scriptableAnalyticsData.runtimeMemoryCount[4][v23]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v214 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v214 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v215, &colorGreen, 0, 1, datah, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vaddss  xmm4, xmm0, xmm11
      vmovss  dword ptr [rdi], xmm4
      vpxor   xmm10, xmm10, xmm10
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v223 = s_scriptableAnalyticsData.runtimeMemoryCount[2];
    v224 = 16i64;
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v223 += 8;
      --v224;
    }
    while ( v224 );
    __asm
    {
      vmovss  xmm11, cs:__real@46800000
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmovdqu xmm2, xmm10
      vmaxss  xmm5, xmm1, xmm11
      vmovdqu xmm3, xmm2
    }
    runtimeMemoryCount = s_scriptableAnalyticsData.runtimeMemoryCount;
    v238 = 16i64;
    do
    {
      __asm
      {
        vpmaxsd xmm2, xmm2, xmmword ptr [rax]
        vpmaxsd xmm3, xmm3, xmmword ptr [rax+10h]
      }
      runtimeMemoryCount = (int (*)[128])((char *)runtimeMemoryCount + 32);
      --v238;
    }
    while ( v238 );
    __asm
    {
      vpmaxsd xmm1, xmm2, xmm3
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm6, xmm1, xmm5
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorl, *(float *)&forceColorf, *(float *)&shadowf, s_scriptableAnalyticsData.runtimeMemoryCount[2], 0x80u, dataStartIdx, &colorBlue);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorm, *(float *)&forceColorg, *(float *)&shadowg, s_scriptableAnalyticsData.runtimeMemoryCount[0], 0x80u, dataStartIdx, &colorRed);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorn, &colorWhite);
    __asm
    {
      vaddss  xmm5, xmm14, dword ptr [rdi]
      vmovdqu xmm1, xmm10
    }
    v259 = 16i64;
    __asm
    {
      vmovss  dword ptr [rdi], xmm5
      vmovdqu xmm2, xmm1
    }
    v261 = s_scriptableAnalyticsData.runtimeMemoryCount[3];
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v261 += 8;
      --v259;
    }
    while ( v259 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmovdqu xmm2, xmm10
      vmaxss  xmm4, xmm1, xmm11
      vmovdqu xmm3, xmm2
    }
    v273 = s_scriptableAnalyticsData.runtimeMemoryCount[1];
    v274 = 16i64;
    do
    {
      __asm
      {
        vpmaxsd xmm2, xmm2, xmmword ptr [rax]
        vpmaxsd xmm3, xmm3, xmmword ptr [rax+10h]
      }
      v273 += 8;
      --v274;
    }
    while ( v274 );
    __asm
    {
      vpmaxsd xmm1, xmm2, xmm3
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm6, xmm1, xmm4
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm5; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColoro, *(float *)&forceColorh, *(float *)&shadowh, s_scriptableAnalyticsData.runtimeMemoryCount[3], 0x80u, dataStartIdx, &colorBlue);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorp, *(float *)&forceColori, *(float *)&shadowi, s_scriptableAnalyticsData.runtimeMemoryCount[1], 0x80u, dataStartIdx, &colorRed);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorq, &colorWhite);
    __asm { vaddss  xmm4, xmm14, dword ptr [rdi] }
    v293 = 16i64;
    __asm { vmovss  dword ptr [rdi], xmm4 }
    v294 = s_scriptableAnalyticsData.runtimeMemoryCount[4];
    __asm { vmovdqu xmm1, xmm10 }
    do
    {
      __asm
      {
        vpmaxsd xmm10, xmm10, xmmword ptr [rax]
        vpmaxsd xmm1, xmm1, xmmword ptr [rax+10h]
      }
      v294 += 8;
      --v293;
    }
    while ( v293 );
    __asm
    {
      vpmaxsd xmm1, xmm10, xmm1
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm3, xmm1, xmm11
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm3
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorr, *(float *)&forceColorj, *(float *)&shadowj, s_scriptableAnalyticsData.runtimeMemoryCount[4], 0x80u, v23, &colorGreen);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColors, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm14, dword ptr [rdi]
      vmovss  xmm11, cs:__real@41200000
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rsi]
      vsubss  xmm0, xmm2, xmm15
      vmovss  dword ptr [rsi], xmm0
    }
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_scriptable_debugAnalytics_StateChange, "scriptable_debugAnalytics_StateChange") )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
      vcomiss xmm2, xmm9
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm15, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
    }
    v320 = j_va("Server/Client Clipmap:  %i", (unsigned int)s_scriptableAnalyticsData.stateChangeCount[2][dataStartIdx]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v319 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v319 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v320, &colorBlue, 0, 1, datai, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    j_va("Server/Client Reserved: %i", (unsigned int)s_scriptableAnalyticsData.stateChangeCount[0][dataStartIdx]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    v328 = j_va("Client Only Clipmap:    %i", (unsigned int)s_scriptableAnalyticsData.stateChangeCount[4][v23]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v327 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v327 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v328, &colorGreen, 0, 1, dataj, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vaddss  xmm4, xmm0, xmm11
      vmovss  dword ptr [rdi], xmm4
      vpxor   xmm6, xmm6, xmm6
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v336 = 16i64;
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rbx]
        vpmaxsd xmm2, xmm2, xmmword ptr [rbx+10h]
      }
      v199 += 8;
      --v336;
    }
    while ( v336 );
    __asm
    {
      vmovss  xmm10, cs:__real@43000000
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm0, xmm1, xmm10
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm0
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColort, *(float *)&forceColork, *(float *)&shadowk, s_scriptableAnalyticsData.stateChangeCount[2], 0x80u, dataStartIdx, &colorBlue);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColoru, &colorWhite);
    __asm { vaddss  xmm4, xmm14, dword ptr [rdi] }
    v354 = 16i64;
    __asm { vmovss  dword ptr [rdi], xmm4 }
    stateChangeCount = s_scriptableAnalyticsData.stateChangeCount;
    __asm
    {
      vmovdqu xmm1, xmm6
      vmovdqu xmm2, xmm6
    }
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      stateChangeCount = (int (*)[128])((char *)stateChangeCount + 32);
      --v354;
    }
    while ( v354 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm3, xmm1, xmm10
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm3
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorv, *(float *)&forceColorl, *(float *)&shadowl, s_scriptableAnalyticsData.stateChangeCount[0], 0x80u, dataStartIdx, &colorRed);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorw, &colorWhite);
    __asm { vaddss  xmm4, xmm14, dword ptr [rdi] }
    v374 = 16i64;
    __asm { vmovss  dword ptr [rdi], xmm4 }
    v375 = s_scriptableAnalyticsData.stateChangeCount[4];
    __asm { vmovdqu xmm1, xmm6 }
    do
    {
      __asm
      {
        vpmaxsd xmm6, xmm6, xmmword ptr [rax]
        vpmaxsd xmm1, xmm1, xmmword ptr [rax+10h]
      }
      v375 += 8;
      --v374;
    }
    while ( v374 );
    __asm
    {
      vpmaxsd xmm1, xmm6, xmm1
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vxorps  xmm1, xmm1, xmm1
      vmovd   eax, xmm0
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm3, xmm1, xmm10
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm3
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorx, *(float *)&forceColorm, *(float *)&shadowm, s_scriptableAnalyticsData.stateChangeCount[4], 0x80u, v23, &colorGreen);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColory, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm14, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rsi]
      vsubss  xmm0, xmm2, xmm15
      vmovss  dword ptr [rsi], xmm0
    }
  }
  __asm { vmovaps xmm10, [rsp+128h+var_78] }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_scriptable_debugAnalytics_CollisionActivation, "scriptable_debugAnalytics_CollisionActivation") )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm15, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
    }
    v401 = j_va("Server/Client Clipmap Server Instances: %i", (unsigned int)s_scriptableAnalyticsData.collisionInstanceCount[2][dataStartIdx]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v400 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v400 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v401, &colorWhite, 0, 1, datak, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    v406 = j_va("Server/Client Reserved Server Instances: %i", (unsigned int)s_scriptableAnalyticsData.collisionInstanceCount[0][dataStartIdx]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v405 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v405 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v406, &colorWhite, 0, 1, datal, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    v411 = j_va("Server/Client Clipmap Client Active/Instances: %i / %i", (unsigned int)s_scriptableAnalyticsData.collisionActivationCount[3][v23], (unsigned int)s_scriptableAnalyticsData.collisionInstanceCount[3][v23]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v410 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v410 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v411, &colorBlue, 0, 1, datam, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    v416 = j_va("Server/Client Reserved Client Active/Instances: %i / %i", (unsigned int)s_scriptableAnalyticsData.collisionActivationCount[1][v23], (unsigned int)s_scriptableAnalyticsData.collisionInstanceCount[1][v23]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v415 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v415 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v416, &colorRed, 0, 1, datan, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm0
    }
    v421 = j_va("Client Only Clipmap Active/Instances:    %i / %i", (unsigned int)s_scriptableAnalyticsData.collisionActivationCount[4][v23], (unsigned int)s_scriptableAnalyticsData.collisionInstanceCount[4][v23]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v420 | v42) )
    {
      __asm { vcomiss xmm2, xmm9 }
      if ( v420 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  dword ptr [rsp+128h+data], xmm7
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v421, &colorGreen, 0, 1, datao, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm7
      vaddss  xmm4, xmm0, xmm11
    }
    v426 = 16i64;
    __asm
    {
      vmovss  dword ptr [rdi], xmm4
      vpxor   xmm7, xmm7, xmm7
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v430 = s_scriptableAnalyticsData.collisionInstanceCount[3];
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v430 += 8;
      --v426;
    }
    while ( v426 );
    __asm
    {
      vmovss  xmm9, cs:__real@43fa0000
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm6, xmm1, xmm9
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorz, *(float *)&forceColorn, *(float *)&shadown, s_scriptableAnalyticsData.collisionActivationCount[3], 0x80u, dataStartIdx, &colorBlue);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorba, *(float *)&forceColoro, *(float *)&shadowo, s_scriptableAnalyticsData.collisionInstanceCount[3], 0x80u, dataStartIdx, &colorLtBlue);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorbb, &colorWhite);
    __asm { vaddss  xmm4, xmm14, dword ptr [rdi] }
    v451 = 16i64;
    __asm
    {
      vmovss  dword ptr [rdi], xmm4
      vmovdqu xmm1, xmm7
      vmovdqu xmm2, xmm7
    }
    v454 = s_scriptableAnalyticsData.collisionInstanceCount[1];
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v454 += 8;
      --v451;
    }
    while ( v451 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm6, xmm1, xmm9
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorbc, *(float *)&forceColorp, *(float *)&shadowp, s_scriptableAnalyticsData.collisionActivationCount[1], 0x80u, dataStartIdx, &colorRed);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorbd, *(float *)&forceColorq, *(float *)&shadowq, s_scriptableAnalyticsData.collisionInstanceCount[1], 0x80u, dataStartIdx, &colorLtRed);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorbe, &colorWhite);
    __asm
    {
      vaddss  xmm4, xmm14, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm4
      vmovdqu xmm1, xmm7
    }
    v475 = s_scriptableAnalyticsData.collisionInstanceCount[4];
    do
    {
      __asm
      {
        vpmaxsd xmm7, xmm7, xmmword ptr [rax]
        vpmaxsd xmm1, xmm1, xmmword ptr [rax+10h]
      }
      v475 += 8;
      --v33;
    }
    while ( v33 );
    __asm
    {
      vpmaxsd xmm1, xmm7, xmm1
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm6, xmm1, xmm9
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm4; y
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorbf, *(float *)&forceColorr, *(float *)&shadowr, s_scriptableAnalyticsData.collisionActivationCount[4], 0x80u, v23, &colorGreen);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm8
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorbg, *(float *)&forceColors, *(float *)&shadows, s_scriptableAnalyticsData.collisionInstanceCount[4], 0x80u, v23, &colorLtGreen);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+128h+setColor], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorbh, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm14, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rsi]
      vsubss  xmm0, xmm2, xmm15
      vmovss  dword ptr [rsi], xmm0
    }
  }
  __asm { vmovaps xmm14, [rsp+128h+var_B8] }
  _R11 = &v601;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm15, [rsp+128h+var_C8]
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

