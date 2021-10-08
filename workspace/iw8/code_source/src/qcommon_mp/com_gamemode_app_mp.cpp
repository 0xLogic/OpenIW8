/*
==============
ComGameModeAppMP::RegisterNetworkDvars
==============
*/

void __fastcall ComGameModeAppMP::RegisterNetworkDvars(ComGameModeAppMP *this)
{
  ?RegisterNetworkDvars@ComGameModeAppMP@@UEBAXXZ(this);
}

/*
==============
ComGameModeAppMP::RunFrameHeadless
==============
*/

void __fastcall ComGameModeAppMP::RunFrameHeadless(ComGameModeAppMP *this, int msec)
{
  ?RunFrameHeadless@ComGameModeAppMP@@UEBAXH@Z(this, msec);
}

/*
==============
ComGameModeAppMP::ShutdownGameMode
==============
*/

void __fastcall ComGameModeAppMP::ShutdownGameMode(ComGameModeAppMP *this)
{
  ?ShutdownGameMode@ComGameModeAppMP@@UEBAXXZ(this);
}

/*
==============
ComGameModeAppMP::EquipWeaponRiotShield
==============
*/

void __fastcall ComGameModeAppMP::EquipWeaponRiotShield(ComGameModeAppMP *this, const Weapon *weapon, int clientNum)
{
  ?EquipWeaponRiotShield@ComGameModeAppMP@@UEBAXAEBUWeapon@@H@Z(this, weapon, clientNum);
}

/*
==============
ComGameModeAppMP::InitializeGameMode
==============
*/

void __fastcall ComGameModeAppMP::InitializeGameMode(ComGameModeAppMP *this)
{
  ?InitializeGameMode@ComGameModeAppMP@@UEBAXXZ(this);
}

/*
==============
ComGameModeAppMP::ComGameModeAppMP
==============
*/

void __fastcall ComGameModeAppMP::ComGameModeAppMP(ComGameModeAppMP *this)
{
  ??0ComGameModeAppMP@@QEAA@XZ(this);
}

/*
==============
ComGameModeAppMP::DeRegisterNetworkDvars
==============
*/

void __fastcall ComGameModeAppMP::DeRegisterNetworkDvars(ComGameModeAppMP *this)
{
  ?DeRegisterNetworkDvars@ComGameModeAppMP@@UEBAXXZ(this);
}

/*
==============
ComGameModeAppMP::~ComGameModeAppMP
==============
*/

void __fastcall ComGameModeAppMP::~ComGameModeAppMP(ComGameModeAppMP *this)
{
  ??1ComGameModeAppMP@@UEAA@XZ(this);
}

/*
==============
ComGameModeAppMP::SetupWeaponDefDevGui
==============
*/

void __fastcall ComGameModeAppMP::SetupWeaponDefDevGui(ComGameModeAppMP *this, const Weapon *weapon)
{
  ?SetupWeaponDefDevGui@ComGameModeAppMP@@UEBAXAEBUWeapon@@@Z(this, weapon);
}

/*
==============
ComGameModeAppMP::ComGameModeAppMP
==============
*/
void ComGameModeAppMP::ComGameModeAppMP(ComGameModeAppMP *this)
{
  this->__vftable = (ComGameModeAppMP_vtbl *)&ComGameModeAppMP::`vftable';
}

/*
==============
ComGameModeAppMP::~ComGameModeAppMP
==============
*/
void ComGameModeAppMP::~ComGameModeAppMP(ComGameModeAppMP *this)
{
  this->__vftable = (ComGameModeAppMP_vtbl *)&ComGameModeAppMP::`vftable';
  ComGameModeApplication::~ComGameModeApplication(this);
}

/*
==============
ComGameModeAppMP::DeRegisterNetworkDvars
==============
*/
void ComGameModeAppMP::DeRegisterNetworkDvars(ComGameModeAppMP *this)
{
  BG_DeregisterNetworkDvars();
  R_DeRegisterNetworkDvars();
  CG_MainMP_DeRegisterReplicatedDvars();
}

/*
==============
ComGameModeAppMP::EquipWeaponRiotShield
==============
*/
void ComGameModeAppMP::EquipWeaponRiotShield(ComGameModeAppMP *this, const Weapon *weapon, int clientNum)
{
  ;
}

/*
==============
ComGameModeAppMP::InitializeGameMode
==============
*/
void ComGameModeAppMP::InitializeGameMode(ComGameModeAppMP *this)
{
  PublisherVariableManager *Instance; 
  PublisherVariableManager *v3; 

  ComCharacterLimits::SetModeLimits(0xC8u);
  BG_TransientsInfilMP_Shutdown();
  ComGameModeApplication::BeginCommonInitialization(this);
  if ( MemCard_LargeFileBuffer_GetCommitSize() )
    G_SaveMemory_WaitForSaveTasksToComplete();
  MemCard_LargeFileBuffer_Destroy();
  Com_MP_RegisterDvars();
  Com_MP_SetShouldLocalServerPause(0);
  Huff_Init();
  BG_RegisterCommonDvars();
  NetConstStrings_EnableRestrictions(0);
  NetConstStrings_InitNetworkDvars();
  SV_CmdsMP_AddOperatorCommands();
  SV_AgentSetupAgentCount((const char *)&queryFormat.fmt + 3);
  MatchRules_Init();
  DB_SetAlwaysAllowMissingServerAsset(1);
  Instance = PublisherVariableManager::GetInstance();
  if ( PublisherVariableManager::HasRetrievedVariables(Instance) )
  {
    v3 = PublisherVariableManager::GetInstance();
    PublisherVariableManager::ReapplyAllPublisherVariables(v3);
  }
  MSG_GenerateSignature();
  Scr_InitStringConstants(0);
  Scr_SetRecordErrors(1);
  ComGameModeApplication::FinalizeCommonInitialization(this);
}

/*
==============
ComGameModeAppMP::RegisterNetworkDvars
==============
*/
void ComGameModeAppMP::RegisterNetworkDvars(ComGameModeAppMP *this)
{
  BG_RegisterNetworkDvars();
  R_RegisterNetworkDvars();
  CG_MainMP_RegisterReplicatedDvars();
}

/*
==============
ComGameModeAppMP::RunFrameHeadless
==============
*/
void ComGameModeAppMP::RunFrameHeadless(ComGameModeAppMP *this, int msec)
{
  ;
}

/*
==============
ComGameModeAppMP::SetupWeaponDefDevGui
==============
*/
void ComGameModeAppMP::SetupWeaponDefDevGui(ComGameModeAppMP *this, const Weapon *weapon)
{
  ;
}

/*
==============
ComGameModeAppMP::ShutdownGameMode
==============
*/
void ComGameModeAppMP::ShutdownGameMode(ComGameModeAppMP *this)
{
  MatchRules_Shutdown();
  Com_MP_UnregisterDvars();
  BG_DeregisterCommonDvars();
  NetConstStrings_ShutdownNetworkDvars();
  SV_CmdsMP_RemoveOperatorCommands();
  MemCard_LargeFileBuffer_Init();
  ComGameModeApplication::FinalizeCommonShutdown(this);
}

