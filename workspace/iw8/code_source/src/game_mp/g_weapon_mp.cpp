/*
==============
GWeaponMP::OrientMeleeCorpse
==============
*/

void __fastcall GWeaponMP::OrientMeleeCorpse(GWeaponMP *this, playerState_s *attackerPS, const int isDeadAgentWithCorpse, gentity_s **victim, entityState_t **victimES)
{
  ?OrientMeleeCorpse@GWeaponMP@@UEBAXPEAUplayerState_s@@HPEAPEAUgentity_s@@PEAPEAUentityState_t@@@Z(this, attackerPS, isDeadAgentWithCorpse, victim, victimES);
}

/*
==============
GWeaponMP::ShieldCheckAttachFlags
==============
*/

void __fastcall GWeaponMP::ShieldCheckAttachFlags(GWeaponMP *this, const gentity_s *shieldHolder)
{
  ?ShieldCheckAttachFlags@GWeaponMP@@UEBAXPEBUgentity_s@@@Z(this, shieldHolder);
}

/*
==============
GWeaponMP::IsMeleeHitSuccess
==============
*/

bool __fastcall GWeaponMP::IsMeleeHitSuccess(GWeaponMP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  return ?IsMeleeHitSuccess@GWeaponMP@@UEBA_NPEBUgentity_s@@0@Z(this, attacker, hitEnt);
}

/*
==============
GWeaponMP::SendWeaponCommand
==============
*/

void __fastcall GWeaponMP::SendWeaponCommand(GWeaponMP *this, const int clientNum, const int command, const Weapon *r_weapon)
{
  ?SendWeaponCommand@GWeaponMP@@UEBAXHHAEBUWeapon@@@Z(this, clientNum, command, r_weapon);
}

/*
==============
GWeaponMP::DoesShieldProtectFromBlastDamage
==============
*/

bool __fastcall GWeaponMP::DoesShieldProtectFromBlastDamage(GWeaponMP *this, const gentity_s *shieldHolder, bool shieldOnBack)
{
  return ?DoesShieldProtectFromBlastDamage@GWeaponMP@@UEBA_NPEBUgentity_s@@_N@Z(this, shieldHolder, shieldOnBack);
}

/*
==============
GWeaponMP::FireWeaponSendClientEvent
==============
*/

void __fastcall GWeaponMP::FireWeaponSendClientEvent(GWeaponMP *this, gentity_s *attacker, int event, const unsigned int eventParm, int hitClientNum, bool isAlternate, const GWeaponFireParms *fireParams)
{
  ?FireWeaponSendClientEvent@GWeaponMP@@UEBAXPEAUgentity_s@@HIH_NPEBUGWeaponFireParms@@@Z(this, attacker, event, eventParm, hitClientNum, isAlternate, fireParams);
}

/*
==============
GWeaponMP::EntityHasRiotShield
==============
*/

bool __fastcall GWeaponMP::EntityHasRiotShield(GWeaponMP *this, const gentity_s *hitEnt)
{
  return ?EntityHasRiotShield@GWeaponMP@@UEBA_NPEBUgentity_s@@@Z(this, hitEnt);
}

/*
==============
GWeaponMP::IsMeleeFriendlyIgnore
==============
*/

bool __fastcall GWeaponMP::IsMeleeFriendlyIgnore(GWeaponMP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  return ?IsMeleeFriendlyIgnore@GWeaponMP@@UEBA_NPEBUgentity_s@@0@Z(this, attacker, hitEnt);
}

/*
==============
GWeaponMP::IsMeleeFriendlyIgnoreAI
==============
*/

bool __fastcall GWeaponMP::IsMeleeFriendlyIgnoreAI(GWeaponMP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  return ?IsMeleeFriendlyIgnoreAI@GWeaponMP@@UEBA_NPEBUgentity_s@@0@Z(this, attacker, hitEnt);
}

/*
==============
GWeaponMP::GetShieldCosOfAngleToPointForClient
==============
*/

bool __fastcall GWeaponMP::GetShieldCosOfAngleToPointForClient(GWeaponMP *this, const gentity_s *shieldHolder, vec3_t *outShieldForward, vec3_t *outShieldDown, vec3_t *outShieldOrigin, bool shieldOnBack, bool shieldOpenToFire)
{
  return ?GetShieldCosOfAngleToPointForClient@GWeaponMP@@UEBA_NPEBUgentity_s@@AEATvec3_t@@11_N2@Z(this, shieldHolder, outShieldForward, outShieldDown, outShieldOrigin, shieldOnBack, shieldOpenToFire);
}

/*
==============
GWeaponMP::MuzzlePointAddOffset
==============
*/

void __fastcall GWeaponMP::MuzzlePointAddOffset(GWeaponMP *this, BgWeaponParms *wp, const gentity_s *attacker)
{
  ?MuzzlePointAddOffset@GWeaponMP@@UEBAXPEAUBgWeaponParms@@PEBUgentity_s@@@Z(this, wp, attacker);
}

