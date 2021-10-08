/*
==============
CgMLGSpectator::ShouldListenInToClient
==============
*/

int __fastcall CgMLGSpectator::ShouldListenInToClient(CgMLGSpectator *this, LocalClientNum_t localClientNum, int clientNum)
{
  return ?ShouldListenInToClient@CgMLGSpectator@@QEAAHW4LocalClientNum_t@@H@Z(this, localClientNum, clientNum);
}

/*
==============
CgMLGSpectator::GetMLGSpectatorClientInfo
==============
*/

const MLGSpectatorClientInfo *__fastcall CgMLGSpectator::GetMLGSpectatorClientInfo(CgMLGSpectator *this, const int clientIndex)
{
  return ?GetMLGSpectatorClientInfo@CgMLGSpectator@@QEBAPEBUMLGSpectatorClientInfo@@H@Z(this, clientIndex);
}

/*
==============
CgMLGSpectator::SetPlayerNumbersEnabled
==============
*/

void __fastcall CgMLGSpectator::SetPlayerNumbersEnabled(CgMLGSpectator *this, bool playerNumbersEnabled)
{
  ?SetPlayerNumbersEnabled@CgMLGSpectator@@QEAAX_N@Z(this, playerNumbersEnabled);
}

/*
==============
CgMLGSpectator::GetPlayerOutlineColor
==============
*/

HudOutlineColor __fastcall CgMLGSpectator::GetPlayerOutlineColor(CgMLGSpectator *this, const LocalClientNum_t localClientNum, const team_t playerTeam)
{
  return ?GetPlayerOutlineColor@CgMLGSpectator@@QEBA?AW4HudOutlineColor@@W4LocalClientNum_t@@W4team_t@@@Z(this, localClientNum, playerTeam);
}

/*
==============
CgMLGSpectator::IsClientSpecialActive
==============
*/

