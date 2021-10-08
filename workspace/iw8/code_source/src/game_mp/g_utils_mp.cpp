/*
==============
GUtilsMP::MayThrowbackGrenade
==============
*/

bool __fastcall GUtilsMP::MayThrowbackGrenade(GUtilsMP *this, const gentity_s *ent, const gentity_s *grenade)
{
  return ?MayThrowbackGrenade@GUtilsMP@@UEBA_NPEBUgentity_s@@0@Z(this, ent, grenade);
}

/*
==============
GUtilsMP::GetEntityTeam
==============
*/

team_t __fastcall GUtilsMP::GetEntityTeam(GUtilsMP *this, const gentity_s *entity)
{
  return ?GetEntityTeam@GUtilsMP@@UEBA?AW4team_t@@PEBUgentity_s@@@Z(this, entity);
}

/*
==============
G_DemoMP_SaveFreeEntities
==============
*/

int __fastcall G_DemoMP_SaveFreeEntities(unsigned __int8 *buf)
{
  return ?G_DemoMP_SaveFreeEntities@@YAHPEAE@Z(buf);
}

/*
==============
GUtilsMP::IsStuck
==============
*/

bool __fastcall GUtilsMP::IsStuck(GUtilsMP *this, const vec3_t *currentOrigin, const vec3_t *startVel, const vec3_t *startOrigin, const float frametime)
{
  return ?IsStuck@GUtilsMP@@AEBA_NAEBTvec3_t@@00M@Z(this, currentOrigin, startVel, startOrigin, frametime);
}

/*
==============
GUtilsMP::EntityStateSetPartBits
==============
*/

void __fastcall GUtilsMP::EntityStateSetPartBits(GUtilsMP *this, gentity_s *ent, const DObjPartBits *partBits)
{
  ?EntityStateSetPartBits@GUtilsMP@@UEBAXPEAUgentity_s@@PEIBUDObjPartBits@@@Z(this, ent, partBits);
}

/*
==============
GUtilsMP::UnsetEntityPerk
==============
*/

void __fastcall GUtilsMP::UnsetEntityPerk(GUtilsMP *this, const gentity_s *ent, unsigned int perkIndex)
{
  ?UnsetEntityPerk@GUtilsMP@@UEBAXPEBUgentity_s@@I@Z(this, ent, perkIndex);
}

/*
==============
GUtilsMP::GetWeaponWorldModels
==============
*/

XModel *__fastcall GUtilsMP::GetWeaponWorldModels(GUtilsMP *this, const Weapon *r_weapon)
{
  return ?GetWeaponWorldModels@GUtilsMP@@UEBAPEAUXModel@@AEBUWeapon@@@Z(this, r_weapon);
}

/*
==============
GUtilsMP::GetTeamFromDebugString
==============
*/

team_t __fastcall GUtilsMP::GetTeamFromDebugString(GUtilsMP *this, const char *teamName)
{
  return ?GetTeamFromDebugString@GUtilsMP@@UEBA?AW4team_t@@PEBD@Z(this, teamName);
}

/*
==============
G_DemoMP_LoadFreeEntities
==============
*/

void __fastcall G_DemoMP_LoadFreeEntities(unsigned __int8 *buf)
{
  ?G_DemoMP_LoadFreeEntities@@YAXPEAE@Z(buf);
}

/*
==============
GUtilsMP::SetEntitySuit
==============
*/

void __fastcall GUtilsMP::SetEntitySuit(GUtilsMP *this, const gentity_s *ent, unsigned int suitIndex)
{
  ?SetEntitySuit@GUtilsMP@@UEBAXPEBUgentity_s@@I@Z(this, ent, suitIndex);
}

/*
==============
GUtilsMP::GetPIPElemField
==============
*/

bool __fastcall GUtilsMP::GetPIPElemField(GUtilsMP *this, scrContext_t *scrContext, int entnum, int offset)
{
  return ?GetPIPElemField@GUtilsMP@@UEBA_NAEAUscrContext_t@@HH@Z(this, scrContext, entnum, offset);
}

/*
==============
G_UtilsMP_DObjLoad
==============
*/

