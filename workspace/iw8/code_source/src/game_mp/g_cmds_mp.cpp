/*
==============
G_CmdsMP_StopSpectateClientnum_ReplicateFollow_f
==============
*/

void __fastcall G_CmdsMP_StopSpectateClientnum_ReplicateFollow_f(gentity_s *ent, int clientnumSpectator, const int clearCycle, const int force)
{
  ?G_CmdsMP_StopSpectateClientnum_ReplicateFollow_f@@YAXPEAUgentity_s@@HHH@Z(ent, clientnumSpectator, clearCycle, force);
}

/*
==============
Cmd_SetMLGCamera_f
==============
*/

void __fastcall Cmd_SetMLGCamera_f(gentity_s *ent)
{
  ?Cmd_SetMLGCamera_f@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
Cmd_SetMLGCameraFocusedClient_f
==============
*/

void __fastcall Cmd_SetMLGCameraFocusedClient_f(gentity_s *ent)
{
  ?Cmd_SetMLGCameraFocusedClient_f@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_CmdsMP_SpectateCycle_f
==============
*/

void __fastcall G_CmdsMP_SpectateCycle_f(gclient_s *client, int dir)
{
  ?G_CmdsMP_SpectateCycle_f@@YAXPEAUgclient_s@@H@Z(client, dir);
}

/*
==============
G_CmdsMP_Say
==============
*/

void __fastcall G_CmdsMP_Say(gentity_s *ent, gentity_s *target, SayModes mode, const char *chatText)
{
  ?G_CmdsMP_Say@@YAXPEAUgentity_s@@0W4SayModes@@PEBD@Z(ent, target, mode, chatText);
}

/*
==============
Cmd_StopSpectate_f
==============
*/

void __fastcall Cmd_StopSpectate_f(gentity_s *ent, bool force)
{
  ?Cmd_StopSpectate_f@@YAXPEAUgentity_s@@_N@Z(ent, force);
}

/*
==============
Cmd_SetSpectatorViewpos_f
==============
*/

void __fastcall Cmd_SetSpectatorViewpos_f(gentity_s *ent)
{
  ?Cmd_SetSpectatorViewpos_f@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
Cmd_FollowDrone_f
==============
*/

void __fastcall Cmd_FollowDrone_f(gentity_s *ent)
{
  ?Cmd_FollowDrone_f@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_CmdsMP_ClientCommand
==============
*/

void __fastcall G_CmdsMP_ClientCommand(int clientNum)
{
  ?G_CmdsMP_ClientCommand@@YAXH@Z(clientNum);
}

/*
==============
G_CmdsMP_SpectateClientnum_f
==============
*/

void __fastcall G_CmdsMP_SpectateClientnum_f(int clientnumSpectator)
{
  ?G_CmdsMP_SpectateClientnum_f@@YAXH@Z(clientnumSpectator);
}

/*
==============
ClientNumberFromString
==============
*/

int __fastcall ClientNumberFromString(gentity_s *to, char *s)
{
  return ?ClientNumberFromString@@YAHPEAUgentity_s@@PEAD@Z(to, s);
}

/*
==============
G_CmdsMP_StopSpectating
==============
*/

void __fastcall G_CmdsMP_StopSpectating(gentity_s *ent, const int clearCycle, const int force)
{
  ?G_CmdsMP_StopSpectating@@YAXPEAUgentity_s@@HH@Z(ent, clearCycle, force);
}

/*
==============
Cmd_SetMLGCameraType_f
==============
*/

void __fastcall Cmd_SetMLGCameraType_f(gentity_s *ent)
{
  ?Cmd_SetMLGCameraType_f@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_CmdsMP_SpectateClientnum_f
==============
*/

void __fastcall G_CmdsMP_SpectateClientnum_f(gentity_s *ent, int spectateClientnum)
{
  ?G_CmdsMP_SpectateClientnum_f@@YAXPEAUgentity_s@@H@Z(ent, spectateClientnum);
}

/*
==============
G_SetSpectatorPosition
==============
*/

void __fastcall G_SetSpectatorPosition(gentity_s *ent, const vec3_t *pos, const vec3_t *angles)
{
  ?G_SetSpectatorPosition@@YAXPEAUgentity_s@@AEBTvec3_t@@1@Z(ent, pos, angles);
}

/*
==============
G_CmdsMP_SpectateClientnum_ReplicateFollow_f
==============
*/

void __fastcall G_CmdsMP_SpectateClientnum_ReplicateFollow_f(gentity_s *ent, int clientnumSpectator, int spectateClientnum)
{
  ?G_CmdsMP_SpectateClientnum_ReplicateFollow_f@@YAXPEAUgentity_s@@HH@Z(ent, clientnumSpectator, spectateClientnum);
}

/*
==============
ClientNumberFromString
==============
*/
unsigned int ClientNumberFromString(gentity_s *to, char *s)
{
  unsigned int result; 
  const char *v5; 
  __int16 EntityIndex; 
  char *v7; 
  int maxclients; 
  int v9; 
  char *name; 
  const char *v11; 
  unsigned int v12; 
  SvClient *CommonClient; 
  char v14[1024]; 
  char out[1024]; 

  if ( (unsigned __int8)(*s - 48) > 9u )
  {
    SanitizeString(s, out);
    maxclients = level.maxclients;
    v9 = 0;
    if ( level.maxclients > 0 )
    {
      name = level.clients->sess.cs.name;
      do
      {
        if ( *((_DWORD *)name - 193) == 2 )
        {
          SanitizeString(name, v14);
          if ( !strcmp(v14, out) )
            return v9;
          maxclients = level.maxclients;
        }
        ++v9;
        name += 64592;
      }
      while ( v9 < maxclients );
    }
    v7 = j_va(aCGameUsernoton, 101i64, s);
  }
  else
  {
    result = atoi(s);
    if ( (result & 0x80000000) == 0 && (int)result < level.maxclients )
    {
      if ( level.clients[result].sess.connected == CON_CONNECTED )
        return result;
      v5 = j_va(aCGameClientnot, 101i64, result);
      EntityIndex = G_GetEntityIndex(to);
      SV_Game_SendServerCommand(EntityIndex, SV_CMD_CAN_IGNORE, v5);
      return -1;
    }
    v7 = j_va(aCGameBadclient, 101i64, result);
  }
  v11 = v7;
  v12 = G_GetEntityIndex(to);
  if ( v12 == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_CAN_IGNORE, v11);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v12);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_CAN_IGNORE, v11);
  }
  return -1;
}

/*
==============
Cmd_FollowDrone_f
==============
*/
void Cmd_FollowDrone_f(gentity_s *ent)
{
  const char *v2; 

  if ( ent->client )
  {
    v2 = ConcatArgs(1);
    ent->client->mlgSpectatorClientInfo.followDroneActive = atoi(v2);
  }
}

/*
==============
Cmd_SetMLGCameraFocusedClient_f
==============
*/
void Cmd_SetMLGCameraFocusedClient_f(gentity_s *ent)
{
  const char *v2; 
  int v3; 
  const char *v4; 
  int v5; 
  int v6; 
  int v7; 
  int num_entities; 
  gclient_s **p_client; 
  gclient_s *v10; 

  if ( ent->client->sess.cs.team == TEAM_SPECTATOR )
  {
    v2 = ConcatArgs(1);
    v3 = atoi(v2);
    v4 = ConcatArgs(2);
    v5 = atoi(v4);
    v6 = 0;
    v7 = v5;
    ent->client->mlgSpectatorClientInfo.cameraAerialFocusedClient = v5;
    num_entities = level.num_entities;
    if ( level.num_entities > 0 )
    {
      p_client = &g_entities->client;
      do
      {
        v10 = *p_client;
        if ( *p_client && v10->sess.cs.team == TEAM_FOLLOWER && v10->sess.cs.indexMLGFollower == v3 )
        {
          v10->mlgSpectatorClientInfo.cameraAerialFocusedClient = v7;
          num_entities = level.num_entities;
        }
        ++v6;
        p_client += 182;
      }
      while ( v6 < num_entities );
    }
  }
}

/*
==============
Cmd_SetMLGCameraType_f
==============
*/
void Cmd_SetMLGCameraType_f(gentity_s *ent)
{
  const char *v2; 
  int v3; 
  const char *v4; 
  unsigned __int8 v5; 
  int num_entities; 
  int v7; 
  gclient_s **p_client; 
  gclient_s *v9; 

  if ( ent->client->sess.cs.team == TEAM_SPECTATOR )
  {
    v2 = ConcatArgs(1);
    v3 = atoi(v2);
    v4 = ConcatArgs(2);
    v5 = atoi(v4);
    ent->client->mlgSpectatorClientInfo.cameraTypeMLGSpectator = v5;
    if ( v5 )
      Cmd_StopSpectate_f(ent, 1);
    num_entities = level.num_entities;
    v7 = 0;
    if ( level.num_entities > 0 )
    {
      p_client = &g_entities->client;
      do
      {
        v9 = *p_client;
        if ( *p_client && v9->sess.cs.team == TEAM_FOLLOWER && v9->sess.cs.indexMLGFollower == v3 )
        {
          v9->mlgSpectatorClientInfo.cameraTypeMLGSpectator = v5;
          num_entities = level.num_entities;
        }
        ++v7;
        p_client += 182;
      }
      while ( v7 < num_entities );
    }
  }
}

/*
==============
Cmd_SetMLGCamera_f
==============
*/
void Cmd_SetMLGCamera_f(gentity_s *ent)
{
  const char *v3; 
  int v4; 
  int v6; 
  char v7; 
  bool v8; 
  __int64 v10; 
  gclient_s *client; 
  __int64 v15; 
  __int64 v16; 
  vec3_t up; 
  vec3_t forward; 

  v3 = ConcatArgs(1);
  v4 = atoi(v3);
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 487, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 488, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  _RCX = ent->client;
  if ( _RCX->sess.sessionState == SESS_STATE_SPECTATOR && _RCX->sess.forceSpectatorClient < 0 && _RCX->cycleSpectatorClient < 0 )
  {
    v6 = 7;
    if ( v4 < 8 )
      v6 = v4;
    v7 = 0;
    v8 = v6 == 0;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( v6 < 0 )
      v6 = 0;
    v10 = v6;
    _RDI = v6;
    __asm { vucomiss xmm0, dword ptr [rcx+rdi*4+599Ch] }
    if ( v8 )
    {
      __asm { vucomiss xmm0, dword ptr [rcx+rdi*4+59A0h] }
      if ( v8 )
      {
        __asm { vucomiss xmm0, dword ptr [rcx+rdi*4+59A4h] }
        if ( v8 )
        {
          __asm { vucomiss xmm0, dword ptr [rcx+rdi*4+59FCh] }
          if ( v8 )
          {
            __asm { vucomiss xmm0, dword ptr [rcx+rdi*4+5A00h] }
            if ( v8 )
            {
              __asm { vucomiss xmm0, dword ptr [rcx+rdi*4+5A04h] }
              if ( v8 )
              {
                if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_mlg_static_cameras_editing, "cg_mlg_static_cameras_editing") )
                  return;
                _RCX = ent->client;
                v7 = 1;
              }
            }
          }
        }
      }
    }
    _RCX->cycleSpectatorClient = -1;
    if ( ent->client->sess.sessionState != SESS_STATE_SPECTATOR )
    {
      LODWORD(v15) = ent->client->sess.sessionState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 523, ASSERT_TYPE_ASSERT, "( ent->client->sess.sessionState ) == ( SESS_STATE_SPECTATOR )", "ent->client->sess.sessionState == SESS_STATE_SPECTATOR\n\t%i, %i", v15, 2) )
        __debugbreak();
    }
    if ( !v7 )
    {
      AngleVectors(&ent->client->sess.mlgCameraAngles[_RDI], &forward, NULL, &up);
      client = ent->client;
      if ( client->sess.cs.isMLGSpectator )
      {
        client->ps.speed = 0;
        _RAX = ent->client;
        v16 = 0i64;
        __asm
        {
          vmovsd  xmm0, [rsp+98h+var_58]
          vmovsd  qword ptr [rax+53C8h], xmm0
        }
        _RAX->sess.cmd.angles.v[2] = 0;
        client = ent->client;
      }
      G_SetSpectatorPosition(ent, &client->sess.mlgCameraPos[_RDI], &client->sess.mlgCameraAngles[_RDI]);
    }
    ent->client->sess.mlgCameraSelectedIconIndex = ent->client->sess.mlgCameraIconIndex[v10];
    GScr_Notify(ent, scr_const.spectating_mlg_camera, 0);
  }
}

