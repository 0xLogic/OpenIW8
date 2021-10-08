/*
==============
LiveParty_FeederOnReportRequest
==============
*/

void __fastcall LiveParty_FeederOnReportRequest(const int localControllerIndex, const ReportOffense offense)
{
  ?LiveParty_FeederOnReportRequest@@YAXHW4ReportOffense@@@Z(localControllerIndex, offense);
}

/*
==============
LiveParty_GetCurrentIndexName
==============
*/

const char *__fastcall LiveParty_GetCurrentIndexName(const XUID xuid)
{
  return ?LiveParty_GetCurrentIndexName@@YAPEBDUXUID@@@Z(xuid);
}

/*
==============
LiveParty_FeederOnJoinRequest
==============
*/

void __fastcall LiveParty_FeederOnJoinRequest(const int localControllerIndex, XUID xuid)
{
  ?LiveParty_FeederOnJoinRequest@@YAXHUXUID@@@Z(localControllerIndex, xuid);
}

/*
==============
LiveParty_IsPartyMemberInvitable
==============
*/

bool __fastcall LiveParty_IsPartyMemberInvitable(const int controllerIndex, const XUID playerId, const char **errorString, const char **devErrorString)
{
  return ?LiveParty_IsPartyMemberInvitable@@YA_NHUXUID@@PEAPEBD1@Z(controllerIndex, playerId, errorString, devErrorString);
}

/*
==============
LiveParty_GetPresenceForSlot
==============
*/

const char *__fastcall LiveParty_GetPresenceForSlot(const int controllerIndex, const int slot)
{
  return ?LiveParty_GetPresenceForSlot@@YAPEBDHH@Z(controllerIndex, slot);
}

/*
==============
LiveParty_GetStoredXUID
==============
*/

XUID *__fastcall LiveParty_GetStoredXUID(XUID *result, const int controllerIndex)
{
  return ?LiveParty_GetStoredXUID@@YA?AUXUID@@H@Z(result, controllerIndex);
}

/*
==============
LiveParty_FeederOnInviteRequest
==============
*/

void __fastcall LiveParty_FeederOnInviteRequest(const int controllerIndex, XUID xuid)
{
  ?LiveParty_FeederOnInviteRequest@@YAXHUXUID@@@Z(controllerIndex, xuid);
}

/*
==============
LiveParty_FeederOnShowCard
==============
*/

void __fastcall LiveParty_FeederOnShowCard(const int localControllerIndex, XUID xuid)
{
  ?LiveParty_FeederOnShowCard@@YAXHUXUID@@@Z(localControllerIndex, xuid);
}

/*
==============
LiveParty_GetPositionByXuid
==============
*/

int __fastcall LiveParty_GetPositionByXuid(XUID currentPlayerXuid)
{
  return ?LiveParty_GetPositionByXuid@@YAHUXUID@@@Z(currentPlayerXuid);
}

/*
==============
LiveParty_GetCurrentIndexXUID
==============
*/

XUID *__fastcall LiveParty_GetCurrentIndexXUID(XUID *result, const int controllerIndex)
{
  return ?LiveParty_GetCurrentIndexXUID@@YA?AUXUID@@H@Z(result, controllerIndex);
}

/*
==============
LiveParty_ClearXUID
==============
*/

void __fastcall LiveParty_ClearXUID(const int controllerIndex)
{
  ?LiveParty_ClearXUID@@YAXH@Z(controllerIndex);
}

/*
==============
LiveParty_Update
==============
*/

void LiveParty_Update(void)
{
  ?LiveParty_Update@@YAXXZ();
}

/*
==============
LiveParty_IsPartyMemberJoinable
==============
*/

bool __fastcall LiveParty_IsPartyMemberJoinable(const int controllerIndex, const XUID playerId, const char **errorString, const char **devErrorString)
{
  return ?LiveParty_IsPartyMemberJoinable@@YA_NHUXUID@@PEAPEBD1@Z(controllerIndex, playerId, errorString, devErrorString);
}

/*
==============
LiveParty_FeederSelection
==============
*/

void __fastcall LiveParty_FeederSelection(const int row)
{
  ?LiveParty_FeederSelection@@YAXH@Z(row);
}

/*
==============
LiveParty_InvitePartyMember
==============
*/

