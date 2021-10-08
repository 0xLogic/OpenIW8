/*
==============
CG_LatencyTestMP_DeployServerCommandString
==============
*/

void __fastcall CG_LatencyTestMP_DeployServerCommandString(LocalClientNum_t localClientNum)
{
  ?CG_LatencyTestMP_DeployServerCommandString@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_LatencyTestMP_ProcessPlayerEntity
==============
*/

void __fastcall CG_LatencyTestMP_ProcessPlayerEntity(LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_LatencyTestMP_ProcessPlayerEntity@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_LatencyTestMP_InitConsoleCommands
==============
*/

void CG_LatencyTestMP_InitConsoleCommands(void)
{
  ?CG_LatencyTestMP_InitConsoleCommands@@YAXXZ();
}

/*
==============
CG_LatencyTestMP_DamageFeedback
==============
*/

void __fastcall CG_LatencyTestMP_DamageFeedback(LocalClientNum_t localClientNum, int yawByte, int pitchByte, int damage, DamageFeedbackType damageType)
{
  ?CG_LatencyTestMP_DamageFeedback@@YAXW4LocalClientNum_t@@HHHW4DamageFeedbackType@@@Z(localClientNum, yawByte, pitchByte, damage, damageType);
}

/*
==============
CG_LatencyTestMP_Init
==============
*/

void __fastcall CG_LatencyTestMP_Init(LocalClientNum_t localClientNum)
{
  ?CG_LatencyTestMP_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_LatencyTestMP_DrawResults
==============
*/

void __fastcall CG_LatencyTestMP_DrawResults(LocalClientNum_t localClientNum)
{
  ?CG_LatencyTestMP_DrawResults@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_LatencyTestMP_Update
==============
*/

void __fastcall CG_LatencyTestMP_Update(LocalClientNum_t localClientNum)
{
  ?CG_LatencyTestMP_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_LatencyTestMP_ShutdownConsoleCommands
==============
*/

void CG_LatencyTestMP_ShutdownConsoleCommands(void)
{
  ?CG_LatencyTestMP_ShutdownConsoleCommands@@YAXXZ();
}

/*
==============
CG_LatencyTestMP_FireWeapon
==============
*/

void __fastcall CG_LatencyTestMP_FireWeapon(LocalClientNum_t localClientNum, int firingClientNum)
{
  ?CG_LatencyTestMP_FireWeapon@@YAXW4LocalClientNum_t@@H@Z(localClientNum, firingClientNum);
}

/*
==============
CG_LatencyTestMP_Move
==============
*/

void __fastcall CG_LatencyTestMP_Move(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CG_LatencyTestMP_Move@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CG_LatencyTestMP_Obituary
==============
*/

void __fastcall CG_LatencyTestMP_Obituary(LocalClientNum_t localClientNum, int target)
{
  ?CG_LatencyTestMP_Obituary@@YAXW4LocalClientNum_t@@H@Z(localClientNum, target);
}

/*
==============
CG_LatencyTestMP_EntityEvent
==============
*/

void __fastcall CG_LatencyTestMP_EntityEvent(LocalClientNum_t localClientNum, const centity_t *cent, int event, int flags)
{
  ?CG_LatencyTestMP_EntityEvent@@YAXW4LocalClientNum_t@@PEBUcentity_t@@HH@Z(localClientNum, cent, event, flags);
}

/*
==============
CG_LatencyTestMP_BaseLag_CalcStats
==============
*/

void __fastcall CG_LatencyTestMP_BaseLag_CalcStats(LocalClientNum_t localClientNum, double _XMM1_8)
{
  const cg_t *LocalClientGlobals; 
  int v5; 
  CgLatencyTestBaseLagTestSample (*samples)[64]; 
  __int64 v8; 
  int sampleCount; 
  int v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  CgLatencyTestBaseLagTestSample (*v15)[64]; 
  int clientTime; 
  int v17; 
  int v18; 
  bool v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  CgLatencyTestBaseLagTestSample *v23; 
  int v24; 

  Com_Printf(31, "CalcStats\n");
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = 0;
  if ( cls.maxClients > 0 )
  {
    _RBX = &s_baseLagTest.results[0].maxTime;
    samples = s_baseLagTest.samples;
    v8 = 0i64;
    do
    {
      if ( v5 != s_baseLagTest.testingClientNum && CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v5) )
      {
        sampleCount = 64;
        if ( s_baseLagTest.sampleCount < 64 )
          sampleCount = s_baseLagTest.sampleCount;
        *(_QWORD *)(_RBX - 1) = 0x7FFFFFFFi64;
        v10 = 0;
        *(_RBX - 4) = 0;
        v11 = 0;
        v12 = sampleCount;
        v13 = 0;
        v14 = 0i64;
        if ( sampleCount > 0 )
        {
          v15 = samples;
          do
          {
            clientTime = s_baseLagTest.samples[(__int64)s_baseLagTest.testingClientNum][v14].clientTime;
            if ( clientTime > 0 && *(_DWORD *)v15 > 0 )
            {
              v13 += (*v15)[0].ping;
              v17 = *(_DWORD *)v15 - clientTime;
              v11 += v17;
              v18 = v17;
              if ( *_RBX > v17 )
                v18 = *_RBX;
              v19 = *(_RBX - 1) < v17;
              *_RBX = v18;
              if ( v19 )
                v17 = *(_RBX - 1);
              ++*(_RBX - 4);
              *(_RBX - 1) = v17;
            }
            ++v14;
            v15 = (CgLatencyTestBaseLagTestSample (*)[64])((char *)v15 + 8);
          }
          while ( v14 < v12 );
          v20 = *(_RBX - 4);
          if ( v20 )
          {
            *(_RBX - 2) = v11 / v20;
            v21 = v11 / v20;
            v22 = 0i64;
            *(_RBX - 3) = v13 / v20;
            v23 = s_baseLagTest.samples[(__int64)s_baseLagTest.testingClientNum];
            do
            {
              if ( v23->clientTime > 0 )
              {
                v24 = s_baseLagTest.samples[v8][v22].clientTime;
                if ( v24 > 0 )
                  v10 += (v24 - v23->clientTime - v21) * (v24 - v23->clientTime - v21);
              }
              ++v22;
              ++v23;
            }
            while ( v22 < v12 );
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, r11d
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, r14d
              vdivss  xmm1, xmm1, xmm0
              vsqrtss xmm2, xmm1, xmm1
              vmovss  dword ptr [rbx+4], xmm2
            }
          }
        }
      }
      ++v5;
      _RBX += 6;
      ++samples;
      ++v8;
    }
    while ( v5 < cls.maxClients );
  }
}

/*
==============
CG_LatencyTestMP_BaseLag_DrawResults
==============
*/
void CG_LatencyTestMP_BaseLag_DrawResults(LocalClientNum_t localClientNum)
{
  unsigned int testingClientNum; 
  unsigned int maxClients; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  int sampleCount; 
  GfxFont *FontHandle; 
  char v32; 
  unsigned int v33; 
  int *p_avgTime; 
  __int64 v35; 
  __int64 v36; 
  int clientNum; 
  __int64 v38; 
  int clientTime; 
  int v40; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  char *fmt; 
  float fmte; 
  float fmtf; 
  int horzAligna; 
  int horzAlignb; 
  int horzAlignc; 
  __int64 horzAlign; 
  int horzAlignd; 
  int vertAligna; 
  __int64 vertAlign; 
  float s1a; 
  float s1b; 
  __int64 s1; 
  float s1c; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  int style; 
  int stylea; 
  int styleb; 
  vec4_t color; 
  vec4_t v84; 
  char dest[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  testingClientNum = s_baseLagTest.testingClientNum;
  if ( s_baseLagTest.testingClientNum >= 0 )
  {
    maxClients = cls.maxClients;
    __asm { vmovaps xmmword ptr [r11-88h], xmm11 }
    if ( testingClientNum >= maxClients )
    {
      vertAligna = maxClients;
      horzAligna = testingClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 2941, ASSERT_TYPE_ASSERT, "(unsigned)( s_baseLagTest.testingClientNum ) < (unsigned)( cls.maxClients )", "s_baseLagTest.testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", horzAligna, vertAligna) )
        __debugbreak();
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    __asm { vmovss  xmm2, cs:__real@3f000000; scale }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    UI_GetFontHandle(ActivePlacement, 5, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm11, cs:__real@3e4ccccd
      vmovaps xmm2, xmm11; scale
    }
    sampleCount = 64;
    FontHandle = UI_GetFontHandle(ActivePlacement, 5, *(float *)&_XMM2);
    if ( s_baseLagTest.sampleCount < 64 )
      sampleCount = s_baseLagTest.sampleCount;
    if ( sampleCount > 0 )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@41f00000; y
        vmovaps [rsp+178h+var_38], xmm6
        vmovaps [rsp+178h+var_48], xmm7
        vmovss  xmm7, cs:__real@3f800000
        vmovss  [rsp+178h+style], xmm7
        vmovss  dword ptr [rsp+178h+var_130], xmm7
        vmovaps [rsp+178h+var_58], xmm8
        vmovaps [rsp+178h+var_68], xmm9
        vmovss  xmm9, cs:__real@41a00000
        vxorps  xmm8, xmm8, xmm8
        vmovss  [rsp+178h+var_138], xmm8
        vmovss  [rsp+178h+s1], xmm8
        vmovaps [rsp+178h+var_78], xmm10
        vmovss  xmm10, cs:__real@41200000
        vmovaps [rsp+178h+var_98], xmm12
        vmovss  xmm12, cs:__real@43520000
        vmovaps xmm3, xmm12; w
        vmovaps xmm1, xmm9; x
        vmovss  dword ptr [rsp+178h+fmt], xmm10
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 4, 4, s1a, v71, v77, *(float *)&style, &colorWhite, cgMedia.whiteMaterial);
      Com_sprintf(dest, 0x40ui64, " LATENCY TEST BASE LAG  Samples: %i", (unsigned int)sampleCount);
      __asm
      {
        vmovss  xmm6, cs:__real@42200000
        vmovss  [rsp+178h+var_138], xmm11
        vmovss  dword ptr [rsp+178h+horzAlign], xmm6
        vmovss  dword ptr [rsp+178h+fmt], xmm9
      }
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, fmtb, *(float *)&horzAlignb, 4, 4, v72, &colorBlack, 3);
      __asm
      {
        vmovss  [rsp+178h+style], xmm7
        vmovss  dword ptr [rsp+178h+var_130], xmm7
        vmovss  [rsp+178h+var_138], xmm8
        vmovss  [rsp+178h+s1], xmm8
        vmovaps xmm3, xmm12; w
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm9; x
        vmovss  dword ptr [rsp+178h+fmt], xmm10
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, 4, 4, s1b, v73, v78, *(float *)&stylea, &colorBlack, cgMedia.whiteMaterial);
      __asm { vmovss  xmm6, cs:__real@42480000 }
      Com_sprintf(dest, 0x40ui64, " CL | PING |  TIME | DELTA |  AVG");
      __asm
      {
        vmovss  [rsp+178h+var_138], xmm11
        vmovss  dword ptr [rsp+178h+horzAlign], xmm6
        vmovss  dword ptr [rsp+178h+fmt], xmm9
      }
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, fmtd, *(float *)&horzAlignc, 4, 4, v74, &colorWhite, 3);
      v32 = LOBYTE(s_baseLagTest.sampleCount) - 1;
      v33 = 0;
      if ( cls.maxClients > 0 )
      {
        p_avgTime = &s_baseLagTest.results[0].avgTime;
        v35 = 0i64;
        v36 = v32 & 0x3F;
        do
        {
          if ( CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v33) )
          {
            clientNum = LocalClientGlobals->clientNum;
            if ( clientNum == s_baseLagTest.testingClientNum || clientNum == v33 )
            {
              v38 = v36 + v35;
              if ( clientNum != s_baseLagTest.testingClientNum || v33 == s_baseLagTest.testingClientNum )
              {
                LODWORD(horzAlign) = s_baseLagTest.samples[0][v38].clientTime % 100000;
                LODWORD(fmt) = s_baseLagTest.samples[0][v38].ping;
                Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i |       |", v33, fmt, horzAlign);
              }
              else
              {
                clientTime = s_baseLagTest.samples[0][v38].clientTime;
                if ( clientTime > 0 )
                {
                  v40 = s_baseLagTest.samples[(__int64)s_baseLagTest.testingClientNum][v36].clientTime;
                  if ( v40 > 0 )
                  {
                    LODWORD(s1) = *p_avgTime;
                    LODWORD(vertAlign) = clientTime - v40;
                    LODWORD(horzAlign) = clientTime % 100000;
                    LODWORD(fmt) = s_baseLagTest.samples[0][v38].ping;
                    Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i | %5i | %4i", v33, fmt, horzAlign, vertAlign, s1);
                  }
                  else
                  {
                    LODWORD(vertAlign) = *p_avgTime;
                    LODWORD(horzAlign) = clientTime % 100000;
                    LODWORD(fmt) = s_baseLagTest.samples[0][v38].ping;
                    Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i |   ... | %4i", v33, fmt, horzAlign, vertAlign);
                  }
                }
                else
                {
                  LODWORD(fmt) = *p_avgTime;
                  Com_sprintf(dest, 0x40ui64, " %2i |  ... |   ... |   ... | %4i", v33, fmt);
                }
              }
              if ( (v32 & 1) != 0 )
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
                  vmovups xmm1, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
                }
              }
              else
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
                  vmovups xmm1, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
                }
              }
              __asm
              {
                vmovss  [rsp+178h+style], xmm7
                vmovss  dword ptr [rsp+178h+var_130], xmm7
                vmovss  [rsp+178h+var_138], xmm8
                vmovss  [rsp+178h+s1], xmm8
                vmovups xmmword ptr [rsp+178h+var_F8], xmm1
                vmovaps xmm3, xmm12; w
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm9; x
                vmovss  dword ptr [rsp+178h+fmt], xmm10
                vmovups xmmword ptr [rsp+178h+var_108], xmm0
              }
              CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, 4, 4, s1c, v75, v79, *(float *)&styleb, &color, cgMedia.whiteMaterial);
              __asm
              {
                vmovss  [rsp+178h+var_138], xmm11
                vaddss  xmm6, xmm6, xmm10
                vmovss  dword ptr [rsp+178h+horzAlign], xmm6
                vmovss  dword ptr [rsp+178h+fmt], xmm9
              }
              UI_DrawText(ActivePlacement, dest, 64, FontHandle, fmtf, *(float *)&horzAlignd, 4, 4, v76, &v84, 3);
            }
          }
          ++v33;
          v35 += 64i64;
          p_avgTime += 6;
        }
        while ( (int)v33 < cls.maxClients );
      }
      __asm
      {
        vmovaps xmm10, [rsp+178h+var_78]
        vmovaps xmm9, [rsp+178h+var_68]
        vmovaps xmm8, [rsp+178h+var_58]
        vmovaps xmm7, [rsp+178h+var_48]
        vmovaps xmm6, [rsp+178h+var_38]
        vmovaps xmm12, [rsp+178h+var_98]
      }
    }
    __asm { vmovaps xmm11, [rsp+178h+var_88] }
  }
}

/*
==============
CG_LatencyTestMP_BaseLag_PrintResult_f
==============
*/
void CG_LatencyTestMP_BaseLag_PrintResult_f()
{
  LocalClientNum_t v0; 
  const cg_t *LocalClientGlobals; 
  int v2; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  double v9; 
  __int64 v10; 

  v0 = Cmd_LocalClientNum();
  LocalClientGlobals = CG_GetLocalClientGlobals(v0);
  Com_Printf(31, "=========================\n");
  Com_Printf(31, "Latency Test BaseLag\n");
  Com_Printf(31, "desiredSampleCount,%i\n", (unsigned int)s_baseLagTest.desiredSampleCount);
  Com_Printf(31, "testingClientNum,%i\n", (unsigned int)s_baseLagTest.testingClientNum);
  Com_Printf(31, "Headers,ClientNum,Ping,Max,Avg,Min,StdDev,SampleCount\n");
  v2 = 0;
  if ( cls.maxClients > 0 )
  {
    _RDI = &s_baseLagTest.results[0].minTime;
    do
    {
      if ( v2 != s_baseLagTest.testingClientNum && CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v2) )
      {
        __asm { vmovss  xmm0, dword ptr [rdi+8] }
        LODWORD(v10) = s_baseLagTest.sampleCount;
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+58h+var_20], xmm0
        }
        LODWORD(v8) = *_RDI;
        LODWORD(v7) = *(_RDI - 1);
        LODWORD(v6) = _RDI[1];
        Com_Printf(31, "Data,%i,%i,%i,%i,%i,%f,%i\n", (unsigned int)v2, (unsigned int)*(_RDI - 2), v6, v7, v8, v9, v10);
      }
      ++v2;
      _RDI += 6;
    }
    while ( v2 < cls.maxClients );
  }
  Com_Printf(31, "=========================\n");
}

/*
==============
CG_LatencyTestMP_BaseLag_RecordSample
==============
*/
void CG_LatencyTestMP_BaseLag_RecordSample(LocalClientNum_t localClientNum, int observerClientNum, __int64 clientTime, int ping)
{
  double v4; 
  int v6; 
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  ClActiveClientMP *ClientMP; 
  __int64 v11; 
  ClActiveClientMP *v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 maxClients; 
  const char *v16; 

  v6 = clientTime;
  v7 = observerClientNum;
  if ( s_baseLagTest.testingClientNum >= 0 )
  {
    Com_Printf(31, "Record Sample time=%i observer=%i\n", clientTime, (unsigned int)observerClientNum);
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    v11 = s_baseLagTest.sampleCount & 0x3F;
    v12 = ClientMP;
    v13 = (v7 << 6) + ((LOBYTE(s_baseLagTest.sampleCount) - 1) & 0x3F);
    if ( v6 >= s_baseLagTest.startTime + 1000 )
    {
      if ( s_baseLagTest.sampleCount <= 0 || s_baseLagTest.samples[0][v13].clientTime )
      {
        if ( cls.maxClients > 0 )
        {
          v14 = 0i64;
          maxClients = (unsigned int)cls.maxClients;
          do
          {
            s_baseLagTest.samples[v14++][v11] = 0i64;
            --maxClients;
          }
          while ( maxClients );
        }
        s_baseLagTest.samples[v7][v11].clientTime = v6;
        s_baseLagTest.samples[v7][v11].ping = ping;
        ++s_baseLagTest.sampleCount;
      }
      else
      {
        s_baseLagTest.samples[0][v13].clientTime = v6;
        s_baseLagTest.samples[0][v13].ping = ping;
      }
      if ( LocalClientGlobals->clientNum == s_baseLagTest.testingClientNum )
      {
        CG_LatencyTestMP_BaseLag_CalcStats(localClientNum, v4);
      }
      else
      {
        Com_Printf(31, "CL_Main_AddReliableCommand baselag sample %i %i\n", (unsigned int)v12->serverTime, (unsigned int)v12->snap.ping);
        v16 = j_va("latencyTest baselag sample %i %i", (unsigned int)v12->serverTime, (unsigned int)v12->snap.ping);
        CL_Main_AddReliableCommand(localClientNum, v16);
      }
    }
  }
}

/*
==============
CG_LatencyTestMP_BaseLag_Start_f
==============
*/
void CG_LatencyTestMP_BaseLag_Start_f()
{
  unsigned __int8 v0; 
  const char *v1; 
  unsigned int v2; 
  const char *v3; 
  LocalClientNum_t v4; 
  LocalClientNum_t v5; 
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  ClActiveClientMP *ClientMP; 
  const char *v9; 

  v0 = 0;
  if ( Cmd_Argc() > 1 )
  {
    v1 = Cmd_Argv(1);
    v0 = atoi(v1);
  }
  v2 = 0;
  if ( Cmd_Argc() > 2 )
  {
    v3 = Cmd_Argv(2);
    v2 = atoi(v3);
  }
  v4 = Cmd_LocalClientNum();
  v5 = v4;
  if ( s_baseLagTest.testingClientNum == -1 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(v4);
    Entity = CG_GetEntity(v5, LocalClientGlobals->clientNum);
    ClientMP = ClActiveClientMP::GetClientMP(v5);
    if ( Entity )
    {
      memset_0(&s_baseLagTest, 0, sizeof(s_baseLagTest));
      s_baseLagTest.testingClientNum = LocalClientGlobals->clientNum;
      s_baseLagTest.desiredSampleCount = v2;
      s_baseLagTest.testMode[0] = v0;
      s_baseLagTest.startTime = ClientMP->serverTime;
      v9 = j_va("latencyTest baselag start %i %i", v0, v2);
      CL_Main_AddReliableCommand(v5, v9);
      Com_Printf(31, "BaseLag Test Started (Master)\n");
    }
  }
  else
  {
    CG_LatencyTestMP_BaseLag_Stop(v4);
  }
}