int __fastcall CgMLGSpectator::IsClientSpecialActive(CgMLGSpectator *this, int clientNum)
{
  return ?IsClientSpecialActive@CgMLGSpectator@@QEBAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetPlayerNumbersEnabled
==============
*/

int __fastcall CgMLGSpectator::GetPlayerNumbersEnabled(CgMLGSpectator *this)
{
  return ?GetPlayerNumbersEnabled@CgMLGSpectator@@QEBAHXZ(this);
}

/*
==============
CgMLGSpectator::ResetOutlineFadeTime
==============
*/

void __fastcall CgMLGSpectator::ResetOutlineFadeTime(CgMLGSpectator *this, LocalClientNum_t localClientNum)
{
  ?ResetOutlineFadeTime@CgMLGSpectator@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMLGSpectator::GetClientCurrentLoadoutTypeIndex
==============
*/

int __fastcall CgMLGSpectator::GetClientCurrentLoadoutTypeIndex(CgMLGSpectator *this, int clientNum, MLGLoadoutType loadoutType)
{
  return ?GetClientCurrentLoadoutTypeIndex@CgMLGSpectator@@QEAAHHW4MLGLoadoutType@@@Z(this, clientNum, loadoutType);
}

/*
==============
CgMLGSpectator::~CgMLGSpectator
==============
*/

void __fastcall CgMLGSpectator::~CgMLGSpectator(CgMLGSpectator *this)
{
  ??1CgMLGSpectator@@QEAA@XZ(this);
}

/*
==============
CgMLGSpectator::GetClientCurrentWeapon
==============
*/

int __fastcall CgMLGSpectator::GetClientCurrentWeapon(CgMLGSpectator *this, int clientNum)
{
  return ?GetClientCurrentWeapon@CgMLGSpectator@@QEBAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::SetOutlineViewMode
==============
*/

void __fastcall CgMLGSpectator::SetOutlineViewMode(CgMLGSpectator *this, const PlayerOutlineViewMode outlineViewMode)
{
  ?SetOutlineViewMode@CgMLGSpectator@@QEAAXW4PlayerOutlineViewMode@@@Z(this, outlineViewMode);
}

/*
==============
CgMLGSpectator::IsFollowDroneActive
==============
*/

int __fastcall CgMLGSpectator::IsFollowDroneActive(CgMLGSpectator *this, int clientNum)
{
  return ?IsFollowDroneActive@CgMLGSpectator@@QEAAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetClientPowerSecondaryProgress
==============
*/

int __fastcall CgMLGSpectator::GetClientPowerSecondaryProgress(CgMLGSpectator *this, int clientNum)
{
  return ?GetClientPowerSecondaryProgress@CgMLGSpectator@@QEBAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetClientInClipAmmo
==============
*/

int __fastcall CgMLGSpectator::GetClientInClipAmmo(CgMLGSpectator *this, int clientNum, int slot)
{
  return ?GetClientInClipAmmo@CgMLGSpectator@@QEBAHHH@Z(this, clientNum, slot);
}

/*
==============
CgMLGSpectator::HasSpecialistBonus
==============
*/

int __fastcall CgMLGSpectator::HasSpecialistBonus(CgMLGSpectator *this, int clientNum)
{
  return ?HasSpecialistBonus@CgMLGSpectator@@QEBAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetClientNextKillstreakCost
==============
*/

int __fastcall CgMLGSpectator::GetClientNextKillstreakCost(CgMLGSpectator *this, int clientNum)
{
  return ?GetClientNextKillstreakCost@CgMLGSpectator@@QEAAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::IsClientMLGSpectator
==============
*/

int __fastcall CgMLGSpectator::IsClientMLGSpectator(CgMLGSpectator *this, LocalClientNum_t localClientNum, int clientNum)
{
  return ?IsClientMLGSpectator@CgMLGSpectator@@QEAAHW4LocalClientNum_t@@H@Z(this, localClientNum, clientNum);
}

/*
==============
CgMLGSpectator::GetClientKillstreakIndex
==============
*/

int __fastcall CgMLGSpectator::GetClientKillstreakIndex(CgMLGSpectator *this, int clientNum, int killstreakNum)
{
  return ?GetClientKillstreakIndex@CgMLGSpectator@@QEBAHHH@Z(this, clientNum, killstreakNum);
}

/*
==============
CgMLGSpectator::IsClientLoadoutDirty
==============
*/

int __fastcall CgMLGSpectator::IsClientLoadoutDirty(CgMLGSpectator *this, int clientNum)
{
  return ?IsClientLoadoutDirty@CgMLGSpectator@@QEAAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetClientPowerSecondaryAmmo
==============
*/

int __fastcall CgMLGSpectator::GetClientPowerSecondaryAmmo(CgMLGSpectator *this, int clientNum)
{
  return ?GetClientPowerSecondaryAmmo@CgMLGSpectator@@QEBAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::IsClientGametypeVIP
==============
*/

int __fastcall CgMLGSpectator::IsClientGametypeVIP(CgMLGSpectator *this, int clientNum)
{
  return ?IsClientGametypeVIP@CgMLGSpectator@@QEAAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::IsMLGMessageSent
==============
*/

int __fastcall CgMLGSpectator::IsMLGMessageSent(CgMLGSpectator *this, int clientNum)
{
  return ?IsMLGMessageSent@CgMLGSpectator@@QEBAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetClientSuperMeterProgress
==============
*/

int __fastcall CgMLGSpectator::GetClientSuperMeterProgress(CgMLGSpectator *this, int clientNum)
{
  return ?GetClientSuperMeterProgress@CgMLGSpectator@@QEAAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetLocationSelectorCursor
==============
*/

vec2_t __fastcall CgMLGSpectator::GetLocationSelectorCursor(CgMLGSpectator *this, int clientNum)
{
  return ?GetLocationSelectorCursor@CgMLGSpectator@@QEAA?ATvec2_t@@H@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetClientWeapon
==============
*/

const Weapon *__fastcall CgMLGSpectator::GetClientWeapon(CgMLGSpectator *this, LocalClientNum_t localClientNum, const int clientNum, const int weaponIndex)
{
  return ?GetClientWeapon@CgMLGSpectator@@QEAAPEBUWeapon@@W4LocalClientNum_t@@HH@Z(this, localClientNum, clientNum, weaponIndex);
}

/*
==============
CgMLGSpectator::GetClientDamageDone
==============
*/

int __fastcall CgMLGSpectator::GetClientDamageDone(CgMLGSpectator *this, int clientNum)
{
  return ?GetClientDamageDone@CgMLGSpectator@@QEBAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetOutlineViewmodel
==============
*/

int __fastcall CgMLGSpectator::GetOutlineViewmodel(CgMLGSpectator *this)
{
  return ?GetOutlineViewmodel@CgMLGSpectator@@QEBAHXZ(this);
}

/*
==============
CgMLGSpectator::GetOutlineFadeTime
==============
*/

int __fastcall CgMLGSpectator::GetOutlineFadeTime(CgMLGSpectator *this)
{
  return ?GetOutlineFadeTime@CgMLGSpectator@@QEAAHXZ(this);
}

/*
==============
CgMLGSpectator::SetOutlinePlayers
==============
*/

void __fastcall CgMLGSpectator::SetOutlinePlayers(CgMLGSpectator *this, const int outlinePlayers)
{
  ?SetOutlinePlayers@CgMLGSpectator@@QEAAXH@Z(this, outlinePlayers);
}

/*
==============
CgMLGSpectator::GetOutlinePlayers
==============
*/

int __fastcall CgMLGSpectator::GetOutlinePlayers(CgMLGSpectator *this)
{
  return ?GetOutlinePlayers@CgMLGSpectator@@QEBAHXZ(this);
}

/*
==============
CgMLGSpectator::GetVisionSetMode
==============
*/

VisionSetMode __fastcall CgMLGSpectator::GetVisionSetMode(CgMLGSpectator *this)
{
  return ?GetVisionSetMode@CgMLGSpectator@@QEBA?AW4VisionSetMode@@XZ(this);
}

/*
==============
CgMLGSpectator::GetHighlightClientNum
==============
*/

int __fastcall CgMLGSpectator::GetHighlightClientNum(CgMLGSpectator *this)
{
  return ?GetHighlightClientNum@CgMLGSpectator@@QEBAHXZ(this);
}

/*
==============
CgMLGSpectator::GetClientKillstreakAvailability
==============
*/

int __fastcall CgMLGSpectator::GetClientKillstreakAvailability(CgMLGSpectator *this, int clientNum, int killstreakNum)
{
  return ?GetClientKillstreakAvailability@CgMLGSpectator@@QEBAHHH@Z(this, clientNum, killstreakNum);
}

/*
==============
CgMLGSpectator::IsClientNoteworthyKillstreakActive
==============
*/

int __fastcall CgMLGSpectator::IsClientNoteworthyKillstreakActive(CgMLGSpectator *this, int clientNum)
{
  return ?IsClientNoteworthyKillstreakActive@CgMLGSpectator@@QEAAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetClientPowerPrimaryAmmo
==============
*/

int __fastcall CgMLGSpectator::GetClientPowerPrimaryAmmo(CgMLGSpectator *this, int clientNum)
{
  return ?GetClientPowerPrimaryAmmo@CgMLGSpectator@@QEBAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetMLGSpectator
==============
*/

CgMLGSpectator *__fastcall CgMLGSpectator::GetMLGSpectator(const LocalClientNum_t localClientNum)
{
  return ?GetMLGSpectator@CgMLGSpectator@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgMLGSpectator::SetClientLoadoutDirty
==============
*/

void __fastcall CgMLGSpectator::SetClientLoadoutDirty(CgMLGSpectator *this, const int clientIndex, int isDirty)
{
  ?SetClientLoadoutDirty@CgMLGSpectator@@QEAAXHH@Z(this, clientIndex, isDirty);
}

/*
==============
CgMLGSpectator::SetHighlightClientNum
==============
*/

void __fastcall CgMLGSpectator::SetHighlightClientNum(CgMLGSpectator *this, const int clientIndex)
{
  ?SetHighlightClientNum@CgMLGSpectator@@QEAAXH@Z(this, clientIndex);
}

/*
==============
CgMLGSpectator::GetTeam
==============
*/

team_t __fastcall CgMLGSpectator::GetTeam(CgMLGSpectator *this)
{
  return ?GetTeam@CgMLGSpectator@@QEBA?AW4team_t@@XZ(this);
}

/*
==============
CgMLGSpectator::IsTetheredToPlayer
==============
*/

bool __fastcall CgMLGSpectator::IsTetheredToPlayer(CgMLGSpectator *this, const LocalClientNum_t localClientNum)
{
  return ?IsTetheredToPlayer@CgMLGSpectator@@QEBA_NW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMLGSpectator::SetWaypointsEnabled
==============
*/

void __fastcall CgMLGSpectator::SetWaypointsEnabled(CgMLGSpectator *this, bool waypointsEnabled)
{
  ?SetWaypointsEnabled@CgMLGSpectator@@QEAAX_N@Z(this, waypointsEnabled);
}

/*
==============
CgMLGSpectator::GetClientDominationPoint
==============
*/

int __fastcall CgMLGSpectator::GetClientDominationPoint(CgMLGSpectator *this, int clientNum)
{
  return ?GetClientDominationPoint@CgMLGSpectator@@QEAAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::IsUsingSpecialist
==============
*/

int __fastcall CgMLGSpectator::IsUsingSpecialist(CgMLGSpectator *this, int clientNum)
{
  return ?IsUsingSpecialist@CgMLGSpectator@@QEBAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetListenIn
==============
*/

int __fastcall CgMLGSpectator::GetListenIn(CgMLGSpectator *this)
{
  return ?GetListenIn@CgMLGSpectator@@QEBAHXZ(this);
}

/*
==============
CgMLGSpectator::SetOutlineViewmodel
==============
*/

void __fastcall CgMLGSpectator::SetOutlineViewmodel(CgMLGSpectator *this, const int outlineViewmodel)
{
  ?SetOutlineViewmodel@CgMLGSpectator@@QEAAXH@Z(this, outlineViewmodel);
}

/*
==============
CgMLGSpectator::IsClientBeingRevived
==============
*/

int __fastcall CgMLGSpectator::IsClientBeingRevived(CgMLGSpectator *this, int clientNum)
{
  return ?IsClientBeingRevived@CgMLGSpectator@@QEBAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::SetVisionSetMode
==============
*/

void __fastcall CgMLGSpectator::SetVisionSetMode(CgMLGSpectator *this, VisionSetMode visionSet)
{
  ?SetVisionSetMode@CgMLGSpectator@@QEAAXW4VisionSetMode@@@Z(this, visionSet);
}

/*
==============
CgMLGSpectator::GetOutlineFadeTimerSeconds
==============
*/

int __fastcall CgMLGSpectator::GetOutlineFadeTimerSeconds(CgMLGSpectator *this)
{
  return ?GetOutlineFadeTimerSeconds@CgMLGSpectator@@QEAAHXZ(this);
}

/*
==============
CgMLGSpectator::GetSelectedClientNum
==============
*/

int __fastcall CgMLGSpectator::GetSelectedClientNum(CgMLGSpectator *this)
{
  return ?GetSelectedClientNum@CgMLGSpectator@@QEBAHXZ(this);
}

/*
==============
CgMLGSpectator::SetOutlineColorMode
==============
*/

void __fastcall CgMLGSpectator::SetOutlineColorMode(CgMLGSpectator *this, const PlayerOutlineColorMode outlineColorMode)
{
  ?SetOutlineColorMode@CgMLGSpectator@@QEAAXW4PlayerOutlineColorMode@@@Z(this, outlineColorMode);
}

/*
==============
CgMLGSpectator::GetClientPowerPrimaryProgress
==============
*/

int __fastcall CgMLGSpectator::GetClientPowerPrimaryProgress(CgMLGSpectator *this, int clientNum)
{
  return ?GetClientPowerPrimaryProgress@CgMLGSpectator@@QEBAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetClientConsecutiveKills
==============
*/

int __fastcall CgMLGSpectator::GetClientConsecutiveKills(CgMLGSpectator *this, int clientNum)
{
  return ?GetClientConsecutiveKills@CgMLGSpectator@@QEAAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetClientOutClipAmmo
==============
*/

int __fastcall CgMLGSpectator::GetClientOutClipAmmo(CgMLGSpectator *this, int clientNum, int slot)
{
  return ?GetClientOutClipAmmo@CgMLGSpectator@@QEBAHHH@Z(this, clientNum, slot);
}

/*
==============
CgMLGSpectator::GetClientInfo
==============
*/

const clientInfo_t *__fastcall CgMLGSpectator::GetClientInfo(CgMLGSpectator *this, LocalClientNum_t localClientNum, int clientNum)
{
  return ?GetClientInfo@CgMLGSpectator@@AEAAPEBUclientInfo_t@@W4LocalClientNum_t@@H@Z(this, localClientNum, clientNum);
}

/*
==============
CgMLGSpectator::SetListenIn
==============
*/

void __fastcall CgMLGSpectator::SetListenIn(CgMLGSpectator *this, bool listenIn)
{
  ?SetListenIn@CgMLGSpectator@@QEAAX_N@Z(this, listenIn);
}

/*
==============
CgMLGSpectator::CgMLGSpectator
==============
*/

void __fastcall CgMLGSpectator::CgMLGSpectator(CgMLGSpectator *this)
{
  ??0CgMLGSpectator@@QEAA@XZ(this);
}

/*
==============
CgMLGSpectator::IsLocalClientMLGSpectator
==============
*/

int __fastcall CgMLGSpectator::IsLocalClientMLGSpectator(CgMLGSpectator *this, LocalClientNum_t localClientNum)
{
  return ?IsLocalClientMLGSpectator@CgMLGSpectator@@QEAAHW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMLGSpectator::GetLocationSelectorAngle
==============
*/

double __fastcall CgMLGSpectator::GetLocationSelectorAngle(CgMLGSpectator *this, int clientNum)
{
  double result; 

  *(float *)&result = ?GetLocationSelectorAngle@CgMLGSpectator@@QEAAMH@Z(this, clientNum);
  return result;
}

/*
==============
CgMLGSpectator::SetTeam
==============
*/

void __fastcall CgMLGSpectator::SetTeam(CgMLGSpectator *this, const team_t team)
{
  ?SetTeam@CgMLGSpectator@@QEAAXW4team_t@@@Z(this, team);
}

/*
==============
CgMLGSpectator::ShouldDisplayPlayerOutline
==============
*/

bool __fastcall CgMLGSpectator::ShouldDisplayPlayerOutline(CgMLGSpectator *this, const LocalClientNum_t localClientNum, const team_t playerTeam)
{
  return ?ShouldDisplayPlayerOutline@CgMLGSpectator@@QEBA_NW4LocalClientNum_t@@W4team_t@@@Z(this, localClientNum, playerTeam);
}

/*
==============
CgMLGSpectator::GetClientKillstreakPoints
==============
*/

int __fastcall CgMLGSpectator::GetClientKillstreakPoints(CgMLGSpectator *this, int clientNum)
{
  return ?GetClientKillstreakPoints@CgMLGSpectator@@QEAAHH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::GetCameraManager
==============
*/

CgMLGCameraManager *__fastcall CgMLGSpectator::GetCameraManager(CgMLGSpectator *this)
{
  return ?GetCameraManager@CgMLGSpectator@@QEAAPEAVCgMLGCameraManager@@XZ(this);
}

/*
==============
CgMLGSpectator::SetOutlineFadeTimerSeconds
==============
*/

void __fastcall CgMLGSpectator::SetOutlineFadeTimerSeconds(CgMLGSpectator *this, int timeSeconds)
{
  ?SetOutlineFadeTimerSeconds@CgMLGSpectator@@QEAAXH@Z(this, timeSeconds);
}

/*
==============
CgMLGSpectator::GetClientExtraPowerValueByIndex
==============
*/

bool __fastcall CgMLGSpectator::GetClientExtraPowerValueByIndex(CgMLGSpectator *this, int clientNum, int index)
{
  return ?GetClientExtraPowerValueByIndex@CgMLGSpectator@@QEAA_NHH@Z(this, clientNum, index);
}

/*
==============
CgMLGSpectator::SetMLGSpectatorClientInfo
==============
*/

void __fastcall CgMLGSpectator::SetMLGSpectatorClientInfo(CgMLGSpectator *this, const int clientIndex, const MLGSpectatorClientInfo *mlgSpectatorClientInfo)
{
  ?SetMLGSpectatorClientInfo@CgMLGSpectator@@QEAAXHPEBUMLGSpectatorClientInfo@@@Z(this, clientIndex, mlgSpectatorClientInfo);
}

/*
==============
CgMLGSpectator::GetWaypointsEnabled
==============
*/

int __fastcall CgMLGSpectator::GetWaypointsEnabled(CgMLGSpectator *this)
{
  return ?GetWaypointsEnabled@CgMLGSpectator@@QEBAHXZ(this);
}

/*
==============
CgMLGSpectator::SetSelectedClientNum
==============
*/

void __fastcall CgMLGSpectator::SetSelectedClientNum(CgMLGSpectator *this, const int clientNum)
{
  ?SetSelectedClientNum@CgMLGSpectator@@QEAAXH@Z(this, clientNum);
}

/*
==============
CgMLGSpectator::CgMLGSpectator
==============
*/
void CgMLGSpectator::CgMLGSpectator(CgMLGSpectator *this)
{
  this->m_MLGMinimapHighlightClientNum = -1;
  this->m_lastMLGSpectatedTeam = TEAM_ZERO;
  this->m_outlineMLGPlayers = 0;
  this->m_outlineMLGViewMode = OUTLINE_ALL;
  *(_QWORD *)&this->m_outlineMLGViewmodel = 1i64;
  this->m_selectedClientNum = 1;
  this->m_outlineFadeTimerLengthSeconds = 2;
  CgMLGCameraManager::CgMLGCameraManager(&this->m_mlgCameraManager);
}

/*
==============
CgMLGSpectator::~CgMLGSpectator
==============
*/
void CgMLGSpectator::~CgMLGSpectator(CgMLGSpectator *this)
{
  ;
}

/*
==============
CgMLGSpectator::GetCameraManager
==============
*/
CgMLGCameraManager *CgMLGSpectator::GetCameraManager(CgMLGSpectator *this)
{
  return &this->m_mlgCameraManager;
}

/*
==============
CgMLGSpectator::GetClientConsecutiveKills
==============
*/
__int64 CgMLGSpectator::GetClientConsecutiveKills(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].consecutiveKills;
}

/*
==============
CgMLGSpectator::GetClientCurrentLoadoutTypeIndex
==============
*/
__int64 CgMLGSpectator::GetClientCurrentLoadoutTypeIndex(CgMLGSpectator *this, int clientNum, MLGLoadoutType loadoutType)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v3 = loadoutType;
  v5 = clientNum;
  if ( (unsigned int)loadoutType >= MLG_LOADOUT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 488, ASSERT_TYPE_ASSERT, "(unsigned)( loadoutType ) < (unsigned)( MLG_LOADOUT_COUNT )", "loadoutType doesn't index MLG_LOADOUT_COUNT\n\t%i not in [0, %i)", loadoutType, 12) )
    __debugbreak();
  if ( (unsigned int)v5 >= cls.maxClients )
  {
    LODWORD(v8) = cls.maxClients;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v5].loadoutIndicies[v3];
}

/*
==============
CgMLGSpectator::GetClientCurrentWeapon
==============
*/
__int64 CgMLGSpectator::GetClientCurrentWeapon(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].currentWeaponUsed;
}

/*
==============
CgMLGSpectator::GetClientDamageDone
==============
*/
__int64 CgMLGSpectator::GetClientDamageDone(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].damageDone;
}

/*
==============
CgMLGSpectator::GetClientDominationPoint
==============
*/
__int64 CgMLGSpectator::GetClientDominationPoint(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].dominationPoint;
}

/*
==============
CgMLGSpectator::GetClientExtraPowerValueByIndex
==============
*/
bool CgMLGSpectator::GetClientExtraPowerValueByIndex(CgMLGSpectator *this, int clientNum, int index)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v3 = index;
  v5 = clientNum;
  if ( (unsigned int)index >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2 )", "index doesn't index MLG_MAX_EXTRA_POWER\n\t%i not in [0, %i)", index, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= cls.maxClients )
  {
    LODWORD(v8) = cls.maxClients;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return this->m_mlgSpectatorClientInfo[v5].extraPower[v3] != 0;
}

/*
==============
CgMLGSpectator::GetClientInClipAmmo
==============
*/
__int64 CgMLGSpectator::GetClientInClipAmmo(CgMLGSpectator *this, int clientNum, int slot)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v3 = slot;
  v5 = clientNum;
  if ( (unsigned int)slot >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 397, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index MAX_MLG_SPECTATOR_WEAPON_HANDLES\n\t%i not in [0, %i)", slot, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= cls.maxClients )
  {
    LODWORD(v8) = cls.maxClients;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v5].inClipAmmo[v3];
}

/*
==============
CgMLGSpectator::GetClientInfo
==============
*/
const clientInfo_t *CgMLGSpectator::GetClientInfo(CgMLGSpectator *this, LocalClientNum_t localClientNum, int clientNum)
{
  CgStatic *LocalClientStatics; 

  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  return LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum);
}

/*
==============
CgMLGSpectator::GetClientKillstreakAvailability
==============
*/
__int64 CgMLGSpectator::GetClientKillstreakAvailability(CgMLGSpectator *this, int clientNum, int killstreakNum)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v3 = killstreakNum;
  v5 = clientNum;
  if ( (unsigned int)killstreakNum >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 430, ASSERT_TYPE_ASSERT, "(unsigned)( killstreakNum ) < (unsigned)( 4 )", "killstreakNum doesn't index MLG_KILLSTREAKS_SLOTS\n\t%i not in [0, %i)", killstreakNum, 4) )
    __debugbreak();
  if ( (unsigned int)v5 >= cls.maxClients )
  {
    LODWORD(v8) = cls.maxClients;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v5].killstreakAvailability[v3];
}

/*
==============
CgMLGSpectator::GetClientKillstreakIndex
==============
*/
__int64 CgMLGSpectator::GetClientKillstreakIndex(CgMLGSpectator *this, int clientNum, int killstreakNum)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v3 = killstreakNum;
  v5 = clientNum;
  if ( (unsigned int)killstreakNum >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 423, ASSERT_TYPE_ASSERT, "(unsigned)( killstreakNum ) < (unsigned)( 4 )", "killstreakNum doesn't index MLG_KILLSTREAKS_SLOTS\n\t%i not in [0, %i)", killstreakNum, 4) )
    __debugbreak();
  if ( (unsigned int)v5 >= cls.maxClients )
  {
    LODWORD(v8) = cls.maxClients;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v5].killstreakIndexes[v3];
}

/*
==============
CgMLGSpectator::GetClientKillstreakPoints
==============
*/
__int64 CgMLGSpectator::GetClientKillstreakPoints(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].killstreakPoints;
}

/*
==============
CgMLGSpectator::GetClientNextKillstreakCost
==============
*/
__int64 CgMLGSpectator::GetClientNextKillstreakCost(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].nextKillstreakCost;
}

/*
==============
CgMLGSpectator::GetClientOutClipAmmo
==============
*/
__int64 CgMLGSpectator::GetClientOutClipAmmo(CgMLGSpectator *this, int clientNum, int slot)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v3 = slot;
  v5 = clientNum;
  if ( (unsigned int)slot >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 404, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index MAX_MLG_SPECTATOR_WEAPON_HANDLES\n\t%i not in [0, %i)", slot, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= cls.maxClients )
  {
    LODWORD(v8) = cls.maxClients;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v5].outClipAmmo[v3];
}

/*
==============
CgMLGSpectator::GetClientPowerPrimaryAmmo
==============
*/
__int64 CgMLGSpectator::GetClientPowerPrimaryAmmo(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].powerPrimaryAmmo;
}

/*
==============
CgMLGSpectator::GetClientPowerPrimaryProgress
==============
*/
__int64 CgMLGSpectator::GetClientPowerPrimaryProgress(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].powerPrimaryProgress;
}

/*
==============
CgMLGSpectator::GetClientPowerSecondaryAmmo
==============
*/
__int64 CgMLGSpectator::GetClientPowerSecondaryAmmo(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].powerSecondaryAmmo;
}

/*
==============
CgMLGSpectator::GetClientPowerSecondaryProgress
==============
*/
__int64 CgMLGSpectator::GetClientPowerSecondaryProgress(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].powerSecondaryProgress;
}

/*
==============
CgMLGSpectator::GetClientSuperMeterProgress
==============
*/
__int64 CgMLGSpectator::GetClientSuperMeterProgress(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].superMeterProgress;
}

/*
==============
CgMLGSpectator::GetClientWeapon
==============
*/
const Weapon *CgMLGSpectator::GetClientWeapon(CgMLGSpectator *this, LocalClientNum_t localClientNum, const int clientNum, const int weaponIndex)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  bool v8; 
  BgWeaponMap **v9; 
  BgWeaponMap *v10; 
  unsigned int m_mapEntryId; 
  const MLGSpectatorClientInfo *MLGSpectatorClientInfo; 
  __int64 v14; 
  __int64 v15; 

  v4 = weaponIndex;
  v6 = clientNum;
  v7 = localClientNum;
  if ( (unsigned int)weaponIndex >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 495, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 2 )", "weaponIndex doesn't index MAX_MLG_SPECTATOR_WEAPON_HANDLES\n\t%i not in [0, %i)", weaponIndex, 2) )
    __debugbreak();
  v8 = CgWeaponMap::ms_instance[v7] == NULL;
  v9 = &CgWeaponMap::ms_instance[v7];
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v10 = *v9;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 497, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( (unsigned int)v6 >= cls.maxClients )
  {
    LODWORD(v15) = cls.maxClients;
    LODWORD(v14) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( (CgMLGSpectator *)((char *)this + 216 * v6) == (CgMLGSpectator *)-24i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 499, ASSERT_TYPE_ASSERT, "(spectator)", (const char *)&queryFormat, "spectator") )
    __debugbreak();
  m_mapEntryId = this->m_mlgSpectatorClientInfo[v6].weaponHandles[v4].m_mapEntryId;
  if ( !m_mapEntryId || !BgWeaponMap::IsEntryValid(v10, m_mapEntryId) )
    return 0i64;
  MLGSpectatorClientInfo = CgMLGSpectator::GetMLGSpectatorClientInfo(this, v6);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 457, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !MLGSpectatorClientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 458, ASSERT_TYPE_ASSERT, "(mlgSpectatorClientInfo)", (const char *)&queryFormat, "mlgSpectatorClientInfo") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v15) = 2;
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 459, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2 )", "index doesn't index MAX_MLG_SPECTATOR_WEAPON_HANDLES\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  return BgWeaponMap::GetWeapon(v10, MLGSpectatorClientInfo->weaponHandles[v4]);
}

/*
==============
CgMLGSpectator::GetHighlightClientNum
==============
*/
__int64 CgMLGSpectator::GetHighlightClientNum(CgMLGSpectator *this)
{
  return (unsigned int)this->m_MLGMinimapHighlightClientNum;
}

/*
==============
CgMLGSpectator::GetListenIn
==============
*/
__int64 CgMLGSpectator::GetListenIn(CgMLGSpectator *this)
{
  return (unsigned int)this->m_listenInEnabled;
}

/*
==============
CgMLGSpectator::GetLocationSelectorAngle
==============
*/
float CgMLGSpectator::GetLocationSelectorAngle(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  _RDI = this;
  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  _RCX = 216 * v3;
  __asm { vmovss  xmm0, dword ptr [rcx+rdi+0DCh] }
  return *(float *)&_XMM0;
}

/*
==============
CgMLGSpectator::GetLocationSelectorCursor
==============
*/
vec2_t CgMLGSpectator::GetLocationSelectorCursor(CgMLGSpectator *this, vec2_t *clientNum, int a3)
{
  __int64 v4; 
  int maxClients; 

  v4 = a3;
  if ( (unsigned int)a3 >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", a3, maxClients) )
      __debugbreak();
  }
  *clientNum = this->m_mlgSpectatorClientInfo[v4].locationSelectorCursor;
  return (vec2_t)clientNum;
}

/*
==============
CgMLGSpectator::GetMLGSpectator
==============
*/
CgMLGSpectator *CgMLGSpectator::GetMLGSpectator(const LocalClientNum_t localClientNum)
{
  return CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_mlgSpectatorPtr;
}

/*
==============
CgMLGSpectator::GetMLGSpectatorClientInfo
==============
*/
MLGSpectatorClientInfo *CgMLGSpectator::GetMLGSpectatorClientInfo(CgMLGSpectator *this, const int clientIndex)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientIndex;
  if ( (unsigned int)clientIndex >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientIndex, maxClients) )
      __debugbreak();
  }
  return &this->m_mlgSpectatorClientInfo[v3];
}

