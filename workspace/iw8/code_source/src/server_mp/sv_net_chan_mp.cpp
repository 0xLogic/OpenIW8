/*
==============
SV_Netchan_Transmit
==============
*/

int __fastcall SV_Netchan_Transmit(SvClientMP *client, const unsigned __int8 *data, int length, NetPingInfo *packetInfo)
{
  return ?SV_Netchan_Transmit@@YAHPEAVSvClientMP@@PEBEHPEAUNetPingInfo@@@Z(client, data, length, packetInfo);
}

/*
==============
SV_Netchan_AddOOBProfilePacket
==============
*/

void __fastcall SV_Netchan_AddOOBProfilePacket(int iLength)
{
  ?SV_Netchan_AddOOBProfilePacket@@YAXH@Z(iLength);
}

/*
==============
SV_Netchan_UpdateProfileStats
==============
*/

void SV_Netchan_UpdateProfileStats(void)
{
  ?SV_Netchan_UpdateProfileStats@@YAXXZ();
}

/*
==============
SV_Netchan_AddOOBProfilePacket
==============
*/
void SV_Netchan_AddOOBProfilePacket(int iLength)
{
  netProfileInfo_t *p_OOBProf; 

  if ( Com_IsGameLocalServerRunning() && SvClient::ms_clientCount )
  {
    if ( net_profile->current.integer )
    {
      p_OOBProf = &SvPersistentGlobalsMP::GetPersistentGlobalsMP()->OOBProf;
      NetProf_PrepProfiling(p_OOBProf);
      NetProf_AddPacket(&p_OOBProf->send, iLength, 0);
    }
  }
}

/*
==============
SV_Netchan_Transmit
==============
*/
__int64 SV_Netchan_Transmit(SvClientMP *client, const unsigned __int8 *data, int length, NetPingInfo *packetInfo)
{
  netchan_t *p_netchan; 
  int v6; 
  int outgoingSequence; 
  char *v8; 
  int v9; 
  const dvar_t *v10; 
  int v11; 
  int v12; 
  char v13; 
  __int64 v15; 
  __int64 v16; 

  p_netchan = &client->netchan;
  v6 = Netchan_Transmit(&client->netchan, length, data, packetInfo);
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_net_chan_mp.cpp", 100, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !p_netchan && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_net_chan_mp.cpp", 101, ASSERT_TYPE_ASSERT, "( chan )", (const char *)&queryFormat, "chan") )
    __debugbreak();
  if ( p_netchan->outgoingSequence <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_net_chan_mp.cpp", 104, ASSERT_TYPE_ASSERT, "( chan->outgoingSequence > 0 )", (const char *)&queryFormat, "chan->outgoingSequence > 0") )
    __debugbreak();
  if ( !SV_IsDemoPlaying() )
  {
    outgoingSequence = p_netchan->outgoingSequence;
    if ( outgoingSequence - 1 < 0 )
    {
      LODWORD(v15) = outgoingSequence - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1054, ASSERT_TYPE_ASSERT, "( sequence ) >= ( 0 )", "sequence >= 0\n\t%i, %i", v15, 0i64) )
        __debugbreak();
    }
    v8 = (char *)client + 72 * (((unsigned __int8)outgoingSequence - 1) & 0x3F);
    v9 = Sys_Milliseconds();
    v10 = DVARINT_sv_snapshotReportTimeThreshold;
    v11 = v9;
    if ( !DVARINT_sv_snapshotReportTimeThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshotReportTimeThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v12 = v11 - *((_DWORD *)v8 + 93144);
    if ( v12 > v10->current.integer )
      Com_Printf(15, "OutgoingSequenceIncremented - %s: last complete snapshot took %ims\n", client->name, (unsigned int)v12);
  }
  if ( v6 > 0 )
  {
    v13 = SvGameGlobals::ms_allocatedType;
    if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
    {
      LODWORD(v16) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v16) )
        __debugbreak();
      v13 = SvGameGlobals::ms_allocatedType;
    }
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    SvGameGlobals::ms_svGameGlobals[94].profile.animCallsMin += v6;
    client->totalBytesThisFrame += v6;
  }
  return (unsigned int)v6;
}

/*
==============
SV_Netchan_UpdateProfileStats
==============
*/
void SV_Netchan_UpdateProfileStats(void)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  signed int i; 
  SvClient *CommonClient; 

  if ( SvClient::ms_clientCount )
  {
    if ( net_profile->current.integer )
    {
      PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
      NetProf_UpdateStatistics(&PersistentGlobalsMP->OOBProf.send);
      NetProf_UpdateStatistics(&PersistentGlobalsMP->OOBProf.recieve);
      for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
      {
        if ( SvClient::GetCommonClient(i)->state )
        {
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          CommonClient = SvClient::GetCommonClient(i);
          NetProf_UpdateStatistics((netProfileStream_t *)&CommonClient[765].lastUsercmd.sightedClientsMask.data[6]);
          NetProf_UpdateStatistics((netProfileStream_t *)&CommonClient[774].lastUsercmd.offHand);
        }
      }
    }
  }
}

