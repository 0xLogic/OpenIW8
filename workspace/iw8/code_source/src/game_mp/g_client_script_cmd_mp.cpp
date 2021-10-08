/*
==============
G_ClientScrMP_BodyEnd
==============
*/

void __fastcall G_ClientScrMP_BodyEnd(gentity_s *ent)
{
  ?G_ClientScrMP_BodyEnd@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ClientScrMP_LinkCorpseToMovingPlatform
==============
*/

void __fastcall G_ClientScrMP_LinkCorpseToMovingPlatform(gentity_s *corpse, const trace_t *trace, const vec3_t *endPos)
{
  ?G_ClientScrMP_LinkCorpseToMovingPlatform@@YAXPEAUgentity_s@@PEBUtrace_t@@AEBTvec3_t@@@Z(corpse, trace, endPos);
}

/*
==============
PlayerCmd_SetCameraThirdPerson
==============
*/

void __fastcall PlayerCmd_SetCameraThirdPerson(scrContext_t *scrContext, scr_entref_t entref)
{
  ?PlayerCmd_SetCameraThirdPerson@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
PlayerCmd_buttonPressedDEVONLY
==============
*/

void __fastcall PlayerCmd_buttonPressedDEVONLY(scrContext_t *scrContext, scr_entref_t entref)
{
  ?PlayerCmd_buttonPressedDEVONLY@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
PlayerCmd_pingPlayer
==============
*/

void __fastcall PlayerCmd_pingPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  ?PlayerCmd_pingPlayer@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
G_ClientScrMP_TryToLinkCorpseToMovingPlatform
==============
*/

int __fastcall G_ClientScrMP_TryToLinkCorpseToMovingPlatform(gentity_s *corpse)
{
  return ?G_ClientScrMP_TryToLinkCorpseToMovingPlatform@@YAHPEAUgentity_s@@@Z(corpse);
}

/*
==============
G_ClientScrMP_CorpseToMovingPlatformTrace
==============
*/

int __fastcall G_ClientScrMP_CorpseToMovingPlatformTrace(const gentity_s *corpse, trace_t *trace, float traceLength, vec3_t *outEndPos)
{
  return ?G_ClientScrMP_CorpseToMovingPlatformTrace@@YAHPEBUgentity_s@@PEAUtrace_t@@MAEATvec3_t@@@Z(corpse, trace, traceLength, outEndPos);
}

/*
==============
PlayerCmd_buttonPressedDEVONLY
==============
*/
void PlayerCmd_buttonPressedDEVONLY(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  const char *String; 
  const char *v8; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 123, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client && !v5->agent )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v6);
    }
  }
  if ( !SV_BotIsBotEnt(v5) && !SV_IsAgentEntity(v5) )
  {
    if ( SvPersistentGlobalsMP::IsFrontEndServer() )
      Scr_Error(COM_ERR_1356, scrContext, "Not supported on front-end server");
    if ( !DevGui_IsActive() && !CL_Cameraman_isActive() )
    {
      String = Scr_GetString(scrContext, 0);
      v8 = String;
      if ( !String || !*String )
        Scr_ParamError(COM_ERR_1357, scrContext, 0, "usage: buttonPressed(<button name>)");
      LOBYTE(v2) = CL_Keys_IsKeyPressed(LOCAL_CLIENT_0, v8) != 0;
    }
  }
  Scr_AddInt(scrContext, v2);
}

/*
==============
PlayerCmd_SetCameraThirdPerson
==============
*/
void PlayerCmd_SetCameraThirdPerson(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  char *client; 
  const char *v6; 
  ComErrorCode v7; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 176, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
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
    if ( Scr_GetInt(scrContext, 0) )
    {
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(client + 28), MOTIONBLUR_HQ|0x20);
    }
    else
    {
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(client + 28), ACTIVE, 0x2Du);
    }
  }
  else
  {
    Scr_Error(COM_ERR_1358, scrContext, "USAGE: <player> SetCameraThirdPerson( <boolean> )\n");
  }
}

/*
==============
PlayerCmd_pingPlayer
==============
*/
void PlayerCmd_pingPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  __int64 v7; 
  scr_string_t ConstString; 
  gclient_s *client; 
  gentity_s *v10; 
  __int64 v11; 
  __int64 v12; 
  bitarray_base<bitarray<224> > *p_clientMask; 
  __int64 v14; 
  int v15; 
  bool v16; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 215, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  if ( Scr_GetNumParam(scrContext) <= 1 )
  {
    if ( Scr_GetNumParam(scrContext) )
    {
      ConstString = Scr_GetConstString(scrContext, 0);
      if ( ConstString == scr_const.enemy )
      {
        v7 = 1i64;
      }
      else if ( ConstString == scr_const.friendly )
      {
        v7 = 2i64;
      }
      else
      {
        if ( ConstString != scr_const.all )
          Scr_ParamError(COM_ERR_1360, scrContext, 0, "team must be \"enemy\", \"friendly\", or \"all\"");
        v7 = 0i64;
      }
    }
    else
    {
      v7 = 2i64;
    }
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagStrict(&v5->client->ps.eFlags, LEGACY_MANTLE|LEGACY_MOUNT|0x10);
    v5->client->compassPingTime = level.time + 3000;
    client = v5->client;
    v10 = G_Utils_SpawnEventEntity(&vec3_origin, 156);
    v10->s.eventParm = client->ps.clientNum;
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v11 = *(_QWORD *)&GStatic::ms_gameStatics;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)client->ps.clientNum);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 253, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
      __debugbreak();
    p_clientMask = &v10->clientMask;
    v10->clientMask.array[0] = 0;
    *(_QWORD *)&v10->clientMask.array[1] = 0i64;
    *(_QWORD *)&v10->clientMask.array[3] = 0i64;
    *(_QWORD *)&v10->clientMask.array[5] = 0i64;
    if ( level.maxclients )
    {
      do
      {
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 224i64))(v11, (unsigned int)level.clients[v2].ps.clientNum);
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 259, ASSERT_TYPE_ASSERT, "(clientCharacterInfo)", (const char *)&queryFormat, "clientCharacterInfo") )
          __debugbreak();
        if ( v7 )
        {
          v15 = *(_DWORD *)(v12 + 12);
          if ( v15 && v15 == *(_DWORD *)(v14 + 12) )
            v16 = v7 == 1;
          else
            v16 = v7 == 2;
          if ( v16 )
            bitarray_base<bitarray<224>>::setBit(p_clientMask, v2);
        }
        ++v2;
      }
      while ( v2 < level.maxclients );
    }
  }
  else
  {
    Scr_Error(COM_ERR_1359, scrContext, "USAGE: <player> PingPlayer( <team> )\n");
  }
}

/*
==============
PlayerCmd_setSpawnWeapon
==============
*/
void PlayerCmd_setSpawnWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  playerState_s *p_ps; 
  const char *v7; 
  GWeaponMap *Instance; 
  int Int; 
  int EquippedWeaponIndex; 
  __int64 v11; 
  bool *p_usedBefore; 
  char v17; 
  Weapon *p_outWeapon; 
  GHandler *Handler; 
  Weapon *v20; 
  unsigned __int16 weaponIdx; 
  WeaponDef **v22; 
  int v23; 
  __int64 v24; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  GHandler *v26; 
  __int64 v27; 
  __int64 v28; 
  bool outIsAlternate; 
  bool v30; 
  Weapon outWeapon; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3682, scrContext, "not an entity");
    v5 = NULL;
LABEL_9:
    p_ps = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 304, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    goto LABEL_11;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 302, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v5 = &g_entities[entnum];
  p_ps = &v5->client->ps;
  if ( !p_ps )
  {
    p_ps = &v5->agent->playerState;
    if ( !p_ps )
    {
      v7 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3679, scrContext, v7);
      goto LABEL_9;
    }
  }
LABEL_11:
  Instance = GWeaponMap::GetInstance();
  GScr_Main_GetWeaponParam(scrContext, 0, &outWeapon, &outIsAlternate);
  if ( Scr_GetNumParam(scrContext) <= 1 )
  {
    v30 = 0;
  }
  else
  {
    Int = Scr_GetInt(scrContext, 1u);
    v30 = Int != 0;
    if ( Int && v5->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 319, ASSERT_TYPE_ASSERT, "(( !forceFirstRaiseAnim || !pSelf->agent ))", "%s\n\tYou cannot use the forceFirstRaise argument for agents", "( !forceFirstRaiseAnim || !pSelf->agent )") )
      __debugbreak();
  }
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(Instance, p_ps, &outWeapon);
  v11 = EquippedWeaponIndex;
  if ( EquippedWeaponIndex < 0 )
  {
    GScr_Main_WeaponParamError(COM_ERR_5301, scrContext, 0, &outWeapon, "invalid SetSpawnWeapon: %s");
  }
  else
  {
    p_usedBefore = &p_ps->weapEquippedData[EquippedWeaponIndex].usedBefore;
    if ( (playerState_s *)((char *)p_ps + 16 * EquippedWeaponIndex) == (playerState_s *)-1540i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 327, ASSERT_TYPE_ASSERT, "(equippedWeapon)", (const char *)&queryFormat, "equippedWeapon") )
      __debugbreak();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !p_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)v11 >= 0xF )
    {
      LODWORD(v27) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v27, 15) )
        __debugbreak();
    }
    _RAX = BgWeaponMap::GetWeapon(Instance, p_ps->weaponsEquipped[v11]);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0C8h+outWeapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+0C8h+outWeapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+0C8h+outWeapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&outWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    if ( outIsAlternate && !BG_ActiveUnderbarrel(&outWeapon) )
    {
      GScr_Main_WeaponParamError(COM_ERR_6152, scrContext, 0, &outWeapon, "invalid SetSpawnWeapon, does not support alt mode: %s");
      outIsAlternate = 0;
    }
    v17 = v30;
    p_outWeapon = &outWeapon;
    if ( !v30 )
      p_outWeapon = &NULL_WEAPON;
    BG_SetSpawnWeaponForPlayer(Instance, p_ps, p_outWeapon);
    Handler = GHandler::getHandler();
    v20 = &outWeapon;
    if ( v17 )
      v20 = &NULL_WEAPON;
    BG_SetCurrentWeaponForPlayer(Instance, p_ps, v20, Handler);
    p_ps->weapState[0].weaponState = 0;
    p_ps->weapState[1].weaponState = 0;
    weaponIdx = outWeapon.weaponIdx;
    if ( outWeapon.weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(v28) = bg_lastParsedWeaponIndex;
      LODWORD(v27) = outWeapon.weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v27, v28) )
        __debugbreak();
    }
    v22 = &bg_weaponDefs[weaponIdx];
    if ( !*v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    if ( (*v22)->inventoryType != WEAPINVENTORY_OFFHAND )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&p_ps->weapCommon.weapFlags, ACTIVE, 1u);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !BG_Skydive_IsSkydiving(p_ps) && BG_Ladder_IsDualWieldingAllowed(p_ps) )
    {
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( outWeapon.weaponIdx )
      {
        v23 = BG_GetEquippedWeaponIndex(Instance, p_ps, &outWeapon);
        if ( v23 >= 0 )
        {
          v24 = v23;
          if ( (playerState_s *)((char *)p_ps + 4 * v24) != (playerState_s *)-1540i64 && p_ps->weapEquippedData[v24].dualWielding )
            goto LABEL_58;
        }
      }
    }
    if ( BG_HasLadderHand(p_ps) )
LABEL_58:
      v2 = 1;
    p_ps->weapCommon.lastWeaponHand = v2;
    p_weapFlags = &p_ps->weapCommon.weapFlags;
    p_usedBefore[2] = outIsAlternate;
    if ( outIsAlternate )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x11u);
    else
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x11u);
    *p_usedBefore = !p_usedBefore[2];
    v26 = GHandler::getHandler();
    PM_BuildWeaponAnimArrays(Instance, p_ps, v26);
    if ( !v5->agent )
      G_Weapon_SelectWeapon(entnum, &outWeapon);
  }
}

/*
==============
PlayerCmd_dropItem
==============
*/
void PlayerCmd_dropItem(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  EntityClass entclass; 
  gentity_s *v5; 
  const char *v6; 
  unsigned __int16 weaponIdx; 
  WeaponDef **v8; 
  const gentity_s *v9; 
  scr_string_t tag_weapon_right; 
  __int64 v11; 
  bool outIsAlternate; 
  __int64 v13; 
  Weapon outWeapon; 

  v13 = -2i64;
  entnum = entref.entnum;
  entclass = entref.entclass;
  Sys_ProfBeginNamedEvent(0xFF808080, "PlayerCmd_dropItem");
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 522, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client && !v5->agent )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v6);
    }
  }
  GScr_Main_GetWeaponParam(scrContext, 0, &outWeapon, &outIsAlternate);
  weaponIdx = outWeapon.weaponIdx;
  if ( !outWeapon.weaponIdx )
    goto LABEL_18;
  if ( outWeapon.weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v11) = outWeapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v11, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  v8 = &bg_weaponDefs[weaponIdx];
  if ( !*v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  if ( (*v8)->inventoryType == WEAPINVENTORY_ALTMODE )
  {
    GScr_Main_WeaponParamError(COM_ERR_5302, scrContext, 0, &outWeapon, "You can't drop alternate fire weapon '%s'.  Drop the primary weapon instead.\n");
LABEL_18:
    v9 = NULL;
    goto LABEL_23;
  }
  if ( Scr_GetNumParam(scrContext) <= 1 )
    tag_weapon_right = scr_const.tag_weapon_right;
  else
    tag_weapon_right = Scr_GetConstString(scrContext, 1u);
  v9 = PlayerCmd_DropItemEntity(v5, &outWeapon, tag_weapon_right, 0, G_Items_DropWeapon);
LABEL_23:
  GScr_AddEntityAllowUndefined(v9);
  Sys_ProfEndNamedEvent();
}

/*
==============
PlayerCmd_DropScavengerBag
==============
*/
void PlayerCmd_DropScavengerBag(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  EntityClass entclass; 
  gentity_s *v5; 
  const char *v6; 
  unsigned __int16 weaponIdx; 
  WeaponDef **v8; 
  scr_string_t tag_weapon_right; 
  const gentity_s *v10; 
  __int64 v11; 
  bool outIsAlternate; 
  __int64 v13; 
  Weapon outWeapon; 

  v13 = -2i64;
  entnum = entref.entnum;
  entclass = entref.entclass;
  Sys_ProfBeginNamedEvent(0xFF808080, "PlayerCmd_DropScavengerBag");
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 579, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client && !v5->agent )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v6);
    }
  }
  GScr_Main_GetWeaponParam(scrContext, 0, &outWeapon, &outIsAlternate);
  weaponIdx = outWeapon.weaponIdx;
  if ( !outWeapon.weaponIdx )
  {
    Scr_Error(COM_ERR_1361, scrContext, "Scavenger item does not exist or has not been pre-cached.");
    weaponIdx = outWeapon.weaponIdx;
  }
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v11) = weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v11, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  v8 = &bg_weaponDefs[weaponIdx];
  if ( !*v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  if ( (*v8)->inventoryType == WEAPINVENTORY_SCAVENGER )
  {
    if ( BG_WeaponHasStreamedModelsErrorCheck(&outWeapon) )
    {
      Scr_Error(COM_ERR_1362, scrContext, "Scavenger bags must not have transient models. Transient equipment weapon models are not supported because are not accounted for in the streaming limits.");
    }
    else
    {
      if ( Scr_GetNumParam(scrContext) <= 1 )
        tag_weapon_right = scr_const.tag_weapon_right;
      else
        tag_weapon_right = Scr_GetConstString(scrContext, 1u);
      v10 = PlayerCmd_DropItemEntity(v5, &outWeapon, tag_weapon_right, 0, G_Items_DropScavengerBag);
      GScr_AddEntityAllowUndefined(v10);
    }
  }
  else
  {
    GScr_Main_WeaponParamError(COM_ERR_5303, scrContext, 0, &outWeapon, "Scavenger Item \"%s\" does not have the 'scavenger' inventory type.");
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PlayerCmd_finishPlayerDamage
==============
*/
void PlayerCmd_finishPlayerDamage(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  unsigned int entnum; 
  gentity_s *v9; 
  const char *v10; 
  gclient_s *client; 
  int Int; 
  meansOfDeath_t v13; 
  scr_string_t ConstString; 
  hitLocation_t hitLoc; 
  char v17; 
  bool v18; 
  const char *v24; 
  unsigned int v39; 
  unsigned __int16 number; 
  __int64 v41; 
  unsigned int v42; 
  __int64 v43; 
  unsigned __int16 v44; 
  __int64 v45; 
  __int64 v46; 
  char v47; 
  char v48; 
  int v53; 
  int dflags; 
  int v59; 
  vec3_t *v60; 
  unsigned int v61; 
  scr_string_t tagName; 
  int iDamageParts; 
  DamageParts *v64; 
  const GEntityHandlerList *EntHandlerList; 
  gclient_s *v66; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v68; 
  unsigned __int64 v69; 
  char v70; 
  int v71; 
  gentity_s *v72; 
  bool v73; 
  vec3_t *v74; 
  __int16 v75; 
  void (__fastcall *pain)(gentity_s *, gentity_s *, int, const vec3_t *, const int, const vec3_t *, const hitLocation_t, const Weapon *, bool); 
  vec3_t *v77; 
  __int16 EntityIndex; 
  __int64 partName; 
  __int64 partNamea; 
  vec3_t *point; 
  meansOfDeath_t mod; 
  bool outIsAlternate; 
  bool v87; 
  bool v88; 
  unsigned int damageFlags; 
  scr_string_t v90; 
  int psTimeOffset; 
  gentity_s *pAttacker; 
  int modelIndex; 
  vec3_t *hitOrigin; 
  vec3_t *p_hitDir; 
  vec3_t direction; 
  vec3_t hitDir; 
  vec3_t vectorValue; 
  Weapon outWeapon; 

  p_hitDir = NULL;
  hitOrigin = NULL;
  Entity = g_entities + 2046;
  pAttacker = g_entities + 2046;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v9 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 668, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v9 = &g_entities[entnum];
    if ( !v9->client )
    {
      v10 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v10);
    }
  }
  client = v9->client;
  if ( !client->lastStand || client->lastStandTime <= level.time )
  {
    Int = Scr_GetInt(scrContext, 2u);
    if ( Scr_GetType(scrContext, 0) && Scr_GetPointerType(scrContext, 0) == VAR_ENTITY )
      Entity = GScr_GetEntity(0);
    if ( Scr_GetType(scrContext, 1u) && Scr_GetPointerType(scrContext, 1u) == VAR_ENTITY )
      pAttacker = GScr_GetEntity(1u);
    damageFlags = Scr_GetInt(scrContext, 3u);
    v13 = G_Combat_MeansOfDeathFromScriptParam(scrContext, 4);
    GScr_Main_GetWeaponParam(scrContext, 5u, &outWeapon, &outIsAlternate);
    if ( Scr_GetType(scrContext, 6u) )
    {
      Scr_GetVector(scrContext, 6u, &vectorValue);
      hitOrigin = &vectorValue;
    }
    if ( Scr_GetType(scrContext, 7u) )
    {
      Scr_GetVector(scrContext, 7u, &hitDir);
      _RBX = &hitDir;
      p_hitDir = &hitDir;
    }
    else
    {
      _RBX = p_hitDir;
    }
    ConstString = Scr_GetConstString(scrContext, 8u);
    hitLoc = G_Combat_GetHitLocationIndexFromString(ConstString);
    if ( hitLoc != HITLOC_SHIELD )
    {
      __asm
      {
        vmovaps [rsp+180h+var_40], xmm6
        vmovaps [rsp+180h+var_50], xmm7
        vmovaps [rsp+180h+var_60], xmm8
      }
      psTimeOffset = Scr_GetInt(scrContext, 9u);
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0xAu);
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000
        vxorps  xmm6, xmm6, xmm6
        vcomiss xmm0, xmm6
        vmovaps xmm8, xmm0
      }
      if ( v17 )
        goto LABEL_24;
      __asm { vcomiss xmm0, xmm7 }
      if ( !(v17 | v18) )
      {
LABEL_24:
        __asm
        {
          vcvtss2sd xmm1, xmm8, xmm8
          vmovq   rdx, xmm1
        }
        v24 = j_va("Given stun fraction (%.2f) is outside the allowed range (0,1).", _RDX);
        Scr_Error(COM_ERR_1363, scrContext, v24);
      }
      if ( Scr_GetType(scrContext, 0xBu) )
        modelIndex = Scr_GetInt(scrContext, 0xBu);
      else
        modelIndex = 0;
      if ( Scr_GetType(scrContext, 0xCu) )
        v90 = Scr_GetConstString(scrContext, 0xCu);
      else
        v90 = 0;
      v87 = Scr_GetNumParam(scrContext) > 0xD && Scr_GetInt(scrContext, 0xDu) != 0;
      v88 = 1;
      if ( Scr_GetNumParam(scrContext) > 0xE )
        v88 = Scr_GetInt(scrContext, 0xEu) != 0;
      if ( v9->client->ps.pm_type == 7 )
      {
        Scr_Error(COM_ERR_1364, scrContext, "Trying to do damage to a client that is already dead");
LABEL_143:
        __asm
        {
          vmovaps xmm7, [rsp+180h+var_50]
          vmovaps xmm6, [rsp+180h+var_40]
          vmovaps xmm8, [rsp+180h+var_60]
        }
        return;
      }
      if ( _RBX )
      {
        __asm
        {
          vmovss  xmm5, dword ptr [rbx+4]
          vmovss  xmm4, dword ptr [rbx]
          vmovss  xmm6, dword ptr [rbx+8]
          vmulss  xmm0, xmm5, xmm5
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm7, xmm0
          vdivss  xmm2, xmm7, xmm0
          vmulss  xmm0, xmm4, xmm2
          vmovss  dword ptr [rbp+80h+direction], xmm0
          vmulss  xmm0, xmm6, xmm2
          vmulss  xmm1, xmm5, xmm2
          vmovss  dword ptr [rbp+80h+direction+8], xmm0
          vmovss  dword ptr [rbp+80h+direction+4], xmm1
        }
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbp+80h+direction], xmm6
          vmovss  dword ptr [rbp+80h+direction+4], xmm6
          vmovss  dword ptr [rbp+80h+direction+8], xmm6
        }
      }
      v39 = v9->flags.m_flags[0];
      if ( (v39 & 8) == 0 && (damageFlags & 4) == 0 )
      {
        G_CombatMP_DamageKnockback(v9, Int, &direction, &v9->client->ps);
        LOBYTE(v39) = v9->flags.m_flags[0];
      }
      if ( (v39 & 1) != 0 )
        goto LABEL_143;
      number = v9->r.ownerNum.number;
      if ( number )
      {
        v41 = number;
        v42 = number - 1;
        if ( v42 >= 0x800 )
        {
          LODWORD(partName) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", partName, 2048) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v43 = v41 - 1;
        if ( g_entities[v43].r.isInUse != g_entityIsInUse[v43] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v43] )
        {
          LODWORD(point) = v9->r.ownerNum.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", point) )
            __debugbreak();
        }
        v44 = v9->r.ownerNum.number;
        if ( v44 )
        {
          if ( (unsigned int)v44 - 1 >= 0x7FF )
          {
            LODWORD(point) = 2047;
            LODWORD(partName) = v44 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", partName, point) )
              __debugbreak();
          }
          v45 = v9->r.ownerNum.number;
          if ( (unsigned int)(v45 - 1) >= 0x800 )
          {
            LODWORD(point) = 2048;
            LODWORD(partName) = v45 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", partName, point) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v46 = v45 - 1;
          if ( g_entities[v46].r.isInUse != g_entityIsInUse[v46] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v46] )
          {
            LODWORD(point) = v9->r.ownerNum.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", point) )
              __debugbreak();
          }
          if ( (g_entities[v9->r.ownerNum.number - 1].flags.m_flags[0] & 1) != 0 )
            goto LABEL_143;
        }
      }
      v47 = v87;
      if ( !Int && (v87 || (damageFlags & 0x600) != 0) )
      {
        v48 = 1;
        Int = 1;
      }
      else
      {
        v48 = 0;
        if ( Int <= 0 )
          goto LABEL_143;
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r14d
        vmulss  xmm1, xmm0, xmm8
        vcvttss2si ecx, xmm1
      }
      v9->client->damage_stun += _ECX;
      v53 = Int - _ECX;
      v9->client->damage_blood += v53;
      if ( (unsigned int)v13 >= MOD_NUM )
      {
        LODWORD(point) = 25;
        LODWORD(partName) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 807, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", partName, point) )
          __debugbreak();
      }
      v9->client->damage_mod_flags |= 1 << v13;
      dflags = damageFlags;
      if ( (damageFlags & 0x100) != 0 )
        v9->client->damage_ricochet += v53;
      if ( v47 )
        v9->client->damage_armor += v53;
      _RCX = v9->client;
      if ( p_hitDir )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+80h+direction]
          vmovss  dword ptr [rcx+5E88h], xmm0
          vmovss  xmm1, dword ptr [rbp+80h+direction+4]
          vmovss  dword ptr [rcx+5E8Ch], xmm1
          vmovss  xmm0, dword ptr [rbp+80h+direction+8]
          vmovss  dword ptr [rcx+5E90h], xmm0
        }
        v9->client->damage_fromWorld = 0;
      }
      else
      {
        _RCX->damage_from.v[0] = v9->r.currentOrigin.v[0];
        _RCX->damage_from.v[1] = v9->r.currentOrigin.v[1];
        _RCX->damage_from.v[2] = v9->r.currentOrigin.v[2];
        v9->client->damage_fromWorld = 1;
      }
      v59 = v53 - 1;
      if ( !v48 )
        v59 = v53;
      v9->client->damage_vehicle = 0;
      if ( v59 <= 0 )
      {
        if ( v48 )
        {
          v60 = hitOrigin;
          G_CombatMP_SendPlayerHitEvent(v9, v9, Entity, &outWeapon, outIsAlternate, v90, hitOrigin, &direction, v13, hitLoc, dflags, 0);
          G_Combat_SendMeleeCharacterImpactEvent(v9, v9, Entity, &outWeapon, outIsAlternate, v60, v13);
        }
        goto LABEL_143;
      }
      v61 = v59;
      if ( (v9->flags.m_flags[0] & 2) != 0 && v9->health - v59 <= 0 )
        v61 = v9->health - 1;
      tagName = v90;
      iDamageParts = v9->sentient->iDamageParts;
      if ( iDamageParts != -1 && v90 )
      {
        v64 = DamageParts_Get(iDamageParts);
        if ( !v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 858, ASSERT_TYPE_ASSERT, "(pParts)", (const char *)&queryFormat, "pParts") )
          __debugbreak();
        v61 = DamageParts::ApplyDamage(v64, Entity, pAttacker, &hitDir, &vectorValue, v61, damageFlags, v13, &outWeapon, outIsAlternate, hitLoc, modelIndex, tagName);
      }
      if ( v88 )
        BG_SetPlayerDamageFlinch(&v9->client->ps, v61);
      G_CombatMP_SetAnimDamageTypeCondition(v9->client->ps.clientNum, v9, Entity, v13, &outWeapon, outIsAlternate);
      G_CombatMP_SetAnimHitLocationCondition(v9->client->ps.clientNum, v9, hitLoc);
      G_CombatMP_SetAnimHitDirectionCondition(v9->client->ps.clientNum, v9, &hitDir, &v9->client->ps, v13);
      G_CombatMP_SetAnimMoveDirectionCondition(v9->client->ps.clientNum, v9, &v9->client->ps);
      if ( v13 == MOD_MELEE )
        G_CombatMP_SetMeleeReactionConditions(v9->client->ps.clientNum, Entity);
      if ( v61 )
      {
        v9->health -= v61;
        G_Combat_DamageNotifyNoWeapon(scr_const.damage, v9, pAttacker, Entity, NULL, NULL, v61, 0);
      }
      EntHandlerList = G_Main_GetEntHandlerList(v9);
      if ( !EntHandlerList->die )
        Com_Printf(1, "No die handler for player entity handler type %i", v9->handler);
      if ( v9->health <= 0 )
      {
        v66 = v9->client;
        if ( v66->lastStand || (PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x1Eu), v68 = (unsigned int)PerkNetworkPriorityIndex, PerkNetworkPriorityIndex < 0) )
        {
          v71 = psTimeOffset;
          v72 = pAttacker;
        }
        else
        {
          if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
          {
            LODWORD(point) = 64;
            LODWORD(partNamea) = PerkNetworkPriorityIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", partNamea, point) )
              __debugbreak();
          }
          v69 = v68;
          v70 = v68;
          v71 = psTimeOffset;
          v18 = ((0x80000000 >> (v70 & 0x1F)) & v66->ps.perks.array[v69 >> 5]) == 0;
          v72 = pAttacker;
          if ( !v18 && Scr_PlayerLastStand(v9, Entity, pAttacker, v61, v13, &outWeapon, outIsAlternate, &direction, hitLoc, psTimeOffset) )
          {
            v9->client->lastStand = 1;
            v9->client->lastStandTime = level.time + 500;
            v9->client->ps.lastStandTime = level.time;
            v9->client->ps.lastStandStartViewHeight = v9->client->ps.viewHeightCurrent;
            BG_PlayerSecondaryCollision_ResetBlendIn(&v9->client->ps);
            SV_BotEntityStartedLastStand(v9);
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_laststand_grenade_drop_fix_enabled, "killswitch_laststand_grenade_drop_fix_enabled") && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
              v73 = v9->client->ps.grenadeTimeLeft != 0;
            else
              v73 = v9->client->ps.grenadeTimeLeft > 0;
            if ( v73 )
            {
              if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_laststand_grenade_drop_fix_enabled, "killswitch_laststand_grenade_drop_fix_enabled") && Dvar_GetBool_Internal_DebugName(DVARBOOL_g_lastStandDropGrenades, "g_lastStandDropGrenades") )
                G_CombatMP_GrenadeDrop(v9, v13, 0);
              if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_lastStandCancelGrenades, "g_lastStandCancelGrenades") )
              {
                v9->client->ps.grenadeTimeLeft = -1;
                GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v9->client->ps.weapCommon.weapFlags, ACTIVE, 1u);
              }
            }
            v74 = hitOrigin;
            G_CombatMP_SendPlayerHitEvent(v9, v9, Entity, &outWeapon, outIsAlternate, v90, hitOrigin, &direction, v13, hitLoc, damageFlags, 0);
            G_Combat_SendMeleeCharacterImpactEvent(v9, v9, Entity, &outWeapon, outIsAlternate, v74, v13);
            SV_ClientAntiCheatMP_LogPlayerLastStand(v72, v9, &outWeapon, outIsAlternate, v13, hitLoc, psTimeOffset);
