/*
==============
GScr_AddFieldsForAgent
==============
*/

void __fastcall GScr_AddFieldsForAgent(scrContext_t *scrContext)
{
  ?GScr_AddFieldsForAgent@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_SetAgentField
==============
*/

void __fastcall Scr_SetAgentField(scrContext_t *scrContext, gagent_s *agent, int offset)
{
  ?Scr_SetAgentField@@YAXAEAUscrContext_t@@PEAUgagent_s@@H@Z(scrContext, agent, offset);
}

/*
==============
Scr_GetAgentField
==============
*/

void __fastcall Scr_GetAgentField(scrContext_t *scrContext, gagent_s *agent, int offset)
{
  ?Scr_GetAgentField@@YAXAEAUscrContext_t@@PEAUgagent_s@@H@Z(scrContext, agent, offset);
}

/*
==============
AgentScr_ReadOnly
==============
*/
void AgentScr_ReadOnly(scrContext_t *scrContext, gagent_s *pSelf, const agent_fields_s *pField)
{
  const char *v4; 
  const char *v5; 

  v4 = SL_ConvertToString(*pField->name);
  v5 = j_va("agent field %s is read only.", v4);
  Scr_Error(COM_ERR_3536, scrContext, v5);
}

/*
==============
AgentScr_SetMaxHealth
==============
*/
void AgentScr_SetMaxHealth(scrContext_t *scrContext, gagent_s *pSelf, const agent_fields_s *pField)
{
  int Int; 
  unsigned int v6; 
  __int64 v7; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 106, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  Int = Scr_GetInt(scrContext, 0);
  pSelf->maxHealth = Int;
  if ( Int < 1 )
  {
    Int = 1;
    pSelf->maxHealth = 1;
  }
  if ( pSelf->playerState.stats[0] > Int )
    pSelf->playerState.stats[0] = Int;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)ComCharacterLimits::ms_gameData.m_clientCount > pSelf->agentState.entityNum )
    goto LABEL_27;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( pSelf->agentState.entityNum > (signed int)(ComCharacterLimits::ms_gameData.m_characterCount - 1) )
  {
LABEL_27:
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v6 = ComCharacterLimits::ms_gameData.m_characterCount - 1;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v7) = pSelf->agentState.entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 116, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentEntityIndexOffset() ) <= ( pSelf->agentState.entityNum ) && ( pSelf->agentState.entityNum ) <= ( ComCharacterLimits::GetCharacterMaxCount() - 1 )", "pSelf->agentState.entityNum not in [ComCharacterLimits::GetAgentEntityIndexOffset(), ComCharacterLimits::GetCharacterMaxCount() - 1]\n\t%i not in [%i, %i]", v7, ComCharacterLimits::ms_gameData.m_clientCount, v6) )
      __debugbreak();
  }
  g_entities[pSelf->agentState.entityNum].health = pSelf->playerState.stats[0];
  pSelf->playerState.stats[2] = pSelf->maxHealth;
}

/*
==============
AgentScr_SetTeam
==============
*/
void AgentScr_SetTeam(scrContext_t *scrContext, gagent_s *pSelf, const agent_fields_s *pField)
{
  scr_string_t ConstString; 
  team_t v6; 
  const scr_string_t **v7; 
  const scr_string_t **v8; 
  unsigned int i; 
  const char *v10; 
  const char *v11; 
  signed __int64 v12; 
  __int64 v13; 
  __int64 entityNum; 
  __int64 v15; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 131, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v6 = TEAM_ONE;
    v7 = &S_TEAMS_SP_SCR_STRINGS_15[1];
    while ( ConstString != **v7 )
    {
      ++v6;
      ++v7;
      if ( (unsigned int)v6 >= TEAM_FIVE )
      {
        if ( ConstString != scr_const.only_sky )
          goto LABEL_21;
        v6 = TEAM_ZERO;
        break;
      }
    }
  }
  else if ( ConstString == scr_const.freelook )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    v6 = TEAM_MP_NUM_TEAMS;
  }
  else
  {
    v6 = TEAM_ZERO;
    v8 = S_TEAMS_MP_SCR_STRINGS_15;
    for ( i = 0; i < 0xCB; ++i )
    {
      if ( ConstString == **v8 )
      {
        v6 = i;
        goto LABEL_23;
      }
      ++v8;
    }
    if ( ConstString != scr_const.none && ConstString != scr_const.neutral && ConstString != scr_const.only_sky )
    {
LABEL_21:
      v10 = SL_ConvertToString(ConstString);
      v11 = j_va("unknown team '%s'", v10);
      Scr_Error(COM_ERR_3537, scrContext, v11);
      return;
    }
  }
