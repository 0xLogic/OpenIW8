/*
==============
GWeaponSP::FireWeaponSendClientEvent
==============
*/

void __fastcall GWeaponSP::FireWeaponSendClientEvent(GWeaponSP *this, gentity_s *attacker, int event, const unsigned int eventParm, int hitClientNum, bool isAlternate, const GWeaponFireParms *fireParams)
{
  ?FireWeaponSendClientEvent@GWeaponSP@@UEBAXPEAUgentity_s@@HIH_NPEBUGWeaponFireParms@@@Z(this, attacker, event, eventParm, hitClientNum, isAlternate, fireParams);
}

/*
==============
GWeaponSP::OrientMeleeCorpse
==============
*/

void __fastcall GWeaponSP::OrientMeleeCorpse(GWeaponSP *this, playerState_s *attackerPS, const int isDeadAgentWithCorpse, gentity_s **victim, entityState_t **victimES)
{
  ?OrientMeleeCorpse@GWeaponSP@@UEBAXPEAUplayerState_s@@HPEAPEAUgentity_s@@PEAPEAUentityState_t@@@Z(this, attackerPS, isDeadAgentWithCorpse, victim, victimES);
}

/*
==============
GWeaponSP::EntityHasRiotShield
==============
*/

bool __fastcall GWeaponSP::EntityHasRiotShield(GWeaponSP *this, const gentity_s *hitEnt)
{
  return ?EntityHasRiotShield@GWeaponSP@@UEBA_NPEBUgentity_s@@@Z(this, hitEnt);
}

/*
==============
GWeaponSP::DoesShieldProtectFromBlastDamage
==============
*/

bool __fastcall GWeaponSP::DoesShieldProtectFromBlastDamage(GWeaponSP *this, const gentity_s *shieldHolder, bool shieldOnBack)
{
  return ?DoesShieldProtectFromBlastDamage@GWeaponSP@@UEBA_NPEBUgentity_s@@_N@Z(this, shieldHolder, shieldOnBack);
}

/*
==============
GWeaponSP::IsMeleeFriendlyIgnoreAI
==============
*/

bool __fastcall GWeaponSP::IsMeleeFriendlyIgnoreAI(GWeaponSP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  return ?IsMeleeFriendlyIgnoreAI@GWeaponSP@@UEBA_NPEBUgentity_s@@0@Z(this, attacker, hitEnt);
}

/*
==============
GWeaponSP::FireVehicleWeaponSendClientEvent
==============
*/

void __fastcall GWeaponSP::FireVehicleWeaponSendClientEvent(GWeaponSP *this, gentity_s *attacker, int event, int hitClientNum, int boneIndex)
{
  ?FireVehicleWeaponSendClientEvent@GWeaponSP@@UEBAXPEAUgentity_s@@HHH@Z(this, attacker, event, hitClientNum, boneIndex);
}

/*
==============
GWeaponSP::IsMeleeHitSuccess
==============
*/

bool __fastcall GWeaponSP::IsMeleeHitSuccess(GWeaponSP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  return ?IsMeleeHitSuccess@GWeaponSP@@UEBA_NPEBUgentity_s@@0@Z(this, attacker, hitEnt);
}

/*
==============
GWeaponSP::IsMeleeFriendlyIgnore
==============
*/

bool __fastcall GWeaponSP::IsMeleeFriendlyIgnore(GWeaponSP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  return ?IsMeleeFriendlyIgnore@GWeaponSP@@UEBA_NPEBUgentity_s@@0@Z(this, attacker, hitEnt);
}

/*
==============
GWeaponSP::GetShieldCosOfAngleToPointForClient
==============
*/

bool __fastcall GWeaponSP::GetShieldCosOfAngleToPointForClient(GWeaponSP *this, const gentity_s *shieldHolder, vec3_t *outShieldForward, vec3_t *outShieldDown, vec3_t *outShieldOrigin, bool shieldOnBack, bool shieldOpenToFire)
{
  return ?GetShieldCosOfAngleToPointForClient@GWeaponSP@@UEBA_NPEBUgentity_s@@AEATvec3_t@@11_N2@Z(this, shieldHolder, outShieldForward, outShieldDown, outShieldOrigin, shieldOnBack, shieldOpenToFire);
}

/*
==============
GWeaponSP::ShieldCheckAttachFlags
==============
*/