/*
==============
CgMLGSpectator::GetOutlineFadeTime
==============
*/
__int64 CgMLGSpectator::GetOutlineFadeTime(CgMLGSpectator *this)
{
  return (unsigned int)this->m_outlineFadeTime;
}

/*
==============
CgMLGSpectator::GetOutlineFadeTimerSeconds
==============
*/
__int64 CgMLGSpectator::GetOutlineFadeTimerSeconds(CgMLGSpectator *this)
{
  return (unsigned int)this->m_outlineFadeTimerLengthSeconds;
}

/*
==============
CgMLGSpectator::GetOutlinePlayers
==============
*/
__int64 CgMLGSpectator::GetOutlinePlayers(CgMLGSpectator *this)
{
  return (unsigned int)this->m_outlineMLGPlayers;
}

/*
==============
CgMLGSpectator::GetOutlineViewmodel
==============
*/
__int64 CgMLGSpectator::GetOutlineViewmodel(CgMLGSpectator *this)
{
  return (unsigned int)this->m_outlineMLGViewmodel;
}

/*
==============
CgMLGSpectator::GetPlayerNumbersEnabled
==============
*/
__int64 CgMLGSpectator::GetPlayerNumbersEnabled(CgMLGSpectator *this)
{
  return (unsigned int)this->m_playerNumbersEnabled;
}

