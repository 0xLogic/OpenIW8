/*
==============
AIWrapper::Setup
==============
*/

void __fastcall AIWrapper::Setup(AIWrapper *this, const gentity_s *ent)
{
  ?Setup@AIWrapper@@AEAAXPEBUgentity_s@@@Z(this, ent);
}

/*
==============
AIWrapper::AIWrapper
==============
*/

void __fastcall AIWrapper::AIWrapper(AIWrapper *this, const gentity_s *ent)
{
  ??0AIWrapper@@QEAA@PEBUgentity_s@@@Z(this, ent);
}

/*
==============
AIWrapper::AIWrapper
==============
*/

void __fastcall AIWrapper::AIWrapper(AIWrapper *this, ai_scripted_t *pAI)
{
  ??0AIWrapper@@QEAA@PEAUai_scripted_t@@@Z(this, pAI);
}

/*
==============
AIBotWrapper::AIBotWrapper
==============
*/

void __fastcall AIBotWrapper::AIBotWrapper(AIBotWrapper *this, bot_data_t *botData)
{
  ??0AIBotWrapper@@QEAA@PEAUbot_data_t@@@Z(this, botData);
}

/*
==============
AICommonWrapper::AICommonWrapper
==============
*/

void __fastcall AICommonWrapper::AICommonWrapper(AICommonWrapper *this, const gentity_s *ent)
{
  ??0AICommonWrapper@@QEAA@PEBUgentity_s@@@Z(this, ent);
}

/*
==============
AIWrapper::AIWrapper
==============
*/

void __fastcall AIWrapper::AIWrapper(AIWrapper *this, actor_s *pActor)
{
  ??0AIWrapper@@QEAA@PEAUactor_s@@@Z(this, pActor);
}

/*
==============
AIBotWrapper::Setup
==============
*/

void __fastcall AIBotWrapper::Setup(AIBotWrapper *this, const gentity_s *ent)
{
  ?Setup@AIBotWrapper@@IEAAXPEBUgentity_s@@@Z(this, ent);
}

/*
==============
AIActorWrapper::AIActorWrapper
==============
*/

void __fastcall AIActorWrapper::AIActorWrapper(AIActorWrapper *this, actor_s *pActor)
{
  ??0AIActorWrapper@@QEAA@PEAUactor_s@@@Z(this, pActor);
}

/*
==============
AICommonWrapper::Setup
==============
*/

void __fastcall AICommonWrapper::Setup(AICommonWrapper *this, const gentity_s *ent)
{
  ?Setup@AICommonWrapper@@AEAAXPEBUgentity_s@@@Z(this, ent);
}

/*
==============
AIBotWrapper::AIBotWrapper
==============
*/

void __fastcall AIBotWrapper::AIBotWrapper(AIBotWrapper *this, gentity_s *ent)
{
  ??0AIBotWrapper@@QEAA@PEAUgentity_s@@@Z(this, ent);
}

/*
==============
AIWrapper::AIWrapper
==============
*/
void AIWrapper::AIWrapper(AIWrapper *this, const gentity_s *ent)
{
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 

  AIActorInterface::AIActorInterface(&this->m_actorInterface);
  AIScriptedInterface::AIScriptedInterface(&this->m_newAgentInterface);
  this->m_newAgentInterface.m_pAI = NULL;
  this->m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  this->m_pAI = NULL;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->agent && SV_Agent_IsScripted(ent->s.number) )
  {
    ScriptedAgentInfo = Agent_GetScriptedAgentInfo(ent);
    if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
      __debugbreak();
    if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
      __debugbreak();
    this->m_newAgentInterface.m_pAI = ScriptedAgentInfo;
    AIScriptedInterface::SetAI(&this->m_newAgentInterface, ScriptedAgentInfo);
    this->m_pAI = &this->m_newAgentInterface;
  }
  else
  {
    actor = ent->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&this->m_actorInterface, ent->actor);
      this->m_pAI = &this->m_actorInterface;
    }
  }
}

/*
==============
AIWrapper::Setup
==============
*/
void AIWrapper::Setup(AIWrapper *this, const gentity_s *ent)
{
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->agent && SV_Agent_IsScripted(ent->s.number) )
  {
    ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(ent);
    if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
      __debugbreak();
    if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
      __debugbreak();
    AINewAgentInterface::SetAgent(&this->m_newAgentInterface, ScriptedAgentInfo);
    this->m_pAI = &this->m_newAgentInterface;
  }
  else
  {
    actor = ent->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&this->m_actorInterface, ent->actor);
      this->m_pAI = &this->m_actorInterface;
    }
  }
}