LABEL_139:
            EntityIndex = G_GetEntityIndex(v9);
            if ( !G_IsEntityInUse(EntityIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 958, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( pSelf ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( pSelf ) )") )
              __debugbreak();
            v9->client->ps.stats[0] = v9->health;
            goto LABEL_143;
          }
        }
        if ( (unsigned int)(v9->health + 999) > 0x3E6 )
          v9->health = -999;
        G_CombatMP_HandlePlayerDeath(v9, Entity, v72, v61, damageFlags, v13, &outWeapon, outIsAlternate, &direction, hitOrigin, hitLoc, v71, modelIndex, v90);
        v75 = G_GetEntityIndex(v9);
        if ( !G_IsEntityInUse(v75) )
          goto LABEL_143;
        goto LABEL_139;
      }
      pain = EntHandlerList->pain;
      v77 = hitOrigin;
      if ( pain )
      {
        LOBYTE(mod) = outIsAlternate;
        pain(v9, pAttacker, v61, hitOrigin, v13, &direction, hitLoc, &outWeapon, mod);
      }
      G_CombatMP_SendPlayerHitEvent(v9, v9, Entity, &outWeapon, outIsAlternate, tagName, v77, &direction, v13, hitLoc, damageFlags, 0);
      G_Combat_SendMeleeCharacterImpactEvent(v9, v9, Entity, &outWeapon, outIsAlternate, v77, v13);
      goto LABEL_139;
    }
  }
}

/*
==============
PlayerCmd_Suicide
==============
*/
void PlayerCmd_Suicide(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v5; 
  _DWORD *p_commandTime; 
  const char *v7; 
  gagent_s *agent; 
  const char *v11; 
  vec3_t vDir; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3682, scrContext, "not an entity");
    v5 = NULL;
LABEL_9:
    p_commandTime = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 982, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    goto LABEL_11;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 980, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v5 = &g_entities[entnum];
  p_commandTime = &v5->client->ps.commandTime;
  if ( !p_commandTime )
  {
    p_commandTime = &v5->agent->playerState.commandTime;
    if ( !p_commandTime )
    {
      v7 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3679, scrContext, v7);
      goto LABEL_9;
    }
  }
LABEL_11:
  v5->flags.m_flags[0] &= 0xFFFFFFFC;
  v5->health = 0;
  p_commandTime[150] = 0;
  agent = v5->agent;
  if ( agent )
  {
    if ( (unsigned int)(agent->playerState.pm_type - 7) <= 1 )
    {
      v11 = j_va("Agent(%d) is already dead when suicide command called!", (unsigned int)v5->s.number);
      Scr_Error(COM_ERR_1365, scrContext, v11);
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+0A8h+var_48], xmm0
        vmovss  dword ptr [rsp+0A8h+var_48+4], xmm0
        vmovss  xmm0, cs:__real@3f800000
        vmovss  dword ptr [rsp+0A8h+var_48+8], xmm0
      }
      G_CombatMP_AgentDie(v5, v5, v5, 100000, 0, 14, &NULL_WEAPON, 0, &vDir, HITLOC_NONE, 0);
    }
  }
  else
  {
    if ( !v5->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1001, ASSERT_TYPE_ASSERT, "( pSelf->client )", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
    G_CombatMP_PlayerDie(v5, v5, v5, 100000, 0, 14, &NULL_WEAPON, 0, NULL, HITLOC_NONE, 0);
  }
}

/*
==============
iclientprintln
==============
*/
void iclientprintln(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  const char *v4; 
  ComErrorCode v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v4 = "not an entity";
    v5 = COM_ERR_3681;
    goto LABEL_8;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1009, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  if ( !g_entities[entnum].client )
  {
    v4 = j_va("entity %i is not a player", entnum);
    v5 = COM_ERR_3680;
LABEL_8:
    Scr_ObjectError(v5, scrContext, v4);
  }
  GScr_MakeGameMessage(scrContext, entnum, 102);
}

/*
==============
iclientprintlnbold
==============
*/
void iclientprintlnbold(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  const char *v4; 
  ComErrorCode v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v4 = "not an entity";
    v5 = COM_ERR_3681;
    goto LABEL_8;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1017, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  if ( !g_entities[entnum].client )
  {
    v4 = j_va("entity %i is not a player", entnum);
    v5 = COM_ERR_3680;
LABEL_8:
    Scr_ObjectError(v5, scrContext, v4);
  }
  GScr_MakeGameMessage(scrContext, entnum, 103);
}

/*
==============
PlayerCmd_spawn
==============
*/
void PlayerCmd_spawn(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  vec3_t spawn_angles; 
  vec3_t vectorValue; 
  bitarray_base<bitarray<2048> > v8[256]; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1028, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  bitarray_base<bitarray<2048>>::copyBitArray(v8, &v4->client->entityLoDs);
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &spawn_angles);
  G_ActiveMP_ClientSpawn(v4, &vectorValue, &spawn_angles);
  bitarray_base<bitarray<2048>>::copyBitArray(&v4->client->entityLoDs, v8);
}

/*
==============
PlayerCmd_ClonePlayer
==============
*/
void PlayerCmd_ClonePlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  EntityClass entclass; 
  const char *v6; 
  const dvar_t *v7; 
  __int16 number; 
  __int64 v10; 
  unsigned int v12; 
  LerpEntityState *p_lerp; 
  const DObj *ServerDObjForEntnum; 
  GameScriptData *v19; 
  int EntCorpseIndex; 
  __int64 v21; 
  __int64 v22; 
  __int16 v23; 
  bool IsPlayerPositionQuantized; 
  _DWORD *v25; 
  __int64 v26; 
  const XAnimTree *v30; 
  XAnim_s *Anims; 
  const XAnimTree *v32; 
  XAnimTree *v33; 
  bool v34; 
  GWeaponMap *Instance; 
  DObj *ServerDObjForEnt; 
  playerState_s *EntityPlayerState; 
  const SuitDef *SuitDef; 
  ScriptableDef *scriptableDef; 
  const ScriptableDef *nextScriptableDef; 
  unsigned int runtimeInstanceCount; 
  int hitId; 
  gentity_s *v52; 
  __int64 attachIgnoreCollision; 
  __int64 v57; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> v58[2]; 
  int Int; 
  vec3_t ci; 
  tmat43_t<vec3_t> v61; 
  tmat43_t<vec3_t> result; 
  trace_t trace; 
  tmat43_t<vec3_t> out; 

  entnum = entref.entnum;
  entclass = entref.entclass;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "PlayerCmd_ClonePlayer");
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    _R15 = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1199, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    _R15 = &g_entities[entnum];
    if ( !_R15->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  v7 = DVARBOOL_entityLeakDisableItemsCorpses;
  if ( !DVARBOOL_entityLeakDisableItemsCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "entityLeakDisableItemsCorpses") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    GScr_AddEntityAllowUndefined(NULL);
    return;
  }
  Int = Scr_GetInt(scrContext, 0);
  number = 2046;
  if ( Scr_GetNumParam(scrContext) >= 2 && Scr_GetType(scrContext, 1u) == VAR_POINTER && Scr_GetPointerType(scrContext, 1u) == VAR_ENTITY )
    number = GScr_GetEntity(1u)->s.number;
  _R14 = _R15->client;
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1220, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( _R14->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1221, ASSERT_TYPE_ASSERT, "(client->sess.connected != CON_DISCONNECTED)", (const char *)&queryFormat, "client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v10 = *(_QWORD *)&GStatic::ms_gameStatics;
  _RDI = G_UtilsMP_SpawnPlayerClone();
  _RDI->s.clientNum = _R14->ps.clientNum;
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&_R14->ps.otherFlags, FOG_SCALE|0x20) && _R14->ps.groundEntityNum == 2047 && G_PlayerCorpseMP_RequiresFixedDeathCamera(_R15) )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(&_R14->ps.otherFlags, FOG_SCALE|0x20);
  v12 = _R14->ps.eFlags.m_flags[0];
  p_lerp = &_RDI->s.lerp;
  if ( _RDI == (gentity_s *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 280, ASSERT_TYPE_ASSERT, "(sourceFlags)", (const char *)&queryFormat, "sourceFlags") )
    __debugbreak();
  v58[0].m_flags[0] = ((unsigned __int8)v12 ^ (unsigned __int8)p_lerp->eFlags.m_flags[0]) & 4 ^ v12;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(v58, ACTIVE, 0x1Bu);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(v58, ACTIVE, 0x11u);
  p_lerp->eFlags = v58[0];
  _RDI->s.attackerEntityNum = number;
  BGMovingPlatforms::SetEntityOnMovingPlatform(&_R14->ps, &_RDI->s);
  G_SetOriginAndAnglesForClone(&_R14->ps, &_R14->ps.origin, &_R15->r.currentAngles, _RDI);
  _RDI->s.lerp.pos.trType = TR_GRAVITY;
  _RDI->s.lerp.pos.trTime = level.time;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+3Ch]
    vmovss  dword ptr [rdi+28h], xmm0
  }
  _RDI->s.lerp.pos.trDelta.v[1] = _R14->ps.velocity.v[1];
  _RDI->s.lerp.pos.trDelta.v[2] = _R14->ps.velocity.v[2];
  __asm { vmovss  [rsp+1A0h+var_150.m_flags], xmm0 }
  if ( (v58[0].m_flags[0] & 0x7F800000) == 2139095040 )
    goto LABEL_108;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+2Ch]
    vmovss  [rsp+1A0h+var_150.m_flags], xmm0
  }
  if ( (v58[0].m_flags[0] & 0x7F800000) == 2139095040 )
    goto LABEL_108;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  [rsp+1A0h+var_150.m_flags], xmm0
  }
  if ( (v58[0].m_flags[0] & 0x7F800000) == 2139095040 )
  {
LABEL_108:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1259, ASSERT_TYPE_SANITY, "( !IS_NAN( ( body->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( body->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( body->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( body->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( body->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( body->s.lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [r15+34h]
    vmovups ymmword ptr [rdi+34h], ymm0
  }
  _RDI->s.lerp.apos.trDelta.v[2] = _R15->s.lerp.apos.trDelta.v[2];
  _RDI->s.eType = ET_PLAYER_CORPSE;
  _RDI->s.eventParm2 = LOBYTE(_RDI->useCount);
  _RDI->physicsObject = 1;
  ServerDObjForEntnum = Com_GetServerDObjForEntnum(_R14->ps.clientNum);
  *(_QWORD *)v58[0].m_flags = DObjGetTree(ServerDObjForEntnum);
  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_data_mp.h", 82, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v19 = GameScriptData::ms_gScriptData;
  _RDI->c.item[0].clipAmmoCount[0] = level.time;
  _RDI->c.item[0].ammoCount = 2047;
  EntCorpseIndex = G_PlayerCorpseMP_GetEntCorpseIndex(_RDI);
  v21 = EntCorpseIndex;
  if ( (unsigned int)EntCorpseIndex >= 8 )
  {
    LODWORD(v57) = 8;
    LODWORD(attachIgnoreCollision) = EntCorpseIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1280, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( gScrData->playerCorpseInfo ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( gScrData->playerCorpseInfo )\n\t%i not in [0, %i)", attachIgnoreCollision, v57) )
      __debugbreak();
  }
  v22 = 14848 * v21;
  v23 = *((_WORD *)&v19[220].riotshield_damaged + 7424 * v21);
  if ( v23 != -1 )
  {
    LODWORD(v57) = -1;
    LODWORD(attachIgnoreCollision) = v23;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1282, ASSERT_TYPE_ASSERT, "( corpseInfo->entnum ) == ( G_PLAYER_CORPSE_INVALID_ENTNUM )", "corpseInfo->entnum == G_PLAYER_CORPSE_INVALID_ENTNUM\n\t%i, %i", attachIgnoreCollision, v57) )
      __debugbreak();
  }
  *(_WORD *)((char *)&v19[220].riotshield_damaged + v22) = _RDI->s.number;
  *(int *)((char *)&v19[2].ai_asm_getgenerichandler + v22) = level.time;
  *(_WORD *)((char *)&v19[220].riotshield_damaged + v22 + 2) = 1;
  IsPlayerPositionQuantized = BG_IsPlayerPositionQuantized(&_R14->ps);
  *(int *)((char *)&v19[220].scriptable_notify_callback + v22) = 0;
  *((_BYTE *)&v19[220].projectile_speed + v22) = 0;
  *((_BYTE *)&v19[220].scriptable_touched + v22 + 1) = !IsPlayerPositionQuantized;
  v25 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 224i64))(v10, (unsigned int)_R14->ps.clientNum);
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1292, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  *(_QWORD *)ci.v = (char *)v19 + v22 + 200;
  memcpy_0(*(void **)ci.v, v25, 0x39C8ui64);
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1163, ASSERT_TYPE_ASSERT, "( playerCI )", (const char *)&queryFormat, "playerCI") )
    __debugbreak();
  v26 = (__int64)&v19[2].lui_callback + v22;
  if ( (GameScriptData *)((char *)v19 + v22) == (GameScriptData *)-200i64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1164, ASSERT_TYPE_ASSERT, "( outCorpseCi )", (const char *)&queryFormat, "outCorpseCi") )
      __debugbreak();
    v26 = (__int64)&v19[2].lui_callback + v22;
  }
  *(_BYTE *)(v26 + 14681) = 0;
  _RDX = (const ClientCustomizationInfo *)((char *)&v19[220].ai_asm_getfunction + v22);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14+5718h]
    vmovups xmmword ptr [rdx], xmm0
    vmovsd  xmm1, qword ptr [r14+5728h]
    vmovsd  qword ptr [rdx+10h], xmm1
  }
  G_CharacterStreaming_SetCorpseCustomization(v21, _RDX);
  if ( v25[642] || !PlayerASM_IsEnabled() )
  {
    v32 = *(const XAnimTree **)v58[0].m_flags;
  }
  else
  {
    v30 = *(const XAnimTree **)((char *)&v19[2].ai_asm_getfunction + v22);
    if ( v30 )
    {
      Anims = XAnimGetAnims(v30);
      v32 = *(const XAnimTree **)v58[0].m_flags;
      if ( Anims == **(XAnim_s ***)v58[0].m_flags )
        goto LABEL_75;
      v33 = *(XAnimTree **)((char *)&v19[2].ai_asm_getfunction + v22);
      if ( v33 )
        XAnimFreeTree(v33, NULL);
    }
    else
    {
      v32 = *(const XAnimTree **)v58[0].m_flags;
    }
    *(_QWORD *)((char *)&v19[2].ai_asm_getfunction + v22) = XAnimCreateTree(v32->anims, G_Main_HunkAllocXAnimServer, MOVEMENT);
  }
LABEL_75:
  *(_QWORD *)((char *)&v19[32].lui_callback + v22) = *(_QWORD *)((char *)&v19[2].ai_asm_getfunction + v22);
  if ( ((int)v21 < 0 || (unsigned int)v21 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v21, "signed", v21) )
    __debugbreak();
  _R14->ps.corpseIndex = v21;
  XAnimCloneAnimTree(v32, *(XAnimTree **)((char *)&v19[2].ai_asm_getfunction + v22));
  v34 = _RDI->r.svFlags == 0;
  _RDI->s.groundEntityNum = 2047;
  _RDI->s.surfType = _R15->s.surfType;
  if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1322, ASSERT_TYPE_ASSERT, "(!body->r.svFlags)", (const char *)&queryFormat, "!body->r.svFlags") )
    __debugbreak();
  _RDI->r.svFlags = 2;
  __asm
  {
    vmovups xmm0, xmmword ptr [r15+100h]
    vmovups xmmword ptr [rdi+100h], xmm0
    vmovsd  xmm1, qword ptr [r15+110h]
    vmovsd  qword ptr [rdi+110h], xmm1
    vmovups xmm0, xmmword ptr [r15+118h]
    vmovups xmmword ptr [rdi+118h], xmm0
    vmovsd  xmm1, qword ptr [r15+128h]
    vmovsd  qword ptr [rdi+128h], xmm1
  }
  BG_AnimationMP_PlayerToEntityAnimation(&_R14->ps, &_RDI->s);
  _RDI->s.un.vehicleXModel = _R14->ps.suitIndex;
  _RDI->clipmask = 65537;
  SV_LinkEntity(_RDI);
  _RDI->nextthink = level.time + Int;
  _RDI->handler = 17;
  Instance = GWeaponMap::GetInstance();
  ServerDObjForEnt = Com_GetServerDObjForEnt(_RDI);
  BG_AnimationMP_UpdatePlayerDObj(LOCAL_CLIENT_INVALID, ServerDObjForEnt, Instance, &_RDI->s, *(characterInfo_t **)ci.v, 0);
  G_TransferLinkedEntities(_R15, _RDI);
  G_PlayerCorpseMP_TransferNonWeaponPartBits(_RDI, _R15);
  EntityPlayerState = G_GetEntityPlayerState(_R15);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1352, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(EntityPlayerState->suitIndex);
  if ( SuitDef )
  {
    scriptableDef = SuitDef->scriptableDef;
    if ( scriptableDef )
    {
      nextScriptableDef = scriptableDef->nextScriptableDef;
      if ( nextScriptableDef )
        goto LABEL_91;
    }
  }
  else
  {
    scriptableDef = NULL;
  }
  nextScriptableDef = scriptableDef;
LABEL_91:
  if ( nextScriptableDef )
  {
    ScriptableSv_LinkReservedScriptableEntity(_RDI, nextScriptableDef, 0xFFFFFFFF);
  }
  else
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    if ( ScriptableSv_GetScriptableIndexForEntity(_RDI) < runtimeInstanceCount )
      ScriptableSv_UnlinkReservedScriptableEntity(_RDI);
  }
  if ( BG_IsPlayerInExecution(EntityPlayerState) && EntityPlayerState->activeExecutionIsVictim && !G_Execution_InitializeCorpse(_R15, _RDI) )
    G_Execution_Cancel(_R15);
  GScr_AddEntityAllowUndefined(_RDI);
  if ( BGMovingPlatforms::IsOnMovingPlatform(&_R14->ps) )
  {
    __asm { vmovss  xmm2, cs:__real@41c80000; traceLength }
    if ( G_ClientScrMP_CorpseToMovingPlatformTrace(_RDI, &trace, *(float *)&_XMM2, &ci) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0A0h+trace.normal+8]
        vcomiss xmm0, cs:__real@3f333333
        vmovss  xmm0, dword ptr [rsp+1A0h+ci]
        vmovss  xmm1, dword ptr [rsp+1A0h+ci+4]
      }
      hitId = trace.hitId;
      __asm
      {
        vmovss  dword ptr [rdi+130h], xmm0
        vmovss  xmm0, [rsp+1A0h+var_138]
        vmovss  dword ptr [rdi+138h], xmm0
        vmovss  dword ptr [rdi+134h], xmm1
      }
      _RDI->flags.m_flags[0] |= 0x200u;
      if ( !BGMovingPlatforms::IsMovingPlatform(hitId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1126, ASSERT_TYPE_ASSERT, "(BGMovingPlatforms::IsMovingPlatform( trace->hitId ))", (const char *)&queryFormat, "BGMovingPlatforms::IsMovingPlatform( trace->hitId )") )
        __debugbreak();
      v52 = &g_entities[trace.hitId];
      G_EntLinkTo(_RDI, v52, (scr_string_t)0, 0, NULL);
      AnglesAndOriginToMatrix43(&v52->r.currentAngles, &v52->r.currentOrigin, &result);
      MatrixInverseOrthogonal43(&result, &out);
      AnglesAndOriginToMatrix43(&_RDI->r.currentAngles, &_RDI->r.currentOrigin, &result);
      MatrixMultiply43(&result, &out, &v61);
      AxisToAngles((const tmat33_t<vec3_t> *)&v61, &_RDI->s.lerp.apos.trDelta);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0A0h+var_130+24h]
        vmovss  xmm1, dword ptr [rbp+0A0h+var_130+28h]
        vmovss  dword ptr [rdi+28h], xmm0
        vmovss  xmm0, dword ptr [rbp+0A0h+var_130+2Ch]
        vmovss  dword ptr [rdi+30h], xmm0
        vmovss  dword ptr [rdi+2Ch], xmm1
      }
    }
  }
  G_PlayerCorpseMP_SnapOrigin(_RDI);
  Sys_ProfEndNamedEvent();
}