/*
==============
CgMLGSpectator::GetPlayerOutlineColor
==============
*/
__int64 CgMLGSpectator::GetPlayerOutlineColor(CgMLGSpectator *this, const LocalClientNum_t localClientNum, const team_t playerTeam)
{
  PlayerOutlineColorMode m_outlineMLGColorMode; 
  __int64 result; 

  m_outlineMLGColorMode = this->m_outlineMLGColorMode;
  if ( m_outlineMLGColorMode )
  {
    if ( m_outlineMLGColorMode == COLOR_BY_TEAM_COLOR )
    {
      if ( playerTeam == TEAM_ONE )
        return 11i64;
      if ( playerTeam == TEAM_TWO )
        return 10i64;
    }
    return playerTeam == TEAM_ZERO;
  }
  else
  {
    if ( playerTeam == TEAM_ZERO )
      return 8i64;
    result = 9i64;
    if ( playerTeam != this->m_lastMLGSpectatedTeam )
      return 8i64;
  }
  return result;
}

/*
==============
CgMLGSpectator::GetSelectedClientNum
==============
*/
__int64 CgMLGSpectator::GetSelectedClientNum(CgMLGSpectator *this)
{
  return (unsigned int)this->m_selectedClientNum;
}

/*
==============
CgMLGSpectator::GetTeam
==============
*/
__int64 CgMLGSpectator::GetTeam(CgMLGSpectator *this)
{
  return (unsigned int)this->m_lastMLGSpectatedTeam;
}