void __fastcall G_UtilsMP_DObjLoad(gentity_s *ent)
{
  ?G_UtilsMP_DObjLoad@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GUtilsMP::SetPIPElemField
==============
*/

bool __fastcall GUtilsMP::SetPIPElemField(GUtilsMP *this, scrContext_t *scrContext, int entnum, int offset)
{
  return ?SetPIPElemField@GUtilsMP@@UEBA_NAEAUscrContext_t@@HH@Z(this, scrContext, entnum, offset);
}

/*
==============
GUtilsMP::UnlinkUpdateCorpse
==============
*/

void __fastcall GUtilsMP::UnlinkUpdateCorpse(GUtilsMP *this, gentity_s *corpseEnt)
{
  ?UnlinkUpdateCorpse@GUtilsMP@@UEBAXPEAUgentity_s@@@Z(this, corpseEnt);
}

/*
==============
GUtilsMP::SetPlayerViewAngles
==============
*/

void __fastcall GUtilsMP::SetPlayerViewAngles(GUtilsMP *this, gentity_s *ent, const vec3_t *angles)
{
  ?SetPlayerViewAngles@GUtilsMP@@UEBAXPEAUgentity_s@@AEBTvec3_t@@@Z(this, ent, angles);
}

/*
==============
GUtilsMP::EntDetachAll
==============
*/

void __fastcall GUtilsMP::EntDetachAll(GUtilsMP *this, gentity_s *ent)
{
  ?EntDetachAll@GUtilsMP@@UEBAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
GUtilsMP::EntDetach
==============
*/

bool __fastcall GUtilsMP::EntDetach(GUtilsMP *this, gentity_s *ent, const char *modelName, scr_string_t tagName)
{
  return ?EntDetach@GUtilsMP@@UEBA_NPEAUgentity_s@@PEBDW4scr_string_t@@@Z(this, ent, modelName, tagName);
}

/*
==============
GUtilsMP::DObjUpdate
==============
*/

void __fastcall GUtilsMP::DObjUpdate(GUtilsMP *this, gentity_s *ent, int link)
{
  ?DObjUpdate@GUtilsMP@@UEBAXPEAUgentity_s@@H@Z(this, ent, link);
}

/*
==============
GUtilsMP::BotStuckCheck
==============
*/

void __fastcall GUtilsMP::BotStuckCheck(GUtilsMP *this, const vec3_t *startVel, const vec3_t *startOrigin, const playerState_s *ps, const float frametime, bool body)
{
  ?BotStuckCheck@GUtilsMP@@UEBAXAEBTvec3_t@@0PEBUplayerState_s@@M_N@Z(this, startVel, startOrigin, ps, frametime, body);
}

/*
==============
GUtilsMP::MayUseEntity
==============
*/

bool __fastcall GUtilsMP::MayUseEntity(GUtilsMP *this, const gentity_s *ent, const gentity_s *useEnt)
{
  return ?MayUseEntity@GUtilsMP@@UEBA_NPEBUgentity_s@@0@Z(this, ent, useEnt);
}

/*
==============
GUtilsMP::SetPlayerOrigin
==============
*/

void __fastcall GUtilsMP::SetPlayerOrigin(GUtilsMP *this, gentity_s *ent, const vec3_t *origin, int zOffset, int teleport)
{
  ?SetPlayerOrigin@GUtilsMP@@UEBAXPEAUgentity_s@@AEBTvec3_t@@HH@Z(this, ent, origin, zOffset, teleport);
}

/*
==============
GUtilsMP::EntTagInfoChanged
==============
*/

void __fastcall GUtilsMP::EntTagInfoChanged(GUtilsMP *this, gentity_s *ent)
{
  ?EntTagInfoChanged@GUtilsMP@@UEBAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
GUtilsMP::InitGentity
==============
*/

void __fastcall GUtilsMP::InitGentity(GUtilsMP *this, gentity_s *e)
{
  ?InitGentity@GUtilsMP@@UEBAXPEAUgentity_s@@@Z(this, e);
}

/*
==============
GUtilsMP::FreeEntity
==============
*/

void __fastcall GUtilsMP::FreeEntity(GUtilsMP *this, gentity_s *ed)
{
  ?FreeEntity@GUtilsMP@@UEBAXPEAUgentity_s@@@Z(this, ed);
}

/*
==============
GUtilsMP::MayActivateHoldEntity
==============
*/

bool __fastcall GUtilsMP::MayActivateHoldEntity(GUtilsMP *this, const gentity_s *ent)
{
  return ?MayActivateHoldEntity@GUtilsMP@@UEBA_NPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GUtilsMP::FreeEntityRefs
==============
*/

void __fastcall GUtilsMP::FreeEntityRefs(GUtilsMP *this, gentity_s *ed)
{
  ?FreeEntityRefs@GUtilsMP@@UEBAXPEAUgentity_s@@@Z(this, ed);
}

/*
==============
GUtilsMP::PlayerButtonsPressed
==============
*/

bool __fastcall GUtilsMP::PlayerButtonsPressed(GUtilsMP *this, const gentity_s *ent, unsigned __int64 buttons)
{
  return ?PlayerButtonsPressed@GUtilsMP@@UEBA_NPEBUgentity_s@@_K@Z(this, ent, buttons);
}

/*
==============
GUtilsMP::ClearEntityPerks
==============
*/

void __fastcall GUtilsMP::ClearEntityPerks(GUtilsMP *this, const gentity_s *ent)
{
  ?ClearEntityPerks@GUtilsMP@@UEBAXPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GUtilsMP::GetPlayersSpectatingPlayer
==============
*/

void __fastcall GUtilsMP::GetPlayersSpectatingPlayer(const gentity_s *targetPlayer, unsigned int *outNumPlayers, unsigned __int16 *outPlayerEntIds)
{
  ?GetPlayersSpectatingPlayer@GUtilsMP@@SAXPEBUgentity_s@@PEAIPEAG@Z(targetPlayer, outNumPlayers, outPlayerEntIds);
}

/*
==============
GUtilsMP::BotSetAlmostGroundPlane
==============
*/

void __fastcall GUtilsMP::BotSetAlmostGroundPlane(GUtilsMP *this, const playerState_s *ps, bool newValue)
{
  ?BotSetAlmostGroundPlane@GUtilsMP@@UEBAXPEBUplayerState_s@@_N@Z(this, ps, newValue);
}

/*
==============
GUtilsMP::GUtilsMP
==============
*/

void __fastcall GUtilsMP::GUtilsMP(GUtilsMP *this)
{
  ??0GUtilsMP@@QEAA@XZ(this);
}

/*
==============
GUtilsMP::ShouldCreateEntityPhysicsOnInit
==============
*/

bool __fastcall GUtilsMP::ShouldCreateEntityPhysicsOnInit(GUtilsMP *this, const gentity_s *ent)
{
  return ?ShouldCreateEntityPhysicsOnInit@GUtilsMP@@UEBA_NPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GUtilsMP::EntAttach
==============
*/

bool __fastcall GUtilsMP::EntAttach(GUtilsMP *this, gentity_s *ent, const char *modelName, scr_string_t tagName, bool ignoreCollision, bool isOnCharacterBack)
{
  return ?EntAttach@GUtilsMP@@UEBA_NPEAUgentity_s@@PEBDW4scr_string_t@@_N3@Z(this, ent, modelName, tagName, ignoreCollision, isOnCharacterBack);
}

/*
==============
G_UtilsMP_SpawnPlayerClone
==============
*/

gentity_s *__fastcall G_UtilsMP_SpawnPlayerClone()
{
  return ?G_UtilsMP_SpawnPlayerClone@@YAPEAUgentity_s@@XZ();
}

/*
==============
GUtilsMP::IsTransientCustomizationModel
==============
*/

bool __fastcall GUtilsMP::IsTransientCustomizationModel(GUtilsMP *this, const char *modelName)
{
  return ?IsTransientCustomizationModel@GUtilsMP@@UEBA_NPEBD@Z(this, modelName);
}

/*
==============
GUtilsMP::GetDebugTeamName
==============
*/

const char *__fastcall GUtilsMP::GetDebugTeamName(GUtilsMP *this, const gentity_s *entity)
{
  return ?GetDebugTeamName@GUtilsMP@@UEBAPEBDPEBUgentity_s@@@Z(this, entity);
}

/*
==============
GUtilsMP::SetEntityPerk
==============
*/

void __fastcall GUtilsMP::SetEntityPerk(GUtilsMP *this, const gentity_s *ent, unsigned int perkIndex)
{
  ?SetEntityPerk@GUtilsMP@@UEBAXPEBUgentity_s@@I@Z(this, ent, perkIndex);
}

/*
==============
GUtilsMP::GUtilsMP
==============
*/
void GUtilsMP::GUtilsMP(GUtilsMP *this)
{
  this->m_entitySpawnMinFreeTime = 500;
  this->__vftable = (GUtilsMP_vtbl *)&GUtilsMP::`vftable';
  *(_WORD *)&this->m_disableCreateEntityPhysicsOnInit = 0;
}

/*
==============
GUtilsMP::BotSetAlmostGroundPlane
==============
*/
void GUtilsMP::BotSetAlmostGroundPlane(GUtilsMP *this, const playerState_s *ps, bool newValue)
{
  AIBotInterface *m_pAI; 
  AIBotWrapper v6; 

  if ( SV_IsAgentBot(ps->clientNum) || SV_BotIsBot(ps->clientNum) )
  {
    AIBotWrapper::AIBotWrapper(&v6, &g_entities[ps->clientNum]);
    m_pAI = v6.m_pAI;
    if ( !v6.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1937, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    AIBotInterface::SetAlmostGroundPlane(m_pAI, newValue);
  }
}

/*
==============
GUtilsMP::BotStuckCheck
==============
*/
void GUtilsMP::BotStuckCheck(GUtilsMP *this, const vec3_t *startVel, const vec3_t *startOrigin, const playerState_s *ps, const float frametime, bool body)
{
  const gentity_s *v10; 
  ai_agent_t *ScriptedAgentInfo; 
  ai_common_t *m_pAI; 
  __int64 v14; 
  AIBotInterface *v15; 
  float fmt; 
  float fmta; 
  AIBotWrapper v19; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1879, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SV_IsAgent(ps->clientNum);
  v10 = &g_entities[ps->clientNum];
  if ( SV_IsAgentScripted(v10) )
  {
    AIAgentInterface::AIAgentInterface((AIAgentInterface *)&v19);
    v19.m_botAgentInterface.m_pAI = NULL;
    v19.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AINewAgentInterface::`vftable';
    if ( SV_IsAgentScripted(v10) )
    {
      ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v10);
      if ( ScriptedAgentInfo )
      {
        v19.m_botAgentInterface.m_pAI = (ai_common_t *)&v19;
        AINewAgentInterface::SetAgent((AINewAgentInterface *)&v19, ScriptedAgentInfo);
      }
    }
    m_pAI = v19.m_botAgentInterface.m_pAI;
    if ( !v19.m_botAgentInterface.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1889, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    (*(void (__fastcall **)(ai_common_t *, _QWORD))&m_pAI->ent[1].s.clientNum)(m_pAI, 0i64);
    __asm
    {
      vmovss  xmm0, [rsp+88h+frametime]
      vmovss  dword ptr [rsp+88h+fmt], xmm0
    }
    if ( GUtilsMP::IsStuck(this, &ps->origin, startVel, startOrigin, fmt) )
    {
      LOBYTE(v14) = 1;
      (*(void (__fastcall **)(ai_common_t *, __int64))&m_pAI->ent[1].s.clientNum)(m_pAI, v14);
    }
  }
  else if ( SV_IsAgentBot(ps->clientNum) || SV_BotIsBot(ps->clientNum) )
  {
    AIBotWrapper::AIBotWrapper(&v19, &g_entities[ps->clientNum]);
    v15 = v19.m_pAI;
    if ( !v19.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1900, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    AIBotInterface::SetLateralMoveStuck(v15, 0, body);
    __asm
    {
      vmovss  xmm0, [rsp+88h+frametime]
      vmovss  dword ptr [rsp+88h+fmt], xmm0
    }
    if ( GUtilsMP::IsStuck(this, &ps->origin, startVel, startOrigin, fmta) )
      AIBotInterface::SetLateralMoveStuck(v15, 1, body);
  }
}

/*
==============
GUtilsMP::ClearEntityPerks
==============
*/
void GUtilsMP::ClearEntityPerks(GUtilsMP *this, const gentity_s *ent)
{
  gclient_s *client; 
  gagent_s *agent; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1620, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = ent->client;
  if ( client )
  {
    client->sess.cs.perks = 0i64;
  }
  else
  {
    agent = ent->agent;
    if ( agent )
      agent->agentState.perks = 0i64;
  }
}

/*
==============
GUtilsMP::DObjUpdate
==============
*/
void GUtilsMP::DObjUpdate(GUtilsMP *this, gentity_s *ent, int link)
{
  const DObj *ServerDObjForEnt; 
  unsigned int v7; 
  XAnimTree *Tree; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  v7 = 0;
  if ( ServerDObjForEnt )
    Tree = DObjGetTree(ServerDObjForEnt);
  else
    Tree = NULL;
  if ( ent->s.lerp.pos.trType == TR_ANIMATED_MOVER || ent->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 793, ASSERT_TYPE_ASSERT, "( (!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) && !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos )) || (tree != 0) )", (const char *)&queryFormat, "(!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) && !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos )) || (tree != NULL)") )
      __debugbreak();
  }
  _RDI = &ent->s.partBits;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm6 }
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
    ++v7;
  }
  while ( v7 < 2 );
  G_UtilsMP_DObjUpdate_Internal(ent);
  if ( link && !ent->client )
    SV_LinkEntity(ent);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
GUtilsMP::EntAttach
==============
*/
char GUtilsMP::EntAttach(GUtilsMP *this, gentity_s *ent, const char *modelName, scr_string_t tagName, bool ignoreCollision, bool isOnCharacterBack)
{
  gentity_s *v8; 
  entityType_s eType; 
  const char *EntityTypeName; 
  const char *v13; 
  const char *v14; 
  GStaticMP *v15; 
  unsigned int v16; 
  unsigned __int16 *attachModelNames; 
  int v18; 
  __int64 v19; 
  unsigned int ModelIndex; 
  unsigned __int16 v21; 
  const dvar_t *v23; 
  char v24; 
  DObj *ServerDObjForEnt; 
  const DObj *v26; 
  __int64 v27; 
  unsigned int numModels; 
  unsigned int v33; 
  __int64 v34; 
  DObjModel *v35; 
  const XModel *v36; 
  DObj *v37; 
  DObj *v38; 
  __int64 numActualModels; 
  __int64 v40; 
  DObjModel *v41; 
  const XModel *v42; 
  DObjModel (*actualDobjModels)[32]; 
  CharacterModelType (*actualModelTypes)[32]; 
  unsigned int v45; 
  characterInfo_t *CharacterInfo; 
  BgStatic *v49; 
  DObjPartBits outFixedUpHidePartBits; 
  DObjPartBits partBits; 
  CharacterModelType refModelTypes[32]; 
  DObjModel v53[32]; 
  DObjModel refDobjModels[32]; 

  v8 = ent;
  if ( !tagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 882, ASSERT_TYPE_ASSERT, "( tagName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "tagName != NULL_SCR_STRING") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && SV_TransientsMP_IsTransientModel(modelName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 886, ASSERT_TYPE_ASSERT, "(!SV_TransientsMP_IsTransientModel( modelName ))", "%s\n\tShould not be using transient models on the server", "!SV_TransientsMP_IsTransientModel( modelName )") )
    __debugbreak();
  if ( this->EntDetach(this, v8, modelName, tagName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 891, ASSERT_TYPE_ASSERT, "( !EntDetach( ent, modelName, tagName ) )", (const char *)&queryFormat, "!EntDetach( ent, modelName, tagName )") )
    __debugbreak();
  eType = v8->s.eType;
  if ( eType != ET_PLAYER )
  {
    if ( eType == ET_AGENT )
    {
      v13 = SL_ConvertToString(tagName);
      v14 = v13;
      if ( v13 && *v13 )
      {
        if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
          __debugbreak();
        if ( !GConfigStrings::ms_gConfigStrings->GetClientTagIndex(GConfigStrings::ms_gConfigStrings, v14) )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE9820, 653i64, v14);
      }
    }
    else if ( eType != ET_INVISIBLE )
    {
      EntityTypeName = BG_GetEntityTypeName(eType);
      Com_PrintError(24, "ERROR: EntAttach(), cannot attach models to entities of type '%s'\n", EntityTypeName);
      return 0;
    }
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v15 = *(GStaticMP **)&GStatic::ms_gameStatics;
  v49 = *(BgStatic **)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 919, ASSERT_TYPE_ASSERT, "( gameStatic )", (const char *)&queryFormat, "gameStatic") )
    __debugbreak();
  v16 = 0;
  attachModelNames = v8->attachModelNames;
  v18 = 0;
  v19 = 0i64;
  while ( *attachModelNames )
  {
    ++v18;
    ++v19;
    ++attachModelNames;
    if ( v19 >= 28 )
      return 0;
  }
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  ModelIndex = GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, modelName);
  if ( !ModelIndex )
    return 0;
  v21 = ModelIndex;
  if ( ModelIndex != (unsigned __int16)ModelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 930, ASSERT_TYPE_ASSERT, "(modelIndex == (modelNameIndex_t) modelIndex)", (const char *)&queryFormat, "modelIndex == (modelNameIndex_t) modelIndex") )
    __debugbreak();
  v8->attachModelNames[v18] = v21;
  if ( v8->attachTagNames[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 932, ASSERT_TYPE_ASSERT, "(ent->attachTagNames[i] == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ent->attachTagNames[i] == NULL_SCR_STRING") )
    __debugbreak();
  Scr_SetString(&v8->attachTagNames[v18], tagName);
  if ( ((1 << v18) & v8->attachIgnoreCollision) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 934, ASSERT_TYPE_ASSERT, "(!(ent->attachIgnoreCollision & (1 << i)))", (const char *)&queryFormat, "!(ent->attachIgnoreCollision & (1 << i))") )
    __debugbreak();
  if ( ignoreCollision )
    v8->attachIgnoreCollision |= 1 << v18;
  if ( isOnCharacterBack )
  {
    if ( v8 == (gentity_s *)-1448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v8->attachWeaponTagNames[((__int64)v18 >> 5) + 4] |= 1 << (v18 & 0x1F);
  }
  if ( ((v8->s.eType - 1) & 0xFFEF) != 0 )
  {
    _RSI = NULL;
    CharacterInfo = NULL;
  }
  else
  {
    CharacterInfo = GStaticMP::GetCharacterInfo(v15, v8->s.number);
    _RSI = CharacterInfo;
    if ( CharacterInfo )
    {
      v23 = DVARBOOL_killswitch_fix_attach_partbits_enabled;
      if ( !DVARBOOL_killswitch_fix_attach_partbits_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_fix_attach_partbits_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      if ( v23->current.enabled )
      {
        v24 = 1;
        goto LABEL_63;
      }
    }
  }
  v24 = 0;
LABEL_63:
  ServerDObjForEnt = Com_GetServerDObjForEnt(v8);
  v45 = 0;
  v26 = ServerDObjForEnt;
  LODWORD(v27) = 0;
  if ( ServerDObjForEnt )
  {
    if ( v24 )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi+544h]
        vmovups ymmword ptr [rsp+1598h+refModelTypes], ymm0
        vmovups ymm1, ymmword ptr [rsi+564h]
        vmovups ymmword ptr [rsp+1598h+refModelTypes+20h], ymm1
        vmovups ymm0, ymmword ptr [rsi+584h]
        vmovups ymmword ptr [rsp+1598h+refModelTypes+40h], ymm0
        vmovups ymm1, ymmword ptr [rsi+5A4h]
        vmovups ymmword ptr [rsp+1598h+refModelTypes+60h], ymm1
      }
      numModels = ServerDObjForEnt->numModels;
      v45 = numModels;
      memset_0(refDobjModels, 0, sizeof(refDobjModels));
      v33 = 0;
      v27 = numModels;
      if ( numModels )
      {
        v34 = 0i64;
        v35 = refDobjModels;
        do
        {
          if ( v33 >= 0x20 )
          {
            LODWORD(actualModelTypes) = 32;
            LODWORD(actualDobjModels) = v33;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 961, ASSERT_TYPE_ASSERT, "(unsigned)( modelIdx ) < (unsigned)( ( sizeof( *array_counter( oldCharacterModels ) ) + 0 ) )", "modelIdx doesn't index ARRAY_COUNT( oldCharacterModels )\n\t%i not in [0, %i)", actualDobjModels, actualModelTypes) )
              __debugbreak();
          }
          ++v33;
          v36 = v26->models[v34++];
          v35->model = v36;
          ++v35;
        }
        while ( v34 < v27 );
        v8 = ent;
      }
      DObjGetHidePartBits(v26, &partBits);
    }
    else
    {
      DObjGetHidePartBits(ServerDObjForEnt, &outFixedUpHidePartBits);
    }
  }
  GUtilsMP::DObjUpdate(this, v8, v8->r.isLinked);
  if ( !v26 )
    return 1;
  v37 = Com_GetServerDObjForEnt(v8);
  v38 = v37;
  if ( !v37 )
    return 1;
  if ( !v24 )
  {
    DObjSetHidePartBits(v37, &outFixedUpHidePartBits);
    return 1;
  }
  memset_0(v53, 0, sizeof(v53));
  numActualModels = v38->numModels;
  if ( v38->numModels )
  {
    v40 = 0i64;
    v41 = v53;
    do
    {
      if ( v16 >= 0x20 )
      {
        LODWORD(actualModelTypes) = 32;
        LODWORD(actualDobjModels) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 986, ASSERT_TYPE_ASSERT, "(unsigned)( modelIdx ) < (unsigned)( ( sizeof( *array_counter( newCharacterModels ) ) + 0 ) )", "modelIdx doesn't index ARRAY_COUNT( newCharacterModels )\n\t%i not in [0, %i)", actualDobjModels, actualModelTypes) )
          __debugbreak();
      }
      ++v16;
      v42 = v38->models[v40++];
      v41->model = v42;
      ++v41;
    }
    while ( v40 < numActualModels );
    LODWORD(v27) = v45;
  }
  BgStatic::FixUpHidePartBits(v49, v8->s.number, (const DObjModel (*)[32])refDobjModels, (const CharacterModelType (*)[32])refModelTypes, v27, (const DObjModel (*)[32])v53, (const CharacterModelType (*)[32])CharacterInfo->dobjModelTypes, numActualModels, &partBits, &outFixedUpHidePartBits);
  return 1;
}