void __fastcall LiveParty_InvitePartyMember(const int controllerIndex, const XUID playerId)
{
  ?LiveParty_InvitePartyMember@@YAXHUXUID@@@Z(controllerIndex, playerId);
}

/*
==============
LiveParty_StoreXUID
==============
*/

void __fastcall LiveParty_StoreXUID(const int controllerIndex)
{
  ?LiveParty_StoreXUID@@YAXH@Z(controllerIndex);
}

/*
==============
LiveParty_Frame
==============
*/

void __fastcall LiveParty_Frame(const int controllerIndex)
{
  ?LiveParty_Frame@@YAXH@Z(controllerIndex);
}

/*
==============
LiveParty_GetPlayer
==============
*/

XUID *__fastcall LiveParty_GetPlayer(XUID *result, const int playerIndex)
{
  return ?LiveParty_GetPlayer@@YA?AUXUID@@H@Z(result, playerIndex);
}

/*
==============
LiveParty_IsMe
==============
*/

bool __fastcall LiveParty_IsMe(const int controllerIndex)
{
  return ?LiveParty_IsMe@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveParty_FeederOverrideCursorPos
==============
*/

void __fastcall LiveParty_FeederOverrideCursorPos(const int viewmax, int *cursorPos, int *startPos)
{
  ?LiveParty_FeederOverrideCursorPos@@YAXHPEAH0@Z(viewmax, cursorPos, startPos);
}

/*
==============
LiveParty_IsLocal
==============
*/

bool __fastcall LiveParty_IsLocal(const int controllerIndex, XUID xuid)
{
  return ?LiveParty_IsLocal@@YA_NHUXUID@@@Z(controllerIndex, xuid);
}

/*
==============
LiveParty_IsSlotSelected
==============
*/

bool __fastcall LiveParty_IsSlotSelected(const int controllerIndex, const int slot)
{
  return ?LiveParty_IsSlotSelected@@YA_NHH@Z(controllerIndex, slot);
}

/*
==============
LiveParty_Initialize
==============
*/

void LiveParty_Initialize(void)
{
  ?LiveParty_Initialize@@YAXXZ();
}

/*
==============
LiveParty_ClearXUID
==============
*/
void LiveParty_ClearXUID(const int controllerIndex)
{
  const XUID *v1; 
  XUID result; 

  v1 = XUID::NullXUID(&result);
  XUID::operator=(&s_partyGlobals.storedMemberId, v1);
}

/*
==============
LiveParty_FeederOnInviteRequest
==============
*/
void LiveParty_FeederOnInviteRequest(const int controllerIndex, XUID xuid)
{
  int v4; 
  int Count; 
  XUID *v6; 
  char *v7; 
  int PositionByXuid; 
  char *devErrorString; 
  XUID xuida; 
  XUID result; 
  PartyType typeOfPartyTheUserIsIn; 
  char *errorString; 

  if ( !Live_HasOnlineServicesAndRequirementsToInvite(controllerIndex, (const char **)&errorString, (const char **)&devErrorString, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 213, ASSERT_TYPE_ASSERT, "(Live_HasOnlineServicesAndRequirementsToInvite( controllerIndex, &errorString, &devErrorString, true ))", (const char *)&queryFormat, "Live_HasOnlineServicesAndRequirementsToInvite( controllerIndex, &errorString, &devErrorString, true )") )
    __debugbreak();
  if ( !Live_HasOnlineServicesAndRequirementsToInvite(controllerIndex, (const char **)&errorString, (const char **)&devErrorString, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 148, ASSERT_TYPE_ASSERT, "(Live_HasOnlineServicesAndRequirementsToInvite( controllerIndex, errorString, devErrorString, true ))", (const char *)&queryFormat, "Live_HasOnlineServicesAndRequirementsToInvite( controllerIndex, errorString, devErrorString, true )") )
    __debugbreak();
  if ( !Live_IsInGamemodeToInvite((const char **)&errorString, (const char **)&devErrorString) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 149, ASSERT_TYPE_ASSERT, "(Live_IsInGamemodeToInvite( errorString, devErrorString ))", (const char *)&queryFormat, "Live_IsInGamemodeToInvite( errorString, devErrorString )") )
    __debugbreak();
  if ( !LiveParty_GetCount() )
  {
    xuida.m_id = xuid.m_id;
    if ( XUID::IsNull(&xuida) )
      goto LABEL_15;
    v4 = 0;
    Count = LiveParty_GetCount();
    if ( Count <= 0 )
      goto LABEL_15;
    while ( 1 )
    {
      v6 = LiveParty_GetXUID(&result, v4);
      if ( XUID::operator==(v6, &xuida) )
        break;
      if ( ++v4 >= Count )
        goto LABEL_15;
    }
    if ( v4 < 0 || v4 >= LiveParty_GetCount() )
    {
LABEL_15:
      v7 = "ONLINE/NOT_IN_LIVE_PARTY";
    }
    else
    {
      if ( !LiveParty_IsLocalPlayer(v4) )
        goto LABEL_18;
      v7 = "ONLINE/LOCAL_LIVE_PARTY_MEMBER";
    }
    errorString = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 214, ASSERT_TYPE_ASSERT, "(LiveParty_IsPartyMemberInvitable( controllerIndex, xuid, &errorString, &devErrorString ))", (const char *)&queryFormat, "LiveParty_IsPartyMemberInvitable( controllerIndex, xuid, &errorString, &devErrorString )") )
      __debugbreak();
  }