/*
==============
PlayerCmd_LockDeathCamera
==============
*/
void PlayerCmd_LockDeathCamera(scrContext_t *scrContext, scr_entref_t entref)
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
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1399, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->client )
      goto LABEL_10;
    v5 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v5);
  }
  if ( !v4->client )
  {
    Scr_Error(COM_ERR_1366, scrContext, "LockDeathCamera is only valid for clients.");
    return;
  }
LABEL_10:
  Int = Scr_GetInt(scrContext, 0);
  p_otherFlags = &v4->client->ps.otherFlags;
  if ( Int )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, GameModeFlagValues::ms_mpValue, 0x32u);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, GameModeFlagValues::ms_mpValue, 0x32u);
}

/*
==============
PlayerCmd_AllowSpectateTeam
==============
*/
void PlayerCmd_AllowSpectateTeam(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  scr_string_t ConstString; 
  unsigned int v8; 
  const scr_string_t **v9; 
  unsigned int v10; 
  const scr_string_t **v11; 
  const char *v12; 
  const char *v13; 
  int Int; 
  bitarray_base<bitarray<224> > *p_noSpectate; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1436, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v8 = 1;
    v9 = &S_TEAMS_SP_SCR_STRINGS_12[1];
    do
    {
      if ( ConstString == **v9 )
      {
        v2 = v8;
        goto LABEL_28;
      }
      ++v8;
      ++v9;
    }
    while ( v8 < 5 );
    if ( ConstString != scr_const.only_sky )
      goto LABEL_26;
  }
  else if ( ConstString == scr_const.freelook )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    v2 = 203;
  }
  else
  {
    v10 = 0;
    v11 = S_TEAMS_MP_SCR_STRINGS_12;
    do
    {
      if ( ConstString == **v11 )
      {
        v2 = v10;
        goto LABEL_28;
      }
      ++v10;
      ++v11;
    }
    while ( v10 < 0xCB );
    if ( ConstString != scr_const.none && ConstString != scr_const.neutral && ConstString != scr_const.only_sky )
    {
LABEL_26:
      v12 = SL_ConvertToString(ConstString);
      v13 = j_va("unknown team '%s'", v12);
      Scr_Error(COM_ERR_1367, scrContext, v13);
      return;
    }
  }
LABEL_28:
  Int = Scr_GetInt(scrContext, 1u);
  p_noSpectate = &v5->client->sess.noSpectate;
  if ( Int )
    bitarray_base<bitarray<224>>::resetBit(p_noSpectate, v2);
  else
    bitarray_base<bitarray<224>>::setBit(p_noSpectate, v2);
}

/*
==============
PlayerCmd_AllowSpectateAllTeams
==============
*/
void PlayerCmd_AllowSpectateAllTeams(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  int Int; 
  gclient_s *client; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1473, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  Int = Scr_GetInt(scrContext, 0);
  client = v5->client;
  if ( Int )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
  }
  else
  {
    v9 = -1;
    v2 = -1;
    v10 = -1;
    v11 = -1;
    v12 = -1;
    v13 = -1;
    v14 = -1;
  }
  client->sess.noSpectate.array[0] = v14;
  client->sess.noSpectate.array[1] = v13;
  client->sess.noSpectate.array[2] = v12;
  client->sess.noSpectate.array[3] = v11;
  client->sess.noSpectate.array[4] = v10;
  client->sess.noSpectate.array[5] = v9;
  client->sess.noSpectate.array[6] = v2;
}

/*
==============
PlayerCmd_IsMLGSpectator
==============
*/
void PlayerCmd_IsMLGSpectator(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1501, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Scr_AddBool(scrContext, v4->client->sess.cs.isMLGSpectator);
}

/*
==============
PlayerCmd_SetMLGSpectator
==============
*/
void PlayerCmd_SetMLGSpectator(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int Int; 
  const char *v7; 
  char buffer[1024]; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1522, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  v4->client->sess.cs.isMLGSpectator = Scr_GetInt(scrContext, 0) != 0;
  SV_ClientMP_GetUserinfo(v4->client->sess.cs.clientIndex, buffer, 1024);
  Int = Scr_GetInt(scrContext, 0);
  v7 = "0";
  if ( Int == 1 )
    v7 = "1";
  Info_SetValueForKey(buffer, "mlg_spectator", v7);
  SV_ClientMP_SetUserinfo(v4->client->sess.cs.clientIndex, buffer);
}

/*
==============
PlayerCmd_IsMLGFollower
==============
*/
void PlayerCmd_IsMLGFollower(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1546, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Scr_AddBool(scrContext, v4->client->sess.cs.isMLGFollower);
}

/*
==============
PlayerCmd_IsMLGFreecamEnabled
==============
*/
void PlayerCmd_IsMLGFreecamEnabled(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1567, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  LOBYTE(v2) = v5->client->mlgSpectatorClientInfo.cameraTypeMLGSpectator == 1;
  Scr_AddBool(scrContext, v2);
}

/*
==============
PlayerCmd_IsMLGAerialcamEnabled
==============
*/
void PlayerCmd_IsMLGAerialcamEnabled(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1588, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  LOBYTE(v2) = v5->client->mlgSpectatorClientInfo.cameraTypeMLGSpectator == 2;
  Scr_AddBool(scrContext, v2);
}

/*
==============
PlayerCmd_SetMLGSpectatorFromLobbyData
==============
*/
void PlayerCmd_SetMLGSpectatorFromLobbyData(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  PartyData *PartyData; 
  gentity_s *v5; 
  const char *v6; 
  EntityClass entclass; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  entclass = entref.entclass;
  entnum = entref.entnum;
  PartyData = Lobby_GetPartyData();
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1616, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  v5->client->sess.cs.isMLGSpectator = Party_GetLocalMLGSpectator(PartyData, controllerIndex) != 0;
}

/*
==============
PlayerCmd_GetMLGSpectatorTeam
==============
*/
void PlayerCmd_GetMLGSpectatorTeam(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 
  __int64 mlgSpectatingTeam; 
  const scr_string_t **v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1636, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1368, scrContext, "USAGE: self GetMLGSpectatorTeam()\n");
  client = v4->client;
  if ( !client->sess.cs.isMLGSpectator )
  {
    Scr_Error(COM_ERR_1369, scrContext, "Player is not an MLG spectator\n");
    client = v4->client;
  }
  mlgSpectatingTeam = client->sess.mlgSpectatingTeam;
  if ( (unsigned int)mlgSpectatingTeam > 0xCB )
    Scr_Error(COM_ERR_1370, scrContext, "Invalid team number\n");
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    if ( (int)mlgSpectatingTeam < 0 || (unsigned int)mlgSpectatingTeam >= 6 )
    {
      LODWORD(v11) = mlgSpectatingTeam;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 274, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_SP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v11) )
        __debugbreak();
    }
    v8 = &S_TEAMS_SP_SCR_STRINGS_12[mlgSpectatingTeam];
    if ( !*v8 )
    {
      v9 = "( ( S_TEAMS_SP_SCR_STRINGS[team] ) )";
      v10 = 275;
      goto LABEL_27;
    }
  }
  else
  {
    if ( (int)mlgSpectatingTeam < 0 || (unsigned int)mlgSpectatingTeam >= 0xCB )
    {
      LODWORD(v11) = mlgSpectatingTeam;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 283, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_MP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v11) )
        __debugbreak();
    }
    v8 = &S_TEAMS_MP_SCR_STRINGS_12[mlgSpectatingTeam];
    if ( !*v8 )
    {
      v9 = "( ( S_TEAMS_MP_SCR_STRINGS[team] ) )";
      v10 = 284;
LABEL_27:
      LODWORD(v11) = mlgSpectatingTeam;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", v10, ASSERT_TYPE_ASSERT, v9, "( team ) = %i", v11) )
        __debugbreak();
    }
  }
  Scr_AddConstString(scrContext, **v8);
}

/*
==============
PlayerCmd_GetGuid
==============
*/
void PlayerCmd_GetGuid(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  ComErrorCode v6; 
  const char *Guid; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v5 = "not an entity";
    v6 = COM_ERR_3678;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1668, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  if ( !v4->client && !v4->agent )
  {
    v5 = j_va("entity %i is not a player or agent", entnum);
    v6 = COM_ERR_3677;
LABEL_9:
    Scr_ObjectError(v6, scrContext, v5);
  }
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1371, scrContext, "USAGE: self getGuid()\n");
  Guid = SV_GameMP_GetGuid(entnum);
  Scr_AddString(scrContext, Guid);
}

/*
==============
PlayerCmd_GetXuidHigh
==============
*/
void PlayerCmd_GetXuidHigh(scrContext_t *scrContext, scr_entref_t entref)
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
  unsigned __int64 v13; 
  XUID v14; 
  XUID result; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1711, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1372, scrContext, "USAGE: self getXuidHigh()\n");
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1373, scrContext, "This function can't be used for the front-end server");
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
  v13 = XUID::ToUint64(&v14);
  Scr_AddInt(scrContext, SHIDWORD(v13));
}

/*
==============
PlayerCmd_GetXuidLow
==============
*/
void PlayerCmd_GetXuidLow(scrContext_t *scrContext, scr_entref_t entref)
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
  int v13; 
  XUID v14; 
  XUID result; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1727, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1374, scrContext, "USAGE: self getXuidLow()\n");
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1375, scrContext, "This function can't be used for the front-end server");
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
  v13 = XUID::ToUint64(&v14);
  Scr_AddInt(scrContext, v13);
}

/*
==============
PlayerCmd_GetJoinType
==============
*/
void PlayerCmd_GetJoinType(scrContext_t *scrContext, scr_entref_t entref)
{
  int joinType; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  PartyData *PartyData; 
  __int64 clientNum; 
  __int64 v9; 

  joinType = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1762, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1378, scrContext, "USAGE: self getJoinType()\n");
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1379, scrContext, "GetJoinType cannot be called for the front end server");
  if ( v5->client )
  {
    PartyData = Lobby_GetPartyData();
    clientNum = v5->client->ps.clientNum;
    if ( (unsigned int)clientNum >= 0xC8 )
    {
      LODWORD(v9) = v5->client->ps.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1780, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v9, 200) )
        __debugbreak();
    }
    joinType = PartyData->partyMembers[clientNum].joinType;
  }
  Scr_AddInt(scrContext, joinType);
}

/*
==============
PlayerCmd_GetUcdIdHigh
==============
*/
void PlayerCmd_GetUcdIdHigh(scrContext_t *scrContext, scr_entref_t entref)
{
  Scr_AddInt(scrContext, 0);
}

/*
==============
PlayerCmd_GetUcdIdLow
==============
*/
void PlayerCmd_GetUcdIdLow(scrContext_t *scrContext, scr_entref_t entref)
{
  Scr_AddInt(scrContext, 0);
}

/*
==============
PlayerCmd_GetClanTag
==============
*/
void PlayerCmd_GetClanTag(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1800, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Scr_AddString(scrContext, v4->client->sess.cs.clanAbbrev);
}

/*
==============
PlayerCmd_GetSkill
==============
*/
void PlayerCmd_GetSkill(scrContext_t *scrContext, scr_entref_t entref)
{
  int ClientSkill; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  const PartyData *PartyData; 

  ClientSkill = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1811, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1380, scrContext, "USAGE: self getSkill()\n");
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1381, scrContext, "GetSkill cannot be called for the front end server");
  if ( v5->client )
  {
    PartyData = Lobby_GetPartyData();
    ClientSkill = Party_GetClientSkill(PartyData, v5->client->ps.clientNum);
  }
  Scr_AddInt(scrContext, ClientSkill);
}

/*
==============
PlayerCmd_IsHost
==============
*/
void PlayerCmd_IsHost(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  const PartyData *ServerLobby; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1846, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1382, scrContext, "USAGE: self IsHost()\n");
  if ( SV_IsDemoPlaying() )
  {
    LOBYTE(v2) = v5->client->sess.cs.clientIndex == SV_DemoMP_HostNum();
  }
  else
  {
    ServerLobby = SV_MainMP_GetServerLobby();
    if ( SvPersistentGlobalsMP::IsFrontEndServer() || Party_IsHost(ServerLobby, v5->client->sess.cs.clientIndex) )
      v2 = 1;
  }
  Scr_AddInt(scrContext, v2);
}

/*
==============
PlayerCmd_GetSpectatingPlayer
==============
*/
void PlayerCmd_GetSpectatingPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 
  int spectatorClient; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1893, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1383, scrContext, "USAGE: self GetSpectatingPlayer()\n");
  client = v4->client;
  if ( client->sess.sessionState == SESS_STATE_SPECTATOR && (spectatorClient = client->spectatorClient, spectatorClient >= 0) )
    Scr_AddEntityNum(scrContext, spectatorClient, ENTITY_CLASS_GENTITY);
  else
    Scr_AddUndefined(scrContext);
}

/*
==============
PlayerCmd_GetMLGSelectedCamera
==============
*/
void PlayerCmd_GetMLGSelectedCamera(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int mlgCameraSelectedIconIndex; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1917, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1384, scrContext, "USAGE: self GetMLGSelectedCamera()\n");
  mlgCameraSelectedIconIndex = v4->client->sess.mlgCameraSelectedIconIndex;
  if ( mlgCameraSelectedIconIndex >= 0 )
    Scr_AddInt(scrContext, mlgCameraSelectedIconIndex);
  else
    Scr_AddUndefined(scrContext);
}

/*
==============
PlayerCmd_PredictStreamPos
==============
*/
void PlayerCmd_PredictStreamPos(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  int number; 
  const char *v8; 
  int keepAlive; 
  BgWorldStreamingViewMode v10; 
  unsigned int Int; 
  BgWorldStreamingViewType v12; 
  int outControllingClientNum; 
  vec3_t vectorValue; 

  Entity = NULL;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1952, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client && !v5->agent )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v6);
    }
  }
  number = v5->s.number;
  outControllingClientNum = number;
  if ( !SV_IsAgent(number) || SV_GetAgentControlledByPlayerNum(outControllingClientNum, &outControllingClientNum) )
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    keepAlive = Scr_GetNumParam(scrContext) > 1 && Scr_GetInt(scrContext, 1u) != 0;
    v10 = LINEAR;
    if ( Scr_GetNumParam(scrContext) <= 2 || (Int = Scr_GetInt(scrContext, 2u), v10 = (char)Int, Int <= 2) )
    {
      if ( Scr_GetNumParam(scrContext) > 3 )
      {
        Entity = GScr_GetEntity(3u);
        if ( !Entity->client )
          Scr_ObjectError(COM_ERR_6448, scrContext, "SetAdditionalStreamPos has invalid player entity argument");
      }
      LOBYTE(v12) = 1;
      G_WorldStreaming_SetNextStreamPosition(outControllingClientNum, v12, v10, &vectorValue, Entity, keepAlive);
    }
    else
    {
      Scr_ObjectError(COM_ERR_6551, scrContext, "PredictStreamPos has invalid viewMode argument");
    }
  }
  else
  {
    v8 = j_va("entity %i is not a player or player-controlled agent", entnum);
    Scr_ObjectError(COM_ERR_1385, scrContext, v8);
  }
}

/*
==============
PlayerCmd_ClearPredictedStreamPos
==============
*/
void PlayerCmd_ClearPredictedStreamPos(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int number; 
  BgWorldStreamingViewType v7; 
  const char *v8; 
  int outControllingClientNum; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2016, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  number = v4->s.number;
  outControllingClientNum = number;
  if ( !SV_IsAgent(number) || SV_GetAgentControlledByPlayerNum(outControllingClientNum, &outControllingClientNum) )
  {
    LOBYTE(v7) = 1;
    G_WorldStreaming_ClearNextStreamView(outControllingClientNum, v7);
  }
  else
  {
    v8 = j_va("entity %i is not a player or player-controlled agent", entnum);
    Scr_ObjectError(COM_ERR_5793, scrContext, v8);
  }
}

/*
==============
PlayerCmd_IsPredictedStreamPosReady
==============
*/
void PlayerCmd_IsPredictedStreamPosReady(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int number; 
  BgWorldStreamingViewType v7; 
  const char *v8; 
  int HasNextStreamPositionLoadedForClient; 
  int outControllingClientNum; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2041, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  number = v4->s.number;
  outControllingClientNum = number;
  if ( !SV_IsAgent(number) || SV_GetAgentControlledByPlayerNum(outControllingClientNum, &outControllingClientNum) )
  {
    LOBYTE(v7) = 1;
    HasNextStreamPositionLoadedForClient = G_WorldStreaming_HasNextStreamPositionLoadedForClient(outControllingClientNum, v7);
    Scr_AddBool(scrContext, HasNextStreamPositionLoadedForClient);
  }
  else
  {
    v8 = j_va("entity %i is not a player or player-controlled agent", entnum);
    Scr_ObjectError(COM_ERR_5794, scrContext, v8);
  }
}

/*
==============
PlayerCmd_SetAdditionalStreamPos
==============
*/
void PlayerCmd_SetAdditionalStreamPos(scrContext_t *scrContext, const scr_entref_t entref)
{
  gentity_s *Entity; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  int number; 
  const char *v8; 
  int keepAlive; 
  BgWorldStreamingViewMode v10; 
  unsigned int Int; 
  BgWorldStreamingViewType v12; 
  int outControllingClientNum; 
  vec3_t vectorValue; 

  Entity = NULL;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2082, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client && !v5->agent )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v6);
    }
  }
  number = v5->s.number;
  outControllingClientNum = number;
  if ( !SV_IsAgent(number) || SV_GetAgentControlledByPlayerNum(outControllingClientNum, &outControllingClientNum) )
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    keepAlive = Scr_GetNumParam(scrContext) > 1 && Scr_GetInt(scrContext, 1u) != 0;
    v10 = LINEAR;
    if ( Scr_GetNumParam(scrContext) <= 2 || (Int = Scr_GetInt(scrContext, 2u), v10 = (char)Int, Int <= 2) )
    {
      if ( Scr_GetNumParam(scrContext) > 3 )
      {
        Entity = GScr_GetEntity(3u);
        if ( !Entity->client )
          Scr_ObjectError(COM_ERR_6450, scrContext, "SetAdditionalStreamPos has invalid player entity argument");
      }
      LOBYTE(v12) = 2;
      G_WorldStreaming_SetNextStreamPosition(outControllingClientNum, v12, v10, &vectorValue, Entity, keepAlive);
    }
    else
    {
      Scr_ObjectError(COM_ERR_6449, scrContext, "SetAdditionalStreamPos has invalid viewMode argument");
    }
  }
  else
  {
    v8 = j_va("entity %i is not a player or player-controlled agent", entnum);
    Scr_ObjectError(COM_ERR_6084, scrContext, v8);
  }
}

/*
==============
PlayerCmd_ClearAdditionalStreamPos
==============
*/
void PlayerCmd_ClearAdditionalStreamPos(scrContext_t *scrContext, const scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int number; 
  BgWorldStreamingViewType v7; 
  const char *v8; 
  int outControllingClientNum; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2147, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  number = v4->s.number;
  outControllingClientNum = number;
  if ( !SV_IsAgent(number) || SV_GetAgentControlledByPlayerNum(outControllingClientNum, &outControllingClientNum) )
  {
    LOBYTE(v7) = 2;
    G_WorldStreaming_ClearNextStreamView(outControllingClientNum, v7);
  }
  else
  {
    v8 = j_va("entity %i is not a player or player-controlled agent", entnum);
    Scr_ObjectError(COM_ERR_6085, scrContext, v8);
  }
}

/*
==============
PlayerCmd_IsAdditionalStreamPosReady
==============
*/
void PlayerCmd_IsAdditionalStreamPosReady(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int number; 
  BgWorldStreamingViewType v7; 
  const char *v8; 
  int HasNextStreamPositionLoadedForClient; 
  int outControllingClientNum; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2172, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  number = v4->s.number;
  outControllingClientNum = number;
  if ( !SV_IsAgent(number) || SV_GetAgentControlledByPlayerNum(outControllingClientNum, &outControllingClientNum) )
  {
    LOBYTE(v7) = 2;
    HasNextStreamPositionLoadedForClient = G_WorldStreaming_HasNextStreamPositionLoadedForClient(outControllingClientNum, v7);
    Scr_AddBool(scrContext, HasNextStreamPositionLoadedForClient);
  }
  else
  {
    v8 = j_va("entity %i is not a player or player-controlled agent", entnum);
    Scr_ObjectError(COM_ERR_5795, scrContext, v8);
  }
}

/*
==============
PlayerCmd_SetMainStreamLoadDist
==============
*/
void PlayerCmd_SetMainStreamLoadDist(scrContext_t *scrContext, const scr_entref_t entref)
{
  PlayerCmd_SetStreamLoadDist_Internal(scrContext, entref, MOVEMENT, "SetMainStreamLoadDist");
}

/*
==============
PlayerCmd_SetAdditionalStreamLoadDist
==============
*/
void PlayerCmd_SetAdditionalStreamLoadDist(scrContext_t *scrContext, const scr_entref_t entref, BgWorldStreamingViewType a3)
{
  LOBYTE(a3) = 2;
  PlayerCmd_SetStreamLoadDist_Internal(scrContext, entref, a3, "SetAdditionalStreamLoadDist");
}

/*
==============
PlayerCmd_SetPredictedStreamLoadDist
==============
*/
void PlayerCmd_SetPredictedStreamLoadDist(scrContext_t *scrContext, const scr_entref_t entref, BgWorldStreamingViewType a3)
{
  LOBYTE(a3) = 1;
  PlayerCmd_SetStreamLoadDist_Internal(scrContext, entref, a3, "SetPredictedStreamLoadDist");
}

/*
==============
PlayerCmd_SetAllStreamLoadDist
==============
*/
void PlayerCmd_SetAllStreamLoadDist(scrContext_t *scrContext, const scr_entref_t entref, BgWorldStreamingViewType a3)
{
  LOBYTE(a3) = 3;
  PlayerCmd_SetStreamLoadDist_Internal(scrContext, entref, a3, "SetAllStreamLoadDist");
}

/*
==============
PlayerCmd_SetRank
==============
*/
void PlayerCmd_SetRank(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  unsigned int Int; 
  unsigned int v7; 
  const char *v8; 
  ComErrorCode v9; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2298, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Int = Scr_GetInt(scrContext, 0);
  if ( Int > 0x3FF )
  {
    v8 = j_va("'%i' is an illegal rank value.  Must be less than %i.\n", Int, 1024i64);
    v9 = COM_ERR_1390;
  }
  else
  {
    v4->client->sess.cs.rank = truncate_cast<short,int>(Int);
    if ( Scr_GetNumParam(scrContext) < 2 )
      return;
    v7 = Scr_GetInt(scrContext, 1u);
    if ( v7 <= 0xFF )
    {
      v4->client->sess.cs.prestige = truncate_cast<short,int>(v7);
      return;
    }
    v8 = j_va("'%i' is an illegal prestige value.  Must be less than %i.\n", v7, 256i64);
    v9 = COM_ERR_1391;
  }
  Scr_Error(v9, scrContext, v8);
}

