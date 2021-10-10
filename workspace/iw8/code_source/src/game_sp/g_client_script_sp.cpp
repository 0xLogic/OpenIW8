/*
==============
PlayerCmd_GetBobRate
==============
*/

void __fastcall PlayerCmd_GetBobRate(scrContext_t *scrContext, scr_entref_t entref)
{
  ?PlayerCmd_GetBobRate@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
PlayerCmd_buttonPressed
==============
*/

void __fastcall PlayerCmd_buttonPressed(scrContext_t *scrContext, scr_entref_t entref)
{
  ?PlayerCmd_buttonPressed@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
PlayerCmd_ZeroGrav
==============
*/

void __fastcall PlayerCmd_ZeroGrav(scrContext_t *scrContext, scr_entref_t entref)
{
  ?PlayerCmd_ZeroGrav@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
PlayerCmd_AllowSwim
==============
*/

void __fastcall PlayerCmd_AllowSwim(scrContext_t *scrContext, scr_entref_t entref)
{
  ?PlayerCmd_AllowSwim@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
PlayerCmd_AllowWalk
==============
*/

void __fastcall PlayerCmd_AllowWalk(scrContext_t *scrContext, scr_entref_t entref)
{
  ?PlayerCmd_AllowWalk@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
PlayerCmd_SetBobRate
==============
*/

void __fastcall PlayerCmd_SetBobRate(scrContext_t *scrContext, scr_entref_t entref)
{
  ?PlayerCmd_SetBobRate@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
PlayerCmd_AllowSwimPredicted
==============
*/

void __fastcall PlayerCmd_AllowSwimPredicted(scrContext_t *scrContext, scr_entref_t entref)
{
  ?PlayerCmd_AllowSwimPredicted@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
PlayerCmd_GetXuid
==============
*/
void PlayerCmd_GetXuid(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 
  unsigned __int64 Int64; 
  const XUID *v8; 
  int clientIndex; 
  const PartyData *ServerLobby; 
  const XUID *Xuid; 
  __int64 v12; 
  const char *v13; 
  XUID v14; 
  XUID result; 
  char dest[128]; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1745, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1376, scrContext, "USAGE: self getXuid()\n");
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1377, scrContext, "This function can't be used for the front-end server");
  client = v4->client;
  XUID::XUID(&v14);
  if ( !client )
  {
    v8 = XUID::NullXUID(&result);
    goto LABEL_17;
  }
  if ( SV_IsDemoPlaying() )
  {
    Int64 = SV_DemoMP_GetInt64();
    v8 = XUID::FromUniversalId(&result, Int64);
LABEL_17:
    XUID::operator=(&v14, v8);
    goto LABEL_18;
  }
  clientIndex = client->sess.cs.clientIndex;
  ServerLobby = SV_MainMP_GetServerLobby();
  Xuid = Party_GetXuid(&result, ServerLobby, clientIndex);
  XUID::operator=(&v14, Xuid);
  v12 = XUID::ToUint64(&v14);
  SV_DemoMP_RecordInt64(v12);
LABEL_18:
  v13 = XUID::ToHexString(&v14);
  Core_strcpy(dest, 0x80ui64, v13);
  Scr_AddString(scrContext, dest);
}

/*
==============
PlayerCmd_buttonPressed
==============
*/
void PlayerCmd_buttonPressed(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  int ButtonPressed; 
  LocalClientNum_t number; 
  const char *String; 
  const char *v10; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 65, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  if ( level.loading == LOADING_DONE )
  {
    if ( sv_demo.playing )
    {
      ButtonPressed = SV_DemoSP_GetButtonPressed();
    }
    else
    {
      number = v5->s.number;
      if ( DevGui_IsActive() || CL_Cameraman_isActive() )
      {
        ButtonPressed = 0;
      }
      else
      {
        String = Scr_GetString(scrContext, 0);
        v10 = String;
        if ( !String || !*String )
          Scr_ParamError(COM_ERR_1800, scrContext, 0, "usage: buttonPressed(<button name>)");
        ButtonPressed = CL_Keys_IsKeyPressed(number, v10);
      }
      SV_DemoSP_RecordButtonPressed(ButtonPressed);
    }
    LOBYTE(v2) = ButtonPressed != 0;
  }
  Scr_AddInt(scrContext, v2);
}

/*
==============
PlayerCmd_ShowViewmodel
==============
*/
void PlayerCmd_ShowViewmodel(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  const char *v4; 
  ComErrorCode v5; 
  SvClient *CommonClient; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v4 = "not an entity";
    v5 = COM_ERR_3681;
    goto LABEL_8;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 107, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  if ( !g_entities[entnum].client )
  {
    v4 = j_va("entity %i is not a player", entnum);
    v5 = COM_ERR_3680;
LABEL_8:
    Scr_ObjectError(v5, scrContext, v4);
  }
  if ( entnum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, "showViewModel");
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(entnum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, "showViewModel");
  }
}

/*
==============
PlayerCmd_HideViewmodel
==============
*/
void PlayerCmd_HideViewmodel(scrContext_t *scrContext, scr_entref_t entref)
{
  PlayerHandIndex v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  gclient_s *client; 
  GWeaponMap *Instance; 
  const unsigned int *p_weaponState; 
  GHandler *Handler; 
  SvClient *CommonClient; 

  v2 = WEAPON_HAND_DEFAULT;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 125, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  client = v5->client;
  Instance = GWeaponMap::GetInstance();
  if ( client->ps.weapCommon.lastWeaponHand >= WEAPON_HAND_DEFAULT )
  {
    p_weaponState = (const unsigned int *)&client->ps.weapState[0].weaponState;
    do
    {
      if ( *p_weaponState - 18 <= 3 )
        BG_AddPredictableEventToPlayerstate(EV_STOP_WEAPON_SOUND, *p_weaponState, level.time, Instance, &client->ps);
      ++v2;
      p_weaponState += 20;
    }
    while ( v2 <= client->ps.weapCommon.lastWeaponHand );
  }
  Handler = GHandler::getHandler();
  PM_ResetWeaponState(Instance, &client->ps, Handler);
  if ( entnum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, "hideViewModel");
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(entnum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, "hideViewModel");
  }
}

/*
==============
PlayerCmd_AllowSwim
==============
*/
void PlayerCmd_AllowSwim(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  char *client; 
  const char *v6; 
  ComErrorCode v7; 
  int Int; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v9; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 159, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  client = (char *)v4->client;
  if ( !client )
  {
    client = (char *)v4->agent;
    if ( !client )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      client = NULL;
    }
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) )
    Scr_Error(COM_ERR_1801, scrContext, "AllowSwim is not supported in this game mode");
  Int = Scr_GetInt(scrContext, 0);
  v9 = (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(client + 20);
  if ( Int )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(v9, ACTIVE, 0x21u) )
    {
      Scr_Error(COM_ERR_1802, scrContext, "Can't enable swimming when allowStand is set to false");
    }
    else
    {
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagStrict((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(client + 20), FOG_SCALE|AIM_ASSIST|0x20);
      *(_QWORD *)(client + 60) = 0i64;
      *((_DWORD *)client + 17) = 0;
    }
  }
  else
  {
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagStrict(v9, FOG_SCALE|AIM_ASSIST|0x20);
  }
}

/*
==============
PlayerCmd_AllowSwimPredicted
==============
*/
void PlayerCmd_AllowSwimPredicted(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  _DWORD *p_commandTime; 
  const char *v6; 
  ComErrorCode v7; 
  unsigned int Int; 
  const char *v9; 
  unsigned int v10; 
  const char *v11; 
  SvClient *CommonClient; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 197, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  p_commandTime = &v4->client->ps.commandTime;
  if ( !p_commandTime )
  {
    p_commandTime = &v4->agent->playerState.commandTime;
    if ( !p_commandTime )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      p_commandTime = NULL;
      Scr_Error(COM_ERR_1803, scrContext, "AllowSwimPredicted can only be called on a player or agent.");
    }
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) )
    Scr_Error(COM_ERR_1804, scrContext, "AllowSwimPredicted is not supported in this game mode");
  Int = Scr_GetInt(scrContext, 0);
  v9 = j_va("%c %d", 122i64, Int);
  v10 = p_commandTime[115];
  v11 = v9;
  if ( v10 == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v9);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v10);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v11);
  }
}