/*
==============
Cmd_SetSpectatorViewpos_f
==============
*/

void __fastcall Cmd_SetSpectatorViewpos_f(gentity_s *ent, __int64 a2, double _XMM2_8)
{
  int v5; 
  unsigned int v7; 
  int v9; 
  const char *v10; 
  int v15; 
  int v17; 
  int v18; 
  const char *v19; 
  const char *v21; 
  __int64 v23; 
  __int64 v24; 
  vec3_t angles; 
  vec3_t pos; 

  v5 = 0;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 437, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 438, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( SV_Cmd_Argc() >= 4 && SV_Cmd_Argc() <= 7 )
  {
    __asm { vmovaps [rsp+98h+var_28], xmm6 }
    Stream_ImageRecord_Disable("setspectatorviewpos");
    v7 = 0;
    _RDI = &pos;
    do
    {
      v9 = v7 + 1;
      v10 = SV_Cmd_Argv(v7 + 1);
      if ( *v10 == 40 )
        ++v10;
      *(double *)&_XMM0 = atof(v10);
      __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
      if ( v7 >= 3 )
      {
        LODWORD(v24) = 3;
        LODWORD(v23) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rdi], xmm6 }
      _RDI = (vec3_t *)((char *)_RDI + 4);
      ++v7;
    }
    while ( v9 < 3 );
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+pos+8]
      vxorps  xmm2, xmm2, xmm2
      vsubss  xmm1, xmm0, dword ptr [rax+1E8h]
      vmovss  dword ptr [rsp+98h+pos+8], xmm1
      vmovss  dword ptr [rsp+98h+angles], xmm2
      vmovss  dword ptr [rsp+98h+angles+4], xmm2
      vmovss  dword ptr [rsp+98h+angles+8], xmm2
    }
    v15 = SV_Cmd_Argc();
    __asm { vmovaps xmm6, [rsp+98h+var_28] }
    v17 = v15 - 5;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 != 1 )
        {
LABEL_22:
          G_SetSpectatorPosition(ent, &pos, &angles);
          return;
        }
        v5 = 1;
      }
      v19 = SV_Cmd_Argv(v5 + 5);
      *(double *)&_XMM0 = atof(v19);
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rsp+98h+angles], xmm1
      }
    }
    v21 = SV_Cmd_Argv(v5 + 4);
    *(double *)&_XMM0 = atof(v21);
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rsp+98h+angles+4], xmm1
    }
    goto LABEL_22;
  }
  Com_PrintError(15, "setspectatorviewpos x y z [yaw] [pitch]\n");
}

/*
==============
Cmd_StopSpectate_f
==============
*/
void Cmd_StopSpectate_f(gentity_s *ent, bool force)
{
  const char *v3; 
  int v4; 
  gentity_s *v5; 
  gclient_s *client; 
  BOOL v7; 
  int num_entities; 
  int v9; 
  gentity_s *i; 
  gclient_s *v11; 

  v3 = ConcatArgs(1);
  v4 = atoi(v3);
  v5 = &g_entities[v4];
  client = v5->client;
  if ( client && client->sess.sessionState == SESS_STATE_SPECTATOR && (force || client->sess.forceSpectatorClient < 0 && client->cycleSpectatorClient < 0) )
  {
    client->cycleSpectatorClient = -1;
    v7 = force;
    G_CmdsMP_StopSpectating(v5, 1, force);
    if ( v5->client->sess.cs.team == TEAM_SPECTATOR )
    {
      num_entities = level.num_entities;
      v9 = 0;
      for ( i = g_entities; v9 < num_entities; ++i )
      {
        v11 = i->client;
        if ( v11 && v11->sess.cs.team == TEAM_FOLLOWER && v11->sess.cs.indexMLGFollower == v4 )
        {
          v11->cycleSpectatorClient = -1;
          G_CmdsMP_StopSpectating(i, 1, v7);
          num_entities = level.num_entities;
        }
        ++v9;
      }
    }
  }
}

/*
==============
G_CmdsMP_ATClientRemoteDebug
==============
*/
void G_CmdsMP_ATClientRemoteDebug(int requesterClientNum, bool enable)
{
  unsigned __int64 v3; 
  bitarray_base<bitarray<224> > *PlayerByName; 
  bitarray_base<bitarray<224> > *v5; 
  signed __int64 v6; 
  gentity_s *v7; 
  const dvar_t *VarByName; 
  const char *v9; 
  unsigned int number; 
  const char *v11; 
  SvClient *CommonClient; 
  __int64 v13; 
  __int64 v14; 
  unsigned int outDvarIndex; 

  v3 = (unsigned int)requesterClientNum;
  PlayerByName = (bitarray_base<bitarray<224> > *)SV_GetPlayerByName();
  v5 = PlayerByName;
  if ( PlayerByName )
  {
    if ( enable )
    {
      bitarray_base<bitarray<224>>::setBit(PlayerByName + 321384, v3);
    }
    else
    {
      if ( (unsigned int)v3 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, 224) )
        __debugbreak();
      *(_DWORD *)&v5[4 * (v3 >> 5) + 321384] &= ~(0x80000000 >> (v3 & 0x1F));
    }
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    v6 = v5 - (bitarray_base<bitarray<224> > *)SvClient::GetCommonClient(0);
    if ( (unsigned int)(v6 / 379488) >= 0xC8 )
    {
      LODWORD(v14) = 200;
      LODWORD(v13) = v6 / 379488;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1072, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 200 )", "index doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    v7 = &SvGameGlobals::ms_svGameGlobals->gentities[(int)(v6 / 379488)];
    VarByName = Dvar_FindVarByName("NRNQRLQKOR");
    if ( VarByName && NetConstStrings_GetNetworkDvarIndex(VarByName, &outDvarIndex) )
    {
      v9 = j_va("%c %i \"%d\"", 113i64, outDvarIndex, enable);
      number = v7->s.number;
      v11 = v9;
      if ( number == -1 )
      {
        SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v9);
      }
      else
      {
        CommonClient = SvClient::GetCommonClient(number);
        CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v11);
      }
    }
  }
}

/*
==============
G_CmdsMP_ATClientState
==============
*/
void G_CmdsMP_ATClientState(int fromClientNum)
{
  const char *v2; 
  SvClient *CommonClient; 
  unsigned int i; 
  const char *v5; 
  const char *v6; 
  SvClient *v7; 
  __int64 v8; 
  __int64 v9; 

  if ( SV_Cmd_Argc() >= 2 )
  {
    v2 = SV_Cmd_Argv(1);
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(fromClientNum);
    if ( CommonClient )
    {
      for ( i = 0; (int)i < (int)SvClient::ms_clientCount; ++i )
      {
        if ( SvClient::GetCommonClient(i)->state >= CS_CONNECTED )
        {
          if ( i >= 0xE0 )
          {
            LODWORD(v9) = 224;
            LODWORD(v8) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v8, v9) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (i & 0x1F)) & CommonClient[1115].lastUsercmd.sightedClientsMask.data[((unsigned __int64)i >> 5) + 4]) != 0 )
          {
            v5 = j_va("%c %i \"%s\"", 87i64, (unsigned int)fromClientNum, v2);
            v6 = v5;
            if ( i == -1 )
            {
              SV_Game_BroadcastServerCommand(SV_CMD_CAN_IGNORE, v5);
            }
            else
            {
              v7 = SvClient::GetCommonClient(i);
              v7->SendServerCommand(v7, SV_CMD_CAN_IGNORE, v6);
            }
          }
        }
      }
    }
  }
}

/*
==============
G_CmdsMP_ClearStreamPos_f
==============
*/
void G_CmdsMP_ClearStreamPos_f(gentity_s *ent)
{
  playerState_s *EntityPlayerState; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 1108, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 1109, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  G_WorldStreaming_ClearNextStreamView(EntityPlayerState->clientNum, MOVEMENT);
}

