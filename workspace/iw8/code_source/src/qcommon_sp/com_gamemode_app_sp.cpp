/*
==============
ComGameModeAppSP::InitializeGameMode
==============
*/

void __fastcall ComGameModeAppSP::InitializeGameMode(ComGameModeAppSP *this)
{
  ?InitializeGameMode@ComGameModeAppSP@@UEBAXXZ(this);
}

/*
==============
ComGameModeAppSP::~ComGameModeAppSP
==============
*/

void __fastcall ComGameModeAppSP::~ComGameModeAppSP(ComGameModeAppSP *this)
{
  ??1ComGameModeAppSP@@UEAA@XZ(this);
}

/*
==============
ComGameModeAppSP::RunFrameHeadless
==============
*/

void __fastcall ComGameModeAppSP::RunFrameHeadless(ComGameModeAppSP *this, int msec)
{
  ?RunFrameHeadless@ComGameModeAppSP@@UEBAXH@Z(this, msec);
}

/*
==============
ComGameModeAppSP::RegisterNetworkDvars
==============
*/

void __fastcall ComGameModeAppSP::RegisterNetworkDvars(ComGameModeAppSP *this)
{
  ?RegisterNetworkDvars@ComGameModeAppSP@@UEBAXXZ(this);
}

/*
==============
ComGameModeAppSP::EquipWeaponRiotShield
==============
*/

void __fastcall ComGameModeAppSP::EquipWeaponRiotShield(ComGameModeAppSP *this, const Weapon *weapon, int clientNum)
{
  ?EquipWeaponRiotShield@ComGameModeAppSP@@UEBAXAEBUWeapon@@H@Z(this, weapon, clientNum);
}

/*
==============
ComGameModeAppSP::ComGameModeAppSP
==============
*/

void __fastcall ComGameModeAppSP::ComGameModeAppSP(ComGameModeAppSP *this)
{
  ??0ComGameModeAppSP@@QEAA@XZ(this);
}

/*
==============
ComGameModeAppSP::ShutdownGameMode
==============
*/

void __fastcall ComGameModeAppSP::ShutdownGameMode(ComGameModeAppSP *this)
{
  ?ShutdownGameMode@ComGameModeAppSP@@UEBAXXZ(this);
}

/*
==============
ComGameModeAppSP::SetupWeaponDefDevGui
==============
*/

void __fastcall ComGameModeAppSP::SetupWeaponDefDevGui(ComGameModeAppSP *this, const Weapon *weapon)
{
  ?SetupWeaponDefDevGui@ComGameModeAppSP@@UEBAXAEBUWeapon@@@Z(this, weapon);
}

/*
==============
ComGameModeAppSP::DeRegisterNetworkDvars
==============
*/

void __fastcall ComGameModeAppSP::DeRegisterNetworkDvars(ComGameModeAppSP *this)
{
  ?DeRegisterNetworkDvars@ComGameModeAppSP@@UEBAXXZ(this);
}

/*
==============
ComGameModeAppSP::ComGameModeAppSP
==============
*/
void ComGameModeAppSP::ComGameModeAppSP(ComGameModeAppSP *this)
{
  this->__vftable = (ComGameModeAppSP_vtbl *)&ComGameModeAppSP::`vftable';
}

/*
==============
ComGameModeAppSP::~ComGameModeAppSP
==============
*/
void ComGameModeAppSP::~ComGameModeAppSP(ComGameModeAppSP *this)
{
  this->__vftable = (ComGameModeAppSP_vtbl *)&ComGameModeAppSP::`vftable';
  ComGameModeApplication::~ComGameModeApplication(this);
}

/*
==============
ComGameModeAppSP::DeRegisterNetworkDvars
==============
*/
void ComGameModeAppSP::DeRegisterNetworkDvars(ComGameModeAppSP *this)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\com_gamemode_app_sp.cpp", 142, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No network dvars in SP, but we may want parity in the net const string implementation at some point") )
    __debugbreak();
}

