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
void CG_LatencyTestMP_BaseLag_CalcStats(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  int v3; 
  int *p_maxTime; 
  CgLatencyTestBaseLagTestSample (*samples)[64]; 
  __int64 v6; 
  int sampleCount; 
  int v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  CgLatencyTestBaseLagTestSample (*v13)[64]; 
  int clientTime; 
  int v15; 
  int v16; 
  bool v17; 
  int v18; 
  int v19; 
  __int64 v20; 
  CgLatencyTestBaseLagTestSample *v21; 
  int v22; 

  Com_Printf(31, "CalcStats\n");
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = 0;
  if ( cls.maxClients > 0 )
  {
    p_maxTime = &s_baseLagTest.results[0].maxTime;
    samples = s_baseLagTest.samples;
    v6 = 0i64;
    do
    {
      if ( v3 != s_baseLagTest.testingClientNum && CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v3) )
      {
        sampleCount = 64;
        if ( s_baseLagTest.sampleCount < 64 )
          sampleCount = s_baseLagTest.sampleCount;
        *(_QWORD *)(p_maxTime - 1) = 0x7FFFFFFFi64;
        v8 = 0;
        *(p_maxTime - 4) = 0;
        v9 = 0;
        v10 = sampleCount;
        v11 = 0;
        v12 = 0i64;
        if ( sampleCount > 0 )
        {
          v13 = samples;
          do
          {
            clientTime = s_baseLagTest.samples[(__int64)s_baseLagTest.testingClientNum][v12].clientTime;
            if ( clientTime > 0 && *(_DWORD *)v13 > 0 )
            {
              v11 += (*v13)[0].ping;
              v15 = *(_DWORD *)v13 - clientTime;
              v9 += v15;
              v16 = v15;
              if ( *p_maxTime > v15 )
                v16 = *p_maxTime;
              v17 = *(p_maxTime - 1) < v15;
              *p_maxTime = v16;
              if ( v17 )
                v15 = *(p_maxTime - 1);
              ++*(p_maxTime - 4);
              *(p_maxTime - 1) = v15;
            }
            ++v12;
            v13 = (CgLatencyTestBaseLagTestSample (*)[64])((char *)v13 + 8);
          }
          while ( v12 < v10 );
          v18 = *(p_maxTime - 4);
          if ( v18 )
          {
            *(p_maxTime - 2) = v9 / v18;
            v19 = v9 / v18;
            v20 = 0i64;
            *(p_maxTime - 3) = v11 / v18;
            v21 = s_baseLagTest.samples[(__int64)s_baseLagTest.testingClientNum];
            do
            {
              if ( v21->clientTime > 0 )
              {
                v22 = s_baseLagTest.samples[v6][v20].clientTime;
                if ( v22 > 0 )
                  v8 += (v22 - v21->clientTime - v19) * (v22 - v21->clientTime - v19);
              }
              ++v20;
              ++v21;
            }
            while ( v20 < v10 );
            *((float *)p_maxTime + 1) = fsqrt((float)v8 / (float)v18);
          }
        }
      }
      ++v3;
      p_maxTime += 6;
      ++samples;
      ++v6;
    }
    while ( v3 < cls.maxClients );
  }
}