void __fastcall GWeaponSP::ShieldCheckAttachFlags(GWeaponSP *this, const gentity_s *shieldHolder)
{
  ?ShieldCheckAttachFlags@GWeaponSP@@UEBAXPEBUgentity_s@@@Z(this, shieldHolder);
}

/*
==============
GWeaponSP::SendWeaponCommand
==============
*/

void __fastcall GWeaponSP::SendWeaponCommand(GWeaponSP *this, const int clientNum, const int command, const Weapon *r_weapon)
{
  ?SendWeaponCommand@GWeaponSP@@UEBAXHHAEBUWeapon@@@Z(this, clientNum, command, r_weapon);
}

/*
==============
GWeaponSP::MuzzlePointAddOffset
==============
*/

void __fastcall GWeaponSP::MuzzlePointAddOffset(GWeaponSP *this, BgWeaponParms *wp, const gentity_s *attacker)
{
  ?MuzzlePointAddOffset@GWeaponSP@@UEBAXPEAUBgWeaponParms@@PEBUgentity_s@@@Z(this, wp, attacker);
}

/*
==============
GWeaponSP::DoesShieldProtectFromBlastDamage
==============
*/
bool GWeaponSP::DoesShieldProtectFromBlastDamage(GWeaponSP *this, const gentity_s *shieldHolder, bool shieldOnBack)
{
  return shieldOnBack || G_Weapon_PlayerIsUsingShield(shieldHolder) && G_Weapon_PlayerShieldIsInBlockingState(shieldHolder);
}

/*
==============
GWeaponSP::EntityHasRiotShield
==============
*/
bool GWeaponSP::EntityHasRiotShield(GWeaponSP *this, const gentity_s *hitEnt)
{
  return 0;
}

/*
==============
GWeaponSP::FireVehicleWeaponSendClientEvent
==============
*/
void GWeaponSP::FireVehicleWeaponSendClientEvent(GWeaponSP *this, gentity_s *attacker, int event, int hitClientNum, int boneIndex)
{
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  unsigned int WeaponFireParam; 

  if ( boneIndex < 0 )
  {
    WeaponFireParam = 0;
  }
  else
  {
    Instance = GWeaponMap::GetInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(Instance, attacker->s.weaponHandle);
    WeaponFireParam = BG_CreateWeaponFireParam(boneIndex, Weapon);
  }
  G_Utils_AddEvent(attacker, event, WeaponFireParam);
}

/*
==============
GWeaponSP::FireWeaponSendClientEvent
==============
*/
void GWeaponSP::FireWeaponSendClientEvent(GWeaponSP *this, gentity_s *attacker, int event, const unsigned int eventParm)
{
  ;
}

