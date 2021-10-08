/*
==============
SV_LatencyTestMP_ExecuteCommand_f
==============
*/

void __fastcall SV_LatencyTestMP_ExecuteCommand_f(SvClientMP *cl)
{
  ?SV_LatencyTestMP_ExecuteCommand_f@@YAXPEAVSvClientMP@@@Z(cl);
}

/*
==============
SV_LatencyTestMP_ExecuteCommand_f
==============
*/
void SV_LatencyTestMP_ExecuteCommand_f(SvClientMP *cl)
{
  gentity_s *gentity; 
  unsigned int number; 
  const char *v10; 
  __int64 v11; 
  const char *v12; 
  __int64 v13; 
  char v14; 
  const char *v15; 
  const char *v17; 
  const char *v19; 
  const char *v21; 
  const char *v23; 
  const char *v25; 
  const char *v34; 
  const char *v41; 
  __int64 v42; 
  char v43; 
  const char *v44; 
  const char *v45; 
  char v46; 
  unsigned int v47; 
  int v48; 
  const char *v49; 
  __int64 v50; 
  const char *v51; 
  __int64 v52; 
  char v53; 
  const char *v54; 
  __int64 v55; 
  char v56; 
  const char *v57; 
  const char *v58; 
  __int64 v59; 
  char v60; 
  const char *v61; 
  const char *v62; 
  char v63; 
  unsigned int v64; 
  int v65; 
  const char *v66; 
  const char *v67; 
  __int64 v68; 
  char v69; 
  const char *v70; 
  const char *v71; 
  __int64 v72; 
  char v73; 
  const char *v74; 
  const char *v75; 
  __int64 v76; 
  char v77; 
  const char *v78; 
  __int64 v79; 
  char v80; 
  unsigned int v81; 
  int v82; 
  int v83; 
  const char *v84; 
  const char *v85; 
  __int64 v86; 
  char v87; 
  const char *v88; 
  const char *v89; 
  __int64 v90; 
  char v91; 
  unsigned int v92; 
  int v93; 
  const char *v94; 
  const char *v95; 
  __int64 v96; 
  char v97; 
  const char *v98; 
  const char *v99; 
  __int64 v100; 
  char v101; 
  const char *v102; 
  const char *v103; 
  __int64 v104; 
  char v105; 
  const char *v106; 
  __int64 v107; 
  char v108; 
  const char *v109; 
  unsigned int v110; 
  const char *v111; 
  int v112; 
  const char *v113; 
  const char *v114; 
  __int64 v115; 
  char v116; 
  const char *v117; 
  const char *v118; 
  char v119; 
  const char *v120; 
  unsigned int v121; 
  const char *v122; 
  char *fmt; 
  char *fmta; 
  __int64 v125; 
  __int64 v126; 
  __int64 v127; 
  __int64 v128; 
  __int64 v129; 

  gentity = cl->gentity;
  if ( gentity )
  {
    number = gentity->s.number;
    if ( SV_Cmd_Argc() >= 2 && (v10 = SV_Cmd_Argv(1), !strcmp_0(v10, "strafing")) )
    {
      v11 = 0i64;
      if ( SV_Cmd_Argc() == 9 )
      {
        v12 = SV_Cmd_Argv(2);
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
              vmovaps [rsp+0B8h+var_18], xmm6
              vmovaps [rsp+0B8h+var_28], xmm7
              vmovaps [rsp+0B8h+var_38], xmm8
              vmovaps [rsp+0B8h+var_48], xmm9
              vmovaps [rsp+0B8h+var_58], xmm10
              vmovaps [rsp+0B8h+var_68], xmm11
            }
            s_testingClientNum = number;
            v15 = SV_Cmd_Argv((int)v13 - 3);
            *(double *)&_XMM0 = atof(v15);
            __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
            v17 = SV_Cmd_Argv(4);
            *(double *)&_XMM0 = atof(v17);
            __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
            v19 = SV_Cmd_Argv(5);
            *(double *)&_XMM0 = atof(v19);
            __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
            v21 = SV_Cmd_Argv(6);
            *(double *)&_XMM0 = atof(v21);
            __asm { vcvtsd2ss xmm9, xmm0, xmm0 }
            v23 = SV_Cmd_Argv(7);
            *(double *)&_XMM0 = atof(v23);
            __asm { vcvtsd2ss xmm10, xmm0, xmm0 }
            v25 = SV_Cmd_Argv(8);
            *(double *)&_XMM0 = atof(v25);
            __asm { vcvtsd2ss xmm11, xmm0, xmm0 }
            if ( (int)SvClient::ms_clientCount > 0 )
            {
              do
              {
                if ( SvClientMP::GetMpClient(v11)->state == CS_ACTIVE && (_DWORD)v11 != s_testingClientNum )
                {
                  __asm
                  {
                    vcvtss2sd xmm0, xmm11, xmm11
                    vmovsd  [rsp+0B8h+var_78], xmm0
                    vcvtss2sd xmm1, xmm10, xmm10
                    vmovsd  [rsp+0B8h+var_80], xmm1
                    vcvtss2sd xmm2, xmm9, xmm9
                    vmovsd  [rsp+0B8h+var_88], xmm2
                    vcvtss2sd xmm4, xmm8, xmm8
                    vcvtss2sd xmm3, xmm6, xmm6
                    vcvtss2sd xmm5, xmm7, xmm7
                    vmovsd  [rsp+0B8h+var_90], xmm4
                    vmovq   r9, xmm3
                    vmovsd  [rsp+0B8h+fmt], xmm5
                  }
                  v34 = j_va("%c strafing start %i %.6f %.6f %.6f %.6f %.6f %.6f", 70i64, (unsigned int)s_testingClientNum, _R9, fmta, v126, v127, v128, v129);
                  SV_Game_SendServerCommand(v11, SV_CMD_RELIABLE, v34);
                }
                LODWORD(v11) = v11 + 1;
              }
              while ( (int)v11 < (int)SvClient::ms_clientCount );
            }
            __asm
            {
              vmovaps xmm10, [rsp+0B8h+var_58]
              vmovaps xmm9, [rsp+0B8h+var_48]
              vmovaps xmm8, [rsp+0B8h+var_38]
              vmovaps xmm7, [rsp+0B8h+var_28]
              vmovaps xmm6, [rsp+0B8h+var_18]
              vmovaps xmm11, [rsp+0B8h+var_68]
            }
            return;
          }
        }
      }
      if ( SV_Cmd_Argc() == 3 )
      {
        v41 = SV_Cmd_Argv(2);
        v42 = 0i64;
        while ( 1 )
        {
          v43 = v41[v42++];
          if ( v43 != aStop_0[v42 - 1] )
            break;
          if ( v42 == 5 )
          {
            if ( (int)SvClient::ms_clientCount <= 0 )
              goto LABEL_169;
            do
            {
              if ( SvClientMP::GetMpClient(v11)->state == CS_ACTIVE && (_DWORD)v11 != s_testingClientNum )
              {
                v44 = j_va("%c strafing stop", 70i64);
                SV_Game_SendServerCommand(v11, SV_CMD_RELIABLE, v44);
              }
              LODWORD(v11) = v11 + 1;
            }
            while ( (int)v11 < (int)SvClient::ms_clientCount );
            s_testingClientNum = -1;
            return;
          }
        }
      }
      if ( SV_Cmd_Argc() == 6 )
      {
        v45 = SV_Cmd_Argv(2);
        while ( 1 )
        {
          v46 = v45[v11++];
          if ( v46 != aSample[v11 - 1] )
            break;
          if ( v11 == 7 )
          {
            if ( s_testingClientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_latency_test_mp.cpp", 54, ASSERT_TYPE_ASSERT, "(unsigned)( s_testingClientNum ) < (unsigned)( SvClientMP::GetClientCount() )", "s_testingClientNum doesn't index SvClientMP::GetClientCount()\n\t%i not in [0, %i)", s_testingClientNum, SvClient::ms_clientCount) )
              __debugbreak();
            v47 = SV_Cmd_ArgInt(3);
            v48 = SV_Cmd_ArgInt(4);
            LODWORD(v125) = SV_Cmd_ArgInt(5);
            LODWORD(fmt) = v48;
            v49 = j_va("%c strafing sample %i %i %i %i", 70i64, number, v47, fmt, v125);
            goto LABEL_178;
          }
        }
      }
      Com_PrintError(31, "Invalid parameters for SV_LatencyTest_f strafing\n");
    }
    else
    {
      v50 = 0i64;
      if ( SV_Cmd_Argc() >= 2 )
      {
        v51 = SV_Cmd_Argv(1);
        v52 = 0i64;
        while ( 1 )
        {
          v53 = v51[v52++];
          if ( v53 != aTtk[v52 - 1] )
            break;
          if ( v52 == 4 )
          {
            if ( SV_Cmd_Argc() == 3 )
            {
              v54 = SV_Cmd_Argv(2);
              v55 = 0i64;
              while ( 1 )
              {
                v56 = v54[v55++];
                if ( v56 != aStart[v55 - 1] )
                  break;
                if ( v55 == 6 )
                {
                  s_testingClientNum = number;
                  if ( (int)SvClient::ms_clientCount > 0 )
                  {
                    do
                    {
                      if ( SvClientMP::GetMpClient(v50)->state == CS_ACTIVE && (_DWORD)v50 != s_testingClientNum )
                      {
                        v57 = j_va("%c ttk start %i", 70i64, (unsigned int)s_testingClientNum);
                        SV_Game_SendServerCommand(v50, SV_CMD_RELIABLE, v57);
                      }
                      LODWORD(v50) = v50 + 1;
                    }
                    while ( (int)v50 < (int)SvClient::ms_clientCount );
                  }
                  return;
                }
              }
            }
            if ( SV_Cmd_Argc() == 3 )
            {
              v58 = SV_Cmd_Argv(2);
              v59 = 0i64;
              while ( 1 )
              {
                v60 = v58[v59++];
                if ( v60 != aStop_0[v59 - 1] )
                  break;
                if ( v59 == 5 )
                {
                  if ( (int)SvClient::ms_clientCount <= 0 )
                    goto LABEL_169;
                  do
                  {
                    if ( SvClientMP::GetMpClient(v50)->state == CS_ACTIVE && (_DWORD)v50 != s_testingClientNum )
                    {
                      v61 = j_va("%c ttk stop", 70i64);
                      SV_Game_SendServerCommand(v50, SV_CMD_RELIABLE, v61);
                    }
                    LODWORD(v50) = v50 + 1;
                  }
                  while ( (int)v50 < (int)SvClient::ms_clientCount );
                  s_testingClientNum = -1;
                  return;
                }
              }
            }
            if ( SV_Cmd_Argc() == 6 )
            {
              v62 = SV_Cmd_Argv(2);
              while ( 1 )
              {
                v63 = v62[v50++];
                if ( v63 != aSample[v50 - 1] )
                  break;
                if ( v50 == 7 )
                {
                  if ( s_testingClientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_latency_test_mp.cpp", 98, ASSERT_TYPE_ASSERT, "(unsigned)( s_testingClientNum ) < (unsigned)( SvClient::GetClientCount() )", "s_testingClientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", s_testingClientNum, SvClient::ms_clientCount) )
                    __debugbreak();
                  v64 = SV_Cmd_ArgInt(3);
                  v65 = SV_Cmd_ArgInt(4);
                  LODWORD(v125) = SV_Cmd_ArgInt(5);
                  LODWORD(fmt) = v65;
                  v49 = j_va("%c ttk sample %i %i %i %i", 70i64, number, v64, fmt, v125);
                  goto LABEL_178;
                }
              }
            }
            Com_PrintError(31, "Invalid parameters for SV_LatencyTest_f ttk\n");
            return;
          }
        }
      }
      if ( SV_Cmd_Argc() >= 2 && (v66 = SV_Cmd_Argv(1), !strcmp_0(v66, "dropshot")) )
      {
        if ( SV_Cmd_Argc() == 3 )
        {
          v67 = SV_Cmd_Argv(2);
          v68 = 0i64;
          while ( 1 )
          {
            v69 = v67[v68++];
            if ( v69 != aStart[v68 - 1] )
              break;
            if ( v68 == 6 )
            {
              s_testingClientNum = number;
              if ( (int)SvClient::ms_clientCount > 0 )
              {
                do
                {
                  if ( SvClientMP::GetMpClient(v50)->state == CS_ACTIVE && (_DWORD)v50 != s_testingClientNum )
                  {
                    v70 = j_va("%c dropshot start %i", 70i64, (unsigned int)s_testingClientNum);
                    SV_Game_SendServerCommand(v50, SV_CMD_RELIABLE, v70);
                  }
                  LODWORD(v50) = v50 + 1;
                }
                while ( (int)v50 < (int)SvClient::ms_clientCount );
              }
              return;
            }
          }
        }
        if ( SV_Cmd_Argc() == 3 )
        {
          v71 = SV_Cmd_Argv(2);
          v72 = 0i64;
          while ( 1 )
          {
            v73 = v71[v72++];
            if ( v73 != aStop_0[v72 - 1] )
              break;
            if ( v72 == 5 )
            {
              if ( (int)SvClient::ms_clientCount <= 0 )
                goto LABEL_169;
              do
              {
                if ( SvClientMP::GetMpClient(v50)->state == CS_ACTIVE && (_DWORD)v50 != s_testingClientNum )
                {
                  v74 = j_va("%c dropshot stop", 70i64);
                  SV_Game_SendServerCommand(v50, SV_CMD_RELIABLE, v74);
                }
                LODWORD(v50) = v50 + 1;
              }
              while ( (int)v50 < (int)SvClient::ms_clientCount );
              s_testingClientNum = -1;
              return;
            }
          }
        }
        Com_PrintError(31, "Invalid parameters for SV_LatencyTest_f dropshot\n");
      }
      else
      {
        if ( SV_Cmd_Argc() >= 2 )
        {
          v75 = SV_Cmd_Argv(1);
          v76 = 0i64;
          while ( 1 )
          {
            v77 = v75[v76++];
            if ( v77 != aLos[v76 - 1] )
              break;
            if ( v76 == 4 )
            {
              if ( SV_Cmd_Argc() == 6 )
              {
                v78 = SV_Cmd_Argv(2);
                v79 = 0i64;
                while ( 1 )
                {
                  v80 = v78[v79++];
                  if ( v80 != aStart[v79 - 1] )
                    break;
                  if ( v79 == 6 )
                  {
                    s_testingClientNum = number;
                    v81 = SV_Cmd_ArgInt(3);
                    v82 = SV_Cmd_ArgInt(4);
                    v83 = SV_Cmd_ArgInt(5);
                    if ( (int)SvClient::ms_clientCount > 0 )
                    {
                      do
                      {
                        if ( SvClientMP::GetMpClient(v50)->state == CS_ACTIVE && (_DWORD)v50 != s_testingClientNum )
                        {
                          LODWORD(v125) = v83;
                          LODWORD(fmt) = v82;
                          v84 = j_va("%c los start %i %i %i %i", 70i64, (unsigned int)s_testingClientNum, v81, fmt, v125);
                          SV_Game_SendServerCommand(v50, SV_CMD_RELIABLE, v84);
                        }
                        LODWORD(v50) = v50 + 1;
                      }
                      while ( (int)v50 < (int)SvClient::ms_clientCount );
                    }
                    return;
                  }
                }
              }
              if ( SV_Cmd_Argc() == 3 )
              {
                v85 = SV_Cmd_Argv(2);
                v86 = 0i64;
                while ( 1 )
                {
                  v87 = v85[v86++];
                  if ( v87 != aStop_0[v86 - 1] )
                    break;
                  if ( v86 == 5 )
                  {
                    if ( (int)SvClient::ms_clientCount <= 0 )
                      goto LABEL_169;
                    do
                    {
                      if ( SvClientMP::GetMpClient(v50)->state == CS_ACTIVE && (_DWORD)v50 != s_testingClientNum )
                      {
                        v88 = j_va("%c los stop", 70i64);
                        SV_Game_SendServerCommand(v50, SV_CMD_RELIABLE, v88);
                      }
                      LODWORD(v50) = v50 + 1;
                    }
                    while ( (int)v50 < (int)SvClient::ms_clientCount );
                    s_testingClientNum = -1;
                    return;
                  }
                }
              }
              if ( SV_Cmd_Argc() == 6 )
              {
                v89 = SV_Cmd_Argv(2);
                v90 = 0i64;
                while ( 1 )
                {
                  v91 = v89[v90++];
                  if ( v91 != aSample[v90 - 1] )
                    break;
                  if ( v90 == 7 )
                  {
                    if ( s_testingClientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_latency_test_mp.cpp", 180, ASSERT_TYPE_ASSERT, "(unsigned)( s_testingClientNum ) < (unsigned)( SvClient::GetClientCount() )", "s_testingClientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", s_testingClientNum, SvClient::ms_clientCount) )
                      __debugbreak();
                    v92 = SV_Cmd_ArgInt(3);
                    v93 = SV_Cmd_ArgInt(4);
                    LODWORD(v125) = SV_Cmd_ArgInt(5);
                    LOBYTE(v50) = v93 != 0;
                    LODWORD(fmt) = v50;
                    v49 = j_va("%c los sample %i %i %i %i", 70i64, number, v92, fmt, v125);
                    goto LABEL_178;
                  }
                }
              }
              Com_PrintError(31, "Invalid parameters for SV_LatencyTest_f los\n");
              return;
            }
          }
        }
        if ( SV_Cmd_Argc() >= 2 && (v94 = SV_Cmd_Argv(1), !strcmp_0(v94, "shootfirst")) )
        {
          if ( SV_Cmd_Argc() == 3 )
          {
            v95 = SV_Cmd_Argv(2);
            v96 = 0i64;
            while ( 1 )
            {
              v97 = v95[v96++];
              if ( v97 != aStart[v96 - 1] )
                break;
              if ( v96 == 6 )
              {
                s_testingClientNum = number;
                if ( (int)SvClient::ms_clientCount > 0 )
                {
                  do
                  {
                    if ( SvClientMP::GetMpClient(v50)->state == CS_ACTIVE && (_DWORD)v50 != s_testingClientNum )
                    {
                      v98 = j_va("%c shootfirst start %i", 70i64, (unsigned int)s_testingClientNum);
                      SV_Game_SendServerCommand(v50, SV_CMD_RELIABLE, v98);
                    }
                    LODWORD(v50) = v50 + 1;
                  }
                  while ( (int)v50 < (int)SvClient::ms_clientCount );
                }
                return;
              }
            }
          }
          if ( SV_Cmd_Argc() == 3 )
          {
            v99 = SV_Cmd_Argv(2);
            v100 = 0i64;
            while ( 1 )
            {
              v101 = v99[v100++];
              if ( v101 != aStop_0[v100 - 1] )
                break;
              if ( v100 == 5 )
              {
                if ( (int)SvClient::ms_clientCount <= 0 )
                  goto LABEL_169;
                do
                {
                  if ( SvClientMP::GetMpClient(v50)->state == CS_ACTIVE && (_DWORD)v50 != s_testingClientNum )
                  {
                    v102 = j_va("%c shootfirst stop", 70i64);
                    SV_Game_SendServerCommand(v50, SV_CMD_RELIABLE, v102);
                  }
                  LODWORD(v50) = v50 + 1;
                }
                while ( (int)v50 < (int)SvClient::ms_clientCount );
                s_testingClientNum = -1;
                return;
              }
            }
          }
          Com_PrintError(31, "Invalid parameters for SV_LatencyTestMP_ExecuteCommand_f shootfirst\n");
        }
        else
        {
          if ( SV_Cmd_Argc() >= 2 )
          {
            v103 = SV_Cmd_Argv(1);
            v104 = 0i64;
            while ( 1 )
            {
              v105 = v103[v104++];
              if ( v105 != aBaselag[v104 - 1] )
                break;
              if ( v104 == 8 )
              {
                if ( SV_Cmd_Argc() == 5 )
                {
                  v106 = SV_Cmd_Argv(2);
                  v107 = 0i64;
                  while ( 1 )
                  {
                    v108 = v106[v107++];
                    if ( v108 != aStart[v107 - 1] )
                      break;
                    if ( v107 == 6 )
                    {
                      s_testingClientNum = number;
                      v109 = SV_Cmd_Argv(3);
                      v110 = atoi(v109);
                      v111 = SV_Cmd_Argv(4);
                      v112 = atoi(v111);
                      if ( (int)SvClient::ms_clientCount > 0 )
                      {
                        do
                        {
                          if ( SvClientMP::GetMpClient(v50)->state == CS_ACTIVE && (_DWORD)v50 != s_testingClientNum )
                          {
                            LODWORD(fmt) = v112;
                            v113 = j_va("%c baselag start %i %i %i", 70i64, (unsigned int)s_testingClientNum, v110, fmt);
                            SV_Game_SendServerCommand(v50, SV_CMD_RELIABLE, v113);
                          }
                          LODWORD(v50) = v50 + 1;
                        }
                        while ( (int)v50 < (int)SvClient::ms_clientCount );
                      }
                      return;
                    }
                  }
                }
                if ( SV_Cmd_Argc() == 3 )
                {
                  v114 = SV_Cmd_Argv(2);
                  v115 = 0i64;
                  while ( 1 )
                  {
                    v116 = v114[v115++];
                    if ( v116 != aStop_0[v115 - 1] )
                      break;
                    if ( v115 == 5 )
                    {
                      if ( (int)SvClient::ms_clientCount > 0 )
                      {
                        do
                        {
                          if ( SvClientMP::GetMpClient(v50)->state == CS_ACTIVE && (_DWORD)v50 != s_testingClientNum )
                          {
                            v117 = j_va("%c baselag stop", 70i64);
                            SV_Game_SendServerCommand(v50, SV_CMD_RELIABLE, v117);
                          }
                          LODWORD(v50) = v50 + 1;
                        }
                        while ( (int)v50 < (int)SvClient::ms_clientCount );
                      }
LABEL_169:
                      s_testingClientNum = -1;
                      return;
                    }
                  }
                }
                if ( SV_Cmd_Argc() == 5 )
                {
                  v118 = SV_Cmd_Argv(2);
                  while ( 1 )
                  {
                    v119 = v118[v50++];
                    if ( v119 != aSample[v50 - 1] )
                      break;
                    if ( v50 == 7 )
                    {
                      if ( s_testingClientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_latency_test_mp.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( s_testingClientNum ) < (unsigned)( SvClient::GetClientCount() )", "s_testingClientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", s_testingClientNum, SvClient::ms_clientCount) )
                        __debugbreak();
                      v120 = SV_Cmd_Argv(3);
                      v121 = atoi(v120);
                      v122 = SV_Cmd_Argv(4);
                      LODWORD(fmt) = atoi(v122);
                      v49 = j_va("%c baselag sample %i %i %i", 70i64, number, v121, fmt);
LABEL_178:
                      SV_Game_SendServerCommand(s_testingClientNum, SV_CMD_RELIABLE, v49);
                      return;
                    }
                  }
                }
                Com_PrintError(31, "Invalid parameters for SV_LatencyTestMP_ExecuteCommand_f baselag\n");
                return;
              }
            }
          }
          Com_PrintError(31, "Invalid parameters for SV_LatencyTestMP_ExecuteCommand_f\n");
        }
      }
    }
  }
}

