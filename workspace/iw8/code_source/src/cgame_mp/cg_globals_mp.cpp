/*
==============
CgGlobalsMP::IsClientGamePaused
==============
*/

int __fastcall CgGlobalsMP::IsClientGamePaused(CgGlobalsMP *this)
{
  return ?IsClientGamePaused@CgGlobalsMP@@UEBAHXZ(this);
}

/*
==============
CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted
==============
*/

CgCharacterAnimUpdateInfo *__fastcall CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(CgGlobalsMP *this, const int entNum)
{
  return ?GetCharacterAnimUpdateInfoIfSorted@CgGlobalsMP@@QEAAPEAUCgCharacterAnimUpdateInfo@@H@Z(this, entNum);
}

/*
==============
CgGlobalsMP::IsClientValid
==============
*/

int __fastcall CgGlobalsMP::IsClientValid(CgGlobalsMP *this)
{
  return ?IsClientValid@CgGlobalsMP@@UEBAHXZ(this);
}

/*
==============
CgGlobalsMP::GetCgCharacterInfo
==============
*/

const CgCharacterInfo *__fastcall CgGlobalsMP::GetCgCharacterInfo(CgGlobalsMP *this, const int characterIndex)
{
  return ?GetCgCharacterInfo@CgGlobalsMP@@UEBAPEBUCgCharacterInfo@@H@Z(this, characterIndex);
}

/*
==============
CgGlobalsMP::GetCgCharacterInfo
==============
*/

CgCharacterInfo *__fastcall CgGlobalsMP::GetCgCharacterInfo(CgGlobalsMP *this, const int characterIndex)
{
  return ?GetCgCharacterInfo@CgGlobalsMP@@UEAAPEAUCgCharacterInfo@@H@Z(this, characterIndex);
}

/*
==============
CgGlobalsMP::GetCharacterAnimState
==============
*/