/*
==============
G_CmdsMP_ClientCommand
==============
*/
void G_CmdsMP_ClientCommand(int clientNum)
{
  __int64 v2; 
  gentity_s *v3; 
  const char *v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  const char *v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  const char *v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  int v34; 
  int v35; 
  __int64 v36; 
  __int64 v37; 
  char v38; 
  __int64 v39; 
  char v40; 
  gclient_s *client; 
  __int64 v42; 
  __int64 v43; 
  int v44; 
  __int64 v45; 
  int v46; 
  int v47; 
  int v48; 
  __int64 v49; 
  __int64 v50; 
  int v51; 
  __int64 v52; 
  int v53; 
  int v54; 
  int v55; 
  __int64 v56; 
  __int64 v57; 
  char v58; 
  __int64 v59; 
  char v60; 
  __int64 v61; 
  __int64 v62; 
  int v63; 
  __int64 v64; 
  int v65; 
  int v66; 
  int v67; 
  const char *v68; 
  int v69; 
  gentity_s *v70; 
  int v71; 
  __int64 v72; 
  __int64 v73; 
  int v74; 
  __int64 v75; 
  int v76; 
  int v77; 
  int v78; 
  __int64 v79; 
  __int64 v80; 
  int v81; 
  __int64 v82; 
  int v83; 
  int v84; 
  int v85; 
  __int64 v86; 
  __int64 v87; 
  int v88; 
  __int64 v89; 
  int v90; 
  int v91; 
  int v92; 
  __int64 v93; 
  __int64 v94; 
  int v95; 
  __int64 v96; 
  int v97; 
  int v98; 
  int v99; 
  const char *v100; 
  int v101; 
  const char *v102; 
  unsigned __int8 v103; 
  int num_entities; 
  gclient_s **p_client; 
  gclient_s *v106; 
  __int64 v107; 
  __int64 v108; 
  int v109; 
  __int64 v110; 
  int v111; 
  int v112; 
  int v113; 
  const char *v114; 
  int v115; 
  const char *v116; 
  int v117; 
  int v118; 
  gclient_s **v119; 
  gclient_s *v120; 
  __int64 v121; 
  __int64 v122; 
  int v123; 
  __int64 v124; 
  int v125; 
  int v126; 
  int v127; 
  const char *v128; 
  __int64 v129; 
  __int64 v130; 
  int v131; 
  __int64 v132; 
  int v133; 
  int v134; 
  int v135; 
  const char *v136; 
  int v137; 
  gentity_s *v138; 
  const char *v139; 
  int v140; 
  __int64 v141; 
  __int64 v142; 
  int v143; 
  __int64 v144; 
  int v145; 
  int v146; 
  int v147; 
  const char *v148; 
  int v149; 
  gentity_s *v150; 
  gclient_s *v151; 
  __int64 v152; 
  __int64 v153; 
  int v154; 
  __int64 v155; 
  int v156; 
  int v157; 
  int v158; 
  __int64 v159; 
  __int64 v160; 
  int v161; 
  __int64 v162; 
  int v163; 
  int v164; 
  int v165; 
  __int64 v166; 
  __int64 v167; 
  int v168; 
  __int64 v169; 
  int v170; 
  int v171; 
  int v172; 
  __int64 v173; 
  __int64 v174; 
  int v175; 
  __int64 v176; 
  int v177; 
  int v178; 
  int v179; 
  __int64 v180; 
  __int64 v181; 
  int v182; 
  __int64 v183; 
  int v184; 
  int v185; 
  int v186; 
  __int64 v187; 
  __int64 v188; 
  int v189; 
  __int64 v190; 
  int v191; 
  int v192; 
  int v193; 
  __int64 v194; 
  __int64 v195; 
  int v196; 
  __int64 v197; 
  int v198; 
  int v199; 
  int v200; 
  __int64 v201; 
  __int64 v202; 
  int v203; 
  __int64 v204; 
  int v205; 
  int v206; 
  int v207; 
  __int64 v208; 
  __int64 v209; 
  int v210; 
  __int64 v211; 
  int v212; 
  int v213; 
  int v214; 
  __int64 v215; 
  __int64 v216; 
  int v217; 
  __int64 v218; 
  int v219; 
  int v220; 
  int v221; 
  __int64 v222; 
  __int64 v223; 
  int v224; 
  __int64 v225; 
  int v226; 
  int v227; 
  int v228; 
  __int64 v229; 
  __int64 v230; 
  int v231; 
  __int64 v232; 
  int v233; 
  int v234; 
  int v235; 
  __int64 v236; 
  __int64 v237; 
  int v238; 
  __int64 v239; 
  int v240; 
  int v241; 
  int v242; 
  __int64 v243; 
  __int64 v244; 
  int v245; 
  __int64 v246; 
  int v247; 
  int v248; 
  int v249; 
  __int64 v250; 
  __int64 v251; 
  int v252; 
  __int64 v253; 
  int v254; 
  int v255; 
  int v256; 
  __int64 v257; 
  __int64 v258; 
  int v259; 
  __int64 v260; 
  int v261; 
  int v262; 
  int v263; 
  __int64 v264; 
  __int64 v265; 
  int v266; 
  __int64 v267; 
  int v268; 
  int v269; 
  int v270; 
  __int64 v271; 
  __int64 v272; 
  int v273; 
  __int64 v274; 
  int v275; 
  int v276; 
  int v277; 
  __int64 v278; 
  __int64 v279; 
  int v280; 
  __int64 v281; 
  int v282; 
  int v283; 
  int v284; 
  int v285; 
  __int64 v286; 
  int v287; 
  int v288; 
  int v289; 
  const bitarray<224> *AllTeamFlags; 
  bitarray<224> *v291; 
  const bitarray<224> *TeamFlag; 
  const bitarray<224> *v293; 
  bitarray<224> *v294; 
  const bitarray<224> *v295; 
  const bitarray<224> *v296; 
  int parm5; 
  int v298; 
  int v299; 
  int v300; 
  int v301; 
  const char *v302; 
  int v303; 
  __int64 v304; 
  gentity_s *v305; 
  const char *v306; 
  int v307; 
  char *v308; 
  const char *v309; 
  bitarray<224> result; 
  char buffer[1024]; 

  v2 = clientNum;
  v3 = &g_entities[v2];
  if ( g_entities[v2].client )
  {
    SV_Cmd_ArgvBuffer(0, buffer, 0x400ui64);
    v4 = NULL;
    v5 = 0x7FFFFFFFi64;
    v6 = 0i64;
    v7 = 0x7FFFFFFFi64;
    while ( 1 )
    {
      v8 = (unsigned __int8)buffer[v6];
      v9 = v7;
      v10 = (unsigned __int8)aN_2[v6++];
      --v7;
      if ( !v9 )
      {
LABEL_11:
        Cmd_CheckNetNotify_f(clientNum);
        return;
      }
      if ( v8 != v10 )
      {
        v11 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v11 = v8;
        v8 = v11;
        v12 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v12 = v10;
        if ( v8 != v12 )
          break;
      }
      if ( !v8 )
        goto LABEL_11;
    }
    v13 = 0x7FFFFFFFi64;
    v14 = 0i64;
    while ( 1 )
    {
      v15 = (unsigned __int8)buffer[v14];
      v16 = v13;
      v17 = (unsigned __int8)aSay_0[v14++];
      --v13;
      if ( !v16 )
      {
LABEL_22:
        if ( SV_Cmd_Argc() >= 2 )
        {
          v20 = ConcatArgs(1);
          G_CmdsMP_Say(v3, NULL, SAY_ALL, v20);
        }
        return;
      }
      if ( v15 != v17 )
      {
        v18 = v15 + 32;
        if ( (unsigned int)(v15 - 65) > 0x19 )
          v18 = v15;
        v15 = v18;
        v19 = v17 + 32;
        if ( (unsigned int)(v17 - 65) > 0x19 )
          v19 = v17;
        if ( v15 != v19 )
          break;
      }
      if ( !v15 )
        goto LABEL_22;
    }
    v21 = 0x7FFFFFFFi64;
    v22 = 0i64;
    while ( 1 )
    {
      v23 = (unsigned __int8)buffer[v22];
      v24 = v21;
      v25 = (unsigned __int8)aSayTeam_0[v22++];
      --v21;
      if ( !v24 )
      {
LABEL_33:
        if ( SV_Cmd_Argc() >= 2 )
        {
          v28 = ConcatArgs(1);
          G_CmdsMP_Say(v3, NULL, SAY_TEAM, v28);
        }
        return;
      }
      if ( v23 != v25 )
      {
        v26 = v23 + 32;
        if ( (unsigned int)(v23 - 65) > 0x19 )
          v26 = v23;
        v23 = v26;
        v27 = v25 + 32;
        if ( (unsigned int)(v25 - 65) > 0x19 )
          v27 = v25;
        if ( v23 != v27 )
          break;
      }
      if ( !v23 )
        goto LABEL_33;
    }
    v29 = 0x7FFFFFFFi64;
    v30 = 0i64;
    while ( 1 )
    {
      v31 = (unsigned __int8)buffer[v30];
      v32 = v29;
      v33 = (unsigned __int8)aSavereplay[v30];
      --v29;
      ++v30;
      if ( !v32 )
      {
LABEL_44:
        if ( !SV_IsDemoPlaying() )
        {
          if ( SV_Cmd_Argc() >= 2 )
            v4 = SV_Cmd_Argv(1);
          SV_DemoMP_SaveDemoForClient(clientNum, v4);
        }
        return;
      }
      if ( v31 != v33 )
      {
        v34 = v31 + 32;
        if ( (unsigned int)(v31 - 65) > 0x19 )
          v34 = v31;
        v31 = v34;
        v35 = v33 + 32;
        if ( (unsigned int)(v33 - 65) > 0x19 )
          v35 = v33;
        if ( v31 != v35 )
          break;
      }
      if ( !v31 )
        goto LABEL_44;
    }
    v36 = 0x7FFFFFFFi64;
    v37 = 0i64;
    do
    {
      v38 = buffer[v37];
      v39 = v36;
      v40 = aLui_0[v37++];
      --v36;
      if ( !v39 )
        break;
      if ( v38 != v40 )
        goto LABEL_53;
    }
    while ( v38 );
    if ( G_GameInterface_PlayingBR() )
      goto LABEL_78;
LABEL_53:
    client = v3->client;
    if ( client->ps.pm_type == 6 )
      return;
    v42 = 0x7FFFFFFFi64;
    v43 = 0i64;
    while ( 1 )
    {
      v44 = (unsigned __int8)buffer[v43];
      v45 = v42;
      v46 = (unsigned __int8)aSpectatenext_0[v43++];
      --v42;
      if ( !v45 )
      {
LABEL_63:
        G_CmdsMP_SpectateCycle_f(v3->client, 1);
        return;
      }
      if ( v44 != v46 )
      {
        v47 = v44 + 32;
        if ( (unsigned int)(v44 - 65) > 0x19 )
          v47 = v44;
        v44 = v47;
        v48 = v46 + 32;
        if ( (unsigned int)(v46 - 65) > 0x19 )
          v48 = v46;
        if ( v44 != v48 )
          break;
      }
      if ( !v44 )
        goto LABEL_63;
    }
    v49 = 0x7FFFFFFFi64;
    v50 = 0i64;
    while ( 1 )
    {
      v51 = (unsigned __int8)buffer[v50];
      v52 = v49;
      v53 = (unsigned __int8)aSpectateprev_0[v50];
      --v49;
      ++v50;
      if ( !v52 )
      {
LABEL_73:
        G_CmdsMP_SpectateCycle_f(v3->client, -1);
        return;
      }
      if ( v51 != v53 )
      {
        v54 = v51 + 32;
        if ( (unsigned int)(v51 - 65) > 0x19 )
          v54 = v51;
        v51 = v54;
        v55 = v53 + 32;
        if ( (unsigned int)(v53 - 65) > 0x19 )
          v55 = v53;
        if ( v51 != v55 )
          break;
      }
      if ( !v51 )
        goto LABEL_73;
    }
    v56 = 0x7FFFFFFFi64;
    v57 = 0i64;
    do
    {
      v58 = buffer[v57];
      v59 = v56;
      v60 = aLui_0[v57++];
      --v56;
      if ( !v59 )
        break;
      if ( v58 != v60 )
      {
        v61 = 0x7FFFFFFFi64;
        v62 = 0i64;
        while ( 1 )
        {
          v63 = (unsigned __int8)buffer[v62];
          v64 = v61;
          v65 = (unsigned __int8)aSpectateclient[v62++];
          --v61;
          if ( !v64 )
          {
LABEL_88:
            v68 = ConcatArgs(1);
            v69 = atoi(v68);
            v70 = &g_entities[v2];
            v71 = v69;
            G_CmdsMP_SpectateClientnum_f(v70, v69);
            G_CmdsMP_SpectateClientnum_ReplicateFollow_f(v70, clientNum, v71);
            return;
          }
          if ( v63 != v65 )
          {
            v66 = v63 + 32;
            if ( (unsigned int)(v63 - 65) > 0x19 )
              v66 = v63;
            v63 = v66;
            v67 = v65 + 32;
            if ( (unsigned int)(v65 - 65) > 0x19 )
              v67 = v65;
            if ( v63 != v67 )
              break;
          }
          if ( !v63 )
            goto LABEL_88;
        }
        v72 = 0x7FFFFFFFi64;
        v73 = 0i64;
        while ( 1 )
        {
          v74 = (unsigned __int8)buffer[v73];
          v75 = v72;
          v76 = (unsigned __int8)aSetmlgcamera[v73++];
          --v72;
          if ( !v75 )
          {
LABEL_98:
            Cmd_SetMLGCamera_f(v3);
            return;
          }
          if ( v74 != v76 )
          {
            v77 = v74 + 32;
            if ( (unsigned int)(v74 - 65) > 0x19 )
              v77 = v74;
            v74 = v77;
            v78 = v76 + 32;
            if ( (unsigned int)(v76 - 65) > 0x19 )
              v78 = v76;
            if ( v74 != v78 )
              break;
          }
          if ( !v74 )
            goto LABEL_98;
        }
        v79 = 0x7FFFFFFFi64;
        v80 = 0i64;
        while ( 1 )
        {
          v81 = (unsigned __int8)buffer[v80];
          v82 = v79;
          v83 = (unsigned __int8)aStopspectate[v80++];
          --v79;
          if ( !v82 )
          {
LABEL_108:
            Cmd_StopSpectate_f(v3, 0);
            return;
          }
          if ( v81 != v83 )
          {
            v84 = v81 + 32;
            if ( (unsigned int)(v81 - 65) > 0x19 )
              v84 = v81;
            v81 = v84;
            v85 = v83 + 32;
            if ( (unsigned int)(v83 - 65) > 0x19 )
              v85 = v83;
            if ( v81 != v85 )
              break;
          }
          if ( !v81 )
            goto LABEL_108;
        }
        v86 = 0x7FFFFFFFi64;
        v87 = 0i64;
        while ( 1 )
        {
          v88 = (unsigned __int8)buffer[v87];
          v89 = v86;
          v90 = (unsigned __int8)aForcestopspect[v87++];
          --v86;
          if ( !v89 )
          {
LABEL_118:
            Cmd_StopSpectate_f(v3, 1);
            return;
          }
          if ( v88 != v90 )
          {
            v91 = v88 + 32;
            if ( (unsigned int)(v88 - 65) > 0x19 )
              v91 = v88;
            v88 = v91;
            v92 = v90 + 32;
            if ( (unsigned int)(v90 - 65) > 0x19 )
              v92 = v90;
            if ( v88 != v92 )
              break;
          }
          if ( !v88 )
            goto LABEL_118;
        }
        v93 = 0x7FFFFFFFi64;
        v94 = 0i64;
        while ( 1 )
        {
          v95 = (unsigned __int8)buffer[v94];
          v96 = v93;
          v97 = (unsigned __int8)aSetmlgcameraty[v94++];
          --v93;
          if ( !v96 )
          {
LABEL_128:
            if ( client->sess.cs.team == TEAM_SPECTATOR )
            {
              v100 = ConcatArgs(1);
              v101 = atoi(v100);
              v102 = ConcatArgs(2);
              v103 = atoi(v102);
              v3->client->mlgSpectatorClientInfo.cameraTypeMLGSpectator = v103;
              if ( v103 )
                Cmd_StopSpectate_f(v3, 1);
              num_entities = level.num_entities;
              if ( level.num_entities > 0 )
              {
                p_client = &g_entities->client;
                do
                {
                  v106 = *p_client;
                  if ( *p_client && v106->sess.cs.team == TEAM_FOLLOWER && v106->sess.cs.indexMLGFollower == v101 )
                  {
                    v106->mlgSpectatorClientInfo.cameraTypeMLGSpectator = v103;
                    num_entities = level.num_entities;
                  }
                  LODWORD(v4) = (_DWORD)v4 + 1;
                  p_client += 182;
                }
                while ( (int)v4 < num_entities );
              }
            }
            return;
          }
          if ( v95 != v97 )
          {
            v98 = v95 + 32;
            if ( (unsigned int)(v95 - 65) > 0x19 )
              v98 = v95;
            v95 = v98;
            v99 = v97 + 32;
            if ( (unsigned int)(v97 - 65) > 0x19 )
              v99 = v97;
            if ( v95 != v99 )
              break;
          }
          if ( !v95 )
            goto LABEL_128;
        }
        v107 = 0x7FFFFFFFi64;
        v108 = 0i64;
        while ( 1 )
        {
          v109 = (unsigned __int8)buffer[v108];
          v110 = v107;
          v111 = (unsigned __int8)aSetmlgcamerafo_0[v108++];
          --v107;
          if ( !v110 )
          {
LABEL_148:
            if ( client->sess.cs.team == TEAM_SPECTATOR )
            {
              v114 = ConcatArgs(1);
              v115 = atoi(v114);
              v116 = ConcatArgs(2);
              v117 = atoi(v116);
              v3->client->mlgSpectatorClientInfo.cameraAerialFocusedClient = v117;
              v118 = level.num_entities;
              if ( level.num_entities > 0 )
              {
                v119 = &g_entities->client;
                do
                {
                  v120 = *v119;
                  if ( *v119 && v120->sess.cs.team == TEAM_FOLLOWER && v120->sess.cs.indexMLGFollower == v115 )
                  {
                    v120->mlgSpectatorClientInfo.cameraAerialFocusedClient = v117;
                    v118 = level.num_entities;
                  }
                  LODWORD(v4) = (_DWORD)v4 + 1;
                  v119 += 182;
                }
                while ( (int)v4 < v118 );
              }
            }
            return;
          }
          if ( v109 != v111 )
          {
            v112 = v109 + 32;
            if ( (unsigned int)(v109 - 65) > 0x19 )
              v112 = v109;
            v109 = v112;
            v113 = v111 + 32;
            if ( (unsigned int)(v111 - 65) > 0x19 )
              v113 = v111;
            if ( v109 != v113 )
              break;
          }
          if ( !v109 )
            goto LABEL_148;
        }
        v121 = 0x7FFFFFFFi64;
        v122 = 0i64;
        while ( 1 )
        {
          v123 = (unsigned __int8)buffer[v122];
          v124 = v121;
          v125 = (unsigned __int8)aFollowdrone[v122++];
          --v121;
          if ( !v124 )
          {
LABEL_166:
            if ( client )
            {
              v128 = ConcatArgs(1);
              v3->client->mlgSpectatorClientInfo.followDroneActive = atoi(v128);
            }
            return;
          }
          if ( v123 != v125 )
          {
            v126 = v123 + 32;
            if ( (unsigned int)(v123 - 65) > 0x19 )
              v126 = v123;
            v123 = v126;
            v127 = v125 + 32;
            if ( (unsigned int)(v125 - 65) > 0x19 )
              v127 = v125;
            if ( v123 != v127 )
              break;
          }
          if ( !v123 )
            goto LABEL_166;
        }
        v129 = 0x7FFFFFFFi64;
        v130 = 0i64;
        while ( 1 )
        {
          v131 = (unsigned __int8)buffer[v130];
          v132 = v129;
          v133 = (unsigned __int8)aSvrspectatecli_0[v130++];
          --v129;
          if ( !v132 )
          {
LABEL_177:
            v136 = ConcatArgs(1);
            v137 = atoi(v136);
            v138 = &g_entities[v137];
            if ( v138->client )
            {
              v139 = ConcatArgs(2);
              v140 = atoi(v139);
              G_CmdsMP_SpectateClientnum_f(v138, v140);
              G_CmdsMP_SpectateClientnum_ReplicateFollow_f(v138, v137, v140);
            }
            return;
          }
          if ( v131 != v133 )
          {
            v134 = v131 + 32;
            if ( (unsigned int)(v131 - 65) > 0x19 )
              v134 = v131;
            v131 = v134;
            v135 = v133 + 32;
            if ( (unsigned int)(v133 - 65) > 0x19 )
              v135 = v133;
            if ( v131 != v135 )
              break;
          }
          if ( !v131 )
            goto LABEL_177;
        }
        v141 = 0x7FFFFFFFi64;
        v142 = 0i64;
        while ( 1 )
        {
          v143 = (unsigned __int8)buffer[v142];
          v144 = v141;
          v145 = (unsigned __int8)aFollowclientnu_0[v142++];
          --v141;
          if ( !v144 )
          {
LABEL_188:
            v148 = ConcatArgs(1);
            v149 = atoi(v148);
            v150 = &g_entities[v2];
            if ( !&g_entities[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 401, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
              __debugbreak();
            if ( !v150->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 402, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
              __debugbreak();
            v151 = v150->client;
            if ( v151->sess.sessionState == SESS_STATE_SPECTATOR )
            {
              if ( v149 >= level.maxclients )
                v149 = level.maxclients - 1;
              if ( v149 < 0 )
                v149 = 0;
              if ( v151->sess.cs.indexMLGFollower >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 413, ASSERT_TYPE_ASSERT, "( ent->client->sess.cs.indexMLGFollower < 0 )", (const char *)&queryFormat, "ent->client->sess.cs.indexMLGFollower < 0") )
                __debugbreak();
              v150->client->sess.cs.indexMLGFollower = v149;
            }
            return;
          }
          if ( v143 != v145 )
          {
            v146 = v143 + 32;
            if ( (unsigned int)(v143 - 65) > 0x19 )
              v146 = v143;
            v143 = v146;
            v147 = v145 + 32;
            if ( (unsigned int)(v145 - 65) > 0x19 )
              v147 = v145;
            if ( v143 != v147 )
              break;
          }
          if ( !v143 )
            goto LABEL_188;
        }
        v152 = 0x7FFFFFFFi64;
        v153 = 0i64;
        while ( 1 )
        {
          v154 = (unsigned __int8)buffer[v153];
          v155 = v152;
          v156 = (unsigned __int8)aGive[v153++];
          --v152;
          if ( !v155 )
          {
LABEL_212:
            Cmd_Give_f(v3);
            return;
          }
          if ( v154 != v156 )
          {
            v157 = v154 + 32;
            if ( (unsigned int)(v154 - 65) > 0x19 )
              v157 = v154;
            v154 = v157;
            v158 = v156 + 32;
            if ( (unsigned int)(v156 - 65) > 0x19 )
              v158 = v156;
            if ( v154 != v158 )
              break;
          }
          if ( !v154 )
            goto LABEL_212;
        }
        v159 = 0x7FFFFFFFi64;
        v160 = 0i64;
        while ( 1 )
        {
          v161 = (unsigned __int8)buffer[v160];
          v162 = v159;
          v163 = (unsigned __int8)aGivecharacter[v160++];
          --v159;
          if ( !v162 )
          {
LABEL_222:
            if ( SV_Cmd_Argc() >= 3 )
            {
              v302 = SV_Cmd_Argv(1);
              v303 = atoi(v302);
              v304 = v303;
              if ( v303 < 0 || v303 >= ComCharacterLimits::GetCharacterMaxCount() )
              {
                if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
                  __debugbreak();
                Com_PrintError(15, "GiveCharacter: invalid character entity id. Entity %d must be less than %d\n", (unsigned int)v304, ComCharacterLimits::ms_gameData.m_characterCount);
              }
              else
              {
                v305 = &g_entities[v304];
                if ( G_IsEntityInUse(v304) )
                {
                  if ( G_Cmds_AreCheatsOk(v305) )
                  {
                    if ( !G_Utils_IsClientOrAgent(v305) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 969, ASSERT_TYPE_ASSERT, "(G_Utils_IsClientOrAgent( gentity ))", (const char *)&queryFormat, "G_Utils_IsClientOrAgent( gentity )") )
                      __debugbreak();
                    v306 = ConcatArgs(3);
                    v307 = atoi(v306);
                    v308 = ConcatArgs(2);
                    v309 = v308;
                    if ( v308 && *v308 )
                    {
                      if ( (int)v304 < level.maxclients )
                        goto LABEL_476;
                      if ( (int)v304 < ComCharacterLimits::GetCharacterMaxCount() )
                        LODWORD(v4) = 1;
                      if ( (int)v304 < level.maxclients )
LABEL_476:
                        LODWORD(v4) = SV_BotIsBot(v304);
                      G_Cmds_GiveInternal(v305, v309, v307, (int)v4);
                    }
                  }
                }
                else
                {
                  Com_PrintError(15, "GiveCharacter: Entity %d is not currently being used.\n", (unsigned int)v304);
                }
              }
            }
            else
            {
              Com_PrintError(15, "USAGE: GiveCharacter <entity number> <string command>\n");
            }
            return;
          }
          if ( v161 != v163 )
          {
            v164 = v161 + 32;
            if ( (unsigned int)(v161 - 65) > 0x19 )
              v164 = v161;
            v161 = v164;
            v165 = v163 + 32;
            if ( (unsigned int)(v163 - 65) > 0x19 )
              v165 = v163;
            if ( v161 != v165 )
              break;
          }
          if ( !v161 )
            goto LABEL_222;
        }
        v166 = 0x7FFFFFFFi64;
        v167 = 0i64;
        while ( 1 )
        {
          v168 = (unsigned __int8)buffer[v167];
          v169 = v166;
          v170 = (unsigned __int8)aTake_0[v167++];
          --v166;
          if ( !v169 )
          {
LABEL_233:
            Cmd_Take_f(v3);
            return;
          }
          if ( v168 != v170 )
          {
            v171 = v168 + 32;
            if ( (unsigned int)(v168 - 65) > 0x19 )
              v171 = v168;
            v168 = v171;
            v172 = v170 + 32;
            if ( (unsigned int)(v170 - 65) > 0x19 )
              v172 = v170;
            if ( v168 != v172 )
              break;
          }
          if ( !v168 )
            goto LABEL_233;
        }
        v173 = 0x7FFFFFFFi64;
        v174 = 0i64;
        while ( 1 )
        {
          v175 = (unsigned __int8)buffer[v174];
          v176 = v173;
          v177 = (unsigned __int8)aGod[v174++];
          --v173;
          if ( !v176 )
          {
LABEL_243:
            Cmd_God_f(v3);
            return;
          }
          if ( v175 != v177 )
          {
            v178 = v175 + 32;
            if ( (unsigned int)(v175 - 65) > 0x19 )
              v178 = v175;
            v175 = v178;
            v179 = v177 + 32;
            if ( (unsigned int)(v177 - 65) > 0x19 )
              v179 = v177;
            if ( v175 != v179 )
              break;
          }
          if ( !v175 )
            goto LABEL_243;
        }
        v180 = 0x7FFFFFFFi64;
        v181 = 0i64;
        while ( 1 )
        {
          v182 = (unsigned __int8)buffer[v181];
          v183 = v180;
          v184 = (unsigned __int8)aDemigod[v181++];
          --v180;
          if ( !v183 )
          {
LABEL_253:
            Cmd_DemiGod_f(v3);
            return;
          }
          if ( v182 != v184 )
          {
            v185 = v182 + 32;
            if ( (unsigned int)(v182 - 65) > 0x19 )
              v185 = v182;
            v182 = v185;
            v186 = v184 + 32;
            if ( (unsigned int)(v184 - 65) > 0x19 )
              v186 = v184;
            if ( v182 != v186 )
              break;
          }
          if ( !v182 )
            goto LABEL_253;
        }
        v187 = 0x7FFFFFFFi64;
        v188 = 0i64;
        while ( 1 )
        {
          v189 = (unsigned __int8)buffer[v188];
          v190 = v187;
          v191 = (unsigned __int8)aNotarget[v188++];
          --v187;
          if ( !v190 )
          {
LABEL_263:
            Cmd_Notarget_f(v3);
            return;
          }
          if ( v189 != v191 )
          {
            v192 = v189 + 32;
            if ( (unsigned int)(v189 - 65) > 0x19 )
              v192 = v189;
            v189 = v192;
            v193 = v191 + 32;
            if ( (unsigned int)(v191 - 65) > 0x19 )
              v193 = v191;
            if ( v189 != v193 )
              break;
          }
          if ( !v189 )
            goto LABEL_263;
        }
        v194 = 0x7FFFFFFFi64;
        v195 = 0i64;
        while ( 1 )
        {
          v196 = (unsigned __int8)buffer[v195];
          v197 = v194;
          v198 = (unsigned __int8)aNoclip_1[v195++];
          --v194;
          if ( !v197 )
          {
LABEL_273:
            Cmd_Noclip_f(v3);
            return;
          }
          if ( v196 != v198 )
          {
            v199 = v196 + 32;
            if ( (unsigned int)(v196 - 65) > 0x19 )
              v199 = v196;
            v196 = v199;
            v200 = v198 + 32;
            if ( (unsigned int)(v198 - 65) > 0x19 )
              v200 = v198;
            if ( v196 != v200 )
              break;
          }
          if ( !v196 )
            goto LABEL_273;
        }
        v201 = 0x7FFFFFFFi64;
        v202 = 0i64;
        while ( 1 )
        {
          v203 = (unsigned __int8)buffer[v202];
          v204 = v201;
          v205 = (unsigned __int8)aUfo[v202++];
          --v201;
          if ( !v204 )
          {
LABEL_283:
            Cmd_UFO_f(v3, 0);
            return;
          }
          if ( v203 != v205 )
          {
            v206 = v203 + 32;
            if ( (unsigned int)(v203 - 65) > 0x19 )
              v206 = v203;
            v203 = v206;
            v207 = v205 + 32;
            if ( (unsigned int)(v205 - 65) > 0x19 )
              v207 = v205;
            if ( v203 != v207 )
              break;
          }
          if ( !v203 )
            goto LABEL_283;
        }
        v208 = 0x7FFFFFFFi64;
        v209 = 0i64;
        while ( 1 )
        {
          v210 = (unsigned __int8)buffer[v209];
          v211 = v208;
          v212 = (unsigned __int8)aKill[v209++];
          --v208;
          if ( !v211 )
          {
LABEL_293:
            if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 891, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
              __debugbreak();
            if ( v3->client->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 892, ASSERT_TYPE_ASSERT, "( ent->client->sess.connected != CON_DISCONNECTED )", (const char *)&queryFormat, "ent->client->sess.connected != CON_DISCONNECTED") )
              __debugbreak();
            if ( v3->client->sess.sessionState == SESS_STATE_PLAYING && G_Cmds_AreCheatsOk(v3) )
              G_CmdsMP_KillPlayerInternal(v3);
            return;
          }
          if ( v210 != v212 )
          {
            v213 = v210 + 32;
            if ( (unsigned int)(v210 - 65) > 0x19 )
              v213 = v210;
            v210 = v213;
            v214 = v212 + 32;
            if ( (unsigned int)(v212 - 65) > 0x19 )
              v214 = v212;
            if ( v210 != v214 )
              break;
          }
          if ( !v210 )
            goto LABEL_293;
        }
        v215 = 0x7FFFFFFFi64;
        v216 = 0i64;
        while ( 1 )
        {
          v217 = (unsigned __int8)buffer[v216];
          v218 = v215;
          v219 = (unsigned __int8)aKillclient[v216++];
          --v215;
          if ( !v218 )
          {
LABEL_311:
            G_CmdsMP_KillClient_f(v3);
            return;
          }
          if ( v217 != v219 )
          {
            v220 = v217 + 32;
            if ( (unsigned int)(v217 - 65) > 0x19 )
              v220 = v217;
            v217 = v220;
            v221 = v219 + 32;
            if ( (unsigned int)(v219 - 65) > 0x19 )
              v221 = v219;
            if ( v217 != v221 )
              break;
          }
          if ( !v217 )
            goto LABEL_311;
        }
        v222 = 0x7FFFFFFFi64;
        v223 = 0i64;
        while ( 1 )
        {
          v224 = (unsigned __int8)buffer[v223];
          v225 = v222;
          v226 = (unsigned __int8)aWhere[v223++];
          --v222;
          if ( !v225 )
          {
LABEL_321:
            Cmd_Where_f(v3);
            return;
          }
          if ( v224 != v226 )
          {
            v227 = v224 + 32;
            if ( (unsigned int)(v224 - 65) > 0x19 )
              v227 = v224;
            v224 = v227;
            v228 = v226 + 32;
            if ( (unsigned int)(v226 - 65) > 0x19 )
              v228 = v226;
            if ( v224 != v228 )
              break;
          }
          if ( !v224 )
            goto LABEL_321;
        }
        v229 = 0x7FFFFFFFi64;
        v230 = 0i64;
        while ( 1 )
        {
          v231 = (unsigned __int8)buffer[v230];
          v232 = v229;
          v233 = (unsigned __int8)aSetsv[v230++];
          --v229;
          if ( !v232 )
          {
LABEL_331:
            Cmd_Dvar_SetSv(v3);
            return;
          }
          if ( v231 != v233 )
          {
            v234 = v231 + 32;
            if ( (unsigned int)(v231 - 65) > 0x19 )
              v234 = v231;
            v231 = v234;
            v235 = v233 + 32;
            if ( (unsigned int)(v233 - 65) > 0x19 )
              v235 = v233;
            if ( v231 != v235 )
              break;
          }
          if ( !v231 )
            goto LABEL_331;
        }
        v236 = 0x7FFFFFFFi64;
        v237 = 0i64;
        while ( 1 )
        {
          v238 = (unsigned __int8)buffer[v237];
          v239 = v236;
          v240 = (unsigned __int8)aSetviewpos[v237++];
          --v236;
          if ( !v239 )
          {
LABEL_341:
            Cmd_SetViewpos_f(v3);
            return;
          }
          if ( v238 != v240 )
          {
            v241 = v238 + 32;
            if ( (unsigned int)(v238 - 65) > 0x19 )
              v241 = v238;
            v238 = v241;
            v242 = v240 + 32;
            if ( (unsigned int)(v240 - 65) > 0x19 )
              v242 = v240;
            if ( v238 != v242 )
              break;
          }
          if ( !v238 )
            goto LABEL_341;
        }
        v243 = 0x7FFFFFFFi64;
        v244 = 0i64;
        while ( 1 )
        {
          v245 = (unsigned __int8)buffer[v244];
          v246 = v243;
          v247 = (unsigned __int8)aForcemispredic[v244++];
          --v243;
          if ( !v246 )
          {
LABEL_351:
            G_CmdsMP_ForceMispredict_f(v3);
            return;
          }
          if ( v245 != v247 )
          {
            v248 = v245 + 32;
            if ( (unsigned int)(v245 - 65) > 0x19 )
              v248 = v245;
            v245 = v248;
            v249 = v247 + 32;
            if ( (unsigned int)(v247 - 65) > 0x19 )
              v249 = v247;
            if ( v245 != v249 )
              break;
          }
          if ( !v245 )
            goto LABEL_351;
        }
        v250 = 0x7FFFFFFFi64;
        v251 = 0i64;
        while ( 1 )
        {
          v252 = (unsigned __int8)buffer[v251];
          v253 = v250;
          v254 = (unsigned __int8)aForcematchstar_0[v251++];
          --v250;
          if ( !v253 )
          {
LABEL_361:
            G_CmdsMP_ForceMatchStart_f(v3);
            return;
          }
          if ( v252 != v254 )
          {
            v255 = v252 + 32;
            if ( (unsigned int)(v252 - 65) > 0x19 )
              v255 = v252;
            v252 = v255;
            v256 = v254 + 32;
            if ( (unsigned int)(v254 - 65) > 0x19 )
              v256 = v254;
            if ( v252 != v256 )
              break;
          }
          if ( !v252 )
            goto LABEL_361;
        }
        v257 = 0x7FFFFFFFi64;
        v258 = 0i64;
        while ( 1 )
        {
          v259 = (unsigned __int8)buffer[v258];
          v260 = v257;
          v261 = (unsigned __int8)aSetstreampos[v258++];
          --v257;
          if ( !v260 )
          {
LABEL_371:
            G_CmdsMP_SetStreamPos_f(v3);
            return;
          }
          if ( v259 != v261 )
          {
            v262 = v259 + 32;
            if ( (unsigned int)(v259 - 65) > 0x19 )
              v262 = v259;
            v259 = v262;
            v263 = v261 + 32;
            if ( (unsigned int)(v261 - 65) > 0x19 )
              v263 = v261;
            if ( v259 != v263 )
              break;
          }
          if ( !v259 )
            goto LABEL_371;
        }
        v264 = 0x7FFFFFFFi64;
        v265 = 0i64;
        while ( 1 )
        {
          v266 = (unsigned __int8)buffer[v265];
          v267 = v264;
          v268 = (unsigned __int8)aClearstreampos[v265++];
          --v264;
          if ( !v267 )
          {
LABEL_381:
            G_CmdsMP_ClearStreamPos_f(v3);
            return;
          }
          if ( v266 != v268 )
          {
            v269 = v266 + 32;
            if ( (unsigned int)(v266 - 65) > 0x19 )
              v269 = v266;
            v266 = v269;
            v270 = v268 + 32;
            if ( (unsigned int)(v268 - 65) > 0x19 )
              v270 = v268;
            if ( v266 != v270 )
              break;
          }
          if ( !v266 )
            goto LABEL_381;
        }
        v271 = 0x7FFFFFFFi64;
        v272 = 0i64;
        while ( 1 )
        {
          v273 = (unsigned __int8)buffer[v272];
          v274 = v271;
          v275 = (unsigned __int8)aUfoViewmodel[v272++];
          --v271;
          if ( !v274 )
          {
LABEL_391:
            Cmd_UFO_Viewmodel_f(v3);
            return;
          }
          if ( v273 != v275 )
          {
            v276 = v273 + 32;
            if ( (unsigned int)(v273 - 65) > 0x19 )
              v276 = v273;
            v273 = v276;
            v277 = v275 + 32;
            if ( (unsigned int)(v275 - 65) > 0x19 )
              v277 = v275;
            if ( v273 != v277 )
              break;
          }
          if ( !v273 )
            goto LABEL_391;
        }
        v278 = 0x7FFFFFFFi64;
        v279 = 0i64;
        while ( 1 )
        {
          v280 = (unsigned __int8)buffer[v279];
          v281 = v278;
          v282 = (unsigned __int8)aDumpentinfo[v279++];
          --v278;
          if ( !v281 )
          {
LABEL_401:
            G_Debug_PrintEntityDebugInfoToConsole(0, clientNum);
            return;
          }
          if ( v280 != v282 )
          {
            v283 = v280 + 32;
            if ( (unsigned int)(v280 - 65) > 0x19 )
              v283 = v280;
            v280 = v283;
            v284 = v282 + 32;
            if ( (unsigned int)(v282 - 65) > 0x19 )
              v284 = v282;
            if ( v280 != v284 )
              break;
          }
          if ( !v280 )
            goto LABEL_401;
        }
        while ( 1 )
        {
          v285 = (unsigned __int8)buffer[(_QWORD)v4];
          v286 = v5;
          v287 = (unsigned __int8)aDumpentinfocsv[(_QWORD)v4++];
          --v5;
          if ( !v286 )
          {
LABEL_410:
            G_Debug_PrintEntityDebugInfoToCSV((const char *)&queryFormat.fmt + 3, clientNum);
            return;
          }
          if ( v285 != v287 )
          {
            v288 = v285 + 32;
            if ( (unsigned int)(v285 - 65) > 0x19 )
              v288 = v285;
            v285 = v288;
            v289 = v287 + 32;
            if ( (unsigned int)(v287 - 65) > 0x19 )
              v289 = v287;
            if ( v285 != v289 )
              break;
          }
          if ( !v285 )
            goto LABEL_410;
        }
        if ( !I_stricmp(buffer, "dropabot") )
        {
          AllTeamFlags = Com_Teams_GetAllTeamFlags();
          GStatic::ClearActiveStatics();
          SV_ClientMP_DropBots(1, AllTeamFlags);
          GStatic::SetActiveStatics();
          return;
        }
        if ( !I_stricmp(buffer, "dropallbots") )
        {
          v291 = (bitarray<224> *)Com_Teams_GetAllTeamFlags();
LABEL_419:
          v293 = v291;
          GStatic::ClearActiveStatics();
          SV_ClientMP_DropBots(-1, v293);
          GStatic::SetActiveStatics();
          return;
        }
        if ( !I_stricmp(buffer, "dropallalliesbots") )
        {
          TeamFlag = Com_Teams_GetTeamFlag(&result, TEAM_TWO);
          GStatic::ClearActiveStatics();
          SV_ClientMP_DropBots(-1, TeamFlag);
          GStatic::SetActiveStatics();
          return;
        }
        if ( !I_stricmp(buffer, "dropallaxisbots") )
        {
          v291 = Com_Teams_GetTeamFlag(&result, TEAM_ONE);
          goto LABEL_419;
        }
        if ( !I_stricmp(buffer, "dropalltestclients") )
        {
          v294 = (bitarray<224> *)Com_Teams_GetAllTeamFlags();
LABEL_426:
          v296 = v294;
          GStatic::ClearActiveStatics();
          SV_ClientMP_DropTestClients(-1, v296);
          GStatic::SetActiveStatics();
          return;
        }
        if ( !I_stricmp(buffer, "dropallalliestestclients") )
        {
          v295 = Com_Teams_GetTeamFlag(&result, TEAM_TWO);
          GStatic::ClearActiveStatics();
          SV_ClientMP_DropTestClients(-1, v295);
          GStatic::SetActiveStatics();
          return;
        }
        if ( !I_stricmp(buffer, "dropallaxistestclients") )
        {
          v294 = Com_Teams_GetTeamFlag(&result, TEAM_ONE);
          goto LABEL_426;
        }
        if ( I_stricmp(buffer, "dumpEntSpawnCallstacks") )
        {
          if ( I_stricmp(buffer, "dumpSnapshotEntSpawnCallstacks") )
          {
            if ( I_stricmp(buffer, "dumpUnreferencedEnts") )
            {
              if ( I_stricmp(buffer, "dumpOmnvars") )
              {
                if ( I_stricmp(buffer, "g_testCmd") )
                {
                  if ( I_stricmp(buffer, "setspectatorviewpos") )
                  {
                    if ( I_stricmp(buffer, "g_enableATClientRemoteDebug") )
                    {
                      if ( I_stricmp(buffer, "g_disableATClientRemoteDebug") )
                      {
                        if ( I_stricmp(buffer, "ATClientState") )
                        {
                          if ( I_stricmp(buffer, "mpon") )
                          {
                            if ( I_stricmp(buffer, "mpoff") )
                            {
                              if ( I_stricmp(buffer, "cfx_exploder") )
                              {
                                if ( I_stricmp(buffer, "umbraPortalList") )
                                {
                                  if ( I_stricmp(buffer, "umbraPortalToggle") )
                                  {
                                    if ( I_stricmp(buffer, "blarg") )
                                    {
                                      if ( I_stricmp(buffer, "validateLootNodes") )
                                      {
                                        if ( I_stricmp(buffer, "cmpp") )
                                        {
                                          ReportUnknownClientCommand(clientNum, buffer);
                                        }
                                        else
                                        {
                                          parm5 = SV_Cmd_ArgInt(5);
                                          v298 = SV_Cmd_ArgInt(4);
                                          v299 = SV_Cmd_ArgInt(3);
                                          v300 = SV_Cmd_ArgInt(2);
                                          v301 = SV_Cmd_ArgInt(1);
                                          G_CalloutMarkerPings_ProcessPredictedCommand(clientNum, v301, v300, v299, v298, parm5);
                                        }
                                      }
                                      else
                                      {
                                        BG_SpawnGroup_Loot_ValidateNodes();
                                      }
                                    }
                                    else
                                    {
                                      Cmd_SetExtraGameRevenueRate(v3);
                                    }
                                  }
                                  else
                                  {
                                    Cmd_UmbraPortalToggle_f();
                                  }
                                }
                                else
                                {
                                  Cmd_UmbraPortalList_f();
                                }
                              }
                              else
                              {
                                Cmd_CreateFx_Exploder_f(v3);
                              }
                            }
                            else
                            {
                              Cmd_ModelPreviewer_f(v3, 0);
                            }
                          }
                          else
                          {
                            Cmd_ModelPreviewer_f(v3, 1);
                          }
                        }
                        else
                        {
                          G_CmdsMP_ATClientState(clientNum);
                        }
                      }
                      else
                      {
                        G_CmdsMP_ATClientRemoteDebug(clientNum, 0);
                      }
                    }
                    else
                    {
                      G_CmdsMP_ATClientRemoteDebug(clientNum, 1);
                    }
                  }
                  else
                  {
                    Cmd_SetSpectatorViewpos_f(v3);
                  }
                }
                else
                {
                  G_Cmds_TestCmd_f(v3);
                }
              }
              else
              {
                BG_Omnvar_DumpList();
              }
            }
            else
            {
              G_DumpUnreferencedEnts();
            }
          }
          else
          {
            G_DebugBlameForEntCount(1);
          }
        }
        else
        {
          G_DebugBlameForEntCount(0);
        }
        return;
      }
    }
    while ( v58 );
LABEL_78:
    G_CmdsMP_LuiNotifyServer_f(v3);
  }
}

