/*
==============
G_ClientSP_Respawn
==============
*/

void G_ClientSP_Respawn(void)
{
  ?G_ClientSP_Respawn@@YAXXZ();
}

/*
==============
G_ClientSP_Touch
==============
*/

void __fastcall G_ClientSP_Touch(gentity_s *pSelf, gentity_s *pOther, int bTouched)
{
  ?G_ClientSP_Touch@@YAXPEAUgentity_s@@0H@Z(pSelf, pOther, bTouched);
}

/*
==============
G_ClientSP_Connect
==============
*/

const char *__fastcall G_ClientSP_Connect(int clientNum)
{
  return ?G_ClientSP_Connect@@YAPEBDH@Z(clientNum);
}

/*
==============
GClientSystemSP::TeleportPlayer
==============
*/

void __fastcall GClientSystemSP::TeleportPlayer(GClientSystemSP *this, gentity_s *player, const vec3_t *origin, const vec3_t *angles)
{
  ?TeleportPlayer@GClientSystemSP@@UEBAXPEAUgentity_s@@AEBTvec3_t@@1@Z(this, player, origin, angles);
}

/*
==============
G_ClientSP_SetClientViewAngle
==============
*/

void __fastcall G_ClientSP_SetClientViewAngle(gentity_s *ent, const vec3_t *angle)
{
  ?G_ClientSP_SetClientViewAngle@@YAXPEAUgentity_s@@AEBTvec3_t@@@Z(ent, angle);
}

/*
==============
G_ClientSP_InitVehicleViewFlag
==============
*/

void __fastcall G_ClientSP_InitVehicleViewFlag(playerState_s *ps)
{
  ?G_ClientSP_InitVehicleViewFlag@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
G_ClientSP_SelectRandomDeathmatchSpawnPoint
==============
*/

gentity_s *__fastcall G_ClientSP_SelectRandomDeathmatchSpawnPoint(const gclient_s *client)
{
  return ?G_ClientSP_SelectRandomDeathmatchSpawnPoint@@YAPEAUgentity_s@@PEBUgclient_s@@@Z(client);
}

/*
==============
SelectNearestDeathmatchSpawnPoint
==============
*/

gentity_s *__fastcall SelectNearestDeathmatchSpawnPoint(const vec3_t *from)
{
  return ?SelectNearestDeathmatchSpawnPoint@@YAPEAUgentity_s@@AEBTvec3_t@@@Z(from);
}

/*
==============
G_ClientSP_SetClientOrigin
==============
*/

void __fastcall G_ClientSP_SetClientOrigin(gentity_s *ent, const vec3_t *origin, int zOffset, int teleport)
{
  ?G_ClientSP_SetClientOrigin@@YAXPEAUgentity_s@@AEBTvec3_t@@HH@Z(ent, origin, zOffset, teleport);
}

/*
==============
G_ClientSP_InitClientDeltaAngles
==============
*/

void __fastcall G_ClientSP_InitClientDeltaAngles(gclient_s *client)
{
  ?G_ClientSP_InitClientDeltaAngles@@YAXPEAUgclient_s@@@Z(client);
}

/*
==============
G_ClientSP_ClientBegin
==============
*/

void __fastcall G_ClientSP_ClientBegin(int clientNum)
{
  ?G_ClientSP_ClientBegin@@YAXH@Z(clientNum);
}

/*
==============
G_FinishSetupSpawnPoint
==============
*/

void __fastcall G_FinishSetupSpawnPoint(gentity_s *ent)
{
  ?G_FinishSetupSpawnPoint@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ClientSP_Spawn
==============
*/

void __fastcall G_ClientSP_Spawn(gentity_s *ent)
{
  ?G_ClientSP_Spawn@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ClientSP_ClientBegin
==============
*/
void G_ClientSP_ClientBegin(int clientNum)
{
  *(_QWORD *)&level.clients[clientNum].sess.connected = 2i64;
  G_ClientSP_Spawn(&g_entities[clientNum]);
}

/*
==============
G_ClientSP_Connect
==============
*/
const char *G_ClientSP_Connect(int clientNum)
{
  gclient_s *v2; 
  gentity_s *v3; 
  const dvar_t *v4; 
  int integer; 
  __int64 v6; 
  __int64 v9; 
  __int64 v10; 
  int commandTime; 
  sentient_s *v12; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 

  v2 = &level.clients[clientNum];
  v3 = &g_entities[clientNum];
  G_Client_Clear(clientNum, v2);
  v2->sess.connected = CON_CONNECTING;
  v2->sess.sessionState = SESS_STATE_SPECTATOR;
  v4 = DVARINT_g_player_maxhealth;
  if ( !DVARINT_g_player_maxhealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_player_maxhealth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  v6 = 0i64;
  v2->sess.maxHealth = integer;
  v2->sess.hudData.data = 0;
  v2->ps.stats[2] = integer;
  v2->ps.clientNum = clientNum;
  BG_InitPlayerstateVehicle(&v2->ps);
  __asm
  {
    vmovss  xmm1, cs:__real@40a00000; maxAbsValueSize
    vmovss  xmm0, cs:__real@3f800000; value
  }
  v2->ps.corpseIndex = 15;
  v2->sess.moveSpeedScaleMultiplier = 1.0;
  v2->ps.moveSpeedScaleMultiplier = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xCu);
  v2->ps.viewKickScale = 1.0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)clientNum);
    v10 = *(_QWORD *)(v9 + 2040);
    memset_0((void *)(v9 + 12), 0, 0x7ECui64);
    memset_0((void *)(v9 + 2048), 0, 0x31C8ui64);
    *(_QWORD *)(v9 + 2040) = v10;
    *(_DWORD *)v9 = clientNum;
    *(_DWORD *)(v9 + 4) = 1;
    *(_DWORD *)(v9 + 8) = 1;
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->InitGentity(GUtils::ms_gUtils, v3);
  v3->handler = 14;
  v3->client = v2;
  v3->s.clientNum = clientNum;
  v3->s.surfType = 7;
  GMovingPlatforms::InitClient(v3, &v2->movingPlatformHandle);
  GPlayerTraceInfo::Init(v3);
  BG_InitPlayerState(&v2->ps);
  if ( PlayerASM_IsEnabled() && !PlayerASM_IsConnectingPaths() )
  {
    *(_QWORD *)&v2->ps.animState.animSet = 0i64;
    *(_QWORD *)&v2->ps.animState.slot[0].packedAnim = 0i64;
    v2->ps.animState.slot[1].packedAnim = 0;
    v2->ps.animState.animSet = BG_PlayerASM_GetAnimsetIndexBySuit(v2->ps.suitIndex);
  }
  G_WorldStreaming_ClientConnect(clientNum);
  G_HeadIcons_SetPlayerDirty(clientNum);
  SV_Game_GetUsercmd(clientNum, &v2->sess.cmd);
  if ( v2 == (gclient_s *)-21424i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  commandTime = v2->sess.cmd.commandTime;
  v2->ps.commandTime = commandTime;
  v2->ps.commandTimeInterpolated = commandTime;
  v2->ps.inputTime = 0;
  v2->ps.inputTimeInterpolated = 0;
  v12 = Sentient_Alloc(ST_PLAYER);
  if ( !v12 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144352818, 992i64);
  v3->sentient = v12;
  Sentient_Init(v12, v3, TEAM_TWO);
  p_eFlags = &v2->ps.eFlags;
  while ( !p_eFlags->m_flags[0] )
  {
    ++v6;
    ++p_eFlags;
    if ( v6 >= 1 )
      goto LABEL_26;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 530, ASSERT_TYPE_ASSERT, "(!client->ps.eFlags.TestAnyFlags())", (const char *)&queryFormat, "!client->ps.eFlags.TestAnyFlags()") )
    __debugbreak();
LABEL_26:
  if ( v3->r.svFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 531, ASSERT_TYPE_ASSERT, "(!ent->r.svFlags)", (const char *)&queryFormat, "!ent->r.svFlags") )
    __debugbreak();
  return 0i64;
}