/*
==============
CG_LatencyTestMP_BaseLag_DrawResults
==============
*/
void CG_LatencyTestMP_BaseLag_DrawResults(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  int sampleCount; 
  GfxFont *FontHandle; 
  __int128 v6; 
  char v7; 
  unsigned int v8; 
  int *p_avgTime; 
  __int64 v10; 
  __int64 v11; 
  int clientNum; 
  __int64 v13; 
  int clientTime; 
  int v15; 
  vec4_t v16; 
  vec4_t v17; 
  __int128 v18; 
  char *fmt; 
  int horzAligna; 
  __int64 horzAlign; 
  int vertAligna; 
  __int64 vertAlign; 
  __int64 s1; 
  vec4_t color; 
  vec4_t v26; 
  char dest[64]; 

  if ( s_baseLagTest.testingClientNum >= 0 )
  {
    if ( s_baseLagTest.testingClientNum >= (unsigned int)cls.maxClients )
    {
      vertAligna = cls.maxClients;
      horzAligna = s_baseLagTest.testingClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 2941, ASSERT_TYPE_ASSERT, "(unsigned)( s_baseLagTest.testingClientNum ) < (unsigned)( cls.maxClients )", "s_baseLagTest.testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", horzAligna, vertAligna) )
        __debugbreak();
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    UI_GetFontHandle(ActivePlacement, 5, 0.5);
    sampleCount = 64;
    FontHandle = UI_GetFontHandle(ActivePlacement, 5, 0.2);
    if ( s_baseLagTest.sampleCount < 64 )
      sampleCount = s_baseLagTest.sampleCount;
    if ( sampleCount > 0 )
    {
      CL_DrawStretchPic(ActivePlacement, 20.0, 30.0, 210.0, 10.0, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorWhite, cgMedia.whiteMaterial);
      Com_sprintf(dest, 0x40ui64, " LATENCY TEST BASE LAG  Samples: %i", (unsigned int)sampleCount);
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, 20.0, 40.0, 4, 4, 0.2, &colorBlack, 3);
      CL_DrawStretchPic(ActivePlacement, 20.0, 40.0, 210.0, 10.0, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorBlack, cgMedia.whiteMaterial);
      v6 = LODWORD(FLOAT_50_0);
      Com_sprintf(dest, 0x40ui64, " CL | PING |  TIME | DELTA |  AVG");
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, 20.0, 50.0, 4, 4, 0.2, &colorWhite, 3);
      v7 = LOBYTE(s_baseLagTest.sampleCount) - 1;
      v8 = 0;
      if ( cls.maxClients > 0 )
      {
        p_avgTime = &s_baseLagTest.results[0].avgTime;
        v10 = 0i64;
        v11 = v7 & 0x3F;
        do
        {
          if ( CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v8) )
          {
            clientNum = LocalClientGlobals->clientNum;
            if ( clientNum == s_baseLagTest.testingClientNum || clientNum == v8 )
            {
              v13 = v11 + v10;
              if ( clientNum != s_baseLagTest.testingClientNum || v8 == s_baseLagTest.testingClientNum )
              {
                LODWORD(horzAlign) = s_baseLagTest.samples[0][v13].clientTime % 100000;
                LODWORD(fmt) = s_baseLagTest.samples[0][v13].ping;
                Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i |       |", v8, fmt, horzAlign);
              }
              else
              {
                clientTime = s_baseLagTest.samples[0][v13].clientTime;
                if ( clientTime > 0 )
                {
                  v15 = s_baseLagTest.samples[(__int64)s_baseLagTest.testingClientNum][v11].clientTime;
                  if ( v15 > 0 )
                  {
                    LODWORD(s1) = *p_avgTime;
                    LODWORD(vertAlign) = clientTime - v15;
                    LODWORD(horzAlign) = clientTime % 100000;
                    LODWORD(fmt) = s_baseLagTest.samples[0][v13].ping;
                    Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i | %5i | %4i", v8, fmt, horzAlign, vertAlign, s1);
                  }
                  else
                  {
                    LODWORD(vertAlign) = *p_avgTime;
                    LODWORD(horzAlign) = clientTime % 100000;
                    LODWORD(fmt) = s_baseLagTest.samples[0][v13].ping;
                    Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i |   ... | %4i", v8, fmt, horzAlign, vertAlign);
                  }
                }
                else
                {
                  LODWORD(fmt) = *p_avgTime;
                  Com_sprintf(dest, 0x40ui64, " %2i |  ... |   ... |   ... | %4i", v8, fmt);
                }
              }
              if ( (v7 & 1) != 0 )
              {
                v16 = colorWhite;
                v17 = colorBlack;
              }
              else
              {
                v16 = colorBlack;
                v17 = colorWhite;
              }
              v26 = v17;
              color = v16;
              CL_DrawStretchPic(ActivePlacement, 20.0, *(float *)&v6, 210.0, 10.0, 4, 4, 0.0, 0.0, 1.0, 1.0, &color, cgMedia.whiteMaterial);
              v18 = v6;
              *(float *)&v18 = *(float *)&v6 + 10.0;
              v6 = v18;
              UI_DrawText(ActivePlacement, dest, 64, FontHandle, 20.0, *(float *)&v18, 4, 4, 0.2, &v26, 3);
            }
          }
          ++v8;
          v10 += 64i64;
          p_avgTime += 6;
        }
        while ( (int)v8 < cls.maxClients );
      }
    }
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
  int *p_minTime; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

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
    p_minTime = &s_baseLagTest.results[0].minTime;
    do
    {
      if ( v2 != s_baseLagTest.testingClientNum && CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v2) )
      {
        LODWORD(v7) = s_baseLagTest.sampleCount;
        LODWORD(v6) = *p_minTime;
        LODWORD(v5) = *(p_minTime - 1);
        LODWORD(v4) = p_minTime[1];
        Com_Printf(31, "Data,%i,%i,%i,%i,%i,%f,%i\n", (unsigned int)v2, (unsigned int)*(p_minTime - 2), v4, v5, v6, *((float *)p_minTime + 2), v7);
      }
      ++v2;
      p_minTime += 6;
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
  int v5; 
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  ClActiveClientMP *ClientMP; 
  __int64 v10; 
  ClActiveClientMP *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 maxClients; 
  const char *v15; 

  v5 = clientTime;
  v6 = observerClientNum;
  if ( s_baseLagTest.testingClientNum >= 0 )
  {
    Com_Printf(31, "Record Sample time=%i observer=%i\n", clientTime, (unsigned int)observerClientNum);
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    v10 = s_baseLagTest.sampleCount & 0x3F;
    v11 = ClientMP;
    v12 = (v6 << 6) + ((LOBYTE(s_baseLagTest.sampleCount) - 1) & 0x3F);
    if ( v5 >= s_baseLagTest.startTime + 1000 )
    {
      if ( s_baseLagTest.sampleCount <= 0 || s_baseLagTest.samples[0][v12].clientTime )
      {
        if ( cls.maxClients > 0 )
        {
          v13 = 0i64;
          maxClients = (unsigned int)cls.maxClients;
          do
          {
            s_baseLagTest.samples[v13++][v10] = 0i64;
            --maxClients;
          }
          while ( maxClients );
        }
        s_baseLagTest.samples[v6][v10].clientTime = v5;
        s_baseLagTest.samples[v6][v10].ping = ping;
        ++s_baseLagTest.sampleCount;
      }
      else
      {
        s_baseLagTest.samples[0][v12].clientTime = v5;
        s_baseLagTest.samples[0][v12].ping = ping;
      }
      if ( LocalClientGlobals->clientNum == s_baseLagTest.testingClientNum )
      {
        CG_LatencyTestMP_BaseLag_CalcStats(localClientNum);
      }
      else
      {
        Com_Printf(31, "CL_Main_AddReliableCommand baselag sample %i %i\n", (unsigned int)v11->serverTime, (unsigned int)v11->snap.ping);
        v15 = j_va("latencyTest baselag sample %i %i", (unsigned int)v11->serverTime, (unsigned int)v11->snap.ping);
        CL_Main_AddReliableCommand(localClientNum, v15);
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
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  __int64 v7; 
  char v8; 
  const char *v9; 
  unsigned int v10; 
  const char *v11; 
  const char *v13; 
  const char *v15; 
  const char *v17; 
  const char *v19; 
  const char *v21; 
  const char *v23; 
  __int64 v24; 
  char v25; 
  const char *v26; 
  char v27; 
  const char *v28; 
  int v29; 
  const char *v30; 
  int v31; 
  const char *v32; 
  int v33; 
  const char *v34; 
  int v35; 
  __int64 v36; 
  const char *v37; 
  __int64 v38; 
  char v39; 
  const char *v40; 
  __int64 v41; 
  char v42; 
  const char *v43; 
  unsigned int v44; 
  const char *v45; 
  __int64 v46; 
  char v47; 
  const char *v48; 
  char v49; 
  const char *v50; 
  __int64 v51; 
  const char *v52; 
  int v53; 
  const char *v54; 
  int v55; 
  const char *v56; 
  int v57; 
  unsigned int v58; 
  __int64 v59; 
  CgLatencyTestTtkTestResult *v60; 
  __int64 v61; 
  int sampleCount; 
  const char *v63; 
  const char *v64; 
  __int64 v65; 
  char v66; 
  const char *v67; 
  unsigned int v68; 
  const char *v69; 
  char v70; 
  const char *v71; 
  __int64 v72; 
  char v73; 
  const char *v74; 
  __int64 v75; 
  char v76; 
  const char *v77; 
  unsigned int v78; 
  const char *v79; 
  unsigned int v80; 
  const char *v81; 
  char v82; 
  const char *v83; 
  int v84; 
  unsigned int maxClients; 
  ClActiveClientMP *ClientMP; 
  unsigned int v87; 
  ClActiveClientMP *v88; 
  const char *v89; 
  __int64 v90; 
  char v91; 
  const char *v92; 
  char v93; 
  const char *v94; 
  int v95; 
  const char *v96; 
  int v97; 
  const char *v98; 
  bool v99; 
  const char *v100; 
  int v101; 
  const char *v102; 
  const char *v103; 
  __int64 v104; 
  char v105; 
  const char *v106; 
  unsigned int v107; 
  const char *v108; 
  char v109; 
  const char *v110; 
  __int64 v111; 
  char v112; 
  const char *v113; 
  __int64 v114; 
  char v115; 
  const char *v116; 
  unsigned int v117; 
  const char *v118; 
  char v119; 
  const char *v120; 
  int v121; 
  ClActiveClientMP *v122; 
  const char *v123; 
  __int64 v124; 
  char v125; 
  const char *v126; 
  char v127; 
  const char *v128; 
  int v129; 
  const char *v130; 
  unsigned int v131; 
  const char *v132; 
  int v133; 
  char *fmt; 
  __int64 v135; 
  __int64 v136; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( Cmd_Argc() >= 2 && (v4 = Cmd_Argv(1), !strcmp_0(v4, "strafing")) )
  {
    v5 = 0i64;
    if ( Cmd_Argc() == 10 )
    {
      v6 = Cmd_Argv(2);
      v7 = 0i64;
      while ( 1 )
      {
        v8 = v6[v7++];
        if ( v8 != aStart[v7 - 1] )
          break;
        if ( v7 == 6 )
        {
          v9 = Cmd_Argv(3);
          v10 = atoi(v9);
          if ( v10 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3106, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
            __debugbreak();
          v11 = Cmd_Argv(4);
          *(double *)&_XMM0 = atof(v11);
          __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
          v13 = Cmd_Argv(5);
          *(double *)&_XMM0 = atof(v13);
          __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
          v15 = Cmd_Argv(6);
          *(double *)&_XMM0 = atof(v15);
          __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
          v17 = Cmd_Argv(7);
          *(double *)&_XMM0 = atof(v17);
          __asm { vcvtsd2ss xmm9, xmm0, xmm0 }
          v19 = Cmd_Argv(8);
          *(double *)&_XMM0 = atof(v19);
          __asm { vcvtsd2ss xmm10, xmm0, xmm0 }
          v21 = Cmd_Argv(9);
          *(double *)&_XMM0 = atof(v21);
          __asm { vcvtsd2ss xmm11, xmm0, xmm0 }
          if ( v10 >= cls.maxClients )
          {
            LODWORD(v135) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 387, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v135, cls.maxClients) )
              __debugbreak();
          }
          memset_0(s_strafingTest.samples, 0, 0x26E8Cui64);
          s_strafingTest.testingClientNum = v10;
          s_strafingTest.pos.v[0] = *(float *)&_XMM6;
          s_strafingTest.pos.v[1] = *(float *)&_XMM7;
          s_strafingTest.pos.v[2] = *(float *)&_XMM8;
          s_strafingTest.dir.v[0] = *(float *)&_XMM9;
          s_strafingTest.dir.v[1] = *(float *)&_XMM10;
          s_strafingTest.dir.v[2] = *(float *)&_XMM11;
          Com_Printf(31, "Strafing Test Started (Slave)\n");
          return;
        }
      }
    }
    if ( Cmd_Argc() == 3 )
    {
      v23 = Cmd_Argv(2);
      v24 = 0i64;
      while ( 1 )
      {
        v25 = v23[v24++];
        if ( v25 != aStop_0[v24 - 1] )
          break;
        if ( v24 == 5 )
        {
          CG_LatencyTestMP_StrafingTest_Stop(localClientNum);
          return;
        }
      }
    }
    if ( Cmd_Argc() == 7 )
    {
      v26 = Cmd_Argv(2);
      while ( 1 )
      {
        v27 = v26[v5++];
        if ( v27 != aSample[v5 - 1] )
          break;
        if ( v5 == 7 )
        {
          v28 = Cmd_Argv(3);
          v29 = atoi(v28);
          v30 = Cmd_Argv(4);
          v31 = atoi(v30);
          v32 = Cmd_Argv(5);
          v33 = atoi(v32);
          v34 = Cmd_Argv(6);
          v35 = atoi(v34);
          CG_LatencyTestMP_StrafingTest_SetRemoteState(localClientNum, v29, v31, v33, v35);
          return;
        }
      }
    }
    Com_PrintError(31, "Invalid parameters for SVSCMD_LATENCYTEST strafing\n");
  }
  else
  {
    v36 = 0i64;
    if ( Cmd_Argc() >= 2 )
    {
      v37 = Cmd_Argv(1);
      v38 = 0i64;
      while ( 1 )
      {
        v39 = v37[v38++];
        if ( v39 != aTtk[v38 - 1] )
          break;
        if ( v38 == 4 )
        {
          if ( Cmd_Argc() == 4 )
          {
            v40 = Cmd_Argv(2);
            v41 = 0i64;
            while ( 1 )
            {
              v42 = v40[v41++];
              if ( v42 != aStart[v41 - 1] )
                break;
              if ( v41 == 6 )
              {
                v43 = Cmd_Argv(3);
                v44 = atoi(v43);
                if ( v44 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3139, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
                  __debugbreak();
                if ( v44 >= cls.maxClients )
                {
                  LODWORD(v135) = v44;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3140, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v135, cls.maxClients) )
                    __debugbreak();
                }
                memset_0(&s_ttkTest.sampleCount, 0, 0x26484ui64);
                s_ttkTest.testingClientNum = v44;
                Com_Printf(31, "TTK Test Started (Slave)\n");
                return;
              }
            }
          }
          if ( Cmd_Argc() == 3 )
          {
            v45 = Cmd_Argv(2);
            v46 = 0i64;
            while ( 1 )
            {
              v47 = v45[v46++];
              if ( v47 != aStop_0[v46 - 1] )
                break;
              if ( v46 == 5 )
              {
                CG_LatencyTestMP_TTKTest_Stop(localClientNum);
                return;
              }
            }
          }
          if ( Cmd_Argc() == 7 )
          {
            v48 = Cmd_Argv(2);
            while ( 1 )
            {
              v49 = v48[v36++];
              if ( v49 != aSample[v36 - 1] )
                break;
              if ( v36 == 7 )
              {
                v50 = Cmd_Argv(3);
                v51 = atoi(v50);
                v52 = Cmd_Argv(4);
                v53 = atoi(v52);
                v54 = Cmd_Argv(5);
                v55 = atoi(v54);
                v56 = Cmd_Argv(6);
                v57 = atoi(v56);
                if ( s_ttkTest.testingClientNum != -1 )
                {
                  v58 = (LOBYTE(s_ttkTest.sampleCount) - 1) & 0x3F;
                  if ( v53 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1039, ASSERT_TYPE_ASSERT, "(startFiringTime > 0)", (const char *)&queryFormat, "startFiringTime > 0") )
                    __debugbreak();
                  if ( v55 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1040, ASSERT_TYPE_ASSERT, "(deathTime > 0)", (const char *)&queryFormat, "deathTime > 0") )
                    __debugbreak();
                  if ( (unsigned int)v51 >= cls.maxClients )
                  {
                    LODWORD(v135) = v51;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1042, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( cls.maxClients )", "clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v135, cls.maxClients) )
                      __debugbreak();
                  }
                  v59 = v58 + (v51 << 6);
                  v60 = &s_ttkTest.results[v51];
                  v61 = v59;
                  if ( !s_ttkTest.samples[0][v59].deathTime )
                  {
                    s_ttkTest.samples[0][v59].deathTime = v55;
                    sampleCount = 64;
                    s_ttkTest.samples[0][v61].ping = v57;
                    s_ttkTest.samples[0][v61].startFiringTime = v53;
                    if ( s_ttkTest.sampleCount < 64 )
                      sampleCount = s_ttkTest.sampleCount;
                    v60->sumPing += v57;
                    v60->sumTTK += v55 - v53;
                    v60->avgPing = v60->sumPing / sampleCount;
                    v60->avgTTK = v60->sumTTK / sampleCount;
                    LODWORD(v135) = s_ttkTest.samples[0][v61].ping;
                    LODWORD(fmt) = s_ttkTest.samples[0][v61].deathTime;
                    Com_Printf(31, "TTK Sample: %i %06i, %06i, %i\n", (unsigned int)v51, (unsigned int)s_ttkTest.samples[0][v61].startFiringTime, fmt, v135);
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
    if ( Cmd_Argc() >= 2 && (v63 = Cmd_Argv(1), !strcmp_0(v63, "dropshot")) )
    {
      if ( Cmd_Argc() == 4 )
      {
        v64 = Cmd_Argv(2);
        v65 = 0i64;
        while ( 1 )
        {
          v66 = v64[v65++];
          if ( v66 != aStart[v65 - 1] )
            break;
          if ( v65 == 6 )
          {
            v67 = Cmd_Argv(3);
            v68 = atoi(v67);
            if ( v68 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3168, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
              __debugbreak();
            if ( v68 >= cls.maxClients )
            {
              LODWORD(v135) = v68;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3169, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v135, cls.maxClients) )
                __debugbreak();
            }
            memset_0(&s_dropShotTest.shootTime, 0, 0x314ui64);
            s_dropShotTest.testingClientNum = v68;
            Com_Printf(31, "Drop Shot Test Started (Slave)\n");
            return;
          }
        }
      }
      if ( Cmd_Argc() == 3 )
      {
        v69 = Cmd_Argv(2);
        while ( 1 )
        {
          v70 = v69[v36++];
          if ( v70 != aStop_0[v36 - 1] )
            break;
          if ( v36 == 5 )
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
        v71 = Cmd_Argv(1);
        v72 = 0i64;
        while ( 1 )
        {
          v73 = v71[v72++];
          if ( v73 != aLos[v72 - 1] )
            break;
          if ( v72 == 4 )
          {
            if ( Cmd_Argc() == 7 )
            {
              v74 = Cmd_Argv(2);
              v75 = 0i64;
              while ( 1 )
              {
                v76 = v74[v75++];
                if ( v76 != aStart[v75 - 1] )
                  break;
                if ( v75 == 6 )
                {
                  v77 = Cmd_Argv(3);
                  v78 = atoi(v77);
                  v79 = Cmd_Argv(4);
                  v80 = atoi(v79);
                  v81 = Cmd_Argv(5);
                  v82 = atoi(v81);
                  v83 = Cmd_Argv(6);
                  v84 = atoi(v83);
                  if ( v78 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3193, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
                    __debugbreak();
                  maxClients = cls.maxClients;
                  if ( v78 >= cls.maxClients )
                  {
                    LODWORD(v135) = v78;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3194, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v135, cls.maxClients) )
                      __debugbreak();
                    maxClients = cls.maxClients;
                  }
                  if ( v80 >= maxClients )
                  {
                    LODWORD(v136) = maxClients;
                    LODWORD(v135) = v80;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3195, ASSERT_TYPE_ASSERT, "(unsigned)( targetClientNum ) < (unsigned)( cls.maxClients )", "targetClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v135, v136) )
                      __debugbreak();
                  }
                  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
                  v87 = cls.maxClients;
                  v88 = ClientMP;
                  if ( v78 >= cls.maxClients )
                  {
                    LODWORD(v136) = cls.maxClients;
                    LODWORD(v135) = v78;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1567, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v135, v136) )
                      __debugbreak();
                    v87 = cls.maxClients;
                  }
                  if ( v80 >= v87 )
                  {
                    LODWORD(v136) = v87;
                    LODWORD(v135) = v80;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1568, ASSERT_TYPE_ASSERT, "(unsigned)( targetClientNum ) < (unsigned)( cls.maxClients )", "targetClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v135, v136) )
                      __debugbreak();
                  }
                  if ( v78 == v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1569, ASSERT_TYPE_ASSERT, "(testingClientNum != targetClientNum)", (const char *)&queryFormat, "testingClientNum != targetClientNum") )
                    __debugbreak();
                  memset_0(&s_losTest, 0, sizeof(s_losTest));
                  s_losTest.testingClientNum = v78;
                  s_losTest.targetClientNum = v80;
                  s_losTest.testMode[0] = v82;
                  s_losTest.desiredSampleCount = v84;
                  s_losTest.startTime = v88->serverTime;
                  s_losTest.hasLoS = 1;
                  Com_Printf(31, "LoS Test Started (Slave)\n");
                  return;
                }
              }
            }
            if ( Cmd_Argc() == 3 )
            {
              v89 = Cmd_Argv(2);
              v90 = 0i64;
              while ( 1 )
              {
                v91 = v89[v90++];
                if ( v91 != aStop_0[v90 - 1] )
                  break;
                if ( v90 == 5 )
                {
                  CG_LatencyTestMP_LoS_Stop(localClientNum);
                  return;
                }
              }
            }
            if ( Cmd_Argc() == 7 )
            {
              v92 = Cmd_Argv(2);
              while ( 1 )
              {
                v93 = v92[v36++];
                if ( v93 != aSample[v36 - 1] )
                  break;
                if ( v36 == 7 )
                {
                  v94 = Cmd_Argv(3);
                  v95 = atoi(v94);
                  v96 = Cmd_Argv(4);
                  v97 = atoi(v96);
                  v98 = Cmd_Argv(5);
                  v99 = atoi(v98) != 0;
                  v100 = Cmd_Argv(6);
                  v101 = atoi(v100);
                  CG_LatencyTestMP_LoS_RecordSample(localClientNum, v95, v97, v99, v101);
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
      if ( Cmd_Argc() >= 2 && (v102 = Cmd_Argv(1), !strcmp_0(v102, "shootfirst")) )
      {
        if ( Cmd_Argc() == 4 )
        {
          v103 = Cmd_Argv(2);
          v104 = 0i64;
          while ( 1 )
          {
            v105 = v103[v104++];
            if ( v105 != aStart[v104 - 1] )
              break;
            if ( v104 == 6 )
            {
              v106 = Cmd_Argv(3);
              v107 = atoi(v106);
              if ( v107 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3223, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
                __debugbreak();
              if ( v107 >= cls.maxClients )
              {
                LODWORD(v135) = v107;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3224, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v135, cls.maxClients) )
                  __debugbreak();
              }
              memset_0(&s_shootFirstTest.shootTime, 0, 0x708ui64);
              s_shootFirstTest.testingClientNum = v107;
              Com_Printf(31, "Shoot First Test Started (Slave)\n");
              return;
            }
          }
        }
        if ( Cmd_Argc() == 3 )
        {
          v108 = Cmd_Argv(2);
          while ( 1 )
          {
            v109 = v108[v36++];
            if ( v109 != aStop_0[v36 - 1] )
              break;
            if ( v36 == 5 )
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
          v110 = Cmd_Argv(1);
          v111 = 0i64;
          while ( 1 )
          {
            v112 = v110[v111++];
            if ( v112 != aBaselag[v111 - 1] )
              break;
            if ( v111 == 8 )
            {
              if ( Cmd_Argc() == 6 )
              {
                v113 = Cmd_Argv(2);
                v114 = 0i64;
                while ( 1 )
                {
                  v115 = v113[v114++];
                  if ( v115 != aStart[v114 - 1] )
                    break;
                  if ( v114 == 6 )
                  {
                    v116 = Cmd_Argv(3);
                    v117 = atoi(v116);
                    v118 = Cmd_Argv(4);
                    v119 = atoi(v118);
                    v120 = Cmd_Argv(5);
                    v121 = atoi(v120);
                    if ( v117 == LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3247, ASSERT_TYPE_ASSERT, "(testingClientNum != cgameGlob->clientNum)", (const char *)&queryFormat, "testingClientNum != cgameGlob->clientNum") )
                      __debugbreak();
                    if ( v117 >= cls.maxClients )
                    {
                      LODWORD(v135) = v117;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 3248, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v135, cls.maxClients) )
                        __debugbreak();
                    }
                    v122 = ClActiveClientMP::GetClientMP(localClientNum);
                    if ( v117 >= cls.maxClients )
                    {
                      LODWORD(v136) = cls.maxClients;
                      LODWORD(v135) = v117;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 2624, ASSERT_TYPE_ASSERT, "(unsigned)( testingClientNum ) < (unsigned)( cls.maxClients )", "testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v135, v136) )
                        __debugbreak();
                    }
                    memset_0(&s_baseLagTest.testMode[1], 0, 0x1A2D7ui64);
                    s_baseLagTest.testingClientNum = v117;
                    s_baseLagTest.desiredSampleCount = v121;
                    s_baseLagTest.testMode[0] = v119;
                    s_baseLagTest.startTime = v122->serverTime;
                    Com_Printf(31, "BaseLag Test Started (Slave)\n");
                    return;
                  }
                }
              }
              if ( Cmd_Argc() == 3 )
              {
                v123 = Cmd_Argv(2);
                v124 = 0i64;
                while ( 1 )
                {
                  v125 = v123[v124++];
                  if ( v125 != aStop_0[v124 - 1] )
                    break;
                  if ( v124 == 5 )
                  {
                    CG_LatencyTestMP_BaseLag_Stop(localClientNum);
                    return;
                  }
                }
              }
              if ( Cmd_Argc() == 6 )
              {
                v126 = Cmd_Argv(2);
                while ( 1 )
                {
                  v127 = v126[v36++];
                  if ( v127 != aSample[v36 - 1] )
                    break;
                  if ( v36 == 7 )
                  {
                    v128 = Cmd_Argv(3);
                    v129 = atoi(v128);
                    v130 = Cmd_Argv(4);
                    v131 = atoi(v130);
                    v132 = Cmd_Argv(5);
                    v133 = atoi(v132);
                    CG_LatencyTestMP_BaseLag_RecordSample(localClientNum, v129, v131, v133);
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
  float v1; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  char v4; 
  float v5; 
  __int64 sampleCount; 
  float v7; 
  float v8; 
  int v9; 
  const char *v10; 
  vec4_t color; 
  vec4_t v12; 
  char dest[64]; 

  v1 = BOX_TOP_1;
  if ( s_dropShotTest.sampleCount > 0 )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    UI_GetFontHandle(ActivePlacement, FONT_TYPE_2, FONT_SCALE_2);
    FontHandle = UI_GetFontHandle(ActivePlacement, FONT_TYPE_2, HEADER_FONT_SCALE_2);
    v4 = LOBYTE(s_dropShotTest.sampleCount) - 1;
    CL_DrawStretchPic(ActivePlacement, BOX_LEFT_1, v1, BOX_WIDTH_1, LINE_HEIGHT_1, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorWhite, cgMedia.whiteMaterial);
    v5 = v1 + LINE_HEIGHT_1;
    sampleCount = 64i64;
    if ( s_dropShotTest.sampleCount < 64 )
      sampleCount = (unsigned int)s_dropShotTest.sampleCount;
    Com_sprintf(dest, 0x40ui64, " DROP SHOT TEST      Samples: %i", sampleCount);
    UI_DrawText(ActivePlacement, dest, 64, FontHandle, BOX_LEFT_1, v5, 4, 4, HEADER_FONT_SCALE_2, &colorBlack, 3);
    CL_DrawStretchPic(ActivePlacement, BOX_LEFT_1, v5, BOX_WIDTH_1, LINE_HEIGHT_1, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorBlack, cgMedia.whiteMaterial);
    v7 = v5 + LINE_HEIGHT_1;
    Com_sprintf(dest, 0x40ui64, " PING | HIT |  AVG");
    UI_DrawText(ActivePlacement, dest, 64, FontHandle, BOX_LEFT_1, v7, 4, 4, HEADER_FONT_SCALE_2, &colorWhite, 3);
    v8 = 0.0;
    if ( s_dropShotTest.sumHit > 0 )
    {
      v9 = 64;
      if ( s_dropShotTest.sampleCount < 64 )
        v9 = s_dropShotTest.sampleCount;
      v8 = (float)((float)s_dropShotTest.sumHit / (float)v9) * 100.0;
    }
    v10 = " ";
    if ( s_dropShotTest.samples[v4 & 0x3F].hit )
      v10 = "X";
    Com_sprintf(dest, 0x40ui64, " %4i |  %s  | %3.f%%", (unsigned int)s_dropShotTest.samples[v4 & 0x3F].ping, v10, v8);
    color = colorBlack;
    v12 = colorWhite;
    CL_DrawStretchPic(ActivePlacement, BOX_LEFT_1, v7, BOX_WIDTH_1, LINE_HEIGHT_1, 4, 4, 0.0, 0.0, 1.0, 1.0, &color, cgMedia.whiteMaterial);
    UI_DrawText(ActivePlacement, dest, 64, FontHandle, BOX_LEFT_1, v7 + LINE_HEIGHT_1, 4, 4, HEADER_FONT_SCALE_2, &v12, 3);
  }
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
void CG_LatencyTestMP_LoS_CalcStats(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  int v2; 
  CgLatencyTestLosTestData *p_defense; 
  int v4; 
  __int64 v5; 
  CgLatencyTestLosTestSample (*samples)[64]; 
  int *p_maxTime; 
  int sampleCount; 
  int v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int *v14; 
  int clientTime; 
  int v16; 
  int v17; 
  bool v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  CgLatencyTestLosTestSample *v22; 
  int v23; 
  int v24; 
  const cg_t *v25; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v25 = LocalClientGlobals;
  v2 = 0;
  v24 = 0;
  do
  {
    p_defense = &s_losTest.defense;
    if ( !v2 )
      p_defense = &s_losTest.offense;
    v4 = 0;
    if ( cls.maxClients > 0 )
    {
      v5 = 0i64;
      samples = p_defense->samples;
      p_maxTime = &p_defense->results[0].maxTime;
      do
      {
        if ( v4 != s_losTest.testingClientNum )
        {
          if ( CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v4) )
          {
            sampleCount = p_defense->sampleCount;
            v9 = 0;
            v10 = 0;
            *(_QWORD *)(p_maxTime - 1) = 0x7FFFFFFFi64;
            v11 = 0;
            *(p_maxTime - 4) = 0;
            v12 = 0i64;
            v13 = 64;
            if ( sampleCount < 64 )
              v13 = sampleCount;
            if ( v13 > 0 )
            {
              v14 = (int *)samples;
              do
              {
                clientTime = p_defense->samples[(__int64)s_losTest.testingClientNum][v12].clientTime;
                if ( clientTime > 0 && *v14 > 0 )
                {
                  v9 += v14[1];
                  v16 = *v14 - clientTime;
                  v11 += v16;
                  v17 = v16;
                  if ( *p_maxTime > v16 )
                    v17 = *p_maxTime;
                  v18 = *(p_maxTime - 1) < v16;
                  *p_maxTime = v17;
                  if ( v18 )
                    v16 = *(p_maxTime - 1);
                  ++*(p_maxTime - 4);
                  *(p_maxTime - 1) = v16;
                }
                ++v12;
                v14 += 2;
              }
              while ( v12 < v13 );
              v19 = *(p_maxTime - 4);
              if ( v19 )
              {
                *(p_maxTime - 2) = v11 / v19;
                v20 = v11 / v19;
                v21 = 0i64;
                *(p_maxTime - 3) = v9 / v19;
                v22 = p_defense->samples[(__int64)s_losTest.testingClientNum];
                do
                {
                  if ( v22->clientTime > 0 )
                  {
                    v23 = p_defense->samples[v5][v21].clientTime;
                    if ( v23 > 0 )
                      v10 += (v23 - v22->clientTime - v20) * (v23 - v22->clientTime - v20);
                  }
                  ++v21;
                  ++v22;
                }
                while ( v21 < v13 );
                *((float *)p_maxTime + 1) = fsqrt((float)v10 / (float)v19);
              }
            }
          }
          LocalClientGlobals = v25;
        }
        ++v4;
        p_maxTime += 6;
        ++samples;
        ++v5;
      }
      while ( v4 < cls.maxClients );
      v2 = v24;
    }
    v24 = ++v2;
  }
  while ( v2 < 2 );
}

/*
==============
CG_LatencyTestMP_LoS_DrawResults
==============
*/
void CG_LatencyTestMP_LoS_DrawResults(LocalClientNum_t localClientNum)
{
  unsigned int maxClients; 
  __int128 v3; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  unsigned __int8 v6; 
  GfxFont *v7; 
  CgLatencyTestLosTestData *p_defense; 
  int sampleCount; 
  const char *v10; 
  __int128 v11; 
  __int128 v12; 
  unsigned int v13; 
  int v14; 
  int *p_avgTime; 
  __int64 v16; 
  __int64 v17; 
  int clientNum; 
  __int64 v19; 
  int clientTime; 
  int v21; 
  vec4_t v22; 
  vec4_t v23; 
  __int128 v24; 
  __int128 v25; 
  char *fmt; 
  char *fmta; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  __int64 vertAlign; 
  __int64 vertAligna; 
  __int64 s1; 
  char v33; 
  GfxFont *font; 
  vec4_t color; 
  vec4_t v36; 
  char dest[64]; 

  if ( s_losTest.testingClientNum >= 0 )
  {
    maxClients = cls.maxClients;
    if ( s_losTest.testingClientNum >= (unsigned int)cls.maxClients )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1981, ASSERT_TYPE_ASSERT, "(unsigned)( s_losTest.testingClientNum ) < (unsigned)( cls.maxClients )", "s_losTest.testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", s_losTest.testingClientNum, cls.maxClients) )
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
    v3 = LODWORD(FLOAT_30_0);
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    UI_GetFontHandle(ActivePlacement, 5, 0.5);
    v6 = 0;
    font = UI_GetFontHandle(ActivePlacement, 5, 0.2);
    v7 = font;
    v33 = 0;
    do
    {
      p_defense = &s_losTest.defense;
      sampleCount = 64;
      if ( !v6 )
        p_defense = &s_losTest.offense;
      if ( p_defense->sampleCount < 64 )
        sampleCount = p_defense->sampleCount;
      if ( sampleCount > 0 )
      {
        CL_DrawStretchPic(ActivePlacement, 20.0, *(float *)&v3, 210.0, 10.0, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorWhite, cgMedia.whiteMaterial);
        LODWORD(fmt) = sampleCount;
        v10 = "DEFENSE";
        if ( !v6 )
          v10 = "OFFENSE";
        v11 = v3;
        Com_sprintf(dest, 0x40ui64, " LATENCY TEST LoS %s  Samples: %i", v10, fmt);
        UI_DrawText(ActivePlacement, dest, 64, v7, 20.0, *(float *)&v3 + 10.0, 4, 4, 0.2, &colorBlack, 3);
        CL_DrawStretchPic(ActivePlacement, 20.0, *(float *)&v3 + 10.0, 210.0, 10.0, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorBlack, cgMedia.whiteMaterial);
        *(float *)&v11 = (float)(*(float *)&v3 + 10.0) + 10.0;
        v12 = v11;
        Com_sprintf(dest, 0x40ui64, " CL | PING |  TIME | DELTA |  AVG");
        UI_DrawText(ActivePlacement, dest, 64, v7, 20.0, *(float *)&v11, 4, 4, 0.2, &colorWhite, 3);
        v13 = 0;
        v14 = p_defense->sampleCount - 1;
        if ( cls.maxClients > 0 )
        {
          p_avgTime = &p_defense->results[0].avgTime;
          v16 = v14 & 0x3F;
          v17 = 0i64;
          do
          {
            if ( CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v13) )
            {
              clientNum = LocalClientGlobals->clientNum;
              if ( clientNum == s_losTest.testingClientNum || clientNum == v13 )
              {
                v19 = v16 + v17;
                if ( clientNum != s_losTest.testingClientNum || v13 == s_losTest.testingClientNum )
                {
                  LODWORD(horzAligna) = p_defense->samples[0][v19].clientTime % 100000;
                  LODWORD(fmta) = p_defense->samples[0][v19].ping;
                  Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i |       |", v13, fmta, horzAligna);
                }
                else
                {
                  clientTime = p_defense->samples[0][v19].clientTime;
                  if ( clientTime > 0 )
                  {
                    v21 = p_defense->samples[(__int64)s_losTest.testingClientNum][v16].clientTime;
                    if ( v21 > 0 )
                    {
                      LODWORD(s1) = *p_avgTime;
                      LODWORD(vertAligna) = clientTime - v21;
                      LODWORD(horzAligna) = clientTime % 100000;
                      LODWORD(fmta) = p_defense->samples[0][v19].ping;
                      Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i | %5i | %4i", v13, fmta, horzAligna, vertAligna, s1);
                    }
                    else
                    {
                      LODWORD(vertAligna) = *p_avgTime;
                      LODWORD(horzAligna) = clientTime % 100000;
                      LODWORD(fmta) = p_defense->samples[0][v19].ping;
                      Com_sprintf(dest, 0x40ui64, " %2i | %4i | %05i |   ... | %4i", v13, fmta, horzAligna, vertAligna);
                    }
                  }
                  else
                  {
                    LODWORD(fmta) = *p_avgTime;
                    Com_sprintf(dest, 0x40ui64, " %2i |  ... |   ... |   ... | %4i", v13, fmta);
                  }
                }
                if ( (v14 & 1) != 0 )
                {
                  v22 = colorWhite;
                  v23 = colorBlack;
                }
                else
                {
                  v22 = colorBlack;
                  v23 = colorWhite;
                }
                v36 = v23;
                color = v22;
                CL_DrawStretchPic(ActivePlacement, 20.0, *(float *)&v12, 210.0, 10.0, 4, 4, 0.0, 0.0, 1.0, 1.0, &color, cgMedia.whiteMaterial);
                v24 = v12;
                *(float *)&v24 = *(float *)&v12 + 10.0;
                v12 = v24;
                UI_DrawText(ActivePlacement, dest, 64, font, 20.0, *(float *)&v24, 4, 4, 0.2, &v36, 3);
              }
            }
            ++v13;
            v17 += 64i64;
            p_avgTime += 6;
          }
          while ( (int)v13 < cls.maxClients );
          v6 = v33;
          v7 = font;
        }
        v25 = v12;
        *(float *)&v25 = *(float *)&v12 + 10.0;
        v3 = v25;
      }
      v33 = ++v6;
    }
    while ( v6 < 2u );
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
  int *p_minTime; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

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
      p_minTime = &p_defense->results[0].minTime;
      do
      {
        if ( v5 != s_losTest.testingClientNum && CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v5) )
        {
          LODWORD(v11) = p_defense->sampleCount;
          LODWORD(v10) = *p_minTime;
          LODWORD(v9) = *(p_minTime - 1);
          LODWORD(v8) = p_minTime[1];
          LODWORD(v7) = *(p_minTime - 2);
          Com_Printf(31, "%sData,%i,%i,%i,%i,%i,%f,%i\n", v3, (unsigned int)v5, v7, v8, v9, v10, *((float *)p_minTime + 2), v11);
        }
        ++v5;
        p_minTime += 6;
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
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  ClActiveClientMP *ClientMP; 
  CgLatencyTestLosTestData *p_defense; 
  int sampleCount; 
  __int64 v13; 
  CgLatencyTestLosTestSample *v14; 
  int i; 
  __int64 v16; 
  const char *v17; 

  v6 = observerClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  p_defense = &s_losTest.defense;
  if ( hasLoS )
    p_defense = &s_losTest.offense;
  sampleCount = p_defense->sampleCount;
  v13 = p_defense->sampleCount & 0x3F;
  v14 = &p_defense->samples[v6][((unsigned __int8)p_defense->sampleCount - 1) & 0x3F];
  if ( clientTime >= s_losTest.startTime + 1000 )
  {
    if ( sampleCount <= 0 || v14->clientTime )
    {
      for ( i = 0; i < cls.maxClients; p_defense->samples[0][v13 + v16] = 0i64 )
        v16 = (__int64)i++ << 6;
      p_defense->samples[v6][v13].ping = ping;
      p_defense->samples[v6][v13].clientTime = clientTime;
      ++p_defense->sampleCount;
    }
    else
    {
      p_defense->samples[v6][((_BYTE)sampleCount - 1) & 0x3F].ping = ping;
      v14->clientTime = clientTime;
    }
    if ( LocalClientGlobals->clientNum == s_losTest.testingClientNum )
    {
      CG_LatencyTestMP_LoS_CalcStats(localClientNum);
    }
    else
    {
      v17 = j_va("latencyTest los sample %i %i %i", (unsigned int)ClientMP->serverTime, hasLoS, (unsigned int)ClientMP->snap.ping);
      CL_Main_AddReliableCommand(localClientNum, v17);
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
  const dvar_t *v4; 
  bool HeadPosition; 
  bool v6; 
  ClActiveClientMP *ClientMP; 
  __int64 fromServer; 
  int fromServera; 
  __int64 v10; 
  int v11; 
  Physics_RaycastExtendedData extendedData; 
  vec3_t end; 
  vec3_t outPosition; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( s_losTest.testingClientNum >= 0 )
  {
    maxClients = cls.maxClients;
    if ( s_losTest.testingClientNum >= (unsigned int)cls.maxClients )
    {
      v11 = cls.maxClients;
      fromServera = s_losTest.testingClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1764, ASSERT_TYPE_ASSERT, "(unsigned)( s_losTest.testingClientNum ) < (unsigned)( cls.maxClients )", "s_losTest.testingClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", fromServera, v11) )
        __debugbreak();
      maxClients = cls.maxClients;
    }
    if ( s_losTest.targetClientNum >= maxClients )
    {
      LODWORD(v10) = maxClients;
      LODWORD(fromServer) = s_losTest.targetClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_latency_test_mp.cpp", 1765, ASSERT_TYPE_ASSERT, "(unsigned)( s_losTest.targetClientNum ) < (unsigned)( cls.maxClients )", "s_losTest.targetClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", fromServer, v10) )
        __debugbreak();
    }
    if ( s_losTest.testingClientNum == LocalClientGlobals->clientNum && s_losTest.desiredSampleCount > 0 && s_losTest.defense.sampleCount >= s_losTest.desiredSampleCount && s_losTest.offense.sampleCount >= s_losTest.desiredSampleCount )
    {
      if ( !s_losTest.endTime )
        s_losTest.endTime = LocalClientGlobals->time;
    }
    else
    {
      v4 = DVARBOOL_physics_allowQueryDisabling;
      if ( !DVARBOOL_physics_allowQueryDisabling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_allowQueryDisabling") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled )
      {
        HeadPosition = CG_LatencyTestMP_LoS_GetHeadPosition(localClientNum, s_losTest.testingClientNum, &outPosition);
        if ( HeadPosition | CG_LatencyTestMP_LoS_GetHeadPosition(localClientNum, s_losTest.targetClientNum, &end) )
        {
          extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          extendedData.ignoreBodies = NULL;
          extendedData.phaseSelection = All;
          extendedData.collisionBuffer = 0.0;
          extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
          *(_WORD *)&extendedData.collectInsideHits = 256;
          extendedData.contents = 6145;
          v6 = PhysicsQuery_ImmediateRaycastSightCheck(PHYSICS_WORLD_ID_CLIENT_FIRST, &outPosition, &end, &extendedData);
          if ( v6 && Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawLatencyTest, "cg_drawLatencyTest") )
          {
            CG_DebugSphere(&outPosition, 0.75, &colorMagenta, 0, 0);
            CG_DebugSphere(&end, 0.75, &colorMagenta, 0, 0);
            CL_AddDebugLine(&outPosition, &end, &colorYellow, 0, 0, 0);
          }
          if ( v6 != s_losTest.hasLoS )
          {
            Com_Printf(31, "%i Line of sight change: hasLoS=%i\n", (unsigned int)LocalClientGlobals->time, v6);
            s_losTest.hasLoS = v6;
            ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
            CG_LatencyTestMP_LoS_RecordSample(localClientNum, LocalClientGlobals->clientNum, LocalClientGlobals->time, v6, ClientMP->snap.ping);
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
  float v1; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  float v4; 
  __int64 sampleCount; 
  float v6; 
  CgLatencyTestShootFirstTestSample *v7; 
  __int64 h; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  __int64 s1; 
  vec4_t color; 
  vec4_t v13; 
  char dest[64]; 

  v1 = BOX_TOP_2;
  if ( s_shootFirstTest.sampleCount > 0 )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    UI_GetFontHandle(ActivePlacement, FONT_TYPE_3, FONT_SCALE_3);
    FontHandle = UI_GetFontHandle(ActivePlacement, FONT_TYPE_3, HEADER_FONT_SCALE_3);
    CL_DrawStretchPic(ActivePlacement, BOX_LEFT_2, v1, BOX_WIDTH_2, LINE_HEIGHT_2, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorWhite, cgMedia.whiteMaterial);
    v4 = v1 + LINE_HEIGHT_2;
    sampleCount = 64i64;
    if ( s_shootFirstTest.sampleCount < 64 )
      sampleCount = (unsigned int)s_shootFirstTest.sampleCount;
    Com_sprintf(dest, 0x40ui64, " SHOOT FIRST TEST      Samples: %i", sampleCount);
    UI_DrawText(ActivePlacement, dest, 64, FontHandle, BOX_LEFT_2, v4, 4, 4, HEADER_FONT_SCALE_3, &colorBlack, 3);
    CL_DrawStretchPic(ActivePlacement, BOX_LEFT_2, v4, BOX_WIDTH_2, LINE_HEIGHT_2, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorBlack, cgMedia.whiteMaterial);
    v6 = v4 + LINE_HEIGHT_2;
    Com_sprintf(dest, 0x40ui64, " PING | SHOOT |  HIT |  DMG | DEATH");
    UI_DrawText(ActivePlacement, dest, 64, FontHandle, BOX_LEFT_2, v6, 4, 4, HEADER_FONT_SCALE_3, &colorWhite, 3);
    v7 = &s_shootFirstTest.samples[(LOBYTE(s_shootFirstTest.sampleCount) - 1) & 0x3F];
    LODWORD(s1) = v7->deathTime % 10000;
    LODWORD(vertAlign) = v7->dmgIndicatorTime % 10000;
    LODWORD(horzAlign) = v7->hitMarkerTime % 10000;
    LODWORD(h) = v7->shootTime % 10000;
    Com_sprintf(dest, 0x40ui64, " %4i | %4i | %4i | %4i | %4i", (unsigned int)v7->ping, h, horzAlign, vertAlign, s1);
    color = colorBlack;
    v13 = colorWhite;
    CL_DrawStretchPic(ActivePlacement, BOX_LEFT_2, v6, BOX_WIDTH_2, LINE_HEIGHT_2, 4, 4, 0.0, 0.0, 1.0, 1.0, &color, cgMedia.whiteMaterial);
    UI_DrawText(ActivePlacement, dest, 64, FontHandle, BOX_LEFT_2, v6 + LINE_HEIGHT_2, 4, 4, HEADER_FONT_SCALE_3, &v13, 3);
  }
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
  __int128 v2; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  int sampleCount; 
  int *sampleCountDir; 
  float v8; 
  unsigned __int8 v9; 
  __int64 v10; 
  GfxFont *v11; 
  int v12; 
  int v13; 
  CgLatencyTestStrafingTestSample *v14; 
  __int128 v15; 
  int v16; 
  const char *v17; 
  __int128 v18; 
  unsigned int v19; 
  __int64 v20; 
  CgLatencyTestStrafingTestRemoteClient *remoteClients; 
  int clientNum; 
  vec4_t v23; 
  vec4_t v24; 
  int remoteClientTime; 
  __int128 v26; 
  __int128 v27; 
  __int64 x; 
  __int64 xa; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  __int64 s1; 
  unsigned __int8 v33; 
  GfxFont *font; 
  int *v35; 
  vec4_t color; 
  vec4_t v37; 
  char dest[64]; 

  v2 = LODWORD(BOX_TOP);
  if ( s_strafingTest.sampleCount > 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    UI_GetFontHandle(ActivePlacement, FONT_TYPE_0, FONT_SCALE_0);
    FontHandle = UI_GetFontHandle(ActivePlacement, FONT_TYPE_0, HEADER_FONT_SCALE_0);
    sampleCount = s_strafingTest.sampleCount;
    sampleCountDir = s_strafingTest.sampleCountDir;
    v8 = LINE_HEIGHT;
    v9 = 0;
    v35 = s_strafingTest.sampleCountDir;
    v33 = 0;
    v10 = 0i64;
    font = FontHandle;
    v11 = FontHandle;
    do
    {
      if ( *sampleCountDir > 0 )
      {
        v12 = 1;
        if ( sampleCount >= 1 )
        {
          do
          {
            v13 = ((_BYTE)sampleCount - (_BYTE)v12) & 0x3F;
            if ( s_strafingTest.samples[((_BYTE)sampleCount - (_BYTE)v12) & 0x3F].strafeDir == v9 )
              break;
            ++v12;
          }
          while ( v12 <= sampleCount );
          v14 = &s_strafingTest.samples[v13];
          CL_DrawStretchPic(ActivePlacement, BOX_LEFT, *(float *)&v2, BOX_WIDTH, v8, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorWhite, cgMedia.whiteMaterial);
          v15 = v2;
          *(float *)&v15 = *(float *)&v2 + LINE_HEIGHT;
          v16 = 64;
          v17 = "RIGHT";
          if ( *sampleCountDir < 64 )
            v16 = *sampleCountDir;
          LODWORD(x) = v16;
          if ( !v9 )
            v17 = "LEFT";
          Com_sprintf(dest, 0x40ui64, " LATENCY TEST STRAFE %s      Samples: %i", v17, x);
          UI_DrawText(ActivePlacement, dest, 64, v11, BOX_LEFT, *(float *)&v15, 4, 4, HEADER_FONT_SCALE_0, &colorBlack, 3);
          CL_DrawStretchPic(ActivePlacement, BOX_LEFT, *(float *)&v15, BOX_WIDTH, LINE_HEIGHT, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorBlack, cgMedia.whiteMaterial);
          *(float *)&v15 = *(float *)&v15 + LINE_HEIGHT;
          v18 = v15;
          Com_sprintf(dest, 0x40ui64, " CL | PING | CL TIME | DELTA | AVG");
          UI_DrawText(ActivePlacement, dest, 64, v11, BOX_LEFT, *(float *)&v15, 4, 4, HEADER_FONT_SCALE_0, &colorWhite, 3);
          v19 = 0;
          v20 = 0i64;
          if ( cls.maxClients > 0 )
          {
            remoteClients = v14->remoteClients;
            while ( 1 )
            {
              clientNum = LocalClientGlobals->clientNum;
              if ( clientNum == v19 || clientNum == s_strafingTest.testingClientNum && CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v19) )
                break;
LABEL_29:
              ++v19;
              ++v20;
              ++remoteClients;
              if ( (int)v19 >= cls.maxClients )
              {
                v9 = v33;
                sampleCountDir = v35;
                goto LABEL_31;
              }
            }
            if ( v19 == s_strafingTest.testingClientNum || remoteClients->remoteClientTime )
            {
              if ( v14->state[0] )
                goto LABEL_21;
LABEL_19:
              v23 = colorBlack;
              v24 = colorWhite;
            }
            else
            {
              if ( v14->state[0] )
                goto LABEL_19;
LABEL_21:
              v24 = colorBlack;
              v23 = colorWhite;
            }
            v37 = v24;
            color = v23;
            if ( v19 == s_strafingTest.testingClientNum || v19 == LocalClientGlobals->clientNum )
            {
              LODWORD(horzAlign) = v14->clientTime % 10000;
              LODWORD(xa) = v14->ping;
              Com_sprintf(dest, 0x40ui64, " %2i | %4i |   %04i  |       |      ", v19, xa, horzAlign);
            }
            else
            {
              remoteClientTime = remoteClients->remoteClientTime;
              if ( remoteClients->remoteClientTime )
              {
                LODWORD(s1) = s_strafingTest.clientResults[0][v20 + v10].avgDeltaClientTime % 10000;
                LODWORD(vertAlign) = (remoteClientTime - v14->clientTime) % 10000;
                LODWORD(horzAlign) = remoteClientTime % 10000;
                LODWORD(xa) = remoteClients->remotePing;
                Com_sprintf(dest, 0x40ui64, " %2i | %4i |   %04i  | %5i | %4i", v19, xa, horzAlign, vertAlign, s1);
              }
              else
              {
                Com_sprintf(dest, 0x40ui64, " %2i |  ... |     ... |   ... |  ...", v19);
              }
            }
            CL_DrawStretchPic(ActivePlacement, BOX_LEFT, *(float *)&v18, BOX_WIDTH, LINE_HEIGHT, 4, 4, 0.0, 0.0, 1.0, 1.0, &color, cgMedia.whiteMaterial);
            v26 = v18;
            *(float *)&v26 = *(float *)&v18 + LINE_HEIGHT;
            v18 = v26;
            UI_DrawText(ActivePlacement, dest, 64, font, BOX_LEFT, *(float *)&v26, 4, 4, HEADER_FONT_SCALE_0, &v37, 3);
            goto LABEL_29;
          }
LABEL_31:
          v8 = LINE_HEIGHT;
          sampleCount = s_strafingTest.sampleCount;
          v11 = font;
          v27 = v18;
          *(float *)&v27 = *(float *)&v18 + LINE_HEIGHT;
          v2 = v27;
        }
      }
      ++v9;
      ++sampleCountDir;
      v10 += 200i64;
      v33 = v9;
      v35 = sampleCountDir;
    }
    while ( v9 < 2u );
  }
}

/*
==============
CG_LatencyTestMP_StrafingTest_PrintResult_f
==============
*/
void CG_LatencyTestMP_StrafingTest_PrintResult_f()
{
  LocalClientNum_t v0; 
  unsigned __int8 v1; 
  int *sampleCountDir; 
  __int64 v3; 
  const cg_t *v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  int *p_clientTime; 
  __int64 sampleCount; 
  int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  int *v23; 
  cg_t *LocalClientGlobals; 

  v0 = Cmd_LocalClientNum();
  v1 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(v0);
  sampleCountDir = s_strafingTest.sampleCountDir;
  v3 = 0i64;
  v23 = s_strafingTest.sampleCountDir;
  v4 = LocalClientGlobals;
  do
  {
    if ( *sampleCountDir > 0 )
    {
      v5 = "Left";
      if ( v1 )
        v5 = "Right";
      Com_Printf(31, "Strafing %s\n", v5);
      Com_Printf(31, "ClientNum, Max, Avg, Min, StdDev\n");
      v6 = 0;
      v7 = 0i64;
      if ( cls.maxClients > 0 )
      {
        v8 = 10i64;
        do
        {
          if ( v6 != s_strafingTest.testingClientNum && CG_LatencyTestMP_IsClientActive(v4, v6) )
          {
            v9 = v3 + v7;
            v10 = 0i64;
            v11 = 0;
            v12 = 0;
            v13 = 0x7FFFFFFF;
            if ( s_strafingTest.sampleCount > 0 )
            {
              p_clientTime = &s_strafingTest.samples[0].clientTime;
              sampleCount = (unsigned int)s_strafingTest.sampleCount;
              do
              {
                if ( *((_BYTE *)p_clientTime - 11) == v1 )
                {
                  v16 = p_clientTime[v8 - 3];
                  if ( v16 > 0 )
                  {
                    v17 = v16 - *p_clientTime;
                    v18 = v17;
                    if ( (int)v10 > v17 )
                      v18 = v10;
                    v10 = v18;
                    v19 = v17;
                    if ( v13 < v17 )
                      v19 = v13;
                    v20 = v17 - s_strafingTest.clientResults[0][v9].avgDeltaClientTime;
                    v13 = v19;
                    v11 += v20 * v20;
                    ++v12;
                  }
                }
                p_clientTime += 610;
                --sampleCount;
              }
              while ( sampleCount );
              v4 = LocalClientGlobals;
            }
            LODWORD(v22) = v13;
            LODWORD(v21) = s_strafingTest.clientResults[0][v9].avgDeltaClientTime;
            Com_Printf(31, "%i, %i, %i, %i, %f\n", (unsigned int)v6, v10, v21, v22, fsqrt((float)v11 / (float)v12));
          }
          ++v6;
          ++v7;
          v8 += 3i64;
        }
        while ( v6 < cls.maxClients );
        sampleCountDir = v23;
      }
    }
    ++sampleCountDir;
    ++v1;
    v3 += 200i64;
    v23 = sampleCountDir;
  }
  while ( v1 < 2u );
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
  centity_t *Entity; 
  const char *v5; 

  v0 = Cmd_LocalClientNum();
  v1 = v0;
  if ( s_strafingTest.testingClientNum == -1 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(v0);
    Entity = CG_GetEntity(v1, LocalClientGlobals->clientNum);
    if ( Entity )
    {
      memset_0(&s_strafingTest, 0, sizeof(s_strafingTest));
      s_strafingTest.testingClientNum = LocalClientGlobals->clientNum;
      CG_GetPoseOrigin(&Entity->pose, &s_strafingTest.pos);
      s_strafingTest.dir = Entity->pose.angles;
      v5 = j_va("latencyTest strafing start %.6f %.6f %.6f %.6f %.6f %.6f", s_strafingTest.pos.v[0], s_strafingTest.pos.v[1], s_strafingTest.pos.v[2], s_strafingTest.dir.v[0], s_strafingTest.dir.v[1], s_strafingTest.dir.v[2]);
      CL_Main_AddReliableCommand(v1, v5);
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
  __int128 v1; 
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  const dvar_t *v5; 
  const DObj *ClientDObj; 
  const dvar_t *v7; 
  __int128 v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v17; 
  const dvar_t *v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  const dvar_t *v23; 
  float v24; 
  int v25; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v28; 
  vec3_t out; 
  vec3_t outOrigin; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  vec3_t v33; 
  tmat33_t<vec3_t> outTagMat; 
  __int128 v35; 

  if ( s_strafingTest.testingClientNum == -1 )
    return;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Entity = CG_GetEntity(localClientNum, s_strafingTest.testingClientNum);
  if ( !Entity )
    return;
  memset(&axis, 0, sizeof(axis));
  if ( s_strafingTest.testingClientNum != LocalClientGlobals->clientNum )
  {
    v5 = DVARINT_cg_latencyTestMode;
    if ( !DVARINT_cg_latencyTestMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_latencyTestMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( !v5->current.integer )
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
  v7 = DVARBOOL_cg_drawLatencyTest;
  v9 = LODWORD(outOrigin.v[0]);
  *(float *)&v9 = outOrigin.v[0] - s_strafingTest.pos.v[0];
  v8 = v9;
  outOrigin.v[2] = s_strafingTest.pos.v[2];
  v11 = outOrigin.v[1] - s_strafingTest.pos.v[1];
  v10 = outOrigin.v[1] - s_strafingTest.pos.v[1];
  if ( !DVARBOOL_cg_drawLatencyTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLatencyTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    CG_DebugLine(&s_strafingTest.pos, &outOrigin, &colorYellow, 0, 1);
  v12 = v11 * v11;
  if ( s_strafingTest.sampleCount || (float)((float)((float)(*(float *)&v8 * *(float *)&v8) + v12) + (float)(0.0 * 0.0)) >= 400.0 )
  {
    v35 = v1;
    v13 = v8;
    *(float *)&v13 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + v12) + (float)(0.0 * 0.0));
    _XMM3 = v13;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm6, xmm0
    }
    v17 = *(float *)&v8 * (float)(1.0 / *(float *)&_XMM0);
    AnglesToAxis(&s_strafingTest.dir, (tmat33_t<vec3_t> *)&axis);
    in1.v[0] = 0.0;
    in1.v[1] = FLOAT_1_0;
    in1.v[2] = 0.0;
    MatrixTransformVector43(&in1, &axis, &out);
    v18 = DVARBOOL_cg_drawLatencyTest;
    if ( !DVARBOOL_cg_drawLatencyTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLatencyTest") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
    {
      v33.v[0] = FLOAT_200_0;
      v33.v[1] = 0.0;
      v33.v[2] = 0.0;
      MatrixTransformVector43(&v33, &axis, &v28);
      start.v[0] = s_strafingTest.pos.v[0] + v28.v[0];
      start.v[1] = s_strafingTest.pos.v[1] + v28.v[1];
      start.v[2] = s_strafingTest.pos.v[2] + v28.v[2];
      end.v[0] = s_strafingTest.pos.v[0] - v28.v[0];
      end.v[1] = s_strafingTest.pos.v[1] - v28.v[1];
      end.v[2] = s_strafingTest.pos.v[2] - v28.v[2];
      CG_DebugLine(&start, &end, &colorYellow, 0, 1);
      v19 = (float)(200.0 * out.v[0]) + s_strafingTest.pos.v[0];
      v20 = (float)(200.0 * out.v[1]) + s_strafingTest.pos.v[1];
      v21 = (float)(200.0 * out.v[2]) + s_strafingTest.pos.v[2];
      start.v[0] = v19 + v28.v[0];
      start.v[1] = v20 + v28.v[1];
      start.v[2] = v21 + v28.v[2];
      end.v[0] = v19 - v28.v[0];
      end.v[1] = v20 - v28.v[1];
      end.v[2] = v21 - v28.v[2];
      CG_DebugLine(&start, &end, &colorYellow, 0, 1);
      v22 = (float)(-200.0 * out.v[2]) + s_strafingTest.pos.v[2];
      start.v[0] = (float)((float)(-200.0 * out.v[0]) + s_strafingTest.pos.v[0]) + v28.v[0];
      start.v[1] = (float)((float)(-200.0 * out.v[1]) + s_strafingTest.pos.v[1]) + v28.v[1];
      start.v[2] = v22 + v28.v[2];
      end.v[0] = (float)((float)(-200.0 * out.v[0]) + s_strafingTest.pos.v[0]) - v28.v[0];
      end.v[1] = (float)((float)(-200.0 * out.v[1]) + s_strafingTest.pos.v[1]) - v28.v[1];
      end.v[2] = v22 - v28.v[2];
      CG_DebugLine(&start, &end, &colorYellow, 0, 1);
    }
    v23 = DVARBOOL_cg_drawLatencyTest;
    if ( !DVARBOOL_cg_drawLatencyTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLatencyTest") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
    {
      start.v[0] = (float)(line_length * axis.m[0].v[0]) + s_strafingTest.pos.v[0];
      start.v[1] = (float)(line_length * axis.m[0].v[1]) + s_strafingTest.pos.v[1];
      start.v[2] = (float)(line_length * axis.m[0].v[2]) + s_strafingTest.pos.v[2];
      CG_DebugLine(&s_strafingTest.pos, &start, &colorRed, 0, 1);
      start.v[0] = (float)(line_length * axis.m[1].v[0]) + s_strafingTest.pos.v[0];
      start.v[1] = (float)(line_length * axis.m[1].v[1]) + s_strafingTest.pos.v[1];
      start.v[2] = (float)(line_length * axis.m[1].v[2]) + s_strafingTest.pos.v[2];
      CG_DebugLine(&s_strafingTest.pos, &start, &colorGreen, 0, 1);
      start.v[0] = (float)(line_length * axis.m[2].v[0]) + s_strafingTest.pos.v[0];
      start.v[1] = (float)(line_length * axis.m[2].v[1]) + s_strafingTest.pos.v[1];
      start.v[2] = (float)(line_length * axis.m[2].v[2]) + s_strafingTest.pos.v[2];
      CG_DebugLine(&s_strafingTest.pos, &start, &colorBlue, 0, 1);
    }
    v24 = (float)((float)(v17 * out.v[0]) + (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * out.v[1])) + (float)((float)(0.0 * (float)(1.0 / *(float *)&_XMM0)) * out.v[2]);
    if ( v24 > 0.0 != lastSide )
    {
      lastSide = v24 > 0.0;
      v25 = (lastState[v24 <= 0.0] - 1) & 1;
      lastState[v24 <= 0.0] = v25;
      CG_LatencyTestMP_StrafingTest_ToggleState(localClientNum, (CgLatencyTestState)v25, (CgLatencyTestStrafeDir)(v24 <= 0.0));
    }
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
  __int128 v3; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  __int64 v7; 
  __int128 v8; 
  __int64 sampleCount; 
  __int128 v10; 
  int v11; 
  int *p_ping; 
  int *p_avgTTK; 
  int clientNum; 
  int v15; 
  int v16; 
  vec4_t v17; 
  vec4_t v18; 
  __int128 v19; 
  __int64 h; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  __int64 s1; 
  __int64 v24; 
  vec4_t color; 
  vec4_t v26; 
  char dest[64]; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v3 = LODWORD(BOX_TOP_0);
  if ( s_ttkTest.sampleCount > 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    UI_GetFontHandle(ActivePlacement, FONT_TYPE_1, FONT_SCALE_1);
    FontHandle = UI_GetFontHandle(ActivePlacement, FONT_TYPE_1, HEADER_FONT_SCALE_1);
    v7 = (LOBYTE(s_ttkTest.sampleCount) - 1) & 0x3F;
    CL_DrawStretchPic(ActivePlacement, BOX_LEFT_0, *(float *)&v3, BOX_WIDTH_0, LINE_HEIGHT_0, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorWhite, cgMedia.whiteMaterial);
    v8 = v3;
    *(float *)&v8 = *(float *)&v3 + LINE_HEIGHT_0;
    sampleCount = 64i64;
    if ( s_ttkTest.sampleCount < 64 )
      sampleCount = (unsigned int)s_ttkTest.sampleCount;
    Com_sprintf(dest, 0x40ui64, " LATENCY TEST TTK      Samples: %i", sampleCount);
    UI_DrawText(ActivePlacement, dest, 64, FontHandle, BOX_LEFT_0, *(float *)&v8, 4, 4, HEADER_FONT_SCALE_1, &colorBlack, 3);
    CL_DrawStretchPic(ActivePlacement, BOX_LEFT_0, *(float *)&v8, BOX_WIDTH_0, LINE_HEIGHT_0, 4, 4, 0.0, 0.0, 1.0, 1.0, &colorBlack, cgMedia.whiteMaterial);
    *(float *)&v8 = *(float *)&v8 + LINE_HEIGHT_0;
    v10 = v8;
    Com_sprintf(dest, 0x40ui64, " CL | PING | FIRING | DEATH |  TTK |  AVG");
    UI_DrawText(ActivePlacement, dest, 64, FontHandle, BOX_LEFT_0, *(float *)&v8, 4, 4, HEADER_FONT_SCALE_1, &colorWhite, 3);
    v11 = 0;
    if ( cls.maxClients > 0 )
    {
      p_ping = &s_ttkTest.samples[0][v7].ping;
      p_avgTTK = &s_ttkTest.results[0].avgTTK;
      do
      {
        if ( CG_LatencyTestMP_IsClientActive(LocalClientGlobals, v11) && v11 < 3 )
        {
          clientNum = LocalClientGlobals->clientNum;
          if ( clientNum == s_ttkTest.testingClientNum || clientNum == v11 )
          {
            v15 = *(p_ping - 1);
            v16 = *(p_ping - 2);
            if ( v15 <= 0 )
            {
              if ( v16 <= 0 )
              {
                LODWORD(horzAlign) = *p_avgTTK % 10000;
                LODWORD(h) = *p_ping;
                Com_sprintf(dest, 0x40ui64, " %2i | %4i |    ... |   ... |  ... | %4i", (unsigned int)v11, h, horzAlign);
              }
              else
              {
                LODWORD(s1) = *p_avgTTK % 10000;
                LODWORD(vertAlign) = (ClientMP->serverTime - v16) % 10000;
                LODWORD(horzAlign) = v16 % 100000;
                LODWORD(h) = *p_ping;
                Com_sprintf(dest, 0x40ui64, " %2i | %4i |  %05i |   ... | %4i | %4i", (unsigned int)v11, h, horzAlign, vertAlign, s1);
              }
              v17 = colorWhite;
              v18 = colorBlack;
            }
            else
            {
              LODWORD(v24) = *p_avgTTK % 10000;
              LODWORD(s1) = (v15 - v16) % 10000;
              LODWORD(vertAlign) = v15 % 100000;
              LODWORD(horzAlign) = v16 % 100000;
              LODWORD(h) = *p_ping;
              Com_sprintf(dest, 0x40ui64, " %2i | %4i |  %05i | %05i | %4i | %4i", (unsigned int)v11, h, horzAlign, vertAlign, s1, v24);
              v17 = colorBlack;
              v18 = colorWhite;
            }
            color = v17;
            v26 = v18;
            CL_DrawStretchPic(ActivePlacement, BOX_LEFT_0, *(float *)&v10, BOX_WIDTH_0, LINE_HEIGHT_0, 4, 4, 0.0, 0.0, 1.0, 1.0, &color, cgMedia.whiteMaterial);
            v19 = v10;
            *(float *)&v19 = *(float *)&v10 + LINE_HEIGHT_0;
            v10 = v19;
            UI_DrawText(ActivePlacement, dest, 64, FontHandle, BOX_LEFT_0, *(float *)&v19, 4, 4, HEADER_FONT_SCALE_1, &v26, 3);
          }
        }
        ++v11;
        p_ping += 192;
        p_avgTTK += 4;
      }
      while ( v11 < cls.maxClients );
    }
  }
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

