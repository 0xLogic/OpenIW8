/*
==============
ScrAgent_ResetAgentInfo
==============
*/

void __fastcall ScrAgent_ResetAgentInfo(bot_data_t *pBotData, gentity_s *pEnt)
{
  ?ScrAgent_ResetAgentInfo@@YAXPEAUbot_data_t@@PEAUgentity_s@@@Z(pBotData, pEnt);
}

/*
==============
ScrAgent_CleanupAgentInfo
==============
*/

void __fastcall ScrAgent_CleanupAgentInfo(bot_data_t *pBotData, gentity_s *pEnt)
{
  ?ScrAgent_CleanupAgentInfo@@YAXPEAUbot_data_t@@PEAUgentity_s@@@Z(pBotData, pEnt);
}

/*
==============
ScrAgent_CleanupAgentInfo
==============
*/
void ScrAgent_CleanupAgentInfo(bot_data_t *pBotData, gentity_s *pEnt)
{
  $3396140AF3A78F7FCD1D73807E505015 *v2; 
  AIAgentInterface *v3; 
  AIAgentInterface v4; 
  AIAgentInterface *v5; 

  if ( pBotData->bIsScriptedAgent )
  {
    v2 = &pBotData->8;
    AIAgentInterface::AIAgentInterface(&v4);
    v3 = NULL;
    v4.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v5 = NULL;
    if ( v2 )
    {
      v5 = &v4;
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v4, (ai_agent_t *)v2);
      v3 = v5;
    }
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_scragent_mp.cpp", 2444, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI", v4.__vftable) )
      __debugbreak();
    v3->CleanUp(v3);
  }
}

/*
==============
ScrAgent_ResetAgentInfo
==============
*/
void ScrAgent_ResetAgentInfo(bot_data_t *pBotData, gentity_s *pEnt)
{
  $3396140AF3A78F7FCD1D73807E505015 *v2; 
  sentient_info_t *sentientInfo; 
  AINavigator *pNavigator; 
  AINavigator *v7; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v9; 
  AIAgentInterface v10; 
  AIAgentInterface *v11; 

  v2 = &pBotData->8;
  pBotData->bIsScriptedAgent = 1;
  if ( pBotData == (bot_data_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_scragent_mp.cpp", 2409, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
    __debugbreak();
  AICommonInterface::RemoveEntRefs(&v2->botInfo);
  sentientInfo = v2->botInfo.sentientInfo;
  memset_0(sentientInfo, 0, (unsigned __int64)level.maxSentients << 6);
  memset_0(&pBotData->scriptedAgentInfo.sentient, 0, 0xE60ui64);
  v2->botInfo.ent = pEnt;
  v2->botInfo.sentientInfo = sentientInfo;
  if ( Nav_MeshLoaded() )
  {
    pNavigator = v2->botInfo.pNavigator;
    if ( pNavigator )
      Nav_FreeNavigator(pNavigator);
    v7 = Nav_Create2DNavigator(pEnt, NAV_LAYER_HUMAN);
    v2->botInfo.pNavigator = v7;
    Nav_SetLinkUsageFlags(v7, 4u);
    Nav_SetPos(v2->botInfo.pNavigator, &pEnt->r.currentOrigin);
  }
  AIAgentInterface::AIAgentInterface(&v10);
  v11 = NULL;
  v10.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  if ( SV_IsAgentScripted(pEnt) )
  {
    ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(pEnt);
    if ( ScriptedAgentInfo )
    {
      v11 = &v10;
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v10, ScriptedAgentInfo);
    }
  }
  v9 = v11;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_scragent_mp.cpp", 2434, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v9->SetDefaults(v9);
}