/*
==============
CG_LatencyTestMP_BaseLag_Stop
==============
*/
void CG_LatencyTestMP_BaseLag_Stop(LocalClientNum_t localClientNum)
{
  const char *v2; 

  if ( s_baseLagTest.testingClientNum == CG_GetLocalClientGlobals(localClientNum)->clientNum )
  {
    v2 = j_va("latencyTest baselag stop");
    CL_Main_AddReliableCommand(localClientNum, v2);
  }
  memset_0(&s_baseLagTest.desiredSampleCount, 0, 0x1A2DCui64);
  s_baseLagTest.testingClientNum = -1;
  Com_Printf(31, "BaseLag Test Stopped\n");
}

/*
==============
CG_LatencyTestMP_BaseLag_Stop_f
==============
*/
void CG_LatencyTestMP_BaseLag_Stop_f()
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  CG_LatencyTestMP_BaseLag_Stop(v0);
}

/*
==============
CG_LatencyTestMP_DamageFeedback
==============
*/
void CG_LatencyTestMP_DamageFeedback(LocalClientNum_t localClientNum, int yawByte, int pitchByte, int damage)
{
  int clientNum; 
  cg_t *LocalClientGlobals; 
  int *p_dmgIndicatorTime; 

  clientNum = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.clientNum;
  if ( s_shootFirstTest.testingClientNum != -1 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( clientNum == LocalClientGlobals->clientNum && !CG_View_IsKillCamView(localClientNum) && s_shootFirstTest.sampleCount > 0 )
    {
      p_dmgIndicatorTime = &s_shootFirstTest.samples[(LOBYTE(s_shootFirstTest.sampleCount) - 1) & 0x3F].dmgIndicatorTime;
      if ( !*p_dmgIndicatorTime )
      {
        Com_Printf(31, "Shoot First Test: Record Damage time=%i\n", (unsigned int)LocalClientGlobals->time);
        *p_dmgIndicatorTime = LocalClientGlobals->time;
      }
    }
  }
}

/*
==============
CG_LatencyTestMP_DeployServerCommandString
==============
*/
void CG_LatencyTestMP_DeployServerCommandString(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const char *v10; 
  __int64 v11; 
  const char *v12; 
  __int64 v13; 
  char v14; 
  const char *v15; 
  unsigned int v16; 
  const char *v17; 
  const char *v19; 
  const char *v21; 
  const char *v23; 
  const char *v25; 
  const char *v27; 
  const char *v35; 
  __int64 v36; 
  char v37; 
  const char *v38; 
  char v39; 
  const char *v40; 
  int v41; 
  const char *v42; 
  int v43; 
  const char *v44; 
  int v45; 
  const char *v46; 
  int v47; 
  __int64 v48; 
  const char *v49; 
  __int64 v50; 
  char v51; 
  const char *v52; 
  __int64 v53; 
  char v54; 
  const char *v55; 
  unsigned int v56; 
  const char *v57; 
  __int64 v58; 
  char v59; 
  const char *v60; 
  char v61; 
  const char *v62; 
  __int64 v63; 
  const char *v64; 
  int v65; 
  const char *v66; 
  int v67; 
  const char *v68; 
  int v69; 
  unsigned int v70; 
  __int64 v71; 
  CgLatencyTestTtkTestResult *v72; 
  __int64 v73; 
  int sampleCount; 
  const char *v75; 
  const char *v76; 
  __int64 v77; 
  char v78; 
  const char *v79; 
  unsigned int v80; 
  const char *v81; 
  char v82; 
  const char *v83; 
  __int64 v84; 
  char v85; 
  const char *v86; 
  __int64 v87; 
  char v88; 
  const char *v89; 
  unsigned int v90; 
  const char *v91; 
  unsigned int v92; 
  const char *v93; 
  char v94; 
  const char *v95; 
  int v96; 
  unsigned int maxClients; 
  ClActiveClientMP *ClientMP; 
  unsigned int v99; 
  ClActiveClientMP *v100; 
  const char *v101; 
  __int64 v102; 
  char v103; 
  const char *v104; 
  char v105; 
  const char *v106; 
  int v107; 
  const char *v108; 
  int v109; 
  const char *v110; 
  bool v111; 
  const char *v112; 
  int v113; 
  const char *v114; 
  const char *v115; 
  __int64 v116; 
  char v117; 
  const char *v118; 
  unsigned int v119; 
  const char *v120; 
  char v121; 
  const char *v122; 
  __int64 v123; 
  char v124; 
  const char *v125; 
  __int64 v126; 
  char v127; 
  const char *v128; 
  unsigned int v129; 
  const char *v130; 
  char v131; 
  const char *v132; 
  int v133; 
  ClActiveClientMP *v134; 
  const char *v135; 
  __int64 v136; 
  char v137; 
  const char *v138; 
  char v139; 
  const char *v140; 
  int v141; 
  const char *v142; 
  unsigned int v143; 
  const char *v144; 
  int v145; 
  char *fmt; 
  __int64 v147; 
  __int64 v148; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( Cmd_Argc() >= 2 && (v10 = Cmd_Argv(1), !strcmp_0(v10, "strafing")) )
  {
    v11 = 0i64;
    if ( Cmd_Argc() == 10 )
    {
      v12 = Cmd_Argv(2);
      v13 = 0i64;
      while ( 1 )
      {
        v14 = v12[v13++];
        if ( v14 != aStart[v13 - 1] )
          break;
        if ( v13 == 6 )
        {
          __asm
          {
            vmovaps [rsp+0C8h+var_38], xmm6
            vmovaps [rsp+0C8h+var_48], xmm7
            vmovaps [rsp+0C8h+var_58], xmm8
            vmovaps [rsp+0C8h+var_68], xmm9
            vmovaps [rsp+0C8h+var_78], xmm10
            vmovaps [rsp+0C8h+var_88], xmm11
          }
          v15 = Cmd_Argv((int)v13 - 3);
          v16 = atoi(v15);
          if ( v16 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3106, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
            __debugbreak();
          v17 = Cmd_Argv(4);
          *(double *)&_XMM0 = atof(v17);
          __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
          v19 = Cmd_Argv(5);
          *(double *)&_XMM0 = atof(v19);
          __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
          v21 = Cmd_Argv(6);
          *(double *)&_XMM0 = atof(v21);
          __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
          v23 = Cmd_Argv(7);
          *(double *)&_XMM0 = atof(v23);
          __asm { vcvtsd2ss xmm9, xmm0, xmm0 }
          v25 = Cmd_Argv(8);
          *(double *)&_XMM0 = atof(v25);
          __asm { vcvtsd2ss xmm10, xmm0, xmm0 }
          v27 = Cmd_Argv(9);
          *(double *)&_XMM0 = atof(v27);
          __asm { vcvtsd2ss xmm11, xmm0, xmm0 }
          if ( v16 >= cls.maxClients )
          {
            LODWORD(v147) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 387, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v147, cls.maxClients) )
              __debugbreak();
          }
          memset_0(s_strafingTest.samples, 0, 0x26E8Cui64);
          s_strafingTest.testingClientNum = v16;
          __asm
          {
            vmovss  dword ptr cs:s_strafingTest.pos, xmm6
            vmovss  dword ptr cs:s_strafingTest.pos+4, xmm7
            vmovss  dword ptr cs:s_strafingTest.pos+8, xmm8
            vmovss  dword ptr cs:s_strafingTest.dir, xmm9
            vmovss  dword ptr cs:s_strafingTest.dir+4, xmm10
            vmovss  dword ptr cs:s_strafingTest.dir+8, xmm11
            vmovaps xmm11, [rsp+0C8h+var_88]
            vmovaps xmm10, [rsp+0C8h+var_78]
            vmovaps xmm9, [rsp+0C8h+var_68]
            vmovaps xmm8, [rsp+0C8h+var_58]
            vmovaps xmm7, [rsp+0C8h+var_48]
            vmovaps xmm6, [rsp+0C8h+var_38]
          }
          Com_Printf(31, "Strafing Test Started (Slave)\n");
          return;
        }
      }
    }
    if ( Cmd_Argc() == 3 )
    {
      v35 = Cmd_Argv(2);
      v36 = 0i64;
      while ( 1 )
      {
        v37 = v35[v36++];
        if ( v37 != aStop_0[v36 - 1] )
          break;
        if ( v36 == 5 )
        {
          CG_LatencyTestMP_StrafingTest_Stop(localClientNum);
          return;
        }
      }
    }
    if ( Cmd_Argc() == 7 )
    {
      v38 = Cmd_Argv(2);
      while ( 1 )
      {
        v39 = v38[v11++];
        if ( v39 != aSample[v11 - 1] )
          break;
        if ( v11 == 7 )
        {
          v40 = Cmd_Argv(3);
          v41 = atoi(v40);
          v42 = Cmd_Argv(4);
          v43 = atoi(v42);
          v44 = Cmd_Argv(5);
          v45 = atoi(v44);
          v46 = Cmd_Argv(6);
          v47 = atoi(v46);
          CG_LatencyTestMP_StrafingTest_SetRemoteState(localClientNum, v41, v43, v45, v47);
          return;
        }
      }
    }
    Com_PrintError(31, "Invalid parameters for SVSCMD_LATENCYTEST strafing\n");
  }
  else
  {
    v48 = 0i64;
    if ( Cmd_Argc() >= 2 )
    {
      v49 = Cmd_Argv(1);
      v50 = 0i64;
      while ( 1 )
      {
        v51 = v49[v50++];
        if ( v51 != aTtk[v50 - 1] )
          break;
        if ( v50 == 4 )
        {
          if ( Cmd_Argc() == 4 )
          {
            v52 = Cmd_Argv(2);
            v53 = 0i64;
            while ( 1 )
            {
              v54 = v52[v53++];
              if ( v54 != aStart[v53 - 1] )
                break;
              if ( v53 == 6 )
              {
                v55 = Cmd_Argv(3);
                v56 = atoi(v55);
                if ( v56 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3139, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
                  __debugbreak();
                if ( v56 >= cls.maxClients )
                {
                  LODWORD(v147) = v56;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3140, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v147, cls.maxClients) )
                    __debugbreak();
                }
                memset_0(&s_ttkTest.sampleCount, 0, 0x26484ui64);
                s_ttkTest.testingClientNum = v56;
                Com_Printf(31, "TTK Test Started (Slave)\n");
                return;
              }
            }
          }
          if ( Cmd_Argc() == 3 )
          {
            v57 = Cmd_Argv(2);
            v58 = 0i64;
            while ( 1 )
            {
              v59 = v57[v58++];
              if ( v59 != aStop_0[v58 - 1] )
                break;
              if ( v58 == 5 )
              {
                CG_LatencyTestMP_TTKTest_Stop(localClientNum);
                return;
              }
            }
          }
          if ( Cmd_Argc() == 7 )
          {
            v60 = Cmd_Argv(2);
            while ( 1 )
            {
              v61 = v60[v48++];
              if ( v61 != aSample[v48 - 1] )
                break;
              if ( v48 == 7 )
              {
                v62 = Cmd_Argv(3);
                v63 = atoi(v62);
                v64 = Cmd_Argv(4);
                v65 = atoi(v64);
                v66 = Cmd_Argv(5);
                v67 = atoi(v66);
                v68 = Cmd_Argv(6);
                v69 = atoi(v68);
                if ( s_ttkTest.testingClientNum != -1 )
                {
                  v70 = (LOBYTE(s_ttkTest.sampleCount) - 1) & 0x3F;
                  if ( v65 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1039, ASSERT_TYPE_ASSERT, "(startFiringTime > 0)", (const char *)&queryFormat, "startFiringTime > 0") )
                    __debugbreak();
                  if ( v67 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1040, ASSERT_TYPE_ASSERT, "(deathTime > 0)", (const char *)&queryFormat, "deathTime > 0") )
                    __debugbreak();
                  if ( (unsigned int)v63 >= cls.maxClients )
                  {
                    LODWORD(v147) = v63;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1042, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( cls.maxClients )", "clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v147, cls.maxClients) )
                      __debugbreak();
                  }
                  v71 = v70 + (v63 << 6);
                  v72 = &s_ttkTest.results[v63];
                  v73 = v71;
                  if ( !s_ttkTest.samples[0][v71].deathTime )
                  {
                    s_ttkTest.samples[0][v71].deathTime = v67;
                    sampleCount = 64;
                    s_ttkTest.samples[0][v73].ping = v69;
                    s_ttkTest.samples[0][v73].startFiringTime = v65;
                    if ( s_ttkTest.sampleCount < 64 )
                      sampleCount = s_ttkTest.sampleCount;
                    v72->sumPing += v69;
                    v72->sumTTK += v67 - v65;
                    v72->avgPing = v72->sumPing / sampleCount;
                    v72->avgTTK = v72->sumTTK / sampleCount;
                    LODWORD(v147) = s_ttkTest.samples[0][v73].ping;
                    LODWORD(fmt) = s_ttkTest.samples[0][v73].deathTime;
                    Com_Printf(31, "TTK Sample: %i %06i, %06i, %i\n", (unsigned int)v63, (unsigned int)s_ttkTest.samples[0][v73].startFiringTime, fmt, v147);
                  }
                }
                return;
              }
            }
          }
          Com_PrintError(31, "Invalid parameters for SVSCMD_LATENCYTEST ttk\n");
          return;
        }
      }
    }
    if ( Cmd_Argc() >= 2 && (v75 = Cmd_Argv(1), !strcmp_0(v75, "dropshot")) )
    {
      if ( Cmd_Argc() == 4 )
      {
        v76 = Cmd_Argv(2);
        v77 = 0i64;
        while ( 1 )
        {
          v78 = v76[v77++];
          if ( v78 != aStart[v77 - 1] )
            break;
          if ( v77 == 6 )
          {
            v79 = Cmd_Argv(3);
            v80 = atoi(v79);
            if ( v80 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3168, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
              __debugbreak();
            if ( v80 >= cls.maxClients )
            {
              LODWORD(v147) = v80;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3169, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v147, cls.maxClients) )
                __debugbreak();
            }
            memset_0(&s_dropShotTest.shootTime, 0, 0x314ui64);
            s_dropShotTest.testingClientNum = v80;
            Com_Printf(31, "Drop Shot Test Started (Slave)\n");
            return;
          }
        }
      }
      if ( Cmd_Argc() == 3 )
      {
        v81 = Cmd_Argv(2);
        while ( 1 )
        {
          v82 = v81[v48++];
          if ( v82 != aStop_0[v48 - 1] )
            break;
          if ( v48 == 5 )
          {
            CG_LatencyTestMP_DropShotTest_Stop(localClientNum);
            return;
          }
        }
      }
      Com_PrintError(31, "Invalid parameters for SVSCMD_LATENCYTEST dropshot\n");
    }
    else
    {
      if ( Cmd_Argc() >= 2 )
      {
        v83 = Cmd_Argv(1);
        v84 = 0i64;
        while ( 1 )
        {
          v85 = v83[v84++];
          if ( v85 != aLos[v84 - 1] )
            break;
          if ( v84 == 4 )
          {
            if ( Cmd_Argc() == 7 )
            {
              v86 = Cmd_Argv(2);
              v87 = 0i64;
              while ( 1 )
              {
                v88 = v86[v87++];
                if ( v88 != aStart[v87 - 1] )
                  break;
                if ( v87 == 6 )
                {
                  v89 = Cmd_Argv(3);
                  v90 = atoi(v89);
                  v91 = Cmd_Argv(4);
                  v92 = atoi(v91);
                  v93 = Cmd_Argv(5);
                  v94 = atoi(v93);
                  v95 = Cmd_Argv(6);
                  v96 = atoi(v95);
                  if ( v90 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3193, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
                    __debugbreak();
                  maxClients = cls.maxClients;
                  if ( v90 >= cls.maxClients )
                  {
                    LODWORD(v147) = v90;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3194, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v147, cls.maxClients) )
                      __debugbreak();
                    maxClients = cls.maxClients;
                  }
                  if ( v92 >= maxClients )
                  {
                    LODWORD(v148) = maxClients;
                    LODWORD(v147) = v92;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3195, ASSERT_TYPE_ASSERT, "(unsigned)( targetClientNum ) < (unsigned)( cls.maxClients )", "targetClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v147, v148) )
                      __debugbreak();
                  }
                  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
                  v99 = cls.maxClients;
                  v100 = ClientMP;
                  if ( v90 >= cls.maxClients )
                  {
                    LODWORD(v148) = cls.maxClients;
                    LODWORD(v147) = v90;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1567, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v147, v148) )
                      __debugbreak();
                    v99 = cls.maxClients;
                  }
                  if ( v92 >= v99 )
                  {
                    LODWORD(v148) = v99;
                    LODWORD(v147) = v92;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1568, ASSERT_TYPE_ASSERT, "(unsigned)( targetClientNum ) < (unsigned)( cls.maxClients )", "targetClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v147, v148) )
                      __debugbreak();
                  }
                  if ( v90 == v92 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1569, ASSERT_TYPE_ASSERT, "(testingClientNum != targetClientNum)", (const char *)&queryFormat, "testingClientNum != targetClientNum") )
                    __debugbreak();
                  memset_0(&s_losTest, 0, sizeof(s_losTest));
                  s_losTest.testingClientNum = v90;
                  s_losTest.targetClientNum = v92;
                  s_losTest.testMode[0] = v94;
                  s_losTest.desiredSampleCount = v96;
                  s_losTest.startTime = v100->serverTime;
                  s_losTest.hasLoS = 1;
                  Com_Printf(31, "LoS Test Started (Slave)\n");
                  return;
                }
              }
            }
            if ( Cmd_Argc() == 3 )
            {
              v101 = Cmd_Argv(2);
              v102 = 0i64;
              while ( 1 )
              {
                v103 = v101[v102++];
                if ( v103 != aStop_0[v102 - 1] )
                  break;
                if ( v102 == 5 )
                {
                  CG_LatencyTestMP_LoS_Stop(localClientNum);
                  return;
                }
              }
            }
            if ( Cmd_Argc() == 7 )
            {
              v104 = Cmd_Argv(2);
              while ( 1 )
              {
                v105 = v104[v48++];
                if ( v105 != aSample[v48 - 1] )
                  break;
                if ( v48 == 7 )
                {
                  v106 = Cmd_Argv(3);
                  v107 = atoi(v106);
                  v108 = Cmd_Argv(4);
                  v109 = atoi(v108);
                  v110 = Cmd_Argv(5);
                  v111 = atoi(v110) != 0;
                  v112 = Cmd_Argv(6);
                  v113 = atoi(v112);
                  CG_LatencyTestMP_LoS_RecordSample(localClientNum, v107, v109, v111, v113);
                  return;
                }
              }
            }