/*
==============
GWeaponMP::FireVehicleWeaponSendClientEvent
==============
*/

void __fastcall GWeaponMP::FireVehicleWeaponSendClientEvent(GWeaponMP *this, gentity_s *attacker, int event, int hitClientNum, int boneIndex)
{
  ?FireVehicleWeaponSendClientEvent@GWeaponMP@@UEBAXPEAUgentity_s@@HHH@Z(this, attacker, event, hitClientNum, boneIndex);
}

/*
==============
GWeaponMP::DoesShieldProtectFromBlastDamage
==============
*/
bool GWeaponMP::DoesShieldProtectFromBlastDamage(GWeaponMP *this, const gentity_s *shieldHolder, bool shieldOnBack)
{
  const playerState_s *EntityPlayerStateConst; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(shieldHolder);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_mp.cpp", 194, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->otherFlags, ACTIVE, 8u);
}

/*
==============
GWeaponMP::EntityHasRiotShield
==============
*/
bool GWeaponMP::EntityHasRiotShield(GWeaponMP *this, const gentity_s *hitEnt)
{
  const playerState_s *EntityPlayerStateConst; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(hitEnt);
  if ( EntityPlayerStateConst )
    LOBYTE(EntityPlayerStateConst) = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->otherFlags, ACTIVE, 8u);
  return (char)EntityPlayerStateConst;
}

/*
==============
GWeaponMP::FireVehicleWeaponSendClientEvent
==============
*/
void GWeaponMP::FireVehicleWeaponSendClientEvent(GWeaponMP *this, gentity_s *attacker, int event, int hitClientNum)
{
  BOOL v8; 

  if ( hitClientNum != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_mp.cpp", 155, ASSERT_TYPE_ASSERT, "( hitClientNum == -1 )", (const char *)&queryFormat, "hitClientNum == CLIENTNUM_NONE") )
    __debugbreak();
  LOBYTE(v8) = 0;
  this->FireWeaponSendClientEvent(this, attacker, event, 0, hitClientNum, v8, NULL);
}

/*
==============
GWeaponMP::FireWeaponSendClientEvent
==============
*/
void GWeaponMP::FireWeaponSendClientEvent(GWeaponMP *this, gentity_s *attacker, int event, const unsigned int eventParm, int hitClientNum, bool isAlternate, const GWeaponFireParms *fireParams)
{
  int v7; 
  int v10; 
  __int64 v11; 
  __int64 v15; 
  tmat33_t<vec3_t> fireAxis; 

  v7 = -1;
  if ( hitClientNum < -1 )
    goto LABEL_28;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( hitClientNum > (int)ComCharacterLimits::ms_gameData.m_characterCount )
  {
LABEL_28:
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v15) = hitClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_mp.cpp", 78, ASSERT_TYPE_ASSERT, "( -1 ) <= ( hitClientNum ) && ( hitClientNum ) <= ( ComCharacterLimits::GetCharacterMaxCount() )", "hitClientNum not in [CLIENTNUM_NONE, ComCharacterLimits::GetCharacterMaxCount()]\n\t%i not in [%i, %i]", v15, -1, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  v10 = 0;
  switch ( event )
  {
    case '(':
    case '+':
    case 'D':
      v7 = 0;
      goto LABEL_17;
    case '*':
    case ',':
    case 'E':
      v7 = 1;
      goto LABEL_17;
    case '0':
    case '2':
    case 'F':
      v7 = 2;
      goto LABEL_17;
    case '1':
    case '3':
    case 'G':
      v7 = 3;
      goto LABEL_16;
    default:
LABEL_16:
      if ( v7 != -1 )
      {
LABEL_17:
        v11 = 0i64;
        if ( hitClientNum != -1 )
          v11 = 1i64;
        event = eventMap[v7][isAlternate][v11];
      }
      if ( hitClientNum == -1 )
      {
        _RBX = fireParams;
        if ( fireParams && BG_IsHighPrecisionClientFireEventEnabled(event, &attacker->s) )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rsp+0A8h+fireAxis], ymm0
            vmovss  xmm0, dword ptr [rbx+20h]
            vmovss  dword ptr [rsp+0A8h+fireAxis+20h], xmm0
          }
          v10 = BG_PackClientWeaponFireEventParm(&fireAxis);
        }
      }
      else
      {
        v10 = hitClientNum;
      }
      G_Utils_AddEvent(attacker, event, v10);
      return;
  }
}

/*
==============
GWeaponMP::GetShieldCosOfAngleToPointForClient
==============
*/
bool GWeaponMP::GetShieldCosOfAngleToPointForClient(GWeaponMP *this, const gentity_s *shieldHolder, vec3_t *outShieldForward, vec3_t *outShieldDown)
{
  return 0;
}

/*
==============
GWeaponMP::IsMeleeFriendlyIgnore
==============
*/
bool GWeaponMP::IsMeleeFriendlyIgnore(GWeaponMP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  return 0;
}