/*
==============
PlayerCmd_ZeroGrav
==============
*/
void PlayerCmd_ZeroGrav(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  playerState_s *p_ps; 
  const char *v6; 
  ComErrorCode v7; 
  __int16 groundRefEnt; 
  GHandler *Handler; 
  float v10; 
  vec3_t angles; 
  vec3_t newWorldAngles; 
  WorldUpReferenceFrame v13; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 227, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  p_ps = &v4->client->ps;
  if ( !p_ps )
  {
    p_ps = &v4->agent->playerState;
    if ( !p_ps )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      p_ps = NULL;
    }
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) )
    Scr_Error(COM_ERR_1805, scrContext, "ZeroGrav is not supported in this game mode");
  if ( Scr_GetInt(scrContext, 0) )
  {
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_ps->pm_flags, ACTIVE, 0x2Au) )
    {
      p_ps->autoLevelTime = 0;
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&p_ps->otherFlags, GameModeFlagValues::ms_spValue, 0x2Du);
    }
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&p_ps->pm_flags, ACTIVE, 0x2Au);
  }
  else
  {
    if ( !p_ps )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2605, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_ps->pm_flags, ACTIVE, 0x2Au) )
    {
      groundRefEnt = p_ps->groundRefEnt;
      if ( groundRefEnt == 2047 || !groundRefEnt )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
          __debugbreak();
        if ( !BG_IsPlayerZeroGWalking(p_ps) )
        {
          Handler = GHandler::getHandler();
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v13, p_ps, Handler);
          v10 = p_ps->viewangles.v[1];
          newWorldAngles.v[0] = 0.0;
          newWorldAngles.v[1] = 0.0;
          newWorldAngles.v[2] = 0.0;
          angles.v[0] = p_ps->viewangles.v[0];
          angles.v[2] = p_ps->viewangles.v[2];
          angles.v[1] = v10;
          WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v13, &angles);
          WorldUpReferenceFrame::SetAnglesAndViewAngles(&v13, p_ps, Handler, &newWorldAngles, &angles);
        }
      }
    }
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&p_ps->pm_flags, ACTIVE, 0x2Au);
  }
}

/*
==============
PlayerCmd_AllowWalk
==============
*/
void PlayerCmd_AllowWalk(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  char *client; 
  const char *v6; 
  ComErrorCode v7; 
  int Int; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v9; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 270, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  client = (char *)v4->client;
  if ( !client )
  {
    client = (char *)v4->agent;
    if ( !client )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      client = NULL;
    }
  }
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Int = Scr_GetInt(scrContext, 0);
    v9 = (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(client + 20);
    if ( Int )
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagStrict(v9, FLAG_COUNT|AIM_ASSIST|0x20);
    else
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagStrict(v9, FLAG_COUNT|AIM_ASSIST|0x20);
  }
  else
  {
    Scr_Error(COM_ERR_1806, scrContext, "USAGE: AllowWalk( <can player walk> )\n");
  }
}

/*
==============
PlayerCmd_GetBobRate
==============
*/
void PlayerCmd_GetBobRate(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 301, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Scr_AddFloat(scrContext, v4->client->ps.bobScale);
}

/*
==============
PlayerCmd_SetBobRate
==============
*/
void PlayerCmd_SetBobRate(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  double Float; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 321, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Float = Scr_GetFloat(scrContext, 0);
  v4->client->ps.bobScale = *(float *)&Float;
}

