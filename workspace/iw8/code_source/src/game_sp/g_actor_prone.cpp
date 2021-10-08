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
  char v11; 
  GHandler *handler; 
  ai_scripted_t *v17; 
  float fmt; 
  float v30; 

  _ESI = feetDirection;
  IsProne = BG_ActorIsProne(&this->m_pAI->ProneInfo, level.time);
  m_pAI = this->m_pAI;
  if ( IsProne )
  {
    iProneTrans = m_pAI->ProneInfo.iProneTrans;
    if ( iProneTrans && iTransTime != iProneTrans )
    {
      *(double *)&_XMM0 = BG_GetActorProneFraction(&m_pAI->ProneInfo, level.time);
      __asm { vcomiss xmm0, cs:__real@3f800000 }
      if ( v11 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, edi
          vmulss  xmm0, xmm1, xmm0
          vcvttss2si eax, xmm0
        }
        this->m_pAI->ProneInfo.iProneTime = level.time - _EAX;
        if ( !this->m_pAI->ProneInfo.prone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_actor_prone.cpp", 53, ASSERT_TYPE_ASSERT, "(m_pAI->ProneInfo.prone)", (const char *)&queryFormat, "m_pAI->ProneInfo.prone") )
          __debugbreak();
      }
      this->m_pAI->ProneInfo.iProneTrans = iTransTime;
      this->m_pAI->prone.feetDirection = _ESI;
    }
  }
  else
  {
    m_pAI->ProneInfo.bCorpseOrientation = 0;
    this->m_pAI->ProneInfo.iProneTime = level.time;
    this->m_pAI->ProneInfo.prone = 1;
    this->m_pAI->ProneInfo.iProneTrans = iTransTime;
    this->m_pAI->Physics.prone = 1;
    this->m_pAI->prone.feetDirection = _ESI;
    handler = GHandler::getHandler();
    v17 = this->m_pAI;
    _ER11 = 1;
    __asm { vmovss  xmm2, cs:__real@42480000 }
    _RCX = v17->ent;
    __asm
    {
      vmovd   xmm1, r11d
      vmovss  xmm4, dword ptr [rcx+140h]
      vmovd   xmm0, esi
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@41c80000
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  xmm3, cs:__real@42400000; fHeight
      vmovss  xmm2, cs:__real@41700000; fSize
      vmovss  [rsp+98h+var_30], xmm0
      vmovss  dword ptr [rsp+98h+fmt], xmm4
    }
    v17->prone.bProneOK = BG_CheckProneValid(v17->ent->s.number, &v17->ent->r.currentOrigin, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, &v17->ProneInfo.fTorsoPitch, &v17->ProneInfo.fWaistPitch, 0, 1, 1, handler, PHYSICS_WORLD_ID_FIRST, PCT_ACTOR, v30, _ESI, NULL, NULL);
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
      BG_GetActorProneFraction(&m_pAI->ProneInfo, level.time);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, edi
        vmulss  xmm0, xmm1, xmm0
        vcvttss2si eax, xmm0
      }
      this->m_pAI->ProneInfo.iProneTime = level.time - _EAX;
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