LABEL_23:
  v12 = pSelf - level.agents;
  if ( v12 < level.maxagents )
  {
    if ( pSelf->agentState.entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex(v12) )
    {
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      v13 = *(_QWORD *)&GStatic::ms_gameStatics;
      entityNum = (unsigned int)pSelf->agentState.entityNum;
      pSelf->agentState.team = v6;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 224i64))(v13, entityNum);
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 157, ASSERT_TYPE_ASSERT, "( characterInfo )", (const char *)&queryFormat, "characterInfo") )
        __debugbreak();
      *(_DWORD *)(v15 + 12) = v6;
    }
    else
    {
      Scr_Error(COM_ERR_3539, scrContext, "agent is not initialized");
    }
  }
  else
  {
    Scr_Error(COM_ERR_3538, scrContext, "agent is not pointing to the level.agents array");
  }
}

/*
==============
AgentScr_GetTeam
==============
*/
void AgentScr_GetTeam(scrContext_t *scrContext, gagent_s *pSelf, const agent_fields_s *pField)
{
  __int64 team; 
  const scr_string_t **v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 168, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  team = pSelf->agentState.team;
  if ( !(_DWORD)team )
  {
    Scr_AddConstString(scrContext, scr_const.none);
    return;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    if ( (int)team < 0 || (unsigned int)team >= 6 )
    {
      LODWORD(v9) = team;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 274, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_SP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v9) )
        __debugbreak();
    }
    v6 = &S_TEAMS_SP_SCR_STRINGS_15[team];
    if ( *v6 )
      goto LABEL_21;
    v7 = "( ( S_TEAMS_SP_SCR_STRINGS[team] ) )";
    v8 = 275;
  }
  else
  {
    if ( (int)team < 0 || (unsigned int)team >= 0xCB )
    {
      LODWORD(v9) = team;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 283, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_MP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v9) )
        __debugbreak();
    }
    v6 = &S_TEAMS_MP_SCR_STRINGS_15[team];
    if ( *v6 )
      goto LABEL_21;
    v7 = "( ( S_TEAMS_MP_SCR_STRINGS[team] ) )";
    v8 = 284;
  }
  LODWORD(v9) = team;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", v8, ASSERT_TYPE_ASSERT, v7, "( team ) = %i", v9) )
    __debugbreak();
LABEL_21:
  Scr_AddConstString(scrContext, **v6);
}

/*
==============
AgentScr_SetName
==============
*/
void AgentScr_SetName(scrContext_t *scrContext, gagent_s *pSelf, const agent_fields_s *pField)
{
  signed __int64 v5; 
  GConfigStrings *ConfigStringSystem; 
  unsigned int (__fastcall *GetLocalizedStringIndex)(GConfigStrings *, const char *); 
  scr_string_t ConstIString; 
  const char *v9; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 185, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  v5 = pSelf - level.agents;
  if ( v5 < level.maxagents )
  {
    if ( pSelf->agentState.entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex(v5) )
    {
      if ( Scr_GetType(scrContext, 0) )
      {
        if ( Scr_GetType(scrContext, 0) == VAR_ISTRING )
        {
          ConfigStringSystem = GConfigStrings::GetConfigStringSystem();
          GetLocalizedStringIndex = ConfigStringSystem->GetLocalizedStringIndex;
          ConstIString = Scr_GetConstIString(scrContext, 0);
          v9 = SL_ConvertToString(ConstIString);
          pSelf->agentState.name = GetLocalizedStringIndex(ConfigStringSystem, v9);
        }
        else
        {
          Scr_Error(COM_ERR_3542, scrContext, "agentname must be a localized string or undefined");
        }
      }
      else
      {
        pSelf->agentState.name = 0;
      }
    }
    else
    {
      Scr_Error(COM_ERR_3541, scrContext, "agent is not initialized");
    }
  }
  else
  {
    Scr_Error(COM_ERR_3540, scrContext, "agent is not pointing to the level.agents array");
  }
}