/*
==============
PlayerCmd_SetCardDisplaySlot
==============
*/
void PlayerCmd_SetCardDisplaySlot(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  const char *v4; 
  ComErrorCode v5; 
  gentity_s *Entity; 
  gentity_s *v7; 
  int Int; 
  const char *v9; 
  SvClient *CommonClient; 
  char *fmt; 
  char dest[64]; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v4 = "not an entity";
    v5 = COM_ERR_3681;
    goto LABEL_8;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2342, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  if ( !g_entities[entnum].client )
  {
    v4 = j_va("entity %i is not a player", entnum);
    v5 = COM_ERR_3680;
LABEL_8:
    Scr_ObjectError(v5, scrContext, v4);
  }
  Entity = GScr_GetEntity(0);
  v7 = Entity;
  if ( !Entity->agent && !Entity->client )
    Scr_Error(COM_ERR_1392, scrContext, "Player provided is not a client or an agent.");
  Int = Scr_GetInt(scrContext, 1u);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( Int < 0 || Int >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
  {
    v9 = j_va("Invalid slot number %i, must be between 0 and %i.", (unsigned int)Int, ComCharacterLimits::ms_gameData.m_characterCount);
    Scr_Error(COM_ERR_1393, scrContext, v9);
  }
  LODWORD(fmt) = Int;
  Com_sprintf_truncate<64>((char (*)[64])dest, "%c %i %i", 72i64, (unsigned int)v7->s.number, fmt);
  if ( entnum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, dest);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(entnum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, dest);
  }
}

/*
==============
PlayerCmd_KC_RegWeaponForFXRemoval
==============
*/
void PlayerCmd_KC_RegWeaponForFXRemoval(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  const char *v4; 
  ComErrorCode v5; 
  bool outIsAlternate; 
  Weapon outWeapon; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v4 = "not an entity";
    v5 = COM_ERR_3681;
    goto LABEL_8;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2381, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  if ( !g_entities[entnum].client )
  {
    v4 = j_va("entity %i is not a player", entnum);
    v5 = COM_ERR_3680;
LABEL_8:
    Scr_ObjectError(v5, scrContext, v4);
  }
  GScr_Main_GetWeaponParam(scrContext, 0, &outWeapon, &outIsAlternate);
  G_Weapon_RegisterWeaponForKillcamFXRemoval(entnum, &outWeapon);
}

/*
==============
PlayerCmd_LastStandRevive
==============
*/
void PlayerCmd_LastStandRevive(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2401, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  v4->client->lastStand = 0;
  v4->client->lastStandTime = 0;
  v4->client->ps.lastStandTime = 0;
  v4->client->ps.lastStandStartViewHeight = 0.0;
}

/*
==============
PlayerCmd_SetSpectateDefaults
==============
*/
void PlayerCmd_SetSpectateDefaults(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2424, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Scr_GetVector(scrContext, 0, &v4->client->sess.spectateDefaultPos);
  Scr_GetVector(scrContext, 1u, &v4->client->sess.spectateDefaultAngles);
}

/*
==============
PlayerCmd_SetMLGCameraDefaults
==============
*/
void PlayerCmd_SetMLGCameraDefaults(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int Int; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2446, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Int = Scr_GetInt(scrContext, 0);
  v7 = Int;
  if ( (unsigned int)Int >= 8 )
  {
    LODWORD(v10) = Int;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2448, ASSERT_TYPE_ASSERT, "(unsigned)( cameraIndex ) < (unsigned)( ( 4 + 4 ) )", "cameraIndex doesn't index MAX_MLG_CAMERAS\n\t%i not in [0, %i)", v10, 8) )
      __debugbreak();
  }
  if ( (unsigned int)v7 <= 7 )
  {
    v8 = v7;
    v9 = v7;
    Scr_GetVector(scrContext, 1u, &v4->client->sess.mlgCameraPos[v9]);
    Scr_GetVector(scrContext, 2u, &v4->client->sess.mlgCameraAngles[v9]);
    if ( Scr_GetNumParam(scrContext) <= 3 )
      v4->client->sess.mlgCameraIconIndex[v8] = -1;
    else
      v4->client->sess.mlgCameraIconIndex[v8] = Scr_GetInt(scrContext, 3u);
  }
}

/*
==============
PlayerCmd_SetMLGSelectedCameraIcon
==============
*/
void PlayerCmd_SetMLGSelectedCameraIcon(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2482, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  v4->client->sess.mlgCameraSelectedIconIndex = Scr_GetInt(scrContext, 0);
}

/*
==============
PlayerCmd_GetThirdPersonCrosshairOffset
==============
*/
void PlayerCmd_GetThirdPersonCrosshairOffset(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  const dvar_t *v7; 
  const playerState_s *p_ps; 
  GWeaponMap *Instance; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2501, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  v7 = DVARBOOL_camera_thirdPerson;
  if ( !DVARBOOL_camera_thirdPerson && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPerson") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    p_ps = &v5->client->ps;
    Instance = GWeaponMap::GetInstance();
    *(double *)&_XMM0 = BG_GetThirdPersonCrosshairOffset(Instance, p_ps);
    __asm { vmovaps xmm1, xmm0; value }
    Scr_AddFloat(scrContext, *(float *)&_XMM1);
  }
  else
  {
    Scr_Error(COM_ERR_1394, scrContext, "Can not be called if 'camera_thirdPerson' dvar is false");
  }
}

/*
==============
PlayerCmd_getPartyID
==============
*/
void PlayerCmd_getPartyID(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  unsigned int number; 
  bdSecurityID *PrivatePartyId; 
  char *v8; 
  __int64 v9; 
  char str[8]; 
  __int64 v11; 
  int v12; 
  char v13; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
LABEL_13:
    v8 = (char *)&queryFormat.fmt + 3;
    goto LABEL_14;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2524, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  if ( !v4->client )
  {
    v5 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v5);
  }
  number = v4->s.number;
  if ( number >= level.maxclients )
  {
    LODWORD(v9) = v4->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2529, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v9, level.maxclients) )
      __debugbreak();
  }
  PrivatePartyId = (bdSecurityID *)SV_ClientMP_GetPrivatePartyId(number);
  if ( !bdSecurityID::IsValid(PrivatePartyId) )
    goto LABEL_13;
  *(_QWORD *)str = 0i64;
  v11 = 0i64;
  v12 = 0;
  v13 = 0;
  XNKIDToString(PrivatePartyId, str, 21);
  v8 = str;
LABEL_14:
  Scr_AddString(scrContext, v8);
}

/*
==============
PlayerCmd_isGuest
==============
*/
void PlayerCmd_isGuest(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  __int64 clientNum; 
  BG_SynchronizedPlayerInfo *v7; 
  __int64 v8; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2560, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
    clientNum = (unsigned int)v4->s.clientNum;
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 991, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !(_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 992, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( (unsigned int)clientNum >= SvClient::ms_clientCount )
    {
      LODWORD(v8) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 993, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v8, SvClient::ms_clientCount) )
        __debugbreak();
    }
    v7 = SvClientMP::ms_playerInfos[clientNum];
    if ( v7 )
    {
      Scr_AddBool(scrContext, v7->isGuestAccount);
      return;
    }
  }
  Scr_AddBool(scrContext, 0);
}

/*
==============
PlayerCmd_IsSplitscreenPlayer
==============
*/
void PlayerCmd_IsSplitscreenPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  SvClientConnectionState state; 
  SvClientMP *MpClient; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
LABEL_8:
    if ( !v5->client )
      goto LABEL_13;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2611, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v5 = &g_entities[entnum];
  if ( !v5->client )
  {
    v6 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    goto LABEL_8;
  }
LABEL_9:
  if ( !SV_BotIsBotEnt(v5) )
  {
    state = SvClient::GetCommonClient(v5->s.number)->state;
    MpClient = SV_Client_GetMpClient(v5->s.number);
    if ( (unsigned __int8)state >= CS_ACTIVE )
    {
      if ( MpClient->bIsSplitscreenClient )
        v2 = 1;
    }
  }
LABEL_13:
  Scr_AddInt(scrContext, v2);
}

/*
==============
PlayerCmd_IsSplitscreenPlayerPrimary
==============
*/
void PlayerCmd_IsSplitscreenPlayerPrimary(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  unsigned int number; 
  SvClient *CommonClient; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2636, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( v5->client )
      goto LABEL_9;
    v6 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v6);
  }
  if ( !v5->client )
  {
LABEL_14:
    v2 = 1;
    goto LABEL_15;
  }
LABEL_9:
  number = v5->s.number;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(number);
  if ( !HIDWORD(CommonClient[854].gentity) )
    goto LABEL_14;
  LOBYTE(v2) = NetConnection::GetNetId((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) == NS_CLIENT1;
LABEL_15:
  Scr_AddInt(scrContext, v2);
}

/*
==============
PlayerCmd_GetOtherSplitscreenPlayer
==============
*/
void PlayerCmd_GetOtherSplitscreenPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  SvClientConnectionState state; 
  SvClientMP *MpClient; 
  int v8; 
  __int64 v9; 
  int outOtherClient; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2678, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->client )
      goto LABEL_9;
    v5 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v5);
  }
  if ( !v4->client )
  {
LABEL_21:
    Scr_AddUndefined(scrContext);
    return;
  }
LABEL_9:
  if ( SV_BotIsBotEnt(v4) )
    goto LABEL_21;
  state = SvClient::GetCommonClient(v4->s.number)->state;
  MpClient = SV_Client_GetMpClient(v4->s.number);
  if ( (unsigned __int8)state < CS_ACTIVE || !MpClient->bIsSplitscreenClient )
    goto LABEL_21;
  if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2683, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
    __debugbreak();
  if ( !SV_GetOtherActiveSplitscreenClient(v4->s.number, &outOtherClient) )
    goto LABEL_21;
  v8 = outOtherClient;
  if ( (unsigned int)outOtherClient >= 0x800 )
  {
    LODWORD(v9) = outOtherClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2688, ASSERT_TYPE_ASSERT, "(unsigned)( otherClient ) < (unsigned)( ( 2048 ) )", "otherClient doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, 2048) )
      __debugbreak();
    v8 = outOtherClient;
  }
  GScr_AddEntity(&g_entities[v8]);
}

/*
==============
PlayerCmd_MarkForEyesOn
==============
*/
void PlayerCmd_MarkForEyesOn(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  unsigned int clientNum; 
  bool v7; 
  __int64 v8; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2713, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  clientNum = v4->client->ps.clientNum;
  v7 = Scr_GetInt(scrContext, 0) != 0;
  if ( clientNum >= 0xE0 )
  {
    LODWORD(v8) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2718, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.markedForEyesOn.size() )", "clientNum doesn't index level.markedForEyesOn.size()\n\t%i not in [0, %i)", v8, 224) )
      __debugbreak();
  }
  if ( v7 )
    bitarray_base<bitarray<224>>::setBit(&level.markedForEyesOn, clientNum);
  else
    bitarray_base<bitarray<224>>::resetBit(&level.markedForEyesOn, clientNum);
}

/*
==============
PlayerCmd_IsSighted
==============
*/
void PlayerCmd_IsSighted(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  unsigned int clientNum; 
  gclient_s *client; 
  unsigned int index; 
  __int64 v10; 
  BitArrayIterator iter; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2744, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  clientNum = v5->client->ps.clientNum;
  if ( clientNum >= level.maxclients )
  {
    LODWORD(v10) = v5->client->ps.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2749, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v10, level.maxclients) )
      __debugbreak();
  }
  client = v5->client;
  *(_QWORD *)&iter.wordCount = 7i64;
  iter.bitArray = client->sess.sightedByPlayers.array;
  iter.bits = client->sess.sightedByPlayers.array[0];
  while ( BitArrayIterator::Advance(&iter) )
  {
    index = iter.index;
    if ( clientNum != iter.index && G_IsEntityInUse(iter.index) && SvClient::GetCommonClient(index)->state == CS_ACTIVE )
    {
      v2 = 1;
      break;
    }
  }
  Scr_AddBool(scrContext, v2);
}

/*
==============
PlayerCmd_GetPlayersSightingMe
==============
*/
void PlayerCmd_GetPlayersSightingMe(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  unsigned int clientNum; 
  gclient_s *client; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  gentity_s *v13; 
  __int64 v14; 
  __int64 v15; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2793, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  clientNum = v5->client->ps.clientNum;
  if ( clientNum >= level.maxclients )
  {
    LODWORD(v14) = v5->client->ps.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2798, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v14, level.maxclients) )
      __debugbreak();
  }
  Scr_MakeArray(scrContext);
  client = v5->client;
  v9 = client->sess.sightedByPlayers.array[0];
  while ( v9 )
  {
LABEL_15:
    v11 = __lzcnt(v9);
    v12 = v11 + 32 * v2;
    if ( v11 >= 0x20 )
    {
      LODWORD(v15) = 32;
      LODWORD(v14) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( (v9 & (0x80000000 >> v11)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v9 &= ~(0x80000000 >> v11);
    if ( clientNum != v12 )
    {
      if ( v12 >= 0x800 )
      {
        LODWORD(v15) = 2048;
        LODWORD(v14) = v11 + 32 * v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v12] && SvClient::GetCommonClient(v12)->state == CS_ACTIVE )
      {
        v13 = &g_entities[v12];
        if ( v13->client )
        {
          GScr_AddEntity(v13);
          Scr_AddArray(scrContext);
        }
      }
    }
  }
  while ( 1 )
  {
    v10 = (unsigned int)(v2 + 1);
    v2 = v10;
    if ( (unsigned int)v10 >= 7 )
      break;
    v9 = client->sess.sightedByPlayers.array[v10];
    if ( v9 )
      goto LABEL_15;
  }
}

/*
==============
PlayerCmd_GetSightedPlayers
==============
*/
void PlayerCmd_GetSightedPlayers(scrContext_t *scrContext, scr_entref_t entref)
{
  __int64 v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  gclient_s *client; 
  unsigned int clientNum; 
  unsigned int *array; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  int maxclients; 
  int VisiblePlayers; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  gentity_s *players[200]; 

  v2 = 0i64;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2847, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client && !v5->agent )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v6);
    }
  }
  Scr_MakeArray(scrContext);
  client = v5->client;
  if ( client )
  {
    clientNum = client->ps.clientNum;
    array = client->sess.sightedPlayers.array;
    if ( clientNum >= level.maxclients )
    {
      LODWORD(v17) = client->ps.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2857, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v17, level.maxclients) )
        __debugbreak();
    }
    v10 = *array;
    while ( v10 )
    {
LABEL_17:
      v12 = __lzcnt(v10);
      v13 = v12 + 32 * v2;
      if ( v12 >= 0x20 )
      {
        LODWORD(v18) = 32;
        LODWORD(v17) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( (v10 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v10 &= ~(0x80000000 >> v12);
      if ( clientNum != v13 )
      {
        if ( v13 >= 0x800 )
        {
          LODWORD(v18) = 2048;
          LODWORD(v17) = v12 + 32 * v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v13].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v13] )
        {
          if ( SvClient::GetCommonClient(v13)->state == CS_ACTIVE )
          {
            GScr_AddEntity(&g_entities[v13]);
            Scr_AddArray(scrContext);
          }
        }
      }
    }
    while ( 1 )
    {
      v11 = (unsigned int)(v2 + 1);
      LODWORD(v2) = v11;
      if ( (unsigned int)v11 >= 7 )
        break;
      v10 = array[v11];
      if ( v10 )
        goto LABEL_17;
    }
  }
  else if ( v5->agent && SV_BotIsBotEnt(v5) )
  {
    maxclients = level.maxclients;
    if ( (unsigned int)(level.maxclients - 1) > 0xC7 )
    {
      LODWORD(v17) = level.maxclients;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2890, ASSERT_TYPE_ASSERT, "( 1 ) <= ( level.maxclients ) && ( level.maxclients ) <= ( 200 )", "level.maxclients not in [1, MAX_CLIENTS_MP]\n\t%i not in [%i, %i]", v17, 1, 200) )
        __debugbreak();
      maxclients = level.maxclients;
    }
    VisiblePlayers = SV_AgentGetVisiblePlayers(v5, (const gentity_s **)players, maxclients);
    v16 = VisiblePlayers;
    if ( VisiblePlayers > 0 )
    {
      do
      {
        GScr_AddEntity(players[v2]);
        Scr_AddArray(scrContext);
        ++v2;
      }
      while ( v2 < v16 );
    }
  }
}

/*
==============
PlayerCmd_GetNearestNode
==============
*/
void PlayerCmd_GetNearestNode(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  sentient_s *sentient; 
  const pathnode_t *v7; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2914, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  sentient = v4->sentient;
  if ( sentient )
  {
    v7 = Sentient_NearestNode(sentient);
    if ( v7 )
      Scr_AddPathnode(v7);
    else
      Scr_AddUndefined(scrContext);
  }
  else
  {
    Scr_Error(COM_ERR_1395, scrContext, "Entity has no sentient");
  }
}

/*
==============
PlayerCmd_RegisterParty
==============
*/
void PlayerCmd_RegisterParty(scrContext_t *scrContext, scr_entref_t entref)
{
  Scr_Error(COM_ERR_6329, scrContext, "registerParty is deprecated.  Please use self getPartyID()");
}

/*
==============
PlayerCmd_GetPrivatePartySize
==============
*/
void PlayerCmd_GetPrivatePartySize(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  gentity_s *v5; 
  const char *v6; 
  EntityClass entclass; 

  entclass = entref.entclass;
  entnum = entref.entnum;
  if ( Scr_GetNumParam(scrContext) )
  {
    Scr_Error(COM_ERR_1398, scrContext, "GetPrivatePartySize: Must have 0 parameters ( self registerParty( self.clientid ).");
    return;
  }
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1399, scrContext, "GetPrivatePartySize cannot be called for front-end server");
  if ( !SV_Game_IsOnlineGame() )
    goto LABEL_14;
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
LABEL_14:
    Scr_AddInt(scrContext, 1);
    return;
  }
  if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2979, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = g_entities;
  v5 = &g_entities[entnum];
  if ( !v5->client )
  {
    v6 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    v4 = g_entities;
  }
  Scr_AddInt(scrContext, v4[v5->s.number].client->sess.privatePartySize);
}

/*
==============
PlayerCmd_GetFireteamMembers
==============
*/
void PlayerCmd_GetFireteamMembers(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  unsigned int number; 
  ClientsSubpartyInfo *v8; 
  __int64 v9; 
  ClientsSubpartyInfo *v10; 
  int partyIdx; 
  unsigned int clientNum; 
  __int64 v13; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3007, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  number = v5->s.number;
  if ( number >= level.maxclients )
  {
    LODWORD(v13) = v5->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3010, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v13, level.maxclients) )
      __debugbreak();
  }
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1400, scrContext, "GetFireteamMembers cannot be called for front-end server");
  if ( SV_Game_IsOnlineGame() )
  {
    if ( SV_BotIsBotEnt(v5) )
    {
      Scr_MakeArray(scrContext);
    }
    else
    {
      if ( g_svSubparties.info[1].time > g_svSubparties.info[2].time )
      {
        if ( ((unsigned __int8)&g_svSubparties.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_svSubparties.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_svSubparties.lock, 1, 0) )
        {
          memcpy_0(&g_svSubparties.info[2], &g_svSubparties.info[1], sizeof(g_svSubparties.info[2]));
          g_svSubparties.lock = 0;
        }
      }
      if ( g_svSubparties.info[2].count <= 0i64 )
        goto LABEL_27;
      v8 = &g_svSubparties.info[2];
      v9 = 0i64;
      v10 = &g_svSubparties.info[2];
      while ( v10->record[0].clientNum != number )
      {
        ++v9;
        v10 = (ClientsSubpartyInfo *)((char *)v10 + 8);
        if ( v9 >= g_svSubparties.info[2].count )
          goto LABEL_27;
      }
      partyIdx = v10->record[0].partyIdx;
      if ( partyIdx == -1 )
      {
LABEL_27:
        Com_PrintWarning(24, "GetFireteamMembers() - Client %d not found in subparties.", number);
        Scr_MakeArray(scrContext);
      }
      else
      {
        Scr_MakeArray(scrContext);
        if ( g_svSubparties.info[2].count > 0 )
        {
          do
          {
            clientNum = v8->record[0].clientNum;
            if ( v8->record[0].clientNum != number && v8->record[0].partyIdx == partyIdx && SvClient::GetCommonClient(clientNum)->state >= CS_ACTIVE )
            {
              Scr_AddEntityNum(scrContext, clientNum, ENTITY_CLASS_GENTITY);
              Scr_AddArray(scrContext);
            }
            ++v2;
            v8 = (ClientsSubpartyInfo *)((char *)v8 + 8);
          }
          while ( v2 < g_svSubparties.info[2].count );
        }
      }
    }
  }
  else
  {
    Scr_Error(COM_ERR_1401, scrContext, "GetFireteamMembers only works in online games.");
  }
}

/*
==============
PlayerCmd_IsFireteamLeader
==============
*/
void PlayerCmd_IsFireteamLeader(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3092, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1402, scrContext, "GetFireteamMembers cannot be called for front-end server");
  if ( SV_Game_IsOnlineGame() )
  {
    if ( SV_BotIsBotEnt(v4) )
      Scr_AddBool(scrContext, 1);
    else
      Scr_AddBool(scrContext, v4->client->sess.isPrivatePartyHost);
  }
  else
  {
    Scr_Error(COM_ERR_1403, scrContext, "GetFireteamMembers only works in online games.");
  }
}

/*
==============
PlayerCmd_GetCustomizationBody
==============
*/
void PlayerCmd_GetCustomizationBody(scrContext_t *scrContext, scr_entref_t entref)
{
  PlayerCmd_GetCustomizationString(scrContext, entref, CUSTOMIZATION_TYPE_BODY);
}

/*
==============
PlayerCmd_GetCustomizationHead
==============
*/
void PlayerCmd_GetCustomizationHead(scrContext_t *scrContext, scr_entref_t entref)
{
  PlayerCmd_GetCustomizationString(scrContext, entref, CUSTOMIZATION_TYPE_HEAD);
}

/*
==============
PlayerCmd_SetCustomization
==============
*/
void PlayerCmd_SetCustomization(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 
  const char *String; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  ClientCustomizationInfo *p_customization; 
  unsigned __int16 v14; 
  unsigned __int16 outModelIndex; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3180, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_1404, scrContext, "SetCustomization requires an index of the customization body and head.");
  String = Scr_GetString(scrContext, 0);
  v8 = String;
  if ( !String || !*String )
    Scr_Error(COM_ERR_1405, scrContext, "SetCustomization: Empty body specified.");
  if ( !BG_Customization_GetModelIndexForName(CUSTOMIZATION_TYPE_BODY, v8, &outModelIndex) )
  {
    v9 = j_va("SetCustomization: Invalid body specified. %s is not from the body customization table", v8);
    Scr_Error(COM_ERR_1406, scrContext, v9);
  }
  if ( Scr_GetType(scrContext, 1u) )
  {
    v10 = Scr_GetString(scrContext, 1u);
    v11 = v10;
    if ( !v10 || !*v10 )
      Scr_Error(COM_ERR_1407, scrContext, "SetCustomization: Empty head specified.");
    if ( !BG_Customization_GetModelIndexForName(CUSTOMIZATION_TYPE_HEAD, v11, &v14) )
    {
      v12 = j_va("SetCustomization: Invalid head specified. %s is not from the head customization table", v11);
      Scr_Error(COM_ERR_1408, scrContext, v12);
    }
    p_customization = &client->sess.cs.customization;
  }
  else
  {
    p_customization = &client->sess.cs.customization;
    v14 = truncate_cast<unsigned short,unsigned int>(client->sess.cs.customization.modelIndex[0]);
  }
  if ( !BG_Customization_SetBodyCustomization(p_customization, outModelIndex) )
    Scr_Error(COM_ERR_1409, scrContext, "Failed to set the body customization model");
  if ( !BG_Customization_SetHeadCustomization(p_customization, v14) )
    Scr_Error(COM_ERR_1410, scrContext, "Failed to set the head customization model");
}

/*
==============
PlayerCmd_LoadCustomization
==============
*/
void PlayerCmd_LoadCustomization(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gclient_s *client; 
  const char *String; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  bool EquippedModels; 
  bool v16; 
  unsigned __int16 v17; 
  unsigned __int16 outModelIndex; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3279, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( Scr_GetNumParam(scrContext) != 2 && Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_1412, scrContext, "LoadCustomization requires an index of the customization body and head.");
  String = Scr_GetString(scrContext, 0);
  v8 = String;
  if ( !String || !*String )
  {
    v9 = j_va("Invalid body specified. Empty strings are not supported");
    Scr_Error(COM_ERR_1413, scrContext, v9);
  }
  if ( !BG_Customization_GetModelIndexForName(CUSTOMIZATION_TYPE_BODY, v8, &outModelIndex) )
  {
    v10 = j_va("Invalid body specified. %s is not from the body customization table", v8);
    Scr_Error(COM_ERR_6554, scrContext, v10);
  }
  if ( Scr_GetType(scrContext, 1u) )
  {
    v11 = Scr_GetString(scrContext, 1u);
    v12 = v11;
    if ( !v11 || !*v11 )
    {
      v13 = j_va("Invalid head specified. Empty strings are not supported");
      Scr_Error(COM_ERR_1414, scrContext, v13);
    }
    if ( !BG_Customization_GetModelIndexForName(CUSTOMIZATION_TYPE_HEAD, v12, &v17) )
    {
      v14 = j_va("Invalid head specified. %s is not from the head customization table", v12);
      Scr_Error(COM_ERR_6555, scrContext, v14);
    }
  }
  else
  {
    v17 = truncate_cast<unsigned short,unsigned int>(client->sess.cs.customization.modelIndex[0]);
  }
  if ( Scr_GetNumParam(scrContext) == 3 && Scr_GetType(scrContext, 2u) && Scr_GetInt(scrContext, 2u) )
    EquippedModels = G_CharacterStreaming_SetNextEquippedModels(v4->s.number, outModelIndex, v17);
  else
    EquippedModels = G_CharacterStreaming_SetClassSelectModels(v4->s.number, outModelIndex, v17);
  v16 = EquippedModels;
  if ( !EquippedModels )
    Com_PrintError(24, "Failed to queue a load for the streamed assets when trying to change the head of a character");
  Scr_AddBool(scrContext, v16);
}