/*
==============
G_CmdsMP_ForceMatchStart_f
==============
*/
void G_CmdsMP_ForceMatchStart_f(gentity_s *ent)
{
  playerState_s *EntityPlayerState; 
  scrContext_t *v3; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 1025, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( G_Cmds_AreCheatsOk(ent) )
  {
    EntityPlayerState = G_GetEntityPlayerState(ent);
    if ( EntityPlayerState )
    {
      if ( EntityPlayerState->clientNum < ComCharacterLimits::GetCharacterMaxCount() )
      {
        v3 = ScriptContext_Server();
        Scr_NotifyLevel(v3, scr_const.forcematchstart, 0);
      }
    }
  }
}

/*
==============
G_CmdsMP_ForceMispredict_f
==============
*/
void G_CmdsMP_ForceMispredict_f(gentity_s *ent)
{
  playerState_s *EntityPlayerState; 
  playerState_s *v3; 
  signed int clientNum; 
  BobCycle v5; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 995, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( G_Cmds_AreCheatsOk(ent) )
  {
    EntityPlayerState = G_GetEntityPlayerState(ent);
    v3 = EntityPlayerState;
    if ( EntityPlayerState )
    {
      clientNum = EntityPlayerState->clientNum;
      if ( clientNum < ComCharacterLimits::GetCharacterMaxCount() )
      {
        SV_Client_GetMpClient(clientNum)->isForceMispredict = 1;
        BobCycle::UnpackBobCycle(&v5, (const int (*)[2])v3->packedBobCycle);
        v5.animCycle = 0;
        BobCycle::PackBobCycle(&v5, (int (*)[2])v3->packedBobCycle);
      }
    }
  }
}