/*
==============
GUtilsMP::EntDetach
==============
*/
char GUtilsMP::EntDetach(GUtilsMP *this, gentity_s *ent, const char *modelName, scr_string_t tagName)
{
  scr_string_t v4; 
  gentity_s *v6; 
  const dvar_t *v7; 
  bool enabled; 
  unsigned __int16 *attachModelNames; 
  scr_string_t *attachTagNames; 
  int v11; 
  __int64 v12; 
  int v13; 
  const char *v14; 
  unsigned int v15; 
  __int64 v16; 
  const char *v17; 
  const char *v18; 
  signed __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  int v24; 
  gentity_s *v25; 
  __int64 v26; 
  unsigned __int16 v27; 
  DObj *ServerDObjForEnt; 
  unsigned int *p_attachModelIsOnBack; 
  int v30; 
  scr_string_t *v31; 
  unsigned __int16 *v32; 
  scr_string_t *v33; 
  unsigned __int16 *v34; 
  unsigned int attachIgnoreCollision; 
  int v36; 
  int v37; 
  bool v38; 
  __int64 numModels; 
  GStaticMP *v40; 
  DObj *v41; 
  char v42; 
  const XModel *Model; 
  int v45; 
  const char *v46; 
  const XModel *v47; 
  const char *name; 
  signed __int64 v49; 
  __int64 v50; 
  int v51; 
  __int64 v52; 
  int v53; 
  int v54; 
  int v55; 
  unsigned int ModelRootBoneIndex; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned __int64 v59; 
  unsigned __int64 v60; 
  unsigned int *v61; 
  entityType_s eType; 
  const GCorpseInfoMP *CorpseInfoFromEntity; 
  unsigned int v68; 
  DObjModel *v69; 
  __int64 i; 
  const XModel *v71; 
  gentity_s *v72; 
  DObj *v73; 
  int v74; 
  __int64 v75; 
  unsigned int v76; 
  DObjModel *v77; 
  __int64 v78; 
  const XModel *v79; 
  DObjModel (*actualDobjModels)[32]; 
  CharacterModelType (*actualModelTypes)[32]; 
  __int64 numActualModels; 
  DObjPartBits *hidePartBits; 
  bool v85; 
  __int64 v86; 
  __int64 v87; 
  GStaticMP *v88; 
  int modelIndex; 
  __int64 v92; 
  DObj *obj; 
  DObjPartBits partBits; 
  DObjPartBits v96; 
  CharacterModelType refModelTypes[32]; 
  DObjModel v98[32]; 
  DObjModel refDobjModels[32]; 

  v4 = tagName;
  v6 = ent;
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1027, ASSERT_TYPE_ASSERT, "( modelName )", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  if ( !*modelName )
    return 0;
  v7 = DVARBOOL_bg_attachHeadAsLastModel;
  if ( !DVARBOOL_bg_attachHeadAsLastModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_attachHeadAsLastModel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  enabled = v7->current.enabled;
  attachModelNames = v6->attachModelNames;
  v85 = enabled;
  modelIndex = -1;
  attachTagNames = v6->attachTagNames;
  v11 = -1;
  v12 = 0i64;
  v13 = 0;
  v86 = 0i64;
  while ( 1 )
  {
    if ( enabled )
    {
      if ( *attachModelNames )
      {
        v14 = G_CString_GetModelName(*attachModelNames);
        if ( BG_Customization_IsCustomizationModel(CUSTOMIZATION_TYPE_HEAD, v14) )
        {
          if ( v11 >= 0 )
          {
            LODWORD(hidePartBits) = v13;
            LODWORD(numActualModels) = v11;
            LODWORD(actualModelTypes) = v6->s.number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1044, ASSERT_TYPE_ASSERT, "(headAttachModelIndex < 0)", "%s\n\tMore than one head model is attached to ent[%d]. First head index: %d Second head index: %d", "headAttachModelIndex < 0", actualModelTypes, numActualModels, hidePartBits) )
              __debugbreak();
          }
          v11 = v13;
        }
      }
      v12 = v86;
    }
    if ( *attachTagNames == v4 )
      break;
LABEL_39:
    ++v12;
    ++v13;
    ++attachTagNames;
    v86 = v12;
    ++attachModelNames;
    if ( v13 >= 28 )
      return 0;
    enabled = v85;
  }
  v15 = *attachModelNames;
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v16 = 0x7FFFFFFFi64;
  v17 = modelName;
  v18 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v15);
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v19 = v18 - modelName;
  do
  {
    v20 = (unsigned __int8)v17[v19];
    v21 = v16;
    v22 = *(unsigned __int8 *)v17++;
    --v16;
    if ( !v21 )
      break;
    if ( v20 != v22 )
    {
      v23 = v20 + 32;
      if ( (unsigned int)(v20 - 65) > 0x19 )
        v23 = v20;
      v20 = v23;
      v24 = v22 + 32;
      if ( (unsigned int)(v22 - 65) > 0x19 )
        v24 = v22;
      if ( v20 != v24 )
      {
        v12 = v86;
        v4 = tagName;
        v6 = ent;
        goto LABEL_39;
      }
    }
  }
  while ( v20 );
  v25 = ent;
  v26 = v13;
  if ( !ent->attachModelNames[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1056, ASSERT_TYPE_ASSERT, "(ent->attachModelNames[i])", (const char *)&queryFormat, "ent->attachModelNames[i]") )
    __debugbreak();
  v27 = ent->attachModelNames[v13];
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  obj = ServerDObjForEnt;
  if ( v11 >= 0 )
  {
    if ( v11 == v13 )
    {
      if ( ServerDObjForEnt )
        modelIndex = ServerDObjForEnt->numModels - 1;
    }
    else
    {
      modelIndex = v13;
    }
  }
  else
  {
    modelIndex = v13 + 1;
  }
  ent->attachModelNames[v13] = 0;
  Scr_SetString(&ent->attachTagNames[v13], (scr_string_t)0);
  if ( v13 < 27 )
  {
    p_attachModelIsOnBack = &ent->attachModelIsOnBack;
    v30 = __ROL4__(1, v13);
    v31 = &ent->attachTagNames[v86];
    v32 = &ent->attachModelNames[v86];
    v87 = (unsigned int)(27 - v13);
    do
    {
      v33 = v31 + 1;
      *v32 = v32[1];
      v34 = v32 + 1;
      *v31 = v31[1];
      attachIgnoreCollision = v25->attachIgnoreCollision;
      v36 = __ROL4__(v30, 1);
      if ( (attachIgnoreCollision & v36) != 0 )
        v37 = v30 | attachIgnoreCollision;
      else
        v37 = ~v30 & attachIgnoreCollision;
      ent->attachIgnoreCollision = v37;
      if ( ent == (gentity_s *)-1448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (v36 & ent->attachWeaponTagNames[((v26 + 1) >> 5) + 4]) != 0 )
      {
        if ( ent == (gentity_s *)-1448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        p_attachModelIsOnBack[v26 >> 5] |= v30;
      }
      else
      {
        if ( ent == (gentity_s *)-1448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        p_attachModelIsOnBack[v26 >> 5] &= ~v30;
      }
      v38 = v87-- == 1;
      v30 = v36;
      ++v26;
      v25 = ent;
      v32 = v34;
      v31 = v33;
    }
    while ( !v38 );
    v13 = 27;
  }
  v25->attachModelNames[v13] = 0;
  v25->attachTagNames[v13] = 0;
  v25->attachIgnoreCollision &= ~(1 << v13);
  if ( v25 == (gentity_s *)-1448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  LODWORD(numModels) = 0;
  v25->attachWeaponTagNames[((__int64)v13 >> 5) + 4] &= ~(1 << (v13 & 0x1F));
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v40 = *(GStaticMP **)&GStatic::ms_gameStatics;
  v88 = *(GStaticMP **)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1114, ASSERT_TYPE_ASSERT, "( gameStatic )", (const char *)&queryFormat, "gameStatic") )
    __debugbreak();
  v41 = obj;
  v42 = 0;
  _R15 = NULL;
  if ( obj )
  {
    if ( ((ent->s.eType - 1) & 0xFFEF) == 0 || BG_IsPlayerOrAgentCorpseEntity(&ent->s) )
    {
      eType = ent->s.eType;
      v42 = 1;
      if ( ((eType - 1) & 0xFFEF) != 0 )
      {
        if ( ((eType - 2) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1133, ASSERT_TYPE_ASSERT, "( BG_IsPlayerOrAgentCorpseEntity( &ent->s ) )", (const char *)&queryFormat, "BG_IsPlayerOrAgentCorpseEntity( &ent->s )") )
          __debugbreak();
        CorpseInfoFromEntity = GetCorpseInfoFromEntity(ent);
        if ( !CorpseInfoFromEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1135, ASSERT_TYPE_ASSERT, "( corpseInfo )", (const char *)&queryFormat, "corpseInfo") )
          __debugbreak();
        _R15 = &CorpseInfoFromEntity->ci;
        v41 = obj;
      }
      else
      {
        if ( !GStaticMP::HasCharacterInfo(v40, ent->s.number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1128, ASSERT_TYPE_ASSERT, "( gameStatic->HasCharacterInfo( ent->s.number ) )", (const char *)&queryFormat, "gameStatic->HasCharacterInfo( ent->s.number )") )
          __debugbreak();
        _R15 = GStaticMP::GetCharacterInfo(v40, ent->s.number);
      }
      if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1138, ASSERT_TYPE_ASSERT, "( ci )", (const char *)&queryFormat, "ci") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [r15+544h]
        vmovups ymmword ptr [rsp+1588h+refModelTypes], ymm0
        vmovups ymm1, ymmword ptr [r15+564h]
        vmovups ymmword ptr [rsp+1588h+refModelTypes+20h], ymm1
        vmovups ymm0, ymmword ptr [r15+584h]
        vmovups ymmword ptr [rsp+1588h+refModelTypes+40h], ymm0
        vmovups ymm1, ymmword ptr [r15+5A4h]
        vmovups ymmword ptr [rsp+1588h+refModelTypes+60h], ymm1
      }
      numModels = v41->numModels;
      memset_0(refDobjModels, 0, sizeof(refDobjModels));
      v68 = 0;
      if ( (_DWORD)numModels )
      {
        v69 = refDobjModels;
        for ( i = 0i64; i < numModels; ++i )
        {
          if ( v68 >= 0x20 )
          {
            LODWORD(actualModelTypes) = 32;
            LODWORD(actualDobjModels) = v68;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1148, ASSERT_TYPE_ASSERT, "(unsigned)( modelIdx ) < (unsigned)( ( sizeof( *array_counter( oldCharacterModels ) ) + 0 ) )", "modelIdx doesn't index ARRAY_COUNT( oldCharacterModels )\n\t%i not in [0, %i)", actualDobjModels, actualModelTypes) )
              __debugbreak();
          }
          ++v68;
          v71 = obj->models[i];
          v69->model = v71;
          ++v69;
        }
        v40 = v88;
        v42 = 1;
      }
      DObjGetHidePartBits(obj, &v96);
    }
    else
    {
      Model = G_Utils_GetModel(v27);
      v45 = XModelNumBones(Model);
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      v46 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v27);
      v47 = DObjGetModel(obj, modelIndex);
      if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      name = v47->name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v49 = name - v46;
      v50 = 0x7FFFFFFFi64;
      do
      {
        v51 = (unsigned __int8)v46[v49];
        v52 = v50;
        v53 = *(unsigned __int8 *)v46++;
        v92 = --v50;
        if ( !v52 )
          break;
        if ( v51 != v53 )
        {
          v54 = v51 + 32;
          if ( (unsigned int)(v51 - 65) > 0x19 )
            v54 = v51;
          v51 = v54;
          v55 = v53 + 32;
          if ( (unsigned int)(v53 - 65) > 0x19 )
            v55 = v53;
          if ( v51 != v55 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1162, ASSERT_TYPE_ASSERT, "(!I_stricmp( XModelGetName( DObjGetModel( obj, indexOfRemovedModelInObj ) ), G_CString_GetModelName( removedModelIndex ) ))", (const char *)&queryFormat, "!I_stricmp( XModelGetName( DObjGetModel( obj, indexOfRemovedModelInObj ) ), G_CString_GetModelName( removedModelIndex ) )") )
              __debugbreak();
            break;
          }
          v50 = v92;
        }
      }
      while ( v51 );
      ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, modelIndex);
      DObjGetHidePartBits(obj, &partBits);
      v57 = ModelRootBoneIndex + v45;
      v58 = DObjNumBones(obj);
      if ( ModelRootBoneIndex + v45 < v58 )
      {
        do
        {
          if ( v57 >= 0x100 )
          {
            LODWORD(actualModelTypes) = 256;
            LODWORD(actualDobjModels) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", actualDobjModels, actualModelTypes) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v57 & 0x1F)) & partBits.array[(unsigned __int64)v57 >> 5]) != 0 )
          {
            if ( ModelRootBoneIndex >= 0x100 )
            {
              LODWORD(hidePartBits) = 256;
              LODWORD(numActualModels) = ModelRootBoneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", numActualModels, hidePartBits) )
                __debugbreak();
            }
            partBits.array[(unsigned __int64)ModelRootBoneIndex >> 5] |= 0x80000000 >> (ModelRootBoneIndex & 0x1F);
          }
          else
          {
            if ( ModelRootBoneIndex >= 0x100 )
            {
              LODWORD(hidePartBits) = 256;
              LODWORD(numActualModels) = ModelRootBoneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", numActualModels, hidePartBits) )
                __debugbreak();
            }
            partBits.array[(unsigned __int64)ModelRootBoneIndex >> 5] &= ~(0x80000000 >> (ModelRootBoneIndex & 0x1F));
          }
          ++ModelRootBoneIndex;
          ++v57;
        }
        while ( v57 < v58 );
        _R15 = NULL;
        v40 = v88;
        LODWORD(numModels) = 0;
      }
      if ( ModelRootBoneIndex < v58 )
      {
        v59 = ModelRootBoneIndex;
        do
        {
          if ( ModelRootBoneIndex >= 0x100 )
          {
            LODWORD(hidePartBits) = 256;
            LODWORD(numActualModels) = ModelRootBoneIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", numActualModels, hidePartBits) )
              __debugbreak();
          }
          v60 = v59++ >> 5;
          v61 = &partBits.array[v60];
          LOBYTE(v60) = ModelRootBoneIndex++ & 0x1F;
          *v61 &= ~(0x80000000 >> v60);
        }
        while ( ModelRootBoneIndex < v58 );
        v40 = v88;
        LODWORD(numModels) = 0;
      }
    }
  }
  v72 = ent;
  GUtilsMP::DObjUpdate(this, ent, ent->r.isLinked);
  if ( obj )
  {
    v73 = Com_GetServerDObjForEnt(ent);
    if ( v73 )
    {
      if ( v42 )
      {
        if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1187, ASSERT_TYPE_ASSERT, "( ci )", (const char *)&queryFormat, "ci") )
          __debugbreak();
        memset_0(v98, 0, sizeof(v98));
        v74 = v73->numModels;
        v75 = v73->numModels;
        if ( v73->numModels )
        {
          v76 = 0;
          v77 = v98;
          v78 = 0i64;
          do
          {
            if ( v76 >= 0x20 )
            {
              LODWORD(actualModelTypes) = 32;
              LODWORD(actualDobjModels) = v76;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1194, ASSERT_TYPE_ASSERT, "(unsigned)( modelIdx ) < (unsigned)( ( sizeof( *array_counter( newCharacterModels ) ) + 0 ) )", "modelIdx doesn't index ARRAY_COUNT( newCharacterModels )\n\t%i not in [0, %i)", actualDobjModels, actualModelTypes) )
                __debugbreak();
            }
            ++v76;
            v79 = v73->models[v78++];
            v77->model = v79;
            ++v77;
          }
          while ( v78 < v75 );
          v40 = v88;
          v74 = v75;
          v72 = ent;
        }
        BgStatic::FixUpHidePartBits(v40, v72->s.number, (const DObjModel (*)[32])refDobjModels, (const CharacterModelType (*)[32])refModelTypes, numModels, (const DObjModel (*)[32])v98, (const CharacterModelType (*)[32])_R15->dobjModelTypes, v74, &v96, &partBits);
      }
      DObjSetHidePartBits(v73, &partBits);
      if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
        __debugbreak();
      GUtils::ms_gUtils->EntityStateSetPartBits(GUtils::ms_gUtils, v72, &partBits);
    }
  }
  return 1;
}

