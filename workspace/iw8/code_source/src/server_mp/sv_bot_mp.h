/*
==============
Bot_IsUsingTurret
==============
*/

int __fastcall Bot_IsUsingTurret(const bot_data_t *botData)
{
  return ?Bot_IsUsingTurret@@YAHPEBUbot_data_t@@@Z(botData);
}

/*
==============
Bot_EntIsInLastStand
==============
*/

int __fastcall Bot_EntIsInLastStand(const gentity_s *ent)
{
  return ?Bot_EntIsInLastStand@@YAHPEBUgentity_s@@@Z(ent);
}

/*
==============
Bot_GetEnemy
==============
*/

gentity_s *__fastcall Bot_GetEnemy(const bot_data_t *botData)
{
  return ?Bot_GetEnemy@@YAPEAUgentity_s@@PEBUbot_data_t@@@Z(botData);
}

/*
==============
Bot_EntIsInLastStand
==============
*/
_BOOL8 Bot_EntIsInLastStand(const gentity_s *ent)
{
  const playerState_s *EntityPlayerStateConst; 
  gclient_s *client; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_mp.h", 1164, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  client = ent->client;
  return client && client->lastStand || EntityPlayerStateConst && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->otherFlags, ACTIVE, 0xBu);
}

/*
==============
Bot_GetEnemy
==============
*/
gentity_s *Bot_GetEnemy(const bot_data_t *botData)
{
  if ( EntHandle::isDefined(&botData->botInfo.sentient->targetEnt) )
    return EntHandle::ent(&botData->botInfo.sentient->targetEnt);
  else
    return 0i64;
}

/*
==============
Bot_IsUsingTurret
==============
*/
__int64 Bot_IsUsingTurret(const bot_data_t *botData)
{
  playerState_s *playerState; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 

  playerState = botData->botInfo.playerState;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_eFlags = &playerState->eFlags;
  if ( !p_eFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 6u) )
    return 1i64;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    return 1i64;
  }
  return 0i64;
}