characterAnimState_t *__fastcall CgGlobalsMP::GetCharacterAnimState(CgGlobalsMP *this, const int entNum)
{
  return ?GetCharacterAnimState@CgGlobalsMP@@UEAAPEAUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
CgGlobalsMP::FreeLocalClientGlobals
==============
*/

void CgGlobalsMP::FreeLocalClientGlobals(void)
{
  ?FreeLocalClientGlobals@CgGlobalsMP@@SAXXZ();
}

/*
==============
CgGlobalsMP::InitCachedClientOmnvarIndexes
==============
*/

void __fastcall CgGlobalsMP::InitCachedClientOmnvarIndexes(CgGlobalsMP *this)
{
  ?InitCachedClientOmnvarIndexes@CgGlobalsMP@@QEAAXXZ(this);
}

/*
==============
CgGlobalsMP::GetInUseHudElems
==============
*/

unsigned int __fastcall CgGlobalsMP::GetInUseHudElems(CgGlobalsMP *this, const hudelem_t **elems)
{
  return ?GetInUseHudElems@CgGlobalsMP@@UEAAIQEAPEBUhudelem_t@@@Z(this, elems);
}

/*
==============
CgGlobalsMP::GetPIPScreenCoordinates
==============
*/

bool __fastcall CgGlobalsMP::GetPIPScreenCoordinates(CgGlobalsMP *this, float *x, float *y, float *width, float *height)
{
  return ?GetPIPScreenCoordinates@CgGlobalsMP@@UEBA_NPEAM000@Z(this, x, y, width, height);
}

/*
==============
CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted
==============
*/

const CgCharacterAnimUpdateInfo *__fastcall CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(CgGlobalsMP *this, const int entNum)
{
  return ?GetCharacterAnimUpdateInfoIfSorted@CgGlobalsMP@@QEBAPEBUCgCharacterAnimUpdateInfo@@H@Z(this, entNum);
}

/*
==============
CgGlobalsMP::GetCharacterAnimState
==============
*/

const characterAnimState_t *__fastcall CgGlobalsMP::GetCharacterAnimState(CgGlobalsMP *this, const int entNum)
{
  return ?GetCharacterAnimState@CgGlobalsMP@@UEBAPEBUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
CgGlobalsMP::GetShaderOverrideData
==============
*/

shaderOverride_t *__fastcall CgGlobalsMP::GetShaderOverrideData(CgGlobalsMP *this, shaderOverride_t *result, const int characterIndex, const Weapon *r_weapon)
{
  return ?GetShaderOverrideData@CgGlobalsMP@@UEBA?AUshaderOverride_t@@HAEBUWeapon@@@Z(this, result, characterIndex, r_weapon);
}

/*
==============
CgGlobalsMP::GetPIPVisionSetData
==============
*/

ClientVisionSetData *__fastcall CgGlobalsMP::GetPIPVisionSetData(CgGlobalsMP *this, int pipViewIndex)
{
  return ?GetPIPVisionSetData@CgGlobalsMP@@UEAAPEAUClientVisionSetData@@H@Z(this, pipViewIndex);
}

/*
==============
CgGlobalsMP::IsMP
==============
*/

bool __fastcall CgGlobalsMP::IsMP(CgGlobalsMP *this)
{
  return ?IsMP@CgGlobalsMP@@UEBA_NXZ(this);
}

/*
==============
CgGlobalsMP::GetSkyOverride
==============
*/

SkyOverride *__fastcall CgGlobalsMP::GetSkyOverride(CgGlobalsMP *this)
{
  return ?GetSkyOverride@CgGlobalsMP@@UEAAPEAUSkyOverride@@XZ(this);
}

/*
==============
CgGlobalsMP::GetTeamColors
==============
*/

void __fastcall CgGlobalsMP::GetTeamColors(CgGlobalsMP *this, vec4_t *outMyTeamColor, vec4_t *outEnemyTeamColor)
{
  ?GetTeamColors@CgGlobalsMP@@UEBAXAEATvec4_t@@0@Z(this, outMyTeamColor, outEnemyTeamColor);
}

/*
==============
CgGlobalsMP::GetPIPViewCount
==============
*/

int __fastcall CgGlobalsMP::GetPIPViewCount(CgGlobalsMP *this)
{
  return ?GetPIPViewCount@CgGlobalsMP@@UEBAHXZ(this);
}

/*
==============
CgGlobalsMP::HasCharacterInfo
==============
*/

bool __fastcall CgGlobalsMP::HasCharacterInfo(CgGlobalsMP *this, const int entNum)
{
  return ?HasCharacterInfo@CgGlobalsMP@@UEBA_NH@Z(this, entNum);
}

/*
==============
CgGlobalsMP::ClearCharacterAnimState
==============
*/

void __fastcall CgGlobalsMP::ClearCharacterAnimState(CgGlobalsMP *this, const int entNum)
{
  ?ClearCharacterAnimState@CgGlobalsMP@@UEAAXH@Z(this, entNum);
}

/*
==============
CgGlobalsMP::CgGlobalsMP
==============
*/

void __fastcall CgGlobalsMP::CgGlobalsMP(CgGlobalsMP *this, const LocalClientNum_t localClientNum, characterInfo_t *characterInfos, CgCharacterInfo *clientCharacterInfos, const int characterInfoCount)
{
  ??0CgGlobalsMP@@AEAA@W4LocalClientNum_t@@PEAUcharacterInfo_t@@PEAUCgCharacterInfo@@H@Z(this, localClientNum, characterInfos, clientCharacterInfos, characterInfoCount);
}

/*
==============
CgGlobalsMP::HasCgCharacterInfo
==============
*/

bool __fastcall CgGlobalsMP::HasCgCharacterInfo(CgGlobalsMP *this, const int entNum)
{
  return ?HasCgCharacterInfo@CgGlobalsMP@@UEBA_NH@Z(this, entNum);
}

/*
==============
CgGlobalsMP::CacheClientOmnvarIndexes
==============
*/

void __fastcall CgGlobalsMP::CacheClientOmnvarIndexes(CgGlobalsMP *this)
{
  ?CacheClientOmnvarIndexes@CgGlobalsMP@@QEAAXXZ(this);
}

/*
==============
CgGlobalsMP::CgGlobalsMP
==============
*/
void CgGlobalsMP::CgGlobalsMP(CgGlobalsMP *this, const LocalClientNum_t localClientNum, characterInfo_t *characterInfos, CgCharacterInfo *clientCharacterInfos, const int characterInfoCount)
{
  cg_t::cg_t(this, localClientNum);
  this->__vftable = (CgGlobalsMP_vtbl *)&CgGlobalsMP::`vftable';
  this->m_characterInfo = characterInfos;
  this->m_clientCharacterInfo = clientCharacterInfos;
  this->m_characterInfoCount = characterInfoCount;
  CgMLGSpectator::CgMLGSpectator(&this->m_mlgSpectator);
  this->m_mlgSpectatorPtr = &this->m_mlgSpectator;
  *(_QWORD *)&this->m_omnvarIndexIsNightMap = -1i64;
  *(_QWORD *)&this->m_omnvarIndexStartMatchTimer = -1i64;
  *(_QWORD *)&this->m_omnvarIndexUIScramblerStrength = -1i64;
  *(_QWORD *)&this->m_omnvarIndexStartMatchType = -1i64;
  this->m_omnvarCompassHideWeaponPings = -1;
  *(_QWORD *)&this->m_omnvarIndexMatchHasMoreThan1Player = -1i64;
  *(_QWORD *)&this->m_spectatorConstString = 0i64;
  *(_QWORD *)&this->m_firstInfectedCountdownConstString = 0i64;
  *(_DWORD *)&this->m_isSpectatorConstStringSetup = 0;
  this->m_isIntermissionConstStringSetup = 0;
  *(_QWORD *)&this->m_omnvarIndexPlayerRespawning = -1i64;
  this->m_omnvarIndexUiHidePlayerIcons = -1;
  CG_GameInterface_InitCgGlobalsMPData(this);
}

/*
==============
CgGlobalsMP::CacheClientOmnvarIndexes
==============
*/
void CgGlobalsMP::CacheClientOmnvarIndexes(CgGlobalsMP *this)
{
  this->m_omnvarIndexIsNightMap = BG_Omnvar_GetIndexByName("is_night_map");
  this->m_omnvarIndexPostGameState = BG_Omnvar_GetIndexByName("post_game_state");
  this->m_omnvarIndexStartMatchTimer = BG_Omnvar_GetIndexByName("ui_match_start_countdown");
  this->m_omnvarIndexMatchInProgress = BG_Omnvar_GetIndexByName("ui_match_in_progress");
  this->m_omnvarIndexSessionState = BG_Omnvar_GetIndexByName("ui_session_state");
  this->m_omnvarIndexStartMatchType = BG_Omnvar_GetIndexByName("ui_match_start_text");
  this->m_omnvarIndexUIRealismHUD = BG_Omnvar_GetIndexByName("ui_realism_hud");
  this->m_omnvarIndexUIScramblerStrength = BG_Omnvar_GetIndexByName("ui_scrambler_strength");
  this->m_omnvarCompassHideWeaponPings = BG_Omnvar_GetIndexByName("ui_compass_hide_weapon_pings_minimap");
  this->m_omnvarIndexMatchHasMoreThan1Player = BG_Omnvar_GetIndexByName("match_has_more_than_1_player");
  this->m_omnvarCompassHidePlayerIcons = BG_Omnvar_GetIndexByName("ui_hide_player_icons");
  this->m_omnvarIndexPlayerRespawning = BG_Omnvar_GetIndexByName("player_respawning");
  this->m_omnvarIndexScriptableLootHide = BG_Omnvar_GetIndexByName("scriptable_loot_hide");
  this->m_omnvarIndexUiHidePlayerIcons = BG_Omnvar_GetIndexByName("ui_hide_player_icons");
}

/*
==============
CgGlobalsMP::ClearCharacterAnimState
==============
*/
void CgGlobalsMP::ClearCharacterAnimState(CgGlobalsMP *this, const int entNum)
{
  ;
}

/*
==============
CgGlobalsMP::FreeLocalClientGlobals
==============
*/
void CgGlobalsMP::FreeLocalClientGlobals(void)
{
  cg_t *v0; 
  __int64 i; 

  if ( cg_t::ms_allocatedType == GLOB_TYPE_SP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 33, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() != CgGlobalsType::GLOB_TYPE_SP)", "%s\n\tTrying to free multiplayer client globals but single-player client globals are allocated\n", "CG_Globals_GetType() != CgGlobalsType::GLOB_TYPE_SP") )
    __debugbreak();
  v0 = cg_t::ms_cgArray[0];
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
  {
    if ( cg_t::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 44, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgGlobalsMP::FreeLocalClientGlobals: Trying to free multiplayer client globals but no client globals have been allocated\n", "ms_allocatedCount > 0") )
      __debugbreak();
    for ( i = cg_t::ms_allocatedCount - 1; i >= 0; cg_t::ms_cgArray[i--] = NULL )
      ((void (__fastcall *)(cg_t *, _QWORD))cg_t::ms_cgArray[i]->~cg_tDummy)(cg_t::ms_cgArray[i], 0i64);
    DebugWipe(v0, 955184i64 * cg_t::ms_allocatedCount);
  }
  cg_t::ms_allocatedType = GLOB_TYPE_UNKNOWN;
  cg_t::ms_allocatedCount = 0;
}

/*
==============
CgGlobalsMP::GetCgCharacterInfo
==============
*/
CgCharacterInfo *CgGlobalsMP::GetCgCharacterInfo(CgGlobalsMP *this, const int characterIndex)
{
  __int64 v3; 
  unsigned int m_characterInfoCount; 

  v3 = characterIndex;
  if ( characterIndex >= this->m_characterInfoCount )
  {
    m_characterInfoCount = this->m_characterInfoCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 219, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", characterIndex, m_characterInfoCount) )
      __debugbreak();
  }
  return &this->m_clientCharacterInfo[v3];
}

/*
==============
CgGlobalsMP::GetCgCharacterInfo
==============
*/
CgCharacterInfo *CgGlobalsMP::GetCgCharacterInfo(CgGlobalsMP *this, const int characterIndex)
{
  __int64 v3; 
  unsigned int m_characterInfoCount; 

  v3 = characterIndex;
  if ( characterIndex >= this->m_characterInfoCount )
  {
    m_characterInfoCount = this->m_characterInfoCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 226, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", characterIndex, m_characterInfoCount) )
      __debugbreak();
  }
  return &this->m_clientCharacterInfo[v3];
}

/*
==============
CgGlobalsMP::GetCharacterAnimState
==============
*/
$08CBA61D1816DE37C73E05DB6D8FE339 *CgGlobalsMP::GetCharacterAnimState(CgGlobalsMP *this, const int entNum)
{
  __int64 v3; 
  characterInfo_t *v4; 
  unsigned int m_characterInfoCount; 

  v3 = entNum;
  if ( entNum >= this->m_characterInfoCount )
  {
    m_characterInfoCount = this->m_characterInfoCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", entNum, m_characterInfoCount) )
      __debugbreak();
  }
  v4 = &this->m_characterInfo[v3];
  if ( v4->usingAnimState )
    return &v4->14780;
  else
    return 0i64;
}

/*
==============
CgGlobalsMP::GetCharacterAnimState
==============
*/
$08CBA61D1816DE37C73E05DB6D8FE339 *CgGlobalsMP::GetCharacterAnimState(CgGlobalsMP *this, const int entNum)
{
  __int64 v3; 
  characterInfo_t *v4; 
  unsigned int m_characterInfoCount; 

  v3 = entNum;
  if ( entNum >= this->m_characterInfoCount )
  {
    m_characterInfoCount = this->m_characterInfoCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", entNum, m_characterInfoCount) )
      __debugbreak();
  }
  v4 = &this->m_characterInfo[v3];
  if ( v4->usingAnimState )
    return &v4->14780;
  else
    return 0i64;
}

/*
==============
CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted
==============
*/
CgCharacterAnimUpdateInfo *CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(CgGlobalsMP *this, const int entNum)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 

  v2 = entNum;
  if ( entNum >= cls.maxClients )
    return 0i64;
  if ( (unsigned int)entNum >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 309, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( sizeof( *array_counter( m_playerOrderLookupDistancePriority ) ) + 0 ) )", "entNum doesn't index m_playerOrderLookupDistancePriority\n\t%i not in [0, %i)", entNum, 248) )
    __debugbreak();
  if ( this->m_playerOrderLookupDistancePriority[v2] >= this->m_playerOrderDistanceSortedCount )
    return 0i64;
  if ( (unsigned int)v2 >= 0xF8 )
  {
    LODWORD(v6) = 248;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 312, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( sizeof( *array_counter( m_playerUpdateAnimInfo ) ) + 0 ) )", "entNum doesn't index m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return &this->m_playerUpdateAnimInfo[v2];
}

/*
==============
CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted
==============
*/
CgCharacterAnimUpdateInfo *CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(CgGlobalsMP *this, const int entNum)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 

  v2 = entNum;
  if ( entNum >= cls.maxClients )
    return 0i64;
  if ( (unsigned int)entNum >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( sizeof( *array_counter( m_playerOrderLookupDistancePriority ) ) + 0 ) )", "entNum doesn't index m_playerOrderLookupDistancePriority\n\t%i not in [0, %i)", entNum, 248) )
    __debugbreak();
  if ( this->m_playerOrderLookupDistancePriority[v2] >= this->m_playerOrderDistanceSortedCount )
    return 0i64;
  if ( (unsigned int)v2 >= 0xF8 )
  {
    LODWORD(v6) = 248;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 296, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( sizeof( *array_counter( m_playerUpdateAnimInfo ) ) + 0 ) )", "entNum doesn't index m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return &this->m_playerUpdateAnimInfo[v2];
}

/*
==============
CgGlobalsMP::GetInUseHudElems
==============
*/
__int64 CgGlobalsMP::GetInUseHudElems(CgGlobalsMP *this, const hudelem_t **elems)
{
  unsigned int elemCount; 

  elemCount = 0;
  CG_Globals_CopyInUseHudElems(elems, &elemCount, this->predictedPlayerState.hud.current, 30);
  CG_Globals_CopyInUseHudElems(elems, &elemCount, this->predictedPlayerState.hud.archival, 15);
  return elemCount;
}

/*
==============
CgGlobalsMP::GetPIPScreenCoordinates
==============
*/
bool CgGlobalsMP::GetPIPScreenCoordinates(CgGlobalsMP *this, float *x, float *y, float *width)
{
  return 0;
}

/*
==============
CgGlobalsMP::GetPIPViewCount
==============
*/
__int64 CgGlobalsMP::GetPIPViewCount(CgGlobalsMP *this)
{
  return 0i64;
}

/*
==============
CgGlobalsMP::GetPIPVisionSetData
==============
*/
ClientVisionSetData *CgGlobalsMP::GetPIPVisionSetData(CgGlobalsMP *this, int pipViewIndex)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 193, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "PIP is not supported in this game mode") )
    __debugbreak();
  return 0i64;
}

/*
==============
CgGlobalsMP::GetShaderOverrideData
==============
*/
shaderOverride_t *CgGlobalsMP::GetShaderOverrideData(CgGlobalsMP *this, shaderOverride_t *result, const int characterIndex, const Weapon *r_weapon)
{
  const characterInfo_t *CharacterInfo; 
  int weaponCamo; 
  float atlasTime; 
  int v15; 
  int v16; 

  _RBX = result;
  if ( r_weapon->weaponCamo && this->HasCharacterInfo(this, characterIndex) && (this->IsMP(this) ? (CharacterInfo = CgGlobalsMP::GetCharacterInfo(this, characterIndex)) : (CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)this, characterIndex)), (_RDI = CharacterInfo) != NULL) )
  {
    weaponCamo = r_weapon->weaponCamo;
    if ( (unsigned int)(weaponCamo - 1) >= 0xFF )
    {
      v16 = 255;
      v15 = weaponCamo - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 276, ASSERT_TYPE_ASSERT, "(unsigned)( r_weapon.weaponCamo - 1 ) < (unsigned)( ( sizeof( *array_counter( ci->shaderOverride ) ) + 0 ) )", "r_weapon.weaponCamo - 1 doesn't index ARRAY_COUNT( ci->shaderOverride )\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    _RCX = 9i64 * r_weapon->weaponCamo;
    __asm { vmovups ymm0, ymmword ptr [rdi+rcx*4+14A0h] }
    atlasTime = *((float *)&_RDI->refreshWorldmodelMaterialOverride + 9 * r_weapon->weaponCamo);
  }
  else
  {
    __asm { vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_8.scrollRateX }
    atlasTime = NULL_SHADER_OVERRIDE_8.atlasTime;
  }
  __asm { vmovups ymmword ptr [rbx], ymm0 }
  _RBX->atlasTime = atlasTime;
  return _RBX;
}

/*
==============
CgGlobalsMP::GetSkyOverride
==============
*/
SkyOverride *CgGlobalsMP::GetSkyOverride(CgGlobalsMP *this)
{
  return 0i64;
}

/*
==============
CgGlobalsMP::GetTeamColors
==============
*/
void CgGlobalsMP::GetTeamColors(CgGlobalsMP *this, vec4_t *outMyTeamColor, vec4_t *outEnemyTeamColor)
{
  const dvar_t *v3; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  __int64 v9; 
  int v11; 
  int team[8]; 
  int v13; 

  v3 = DVARBOOL_useRelativeTeamColors;
  if ( !DVARBOOL_useRelativeTeamColors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useRelativeTeamColors") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    Dvar_GetUnpackedColorByName("TKKTLQNPM", outMyTeamColor);
    outMyTeamColor->v[3] = 1.0;
    Dvar_GetUnpackedColorByName("PNTRSSKPS", outEnemyTeamColor);
    outEnemyTeamColor->v[3] = 1.0;
  }
  else
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, this->clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 155, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    CG_DrawToolsMP_TeamColor(CharacterInfo->team, outMyTeamColor);
    v9 = CharacterInfo->team;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 186, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    __asm { vmovdqu ymm0, cs:__ymm@0000000000000001000000010000000100000001000000010000000200000000 }
    v11 = 0;
    v13 = 0;
    __asm { vmovdqu ymmword ptr [rsp+88h+team], ymm0 }
    if ( (unsigned int)v9 < 9 )
    {
      if ( (unsigned int)v9 > 0xCA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 205, ASSERT_TYPE_ASSERT, "(eTeam >= 0 && eTeam < TEAM_MP_NUM_TEAMS)", (const char *)&queryFormat, "eTeam >= 0 && eTeam < TEAM_MP_NUM_TEAMS") )
        __debugbreak();
      v11 = team[v9];
    }
    CG_DrawToolsMP_TeamColor(v11, outEnemyTeamColor);
  }
}

/*
==============
CgGlobalsMP::HasCgCharacterInfo
==============
*/
bool CgGlobalsMP::HasCgCharacterInfo(CgGlobalsMP *this, const int entNum)
{
  return entNum >= 0 && entNum < (signed int)this->m_characterInfoCount;
}

/*
==============
CgGlobalsMP::HasCharacterInfo
==============
*/
bool CgGlobalsMP::HasCharacterInfo(CgGlobalsMP *this, const int entNum)
{
  return entNum >= 0 && entNum < (signed int)this->m_characterInfoCount;
}

/*
==============
CgGlobalsMP::InitCachedClientOmnvarIndexes
==============
*/
void CgGlobalsMP::InitCachedClientOmnvarIndexes(CgGlobalsMP *this)
{
  *(_QWORD *)&this->m_omnvarIndexIsNightMap = -1i64;
  *(_QWORD *)&this->m_spectatorConstString = 0i64;
  *(_QWORD *)&this->m_firstInfectedCountdownConstString = 0i64;
  *(_DWORD *)&this->m_isSpectatorConstStringSetup = 0;
  this->m_isIntermissionConstStringSetup = 0;
  *(_QWORD *)&this->m_omnvarIndexStartMatchTimer = -1i64;
  *(_QWORD *)&this->m_omnvarIndexUIScramblerStrength = -1i64;
  *(_QWORD *)&this->m_omnvarIndexStartMatchType = -1i64;
  this->m_omnvarCompassHideWeaponPings = -1;
  *(_QWORD *)&this->m_omnvarIndexMatchHasMoreThan1Player = -1i64;
  *(_QWORD *)&this->m_omnvarIndexPlayerRespawning = -1i64;
  this->m_omnvarIndexUiHidePlayerIcons = -1;
}

/*
==============
CgGlobalsMP::IsClientGamePaused
==============
*/
__int64 CgGlobalsMP::IsClientGamePaused(CgGlobalsMP *this)
{
  return 0i64;
}

/*
==============
CgGlobalsMP::IsClientValid
==============
*/
__int64 CgGlobalsMP::IsClientValid(CgGlobalsMP *this)
{
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 

  if ( this->predictedPlayerState.clientNum < 0 )
    return 0i64;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( this->predictedPlayerState.clientNum >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
    return 0i64;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, this->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.cpp", 135, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  return (unsigned int)CharacterInfo->infoValid;
}

/*
==============
CgGlobalsMP::IsMP
==============
*/
char CgGlobalsMP::IsMP(CgGlobalsMP *this)
{
  return 1;
}