/*
==============
PlayerCmd_ClearCustomization
==============
*/
void PlayerCmd_ClearCustomization(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3347, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) && Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_1415, scrContext, "ClearCustomization should specify only a single boolean argument.");
  if ( Scr_GetNumParam(scrContext) == 1 && Scr_GetType(scrContext, 0) && Scr_GetInt(scrContext, 0) )
    G_CharacterStreaming_ClearNextEquippedModels(v4->s.number);
  else
    G_CharacterStreaming_ClearClassSelectModels(v4->s.number);
}

/*
==============
PlayerCmd_GetCustomizationViewmodel
==============
*/
void PlayerCmd_GetCustomizationViewmodel(scrContext_t *scrContext, scr_entref_t entref)
{
  PlayerCmd_GetCustomizationString(scrContext, entref, CUSTOMIZATION_TYPE_VIEWHANDS);
}

/*
==============
PlayerCmd_LoadCustomizationPlayerView
==============
*/
void PlayerCmd_LoadCustomizationPlayerView(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gentity_s *Entity; 
  gentity_s *v7; 
  clientState_t *ClientState; 
  const char *v9; 
  unsigned __int16 ViewhandIndexForBody; 
  unsigned int number; 
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  const char *v14; 
  unsigned int inOutWeaponCount; 
  unsigned int modelIndices[3]; 
  Weapon outViewWeapons[24]; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3394, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Entity = GScr_GetEntity(0);
  v7 = Entity;
  if ( Entity->client )
  {
    ClientState = G_MainMP_GetClientState(Entity->s.number);
    if ( !ClientState )
    {
      v9 = j_va("LoadCustomizationPlayerView failed to get client state for client %u.", (unsigned int)v7->s.number);
      Scr_Error(COM_ERR_6221, scrContext, v9);
    }
    ViewhandIndexForBody = BG_Customization_GetViewhandIndexForBody(ClientState->customization.modelIndex[1]);
    number = v4->s.number;
    modelIndices[0] = ViewhandIndexForBody;
    G_CharacterStreaming_SetNextSpectateViewModels(number, modelIndices, 1u);
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(v4);
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3413, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    inOutWeaponCount = 0;
    Instance = GWeaponMap::GetInstance();
    if ( !BG_AddStreamedViewWeaponsToList(Instance, EntityPlayerStateConst, (Weapon (*)[24])outViewWeapons, &inOutWeaponCount) )
    {
      v14 = j_va("LoadCustomizationPlayerView failed to collect view weapons for client %u.", (unsigned int)v7->s.number);
      Scr_Error(COM_ERR_6222, scrContext, v14);
    }
    G_WeaponStreaming_SetNextSpectateViewWeapons(v4->s.number, outViewWeapons, inOutWeaponCount);
  }
  else
  {
    Scr_ParamError(COM_ERR_1416, scrContext, 0, "Must be called on a player entity");
  }
}

/*
==============
PlayerCmd_HasLoadedCustomizationPlayerView
==============
*/
void PlayerCmd_HasLoadedCustomizationPlayerView(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gentity_s *Entity; 
  gentity_s *v7; 
  const clientState_t *ClientState; 
  const dvar_t *v9; 
  int v10; 
  const playerState_s *PlayerState; 
  const dvar_t *v12; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3438, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Entity = GScr_GetEntity(0);
  v7 = Entity;
  if ( !Entity->client )
  {
    Scr_AddUndefined(scrContext);
    Scr_ParamError(COM_ERR_1417, scrContext, 0, "Must be called on a player entity");
    return;
  }
  ClientState = G_MainMP_GetClientState(Entity->s.number);
  if ( G_CharacterStreaming_HasCustomizationViewModelsLoaded(v4->s.number, ClientState) )
  {
    PlayerState = G_MainMP_GetPlayerState(v7->s.number);
    if ( G_WeaponStreaming_HasViewWeaponsLoadedForPlayer(v4->s.number, PlayerState) )
    {
      v10 = 1;
      goto LABEL_24;
    }
    v12 = DCONST_DVARBOOL_g_weaponstreaming_verbose;
    if ( !DCONST_DVARBOOL_g_weaponstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_weaponstreaming_verbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      Com_Printf(15, "Client does not have weapon view models loaded.\n");
      G_WeaponStreaming_PrintViewWeaponRequests(v4->s.number);
    }
    goto LABEL_22;
  }
  v9 = DCONST_DVARBOOL_g_characterstreaming_verbose;
  if ( !DCONST_DVARBOOL_g_characterstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_characterstreaming_verbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
  {
LABEL_22:
    v10 = 0;
    goto LABEL_24;
  }
  Com_Printf(15, "Client does not have customization view models loaded.\n");
  G_CharacterStreaming_PrintViewModelRequests(v4->s.number);
  v10 = 0;
LABEL_24:
  Scr_AddBool(scrContext, v10);
}

/*
==============
PlayerCmd_HasLoadedCustomizationPlayerWorld
==============
*/
void PlayerCmd_HasLoadedCustomizationPlayerWorld(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  gentity_s *Entity; 
  gentity_s *v7; 
  const clientState_t *ClientState; 
  const dvar_t *v9; 
  int v10; 
  const playerState_s *PlayerState; 
  const dvar_t *v12; 
  SvClientMP *MpClient; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3489, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  Entity = GScr_GetEntity(0);
  v7 = Entity;
  if ( !Entity->client )
  {
    Scr_AddUndefined(scrContext);
    Scr_ParamError(COM_ERR_1418, scrContext, 0, "Must be called on a player entity");
    return;
  }
  ClientState = G_MainMP_GetClientState(Entity->s.number);
  if ( G_CharacterStreaming_HasCustomizationWorldModelsLoaded(v4->s.number, ClientState) )
  {
    PlayerState = G_MainMP_GetPlayerState(v7->s.number);
    if ( G_WeaponStreaming_HasWorldWeaponsLoadedForPlayer(v4->s.number, PlayerState) )
    {
      v10 = 1;
      goto LABEL_24;
    }
    v12 = DCONST_DVARBOOL_g_weaponstreaming_verbose;
    if ( !DCONST_DVARBOOL_g_weaponstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_weaponstreaming_verbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      MpClient = SV_Client_GetMpClient(v4->s.number);
      Com_Printf(15, "Client '%s' does not have weapon world models loaded.\n", MpClient->name);
      G_WeaponStreaming_PrintGameWeaponRequestsForClient(v4->s.number);
    }
    goto LABEL_22;
  }
  v9 = DCONST_DVARBOOL_g_characterstreaming_verbose;
  if ( !DCONST_DVARBOOL_g_characterstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_characterstreaming_verbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
  {
LABEL_22:
    v10 = 0;
    goto LABEL_24;
  }
  Com_Printf(15, "Client does not have customization world models loaded.\n");
  G_CharacterStreaming_PrintClientWorldModelRequests(v4->s.number, CUSTOMIZATION_TYPE_HEAD);
  G_CharacterStreaming_PrintClientWorldModelRequests(v4->s.number, CUSTOMIZATION_TYPE_BODY);
  v10 = 0;
LABEL_24:
  Scr_AddBool(scrContext, v10);
}

/*
==============
PlayerCmd_HasLoadedCustomizationWorldModels
==============
*/
void PlayerCmd_HasLoadedCustomizationWorldModels(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  const char *String; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  CustomizationModelType v11; 
  const dvar_t *v12; 
  unsigned __int16 outModelIndex; 
  ComStreamSyncEntry outSyncEntry; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3547, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  memset(&outSyncEntry, 0, sizeof(outSyncEntry));
  String = Scr_GetString(scrContext, 0);
  if ( !BG_Customization_GetModelIndexForName(CUSTOMIZATION_TYPE_BODY, String, &outModelIndex) )
  {
    v8 = j_va("The specified model %s is not in the customization table for bodies", String);
    Scr_Error(COM_ERR_1419, scrContext, v8);
  }
  Com_StreamSyncEntry_SetSingleModelIndex(&outSyncEntry, outModelIndex, STREAM_SYNC_CLIENT_TYPE_BODY);
  if ( SV_StreamSync_ClientHasBodyModelLoaded(v5->s.number, &outSyncEntry) )
  {
    if ( Scr_GetNumParam(scrContext) <= 1 || Scr_GetType(scrContext, 1u) == VAR_UNDEFINED )
      goto LABEL_18;
    v9 = Scr_GetString(scrContext, 1u);
    if ( !BG_Customization_GetModelIndexForName(CUSTOMIZATION_TYPE_HEAD, v9, &outModelIndex) )
    {
      v10 = j_va("The specified model %s is not in the customization table for bodies", v9);
      Scr_Error(COM_ERR_1420, scrContext, v10);
    }
    Com_StreamSyncEntry_SetSingleModelIndex(&outSyncEntry, outModelIndex, STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL);
    if ( SV_StreamSync_ClientHasHeadModelLoaded(v5->s.number, &outSyncEntry) )
    {
LABEL_18:
      v2 = 1;
    }
    else if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_g_characterstreaming_verbose, "g_characterstreaming_verbose") )
    {
      Com_Printf(15, "!!!!! Client does not have head customization world models loaded. Spawn may be delayed.\n");
      v11 = CUSTOMIZATION_TYPE_HEAD;
LABEL_24:
      G_CharacterStreaming_PrintClientWorldModelRequests(v5->s.number, v11);
    }
  }
  else
  {
    v12 = DCONST_DVARBOOL_g_characterstreaming_verbose;
    if ( !DCONST_DVARBOOL_g_characterstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_characterstreaming_verbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      Com_Printf(15, "!!!!! Client does not have body customization world models loaded. Spawn may be delayed.\n");
      v11 = CUSTOMIZATION_TYPE_BODY;
      goto LABEL_24;
    }
  }
  Scr_AddBool(scrContext, v2);
}

/*
==============
PlayerCmd_HasLoadedCustomizationViewModels
==============
*/
void PlayerCmd_HasLoadedCustomizationViewModels(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  const char *String; 
  const char *v7; 
  unsigned __int16 ViewhandIndexForBody; 
  int HasViewModelLoaded; 
  const dvar_t *v10; 
  int v11; 
  SvClientMP *MpClient; 
  unsigned __int16 outModelIndex; 
  ComStreamSyncEntry outSyncEntry; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3621, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  memset(&outSyncEntry, 0, sizeof(outSyncEntry));
  String = Scr_GetString(scrContext, 0);
  if ( !BG_Customization_GetModelIndexForName(CUSTOMIZATION_TYPE_BODY, String, &outModelIndex) )
  {
    v7 = j_va("The specified model %s is not in the customization table for bodies", String);
    Scr_Error(COM_ERR_1421, scrContext, v7);
  }
  ViewhandIndexForBody = BG_Customization_GetViewhandIndexForBody(outModelIndex);
  Com_StreamSyncEntry_SetSingleModelIndex(&outSyncEntry, ViewhandIndexForBody, STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL);
  HasViewModelLoaded = SV_StreamSync_ClientHasViewModelLoaded(v4->s.number, &outSyncEntry, 1u);
  v10 = DCONST_DVARBOOL_g_characterstreaming_verbose;
  v11 = HasViewModelLoaded;
  if ( !DCONST_DVARBOOL_g_characterstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_characterstreaming_verbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled && !v11 )
  {
    MpClient = SV_Client_GetMpClient(v4->s.number);
    Com_Printf(15, "!!!!! Client '%s' does not have customization view models loaded. Spawn may be delayed.\n", MpClient->name);
    G_CharacterStreaming_PrintViewModelRequests(v4->s.number);
  }
  Scr_AddBool(scrContext, v11);
}

/*
==============
PlayerCmd_LoadWeaponsForPlayer
==============
*/
void PlayerCmd_LoadWeaponsForPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  unsigned int v6; 
  unsigned int v7; 
  const dvar_t *v8; 
  unsigned int v9; 
  int v10; 
  const dvar_t *v11; 
  __int64 v12; 
  Weapon outWeapons; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3667, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( (unsigned int)v4->s.number >= level.maxclients )
  {
    LODWORD(v12) = v4->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3668, ASSERT_TYPE_ASSERT, "(unsigned)( pSelf->s.number ) < (unsigned)( level.maxclients )", "pSelf->s.number doesn't index level.maxclients\n\t%i not in [0, %i)", v12, level.maxclients) )
      __debugbreak();
  }
  if ( Scr_GetNumParam(scrContext) != 1 && Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_1422, scrContext, "LoadWeaponsForPlayer requires an array of weapon names and optionally a boolean indicating if the load should be prioritized.");
  v6 = GScr_Main_FillWeaponArray(scrContext, &outWeapons, 0x18u);
  if ( Scr_GetNumParam(scrContext) == 2 && Scr_GetType(scrContext, 1u) && Scr_GetInt(scrContext, 1u) )
    v7 = G_WeaponStreaming_SetNextEquippedViewWeapons(v4->s.number, &outWeapons, v6);
  else
    v7 = G_WeaponStreaming_SetClassSelectViewWeapons(v4->s.number, &outWeapons, v6);
  if ( v7 != v6 )
  {
    v8 = DCONST_DVARBOOL_g_weaponstreaming_verbose;
    if ( !DCONST_DVARBOOL_g_weaponstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_weaponstreaming_verbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
      G_WeaponStreaming_PrintViewWeaponRequests(v4->s.number);
    Com_PrintWarning(15, "Unable to satisfy view weapon streaming request. Run with +set g_weaponstreaming_verbose 1 for details.\n");
  }
  if ( Scr_GetNumParam(scrContext) == 2 && Scr_GetType(scrContext, 1u) && Scr_GetInt(scrContext, 1u) )
    v9 = G_WeaponStreaming_SetNextEquippedWorldWeapons(v4->s.number, &outWeapons, v6);
  else
    v9 = G_WeaponStreaming_SetClassSelectWorldWeapons(v4->s.number, &outWeapons, v6);
  v10 = v9;
  if ( v9 != v6 )
  {
    v11 = DCONST_DVARBOOL_g_weaponstreaming_verbose;
    if ( !DCONST_DVARBOOL_g_weaponstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_weaponstreaming_verbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
      G_WeaponStreaming_PrintGameWeaponRequestsForClient(v4->s.number);
    Com_PrintWarning(15, "Unable to satisfy world weapon streaming request. Run with +set g_weaponstreaming_verbose 1 for details.\n");
  }
  Scr_AddInt(scrContext, v10);
}

/*
==============
PlayerCmd_ClearWeaponLoadRequestsForPlayer
==============
*/
void PlayerCmd_ClearWeaponLoadRequestsForPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  __int64 v6; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3724, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( (unsigned int)v4->s.number >= level.maxclients )
  {
    LODWORD(v6) = v4->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3726, ASSERT_TYPE_ASSERT, "(unsigned)( pSelf->s.number ) < (unsigned)( level.maxclients )", "pSelf->s.number doesn't index level.maxclients\n\t%i not in [0, %i)", v6, level.maxclients) )
      __debugbreak();
  }
  if ( Scr_GetNumParam(scrContext) && Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_1423, scrContext, "ClearWeaponLoadRequestsForPlayer specifies only a single boolean argument.");
  if ( Scr_GetNumParam(scrContext) == 1 && Scr_GetType(scrContext, 0) && Scr_GetInt(scrContext, 0) )
  {
    G_WeaponStreaming_ClearNextEquippedWorldWeapons(v4->s.number);
    G_WeaponStreaming_ClearNextEquippedViewWeapons(v4->s.number);
  }
  else
  {
    G_WeaponStreaming_ClearClassSelectWorldWeapons(v4->s.number);
    G_WeaponStreaming_ClearClassSelectViewWeapons(v4->s.number);
  }
}

/*
==============
PlayerCmd_LoadWorldWeaponsForPlayer
==============
*/
void PlayerCmd_LoadWorldWeaponsForPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  unsigned int v6; 
  unsigned int v7; 
  const dvar_t *v8; 
  __int64 v9; 
  Weapon outWeapons; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3762, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( (unsigned int)v4->s.number >= level.maxclients )
  {
    LODWORD(v9) = v4->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3763, ASSERT_TYPE_ASSERT, "(unsigned)( pSelf->s.number ) < (unsigned)( level.maxclients )", "pSelf->s.number doesn't index level.maxclients\n\t%i not in [0, %i)", v9, level.maxclients) )
      __debugbreak();
  }
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_1424, scrContext, "LoadWorldWeaponsForPlayer requires an array of weapon names and optionally a boolean indicating if the load should be prioritized.");
  v6 = GScr_Main_FillWeaponArray(scrContext, &outWeapons, 0xFu);
  if ( Scr_GetNumParam(scrContext) == 2 && Scr_GetType(scrContext, 1u) && Scr_GetInt(scrContext, 1u) )
    v7 = G_WeaponStreaming_SetNextEquippedWorldWeapons(v4->s.number, &outWeapons, v6);
  else
    v7 = G_WeaponStreaming_SetClassSelectWorldWeapons(v4->s.number, &outWeapons, v6);
  if ( v7 != v6 )
  {
    v8 = DCONST_DVARBOOL_g_weaponstreaming_verbose;
    if ( !DCONST_DVARBOOL_g_weaponstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_weaponstreaming_verbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
      G_WeaponStreaming_PrintGameWeaponRequestsForClient(v4->s.number);
    Com_PrintWarning(15, "Unable to satisfy world weapon streaming request. Run with +set g_weaponstreaming_verbose 1 for details.\n");
  }
}

/*
==============
PlayerCmd_HasLoadedViewWeapons
==============
*/
void PlayerCmd_HasLoadedViewWeapons(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  unsigned int v6; 
  bool HasViewWeaponsLoaded; 
  const dvar_t *v8; 
  int v9; 
  SvClientMP *MpClient; 
  __int64 v11; 
  Weapon outWeapons; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3803, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_1425, scrContext, "LoadWeaponsForPlayer requires an array of weapon names.");
  v6 = GScr_Main_FillWeaponArray(scrContext, &outWeapons, 0xFu);
  if ( (unsigned int)v4->s.number >= level.maxclients )
  {
    LODWORD(v11) = v4->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3810, ASSERT_TYPE_ASSERT, "(unsigned)( pSelf->s.number ) < (unsigned)( level.maxclients )", "pSelf->s.number doesn't index level.maxclients\n\t%i not in [0, %i)", v11, level.maxclients) )
      __debugbreak();
  }
  HasViewWeaponsLoaded = G_WeaponStreaming_HasViewWeaponsLoaded(v4->s.number, &outWeapons, v6);
  v8 = DCONST_DVARBOOL_g_weaponstreaming_verbose;
  v9 = HasViewWeaponsLoaded;
  if ( !DCONST_DVARBOOL_g_weaponstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_weaponstreaming_verbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && !v9 )
  {
    MpClient = SV_Client_GetMpClient(v4->s.number);
    Com_Printf(15, "!!!!! Client '%s' does not have view weapons loaded. Spawn may be delayed.\n", MpClient->name);
    G_WeaponStreaming_PrintViewWeaponRequests(v4->s.number);
  }
  Scr_AddBool(scrContext, v9);
}

/*
==============
PlayerCmd_HasLoadedWorldWeapons
==============
*/
void PlayerCmd_HasLoadedWorldWeapons(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  unsigned int v6; 
  bool HasWorldWeaponsLoaded; 
  const dvar_t *v8; 
  int v9; 
  char *name; 
  __int64 v11; 
  Weapon outWeapons; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3842, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_1426, scrContext, "LoadWeaponsForPlayer requires an array of weapon names.");
  v6 = GScr_Main_FillWeaponArray(scrContext, &outWeapons, 0xFu);
  if ( (unsigned int)v4->s.number >= level.maxclients )
  {
    LODWORD(v11) = v4->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3849, ASSERT_TYPE_ASSERT, "(unsigned)( pSelf->s.number ) < (unsigned)( level.maxclients )", "pSelf->s.number doesn't index level.maxclients\n\t%i not in [0, %i)", v11, level.maxclients) )
      __debugbreak();
  }
  HasWorldWeaponsLoaded = G_WeaponStreaming_HasWorldWeaponsLoaded(v4->s.number, &outWeapons, v6);
  v8 = DCONST_DVARBOOL_g_weaponstreaming_verbose;
  v9 = HasWorldWeaponsLoaded;
  if ( !DCONST_DVARBOOL_g_weaponstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_weaponstreaming_verbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && !v9 )
  {
    name = SV_Client_GetMpClient(v4->s.number)->name;
    Com_Printf(15, "!!!!! Client '%s' does not have world weapons loaded. Spawn may be delayed.\n", name);
    G_WeaponStreaming_PrintWeaponRequests(name, &outWeapons, v6);
    G_WeaponStreaming_PrintGameWeaponRequestsForClient(v4->s.number);
  }
  Scr_AddBool(scrContext, v9);
}

/*
==============
PlayerCmd_HasFemaleCustomizationModel
==============
*/
void PlayerCmd_HasFemaleCustomizationModel(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int IsFemaleCustomization; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
    goto LABEL_8;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3876, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  if ( !v4->client )
  {
    v5 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v5);
LABEL_8:
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3878, ASSERT_TYPE_ASSERT, "( pSelf->client )", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
  }
  IsFemaleCustomization = BG_Customization_IsFemaleCustomization(&v4->client->sess.cs.customization);
  Scr_AddBool(scrContext, IsFemaleCustomization);
}

/*
==============
PlayerCmd_ShowHudSplash
==============
*/
void PlayerCmd_ShowHudSplash(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  const char *String; 
  unsigned int Int; 
  int number; 
  const char *v10; 
  unsigned int v11; 
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 
  char *fmt; 
  char *fmta; 
  int outControllingClientNum; 
  StringTable *tablePtr; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3905, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client && !v5->agent )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v6);
    }
  }
  String = Scr_GetString(scrContext, 0);
  Int = Scr_GetInt(scrContext, 1u);
  if ( Int > 4 )
    Scr_Error(COM_ERR_1427, scrContext, "Invalid slot number specified for ShowHudSplash");
  if ( Scr_GetNumParam(scrContext) > 2 )
    v2 = Scr_GetInt(scrContext, 2u);
  number = v5->s.number;
  outControllingClientNum = number;
  if ( !SV_IsAgent(number) || SV_GetAgentControlledByPlayerNum(outControllingClientNum, &outControllingClientNum) )
  {
    StringTable_GetAsset("mp/splashTable.csv", (const StringTable **)&tablePtr);
    LODWORD(fmt) = Int;
    v11 = StringTable_LookupRowNumForValue(tablePtr, 0, String);
    Com_Printf(25, "Sending splash open for splash %s to clientNum %i in slot %i\n", String, (unsigned int)outControllingClientNum, fmt);
    LODWORD(fmta) = v2;
    v12 = j_va("%c %i %i %i", 117i64, Int, v11, fmta);
    v13 = v12;
    if ( outControllingClientNum == -1 )
    {
      SV_Game_BroadcastServerCommand(SV_CMD_CAN_IGNORE, v12);
    }
    else
    {
      CommonClient = SvClient::GetCommonClient(outControllingClientNum);
      CommonClient->SendServerCommand(CommonClient, SV_CMD_CAN_IGNORE, v13);
    }
  }
  else
  {
    v10 = j_va("entity %i is not a player or player-controlled agent", entnum);
    Scr_ObjectError(COM_ERR_1428, scrContext, v10);
  }
}