/*
==============
ComGameModeAppSP::EquipWeaponRiotShield
==============
*/
void ComGameModeAppSP::EquipWeaponRiotShield(ComGameModeAppSP *this, const Weapon *weapon, int clientNum)
{
  __int64 v4; 
  unsigned int weaponIdx; 
  WeaponDef *v6; 
  gentity_s *v7; 
  gclient_s *client; 
  __int64 v9; 

  v4 = clientNum;
  if ( !BG_IsRiotShield(weapon, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\com_gamemode_app_sp.cpp", 108, ASSERT_TYPE_ASSERT, "(BG_IsRiotShield( weapon, false ))", (const char *)&queryFormat, "BG_IsRiotShield( weapon, false )") )
    __debugbreak();
  weaponIdx = weapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v9) = weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v9, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[(unsigned __int16)weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v6 = bg_weaponDefs[(unsigned __int16)weaponIdx];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\com_gamemode_app_sp.cpp", 111, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !(_DWORD)v4 )
  {
    LODWORD(v9) = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\com_gamemode_app_sp.cpp", 113, ASSERT_TYPE_ASSERT, "( ( clientNum ) )", "( level.maxclients ) = %i", v9) )
      __debugbreak();
  }
  v7 = &g_entities[v4];
  if ( !v7->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\com_gamemode_app_sp.cpp", 116, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  client = v7->client;
  if ( v6->riotShieldEnableDamage )
    client->shieldHealth = v6->riotShieldHealth;
  else
    client->shieldHealth = 1;
}

/*
==============
ComGameModeAppSP::InitializeGameMode
==============
*/
void ComGameModeAppSP::InitializeGameMode(ComGameModeAppSP *this)
{
  OnlineMatchId::SetMatchId(0i64);
  ComCharacterLimits::SetModeLimits(1u);
  ComGameModeApplication::BeginCommonInitialization(this);
  Com_SP_RegisterDvars();
  BG_RegisterCommonDvars();
  Dvar_EnableReplication();
  NetConstStrings_EnableRestrictions(1);
  NetConstStrings_ClearNetworkDvars();
  BG_RegisterNetworkDvars();
  Dvar_DisableReplication();
  SV_CmdsSP_AddOperatorCommands();
  Com_ScreenShotSaveGame_Initialize();
  DB_SetAlwaysAllowMissingServerAsset(0);
  Scr_InitStringConstants(1);
  Scr_SetRecordErrors(0);
  ComGameModeApplication::FinalizeCommonInitialization(this);
}

/*
==============
ComGameModeAppSP::RegisterNetworkDvars
==============
*/
void ComGameModeAppSP::RegisterNetworkDvars(ComGameModeAppSP *this)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_sp\\com_gamemode_app_sp.cpp", 136, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No network dvars in SP, but we may want parity in the net const string implementation at some point") )
    __debugbreak();
}

/*
==============
ComGameModeAppSP::RunFrameHeadless
==============
*/
void ComGameModeAppSP::RunFrameHeadless(ComGameModeAppSP *this, int msec)
{
  ;
}

/*
==============
ComGameModeAppSP::SetupWeaponDefDevGui
==============
*/
void ComGameModeAppSP::SetupWeaponDefDevGui(ComGameModeAppSP *this, const Weapon *weapon)
{
  AI_InitWeaponAccuracyGraphForWeapon(weapon);
}

/*
==============
ComGameModeAppSP::ShutdownGameMode
==============
*/
void ComGameModeAppSP::ShutdownGameMode(ComGameModeAppSP *this)
{
  Com_SP_UnregisterDvars();
  BG_DeregisterCommonDvars();
  BG_DeregisterNetworkDvars();
  SV_CmdsSP_RemoveOperatorCommands();
  Com_ScreenShotSaveGame_Terminate();
  ComGameModeApplication::FinalizeCommonShutdown(this);
}

