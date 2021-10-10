/*
==============
CG_GetClientActorPrevProneInfo
==============
*/

actor_prone_info_lerp_t *__fastcall CG_GetClientActorPrevProneInfo(int iEntNum)
{
  return ?CG_GetClientActorPrevProneInfo@@YAPEAUactor_prone_info_lerp_t@@H@Z(iEntNum);
}

/*
==============
CG_GetClientActorProneInfo
==============
*/

actor_prone_info_t *__fastcall CG_GetClientActorProneInfo(int iEntNum)
{
  return ?CG_GetClientActorProneInfo@@YAPEAUactor_prone_info_t@@H@Z(iEntNum);
}

/*
==============
AIScriptedInterface::EnterProne
==============
*/

void __fastcall AIScriptedInterface::EnterProne(AIScriptedInterface *this, int iTransTime, FeetDirection feetDirection)
{
  ?EnterProne@AIScriptedInterface@@QEBAXHW4FeetDirection@@@Z(this, iTransTime, feetDirection);
}

/*
==============
AIScriptedInterface::ExitProne
==============
*/

void __fastcall AIScriptedInterface::ExitProne(AIScriptedInterface *this, int iTransTime)
{
  ?ExitProne@AIScriptedInterface@@QEBAXH@Z(this, iTransTime);
}

/*
==============
AIScriptedInterface::InitProneInfo
==============
*/

void __fastcall AIScriptedInterface::InitProneInfo(AIScriptedInterface *this)
{
  ?InitProneInfo@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
CG_GetClientActorPrevProneInfo
==============
*/
actor_prone_info_lerp_t *CG_GetClientActorPrevProneInfo(int iEntNum)
{
  __int64 v1; 

  v1 = g_cgameData.specialIndex[iEntNum];
  if ( (unsigned int)v1 >= 0x42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_actor_prone.cpp", 26, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ((32 + 6) + 28) )", "actorIndex doesn't index NUM_PRONE_INFO\n\t%i not in [0, %i)", g_cgameData.specialIndex[iEntNum], 66) )
    __debugbreak();
  return &g_cgameData.prevActorProneInfo[v1];
}

/*
==============
CG_GetClientActorProneInfo
==============
*/
actor_prone_info_t *CG_GetClientActorProneInfo(int iEntNum)
{
  __int64 v1; 

  v1 = g_cgameData.specialIndex[iEntNum];
  if ( (unsigned int)v1 >= 0x42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_actor_prone.cpp", 17, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ((32 + 6) + 28) )", "actorIndex doesn't index NUM_PRONE_INFO\n\t%i not in [0, %i)", g_cgameData.specialIndex[iEntNum], 66) )
    __debugbreak();
  return &g_cgameData.actorProneInfo[v1];
}