/*
==============
PlayerCmd_SetTimeScaleFactorFromTable
==============
*/
void PlayerCmd_SetTimeScaleFactorFromTable(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  const char *String; 
  const char *v5; 
  const char *v6; 
  SvClient *CommonClient; 
  unsigned int NumParam; 

  entnum = entref.entnum;
  if ( Scr_GetNumParam(scrContext) != 1 )
  {
    NumParam = Scr_GetNumParam(scrContext);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 346, ASSERT_TYPE_ASSERT, "( ( Scr_GetNumParam( scrContext ) == 1 ) )", "%s\n\t( Scr_GetNumParam( scrContext ) ) = %i", "( Scr_GetNumParam( scrContext ) == 1 )", NumParam) )
      __debugbreak();
  }
  String = Scr_GetString(scrContext, 0);
  v5 = j_va("%c %s", 116i64, String);
  v6 = v5;
  if ( entnum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v5);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(entnum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v6);
  }
}

/*
==============
ScrCmd_IsLookingAt
==============
*/
void ScrCmd_IsLookingAt(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  gentity_s *v7; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 368, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  if ( EntHandle::isDefined(&v5->client->pLookatEnt) )
  {
    v7 = EntHandle::ent(&v5->client->pLookatEnt);
    if ( v7 == GScr_GetEntity(0) )
      v2 = 1;
  }
  Scr_AddInt(scrContext, v2);
}

/*
==============
PlayerCmd_IsFiring
==============
*/
void PlayerCmd_IsFiring(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  gclient_s *client; 
  int weaponState; 
  int v9; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 389, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
      __debugbreak();
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 388, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  if ( !v5->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 390, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
    __debugbreak();
  client = v5->client;
  weaponState = client->ps.weapState[0].weaponState;
  if ( (unsigned int)(weaponState - 16) <= 1 || (unsigned int)(weaponState - 22) <= 2 || (v9 = client->ps.weapState[1].weaponState, (unsigned int)(v9 - 16) <= 1) || (unsigned int)(v9 - 22) <= 2 )
    v2 = 1;
  Scr_AddBool(scrContext, v2);
}

/*
==============
ScrCmd_SetAutoPickup
==============
*/
void ScrCmd_SetAutoPickup(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int Int; 
  gclient_s *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 412, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Int = Scr_GetInt(scrContext, 0);
  client = v4->client;
  if ( Int )
    client->bDisableAutoPickup = 0;
  else
    client->bDisableAutoPickup = 1;
}

/*
==============
PlayerCmd_SetMantleSoundFlavor
==============
*/
void PlayerCmd_SetMantleSoundFlavor(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned __int16 v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  _WORD *client; 
  const char *v7; 
  ComErrorCode v8; 
  unsigned __int16 v9; 
  const char *String; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v7 = "not an entity";
    v8 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 439, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v5 = &g_entities[entnum];
  client = v5->client;
  if ( !client )
  {
    client = v5->agent;
    if ( !client )
    {
      v7 = j_va("entity %i is not a player or agent", entnum);
      v8 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v8, scrContext, v7);
      client = NULL;
    }
  }
  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    v9 = 0;
    if ( Scr_GetType(scrContext, 0) )
    {
      String = Scr_GetString(scrContext, 0);
      v11 = String;
      if ( String )
      {
        if ( *String )
        {
          if ( SND_FindAlias(String) )
          {
            v2 = G_CStringSP_SoundAliasIndexTransient(v11);
          }
          else
          {
            v12 = j_va("unknown sound alias '%s'", v11);
            Scr_ParamError(COM_ERR_1808, scrContext, 0, v12);
          }
        }
      }
    }
    if ( Scr_GetType(scrContext, 1u) )
    {
      v13 = Scr_GetString(scrContext, 1u);
      v14 = v13;
      if ( v13 )
      {
        if ( *v13 )
        {
          if ( SND_FindAlias(v13) )
          {
            v9 = G_CStringSP_SoundAliasIndexTransient(v14);
          }
          else
          {
            v15 = j_va("unknown sound alias '%s'", v14);
            Scr_ParamError(COM_ERR_1809, scrContext, 0, v15);
          }
        }
      }
    }
    client[487] = v9;
    client[486] = v2;
  }
  else
  {
    Scr_Error(COM_ERR_1807, scrContext, "USAGE: SetMantleSoundFlavor( <plr_soundalias>, <npc_soundalias> )\n");
  }
}

/*
==============
PlayerCmd_EnableHealthShield
==============
*/
void PlayerCmd_EnableHealthShield(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 492, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  v4->client->invulnerableEnabled = Scr_GetInt(scrContext, 0) != 0;
}

/*
==============
PlayerCmd_EnableDeathShield
==============
*/
void PlayerCmd_EnableDeathShield(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 511, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  v4->client->deathShieldEnabled = Scr_GetInt(scrContext, 0) != 0;
}

/*
==============
PlayerCmd_DoShieldOutlineSweep
==============
*/
void PlayerCmd_DoShieldOutlineSweep(scrContext_t *scrContext, scr_entref_t entref)
{
  ;
}

/*
==============
PlayerCmd_NightVisionGogglesForceOn
==============
*/
void PlayerCmd_NightVisionGogglesForceOn(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 538, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v4->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(client + 229, ACTIVE, 7u);
}

/*
==============
PlayerCmd_NightVisionGogglesForceOff
==============
*/
void PlayerCmd_NightVisionGogglesForceOff(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 555, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v4->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(client + 229, ACTIVE, 7u);
}

/*
==============
PlayerCmd_EnableInvulnerability
==============
*/
void PlayerCmd_EnableInvulnerability(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 572, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&v4->client->ps.otherFlags, ACTIVE, 0);
}

/*
==============
PlayerCmd_DisableInvulnerability
==============
*/
void PlayerCmd_DisableInvulnerability(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 589, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&v4->client->ps.otherFlags, ACTIVE, 0);
}