/*
==============
G_ClientSP_GetPushed
==============
*/
__int64 G_ClientSP_GetPushed(gentity_s *pSelf, gentity_s *pOther)
{
  const dvar_t *v6; 
  gentity_s *MoverEntityFromPs; 
  gclient_s *client; 
  int v10; 
  bool v11; 
  int v12; 
  __int64 result; 

  v6 = DCONST_DVARBOOL_playerCharacterCollisionUseNew;
  _RBX = pSelf;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionUseNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUseNew") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled || !pOther->actor )
    goto LABEL_21;
  if ( !_RBX->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 368, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
    __debugbreak();
  MoverEntityFromPs = GMovingPlatforms::GetMoverEntityFromPs(&_RBX->client->ps);
  if ( MoverEntityFromPs )
  {
    if ( (MoverEntityFromPs->flags.m_flags[0] & 0x20) != 0 )
      goto LABEL_21;
  }
  if ( BG_IsTurretActive(&_RBX->client->ps) || _RBX->tagInfo )
    goto LABEL_21;
  client = _RBX->client;
  v10 = client->lastTouchTime + 500;
  v11 = level.time < (unsigned int)v10;
  if ( level.time < v10 )
  {
    v12 = client->inControlTime + 20000;
    v11 = level.time < (unsigned int)v12;
    if ( level.time >= v12 )
    {
      result = 1i64;
      goto LABEL_22;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vmovss  xmm1, dword ptr [rbx+134h]
    vsubss  xmm7, xmm1, dword ptr [rsi+134h]
    vsubss  xmm6, xmm0, dword ptr [rsi+130h]
    vmulss  xmm2, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm1, xmm2, xmm0
    vcomiss xmm1, cs:__real@44610000
  }
  if ( !v11 )
  {
LABEL_21:
    result = 0i64;
    goto LABEL_22;
  }
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm8
    vsqrtss xmm8, xmm1, xmm1
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@41f00000
    vmovd   xmm2, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
  }
  _RAX = _RBX->client;
  __asm
  {
    vsubss  xmm1, xmm0, xmm8
    vmulss  xmm3, xmm1, cs:__real@447a0000
    vmovss  xmm1, cs:__real@3f800000
    vcmpless xmm0, xmm8, cs:__real@80000000
    vblendvps xmm0, xmm8, xmm1, xmm0
    vmovaps xmm8, [rsp+78h+var_38]
    vcvtdq2ps xmm2, xmm2
    vdivss  xmm4, xmm3, xmm2
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm0, xmm4
    vmulss  xmm2, xmm7, xmm2
    vmulss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rax+40h], xmm0
    vmovss  dword ptr [rax+3Ch], xmm1
  }
  result = 1i64;
LABEL_22:
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm6, [rsp+78h+var_18]
  }
  return result;
}

/*
==============
G_ClientSP_InitClientDeltaAngles
==============
*/
void G_ClientSP_InitClientDeltaAngles(gclient_s *client)
{
  unsigned int v13; 
  bool v14; 
  __int64 v58; 
  __int64 v59; 
  char v62; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = &client->ps.delta_angles;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  v13 = 0;
  __asm { vmovaps xmmword ptr [rax-48h], xmm9 }
  v14 = 1;
  __asm
  {
    vmovss  xmm9, cs:__real@3f000000
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, cs:__real@43b40000
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, cs:__real@3b360b61
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  xmm12, cs:__real@43340000
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovss  xmm13, cs:__real@43360b61
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovss  xmm14, cs:__real@37800000
    vxorps  xmm8, xmm8, xmm8
  }
  do
  {
    if ( !v14 )
    {
      LODWORD(v59) = 3;
      LODWORD(v58) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v59) )
        __debugbreak();
    }
    __asm { vmovaps xmm1, xmm12; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(LODWORD(_RDI[1772].v[1]), *(float *)&_XMM1, 0x14u);
    __asm
    {
      vmulss  xmm6, xmm0, xmm11
      vaddss  xmm2, xmm6, xmm9
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm7, xmm8, xmm0, 1
    }
    if ( v13 >= 3 )
    {
      LODWORD(v59) = 3;
      LODWORD(v58) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v59) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+124h]
      vsubss  xmm0, xmm6, xmm7
      vmulss  xmm2, xmm0, xmm10
      vsubss  xmm2, xmm1, xmm2
      vmulss  xmm4, xmm2, xmm11
      vaddss  xmm3, xmm4, xmm9
      vroundss xmm2, xmm8, xmm3, 1
      vsubss  xmm0, xmm4, xmm2
      vmulss  xmm6, xmm0, xmm10
    }
    if ( v13 >= 3 )
    {
      LODWORD(v59) = 3;
      LODWORD(v58) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v59) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    if ( v13 >= 3 )
    {
      LODWORD(v59) = 3;
      LODWORD(v58) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v59) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm1, xmm13, dword ptr [rdi]
      vaddss  xmm3, xmm1, xmm9
      vroundss xmm1, xmm8, xmm3, 1
      vcvttss2si eax, xmm1
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, xmm14
      vaddss  xmm2, xmm4, xmm9
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm6, xmm1, xmm10
    }
    if ( v13 >= 3 )
    {
      LODWORD(v59) = 3;
      LODWORD(v58) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v59) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v14 = ++v13 < 3;
  }
  while ( (int)v13 < 3 );
  __asm { vmovaps xmm14, [rsp+0D8h+var_98] }
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
G_ClientSP_InitVehicleViewFlag
==============
*/
void G_ClientSP_InitVehicleViewFlag(playerState_s *ps)
{
  ps->pm_flags.m_flags[1] |= 0x1000u;
}

