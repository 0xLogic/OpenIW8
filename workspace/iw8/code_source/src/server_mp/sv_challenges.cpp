/*
==============
SV_Challenges_AddParamString
==============
*/

bool __fastcall SV_Challenges_AddParamString(const char *const paramString, const unsigned int length)
{
  return ?SV_Challenges_AddParamString@@YA_NQEBDI@Z(paramString, length);
}

/*
==============
SV_Challenges_BeginEvent
==============
*/

bool __fastcall SV_Challenges_BeginEvent(const gclient_s *const client, const scr_string_t eventName)
{
  return ?SV_Challenges_BeginEvent@@YA_NQEBUgclient_s@@W4scr_string_t@@@Z(client, eventName);
}

/*
==============
SV_Challenges_DiscardEvent
==============
*/

void SV_Challenges_DiscardEvent(void)
{
  ?SV_Challenges_DiscardEvent@@YAXXZ();
}

/*
==============
SV_Challenges_FinishEvent
==============
*/

void SV_Challenges_FinishEvent(void)
{
  ?SV_Challenges_FinishEvent@@YAXXZ();
}

/*
==============
SV_Challenges_AddParam
==============
*/

bool __fastcall SV_Challenges_AddParam(const scr_string_t param)
{
  return ?SV_Challenges_AddParam@@YA_NW4scr_string_t@@@Z(param);
}

/*
==============
SV_Challenges_AddParam
==============
*/
bool SV_Challenges_AddParam(const scr_string_t param)
{
  const char *v2; 
  unsigned __int64 StringLen; 
  unsigned int v4; 

  v2 = SL_ConvertToString(param);
  StringLen = SL_GetStringLen(param);
  v4 = truncate_cast<unsigned int,unsigned __int64>(StringLen);
  return Com_Challenges_WriteParam(v2, v4);
}

/*
==============
SV_Challenges_AddParamString
==============
*/
bool SV_Challenges_AddParamString(const char *const paramString, const unsigned int length)
{
  return Com_Challenges_WriteParam(paramString, length);
}

/*
==============
SV_Challenges_BeginEvent
==============
*/
bool SV_Challenges_BeginEvent(const gclient_s *const client, const scr_string_t eventName)
{
  unsigned __int64 Int64; 
  const XUID *v5; 
  int clientIndex; 
  const PartyData *ServerLobby; 
  const XUID *Xuid; 
  __int64 v9; 
  const char *v10; 
  unsigned __int64 StringLen; 
  unsigned int v12; 
  XUID playerXuid; 
  XUID result; 

  XUID::XUID(&playerXuid);
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_challenges.cpp", 18, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
    __debugbreak();
  if ( !eventName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_challenges.cpp", 19, ASSERT_TYPE_ASSERT, "( eventName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "eventName != NULL_SCR_STRING") )
    __debugbreak();
  if ( SV_IsDemoPlaying() )
  {
    Int64 = SV_DemoMP_GetInt64();
    v5 = XUID::FromUniversalId(&result, Int64);
    XUID::operator=(&playerXuid, v5);
  }
  else
  {
    clientIndex = client->sess.cs.clientIndex;
    ServerLobby = SV_MainMP_GetServerLobby();
    Xuid = Party_GetXuid(&result, ServerLobby, clientIndex);
    XUID::operator=(&playerXuid, Xuid);
    v9 = XUID::ToUint64(&playerXuid);
    SV_DemoMP_RecordInt64(v9);
  }
  v10 = SL_ConvertToString(eventName);
  StringLen = SL_GetStringLen(eventName);
  v12 = truncate_cast<unsigned int,unsigned __int64>(StringLen);
  return Com_Challenges_BeginWriteEvent(playerXuid, v10, v12);
}

/*
==============
SV_Challenges_DiscardEvent
==============
*/

void SV_Challenges_DiscardEvent(void)
{
  Com_Challenges_DiscardWriteEvent();
}

/*
==============
SV_Challenges_FinishEvent
==============
*/

void SV_Challenges_FinishEvent(void)
{
  Com_Challenges_FinishWriteEvent();
}