/*
==============
AgentScr_GetName
==============
*/
void AgentScr_GetName(scrContext_t *scrContext, gagent_s *pSelf, const agent_fields_s *pField)
{
  signed __int64 v5; 
  GConfigStrings *ConfigStringSystem; 
  char value[1024]; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 223, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  v5 = pSelf - level.agents;
  if ( v5 < level.maxagents )
  {
    if ( pSelf->agentState.entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex(v5) )
    {
      if ( pSelf->agentState.name )
      {
        ConfigStringSystem = GConfigStrings::GetConfigStringSystem();
        ConfigStringSystem->GetLocalizedStringName(ConfigStringSystem, pSelf->agentState.name, value, 1024);
        Scr_AddIString(scrContext, value);
      }
      else
      {
        Scr_AddUndefined(scrContext);
      }
    }
    else
    {
      Scr_Error(COM_ERR_3544, scrContext, "agent is not initialized");
    }
  }
  else
  {
    Scr_Error(COM_ERR_3543, scrContext, "agent is not pointing to the level.agents array");
  }
}

/*
==============
AgentScr_SetLookTarget
==============
*/
void AgentScr_SetLookTarget(scrContext_t *scrContext, gagent_s *pSelf, const agent_fields_s *pField)
{
  agentState_s *p_agentState; 
  int entityNum; 
  unsigned __int64 v7; 
  int v8; 
  ai_agent_t *ScriptedAgentInfo; 
  __int64 v10; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 628, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  p_agentState = &pSelf->agentState;
  entityNum = pSelf->agentState.entityNum;
  v7 = (__int64)((char *)pSelf - (char *)level.agents + ((unsigned __int128)(((char *)pSelf - (char *)level.agents) * (__int128)(__int64)0x95ECD1F424046471ui64) >> 64)) >> 15;
  if ( entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex(v7 + (v7 >> 63)) )
  {
    if ( SV_Agent_IsScripted(entityNum) )
    {
      v8 = p_agentState->entityNum;
      if ( v8 == ComCharacterLimits::GetEntityIndexFromAgentIndex(((int)pSelf - LODWORD(level.agents)) / 55952) )
      {
        if ( (unsigned __int16)v8 >= 0x800u )
        {
          LODWORD(v10) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 630, ASSERT_TYPE_ASSERT, "(unsigned)( pSelf->agentState.entityNum ) < (unsigned)( ( 2048 ) )", "pSelf->agentState.entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
            __debugbreak();
        }
        ScriptedAgentInfo = Agent_GetScriptedAgentInfo(&g_entities[p_agentState->entityNum]);
        if ( Scr_GetType(scrContext, 0) )
        {
          if ( (Scr_GetType(scrContext, 0) != VAR_POINTER || Scr_GetPointerType(scrContext, 0) != VAR_ENTITY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 637, ASSERT_TYPE_ASSERT, "(Scr_GetType( scrContext, 0 ) == VAR_POINTER && Scr_GetPointerType( scrContext, 0 ) == VAR_ENTITY)", (const char *)&queryFormat, "Scr_GetType( scrContext, 0 ) == VAR_POINTER && Scr_GetPointerType( scrContext, 0 ) == VAR_ENTITY") )
            __debugbreak();
          ScriptedAgentInfo->lookAtInfo.lookAtEntNum = GScr_GetEntity(0)->s.number;
        }
        else
        {
          ScriptedAgentInfo->lookAtInfo.lookAtEntNum = 2047;
        }
      }
      else
      {
        Scr_Error(COM_ERR_3534, scrContext, "agent is not initialized");
      }
    }
  }
  else
  {
    Scr_Error(COM_ERR_3535, scrContext, "agent is not initialized");
  }
}