/*
==============
G_ClientSP_Respawn
==============
*/
void G_ClientSP_Respawn(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  int integer; 
  int v3; 
  const dvar_t *v4; 
  const char *v5; 
  const dvar_t *v6; 
  const char *v9; 
  const dvar_t *v10; 
  const char *v15; 
  char *fmt; 

  v0 = DVARINT_reloading;
  if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.integer )
  {
    Dvar_SetInt_Internal(DVARINT_reloading, 1);
    v1 = DVARINT_g_deathDelay;
    if ( !DVARINT_g_deathDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_deathDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    integer = v1->current.integer;
    v3 = integer + Sys_Milliseconds();
    v4 = DVARINT_g_deathDelay;
    level.absoluteReloadDelayTime = v3;
    if ( !DVARINT_g_deathDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_deathDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    v5 = j_va("snd_fade 0 %i", v4->current.unsignedInt);
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v5);
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, "clear_blur");
    v6 = DVARINT_g_deathDelay;
    if ( !DVARINT_g_deathDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_deathDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    __asm
    {
      vmovsd  xmm2, cs:__real@4040000000000000
      vmovq   r8, xmm2
    }
    LODWORD(fmt) = 2;
    v9 = j_va("scr_blur %i %f %i %i", v6->current.unsignedInt, _R8, 1i64, fmt);
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v9);
    v10 = DVARINT_g_deathDelay;
    if ( !DVARINT_g_deathDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_deathDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    __asm
    {
      vmovsd  xmm3, cs:__real@3fb99999a0000000
      vmovsd  xmm2, cs:__real@3ff0000000000000
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    v15 = j_va("time_slow %i %f %f", v10->current.unsignedInt, _R8, _R9);
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v15);
  }
}

/*
==============
G_ClientSP_SelectInitialSpawnPoint
==============
*/
gentity_s *G_ClientSP_SelectInitialSpawnPoint(const gclient_s *client, vec3_t *outOrigin, vec3_t *outAngles)
{
  gentity_s *v9; 
  bool v12; 
  gentity_s *v19; 

  _RSI = outOrigin;
  _RBX = G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
  if ( !_RBX )
    goto LABEL_6;
  while ( (_RBX->spawnflags & 1) == 0 )
  {
    _RBX = G_Utils_FindEntity(_RBX, 380, scr_const.info_player_start);
    if ( !_RBX )
      goto LABEL_6;
  }
  if ( G_ClientSP_SpotWouldTelefrag(client, _RBX) )
  {
LABEL_6:
    __asm { vmovaps [rsp+68h+var_48], xmm7 }
    v9 = NULL;
    __asm { vmovss  xmm7, cs:__real@497423f0 }
    _RCX = G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
    v12 = _RCX == NULL;
    if ( _RCX )
    {
      __asm { vmovaps [rsp+68h+var_38], xmm6 }
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+130h]
          vsubss  xmm3, xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
          vmovss  xmm1, dword ptr [rcx+134h]
          vsubss  xmm2, xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
          vmovss  xmm0, dword ptr [rcx+138h]
          vsubss  xmm4, xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
        }
        v19 = _RCX;
        __asm
        {
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm6, xmm2, xmm2
          vcomiss xmm7, xmm6
        }
        if ( v12 )
          v19 = v9;
        v9 = v19;
        _RCX = G_Utils_FindEntity(_RCX, 380, scr_const.info_player_start);
        __asm { vminss  xmm7, xmm6, xmm7 }
        v12 = _RCX == NULL;
      }
      while ( _RCX );
      __asm { vmovaps xmm6, [rsp+68h+var_38] }
    }
    __asm { vmovaps xmm7, [rsp+68h+var_48] }
    _RBX = G_ClientSP_SelectRandomDeathmatchSpawnPoint(client);
    if ( _RBX == v9 )
    {
      _RBX = G_ClientSP_SelectRandomDeathmatchSpawnPoint(client);
      if ( _RBX == v9 )
        _RBX = G_ClientSP_SelectRandomDeathmatchSpawnPoint(client);
    }
    if ( !_RBX )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144352788, 991i64);
  }
  _RSI->v[0] = _RBX->r.currentOrigin.v[0];
  _RSI->v[1] = _RBX->r.currentOrigin.v[1];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+138h]
    vaddss  xmm1, xmm0, cs:__real@41100000
    vmovss  dword ptr [rsi+8], xmm1
  }
  outAngles->v[0] = _RBX->r.currentAngles.v[0];
  outAngles->v[1] = _RBX->r.currentAngles.v[1];
  outAngles->v[2] = _RBX->r.currentAngles.v[2];
  return _RBX;
}

/*
==============
G_ClientSP_SelectRandomDeathmatchSpawnPoint
==============
*/
gentity_s *G_ClientSP_SelectRandomDeathmatchSpawnPoint(const gclient_s *client)
{
  int v2; 
  __int64 *v4; 
  GUtils *v15; 
  Bounds worldBounds; 
  __int64 v18[128]; 

  v2 = 0;
  _RBX = G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
  if ( !_RBX )
    return G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
  v4 = v18;
  do
  {
    if ( client )
      _RAX = (Bounds *)BG_Suit_GetBounds(client->ps.suitIndex, PM_EFF_STANCE_DEFAULT);
    else
      _RAX = &playerBox;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vaddss  xmm1, xmm0, dword ptr [rax]
      vmovss  xmm2, dword ptr [rbx+134h]
      vmovss  dword ptr [rsp+488h+worldBounds.midPoint], xmm1
      vaddss  xmm0, xmm2, dword ptr [rax+4]
      vmovss  xmm1, dword ptr [rbx+138h]
      vmovss  dword ptr [rsp+488h+worldBounds.midPoint+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rax+8]
      vmovss  dword ptr [rsp+488h+worldBounds.midPoint+8], xmm2
      vmovss  xmm0, dword ptr [rax+0Ch]
      vmovss  dword ptr [rsp+488h+worldBounds.halfSize], xmm0
      vmovss  xmm1, dword ptr [rax+10h]
      vmovss  dword ptr [rsp+488h+worldBounds.halfSize+4], xmm1
      vmovss  xmm0, dword ptr [rax+14h]
      vmovss  dword ptr [rsp+488h+worldBounds.halfSize+8], xmm0
    }
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils", *(_OWORD *)worldBounds.midPoint.v, *(_QWORD *)&worldBounds.halfSize.y) )
      __debugbreak();
    v15 = GUtils::ms_gUtils;
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", (_DWORD)GUtils::ms_gUtils + 104, ASSERT_TYPE_ASSERT, "( gUtils )", (const char *)&queryFormat, "gUtils") )
      __debugbreak();
    if ( !GUtils::WorldBoundsWouldTelefrag(v15, &worldBounds) )
    {
      ++v2;
      *v4++ = (__int64)_RBX;
    }
    _RBX = G_Utils_FindEntity(_RBX, 380, scr_const.info_player_start);
  }
  while ( _RBX );
  if ( v2 )
    return (gentity_s *)v18[G_rand() % v2];
  else
    return G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
}