/*
==============
GUtilsMP::EntDetachAll
==============
*/
void GUtilsMP::EntDetachAll(GUtilsMP *this, gentity_s *ent)
{
  unsigned __int16 *attachModelNames; 
  __int64 v4; 
  GUtilsMP *v5; 
  __int64 v6; 
  const DObj *ServerDObjForEnt; 
  const DObj *v8; 
  unsigned int v9; 
  const XModel *Model; 
  unsigned int numBones; 
  unsigned __int64 v12; 
  char v13; 
  unsigned __int64 v14; 
  DObj *v15; 
  __int64 v16; 
  __int64 v17; 
  DObjPartBits partBits; 

  attachModelNames = ent->attachModelNames;
  v4 = 0i64;
  v5 = this;
  v6 = 28i64;
  do
  {
    *attachModelNames = 0;
    Scr_SetString(&ent->attachTagNames[v4++], (scr_string_t)0);
    ++attachModelNames;
    --v6;
  }
  while ( v6 );
  ent->attachIgnoreCollision = 0;
  ent->attachModelIsOnBack = 0;
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  v8 = ServerDObjForEnt;
  if ( ServerDObjForEnt )
  {
    DObjGetHidePartBits(ServerDObjForEnt, &partBits);
    v9 = DObjNumBones(v8);
    Model = DObjGetModel(v8, 0);
    if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    numBones = Model->numBones;
    if ( numBones < v9 )
    {
      v12 = numBones;
      do
      {
        if ( numBones >= 0x100 )
        {
          LODWORD(v17) = 256;
          LODWORD(v16) = numBones;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
            __debugbreak();
        }
        v13 = numBones & 0x1F;
        v14 = v12 >> 5;
        ++numBones;
        ++v12;
        partBits.array[v14] &= ~(0x80000000 >> v13);
      }
      while ( numBones < v9 );
      v5 = this;
    }
  }
  GUtilsMP::DObjUpdate(v5, ent, ent->r.isLinked);
  if ( v8 )
  {
    v15 = Com_GetServerDObjForEnt(ent);
    if ( v15 )
    {
      DObjSetHidePartBits(v15, &partBits);
      if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
        __debugbreak();
      GUtils::ms_gUtils->EntityStateSetPartBits(GUtils::ms_gUtils, ent, &partBits);
    }
  }
}

/*
==============
GUtilsMP::EntTagInfoChanged
==============
*/
void GUtilsMP::EntTagInfoChanged(GUtilsMP *this, gentity_s *ent)
{
  GUtils::EntTagInfoChanged(this, ent);
  if ( ent->client )
    SV_ClientMP_ClearExtrapolation(ent->s.number);
}

/*
==============
GUtilsMP::EntityStateSetPartBits
==============
*/
void GUtilsMP::EntityStateSetPartBits(GUtilsMP *this, gentity_s *ent, const DObjPartBits *partBits)
{
  __int64 v5; 
  unsigned __int16 v6; 
  unsigned int v7; 
  unsigned int firstWeaponPartIndex; 
  GCorpseInfoMP *CorpseInfo; 
  unsigned __int16 weaponBoneCount; 
  char *client; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 812, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&ent->s.partBits, partBits);
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((ent->s.eType - 1) & 0xFFEF) == 0 )
  {
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)ent->s.clientNum);
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 821, ASSERT_TYPE_ASSERT, "( ci )", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v6 = *(_WORD *)(v5 + 1510);
    if ( v6 && v6 + (unsigned int)*(unsigned __int16 *)(v5 + 1508) > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 822, ASSERT_TYPE_ASSERT, "( ( ci->weaponBoneCount == 0 || static_cast<uint>(ci->firstWeaponPartIndex + ci->weaponBoneCount) <= partBits->size() ) )", "%s\n\t( ci->firstWeaponPartIndex + ci->weaponBoneCount ) = %i", "( ci->weaponBoneCount == 0 || static_cast<uint>(ci->firstWeaponPartIndex + ci->weaponBoneCount) <= partBits->size() )", v6 + *(unsigned __int16 *)(v5 + 1508)) )
      __debugbreak();
    v7 = *(unsigned __int16 *)(v5 + 1510);
    firstWeaponPartIndex = *(unsigned __int16 *)(v5 + 1508);
LABEL_28:
    bitarray_base<bitarray<256>>::resetBits(&ent->s.partBits, firstWeaponPartIndex, v7);
    goto LABEL_29;
  }
  if ( BG_IsPlayerOrAgentCorpseEntity(&ent->s) )
  {
    CorpseInfo = G_PlayerCorpseMP_FindCorpseInfo(ent);
    if ( !CorpseInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 828, ASSERT_TYPE_ASSERT, "( corpseInfo )", (const char *)&queryFormat, "corpseInfo") )
      __debugbreak();
    weaponBoneCount = CorpseInfo->ci.weaponBoneCount;
    if ( weaponBoneCount && weaponBoneCount + (unsigned int)CorpseInfo->ci.firstWeaponPartIndex > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 829, ASSERT_TYPE_ASSERT, "( ( corpseInfo->ci.weaponBoneCount == 0 || static_cast<uint>(corpseInfo->ci.firstWeaponPartIndex + corpseInfo->ci.weaponBoneCount) <= partBits->size() ) )", "%s\n\t( corpseInfo->ci.firstWeaponPartIndex + corpseInfo->ci.weaponBoneCount ) = %i", "( corpseInfo->ci.weaponBoneCount == 0 || static_cast<uint>(corpseInfo->ci.firstWeaponPartIndex + corpseInfo->ci.weaponBoneCount) <= partBits->size() )", weaponBoneCount + CorpseInfo->ci.firstWeaponPartIndex) )
      __debugbreak();
    v7 = CorpseInfo->ci.weaponBoneCount;
    firstWeaponPartIndex = CorpseInfo->ci.firstWeaponPartIndex;
    goto LABEL_28;
  }
LABEL_29:
  client = (char *)ent->client;
  if ( client || (client = (char *)ent->agent) != NULL )
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>((bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)(client + 21072), &ent->s.partBits);
}

/*
==============
GUtilsMP::FreeEntity
==============
*/
void GUtilsMP::FreeEntity(GUtilsMP *this, gentity_s *ed)
{
  const scrContext_t *v4; 
  unsigned __int8 svFlags; 
  nav_space_s *SpaceByEntity; 
  __int64 number; 
  int entnum; 
  int v9; 
  const DObj *ServerDObjForEnt; 
  char v11; 
  unsigned __int16 v12; 
  XAnimTree *pAnimTree; 
  Vehicle *vehicle; 
  unsigned int runtimeInstanceCount; 
  sentient_s *sentient; 
  Ai_Asm *v17; 
  void *v18; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  entityType_s eType; 
  unsigned int v22; 
  int v23; 
  unsigned __int8 v24; 
  int useCount; 
  bool v26; 
  AIActorInterface v27; 
  AIAgentInterface v28; 
  void *v29; 

  if ( !ed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1365, ASSERT_TYPE_ASSERT, "( ed )", (const char *)&queryFormat, "ed") )
    __debugbreak();
  v4 = ScriptContext_Server();
  svFlags = ed->r.svFlags;
  if ( ScriptContext_HasTimeArrayId(v4) )
    GScr_Notify(ed, scr_const.entitydeleted, 0);
  if ( Path_IsDynamicBlockingEntity(ed) )
    Path_ConnectPathsForEntity(ed);
  if ( G_PlayerSpawnPoints_IsValidViewerEntity(ed) )
    G_PlayerSpawnPoints_DissassociateViewerEntity(ed);
  if ( ed->s.eType == ET_SCRIPTMOVER )
  {
    SpaceByEntity = Nav_GetSpaceByEntity(ed);
    if ( SpaceByEntity )
      Nav_CleanupAndDestroySpace(SpaceByEntity);
    G_Vehicle_NotifyDestroySuspended(ed);
  }
  G_ScrMover_ClearAnimatedTrajectory(ed);
  G_EntUnlink(ed);
  while ( ed->tagChildren )
  {
    GScr_Notify(ed->tagChildren, scr_const.invalid_parent, 0);
    G_EntUnlink(ed->tagChildren);
  }
  if ( ed->hasSpawnInfluencePoint )
    G_PlayerSpawnPoints_UnlinkInfluencePointFromEntity(ed->influencePointIndex, ed);
  SV_UnlinkEntity(ed);
  number = ed->s.number;
  SV_EntitiesPartitioning_RemoveEntity(ed->s.number);
  entnum = level.cachedTagMat.entnum;
  if ( (_DWORD)number == level.cachedTagMat.entnum )
    entnum = 2047;
  level.cachedTagMat.entnum = entnum;
  v9 = level.cachedEntTargetTagMat.entnum;
  if ( (_DWORD)number == level.cachedEntTargetTagMat.entnum )
    v9 = 2047;
  level.cachedEntTargetTagMat.entnum = v9;
  ServerDObjForEnt = Com_GetServerDObjForEnt(ed);
  if ( ServerDObjForEnt && ServerDObjForEnt->tree )
    XAnimClearTree(ServerDObjForEnt);
  G_Utils_DestroyEntityPhysics(ed);
  Com_SafeServerDObjFree(number);
  v11 = svFlags & 0x10;
  if ( !v11 )
    G_PlayerUse_SetEntityUsable(ed, 0);
  v12 = truncate_cast<unsigned short,short>(ed->s.number);
  G_Trigger_UnRegisterMathTrigger(v12);
  GMissile::UnRegisterMissileEntity(ed->s.number);
  GMissile::UnRegisterMissileEventEntity(ed->s.number);
  pAnimTree = ed->pAnimTree;
  if ( pAnimTree )
  {
    Com_XAnimFreeSmallTree(pAnimTree);
    ed->pAnimTree = NULL;
  }
  G_PhysicsCharacterProxy_RemoveCharacter(ed);
  if ( ed->s.eType == ET_VEHICLE )
  {
    vehicle = ed->vehicle;
    if ( vehicle )
      G_Vehicle_FreeScriptableUsabilityMasks(vehicle);
  }
  if ( !v11 )
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    if ( ScriptableSv_GetScriptableIndexForEntity(ed) < runtimeInstanceCount )
      ScriptableSv_UnlinkReservedScriptableEntity(ed);
  }
  sentient = ed->sentient;
  if ( sentient )
  {
    Sentient_Free(sentient);
    if ( ed->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1469, ASSERT_TYPE_ASSERT, "(ed->sentient == 0)", (const char *)&queryFormat, "ed->sentient == NULL") )
      __debugbreak();
  }
  else
  {
    this->FreeEntityRefs(this, ed);
  }
  AI_BT_FreeTreeInstance(number);
  v17 = Ai_Asm::Singleton();
  Ai_Asm::FreeInstance(v17, NULL, number);
  Actor_EventListener_RemoveEntity(number);
  if ( ed->agent )
  {
    AIActorInterface::AIActorInterface(&v27);
    AIAgentInterface::AIAgentInterface(&v28);
    v18 = NULL;
    v28.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v29 = NULL;
    if ( ed->agent )
    {
      if ( SV_Agent_IsScripted(ed->s.number) )
      {
        ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(ed);
        if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
          __debugbreak();
        if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
          __debugbreak();
        AINewAgentInterface::SetAgent((AINewAgentInterface *)&v28, ScriptedAgentInfo);
        v18 = &v28;
        v29 = &v28;
        goto LABEL_57;
      }
      v18 = v29;
    }
    actor = ed->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v27, ed->actor);
      v18 = &v27;
      v29 = &v27;
      goto LABEL_57;
    }
    if ( v18 )
LABEL_57:
      (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 872i64))(v18);
  }
  if ( ed->turretHandle.m_objIndex )
  {
    G_TurretMP_Free(ed);
    if ( ed->turretHandle.m_objIndex )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1492, ASSERT_TYPE_ASSERT, "( !ed->turretHandle.IsDefined() )", (const char *)&queryFormat, "!ed->turretHandle.IsDefined()") )
        __debugbreak();
    }
  }
  if ( ed->vehicle )
  {
    G_Vehicle_FreeEntity(ed);
    if ( ed->vehicle )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1498, ASSERT_TYPE_ASSERT, "(ed->vehicle == 0)", (const char *)&queryFormat, "ed->vehicle == NULL") )
        __debugbreak();
    }
  }
  eType = ed->s.eType;
  v22 = (unsigned __int16)eType;
  if ( eType == ET_CLIENT_CHARACTER )
  {
    G_ClientCharacter_Free(ed);
    eType = ed->s.eType;
    v22 = (unsigned __int16)eType;
  }
  if ( eType == ET_RAGDOLL_CONSTRAINT )
  {
    G_RagdollConstraintEntity_NotifyConstraintFree(ed);
    v22 = (unsigned __int16)ed->s.eType;
  }
  if ( (unsigned __int16)v22 <= 0x15u )
  {
    v23 = 2359300;
    if ( _bittest(&v23, v22) )
    {
      G_RagdollConstraintEntity_NotifyCorpseFree(ed);
      LOWORD(v22) = ed->s.eType;
    }
  }
  if ( (_WORD)v22 == 27 )
  {
    G_CoverWall_Free(ed);
    LOWORD(v22) = ed->s.eType;
  }
  if ( (_WORD)v22 == 2 )
  {
    G_PlayerCorpseMP_FreeCorpse(ed);
    LOWORD(v22) = ed->s.eType;
  }
  if ( (_WORD)v22 == 18 )
    G_PlayerCorpseMP_FreeAgentCorpse(ed);
  if ( G_HudOutline_IsEntHudOutlineEnabled(ed) )
    G_HudOutline_FreeForEnt(ed);
  EntHandleDissociate(ed);
  EntHandle::setEnt(&ed->r.ownerNum, NULL);
  EntHandle::setEnt(&ed->parent, NULL);
  EntHandle::setEnt(&ed->missileTargetEnt, NULL);
  EntHandle::setEnt(&ed->remoteControlledOwner, NULL);
  EntHandle::setEnt(&ed->movingPlatformTrack.m_trackEnt, NULL);
  if ( !ed->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1541, ASSERT_TYPE_ASSERT, "(ed->r.isInUse)", (const char *)&queryFormat, "ed->r.isInUse") )
    __debugbreak();
  v24 = ed->r.svFlags;
  if ( (v24 & 0x20) == 0 )
  {
    GScr_FreeEntity(ed);
    if ( ed->classname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1546, ASSERT_TYPE_ASSERT, "(ed->classname == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ed->classname == NULL_SCR_STRING") )
      __debugbreak();
    v24 = ed->r.svFlags;
  }
  useCount = ed->useCount;
  v26 = ed->tagChildren == NULL;
  ed->r.svFlags = v24 & 0xDF;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1552, ASSERT_TYPE_ASSERT, "( ed->tagChildren == 0 )", (const char *)&queryFormat, "ed->tagChildren == NULL") )
    __debugbreak();
  G_Utils_ClearEntity(ed);
  ed->r.svFlags &= ~0x10u;
  ed->r.eventTime = level.time;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( ed - level.gentities >= ComCharacterLimits::ms_gameData.m_staticEntityCount )
  {
    if ( level.lastFreeEnt )
      level.lastFreeEnt->nextFree = ed;
    else
      level.firstFreeEnt = ed;
    level.lastFreeEnt = ed;
    ed->nextFree = NULL;
  }
  v26 = ed->r.isInUse == 0;
  ed->useCount = useCount + 1;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1571, ASSERT_TYPE_ASSERT, "(!ed->r.isInUse)", (const char *)&queryFormat, "!ed->r.isInUse") )
    __debugbreak();
  g_entityIsInUse[number] = 0;
}