/*
==============
CgMLGSpectator::GetVisionSetMode
==============
*/
__int64 CgMLGSpectator::GetVisionSetMode(CgMLGSpectator *this)
{
  return (unsigned int)this->m_visionSet;
}

/*
==============
CgMLGSpectator::GetWaypointsEnabled
==============
*/
__int64 CgMLGSpectator::GetWaypointsEnabled(CgMLGSpectator *this)
{
  return (unsigned int)this->m_waypointsEnabled;
}

/*
==============
CgMLGSpectator::HasSpecialistBonus
==============
*/
__int64 CgMLGSpectator::HasSpecialistBonus(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].hasSpecialistBonus;
}

/*
==============
CgMLGSpectator::IsClientBeingRevived
==============
*/
__int64 CgMLGSpectator::IsClientBeingRevived(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].isBeingRevived;
}

/*
==============
CgMLGSpectator::IsClientGametypeVIP
==============
*/
__int64 CgMLGSpectator::IsClientGametypeVIP(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].isGametypeVIP;
}

/*
==============
CgMLGSpectator::IsClientLoadoutDirty
==============
*/
_BOOL8 CgMLGSpectator::IsClientLoadoutDirty(CgMLGSpectator *this, int clientNum)
{
  return this->m_loadoutDirty[clientNum];
}