/*
==============
G_ClientSP_SetClientOrigin
==============
*/
void G_ClientSP_SetClientOrigin(gentity_s *ent, const vec3_t *origin, int zOffset, int teleport)
{
  gclient_s *client; 
  GHandler *Handler; 
  GHandler *v11; 
  gclient_s *v12; 
  const BgHandler *v13; 
  GWeaponMap *Instance; 
  gclient_s *v15; 
  WorldUpReferenceFrame v16; 

  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 245, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  client = ent->client;
  client->ps.origin.v[0] = origin->v[0];
  client->ps.origin.v[1] = origin->v[1];
  client->ps.origin.v[2] = origin->v[2];
  if ( zOffset )
  {
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v16, &ent->client->ps, Handler);
    __asm { vmovss  xmm1, cs:__real@3f800000; height }
    WorldUpReferenceFrame::AddUpContribution(&v16, *(float *)&_XMM1, &ent->client->ps.origin);
  }
  if ( teleport )
    ent->client->ps.eFlags.m_flags[0] ^= 4u;
  v11 = GHandler::getHandler();
  v12 = ent->client;
  v13 = v11;
  Instance = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(Instance, &v12->ps, &ent->s, 1, v13);
  v15 = ent->client;
  ent->r.currentOrigin.v[0] = v15->ps.origin.v[0];
  ent->r.currentOrigin.v[1] = v15->ps.origin.v[1];
  ent->r.currentOrigin.v[2] = v15->ps.origin.v[2];
}

/*
==============
G_ClientSP_SetClientViewAngle
==============
*/
void G_ClientSP_SetClientViewAngle(gentity_s *ent, const vec3_t *angle)
{
  char v31; 
  bool v32; 
  char v66; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  v32 = ent->client == NULL;
  _RDI = ent;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovss  xmm7, dword ptr [rdx]
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovss  xmm8, dword ptr [rdx+4]
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovss  xmm14, dword ptr [rdx+8]
  }
  if ( v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 287, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->client->ps.pm_flags, ACTIVE, 0) && !BG_IsTurretActive(&_RDI->client->ps) )
  {
    _RCX = _RDI->client;
    if ( (_RCX->ps.linkFlags.m_flags[0] & 4) == 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+26Ch]; angle1
        vmovaps [rsp+0D8h+var_28], xmm6
        vmovaps [rsp+0D8h+var_58], xmm9
        vmovaps [rsp+0D8h+var_68], xmm10
        vmovaps [rsp+0D8h+var_78], xmm11
        vmovaps xmm1, xmm8; angle2
        vmovaps [rsp+0D8h+var_88], xmm13
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmovss  xmm13, cs:__real@3b360b61
        vmovss  xmm10, cs:__real@3f000000
      }
      _RBX = DCONST_DVARFLT_bg_prone_yawcap;
      __asm
      {
        vmovss  xmm11, cs:__real@43b40000
        vmulss  xmm3, xmm0, xmm13
        vxorps  xmm0, xmm0, xmm0
        vaddss  xmm1, xmm3, xmm10
        vmovss  xmm1, xmm0, xmm1
        vxorps  xmm9, xmm9, xmm9
        vroundss xmm2, xmm9, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm6, xmm0, xmm11
      }
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( !(v31 | v32) )
        goto LABEL_12;
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap");
      __asm
      {
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vcomiss xmm6, xmm1
      }
      if ( v31 )
      {
LABEL_12:
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap");
        __asm { vcomiss xmm6, xmm0 }
        if ( v31 | v32 )
        {
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap");
          __asm { vaddss  xmm5, xmm6, xmm0 }
        }
        else
        {
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap");
          __asm { vsubss  xmm5, xmm6, xmm0 }
        }
        _RAX = _RDI->client;
        __asm
        {
          vaddss  xmm0, xmm5, dword ptr [rax+0B8h]
          vmovss  dword ptr [rax+0B8h], xmm0
        }
        _R8 = _RDI->client;
        __asm
        {
          vmovss  xmm0, dword ptr [r8+0B8h]
          vmulss  xmm1, xmm0, cs:__real@43360b61
          vaddss  xmm3, xmm1, xmm10
          vroundss xmm1, xmm9, xmm3, 1
          vcvttss2si eax, xmm1
        }
        _ECX = (unsigned __int16)_RAX;
        __asm
        {
          vmovd   xmm0, ecx
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm4, xmm0, cs:__real@37800000
          vaddss  xmm2, xmm4, xmm10
          vroundss xmm3, xmm9, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm11
          vmovss  dword ptr [r8+0B8h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm5, xmm0
        }
        if ( v31 | v32 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap");
          __asm { vaddss  xmm0, xmm0, dword ptr [rax+26Ch]; angle }
        }
        else
        {
          _RBX = _RDI->client;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap");
          __asm
          {
            vmovaps xmm1, xmm0
            vmovss  xmm0, dword ptr [rbx+26Ch]
            vsubss  xmm0, xmm0, xmm1
          }
        }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm { vmovaps xmm8, xmm0 }
      }
      _RAX = _RDI->client;
      __asm
      {
        vmovaps xmm1, xmm7; angle2
        vmovss  xmm0, dword ptr [rax+274h]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      _RBX = DCONST_DVARFLT_player_prone_view_pitch_up;
      __asm
      {
        vmulss  xmm4, xmm0, xmm13
        vxorps  xmm1, xmm1, xmm1
        vaddss  xmm2, xmm4, xmm10
        vmovss  xmm0, xmm1, xmm2
        vroundss xmm3, xmm9, xmm0, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm6, xmm1, xmm11
      }
      if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( !(v31 | v32) )
        goto LABEL_24;
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_down, "player_prone_view_pitch_down");
      __asm
      {
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vcomiss xmm6, xmm1
      }
      if ( v31 )
      {
LABEL_24:
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_up, "player_prone_view_pitch_up");
        __asm { vcomiss xmm6, xmm0 }
        if ( v31 | v32 )
        {
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_down, "player_prone_view_pitch_down");
          __asm { vaddss  xmm5, xmm6, xmm0 }
        }
        else
        {
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_up, "player_prone_view_pitch_up");
          __asm { vsubss  xmm5, xmm6, xmm0 }
        }
        _RAX = _RDI->client;
        __asm
        {
          vaddss  xmm0, xmm5, dword ptr [rax+0B4h]
          vmovss  dword ptr [rax+0B4h], xmm0
        }
        _R8 = _RDI->client;
        __asm
        {
          vmovss  xmm0, dword ptr [r8+0B4h]
          vmulss  xmm1, xmm0, cs:__real@43360b61
          vaddss  xmm3, xmm1, xmm10
          vroundss xmm1, xmm9, xmm3, 1
          vcvttss2si eax, xmm1
        }
        _ECX = (unsigned __int16)_RAX;
        __asm
        {
          vmovd   xmm0, ecx
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm4, xmm0, cs:__real@37800000
          vaddss  xmm2, xmm4, xmm10
          vroundss xmm3, xmm9, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm11
          vmovss  dword ptr [r8+0B4h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm5, xmm0
        }
        if ( v66 | v67 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_down, "player_prone_view_pitch_down");
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vaddss  xmm0, xmm0, dword ptr [rax+274h]
            vmulss  xmm4, xmm0, xmm13
            vaddss  xmm2, xmm4, xmm10
            vmovss  xmm0, xmm1, xmm2
            vroundss xmm3, xmm9, xmm0, 1
          }
        }
        else
        {
          _RBX = _RDI->client;
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_up, "player_prone_view_pitch_up");
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+274h]
            vsubss  xmm0, xmm1, xmm0
            vmulss  xmm4, xmm0, xmm13
            vaddss  xmm2, xmm4, xmm10
            vroundss xmm3, xmm9, xmm2, 1
          }
        }
        __asm
        {
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm7, xmm1, xmm11
        }
      }
      __asm
      {
        vmovaps xmm11, [rsp+0D8h+var_78]
        vmovaps xmm10, [rsp+0D8h+var_68]
        vmovaps xmm9, [rsp+0D8h+var_58]
        vmovaps xmm6, [rsp+0D8h+var_28]
        vmovaps xmm13, [rsp+0D8h+var_88]
      }
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi+13Ch], xmm7
    vmovss  dword ptr [rdi+140h], xmm8
    vmovss  dword ptr [rdi+144h], xmm14
  }
  _RCX = _RDI->client;
  __asm { vmovss  dword ptr [rcx+1D8h], xmm7 }
  _RCX->ps.viewangles.v[1] = _RDI->r.currentAngles.v[1];
  _RCX->ps.viewangles.v[2] = _RDI->r.currentAngles.v[2];
  __asm
  {
    vmovaps xmm7, [rsp+0D8h+var_38]
    vmovaps xmm8, [rsp+0D8h+var_48]
    vmovaps xmm14, [rsp+0D8h+var_98]
  }
  G_ClientSP_InitClientDeltaAngles(_RDI->client);
}