/*
==============
AICommonWrapper::Setup
==============
*/
void AICommonWrapper::Setup(AICommonWrapper *this, const gentity_s *ent)
{
  sentient_s *sentient; 
  ai_agent_t *ScriptedAgentInfo; 
  AIBotInterface *p_m_newAgentInterface; 
  bot_data_t *BotDataForEnt; 
  actor_s *actor; 
  bot_data_t *EntityData; 

  if ( ent )
  {
    sentient = ent->sentient;
    if ( sentient )
    {
      if ( sentient->ai )
      {
        if ( ent->agent )
        {
          if ( SV_Agent_IsScripted(ent->s.number) )
          {
            ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(ent);
            if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 240, ASSERT_TYPE_ASSERT, "( pAgentInfo )", (const char *)&queryFormat, "pAgentInfo") )
              __debugbreak();
            if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 241, ASSERT_TYPE_ASSERT, "( pAgentInfo->sentientInfo != nullptr )", (const char *)&queryFormat, "pAgentInfo->sentientInfo != nullptr") )
              __debugbreak();
            p_m_newAgentInterface = (AIBotInterface *)&this->m_newAgentInterface;
            AINewAgentInterface::SetAgent(&this->m_newAgentInterface, ScriptedAgentInfo);
            goto LABEL_34;
          }
          if ( !SV_IsAgentBot(ent->s.number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 248, ASSERT_TYPE_ASSERT, "(SV_IsAgentBot( ent->s.number ))", (const char *)&queryFormat, "SV_IsAgentBot( ent->s.number )") )
            __debugbreak();
          BotDataForEnt = Agent_GetBotDataForEnt(ent);
          if ( !BotDataForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 250, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
            __debugbreak();
          if ( !BotDataForEnt->botInfo.sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 251, ASSERT_TYPE_ASSERT, "( botData->botInfo.sentientInfo != nullptr )", (const char *)&queryFormat, "botData->botInfo.sentientInfo != nullptr") )
            __debugbreak();
          p_m_newAgentInterface = &this->m_botAgentInterface;
LABEL_33:
          AIBotInterface::SetBot(p_m_newAgentInterface, &BotDataForEnt->botInfo);
LABEL_34:
          this->m_pAI = p_m_newAgentInterface;
          return;
        }
        actor = ent->actor;
        if ( !actor )
        {
          EntityData = Bot_GetEntityData(ent);
          BotDataForEnt = EntityData;
          if ( !EntityData )
            return;
          if ( !EntityData->botInfo.sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 267, ASSERT_TYPE_ASSERT, "( botData->botInfo.sentientInfo != nullptr )", (const char *)&queryFormat, "botData->botInfo.sentientInfo != nullptr") )
            __debugbreak();
          p_m_newAgentInterface = &this->m_botInterface;
          goto LABEL_33;
        }
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 258, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo != nullptr )", (const char *)&queryFormat, "ent->actor->sentientInfo != nullptr") )
          __debugbreak();
        AIActorInterface::SetActor(&this->m_actorInterface, ent->actor);
        this->m_pAI = &this->m_actorInterface;
      }
    }
  }
}

/*
==============
AIWrapper::AIWrapper
==============
*/
void AIWrapper::AIWrapper(AIWrapper *this, ai_scripted_t *pAI)
{
  gentity_s *ent; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 

  AIActorInterface::AIActorInterface(&this->m_actorInterface);
  AIAgentInterface::AIAgentInterface(&this->m_newAgentInterface);
  this->m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  this->m_pAI = NULL;
  ent = pAI->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->agent && SV_Agent_IsScripted(ent->s.number) )
  {
    ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(ent);
    if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
      __debugbreak();
    if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
      __debugbreak();
    AINewAgentInterface::SetAgent(&this->m_newAgentInterface, ScriptedAgentInfo);
    this->m_pAI = &this->m_newAgentInterface;
  }
  else
  {
    actor = ent->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&this->m_actorInterface, ent->actor);
      this->m_pAI = &this->m_actorInterface;
    }
  }
}