/*
==============
CgMLGSpectator::IsClientMLGSpectator
==============
*/
_BOOL8 CgMLGSpectator::IsClientMLGSpectator(CgMLGSpectator *this, LocalClientNum_t localClientNum, int clientNum)
{
  CgStatic *LocalClientStatics; 

  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  return LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum)->isMLGSpectator;
}

/*
==============
CgMLGSpectator::IsClientNoteworthyKillstreakActive
==============
*/
__int64 CgMLGSpectator::IsClientNoteworthyKillstreakActive(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].isNoteworthyKillstreakActive;
}

/*
==============
CgMLGSpectator::IsClientSpecialActive
==============
*/
__int64 CgMLGSpectator::IsClientSpecialActive(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].isSpecialActive;
}

/*
==============
CgMLGSpectator::IsFollowDroneActive
==============
*/
__int64 CgMLGSpectator::IsFollowDroneActive(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].followDroneActive;
}

/*
==============
CgMLGSpectator::IsLocalClientMLGSpectator
==============
*/
_BOOL8 CgMLGSpectator::IsLocalClientMLGSpectator(CgMLGSpectator *this, LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->m_isMLGSpectator;
}

/*
==============
CgMLGSpectator::IsMLGMessageSent
==============
*/
__int64 CgMLGSpectator::IsMLGMessageSent(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].mlgMessageSent;
}