/*
==============
G_ClientSP_Spawn
==============
*/
void G_ClientSP_Spawn(gentity_s *ent)
{
  __int16 EntityIndex; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  int viewmodelIndex; 
  int legsModelIndex; 
  int maxHealth; 
  GHandler *Handler; 
  EffectiveStance EffectiveStance; 
  GWeaponMap *Instance; 
  int v18; 
  signed __int64 v22; 
  unsigned int number; 
  UsableClass m_useClass; 
  int serverTime; 
  int v26; 
  int commandTime; 
  int v28; 
  __int16 v29; 
  GHandler *v30; 
  GWeaponMap *v31; 
  sentient_s *sentient; 
  GHandler *v33; 
  GWeaponMap *v34; 
  __int64 v35; 
  char Src[2464]; 
  vec3_t outOrigin; 
  vec3_t outAngles; 

  _R13 = ent;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ClientSP_Spawn");
  EntityIndex = G_GetEntityIndex(_R13);
  _R15 = _R13->client;
  v4 = EntityIndex;
  v5 = EntityIndex;
  if ( _R15 != &level.clients[EntityIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 585, ASSERT_TYPE_ASSERT, "(client == &level.clients[index])", (const char *)&queryFormat, "client == &level.clients[index]") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v35) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v35, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v5].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 586, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( index ))", (const char *)&queryFormat, "G_IsEntityInUse( index )") )
    __debugbreak();
  if ( _R15->ps.clientNum != (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 587, ASSERT_TYPE_ASSERT, "(client->ps.clientNum == index)", (const char *)&queryFormat, "client->ps.clientNum == index") )
    __debugbreak();
  G_ClientSP_SelectInitialSpawnPoint(_R15, &outOrigin, &outAngles);
  if ( _R15 == (gclient_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 280, ASSERT_TYPE_ASSERT, "(sourceFlags)", (const char *)&queryFormat, "sourceFlags") )
    __debugbreak();
  v6 = ~(unsigned __int8)_R15->ps.eFlags.m_flags[0] & 4;
  memcpy_0(Src, &_R15->sess, 0x998ui64);
  viewmodelIndex = _R15->ps.viewmodelIndex;
  legsModelIndex = _R15->ps.legsModelIndex;
  G_Client_Clear(v4, _R15);
  GMovingPlatforms::InitClient(_R13, &_R15->movingPlatformHandle);
  GPlayerTraceInfo::Init(_R13);
  G_DefaultViewAngleClampGoal(&_R15->link_viewClamp);
  G_SnapToViewAngleClampGoal(&_R15->link_viewClamp);
  BG_InitPlayerState(&_R15->ps);
  G_HeadIcons_SetPlayerDirty(v4);
  memcpy_0(&_R15->sess, Src, sizeof(_R15->sess));
  _R15->ps.viewmodelIndex = viewmodelIndex;
  _R15->groundTiltEntNum = 2047;
  _R15->ps.viewlocked_entNum = 2047;
  _R15->ps.legsModelIndex = legsModelIndex;
  _R15->ps.clientNum = v4;
  BG_InitPlayerstateVehicle(&_R15->ps);
  _R15->ps.corpseIndex = 15;
  _R15->ps.linkEnt = 2047;
  _R15->ps.pm_flags.m_flags[1] |= 0x1000u;
  maxHealth = _R15->sess.maxHealth;
  _R15->ps.bobScale = 1.0;
  _R15->ps.stats[2] = maxHealth;
  _R15->ps.eFlags.m_flags[0] = v6;
  _R13->s.groundEntityNum = 2047;
  _R13->s.surfType = 7;
  Handler = GHandler::getHandler();
  BGMovingPlatformPS::Init(&_R15->ps.movingPlatforms, &_R15->ps, Handler);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_R15->ps.eFlags, ACTIVE, 0x10u);
  Scr_SetString(&_R13->classname, scr_const.player);
  Scr_SetString(&_R13->script_classname, scr_const.player);
  _R13->clipmask = 33636369;
  _R13->flags = 0i64;
  _R13->flags.m_flags[0] |= 0x300u;
  EffectiveStance = PM_GetEffectiveStance(&_R15->ps);
  _RAX = BG_Suit_GetBounds(_R15->ps.suitIndex, EffectiveStance);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [r13+100h], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [r13+110h], xmm1
  }
  _R13->s.animInfo.animData = 0;
  _R15->ps.viewHeightTarget = BG_GetSuitDef(_R15->ps.suitIndex)->viewheight_stand;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+200h]
    vmovss  dword ptr [r15+1E8h], xmm0
  }
  _R15->ps.viewHeightLerpTime = 0;
  *(_QWORD *)&_R15->ps.weapCommon.spreadOverride = 0i64;
  _R15->ps.weapCommon.adsStartTime = 0;
  _R15->ps.weapCommon.fAimSpreadMovementScale = 1.0;
  _R15->ps.throwbackGrenadeTimeLeft = 0;
  _R15->ps.throwbackGrenadeOwner = 2047;
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 776, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  Instance->SetWeapon(Instance, &_R15->ps.throwbackWeaponHandle, &NULL_WEAPON);
  _R15->ps.viewKickScale = 1.0;
  BG_InitPlayerstateVehicle(&_R15->ps);
  v18 = _R15->ps.stats[2];
  _R15->ps.stats[0] = v18;
  _R13->health = v18;
  G_SetOrigin(_R13, &outOrigin, 1, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A48h+outOrigin]
    vmovss  dword ptr [r15+30h], xmm0
    vmovss  xmm1, dword ptr [rsp+0A48h+outOrigin+4]
    vmovss  dword ptr [r15+34h], xmm1
    vmovss  xmm0, dword ptr [rsp+0A48h+outOrigin+8]
    vmovss  dword ptr [r15+38h], xmm0
  }
  _R15->ps.pm_flags.m_flags[0] |= 0x8000u;
  v22 = _R15 - level.clients;
  if ( (unsigned __int64)(v22 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v22, "signed", _R15 - level.clients) )
    __debugbreak();
  SV_Game_GetUsercmd(v22, &_R15->sess.cmd);
  G_ClientSP_SetClientViewAngle(_R13, &outAngles);
  SV_LinkEntity(_R13);
  _R15->ps.pm_flags.m_flags[0] |= 0x2000u;
  _R15->ps.pm_time = 100;
  _R15->latched_buttons = 0i64;
  number = _R15->useHoldEntity.m_info.number;
  if ( number )
  {
    m_useClass = _R15->useHoldEntity.m_useClass;
    if ( m_useClass != USE_CLASS_SCRIPTABLE && (m_useClass || !G_IsEntityInUse(number - 1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 268, ASSERT_TYPE_ASSERT, "( isEmpty() || isValidScriptable() || isValidEntity() )", (const char *)&queryFormat, "isEmpty() || isValidScriptable() || isValidEntity()") )
      __debugbreak();
    if ( _R15->useHoldEntity.m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 699, ASSERT_TYPE_ASSERT, "(!client->useHoldEntity.isDefined())", (const char *)&queryFormat, "!client->useHoldEntity.isDefined()") )
      __debugbreak();
  }
  G_HudOutline_AddForNewClient(_R13);
  _R15->invulnerableEnabled = 1;
  level.clientIsSpawning = 1;
  _R15->damageMultiplier = 1.0;
  if ( _R15->deathShieldEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 710, ASSERT_TYPE_ASSERT, "(!client->deathShieldEnabled)", (const char *)&queryFormat, "!client->deathShieldEnabled") )
    __debugbreak();
  _R15->playerLOSCheckPos = 0i64;
  _R15->playerLOSCheckDir = 0i64;
  serverTime = _R15->ps.serverTime;
  *(_QWORD *)&_R15->playerLOSPosTime = 0i64;
  _R15->footstepWeight = 0.0;
  v26 = level.time - 200;
  _R15->ps.serverTime = level.time - 200;
  _R15->ps.serverTimeInterpolated = v26;
  commandTime = _R15->ps.commandTime;
  v28 = _R15->ps.commandTime - 200;
  if ( v28 < 200 )
    v28 = 200;
  _R15->ps.commandTime = v28;
  _R15->ps.commandTimeInterpolated = v28;
  v29 = G_GetEntityIndex(_R13);
  G_ActiveSP_ClientThink(v29, 0);
  v30 = GHandler::getHandler();
  v31 = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(v31, &_R15->ps, &_R13->s, 1, v30);
  _R13->r.currentOrigin.v[0] = _R15->ps.origin.v[0];
  _R13->r.currentOrigin.v[1] = _R15->ps.origin.v[1];
  _R13->r.currentOrigin.v[2] = _R15->ps.origin.v[2];
  sentient = _R13->sentient;
  sentient->oldOrigin.v[0] = _R15->ps.origin.v[0];
  sentient->oldOrigin.v[1] = _R15->ps.origin.v[1];
  sentient->oldOrigin.v[2] = _R15->ps.origin.v[2];
  SV_LinkEntity(_R13);
  G_PhysicsCharacterProxy_AddCharacter(_R13);
  G_Nav_AddPlayerRepulsor(_R13->s.number);
  G_ActiveSP_ClientEndFrame(_R13);
  _R15->ps.serverTime = serverTime;
  _R15->ps.serverTimeInterpolated = serverTime;
  _R15->ps.commandTime = commandTime;
  _R15->ps.commandTimeInterpolated = commandTime;
  level.clientIsSpawning = 0;
  v33 = GHandler::getHandler();
  v34 = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(v34, &_R15->ps, &_R13->s, 1, v33);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_ClientSP_SpotWouldTelefrag