/*
==============
PlayerCmd_SetClientDvar
==============
*/
void PlayerCmd_SetClientDvar(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  const char *String; 
  GScript *v7; 
  void (__fastcall *ConstructMessageString)(GScript *, scrContext_t *, int, int, const char *, char *, unsigned int); 
  unsigned int NumParam; 
  char *v10; 
  const char *UnobfuscatedName; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  SvClient *CommonClient; 
  unsigned int outDvarIndex[4]; 
  char dvarValue[1024]; 
  char outDvarValue[1024]; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3991, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      if ( v4->agent )
        return;
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  if ( !v4->agent )
  {
    String = Scr_GetString(scrContext, 0);
    if ( Scr_GetType(scrContext, 1u) == VAR_ISTRING )
    {
      if ( !GScript::ms_gScriptSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 183, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem )", (const char *)&queryFormat, "ms_gScriptSystem") )
        __debugbreak();
      v7 = GScript::ms_gScriptSystem;
      ConstructMessageString = GScript::ms_gScriptSystem->ConstructMessageString;
      NumParam = Scr_GetNumParam(scrContext);
      ConstructMessageString(v7, scrContext, 1, NumParam - 1, "Client Dvar Value", dvarValue, 1024u);
      v10 = dvarValue;
    }
    else
    {
      v10 = (char *)Scr_GetString(scrContext, 1u);
    }
    if ( Dvar_IsValidName(String) )
    {
      PlayerCmd_SetupValidClientDvar(scrContext, String, v10, outDvarIndex, outDvarValue, 0x400u);
      v13 = j_va("%c %i \"%s\"", 113i64, outDvarIndex[0], outDvarValue);
      v14 = v13;
      if ( entnum == -1 )
      {
        SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v13);
      }
      else
      {
        CommonClient = SvClient::GetCommonClient(entnum);
        CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v14);
      }
    }
    else
    {
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(String);
      v12 = j_va("%s is an invalid dvar name", UnobfuscatedName);
      Scr_Error(COM_ERR_1433, scrContext, v12);
    }
  }
}

/*
==============
PlayerCmd_SetClientDvars
==============
*/
void PlayerCmd_SetClientDvars(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  const char *v4; 
  ComErrorCode v5; 
  unsigned int v6; 
  const char *String; 
  const char *v8; 
  const char *UnobfuscatedName; 
  const char *v10; 
  SvClient *CommonClient; 
  unsigned int outDvarIndex; 
  char dest[24]; 
  char cmd[2]; 
  char outDvarValue[1024]; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v4 = "not an entity";
    v5 = COM_ERR_3681;
    goto LABEL_8;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 4045, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  if ( !g_entities[entnum].client )
  {
    v4 = j_va("entity %i is not a player", entnum);
    v5 = COM_ERR_3680;
LABEL_8:
    Scr_ObjectError(v5, scrContext, v4);
  }
  if ( (Scr_GetNumParam(scrContext) & 1) != 0 )
    Scr_Error(COM_ERR_1434, scrContext, "Not enough parameters to setclientdvar() - must be an even number of parameters (dvar, value, dvar, value, etc.)\n");
  v6 = 0;
  strcpy(cmd, "q");
  if ( Scr_GetNumParam(scrContext) )
  {
    while ( 1 )
    {
      String = Scr_GetString(scrContext, v6);
      v8 = Scr_GetString(scrContext, v6 + 1);
      if ( !Dvar_IsValidName(String) )
        break;
      PlayerCmd_SetupValidClientDvar(scrContext, String, v8, &outDvarIndex, outDvarValue, 0x400u);
      Com_sprintf(dest, 0x10ui64, "%i", outDvarIndex);
      I_strcat(cmd, 0x400ui64, " ");
      I_strcat(cmd, 0x400ui64, dest);
      I_strcat(cmd, 0x400ui64, " \"");
      I_strcat(cmd, 0x400ui64, outDvarValue);
      I_strcat(cmd, 0x400ui64, "\"");
      v6 += 2;
      if ( v6 >= Scr_GetNumParam(scrContext) )
        goto LABEL_14;
    }
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(String);
    v10 = j_va("Dvar %s has an invalid dvar name", UnobfuscatedName);
    Scr_Error(COM_ERR_1435, scrContext, v10);
  }
  else
  {
LABEL_14:
    if ( entnum == -1 )
    {
      SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, cmd);
    }
    else
    {
      CommonClient = SvClient::GetCommonClient(entnum);
      CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, cmd);
    }
  }
}

/*
==============
PlayerCmd_SetClientWeaponInfo
==============
*/
void PlayerCmd_SetClientWeaponInfo(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  int Int; 
  __int64 v6; 
  const char *v7; 
  __int64 p_mlgSpectatorClientInfo; 
  GWeaponMap *Instance; 
  __int64 v10; 
  bool outIsAlternate; 
  Weapon outWeapon; 

  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_1436, scrContext, "Incorrect number of parameters. <int>, <string>\n");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_1437, scrContext, "SetClientWeaponInfo: entity must be a player entity");
  Int = Scr_GetInt(scrContext, 0);
  v6 = Int;
  if ( (unsigned int)Int > 1 )
  {
    v7 = j_va("SetClientWeaponInfo: weapon index needs to be between 0 and %i", 2i64);
    Scr_Error(COM_ERR_1438, scrContext, v7);
  }
  GScr_Main_GetWeaponParam(scrContext, 1u, &outWeapon, &outIsAlternate);
  p_mlgSpectatorClientInfo = (__int64)&Entity->client->mlgSpectatorClientInfo;
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 467, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !p_mlgSpectatorClientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 468, ASSERT_TYPE_ASSERT, "(mlgSpectatorClientInfo)", (const char *)&queryFormat, "mlgSpectatorClientInfo") )
    __debugbreak();
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 469, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2 )", "index doesn't index MAX_MLG_SPECTATOR_WEAPON_HANDLES\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
  }
  Instance->SetWeapon(Instance, (BgWeaponHandle *)(p_mlgSpectatorClientInfo + 4 * v6 + 120), &outWeapon);
}

/*
==============
PlayerCmd_SetClientLoadoutInfo
==============
*/
void PlayerCmd_SetClientLoadoutInfo(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  const char *String; 
  int Int; 
  int v7; 
  const char *v8; 
  MLGLoadoutType mlgLoadoutTypeOut; 

  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_1439, scrContext, "Incorrect number of parameters. <loadoutType>, <itemName>/<rawValue>");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_1440, scrContext, "SetClientLoadoutInfo: entity must be a player entity");
  String = Scr_GetString(scrContext, 0);
  Int = Scr_GetInt(scrContext, 1u);
  v7 = Int;
  if ( Int > 128 )
  {
    v8 = j_va("SetClientLoadoutInfo: raw value of %i exceed max MLG loadout value of %i", (unsigned int)Int, 128i64);
    Scr_Error(COM_ERR_1441, scrContext, v8);
  }
  if ( !MLG_GetLoadoutTypeFromName(String, &mlgLoadoutTypeOut) )
    Scr_Error(COM_ERR_1442, scrContext, "SetClientLoadoutInfo: Incorrect loadoutType passed in! Please refer to log for correct loadout type strings");
  Entity->client->mlgSpectatorClientInfo.loadoutIndicies[mlgLoadoutTypeOut] = v7;
}

/*
==============
PlayerCmd_SetIsUsingSpecialist
==============
*/
void PlayerCmd_SetIsUsingSpecialist(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 

  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_6372, scrContext, "Incorrect number of parameters. <loadoutType>, <itemName>/<rawValue>");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_6373, scrContext, "SetIsUsingSpecialist: entity must be a player entity");
  Entity->client->mlgSpectatorClientInfo.isSpecialist = Scr_GetInt(scrContext, 0) != 0;
}

/*
==============
PlayerCmd_SetHasSpecialistBonus
==============
*/
void PlayerCmd_SetHasSpecialistBonus(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 

  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_6453, scrContext, "Incorrect number of parameters. <loadoutType>, <itemName>/<rawValue>");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_6454, scrContext, "SetHasSpecialistBonus: entity must be a player entity");
  Entity->client->mlgSpectatorClientInfo.hasSpecialistBonus = Scr_GetInt(scrContext, 0) != 0;
}

/*
==============
PlayerCmd_SetClientExtraSuper
==============
*/
void PlayerCmd_SetClientExtraSuper(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  __int64 Int; 
  int v6; 
  const char *v7; 

  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_1443, scrContext, "Incorrect number of parameters. <int>, <bool>");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_1444, scrContext, "SetClientExtraSuper: entity must be a player entity");
  Int = Scr_GetInt(scrContext, 0);
  v6 = Scr_GetInt(scrContext, 1u);
  if ( (unsigned int)Int > 1 )
  {
    v7 = j_va("SetClientExtraSuper: index %i exceed max MLG loadout index of %i", (unsigned int)Int, 2i64);
    Scr_Error(COM_ERR_1445, scrContext, v7);
  }
  Entity->client->mlgSpectatorClientInfo.extraPower[Int] = v6 != 0;
}

/*
==============
PlayerCmd_SetKillstreakPoints
==============
*/
void PlayerCmd_SetKillstreakPoints(scrContext_t *scrContext, scr_entref_t entref)
{
  int Int; 
  gentity_s *Entity; 
  const char *v6; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1446, scrContext, "SetKillstreakPoints not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_1447, scrContext, "Incorrect number of parameters. <bool>\n");
  Int = Scr_GetInt(scrContext, 0);
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_1448, scrContext, "SetKillstreakPoints: entity must be a player entity");
  if ( Int > 0x4000 )
  {
    v6 = j_va("SetKillstreakPoints: value of %i exceed max MLG killstreak value of %i", (unsigned int)Int, 0x4000i64);
    Scr_Error(COM_ERR_1449, scrContext, v6);
  }
  Entity->client->mlgSpectatorClientInfo.killstreakPoints = Int;
}

/*
==============
PlayerCmd_SetNextKillstreakCost
==============
*/
void PlayerCmd_SetNextKillstreakCost(scrContext_t *scrContext, scr_entref_t entref)
{
  int Int; 
  gentity_s *Entity; 
  const char *v6; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1450, scrContext, "SetNextKillstreakCost not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_1451, scrContext, "Incorrect number of parameters. <bool>\n");
  Int = Scr_GetInt(scrContext, 0);
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_1452, scrContext, "SetNextKillstreakCost: entity must be a player entity");
  if ( Int > 0x4000 )
  {
    v6 = j_va("SetNextKillstreakCost: value of %i exceed max MLG killstreak value of %i", (unsigned int)Int, 0x4000i64);
    Scr_Error(COM_ERR_1453, scrContext, v6);
  }
  Entity->client->mlgSpectatorClientInfo.nextKillstreakCost = Int;
}

/*
==============
PlayerCmd_SetLastStandEnabled
==============
*/
void PlayerCmd_SetLastStandEnabled(scrContext_t *scrContext, scr_entref_t entref)
{
  bool v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6429, scrContext, "SetLastStandEnabled not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_6430, scrContext, "SetLastStandEnabled: Incorrect number of parameters.\n");
  if ( !GetEntity(entref)->client )
    Scr_Error(COM_ERR_6431, scrContext, "SetLastStandEnabled: entity must be a player entity");
  v4 = Scr_GetInt(scrContext, 0) != 0;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
  {
    v9 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
    v8 = 2;
    v7 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v7, v8, v9) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v6) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v5) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[0] )
  {
    LODWORD(v6) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v6) )
      __debugbreak();
  }
  CgCompassSystemMP::SetLastStandEnabled((CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[0], v4);
}

/*
==============
PlayerCmd_SetMLGMessageSent
==============
*/
void PlayerCmd_SetMLGMessageSent(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6342, scrContext, "SetMlgMessageSent not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_6343, scrContext, "SetMlgMessageSent: Incorrect number of parameters.\n");
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( client )
  {
    client->mlgSpectatorClientInfo.mlgMessageSent = 1;
  }
  else
  {
    Scr_Error(COM_ERR_6344, scrContext, "SetMlgMessageSent: entity must be a player entity");
    Entity->client->mlgSpectatorClientInfo.mlgMessageSent = 1;
  }
}

/*
==============
PlayerCmd_SetGametypeVIP
==============
*/
void PlayerCmd_SetGametypeVIP(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  int Int; 
  gclient_s *client; 
  const char *v7; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1454, scrContext, "SetGametypeVIP not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_1455, scrContext, "Incorrect number of parameters. <bool>\n");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_1456, scrContext, "SetGametypeVIP: entity must be a player entity");
  Int = Scr_GetInt(scrContext, 0);
  client = Entity->client;
  if ( (Int != 0) != (client->mlgSpectatorClientInfo.isGametypeVIP != 0) )
  {
    v7 = "not active";
    client->mlgSpectatorClientInfo.isGametypeVIP = Int != 0;
    if ( Int )
      v7 = "active";
    Com_Printf(16, "SetGametypeVIP: %s for client %s\n", v7, Entity->client->sess.cs.name);
  }
}

/*
==============
PlayerCmd_GetGametypeVIP
==============
*/
void PlayerCmd_GetGametypeVIP(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1457, scrContext, "GetGametypeVIP not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1458, scrContext, "Incorrect number of parameters.\n");
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( !client )
  {
    Scr_Error(COM_ERR_1459, scrContext, "GetGametypeVIP: entity must be a player entity");
    client = Entity->client;
  }
  Scr_AddBool(scrContext, client->mlgSpectatorClientInfo.isGametypeVIP);
}

/*
==============
PlayerCmd_SetNoteworthyKillstreakActive
==============
*/
void PlayerCmd_SetNoteworthyKillstreakActive(scrContext_t *scrContext, scr_entref_t entref)
{
  int Int; 
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1460, scrContext, "SetNoteworthyKillstreakActive not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_1461, scrContext, "Incorrect number of parameters. <bool>\n");
  Int = Scr_GetInt(scrContext, 0);
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( !client )
  {
    Scr_Error(COM_ERR_1462, scrContext, "SetNoteworthyKillstreakActive: entity must be a player entity");
    client = Entity->client;
  }
  client->mlgSpectatorClientInfo.isNoteworthyKillstreakActive = Int != 0;
}

/*
==============
PlayerCmd_GetNoteworthyKillstreakActive
==============
*/
void PlayerCmd_GetNoteworthyKillstreakActive(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1463, scrContext, "GetNoteworthyKillstreakActive not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1464, scrContext, "Incorrect number of parameters.\n");
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( !client )
  {
    Scr_Error(COM_ERR_1465, scrContext, "GetNoteworthyKillstreakActive: entity must be a player entity");
    client = Entity->client;
  }
  Scr_AddBool(scrContext, client->mlgSpectatorClientInfo.isNoteworthyKillstreakActive);
}

/*
==============
PlayerCmd_SetSpecialActive
==============
*/
void PlayerCmd_SetSpecialActive(scrContext_t *scrContext, scr_entref_t entref)
{
  int Int; 
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1466, scrContext, "SetSpecialActive not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_1467, scrContext, "Incorrect number of parameters. <bool>\n");
  Int = Scr_GetInt(scrContext, 0);
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( !client )
  {
    Scr_Error(COM_ERR_1468, scrContext, "SetSpecialActive: entity must be a player entity");
    client = Entity->client;
  }
  client->mlgSpectatorClientInfo.isSpecialActive = Int != 0;
}

/*
==============
PlayerCmd_GetSpecialActive
==============
*/
void PlayerCmd_GetSpecialActive(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1469, scrContext, "GetSpecialActive not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1470, scrContext, "Incorrect number of parameters.\n");
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( !client )
  {
    Scr_Error(COM_ERR_1471, scrContext, "GetSpecialActive: entity must be a player entity");
    client = Entity->client;
  }
  Scr_AddBool(scrContext, client->mlgSpectatorClientInfo.isSpecialActive);
}

/*
==============
PlayerCmd_SetBeingRevived
==============
*/
void PlayerCmd_SetBeingRevived(scrContext_t *scrContext, scr_entref_t entref)
{
  int Int; 
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6556, scrContext, "SetBeingRevived not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_6361, scrContext, "Incorrect number of parameters. <bool>\n");
  Int = Scr_GetInt(scrContext, 0);
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( !client )
  {
    Scr_Error(COM_ERR_6362, scrContext, "SetBeingRevived: entity must be a player entity");
    client = Entity->client;
  }
  client->mlgSpectatorClientInfo.isBeingRevived = Int != 0;
}

/*
==============
PlayerCmd_GetBeingRevived
==============
*/
void PlayerCmd_GetBeingRevived(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6363, scrContext, "GetBeingRevived not allowed on front end server");
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_6364, scrContext, "Incorrect number of parameters.\n");
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( !client )
  {
    Scr_Error(COM_ERR_6365, scrContext, "GetBeingRevived: entity must be a player entity");
    client = Entity->client;
  }
  Scr_AddBool(scrContext, client->mlgSpectatorClientInfo.isBeingRevived);
}

/*
==============
PlayerCmd_IncreasePlayerConsecutiveKills
==============
*/
void PlayerCmd_IncreasePlayerConsecutiveKills(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gclient_s *client; 
  int v6; 
  const char *v7; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1472, scrContext, "IncreasePlayerConsecutiveKills: not allowed on front end server");
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( !client )
  {
    Scr_Error(COM_ERR_1473, scrContext, "IncreasePlayerConsecutiveKills: entity must be a player entity");
    client = Entity->client;
  }
  v6 = client->mlgSpectatorClientInfo.consecutiveKills + 1;
  if ( v6 <= 1024 )
  {
    ++client->mlgSpectatorClientInfo.consecutiveKills;
  }
  else
  {
    v7 = j_va("IncreasePlayerConsecutiveKills: consecutiveKills value %i is greater than max value %i", (unsigned int)v6, 1024i64);
    Scr_Error(COM_ERR_1474, scrContext, v7);
    ++Entity->client->mlgSpectatorClientInfo.consecutiveKills;
  }
}

/*
==============
PlayerCmd_ResetPlayerConsecutiveKills
==============
*/
void PlayerCmd_ResetPlayerConsecutiveKills(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1475, scrContext, "ResetPlayerConsecutiveKills: not allowed on front end server");
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( client )
  {
    client->mlgSpectatorClientInfo.consecutiveKills = 0;
  }
  else
  {
    Scr_Error(COM_ERR_1476, scrContext, "ResetPlayerConsecutiveKills: entity must be a player entity");
    Entity->client->mlgSpectatorClientInfo.consecutiveKills = 0;
  }
}

/*
==============
PlayerCmd_SetClientKillstreakIndexes
==============
*/
void PlayerCmd_SetClientKillstreakIndexes(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  __int64 Int; 
  int v6; 
  const char *v7; 
  const char *v8; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6261, scrContext, "SetClientKillstreakIndexes: not allowed on front end server");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_6262, scrContext, "SetClientKillstreakIndexes: entity must be a player entity");
  Int = Scr_GetInt(scrContext, 0);
  v6 = Scr_GetInt(scrContext, 1u);
  if ( (int)Int >= 4 )
  {
    v7 = j_va("SetClientKillstreakIndexes: the slot index value %i is greater than max value %i", (unsigned int)Int, 3i64);
    Scr_Error(COM_ERR_6263, scrContext, v7);
  }
  if ( v6 > 62 )
  {
    v8 = j_va("SetClientKillstreakIndexes: the killstreak index value %i is greater than max value %i", (unsigned int)v6, 62i64);
    Scr_Error(COM_ERR_6264, scrContext, v8);
  }
  Entity->client->mlgSpectatorClientInfo.killstreakIndexes[Int] = v6;
}

/*
==============
PlayerCmd_ResetClientKillstreakIndexes
==============
*/
void PlayerCmd_ResetClientKillstreakIndexes(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6265, scrContext, "ResetClientKillstreakIndexes: not allowed on front end server");
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( !client )
  {
    Scr_Error(COM_ERR_6266, scrContext, "ResetClientKillstreakIndexes: entity must be a player entity");
    client = Entity->client;
  }
  client->mlgSpectatorClientInfo.killstreakIndexes[0] = 0;
  Entity->client->mlgSpectatorClientInfo.killstreakIndexes[1] = 0;
  Entity->client->mlgSpectatorClientInfo.killstreakIndexes[2] = 0;
  Entity->client->mlgSpectatorClientInfo.killstreakIndexes[3] = 0;
}

/*
==============
PlayerCmd_SetClientKillstreakAvailability
==============
*/
void PlayerCmd_SetClientKillstreakAvailability(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  __int64 Int; 
  int v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6267, scrContext, "SetClientKillstreakAvailability: not allowed on front end server");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_6268, scrContext, "SetClientKillstreakAvailability: entity must be a player entity");
  Int = Scr_GetInt(scrContext, 0);
  v6 = Scr_GetInt(scrContext, 1u);
  if ( (int)Int >= 4 )
  {
    v7 = j_va("SetClientKillstreakAvailability: killstreak index %i is greater than max value %i", (unsigned int)Int, 3i64);
    Scr_Error(COM_ERR_6269, scrContext, v7);
  }
  if ( v6 < -1 )
  {
    v8 = j_va("SetClientKillstreakAvailability: availability value %i is lower than min value %i", (unsigned int)v6, 0xFFFFFFFFi64);
    Scr_Error(COM_ERR_6270, scrContext, v8);
  }
  if ( v6 > 1 )
  {
    v9 = j_va("SetClientKillstreakAvailability: availability value %i is greater than max value %i", (unsigned int)v6, 1i64);
    Scr_Error(COM_ERR_6271, scrContext, v9);
  }
  Entity->client->mlgSpectatorClientInfo.killstreakAvailability[Int] = v6;
}

/*
==============
PlayerCmd_ResetClientKillstreakAvailability
==============
*/
void PlayerCmd_ResetClientKillstreakAvailability(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6272, scrContext, "ResetClientKillstreakAvailability: not allowed on front end server");
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( !client )
  {
    Scr_Error(COM_ERR_6273, scrContext, "ResetClientKillstreakAvailability: entity must be a player entity");
    client = Entity->client;
  }
  client->mlgSpectatorClientInfo.killstreakAvailability[0] = 0;
  Entity->client->mlgSpectatorClientInfo.killstreakAvailability[1] = 0;
  Entity->client->mlgSpectatorClientInfo.killstreakAvailability[2] = 0;
  Entity->client->mlgSpectatorClientInfo.killstreakAvailability[3] = 0;
}

/*
==============
PlayerCmd_SetPowerAmmo
==============
*/
void PlayerCmd_SetPowerAmmo(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  const char *String; 
  int Int; 
  const char *v7; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6274, scrContext, "SetPowerAmmo: not allowed on front end server");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_6275, scrContext, "SetPowerAmmo: entity must be a player entity");
  String = Scr_GetString(scrContext, 0);
  Int = Scr_GetInt(scrContext, 1u);
  if ( !String || !*String )
    Scr_ParamError(COM_ERR_6276, scrContext, 0, "SetPowerAmmo: power slot input is empty");
  if ( Int < 0 )
  {
    v7 = j_va("SetPowerAmmo: ammo value %i cannot be negative", (unsigned int)Int);
    Scr_Error(COM_ERR_6277, scrContext, v7);
  }
  if ( I_strcmp(String, "primary") )
  {
    if ( I_strcmp(String, "secondary") )
      Scr_Error(COM_ERR_6278, scrContext, "SetPowerAmmo: power slot input is invalid");
    else
      Entity->client->mlgSpectatorClientInfo.powerSecondaryAmmo = Int;
  }
  else
  {
    Entity->client->mlgSpectatorClientInfo.powerPrimaryAmmo = Int;
  }
}

/*
==============
PlayerCmd_UpdateMLGAmmoInfo
==============
*/
void PlayerCmd_UpdateMLGAmmoInfo(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *v4; 
  const playerState_s *p_ps; 
  const char *v6; 
  ComErrorCode v7; 
  gentity_s *Entity; 
  GWeaponMap *Instance; 
  Weapon r_weapon; 
  Weapon v19; 

  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5025, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entref.entnum];
  p_ps = &v4->client->ps;
  if ( !p_ps )
  {
    p_ps = &v4->agent->playerState;
    if ( !p_ps )
    {
      v6 = j_va("entity %i is not a player or agent", entref.entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      p_ps = NULL;
    }
  }
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6356, scrContext, "UpdateMLGAmmoInfo: not allowed on front end server");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_6357, scrContext, "UpdateMLGAmmoInfo: entity must be a player entity");
  Instance = GWeaponMap::GetInstance();
  _RAX = BgWeaponMap::GetWeapon(Instance, Entity->client->mlgSpectatorClientInfo.weaponHandles[0]);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0D8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  Entity->client->mlgSpectatorClientInfo.inClipAmmo[0] = BG_GetAmmoInClipBothHandsForWeapon(p_ps, &r_weapon, 0);
  Entity->client->mlgSpectatorClientInfo.outClipAmmo[0] = BG_GetAmmoNotInClip(p_ps, &r_weapon, 0);
  _RAX = BgWeaponMap::GetWeapon(Instance, Entity->client->mlgSpectatorClientInfo.weaponHandles[1]);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0D8h+var_68.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0D8h+var_68.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0D8h+var_68.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&v19.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  Entity->client->mlgSpectatorClientInfo.inClipAmmo[1] = BG_GetAmmoInClipBothHandsForWeapon(p_ps, &v19, 0);
  Entity->client->mlgSpectatorClientInfo.outClipAmmo[1] = BG_GetAmmoNotInClip(p_ps, &v19, 0);
}