/*
==============
GUtilsMP::FreeEntityRefs
==============
*/
void GUtilsMP::FreeEntityRefs(GUtilsMP *this, gentity_s *ed)
{
  unsigned int v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  gentity_s *v7; 
  gclient_s *client; 
  __int16 number; 
  unsigned int v10; 
  gentity_s *v11; 
  __int16 v12; 
  __int64 v13; 
  __int64 v14; 

  G_Utils_FreeEntityRefsCommon(ed);
  if ( (unsigned int)(level.maxclients - 1) > 0xC7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1321, ASSERT_TYPE_ASSERT, "( 1 ) <= ( level.maxclients ) && ( level.maxclients ) <= ( 200 )", "level.maxclients not in [1, MAX_CLIENTS_MP]\n\t%i not in [%i, %i]", level.maxclients, 1, 200) )
    __debugbreak();
  v3 = 0;
  v4 = 0;
  if ( level.maxclients > 0 )
  {
    v5 = 0i64;
    v6 = 0i64;
    do
    {
      if ( (unsigned int)v4 >= 0x800 )
      {
        LODWORD(v14) = 2048;
        LODWORD(v13) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v6].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v5] )
      {
        v7 = &g_entities[v6];
        client = g_entities[v6].client;
        if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1329, ASSERT_TYPE_ASSERT, "(pClient)", (const char *)&queryFormat, "pClient") )
          __debugbreak();
        if ( client->ps.viewlocked_entNum == ed->s.number )
        {
          BG_Turret_ClearPlayerstateOwnedTurret(&client->ps);
          GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu);
          if ( ed->s.eType == ET_TURRET )
            G_Turret_ScrStopUse(ed, v7);
        }
        number = ed->s.number;
        if ( ed->s.number < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", (unsigned __int16)number, "signed", number) )
          __debugbreak();
        G_Client_SetEntUsable(client, number);
      }
      ++v4;
      ++v5;
      ++v6;
    }
    while ( v4 < level.maxclients );
    v3 = 0;
  }
  if ( level.maxagents > 0 )
  {
    do
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v3 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v14) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(v13) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v10 = v3 + ComCharacterLimits::ms_gameData.m_clientCount;
      v11 = &g_entities[v3 + ComCharacterLimits::ms_gameData.m_clientCount];
      if ( v3 + ComCharacterLimits::ms_gameData.m_clientCount >= 0x800 )
      {
        LODWORD(v14) = 2048;
        LODWORD(v13) = v3 + ComCharacterLimits::ms_gameData.m_clientCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v10] && v11->s.eType == ET_AGENT )
      {
        v12 = ed->s.number;
        if ( ed->s.number < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", (unsigned __int16)v12, "signed", v12) )
          __debugbreak();
        SV_AgentSetEntUnusable(v11, v12);
      }
      ++v3;
    }
    while ( (int)v3 < level.maxagents );
  }
}

/*
==============
G_DemoMP_LoadFreeEntities
==============
*/
void G_DemoMP_LoadFreeEntities(unsigned __int8 *buf)
{
  gentity_s *firstFreeEnt; 
  __int64 v3; 
  unsigned int v4; 
  gentity_s *v5; 
  __int64 v6; 
  __int64 v7; 
  gentity_s **p_nextFree; 
  unsigned int v9; 
  gentity_s *v10; 
  __int64 v11; 

  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 130, ASSERT_TYPE_ASSERT, "(buf)", (const char *)&queryFormat, "buf") )
    __debugbreak();
  firstFreeEnt = *(gentity_s **)buf;
  level.firstFreeEnt = firstFreeEnt;
  if ( firstFreeEnt )
  {
    firstFreeEnt->r.eventTime = *((_DWORD *)buf + 2);
    v3 = 12i64;
    firstFreeEnt = level.firstFreeEnt;
    v4 = 20;
  }
  else
  {
    v3 = 8i64;
    v4 = 16;
  }
  v5 = *(gentity_s **)&buf[v3];
  level.lastFreeEnt = v5;
  if ( v5 )
  {
    v6 = v4;
    v4 += 4;
    v5->r.eventTime = *(_DWORD *)&buf[v6];
    firstFreeEnt = level.firstFreeEnt;
  }
  if ( firstFreeEnt )
  {
    v7 = v4;
    do
    {
      p_nextFree = &firstFreeEnt->nextFree;
      v9 = v4 + 8;
      v10 = *(gentity_s **)&buf[v7];
      v11 = v7 + 8;
      *p_nextFree = v10;
      if ( !v10 )
        break;
      v4 = v9 + 4;
      v10->r.eventTime = *(_DWORD *)&buf[v11];
      v7 = v11 + 4;
      firstFreeEnt = *p_nextFree;
    }
    while ( *p_nextFree );
  }
}

/*
==============
G_DemoMP_SaveFreeEntities
==============
*/
__int64 G_DemoMP_SaveFreeEntities(unsigned __int8 *buf)
{
  gentity_s *firstFreeEnt; 
  __int64 v3; 
  unsigned int v4; 
  gentity_s *lastFreeEnt; 
  gentity_s *v6; 
  __int64 v7; 
  gentity_s **p_nextFree; 
  gentity_s *nextFree; 

  firstFreeEnt = level.firstFreeEnt;
  if ( buf )
    *(_QWORD *)buf = level.firstFreeEnt;
  if ( firstFreeEnt )
  {
    if ( buf )
      *((_DWORD *)buf + 2) = firstFreeEnt->r.eventTime;
    v3 = 12i64;
    v4 = 20;
  }
  else
  {
    v3 = 8i64;
    v4 = 16;
  }
  lastFreeEnt = level.lastFreeEnt;
  if ( buf )
    *(_QWORD *)&buf[v3] = level.lastFreeEnt;
  if ( lastFreeEnt )
  {
    if ( buf )
      *(_DWORD *)&buf[v4] = lastFreeEnt->r.eventTime;
    v4 += 4;
  }
  v6 = level.firstFreeEnt;
  if ( level.firstFreeEnt )
  {
    v7 = v4;
    do
    {
      p_nextFree = &v6->nextFree;
      nextFree = v6->nextFree;
      if ( buf )
        *(_QWORD *)&buf[v7] = nextFree;
      v4 += 8;
      v7 += 8i64;
      if ( nextFree )
      {
        if ( buf )
          *(_DWORD *)&buf[v7] = nextFree->r.eventTime;
        v4 += 4;
        v7 += 4i64;
      }
      v6 = *p_nextFree;
    }
    while ( *p_nextFree );
  }
  return v4;
}

/*
==============
G_UtilsMP_DObjLoad
==============
*/

void __fastcall G_UtilsMP_DObjLoad(gentity_s *ent)
{
  G_UtilsMP_DObjUpdate_Internal(ent);
}

/*
==============
G_UtilsMP_DObjUpdate_Internal
==============
*/
void G_UtilsMP_DObjUpdate_Internal(gentity_s *ent)
{
  const DObj *ServerDObjForEnt; 
  XAnimTree *v3; 
  bool v4; 
  int number; 
  const char *v6; 
  const char *v7; 
  characterInfo_t *v8; 
  int v9; 
  GWeaponMap *Instance; 
  int v11; 
  Vehicle *vehicle; 
  int v13; 
  characterInfo_t *v14; 
  int v15; 
  GWeaponMap *v16; 
  int v17; 
  Vehicle *v18; 
  entityType_s eType; 
  __int64 EntCorpseIndex; 
  char *v21; 
  GWeaponMap *v22; 
  int v23; 
  Vehicle *v24; 
  __int64 AgentCorpseIndex; 
  characterInfo_t *p_ci; 
  GWeaponMap *v27; 
  int v28; 
  Vehicle *v29; 
  int v30; 
  Vehicle *v31; 
  __int16 scriptMoverType; 
  unsigned int model; 
  GUtils *Utils; 
  Vehicle *v35; 
  entityType_s v36; 
  const XModel *v37; 
  entityType_s v38; 
  __int16 v39; 
  scr_string_t *attachTagNames; 
  int v41; 
  unsigned __int16 *attachModelNames; 
  int v43; 
  scr_string_t v44; 
  bool v45; 
  const XModel *v46; 
  entityType_s v47; 
  bool v48; 
  GUtils *v49; 
  Vehicle *v50; 
  __int64 attachIgnoreCollision; 
  __int64 attachIgnoreCollisiona; 
  __int64 v53; 
  BOOL v54; 
  unsigned __int16 outNumModels[2]; 
  int v56; 
  unsigned int scriptableIndex; 
  XAnimTree *tree; 
  DObjModel outDObjModels[254]; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( ServerDObjForEnt )
    v3 = DObjGetTree(ServerDObjForEnt);
  else
    v3 = NULL;
  v4 = ent->s.lerp.pos.trType == TR_ANIMATED_MOVER;
  tree = v3;
  if ( v4 || ent->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( ent->s.eType != ET_SCRIPTMOVER )
    {
      number = ent->s.number;
      v6 = SL_ConvertToString(ent->classname);
      v7 = SL_ConvertToString(ent->targetname);
      v54 = ScriptableSv_GetScriptableIndexForEntity(ent) != -1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 629, ASSERT_TYPE_ASSERT, "((!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) && !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos )) || (ent->s.eType == ET_SCRIPTMOVER))", "%s\n\tAnimated trajectory dobj check: trpos %d, trapos %d, enttype %d, scriptable %d, targetname %s, classname %s, entnum %d", "(!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) && !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos )) || (ent->s.eType == ET_SCRIPTMOVER)", ent->s.lerp.pos.trType, ent->s.lerp.apos.trType, ent->s.eType, v54, v7, v6, number) )
        __debugbreak();
    }
  }
  G_Utils_DObjSafeFree(ent);
  if ( Com_GetServerDObjForEnt(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 632, ASSERT_TYPE_ASSERT, "( Com_GetServerDObjForEnt( ent ) == 0 )", (const char *)&queryFormat, "Com_GetServerDObjForEnt( ent ) == NULL") )
    __debugbreak();
  if ( ent->client )
  {
    if ( Com_GetServerDObjForEnt(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 178, ASSERT_TYPE_ASSERT, "( Com_GetServerDObjForEnt( ent ) == 0 )", (const char *)&queryFormat, "Com_GetServerDObjForEnt( ent ) == NULL") )
      __debugbreak();
    Profile_Begin(353);
    G_ActiveMP_UpdateClientInfo(ent);
    Profile_EndInternal(NULL);
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v8 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)ent->s.clientNum);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 188, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    Profile_Begin(364);
    v9 = ent->attachIgnoreCollision;
    Instance = GWeaponMap::GetInstance();
    BG_AnimationMP_UpdatePlayerDObj(LOCAL_CLIENT_INVALID, NULL, Instance, &ent->s, v8, v9);
    Profile_EndInternal(NULL);
    v11 = SV_Game_DObjExists(ent);
    vehicle = ent->vehicle;
    v13 = v11;
    if ( vehicle )
      G_Vehicle_InitBoneTags(vehicle);