==============
*/
_BOOL8 G_ClientSP_SpotWouldTelefrag(const gclient_s *client, gentity_s *spot)
{
  GUtils *v13; 
  Bounds worldBounds; 

  _RBX = spot;
  if ( client )
    _RAX = (Bounds *)BG_Suit_GetBounds(client->ps.suitIndex, PM_EFF_STANCE_DEFAULT);
  else
    _RAX = &playerBox;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vaddss  xmm1, xmm0, dword ptr [rax]
    vmovss  xmm2, dword ptr [rbx+134h]
    vmovss  dword ptr [rsp+58h+worldBounds.midPoint], xmm1
    vaddss  xmm0, xmm2, dword ptr [rax+4]
    vmovss  xmm1, dword ptr [rbx+138h]
    vmovss  dword ptr [rsp+58h+worldBounds.midPoint+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [rax+8]
    vmovss  dword ptr [rsp+58h+worldBounds.midPoint+8], xmm2
    vmovss  xmm0, dword ptr [rax+0Ch]
    vmovss  dword ptr [rsp+58h+worldBounds.halfSize], xmm0
    vmovss  xmm1, dword ptr [rax+10h]
    vmovss  dword ptr [rsp+58h+worldBounds.halfSize+4], xmm1
    vmovss  xmm0, dword ptr [rax+14h]
    vmovss  dword ptr [rsp+58h+worldBounds.halfSize+8], xmm0
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils", *(_OWORD *)worldBounds.midPoint.v, *(_QWORD *)&worldBounds.halfSize.y) )
    __debugbreak();
  v13 = GUtils::ms_gUtils;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", (_DWORD)GUtils::ms_gUtils + 104, ASSERT_TYPE_ASSERT, "( gUtils )", (const char *)&queryFormat, "gUtils") )
    __debugbreak();
  return GUtils::WorldBoundsWouldTelefrag(v13, &worldBounds);
}

/*
==============
G_ClientSP_Touch
==============
*/
void G_ClientSP_Touch(gentity_s *pSelf, gentity_s *pOther, int bTouched)
{
  actor_s *actor; 
  EntHandle *p_pCloseEnt; 
  sentient_s *sentient; 
  sentient_s *v16; 
  bool v17; 
  unsigned int v21; 
  unsigned __int64 eTeam; 
  __int64 v23; 
  AIActorInterface v24; 
  AIAgentInterface v25; 
  AIActorInterface *v26; 
  bitarray<224> result; 

  if ( !pSelf->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 400, ASSERT_TYPE_ASSERT, "(pSelf->sentient)", (const char *)&queryFormat, "pSelf->sentient") )
    __debugbreak();
  if ( !pSelf->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 401, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
    __debugbreak();
  if ( !(unsigned int)G_ClientSP_GetPushed(pSelf, pOther) )
    pSelf->client->inControlTime = level.time;
  pSelf->client->lastTouchTime = level.time;
  actor = pOther->actor;
  if ( actor )
  {
    p_pCloseEnt = &actor->pCloseEnt;
    if ( !EntHandle::isDefined(&actor->pCloseEnt) && !actor->bDontAvoidPlayer && (actor->Physics.iTraceMask & 0x2000000) != 0 && actor->eState[actor->stateLevel] != AIS_TURRET )
    {
      if ( !pOther->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 414, ASSERT_TYPE_ASSERT, "(pOther->sentient)", (const char *)&queryFormat, "pOther->sentient") )
        __debugbreak();
      AIActorInterface::AIActorInterface(&v24);
      AIAgentInterface::AIAgentInterface(&v25);
      v25.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      if ( !actor->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 41, ASSERT_TYPE_ASSERT, "( pActor->ent )", (const char *)&queryFormat, "pActor->ent") )
        __debugbreak();
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 42, ASSERT_TYPE_ASSERT, "( pActor->sentientInfo )", (const char *)&queryFormat, "pActor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v24, actor);
      v26 = &v24;
      if ( AIScriptedInterface::AtClaimNode(&v24) )
      {
        _RCX = pSelf->sentient;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+24h]
          vmovss  xmm1, dword ptr [rcx+28h]
          vsubss  xmm2, xmm1, dword ptr [rdi+134h]
          vsubss  xmm4, xmm0, dword ptr [rdi+130h]
          vmulss  xmm3, xmm2, xmm2
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm1, xmm3, xmm0
          vcomiss xmm1, cs:__real@3c23d70a
        }
      }
      else
      {
        sentient = pOther->sentient;
        v16 = pSelf->sentient;
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
          __debugbreak();
        if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
          __debugbreak();
        if ( level.teammode == TEAMMODE_FFA )
        {
          v17 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
          else
            _RAX = Com_TeamsMP_GetAllTeamFlags();
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovsd  xmm1, qword ptr [rax+10h]
          }
          v21 = _RAX->array[6] & 0xFFEFFFFF;
          __asm
          {
            vmovups xmmword ptr [rsp+0D8h+result.array], xmm0
            vmovsd  qword ptr [rsp+0D8h+result.array+10h], xmm1
          }
          if ( v17 )
            result.array[0] &= ~0x8000000u;
          result.array[6] = v21 & 0xFF9FFFFF;
        }
        else
        {
          Com_Teams_GetEnemyTeamFlags(&result, sentient->eTeam);
        }
        eTeam = (unsigned int)v16->eTeam;
        if ( (unsigned int)eTeam >= 0xE0 )
        {
          LODWORD(v23) = v16->eTeam;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v23, 224) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (eTeam & 0x1F)) & result.array[eTeam >> 5]) == 0 )
          EntHandle::setEnt(p_pCloseEnt, pSelf);
      }
    }
  }
}