/*
==============
AgentScr_GetLookTarget
==============
*/
void AgentScr_GetLookTarget(scrContext_t *scrContext, gagent_s *pSelf, const agent_fields_s *pField)
{
  agentState_s *p_agentState; 
  int entityNum; 
  unsigned __int64 v7; 
  int v8; 
  __int64 lookAtEntNum; 
  __int64 v10; 
  __int64 v11; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 650, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  p_agentState = &pSelf->agentState;
  entityNum = pSelf->agentState.entityNum;
  v7 = (__int64)((char *)pSelf - (char *)level.agents + ((unsigned __int128)(((char *)pSelf - (char *)level.agents) * (__int128)(__int64)0x95ECD1F424046471ui64) >> 64)) >> 15;
  if ( entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex(v7 + (v7 >> 63)) )
  {
    if ( SV_Agent_IsScripted(entityNum) )
    {
      v8 = p_agentState->entityNum;
      if ( v8 == ComCharacterLimits::GetEntityIndexFromAgentIndex(((int)pSelf - LODWORD(level.agents)) / 55952) )
      {
        if ( (unsigned __int16)v8 >= 0x800u )
        {
          LODWORD(v10) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 652, ASSERT_TYPE_ASSERT, "(unsigned)( pSelf->agentState.entityNum ) < (unsigned)( ( 2048 ) )", "pSelf->agentState.entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
            __debugbreak();
        }
        lookAtEntNum = Agent_GetScriptedAgentInfo(&g_entities[p_agentState->entityNum])->lookAtInfo.lookAtEntNum;
        if ( (_DWORD)lookAtEntNum != 2047 )
        {
          if ( (unsigned int)lookAtEntNum >= 0x800 )
          {
            LODWORD(v11) = 2048;
            LODWORD(v10) = lookAtEntNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          GScr_AddEntity(&g_entities[lookAtEntNum]);
        }
      }
      else
      {
        Scr_Error(COM_ERR_3534, scrContext, "agent is not initialized");
      }
    }
  }
  else
  {
    Scr_Error(COM_ERR_3535, scrContext, "agent is not initialized");
  }
}

/*
==============
AgentScr_GetLookPosition
==============
*/
void AgentScr_GetLookPosition(scrContext_t *scrContext, gagent_s *pSelf, const agent_fields_s *pField)
{
  agentState_s *p_agentState; 
  int entityNum; 
  unsigned __int64 v7; 
  int v8; 
  ActorLookAtInfo *p_lookAtInfo; 
  __int64 v10; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 664, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  p_agentState = &pSelf->agentState;
  entityNum = pSelf->agentState.entityNum;
  v7 = (__int64)((char *)pSelf - (char *)level.agents + ((unsigned __int128)(((char *)pSelf - (char *)level.agents) * (__int128)(__int64)0x95ECD1F424046471ui64) >> 64)) >> 15;
  if ( entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex(v7 + (v7 >> 63)) )
  {
    if ( SV_Agent_IsScripted(entityNum) )
    {
      v8 = p_agentState->entityNum;
      if ( v8 == ComCharacterLimits::GetEntityIndexFromAgentIndex(((int)pSelf - LODWORD(level.agents)) / 55952) )
      {
        if ( (unsigned __int16)v8 >= 0x800u )
        {
          LODWORD(v10) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 666, ASSERT_TYPE_ASSERT, "(unsigned)( pSelf->agentState.entityNum ) < (unsigned)( ( 2048 ) )", "pSelf->agentState.entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
            __debugbreak();
        }
        p_lookAtInfo = &Agent_GetScriptedAgentInfo(&g_entities[p_agentState->entityNum])->lookAtInfo;
        if ( !VecNCompareCustomEpsilon(p_lookAtInfo->vLookAtPos.v, ZERO_VEC_1.v, 0.001, 3) )
          Scr_AddVector(scrContext, p_lookAtInfo->vLookAtPos.v);
      }
      else
      {
        Scr_Error(COM_ERR_3534, scrContext, "agent is not initialized");
      }
    }
  }
  else
  {
    Scr_Error(COM_ERR_3535, scrContext, "agent is not initialized");
  }
}

/*
==============
AgentScr_SetLookPosition
==============
*/
void AgentScr_SetLookPosition(scrContext_t *scrContext, gagent_s *pSelf, const agent_fields_s *pField)
{
  agentState_s *p_agentState; 
  int entityNum; 
  unsigned __int64 v7; 
  int v8; 
  ai_agent_t *ScriptedAgentInfo; 
  __int64 v10; 
  vec3_t vectorValue; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 677, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  p_agentState = &pSelf->agentState;
  entityNum = pSelf->agentState.entityNum;
  v7 = (__int64)((char *)pSelf - (char *)level.agents + ((unsigned __int128)(((char *)pSelf - (char *)level.agents) * (__int128)(__int64)0x95ECD1F424046471ui64) >> 64)) >> 15;
  if ( entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex(v7 + (v7 >> 63)) )
  {
    if ( SV_Agent_IsScripted(entityNum) )
    {
      v8 = p_agentState->entityNum;
      if ( v8 == ComCharacterLimits::GetEntityIndexFromAgentIndex(((int)pSelf - LODWORD(level.agents)) / 55952) )
      {
        if ( (unsigned __int16)v8 >= 0x800u )
        {
          LODWORD(v10) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 679, ASSERT_TYPE_ASSERT, "(unsigned)( pSelf->agentState.entityNum ) < (unsigned)( ( 2048 ) )", "pSelf->agentState.entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
            __debugbreak();
        }
        ScriptedAgentInfo = Agent_GetScriptedAgentInfo(&g_entities[p_agentState->entityNum]);
        if ( Scr_GetType(scrContext, 0) )
        {
          Scr_GetVector(scrContext, 0, &vectorValue);
          ScriptedAgentInfo->lookAtInfo.vLookAtPos = vectorValue;
        }
        else
        {
          *(_QWORD *)ScriptedAgentInfo->lookAtInfo.vLookAtPos.v = 0i64;
          ScriptedAgentInfo->lookAtInfo.vLookAtPos.v[2] = 0.0;
        }
      }
      else
      {
        Scr_Error(COM_ERR_3534, scrContext, "agent is not initialized");
      }
    }
  }
  else
  {
    Scr_Error(COM_ERR_3535, scrContext, "agent is not initialized");
  }
}

/*
==============
AgentScr_GetControllingPlayer
==============
*/
void AgentScr_GetControllingPlayer(scrContext_t *scrContext, gagent_s *pSelf, const agent_fields_s *pField)
{
  int entityNum; 
  unsigned __int64 v5; 
  int outControllingClientNum; 

  entityNum = pSelf->agentState.entityNum;
  v5 = (__int64)((char *)pSelf - (char *)level.agents + ((unsigned __int128)(((char *)pSelf - (char *)level.agents) * (__int128)(__int64)0x95ECD1F424046471ui64) >> 64)) >> 15;
  if ( entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex(v5 + (v5 >> 63)) )
  {
    if ( SV_GetAgentControlledByPlayerNum(entityNum, &outControllingClientNum) )
      GScr_AddEntity(&level.gentities[outControllingClientNum]);
    else
      Scr_AddUndefined(scrContext);
  }
  else
  {
    Scr_Error(COM_ERR_3545, scrContext, "agent is not initialized");
  }
}

/*
==============
GScr_AddFieldsForAgent
==============
*/
void GScr_AddFieldsForAgent(scrContext_t *scrContext)
{
  const agent_fields_s *i; 
  __int64 v3; 

  for ( i = fields_0; i->name; ++i )
  {
    v3 = ((char *)&i->canonicalString - (char *)&fields_0[0].canonicalString) / 40;
    if ( (v3 & 0xE000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 1033, ASSERT_TYPE_ASSERT, "(!((f - fields) & ENTFIELD_MASK))", (const char *)&queryFormat, "!((f - fields) & ENTFIELD_MASK)") )
      __debugbreak();
    if ( v3 != (unsigned __int16)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 1034, ASSERT_TYPE_ASSERT, "((f - fields) == (unsigned short)( f - fields ))", (const char *)&queryFormat, "(f - fields) == (unsigned short)( f - fields )") )
      __debugbreak();
    Scr_AddClassField(scrContext, ENTITY_CLASS_GENTITY, *i->name, i->canonicalString, (unsigned __int16)v3 | 0xA000);
  }
}