/*
==============
PlayerCmd_UpdateCurrentWeapon
==============
*/
void PlayerCmd_UpdateCurrentWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  gentity_s *v5; 
  BgWeaponHandle *client; 
  const char *v7; 
  ComErrorCode v8; 
  gentity_s *Entity; 
  GWeaponMap *Instance; 
  gclient_s *v16; 
  __m256i v18; 
  __m256i v19; 
  __m256i v20; 

  v2 = 0;
  if ( entref.entclass )
  {
    v7 = "not an entity";
    v8 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5056, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v5 = &g_entities[entref.entnum];
  client = (BgWeaponHandle *)v5->client;
  if ( !client )
  {
    client = (BgWeaponHandle *)v5->agent;
    if ( !client )
    {
      v7 = j_va("entity %i is not a player or agent", entref.entnum);
      v8 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v8, scrContext, v7);
      client = NULL;
    }
  }
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6394, scrContext, "UpdateCurrentWeapon: not allowed on front end server");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_6395, scrContext, "UpdateCurrentWeapon: entity must be a player entity");
  Instance = GWeaponMap::GetInstance();
  _RAX = BgWeaponMap::GetWeapon(Instance, client[455]);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+0B8h+var_88], ymm0
  }
  _RAX = BgWeaponMap::GetWeapon(Instance, Entity->client->mlgSpectatorClientInfo.weaponHandles[0]);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+0B8h+var_68], ymm0
  }
  _RAX = BgWeaponMap::GetWeapon(Instance, Entity->client->mlgSpectatorClientInfo.weaponHandles[1]);
  v16 = Entity->client;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+0B8h+var_48], ymm0
  }
  if ( v18.m256i_i16[0] == v19.m256i_i16[0] )
  {
    v16->mlgSpectatorClientInfo.currentWeaponUsed = 1;
  }
  else
  {
    if ( v18.m256i_i16[0] == v20.m256i_i16[0] )
      v2 = 2;
    v16->mlgSpectatorClientInfo.currentWeaponUsed = v2;
  }
}

/*
==============
PlayerCmd_SetPowerProgress
==============
*/
void PlayerCmd_SetPowerProgress(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  const char *String; 
  const char *v9; 
  const char *v10; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6279, scrContext, "SetPowerProgress: not allowed on front end server");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_6280, scrContext, "SetPowerProgress: entity must be a player entity");
  String = Scr_GetString(scrContext, 0);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42c80000
    vcvttss2si ebx, xmm1
  }
  if ( !String || !*String )
    Scr_ParamError(COM_ERR_6281, scrContext, 0, "SetPowerProgress: power slot input is empty");
  if ( _EBX < 0 )
  {
    v9 = j_va("SetPowerProgress: progress value %i cannot be negative", (unsigned int)_EBX);
    Scr_Error(COM_ERR_6282, scrContext, v9);
  }
  if ( _EBX > 100 )
  {
    v10 = j_va("SetPowerProgress: progress value %i cannot be higher than %i", (unsigned int)_EBX, 100i64);
    Scr_Error(COM_ERR_6283, scrContext, v10);
  }
  if ( I_strcmp(String, "primary") )
  {
    if ( I_strcmp(String, "secondary") )
      Scr_Error(COM_ERR_6284, scrContext, "SetPowerProgress: power slot input is invalid");
    else
      Entity->client->mlgSpectatorClientInfo.powerSecondaryProgress = _EBX;
  }
  else
  {
    Entity->client->mlgSpectatorClientInfo.powerPrimaryProgress = _EBX;
  }
}

/*
==============
PlayerCmd_SetMLGDamageDone
==============
*/
void PlayerCmd_SetMLGDamageDone(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  int Int; 
  int v6; 
  const char *v7; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6313, scrContext, "SetMLGDamageDone: not allowed on front end server");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_6314, scrContext, "SetMLGDamageDone: entity must be a player entity");
  Int = Scr_GetInt(scrContext, 0);
  v6 = Int;
  if ( Int < 0 )
  {
    v7 = j_va("SetMLGDamageDone: damage done %i cannot be negative", (unsigned int)Int);
    Scr_Error(COM_ERR_6315, scrContext, v7);
  }
  if ( v6 > 0x20000 )
    v6 = 0x20000;
  Entity->client->mlgSpectatorClientInfo.damageDone = v6;
}

/*
==============
PlayerCmd_SetMLGDominationPoint
==============
*/
void PlayerCmd_SetMLGDominationPoint(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_6374, scrContext, "SetMLGDominationPoint: not allowed on front end server");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_6375, scrContext, "SetMLGDominationPoint: entity must be a player entity");
  Entity->client->mlgSpectatorClientInfo.dominationPoint = Scr_GetInt(scrContext, 0);
}

/*
==============
PlayerCmd_SetPlayerSuperMeterProgress
==============
*/
void PlayerCmd_SetPlayerSuperMeterProgress(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  int v8; 
  const char *v9; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1477, scrContext, "SetPlayerSuperMeterProgress: not allowed on front end server");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_1478, scrContext, "SetPlayerSuperMeterProgress: entity must be a player entity");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42c80000
    vcvttss2si eax, xmm1
  }
  v8 = (unsigned __int16)_EAX;
  if ( (unsigned __int16)_EAX > 0x100u )
  {
    v9 = j_va("SetPlayerSuperMeterProgress: super meter value %hu is greater than max value %i", (unsigned __int16)_EAX, 256i64);
    Scr_Error(COM_ERR_1479, scrContext, v9);
  }
  Entity->client->mlgSpectatorClientInfo.superMeterProgress = v8;
}

/*
==============
PlayerCmd_SetMLGFollowDroneActive
==============
*/
void PlayerCmd_SetMLGFollowDroneActive(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1480, scrContext, "SetMLGFollowDroneActive: not allowed on front end server");
  Entity = GetEntity(entref);
  if ( !Entity->client )
    Scr_Error(COM_ERR_1481, scrContext, "SetMLGFollowDroneActive: entity must be a player entity");
  if ( !Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_1482, scrContext, "SetMLGFollowDroneActive: needs 1 argument");
  Entity->client->mlgSpectatorClientInfo.followDroneActive = Scr_GetInt(scrContext, 0);
}

/*
==============
PlayerCmd_IsMLGFollowDroneActive
==============
*/
void PlayerCmd_IsMLGFollowDroneActive(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gclient_s *client; 

  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    Scr_Error(COM_ERR_1483, scrContext, "IsMLGFollowDroneActive not allowed on front end server");
  Entity = GetEntity(entref);
  client = Entity->client;
  if ( !client )
  {
    Scr_Error(COM_ERR_1484, scrContext, "IsMLGFollowDroneActive: entity must be a player entity");
    client = Entity->client;
  }
  Scr_AddBool(scrContext, client->mlgSpectatorClientInfo.followDroneActive);
}

/*
==============
PlayerCmdMP_WeaponLockFinalize
==============
*/
void PlayerCmdMP_WeaponLockFinalize(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  playerState_s *p_ps; 
  const char *v6; 
  unsigned int NumParam; 
  gclient_s *client; 
  unsigned int v9; 
  gagent_s *agent; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3682, scrContext, "not an entity");
    v4 = NULL;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5316, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  p_ps = &v4->client->ps;
  if ( !p_ps )
  {
    p_ps = &v4->agent->playerState;
    if ( !p_ps )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3679, scrContext, v6);
LABEL_9:
      p_ps = NULL;
    }
  }
  PlayerCmd_WeaponLockFinalize(scrContext, p_ps);
  NumParam = Scr_GetNumParam(scrContext);
  client = v4->client;
  v9 = NumParam;
  if ( client )
  {
    if ( NumParam < 2 )
    {
      *(_QWORD *)client->lockedTargetOffset.v = 0i64;
      client->lockedTargetOffset.v[2] = 0.0;
    }
    else
    {
      Scr_GetVector(scrContext, 1u, &client->lockedTargetOffset);
    }
  }
  else
  {
    agent = v4->agent;
    if ( agent )
    {
      if ( v9 < 2 )
      {
        *(_QWORD *)agent->lockedTargetOffset.v = 0i64;
        agent->lockedTargetOffset.v[2] = 0.0;
      }
      else
      {
        Scr_GetVector(scrContext, 1u, &agent->lockedTargetOffset);
      }
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5337, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TARGET_SYSTEM ))", "%s\n\tThis has to be disabled to match FireWeapon()", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TARGET_SYSTEM )") )
    __debugbreak();
  if ( v9 >= 3 && Scr_GetInt(scrContext, 2u) )
    p_ps->weapCommon.weapLockFlags |= 4u;
  else
    p_ps->weapCommon.weapLockFlags |= 8u;
}

/*
==============
PlayerCmdMP_SetBlurForPlayer
==============
*/
void PlayerCmdMP_SetBlurForPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v6; 
  ComErrorCode v7; 
  EntityClass entclass; 
  float outBlurFinalValue; 
  int outBlurTimeMs; 

  entclass = entref.entclass;
  entnum = entref.entnum;
  PlayerCmd_SetBlurForPlayer(scrContext, &outBlurTimeMs, &outBlurFinalValue);
  if ( entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5354, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  _RDX = &v4->client->ps.commandTime;
  if ( !_RDX )
  {
    _RDX = &v4->agent->playerState.commandTime;
    if ( !_RDX )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      v7 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v7, scrContext, v6);
      _RDX = NULL;
    }
  }
  __asm
  {
    vmovss  xmm0, [rsp+38h+outBlurFinalValue]
    vmovss  dword ptr [rdx+354h], xmm0
  }
  _RDX[214] = level.time + outBlurTimeMs;
}

/*
==============
PlayerCmdMP_PlayLocalSound
==============
*/
void PlayerCmdMP_PlayLocalSound(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  const char *String; 
  unsigned __int16 v8; 
  const char *v9; 
  unsigned int outNumPlayers[4]; 
  unsigned __int16 outPlayerEntIds[200]; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5364, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client && !v5->agent )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v6);
    }
  }
  if ( SV_GetAgentControlledByPlayerNum(v5->s.number, NULL) || !SV_BotIsBotEnt(v5) && !SV_IsAgentEntity(v5) )
  {
    String = Scr_GetString(scrContext, 0);
    v8 = G_CStringMP_SoundAliasIndex(String);
    if ( !v8 )
    {
      v9 = j_va("invalid sound alias '%s'", String);
      Scr_ParamError(COM_ERR_1485, scrContext, 0, v9);
    }
    PlayerCmd_PlayLocalSound(v5, v8, 0);
    if ( Scr_GetNumParam(scrContext) >= 4 && Scr_GetInt(scrContext, 3u) )
    {
      GUtilsMP::GetPlayersSpectatingPlayer(v5, outNumPlayers, outPlayerEntIds);
      if ( outNumPlayers[0] > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5384, ASSERT_TYPE_ASSERT, "(numSpectators <= 200)", (const char *)&queryFormat, "numSpectators <= MAX_CLIENTS_MP") )
        __debugbreak();
      if ( outNumPlayers[0] )
      {
        do
          PlayerCmd_PlayLocalSound(&g_entities[outPlayerEntIds[v2++]], v8, 0);
        while ( v2 < outNumPlayers[0] );
      }
    }
  }
}

/*
==============
PlayerCmdMP_StopLocalSound
==============
*/
void PlayerCmdMP_StopLocalSound(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  const char *String; 
  unsigned __int16 v7; 
  const char *v8; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5397, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  if ( SV_GetAgentControlledByPlayerNum(v4->s.number, NULL) || !SV_BotIsBotEnt(v4) && !SV_IsAgentEntity(v4) )
  {
    String = Scr_GetString(scrContext, 0);
    v7 = G_CStringMP_SoundAliasIndex(String);
    if ( !v7 )
    {
      v8 = j_va("invalid sound alias: '%s'", String);
      Scr_ParamError(COM_ERR_1486, scrContext, 0, v8);
    }
    PlayerCmd_StopLocalSound(v4, v7);
  }
}

/*
==============
PlayerCmdMP_PlayAnnouncerSound
==============
*/
void PlayerCmdMP_PlayAnnouncerSound(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  const char *String; 
  char *v8; 
  char v9; 
  int v10; 
  char v11; 
  const char *v12; 
  int number; 
  SvClient *CommonClient; 
  int outControllingClientNum; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5430, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client && !v5->agent )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v6);
    }
  }
  if ( SV_GetAgentControlledByPlayerNum(v5->s.number, NULL) || !SV_BotIsBotEnt(v5) && !SV_IsAgentEntity(v5) )
  {
    String = Scr_GetString(scrContext, 0);
    v8 = (char *)String;
    if ( String && (v9 = *String) != 0 )
    {
      v2 = 5381;
      do
      {
        v10 = v9;
        ++v8;
        v11 = v9 | 0x20;
        if ( (unsigned int)(v10 - 65) >= 0x1A )
          v11 = v10;
        v2 = 65599 * v2 + v11;
        v9 = *v8;
      }
      while ( *v8 );
      if ( !v2 )
        v2 = 1;
    }
    else
    {
      v12 = j_va("invalid sound alias '%s'", String);
      Scr_ParamError(COM_ERR_1487, scrContext, 0, v12);
    }
    number = v5->s.number;
    if ( SV_GetAgentControlledByPlayerNum(number, &outControllingClientNum) )
      number = outControllingClientNum;
    CommonClient = SvClient::GetCommonClient(number);
    MSG_Init(&buf, data, 1020);
    MSG_WriteByte(&buf, 67i64);
    MSG_WriteLong(&buf, v2);
    SV_Game_SendServerCommandMsg(CommonClient, SV_CMD_RELIABLE, &buf);
  }
}

/*
==============
PlayerCmdMP_SetActionSlot
==============
*/
void PlayerCmdMP_SetActionSlot(scrContext_t *scrContext, scr_entref_t entref)
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
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5466, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
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
  PlayerCmd_SetActionSlot(scrContext, p_ps, 0);
}

/*
==============
PlayerCmdMP_GetViewmodel
==============
*/
void PlayerCmdMP_GetViewmodel(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int viewmodelIndex; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5475, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  if ( SV_IsAgentEntity(v4) )
  {
    if ( !v4->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5479, ASSERT_TYPE_ASSERT, "(pSelf->agent)", (const char *)&queryFormat, "pSelf->agent") )
      __debugbreak();
    viewmodelIndex = v4->agent->playerState.viewmodelIndex;
  }
  else
  {
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5485, ASSERT_TYPE_ASSERT, "( pSelf->client )", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
    viewmodelIndex = v4->client->sess.viewmodelIndex;
  }
  PlayerCmd_GetViewmodel(scrContext, viewmodelIndex);
}

/*
==============
PlayerCmdMP_SetViewmodel
==============
*/
void PlayerCmdMP_SetViewmodel(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int *p_viewmodelIndex; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5496, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  if ( SV_IsAgentEntity(v4) )
  {
    if ( !v4->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5500, ASSERT_TYPE_ASSERT, "(pSelf->agent)", (const char *)&queryFormat, "pSelf->agent") )
      __debugbreak();
    p_viewmodelIndex = &v4->agent->playerState.viewmodelIndex;
  }
  else
  {
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5505, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
    p_viewmodelIndex = &v4->client->sess.viewmodelIndex;
  }
  PlayerCmd_SetViewmodel(scrContext, p_viewmodelIndex);
}

/*
==============
PlayerCmdMP_SetOrigin
==============
*/
void PlayerCmdMP_SetOrigin(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5516, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  PlayerCmd_SetOrigin(scrContext, v4);
  SV_LinkEntity(v4);
  if ( SV_BotIsBotEnt(v4) )
    SV_BotClearGoalAndEnemy(v4);
}

/*
==============
PlayerCmdMP_SetAngles
==============
*/
void PlayerCmdMP_SetAngles(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5532, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  PlayerCmd_SetAngles(scrContext, v4);
  if ( !v4->tagInfo )
    v4->r.currentAngles.v[0] = 0.0;
}

/*
==============
PlayerCmdMP_GetCurrentWeapon
==============
*/
void PlayerCmdMP_GetCurrentWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  PlayerCmd_GetCurrentWeapon(scrContext, entref, 0, 0);
}

/*
==============
PlayerCmdMP_GetCurrentPrimaryWeapon
==============
*/
void PlayerCmdMP_GetCurrentPrimaryWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  PlayerCmd_GetCurrentWeapon(scrContext, entref, 1, 0);
}

/*
==============
PlayerCmd_SetKillcamEntSticksToLookAtEnt
==============
*/
void PlayerCmd_SetKillcamEntSticksToLookAtEnt(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  const char *v6; 
  int Int; 
  gclient_s *client; 
  int killCamFlags; 
  unsigned int v10; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3682, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5644, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->client )
      goto LABEL_11;
    if ( !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3679, scrContext, v5);
    }
  }
  if ( !v4->client )
  {
    v6 = j_va("SetKillcamEntSticksToLookAtEnt(): entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_1489, scrContext, v6);
    return;
  }
LABEL_11:
  Int = Scr_GetInt(scrContext, 0);
  client = v4->client;
  killCamFlags = client->sess.killCamFlags;
  if ( Int )
    v10 = killCamFlags | 1;
  else
    v10 = killCamFlags & 0xFFFFFFFE;
  client->sess.killCamFlags = v10;
}

/*
==============
PlayerCmd_DisableExecutionAttack
==============
*/
void PlayerCmd_DisableExecutionAttack(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5676, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  if ( SV_IsAgentEntity(v4) )
    v4->agent->flags |= 0x200u;
  else
    v4->client->flags |= 0x1000u;
}

/*
==============
PlayerCmd_EnableExecutionAttack
==============
*/
void PlayerCmd_EnableExecutionAttack(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5701, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  if ( SV_IsAgentEntity(v4) )
    v4->agent->flags &= ~0x200u;
  else
    v4->client->flags &= ~0x1000u;
}

/*
==============
PlayerCmd_DisableExecutionVictim
==============
*/
void PlayerCmd_DisableExecutionVictim(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5726, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  if ( SV_IsAgentEntity(v4) )
    v4->agent->flags |= 0x400u;
  else
    v4->client->flags |= 0x2000u;
}

/*
==============
PlayerCmd_EnableExecutionVictim
==============
*/
void PlayerCmd_EnableExecutionVictim(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5751, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent )
    {
      v5 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v5);
    }
  }
  if ( SV_IsAgentEntity(v4) )
    v4->agent->flags &= ~0x400u;
  else
    v4->client->flags &= ~0x2000u;
}

/*
==============
PlayerCmd_IsInExecutionAttack
==============
*/
void PlayerCmd_IsInExecutionAttack(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const playerState_s *p_ps; 
  const char *v7; 
  ComErrorCode v8; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v7 = "not an entity";
    v8 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5776, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v5 = &g_entities[entnum];
  p_ps = &v5->client->ps;
  if ( !p_ps )
  {
    p_ps = &v5->agent->playerState;
    if ( !p_ps )
    {
      v7 = j_va("entity %i is not a player or agent", entnum);
      v8 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v8, scrContext, v7);
      p_ps = NULL;
    }
  }
  if ( BG_IsPlayerInExecution(p_ps) && !p_ps->activeExecutionIsVictim )
    v2 = 1;
  Scr_AddBool(scrContext, v2);
}

/*
==============
PlayerCmd_IsInExecutionVictim
==============
*/
void PlayerCmd_IsInExecutionVictim(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const playerState_s *p_ps; 
  const char *v7; 
  ComErrorCode v8; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v7 = "not an entity";
    v8 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5795, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v5 = &g_entities[entnum];
  p_ps = &v5->client->ps;
  if ( !p_ps )
  {
    p_ps = &v5->agent->playerState;
    if ( !p_ps )
    {
      v7 = j_va("entity %i is not a player or agent", entnum);
      v8 = COM_ERR_3679;
LABEL_9:
      Scr_ObjectError(v8, scrContext, v7);
      p_ps = NULL;
    }
  }
  if ( BG_IsPlayerInExecution(p_ps) && p_ps->activeExecutionIsVictim )
    v2 = 1;
  Scr_AddBool(scrContext, v2);
}

/*
==============
PlayerCmd_GetExecutionPartner
==============
*/
void PlayerCmd_GetExecutionPartner(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const playerState_s *p_ps; 
  const char *v6; 
  ComErrorCode v7; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v6 = "not an entity";
    v7 = COM_ERR_3682;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5814, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
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
  if ( BG_IsPlayerInExecution(p_ps) )
  {
    if ( G_IsEntityInUse(p_ps->activeExecutionPartnerEntNum) )
      GScr_AddEntity(&g_entities[p_ps->activeExecutionPartnerEntNum]);
  }
}

/*
==============
PlayerCmd_HasLastGroundOrigin
==============
*/
void PlayerCmd_HasLastGroundOrigin(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  gclient_s *client; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5839, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  client = v5->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5842, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
    __debugbreak();
  if ( client->ps.pm_type <= 1u )
    v2 = ((unsigned int)client->flags >> 14) & 1;
  Scr_AddBool(scrContext, v2);
}

/*
==============
PlayerCmd_GetLastGroundOrigin
==============
*/
void PlayerCmd_GetLastGroundOrigin(scrContext_t *scrContext, scr_entref_t entref)
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
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5867, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  client = v4->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5870, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
    __debugbreak();
  if ( client->ps.pm_type <= 1u && (client->flags & 0x4000) != 0 )
    Scr_AddVector(scrContext, client->lastGroundOrigin.v);
  else
    Scr_Error(COM_ERR_6157, scrContext, "Trying to retrieve the last ground position for a player that has not spawned or was never on the ground. Test HasLastGroundOrigin first.");
}

/*
==============
PlayerCmd_SetHideNameplate
==============
*/
void PlayerCmd_SetHideNameplate(scrContext_t *scrContext, scr_entref_t entref)
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
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5898, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->client )
      goto LABEL_10;
    v5 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v5);
  }
  if ( !v4->client )
  {
    Scr_Error(COM_ERR_6223, scrContext, "SetHideNameplate is only valid for clients.");
    return;
  }
LABEL_10:
  Int = Scr_GetInt(scrContext, 0);
  p_otherFlags = &v4->client->ps.otherFlags;
  if ( Int )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, GameModeFlagValues::ms_mpValue, 0x3Au);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, GameModeFlagValues::ms_mpValue, 0x3Au);
}

/*
==============
PlayerCmd_GetClosestEnemy
==============
*/
void PlayerCmd_GetClosestEnemy(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *v7; 
  scrContext_t *v8; 
  unsigned int entnum; 
  GUtils *v10; 
  const char *v12; 
  GUtils_vtbl *v13; 
  team_t v15; 
  unsigned int v29; 
  const char *v31; 
  team_t v32; 
  __int64 v33; 
  __int64 v34; 
  bool v36; 
  const playerState_s *EntityPlayerStateConst; 
  int v45; 
  int *ignoreEnts; 
  PhysicsQuery_Collected<unsigned short> *collectedEnts; 
  int v51; 
  EntityClass entclass; 
  PhysicsQuery_Collected<unsigned short> v53; 
  GUtils *v54; 
  scrContext_t *scrContexta; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  char v58; 

  __asm { vmovaps [rsp+2D0h+var_60], xmm8 }
  v7 = NULL;
  scrContexta = scrContext;
  v8 = scrContext;
  entclass = entref.entclass;
  entnum = entref.entnum;
  v53.ids = (unsigned __int16 *)&v58;
  v53.count = 0;
  v53.countMax = 200;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v10 = GUtils::ms_gUtils;
  v54 = GUtils::ms_gUtils;
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_3681, v8, "not an entity");
    _R12 = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 5941, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    _R12 = &g_entities[entnum];
    if ( !_R12->client )
    {
      v12 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, v8, v12);
    }
  }
  v13 = v10->__vftable;
  __asm
  {
    vmovss  xmm8, cs:__real@7f7fffff
    vmovaps [rsp+2D0h+var_40], xmm6
    vmovaps [rsp+2D0h+var_70], xmm9
  }
  v15 = v13->GetEntityTeam(v10, _R12);
  if ( v15 == (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) )
    goto LABEL_48;
  __asm { vmovaps [rsp+2D0h+var_50], xmm7 }
  *(double *)&_XMM0 = Scr_GetFloat(v8, 0);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(v8, 1u);
  __asm { vmovaps xmm7, xmm0 }
  v51 = Scr_GetNumParam(v8) <= 2 ? 0 : Scr_GetInt(v8, 2u);
  __asm
  {
    vmovss  xmm4, dword ptr [r12+130h]
    vmovss  xmm5, dword ptr [r12+134h]
    vmulss  xmm3, xmm7, cs:__real@3f000000
    vaddss  xmm2, xmm3, dword ptr [r12+138h]
    vsubss  xmm0, xmm4, xmm6
    vsubss  xmm1, xmm5, xmm6
    vmovss  dword ptr [rbp+1D0h+aabbMin], xmm0
    vmovss  dword ptr [rbp+1D0h+aabbMin+4], xmm1
    vsubss  xmm0, xmm2, xmm3
    vaddss  xmm1, xmm4, xmm6
    vmovss  dword ptr [rbp+1D0h+aabbMin+8], xmm0
    vmovss  dword ptr [rbp+1D0h+aabbMax], xmm1
    vaddss  xmm0, xmm5, xmm6
    vaddss  xmm1, xmm2, xmm3
    vmovss  dword ptr [rbp+1D0h+aabbMax+4], xmm0
    vmovss  dword ptr [rbp+1D0h+aabbMax+8], xmm1
    vmulss  xmm9, xmm6, xmm6
  }
  PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 33570816, 0, NULL, &v53, NULL, 1);
  v29 = 0;
  __asm { vmovaps xmm7, [rsp+2D0h+var_50] }
  if ( !v53.count )
    goto LABEL_48;
  v31 = "g_entities != nullptr";
  v32 = v15;
  do
  {
    v33 = v53.ids[v29];
    if ( (unsigned int)v33 >= 0x800 )
    {
      LODWORD(collectedEnts) = 2048;
      LODWORD(ignoreEnts) = v53.ids[v29];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEnts, collectedEnts) )
        __debugbreak();
      v31 = "g_entities != nullptr";
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v34 = v33;
    if ( g_entities[v33].r.isInUse != g_entityIsInUse[v33] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v33] )
    {
      if ( (unsigned int)v33 >= 0x800 )
      {
        LODWORD(collectedEnts) = 2048;
        LODWORD(ignoreEnts) = v33;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEnts, collectedEnts) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      _RBX = &g_entities[v34];
      v36 = v51 == 0;
      if ( !v51 || _RBX->health && (EntityPlayerStateConst = G_GetEntityPlayerStateConst(&g_entities[v34])) != NULL && (v36 = EntityPlayerStateConst->pm_type <= 1u) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+130h]
          vmovss  xmm1, dword ptr [rbx+134h]
          vsubss  xmm4, xmm0, dword ptr [r12+130h]
          vsubss  xmm2, xmm1, dword ptr [r12+134h]
          vmulss  xmm3, xmm2, xmm2
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm6, xmm3, xmm0
          vcomiss xmm6, xmm9
        }
        if ( v36 )
        {
          __asm { vcomiss xmm6, xmm8 }
          if ( v36 )
          {
            v45 = ((__int64 (__fastcall *)(GUtils *, gentity_s *, const char *))v54->GetEntityTeam)(v54, _RBX, v31);
            if ( (v32 == TEAM_ZERO || v32 != v45) && (unsigned int)(v45 - 201) > 1 && v45 != (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) )
            {
              v7 = _RBX;
              __asm { vmovaps xmm8, xmm6 }
            }
          }
        }
      }
    }
    ++v29;
    v31 = "g_entities != nullptr";
  }
  while ( v29 < v53.count );
  v8 = scrContexta;
  if ( v7 )
    Scr_AddEntityNum(scrContexta, v7->s.number, ENTITY_CLASS_GENTITY);
  else