/*
==============
GWeaponMP::IsMeleeFriendlyIgnoreAI
==============
*/
bool GWeaponMP::IsMeleeFriendlyIgnoreAI(GWeaponMP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  return 0;
}

/*
==============
GWeaponMP::IsMeleeHitSuccess
==============
*/
bool GWeaponMP::IsMeleeHitSuccess(GWeaponMP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  return G_Utils_IsClientOrAgent(hitEnt);
}

/*
==============
GWeaponMP::MuzzlePointAddOffset
==============
*/
void GWeaponMP::MuzzlePointAddOffset(GWeaponMP *this, BgWeaponParms *wp, const gentity_s *attacker)
{
  ;
}

/*
==============
GWeaponMP::OrientMeleeCorpse
==============
*/
void GWeaponMP::OrientMeleeCorpse(GWeaponMP *this, playerState_s *attackerPS, const int isDeadAgentWithCorpse, gentity_s **victim, entityState_t **victimES)
{
  const GCorpseInfoMP *CorpseInfoFromEntity; 
  gentity_s *v9; 
  unsigned int eType; 
  int v11; 
  playerState_s *EntityPlayerState; 
  __int64 v13; 

  CorpseInfoFromEntity = GetCorpseInfoFromEntity(*victim);
  if ( CorpseInfoFromEntity )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( CorpseInfoFromEntity->entnum >= ComCharacterLimits::ms_gameData.m_staticEntityCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v13) = CorpseInfoFromEntity->entnum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_mp.cpp", 165, ASSERT_TYPE_ASSERT, "(unsigned)( corpseInfo->entnum ) < (unsigned)( ComCharacterLimits::GetStaticEntitiesMaxCount() )", "corpseInfo->entnum doesn't index ComCharacterLimits::GetStaticEntitiesMaxCount()\n\t%i not in [0, %i)", v13, ComCharacterLimits::ms_gameData.m_staticEntityCount) )
        __debugbreak();
    }
    v9 = &g_entities[CorpseInfoFromEntity->entnum];
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    eType = (unsigned __int16)v9->s.eType;
    if ( (unsigned __int16)eType > 0x15u || (v11 = 2359300, !_bittest(&v11, eType)) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_mp.cpp", 168, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &corpseEntity->s ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &corpseEntity->s )") )
        __debugbreak();
    }
    if ( !isDeadAgentWithCorpse )
    {
      EntityPlayerState = G_GetEntityPlayerState(*victim);
      if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_mp.cpp", 173, ASSERT_TYPE_ASSERT, "( victimPS )", (const char *)&queryFormat, "victimPS") )
        __debugbreak();
      *(_QWORD *)EntityPlayerState->velocity.v = 0i64;
      EntityPlayerState->velocity.v[2] = 0.0;
    }
    attackerPS->meleeChargeEnt = CorpseInfoFromEntity->entnum;
    *victim = v9;
    *victimES = &v9->s;
  }
}

/*
==============
GWeaponMP::SendWeaponCommand
==============
*/
void GWeaponMP::SendWeaponCommand(GWeaponMP *this, const int clientNum, const int command, const Weapon *r_weapon)
{
  __int64 v4; 
  SvClient *CommonClient; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  v4 = command;
  CommonClient = SvClient::GetCommonClient(clientNum);
  MSG_Init(&buf, data, 1020);
  if ( (unsigned int)(v4 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,int>(int)", "signed", (char)v4, "signed", v4) )
    __debugbreak();
  MSG_WriteByte(&buf, (char)v4);
  MSG_WriteWeapon(&buf, r_weapon);
  SV_Game_SendServerCommandMsg(CommonClient, SV_CMD_RELIABLE, &buf);
}

/*
==============
GWeaponMP::ShieldCheckAttachFlags
==============
*/
void GWeaponMP::ShieldCheckAttachFlags(GWeaponMP *this, const gentity_s *shieldHolder)
{
  const char *v3; 
  int v4; 
  const char *v5; 

  if ( G_Utils_IsAgent(shieldHolder) )
  {
    if ( !shieldHolder->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_mp.cpp", 205, ASSERT_TYPE_ASSERT, "( shieldHolder->agent )", (const char *)&queryFormat, "shieldHolder->agent") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&shieldHolder->agent->playerState.otherFlags, ACTIVE, 8u) )
    {
      v3 = "shieldHolder->agent->playerState.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL )";
      v4 = 206;
      v5 = "( shieldHolder->agent->playerState.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL ) )";
      goto LABEL_12;
    }
  }
  else
  {
    if ( !shieldHolder->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_mp.cpp", 210, ASSERT_TYPE_ASSERT, "( shieldHolder->client )", (const char *)&queryFormat, "shieldHolder->client") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&shieldHolder->client->ps.otherFlags, ACTIVE, 8u) )
    {
      v3 = "shieldHolder->client->ps.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL )";
      v4 = 211;
      v5 = "( shieldHolder->client->ps.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL ) )";
LABEL_12:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_mp.cpp", v4, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v3) )
        __debugbreak();
    }
  }
}