/*
==============
PlayerCmd_EnableBreaching
==============
*/
void PlayerCmd_EnableBreaching(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 606, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x21u);
}

/*
==============
PlayerCmd_DisableBreaching
==============
*/
void PlayerCmd_DisableBreaching(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 623, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x21u);
}

/*
==============
PlayerCmd_EnableForceViewModelDoF
==============
*/
void PlayerCmd_EnableForceViewModelDoF(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 640, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x28u);
}

/*
==============
PlayerCmd_DisableForceViewModelDoF
==============
*/
void PlayerCmd_DisableForceViewModelDoF(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 657, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x28u);
}

/*
==============
PlayerCmd_HideHud
==============
*/
void PlayerCmd_HideHud(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 674, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x22u);
}

/*
==============
PlayerCmd_ShowHud
==============
*/
void PlayerCmd_ShowHud(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 691, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x22u);
}

/*
==============
PlayerCmd_UseHintsInVehicle
==============
*/
void PlayerCmd_UseHintsInVehicle(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int Int; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 710, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
      __debugbreak();
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 709, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 711, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
    __debugbreak();
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Int = Scr_GetInt(scrContext, 0);
    p_otherFlags = &v4->client->ps.otherFlags;
    if ( Int )
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(p_otherFlags, CROUCHING|0x20);
    else
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(p_otherFlags, CROUCHING|0x20);
  }
  else
  {
    Scr_Error(COM_ERR_1810, scrContext, "Incorrect number of parameters\n");
  }
}

/*
==============
PlayerCmd_UseHintsOnTurret
==============
*/
void PlayerCmd_UseHintsOnTurret(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int Int; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 741, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
      __debugbreak();
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 740, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 742, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
    __debugbreak();
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Int = Scr_GetInt(scrContext, 0);
    p_otherFlags = &v4->client->ps.otherFlags;
    if ( Int )
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(p_otherFlags, FOG_SCALE|0x20);
    else
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(p_otherFlags, FOG_SCALE|0x20);
  }
  else
  {
    Scr_Error(COM_ERR_1811, scrContext, "Incorrect number of parameters\n");
  }
}

/*
==============
PlayerCmd_MountVehicle
==============
*/
void PlayerCmd_MountVehicle(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gentity_s *Entity; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 771, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v4->client->ps.eFlags, ACTIVE, 0xBu) )
    Scr_Error(COM_ERR_1812, scrContext, "Player is already driving a vehicle");
  Entity = GScr_GetEntity(0);
  if ( !Entity->vehicle )
    Scr_Error(COM_ERR_1813, scrContext, "Entity is not a vehicle");
  G_Vehicle_Use(Entity, v4, NULL);
}

/*
==============
PlayerCmd_DismountVehicle
==============
*/
void PlayerCmd_DismountVehicle(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gentity_s *v6; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 798, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v4->client->ps.eFlags, ACTIVE, 0xBu) )
    Scr_Error(COM_ERR_1814, scrContext, "Player is not driving a vehicle");
  if ( !EntHandle::isDefined(&v4->r.ownerNum) )
    Scr_Error(COM_ERR_1815, scrContext, "Player is not linked");
  v6 = EntHandle::ent(&v4->r.ownerNum);
  if ( !v6->vehicle )
    Scr_Error(COM_ERR_1816, scrContext, "Player is not linked to a vehicle");
  G_Vehicle_Use(v6, v4, NULL);
}

/*
==============
PlayerCmd_vehicleAttackButtonPressed
==============
*/
void PlayerCmd_vehicleAttackButtonPressed(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 829, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v5->client->ps.eFlags, ACTIVE, 0xBu) )
    Scr_Error(COM_ERR_1818, scrContext, "Player is not on a vehicle.\n");
  LOBYTE(v2) = v5->client->sess.cmd.downmove != 0;
  Scr_AddInt(scrContext, v2);
}

/*
==============
PlayerCmd_ForceViewmodelAnimation
==============
*/
void PlayerCmd_ForceViewmodelAnimation(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *client; 
  const char *v6; 
  ComErrorCode v7; 
  const char *String; 
  int v9; 
  GWeaponMap *Instance; 
  const char *v11; 
  bool outIsAlternate; 
  Weapon outWeapon; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 866, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  client = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v4->client;
  if ( !client )
  {
    client = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v4->agent;
    if ( !client )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      client = NULL;
    }
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_FIRING) )
    Scr_Error(COM_ERR_1819, scrContext, "ForceViewmodelAnimation is not supported in this game mode");
  GScr_Main_GetWeaponParam(scrContext, 0, &outWeapon, &outIsAlternate);
  String = Scr_GetString(scrContext, 1u);
  if ( I_stricmp(String, "reload") )
  {
    if ( I_stricmp(String, "fire") )
    {
      v11 = j_va("Animation name \"%s\" is not supported by this function.\n", String);
      Scr_Error(COM_ERR_1820, scrContext, v11);
      return;
    }
    v9 = 16;
  }
  else
  {
    v9 = 18;
  }
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(client + 229, ACTIVE, 0x36u);
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 999, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1000, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance->SetWeapon(Instance, (BgWeaponHandle *)&client[539] + 1, &outWeapon);
  client[540].m_flags[0] = v9;
}

/*
==============
GScr_EnableSlowAim
==============
*/
void GScr_EnableSlowAim(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  unsigned int NumParam; 
  unsigned int v5; 
  const char *v6; 
  double Float; 
  float v8; 
  double v9; 
  const char *v10; 
  const char *v11; 
  SvClient *CommonClient; 

  entnum = entref.entnum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) )
    Scr_Error(COM_ERR_1821, scrContext, "EnableSlowAim is not supported in this game mode");
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam )
  {
    if ( NumParam != 2 )
    {
      v5 = Scr_GetNumParam(scrContext);
      v6 = j_va("EnableSlowAim: Incorrect number of parameters ( %d ).", v5);
      Scr_Error(COM_ERR_1822, scrContext, v6);
      return;
    }
    Float = Scr_GetFloat(scrContext, 0);
    v8 = *(float *)&Float;
    v9 = Scr_GetFloat(scrContext, 1u);
  }
  else
  {
    v8 = FLOAT_0_1;
    *(float *)&v9 = FLOAT_0_13;
  }
  v10 = j_va("slowaim 1 %f %f", v8, *(float *)&v9);
  v11 = v10;
  if ( entnum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v10);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(entnum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v11);
  }
}