LABEL_122:
            Com_PrintError(31, "Invalid parameters for SVSCMD_LATENCYTEST los\n");
            return;
          }
        }
      }
      if ( Cmd_Argc() >= 2 && (v114 = Cmd_Argv(1), !strcmp_0(v114, "shootfirst")) )
      {
        if ( Cmd_Argc() == 4 )
        {
          v115 = Cmd_Argv(2);
          v116 = 0i64;
          while ( 1 )
          {
            v117 = v115[v116++];
            if ( v117 != aStart[v116 - 1] )
              break;
            if ( v116 == 6 )
            {
              v118 = Cmd_Argv(3);
              v119 = atoi(v118);
              if ( v119 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3223, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
                __debugbreak();
              if ( v119 >= cls.maxClients )
              {
                LODWORD(v147) = v119;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3224, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v147, cls.maxClients) )
                  __debugbreak();
              }
              memset_0(&s_shootFirstTest.shootTime, 0, 0x708ui64);
              s_shootFirstTest.testingClientNum = v119;
              Com_Printf(31, "Shoot First Test Started (Slave)\n");
              return;
            }
          }
        }
        if ( Cmd_Argc() == 3 )
        {
          v120 = Cmd_Argv(2);
          while ( 1 )
          {
            v121 = v120[v48++];
            if ( v121 != aStop_0[v48 - 1] )
              break;
            if ( v48 == 5 )
            {
              CG_LatencyTestMP_ShootFirstTest_Stop(localClientNum);
              return;
            }
          }
        }
        Com_PrintError(31, "Invalid parameters for SVSCMD_LATENCYTEST shootfirst\n");
      }
      else
      {
        if ( Cmd_Argc() >= 2 )
        {
          v122 = Cmd_Argv(1);
          v123 = 0i64;
          while ( 1 )
          {
            v124 = v122[v123++];
            if ( v124 != aBaselag[v123 - 1] )
              break;
            if ( v123 == 8 )
            {
              if ( Cmd_Argc() == 6 )
              {
                v125 = Cmd_Argv(2);
                v126 = 0i64;
                while ( 1 )
                {
                  v127 = v125[v126++];
                  if ( v127 != aStart[v126 - 1] )
                    break;
                  if ( v126 == 6 )
                  {
                    v128 = Cmd_Argv(3);
                    v129 = atoi(v128);
                    v130 = Cmd_Argv(4);
                    v131 = atoi(v130);
                    v132 = Cmd_Argv(5);
                    v133 = atoi(v132);
                    if ( v129 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3247, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
                      __debugbreak();
                    if ( v129 >= cls.maxClients )
                    {
                      LODWORD(v147) = v129;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3248, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v147, cls.maxClients) )
                        __debugbreak();
                    }
                    v134 = ClActiveClientMP::GetClientMP(localClientNum);
                    if ( v129 >= cls.maxClients )
                    {
                      LODWORD(v148) = cls.maxClients;
                      LODWORD(v147) = v129;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 2624, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v147, v148) )
                        __debugbreak();
                    }
                    memset_0(&s_baseLagTest.testMode[1], 0, 0x1A2D7ui64);
                    s_baseLagTest.testingClientNum = v129;
                    s_baseLagTest.desiredSampleCount = v133;
                    s_baseLagTest.testMode[0] = v131;
                    s_baseLagTest.startTime = v134->serverTime;
                    Com_Printf(31, "BaseLag Test Started (Slave)\n");
                    return;
                  }
                }
              }
              if ( Cmd_Argc() == 3 )
              {
                v135 = Cmd_Argv(2);
                v136 = 0i64;
                while ( 1 )
                {
                  v137 = v135[v136++];
                  if ( v137 != aStop_0[v136 - 1] )
                    break;
                  if ( v136 == 5 )
                  {
                    CG_LatencyTestMP_BaseLag_Stop(localClientNum);
                    return;
                  }
                }
              }
              if ( Cmd_Argc() == 6 )
              {
                v138 = Cmd_Argv(2);
                while ( 1 )
                {
                  v139 = v138[v48++];
                  if ( v139 != aSample[v48 - 1] )
                    break;
                  if ( v48 == 7 )
                  {
                    v140 = Cmd_Argv(3);
                    v141 = atoi(v140);
                    v142 = Cmd_Argv(4);
                    v143 = atoi(v142);
                    v144 = Cmd_Argv(5);
                    v145 = atoi(v144);
                    CG_LatencyTestMP_BaseLag_RecordSample(localClientNum, v141, v143, v145);
                    return;
                  }
                }
              }
              goto LABEL_122;
            }
          }
        }
        Com_PrintError(31, "Invalid parameters for SVSCMD_LATENCYTEST\n");
      }
    }
  }
}

/*
==============
CG_LatencyTestMP_DrawResults
==============
*/
void CG_LatencyTestMP_DrawResults(LocalClientNum_t localClientNum)
{
  CG_LatencyTestMP_StrafingTest_DrawResults(localClientNum);
  CG_LatencyTestMP_TTKTest_DrawResults(localClientNum);
  CG_LatencyTestMP_DropShotTest_DrawResults(localClientNum);
  CG_LatencyTestMP_LoS_DrawResults(localClientNum);
  CG_LatencyTestMP_ShootFirstTest_DrawResults(localClientNum);
  CG_LatencyTestMP_BaseLag_DrawResults(localClientNum);
}

/*
==============
CG_LatencyTestMP_DropShotTest_DrawResults
==============
*/
void CG_LatencyTestMP_DropShotTest_DrawResults(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v8; 
  GfxFont *FontHandle; 
  char v15; 
  __int64 sampleCount; 
  const char *v35; 
  float h; 
  float ha; 
  float hb; 
  float hc; 
  float hd; 
  float he; 
  int horzAlign; 
  int horzAligna; 
  double horzAlignb; 
  int horzAlignc; 
  float s1; 
  float s1a; 
  float s1b; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  int style; 
  int stylea; 
  int styleb; 
  vec4_t color; 
  vec4_t v75; 
  char dest[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovss  xmm6, cs:BOX_TOP_1
  }
  if ( s_dropShotTest.sampleCount > 0 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm7
      vmovaps xmmword ptr [r11-48h], xmm8
    }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    __asm { vmovss  xmm2, cs:FONT_SCALE_2; scale }
    v8 = ActivePlacement;
    UI_GetFontHandle(ActivePlacement, FONT_TYPE_2, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, cs:HEADER_FONT_SCALE_2; scale
      vmovss  xmm8, cs:__real@3f800000
    }
    FontHandle = UI_GetFontHandle(v8, FONT_TYPE_2, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm0, cs:LINE_HEIGHT_1
      vmovss  xmm3, cs:BOX_WIDTH_1; w
      vmovss  xmm1, cs:BOX_LEFT_1; x
    }
    v15 = LOBYTE(s_dropShotTest.sampleCount) - 1;
    __asm
    {
      vmovss  [rsp+128h+style], xmm8
      vmovss  dword ptr [rsp+128h+var_E0], xmm8
      vxorps  xmm7, xmm7, xmm7
      vmovss  [rsp+128h+var_E8], xmm7
      vmovss  [rsp+128h+s1], xmm7
      vmovaps xmm2, xmm6; y
      vmovss  [rsp+128h+h], xmm0
    }
    CL_DrawStretchPic(v8, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, h, 4, 4, s1, v62, v68, *(float *)&style, &colorWhite, cgMedia.whiteMaterial);
    __asm { vaddss  xmm6, xmm6, cs:LINE_HEIGHT_1 }
    sampleCount = 64i64;
    if ( s_dropShotTest.sampleCount < 64 )
      sampleCount = (unsigned int)s_dropShotTest.sampleCount;
    Com_sprintf(dest, 0x40ui64, " DROP SHOT TEST      Samples: %i", sampleCount);
    __asm
    {
      vmovss  xmm0, cs:HEADER_FONT_SCALE_2
      vmovss  [rsp+128h+var_E8], xmm0
      vmovss  xmm0, cs:BOX_LEFT_1
      vmovss  [rsp+128h+horzAlign], xmm6
      vmovss  [rsp+128h+h], xmm0
    }
    UI_DrawText(v8, dest, 64, FontHandle, ha, *(float *)&horzAlign, 4, 4, v63, &colorBlack, 3);
    __asm
    {
      vmovss  xmm0, cs:LINE_HEIGHT_1
      vmovss  xmm3, cs:BOX_WIDTH_1; w
      vmovss  xmm1, cs:BOX_LEFT_1; x
      vmovss  [rsp+128h+style], xmm8
      vmovss  dword ptr [rsp+128h+var_E0], xmm8
      vmovss  [rsp+128h+var_E8], xmm7
      vmovss  [rsp+128h+s1], xmm7
      vmovaps xmm2, xmm6; y
      vmovss  [rsp+128h+h], xmm0
    }
    CL_DrawStretchPic(v8, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, hb, 4, 4, s1a, v64, v69, *(float *)&stylea, &colorBlack, cgMedia.whiteMaterial);
    __asm { vaddss  xmm6, xmm6, cs:LINE_HEIGHT_1 }
    Com_sprintf(dest, 0x40ui64, " PING | HIT |  AVG");
    __asm
    {
      vmovss  xmm0, cs:HEADER_FONT_SCALE_2
      vmovss  [rsp+128h+var_E8], xmm0
      vmovss  xmm0, cs:BOX_LEFT_1
      vmovss  [rsp+128h+horzAlign], xmm6
      vmovss  [rsp+128h+h], xmm0
    }
    UI_DrawText(v8, dest, 64, FontHandle, hc, *(float *)&horzAligna, 4, 4, v65, &colorWhite, 3);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( s_dropShotTest.sumHit > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vcvtsi2ss xmm1, xmm1, eax
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm1, cs:__real@42c80000
      }
    }
    v35 = " ";
    if ( s_dropShotTest.samples[v15 & 0x3F].hit )
      v35 = "X";
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  qword ptr [rsp+128h+horzAlign], xmm0
    }
    Com_sprintf(dest, 0x40ui64, " %4i |  %s  | %3.f%%", (unsigned int)s_dropShotTest.samples[v15 & 0x3F].ping, v35, horzAlignb);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
      vmovups xmm1, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  xmm3, cs:BOX_WIDTH_1; w
      vmovss  [rsp+128h+style], xmm8
      vmovss  dword ptr [rsp+128h+var_E0], xmm8
      vmovss  [rsp+128h+var_E8], xmm7
      vmovss  [rsp+128h+s1], xmm7
      vmovups xmmword ptr [rsp+128h+var_B8], xmm0
      vmovss  xmm0, cs:LINE_HEIGHT_1
      vmovups xmmword ptr [rsp+128h+var_A8], xmm1
      vmovss  xmm1, cs:BOX_LEFT_1; x
      vmovaps xmm2, xmm6; y
      vmovss  [rsp+128h+h], xmm0
    }
    CL_DrawStretchPic(v8, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, hd, 4, 4, s1b, v66, v70, *(float *)&styleb, &color, cgMedia.whiteMaterial);
    __asm
    {
      vmovss  xmm0, cs:HEADER_FONT_SCALE_2
      vaddss  xmm1, xmm6, cs:LINE_HEIGHT_1
      vmovss  [rsp+128h+var_E8], xmm0
      vmovss  xmm0, cs:BOX_LEFT_1
      vmovss  [rsp+128h+horzAlign], xmm1
      vmovss  [rsp+128h+h], xmm0
    }
    UI_DrawText(v8, dest, 64, FontHandle, he, *(float *)&horzAlignc, 4, 4, v67, &v75, 3);
    __asm
    {
      vmovaps xmm8, [rsp+128h+var_48]
      vmovaps xmm7, [rsp+128h+var_38]
    }
  }
  __asm { vmovaps xmm6, [rsp+128h+var_28] }
}

/*
==============
CG_LatencyTestMP_DropShotTest_ProcessPlayerEntity
==============
*/
void CG_LatencyTestMP_DropShotTest_ProcessPlayerEntity(LocalClientNum_t localClientNum, const centity_t *cent)
{
  LerpEntityState *p_lerp; 
  bool v5; 
  LerpEntityState *p_prevState; 
  bool v7; 
  cg_t *LocalClientGlobals; 
  cg_t *v9; 
  const dvar_t *v10; 
  __int64 v11; 
  ClActiveClientMP *ClientMP; 
  char *fmt; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1338, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_lerp = &cent->nextState.lerp;
  v5 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 3u);
  p_prevState = &cent->prevState;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_prevState->eFlags, ACTIVE, 3u) != v5 || (v7 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 4u), GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_prevState->eFlags, ACTIVE, 4u) != v7) )
  {
    if ( (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 3u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_prevState->eFlags, ACTIVE, 4u)) && s_dropShotTest.testingClientNum >= 0 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      v9 = LocalClientGlobals;
      if ( s_dropShotTest.testingClientNum == LocalClientGlobals->clientNum && LocalClientGlobals->time > s_dropShotTest.shootTime + 1000 )
      {
        v10 = DVARINT_cg_dropShotTestReactionTime;
        if ( !DVARINT_cg_dropShotTestReactionTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dropShotTestReactionTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        s_dropShotTest.shootTime = v9->time + v10->current.integer;
        LODWORD(fmt) = s_dropShotTest.shootTime;
        Com_Printf(31, "Drop Shot Test: Change Stance clientNum=%i time=%i shootTime=%i\n", (unsigned int)v9->clientNum, (unsigned int)v9->time, fmt);
        v11 = s_dropShotTest.sampleCount & 0x3F;
        if ( s_dropShotTest.sampleCount >= 64 )
        {
          s_dropShotTest.sumPing -= s_dropShotTest.samples[v11].ping;
          s_dropShotTest.sumHit -= s_dropShotTest.samples[v11].hit;
        }
        ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
        s_dropShotTest.samples[v11].hit = 0;
        s_dropShotTest.samples[v11].ping = ClientMP->snap.ping;
        ++s_dropShotTest.sampleCount;
      }
    }
  }
}

/*
==============
CG_LatencyTestMP_DropShotTest_Start_f
==============
*/
void CG_LatencyTestMP_DropShotTest_Start_f()
{
  LocalClientNum_t v0; 
  LocalClientNum_t v1; 
  const char *v2; 
  cg_t *LocalClientGlobals; 
  const char *v4; 

  v0 = Cmd_LocalClientNum();
  v1 = v0;
  if ( s_dropShotTest.testingClientNum == -1 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(v0);
    if ( CG_GetEntity(v1, LocalClientGlobals->clientNum) )
    {
      memset_0(&s_dropShotTest, 0, sizeof(s_dropShotTest));
      s_dropShotTest.testingClientNum = LocalClientGlobals->clientNum;
      v4 = j_va("latencyTest dropshot start");
      CL_Main_AddReliableCommand(v1, v4);
      Com_Printf(31, "Drop Shot Test Started (Master)\n");
    }
  }
  else
  {
    memset_0(&s_dropShotTest.shootTime, 0, 0x314ui64);
    s_dropShotTest.testingClientNum = -1;
    Com_Printf(31, "Drop Shot Test Stopped\n");
    v2 = j_va("latencyTest dropshot stop");
    CL_Main_AddReliableCommand(v1, v2);
  }
}

/*
==============
CG_LatencyTestMP_DropShotTest_Stop
==============
*/
void CG_LatencyTestMP_DropShotTest_Stop(LocalClientNum_t localClientNum)
{
  memset_0(&s_dropShotTest.shootTime, 0, 0x314ui64);
  s_dropShotTest.testingClientNum = -1;
  Com_Printf(31, "Drop Shot Test Stopped\n");
}

/*
==============
CG_LatencyTestMP_EntityEvent
==============
*/
void CG_LatencyTestMP_EntityEvent(LocalClientNum_t localClientNum, const centity_t *cent, int event, int flags)
{
  cg_t *LocalClientGlobals; 
  __int64 v6; 
  int *p_hitMarkerTime; 
  cg_t *v8; 

  if ( (unsigned int)(event - 93) <= 2 )
  {
    if ( s_dropShotTest.testingClientNum >= 0 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( s_dropShotTest.testingClientNum == LocalClientGlobals->clientNum )
      {
        v6 = (LOBYTE(s_dropShotTest.sampleCount) - 1) & 0x3F;
        if ( !s_dropShotTest.samples[v6].hit )
        {
          s_dropShotTest.samples[v6].hit = 1;
          ++s_dropShotTest.sumHit;
          Com_Printf(31, "Drop Shot Test: Record Hit time=%i\n", (unsigned int)LocalClientGlobals->time);
        }
      }
    }
    if ( s_shootFirstTest.testingClientNum >= 0 && !CG_View_IsKillCamView(localClientNum) && s_shootFirstTest.sampleCount > 0 )
    {
      p_hitMarkerTime = &s_shootFirstTest.samples[(LOBYTE(s_shootFirstTest.sampleCount) - 1) & 0x3F].hitMarkerTime;
      if ( !*p_hitMarkerTime )
      {
        v8 = CG_GetLocalClientGlobals(localClientNum);
        Com_Printf(31, "Shoot First Test: Record Hit time=%i\n", (unsigned int)v8->time);
        *p_hitMarkerTime = v8->time;
      }
    }
  }
}

/*
==============
CG_LatencyTestMP_FireWeapon
==============
*/
void CG_LatencyTestMP_FireWeapon(LocalClientNum_t localClientNum, int firingClientNum)
{
  ClActiveClientMP *ClientMP; 
  cg_t *LocalClientGlobals; 
  int sampleCount; 
  cg_t *v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  CgLatencyTestTtkTestSample *v11; 
  CgLatencyTestTtkTestSample *v12; 
  CgLatencyTestTtkTestResult *v13; 
  int serverTime; 
  int deathTime; 
  cg_t *v16; 
  int v17; 
  int *p_shootTime; 
  __int64 v19; 
  int clientNum; 
  __int64 v21; 
  int maxClients; 

  if ( s_ttkTest.testingClientNum != -1 && s_ttkTest.testingClientNum == firingClientNum && !CG_View_IsKillCamView(localClientNum) )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    sampleCount = s_ttkTest.sampleCount;
    v7 = LocalClientGlobals;
    v8 = s_ttkTest.sampleCount & 0x3F;
    v9 = (LOBYTE(s_ttkTest.sampleCount) - 1) & 0x3F;
    if ( LocalClientGlobals->clientNum >= (unsigned int)cls.maxClients )
    {
      maxClients = cls.maxClients;
      clientNum = LocalClientGlobals->clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 946, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->clientNum ) < (unsigned)( cls.maxClients )", "cgameGlob->clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
        __debugbreak();
      sampleCount = s_ttkTest.sampleCount;
    }
    v10 = v7->clientNum;
    v11 = &s_ttkTest.samples[v10][v8];
    v12 = &s_ttkTest.samples[v10][v9];
    v13 = &s_ttkTest.results[v10];
    if ( sampleCount <= 0 || (serverTime = ClientMP->serverTime, v12->startFiringTime < serverTime) && (deathTime = v12->deathTime) != 0 && deathTime + 1000 < serverTime )
    {
      if ( sampleCount >= 64 )
      {
        v13->sumPing -= v11->ping;
        v13->sumTTK += v11->startFiringTime - v11->deathTime;
      }
      v11->startFiringTime = ClientMP->serverTime;
      v11->deathTime = 0;
      v11->ping = ClientMP->snap.ping;
      ++s_ttkTest.sampleCount;
    }
  }
  if ( s_shootFirstTest.testingClientNum != -1 )
  {
    v16 = CG_GetLocalClientGlobals(localClientNum);
    if ( firingClientNum == v16->clientNum && !CG_View_IsKillCamView(localClientNum) && s_shootFirstTest.sampleCount > 0 )
    {
      Com_Printf(31, "Shoot First Test: Record Firing time=%i\n", (unsigned int)v16->time);
      v17 = (LOBYTE(s_shootFirstTest.sampleCount) - 1) & 0x3F;
      if ( v16->clientNum >= (unsigned int)cls.maxClients )
      {
        LODWORD(v21) = cls.maxClients;
        LODWORD(v19) = v16->clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 2439, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->clientNum ) < (unsigned)( cls.maxClients )", "cgameGlob->clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v19, v21) )
          __debugbreak();
      }
      p_shootTime = &s_shootFirstTest.samples[v17].shootTime;
      if ( !*p_shootTime )
        *p_shootTime = ClActiveClientMP::GetClientMP(localClientNum)->serverTime;
    }
  }
}

/*
==============
CG_LatencyTestMP_Init
==============
*/
void CG_LatencyTestMP_Init(LocalClientNum_t localClientNum)
{
  memset_0(&s_strafingTest.pos, 0, 0x26EA4ui64);
  s_strafingTest.testingClientNum = -1;
  memset_0(&s_ttkTest.sampleCount, 0, 0x26484ui64);
  s_ttkTest.testingClientNum = -1;
  memset_0(&s_dropShotTest.shootTime, 0, 0x314ui64);
  s_dropShotTest.testingClientNum = -1;
  memset_0(&s_losTest, 0, sizeof(s_losTest));
  s_losTest.hasLoS = 1;
  *(_QWORD *)&s_losTest.testingClientNum = -1i64;
  memset_0(&s_shootFirstTest.shootTime, 0, 0x708ui64);
  s_shootFirstTest.testingClientNum = -1;
  memset_0(&s_baseLagTest.desiredSampleCount, 0, 0x1A2DCui64);
  s_baseLagTest.testingClientNum = -1;
}