/*
==============
CgMLGSpectator::IsTetheredToPlayer
==============
*/
bool CgMLGSpectator::IsTetheredToPlayer(CgMLGSpectator *this, const LocalClientNum_t localClientNum)
{
  CgMLGCameraManager *p_m_mlgCameraManager; 

  p_m_mlgCameraManager = &this->m_mlgCameraManager;
  return CgMLGCameraManager::GetMLGCameraType(&this->m_mlgCameraManager, localClientNum) == SPECTATOR || CgMLGCameraManager::GetMLGCameraType(p_m_mlgCameraManager, localClientNum) == AERIAL && CgMLGCameraManager::IsAerialCameraTethered(p_m_mlgCameraManager, localClientNum);
}

/*
==============
CgMLGSpectator::IsUsingSpecialist
==============
*/
__int64 CgMLGSpectator::IsUsingSpecialist(CgMLGSpectator *this, int clientNum)
{
  __int64 v3; 
  int maxClients; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  return (unsigned int)this->m_mlgSpectatorClientInfo[v3].isSpecialist;
}

/*
==============
CgMLGSpectator::ResetOutlineFadeTime
==============
*/
void CgMLGSpectator::ResetOutlineFadeTime(CgMLGSpectator *this, LocalClientNum_t localClientNum)
{
  this->m_outlineFadeTime = CgGlobalsMP::GetLocalClientGlobals(localClientNum)->time + 1000 * this->m_outlineFadeTimerLengthSeconds;
}

/*
==============
CgMLGSpectator::SetClientLoadoutDirty
==============
*/
void CgMLGSpectator::SetClientLoadoutDirty(CgMLGSpectator *this, const int clientIndex, int isDirty)
{
  this->m_loadoutDirty[clientIndex] = isDirty != 0;
}

/*
==============
CgMLGSpectator::SetHighlightClientNum
==============
*/
void CgMLGSpectator::SetHighlightClientNum(CgMLGSpectator *this, const int clientIndex)
{
  this->m_MLGMinimapHighlightClientNum = clientIndex;
}

/*
==============
CgMLGSpectator::SetListenIn
==============
*/
void CgMLGSpectator::SetListenIn(CgMLGSpectator *this, bool listenIn)
{
  this->m_listenInEnabled = listenIn;
}