/*
==============
G_CmdsMP_KillClient_f
==============
*/
void G_CmdsMP_KillClient_f(gentity_s *ent)
{
  const char *v2; 
  int v3; 
  int v4; 
  gentity_s *GEntity; 

  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 906, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( ent->client->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 907, ASSERT_TYPE_ASSERT, "( ent->client->sess.connected != CON_DISCONNECTED )", (const char *)&queryFormat, "ent->client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  if ( ent->client->sess.sessionState == SESS_STATE_PLAYING )
  {
    if ( G_Cmds_AreCheatsOk(ent) )
    {
      v2 = ConcatArgs(1);
      v3 = atoi(v2);
      v4 = v3;
      if ( v3 >= 0 && v3 <= level.maxclients )
      {
        if ( G_IsEntityInUse(v3) )
        {
          GEntity = G_GetGEntity(v4);
          G_CmdsMP_KillPlayerInternal(GEntity);
        }
      }
    }
  }
}

/*
==============
G_CmdsMP_KillPlayerInternal
==============
*/
void G_CmdsMP_KillPlayerInternal(gentity_s *playerEnt)
{
  gclient_s *client; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 879, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !playerEnt->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 880, ASSERT_TYPE_ASSERT, "(playerEnt->client)", (const char *)&queryFormat, "playerEnt->client") )
    __debugbreak();
  playerEnt->flags.m_flags[0] &= 0xFFFFFFFC;
  client = playerEnt->client;
  playerEnt->health = 0;
  client->sess.cs.healthRatio = 0;
  playerEnt->client->ps.stats[0] = 0;
  G_CombatMP_PlayerDie(playerEnt, playerEnt, playerEnt, 100000, 0, 14, &NULL_WEAPON, 0, NULL, HITLOC_NONE, 0);
}

