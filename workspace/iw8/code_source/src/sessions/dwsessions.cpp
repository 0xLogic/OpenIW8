/*
==============
Session_IsValid
==============
*/

bool __fastcall Session_IsValid(const SessionData *session)
{
  return ?Session_IsValid@@YA_NPEBUSessionData@@@Z(session);
}

/*
==============
Session_Init
==============
*/

void Session_Init(void)
{
  ?Session_Init@@YAXXZ();
}

/*
==============
Session_Frame
==============
*/

void Session_Frame(void)
{
  ?Session_Frame@@YAXXZ();
}

/*
==============
Session_StartClient
==============
*/

bool __fastcall Session_StartClient(SessionData *session, const int localControllerIndex, const int flags)
{
  return ?Session_StartClient@@YA_NPEAUSessionData@@HH@Z(session, localControllerIndex, flags);
}

/*
==============
Live_CheckOngoingSessionTasks
==============
*/

void Live_CheckOngoingSessionTasks(void)
{
  ?Live_CheckOngoingSessionTasks@@YAXXZ();
}

/*
==============
Session_ClearSession
==============
*/

void __fastcall Session_ClearSession(SessionData *session)
{
  ?Session_ClearSession@@YAXPEAUSessionData@@@Z(session);
}

/*
==============
Session_MoveSession
==============
*/

void __fastcall Session_MoveSession(SessionData *from, SessionData *to)
{
  ?Session_MoveSession@@YAXPEAUSessionData@@0@Z(from, to);
}

/*
==============
Session_DeleteSession
==============
*/

void __fastcall Session_DeleteSession(SessionData *session)
{
  ?Session_DeleteSession@@YAXPEAUSessionData@@@Z(session);
}

/*
==============
Live_CheckOngoingSessionTasks
==============
*/
void Live_CheckOngoingSessionTasks(void)
{
  Profile_Begin(814);
  Profile_EndInternal(NULL);
}

/*
==============
Session_ClearSession
==============
*/
void Session_ClearSession(SessionData *session)
{
  memset_0(&session->dyn, 0, sizeof(session->dyn));
}

/*
==============
Session_DeleteSession
==============
*/
void Session_DeleteSession(SessionData *session)
{
  PartyData *PartyForSession; 
  const char *Name; 

  PartyForSession = Party_GetPartyForSession(session);
  Name = Session_GetName(session);
  Com_Printf(131097, "DeleteSession requested for session %s\n", Name);
  if ( session && XSESSION_INFO::IsValidSessionId(&session->dyn.sessionInfo) )
    Party_DumpInfo(PartyForSession, "Move to graveyard");
  Voice_ClearRemoteTalkers(PartyForSession);
  if ( PartyForSession )
  {
    Party_SetGameFlags(PartyForSession, 0);
    Party_SetNumGameSlots(PartyForSession, 0);
  }
}

/*
==============
Session_Frame
==============
*/
void Session_Frame(void)
{
  Profile_Begin(817);
  Xb3MultiplayerManager::Update(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, 1);
  Profile_EndInternal(NULL);
}

/*
==============
Session_Init
==============
*/
void Session_Init(void)
{
  Xb3MultiplayerManager::Init(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, 0);
  s_waitForMPSDModifyToComplete = 1;
}

/*
==============
Session_IsValid
==============
*/
bool Session_IsValid(const SessionData *session)
{
  return session && XSESSION_INFO::IsValidSessionId(&session->dyn.sessionInfo);
}

/*
==============
Session_MoveSession
==============
*/
void Session_MoveSession(SessionData *from, SessionData *to)
{
  XSESSION_INFO::operator=(&to->dyn.sessionInfo, &from->dyn.sessionInfo);
}

/*
==============
Session_StartClient
==============
*/
char Session_StartClient(SessionData *session, const int localControllerIndex, const int flags)
{
  char v3; 
  const char *Name; 
  const dvar_t *v6; 

  v3 = flags;
  if ( (flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\dwsessions.cpp", 99, ASSERT_TYPE_ASSERT, "(!(flags & 0x00000001))", (const char *)&queryFormat, "!(flags & XSESSION_CREATE_HOST)") )
    __debugbreak();
  if ( (v3 & 8) != 0 && session == &g_partySession )
  {
    Name = Session_GetName(session);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\dwsessions.cpp", 100, ASSERT_TYPE_ASSERT, "( ( !(flags & 0x00000008) || (session != &g_partySession) ) )", "( Session_GetName( session ) ) = %s", Name) )
      __debugbreak();
  }
  v6 = DVARBOOL_online_xb1_session_join;
  if ( !DVARBOOL_online_xb1_session_join && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_xb1_session_join") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  return 1;
}