LABEL_18:
  if ( Party_IsPlayerInAnyParty(xuid, &typeOfPartyTheUserIsIn) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 215, ASSERT_TYPE_ASSERT, "(!Party_IsPlayerInAnyParty( xuid, typeOfPartyUserIsIn ))", (const char *)&queryFormat, "!Party_IsPlayerInAnyParty( xuid, typeOfPartyUserIsIn )") )
    __debugbreak();
  if ( Live_IsUserSignedInToLive(controllerIndex) )
  {
    if ( LiveParty_GetCount() )
    {
      PositionByXuid = LiveParty_GetPositionByXuid(xuid);
      if ( PositionByXuid >= 0 && PositionByXuid < LiveParty_GetCount() && !LiveParty_IsLocalPlayer(PositionByXuid) )
        LiveParty_InvitePartyMember_Platform(controllerIndex, PositionByXuid);
    }
  }
}

/*
==============
LiveParty_FeederOnJoinRequest
==============
*/
void LiveParty_FeederOnJoinRequest(const int localControllerIndex, XUID xuid)
{
  int PositionByXuid; 
  int v6; 

  if ( (unsigned int)localControllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 278, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", localControllerIndex, v6) )
      __debugbreak();
  }
  PositionByXuid = LiveParty_GetPositionByXuid(xuid);
  if ( PositionByXuid >= 0 )
    LiveParty_JoinOnPartyMember_XB3(localControllerIndex, PositionByXuid);
}

/*
==============
LiveParty_FeederOnReportRequest
==============
*/
void LiveParty_FeederOnReportRequest(const int localControllerIndex, const ReportOffense offense)
{
  unsigned __int64 UniversalId; 
  int v6; 
  LocalClientNum_t outLocalClientNum; 

  if ( (unsigned int)localControllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 121, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", localControllerIndex, v6) )
      __debugbreak();
  }
  if ( Live_IsUserSignedInToLive(localControllerIndex) && LiveParty_GetCount() && LiveParty_GetPositionByXuid(s_partyGlobals.storedMemberId) >= 0 )
  {
    UniversalId = XUID::GetUniversalId(&s_partyGlobals.storedMemberId);
    LiveAntiCheat_ReportPlayer(localControllerIndex, offense, UniversalId);
    CL_Mgr_IsControllerMappedToClient(localControllerIndex, &outLocalClientNum);
  }
}

/*
==============
LiveParty_FeederOnShowCard
==============
*/
void LiveParty_FeederOnShowCard(const int localControllerIndex, XUID xuid)
{
  if ( Live_IsUserSignedInToLive(localControllerIndex) )
    LiveParty_FeederOnShowCard_Platform(localControllerIndex, xuid);
}

