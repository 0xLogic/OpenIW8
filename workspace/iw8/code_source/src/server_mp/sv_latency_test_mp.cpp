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
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  __int64 v7; 
  char v8; 
  const char *v9; 
  const char *v11; 
  const char *v13; 
  const char *v15; 
  const char *v17; 
  const char *v19; 
  const char *v21; 
  const char *v22; 
  __int64 v23; 
  char v24; 
  const char *v25; 
  const char *v26; 
  char v27; 
  unsigned int v28; 
  int v29; 
  const char *v30; 
  __int64 v31; 
  const char *v32; 
  __int64 v33; 
  char v34; 
  const char *v35; 
  __int64 v36; 
  char v37; 
  const char *v38; 
  const char *v39; 
  __int64 v40; 
  char v41; 
  const char *v42; 
  const char *v43; 
  char v44; 
  unsigned int v45; 
  int v46; 
  const char *v47; 
  const char *v48; 
  __int64 v49; 
  char v50; 
  const char *v51; 
  const char *v52; 
  __int64 v53; 
  char v54; 
  const char *v55; 
  const char *v56; 
  __int64 v57; 
  char v58; 
  const char *v59; 
  __int64 v60; 
  char v61; 
  unsigned int v62; 
  int v63; 
  int v64; 
  const char *v65; 
  const char *v66; 
  __int64 v67; 
  char v68; 
  const char *v69; 
  const char *v70; 
  __int64 v71; 
  char v72; 
  unsigned int v73; 
  int v74; 
  const char *v75; 
  const char *v76; 
  __int64 v77; 
  char v78; 
  const char *v79; 
  const char *v80; 
  __int64 v81; 
  char v82; 
  const char *v83; 
  const char *v84; 
  __int64 v85; 
  char v86; 
  const char *v87; 
  __int64 v88; 
  char v89; 
  const char *v90; 
  unsigned int v91; 
  const char *v92; 
  int v93; 
  const char *v94; 
  const char *v95; 
  __int64 v96; 
  char v97; 
  const char *v98; 
  const char *v99; 
  char v100; 
  const char *v101; 
  unsigned int v102; 
  const char *v103; 
  char *fmt; 
  __int64 v105; 

  gentity = cl->gentity;
  if ( gentity )
  {
    number = gentity->s.number;
    if ( SV_Cmd_Argc() >= 2 && (v4 = SV_Cmd_Argv(1), !strcmp_0(v4, "strafing")) )
    {
      v5 = 0i64;
      if ( SV_Cmd_Argc() == 9 )
      {
        v6 = SV_Cmd_Argv(2);
        v7 = 0i64;
        while ( 1 )
        {
          v8 = v6[v7++];
          if ( v8 != aStart[v7 - 1] )
            break;
          if ( v7 == 6 )
          {
            s_testingClientNum = number;
            v9 = SV_Cmd_Argv(3);
            *(double *)&_XMM0 = atof(v9);
            __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
            v11 = SV_Cmd_Argv(4);
            *(double *)&_XMM0 = atof(v11);
            __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
            v13 = SV_Cmd_Argv(5);
            *(double *)&_XMM0 = atof(v13);
            __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
            v15 = SV_Cmd_Argv(6);
            *(double *)&_XMM0 = atof(v15);
            __asm { vcvtsd2ss xmm9, xmm0, xmm0 }
            v17 = SV_Cmd_Argv(7);
            *(double *)&_XMM0 = atof(v17);
            __asm { vcvtsd2ss xmm10, xmm0, xmm0 }
            v19 = SV_Cmd_Argv(8);
            *(double *)&_XMM0 = atof(v19);
            __asm { vcvtsd2ss xmm11, xmm0, xmm0 }
            if ( (int)SvClient::ms_clientCount > 0 )
            {
              do
              {
                if ( SvClientMP::GetMpClient(v5)->state == CS_ACTIVE && (_DWORD)v5 != s_testingClientNum )
                {
                  v21 = j_va("%c strafing start %i %.6f %.6f %.6f %.6f %.6f %.6f", 70i64, (unsigned int)s_testingClientNum, *(float *)&_XMM6, *(float *)&_XMM7, *(float *)&_XMM8, *(float *)&_XMM9, *(float *)&_XMM10, *(float *)&_XMM11);
                  SV_Game_SendServerCommand(v5, SV_CMD_RELIABLE, v21);
                }
                LODWORD(v5) = v5 + 1;
              }
              while ( (int)v5 < (int)SvClient::ms_clientCount );
            }
            return;
          }
        }
      }
      if ( SV_Cmd_Argc() == 3 )
      {
        v22 = SV_Cmd_Argv(2);
        v23 = 0i64;
        while ( 1 )
        {
          v24 = v22[v23++];
          if ( v24 != aStop_0[v23 - 1] )
            break;
          if ( v23 == 5 )
          {
            if ( (int)SvClient::ms_clientCount <= 0 )
              goto LABEL_168;
            do
            {
              if ( SvClientMP::GetMpClient(v5)->state == CS_ACTIVE && (_DWORD)v5 != s_testingClientNum )
              {
                v25 = j_va("%c strafing stop", 70i64);
                SV_Game_SendServerCommand(v5, SV_CMD_RELIABLE, v25);
              }
              LODWORD(v5) = v5 + 1;
            }
            while ( (int)v5 < (int)SvClient::ms_clientCount );
            s_testingClientNum = -1;
            return;
          }
        }
      }
      if ( SV_Cmd_Argc() == 6 )
      {
        v26 = SV_Cmd_Argv(2);
        while ( 1 )
        {
          v27 = v26[v5++];
          if ( v27 != aSample[v5 - 1] )
            break;
          if ( v5 == 7 )
          {
            if ( s_testingClientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_latency_test_mp.cpp", 54, ASSERT_TYPE_ASSERT, "(unsigned)( s_testingClientNum ) < (unsigned)( SvClientMP::GetClientCount() )", "s_testingClientNum doesn't index SvClientMP::GetClientCount()\n\t%i not in [0, %i)", s_testingClientNum, SvClient::ms_clientCount) )
              __debugbreak();
            v28 = SV_Cmd_ArgInt(3);
            v29 = SV_Cmd_ArgInt(4);
            LODWORD(v105) = SV_Cmd_ArgInt(5);
            LODWORD(fmt) = v29;
            v30 = j_va("%c strafing sample %i %i %i %i", 70i64, number, v28, fmt, v105);
            goto LABEL_177;
          }
        }
      }
      Com_PrintError(31, "Invalid parameters for SV_LatencyTest_f strafing\n");
    }
    else
    {
      v31 = 0i64;
      if ( SV_Cmd_Argc() >= 2 )
      {
        v32 = SV_Cmd_Argv(1);
        v33 = 0i64;
        while ( 1 )
        {
          v34 = v32[v33++];
          if ( v34 != aTtk[v33 - 1] )
            break;
          if ( v33 == 4 )
          {
            if ( SV_Cmd_Argc() == 3 )
            {
              v35 = SV_Cmd_Argv(2);
              v36 = 0i64;
              while ( 1 )
              {
                v37 = v35[v36++];
                if ( v37 != aStart[v36 - 1] )
                  break;
                if ( v36 == 6 )
                {
                  s_testingClientNum = number;
                  if ( (int)SvClient::ms_clientCount > 0 )
                  {
                    do
                    {
                      if ( SvClientMP::GetMpClient(v31)->state == CS_ACTIVE && (_DWORD)v31 != s_testingClientNum )
                      {
                        v38 = j_va("%c ttk start %i", 70i64, (unsigned int)s_testingClientNum);
                        SV_Game_SendServerCommand(v31, SV_CMD_RELIABLE, v38);
                      }
                      LODWORD(v31) = v31 + 1;
                    }
                    while ( (int)v31 < (int)SvClient::ms_clientCount );
                  }
                  return;
                }
              }
            }
            if ( SV_Cmd_Argc() == 3 )
            {
              v39 = SV_Cmd_Argv(2);
              v40 = 0i64;
              while ( 1 )
              {
                v41 = v39[v40++];
                if ( v41 != aStop_0[v40 - 1] )
                  break;
                if ( v40 == 5 )
                {
                  if ( (int)SvClient::ms_clientCount <= 0 )
                    goto LABEL_168;
                  do
                  {
                    if ( SvClientMP::GetMpClient(v31)->state == CS_ACTIVE && (_DWORD)v31 != s_testingClientNum )
                    {
                      v42 = j_va("%c ttk stop", 70i64);
                      SV_Game_SendServerCommand(v31, SV_CMD_RELIABLE, v42);
                    }
                    LODWORD(v31) = v31 + 1;
                  }
                  while ( (int)v31 < (int)SvClient::ms_clientCount );
                  s_testingClientNum = -1;
                  return;
                }
              }
            }
            if ( SV_Cmd_Argc() == 6 )
            {
              v43 = SV_Cmd_Argv(2);
              while ( 1 )
              {
                v44 = v43[v31++];
                if ( v44 != aSample[v31 - 1] )
                  break;
                if ( v31 == 7 )
                {
                  if ( s_testingClientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_latency_test_mp.cpp", 98, ASSERT_TYPE_ASSERT, "(unsigned)( s_testingClientNum ) < (unsigned)( SvClient::GetClientCount() )", "s_testingClientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", s_testingClientNum, SvClient::ms_clientCount) )
                    __debugbreak();
                  v45 = SV_Cmd_ArgInt(3);
                  v46 = SV_Cmd_ArgInt(4);
                  LODWORD(v105) = SV_Cmd_ArgInt(5);
                  LODWORD(fmt) = v46;
                  v30 = j_va("%c ttk sample %i %i %i %i", 70i64, number, v45, fmt, v105);
                  goto LABEL_177;
                }
              }
            }
            Com_PrintError(31, "Invalid parameters for SV_LatencyTest_f ttk\n");
            return;
          }
        }
      }
      if ( SV_Cmd_Argc() >= 2 && (v47 = SV_Cmd_Argv(1), !strcmp_0(v47, "dropshot")) )
      {
        if ( SV_Cmd_Argc() == 3 )
        {
          v48 = SV_Cmd_Argv(2);
          v49 = 0i64;
          while ( 1 )
          {
            v50 = v48[v49++];
            if ( v50 != aStart[v49 - 1] )
              break;
            if ( v49 == 6 )
            {
              s_testingClientNum = number;
              if ( (int)SvClient::ms_clientCount > 0 )
              {
                do
                {
                  if ( SvClientMP::GetMpClient(v31)->state == CS_ACTIVE && (_DWORD)v31 != s_testingClientNum )
                  {
                    v51 = j_va("%c dropshot start %i", 70i64, (unsigned int)s_testingClientNum);
                    SV_Game_SendServerCommand(v31, SV_CMD_RELIABLE, v51);
                  }
                  LODWORD(v31) = v31 + 1;
                }
                while ( (int)v31 < (int)SvClient::ms_clientCount );
              }
              return;
            }
          }
        }
        if ( SV_Cmd_Argc() == 3 )
        {
          v52 = SV_Cmd_Argv(2);
          v53 = 0i64;
          while ( 1 )
          {
            v54 = v52[v53++];
            if ( v54 != aStop_0[v53 - 1] )
              break;
            if ( v53 == 5 )
            {
              if ( (int)SvClient::ms_clientCount <= 0 )
                goto LABEL_168;
              do
              {
                if ( SvClientMP::GetMpClient(v31)->state == CS_ACTIVE && (_DWORD)v31 != s_testingClientNum )
                {
                  v55 = j_va("%c dropshot stop", 70i64);
                  SV_Game_SendServerCommand(v31, SV_CMD_RELIABLE, v55);
                }
                LODWORD(v31) = v31 + 1;
              }
              while ( (int)v31 < (int)SvClient::ms_clientCount );
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
          v56 = SV_Cmd_Argv(1);
          v57 = 0i64;
          while ( 1 )
          {
            v58 = v56[v57++];
            if ( v58 != aLos[v57 - 1] )
              break;
            if ( v57 == 4 )
            {
              if ( SV_Cmd_Argc() == 6 )
              {
                v59 = SV_Cmd_Argv(2);
                v60 = 0i64;
                while ( 1 )
                {
                  v61 = v59[v60++];
                  if ( v61 != aStart[v60 - 1] )
                    break;
                  if ( v60 == 6 )
                  {
                    s_testingClientNum = number;
                    v62 = SV_Cmd_ArgInt(3);
                    v63 = SV_Cmd_ArgInt(4);
                    v64 = SV_Cmd_ArgInt(5);
                    if ( (int)SvClient::ms_clientCount > 0 )
                    {
                      do
                      {
                        if ( SvClientMP::GetMpClient(v31)->state == CS_ACTIVE && (_DWORD)v31 != s_testingClientNum )
                        {
                          LODWORD(v105) = v64;
                          LODWORD(fmt) = v63;
                          v65 = j_va("%c los start %i %i %i %i", 70i64, (unsigned int)s_testingClientNum, v62, fmt, v105);
                          SV_Game_SendServerCommand(v31, SV_CMD_RELIABLE, v65);
                        }
                        LODWORD(v31) = v31 + 1;
                      }
                      while ( (int)v31 < (int)SvClient::ms_clientCount );
                    }
                    return;
                  }
                }
              }
              if ( SV_Cmd_Argc() == 3 )
              {
                v66 = SV_Cmd_Argv(2);
                v67 = 0i64;
                while ( 1 )
                {
                  v68 = v66[v67++];
                  if ( v68 != aStop_0[v67 - 1] )
                    break;
                  if ( v67 == 5 )
                  {
                    if ( (int)SvClient::ms_clientCount <= 0 )
                      goto LABEL_168;
                    do
                    {
                      if ( SvClientMP::GetMpClient(v31)->state == CS_ACTIVE && (_DWORD)v31 != s_testingClientNum )
                      {
                        v69 = j_va("%c los stop", 70i64);
                        SV_Game_SendServerCommand(v31, SV_CMD_RELIABLE, v69);
                      }
                      LODWORD(v31) = v31 + 1;
                    }
                    while ( (int)v31 < (int)SvClient::ms_clientCount );
                    s_testingClientNum = -1;
                    return;
                  }
                }
              }
              if ( SV_Cmd_Argc() == 6 )
              {
                v70 = SV_Cmd_Argv(2);
                v71 = 0i64;
                while ( 1 )
                {
                  v72 = v70[v71++];
                  if ( v72 != aSample[v71 - 1] )
                    break;
                  if ( v71 == 7 )
                  {
                    if ( s_testingClientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_latency_test_mp.cpp", 180, ASSERT_TYPE_ASSERT, "(unsigned)( s_testingClientNum ) < (unsigned)( SvClient::GetClientCount() )", "s_testingClientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", s_testingClientNum, SvClient::ms_clientCount) )
                      __debugbreak();
                    v73 = SV_Cmd_ArgInt(3);
                    v74 = SV_Cmd_ArgInt(4);
                    LODWORD(v105) = SV_Cmd_ArgInt(5);
                    LOBYTE(v31) = v74 != 0;
                    LODWORD(fmt) = v31;
                    v30 = j_va("%c los sample %i %i %i %i", 70i64, number, v73, fmt, v105);
                    goto LABEL_177;
                  }
                }
              }
              Com_PrintError(31, "Invalid parameters for SV_LatencyTest_f los\n");
              return;
            }
          }
        }
        if ( SV_Cmd_Argc() >= 2 && (v75 = SV_Cmd_Argv(1), !strcmp_0(v75, "shootfirst")) )
        {
          if ( SV_Cmd_Argc() == 3 )
          {
            v76 = SV_Cmd_Argv(2);
            v77 = 0i64;
            while ( 1 )
            {
              v78 = v76[v77++];
              if ( v78 != aStart[v77 - 1] )
                break;
              if ( v77 == 6 )
              {
                s_testingClientNum = number;
                if ( (int)SvClient::ms_clientCount > 0 )
                {
                  do
                  {
                    if ( SvClientMP::GetMpClient(v31)->state == CS_ACTIVE && (_DWORD)v31 != s_testingClientNum )
                    {
                      v79 = j_va("%c shootfirst start %i", 70i64, (unsigned int)s_testingClientNum);
                      SV_Game_SendServerCommand(v31, SV_CMD_RELIABLE, v79);
                    }
                    LODWORD(v31) = v31 + 1;
                  }
                  while ( (int)v31 < (int)SvClient::ms_clientCount );
                }
                return;
              }
            }
          }
          if ( SV_Cmd_Argc() == 3 )
          {
            v80 = SV_Cmd_Argv(2);
            v81 = 0i64;
            while ( 1 )
            {
              v82 = v80[v81++];
              if ( v82 != aStop_0[v81 - 1] )
                break;
              if ( v81 == 5 )
              {
                if ( (int)SvClient::ms_clientCount <= 0 )
                  goto LABEL_168;
                do
                {
                  if ( SvClientMP::GetMpClient(v31)->state == CS_ACTIVE && (_DWORD)v31 != s_testingClientNum )
                  {
                    v83 = j_va("%c shootfirst stop", 70i64);
                    SV_Game_SendServerCommand(v31, SV_CMD_RELIABLE, v83);
                  }
                  LODWORD(v31) = v31 + 1;
                }
                while ( (int)v31 < (int)SvClient::ms_clientCount );
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
            v84 = SV_Cmd_Argv(1);
            v85 = 0i64;
            while ( 1 )
            {
              v86 = v84[v85++];
              if ( v86 != aBaselag[v85 - 1] )
                break;
              if ( v85 == 8 )
              {
                if ( SV_Cmd_Argc() == 5 )
                {
                  v87 = SV_Cmd_Argv(2);
                  v88 = 0i64;
                  while ( 1 )
                  {
                    v89 = v87[v88++];
                    if ( v89 != aStart[v88 - 1] )
                      break;
                    if ( v88 == 6 )
                    {
                      s_testingClientNum = number;
                      v90 = SV_Cmd_Argv(3);
                      v91 = atoi(v90);
                      v92 = SV_Cmd_Argv(4);
                      v93 = atoi(v92);
                      if ( (int)SvClient::ms_clientCount > 0 )
                      {
                        do
                        {
                          if ( SvClientMP::GetMpClient(v31)->state == CS_ACTIVE && (_DWORD)v31 != s_testingClientNum )
                          {
                            LODWORD(fmt) = v93;
                            v94 = j_va("%c baselag start %i %i %i", 70i64, (unsigned int)s_testingClientNum, v91, fmt);
                            SV_Game_SendServerCommand(v31, SV_CMD_RELIABLE, v94);
                          }
                          LODWORD(v31) = v31 + 1;
                        }
                        while ( (int)v31 < (int)SvClient::ms_clientCount );
                      }
                      return;
                    }
                  }
                }
                if ( SV_Cmd_Argc() == 3 )
                {
                  v95 = SV_Cmd_Argv(2);
                  v96 = 0i64;
                  while ( 1 )
                  {
                    v97 = v95[v96++];
                    if ( v97 != aStop_0[v96 - 1] )
                      break;
                    if ( v96 == 5 )
                    {
                      if ( (int)SvClient::ms_clientCount > 0 )
                      {
                        do
                        {
                          if ( SvClientMP::GetMpClient(v31)->state == CS_ACTIVE && (_DWORD)v31 != s_testingClientNum )
                          {
                            v98 = j_va("%c baselag stop", 70i64);
                            SV_Game_SendServerCommand(v31, SV_CMD_RELIABLE, v98);
                          }
                          LODWORD(v31) = v31 + 1;
                        }
                        while ( (int)v31 < (int)SvClient::ms_clientCount );
                      }
LABEL_168:
                      s_testingClientNum = -1;
                      return;
                    }
                  }
                }
                if ( SV_Cmd_Argc() == 5 )
                {
                  v99 = SV_Cmd_Argv(2);
                  while ( 1 )
                  {
                    v100 = v99[v31++];
                    if ( v100 != aSample[v31 - 1] )
                      break;
                    if ( v31 == 7 )
                    {
                      if ( s_testingClientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_latency_test_mp.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( s_testingClientNum ) < (unsigned)( SvClient::GetClientCount() )", "s_testingClientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", s_testingClientNum, SvClient::ms_clientCount) )
                        __debugbreak();
                      v101 = SV_Cmd_Argv(3);
                      v102 = atoi(v101);
                      v103 = SV_Cmd_Argv(4);
                      LODWORD(fmt) = atoi(v103);
                      v30 = j_va("%c baselag sample %i %i %i", 70i64, number, v102, fmt);
LABEL_177:
                      SV_Game_SendServerCommand(s_testingClientNum, SV_CMD_RELIABLE, v30);
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