/*
==============
G_FinishSetupSpawnPoint
==============
*/
void G_FinishSetupSpawnPoint(gentity_s *ent)
{
  int number; 
  int v21; 
  signed __int16 EntityHitId; 
  int v26; 
  __int64 passEntityNum; 
  __int64 contentmask; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 

  __asm { vmovaps [rsp+0D0h+var_10], xmm7 }
  _RBX = ent;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_FinishSetupSpawnPoint");
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+138h]
    vmovss  xmm2, dword ptr [rbx+130h]
    vmovss  xmm1, dword ptr [rbx+134h]
  }
  number = _RBX->s.number;
  __asm
  {
    vmovss  dword ptr [rbp+57h+start+8], xmm0
    vaddss  xmm0, xmm0, cs:__real@43000000
    vmovss  dword ptr [rbp+57h+end+8], xmm0
    vmovss  dword ptr [rbp+57h+start], xmm2
    vmovss  dword ptr [rbp+57h+start+4], xmm1
    vmovss  dword ptr [rbp+57h+end], xmm2
    vmovss  dword ptr [rbp+57h+end+4], xmm1
  }
  G_Main_TraceCapsule(&results, &start, &end, &playerBox, number, 33636369);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+end]
    vsubss  xmm1, xmm0, dword ptr [rbp+57h+start]
    vmulss  xmm1, xmm1, [rbp+57h+results.fraction]
    vaddss  xmm7, xmm1, dword ptr [rbp+57h+start]
    vmovss  xmm0, dword ptr [rbp+57h+end+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+4]
    vmovss  xmm0, dword ptr [rbp+57h+end+8]
    vmulss  xmm2, xmm1, [rbp+57h+results.fraction]
    vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+8]
    vaddss  xmm5, xmm2, dword ptr [rbp+57h+start+4]
    vmulss  xmm2, xmm1, [rbp+57h+results.fraction]
    vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+8]
    vsubss  xmm0, xmm3, cs:__real@43800000
  }
  v21 = _RBX->s.number;
  __asm
  {
    vmovss  dword ptr [rbp+57h+end+8], xmm0
    vmovss  dword ptr [rbp+57h+start], xmm7
    vmovss  dword ptr [rbp+57h+start+4], xmm5
    vmovss  dword ptr [rbp+57h+start+8], xmm3
    vmovss  dword ptr [rbp+57h+end], xmm7
    vmovss  dword ptr [rbp+57h+end+4], xmm5
  }
  G_Main_TraceCapsule(&results, &start, &end, &playerBox, v21, 33636369);
  EntityHitId = Trace_GetEntityHitId(&results);
  _RBX->s.groundEntityNum = EntityHitId;
  g_entities[EntityHitId].flags.m_flags[0] |= 0x200000u;
  __asm
  {
    vmovss  xmm5, [rbp+57h+results.fraction]
    vmovss  xmm0, dword ptr [rbp+57h+end]
    vsubss  xmm1, xmm0, dword ptr [rbp+57h+start]
  }
  v26 = _RBX->s.number;
  __asm
  {
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm0, xmm1, dword ptr [rbp+57h+start]
    vmovss  xmm1, dword ptr [rbp+57h+end+4]
    vmovss  dword ptr [rbp+57h+start], xmm0
    vsubss  xmm0, xmm1, dword ptr [rbp+57h+start+4]
    vmulss  xmm2, xmm0, xmm5
    vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+4]
    vmovss  xmm0, dword ptr [rbp+57h+end+8]
    vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+8]
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rbp+57h+start+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+8]
    vmovss  dword ptr [rbp+57h+start+8], xmm3
  }
  G_Main_TraceCapsule(&results, &start, &start, &playerBox, v26, 33636369);
  if ( results.allsolid )
  {
    __asm
    {
      vcvttss2si edx, dword ptr [rbx+134h]
      vcvttss2si eax, dword ptr [rbx+138h]
      vcvttss2si r9d, dword ptr [rbx+130h]
    }
    LODWORD(contentmask) = _EAX;
    LODWORD(passEntityNum) = _EDX;
    Com_PrintWarning(15, "WARNING: Spawn point entity %i is in solid at (%i, %i, %i)\n", (unsigned int)_RBX->s.number, _R9, passEntityNum, contentmask);
  }
  G_SetOrigin(_RBX, &start, 1, 1);
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm7, [rsp+0D0h+var_10] }
}