/*
==============
CgMLGSpectator::SetMLGSpectatorClientInfo
==============
*/
void CgMLGSpectator::SetMLGSpectatorClientInfo(CgMLGSpectator *this, const int clientIndex, const MLGSpectatorClientInfo *mlgSpectatorClientInfo)
{
  __asm { vmovups xmm0, xmmword ptr [r8] }
  _R9 = &this->m_mlgSpectatorClientInfo[clientIndex];
  __asm
  {
    vmovups xmmword ptr [r9], xmm0
    vmovups xmm1, xmmword ptr [r8+10h]
    vmovups xmmword ptr [r9+10h], xmm1
    vmovups xmm0, xmmword ptr [r8+20h]
    vmovups xmmword ptr [r9+20h], xmm0
    vmovups xmm1, xmmword ptr [r8+30h]
    vmovups xmmword ptr [r9+30h], xmm1
    vmovups xmm0, xmmword ptr [r8+40h]
    vmovups xmmword ptr [r9+40h], xmm0
    vmovups xmm1, xmmword ptr [r8+50h]
    vmovups xmmword ptr [r9+50h], xmm1
    vmovups xmm0, xmmword ptr [r8+60h]
    vmovups xmmword ptr [r9+60h], xmm0
    vmovups xmm0, xmmword ptr [r8+70h]
    vmovups xmmword ptr [r9+70h], xmm0
    vmovups xmm1, xmmword ptr [r8+80h]
    vmovups xmmword ptr [r9+80h], xmm1
    vmovups xmm0, xmmword ptr [r8+90h]
    vmovups xmmword ptr [r9+90h], xmm0
    vmovups xmm1, xmmword ptr [r8+0A0h]
    vmovups xmmword ptr [r9+0A0h], xmm1
    vmovups xmm0, xmmword ptr [r8+0B0h]
    vmovups xmmword ptr [r9+0B0h], xmm0
    vmovups xmm1, xmmword ptr [r8+0C0h]
    vmovups xmmword ptr [r9+0C0h], xmm1
  }
  *(_QWORD *)&_R9->clientFoV = *(_QWORD *)&mlgSpectatorClientInfo->clientFoV;
}

/*
==============
CgMLGSpectator::SetOutlineColorMode
==============
*/
void CgMLGSpectator::SetOutlineColorMode(CgMLGSpectator *this, const PlayerOutlineColorMode outlineColorMode)
{
  this->m_outlineMLGColorMode = outlineColorMode;
}

/*
==============
CgMLGSpectator::SetOutlineFadeTimerSeconds
==============
*/
void CgMLGSpectator::SetOutlineFadeTimerSeconds(CgMLGSpectator *this, int timeSeconds)
{
  this->m_outlineFadeTimerLengthSeconds = timeSeconds;
}

/*
==============
CgMLGSpectator::SetOutlinePlayers
==============
*/
void CgMLGSpectator::SetOutlinePlayers(CgMLGSpectator *this, const int outlinePlayers)
{
  this->m_outlineMLGPlayers = outlinePlayers;
}

/*
==============
CgMLGSpectator::SetOutlineViewMode
==============
*/
void CgMLGSpectator::SetOutlineViewMode(CgMLGSpectator *this, const PlayerOutlineViewMode outlineViewMode)
{
  this->m_outlineMLGViewMode = outlineViewMode;
}

/*
==============
CgMLGSpectator::SetOutlineViewmodel
==============
*/
void CgMLGSpectator::SetOutlineViewmodel(CgMLGSpectator *this, const int outlineViewmodel)
{
  this->m_outlineMLGViewmodel = outlineViewmodel;
}

/*
==============
CgMLGSpectator::SetPlayerNumbersEnabled
==============
*/
void CgMLGSpectator::SetPlayerNumbersEnabled(CgMLGSpectator *this, bool playerNumbersEnabled)
{
  this->m_playerNumbersEnabled = playerNumbersEnabled;
}

/*
==============
CgMLGSpectator::SetSelectedClientNum
==============
*/
void CgMLGSpectator::SetSelectedClientNum(CgMLGSpectator *this, const int clientNum)
{
  this->m_selectedClientNum = clientNum;
}

/*
==============
CgMLGSpectator::SetTeam
==============
*/
void CgMLGSpectator::SetTeam(CgMLGSpectator *this, const team_t team)
{
  team_t v2; 

  v2 = TEAM_TWO;
  if ( team != TEAM_SPECTATOR )
    v2 = team;
  this->m_lastMLGSpectatedTeam = v2;
}

/*
==============
CgMLGSpectator::SetVisionSetMode
==============
*/
void CgMLGSpectator::SetVisionSetMode(CgMLGSpectator *this, VisionSetMode visionSet)
{
  this->m_visionSet = visionSet;
}

/*
==============
CgMLGSpectator::SetWaypointsEnabled
==============
*/
void CgMLGSpectator::SetWaypointsEnabled(CgMLGSpectator *this, bool waypointsEnabled)
{
  this->m_waypointsEnabled = waypointsEnabled;
}

/*
==============
CgMLGSpectator::ShouldDisplayPlayerOutline
==============
*/
char CgMLGSpectator::ShouldDisplayPlayerOutline(CgMLGSpectator *this, const LocalClientNum_t localClientNum, const team_t playerTeam)
{
  PlayerOutlineViewMode m_outlineMLGViewMode; 
  __int32 v4; 

  if ( !this->m_outlineMLGPlayers )
    return 0;
  m_outlineMLGViewMode = this->m_outlineMLGViewMode;
  if ( m_outlineMLGViewMode )
  {
    v4 = m_outlineMLGViewMode - 1;
    if ( v4 )
    {
      if ( v4 != 1 || playerTeam && playerTeam == this->m_lastMLGSpectatedTeam )
        return 0;
    }
    else if ( playerTeam == TEAM_ZERO || playerTeam != this->m_lastMLGSpectatedTeam )
    {
      return 0;
    }
  }
  return 1;
}

/*
==============
CgMLGSpectator::ShouldListenInToClient
==============
*/
_BOOL8 CgMLGSpectator::ShouldListenInToClient(CgMLGSpectator *this, LocalClientNum_t localClientNum, int clientNum)
{
  __int64 v4; 
  CgStatic *LocalClientStatics; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  __int64 v9; 

  v4 = clientNum;
  if ( !this->m_listenInEnabled )
    return 0i64;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)v4 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v9) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v9, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v4);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v4);
  }
  return CharacterInfo && this->m_lastMLGSpectatedTeam == CharacterInfo->team;
}

