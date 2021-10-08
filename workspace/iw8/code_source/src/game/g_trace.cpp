/*
==============
GPlayerTraceInfo::OnLoadLevelState
==============
*/

void GPlayerTraceInfo::OnLoadLevelState(void)
{
  ?OnLoadLevelState@GPlayerTraceInfo@@SAXXZ();
}

/*
==============
GPlayerTraceInfo::ClearServerCages
==============
*/

void GPlayerTraceInfo::ClearServerCages(void)
{
  ?ClearServerCages@GPlayerTraceInfo@@SAXXZ();
}

/*
==============
GPlayerTraceInfo::SortMoverList
==============
*/

void __fastcall GPlayerTraceInfo::SortMoverList(GPlayerTraceInfo *this, int count, int *indexList, const float *distList)
{
  ?SortMoverList@GPlayerTraceInfo@@MEAAXHPEAHPEBM@Z(this, count, indexList, distList);
}

/*
==============
GPlayerTraceInfo::Init
==============
*/

void __fastcall GPlayerTraceInfo::Init(gentity_s *playerEnt)
{
  ?Init@GPlayerTraceInfo@@SAXPEAUgentity_s@@@Z(playerEnt);
}

/*
==============
GPlayerTraceInfo::EndTracePerfProbe
==============
*/

void __fastcall GPlayerTraceInfo::EndTracePerfProbe(GPlayerTraceInfo *this)
{
  ?EndTracePerfProbe@GPlayerTraceInfo@@UEBAXXZ(this);
}

/*
==============
GPlayerTraceInfo::StartTracePerfProbe
==============
*/

void __fastcall GPlayerTraceInfo::StartTracePerfProbe(GPlayerTraceInfo *this)
{
  ?StartTracePerfProbe@GPlayerTraceInfo@@UEBAXXZ(this);
}

/*
==============
GPlayerTraceInfo::GetCage
==============
*/

BG_PMove_Cage *__fastcall GPlayerTraceInfo::GetCage(GPlayerTraceInfo *this)
{
  return ?GetCage@GPlayerTraceInfo@@UEBAPEAUBG_PMove_Cage@@XZ(this);
}

/*
==============
GPlayerTraceInfo::GPlayerTraceInfo
==============
*/

void __fastcall GPlayerTraceInfo::GPlayerTraceInfo(GPlayerTraceInfo *this)
{
  ??0GPlayerTraceInfo@@QEAA@XZ(this);
}

/*
==============
GPlayerTraceInfo::GetPlayerTraceInfo
==============
*/

GPlayerTraceInfo *__fastcall GPlayerTraceInfo::GetPlayerTraceInfo(int playerIndex)
{
  return ?GetPlayerTraceInfo@GPlayerTraceInfo@@SAPEAV1@H@Z(playerIndex);
}