/*
==============
G_CmdsMP_LuiNotifyServer_f
==============
*/
void G_CmdsMP_LuiNotifyServer_f(gentity_s *pEnt)
{
  scrContext_t *v2; 
  unsigned int v3; 
  int v4; 
  char *v5; 
  char *outLuiString; 

  if ( BYTE1(SvGameGlobals::ms_allocatedType) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_persistent_globals_mp.h", 166, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
    __debugbreak();
  if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( BYTE2(SvPersistentGlobals::ms_svPersistent[4].m_skelMemSize) )
  {
    G_Cmds_LuiNotifyServer_StrChannel_f(pEnt);
    return;
  }
  v2 = ScriptContext_Server();
  if ( SV_Cmd_Argc() != 4 )
    goto LABEL_16;
  if ( SV_Cmd_ArgInt(3) != sv_serverId_value )
    return;
  v3 = SV_Cmd_ArgInt(1);
  if ( NetConstStrings_GetLuiStringName(v3, (const char **)&outLuiString) )
  {
    v4 = SV_Cmd_ArgInt(2);
    Scr_AddInt(v2, v4);
    v5 = outLuiString;
  }
  else
  {
LABEL_16:
    Scr_AddInt(v2, -1);
    v5 = "bad";
  }
  Scr_AddString(v2, v5);
  G_Cmds_InvokeLuiCallback(pEnt, 2u);
}

/*
==============
G_CmdsMP_Say
==============
*/
void G_CmdsMP_Say(gentity_s *ent, gentity_s *target, SayModes mode, const char *chatText)
{
  const char *string; 
  bool v9; 
  bool v10; 
  int v11; 
  int v12; 
  const dvar_t *v13; 
  const char *v14; 
  char dest[64]; 
  char message[160]; 

  string = (char *)&queryFormat.fmt + 3;
  v9 = (unsigned int)(ent->client->sess.cs.team - 1) > 1;
  v10 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG;
  v11 = 0;
  if ( mode == SAY_TEAM && (v9 || v10) )
    mode = SAY_ALL;
  Core_strcpy(dest, 0x40ui64, ent->client->sess.cs.name);
  I_CleanStr(dest);
  if ( mode == SAY_TEAM )
  {
    if ( (unsigned int)(ent->client->sess.cs.team - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 793, ASSERT_TYPE_ASSERT, "((ent->client->sess.cs.team == TEAM_AXIS) || (ent->client->sess.cs.team == TEAM_ALLIES))", (const char *)&queryFormat, "(ent->client->sess.cs.team == TEAM_AXIS) || (ent->client->sess.cs.team == TEAM_ALLIES)") )
      __debugbreak();
    if ( ent->client->sess.cs.team == TEAM_ONE )
    {
      v13 = DVARSTR_bg_TeamName_Axis;
      if ( !DVARSTR_bg_TeamName_Axis )
      {
        v14 = "bg_TeamName_Axis";
        goto LABEL_17;
      }
    }
    else
    {
      v13 = DVARSTR_bg_TeamName_Allies;
      if ( !DVARSTR_bg_TeamName_Allies )
      {
        v14 = "bg_TeamName_Allies";
LABEL_17:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v14) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v13);
    string = v13->current.string;
    v12 = 53;
    goto LABEL_20;
  }
  if ( mode == SAY_TELL )
    v12 = 51;
  else
    v12 = 55;
LABEL_20:
  Core_strcpy(message, 0x96ui64, chatText);
  if ( target )
  {
    G_CmdsMP_SayTo(ent, target, mode, v12, string, dest, message);
  }
  else if ( level.maxclients > 0 )
  {
    do
      G_CmdsMP_SayTo(ent, &g_entities[v11++], mode, v12, string, dest, message);
    while ( v11 < level.maxclients );
  }
}

/*
==============
G_CmdsMP_SayTo
==============
*/
void G_CmdsMP_SayTo(gentity_s *ent, gentity_s *other, int mode, int color, const char *teamString, const char *cleanname, const char *message)
{
  __int16 EntityIndex; 
  gclient_s *client; 
  gclient_s *v13; 
  team_t team; 
  const char *v15; 
  const char *v16; 
  __int16 v17; 
  __int64 v18; 
  __int64 v19; 
  char dest[64]; 
  char v21[128]; 

  if ( other )
  {
    EntityIndex = G_GetEntityIndex(other);
    if ( G_IsEntityInUse(EntityIndex) )
    {
      client = other->client;
      if ( client )
      {
        if ( client->sess.connected == CON_CONNECTED && (mode != 1 || G_ClientMP_OnSameTeam(ent, other)) && (Dvar_GetBool_Internal_DebugName(DVARBOOL_g_deadChat, "g_deadChat") || G_ClientMP_IsPlaying(ent) || !G_ClientMP_IsPlaying(other)) )
        {
          v13 = ent->client;
          team = v13->sess.cs.team;
          if ( (unsigned int)(team - 1) > 1 )
          {
            v15 = (char *)&queryFormat.fmt + 3;
          }
          else
          {
            v15 = "^8";
            if ( team != other->client->sess.cs.team )
              v15 = "^9";
          }
          if ( (unsigned int)(team - 201) <= 1 )
          {
            Com_sprintf(dest, 0x40ui64, &byte_143FB69D0, v15);
          }
          else if ( v13->sess.sessionState )
          {
            Com_sprintf(dest, 0x40ui64, &byte_143FB69E8, v15);
          }
          else
          {
            Com_sprintf(dest, 0x40ui64, (const char *)&stru_143FB69FC, v15);
          }
          if ( mode == 1 )
          {
            Com_sprintf(v21, 0x80ui64, aS_73, dest, teamString, cleanname, "^7");
          }
          else if ( mode == 2 )
          {
            Com_sprintf(v21, 0x80ui64, "%s[%s]%s: ", dest, cleanname, "^7");
          }
          else
          {
            Com_sprintf(v21, 0x80ui64, (const char *)&stru_143FB69FC.fmt + 4, dest, cleanname, "^7");
          }
          LODWORD(v19) = ent->s.number;
          LODWORD(v18) = color;
          v16 = j_va(aC_0, (unsigned int)(mode == 1) + 84, v21, 94i64, v18, message, v19);
          v17 = G_GetEntityIndex(other);
          SV_Game_SendServerCommand(v17, SV_CMD_CAN_IGNORE, v16);
        }
      }
    }
  }
}

/*
==============
G_CmdsMP_SetStreamPos_f
==============
*/
void G_CmdsMP_SetStreamPos_f(gentity_s *ent)
{
  playerState_s *EntityPlayerState; 
  char v31; 
  const char *v40; 
  char *fmt; 
  vec3_t forward; 
  vec3_t end; 
  trace_t results; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 1053, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 1054, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  if ( G_Cmds_AreCheatsOk(ent) )
  {
    EntityPlayerState = G_GetEntityPlayerState(ent);
    if ( EntityPlayerState )
    {
      if ( EntityPlayerState->clientNum < ComCharacterLimits::GetCharacterMaxCount() )
      {
        __asm
        {
          vmovaps [rsp+118h+var_18], xmm6
          vmovaps [rsp+118h+var_28], xmm7
        }
        AngleVectors(&EntityPlayerState->viewangles, &forward, NULL, NULL);
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+118h+forward]
          vmovss  xmm6, dword ptr [rsp+118h+forward+4]
          vmovss  xmm5, dword ptr [rsp+118h+forward+8]
          vmovss  xmm7, cs:__real@3f800000
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm0, xmm2, xmm1
          vsqrtss xmm3, xmm0, xmm0
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm7, xmm0
          vmovss  xmm3, cs:__real@48800000
          vdivss  xmm1, xmm7, xmm0
          vmulss  xmm2, xmm4, xmm1
          vmulss  xmm4, xmm6, xmm1
          vmulss  xmm0, xmm2, xmm3
          vmovss  dword ptr [rsp+118h+forward], xmm2
          vmulss  xmm5, xmm5, xmm1
          vmovss  dword ptr [rsp+118h+forward+4], xmm4
          vmovss  dword ptr [rsp+118h+forward+8], xmm5
          vaddss  xmm1, xmm0, dword ptr [r8]
          vmovss  dword ptr [rsp+118h+end], xmm1
          vmulss  xmm2, xmm4, xmm3
          vaddss  xmm0, xmm2, dword ptr [r8+4]
          vmulss  xmm1, xmm5, xmm3
          vmovss  dword ptr [rsp+118h+end+4], xmm0
          vaddss  xmm2, xmm1, dword ptr [r8+8]
          vmovss  dword ptr [rsp+118h+end+8], xmm2
        }
        PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, &results, &EntityPlayerState->origin, &end, &bounds_origin, 0, 1, 2065, 1, NULL, All);
        __asm
        {
          vmovss  xmm0, [rsp+118h+results.fraction]
          vmovaps xmm6, [rsp+118h+var_18]
          vcomiss xmm0, xmm7
          vmovaps xmm7, [rsp+118h+var_28]
        }
        if ( v31 )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rsp+118h+results.position+4]
            vmovss  xmm2, dword ptr [rsp+118h+results.position]
            vmovss  xmm0, dword ptr [rsp+118h+results.position+8]
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm2, xmm2, xmm2
            vcvtss2sd xmm0, xmm0, xmm0
            vmovq   r9, xmm3
            vmovq   r8, xmm2
            vmovsd  [rsp+118h+fmt], xmm0
          }
          v40 = j_va("%c \"setstreampos to [ %.2f, %.2f, %.2f ]\"", 101i64, _R8, _R9, fmt);
          SV_Game_SendServerCommand(EntityPlayerState->clientNum, SV_CMD_CAN_IGNORE, v40);
          G_WorldStreaming_SetNextStreamPosition(EntityPlayerState->clientNum, MOVEMENT, LINEAR, &results.position, NULL, 1);
        }
      }
    }
  }
}