/*
==============
GScr_DisableSlowAim
==============
*/
void GScr_DisableSlowAim(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  SvClient *CommonClient; 

  entnum = entref.entnum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) )
    Scr_Error(COM_ERR_1823, scrContext, "DisableSlowAim is not supported in this game mode");
  if ( entnum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, "slowaim 0");
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(entnum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, "slowaim 0");
  }
}

/*
==============
GScr_CapTurnRate
==============
*/
void GScr_CapTurnRate(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  unsigned int NumParam; 
  const char *v5; 
  double Float; 
  float v7; 
  double v8; 
  const char *v9; 
  const char *v10; 
  SvClient *CommonClient; 

  entnum = entref.entnum;
  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    Float = Scr_GetFloat(scrContext, 0);
    v7 = *(float *)&Float;
    v8 = Scr_GetFloat(scrContext, 1u);
    v9 = j_va("capturnrate %f %f", v7, *(float *)&v8);
    v10 = v9;
    if ( entnum == -1 )
    {
      SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v9);
    }
    else
    {
      CommonClient = SvClient::GetCommonClient(entnum);
      CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v10);
    }
  }
  else
  {
    NumParam = Scr_GetNumParam(scrContext);
    v5 = j_va("CapTurnRate: Incorrect number of parameters ( %d ).", NumParam);
    Scr_Error(COM_ERR_5778, scrContext, v5);
  }
}

/*
==============
PlayerCmd_EnableMouseSteer
==============
*/
void PlayerCmd_EnableMouseSteer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int Int; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1005, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
      __debugbreak();
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1003, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1006, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
    __debugbreak();
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Int = Scr_GetInt(scrContext, 0);
    p_otherFlags = &v4->client->ps.otherFlags;
    if ( Int )
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(p_otherFlags, TURRET_ACTIVE_PRONE|0x20);
    else
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(p_otherFlags, TURRET_ACTIVE_PRONE|0x20);
  }
  else
  {
    Scr_Error(COM_ERR_1824, scrContext, "Incorrect number of parameters\n");
  }
}

/*
==============
PlayerCmd_isMovementFromGamepad
==============
*/
void PlayerCmd_isMovementFromGamepad(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1049, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  LOBYTE(v2) = v5->client->sess.cmd.inputFromGamepad;
  Scr_AddInt(scrContext, v2);
}

/*
==============
PlayerCmd_getNormalizedCameraMovement
==============
*/
void PlayerCmd_getNormalizedCameraMovement(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  unsigned int NumParam; 
  double Float; 
  __int128 v10; 
  float v12; 
  float v14; 
  float v15; 
  double v16; 
  float v17; 
  double v18; 
  float v19; 
  unsigned __int128 v20; 
  unsigned __int128 v24; 
  float value; 
  float v29; 
  float v30; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1078, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  _XMM6 = 0i64;
  value = (float)v4->client->sess.cmd.pitchmove * -0.0078740157;
  v29 = (float)v4->client->sess.cmd.yawmove * -0.0078740157;
  v30 = 0.0;
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam == 1 )
  {
    Float = Scr_GetFloat(scrContext, 0);
    v10 = LODWORD(value);
    *(float *)&v10 = fsqrt((float)(value * value) + (float)(v29 * v29));
    _XMM8 = v10;
    __asm { vcmpless xmm1, xmm8, cs:__real@80000000 }
    v12 = *(float *)&Float;
    __asm { vblendvps xmm1, xmm8, xmm9, xmm1 }
    v14 = value * (float)(1.0 / *(float *)&_XMM1);
    v15 = v29 * (float)(1.0 / *(float *)&_XMM1);
    value = v14;
    v29 = v15;
    if ( *(float *)&Float < 0.0 || *(float *)&Float >= 1.0 )
    {
      Scr_Error(COM_ERR_5685, scrContext, "Deadzone must be less than 1.0 and >= 0.0\n");
      I_fclamp(*(float *)&Float, 0.0, 0.99000001);
      v15 = v29;
      v14 = value;
    }
    if ( *(float *)&v10 >= v12 )
      *(float *)&_XMM6 = (float)(*(float *)&v10 - v12) / (float)(1.0 - v12);
    value = v14 * *(float *)&_XMM6;
    v29 = v15 * *(float *)&_XMM6;
  }
  else if ( NumParam > 1 )
  {
    v16 = Scr_GetFloat(scrContext, 0);
    v17 = *(float *)&v16;
    v18 = Scr_GetFloat(scrContext, 1u);
    v19 = *(float *)&v18;
    if ( v17 < 0.0 || v17 >= 1.0 )
    {
      Scr_Error(COM_ERR_5686, scrContext, "Deadzones must be less than 1.0 and >= 0.0\n");
      I_fclamp(v17, 0.0, 0.99000001);
    }
    if ( v19 < 0.0 || v19 >= 1.0 )
    {
      Scr_Error(COM_ERR_5687, scrContext, "Deadzones must be less than 1.0 and >= 0.0\n");
      I_fclamp(v19, 0.0, 0.99000001);
    }
    if ( COERCE_FLOAT(LODWORD(value) & _xmm) >= v17 )
    {
      v20 = LODWORD(value) & (unsigned __int128)(unsigned int)_xmm;
      *(float *)&v20 = (float)(COERCE_FLOAT(LODWORD(value) & _xmm) - v17) / (float)(1.0 - v17);
      _XMM2 = v20 ^ _xmm;
      __asm
      {
        vcmpless xmm0, xmm6, xmm5
        vblendvps xmm0, xmm2, xmm3, xmm0
      }
      value = *(float *)&_XMM0;
    }
    else
    {
      value = 0.0;
    }
    if ( COERCE_FLOAT(LODWORD(v29) & _xmm) >= v19 )
    {
      v24 = LODWORD(v29) & (unsigned __int128)(unsigned int)_xmm;
      *(float *)&v24 = (float)(COERCE_FLOAT(LODWORD(v29) & _xmm) - v19) / (float)(1.0 - v19);
      _XMM2 = v24 ^ _xmm;
      __asm
      {
        vcmpless xmm0, xmm6, xmm5
        vblendvps xmm0, xmm2, xmm3, xmm0
      }
      v29 = *(float *)&_XMM0;
    }
    else
    {
      v29 = 0.0;
    }
  }
  Scr_AddVector(scrContext, &value);
}