/*
==============
CG_LatencyTestMP_InitConsoleCommands
==============
*/
void CG_LatencyTestMP_InitConsoleCommands(void)
{
  Cmd_AddCommandInternal("cg_strafingTestStart", CG_LatencyTestMP_StrafingTest_Start_f, &CG_LatencyTestMP_StrafingTest_Start_f_VAR);
  Cmd_AddCommandInternal("cg_strafingTestPrintResult", CG_LatencyTestMP_StrafingTest_PrintResult_f, &CG_LatencyTestMP_StrafingTest_PrintResult_f_VAR);
  Cmd_AddCommandInternal("cg_ttkTestStart", CG_LatencyTestMP_TTKTest_Start_f, &CG_LatencyTestMP_TTKTest_Start_f_VAR);
  Cmd_AddCommandInternal("cg_ttkTestPrintSamples", CG_LatencyTestMP_TTKTest_PrintSamples_f, &CG_LatencyTestMP_TTKTest_PrintSamples_f_VAR);
  Cmd_AddCommandInternal("cg_dropShotTestStart", CG_LatencyTestMP_DropShotTest_Start_f, &CG_LatencyTestMP_DropShotTest_Start_f_VAR);
  Cmd_AddCommandInternal("cg_losTestStart", CG_LatencyTestMP_LoS_Start_f, &CG_LatencyTestMP_LoS_Start_f_VAR);
  Cmd_AddCommandInternal("cg_losTestStop", CG_LatencyTestMP_LoS_Stop_f, &CG_LatencyTestMP_LoS_Stop_f_VAR);
  Cmd_AddCommandInternal("cg_losTestPrintResult", CG_LatencyTestMP_LoS_PrintResult_f, &CG_LatencyTestMP_LoS_PrintResult_f_VAR);
  Cmd_AddCommandInternal("cg_shootFirstTestStart", CG_LatencyTestMP_ShootFirstTest_Start_f, &CG_LatencyTestMP_ShootFirstTest_Start_f_VAR);
  Cmd_AddCommandInternal("cg_shootFirstTestStop", CG_LatencyTestMP_ShootFirstTest_Stop_f, &CG_LatencyTestMP_ShootFirstTest_Stop_f_VAR);
  Cmd_AddCommandInternal("cg_baseLagTestStart", CG_LatencyTestMP_BaseLag_Start_f, &CG_LatencyTestMP_BaseLag_Start_f_VAR);
  Cmd_AddCommandInternal("cg_baseLagTestStop", CG_LatencyTestMP_BaseLag_Stop_f, &CG_LatencyTestMP_BaseLag_Stop_f_VAR);
  Cmd_AddCommandInternal("cg_baseLagTestPrintResult", CG_LatencyTestMP_BaseLag_PrintResult_f, &CG_LatencyTestMP_BaseLag_PrintResult_f_VAR);
}

/*
==============
CG_LatencyTestMP_IsClientActive
==============
*/
bool CG_LatencyTestMP_IsClientActive(const cg_t *const cgameGlob, int clientNum)
{
  __int64 v2; 
  const characterInfo_t *CharacterInfo; 
  __int64 v6; 

  v2 = clientNum;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 339, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cgameGlob->HasCharacterInfo((cg_t *)cgameGlob, v2) )
    return 0;
  if ( cgameGlob->IsMP((cg_t *)cgameGlob) )
  {
    if ( (unsigned int)v2 >= cgameGlob[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v6) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v6, cgameGlob[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&cgameGlob[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v2);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)cgameGlob, v2);
  }
  return CharacterInfo->infoValid != 0;
}

/*
==============
CG_LatencyTestMP_LoS_CalcStats
==============
*/

void __fastcall CG_LatencyTestMP_LoS_CalcStats(LocalClientNum_t localClientNum, double _XMM1_8)
{
  const cg_t *LocalClientGlobals; 
  int v4; 
  CgLatencyTestLosTestData *p_defense; 
  int v6; 
  __int64 v7; 
  CgLatencyTestLosTestSample (*samples)[64]; 
  int sampleCount; 
  int v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int *v16; 
  int clientTime; 
  int v18; 
  int v19; 
  bool v20; 
  int v21; 
  int v22; 
  __int64 v23; 
  CgLatencyTestLosTestSample *v24; 
  int v25; 
  int v30; 
  const cg_t *v31; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v31 = LocalClientGlobals;
  v4 = 0;
  v30 = 0;
  do
  {
    p_defense = &s_losTest.defense;
    if ( !v4 )
      p_defense = &s_losTest.offense;
    v6 = 0;
    if ( cls.maxClients > 0 )
    {
      v7 = 0i64;
      samples = p_defense->samples;
      _RBX = &p_defense->results[0].maxTime;
      do
      {
        if ( v6 != s_losTest.testingClientNum )
        {
          if ( CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v6) )
          {
            sampleCount = p_defense->sampleCount;
            v11 = 0;
            v12 = 0;
            *(_QWORD *)(_RBX - 1) = 0x7FFFFFFFi64;
            v13 = 0;
            *(_RBX - 4) = 0;
            v14 = 0i64;
            v15 = 64;
            if ( sampleCount < 64 )
              v15 = sampleCount;
            if ( v15 > 0 )
            {
              v16 = (int *)samples;
              do
              {
                clientTime = p_defense->samples[(__int64)s_losTest.testingClientNum][v14].clientTime;
                if ( clientTime > 0 && *v16 > 0 )
                {
                  v11 += v16[1];
                  v18 = *v16 - clientTime;
                  v13 += v18;
                  v19 = v18;
                  if ( *_RBX > v18 )
                    v19 = *_RBX;
                  v20 = *(_RBX - 1) < v18;
                  *_RBX = v19;
                  if ( v20 )
                    v18 = *(_RBX - 1);
                  ++*(_RBX - 4);
                  *(_RBX - 1) = v18;
                }
                ++v14;
                v16 += 2;
              }
              while ( v14 < v15 );
              v21 = *(_RBX - 4);
              if ( v21 )
              {
                *(_RBX - 2) = v13 / v21;
                v22 = v13 / v21;
                v23 = 0i64;
                *(_RBX - 3) = v11 / v21;
                v24 = p_defense->samples[(__int64)s_losTest.testingClientNum];
                do
                {
                  if ( v24->clientTime > 0 )
                  {
                    v25 = p_defense->samples[v7][v23].clientTime;
                    if ( v25 > 0 )
                      v12 += (v25 - v24->clientTime - v22) * (v25 - v24->clientTime - v22);
                  }
                  ++v23;
                  ++v24;
                }
                while ( v23 < v15 );
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, ebp
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, r14d
                  vdivss  xmm1, xmm1, xmm0
                  vsqrtss xmm2, xmm1, xmm1
                  vmovss  dword ptr [rbx+4], xmm2
                }
              }
            }
          }
          LocalClientGlobals = v31;
        }
        ++v6;
        _RBX += 6;
        ++samples;
        ++v7;
      }
      while ( v6 < cls.maxClients );
      v4 = v30;
    }
    v30 = ++v4;
  }
  while ( v4 < 2 );
}

/*
==============
CG_LatencyTestMP_LoS_DrawResults
==============
*/
void CG_LatencyTestMP_LoS_DrawResults(LocalClientNum_t localClientNum)
{
  unsigned int testingClientNum; 
  unsigned int maxClients; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  unsigned __int8 v22; 
  GfxFont *v23; 
  CgLatencyTestLosTestData *p_defense; 
  int sampleCount; 
  const char *v30; 
  unsigned int v36; 
  int v37; 
  int *p_avgTime; 
  __int64 v39; 
  __int64 v40; 
  int clientNum; 
  __int64 v42; 
  int clientTime; 
  int v44; 
  float fmtb; 
  char *fmt; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  char *fmta; 
  float fmtf; 
  float fmtg; 
  __int64 horzAlign; 
  int horzAlignb; 
  int horzAlignc; 
  __int64 horzAligna; 
  int horzAlignd; 
  __int64 vertAlign; 
  __int64 vertAligna; 
  float s1a; 
  float s1b; 
  __int64 s1; 
  float s1c; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  int style; 
  int stylea; 
  int styleb; 
  char v88; 
  GfxFont *font; 
  vec4_t color; 
  vec4_t v91; 
  char dest[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  testingClientNum = s_losTest.testingClientNum;
  if ( s_losTest.testingClientNum >= 0 )
  {
    maxClients = cls.maxClients;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovaps xmmword ptr [r11-78h], xmm10
      vmovaps xmmword ptr [r11-88h], xmm11
      vmovaps xmmword ptr [r11-98h], xmm12
    }
    if ( testingClientNum >= maxClients )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1981, ASSERT_TYPE_ASSERT, "(unsigned)( s_losTest.testingClientNum ) < (unsigned)( cls.maxClients )", "s_losTest.testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", testingClientNum, maxClients) )
        __debugbreak();
      maxClients = cls.maxClients;
    }
    if ( s_losTest.targetClientNum >= maxClients )
    {
      LODWORD(vertAlign) = maxClients;
      LODWORD(horzAlign) = s_losTest.targetClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1982, ASSERT_TYPE_ASSERT, "(unsigned)( s_losTest.targetClientNum ) < (unsigned)( cls.maxClients )", "s_losTest.targetClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", horzAlign, vertAlign) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, cs:__real@41f00000 }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    __asm { vmovss  xmm2, cs:__real@3f000000; scale }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    UI_GetFontHandle(ActivePlacement, 5, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm11, cs:__real@3e4ccccd
      vmovaps xmm2, xmm11; scale
      vmovss  xmm8, cs:__real@3f800000
      vmovss  xmm7, cs:__real@41200000
      vmovss  xmm12, cs:__real@43520000
      vmovss  xmm10, cs:__real@41a00000
    }
    v22 = 0;
    font = UI_GetFontHandle(ActivePlacement, 5, *(float *)&_XMM2);
    v23 = font;
    v88 = 0;
    __asm { vxorps  xmm9, xmm9, xmm9 }
    do
    {
      p_defense = &s_losTest.defense;
      sampleCount = 64;
      if ( !v22 )
        p_defense = &s_losTest.offense;
      if ( p_defense->sampleCount < 64 )
        sampleCount = p_defense->sampleCount;
      if ( sampleCount > 0 )
      {
        __asm
        {
          vmovss  [rsp+188h+style], xmm8
          vmovss  dword ptr [rsp+188h+var_140], xmm8
          vmovss  [rsp+188h+var_148], xmm9
          vmovss  [rsp+188h+s1], xmm9
          vmovaps xmm3, xmm12; w
          vmovaps xmm2, xmm6; y
          vmovaps xmm1, xmm10; x
          vmovss  dword ptr [rsp+188h+fmt], xmm7
        }
        CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, 4, 4, s1a, v76, v82, *(float *)&style, &colorWhite, cgMedia.whiteMaterial);
        LODWORD(fmt) = sampleCount;
        v30 = "DEFENSE";
        if ( !v22 )
          v30 = "OFFENSE";
        __asm { vaddss  xmm6, xmm6, xmm7 }
        Com_sprintf(dest, 0x40ui64, " LATENCY TEST LoS %s  Samples: %i", v30, fmt);
        __asm
        {
          vmovss  [rsp+188h+var_148], xmm11
          vmovss  dword ptr [rsp+188h+horzAlign], xmm6
          vmovss  dword ptr [rsp+188h+fmt], xmm10
        }
        UI_DrawText(ActivePlacement, dest, 64, v23, fmtc, *(float *)&horzAlignb, 4, 4, v77, &colorBlack, 3);
        __asm
        {
          vmovss  [rsp+188h+style], xmm8
          vmovss  dword ptr [rsp+188h+var_140], xmm8
          vmovss  [rsp+188h+var_148], xmm9
          vmovss  [rsp+188h+s1], xmm9
          vmovaps xmm3, xmm12; w
          vmovaps xmm2, xmm6; y
          vmovaps xmm1, xmm10; x
          vmovss  dword ptr [rsp+188h+fmt], xmm7
        }
        CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, 4, 4, s1b, v78, v83, *(float *)&stylea, &colorBlack, cgMedia.whiteMaterial);
        __asm { vaddss  xmm6, xmm6, xmm7 }
        Com_sprintf(dest, 0x40ui64, " CL | PING |  TIME | DELTA |  AVG");
        __asm
        {
          vmovss  [rsp+188h+var_148], xmm11
          vmovss  dword ptr [rsp+188h+horzAlign], xmm6
          vmovss  dword ptr [rsp+188h+fmt], xmm10
        }
        UI_DrawText(ActivePlacement, dest, 64, v23, fmte, *(float *)&horzAlignc, 4, 4, v79, &colorWhite, 3);
        v36 = 0;
        v37 = p_defense->sampleCount - 1;
        if ( cls.maxClients > 0 )
        {
          p_avgTime = &p_defense->results[0].avgTime;
          v39 = v37 & 0x3F;
          v40 = 0i64;
          do
          {
            if ( CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v36) )
            {
              clientNum = LocalClientGlobals->clientNum;
              if ( clientNum == s_losTest.testingClientNum || clientNum == v36 )
              {
                v42 = v39 + v40;
                if ( clientNum != s_losTest.testingClientNum || v36 == s_losTest.testingClientNum )
                {
                  LODWORD(horzAligna) = p_defense->samples[0][v42].clientTime % 100000;
                  LODWORD(fmta) = p_defense->samples[0][v42].ping;
                  Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i |       |", v36, fmta, horzAligna);
                }
                else
                {
                  clientTime = p_defense->samples[0][v42].clientTime;
                  if ( clientTime > 0 )
                  {
                    v44 = p_defense->samples[(__int64)s_losTest.testingClientNum][v39].clientTime;
                    if ( v44 > 0 )
                    {
                      LODWORD(s1) = *p_avgTime;
                      LODWORD(vertAligna) = clientTime - v44;
                      LODWORD(horzAligna) = clientTime % 100000;
                      LODWORD(fmta) = p_defense->samples[0][v42].ping;
                      Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i | %5i | %4i", v36, fmta, horzAligna, vertAligna, s1);
                    }
                    else
                    {
                      LODWORD(vertAligna) = *p_avgTime;
                      LODWORD(horzAligna) = clientTime % 100000;
                      LODWORD(fmta) = p_defense->samples[0][v42].ping;
                      Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i |   ... | %4i", v36, fmta, horzAligna, vertAligna);
                    }
                  }
                  else
                  {
                    LODWORD(fmta) = *p_avgTime;
                    Com_sprintf(dest, 0x40ui64, " %2i |  ... |   ... |   ... | %4i", v36, fmta);
                  }
                }
                if ( (v37 & 1) != 0 )
                {
                  __asm
                  {
                    vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
                    vmovups xmm1, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
                  }
                }
                else
                {
                  __asm
                  {
                    vmovups xmm0, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
                    vmovups xmm1, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
                  }
                }
                __asm
                {
                  vmovss  [rsp+188h+style], xmm8
                  vmovss  dword ptr [rsp+188h+var_140], xmm8
                  vmovss  [rsp+188h+var_148], xmm9
                  vmovss  [rsp+188h+s1], xmm9
                  vmovups xmmword ptr [rsp+188h+var_F8], xmm1
                  vmovaps xmm3, xmm12; w
                  vmovaps xmm2, xmm6; y
                  vmovaps xmm1, xmm10; x
                  vmovss  dword ptr [rsp+188h+fmt], xmm7
                  vmovups xmmword ptr [rsp+188h+var_108], xmm0
                }
                CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, 4, 4, s1c, v80, v84, *(float *)&styleb, &color, cgMedia.whiteMaterial);
                __asm
                {
                  vmovss  [rsp+188h+var_148], xmm11
                  vaddss  xmm6, xmm6, xmm7
                  vmovss  dword ptr [rsp+188h+horzAlign], xmm6
                  vmovss  dword ptr [rsp+188h+fmt], xmm10
                }
                UI_DrawText(ActivePlacement, dest, 64, font, fmtg, *(float *)&horzAlignd, 4, 4, v81, &v91, 3);
              }
            }
            ++v36;
            v40 += 64i64;
            p_avgTime += 6;
          }
          while ( (int)v36 < cls.maxClients );
          v22 = v88;
          v23 = font;
        }
        __asm { vaddss  xmm6, xmm6, xmm7 }
      }
      v88 = ++v22;
    }
    while ( v22 < 2u );
    __asm
    {
      vmovaps xmm12, [rsp+188h+var_98]
      vmovaps xmm11, [rsp+188h+var_88]
      vmovaps xmm10, [rsp+188h+var_78]
      vmovaps xmm9, [rsp+188h+var_68]
      vmovaps xmm8, [rsp+188h+var_58]
      vmovaps xmm7, [rsp+188h+var_48]
      vmovaps xmm6, [rsp+188h+var_38]
    }
  }
}

/*
==============
CG_LatencyTestMP_LoS_GetHeadPosition
==============
*/
bool CG_LatencyTestMP_LoS_GetHeadPosition(LocalClientNum_t localClientNum, int clientNum, vec3_t *outPosition)
{
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  const DObj *ClientDObj; 
  tmat33_t<vec3_t> outTagMat; 

  Entity = CG_GetEntity(localClientNum, clientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->clientNum == clientNum )
  {
    CG_GetPlayerViewOrigin(localClientNum, &LocalClientGlobals->predictedPlayerState, outPosition);
    LOBYTE(ClientDObj) = 1;
  }
  else
  {
    ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
    if ( ClientDObj )
      LOBYTE(ClientDObj) = CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.j_head, &outTagMat, outPosition) != 0;
  }
  return (char)ClientDObj;
}

/*
==============
CG_LatencyTestMP_LoS_Move
==============
*/
void CG_LatencyTestMP_LoS_Move(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  cg_t *LocalClientGlobals; 
  int clientNum; 
  int time; 
  int v6; 
  unsigned __int64 buttons; 
  unsigned __int64 v8; 
  int v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  clientNum = LocalClientGlobals->clientNum;
  if ( s_losTest.testingClientNum == clientNum || s_losTest.targetClientNum == clientNum )
  {
    time = LocalClientGlobals->time;
    v6 = 0;
    if ( time - s_losTest.startTime > 0 )
      v6 = time - s_losTest.startTime;
    if ( s_losTest.endTime <= 0 || time - s_losTest.endTime <= 1000 )
    {
      switch ( s_losTest.testMode[0] )
      {
        case 1:
          if ( s_losTest.testingClientNum == clientNum && v6 % 4000 > 2000 )
            cmd->buttons |= 0x100ui64;
          return;
        case 2:
          if ( s_losTest.testingClientNum != clientNum )
            return;
          buttons = cmd->buttons;
          if ( v6 % 4000 > 2000 )
          {
            cmd->buttons = buttons & 0xFFFFFFFFFFFFFF3Fui64 | 0x80;
            return;
          }
LABEL_26:
          cmd->buttons = buttons & 0xFFFFFFFFFFFFFF3Fui64;
          return;
        case 3:
          if ( s_losTest.testingClientNum == clientNum )
          {
            v8 = cmd->buttons & 0xFFFFFFFFFFFFFF3Fui64 | 0x80;
            if ( v6 % 4000 > 2000 )
              v8 = cmd->buttons & 0xFFFFFFFFFFFFFF3Fui64 | 0x40;
            cmd->buttons = v8;
          }
          else if ( s_losTest.targetClientNum == clientNum )
          {
            cmd->buttons = cmd->buttons & 0xFFFFFFFFFFFFFF3Fui64 | 0x80;
          }
          return;
        case 4:
          if ( s_losTest.testingClientNum != clientNum )
            return;
          buttons = cmd->buttons;
          if ( v6 % 4000 > 2000 )
          {
            cmd->buttons = buttons & 0xFFFFFFFFFFFFFF3Fui64 | 0x40;
            return;
          }
          goto LABEL_26;
        case 5:
          if ( s_losTest.testingClientNum != clientNum )
            return;
          if ( v6 % 5500 > 2750 )
          {
            cmd->rightmove = CL_Input_ClampInputChar(127);
            return;
          }
          break;
        default:
          if ( s_losTest.testMode[0] != 6 || s_losTest.testingClientNum != clientNum )
            return;
          cmd->buttons |= 0x200ui64;
          v9 = 127;
          if ( v6 % 6500 > 3250 )
          {
LABEL_35:
            cmd->rightmove = CL_Input_ClampInputChar(v9);
            return;
          }
          break;
      }
      v9 = -127;
      goto LABEL_35;
    }
  }
}