LABEL_65:
    G_UpdateTagInfoOfChildren(ent, v13);
    return;
  }
  if ( ent->agent )
  {
    if ( Com_GetServerDObjForEnt(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 203, ASSERT_TYPE_ASSERT, "(Com_GetServerDObjForEnt( ent ) == 0)", (const char *)&queryFormat, "Com_GetServerDObjForEnt( ent ) == NULL") )
      __debugbreak();
    Profile_Begin(352);
    SV_AgentUpdateInfo(ent);
    Profile_EndInternal(NULL);
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v14 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)ent->s.clientNum);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 213, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( v14->pXAnimTree )
    {
      Profile_Begin(364);
      v15 = ent->attachIgnoreCollision;
      v16 = GWeaponMap::GetInstance();
      BG_AnimationMP_UpdatePlayerDObj(LOCAL_CLIENT_INVALID, NULL, v16, &ent->s, v14, v15);
      Profile_EndInternal(NULL);
    }
    v17 = SV_Game_DObjExists(ent);
    v18 = ent->vehicle;
    v13 = v17;
    if ( v18 )
      G_Vehicle_InitBoneTags(v18);
    goto LABEL_65;
  }
  eType = ent->s.eType;
  switch ( eType )
  {
    case ET_PLAYER_CORPSE:
      if ( Com_GetServerDObjForEnt(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 233, ASSERT_TYPE_ASSERT, "(Com_GetServerDObjForEnt( ent ) == 0)", (const char *)&queryFormat, "Com_GetServerDObjForEnt( ent ) == NULL") )
        __debugbreak();
      EntCorpseIndex = G_PlayerCorpseMP_GetEntCorpseIndex(ent);
      v21 = (char *)GameScriptDataMP::GetGameScriptDataMP() + 14848 * EntCorpseIndex;
      Profile_Begin(364);
      LODWORD(EntCorpseIndex) = ent->attachIgnoreCollision;
      v22 = GWeaponMap::GetInstance();
      BG_AnimationMP_UpdatePlayerDObj(LOCAL_CLIENT_INVALID, NULL, v22, &ent->s, (characterInfo_t *)(v21 + 200), EntCorpseIndex);
      Profile_EndInternal(NULL);
      v23 = SV_Game_DObjExists(ent);
      v24 = ent->vehicle;
      v13 = v23;
      if ( v24 )
        G_Vehicle_InitBoneTags(v24);
      goto LABEL_65;
    case ET_AGENT_CORPSE:
      if ( Com_GetServerDObjForEnt(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 254, ASSERT_TYPE_ASSERT, "(Com_GetServerDObjForEnt( ent ) == 0)", (const char *)&queryFormat, "Com_GetServerDObjForEnt( ent ) == NULL") )
        __debugbreak();
      AgentCorpseIndex = G_PlayerCorpseMP_GetAgentCorpseIndex(ent);
      p_ci = &GameScriptDataMP::GetGameScriptDataMP()->agentCorpseInfo[AgentCorpseIndex].ci;
      Profile_Begin(364);
      v27 = GWeaponMap::GetInstance();
      BG_AnimationMP_UpdateAgentCorpseDObj(LOCAL_CLIENT_INVALID, NULL, v27, &ent->s, p_ci);
      Profile_EndInternal(NULL);
      v28 = SV_Game_DObjExists(ent);
      v29 = ent->vehicle;
      v13 = v28;
      if ( v29 )
        G_Vehicle_InitBoneTags(v29);
      goto LABEL_65;
    case ET_ITEM:
      G_UtilsMP_UpdateWeaponDobj(ent);
      if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
        __debugbreak();
      if ( GUtils::ms_gUtils->ShouldCreateEntityPhysicsOnInit(GUtils::ms_gUtils, ent) )
        G_Utils_CreateEntityPhysics(ent);
      G_Utils_UpdateEntityDObjScriptable(ent);
      v30 = SV_Game_DObjExists(ent);
      v31 = ent->vehicle;
      v13 = v30;
      if ( v31 )
        G_Vehicle_InitBoneTags(v31);
      goto LABEL_65;
    case ET_MISSILE:
      G_UtilsMP_MissileDobjUpdate(ent);
      return;
    case ET_SCRIPTMOVER:
      scriptMoverType = ent->s.un.scriptMoverType;
      switch ( scriptMoverType )
      {
        case 4:
          G_UtilsMP_UpdateViewArmsDobj(ent);
          return;
        case 6:
          G_UtilsMP_UpdateWeaponDobj(ent);
          G_Utils_DObjScriptableSafeFree(ent);
          return;
        case 8:
          G_UtilsMP_UpdateAvatarDobj(ent, v3);
          return;
      }
      break;
  }
  if ( ScriptableSv_TryGetNonReservedIndexForEntity(ent, &scriptableIndex) )
  {
    G_UtilsMP_ScriptableDobjUpdate(ent, scriptableIndex);
    return;
  }
  model = ent->model;
  if ( !ent->model )
  {
    if ( G_XCompositeModel_GetIndex(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 703, ASSERT_TYPE_ASSERT, "(G_XCompositeModel_GetIndex( ent ) == 0)", "%s\n\tWe shouldn't have a composite model if our modelIndex is 0.", "G_XCompositeModel_GetIndex( ent ) == 0") )
      __debugbreak();
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 704, ASSERT_TYPE_ASSERT, "(tree == 0)", "%s\n\tThe animation tree will need to have been de-allocated before this point or leaks will occur.", "tree == NULL") )
      __debugbreak();
    Utils = GUtils::GetUtils();
    if ( Utils->ShouldCreateEntityPhysicsOnInit(Utils, ent) )
      G_Utils_CreateEntityPhysics(ent);
    G_Utils_DObjScriptableSafeFree(ent);
    v35 = ent->vehicle;
    if ( v35 )
      G_Vehicle_InitBoneTags(v35);
    G_UpdateTagInfoOfChildren(ent, 0);
    G_UtilsMP_UpdateEntityBox(ent);
    if ( ent->vehicle )
    {
      v36 = ent->s.eType;
      if ( v36 != ET_VEHICLE )
      {
        LODWORD(v53) = 14;
        LODWORD(attachIgnoreCollision) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 718, ASSERT_TYPE_ASSERT, "( ent->s.eType ) == ( ET_VEHICLE )", "ent->s.eType == ET_VEHICLE\n\t%i, %i", attachIgnoreCollision, v53) )
          __debugbreak();
      }
      G_Vehicle_UpdateScriptablePlayerUseCache(ent);
    }
    return;
  }
  outNumModels[0] = 0;
  if ( G_XCompositeModel_GetIndex(ent) <= 0 )
  {
    v37 = G_Utils_GetModel(model);
    if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 736, ASSERT_TYPE_ASSERT, "( model )", (const char *)&queryFormat, "model") )
      __debugbreak();
    DObjInitModel(v37, (scr_string_t)0, 0, 0, NULL, &outDObjModels[outNumModels[0]++]);
    if ( model >= 0x800 )
    {
      LODWORD(v53) = 2048;
      LODWORD(attachIgnoreCollisiona) = model;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 558, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( 2048 )", "modelIndex doesn't index MAX_MODEL_GAME_CACHE\n\t%i not in [0, %i)", attachIgnoreCollisiona, v53) )
        __debugbreak();
    }
    v38 = ent->s.eType;
    if ( v38 == ET_FIRST )
      goto LABEL_111;
    if ( v38 == ET_SCRIPTMOVER )
    {
      v39 = ent->s.un.scriptMoverType;
      if ( (unsigned __int16)(v39 - 3) > 3u && (!ent->s.staticState.player.stowedWeaponHandle.m_mapEntryId || v39 == 8) )
        ent->s.lerp.u.anonymous.data[1] = model;
      goto LABEL_112;
    }
    if ( ((v38 - 11) & 0xFFED) != 0 || v38 == ET_EVENTS )
    {
      if ( ((v38 - 12) & 0xFFFD) == 0 )
        ent->s.un.vehicleXModel = model;
    }
    else
    {
LABEL_111:
      ent->s.staticState.general.xmodel = model;
    }
LABEL_112:
    v56 = 0;
    attachTagNames = ent->attachTagNames;
    v41 = 1;
    attachModelNames = ent->attachModelNames;
    do
    {
      v43 = *attachModelNames;
      if ( !*attachModelNames )
        break;
      if ( outNumModels[0] >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 753, ASSERT_TYPE_ASSERT, "( numModels < ( DOBJ_MAX_PARTS ) )", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
        __debugbreak();
      v44 = *attachTagNames;
      v45 = (v41 & ent->attachIgnoreCollision) != 0;
      v46 = G_Utils_GetModel(v43);
      DObjInitModel(v46, v44, v45, 0, NULL, &outDObjModels[outNumModels[0]]);
      if ( !outDObjModels[outNumModels[0]].model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 755, ASSERT_TYPE_ASSERT, "( dobjModels[numModels].model )", (const char *)&queryFormat, "dobjModels[numModels].model") )
        __debugbreak();
      if ( !*attachTagNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 756, ASSERT_TYPE_ASSERT, "( ent->attachTagNames[subModelIndex] != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "ent->attachTagNames[subModelIndex] != NULL_SCR_STRING") )
        __debugbreak();
      ++attachModelNames;
      ++outNumModels[0];
      v41 = __ROL4__(v41, 1);
      ++attachTagNames;
      ++v56;
    }
    while ( v56 < 28 );
    goto LABEL_124;
  }
  G_XCompositeModel_DObjInit(ent, 254, outNumModels, outDObjModels);
LABEL_124:
  v47 = ent->s.eType;
  v48 = ((v47 - 1) & 0xFFED) == 0 && v47 != ET_ITEM;
  Com_ServerDObjCreate(outDObjModels, outNumModels[0], tree, ent->s.number, v48);
  v49 = GUtils::GetUtils();
  if ( v49->ShouldCreateEntityPhysicsOnInit(v49, ent) )
    G_Utils_CreateEntityPhysics(ent);
  G_Utils_UpdateEntityDObjScriptable(ent);
  v50 = ent->vehicle;
  if ( v50 )
    G_Vehicle_InitBoneTags(v50);
  G_UpdateTagInfoOfChildren(ent, 1);
  G_UtilsMP_UpdateEntityBox(ent);
  if ( ent->vehicle )
  {
    G_Vehicle_UpdateScriptablePlayerUseCache(ent);
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    BG_VehicleAnim_OnDobjUpdate(GVehicles::ms_gVehiclesSystem, &ent->s);
  }
}

/*
==============
G_UtilsMP_GetViewArmsModel
==============
*/
XModel *G_UtilsMP_GetViewArmsModel(const int clientNum)
{
  clientState_t *ClientState; 
  ClientCustomizationInfo *p_outCustomizationInfo; 
  const char *DefaultModelNameForCustomization; 
  GUtils *v5; 
  ClientCustomizationInfo outCustomizationInfo; 

  if ( clientNum == -1 || !SV_ClientMP_IsClientConnected(clientNum) )
  {
    Com_PrintError(15, "G_UtilsMP_GetViewArmsModel: Tried to update view arms model for disconnected client %d. Script should have deleted the 'script_arms'!\n", (unsigned int)clientNum);
    BG_Customization_SetDefaultCustomization(&outCustomizationInfo);
    p_outCustomizationInfo = &outCustomizationInfo;
  }
  else
  {
    ClientState = G_MainMP_GetClientState(clientNum);
    if ( !ClientState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 286, ASSERT_TYPE_ASSERT, "( ( clientState != nullptr ) )", "%s\n\t( clientState ) = %p", "( clientState != nullptr )", NULL) )
      __debugbreak();
    p_outCustomizationInfo = &ClientState->customization;
  }
  DefaultModelNameForCustomization = BG_Customization_GetDefaultModelNameForCustomization(CUSTOMIZATION_TYPE_VIEWHANDS, p_outCustomizationInfo);
  if ( !DefaultModelNameForCustomization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 291, ASSERT_TYPE_ASSERT, "(defaultModel)", (const char *)&queryFormat, "defaultModel") )
    __debugbreak();
  if ( !*DefaultModelNameForCustomization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 292, ASSERT_TYPE_ASSERT, "(defaultModel[0] != '\\0')", (const char *)&queryFormat, "defaultModel[0] != '\\0'") )
    __debugbreak();
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v5 = GUtils::ms_gUtils;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 296, ASSERT_TYPE_ASSERT, "( ( utils != nullptr ) )", "%s\n\t( utils ) = %p", "( utils != nullptr )", GUtils::ms_gUtils) )
    __debugbreak();
  if ( v5->IsTransientCustomizationModel(v5, DefaultModelNameForCustomization) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 297, ASSERT_TYPE_ASSERT, "( !utils->IsTransientCustomizationModel( defaultModel ) )", (const char *)&queryFormat, "!utils->IsTransientCustomizationModel( defaultModel )") )
    __debugbreak();
  return SV_Game_GetXModel(DefaultModelNameForCustomization);
}

/*
==============
G_UtilsMP_GetWeaponWorldModels
==============
*/
XModel *G_UtilsMP_GetWeaponWorldModels(const Weapon *r_weapon)
{
  const WeaponDef *v2; 
  XModel *defaultWorldModel; 
  const char *v4; 
  const WeaponCompleteDef *v5; 
  const WeaponDef *v10; 
  Weapon result; 
  Weapon weapon; 

  v2 = BG_WeaponDef(r_weapon, 0);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 307, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( BG_WeaponHasStreamedModels(r_weapon) )
  {
    defaultWorldModel = v2->defaultWorldModel;
    if ( defaultWorldModel )
      return defaultWorldModel;
    v4 = "G_UtilsMP_GetWeaponWorldModels: Can't set a transient weapon model on the server for weapon %s\n";
  }
  else
  {
    defaultWorldModel = v2->worldModel;
    if ( defaultWorldModel )
      return defaultWorldModel;
    v4 = "G_UtilsMP_GetWeaponWorldModels: Weapon %s does not have a world model. Using the default weapon model.\n";
  }
  v5 = BG_WeaponCompleteDef(r_weapon, 0);
  Com_PrintError(15, v4, v5->szInternalName);
  _RAX = G_Weapon_GetWeaponForName(&result, "defaultweapon");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0C8h+weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0C8h+weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0C8h+weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( BG_WeaponHasStreamedModels(&weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 329, ASSERT_TYPE_ASSERT, "(!BG_WeaponHasStreamedModels( defaultWeapon ))", (const char *)&queryFormat, "!BG_WeaponHasStreamedModels( defaultWeapon )") )
    __debugbreak();
  v10 = BG_WeaponDef(&weapon, 0);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 332, ASSERT_TYPE_ASSERT, "(defaultWeapDef)", (const char *)&queryFormat, "defaultWeapDef") )
    __debugbreak();
  defaultWorldModel = v10->worldModel;
  if ( !defaultWorldModel )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE88E0, 652i64, "defaultweapon");
    return 0i64;
  }
  return defaultWorldModel;
}