/*
==============
LiveParty_FeederOverrideCursorPos
==============
*/
void LiveParty_FeederOverrideCursorPos(const int viewmax, int *cursorPos, int *startPos)
{
  int PositionByXuid; 
  const XUID *v7; 
  int Count; 
  int v9; 
  const XUID *XUID; 
  int v11; 
  int v12; 
  __int64 v13; 
  XUID result; 

  if ( !cursorPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 321, ASSERT_TYPE_ASSERT, "(cursorPos)", (const char *)&queryFormat, "cursorPos") )
    __debugbreak();
  if ( !startPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 322, ASSERT_TYPE_ASSERT, "(startPos)", (const char *)&queryFormat, "startPos") )
    __debugbreak();
  if ( *cursorPos < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 323, ASSERT_TYPE_ASSERT, "(*cursorPos >= 0)", (const char *)&queryFormat, "*cursorPos >= 0") )
    __debugbreak();
  if ( *startPos < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 324, ASSERT_TYPE_ASSERT, "(*startPos >= 0)", (const char *)&queryFormat, "*startPos >= 0") )
    __debugbreak();
  PositionByXuid = LiveParty_GetPositionByXuid(s_partyGlobals.currentMemberId);
  if ( LiveParty_GetCount() )
  {
    if ( PositionByXuid >= 0 )
    {
      *cursorPos = PositionByXuid;
    }
    else
    {
      Count = LiveParty_GetCount();
      v9 = I_clamp(*cursorPos, 0, Count - 1);
      *cursorPos = v9;
      s_partyGlobals.currentIndex = v9;
      XUID = LiveParty_GetXUID(&result, *cursorPos);
      XUID::operator=(&s_partyGlobals.currentMemberId, XUID);
    }
  }
  else
  {
    s_partyGlobals.currentIndex = 0;
    v7 = XUID::NullXUID(&result);
    XUID::operator=(&s_partyGlobals.currentMemberId, v7);
    s_partyGlobals.currentStartPos = 0;
  }
  v11 = *cursorPos;
  if ( *startPos > *cursorPos )
    goto LABEL_21;
  v12 = v11 - viewmax;
  if ( *startPos <= v12 )
  {
    v11 = v12 + 1;
LABEL_21:
    *startPos = v11;
  }
  if ( *cursorPos < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 351, ASSERT_TYPE_SANITY, "( *cursorPos >= 0 )", (const char *)&queryFormat, "*cursorPos >= 0") )
    __debugbreak();
  if ( *startPos < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 352, ASSERT_TYPE_SANITY, "( *startPos >= 0 )", (const char *)&queryFormat, "*startPos >= 0") )
    __debugbreak();
  if ( *cursorPos - *startPos >= (unsigned int)viewmax )
  {
    LODWORD(v13) = *cursorPos - *startPos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 353, ASSERT_TYPE_SANITY, "(unsigned)( (*cursorPos - *startPos) ) < (unsigned)( viewmax )", "(*cursorPos - *startPos) doesn't index viewmax\n\t%i not in [0, %i)", v13, viewmax) )
      __debugbreak();
  }
  s_partyGlobals.currentStartPos = *startPos;
}

/*
==============
LiveParty_FeederSelection
==============
*/
void LiveParty_FeederSelection(const int row)
{
  const XUID *XUID; 
  XUID result; 

  s_partyGlobals.currentIndex = row;
  XUID = LiveParty_GetXUID(&result, row);
  XUID::operator=(&s_partyGlobals.currentMemberId, XUID);
}

/*
==============
LiveParty_Frame
==============
*/

void __fastcall LiveParty_Frame(const int controllerIndex)
{
  LiveParty_Frame_Platform(controllerIndex);
}

/*
==============
LiveParty_GetCurrentIndexName
==============
*/

const char *__fastcall LiveParty_GetCurrentIndexName(const XUID xuid)
{
  return LiveParty_GetGamerTag(xuid);
}

/*
==============
LiveParty_GetCurrentIndexXUID
==============
*/
XUID *LiveParty_GetCurrentIndexXUID(XUID *result, const int controllerIndex)
{
  LiveParty_GetXUID(result, s_partyGlobals.currentIndex);
  return result;
}

/*
==============
LiveParty_GetPlayer
==============
*/
XUID *LiveParty_GetPlayer(XUID *result, const int playerIndex)
{
  int v5; 
  int Count; 

  if ( playerIndex >= (unsigned int)LiveParty_GetCount() )
  {
    Count = LiveParty_GetCount();
    v5 = playerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( playerIndex ) < (unsigned)( LiveParty_GetCount() )", "playerIndex doesn't index LiveParty_GetCount()\n\t%i not in [0, %i)", v5, Count) )
      __debugbreak();
  }
  LiveParty_GetXUID(result, playerIndex);
  return result;
}