/*
==============
CG_LatencyTestMP_LoS_PrintResult_f
==============
*/
void CG_LatencyTestMP_LoS_PrintResult_f()
{
  LocalClientNum_t v0; 
  const cg_t *LocalClientGlobals; 
  int i; 
  const char *v3; 
  CgLatencyTestLosTestData *p_defense; 
  int v5; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  double v13; 
  __int64 v14; 

  v0 = Cmd_LocalClientNum();
  LocalClientGlobals = CG_GetLocalClientGlobals(v0);
  Com_Printf(31, "=========================\n");
  Com_Printf(31, "Latency Test LoS\n");
  Com_Printf(31, "testMode,%u\n", (unsigned __int8)s_losTest.testMode[0]);
  Com_Printf(31, "desiredSampleCount,%i\n", (unsigned int)s_losTest.desiredSampleCount);
  Com_Printf(31, "testingClientNum,%i\n", (unsigned int)s_losTest.testingClientNum);
  Com_Printf(31, "targetClientNum,%i\n", (unsigned int)s_losTest.targetClientNum);
  for ( i = 0; i < 2; ++i )
  {
    v3 = "defense";
    p_defense = &s_losTest.defense;
    if ( !i )
      v3 = "offense";
    if ( !i )
      p_defense = &s_losTest.offense;
    Com_Printf(31, "%sHeaders,ClientNum,Ping,Max,Avg,Min,StdDev,SampleCount\n", v3);
    v5 = 0;
    if ( cls.maxClients > 0 )
    {
      _RDI = &p_defense->results[0].minTime;
      do
      {
        if ( v5 != s_losTest.testingClientNum && CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v5) )
        {
          __asm { vmovss  xmm0, dword ptr [rdi+8] }
          LODWORD(v14) = p_defense->sampleCount;
          __asm
          {
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+78h+var_38], xmm0
          }
          LODWORD(v12) = *_RDI;
          LODWORD(v11) = *(_RDI - 1);
          LODWORD(v10) = _RDI[1];
          LODWORD(v9) = *(_RDI - 2);
          Com_Printf(31, "%sData,%i,%i,%i,%i,%i,%f,%i\n", v3, (unsigned int)v5, v9, v10, v11, v12, v13, v14);
        }
        ++v5;
        _RDI += 6;
      }
      while ( v5 < cls.maxClients );
    }
  }
  Com_Printf(31, "=========================\n");
}

/*
==============
CG_LatencyTestMP_LoS_RecordSample
==============
*/
void CG_LatencyTestMP_LoS_RecordSample(LocalClientNum_t localClientNum, int observerClientNum, int clientTime, bool hasLoS, int ping)
{
  double v5; 
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  ClActiveClientMP *ClientMP; 
  CgLatencyTestLosTestData *p_defense; 
  int sampleCount; 
  __int64 v14; 
  CgLatencyTestLosTestSample *v15; 
  int i; 
  __int64 v17; 
  const char *v18; 

  v7 = observerClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  p_defense = &s_losTest.defense;
  if ( hasLoS )
    p_defense = &s_losTest.offense;
  sampleCount = p_defense->sampleCount;
  v14 = p_defense->sampleCount & 0x3F;
  v15 = &p_defense->samples[v7][((unsigned __int8)p_defense->sampleCount - 1) & 0x3F];
  if ( clientTime >= s_losTest.startTime + 1000 )
  {
    if ( sampleCount <= 0 || v15->clientTime )
    {
      for ( i = 0; i < cls.maxClients; p_defense->samples[0][v14 + v17] = 0i64 )
        v17 = (__int64)i++ << 6;
      p_defense->samples[v7][v14].ping = ping;
      p_defense->samples[v7][v14].clientTime = clientTime;
      ++p_defense->sampleCount;
    }
    else
    {
      p_defense->samples[v7][((_BYTE)sampleCount - 1) & 0x3F].ping = ping;
      v15->clientTime = clientTime;
    }
    if ( LocalClientGlobals->clientNum == s_losTest.testingClientNum )
    {
      CG_LatencyTestMP_LoS_CalcStats(localClientNum, v5);
    }
    else
    {
      v18 = j_va("latencyTest los sample %i %i %i", (unsigned int)ClientMP->serverTime, hasLoS, (unsigned int)ClientMP->snap.ping);
      CL_Main_AddReliableCommand(localClientNum, v18);
    }
  }
}

/*
==============
CG_LatencyTestMP_LoS_Start_f
==============
*/
void CG_LatencyTestMP_LoS_Start_f()
{
  const char *v0; 
  unsigned int v1; 
  LocalClientNum_t v2; 
  cg_t *LocalClientGlobals; 
  unsigned __int8 v4; 
  const char *v5; 
  unsigned int v6; 
  const char *v7; 
  LocalClientNum_t v8; 
  LocalClientNum_t v9; 
  cg_t *v10; 
  centity_t *Entity; 
  ClActiveClientMP *ClientMP; 
  const char *v13; 
  unsigned int v14; 
  int v15; 

  if ( Cmd_Argc() >= 2 )
  {
    v0 = Cmd_Argv(1);
    v1 = atoi(v0);
    v2 = Cmd_LocalClientNum();
    LocalClientGlobals = CG_GetLocalClientGlobals(v2);
    if ( v1 == LocalClientGlobals->clientNum )
    {
      Com_Printf(0, "Target clientNum cannot be the local client.\n");
    }
    else if ( CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v1) )
    {
      v4 = 0;
      if ( Cmd_Argc() > 2 )
      {
        v5 = Cmd_Argv(2);
        v4 = atoi(v5);
      }
      v6 = 0;
      if ( Cmd_Argc() > 3 )
      {
        v7 = Cmd_Argv(3);
        v6 = atoi(v7);
      }
      v8 = Cmd_LocalClientNum();
      v9 = v8;
      if ( s_losTest.testingClientNum == -1 )
      {
        v10 = CG_GetLocalClientGlobals(v8);
        Entity = CG_GetEntity(v9, v10->clientNum);
        ClientMP = ClActiveClientMP::GetClientMP(v9);
        if ( v1 >= 0x40 )
        {
          v15 = 64;
          v14 = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1544, ASSERT_TYPE_ASSERT, "(unsigned)( targetClientNum ) < (unsigned)( 64 )", "targetClientNum doesn't index LATENCY_TEST_SAMPLES\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( v1 == v10->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1545, ASSERT_TYPE_ASSERT, "(targetClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "targetClientNum != cgameGlob->clientNum") )
          __debugbreak();
        if ( Entity )
        {
          memset_0(&s_losTest, 0, sizeof(s_losTest));
          s_losTest.testingClientNum = v10->clientNum;
          s_losTest.targetClientNum = v1;
          s_losTest.testMode[0] = v4;
          s_losTest.desiredSampleCount = v6;
          s_losTest.startTime = ClientMP->serverTime;
          s_losTest.hasLoS = 1;
          v13 = j_va("latencyTest los start %i %u %i", v1, v4, v6);
          CL_Main_AddReliableCommand(v9, v13);
          Com_Printf(31, "LoS Test Started (Master)\n");
        }
      }
      else
      {
        CG_LatencyTestMP_LoS_Stop(v8);
      }
    }
    else
    {
      Com_Printf(0, "Target clientNum cannot be an inactive client.\n");
    }
  }
  else
  {
    Com_Printf(0, "Must specify the target clientNum.\n");
  }
}

/*
==============
CG_LatencyTestMP_LoS_Stop
==============
*/
void CG_LatencyTestMP_LoS_Stop(LocalClientNum_t localClientNum)
{
  const char *v2; 

  if ( s_losTest.testingClientNum == CG_GetLocalClientGlobals(localClientNum)->clientNum )
  {
    v2 = j_va("latencyTest los stop");
    CL_Main_AddReliableCommand(localClientNum, v2);
  }
  memset_0(&s_losTest, 0, sizeof(s_losTest));
  s_losTest.hasLoS = 1;
  *(_QWORD *)&s_losTest.testingClientNum = -1i64;
  Com_Printf(31, "LoS Test Stopped\n");
}

/*
==============
CG_LatencyTestMP_LoS_Stop_f
==============
*/
void CG_LatencyTestMP_LoS_Stop_f()
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  CG_LatencyTestMP_LoS_Stop(v0);
}

/*
==============
CG_LatencyTestMP_LoS_Update
==============
*/
void CG_LatencyTestMP_LoS_Update(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int maxClients; 
  const dvar_t *v5; 
  bool HeadPosition; 
  bool v8; 
  ClActiveClientMP *ClientMP; 
  __int64 fromServer; 
  int fromServera; 
  __int64 v14; 
  int v15; 
  Physics_RaycastExtendedData extendedData; 
  vec3_t end; 
  vec3_t outPosition; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( s_losTest.testingClientNum >= 0 )
  {
    maxClients = cls.maxClients;
    if ( s_losTest.testingClientNum >= (unsigned int)cls.maxClients )
    {
      v15 = cls.maxClients;
      fromServera = s_losTest.testingClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1764, ASSERT_TYPE_ASSERT, "(unsigned)( s_losTest.testingClientNum ) < (unsigned)( cls.maxClients )", "s_losTest.testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", fromServera, v15) )
        __debugbreak();
      maxClients = cls.maxClients;
    }
    if ( s_losTest.targetClientNum >= maxClients )
    {
      LODWORD(v14) = maxClients;
      LODWORD(fromServer) = s_losTest.targetClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1765, ASSERT_TYPE_ASSERT, "(unsigned)( s_losTest.targetClientNum ) < (unsigned)( cls.maxClients )", "s_losTest.targetClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", fromServer, v14) )
        __debugbreak();
    }
    if ( s_losTest.testingClientNum == LocalClientGlobals->clientNum && s_losTest.desiredSampleCount > 0 && s_losTest.defense.sampleCount >= s_losTest.desiredSampleCount && s_losTest.offense.sampleCount >= s_losTest.desiredSampleCount )
    {
      if ( !s_losTest.endTime )
        s_losTest.endTime = LocalClientGlobals->time;
    }
    else
    {
      v5 = DVARBOOL_physics_allowQueryDisabling;
      if ( !DVARBOOL_physics_allowQueryDisabling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_allowQueryDisabling") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.enabled )
      {
        HeadPosition = CG_LatencyTestMP_LoS_GetHeadPosition(localClientNum, s_losTest.testingClientNum, &outPosition);
        if ( HeadPosition | CG_LatencyTestMP_LoS_GetHeadPosition(localClientNum, s_losTest.targetClientNum, &end) )
        {
          __asm { vxorps  xmm0, xmm0, xmm0 }
          extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          extendedData.ignoreBodies = NULL;
          extendedData.phaseSelection = All;
          __asm { vmovss  [rsp+98h+extendedData.collisionBuffer], xmm0 }
          extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
          *(_WORD *)&extendedData.collectInsideHits = 256;
          extendedData.contents = 6145;
          v8 = PhysicsQuery_ImmediateRaycastSightCheck(PHYSICS_WORLD_ID_CLIENT_FIRST, &outPosition, &end, &extendedData);
          if ( v8 && Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawLatencyTest, "cg_drawLatencyTest") )
          {
            __asm { vmovss  xmm1, cs:__real@3f400000; radius }
            CG_DebugSphere(&outPosition, *(float *)&_XMM1, &colorMagenta, 0, 0);
            __asm { vmovss  xmm1, cs:__real@3f400000; radius }
            CG_DebugSphere(&end, *(float *)&_XMM1, &colorMagenta, 0, 0);
            CL_AddDebugLine(&outPosition, &end, &colorYellow, 0, 0, 0);
          }
          if ( v8 != s_losTest.hasLoS )
          {
            Com_Printf(31, "%i Line of sight change: hasLoS=%i\n", (unsigned int)LocalClientGlobals->time, v8);
            s_losTest.hasLoS = v8;
            ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
            CG_LatencyTestMP_LoS_RecordSample(localClientNum, LocalClientGlobals->clientNum, LocalClientGlobals->time, v8, ClientMP->snap.ping);
          }
        }
      }
    }
  }
}

/*
==============
CG_LatencyTestMP_Move
==============
*/
void CG_LatencyTestMP_Move(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v5; 
  cg_t *v6; 
  const dvar_t *v7; 
  int time; 
  cg_t *v9; 
  const dvar_t *v10; 
  cg_t *v11; 
  cg_t *v12; 
  int v13; 
  int v14; 
  unsigned __int64 buttons; 
  ClActiveClientMP *ClientMP; 
  const char *v17; 
  int actionTime; 
  ClActiveClientMP *v19; 

  if ( s_dropShotTest.testingClientNum >= 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( s_dropShotTest.testingClientNum == LocalClientGlobals->clientNum && s_dropShotTest.shootTime > 0 )
    {
      v5 = DVARINT_cg_dropShotTestShootingDuration;
      if ( !DVARINT_cg_dropShotTestShootingDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dropShotTestShootingDuration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( LocalClientGlobals->time <= s_dropShotTest.shootTime + v5->current.integer )
        cmd->buttons |= 1ui64;
    }
  }
  CG_LatencyTestMP_LoS_Move(localClientNum, cmd);
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 2298, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( s_shootFirstTest.testingClientNum >= 0 )
  {
    v6 = CG_GetLocalClientGlobals(localClientNum);
    if ( s_shootFirstTest.testingClientNum != v6->clientNum && s_shootFirstTest.shootTime > 0 )
    {
      v7 = DVARINT_cg_shootFirstTestShootingDuration;
      if ( !DVARINT_cg_shootFirstTestShootingDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_shootFirstTestShootingDuration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      time = v6->time;
      if ( time <= s_shootFirstTest.shootTime + v7->current.integer && time >= s_shootFirstTest.shootTime )
        cmd->buttons |= 1ui64;
    }
    if ( s_shootFirstTest.testingClientNum >= 0 )
    {
      v9 = CG_GetLocalClientGlobals(localClientNum);
      if ( s_shootFirstTest.testingClientNum != v9->clientNum && s_shootFirstTest.shootTime > 0 )
      {
        v10 = DVARINT_cg_shootFirstTestShootingDuration;
        if ( !DVARINT_cg_shootFirstTestShootingDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_shootFirstTestShootingDuration") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        if ( v9->time <= s_shootFirstTest.shootTime + v10->current.integer )
          cmd->buttons |= 0x200ui64;
      }
    }
  }
  v11 = CG_GetLocalClientGlobals(localClientNum);
  v12 = v11;
  if ( s_baseLagTest.testingClientNum == v11->clientNum )
  {
    v13 = v11->time;
    v14 = 0;
    if ( v13 - s_baseLagTest.startTime > 0 )
      v14 = v13 - s_baseLagTest.startTime;
    if ( s_baseLagTest.endTime <= 0 || v13 - s_baseLagTest.endTime <= 1000 )
    {
      if ( !s_baseLagTest.testMode[0] )
      {
        buttons = cmd->buttons;
        if ( v14 % 4000 <= 2000 )
        {
          cmd->buttons = buttons & 0xFFFFFFFFFFFFFF3Fui64;
          s_baseLagTest.lastActionState = 0;
          return;
        }
        cmd->buttons = buttons & 0xFFFFFFFFFFFFFF3Fui64 | 0x80;
        if ( s_baseLagTest.lastActionState )
          return;
        s_baseLagTest.lastActionState = 1;
        ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
        v17 = "Crouch time=%i entity=%i\n";
LABEL_48:
        v19 = ClientMP;
        Com_Printf(31, v17, (unsigned int)v12->time, (unsigned int)v12->clientNum);
        CG_LatencyTestMP_BaseLag_RecordSample(localClientNum, v12->clientNum, (unsigned int)v12->time, v19->snap.ping);
        return;
      }
      if ( s_baseLagTest.testMode[0] != 1 )
        return;
      actionTime = s_baseLagTest.actionTime;
      if ( v14 - s_baseLagTest.actionTime - 4000 > 0 )
      {
        if ( v14 >= 4000 )
          actionTime = v14;
        s_baseLagTest.actionTime = actionTime;
      }
      if ( actionTime > 0 && actionTime + 100 > v14 )
      {
        cmd->buttons |= 1ui64;
        if ( s_baseLagTest.lastActionState )
          return;
        s_baseLagTest.lastActionState = 1;
        ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
        v17 = "Fire time=%i entity=%i\n";
        goto LABEL_48;
      }
      cmd->buttons &= ~1ui64;
      s_baseLagTest.lastActionState = 0;
    }
  }
}

/*
==============
CG_LatencyTestMP_Obituary
==============
*/
void CG_LatencyTestMP_Obituary(LocalClientNum_t localClientNum, int target)
{
  cg_t *LocalClientGlobals; 
  ClActiveClientMP *ClientMP; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int *v9; 
  int serverTime; 
  int sampleCount; 
  int v12; 
  const char *v13; 
  cg_t *v14; 
  int v15; 
  __int64 v16; 
  int clientNum; 
  __int64 v18; 
  int maxClients; 

  if ( s_ttkTest.testingClientNum != -1 && s_ttkTest.sampleCount > 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    if ( !CG_View_IsKillCamView(localClientNum) )
    {
      v6 = (LOBYTE(s_ttkTest.sampleCount) - 1) & 0x3F;
      if ( LocalClientGlobals->clientNum >= (unsigned int)cls.maxClients )
      {
        maxClients = cls.maxClients;
        clientNum = LocalClientGlobals->clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1006, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->clientNum ) < (unsigned)( cls.maxClients )", "cgameGlob->clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
          __debugbreak();
      }
      v7 = LocalClientGlobals->clientNum;
      v8 = v6 + ((__int64)LocalClientGlobals->clientNum << 6);
      v9 = (unsigned int *)((char *)s_ttkTest.samples + 12 * v8);
      if ( !s_ttkTest.samples[0][v8].deathTime )
      {
        serverTime = ClientMP->serverTime;
        sampleCount = 64;
        v9[1] = serverTime;
        if ( s_ttkTest.sampleCount < 64 )
          sampleCount = s_ttkTest.sampleCount;
        v12 = serverTime + s_ttkTest.results[v7].sumTTK - *v9;
        s_ttkTest.results[v7].sumTTK = v12;
        s_ttkTest.results[v7].avgTTK = v12 / sampleCount;
        if ( LocalClientGlobals->clientNum != s_ttkTest.testingClientNum )
        {
          v13 = j_va("latencyTest ttk sample %i %i %i", *v9, v9[1], v9[2]);
          CL_Main_AddReliableCommand(localClientNum, v13);
        }
      }
    }
  }
  if ( s_shootFirstTest.testingClientNum != -1 )
  {
    v14 = CG_GetLocalClientGlobals(localClientNum);
    if ( target == v14->clientNum && !CG_View_IsKillCamView(localClientNum) && s_shootFirstTest.sampleCount > 0 )
    {
      Com_Printf(31, "Shoot First Test: Record Death time=%i\n", (unsigned int)v14->time);
      v15 = (LOBYTE(s_shootFirstTest.sampleCount) - 1) & 0x3F;
      if ( v14->clientNum >= (unsigned int)cls.maxClients )
      {
        LODWORD(v18) = cls.maxClients;
        LODWORD(v16) = v14->clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 2497, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->clientNum ) < (unsigned)( cls.maxClients )", "cgameGlob->clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v16, v18) )
          __debugbreak();
      }
      s_shootFirstTest.samples[v15].deathTime = ClActiveClientMP::GetClientMP(localClientNum)->serverTime;
    }
  }
}