/*
==============
GPlayerTraceInfo::GPlayerTraceInfo
==============
*/
void GPlayerTraceInfo::GPlayerTraceInfo(GPlayerTraceInfo *this)
{
  BgPlayerTraceInfo::BgPlayerTraceInfo(this);
  this->m_isUserMoveWorker = 0;
  this->__vftable = (GPlayerTraceInfo_vtbl *)&GPlayerTraceInfo::`vftable';
}

/*
==============
GPlayerTraceInfo::ClearServerCages
==============
*/
void GPlayerTraceInfo::ClearServerCages(void)
{
  unsigned int i; 

  BgTrace::DebugPrintCage(1, -1, "Clearing Server Cages ");
  for ( i = 0; i < 0xF8; ++i )
    BgPlayerTraceInfo::ClearCage(&g_playerTraceInfo[i].m_cage);
}

/*
==============
GPlayerTraceInfo::EndTracePerfProbe
==============
*/
void GPlayerTraceInfo::EndTracePerfProbe(GPlayerTraceInfo *this)
{
  if ( !this->m_isUserMoveWorker )
    PhysPerfTrack_PMoveServerTraceTimeStop();
}

/*
==============
G_MoverSortCompare
==============
*/
__int64 G_MoverSortCompare(const void *f1, const void *f2)
{
  char v2; 
  __int64 result; 

  _R8 = *(int *)f1;
  result = 1i64;
  _RCX = g_antilagSortDistanceBuffer;
  _R9 = *(int *)f2;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+r8*4]
    vcomiss xmm0, dword ptr [rcx+r9*4]
  }
  if ( v2 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
GPlayerTraceInfo::GetCage
==============
*/
BG_PMove_Cage *GPlayerTraceInfo::GetCage(GPlayerTraceInfo *this)
{
  __int64 clientNum; 
  __int64 v4; 
  __int64 v5; 
  int v6; 

  if ( !this->m_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 80, ASSERT_TYPE_ASSERT, "(m_ps)", (const char *)&queryFormat, "m_ps") )
    __debugbreak();
  if ( this->m_ps->clientNum >= 0xF8u )
  {
    v6 = 248;
    LODWORD(v4) = this->m_ps->clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 81, ASSERT_TYPE_ASSERT, "(unsigned)( m_ps->clientNum ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "m_ps->clientNum doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  clientNum = this->m_ps->clientNum;
  if ( (unsigned int)clientNum >= 0xF8 )
  {
    LODWORD(v5) = 248;
    LODWORD(v4) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( playerIndex ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "playerIndex doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return &g_playerTraceInfo[clientNum].m_cage;
}

/*
==============
GPlayerTraceInfo::GetPlayerTraceInfo
==============
*/
GPlayerTraceInfo *GPlayerTraceInfo::GetPlayerTraceInfo(int playerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = playerIndex;
  if ( (unsigned int)playerIndex >= 0xF8 )
  {
    v4 = 248;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( playerIndex ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "playerIndex doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", playerIndex, v4) )
      __debugbreak();
  }
  return &g_playerTraceInfo[v1];
}

/*
==============
GPlayerTraceInfo::Init
==============
*/
void GPlayerTraceInfo::Init(gentity_s *playerEnt)
{
  __int64 number; 
  GPlayerTraceInfo *v3; 
  const playerState_s *EntityPlayerState; 
  GHandler *Handler; 
  __int64 v6; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 43, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  number = playerEnt->s.number;
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v6) = playerEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( playerIndex ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "playerIndex doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", v6, 248) )
      __debugbreak();
  }
  v3 = &g_playerTraceInfo[number];
  EntityPlayerState = G_GetEntityPlayerState(playerEnt);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 48, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Handler = GHandler::getHandler();
  BgPlayerTraceInfo::SetPlayerInfo(v3, LOCAL_CLIENT_INVALID, EntityPlayerState, Handler);
  BgTraceBase::ResetBaseInfo(&v3->BgTraceBase, PHYSICS_WORLD_ID_FIRST, 33636369, playerEnt->s.number);
}

/*
==============
GPlayerTraceInfo::OnLoadLevelState
==============
*/
void GPlayerTraceInfo::OnLoadLevelState(void)
{
  unsigned int i; 
  gentity_s *v1; 
  __int64 number; 
  GPlayerTraceInfo *v3; 
  const playerState_s *EntityPlayerState; 
  GHandler *Handler; 
  __int64 v6; 
  __int64 v7; 

  for ( i = 0; i < 0xF8; ++i )
  {
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v1 = &g_entities[i];
    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 60, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( v1->r.isInUse && G_GetEntityPlayerState(v1) )
    {
      number = v1->s.number;
      if ( (unsigned int)number >= 0xF8 )
      {
        LODWORD(v7) = 248;
        LODWORD(v6) = v1->s.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( playerIndex ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "playerIndex doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      v3 = &g_playerTraceInfo[number];
      EntityPlayerState = G_GetEntityPlayerState(v1);
      if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 48, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      Handler = GHandler::getHandler();
      BgPlayerTraceInfo::SetPlayerInfo(v3, LOCAL_CLIENT_INVALID, EntityPlayerState, Handler);
      BgTraceBase::ResetBaseInfo(&v3->BgTraceBase, PHYSICS_WORLD_ID_FIRST, 33636369, v1->s.number);
    }
  }
}

/*
==============
GPlayerTraceInfo::SortMoverList
==============
*/
void GPlayerTraceInfo::SortMoverList(GPlayerTraceInfo *this, int count, int *indexList, const float *distList)
{
  size_t v4; 

  v4 = count;
  if ( !indexList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 123, ASSERT_TYPE_ASSERT, "(indexList)", (const char *)&queryFormat, "indexList") )
    __debugbreak();
  if ( !distList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trace.cpp", 124, ASSERT_TYPE_ASSERT, "(distList)", (const char *)&queryFormat, "distList") )
    __debugbreak();
  g_antilagSortDistanceBuffer = distList;
  qsort(indexList, v4, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)G_MoverSortCompare);
  g_antilagSortDistanceBuffer = NULL;
}

/*
==============
GPlayerTraceInfo::StartTracePerfProbe
==============
*/
void GPlayerTraceInfo::StartTracePerfProbe(GPlayerTraceInfo *this)
{
  if ( !this->m_isUserMoveWorker )
  {
    PhysPerfTrack_PMoveServerTraceTimeStart();
    PhysPerfTrack_PMoveServerTraceCountAdd();
  }
}