/*
==============
G_UtilsMP_MissileDobjUpdate
==============
*/
void G_UtilsMP_MissileDobjUpdate(gentity_s *ent)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const XModel *v4; 
  int v5; 
  Vehicle *vehicle; 
  int v7; 
  DObjModel dobjModels; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 480, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 481, ASSERT_TYPE_ASSERT, "( ent->s.eType == ET_MISSILE )", (const char *)&queryFormat, "ent->s.eType == ET_MISSILE") )
    __debugbreak();
  if ( Com_GetServerDObjForEnt(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 482, ASSERT_TYPE_ASSERT, "(Com_GetServerDObjForEnt( ent ) == nullptr)", "%s\n\tOld DObj should have been freed", "Com_GetServerDObjForEnt( ent ) == nullptr") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
  v4 = BG_ProjectileModel(WeaponForEntity, ent->s.inAltWeaponMode);
  if ( v4 )
  {
    DObjInitModel(v4, (scr_string_t)0, 0, 0, NULL, &dobjModels);
    Com_ServerDObjCreate(&dobjModels, 1u, ent->pAnimTree, ent->s.number, 0);
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    if ( GUtils::ms_gUtils->ShouldCreateEntityPhysicsOnInit(GUtils::ms_gUtils, ent) )
      G_Utils_CreateEntityPhysics(ent);
  }
  G_Utils_UpdateEntityDObjScriptable(ent);
  v5 = SV_Game_DObjExists(ent);
  vehicle = ent->vehicle;
  v7 = v5;
  if ( vehicle )
    G_Vehicle_InitBoneTags(vehicle);
  G_UpdateTagInfoOfChildren(ent, v7);
}

/*
==============
G_UtilsMP_ScriptableDobjUpdate
==============
*/
void G_UtilsMP_ScriptableDobjUpdate(gentity_s *ent, const unsigned int scriptableIndex)
{
  const XModel *CurrentModel; 
  const XCompositeModelDef *CurrentCompositeModel; 
  GUtils *v6; 
  bool v7; 
  int v8; 
  Vehicle *vehicle; 
  int v10; 
  __int64 outNumModels; 
  DObjModel outDObjModels; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 513, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( Com_GetServerDObjForEnt(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 514, ASSERT_TYPE_ASSERT, "(Com_GetServerDObjForEnt( ent ) == 0)", "%s\n\tOld DObj should have been freed", "Com_GetServerDObjForEnt( ent ) == NULL") )
    __debugbreak();
  CurrentModel = ScriptableSv_GetCurrentModel(scriptableIndex);
  CurrentCompositeModel = ScriptableSv_GetCurrentCompositeModel(scriptableIndex);
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v6 = GUtils::ms_gUtils;
  if ( CurrentModel || CurrentCompositeModel )
  {
    LOWORD(outNumModels) = 0;
    if ( CurrentCompositeModel )
    {
      G_XCompositeModel_DObjInitScriptable(CurrentCompositeModel, 0xFEu, ent, (unsigned __int16 *)&outNumModels, &outDObjModels);
    }
    else
    {
      if ( !CurrentModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 530, ASSERT_TYPE_ASSERT, "(scriptableModel != nullptr)", (const char *)&queryFormat, "scriptableModel != nullptr", outNumModels) )
        __debugbreak();
      LOWORD(outNumModels) = 1;
      DObjInitModel(CurrentModel, (scr_string_t)0, 0, 0, NULL, &outDObjModels);
    }
    Com_ServerDObjCreate(&outDObjModels, outNumModels, ent->pAnimTree, ent->s.number, 0);
    v7 = v6->ShouldCreateEntityPhysicsOnInit(v6, ent);
  }
  else
  {
    if ( ent->r.modelType != 5 )
      goto LABEL_23;
    v7 = GUtils::ms_gUtils->ShouldCreateEntityPhysicsOnInit(GUtils::ms_gUtils, ent);
  }
  if ( v7 )
    G_Utils_CreateEntityPhysics(ent);
LABEL_23:
  v8 = SV_Game_DObjExists(ent);
  vehicle = ent->vehicle;
  v10 = v8;
  if ( vehicle )
    G_Vehicle_InitBoneTags(vehicle);
  G_UpdateTagInfoOfChildren(ent, v10);
}

/*
==============
G_UtilsMP_SpawnPlayerClone
==============
*/
gentity_s *G_UtilsMP_SpawnPlayerClone()
{
  unsigned int m_characterCount; 
  unsigned int v1; 
  gentity_s *v2; 
  LerpEntityState *p_lerp; 
  int v4; 
  __int16 EntityIndex; 
  gentity_s *result; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v1 = level.currentPlayerClone + m_characterCount;
  level.currentPlayerClone = (level.currentPlayerClone + 1) % (signed int)ComCharacterLimits::ms_gameData.m_clientCorpseCount;
  v2 = &level.gentities[v1];
  p_lerp = &v2->s.lerp;
  if ( v2 == (gentity_s *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 280, ASSERT_TYPE_ASSERT, "(sourceFlags)", (const char *)&queryFormat, "sourceFlags") )
    __debugbreak();
  v4 = ~p_lerp->eFlags.m_flags[0] & 4;
  EntityIndex = G_GetEntityIndex(v2);
  if ( G_IsEntityInUse(EntityIndex) )
  {
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v2);
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->InitGentity(GUtils::ms_gUtils, v2);
  result = v2;
  p_lerp->eFlags.m_flags[0] = v4;
  return result;
}

/*
==============
G_UtilsMP_UpdateAvatarDobj
==============
*/
void G_UtilsMP_UpdateAvatarDobj(gentity_s *ent, XAnimTree *const tree)
{
  unsigned __int16 model; 
  int v5; 
  const XModel *v6; 
  int clientNum; 
  unsigned __int16 v8; 
  const XModel *v9; 
  int v10; 
  Vehicle *vehicle; 
  int v12; 
  DObjModel dobjModels; 
  DObjModel outDObjModel; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 416, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( Com_GetServerDObjForEnt(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 417, ASSERT_TYPE_ASSERT, "(Com_GetServerDObjForEnt( ent ) == nullptr)", "%s\n\tOld Dobj should have been freed", "Com_GetServerDObjForEnt( ent ) == nullptr") )
    __debugbreak();
  if ( ent->s.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 418, ASSERT_TYPE_ASSERT, "( ent->s.eType == ET_SCRIPTMOVER )", (const char *)&queryFormat, "ent->s.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  if ( ent->s.un.scriptMoverType != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 419, ASSERT_TYPE_ASSERT, "( ent->s.un.scriptMoverType == ScriptMoverType_Avatar )", (const char *)&queryFormat, "ent->s.un.scriptMoverType == ScriptMoverType_Avatar") )
    __debugbreak();
  model = ent->model;
  if ( model )
  {
    v5 = model;
    v6 = G_Utils_GetModel(model);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 428, ASSERT_TYPE_ASSERT, "( bodyModel )", (const char *)&queryFormat, "bodyModel") )
      __debugbreak();
    DObjInitModel(v6, (scr_string_t)0, 1, 0, NULL, &dobjModels);
    clientNum = ent->s.staticState.mover.u.clientNum;
    v8 = 1;
    ent->s.lerp.u.anonymous.data[1] = v5;
    if ( clientNum )
    {
      v9 = G_Utils_GetModel(clientNum);
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 440, ASSERT_TYPE_ASSERT, "( headModel )", (const char *)&queryFormat, "headModel") )
        __debugbreak();
      DObjInitModel(v9, (scr_string_t)0, 1, 0, NULL, &outDObjModel);
      v8 = 2;
    }
    Com_ServerDObjCreate(&dobjModels, v8, tree, ent->s.number, 0);
  }
  G_Utils_UpdateEntityDObjScriptable(ent);
  v10 = SV_Game_DObjExists(ent);
  vehicle = ent->vehicle;
  v12 = v10;
  if ( vehicle )
    G_Vehicle_InitBoneTags(vehicle);
  G_UpdateTagInfoOfChildren(ent, v12);
}

/*
==============
G_UtilsMP_UpdateEntityBox
==============
*/
void G_UtilsMP_UpdateEntityBox(gentity_s *ent)
{
  const DObj *ServerDObjForEnt; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 152, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( (ent->flags.m_flags[1] & 0x10) != 0 )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
    if ( ServerDObjForEnt )
    {
      DObjGetBounds(ServerDObjForEnt, &ent->r.box);
    }
    else
    {
      *(_QWORD *)ent->r.box.midPoint.v = 0i64;
      ent->r.box.midPoint.v[2] = 0.0;
      ent->r.box.halfSize.v[0] = -3.4028235e38;
      ent->r.box.halfSize.v[1] = -3.4028235e38;
      ent->r.box.halfSize.v[2] = -3.4028235e38;
    }
  }
}

/*
==============
G_UtilsMP_UpdateViewArmsDobj
==============
*/
void G_UtilsMP_UpdateViewArmsDobj(gentity_s *ent)
{
  XModel *ViewArmsModel; 
  Vehicle *vehicle; 
  const DObj *v4; 
  int v5; 
  Vehicle *v6; 
  int v7; 
  ScriptableDef *outScriptableDef; 
  DObjModel dobjModels; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 349, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 350, ASSERT_TYPE_ASSERT, "( ent->s.eType == ET_SCRIPTMOVER )", (const char *)&queryFormat, "ent->s.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  if ( ent->s.un.scriptMoverType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 351, ASSERT_TYPE_ASSERT, "( ent->s.un.scriptMoverType == ScriptMoverType_ServerArms )", (const char *)&queryFormat, "ent->s.un.scriptMoverType == ScriptMoverType_ServerArms") )
    __debugbreak();
  if ( Com_GetServerDObjForEnt(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 352, ASSERT_TYPE_ASSERT, "(Com_GetServerDObjForEnt( ent ) == 0)", "%s\n\tOld DObj should have been freed", "Com_GetServerDObjForEnt( ent ) == NULL") )
    __debugbreak();
  ViewArmsModel = G_UtilsMP_GetViewArmsModel(ent->s.staticState.mover.u.clientNum);
  if ( !ViewArmsModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 362, ASSERT_TYPE_ASSERT, "( viewArmsModel != nullptr )", (const char *)&queryFormat, "viewArmsModel != nullptr") )
    __debugbreak();
  if ( ViewArmsModel->scriptableMoverDef )
  {
    vehicle = ent->vehicle;
    if ( vehicle )
      G_Vehicle_InitBoneTags(vehicle);
    G_UpdateTagInfoOfChildren(ent, 0);
    Com_PrintError(15, "G_UtilsMP_UpdateViewArmsDobj: Script mover arms do not support models with scriptables. XModel '%s' used by script_arms entity %u has a scriptable defined!\n", ViewArmsModel->name, (unsigned int)ent->s.number);
  }
  else
  {
    DObjInitModel(ViewArmsModel, (scr_string_t)0, 0, 0, NULL, &dobjModels);
    v4 = Com_ServerDObjCreate(&dobjModels, 1u, NULL, ent->s.number, 0);
    if ( ScriptableCommon_GetScriptableDefFromDObj(v4, (const ScriptableDef **)&outScriptableDef) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 376, ASSERT_TYPE_ASSERT, "(!ScriptableCommon_GetScriptableDefFromDObj( obj, &scriptableDef ))", (const char *)&queryFormat, "!ScriptableCommon_GetScriptableDefFromDObj( obj, &scriptableDef )") )
      __debugbreak();
    G_Utils_SetModel(ent, ViewArmsModel->name);
    v5 = SV_Game_DObjExists(ent);
    v6 = ent->vehicle;
    v7 = v5;
    if ( v6 )
      G_Vehicle_InitBoneTags(v6);
    G_UpdateTagInfoOfChildren(ent, v7);
  }
}

/*
==============
G_UtilsMP_UpdateWeaponDobj
==============
*/
void G_UtilsMP_UpdateWeaponDobj(gentity_s *ent)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const XModel *WeaponWorldModels; 
  DObjModel *outDObjModel; 
  DObjModel dobjModels; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 393, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( Com_GetServerDObjForEnt(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 394, ASSERT_TYPE_ASSERT, "(Com_GetServerDObjForEnt( ent ) == 0)", "%s\n\tOld DObj should have been freed", "Com_GetServerDObjForEnt( ent ) == NULL") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
  if ( (unsigned __int16)(WeaponForEntity->weaponIdx - 1) > 0x224u )
  {
    LODWORD(outDObjModel) = WeaponForEntity->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 397, ASSERT_TYPE_ASSERT, "( 1 ) <= ( r_weapon.weaponIdx ) && ( r_weapon.weaponIdx ) <= ( (550 - 1) )", "r_weapon.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", outDObjModel, 1, 549) )
      __debugbreak();
  }
  if ( !BG_WeaponDef(WeaponForEntity, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 400, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  WeaponWorldModels = G_UtilsMP_GetWeaponWorldModels(WeaponForEntity);
  if ( !WeaponWorldModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 403, ASSERT_TYPE_ASSERT, "( weaponModel )", (const char *)&queryFormat, "weaponModel") )
    __debugbreak();
  DObjInitModel(WeaponWorldModels, (scr_string_t)0, 0, 0, NULL, &dobjModels);
  Com_ServerDObjCreate(&dobjModels, 1u, NULL, ent->s.number, 0);
}

/*
==============
GUtilsMP::GetDebugTeamName
==============
*/
const char *GUtilsMP::GetDebugTeamName(GUtilsMP *this, const gentity_s *entity)
{
  gclient_s *client; 
  __int64 team; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1665, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  client = entity->client;
  if ( !client )
    return (char *)&queryFormat.fmt + 3;
  team = client->sess.cs.team;
  if ( (unsigned int)team >= 0xCB || (int)team < 0 )
    return "unknown";
  else
    return S_TEAMS_MP_DEBUG_STRINGS[team];
}

/*
==============
GUtilsMP::GetEntityTeam
==============
*/
__int64 GUtilsMP::GetEntityTeam(GUtilsMP *this, const gentity_s *entity)
{
  gclient_s *client; 
  sentient_s *sentient; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1642, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  client = entity->client;
  if ( client )
    return (unsigned int)client->sess.cs.team;
  if ( entity->agent )
  {
    sentient = entity->sentient;
    if ( sentient )
      return (unsigned int)sentient->eTeam;
  }
  return 0i64;
}

/*
==============
GUtilsMP::GetPIPElemField
==============
*/
bool GUtilsMP::GetPIPElemField(GUtilsMP *this, scrContext_t *scrContext, int entnum, int offset)
{
  return 0;
}