/*
==============
CG_LatencyTestMP_ProcessPlayerEntity
==============
*/
void CG_LatencyTestMP_ProcessPlayerEntity(LocalClientNum_t localClientNum, const centity_t *cent)
{
  bool v4; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v6; 
  int integer; 
  __int64 v8; 
  bool v9; 
  unsigned int v10; 
  cg_t *v11; 
  ClActiveClientMP *ClientMP; 
  char *fmt; 
  __int64 v14; 

  CG_LatencyTestMP_DropShotTest_ProcessPlayerEntity(localClientNum, cent);
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 2455, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v4 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xAu);
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 0xAu) != v4 && s_shootFirstTest.testingClientNum >= 0 && !CG_View_IsKillCamView(localClientNum) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( LocalClientGlobals->time > s_shootFirstTest.shootTime + 5000 )
    {
      v6 = DVARINT_cg_shootFirstTestReactionTime;
      if ( !DVARINT_cg_shootFirstTestReactionTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_shootFirstTestReactionTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      integer = v6->current.integer;
      s_shootFirstTest.shootTime = integer + LocalClientGlobals->time;
      LODWORD(v14) = s_shootFirstTest.shootTime;
      LODWORD(fmt) = integer;
      Com_Printf(31, "Shoot First Test: Signal Shoot clientNum=%i time=%i reactionTime=%i shootTime=%i\n", (unsigned int)LocalClientGlobals->clientNum, (unsigned int)LocalClientGlobals->time, fmt, v14);
      v8 = s_shootFirstTest.sampleCount & 0x3F;
      s_shootFirstTest.samples[v8].ping = LocalClientGlobals->nextSnap->GetServerPing((snapshot_t *)LocalClientGlobals->nextSnap);
      ++s_shootFirstTest.sampleCount;
    }
  }
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 2864, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( s_baseLagTest.testingClientNum >= 0 && s_baseLagTest.testingClientNum == cent->nextState.clientNum )
  {
    v9 = 0;
    if ( s_baseLagTest.testMode[0] )
    {
      if ( s_baseLagTest.testMode[0] != 1 )
        goto LABEL_22;
      v10 = 10;
    }
    else
    {
      v10 = 3;
    }
    v9 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, v10);
LABEL_22:
    if ( v9 != s_baseLagTest.lastActionState )
    {
      s_baseLagTest.lastActionState = v9;
      if ( v9 )
      {
        v11 = CG_GetLocalClientGlobals(localClientNum);
        ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
        Com_Printf(31, "Action time=%i entity=%i\n", (unsigned int)v11->time, (unsigned int)cent->nextState.number);
        CG_LatencyTestMP_BaseLag_RecordSample(localClientNum, v11->clientNum, (unsigned int)v11->time, ClientMP->snap.ping);
      }
    }
  }
}

/*
==============
CG_LatencyTestMP_ShootFirstTest_DrawResults
==============
*/
void CG_LatencyTestMP_ShootFirstTest_DrawResults(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v8; 
  GfxFont *FontHandle; 
  GfxFont *v15; 
  __int64 sampleCount; 
  CgLatencyTestShootFirstTestSample *v29; 
  float h; 
  float ha; 
  float hb; 
  float hc; 
  __int64 hd; 
  float he; 
  float hf; 
  int horzAlign; 
  int horzAligna; 
  __int64 horzAlignb; 
  int horzAlignc; 
  __int64 vertAlign; 
  float s1; 
  float s1a; 
  __int64 s1b; 
  float s1c; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  int style; 
  int stylea; 
  int styleb; 
  vec4_t color; 
  vec4_t v71; 
  char dest[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovss  xmm6, cs:BOX_TOP_2
  }
  if ( s_shootFirstTest.sampleCount > 0 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-28h], xmm7
      vmovaps xmmword ptr [r11-38h], xmm8
    }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    __asm { vmovss  xmm2, cs:FONT_SCALE_3; scale }
    v8 = ActivePlacement;
    UI_GetFontHandle(ActivePlacement, FONT_TYPE_3, *(float *)&_XMM2);
    __asm { vmovss  xmm2, cs:HEADER_FONT_SCALE_3; scale }
    FontHandle = UI_GetFontHandle(v8, FONT_TYPE_3, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vmovss  xmm0, cs:LINE_HEIGHT_2
      vmovss  xmm3, cs:BOX_WIDTH_2; w
      vmovss  xmm1, cs:BOX_LEFT_2; x
    }
    v15 = FontHandle;
    __asm
    {
      vmovss  [rsp+118h+style], xmm8
      vmovss  dword ptr [rsp+118h+var_D0], xmm8
      vxorps  xmm7, xmm7, xmm7
      vmovss  [rsp+118h+var_D8], xmm7
      vmovss  [rsp+118h+s1], xmm7
      vmovaps xmm2, xmm6; y
      vmovss  [rsp+118h+h], xmm0
    }
    CL_DrawStretchPic(v8, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, h, 4, 4, s1, v58, v64, *(float *)&style, &colorWhite, cgMedia.whiteMaterial);
    __asm { vaddss  xmm6, xmm6, cs:LINE_HEIGHT_2 }
    sampleCount = 64i64;
    if ( s_shootFirstTest.sampleCount < 64 )
      sampleCount = (unsigned int)s_shootFirstTest.sampleCount;
    Com_sprintf(dest, 0x40ui64, " SHOOT FIRST TEST      Samples: %i", sampleCount);
    __asm
    {
      vmovss  xmm0, cs:HEADER_FONT_SCALE_3
      vmovss  [rsp+118h+var_D8], xmm0
      vmovss  xmm0, cs:BOX_LEFT_2
      vmovss  dword ptr [rsp+118h+horzAlign], xmm6
      vmovss  [rsp+118h+h], xmm0
    }
    UI_DrawText(v8, dest, 64, v15, ha, *(float *)&horzAlign, 4, 4, v59, &colorBlack, 3);
    __asm
    {
      vmovss  xmm0, cs:LINE_HEIGHT_2
      vmovss  xmm3, cs:BOX_WIDTH_2; w
      vmovss  xmm1, cs:BOX_LEFT_2; x
      vmovss  [rsp+118h+style], xmm8
      vmovss  dword ptr [rsp+118h+var_D0], xmm8
      vmovss  [rsp+118h+var_D8], xmm7
      vmovss  [rsp+118h+s1], xmm7
      vmovaps xmm2, xmm6; y
      vmovss  [rsp+118h+h], xmm0
    }
    CL_DrawStretchPic(v8, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, hb, 4, 4, s1a, v60, v65, *(float *)&stylea, &colorBlack, cgMedia.whiteMaterial);
    __asm { vaddss  xmm6, xmm6, cs:LINE_HEIGHT_2 }
    Com_sprintf(dest, 0x40ui64, " PING | SHOOT |  HIT |  DMG | DEATH");
    __asm
    {
      vmovss  xmm0, cs:HEADER_FONT_SCALE_3
      vmovss  [rsp+118h+var_D8], xmm0
      vmovss  xmm0, cs:BOX_LEFT_2
      vmovss  dword ptr [rsp+118h+horzAlign], xmm6
      vmovss  [rsp+118h+h], xmm0
    }
    UI_DrawText(v8, dest, 64, v15, hc, *(float *)&horzAligna, 4, 4, v61, &colorWhite, 3);
    v29 = &s_shootFirstTest.samples[(LOBYTE(s_shootFirstTest.sampleCount) - 1) & 0x3F];
    LODWORD(s1b) = v29->deathTime % 10000;
    LODWORD(vertAlign) = v29->dmgIndicatorTime % 10000;
    LODWORD(horzAlignb) = v29->hitMarkerTime % 10000;
    LODWORD(hd) = v29->shootTime % 10000;
    Com_sprintf(dest, 0x40ui64, " %4i | %4i | %4i | %4i | %4i", (unsigned int)v29->ping, hd, horzAlignb, vertAlign, s1b);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
      vmovups xmm1, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  xmm3, cs:BOX_WIDTH_2; w
      vmovss  [rsp+118h+style], xmm8
      vmovss  dword ptr [rsp+118h+var_D0], xmm8
      vmovss  [rsp+118h+var_D8], xmm7
      vmovss  [rsp+118h+s1], xmm7
      vmovups xmmword ptr [rsp+118h+var_A8], xmm0
      vmovss  xmm0, cs:LINE_HEIGHT_2
      vmovss  [rsp+118h+h], xmm0
      vmovups xmmword ptr [rsp+118h+var_98], xmm1
      vmovss  xmm1, cs:BOX_LEFT_2; x
      vmovaps xmm2, xmm6; y
    }
    CL_DrawStretchPic(v8, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, he, 4, 4, s1c, v62, v66, *(float *)&styleb, &color, cgMedia.whiteMaterial);
    __asm
    {
      vmovss  xmm0, cs:HEADER_FONT_SCALE_3
      vaddss  xmm1, xmm6, cs:LINE_HEIGHT_2
      vmovss  [rsp+118h+var_D8], xmm0
      vmovss  xmm0, cs:BOX_LEFT_2
      vmovss  dword ptr [rsp+118h+horzAlign], xmm1
      vmovss  [rsp+118h+h], xmm0
    }
    UI_DrawText(v8, dest, 64, v15, hf, *(float *)&horzAlignc, 4, 4, v63, &v71, 3);
    __asm
    {
      vmovaps xmm8, [rsp+118h+var_38]
      vmovaps xmm7, [rsp+118h+var_28]
    }
  }
  __asm { vmovaps xmm6, [rsp+118h+var_18] }
}

/*
==============
CG_LatencyTestMP_ShootFirstTest_Start_f
==============
*/
void CG_LatencyTestMP_ShootFirstTest_Start_f()
{
  LocalClientNum_t v0; 
  LocalClientNum_t v1; 
  const char *v2; 
  cg_t *LocalClientGlobals; 
  const char *v4; 

  v0 = Cmd_LocalClientNum();
  v1 = v0;
  if ( s_shootFirstTest.testingClientNum == -1 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(v0);
    if ( CG_GetEntity(v1, LocalClientGlobals->clientNum) )
    {
      memset_0(&s_shootFirstTest, 0, sizeof(s_shootFirstTest));
      s_shootFirstTest.testingClientNum = LocalClientGlobals->clientNum;
      v4 = j_va("latencyTest shootfirst start");
      CL_Main_AddReliableCommand(v1, v4);
      Com_Printf(31, "Shoot First Test Started (Master)\n");
    }
  }
  else
  {
    memset_0(&s_shootFirstTest.shootTime, 0, 0x708ui64);
    s_shootFirstTest.testingClientNum = -1;
    Com_Printf(31, "Shoot First Test Stopped\n");
    v2 = j_va("latencyTest shootfirst stop");
    CL_Main_AddReliableCommand(v1, v2);
  }
}

/*
==============
CG_LatencyTestMP_ShootFirstTest_Stop
==============
*/
void CG_LatencyTestMP_ShootFirstTest_Stop(LocalClientNum_t localClientNum)
{
  memset_0(&s_shootFirstTest.shootTime, 0, 0x708ui64);
  s_shootFirstTest.testingClientNum = -1;
  Com_Printf(31, "Shoot First Test Stopped\n");
}

/*
==============
CG_LatencyTestMP_ShootFirstTest_Stop_f
==============
*/
void CG_LatencyTestMP_ShootFirstTest_Stop_f()
{
  Cmd_LocalClientNum();
  memset_0(&s_shootFirstTest.shootTime, 0, 0x708ui64);
  s_shootFirstTest.testingClientNum = -1;
  Com_Printf(31, "Shoot First Test Stopped\n");
}

/*
==============
CG_LatencyTestMP_ShutdownConsoleCommands
==============
*/
void CG_LatencyTestMP_ShutdownConsoleCommands(void)
{
  Cmd_RemoveCommand("cg_strafingTestStart");
  Cmd_RemoveCommand("cg_strafingTestPrintResult");
  Cmd_RemoveCommand("cg_ttkTestStart");
  Cmd_RemoveCommand("cg_ttkTestPrintSamples");
  Cmd_RemoveCommand("cg_dropShotTestStart");
  Cmd_RemoveCommand("cg_losTestStart");
  Cmd_RemoveCommand("cg_losTestStop");
  Cmd_RemoveCommand("cg_losTestPrintResult");
  Cmd_RemoveCommand("cg_shootFirstTestStart");
  Cmd_RemoveCommand("cg_shootFirstTestStop");
  Cmd_RemoveCommand("cg_baseLagTestStart");
  Cmd_RemoveCommand("cg_baseLagTestStop");
  Cmd_RemoveCommand("cg_baseLagTestPrintResult");
}

/*
==============
CG_LatencyTestMP_StrafingTest_DrawResults
==============
*/
void CG_LatencyTestMP_StrafingTest_DrawResults(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v10; 
  GfxFont *FontHandle; 
  int sampleCount; 
  int *sampleCountDir; 
  unsigned __int8 v17; 
  __int64 v18; 
  GfxFont *v19; 
  int v21; 
  int v22; 
  CgLatencyTestStrafingTestSample *v25; 
  int v28; 
  const char *v29; 
  unsigned int v39; 
  __int64 v40; 
  CgLatencyTestStrafingTestRemoteClient *remoteClients; 
  int clientNum; 
  int remoteClientTime; 
  float xb; 
  __int64 x; 
  float xc; 
  float xd; 
  float xe; 
  __int64 xa; 
  float xf; 
  float xg; 
  int horzAligna; 
  int horzAlignb; 
  __int64 horzAlign; 
  int horzAlignc; 
  __int64 vertAlign; 
  float s1a; 
  float s1b; 
  __int64 s1; 
  float s1c; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  int style; 
  int stylea; 
  int styleb; 
  unsigned __int8 v84; 
  GfxFont *font; 
  int *v86; 
  vec4_t color; 
  vec4_t v88; 
  char dest[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovss  xmm6, cs:BOX_TOP
  }
  if ( s_strafingTest.sampleCount > 0 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    __asm { vmovss  xmm2, cs:FONT_SCALE_0; scale }
    v10 = ActivePlacement;
    UI_GetFontHandle(ActivePlacement, FONT_TYPE_0, *(float *)&_XMM2);
    __asm { vmovss  xmm2, cs:HEADER_FONT_SCALE_0; scale }
    FontHandle = UI_GetFontHandle(v10, FONT_TYPE_0, *(float *)&_XMM2);
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    sampleCount = s_strafingTest.sampleCount;
    sampleCountDir = s_strafingTest.sampleCountDir;
    __asm { vmovss  xmm0, cs:LINE_HEIGHT }
    v17 = 0;
    v86 = s_strafingTest.sampleCountDir;
    v84 = 0;
    v18 = 0i64;
    font = FontHandle;
    v19 = FontHandle;
    __asm { vxorps  xmm8, xmm8, xmm8 }
    do
    {
      if ( *sampleCountDir > 0 )
      {
        v21 = 1;
        if ( sampleCount >= 1 )
        {
          do
          {
            v22 = ((_BYTE)sampleCount - (_BYTE)v21) & 0x3F;
            if ( s_strafingTest.samples[((_BYTE)sampleCount - (_BYTE)v21) & 0x3F].strafeDir == v17 )
              break;
            ++v21;
          }
          while ( v21 <= sampleCount );
          __asm
          {
            vmovss  xmm3, cs:BOX_WIDTH; w
            vmovss  xmm1, cs:BOX_LEFT; x
          }
          v25 = &s_strafingTest.samples[v22];
          __asm
          {
            vmovss  [rsp+158h+style], xmm7
            vmovss  dword ptr [rsp+158h+var_110], xmm7
            vmovss  [rsp+158h+var_118], xmm8
            vmovss  [rsp+158h+s1], xmm8
            vmovaps xmm2, xmm6; y
            vmovss  [rsp+158h+x], xmm0
          }
          CL_DrawStretchPic(v10, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, xb, 4, 4, s1a, v72, v78, *(float *)&style, &colorWhite, cgMedia.whiteMaterial);
          __asm { vaddss  xmm6, xmm6, cs:LINE_HEIGHT }
          v28 = 64;
          v29 = "RIGHT";
          if ( *sampleCountDir < 64 )
            v28 = *sampleCountDir;
          LODWORD(x) = v28;
          if ( !v17 )
            v29 = "LEFT";
          Com_sprintf(dest, 0x40ui64, " LATENCY TEST STRAFE %s      Samples: %i", v29, x);
          __asm
          {
            vmovss  xmm0, cs:HEADER_FONT_SCALE_0
            vmovss  [rsp+158h+var_118], xmm0
            vmovss  xmm0, cs:BOX_LEFT
            vmovss  dword ptr [rsp+158h+horzAlign], xmm6
            vmovss  [rsp+158h+x], xmm0
          }
          UI_DrawText(v10, dest, 64, v19, xc, *(float *)&horzAligna, 4, 4, v73, &colorBlack, 3);
          __asm
          {
            vmovss  xmm0, cs:LINE_HEIGHT
            vmovss  xmm3, cs:BOX_WIDTH; w
            vmovss  xmm1, cs:BOX_LEFT; x
            vmovss  [rsp+158h+style], xmm7
            vmovss  dword ptr [rsp+158h+var_110], xmm7
            vmovss  [rsp+158h+var_118], xmm8
            vmovss  [rsp+158h+s1], xmm8
            vmovaps xmm2, xmm6; y
            vmovss  [rsp+158h+x], xmm0
          }
          CL_DrawStretchPic(v10, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, xd, 4, 4, s1b, v74, v79, *(float *)&stylea, &colorBlack, cgMedia.whiteMaterial);
          __asm { vaddss  xmm6, xmm6, cs:LINE_HEIGHT }
          Com_sprintf(dest, 0x40ui64, " CL | PING | CL TIME | DELTA | AVG");
          __asm
          {
            vmovss  xmm0, cs:HEADER_FONT_SCALE_0
            vmovss  [rsp+158h+var_118], xmm0
            vmovss  xmm0, cs:BOX_LEFT
            vmovss  dword ptr [rsp+158h+horzAlign], xmm6
            vmovss  [rsp+158h+x], xmm0
          }
          UI_DrawText(v10, dest, 64, v19, xe, *(float *)&horzAlignb, 4, 4, v75, &colorWhite, 3);
          v39 = 0;
          v40 = 0i64;
          if ( cls.maxClients > 0 )
          {
            remoteClients = v25->remoteClients;
            while ( 1 )
            {
              clientNum = LocalClientGlobals->clientNum;
              if ( clientNum == v39 || clientNum == s_strafingTest.testingClientNum && CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v39) )
                break;
LABEL_29:
              ++v39;
              ++v40;
              ++remoteClients;
              if ( (int)v39 >= cls.maxClients )
              {
                v17 = v84;
                sampleCountDir = v86;
                goto LABEL_31;
              }
            }
            if ( v39 == s_strafingTest.testingClientNum || remoteClients->remoteClientTime )
            {
              if ( v25->state[0] )
                goto LABEL_21;
LABEL_19:
              __asm
              {
                vmovups xmm0, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
                vmovups xmm1, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
              }
            }
            else
            {
              if ( v25->state[0] )
                goto LABEL_19;
LABEL_21:
              __asm
              {
                vmovups xmm1, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
                vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
              }
            }
            __asm
            {
              vmovups xmmword ptr [rsp+158h+var_C0], xmm1
              vmovups xmmword ptr [rsp+158h+var_D0], xmm0
            }
            if ( v39 == s_strafingTest.testingClientNum || v39 == LocalClientGlobals->clientNum )
            {
              LODWORD(horzAlign) = v25->clientTime % 10000;
              LODWORD(xa) = v25->ping;
              Com_sprintf(dest, 0x40ui64, " %2i | %4i |   %04i  |       |      ", v39, xa, horzAlign);
            }
            else
            {
              remoteClientTime = remoteClients->remoteClientTime;
              if ( remoteClients->remoteClientTime )
              {
                LODWORD(s1) = s_strafingTest.clientResults[0][v40 + v18].avgDeltaClientTime % 10000;
                LODWORD(vertAlign) = (remoteClientTime - v25->clientTime) % 10000;
                LODWORD(horzAlign) = remoteClientTime % 10000;
                LODWORD(xa) = remoteClients->remotePing;
                Com_sprintf(dest, 0x40ui64, " %2i | %4i |   %04i  | %5i | %4i", v39, xa, horzAlign, vertAlign, s1);
              }
              else
              {
                Com_sprintf(dest, 0x40ui64, " %2i |  ... |     ... |   ... |  ...", v39);
              }
            }
            __asm
            {
              vmovss  xmm0, cs:LINE_HEIGHT
              vmovss  xmm3, cs:BOX_WIDTH; w
              vmovss  xmm1, cs:BOX_LEFT; x
              vmovss  [rsp+158h+style], xmm7
              vmovss  dword ptr [rsp+158h+var_110], xmm7
              vmovss  [rsp+158h+var_118], xmm8
              vmovss  [rsp+158h+s1], xmm8
              vmovaps xmm2, xmm6; y
              vmovss  [rsp+158h+x], xmm0
            }
            CL_DrawStretchPic(v10, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, xf, 4, 4, s1c, v76, v80, *(float *)&styleb, &color, cgMedia.whiteMaterial);
            __asm
            {
              vmovss  xmm0, cs:HEADER_FONT_SCALE_0
              vaddss  xmm6, xmm6, cs:LINE_HEIGHT
              vmovss  [rsp+158h+var_118], xmm0
              vmovss  xmm0, cs:BOX_LEFT
              vmovss  dword ptr [rsp+158h+horzAlign], xmm6
              vmovss  [rsp+158h+x], xmm0
            }
            UI_DrawText(v10, dest, 64, font, xg, *(float *)&horzAlignc, 4, 4, v77, &v88, 3);
            goto LABEL_29;
          }
LABEL_31:
          __asm { vmovss  xmm0, cs:LINE_HEIGHT }
          sampleCount = s_strafingTest.sampleCount;
          v19 = font;
          __asm { vaddss  xmm6, xmm6, xmm0 }
        }
      }
      ++v17;
      ++sampleCountDir;
      v18 += 200i64;
      v84 = v17;
      v86 = sampleCountDir;
    }
    while ( v17 < 2u );
    __asm
    {
      vmovaps xmm8, [rsp+158h+var_58]
      vmovaps xmm7, [rsp+158h+var_48]
    }
  }
  __asm { vmovaps xmm6, [rsp+158h+var_38] }
}