/*
==============
PlayerCmdSP_WeaponLockFinalize
==============
*/
void PlayerCmdSP_WeaponLockFinalize(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  playerState_s *p_ps; 
  const char *v6; 
  ComErrorCode v7; 
  const gentity_s *v8; 
  bool v9; 
  int weapLockFlags; 
  int v11; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1153, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  p_ps = &v4->client->ps;
  if ( !p_ps )
  {
    p_ps = &v4->agent->playerState;
    if ( !p_ps )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      p_ps = NULL;
    }
  }
  v8 = PlayerCmd_WeaponLockFinalize(scrContext, p_ps);
  if ( v8 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1159, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TARGET_SYSTEM ))", "%s\n\tThis has to be enabled to match FireWeapon()", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TARGET_SYSTEM )") )
      __debugbreak();
    v9 = G_Targets_AttackProfileTop(v8);
    weapLockFlags = p_ps->weapCommon.weapLockFlags;
    if ( v9 )
      v11 = weapLockFlags | 4;
    else
      v11 = weapLockFlags | 8;
    p_ps->weapCommon.weapLockFlags = v11;
  }
}

/*
==============
PlayerCmdSP_SetBlurForPlayer
==============
*/
void PlayerCmdSP_SetBlurForPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  const char *v6; 
  unsigned int number; 
  const char *v8; 
  SvClient *CommonClient; 
  char *fmt; 
  float outBlurFinalValue; 
  int outBlurTimeMs; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3682, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1175, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3679, scrContext, v5);
    }
  }
  PlayerCmd_SetBlurForPlayer(scrContext, &outBlurTimeMs, &outBlurFinalValue);
  LODWORD(fmt) = 1;
  v6 = j_va("scr_blur %i %f %i %i", (unsigned int)outBlurTimeMs, outBlurFinalValue, 0i64, fmt);
  number = v4->s.number;
  v8 = v6;
  if ( number == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v6);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(number);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PlayerCmdSP_PlayLocalSound
==============
*/
void PlayerCmdSP_PlayLocalSound(scrContext_t *scrContext, scr_entref_t entref)
{
  int Int; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  const char *String; 
  const char *v8; 
  unsigned __int16 v9; 
  unsigned int NumParam; 
  bool v11; 
  scr_string_t ConstString; 

  Int = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1186, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client && !v5->agent )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v6);
    }
  }
  if ( Scr_GetNumParam(scrContext) > 3 )
    Scr_Error(COM_ERR_1825, scrContext, "Too many parameters passed to PlayLocalSound");
  String = Scr_GetString(scrContext, 0);
  if ( !SND_FindAlias(String) )
  {
    v8 = j_va("unknown sound alias '%s'", String);
    Scr_ParamError(COM_ERR_1826, scrContext, 0, v8);
  }
  v9 = G_CStringSP_SoundAliasIndexTransient(String);
  NumParam = Scr_GetNumParam(scrContext);
  v11 = NumParam >= 2;
  if ( NumParam >= 2 )
  {
    ConstString = Scr_GetConstString(scrContext, 1u);
    if ( Scr_GetNumParam(scrContext) >= 3 )
      Int = Scr_GetInt(scrContext, 2u);
    G_UtilsSP_RegisterSoundWait(scrContext, v5, v9, ConstString, Int);
  }
  PlayerCmd_PlayLocalSound(v5, v9, v11);
}

/*
==============
PlayerCmdSP_StopLocalSound
==============
*/
void PlayerCmdSP_StopLocalSound(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  const char *String; 
  const char *v7; 
  unsigned __int16 v8; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1219, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  String = Scr_GetString(scrContext, 0);
  if ( !SND_FindAlias(String) )
  {
    v7 = j_va("unknown sound alias '%s'", String);
    Scr_ParamError(COM_ERR_1827, scrContext, 0, v7);
  }
  v8 = G_CStringSP_SoundAliasIndexTransient(String);
  if ( !v8 )
    Scr_Error(COM_ERR_1828, scrContext, "Unknown soundalias.");
  PlayerCmd_StopLocalSound(v4, v8);
}

/*
==============
PlayerCmdSP_SetActionSlot
==============
*/
void PlayerCmdSP_SetActionSlot(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  playerState_s *p_ps; 
  const char *v6; 
  ComErrorCode v7; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1237, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  p_ps = &v4->client->ps;
  if ( !p_ps )
  {
    p_ps = &v4->agent->playerState;
    if ( !p_ps )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      p_ps = NULL;
    }
  }
  PlayerCmd_SetActionSlot(scrContext, p_ps, 1);
}

/*
==============
PlayerCmdSP_GetViewmodel
==============
*/
void PlayerCmdSP_GetViewmodel(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
    goto LABEL_8;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1246, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  if ( !v4->client )
  {
    v5 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v5);
LABEL_8:
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1248, ASSERT_TYPE_ASSERT, "( pSelf->client )", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
  }
  PlayerCmd_GetViewmodel(scrContext, v4->client->ps.viewmodelIndex);
}