/*
==============
LiveParty_GetPositionByXuid
==============
*/
__int64 LiveParty_GetPositionByXuid(XUID currentPlayerXuid)
{
  unsigned int v1; 
  int Count; 
  XUID *v3; 
  XUID xuid; 
  XUID result; 

  xuid.m_id = currentPlayerXuid.m_id;
  if ( XUID::IsNull(&xuid) )
    return 0xFFFFFFFFi64;
  v1 = 0;
  Count = LiveParty_GetCount();
  if ( Count <= 0 )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    v3 = LiveParty_GetXUID(&result, v1);
    if ( XUID::operator==(v3, &xuid) )
      break;
    if ( (int)++v1 >= Count )
      return 0xFFFFFFFFi64;
  }
  return v1;
}

/*
==============
LiveParty_GetPresenceForSlot
==============
*/
const char *LiveParty_GetPresenceForSlot(const int controllerIndex, const int slot)
{
  int v4; 
  const XUID *XUID; 
  Online_Friends *Instance; 
  int Index; 
  Online_Friends *v9; 
  const char *v10; 
  XUID friendId; 
  XUID result; 

  XUID::XUID(&friendId);
  v4 = s_partyGlobals.currentStartPos + slot;
  if ( v4 >= LiveParty_GetCount() )
    return (char *)&queryFormat.fmt + 3;
  XUID = LiveParty_GetXUID(&result, v4);
  XUID::operator=(&friendId, XUID);
  if ( LiveParty_GetPresenceString(v4, g_partyFeederText, 128) )
    return g_partyFeederText;
  Instance = Online_Friends::GetInstance();
  Index = Online_Friends::FindIndex(Instance, controllerIndex, friendId);
  if ( Index == -1 )
  {
    if ( Live_XUIDIsLocalPlayer(friendId) || LiveParty_IsInThisTitle(v4) )
      v10 = "XBOXLIVE/ONLINE";
    else
      v10 = "XBOXLIVE/AWAY";
    return SEH_SafeTranslateString(v10);
  }
  else
  {
    v9 = Online_Friends::GetInstance();
    Online_Friends::GetPresence(v9, controllerIndex, Index, g_partyFeederText, 0x80ui64);
    return g_partyFeederText;
  }
}

/*
==============
LiveParty_GetStoredXUID
==============
*/
XUID *LiveParty_GetStoredXUID(XUID *result, const int controllerIndex)
{
  result->m_id = (unsigned __int64)s_partyGlobals.storedMemberId;
  return result;
}

/*
==============
LiveParty_Initialize
==============
*/
void LiveParty_Initialize(void)
{
  *(_QWORD *)&s_partyGlobals.lastInvite = 0i64;
  *(_QWORD *)&s_partyGlobals.currentStartPos = 0i64;
  s_partyGlobals.currentMemberId.m_id = 0i64;
  s_partyGlobals.storedMemberId.m_id = 0i64;
  LiveParty_Initialize_Platform();
}

/*
==============
LiveParty_InvitePartyMember
==============
*/
void LiveParty_InvitePartyMember(const int controllerIndex, const XUID playerId)
{
  int PositionByXuid; 

  if ( Live_IsUserSignedInToLive(controllerIndex) )
  {
    if ( LiveParty_GetCount() )
    {
      PositionByXuid = LiveParty_GetPositionByXuid(playerId);
      if ( PositionByXuid >= 0 && PositionByXuid < LiveParty_GetCount() && !LiveParty_IsLocalPlayer(PositionByXuid) )
        LiveParty_InvitePartyMember_Platform(controllerIndex, PositionByXuid);
    }
  }
}

/*
==============
LiveParty_IsLocal
==============
*/
bool LiveParty_IsLocal(const int controllerIndex, XUID xuid)
{
  int PositionByXuid; 
  int v6; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 97, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  PositionByXuid = LiveParty_GetPositionByXuid(xuid);
  return PositionByXuid >= 0 && LiveParty_IsLocalPlayer(PositionByXuid);
}