/*
==============
G_CmdsMP_SpectateClientnum_ReplicateFollow_f
==============
*/
void G_CmdsMP_SpectateClientnum_ReplicateFollow_f(gentity_s *ent, int clientnumSpectator, int spectateClientnum)
{
  int num_entities; 
  gentity_s *v6; 
  int i; 
  gclient_s *client; 

  if ( ent->client->sess.cs.team == TEAM_SPECTATOR )
  {
    num_entities = level.num_entities;
    v6 = g_entities;
    for ( i = 0; i < num_entities; ++v6 )
    {
      client = v6->client;
      if ( client && client->sess.cs.team == TEAM_FOLLOWER && client->sess.cs.indexMLGFollower == clientnumSpectator )
      {
        G_CmdsMP_SpectateClientnum_f(v6, spectateClientnum);
        num_entities = level.num_entities;
      }
      ++i;
    }
  }
}

/*
==============
G_CmdsMP_SpectateClientnum_f
==============
*/
void G_CmdsMP_SpectateClientnum_f(int clientnumSpectator)
{
  __int64 v1; 
  const char *v2; 
  int v3; 
  gentity_s *v4; 

  v1 = clientnumSpectator;
  v2 = ConcatArgs(1);
  v3 = atoi(v2);
  v4 = &g_entities[v1];
  G_CmdsMP_SpectateClientnum_f(v4, v3);
  G_CmdsMP_SpectateClientnum_ReplicateFollow_f(v4, v1, v3);
}

/*
==============
G_CmdsMP_SpectateClientnum_f
==============
*/
void G_CmdsMP_SpectateClientnum_f(gentity_s *ent, int spectateClientnum)
{
  gclient_s *client; 
  vec3_t *origin; 
  int *health; 
  team_t team; 
  int v8; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> otherFlags; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 299, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 300, ASSERT_TYPE_ASSERT, "( ( ent->client != nullptr ) )", "%s\n\t( ent->client ) = %p", "( ent->client != nullptr )", NULL) )
    __debugbreak();
  client = ent->client;
  if ( client->sess.sessionState == SESS_STATE_SPECTATOR && client->sess.forceSpectatorClient < 0 && client->cycleSpectatorClient < 0 && client->spectatorClient != spectateClientnum )
  {
    if ( spectateClientnum >= level.maxclients )
      spectateClientnum = level.maxclients - 1;
    if ( spectateClientnum < 0 )
      spectateClientnum = 0;
    if ( SV_SnapshotMP_GetArchivedClientInfo(spectateClientnum, 0, &client->sess.archiveTime, NULL, NULL, NULL, &v8, &otherFlags, &team) )
    {
      G_ActiveMP_ValidateSpectateOtherFlags(&otherFlags);
      if ( G_ActiveMP_ClientCanSpectateTeam(ent->client, team) )
      {
        if ( ent->client->sess.sessionState != SESS_STATE_SPECTATOR )
        {
          LODWORD(health) = 2;
          LODWORD(origin) = ent->client->sess.sessionState;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 337, ASSERT_TYPE_ASSERT, "( ent->client->sess.sessionState ) == ( SESS_STATE_SPECTATOR )", "ent->client->sess.sessionState == SESS_STATE_SPECTATOR\n\t%i, %i", origin, health) )
            __debugbreak();
        }
        if ( ent->client->cycleSpectatorClient >= 0 )
        {
          LODWORD(origin) = ent->client->cycleSpectatorClient;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 338, ASSERT_TYPE_ASSERT, "( ent->client->cycleSpectatorClient ) < ( 0 )", "ent->client->cycleSpectatorClient < 0\n\t%i, %i", origin, 0i64) )
            __debugbreak();
        }
        ent->client->cycleSpectatorClient = spectateClientnum;
        ent->client->cycleSpectatorTime = level.time;
        ent->client->sess.mlgCameraSelectedIconIndex = -1;
      }
    }
  }
}