/*
==============
GUtilsMP::GetPlayersSpectatingPlayer
==============
*/
void GUtilsMP::GetPlayersSpectatingPlayer(const gentity_s *targetPlayer, unsigned int *outNumPlayers, unsigned __int16 *outPlayerEntIds)
{
  unsigned int v6; 
  unsigned int maxclients; 
  __int64 v8; 
  gclient_s *client; 

  if ( !outNumPlayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1946, ASSERT_TYPE_ASSERT, "(outNumPlayers)", (const char *)&queryFormat, "outNumPlayers") )
    __debugbreak();
  if ( !outPlayerEntIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1947, ASSERT_TYPE_ASSERT, "(outPlayerEntIds)", (const char *)&queryFormat, "outPlayerEntIds") )
    __debugbreak();
  v6 = 0;
  *outNumPlayers = 0;
  maxclients = level.maxclients;
  if ( level.maxclients )
  {
    v8 = 0i64;
    do
    {
      if ( g_entities[v8].r.isInUse )
      {
        client = g_entities[v8].client;
        if ( client )
        {
          if ( client->sess.sessionState == SESS_STATE_SPECTATOR && client->spectatorClient == targetPlayer->s.clientNum && !client->sess.isInKillcam )
            outPlayerEntIds[(*outNumPlayers)++] = truncate_cast<unsigned short,unsigned int>(v6);
        }
      }
      ++v6;
      ++v8;
    }
    while ( v6 < maxclients );
  }
}

/*
==============
GUtilsMP::GetTeamFromDebugString
==============
*/
__int64 GUtilsMP::GetTeamFromDebugString(GUtilsMP *this, const char *teamName)
{
  const char **v3; 
  unsigned int i; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  v3 = S_TEAMS_MP_DEBUG_STRINGS;
  for ( i = 0; i < 0xCB; ++i )
  {
    v5 = *v3;
    v6 = 0x7FFFFFFFi64;
    if ( !teamName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v7 = (const char *)(teamName - v5);
    while ( 1 )
    {
      v8 = (unsigned __int8)v5[(_QWORD)v7];
      v9 = v6;
      v10 = *(unsigned __int8 *)v5++;
      --v6;
      if ( !v9 )
        return i;
      if ( v8 != v10 )
      {
        v11 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v11 = v8;
        v8 = v11;
        v12 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v12 = v10;
        if ( v8 != v12 )
          break;
      }
      if ( !v8 )
        return i;
    }
    ++v3;
  }
  return 0i64;
}

/*
==============
GUtilsMP::GetWeaponWorldModels
==============
*/
XModel *GUtilsMP::GetWeaponWorldModels(GUtilsMP *this, const Weapon *r_weapon)
{
  return G_UtilsMP_GetWeaponWorldModels(r_weapon);
}

/*
==============
GUtilsMP::InitGentity
==============
*/
void GUtilsMP::InitGentity(GUtilsMP *this, gentity_s *e)
{
  bool v2; 
  __int16 EntityIndex; 
  __int16 v5; 
  __int64 v6; 
  unsigned __int16 number; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  const dvar_t *v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 

  v2 = e->r.isInUse == 0;
  e->nextFree = NULL;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1285, ASSERT_TYPE_ASSERT, "(!e->r.isInUse)", (const char *)&queryFormat, "!e->r.isInUse") )
    __debugbreak();
  EntityIndex = G_GetEntityIndex(e);
  v5 = EntityIndex;
  v6 = EntityIndex;
  if ( (unsigned int)EntityIndex >= 0x800 )
  {
    v14 = 2048;
    LODWORD(v12) = EntityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1287, ASSERT_TYPE_ASSERT, "(!G_IsEntityInUse( entnum ))", (const char *)&queryFormat, "!G_IsEntityInUse( entnum )") )
    __debugbreak();
  e->r.isInUse = 1;
  g_entityIsInUse[v5] = 1;
  e->s.number = v5;
  e->s.lerp.eFlags.m_flags[0] = 0;
  number = e->r.ownerNum.number;
  if ( number )
  {
    v8 = number;
    v9 = number - 1;
    if ( v9 >= 0x800 )
    {
      LODWORD(v13) = 2048;
      LODWORD(v12) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v10 = v8 - 1;
    if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v10] )
    {
      LODWORD(v13) = e->r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v13) )
        __debugbreak();
    }
    if ( e->r.ownerNum.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1294, ASSERT_TYPE_ASSERT, "(!e->r.ownerNum.isDefined())", (const char *)&queryFormat, "!e->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  e->r.eventTime = 0;
  e->s.otherEntityNum = 2047;
  e->r.eventTypeFlags = 0;
  e->birthTime = level.time;
  v11 = DCONST_DVARMPINT_g_defaultUsePriority;
  if ( !DCONST_DVARMPINT_g_defaultUsePriority && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_defaultUsePriority") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  e->hint.priority = v11->current.integer;
  memset_0(e->attachTagNames, 0, sizeof(e->attachTagNames));
  SV_EntitiesPartitioning_AddEntity(e->s.number);
}

/*
==============
GUtilsMP::IsStuck
==============
*/
bool GUtilsMP::IsStuck(GUtilsMP *this, const vec3_t *currentOrigin, const vec3_t *startVel, const vec3_t *startOrigin)
{
  bool result; 

  __asm
  {
    vmovss  xmm3, dword ptr [r8]
    vmovss  xmm4, dword ptr [r8+4]
    vmovaps [rsp+38h+var_28], xmm7
    vmulss  xmm7, xmm4, [rsp+38h+frametime]
    vmovaps [rsp+38h+var_38], xmm8
    vmulss  xmm8, xmm3, [rsp+38h+frametime]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm8, xmm0
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vmovss  xmm2, dword ptr [rdx]
    vdivss  xmm1, xmm1, xmm0
    vmovss  xmm0, dword ptr [rdx+4]
    vmulss  xmm5, xmm4, xmm1
    vmovaps [rsp+38h+var_18], xmm6
    vmulss  xmm6, xmm3, xmm1
    vsubss  xmm1, xmm0, dword ptr [r9+4]
    vsubss  xmm0, xmm2, dword ptr [r9]
    vmulss  xmm3, xmm1, xmm5
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm0, xmm8, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vmulss  xmm2, xmm7, xmm5
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, cs:__real@3e4ccccd
    vcomiss xmm4, xmm2
    vmovaps xmm7, [rsp+38h+var_28]
  }
  result = 0;
  __asm { vmovaps xmm8, [rsp+38h+var_38] }
  return result;
}

/*
==============
GUtilsMP::IsTransientCustomizationModel
==============
*/
bool GUtilsMP::IsTransientCustomizationModel(GUtilsMP *this, const char *modelName)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 849, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION )") )
    __debugbreak();
  return SV_TransientsMP_IsTransientModel(modelName);
}

/*
==============
GUtilsMP::MayActivateHoldEntity
==============
*/
bool GUtilsMP::MayActivateHoldEntity(GUtilsMP *this, const gentity_s *ent)
{
  __int16 EntityIndex; 
  sentient_s *sentient; 
  const dvar_t *v5; 
  int lastSpawnTime; 

  EntityIndex = G_GetEntityIndex(ent);
  if ( SV_ClientMP_IsTestClient(EntityIndex) && !G_Utils_IsAgent(ent) )
    return 0;
  if ( !ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1792, ASSERT_TYPE_ASSERT, "(ent->sentient != nullptr)", (const char *)&queryFormat, "ent->sentient != nullptr") )
    __debugbreak();
  sentient = ent->sentient;
  v5 = DVARINT_g_useholdspawndelay;
  lastSpawnTime = sentient->lastSpawnTime;
  if ( !DVARINT_g_useholdspawndelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useholdspawndelay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return level.time - lastSpawnTime >= v5->current.integer;
}

/*
==============
GUtilsMP::MayThrowbackGrenade
==============
*/
bool GUtilsMP::MayThrowbackGrenade(GUtilsMP *this, const gentity_s *ent, const gentity_s *grenade)
{
  team_t v6; 
  int number; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  const gentity_s *v11; 
  team_t v12; 
  bool result; 
  __int64 v14; 
  __int64 v15; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1700, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !grenade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1701, ASSERT_TYPE_ASSERT, "( grenade )", (const char *)&queryFormat, "grenade") )
    __debugbreak();
  v6 = this->GetEntityTeam(this, ent);
  if ( !EntHandle::isDefined(&grenade->r.ownerNum) )
    return 1;
  number = grenade->r.ownerNum.number;
  if ( (unsigned int)(number - 1) >= 0x7FF )
  {
    LODWORD(v14) = number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v14, 2047) )
      __debugbreak();
  }
  v8 = grenade->r.ownerNum.number;
  if ( (unsigned int)(v8 - 1) >= 0x800 )
  {
    LODWORD(v15) = 2048;
    LODWORD(v14) = v8 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v9 = v8 - 1;
  if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v9] )
  {
    LODWORD(v15) = grenade->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v15) )
      __debugbreak();
  }
  v10 = grenade->r.ownerNum.number;
  v11 = &g_entities[v10 - 1];
  if ( &g_entities[v10] == (gentity_s *)1456 )
    return 1;
  v12 = this->GetEntityTeam(this, &g_entities[v10 - 1]);
  if ( v6 != v12 )
    return 1;
  if ( (unsigned int)(v6 - 1) > 1 )
    return 1;
  if ( (unsigned int)(v12 - 1) > 1 )
    return 1;
  if ( ent == v11 )
    return 1;
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_scr_team_fftype, "scr_team_fftype") )
    return 1;
  result = Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS|0x80);
  if ( result )
    return 1;
  return result;
}

/*
==============
GUtilsMP::MayUseEntity
==============
*/
bool GUtilsMP::MayUseEntity(GUtilsMP *this, const gentity_s *ent, const gentity_s *useEnt)
{
  bool IsAgent; 
  __int16 number; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1761, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !useEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1762, ASSERT_TYPE_ASSERT, "( useEnt )", (const char *)&queryFormat, "useEnt") )
    __debugbreak();
  IsAgent = G_Utils_IsAgent(ent);
  number = useEnt->s.number;
  if ( IsAgent )
    return SV_AgentMayUseEnt(ent, number);
  else
    return G_Client_MayUseEnt(ent->client, number);
}

/*
==============
GUtilsMP::PlayerButtonsPressed
==============
*/
bool GUtilsMP::PlayerButtonsPressed(GUtilsMP *this, const gentity_s *ent, unsigned __int64 buttons)
{
  gagent_s *agent; 
  bool v6; 
  usercmd_s outUserCmd; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1580, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  agent = ent->agent;
  if ( agent )
  {
    v6 = (buttons & agent->cmd.buttons) == 0;
  }
  else
  {
    if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1588, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
      __debugbreak();
    G_Utils_GetClientCommonUserCommand(ent->client, &outUserCmd);
    v6 = (buttons & outUserCmd.buttons) == 0;
  }
  return !v6;
}

/*
==============
GUtilsMP::SetEntityPerk
==============
*/
void GUtilsMP::SetEntityPerk(GUtilsMP *this, const gentity_s *ent, unsigned int perkIndex)
{
  gclient_s *client; 
  gagent_s *agent; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1600, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = ent->client;
  if ( client )
  {
    BG_SetPerk(&client->sess.cs.perks, perkIndex);
  }
  else
  {
    agent = ent->agent;
    if ( agent )
      BG_SetPerk(&agent->agentState.perks, perkIndex);
  }
}

/*
==============
GUtilsMP::SetEntitySuit
==============
*/
void GUtilsMP::SetEntitySuit(GUtilsMP *this, const gentity_s *ent, unsigned int suitIndex)
{
  gclient_s *client; 
  gagent_s *agent; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1630, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = ent->client;
  if ( client )
  {
    client->sess.cs.suitIndex = suitIndex;
  }
  else
  {
    agent = ent->agent;
    if ( agent )
      agent->agentState.suitIndex = suitIndex;
  }
}

/*
==============
GUtilsMP::SetPIPElemField
==============
*/
bool GUtilsMP::SetPIPElemField(GUtilsMP *this, scrContext_t *scrContext, int entnum, int offset)
{
  return 0;
}

/*
==============
GUtilsMP::SetPlayerOrigin
==============
*/
void GUtilsMP::SetPlayerOrigin(GUtilsMP *this, gentity_s *ent, const vec3_t *origin, int zOffset, int teleport)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1812, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_ClientMP_SetClientOrigin(ent, origin, zOffset, teleport);
}

/*
==============
GUtilsMP::SetPlayerViewAngles
==============
*/
void GUtilsMP::SetPlayerViewAngles(GUtilsMP *this, gentity_s *ent, const vec3_t *angles)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1804, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_ClientMP_SetClientViewAngles(ent, angles);
}

/*
==============
GUtilsMP::ShouldCreateEntityPhysicsOnInit
==============
*/

bool __fastcall GUtilsMP::ShouldCreateEntityPhysicsOnInit(GUtilsMP *this, const gentity_s *ent)
{
  return GUtils::ShouldCreateEntityPhysicsOnInit_Internal(this, ent);
}

/*
==============
GUtilsMP::UnlinkUpdateCorpse
==============
*/
void GUtilsMP::UnlinkUpdateCorpse(GUtilsMP *this, gentity_s *corpseEnt)
{
  GameScriptDataMP *GameScriptDataMP; 
  bool *p_falling; 

  if ( !corpseEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1834, ASSERT_TYPE_ASSERT, "( corpseEnt )", (const char *)&queryFormat, "corpseEnt") )
    __debugbreak();
  GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
  if ( corpseEnt->s.eType == ET_AGENT_CORPSE )
    p_falling = &GameScriptDataMP->agentCorpseInfo[G_PlayerCorpseMP_GetAgentCorpseIndex(corpseEnt)].falling;
  else
    p_falling = &GameScriptDataMP->playerCorpseInfo[G_PlayerCorpseMP_GetEntCorpseIndex(corpseEnt)].falling;
  if ( *p_falling )
  {
    corpseEnt->s.lerp.pos.trType = TR_GRAVITY;
    corpseEnt->s.lerp.pos.trTime = level.time;
  }
  else
  {
    corpseEnt->s.lerp.pos.trType = TR_INTERPOLATE;
  }
}

/*
==============
GUtilsMP::UnsetEntityPerk
==============
*/
void GUtilsMP::UnsetEntityPerk(GUtilsMP *this, const gentity_s *ent, unsigned int perkIndex)
{
  gclient_s *client; 
  gagent_s *agent; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_utils_mp.cpp", 1610, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = ent->client;
  if ( client )
  {
    BG_UnsetPerk(&client->sess.cs.perks, perkIndex);
  }
  else
  {
    agent = ent->agent;
    if ( agent )
      BG_UnsetPerk(&agent->agentState.perks, perkIndex);
  }
}