/*
==============
PlayerCmdSP_SetViewmodel
==============
*/
void PlayerCmdSP_SetViewmodel(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
LABEL_9:
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1258, ASSERT_TYPE_ASSERT, "( pSelf->client )", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
    goto LABEL_12;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1256, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  if ( !v4->client )
  {
    if ( !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
    goto LABEL_9;
  }
LABEL_12:
  PlayerCmd_SetViewmodel(scrContext, &v4->client->ps.viewmodelIndex);
}

/*
==============
PlayerCmdSP_SetOrigin
==============
*/
void PlayerCmdSP_SetOrigin(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1266, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  PlayerCmd_SetOrigin(scrContext, v4);
}

/*
==============
PlayerCmdSP_SetAngles
==============
*/
void PlayerCmdSP_SetAngles(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1274, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  PlayerCmd_SetAngles(scrContext, v4);
}

/*
==============
PlayerCmdSP_GetCurrentWeapon
==============
*/
void PlayerCmdSP_GetCurrentWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  PlayerCmd_GetCurrentWeapon(scrContext, entref, 0, 1);
}

/*
==============
PlayerCmdSP_GetCurrentPrimaryWeapon
==============
*/
void PlayerCmdSP_GetCurrentPrimaryWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  PlayerCmd_GetCurrentWeapon(scrContext, entref, 1, 1);
}

/*
==============
PlayerCmdSP_EnableQuickWeaponSwitch
==============
*/
void PlayerCmdSP_EnableQuickWeaponSwitch(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int Int; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1315, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
      __debugbreak();
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1313, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1316, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
    __debugbreak();
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_IN) )
      Scr_Error(COM_ERR_1830, scrContext, "EnableQuickWeaponSwitch is not supported in this game mode");
    Int = Scr_GetInt(scrContext, 0);
    p_otherFlags = &v4->client->ps.otherFlags;
    if ( Int )
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(p_otherFlags, LASER_SIGHT|0x20);
    else
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(p_otherFlags, LASER_SIGHT|0x20);
  }
  else
  {
    Scr_Error(COM_ERR_1829, scrContext, "Incorrect number of parameters\n");
  }
}

/*
==============
PlayerCmdSP_PlayerDisableTriggers
==============
*/
void PlayerCmdSP_PlayerDisableTriggers(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  int NumParam; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  unsigned int v10; 
  const char *v11; 
  unsigned int ArrayVariable; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v5 = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1350, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
      __debugbreak();
    goto LABEL_10;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1348, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v5 = &g_entities[entnum];
  if ( !v5->client )
  {
    if ( !v5->agent )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v6);
    }
LABEL_10:
    if ( !v5->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1351, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( (unsigned int)NumParam > 1 )
  {
    Scr_Error(COM_ERR_1831, scrContext, "Incorrect number of parameters\n");
  }
  else
  {
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(&v5->client->ps.otherFlags, FIRING|0x20);
    if ( NumParam > 0 )
    {
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 0);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      level.numEnabledTriggerTypes = 0;
      v10 = ArraySize;
      if ( ArraySize > 6 )
      {
        v11 = j_va("Exceeded max trigger exception types, max is %d.", 6i64);
        Scr_Error(COM_ERR_1832, scrContext, v11);
      }
      if ( v10 )
      {
        do
        {
          ArrayVariable = GetArrayVariable(scrContext, ArrayObject, v2);
          if ( GetValueType(scrContext, ArrayVariable) != VAR_STRING )
            Scr_Error(COM_ERR_1833, scrContext, "All elements need to be strings.");
          ++v2;
          level.enabledTriggerTypes[level.numEnabledTriggerTypes++] = GetVariableValueAddress(scrContext, ArrayVariable)->intValue;
        }
        while ( v2 < v10 );
      }
    }
  }
}

/*
==============
PlayerCmdSP_PlayerEnableTriggers
==============
*/
void PlayerCmdSP_PlayerEnableTriggers(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1404, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
      __debugbreak();
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1402, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1405, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
    __debugbreak();
  if ( Scr_GetNumParam(scrContext) )
  {
    Scr_Error(COM_ERR_1834, scrContext, "Incorrect number of parameters\n");
  }
  else
  {
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(&v4->client->ps.otherFlags, FIRING|0x20);
    level.numEnabledTriggerTypes = 0;
  }
}

/*
==============
PlayerCmdSP_HideLegsAndShadow
==============
*/
void PlayerCmdSP_HideLegsAndShadow(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 
  gclient_s *v7; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1431, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x2Bu);
  v7 = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&v7->ps.otherFlags, ACTIVE, 0x2Cu);
}

/*
==============
PlayerCmdSP_ShowLegsAndShadow
==============
*/
void PlayerCmdSP_ShowLegsAndShadow(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 
  gclient_s *v7; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1449, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x2Bu);
  v7 = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&v7->ps.otherFlags, ACTIVE, 0x2Cu);
}

/*
==============
PlayerCmdSP_HideLegs
==============
*/
void PlayerCmdSP_HideLegs(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1467, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x2Bu);
}

/*
==============
PlayerCmdSP_HideShadow
==============
*/
void PlayerCmdSP_HideShadow(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1484, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x2Cu);
}

/*
==============
PlayerCmdSP_ShowLegs
==============
*/
void PlayerCmdSP_ShowLegs(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1501, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x2Bu);
}

/*
==============
PlayerCmdSP_ShowShadow
==============
*/
void PlayerCmdSP_ShowShadow(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1518, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x2Cu);
}

/*
==============
PlayerCmdSP_SetShadowModel
==============
*/
void PlayerCmdSP_SetShadowModel(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  const char *String; 

  Entity = GetEntity(entref);
  String = Scr_GetString(scrContext, 0);
  G_Utils_SetModel(Entity, String);
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, Entity, 1);
}