/*
==============
AIActorWrapper::AIActorWrapper
==============
*/
void AIActorWrapper::AIActorWrapper(AIActorWrapper *this, actor_s *pActor)
{
  AIActorInterface::AIActorInterface(&this->m_actorInterface);
  this->m_pAI = NULL;
  if ( !pActor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 472, ASSERT_TYPE_ASSERT, "(pActor)", (const char *)&queryFormat, "pActor") )
    __debugbreak();
  AIActorInterface::SetActor(&this->m_actorInterface, pActor);
  this->m_pAI = &this->m_actorInterface;
}

/*
==============
AIWrapper::AIWrapper
==============
*/
void AIWrapper::AIWrapper(AIWrapper *this, actor_s *pActor)
{
  AIActorInterface::AIActorInterface(&this->m_actorInterface);
  AIAgentInterface::AIAgentInterface(&this->m_newAgentInterface);
  this->m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  if ( !pActor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 40, ASSERT_TYPE_ASSERT, "( pActor )", (const char *)&queryFormat, "pActor") )
    __debugbreak();
  if ( !pActor->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 41, ASSERT_TYPE_ASSERT, "( pActor->ent )", (const char *)&queryFormat, "pActor->ent") )
    __debugbreak();
  if ( !pActor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 42, ASSERT_TYPE_ASSERT, "( pActor->sentientInfo )", (const char *)&queryFormat, "pActor->sentientInfo") )
    __debugbreak();
  AIActorInterface::SetActor(&this->m_actorInterface, pActor);
  this->m_pAI = &this->m_actorInterface;
}

/*
==============
AIBotWrapper::AIBotWrapper
==============
*/
void AIBotWrapper::AIBotWrapper(AIBotWrapper *this, gentity_s *ent)
{
  bot_data_t *BotDataForEnt; 
  bot_data_t *EntityData; 
  bot_data_t *v6; 

  AICommonInterface::AICommonInterface(&this->m_botInterface);
  this->m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&this->m_botAgentInterface);
  this->m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  this->m_pAI = NULL;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 313, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->agent )
  {
    if ( SV_Agent_IsScripted(ent->s.number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 316, ASSERT_TYPE_ASSERT, "( !SV_Agent_IsScripted( ent->s.number ) )", (const char *)&queryFormat, "!SV_Agent_IsScripted( ent->s.number )") )
      __debugbreak();
    if ( !SV_IsAgentBot(ent->s.number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 317, ASSERT_TYPE_ASSERT, "( SV_IsAgentBot( ent->s.number ) )", (const char *)&queryFormat, "SV_IsAgentBot( ent->s.number )") )
      __debugbreak();
    BotDataForEnt = Agent_GetBotDataForEnt(ent);
    if ( !BotDataForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 319, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
      __debugbreak();
    if ( !BotDataForEnt->botInfo.sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 320, ASSERT_TYPE_ASSERT, "( botData->botInfo.sentientInfo != nullptr )", (const char *)&queryFormat, "botData->botInfo.sentientInfo != nullptr") )
      __debugbreak();
    AIBotInterface::SetBot(&this->m_botAgentInterface, &BotDataForEnt->botInfo);
    this->m_pAI = &this->m_botAgentInterface;
  }
  else
  {
    EntityData = Bot_GetEntityData(ent);
    v6 = EntityData;
    if ( EntityData )
    {
      if ( !EntityData->botInfo.sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 329, ASSERT_TYPE_ASSERT, "( botData->botInfo.sentientInfo != nullptr )", (const char *)&queryFormat, "botData->botInfo.sentientInfo != nullptr") )
        __debugbreak();
      AIBotInterface::SetBot(&this->m_botInterface, &v6->botInfo);
      this->m_pAI = &this->m_botInterface;
    }
  }
}