/*
==============
GWeaponSP::GetShieldCosOfAngleToPointForClient
==============
*/
char GWeaponSP::GetShieldCosOfAngleToPointForClient(GWeaponSP *this, const gentity_s *shieldHolder, vec3_t *outShieldForward, vec3_t *outShieldDown, vec3_t *outShieldOrigin, bool shieldOnBack)
{
  GHandler *Handler; 
  float v18; 
  vec3_t angles; 
  WorldUpReferenceFrame v20; 

  _RBP = outShieldDown;
  _RBX = shieldHolder;
  if ( !shieldHolder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_weapon_sp.cpp", 94, ASSERT_TYPE_ASSERT, "( shieldHolder )", (const char *)&queryFormat, "shieldHolder") )
    __debugbreak();
  if ( !_RBX->client )
    return 0;
  if ( !shieldOnBack && !G_Weapon_PlayerIsUsingShield(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_weapon_sp.cpp", 102, ASSERT_TYPE_ASSERT, "( G_Weapon_PlayerIsUsingShield( shieldHolder ) )", (const char *)&queryFormat, "G_Weapon_PlayerIsUsingShield( shieldHolder )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vmovss  xmm1, dword ptr [rbx+44h]
    vmovss  dword ptr [rsp+0A8h+angles], xmm0
    vmovss  xmm0, dword ptr [rbx+48h]
    vmovss  dword ptr [rsp+0A8h+angles+8], xmm0
    vmovss  dword ptr [rsp+0A8h+angles+4], xmm1
  }
  if ( shieldOnBack )
  {
    __asm { vaddss  xmm0, xmm1, cs:__real@43340000; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovss  dword ptr [rsp+0A8h+angles+4], xmm0 }
  }
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v20, &_RBX->client->ps, Handler);
  WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v20, &angles);
  AngleVectors(&angles, outShieldForward, NULL, NULL);
  __asm
  {
    vmovss  xmm0, cs:__real@bf800000
    vxorps  xmm1, xmm1, xmm1
    vunpcklps xmm1, xmm1, xmm1
    vmovsd  qword ptr [rbp+0], xmm1
    vmovss  [rsp+0A8h+var_70], xmm0
  }
  _RBP->v[2] = v18;
  if ( !_RBX->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_weapon_sp.cpp", 126, ASSERT_TYPE_ASSERT, "( shieldHolder->client )", (const char *)&queryFormat, "shieldHolder->client") )
    __debugbreak();
  G_Client_GetEyePosition(&_RBX->client->ps, outShieldOrigin);
  return 1;
}

/*
==============
GWeaponSP::IsMeleeFriendlyIgnore
==============
*/
bool GWeaponSP::IsMeleeFriendlyIgnore(GWeaponSP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  sentient_s *sentient; 
  sentient_s *v4; 
  bool result; 

  sentient = attacker->sentient;
  result = 0;
  if ( sentient )
  {
    v4 = hitEnt->sentient;
    if ( v4 )
    {
      if ( sentient->eTeam == v4->eTeam )
        return 1;
    }
  }
  return result;
}

/*
==============
GWeaponSP::IsMeleeFriendlyIgnoreAI
==============
*/
bool GWeaponSP::IsMeleeFriendlyIgnoreAI(GWeaponSP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  sentient_s *sentient; 
  sentient_s *v4; 
  bool result; 

  result = 0;
  if ( !attacker->client )
  {
    sentient = attacker->sentient;
    if ( sentient )
    {
      v4 = hitEnt->sentient;
      if ( v4 )
      {
        if ( sentient->eTeam == v4->eTeam )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
GWeaponSP::IsMeleeHitSuccess
==============
*/
bool GWeaponSP::IsMeleeHitSuccess(GWeaponSP *this, const gentity_s *attacker, const gentity_s *hitEnt)
{
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_weapon_sp.cpp", 16, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_weapon_sp.cpp", 17, ASSERT_TYPE_ASSERT, "( hitEnt )", (const char *)&queryFormat, "hitEnt") )
    __debugbreak();
  return attacker->client && hitEnt->sentient;
}

/*
==============
GWeaponSP::MuzzlePointAddOffset
==============
*/
void GWeaponSP::MuzzlePointAddOffset(GWeaponSP *this, BgWeaponParms *wp, const gentity_s *attacker)
{
  _RDI = wp;
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_weapon_sp.cpp", 44, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_weapon_sp.cpp", 45, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !attacker->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_weapon_sp.cpp", 46, ASSERT_TYPE_ASSERT, "( attacker->client )", (const char *)&queryFormat, "attacker->client") )
    __debugbreak();
  _RAX = attacker->client;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0B65Ch]
    vaddss  xmm1, xmm0, dword ptr [rdi+24h]
    vmovss  dword ptr [rdi+24h], xmm1
  }
  _RAX = attacker->client;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0B660h]
    vaddss  xmm1, xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rdi+28h], xmm1
  }
  _RAX = attacker->client;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0B664h]
    vaddss  xmm1, xmm0, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rdi+2Ch], xmm1
  }
}

/*
==============
GWeaponSP::OrientMeleeCorpse
==============
*/
void GWeaponSP::OrientMeleeCorpse(GWeaponSP *this, playerState_s *attackerPS, const int isDeadAgentWithCorpse, gentity_s **victim)
{
  ;
}

/*
==============
GWeaponSP::SendWeaponCommand
==============
*/
void GWeaponSP::SendWeaponCommand(GWeaponSP *this, const int clientNum, const int command, const Weapon *r_weapon)
{
  const char *v6; 
  const char *v7; 
  SvClient *CommonClient; 
  char outHexString[128]; 

  BG_ConvertWeaponToHexString(r_weapon, outHexString, 121);
  v6 = j_va("%c %s", (unsigned int)command, outHexString);
  v7 = v6;
  if ( clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v6);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v7);
  }
}

/*
==============
GWeaponSP::ShieldCheckAttachFlags
==============
*/
void GWeaponSP::ShieldCheckAttachFlags(GWeaponSP *this, const gentity_s *shieldHolder)
{
  ;
}