/*
==============
PlayerCmdSP_SetLegsModel
==============
*/
void PlayerCmdSP_SetLegsModel(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  const char *String; 
  const char *v7; 
  unsigned int ModelIndex; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
    goto LABEL_8;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1560, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  if ( !v4->client )
  {
    v5 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v5);
LABEL_8:
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1562, ASSERT_TYPE_ASSERT, "( pSelf->client )", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
  }
  String = Scr_GetString(scrContext, 0);
  v7 = String;
  if ( !String || !*String )
    Scr_ParamError(COM_ERR_1835, scrContext, 0, "usage: SetLegsModel(<model name>)");
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  ModelIndex = GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, v7);
  if ( ModelIndex != (unsigned __int16)ModelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1571, ASSERT_TYPE_ASSERT, "(modelIndex == static_cast<modelNameIndex_t>( modelIndex ))", (const char *)&queryFormat, "modelIndex == static_cast<modelNameIndex_t>( modelIndex )") )
    __debugbreak();
  v4->client->ps.legsModelIndex = ModelIndex;
}

/*
==============
PlayerCmdSP_GetScriptedMeleeTarget
==============
*/
void PlayerCmdSP_GetScriptedMeleeTarget(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 
  __int16 scriptedMeleeTarget; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1589, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( !client || client->sess.sessionState || (scriptedMeleeTarget = client->sess.cmd.scriptedMeleeTarget, scriptedMeleeTarget == 2047) )
    Scr_AddUndefined(scrContext);
  else
    Scr_AddEntityNum(scrContext, scriptedMeleeTarget, ENTITY_CLASS_GENTITY);
}

/*
==============
PlayerCmdSP_SetScriptedMeleeActive
==============
*/
void PlayerCmdSP_SetScriptedMeleeActive(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  char *client; 
  const char *v6; 
  ComErrorCode v7; 
  int Int; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v9; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1621, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  client = (char *)v4->client;
  if ( !client )
  {
    client = (char *)v4->agent;
    if ( !client )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      client = NULL;
    }
  }
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Int = Scr_GetInt(scrContext, 0);
    v9 = (GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(client + 28);
    if ( Int )
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(v9, WORLD_UP_VOLUME|0x20);
    else
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(v9, WORLD_UP_VOLUME|0x20);
  }
  else
  {
    Scr_Error(COM_ERR_1836, scrContext, "PlayerCmdSP_SetScriptedMeleeActive: Incorrect number of parameters\n");
  }
}

/*
==============
PlayerCmdSP_SetHandsOccupied
==============
*/
void PlayerCmdSP_SetHandsOccupied(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  char *client; 
  const char *v6; 
  ComErrorCode v7; 
  int Int; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v9; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1655, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  client = (char *)v4->client;
  if ( !client )
  {
    client = (char *)v4->agent;
    if ( !client )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      client = NULL;
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_BLAST_IMPACT|0x80) )
  {
    if ( Scr_GetNumParam(scrContext) == 1 )
    {
      Int = Scr_GetInt(scrContext, 0);
      v9 = (GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(client + 28);
      if ( Int )
        GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(v9, (POtherFlagsSP)48);
      else
        GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(v9, (POtherFlagsSP)48);
    }
    else
    {
      Scr_Error(COM_ERR_1838, scrContext, "PlayerCmdSP_SetHandsOccupied: Incorrect number of parameters\n");
    }
  }
  else
  {
    Scr_Error(COM_ERR_1837, scrContext, "PlayerCmdSP_SetHandsOccupied: Not supported in this mode\n");
  }
}

/*
==============
PlayerCmdSP_GetHandsOccupied
==============
*/
void PlayerCmdSP_GetHandsOccupied(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  char *client; 
  const char *v6; 
  ComErrorCode v7; 
  bool v8; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1694, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  client = (char *)v4->client;
  if ( !client )
  {
    client = (char *)v4->agent;
    if ( !client )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      client = NULL;
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_BLAST_IMPACT|0x80) )
  {
    v8 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(client + 28), (POtherFlagsSP)48);
    Scr_AddBool(scrContext, v8);
  }
  else
  {
    Scr_Error(COM_ERR_1839, scrContext, "PlayerCmdSP_GetHandsOccupied: Not supported in this mode\n");
  }
}

/*
==============
PlayerCmdSP_IsScriptedMeleeActive
==============
*/
void PlayerCmdSP_IsScriptedMeleeActive(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  char *client; 
  const char *v7; 
  ComErrorCode v8; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v9; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v7 = "not an entity";
    v8 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1718, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v5 = &g_entities[entnum];
  client = (char *)v5->client;
  if ( !client )
  {
    client = (char *)v5->agent;
    if ( !client )
    {
      v7 = j_va("entity %i is not a player or agent", entnum);
      v8 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v8, scrContext, v7);
      client = NULL;
    }
  }
  v9 = (GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(client + 28);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  LOBYTE(v2) = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(v9, ACTIVE, 0x2Fu);
  Scr_AddBool(scrContext, v2);
}

/*
==============
PlayerCmdSP_SetNextBulletDryFire
==============
*/
void PlayerCmdSP_SetNextBulletDryFire(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  char *client; 
  const char *v6; 
  ComErrorCode v7; 
  int Int; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v9; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_script_sp.cpp", 1738, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  client = (char *)v4->client;
  if ( !client )
  {
    client = (char *)v4->agent;
    if ( !client )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      client = NULL;
    }
  }
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Int = Scr_GetInt(scrContext, 0);
    v9 = (GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(client + 28);
    if ( Int )
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(v9, DEAD|0x20);
    else
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(v9, DEAD|0x20);
  }
  else
  {
    Scr_Error(COM_ERR_1840, scrContext, "PlayerCmdSP_SetNextBulletDryFire: Incorrect number of parameters\n");
  }
}