/*
==============
AIBotWrapper::Setup
==============
*/
void AIBotWrapper::Setup(AIBotWrapper *this, const gentity_s *ent)
{
  bot_data_t *BotDataForEnt; 
  bot_data_t *EntityData; 
  bot_data_t *v6; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 313, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->agent )
  {
    if ( SV_Agent_IsScripted(ent->s.number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 316, ASSERT_TYPE_ASSERT, "( !SV_Agent_IsScripted( ent->s.number ) )", (const char *)&queryFormat, "!SV_Agent_IsScripted( ent->s.number )") )
      __debugbreak();
    if ( !SV_IsAgentBot(ent->s.number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 317, ASSERT_TYPE_ASSERT, "( SV_IsAgentBot( ent->s.number ) )", (const char *)&queryFormat, "SV_IsAgentBot( ent->s.number )") )
      __debugbreak();
    BotDataForEnt = Agent_GetBotDataForEnt(ent);
    if ( !BotDataForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 319, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
      __debugbreak();
    if ( !BotDataForEnt->botInfo.sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 320, ASSERT_TYPE_ASSERT, "( botData->botInfo.sentientInfo != nullptr )", (const char *)&queryFormat, "botData->botInfo.sentientInfo != nullptr") )
      __debugbreak();
    AIBotInterface::SetBot(&this->m_botAgentInterface, &BotDataForEnt->botInfo);
    this->m_pAI = &this->m_botAgentInterface;
  }
  else
  {
    EntityData = Bot_GetEntityData(ent);
    v6 = EntityData;
    if ( EntityData )
    {
      if ( !EntityData->botInfo.sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 329, ASSERT_TYPE_ASSERT, "( botData->botInfo.sentientInfo != nullptr )", (const char *)&queryFormat, "botData->botInfo.sentientInfo != nullptr") )
        __debugbreak();
      AIBotInterface::SetBot(&this->m_botInterface, &v6->botInfo);
      this->m_pAI = &this->m_botInterface;
    }
  }
}

/*
==============
AIBotWrapper::AIBotWrapper
==============
*/
void AIBotWrapper::AIBotWrapper(AIBotWrapper *this, bot_data_t *botData)
{
  gentity_s *ent; 
  bot_data_t *BotDataForEnt; 
  bot_data_t *EntityData; 
  bot_data_t *v7; 

  AICommonInterface::AICommonInterface(&this->m_botInterface);
  this->m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&this->m_botAgentInterface);
  this->m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  this->m_pAI = NULL;
  ent = botData->botInfo.ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 313, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->agent )
  {
    if ( SV_Agent_IsScripted(ent->s.number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 316, ASSERT_TYPE_ASSERT, "( !SV_Agent_IsScripted( ent->s.number ) )", (const char *)&queryFormat, "!SV_Agent_IsScripted( ent->s.number )") )
      __debugbreak();
    if ( !SV_IsAgentBot(ent->s.number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 317, ASSERT_TYPE_ASSERT, "( SV_IsAgentBot( ent->s.number ) )", (const char *)&queryFormat, "SV_IsAgentBot( ent->s.number )") )
      __debugbreak();
    BotDataForEnt = Agent_GetBotDataForEnt(ent);
    if ( !BotDataForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 319, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
      __debugbreak();
    if ( !BotDataForEnt->botInfo.sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 320, ASSERT_TYPE_ASSERT, "( botData->botInfo.sentientInfo != nullptr )", (const char *)&queryFormat, "botData->botInfo.sentientInfo != nullptr") )
      __debugbreak();
    AIBotInterface::SetBot(&this->m_botAgentInterface, &BotDataForEnt->botInfo);
    this->m_pAI = &this->m_botAgentInterface;
  }
  else
  {
    EntityData = Bot_GetEntityData(ent);
    v7 = EntityData;
    if ( EntityData )
    {
      if ( !EntityData->botInfo.sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 329, ASSERT_TYPE_ASSERT, "( botData->botInfo.sentientInfo != nullptr )", (const char *)&queryFormat, "botData->botInfo.sentientInfo != nullptr") )
        __debugbreak();
      AIBotInterface::SetBot(&this->m_botInterface, &v7->botInfo);
      this->m_pAI = &this->m_botInterface;
    }
  }
}

/*
==============
AICommonWrapper::AICommonWrapper
==============
*/
void AICommonWrapper::AICommonWrapper(AICommonWrapper *this, const gentity_s *ent)
{
  AIActorInterface::AIActorInterface(&this->m_actorInterface);
  AIAgentInterface::AIAgentInterface(&this->m_newAgentInterface);
  this->m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&this->m_botInterface);
  this->m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&this->m_botAgentInterface);
  this->m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  this->m_pAI = NULL;
  AICommonWrapper::Setup(this, ent);
}