/*
==============
SelectNearestDeathmatchSpawnPoint
==============
*/
gentity_s *SelectNearestDeathmatchSpawnPoint(const vec3_t *from)
{
  gentity_s *v4; 
  bool v6; 
  gentity_s *v13; 

  __asm
  {
    vmovaps [rsp+48h+var_28], xmm7
    vmovss  xmm7, cs:__real@497423f0
  }
  v4 = NULL;
  _R9 = G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
  v6 = _R9 == NULL;
  if ( _R9 )
  {
    __asm { vmovaps [rsp+48h+var_18], xmm6 }
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r9+130h]
        vsubss  xmm3, xmm0, dword ptr [rdi]
        vmovss  xmm1, dword ptr [r9+134h]
        vsubss  xmm2, xmm1, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [r9+138h]
        vsubss  xmm4, xmm0, dword ptr [rdi+8]
      }
      v13 = _R9;
      __asm
      {
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm6, xmm2, xmm2
        vcomiss xmm7, xmm6
      }
      if ( v6 )
        v13 = v4;
      v4 = v13;
      _R9 = G_Utils_FindEntity(_R9, 380, scr_const.info_player_start);
      __asm { vminss  xmm7, xmm6, xmm7 }
      v6 = _R9 == NULL;
    }
    while ( _R9 );
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
  __asm { vmovaps xmm7, [rsp+48h+var_28] }
  return v4;
}

/*
==============
GClientSystemSP::TeleportPlayer
==============
*/
void GClientSystemSP::TeleportPlayer(GClientSystemSP *this, gentity_s *player, const vec3_t *origin, const vec3_t *angles)
{
  gclient_s *client; 
  GHandler *Handler; 
  GHandler *v10; 
  gclient_s *v11; 
  const BgHandler *v12; 
  GWeaponMap *Instance; 
  gclient_s *v14; 
  WorldUpReferenceFrame v15; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 756, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 245, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  client = player->client;
  client->ps.origin.v[0] = origin->v[0];
  client->ps.origin.v[1] = origin->v[1];
  client->ps.origin.v[2] = origin->v[2];
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v15, &player->client->ps, Handler);
  __asm { vmovss  xmm1, cs:__real@3f800000; height }
  WorldUpReferenceFrame::AddUpContribution(&v15, *(float *)&_XMM1, &player->client->ps.origin);
  player->client->ps.eFlags.m_flags[0] ^= 4u;
  v10 = GHandler::getHandler();
  v11 = player->client;
  v12 = v10;
  Instance = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(Instance, &v11->ps, &player->s, 1, v12);
  v14 = player->client;
  player->r.currentOrigin.v[0] = v14->ps.origin.v[0];
  player->r.currentOrigin.v[1] = v14->ps.origin.v[1];
  player->r.currentOrigin.v[2] = v14->ps.origin.v[2];
  G_ClientSP_SetClientViewAngle(player, angles);
  if ( !player->tagInfo )
    player->r.currentAngles.v[0] = 0.0;
  SV_LinkEntity(player);
}