/*
==============
AIScriptedInterface::EnterProne
==============
*/
void AIScriptedInterface::EnterProne(AIScriptedInterface *this, int iTransTime, FeetDirection feetDirection)
{
  int IsProne; 
  ai_scripted_t *m_pAI; 
  int iProneTrans; 
  double ActorProneFraction; 
  GHandler *handler; 

  IsProne = BG_ActorIsProne(&this->m_pAI->ProneInfo, level.time);
  m_pAI = this->m_pAI;
  if ( IsProne )
  {
    iProneTrans = m_pAI->ProneInfo.iProneTrans;
    if ( iProneTrans && iTransTime != iProneTrans )
    {
      ActorProneFraction = BG_GetActorProneFraction(&m_pAI->ProneInfo, level.time);
      if ( *(float *)&ActorProneFraction < 1.0 )
      {
        this->m_pAI->ProneInfo.iProneTime = level.time - (int)(float)((float)iTransTime * *(float *)&ActorProneFraction);
        if ( !this->m_pAI->ProneInfo.prone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_actor_prone.cpp", 53, ASSERT_TYPE_ASSERT, "(m_pAI->ProneInfo.prone)", (const char *)&queryFormat, "m_pAI->ProneInfo.prone") )
          __debugbreak();
      }
      this->m_pAI->ProneInfo.iProneTrans = iTransTime;
      this->m_pAI->prone.feetDirection = feetDirection;
    }
  }
  else
  {
    m_pAI->ProneInfo.bCorpseOrientation = 0;
    this->m_pAI->ProneInfo.iProneTime = level.time;
    this->m_pAI->ProneInfo.prone = 1;
    this->m_pAI->ProneInfo.iProneTrans = iTransTime;
    this->m_pAI->Physics.prone = 1;
    this->m_pAI->prone.feetDirection = feetDirection;
    handler = GHandler::getHandler();
    _XMM0 = (unsigned int)feetDirection;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_25_0);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
    this->m_pAI->prone.bProneOK = BG_CheckProneValid(this->m_pAI->ent->s.number, &this->m_pAI->ent->r.currentOrigin, 15.0, 48.0, this->m_pAI->ent->r.currentAngles.v[1], &this->m_pAI->ProneInfo.fTorsoPitch, &this->m_pAI->ProneInfo.fWaistPitch, 0, 1, 1, handler, PHYSICS_WORLD_ID_FIRST, PCT_ACTOR, *(float *)&_XMM0, feetDirection, NULL, NULL);
  }
  if ( !BG_ActorGoalIsProne(&this->m_pAI->ProneInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_actor_prone.cpp", 76, ASSERT_TYPE_ASSERT, "(BG_ActorGoalIsProne( &m_pAI->ProneInfo ))", (const char *)&queryFormat, "BG_ActorGoalIsProne( &m_pAI->ProneInfo )") )
    __debugbreak();
}

/*
==============
AIScriptedInterface::ExitProne
==============
*/
void AIScriptedInterface::ExitProne(AIScriptedInterface *this, int iTransTime)
{
  ai_scripted_t *m_pAI; 
  int iProneTrans; 
  double ActorProneFraction; 

  if ( BG_ActorIsProne(&this->m_pAI->ProneInfo, level.time) )
  {
    m_pAI = this->m_pAI;
    iProneTrans = m_pAI->ProneInfo.iProneTrans;
    if ( !iProneTrans || iTransTime == iProneTrans )
    {
      m_pAI->ProneInfo.iProneTime = level.time;
    }
    else
    {
      ActorProneFraction = BG_GetActorProneFraction(&m_pAI->ProneInfo, level.time);
      this->m_pAI->ProneInfo.iProneTime = level.time - (int)(float)((float)iTransTime * *(float *)&ActorProneFraction);
    }
    if ( !this->m_pAI->ProneInfo.prone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_actor_prone.cpp", 97, ASSERT_TYPE_ASSERT, "(m_pAI->ProneInfo.prone)", (const char *)&queryFormat, "m_pAI->ProneInfo.prone") )
      __debugbreak();
    this->m_pAI->ProneInfo.iProneTrans = -iTransTime;
  }
  if ( BG_ActorGoalIsProne(&this->m_pAI->ProneInfo) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_actor_prone.cpp", 101, ASSERT_TYPE_ASSERT, "(!BG_ActorGoalIsProne( &m_pAI->ProneInfo ))", (const char *)&queryFormat, "!BG_ActorGoalIsProne( &m_pAI->ProneInfo )") )
      __debugbreak();
  }
}

/*
==============
AIScriptedInterface::InitProneInfo
==============
*/
void AIScriptedInterface::InitProneInfo(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_actor_prone.cpp", 34, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  *(_QWORD *)&m_pAI->ProneInfo.bCorpseOrientation = 0i64;
  *(_QWORD *)&m_pAI->ProneInfo.iProneTrans = 0i64;
  *(_QWORD *)&m_pAI->ProneInfo.fTorsoPitch = 0i64;
}