LABEL_48:
    Scr_AddUndefined(v8);
  __asm
  {
    vmovaps xmm9, [rsp+2D0h+var_70]
    vmovaps xmm6, [rsp+2D0h+var_40]
    vmovaps xmm8, [rsp+2D0h+var_60]
  }
}

/*
==============
PlayerCmd_SetLastStandReviving
==============
*/
void PlayerCmd_SetLastStandReviving(scrContext_t *scrContext, scr_entref_t entref)
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
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 6027, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  if ( !v4->client )
  {
    v5 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v5);
LABEL_8:
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 6028, ASSERT_TYPE_ASSERT, "( pSelf->client )", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
  }
  v4->client->ps.lastStandReviving = Scr_GetInt(scrContext, 0) != 0;
}

/*
==============
PlayerCmd_SetLastStandSelfReviving
==============
*/
void PlayerCmd_SetLastStandSelfReviving(scrContext_t *scrContext, scr_entref_t entref)
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
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 6047, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  if ( !v4->client )
  {
    v5 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v5);
LABEL_8:
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 6048, ASSERT_TYPE_ASSERT, "( pSelf->client )", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
  }
  v4->client->ps.lastStandSelfReviving = Scr_GetInt(scrContext, 0) != 0;
}

/*
==============
PlayerCmd_ValidateLoadoutOwnership
==============
*/
void PlayerCmd_ValidateLoadoutOwnership(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
LABEL_8:
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 6068, ASSERT_TYPE_ASSERT, "( pSelf->client )", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
    return;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 6067, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  if ( !v4->client )
  {
    v5 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    goto LABEL_8;
  }
}

/*
==============
PlayerCmd_ValidateOperatorOwnership
==============
*/
void PlayerCmd_ValidateOperatorOwnership(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
LABEL_8:
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 6112, ASSERT_TYPE_ASSERT, "( pSelf->client )", (const char *)&queryFormat, "pSelf->client") )
      __debugbreak();
    return;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 6111, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  if ( !v4->client )
  {
    v5 = j_va("entity %i is not a player", entnum);
    Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    goto LABEL_8;
  }
}

/*
==============
G_ClientScrMP_BodyEnd
==============
*/
void G_ClientScrMP_BodyEnd(gentity_s *ent)
{
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0x1Bu);
  ent->r.svFlags = 0;
  SV_LinkEntity(ent);
}

/*
==============
G_ClientScrMP_CorpseToMovingPlatformTrace
==============
*/

__int64 __fastcall G_ClientScrMP_CorpseToMovingPlatformTrace(const gentity_s *corpse, trace_t *trace, double traceLength, vec3_t *outEndPos)
{
  const dvar_t *v11; 
  __int64 clientNum; 
  gentity_s *v13; 
  const playerState_s *p_ps; 
  GMovingPlatformClient *ClientFromGEntity; 
  bool v37; 
  int v38; 
  int v39; 
  __int64 result; 
  unsigned __int8 *priorityMap; 
  __int64 v57; 
  vec3_t start; 
  vec3_t end; 
  vec3_t outUp; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  _R15 = outEndPos;
  _RBX = corpse;
  __asm { vmovaps xmmword ptr [r11-58h], xmm9 }
  _RSI = trace;
  __asm { vmovaps xmm9, xmm2 }
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
    goto LABEL_29;
  v11 = DVARBOOL_killswitch_corpse_moving_platform_link_fix_enabled;
  if ( !DVARBOOL_killswitch_corpse_moving_platform_link_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_corpse_moving_platform_link_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled && _RBX->s.eType == ET_PLAYER_CORPSE )
  {
    clientNum = _RBX->s.clientNum;
    if ( (_DWORD)clientNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1072, ASSERT_TYPE_ASSERT, "( corpse->s.clientNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "corpse->s.clientNum", "ENTITYNUM_NONE", 2047, 2047) )
      __debugbreak();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( _RBX->s.clientNum >= ComCharacterLimits::ms_gameData.m_clientCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v57) = ComCharacterLimits::ms_gameData.m_clientCount;
      LODWORD(priorityMap) = _RBX->s.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1073, ASSERT_TYPE_ASSERT, "(unsigned)( corpse->s.clientNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "corpse->s.clientNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", priorityMap, v57) )
        __debugbreak();
    }
    v13 = &g_entities[clientNum];
    if ( !v13->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1076, ASSERT_TYPE_ASSERT, "(clientEnt->client)", (const char *)&queryFormat, "clientEnt->client") )
      __debugbreak();
    p_ps = &v13->client->ps;
    ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(v13);
    if ( !ClientFromGEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1080, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
      __debugbreak();
    BGMovingPlatformClient::ResolvePlatformUp(ClientFromGEntity, p_ps, &outUp);
    _RDI = DVARFLT_corpse_moving_platform_link_fix_start_offset;
    if ( !DVARFLT_corpse_moving_platform_link_fix_start_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "corpse_moving_platform_link_fix_start_offset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+28h]
      vmulss  xmm0, xmm3, dword ptr [rbp+57h+outUp]
      vaddss  xmm1, xmm0, dword ptr [rbx+130h]
      vmulss  xmm0, xmm3, dword ptr [rbp+57h+outUp+4]
      vmovss  xmm5, dword ptr [rbx+138h]
      vmovss  dword ptr [rbp+57h+start], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+134h]
      vmulss  xmm0, xmm3, dword ptr [rbp+57h+outUp+8]
      vxorps  xmm3, xmm9, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm2, xmm3, dword ptr [rbp+57h+outUp+4]
      vmovss  dword ptr [rbp+57h+start+4], xmm1
      vaddss  xmm1, xmm0, xmm5
      vmulss  xmm0, xmm3, dword ptr [rbp+57h+outUp]
      vmovss  dword ptr [rbp+57h+start+8], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+130h]
      vaddss  xmm0, xmm2, dword ptr [rbx+134h]
      vmovss  dword ptr [rbp+57h+end], xmm1
      vmulss  xmm1, xmm3, dword ptr [rbp+57h+outUp+8]
      vaddss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rbp+57h+end+8], xmm2
      vmovss  dword ptr [rbp+57h+end+4], xmm0
    }
  }
  else
  {
LABEL_29:
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+130h]
      vmovss  xmm0, dword ptr [rbx+134h]
      vmovss  xmm2, dword ptr [rbx+138h]
      vmovss  dword ptr [rbp+57h+start], xmm1
      vmovss  dword ptr [rbp+57h+start+4], xmm0
      vmovss  dword ptr [rbp+57h+end], xmm1
      vmovss  dword ptr [rbp+57h+end+4], xmm0
      vaddss  xmm0, xmm2, cs:__real@3e000000
      vsubss  xmm1, xmm2, xmm9
      vmovss  dword ptr [rbp+57h+start+8], xmm0
      vmovss  dword ptr [rbp+57h+end+8], xmm1
    }
  }
  v37 = Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100);
  v38 = 8193;
  if ( v37 )
    v38 = 41969041;
  G_Main_LocationalTrace(_RSI, &start, &end, _RBX->s.number, v38, NULL);
  v39 = GMovingPlatforms::TraceHitMovingPlatform(_RSI);
  __asm { vmovaps xmm9, [rsp+0E0h+var_58+8] }
  if ( !v39 || _RSI->allsolid || _RSI->startsolid )
  {
    result = 0i64;
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rsi]
      vmovss  xmm0, dword ptr [rbp+57h+end]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+start]
      vmovss  xmm0, dword ptr [rbp+57h+end+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbp+57h+start]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+4]
      vmovss  xmm0, dword ptr [rbp+57h+end+8]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+8]
      vmovss  dword ptr [r15], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+4]
      vmulss  xmm2, xmm1, xmm6
      vmovss  dword ptr [r15+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+8]
      vmovss  dword ptr [r15+8], xmm3
    }
    result = 1i64;
  }
  __asm { vmovaps xmm6, [rsp+0E0h+var_48+8] }
  return result;
}

/*
==============
G_ClientScrMP_LinkCorpseToMovingPlatform
==============
*/
void G_ClientScrMP_LinkCorpseToMovingPlatform(gentity_s *corpse, const trace_t *trace, const vec3_t *endPos)
{
  gentity_s *v5; 
  tmat43_t<vec3_t> v9; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> out; 

  _RDI = corpse;
  corpse->r.currentOrigin = *endPos;
  corpse->flags.m_flags[0] |= 0x200u;
  if ( !BGMovingPlatforms::IsMovingPlatform(trace->hitId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1126, ASSERT_TYPE_ASSERT, "(BGMovingPlatforms::IsMovingPlatform( trace->hitId ))", (const char *)&queryFormat, "BGMovingPlatforms::IsMovingPlatform( trace->hitId )") )
    __debugbreak();
  v5 = &g_entities[trace->hitId];
  G_EntLinkTo(_RDI, v5, (scr_string_t)0, 0, NULL);
  AnglesAndOriginToMatrix43(&v5->r.currentAngles, &v5->r.currentOrigin, &result);
  MatrixInverseOrthogonal43(&result, &out);
  AnglesAndOriginToMatrix43(&_RDI->r.currentAngles, &_RDI->r.currentOrigin, &result);
  MatrixMultiply43(&result, &out, &v9);
  AxisToAngles((const tmat33_t<vec3_t> *)&v9, &_RDI->s.lerp.apos.trDelta);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+var_A8+24h]
    vmovss  xmm1, dword ptr [rsp+0D8h+var_A8+28h]
    vmovss  dword ptr [rdi+28h], xmm0
    vmovss  xmm0, dword ptr [rsp+0D8h+var_A8+2Ch]
    vmovss  dword ptr [rdi+30h], xmm0
    vmovss  dword ptr [rdi+2Ch], xmm1
  }
}

/*
==============
G_ClientScrMP_TryToLinkCorpseToMovingPlatform
==============
*/
__int64 G_ClientScrMP_TryToLinkCorpseToMovingPlatform(gentity_s *corpse)
{
  int hitId; 
  gentity_s *v8; 
  __int64 v11; 
  vec3_t outEndPos; 
  tmat43_t<vec3_t> v14; 
  tmat43_t<vec3_t> result; 
  trace_t trace; 
  tmat43_t<vec3_t> out; 

  __asm { vmovss  xmm2, cs:__real@41c80000; traceLength }
  _RDI = corpse;
  if ( !G_ClientScrMP_CorpseToMovingPlatformTrace(corpse, &trace, *(float *)&_XMM2, &outEndPos) )
    return 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+148h+trace.normal+8]
    vcomiss xmm0, cs:__real@3f333333
    vmovss  xmm0, dword ptr [rsp+148h+outEndPos]
    vmovss  xmm1, dword ptr [rsp+148h+outEndPos+4]
  }
  hitId = trace.hitId;
  __asm
  {
    vmovss  dword ptr [rdi+130h], xmm0
    vmovss  xmm0, dword ptr [rsp+148h+outEndPos+8]
    vmovss  dword ptr [rdi+138h], xmm0
    vmovss  dword ptr [rdi+134h], xmm1
  }
  _RDI->flags.m_flags[0] |= 0x200u;
  if ( !BGMovingPlatforms::IsMovingPlatform(hitId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 1126, ASSERT_TYPE_ASSERT, "(BGMovingPlatforms::IsMovingPlatform( trace->hitId ))", (const char *)&queryFormat, "BGMovingPlatforms::IsMovingPlatform( trace->hitId )") )
    __debugbreak();
  v8 = &g_entities[trace.hitId];
  G_EntLinkTo(_RDI, v8, (scr_string_t)0, 0, NULL);
  AnglesAndOriginToMatrix43(&v8->r.currentAngles, &v8->r.currentOrigin, &result);
  MatrixInverseOrthogonal43(&result, &out);
  AnglesAndOriginToMatrix43(&_RDI->r.currentAngles, &_RDI->r.currentOrigin, &result);
  MatrixMultiply43(&result, &out, &v14);
  AxisToAngles((const tmat33_t<vec3_t> *)&v14, &_RDI->s.lerp.apos.trDelta);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+148h+var_108+24h]
    vmovss  xmm1, dword ptr [rsp+148h+var_108+28h]
  }
  v11 = 1i64;
  __asm
  {
    vmovss  dword ptr [rdi+28h], xmm0
    vmovss  xmm0, dword ptr [rsp+148h+var_108+2Ch]
    vmovss  dword ptr [rdi+30h], xmm0
    vmovss  dword ptr [rdi+2Ch], xmm1
  }
  return v11;
}

/*
==============
PlayerCmd_DropItemEntity
==============
*/
gentity_s *PlayerCmd_DropItemEntity(gentity_s *pSelf, const Weapon *r_weapon, const scr_string_t dropTag, bool doPhysicsOnInit, gentity_s *(*dropMethod)(gentity_s *, const Weapon *, const bool, const bool, const tmat43_t<vec3_t> *))
{
  GItems *v9; 
  const dvar_t *v10; 
  GHandler *Handler; 
  gentity_s *v34; 
  gentity_s *v35; 
  vec3_t vec; 
  vec3_t angles; 
  vec3_t origin; 
  tmat43_t<vec3_t> axis; 
  WorldUpReferenceFrame v41; 

  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  v9 = GItems::ms_gItemsSystem;
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 433, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !dropMethod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 434, ASSERT_TYPE_ASSERT, "( dropMethod )", (const char *)&queryFormat, "dropMethod") )
    __debugbreak();
  v10 = DVARBOOL_entityLeakDisableItemsCorpses;
  if ( !DVARBOOL_entityLeakDisableItemsCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "entityLeakDisableItemsCorpses") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
    return 0i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "PlayerCmd_DropItemEntity");
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 391, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  _RBX = G_GetEntityPlayerStateConst(pSelf);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 394, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+130h+angles], xmm2
    vmovss  xmm0, dword ptr [rbx+1DCh]
    vmovss  dword ptr [rbp+4Fh+angles+4], xmm0
    vmovss  dword ptr [rbp+4Fh+angles+8], xmm2
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  [rbp+4Fh+var_8C], xmm0
    vmovss  xmm1, dword ptr [rbx+34h]
    vmovss  [rbp+4Fh+var_88], xmm1
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rbp+4Fh+var_84], xmm0
    vmovss  dword ptr [rsp+130h+vec], xmm2
    vmovss  dword ptr [rsp+130h+vec+4], xmm2
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0) )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@41f00000
      vmovss  dword ptr [rsp+130h+vec+8], xmm0
    }
  }
  else
  {
    _EAX = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 1u);
    _ECX = 0;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm2, cs:__real@42520000
      vmovss  xmm1, cs:__real@42160000
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  dword ptr [rsp+130h+vec+8], xmm0
    }
  }
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v41, _RBX, Handler);
  WorldUpReferenceFrame::ApplyReferenceFrameToVector(&v41, &vec);
  __asm
  {
    vmovss  xmm0, [rbp+4Fh+var_8C]
    vaddss  xmm3, xmm0, dword ptr [rsp+130h+vec]
    vmovss  [rbp+4Fh+var_8C], xmm3
    vmovss  xmm0, [rbp+4Fh+var_88]
    vaddss  xmm2, xmm0, dword ptr [rsp+130h+vec+4]
    vmovss  [rbp+4Fh+var_88], xmm2
    vmovss  xmm0, [rbp+4Fh+var_84]
    vaddss  xmm1, xmm0, dword ptr [rsp+130h+vec+8]
    vmovss  [rbp+4Fh+var_84], xmm1
    vmovss  dword ptr [rbp+4Fh+origin], xmm3
    vmovss  dword ptr [rbp+4Fh+origin+4], xmm2
    vmovss  dword ptr [rbp+4Fh+origin+8], xmm1
  }
  if ( v9->CanDeferItemDrop(v9) )
  {
    AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
    v34 = dropMethod(pSelf, r_weapon, doPhysicsOnInit, 0, &axis);
    v35 = v34;
    if ( v34 )
    {
      G_SetOriginAndAngle(v34, &origin, &angles, 1, 1);
      v35->s.lerp.pos.trType = TR_GRAVITY;
      v35->s.lerp.pos.trTime = level.time;
      G_Items_SetItemPhysics(pSelf, v35);
      v9->DeferItemDrop(v9, pSelf->s.number, v35->s.number, dropTag);
    }
  }
  else
  {
    G_Items_GetStateFromTag(pSelf, dropTag, NULL, &axis, 1);
    v35 = dropMethod(pSelf, r_weapon, doPhysicsOnInit, 0, &axis);
    if ( v35 )
    {
      if ( G_Items_CheckPenetration(r_weapon, &axis) && (dropTag = scr_const.tag_weapon_chest, G_Items_GetStateFromTag(pSelf, scr_const.tag_weapon_chest, NULL, &axis, 1), G_Items_CheckPenetration(r_weapon, &axis)) )
      {
        G_SetOriginAndAngle(v35, &origin, &angles, 1, 1);
        v35->s.lerp.pos.trType = TR_GRAVITY;
        v35->s.lerp.pos.trTime = level.time;
      }
      else
      {
        G_Items_SetStateFromTag(pSelf, dropTag, v35, 1);
        G_Items_SetDefaultVelocity(pSelf, v35);
      }
      G_Items_SetItemPhysics(pSelf, v35);
    }
  }
  Sys_ProfEndNamedEvent();
  return v35;
}

/*
==============
PlayerCmd_GetCustomizationString
==============
*/
void PlayerCmd_GetCustomizationString(scrContext_t *scrContext, scr_entref_t entref, const CustomizationModelType customizationType)
{
  unsigned int entnum; 
  gentity_s *v6; 
  const char *v7; 
  const char *NonTransientModelName; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v6 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3120, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v6 = &g_entities[entnum];
    if ( !v6->client )
    {
      v7 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v7);
    }
  }
  NonTransientModelName = SV_Streamsync_Customization_GetNonTransientModelName(customizationType, &v6->client->sess.cs.customization);
  Scr_AddString(scrContext, NonTransientModelName);
}

/*
==============
PlayerCmd_SetStreamLoadDist_Internal
==============
*/
void PlayerCmd_SetStreamLoadDist_Internal(scrContext_t *scrContext, const scr_entref_t entref, const BgWorldStreamingViewType viewType, const char *methodName)
{
  unsigned __int8 v6; 
  unsigned int entnum; 
  gentity_s *v9; 
  const char *v10; 
  int number; 
  const char *v12; 
  const char *v13; 
  int outControllingClientNum; 

  v6 = viewType;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3678, scrContext, "not an entity");
    v9 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 2194, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v9 = &g_entities[entnum];
    if ( !v9->client && !v9->agent )
    {
      v10 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3677, scrContext, v10);
    }
  }
  number = v9->s.number;
  outControllingClientNum = number;
  if ( !SV_IsAgent(number) || SV_GetAgentControlledByPlayerNum(outControllingClientNum, &outControllingClientNum) )
  {
    if ( Scr_GetNumParam(scrContext) )
    {
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
      __asm { vmovaps xmm2, xmm0; loadDist }
      G_WorldStreaming_SetStreamLoadDist(outControllingClientNum, (const BgWorldStreamingViewType)v6, *(const float *)&_XMM2);
    }
    else
    {
      v13 = j_va("missing argument for %s", methodName);
      Scr_ObjectError(COM_ERR_6553, scrContext, v13);
    }
  }
  else
  {
    v12 = j_va("entity %i is not a player or player-controlled agent", entnum);
    Scr_ObjectError(COM_ERR_6552, scrContext, v12);
  }
}

/*
==============
PlayerCmd_SetupValidClientDvar
==============
*/
void PlayerCmd_SetupValidClientDvar(scrContext_t *scrContext, const char *dvarName, const char *dvarValue, unsigned int *outDvarIndex, char *outDvarValue, const unsigned int outDvarValueSize)
{
  char *v10; 
  const dvar_t *VarByName; 
  const char *UnobfuscatedName; 
  const char *v13; 
  unsigned int flags; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  unsigned int v21; 
  signed __int64 v22; 
  char v23; 
  char v24; 

  if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3938, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
    __debugbreak();
  if ( !dvarValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3939, ASSERT_TYPE_ASSERT, "(dvarValue)", (const char *)&queryFormat, "dvarValue") )
    __debugbreak();
  if ( !outDvarIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3940, ASSERT_TYPE_ASSERT, "(outDvarIndex)", (const char *)&queryFormat, "outDvarIndex") )
    __debugbreak();
  v10 = outDvarValue;
  if ( !outDvarValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_script_cmd_mp.cpp", 3941, ASSERT_TYPE_ASSERT, "(outDvarValue)", (const char *)&queryFormat, "outDvarValue") )
    __debugbreak();
  VarByName = Dvar_FindVarByName(dvarName);
  if ( !VarByName )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvarName);
    v13 = j_va("SetDvar: unset dvar '%s' cannot be set as a client dvar. need to be added to the config file. This won't work in a future build", UnobfuscatedName);
    Scr_Error(COM_ERR_1429, scrContext, v13);
  }
  flags = VarByName->flags;
  if ( (flags & 0x1008) != 0 )
  {
    v15 = Dvar_DevGetUnobfuscatedName(dvarName);
    v16 = j_va("server dvar '%s' cannot be set as a client dvar", v15);
    Scr_Error(COM_ERR_1430, scrContext, v16);
    flags = VarByName->flags;
  }
  if ( (flags & 0x10) == 0 )
  {
    v17 = Dvar_DevGetUnobfuscatedName(dvarName);
    v18 = j_va("non-writable dvar '%s' cannot be set as a client dvar", v17);
    Scr_Error(COM_ERR_1431, scrContext, v18);
  }
  if ( !NetConstStrings_GetNetworkDvarIndex(VarByName, outDvarIndex) )
  {
    v19 = Dvar_DevGetUnobfuscatedName(dvarName);
    v20 = j_va("unknown network id for dvar '%s'", v19);
    Scr_Error(COM_ERR_1432, scrContext, v20);
  }
  memset_0(outDvarValue, 0, outDvarValueSize);
  v21 = 0;
  if ( outDvarValueSize != 1 )
  {
    v22 = dvarValue - outDvarValue;
    do
    {
      v23 = v10[v22];
      if ( !v23 )
        break;
      v24 = I_CleanChar(v23);
      *v10 = v24;
      if ( v24 == 34 )
        *v10 = 39;
      ++v21;
      ++v10;
    }
    while ( v21 < outDvarValueSize - 1 );
  }
}