/*
==============
G_CmdsMP_SpectateCycle_f
==============
*/
void G_CmdsMP_SpectateCycle_f(gclient_s *client, int dir)
{
  int cycleSpectatorClient; 
  int spectatorClient; 
  int CycleSpectatorClientNum; 
  const gentity_s *GEntity; 
  scrContext_t *v8; 
  const gentity_s *v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 253, ASSERT_TYPE_ASSERT, "( ( client != nullptr ) )", "%s\n\t( client ) = %p", "( client != nullptr )", NULL) )
    __debugbreak();
  if ( ((dir + 1) & 0xFFFFFFFD) != 0 )
  {
    LODWORD(v11) = dir;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 254, ASSERT_TYPE_ASSERT, "( ( (dir == 1) || (dir == -1) ) )", "%s\n\t( dir ) = %i", "( (dir == 1) || (dir == -1) )", v11) )
      __debugbreak();
  }
  if ( client->sess.sessionState == SESS_STATE_SPECTATOR && client->sess.forceSpectatorClient < 0 )
  {
    cycleSpectatorClient = client->cycleSpectatorClient;
    spectatorClient = client->spectatorClient;
    if ( cycleSpectatorClient < 0 )
    {
      CycleSpectatorClientNum = G_ActiveMP_GetCycleSpectatorClientNum(client, &client->sess.archiveTime, spectatorClient, dir);
      client->cycleSpectatorClient = CycleSpectatorClientNum;
      client->cycleSpectatorTime = level.time;
      if ( CycleSpectatorClientNum < 0 )
      {
        v8 = ScriptContext_Server();
        Scr_AddUndefined(v8);
      }
      else
      {
        GEntity = G_GetGEntity(CycleSpectatorClientNum);
        GScr_AddEntity(GEntity);
      }
      v9 = G_GetGEntity(client->sess.cs.clientIndex);
      GScr_Notify(v9, scr_const.spectating_cycle_start, 1u);
    }
    else if ( spectatorClient == cycleSpectatorClient )
    {
      LODWORD(v11) = client->cycleSpectatorClient;
      LODWORD(v10) = client->spectatorClient;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 270, ASSERT_TYPE_ASSERT, "( client->spectatorClient ) != ( client->cycleSpectatorClient )", "client->spectatorClient != client->cycleSpectatorClient\n\t%i, %i", v10, v11) )
        __debugbreak();
    }
  }
}

/*
==============
G_CmdsMP_StopSpectateClientnum_ReplicateFollow_f
==============
*/
void G_CmdsMP_StopSpectateClientnum_ReplicateFollow_f(gentity_s *ent, int clientnumSpectator, const int clearCycle, const int force)
{
  int num_entities; 
  gentity_s *v8; 
  int i; 
  gclient_s *client; 

  if ( ent->client->sess.cs.team == TEAM_SPECTATOR )
  {
    num_entities = level.num_entities;
    v8 = g_entities;
    for ( i = 0; i < num_entities; ++v8 )
    {
      client = v8->client;
      if ( client && client->sess.cs.team == TEAM_FOLLOWER && client->sess.cs.indexMLGFollower == clientnumSpectator )
      {
        client->cycleSpectatorClient = -1;
        G_CmdsMP_StopSpectating(v8, clearCycle, force);
        num_entities = level.num_entities;
      }
      ++i;
    }
  }
}

/*
==============
G_CmdsMP_StopSpectating
==============
*/
void G_CmdsMP_StopSpectating(gentity_s *ent, const int clearCycle, const int force)
{
  int commandTime; 
  int inputTime; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  GHandler *v11; 
  vec3_t outOrigin; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t up; 
  Bounds bounds; 
  trace_t results; 

  _RDI = ent->client;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 187, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( clearCycle )
    _RDI->cycleSpectatorClient = -1;
  if ( _RDI->sess.cs.isMLGSpectator && force )
    goto LABEL_12;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->ps.otherFlags, ACTIVE, 0x21u) )
  {
LABEL_12:
    G_CharacterStreaming_ClearNextSpectateViewModels(ent->s.number);
    G_WeaponStreaming_ClearNextSpectateViewWeapons(ent->s.number);
    G_WorldStreaming_ClearNextStreamView(ent->s.number, MOVEMENT);
    if ( _RDI == (gclient_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2062, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RDI->ps.eFlags, ACTIVE, 5u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RDI->ps.eFlags, ACTIVE, 6u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RDI->ps.eFlags, ACTIVE, 7u);
    BG_InitPlayerstateVehicle(&_RDI->ps);
    if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 215, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF )") )
      __debugbreak();
    commandTime = _RDI->sess.cmd.commandTime;
    _RDI->ps.groundRefEnt = 2047;
    _RDI->ps.commandTime = commandTime;
    _RDI->ps.commandTimeInterpolated = commandTime;
    inputTime = _RDI->sess.cmd.inputTime;
    _RDI->ps.inputTime = inputTime;
    _RDI->ps.inputTimeInterpolated = inputTime;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    if ( G_ActiveMP_ClientCanSpectateTeam(_RDI, TEAM_MP_NUM_TEAMS) )
    {
      Handler = GHandler::getHandler();
      Instance = GWeaponMap::GetInstance();
      BG_GetPlayerEyePosition(Instance, &_RDI->ps, &outOrigin, Handler);
      v11 = GHandler::getHandler();
      BG_GetPlayerViewDirection(&_RDI->ps, &forward, NULL, &up, v11, 0);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1DCh]
        vmovss  xmm2, dword ptr [rdi+1D8h]
        vmovss  dword ptr [rsp+120h+angles+4], xmm0
        vmovss  xmm1, dword ptr [rdi+1E0h]
        vaddss  xmm0, xmm2, cs:__real@41700000
        vmovss  dword ptr [rsp+120h+angles+8], xmm1
        vmovss  dword ptr [rsp+120h+angles], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+5984h]
        vmovss  dword ptr [rsp+120h+outOrigin], xmm0
        vmovss  xmm1, dword ptr [rdi+5988h]
        vmovss  dword ptr [rsp+120h+outOrigin+4], xmm1
        vmovss  xmm0, dword ptr [rdi+598Ch]
        vmovss  dword ptr [rsp+120h+outOrigin+8], xmm0
      }
      AngleVectors(&_RDI->sess.spectateDefaultAngles, &forward, NULL, &up);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+5990h]
        vmovss  dword ptr [rsp+120h+angles], xmm0
        vmovss  xmm1, dword ptr [rdi+5994h]
        vmovss  dword ptr [rsp+120h+angles+4], xmm1
        vmovss  xmm0, dword ptr [rdi+5998h]
        vmovss  dword ptr [rsp+120h+angles+8], xmm0
      }
    }
    __asm { vmovss  xmm5, cs:__real@41200000 }
    *(_QWORD *)_RDI->ps.velocity.v = 0i64;
    _RDI->ps.velocity.v[2] = 0.0;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+120h+forward]
      vmulss  xmm2, xmm0, cs:__real@42200000
      vmovss  xmm1, dword ptr [rsp+120h+outOrigin]
      vmovss  xmm0, dword ptr [rsp+120h+forward+4]
      vsubss  xmm3, xmm1, xmm2
      vmulss  xmm1, xmm5, dword ptr [rsp+120h+up]
      vaddss  xmm2, xmm3, xmm1
      vmulss  xmm3, xmm0, cs:__real@42200000
      vmovss  xmm1, dword ptr [rsp+120h+outOrigin+4]
      vmovss  xmm0, dword ptr [rsp+120h+forward+8]
      vsubss  xmm4, xmm1, xmm3
      vmovss  dword ptr [rsp+120h+end], xmm2
      vmulss  xmm2, xmm5, dword ptr [rsp+120h+up+4]
      vaddss  xmm1, xmm4, xmm2
      vmulss  xmm2, xmm0, cs:__real@42200000
      vmovups xmm0, cs:__xmm@41000000000000000000000000000000
      vmovss  dword ptr [rsp+120h+end+4], xmm1
      vmovss  xmm1, dword ptr [rsp+120h+outOrigin+8]
      vsubss  xmm3, xmm1, xmm2
      vmulss  xmm2, xmm5, dword ptr [rsp+120h+up+8]
      vaddss  xmm1, xmm3, xmm2
      vmovss  dword ptr [rsp+120h+end+8], xmm1
      vmovss  xmm1, cs:__real@41000000
      vmovss  dword ptr [rbp+20h+bounds.halfSize+4], xmm1
      vmovss  dword ptr [rbp+20h+bounds.halfSize+8], xmm1
      vmovups xmmword ptr [rbp+20h+bounds.midPoint], xmm0
    }
    G_Main_TraceCapsule(&results, &outOrigin, &end, &bounds, 2047, 65553);
    __asm
    {
      vmovss  xmm5, [rbp+20h+results.fraction]
      vmovss  xmm0, dword ptr [rsp+120h+end]
      vsubss  xmm1, xmm0, dword ptr [rsp+120h+outOrigin]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rsp+120h+outOrigin]
      vmovss  xmm1, dword ptr [rsp+120h+end+4]
      vmovss  dword ptr [rsp+120h+outOrigin], xmm0
      vsubss  xmm0, xmm1, dword ptr [rsp+120h+outOrigin+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsp+120h+outOrigin+4]
      vmovss  xmm0, dword ptr [rsp+120h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+120h+outOrigin+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rsp+120h+outOrigin+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+120h+outOrigin+8]
      vmovss  dword ptr [rsp+120h+outOrigin+8], xmm3
    }
    G_SetSpectatorPosition(ent, &outOrigin, &angles);
  }
}

/*
==============
G_SetSpectatorPosition
==============
*/
void G_SetSpectatorPosition(gentity_s *ent, const vec3_t *pos, const vec3_t *angles)
{
  gclient_s *client; 
  __int16 EntityIndex; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  __int64 v10; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_SetSpectatorPosition");
  client = ent->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 130, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  client->sess.forceSpectatorClient = -1;
  client->sess.killCamEntity = -1;
  client->sess.killCamLookAtEntity = G_GetEntityIndex(ent);
  client->sess.killCamFlags = 0;
  client->spectatorClient = -1;
  client->cycleSpectatorClient = -1;
  EntityIndex = G_GetEntityIndex(ent);
  BG_InitPlayerState_Spectator(&client->ps, EntityIndex);
  Handler = GHandler::getHandler();
  Instance = GWeaponMap::GetInstance();
  BG_SetCurrentWeaponForPlayer(Instance, &client->ps, &NULL_WEAPON, Handler);
  client->ps.eFlags.m_flags[0] ^= 4u;
  G_SetOrigin(ent, pos, 1, 1);
  client->ps.origin.v[0] = pos->v[0];
  client->ps.origin.v[1] = pos->v[1];
  client->ps.origin.v[2] = pos->v[2];
  G_ClientMP_SetClientViewAngles(ent, angles);
  if ( !ent->tagInfo )
    ent->r.currentAngles.v[0] = 0.0;
  G_Client_ClearPlayerEvents(client);
  G_Client_SetSuit(ent, &client->ps, client->sess.cs.suitIndex);
  if ( client->ps.suitIndex != client->sess.cs.suitIndex )
  {
    LODWORD(v10) = client->ps.suitIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 160, ASSERT_TYPE_ASSERT, "( client->ps.suitIndex ) == ( client->sess.cs.suitIndex )", "client->ps.suitIndex == client->sess.cs.suitIndex\n\t%i, %i", v10, client->sess.cs.suitIndex) )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ReportUnknownClientCommand
==============
*/
void ReportUnknownClientCommand(int clientNum, char *cmd)
{
  SvClient *CommonClient; 
  char *fmt; 
  char v7[32]; 
  __int64 v8; 
  char dest[1024]; 

  LODWORD(v8) = 2257706;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:aCGameUnknowncl; "%c \"GAME/UNKNOWNCLIENTCOMMAND"
    vmovups ymmword ptr [rsp+478h+var_448], ymm0
  }
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_cmds_mp.cpp", 866, ASSERT_TYPE_ASSERT, "(cmd != 0)", (const char *)&queryFormat, "cmd != NULL", *(_QWORD *)v7, *(_QWORD *)&v7[8], *(_QWORD *)&v7[16], *(_QWORD *)&v7[24], v8) )
    __debugbreak();
  LODWORD(fmt) = 988;
  Com_sprintf(dest, 0x400ui64, v7, 101i64, fmt, cmd);
  if ( clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_CAN_IGNORE, dest);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_CAN_IGNORE, dest);
  }
}