/*
==============
CG_LatencyTestMP_StrafingTest_PrintResult_f
==============
*/

void __fastcall CG_LatencyTestMP_StrafingTest_PrintResult_f(double _XMM0_8, double _XMM1_8)
{
  LocalClientNum_t v2; 
  unsigned __int8 v3; 
  int *sampleCountDir; 
  __int64 v5; 
  const cg_t *v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  int *p_clientTime; 
  __int64 sampleCount; 
  int v18; 
  int v19; 
  unsigned int v20; 
  int v21; 
  int v22; 
  __int64 v28; 
  __int64 v29; 
  double v30; 
  int *v31; 
  cg_t *LocalClientGlobals; 

  v2 = Cmd_LocalClientNum();
  v3 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(v2);
  sampleCountDir = s_strafingTest.sampleCountDir;
  v5 = 0i64;
  v31 = s_strafingTest.sampleCountDir;
  v6 = LocalClientGlobals;
  do
  {
    if ( *sampleCountDir > 0 )
    {
      v7 = "Left";
      if ( v3 )
        v7 = "Right";
      Com_Printf(31, "Strafing %s\n", v7);
      Com_Printf(31, "ClientNum, Max, Avg, Min, StdDev\n");
      v8 = 0;
      v9 = 0i64;
      if ( cls.maxClients > 0 )
      {
        v10 = 10i64;
        do
        {
          if ( v8 != s_strafingTest.testingClientNum && CG_LatencyTestMP_IsClientActive(v6, v8) )
          {
            v11 = v5 + v9;
            v12 = 0i64;
            v13 = 0;
            v14 = 0;
            v15 = 0x7FFFFFFF;
            if ( s_strafingTest.sampleCount > 0 )
            {
              p_clientTime = &s_strafingTest.samples[0].clientTime;
              sampleCount = (unsigned int)s_strafingTest.sampleCount;
              do
              {
                if ( *((_BYTE *)p_clientTime - 11) == v3 )
                {
                  v18 = p_clientTime[v10 - 3];
                  if ( v18 > 0 )
                  {
                    v19 = v18 - *p_clientTime;
                    v20 = v19;
                    if ( (int)v12 > v19 )
                      v20 = v12;
                    v12 = v20;
                    v21 = v19;
                    if ( v15 < v19 )
                      v21 = v15;
                    v22 = v19 - s_strafingTest.clientResults[0][v11].avgDeltaClientTime;
                    v15 = v21;
                    v13 += v22 * v22;
                    ++v14;
                  }
                }
                p_clientTime += 610;
                --sampleCount;
              }
              while ( sampleCount );
              v6 = LocalClientGlobals;
            }
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, r11d
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, ebp
              vdivss  xmm1, xmm1, xmm0
              vsqrtss xmm2, xmm1, xmm1
              vcvtss2sd xmm3, xmm2, xmm2
              vmovsd  [rsp+78h+var_48], xmm3
            }
            LODWORD(v29) = v15;
            LODWORD(v28) = s_strafingTest.clientResults[0][v11].avgDeltaClientTime;
            Com_Printf(31, "%i, %i, %i, %i, %f\n", (unsigned int)v8, v12, v28, v29, v30);
          }
          ++v8;
          ++v9;
          v10 += 3i64;
        }
        while ( v8 < cls.maxClients );
        sampleCountDir = v31;
      }
    }
    ++sampleCountDir;
    ++v3;
    v5 += 200i64;
    v31 = sampleCountDir;
  }
  while ( v3 < 2u );
}

/*
==============
CG_LatencyTestMP_StrafingTest_SetRemoteState
==============
*/
void CG_LatencyTestMP_StrafingTest_SetRemoteState(LocalClientNum_t localClientNum, int remoteClientNum, int remoteClientTime, int remoteSnapTime, int remotePing)
{
  __int64 v7; 
  int v8; 
  CgLatencyTestStrafingTestSample *v9; 
  char *v10; 
  __int64 strafeDir; 
  __int64 v12; 
  const char *v13; 
  char *fmt; 
  __int64 v15; 
  __int64 v16; 

  v7 = remoteClientNum;
  if ( s_strafingTest.sampleCount > 0 && s_strafingTest.testingClientNum != -1 )
  {
    if ( (unsigned int)remoteClientNum >= cls.maxClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 612, ASSERT_TYPE_ASSERT, "(unsigned)( remoteClientNum ) < (unsigned)( cls.maxClients )", "remoteClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", remoteClientNum, cls.maxClients) )
      __debugbreak();
    if ( (_DWORD)v7 == s_strafingTest.testingClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 613, ASSERT_TYPE_ASSERT, "(remoteClientNum != s_strafingTest.testingClientNum)", (const char *)&queryFormat, "remoteClientNum != s_strafingTest.testingClientNum") )
      __debugbreak();
    v8 = (LOBYTE(s_strafingTest.sampleCount) - 1) & 0x3F;
    if ( remoteClientTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 616, ASSERT_TYPE_ASSERT, "(remoteClientTime > 0)", (const char *)&queryFormat, "remoteClientTime > 0") )
      __debugbreak();
    if ( remoteSnapTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 617, ASSERT_TYPE_ASSERT, "(remoteSnapTime > 0)", (const char *)&queryFormat, "remoteSnapTime > 0") )
      __debugbreak();
    v9 = &s_strafingTest.samples[v8];
    v10 = &v9->state[12 * v7];
    *((_DWORD *)v10 + 11) = remoteSnapTime;
    *((_DWORD *)v10 + 10) = remoteClientTime;
    v9->remoteClients[v7].remotePing = remotePing;
    strafeDir = (unsigned __int8)v9->strafeDir;
    v12 = 200 * strafeDir + v7;
    s_strafingTest.clientResults[0][v12].sumDeltaClientTime += remoteClientTime - v9->clientTime;
    s_strafingTest.clientResults[0][v12].avgDeltaClientTime = s_strafingTest.clientResults[0][v12].sumDeltaClientTime / s_strafingTest.sampleCountDir[strafeDir];
    v13 = "WHITE";
    if ( !v9->state[0] )
      v13 = "BLACK";
    LODWORD(v16) = v9->snapTime;
    LODWORD(v15) = v9->clientTime;
    LODWORD(fmt) = v9->clientRealTime;
    Com_Printf(31, "Remote Latency Test State: %s, %06i, %06i %06i, %06i, %06i, %06i, %06i, %06i, %06i\n", v13, (unsigned int)v9->frameNumber, fmt, v15, v16, v9->nextSnapTime, v9->latestSnapTime, v9->serverLevelTime, v9->serverTime, *((_DWORD *)v10 + 11));
  }
}

/*
==============
CG_LatencyTestMP_StrafingTest_Start_f
==============
*/
void CG_LatencyTestMP_StrafingTest_Start_f()
{
  LocalClientNum_t v0; 
  LocalClientNum_t v1; 
  const char *v2; 
  cg_t *LocalClientGlobals; 
  const char *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 

  v0 = Cmd_LocalClientNum();
  v1 = v0;
  if ( s_strafingTest.testingClientNum == -1 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(v0);
    _RDI = CG_GetEntity(v1, LocalClientGlobals->clientNum);
    if ( _RDI )
    {
      memset_0(&s_strafingTest, 0, sizeof(s_strafingTest));
      s_strafingTest.testingClientNum = LocalClientGlobals->clientNum;
      CG_GetPoseOrigin(&_RDI->pose, &s_strafingTest.pos);
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+48h]
        vmovss  xmm3, dword ptr cs:s_strafingTest.pos+8
        vmovss  xmm2, dword ptr cs:s_strafingTest.pos+4
        vmovss  xmm1, dword ptr cs:s_strafingTest.pos
        vmovss  dword ptr cs:s_strafingTest.dir, xmm5
        vmovss  xmm4, dword ptr [rdi+4Ch]
        vmovss  dword ptr cs:s_strafingTest.dir+4, xmm4
        vmovss  xmm0, dword ptr [rdi+50h]
        vmovss  dword ptr cs:s_strafingTest.dir+8, xmm0
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+48h+var_18], xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vcvtss2sd xmm4, xmm4, xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+48h+var_20], xmm4
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
        vmovsd  [rsp+48h+var_28], xmm5
      }
      v20 = j_va("latencyTest strafing start %.6f %.6f %.6f %.6f %.6f %.6f", _RDX, _R8, _R9, v21, v22, v23);
      CL_Main_AddReliableCommand(v1, v20);
      Com_Printf(31, "Strafing Test Started (Master)\n");
    }
  }
  else
  {
    memset_0(&s_strafingTest.pos, 0, 0x26EA4ui64);
    s_strafingTest.testingClientNum = -1;
    Com_Printf(31, "Strafing Test Stopped\n");
    v2 = j_va("latencyTest strafing stop");
    CL_Main_AddReliableCommand(v1, v2);
  }
}

/*
==============
CG_LatencyTestMP_StrafingTest_Stop
==============
*/
void CG_LatencyTestMP_StrafingTest_Stop(LocalClientNum_t localClientNum)
{
  memset_0(&s_strafingTest.pos, 0, 0x26EA4ui64);
  s_strafingTest.testingClientNum = -1;
  Com_Printf(31, "Strafing Test Stopped\n");
}

/*
==============
CG_LatencyTestMP_StrafingTest_ToggleState
==============
*/
void CG_LatencyTestMP_StrafingTest_ToggleState(LocalClientNum_t localClientNum, CgLatencyTestState testState, CgLatencyTestStrafeDir strafeDir)
{
  unsigned __int8 v4; 
  LocalClientNum_t v5; 
  ClActiveClientMP *v6; 
  cg_t *LocalClientGlobals; 
  cg_t *v8; 
  CgLatencyTestStrafingTestSample *v9; 
  CgLatencyTestStrafingTestSample *v10; 
  __int64 v11; 
  int v12; 
  CgLatencyTestStrafingTestRemoteClient *remoteClients; 
  CgLatencyTestStrafeDir v14; 
  __int64 v15; 
  __int64 maxClients; 
  int *p_remoteSnapTime; 
  const char *v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  ClActiveClientMP *ClientMP; 
  cg_t *v25; 

  v4 = testState;
  v5 = localClientNum;
  if ( s_strafingTest.testingClientNum != -1 )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    v6 = ClientMP;
    if ( v4 >= 2u )
    {
      v22 = 2;
      v20 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 657, ASSERT_TYPE_ASSERT, "(unsigned)( testState ) < (unsigned)( CgLatencyTestState::COUNT )", "testState doesn't index CgLatencyTestState::COUNT\n\t%i not in [0, %i)", v20, v22) )
        __debugbreak();
    }
    if ( (unsigned __int8)strafeDir >= 2u )
    {
      LODWORD(v21) = 2;
      LODWORD(v19) = (unsigned __int8)strafeDir;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 658, ASSERT_TYPE_ASSERT, "(unsigned)( strafeDir ) < (unsigned)( CgLatencyTestStrafeDir::COUNT )", "strafeDir doesn't index CgLatencyTestStrafeDir::COUNT\n\t%i not in [0, %i)", v19, v21) )
        __debugbreak();
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(v5);
    v8 = LocalClientGlobals;
    v25 = LocalClientGlobals;
    v9 = &s_strafingTest.samples[s_strafingTest.sampleCount & 0x3F];
    v10 = &s_strafingTest.samples[(LOBYTE(s_strafingTest.sampleCount) - 1) & 0x3F];
    if ( s_strafingTest.sampleCount <= 0 || LocalClientGlobals->snap->serverTime > v10->snapTime && (strafeDir != v10->strafeDir || v4 != v10->state[0]) )
    {
      v11 = 0i64;
      if ( s_strafingTest.sampleCount >= 64 )
      {
        v12 = 0;
        if ( cls.maxClients > 0 )
        {
          remoteClients = v9->remoteClients;
          do
          {
            if ( remoteClients->remoteClientTime > 0 )
            {
              v14 = v9->strafeDir;
              if ( (unsigned __int8)v14 >= 2u )
              {
                LODWORD(v21) = 2;
                LODWORD(v19) = (unsigned __int8)v14;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 690, ASSERT_TYPE_ASSERT, "(unsigned)( sample->strafeDir ) < (unsigned)( CgLatencyTestStrafeDir::COUNT )", "sample->strafeDir doesn't index CgLatencyTestStrafeDir::COUNT\n\t%i not in [0, %i)", v19, v21) )
                  __debugbreak();
              }
              v15 = v11 + 200i64 * (unsigned __int8)v9->strafeDir;
              s_strafingTest.clientResults[0][v15].sumDeltaClientTime += v9->clientTime - remoteClients->remoteClientTime;
            }
            ++v12;
            ++v11;
            ++remoteClients;
          }
          while ( v12 < cls.maxClients );
          v8 = v25;
          v6 = ClientMP;
          v5 = localClientNum;
        }
        --s_strafingTest.sampleCountDir[(unsigned __int8)v9->strafeDir];
      }
      v9->frameNumber = com_frameNumber;
      v9->clientRealTime = cls.realtime;
      v9->state[0] = v4;
      v9->strafeDir = strafeDir;
      v9->clientTime = v6->serverTime;
      v9->snapTime = v8->snap->serverTime;
      v9->nextSnapTime = v8->nextSnap->serverTime;
      v9->latestSnapTime = v8->latestSnapshotTime;
      v9->ping = v6->snap.ping;
      Com_IsGameLocalServerRunning();
      maxClients = (unsigned int)cls.maxClients;
      if ( cls.maxClients > 0 )
      {
        p_remoteSnapTime = &v9->remoteClients[0].remoteSnapTime;
        do
        {
          *(_QWORD *)(p_remoteSnapTime - 1) = 0i64;
          p_remoteSnapTime[1] = 0;
          p_remoteSnapTime += 3;
          --maxClients;
        }
        while ( maxClients );
      }
      ++s_strafingTest.sampleCount;
      ++s_strafingTest.sampleCountDir[(unsigned __int8)strafeDir];
      if ( v8->clientNum != s_strafingTest.testingClientNum )
      {
        v18 = j_va("latencyTest strafing sample %i %i %i", (unsigned int)v6->serverTime, (unsigned int)v8->snap->serverTime, (unsigned int)v6->snap.ping);
        CL_Main_AddReliableCommand(v5, v18);
      }
    }
  }
}