/*
==============
LiveParty_IsMe
==============
*/
char LiveParty_IsMe(const int controllerIndex)
{
  int v2; 
  int Count; 
  XUID *XUID; 
  int v7; 
  XUID result; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v7) )
      __debugbreak();
  }
  v2 = 0;
  Count = LiveParty_GetCount();
  if ( Count <= 0 )
    return 0;
  while ( 1 )
  {
    if ( LiveParty_IsLocalPlayer(v2) && LiveParty_IsLocalControllerIndex(v2, controllerIndex) )
    {
      XUID = LiveParty_GetXUID(&result, v2);
      if ( XUID::operator==(XUID, &s_partyGlobals.storedMemberId) )
        break;
    }
    if ( ++v2 >= Count )
      return 0;
  }
  return 1;
}

/*
==============
LiveParty_IsPartyMemberInvitable
==============
*/
char LiveParty_IsPartyMemberInvitable(const int controllerIndex, const XUID playerId, const char **errorString, const char **devErrorString)
{
  int PositionByXuid; 

  if ( !Live_HasOnlineServicesAndRequirementsToInvite(controllerIndex, errorString, devErrorString, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 148, ASSERT_TYPE_ASSERT, "(Live_HasOnlineServicesAndRequirementsToInvite( controllerIndex, errorString, devErrorString, true ))", (const char *)&queryFormat, "Live_HasOnlineServicesAndRequirementsToInvite( controllerIndex, errorString, devErrorString, true )") )
    __debugbreak();
  if ( !Live_IsInGamemodeToInvite(errorString, devErrorString) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\liveparty_common.cpp", 149, ASSERT_TYPE_ASSERT, "(Live_IsInGamemodeToInvite( errorString, devErrorString ))", (const char *)&queryFormat, "Live_IsInGamemodeToInvite( errorString, devErrorString )") )
    __debugbreak();
  if ( !LiveParty_GetCount() )
  {
    PositionByXuid = LiveParty_GetPositionByXuid(playerId);
    if ( PositionByXuid < 0 || PositionByXuid >= LiveParty_GetCount() )
    {
      *errorString = "ONLINE/NOT_IN_LIVE_PARTY";
      return 0;
    }
    if ( LiveParty_IsLocalPlayer(PositionByXuid) )
    {
      *errorString = "ONLINE/LOCAL_LIVE_PARTY_MEMBER";
      return 0;
    }
  }
  return 1;
}

/*
==============
LiveParty_IsPartyMemberJoinable
==============
*/
char LiveParty_IsPartyMemberJoinable(const int controllerIndex, const XUID playerId, const char **errorString, const char **devErrorString)
{
  int PositionByXuid; 
  Online_Friends *Instance; 
  unsigned __int64 PlatformIdFromXuid; 

  if ( !LiveParty_GetCount() )
  {
    *errorString = "ONLINE/NOT_IN_LIVE_PARTY";
    *devErrorString = "The party is empty";
    return 0;
  }
  PositionByXuid = LiveParty_GetPositionByXuid(playerId);
  if ( PositionByXuid < 0 || PositionByXuid >= LiveParty_GetCount() )
  {
    *errorString = "ONLINE/NOT_IN_LIVE_PARTY";
    *devErrorString = "The member does not exist in party";
  }
  else if ( LiveParty_IsLocalPlayer(PositionByXuid) )
  {
    *errorString = "ONLINE/LOCAL_LIVE_PARTY_MEMBER";
  }
  else
  {
    Instance = Online_Friends::GetInstance();
    PlatformIdFromXuid = XUID::GetPlatformIdFromXuid(playerId);
    if ( Online_Friends::DoesUserHaveValidLobbySession(Instance, controllerIndex, PlatformIdFromXuid) )
      return 1;
    *errorString = "MENU/JOIN_SESSION_INVALID";
  }
  return 0;
}

/*
==============
LiveParty_IsSlotSelected
==============
*/
bool LiveParty_IsSlotSelected(const int controllerIndex, const int slot)
{
  return LiveParty_GetCount() && s_partyGlobals.currentIndex - s_partyGlobals.currentStartPos == slot;
}

/*
==============
LiveParty_StoreXUID
==============
*/
void LiveParty_StoreXUID(const int controllerIndex)
{
  XUID::operator=(&s_partyGlobals.storedMemberId, &s_partyGlobals.currentMemberId);
}

/*
==============
LiveParty_Update
==============
*/

void LiveParty_Update(void)
{
  LiveParty_Update_Platform();
}

