/*
==============
CL_Netchan_Transmit
==============
*/

int __fastcall CL_Netchan_Transmit(netchan_t *chan, unsigned __int8 *data, int length)
{
  return ?CL_Netchan_Transmit@@YAHPEAUnetchan_t@@PEAEH@Z(chan, data, length);
}

/*
==============
CL_Netchan_PrintProfileStats
==============
*/

void __fastcall CL_Netchan_PrintProfileStats(LocalClientNum_t localClientNum, int bPrintToConsole)
{
  ?CL_Netchan_PrintProfileStats@@YAXW4LocalClientNum_t@@H@Z(localClientNum, bPrintToConsole);
}

/*
==============
CL_Netchan_AddOOBProfilePacket
==============
*/

void __fastcall CL_Netchan_AddOOBProfilePacket(LocalClientNum_t localClientNum, int iLength)
{
  ?CL_Netchan_AddOOBProfilePacket@@YAXW4LocalClientNum_t@@H@Z(localClientNum, iLength);
}

/*
==============
CL_Netchan_AddOOBProfilePacket
==============
*/
void CL_Netchan_AddOOBProfilePacket(LocalClientNum_t localClientNum, int iLength)
{
  __int64 v2; 
  ClConnection **v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = localClientNum;
  if ( !CL_IsLocalClientDisconnectedFromGameServer(localClientNum) )
  {
    if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, 2) )
      __debugbreak();
    v4 = &ClConnection::ms_connections[v2];
    if ( *v4 )
      goto LABEL_22;
    if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
      __debugbreak();
    if ( *v4 )
    {
LABEL_22:
      if ( (unsigned int)v2 >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&v6 = cl_maxLocalClients;
        LODWORD(v5) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
        __debugbreak();
      if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
        __debugbreak();
      (*v4)->ConnectionLessPacketProfile(*v4, iLength);
    }
  }
}

