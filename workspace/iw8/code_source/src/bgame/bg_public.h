/*
==============
BG_IsBlockingNightVision
==============
*/

bool __fastcall BG_IsBlockingNightVision(const playerState_s *ps)
{
  return ?BG_IsBlockingNightVision@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_NormalizeWorldUpReferenceAngles
==============
*/

void __fastcall BG_NormalizeWorldUpReferenceAngles(playerState_s *ps, const BgHandler *handler)
{
  ?BG_NormalizeWorldUpReferenceAngles@@YAXPEAUplayerState_s@@PEBVBgHandler@@@Z(ps, handler);
}

/*
==============
BG_IsFakeActor
==============
*/

bool __fastcall BG_IsFakeActor(const entityState_t *es)
{
  return ?BG_IsFakeActor@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsPlayerOnRemoteTurret
==============
*/

bool __fastcall BG_IsPlayerOnRemoteTurret(const playerState_s *ps)
{
  return ?BG_IsPlayerOnRemoteTurret@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsRemoteTurretActiveFlags
==============
*/

bool __fastcall BG_IsRemoteTurretActiveFlags(const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *esFlags)
{
  return ?BG_IsRemoteTurretActiveFlags@@YA_NPEBV?$GameModeFlagContainer@W4EntityStateFlagsCommon@@W4EntityStateFlagsSP@@W4EntityStateFlagsMP@@$0CA@@@@Z(esFlags);
}

/*
==============
BG_IsCorpseEntity
==============
*/

bool __fastcall BG_IsCorpseEntity(const entityState_t *es)
{
  return ?BG_IsCorpseEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsPlayerLinked
==============
*/

bool __fastcall BG_IsPlayerLinked(const playerState_s *ps)
{
  return ?BG_IsPlayerLinked@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsPlayer
==============
*/

bool __fastcall BG_IsPlayer(const playerState_s *ps)
{
  return ?BG_IsPlayer@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsCursorHintAnEntity
==============
*/

bool __fastcall BG_IsCursorHintAnEntity(const playerState_s *const ps)
{
  return ?BG_IsCursorHintAnEntity@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_UsrCmdPackAngle
==============
*/

int __fastcall BG_UsrCmdPackAngle(const float angle)
{
  return ?BG_UsrCmdPackAngle@@YAHM@Z(angle);
}

/*
==============
BG_IsPlayerLinkedToAnything
==============
*/

bool __fastcall BG_IsPlayerLinkedToAnything(const playerState_s *ps)
{
  return ?BG_IsPlayerLinkedToAnything@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_GetGravity
==============
*/

double __fastcall BG_GetGravity()
{
  double result; 

  *(float *)&result = ?BG_GetGravity@@YAMXZ();
  return result;
}

/*
==============
BG_IsCharacterPlayer
==============
*/

bool __fastcall BG_IsCharacterPlayer(const playerState_s *ps)
{
  return ?BG_IsCharacterPlayer@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_UsrCmdUnpackAngle
==============
*/

double __fastcall BG_UsrCmdUnpackAngle(const int packedAngle)
{
  double result; 

  *(float *)&result = ?BG_UsrCmdUnpackAngle@@YAMH@Z(packedAngle);
  return result;
}

/*
==============
BG_IsDeadEntity
==============
*/

bool __fastcall BG_IsDeadEntity(const entityState_t *es)
{
  return ?BG_IsDeadEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsPlayerZeroGFloating
==============
*/

bool __fastcall BG_IsPlayerZeroGFloating(const playerState_s *ps)
{
  return ?BG_IsPlayerZeroGFloating@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsCharacterOrFakeActorEntity
==============
*/

bool __fastcall BG_IsCharacterOrFakeActorEntity(const entityState_t *es)
{
  return ?BG_IsCharacterOrFakeActorEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsSpectating
==============
*/

bool __fastcall BG_IsSpectating(const playerState_s *ps)
{
  return ?BG_IsSpectating@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsPlayerFireDisabledForHand
==============
*/

bool __fastcall BG_IsPlayerFireDisabledForHand(const playerState_s *ps, const PlayerHandIndex hand)
{
  return ?BG_IsPlayerFireDisabledForHand@@YA_NPEBUplayerState_s@@W4PlayerHandIndex@@@Z(ps, hand);
}

/*
==============
BG_IsAgentEntity
==============
*/

bool __fastcall BG_IsAgentEntity(const entityState_t *es)
{
  return ?BG_IsAgentEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsVehicleActive
==============
*/

bool __fastcall BG_IsVehicleActive(const playerState_s *ps)
{
  return ?BG_IsVehicleActive@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsTurretActiveFlags
==============
*/

bool __fastcall BG_IsTurretActiveFlags(const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *esFlags)
{
  return ?BG_IsTurretActiveFlags@@YA_NPEBV?$GameModeFlagContainer@W4EntityStateFlagsCommon@@W4EntityStateFlagsSP@@W4EntityStateFlagsMP@@$0CA@@@@Z(esFlags);
}

/*
==============
BG_IsPlayerInExecution
==============
*/

bool __fastcall BG_IsPlayerInExecution(const playerState_s *ps)
{
  return ?BG_IsPlayerInExecution@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
pmove_t::OnOffHandInit
==============
*/

void __fastcall pmove_t::OnOffHandInit(pmove_t *this)
{
  ?OnOffHandInit@pmove_t@@UEBAXXZ(this);
}

/*
==============
BG_CursorHintEntityClear
==============
*/

void __fastcall BG_CursorHintEntityClear(playerState_s *ps)
{
  ?BG_CursorHintEntityClear@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsMantleEntity
==============
*/

bool __fastcall BG_IsMantleEntity(const entityState_t *es)
{
  return ?BG_IsMantleEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsAdsEntity
==============
*/

bool __fastcall BG_IsAdsEntity(const entityState_t *es)
{
  return ?BG_IsAdsEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsVehicleEntity
==============
*/

bool __fastcall BG_IsVehicleEntity(const entityState_t *es)
{
  return ?BG_IsVehicleEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsTurretActive
==============
*/

bool __fastcall BG_IsTurretActive(const playerState_s *ps)
{
  return ?BG_IsTurretActive@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsPlayerWalkingDisabled
==============
*/

bool __fastcall BG_IsPlayerWalkingDisabled(const playerState_s *ps)
{
  return ?BG_IsPlayerWalkingDisabled@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_CursorHintProgressEntityClear
==============
*/

void __fastcall BG_CursorHintProgressEntityClear(playerState_s *ps)
{
  ?BG_CursorHintProgressEntityClear@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
pmove_t::~pmove_t
==============
*/

void __fastcall pmove_t::~pmove_t(pmove_t *this)
{
  ??1pmove_t@@UEAA@XZ(this);
}

/*
==============
BG_IsSpringCamActive
==============
*/

bool __fastcall BG_IsSpringCamActive(const playerState_s *ps)
{
  return ?BG_IsSpringCamActive@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsPlayerOrAgentCorpseEntity
==============
*/

bool __fastcall BG_IsPlayerOrAgentCorpseEntity(const entityState_t *es)
{
  return ?BG_IsPlayerOrAgentCorpseEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsAgent
==============
*/

bool __fastcall BG_IsAgent(const playerState_s *ps)
{
  return ?BG_IsAgent@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsPlayerSwimming
==============
*/

bool __fastcall BG_IsPlayerSwimming(const playerState_s *ps)
{
  return ?BG_IsPlayerSwimming@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsSpectatingOrSpectator
==============
*/

bool __fastcall BG_IsSpectatingOrSpectator(const playerState_s *ps)
{
  return ?BG_IsSpectatingOrSpectator@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsPlayerZeroG
==============
*/

bool __fastcall BG_IsPlayerZeroG(const playerState_s *ps)
{
  return ?BG_IsPlayerZeroG@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsUfoViewmodel
==============
*/

bool __fastcall BG_IsUfoViewmodel(const playerState_s *ps)
{
  return ?BG_IsUfoViewmodel@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsZoomButtonPressed
==============
*/

int __fastcall BG_IsZoomButtonPressed(const usercmd_s *cmd)
{
  return ?BG_IsZoomButtonPressed@@YAHPEBUusercmd_s@@@Z(cmd);
}

/*
==============
BG_GetViewLinkedEntityData
==============
*/

ViewLinkedData *__fastcall BG_GetViewLinkedEntityData(playerState_s *ps, int entNumber)
{
  return ?BG_GetViewLinkedEntityData@@YAPEAUViewLinkedData@@PEAUplayerState_s@@H@Z(ps, entNumber);
}

/*
==============
pmove_t::SetSkydiveBasejumpGroundHeight
==============
*/

void __fastcall pmove_t::SetSkydiveBasejumpGroundHeight(pmove_t *this, const float height)
{
  ?SetSkydiveBasejumpGroundHeight@pmove_t@@UEBAXM@Z(this, height);
}

/*
==============
BG_IsPlayerOrAgentEntity
==============
*/

bool __fastcall BG_IsPlayerOrAgentEntity(const entityState_t *es)
{
  return ?BG_IsPlayerOrAgentEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_AnimTreeMP_ConvertScriptModelAnimRateFloatToInt
==============
*/

unsigned int __fastcall BG_AnimTreeMP_ConvertScriptModelAnimRateFloatToInt(const float animRateRaw)
{
  return ?BG_AnimTreeMP_ConvertScriptModelAnimRateFloatToInt@@YAIM@Z(animRateRaw);
}

/*
==============
BG_ShellshockBlendSmooth
==============
*/

double __fastcall BG_ShellshockBlendSmooth(float percent)
{
  double result; 

  *(float *)&result = ?BG_ShellshockBlendSmooth@@YAMM@Z(percent);
  return result;
}

/*
==============
BG_IsActorEntity
==============
*/

bool __fastcall BG_IsActorEntity(const entityState_t *es)
{
  return ?BG_IsActorEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsRemoteTurretActive
==============
*/

bool __fastcall BG_IsRemoteTurretActive(const playerState_s *ps)
{
  return ?BG_IsRemoteTurretActive@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsExplosionMOD
==============
*/

bool __fastcall BG_IsExplosionMOD(meansOfDeath_t mod)
{
  return ?BG_IsExplosionMOD@@YA_NW4meansOfDeath_t@@@Z(mod);
}

/*
==============
BG_IsRemoteTurretActiveEntity
==============
*/

bool __fastcall BG_IsRemoteTurretActiveEntity(const entityState_t *es)
{
  return ?BG_IsRemoteTurretActiveEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsPushAffectingAirMovement
==============
*/

bool __fastcall BG_IsPushAffectingAirMovement(const playerState_s *ps)
{
  return ?BG_IsPushAffectingAirMovement@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsCharacterEntity
==============
*/

bool __fastcall BG_IsCharacterEntity(const entityState_t *es)
{
  return ?BG_IsCharacterEntity@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat
==============
*/

double __fastcall BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(const unsigned int animRateQuantized)
{
  double result; 

  *(float *)&result = ?BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat@@YAMI@Z(animRateQuantized);
  return result;
}

/*
==============
BG_EventSeqWrapAround
==============
*/

int __fastcall BG_EventSeqWrapAround(int eventSeq, int oldEventSeq)
{
  return ?BG_EventSeqWrapAround@@YAHHH@Z(eventSeq, oldEventSeq);
}

/*
==============
BG_IsPlayerUsingDetonator
==============
*/

bool __fastcall BG_IsPlayerUsingDetonator(const entityState_t *es)
{
  return ?BG_IsPlayerUsingDetonator@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_IsUsingNightVision
==============
*/

bool __fastcall BG_IsUsingNightVision(const playerState_s *ps)
{
  return ?BG_IsUsingNightVision@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsCursorHintEntityCleared
==============
*/

bool __fastcall BG_IsCursorHintEntityCleared(const playerState_s *const ps)
{
  return ?BG_IsCursorHintEntityCleared@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsPlayerInExecutionAttacker
==============
*/

bool __fastcall BG_IsPlayerInExecutionAttacker(const playerState_s *ps)
{
  return ?BG_IsPlayerInExecutionAttacker@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsCharacterEntity
==============
*/
bool BG_IsCharacterEntity(const entityState_t *es)
{
  entityType_s eType; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = es->eType;
  return ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM;
}

/*
==============
BG_IsPlayerLinkedToAnything
==============
*/
bool BG_IsPlayerLinkedToAnything(const playerState_s *ps)
{
  int pm_type; 
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = ps->pm_type;
  if ( pm_type == 1 )
    return 1;
  if ( pm_type == 8 )
    return 1;
  if ( (ps->linkFlags.m_flags[0] & 4) != 0 )
    return 1;
  result = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u);
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_IsRemoteTurretActive
==============
*/
char BG_IsRemoteTurretActive(const playerState_s *ps)
{
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_eFlags = &ps->eFlags;
  if ( !p_eFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  return 1;
}

/*
==============
BG_IsPlayerInExecution
==============
*/
char BG_IsPlayerInExecution(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2510, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
    __debugbreak();
  return 1;
}

/*
==============
BG_IsPlayerInExecutionAttacker
==============
*/
bool BG_IsPlayerInExecutionAttacker(const playerState_s *ps)
{
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2526, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = BG_IsPlayerInExecution(ps);
  if ( result )
    return !ps->activeExecutionIsVictim;
  return result;
}

/*
==============
BG_IsPlayerZeroG
==============
*/
char BG_IsPlayerZeroG(const playerState_s *ps)
{
  __int16 groundRefEnt; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Au) )
    return 0;
  groundRefEnt = ps->groundRefEnt;
  if ( groundRefEnt != 2047 )
  {
    if ( groundRefEnt )
      return 0;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
    __debugbreak();
  return 1;
}

/*
==============
BG_IsPlayerLinked
==============
*/
bool BG_IsPlayerLinked(const playerState_s *ps)
{
  int pm_type; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = ps->pm_type;
  return pm_type == 1 || pm_type == 8;
}

/*
==============
BG_IsPlayerWalkingDisabled
==============
*/
bool BG_IsPlayerWalkingDisabled(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2663, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_spValue, 0x3Bu);
}

/*
==============
BG_IsVehicleEntity
==============
*/
bool BG_IsVehicleEntity(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return ((es->eType - 12) & 0xFFFD) == 0;
}

/*
==============
BG_GetGravity
==============
*/
float BG_GetGravity()
{
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) )
  {
    _RBX = DVARFLT_bg_gravity;
    if ( !DVARFLT_bg_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@44480000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_IsTurretActive
==============
*/
char BG_IsTurretActive(const playerState_s *ps)
{
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_eFlags = &ps->eFlags;
  if ( !p_eFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 6u) )
    return 1;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    return 1;
  }
  return 0;
}

/*
==============
BG_IsSpectatingOrSpectator
==============
*/
bool BG_IsSpectatingOrSpectator(const playerState_s *ps)
{
  bool result; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2289, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  result = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u);
  if ( result || ps->pm_type == 5 )
    return 1;
  return result;
}

/*
==============
BG_IsTurretActiveFlags
==============
*/
char BG_IsTurretActiveFlags(const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *esFlags)
{
  if ( !esFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)esFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)esFlags, ACTIVE, 6u) )
    return 1;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)esFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    return 1;
  }
  return 0;
}

/*
==============
BG_IsPlayerOrAgentCorpseEntity
==============
*/
bool BG_IsPlayerOrAgentCorpseEntity(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1990, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return ((es->eType - 2) & 0xFFEF) == 0;
}

/*
==============
BG_IsPlayerOrAgentEntity
==============
*/
bool BG_IsPlayerOrAgentEntity(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return ((es->eType - 1) & 0xFFEF) == 0;
}

/*
==============
BG_UsrCmdUnpackAngle
==============
*/
float BG_UsrCmdUnpackAngle(const int packedAngle)
{
  __asm { vmovss  xmm1, cs:__real@43340000; maxAbsValueSize }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(packedAngle, *(float *)&_XMM1, 0x14u);
  __asm
  {
    vmulss  xmm5, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vsubss  xmm1, xmm5, xmm4
    vmulss  xmm0, xmm1, cs:__real@43b40000
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_IsCorpseEntity
==============
*/
bool BG_IsCorpseEntity(const entityState_t *es)
{
  entityType_s eType; 
  int v3; 
  bool result; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = es->eType;
  result = 0;
  if ( (unsigned __int16)eType <= ET_ACTOR_CORPSE )
  {
    v3 = 2359300;
    if ( _bittest(&v3, eType) )
      return 1;
  }
  return result;
}

/*
==============
BG_IsPlayer
==============
*/
bool BG_IsPlayer(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagValues::ms_mpValue != ACTIVE || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x22u);
}

/*
==============
BG_IsSpectating
==============
*/
bool BG_IsSpectating(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u);
}

/*
==============
BG_IsVehicleActive
==============
*/
bool BG_IsVehicleActive(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 0xBu);
}

/*
==============
pmove_t::~pmove_t
==============
*/
void pmove_t::~pmove_t(pmove_t *this)
{
  this->__vftable = (pmove_t_vtbl *)&pmove_t::`vftable';
}

/*
==============
pmove_t::OnOffHandInit
==============
*/
void pmove_t::OnOffHandInit(pmove_t *this)
{
  ;
}

/*
==============
pmove_t::SetSkydiveBasejumpGroundHeight
==============
*/
void pmove_t::SetSkydiveBasejumpGroundHeight(pmove_t *this, const float height)
{
  ;
}

/*
==============
BG_IsRemoteTurretActiveEntity
==============
*/
bool BG_IsRemoteTurretActiveEntity(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2102, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return BG_IsRemoteTurretActiveFlags(&es->lerp.eFlags);
}

/*
==============
BG_IsRemoteTurretActiveFlags
==============
*/
char BG_IsRemoteTurretActiveFlags(const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *esFlags)
{
  if ( !esFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)esFlags, ACTIVE, 7u) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  return 1;
}

/*
==============
BG_AnimTreeMP_ConvertScriptModelAnimRateFloatToInt
==============
*/

unsigned int __fastcall BG_AnimTreeMP_ConvertScriptModelAnimRateFloatToInt(double animRateRaw, double _XMM1_8)
{
  unsigned int result; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
    vcomiss xmm0, cs:__real@41000000
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 143, ASSERT_TYPE_ASSERT, "(BG_AnimTreeMP_ScriptModelAnimRateValid( animRateRaw ))", (const char *)&queryFormat, "BG_AnimTreeMP_ScriptModelAnimRateValid( animRateRaw )") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@447a0000
    vmovaps xmm6, [rsp+48h+var_18]
    vcvttss2si eax, xmm0
  }
  return result;
}

/*
==============
BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat
==============
*/
float BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(const unsigned int animRateQuantized)
{
  __asm
  {
    vmovss  xmm3, cs:__real@3a83126f
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovaps [rsp+48h+var_18], xmm6
    vmulss  xmm6, xmm0, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm6, cs:__real@41000000
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 158, ASSERT_TYPE_ASSERT, "(BG_AnimTreeMP_ScriptModelAnimRateValid( animRateRaw ))", (const char *)&queryFormat, "BG_AnimTreeMP_ScriptModelAnimRateValid( animRateRaw )") )
    __debugbreak();
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_IsActorEntity
==============
*/
bool BG_IsActorEntity(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1928, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return ((es->eType - 19) & 0xFFFD) == 0;
}

/*
==============
BG_IsFakeActor
==============
*/
bool BG_IsFakeActor(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1935, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return es->eType == ET_SCRIPTMOVER && es->un.scriptMoverType == 1;
}

/*
==============
BG_IsCharacterOrFakeActorEntity
==============
*/
bool BG_IsCharacterOrFakeActorEntity(const entityState_t *es)
{
  entityType_s eType; 

  if ( !es )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1942, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
  }
  eType = es->eType;
  return ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM || eType == ET_SCRIPTMOVER && es->un.scriptMoverType == 1;
}

/*
==============
BG_IsAdsEntity
==============
*/
bool BG_IsAdsEntity(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1896, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x19u);
}

/*
==============
BG_IsDeadEntity
==============
*/
bool BG_IsDeadEntity(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2004, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0x11u);
}

/*
==============
BG_IsMantleEntity
==============
*/
bool BG_IsMantleEntity(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2011, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x18u);
}

/*
==============
BG_IsPlayerUsingDetonator
==============
*/
bool BG_IsPlayerUsingDetonator(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2547, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return (es->lerp.u.player.playerFlags & 0x80) != 0;
}

/*
==============
BG_EventSeqWrapAround
==============
*/
__int64 BG_EventSeqWrapAround(int eventSeq, int oldEventSeq)
{
  __int64 result; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  if ( eventSeq != (unsigned __int16)eventSeq )
  {
    v8 = (unsigned __int16)eventSeq;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1814, ASSERT_TYPE_ASSERT, "( eventSeq ) == ( BG_ExtractHighLodEventSeq( eventSeq ) )", "%s == %s\n\t%i, %i", "eventSeq", "BG_ExtractHighLodEventSeq( eventSeq )", eventSeq, v8) )
      __debugbreak();
  }
  if ( oldEventSeq != (unsigned __int16)oldEventSeq )
  {
    LODWORD(v7) = (unsigned __int16)oldEventSeq;
    LODWORD(v5) = oldEventSeq;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1815, ASSERT_TYPE_ASSERT, "( oldEventSeq ) == ( BG_ExtractHighLodEventSeq( oldEventSeq ) )", "%s == %s\n\t%i, %i", "oldEventSeq", "BG_ExtractHighLodEventSeq( oldEventSeq )", v5, v7) )
      __debugbreak();
  }
  result = (unsigned int)(oldEventSeq - 256);
  if ( oldEventSeq <= eventSeq + 64 )
    return (unsigned int)oldEventSeq;
  return result;
}

/*
==============
BG_IsPlayerSwimming
==============
*/
char BG_IsPlayerSwimming(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2555, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_spValue, 0x3Au) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2559, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
    __debugbreak();
  return 1;
}

/*
==============
BG_IsPlayerZeroGFloating
==============
*/
bool BG_IsPlayerZeroGFloating(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2605, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_IsPlayerZeroG(ps) && !BG_IsPlayerZeroGWalking(ps);
}

/*
==============
BG_IsPushAffectingAirMovement
==============
*/
char BG_IsPushAffectingAirMovement(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2466, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_spValue, 0x27u) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2469, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_PUSH ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_PUSH )") )
    __debugbreak();
  return 1;
}

/*
==============
BG_IsUfoViewmodel
==============
*/
bool BG_IsUfoViewmodel(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x20u);
}

/*
==============
BG_IsBlockingNightVision
==============
*/
bool BG_IsBlockingNightVision(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2253, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 9u);
}

/*
==============
BG_IsCharacterPlayer
==============
*/
bool BG_IsCharacterPlayer(const playerState_s *ps)
{
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2321, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( GameModeFlagValues::ms_mpValue != ACTIVE || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x22u) )
    return 1;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u);
}

/*
==============
BG_IsCursorHintEntityCleared
==============
*/
bool BG_IsCursorHintEntityCleared(const playerState_s *const ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2342, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->cursorHintClass == USE_CLASS_GENTITY && ps->cursorHintEntIndex == 2047;
}

/*
==============
BG_IsPlayerOnRemoteTurret
==============
*/
char BG_IsPlayerOnRemoteTurret(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2393, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x18u) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2396, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  return 1;
}

/*
==============
BG_IsUsingNightVision
==============
*/
bool BG_IsUsingNightVision(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2222, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 7u);
}

/*
==============
BG_IsZoomButtonPressed
==============
*/
_BOOL8 BG_IsZoomButtonPressed(const usercmd_s *cmd)
{
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2697, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  return Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_LADDER_AIM) && (cmd->buttons & 0x2000000) != 0;
}

/*
==============
BG_IsAgent
==============
*/
bool BG_IsAgent(const playerState_s *ps)
{
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS);
  if ( result )
    return GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u);
  return result;
}

/*
==============
BG_NormalizeWorldUpReferenceAngles
==============
*/
void BG_NormalizeWorldUpReferenceAngles(playerState_s *ps, const BgHandler *handler)
{
  vec3_t angles; 
  vec3_t newWorldAngles; 
  WorldUpReferenceFrame v11; 

  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2376, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v11, _RBX, handler);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+1DCh]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+88h+newWorldAngles], xmm0
    vmovss  dword ptr [rsp+88h+newWorldAngles+4], xmm0
    vmovss  dword ptr [rsp+88h+newWorldAngles+8], xmm0
    vmovss  xmm0, dword ptr [rbx+1D8h]
    vmovss  dword ptr [rsp+88h+angles], xmm0
    vmovss  xmm0, dword ptr [rbx+1E0h]
    vmovss  dword ptr [rsp+88h+angles+8], xmm0
    vmovss  dword ptr [rsp+88h+angles+4], xmm1
  }
  WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v11, &angles);
  WorldUpReferenceFrame::SetAnglesAndViewAngles(&v11, _RBX, handler, &newWorldAngles, &angles);
}

/*
==============
BG_CursorHintEntityClear
==============
*/
void BG_CursorHintEntityClear(playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2349, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_WORD *)&ps->cursorHintData = 0;
  ps->cursorHintEntIndex = 2047;
}

/*
==============
BG_CursorHintProgressEntityClear
==============
*/
void BG_CursorHintProgressEntityClear(playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2358, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_WORD *)&ps->cursorHintProgressData = 0;
  ps->cursorHintProgressEntIndex = 2047;
}

/*
==============
BG_IsCursorHintAnEntity
==============
*/
bool BG_IsCursorHintAnEntity(const playerState_s *const ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2335, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->cursorHintClass == USE_CLASS_GENTITY && ps->cursorHintEntIndex != 2047;
}

/*
==============
BG_IsExplosionMOD
==============
*/
bool BG_IsExplosionMOD(meansOfDeath_t mod)
{
  int v4; 

  if ( (unsigned int)mod >= MOD_NUM )
  {
    v4 = 25;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1133, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", mod, v4) )
      __debugbreak();
  }
  return (unsigned int)(mod - 3) <= 4 || mod == MOD_EXPLOSIVE;
}

/*
==============
BG_ShellshockBlendSmooth
==============
*/

float __fastcall BG_ShellshockBlendSmooth(double percent)
{
  float s; 
  float c; 

  __asm
  {
    vsubss  xmm0, xmm0, cs:__real@3f000000
    vmulss  xmm0, xmm0, cs:__real@40490fdb; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm0, [rsp+28h+s]
    vaddss  xmm1, xmm0, cs:__real@3f800000
    vmulss  xmm0, xmm1, cs:__real@3f000000
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_UsrCmdPackAngle
==============
*/

int __fastcall BG_UsrCmdPackAngle(double angle)
{
  __asm
  {
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm1, xmm4, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm2, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm2, 1
    vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm0, xmm0, cs:__real@43b40000; value
  }
  return MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0x14u);
}

/*
==============
BG_IsSpringCamActive
==============
*/
char BG_IsSpringCamActive(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2435, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_spValue, 0x26u) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2438, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM )") )
    __debugbreak();
  return 1;
}

/*
==============
BG_IsAgentEntity
==============
*/
bool BG_IsAgentEntity(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1976, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return es->eType == ET_AGENT;
}

/*
==============
BG_IsPlayerFireDisabledForHand
==============
*/
bool BG_IsPlayerFireDisabledForHand(const playerState_s *ps, const PlayerHandIndex hand)
{
  __int64 v2; 
  __int64 v5; 

  v2 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2488, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2489, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return BG_IsPlayerFireDisabled(ps) || (ps->weapState[v2].weapHandFlags & 1) != 0;
}

/*
==============
BG_GetViewLinkedEntityData
==============
*/
ViewLinkedData *BG_GetViewLinkedEntityData(playerState_s *ps, int entNumber)
{
  int numViewLinkedEnts; 
  unsigned __int8 v5; 
  __int64 v6; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1701, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  numViewLinkedEnts = ps->numViewLinkedEnts;
  v5 = 0;
  if ( numViewLinkedEnts <= 0 )
    return 0i64;
  while ( 1 )
  {
    v6 = v5;
    if ( ps->viewLinkedEntityData[v6].linkedEnt == entNumber )
      break;
    if ( ++v5 >= numViewLinkedEnts )
      return 0i64;
  }
  return &ps->viewLinkedEntityData[v6];
}