/*
==============
Scr_GetAgentField
==============
*/
void Scr_GetAgentField(scrContext_t *scrContext, gagent_s *agent, int offset)
{
  __int64 v3; 
  const agent_fields_s *v6; 
  void (__fastcall *getter)(scrContext_t *, gagent_s *, const agent_fields_s *); 

  v3 = offset;
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 1071, ASSERT_TYPE_ASSERT, "(agent)", (const char *)&queryFormat, "agent") )
    __debugbreak();
  if ( (unsigned int)v3 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 1072, ASSERT_TYPE_ASSERT, "(static_cast<unsigned int>( offset ) < ( sizeof( *array_counter( fields ) ) + 0 ) - 1)", (const char *)&queryFormat, "static_cast<unsigned int>( offset ) < ARRAY_COUNT( fields ) - 1") )
    __debugbreak();
  if ( (int)v3 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 1073, ASSERT_TYPE_ASSERT, "(offset >= 0)", (const char *)&queryFormat, "offset >= 0") )
    __debugbreak();
  v6 = &fields_0[v3];
  getter = v6->getter;
  if ( getter )
  {
    getter(scrContext, agent, v6);
  }
  else
  {
    if ( !v6->ofs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 1083, ASSERT_TYPE_ASSERT, "(f->ofs)", (const char *)&queryFormat, "f->ofs") )
      __debugbreak();
    Scr_GetGenericField(scrContext, (unsigned __int8 *)agent, v6->type, v6->ofs);
  }
}