/*
==============
CL_Netchan_PrintProfileStats
==============
*/
void CL_Netchan_PrintProfileStats(LocalClientNum_t localClientNum, int bPrintToConsole)
{
  __int64 v2; 
  const dvar_t *v4; 
  int integer; 
  ClConnectionDataMP *ClientConnectionData; 
  ClConnectionDataMP *v7; 
  unsigned int iBytesPerSecond; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  char dest[1024]; 

  v2 = localClientNum;
  if ( !CL_IsLocalClientDisconnectedFromGameServer(localClientNum) )
  {
    v4 = DVARINT_cl_profileTextY;
    if ( !DVARINT_cl_profileTextY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
    if ( !net_profile->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_net_chan_mp.cpp", 184, ASSERT_TYPE_ASSERT, "(net_profile->current.integer)", (const char *)&queryFormat, "net_profile->current.integer") )
      __debugbreak();
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v22) = 2;
      LODWORD(v17) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v22) )
        __debugbreak();
      LODWORD(v23) = 2;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v23) )
        __debugbreak();
    }
    if ( clientUIActives[v2].frontEndSceneState[0] )
      goto LABEL_48;
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v22) = 2;
      LODWORD(v17) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v22) )
        __debugbreak();
    }
    if ( clientUIActives[v2].connectionState == CA_DISCONNECTED )
    {
LABEL_48:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_net_chan_mp.cpp", 144, ASSERT_TYPE_ASSERT, "(!CL_IsLocalClientDisconnectedFromGameServer( localClientNum ))", (const char *)&queryFormat, "!CL_IsLocalClientDisconnectedFromGameServer( localClientNum )") )
        __debugbreak();
    }
    ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v2);
    NetProf_UpdateStatistics(&ClientConnectionData->netchan.prof.send);
    NetProf_UpdateStatistics(&ClientConnectionData->netchan.prof.recieve);
    NetProf_UpdateStatistics(&ClientConnectionData->OOBProf.send);
    NetProf_UpdateStatistics(&ClientConnectionData->OOBProf.recieve);
    if ( bPrintToConsole )
      Com_Printf(14, "\n\n");
    Com_sprintf(dest, 0x400ui64, "====================");
    if ( bPrintToConsole )
      Com_Printf(14, "%s\n", dest);
    else
      integer += CL_Netchan_ProfDraw(integer, dest);
    Com_sprintf(dest, 0x400ui64, "Client Network Profile:");
    if ( bPrintToConsole )
      Com_Printf(14, "%s\n\n", dest);
    else
      integer += CL_Netchan_ProfDraw(integer, dest);
    Com_sprintf(dest, 0x400ui64, "      Source    bps   max   min frag%%");
    if ( bPrintToConsole )
      Com_Printf(14, "%s\n", dest);
    else
      integer += CL_Netchan_ProfDraw(integer, dest);
    v7 = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v2);
    iBytesPerSecond = v7->OOBProf.send.iBytesPerSecond;
    v9 = v7->OOBProf.recieve.iBytesPerSecond;
    LODWORD(v17) = v7->OOBProf.send.iSmallestPacket;
    LODWORD(fmt) = v7->OOBProf.send.iLargestPacket;
    Com_sprintf(dest, 0x400ui64, "    OOB Sent: %5i %5i %5i    -", iBytesPerSecond, fmt, v17);
    if ( bPrintToConsole )
      Com_Printf(14, "%s\n", dest);
    else
      integer += CL_Netchan_ProfDraw(integer, dest);
    LODWORD(v19) = v7->OOBProf.recieve.iSmallestPacket;
    LODWORD(fmta) = v7->OOBProf.recieve.iLargestPacket;
    Com_sprintf(dest, 0x400ui64, "OOB Recieved: %5i %5i %5i    -", (unsigned int)v7->OOBProf.recieve.iBytesPerSecond, fmta, v19);
    if ( bPrintToConsole )
      Com_Printf(14, "%s\n", dest);
    else
      integer += CL_Netchan_ProfDraw(integer, dest);
    v10 = (unsigned int)v7->netchan.prof.send.iBytesPerSecond;
    v11 = v7->netchan.prof.recieve.iBytesPerSecond + v9;
    LODWORD(v22) = v7->netchan.prof.send.iFragmentPercentage;
    v12 = v10 + iBytesPerSecond;
    LODWORD(v20) = v7->netchan.prof.send.iSmallestPacket;
    LODWORD(fmtb) = v7->netchan.prof.send.iLargestPacket;
    Com_sprintf(dest, 0x400ui64, "        Sent: %5i %5i %5i  %3i%%", v10, fmtb, v20, v22);
    if ( bPrintToConsole )
      Com_Printf(14, "%s\n", dest);
    else
      integer += CL_Netchan_ProfDraw(integer, dest);
    LODWORD(v24) = v7->netchan.prof.recieve.iFragmentPercentage;
    LODWORD(v21) = v7->netchan.prof.recieve.iSmallestPacket;
    LODWORD(fmtc) = v7->netchan.prof.recieve.iLargestPacket;
    Com_sprintf(dest, 0x400ui64, "    Recieved: %5i %5i %5i  %3i%%", (unsigned int)v7->netchan.prof.recieve.iBytesPerSecond, fmtc, v21, v24);
    if ( bPrintToConsole )
      Com_Printf(14, "%s\n", dest);
    else
      integer += CL_Netchan_ProfDraw(integer, dest);
    Com_sprintf(dest, 0x400ui64, "       Total: %5i", (unsigned int)(v11 + v12));
    if ( bPrintToConsole )
      Com_Printf(14, "%s\n", dest);
    else
      CL_Netchan_ProfDraw(integer, dest);
  }
}

/*
==============
CL_Netchan_ProfDraw
==============
*/
__int64 CL_Netchan_ProfDraw(int y, const char *pszString)
{
  const dvar_t *v2; 
  const dvar_t *v5; 

  v2 = DVARINT_cl_profileTextHeight;
  if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  CL_DrawString(32, y, pszString, 0, v2->current.integer);
  v5 = DVARINT_cl_profileTextHeight;
  if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return v5->current.unsignedInt;
}

/*
==============
CL_Netchan_Transmit
==============
*/
int CL_Netchan_Transmit(netchan_t *chan, unsigned __int8 *data, int length)
{
  return Netchan_Transmit(chan, length, data, NULL);
}