/*
==============
CG_LatencyTestMP_StrafingTest_Update
==============
*/
void CG_LatencyTestMP_StrafingTest_Update(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  const dvar_t *v11; 
  const DObj *ClientDObj; 
  const dvar_t *v14; 
  const dvar_t *v37; 
  const dvar_t *v73; 
  char v75; 
  bool v76; 
  int v106; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v112; 
  vec3_t out; 
  vec3_t outOrigin; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  vec3_t v117; 
  tmat33_t<vec3_t> outTagMat; 

  if ( s_strafingTest.testingClientNum == -1 )
    return;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Entity = CG_GetEntity(localClientNum, s_strafingTest.testingClientNum);
  if ( !Entity )
    return;
  memset(&axis, 0, sizeof(axis));
  if ( s_strafingTest.testingClientNum != LocalClientGlobals->clientNum )
  {
    v11 = DVARINT_cg_latencyTestMode;
    if ( !DVARINT_cg_latencyTestMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_latencyTestMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( !v11->current.integer )
    {
      ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
      if ( !ClientDObj || !CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.j_head, &outTagMat, &outOrigin) )
        return;
      goto LABEL_13;
    }
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_cg_latencyTestMode, "cg_latencyTestMode") != 1 )
      return;
  }
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
LABEL_13:
  __asm { vmovss  xmm0, dword ptr cs:s_strafingTest.pos+8 }
  v14 = DVARBOOL_cg_drawLatencyTest;
  __asm
  {
    vmovaps [rsp+1A0h+var_48+8], xmm7
    vmovaps [rsp+1A0h+var_58+8], xmm8
    vmovaps [rsp+1A0h+var_68+8], xmm9
    vmovss  xmm1, dword ptr [rbp+0A0h+outOrigin]
    vsubss  xmm7, xmm1, dword ptr cs:s_strafingTest.pos
    vmovss  dword ptr [rbp+0A0h+outOrigin+8], xmm0
    vmovss  xmm0, dword ptr [rbp+0A0h+outOrigin+4]
    vsubss  xmm8, xmm0, dword ptr cs:s_strafingTest.pos+4
    vxorps  xmm9, xmm9, xmm9
  }
  if ( !DVARBOOL_cg_drawLatencyTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLatencyTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
    CG_DebugLine(&s_strafingTest.pos, &outOrigin, &colorYellow, 0, 1);
  __asm { vmulss  xmm3, xmm8, xmm8 }
  if ( !s_strafingTest.sampleCount )
  {
    __asm
    {
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm0, xmm3
      vmulss  xmm1, xmm9, xmm9
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@43c80000
    }
  }
  __asm
  {
    vmovaps [rsp+1A0h+var_38+8], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm0, xmm3
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovaps [rsp+1A0h+var_78+8], xmm10
    vblendvps xmm0, xmm3, xmm6, xmm0
    vdivss  xmm1, xmm6, xmm0
    vmovaps [rsp+1A0h+var_88+8], xmm11
    vmovaps [rsp+1A0h+var_98+8], xmm12
    vmulss  xmm10, xmm7, xmm1
    vmulss  xmm11, xmm8, xmm1
    vmulss  xmm12, xmm9, xmm1
  }
  AnglesToAxis(&s_strafingTest.dir, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  dword ptr [rbp+0A0h+in1], xmm9
    vmovss  dword ptr [rbp+0A0h+in1+4], xmm6
    vmovss  dword ptr [rbp+0A0h+in1+8], xmm9
  }
  MatrixTransformVector43(&in1, &axis, &out);
  v37 = DVARBOOL_cg_drawLatencyTest;
  if ( !DVARBOOL_cg_drawLatencyTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLatencyTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.enabled )
  {
    __asm
    {
      vmovss  xmm8, cs:__real@43480000
      vmovss  dword ptr [rbp+0A0h+var_D0], xmm8
      vmovss  dword ptr [rbp+0A0h+var_D0+4], xmm9
      vmovss  dword ptr [rbp+0A0h+var_D0+8], xmm9
    }
    MatrixTransformVector43(&v117, &axis, &v112);
    __asm
    {
      vmovss  xmm6, dword ptr cs:s_strafingTest.pos
      vaddss  xmm0, xmm6, dword ptr [rsp+1A0h+var_140]
      vmovss  xmm5, dword ptr cs:s_strafingTest.pos+4
      vmovss  xmm2, dword ptr cs:s_strafingTest.pos+8
      vsubss  xmm1, xmm6, dword ptr [rsp+1A0h+var_140]
      vmovss  dword ptr [rsp+1A0h+start], xmm0
      vaddss  xmm0, xmm5, dword ptr [rsp+1A0h+var_140+4]
      vmovss  dword ptr [rsp+1A0h+start+4], xmm0
      vaddss  xmm0, xmm2, dword ptr [rsp+1A0h+var_140+8]
      vmovss  dword ptr [rsp+1A0h+start+8], xmm0
      vsubss  xmm0, xmm5, dword ptr [rsp+1A0h+var_140+4]
      vmovss  dword ptr [rsp+1A0h+end], xmm1
      vsubss  xmm1, xmm2, dword ptr [rsp+1A0h+var_140+8]
      vmovss  dword ptr [rsp+1A0h+end+4], xmm0
      vmovss  dword ptr [rsp+1A0h+end+8], xmm1
    }
    CG_DebugLine(&start, &end, &colorYellow, 0, 1);
    __asm
    {
      vmulss  xmm1, xmm8, dword ptr [rsp+1A0h+out]
      vaddss  xmm7, xmm1, dword ptr cs:s_strafingTest.pos
      vmulss  xmm0, xmm8, dword ptr [rsp+1A0h+out+4]
      vaddss  xmm6, xmm0, dword ptr cs:s_strafingTest.pos+4
      vaddss  xmm0, xmm7, dword ptr [rsp+1A0h+var_140]
      vaddss  xmm1, xmm6, dword ptr [rsp+1A0h+var_140+4]
      vmulss  xmm2, xmm8, dword ptr [rsp+1A0h+out+8]
      vaddss  xmm5, xmm2, dword ptr cs:s_strafingTest.pos+8
      vmovss  dword ptr [rsp+1A0h+start], xmm0
      vaddss  xmm0, xmm5, dword ptr [rsp+1A0h+var_140+8]
      vmovss  dword ptr [rsp+1A0h+start+4], xmm1
      vsubss  xmm1, xmm7, dword ptr [rsp+1A0h+var_140]
      vmovss  dword ptr [rsp+1A0h+start+8], xmm0
      vsubss  xmm0, xmm6, dword ptr [rsp+1A0h+var_140+4]
      vmovss  dword ptr [rsp+1A0h+end], xmm1
      vsubss  xmm1, xmm5, dword ptr [rsp+1A0h+var_140+8]
      vmovss  dword ptr [rsp+1A0h+end+4], xmm0
      vmovss  dword ptr [rsp+1A0h+end+8], xmm1
    }
    CG_DebugLine(&start, &end, &colorYellow, 0, 1);
    __asm
    {
      vmovss  xmm2, cs:__real@c3480000
      vmulss  xmm4, xmm2, dword ptr [rsp+1A0h+out]
      vmulss  xmm3, xmm2, dword ptr [rsp+1A0h+out+4]
      vaddss  xmm5, xmm4, dword ptr cs:s_strafingTest.pos
      vaddss  xmm6, xmm3, dword ptr cs:s_strafingTest.pos+4
      vaddss  xmm0, xmm5, dword ptr [rsp+1A0h+var_140]
      vaddss  xmm1, xmm6, dword ptr [rsp+1A0h+var_140+4]
      vmulss  xmm2, xmm2, dword ptr [rsp+1A0h+out+8]
      vaddss  xmm7, xmm2, dword ptr cs:s_strafingTest.pos+8
      vmovss  dword ptr [rsp+1A0h+start], xmm0
      vaddss  xmm0, xmm7, dword ptr [rsp+1A0h+var_140+8]
      vmovss  dword ptr [rsp+1A0h+start+4], xmm1
      vsubss  xmm1, xmm5, dword ptr [rsp+1A0h+var_140]
      vmovss  dword ptr [rsp+1A0h+start+8], xmm0
      vsubss  xmm0, xmm6, dword ptr [rsp+1A0h+var_140+4]
      vmovss  dword ptr [rsp+1A0h+end], xmm1
      vsubss  xmm1, xmm7, dword ptr [rsp+1A0h+var_140+8]
      vmovss  dword ptr [rsp+1A0h+end+4], xmm0
      vmovss  dword ptr [rsp+1A0h+end+8], xmm1
    }
    CG_DebugLine(&start, &end, &colorYellow, 0, 1);
  }
  v73 = DVARBOOL_cg_drawLatencyTest;
  __asm { vmovaps xmm6, [rsp+1A0h+var_38+8] }
  if ( !DVARBOOL_cg_drawLatencyTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLatencyTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v73);
  v75 = 0;
  v76 = !v73->current.enabled;
  if ( v73->current.enabled )
  {
    __asm
    {
      vmovss  xmm3, cs:line_length
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis]
      vaddss  xmm2, xmm1, dword ptr cs:s_strafingTest.pos
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+4]
      vmovss  dword ptr [rsp+1A0h+start], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:s_strafingTest.pos+4
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+8]
      vmovss  dword ptr [rsp+1A0h+start+4], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:s_strafingTest.pos+8
      vmovss  dword ptr [rsp+1A0h+start+8], xmm2
    }
    CG_DebugLine(&s_strafingTest.pos, &start, &colorRed, 0, 1);
    __asm
    {
      vmovss  xmm3, cs:line_length
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+0Ch]
      vaddss  xmm2, xmm1, dword ptr cs:s_strafingTest.pos
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+10h]
      vmovss  dword ptr [rsp+1A0h+start], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:s_strafingTest.pos+4
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+14h]
      vmovss  dword ptr [rsp+1A0h+start+4], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:s_strafingTest.pos+8
      vmovss  dword ptr [rsp+1A0h+start+8], xmm2
    }
    CG_DebugLine(&s_strafingTest.pos, &start, &colorGreen, 0, 1);
    __asm
    {
      vmovss  xmm3, cs:line_length
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+18h]
      vaddss  xmm2, xmm1, dword ptr cs:s_strafingTest.pos
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+1Ch]
      vmovss  dword ptr [rsp+1A0h+start], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:s_strafingTest.pos+4
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+20h]
      vmovss  dword ptr [rsp+1A0h+start+4], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:s_strafingTest.pos+8
      vmovss  dword ptr [rsp+1A0h+start+8], xmm2
    }
    CG_DebugLine(&s_strafingTest.pos, &start, &colorBlue, 0, 1);
  }
  __asm
  {
    vmulss  xmm2, xmm11, dword ptr [rsp+1A0h+out+4]
    vmulss  xmm3, xmm10, dword ptr [rsp+1A0h+out]
    vmulss  xmm1, xmm12, dword ptr [rsp+1A0h+out+8]
    vmovaps xmm12, [rsp+1A0h+var_98+8]
    vmovaps xmm11, [rsp+1A0h+var_88+8]
    vmovaps xmm10, [rsp+1A0h+var_78+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm9
  }
  if ( !(v75 | v76) != lastSide )
  {
    lastSide = !(v75 | v76);
    v106 = (lastState[v75 | v76] - 1) & 1;
    lastState[v75 | v76] = v106;
    CG_LatencyTestMP_StrafingTest_ToggleState(localClientNum, (CgLatencyTestState)v106, (CgLatencyTestStrafeDir)(v75 | v76));
  }
  __asm
  {
    vmovaps xmm8, [rsp+1A0h+var_58+8]
    vmovaps xmm7, [rsp+1A0h+var_48+8]
    vmovaps xmm9, [rsp+1A0h+var_68+8]
  }
}

/*
==============
CG_LatencyTestMP_TTKTest_DrawResults
==============
*/
void CG_LatencyTestMP_TTKTest_DrawResults(LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v10; 
  GfxFont *FontHandle; 
  __int64 v18; 
  __int64 sampleCount; 
  int v31; 
  int *p_ping; 
  int *p_avgTTK; 
  int clientNum; 
  int v35; 
  int v36; 
  float ha; 
  float hb; 
  float hc; 
  float hd; 
  __int64 h; 
  float he; 
  float hf; 
  int horzAligna; 
  int horzAlignb; 
  __int64 horzAlign; 
  int horzAlignc; 
  __int64 vertAlign; 
  float s1a; 
  float s1b; 
  __int64 s1; 
  float s1c; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  __int64 v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  int style; 
  int stylea; 
  int styleb; 
  vec4_t color; 
  vec4_t v78; 
  char dest[64]; 

  __asm { vmovaps [rsp+138h+var_38], xmm6 }
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  __asm { vmovss  xmm6, cs:BOX_TOP_0 }
  if ( s_ttkTest.sampleCount > 0 )
  {
    __asm
    {
      vmovaps [rsp+138h+var_48], xmm7
      vmovaps [rsp+138h+var_58], xmm8
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    __asm { vmovss  xmm2, cs:FONT_SCALE_1; scale }
    v10 = ActivePlacement;
    UI_GetFontHandle(ActivePlacement, FONT_TYPE_1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, cs:HEADER_FONT_SCALE_1; scale
      vmovss  xmm7, cs:__real@3f800000
    }
    FontHandle = UI_GetFontHandle(v10, FONT_TYPE_1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm0, cs:LINE_HEIGHT_0
      vmovss  xmm3, cs:BOX_WIDTH_0; w
      vmovss  xmm1, cs:BOX_LEFT_0; x
      vmovss  [rsp+138h+style], xmm7
      vmovss  dword ptr [rsp+138h+var_F0], xmm7
      vxorps  xmm8, xmm8, xmm8
      vmovss  dword ptr [rsp+138h+var_F8], xmm8
      vmovss  [rsp+138h+s1], xmm8
    }
    v18 = (LOBYTE(s_ttkTest.sampleCount) - 1) & 0x3F;
    __asm
    {
      vmovaps xmm2, xmm6; y
      vmovss  [rsp+138h+h], xmm0
    }
    CL_DrawStretchPic(v10, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ha, 4, 4, s1a, v64, v71, *(float *)&style, &colorWhite, cgMedia.whiteMaterial);
    __asm { vaddss  xmm6, xmm6, cs:LINE_HEIGHT_0 }
    sampleCount = 64i64;
    if ( s_ttkTest.sampleCount < 64 )
      sampleCount = (unsigned int)s_ttkTest.sampleCount;
    Com_sprintf(dest, 0x40ui64, " LATENCY TEST TTK      Samples: %i", sampleCount);
    __asm
    {
      vmovss  xmm0, cs:HEADER_FONT_SCALE_1
      vmovss  dword ptr [rsp+138h+var_F8], xmm0
      vmovss  xmm0, cs:BOX_LEFT_0
      vmovss  dword ptr [rsp+138h+horzAlign], xmm6
      vmovss  [rsp+138h+h], xmm0
    }
    UI_DrawText(v10, dest, 64, FontHandle, hb, *(float *)&horzAligna, 4, 4, v65, &colorBlack, 3);
    __asm
    {
      vmovss  xmm0, cs:LINE_HEIGHT_0
      vmovss  xmm3, cs:BOX_WIDTH_0; w
      vmovss  xmm1, cs:BOX_LEFT_0; x
      vmovss  [rsp+138h+style], xmm7
      vmovss  dword ptr [rsp+138h+var_F0], xmm7
      vmovss  dword ptr [rsp+138h+var_F8], xmm8
      vmovss  [rsp+138h+s1], xmm8
      vmovss  [rsp+138h+h], xmm0
      vmovaps xmm2, xmm6; y
    }
    CL_DrawStretchPic(v10, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, hc, 4, 4, s1b, v66, v72, *(float *)&stylea, &colorBlack, cgMedia.whiteMaterial);
    __asm { vaddss  xmm6, xmm6, cs:LINE_HEIGHT_0 }
    Com_sprintf(dest, 0x40ui64, " CL | PING | FIRING | DEATH |  TTK |  AVG");
    __asm
    {
      vmovss  xmm0, cs:HEADER_FONT_SCALE_1
      vmovss  dword ptr [rsp+138h+var_F8], xmm0
      vmovss  xmm0, cs:BOX_LEFT_0
      vmovss  dword ptr [rsp+138h+horzAlign], xmm6
      vmovss  [rsp+138h+h], xmm0
    }
    UI_DrawText(v10, dest, 64, FontHandle, hd, *(float *)&horzAlignb, 4, 4, v67, &colorWhite, 3);
    v31 = 0;
    if ( cls.maxClients > 0 )
    {
      p_ping = &s_ttkTest.samples[0][v18].ping;
      p_avgTTK = &s_ttkTest.results[0].avgTTK;
      do
      {
        if ( CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v31) && v31 < 3 )
        {
          clientNum = LocalClientGlobals->clientNum;
          if ( clientNum == s_ttkTest.testingClientNum || clientNum == v31 )
          {
            v35 = *(p_ping - 1);
            v36 = *(p_ping - 2);
            if ( v35 <= 0 )
            {
              if ( v36 <= 0 )
              {
                LODWORD(horzAlign) = *p_avgTTK % 10000;
                LODWORD(h) = *p_ping;
                Com_sprintf(dest, 0x40ui64, " %2i | %4i |    ... |   ... |  ... | %4i", (unsigned int)v31, h, horzAlign);
              }
              else
              {
                LODWORD(s1) = *p_avgTTK % 10000;
                LODWORD(vertAlign) = (ClientMP->serverTime - v36) % 10000;
                LODWORD(horzAlign) = v36 % 100000;
                LODWORD(h) = *p_ping;
                Com_sprintf(dest, 0x40ui64, " %2i | %4i |  %05i |   ... | %4i | %4i", (unsigned int)v31, h, horzAlign, vertAlign, s1);
              }
              __asm
              {
                vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
                vmovups xmm1, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
              }
            }
            else
            {
              LODWORD(v68) = *p_avgTTK % 10000;
              LODWORD(s1) = (v35 - v36) % 10000;
              LODWORD(vertAlign) = v35 % 100000;
              LODWORD(horzAlign) = v36 % 100000;
              LODWORD(h) = *p_ping;
              Com_sprintf(dest, 0x40ui64, " %2i | %4i |  %05i | %05i | %4i | %4i", (unsigned int)v31, h, horzAlign, vertAlign, s1, v68);
              __asm
              {
                vmovups xmm0, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
                vmovups xmm1, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
              }
            }
            __asm
            {
              vmovss  xmm3, cs:BOX_WIDTH_0; w
              vmovss  [rsp+138h+style], xmm7
              vmovss  dword ptr [rsp+138h+var_F0], xmm7
              vmovss  dword ptr [rsp+138h+var_F8], xmm8
              vmovss  [rsp+138h+s1], xmm8
              vmovups xmmword ptr [rsp+138h+var_C8], xmm0
              vmovss  xmm0, cs:LINE_HEIGHT_0
              vmovups xmmword ptr [rsp+138h+var_B8], xmm1
              vmovss  xmm1, cs:BOX_LEFT_0; x
              vmovaps xmm2, xmm6; y
              vmovss  [rsp+138h+h], xmm0
            }
            CL_DrawStretchPic(v10, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, he, 4, 4, s1c, v69, v73, *(float *)&styleb, &color, cgMedia.whiteMaterial);
            __asm
            {
              vmovss  xmm0, cs:HEADER_FONT_SCALE_1
              vaddss  xmm6, xmm6, cs:LINE_HEIGHT_0
              vmovss  dword ptr [rsp+138h+var_F8], xmm0
              vmovss  xmm0, cs:BOX_LEFT_0
              vmovss  dword ptr [rsp+138h+horzAlign], xmm6
              vmovss  [rsp+138h+h], xmm0
            }
            UI_DrawText(v10, dest, 64, FontHandle, hf, *(float *)&horzAlignc, 4, 4, v70, &v78, 3);
          }
        }
        ++v31;
        p_ping += 192;
        p_avgTTK += 4;
      }
      while ( v31 < cls.maxClients );
    }
    __asm
    {
      vmovaps xmm7, [rsp+138h+var_48]
      vmovaps xmm8, [rsp+138h+var_58]
    }
  }
  __asm { vmovaps xmm6, [rsp+138h+var_38] }
}

/*
==============
CG_LatencyTestMP_TTKTest_PrintSamples_f
==============
*/
void CG_LatencyTestMP_TTKTest_PrintSamples_f()
{
  LocalClientNum_t v0; 
  int v1; 
  const cg_t *LocalClientGlobals; 
  int v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int *p_avgPing; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  v0 = Cmd_LocalClientNum();
  v1 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(v0);
  v3 = 0;
  if ( cls.maxClients > 0 )
  {
    v4 = 0i64;
    do
    {
      if ( CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v3) )
      {
        Com_Printf(31, "clientNum, sampleIdx, ping, startFiringTime, deathTime, ttk\n");
        v5 = 0;
        v6 = 0i64;
        do
        {
          if ( v5 >= s_ttkTest.sampleCount )
            break;
          v7 = v4 + v6;
          LODWORD(v12) = s_ttkTest.samples[0][v7].deathTime - s_ttkTest.samples[0][v7].startFiringTime;
          LODWORD(v11) = s_ttkTest.samples[0][v7].deathTime;
          LODWORD(v10) = s_ttkTest.samples[0][v7].startFiringTime;
          LODWORD(v9) = s_ttkTest.samples[0][v7].ping;
          Com_Printf(31, "%i, %i, %i, %05i, %05i, %i\n", (unsigned int)v3, (unsigned int)v5++, v9, v10, v11, v12);
          ++v6;
        }
        while ( v5 < 64 );
        Com_Printf(31, "\n\n");
      }
      ++v3;
      v4 += 64i64;
    }
    while ( v3 < cls.maxClients );
  }
  Com_Printf(31, "clientNum, avgPing, avgTTK\n");
  if ( cls.maxClients > 0 )
  {
    p_avgPing = (unsigned int *)&s_ttkTest.results[0].avgPing;
    do
    {
      if ( CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v1) )
      {
        LODWORD(v9) = p_avgPing[2];
        Com_Printf(31, "%i, %i, %i\n", (unsigned int)v1, *p_avgPing, v9);
      }
      ++v1;
      p_avgPing += 4;
    }
    while ( v1 < cls.maxClients );
  }
}

/*
==============
CG_LatencyTestMP_TTKTest_Start_f
==============
*/
void CG_LatencyTestMP_TTKTest_Start_f()
{
  LocalClientNum_t v0; 
  LocalClientNum_t v1; 
  const char *v2; 
  cg_t *LocalClientGlobals; 
  const char *v4; 

  v0 = Cmd_LocalClientNum();
  v1 = v0;
  if ( s_ttkTest.testingClientNum == -1 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(v0);
    if ( CG_GetEntity(v1, LocalClientGlobals->clientNum) )
    {
      memset_0(&s_ttkTest, 0, sizeof(s_ttkTest));
      s_ttkTest.testingClientNum = LocalClientGlobals->clientNum;
      v4 = j_va("latencyTest ttk start");
      CL_Main_AddReliableCommand(v1, v4);
      Com_Printf(31, "TTK Test Started (Master)\n");
    }
  }
  else
  {
    memset_0(&s_ttkTest.sampleCount, 0, 0x26484ui64);
    s_ttkTest.testingClientNum = -1;
    Com_Printf(31, "TTK Test Stopped\n");
    v2 = j_va("latencyTest ttk stop");
    CL_Main_AddReliableCommand(v1, v2);
  }
}

/*
==============
CG_LatencyTestMP_TTKTest_Stop
==============
*/
void CG_LatencyTestMP_TTKTest_Stop(LocalClientNum_t localClientNum)
{
  memset_0(&s_ttkTest.sampleCount, 0, 0x26484ui64);
  s_ttkTest.testingClientNum = -1;
  Com_Printf(31, "TTK Test Stopped\n");
}

/*
==============
CG_LatencyTestMP_Update
==============
*/
void CG_LatencyTestMP_Update(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int testingClientNum; 
  int maxClients; 

  CG_LatencyTestMP_StrafingTest_Update(localClientNum);
  CG_LatencyTestMP_LoS_Update(localClientNum);
  if ( s_baseLagTest.testingClientNum >= 0 )
  {
    if ( s_baseLagTest.testingClientNum >= (unsigned int)cls.maxClients )
    {
      maxClients = cls.maxClients;
      testingClientNum = s_baseLagTest.testingClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 2910, ASSERT_TYPE_ASSERT, "(unsigned)( s_baseLagTest.testingClientNum ) < (unsigned)( cls.maxClients )", "s_baseLagTest.testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", testingClientNum, maxClients) )
        __debugbreak();
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( s_baseLagTest.testingClientNum == LocalClientGlobals->clientNum && s_baseLagTest.desiredSampleCount > 0 && s_baseLagTest.sampleCount >= s_baseLagTest.desiredSampleCount && !s_baseLagTest.endTime )
      s_baseLagTest.endTime = LocalClientGlobals->time;
  }
}