/*
==============
Scr_SetAgentField
==============
*/
void Scr_SetAgentField(scrContext_t *scrContext, gagent_s *agent, int offset)
{
  __int64 v3; 
  const agent_fields_s *v6; 
  void (__fastcall *setter)(scrContext_t *, gagent_s *, const agent_fields_s *); 

  v3 = offset;
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 1047, ASSERT_TYPE_ASSERT, "(agent)", (const char *)&queryFormat, "agent") )
    __debugbreak();
  if ( (unsigned int)v3 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 1048, ASSERT_TYPE_ASSERT, "(static_cast<unsigned int>( offset ) < ( sizeof( *array_counter( fields ) ) + 0 ) - 1)", (const char *)&queryFormat, "static_cast<unsigned int>( offset ) < ARRAY_COUNT( fields ) - 1") )
    __debugbreak();
  if ( (int)v3 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 1049, ASSERT_TYPE_ASSERT, "(offset >= 0)", (const char *)&queryFormat, "offset >= 0") )
    __debugbreak();
  v6 = &fields_0[v3];
  setter = v6->setter;
  if ( setter )
  {
    setter(scrContext, agent, v6);
  }
  else
  {
    if ( !v6->ofs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_fields.cpp", 1059, ASSERT_TYPE_ASSERT, "(f->ofs)", (const char *)&queryFormat, "f->ofs") )
      __debugbreak();
    Scr_SetGenericField(scrContext, (unsigned __int8 *)agent, v6->type, v6->ofs);
  }
}

