/*
==============
LUI_DataBinding_VoiceChat_FrameUpdate
==============
*/

void __fastcall LUI_DataBinding_VoiceChat_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_VoiceChat_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_VoiceChat_CacheTalkers
==============
*/

void __fastcall LUI_DataBinding_VoiceChat_CacheTalkers(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_VoiceChat_CacheTalkers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_VoiceChat_CacheTalkers
==============
*/
void LUI_DataBinding_VoiceChat_CacheTalkers(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  int ClientNum; 
  const PartyData *GameParty; 
  int MemberTeam; 
  bool cgameInitCalled; 
  int v7; 
  bool *p_isSameTeam; 
  const char *MemberName; 
  bool v10; 
  int v11; 
  int v12; 

  v1 = localClientNum;
  memset_0(s_LUITalkerInfo, 0, sizeof(s_LUITalkerInfo));
  v2 = 0;
  ClientNum = 0;
  GameParty = Live_GetGameParty();
  if ( (unsigned int)v1 >= 2 )
  {
    v12 = 2;
    v11 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  MemberTeam = 0;
  cgameInitCalled = clientUIActives[v1].cgameInitCalled;
  if ( cgameInitCalled )
  {
    ClientNum = CG_GetClientNum((const LocalClientNum_t)v1);
    MemberTeam = Party_GetMemberTeam(GameParty, ClientNum);
  }
  v7 = 0;
  p_isSameTeam = &s_LUITalkerInfo[0].isSameTeam;
  do
  {
    if ( v2 >= 4 )
      break;
    if ( (!cgameInitCalled || ClientNum != v7) && CL_IsPlayerTalking(GameParty, v7) )
    {
      MemberName = Party_GetMemberName(GameParty, v7);
      Core_strcpy(s_LUITalkerInfo[v2].name, 0x24ui64, MemberName);
      v10 = !cgameInitCalled || MemberTeam == Party_GetMemberTeam(GameParty, v7);
      ++v2;
      *p_isSameTeam = v10;
      p_isSameTeam += 37;
    }
    ++v7;
  }
  while ( v7 < 200 );
}

/*
==============
LUI_DataBinding_VoiceChat_FrameUpdate
==============
*/
void LUI_DataBinding_VoiceChat_FrameUpdate(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  int ClientNum; 
  const PartyData *GameParty; 
  bool cgameInitCalled; 
  int MemberTeam; 
  int v7; 
  bool *p_isSameTeam; 
  const char *MemberName; 
  bool v10; 
  int v11; 
  int v12; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_DataBinding_VoiceChat_FrameUpdate");
  memset_0(s_LUITalkerInfo, 0, sizeof(s_LUITalkerInfo));
  v2 = 0;
  ClientNum = 0;
  GameParty = Live_GetGameParty();
  if ( (unsigned int)v1 >= 2 )
  {
    v12 = 2;
    v11 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  cgameInitCalled = clientUIActives[v1].cgameInitCalled;
  MemberTeam = 0;
  if ( cgameInitCalled )
  {
    ClientNum = CG_GetClientNum((const LocalClientNum_t)v1);
    MemberTeam = Party_GetMemberTeam(GameParty, ClientNum);
  }
  v7 = 0;
  p_isSameTeam = &s_LUITalkerInfo[0].isSameTeam;
  do
  {
    if ( v2 >= 4 )
      break;
    if ( (!cgameInitCalled || ClientNum != v7) && CL_IsPlayerTalking(GameParty, v7) )
    {
      MemberName = Party_GetMemberName(GameParty, v7);
      Core_strcpy(s_LUITalkerInfo[v2].name, 0x24ui64, MemberName);
      v10 = !cgameInitCalled || MemberTeam == Party_GetMemberTeam(GameParty, v7);
      *p_isSameTeam = v10;
      ++v2;
      p_isSameTeam += 37;
    }
    ++v7;
  }
  while ( v7 < 200 );
  LUIBinding::PushBool(&s_LUI_DataBinding_IsSelfTalking, localClientNum);
  LUIBinding::PushParamBool(&s_LUI_DataBinding_TalkerActive, localClientNum);
  LUIBinding::PushParamString(&s_LUI_DataBinding_TalkerName, localClientNum);
  LUIBinding::PushParamBool(&s_LUI_DataBinding_TalkerIsSameTeam, localClientNum);
  Sys_ProfEndNamedEvent();
}

/*
==============
s_LUI_DataBinding_Get_IsSelfTalking
==============
*/
bool s_LUI_DataBinding_Get_IsSelfTalking(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const PartyData *GameParty; 
  int ClientNum; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  GameParty = Live_GetGameParty();
  if ( (unsigned int)v1 >= 2 )
  {
    v6 = 2;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( !clientUIActives[v1].cgameInitCalled )
    return 0;
  ClientNum = CG_GetClientNum((const LocalClientNum_t)v1);
  return CL_IsPlayerTalking(GameParty, ClientNum);
}

/*
==============
s_LUI_DataBinding_Get_TalkerActive
==============
*/
bool s_LUI_DataBinding_Get_TalkerActive(LocalClientNum_t localClientNum, unsigned __int8 param)
{
  int v4; 
  int v5; 

  if ( param >= 4u )
  {
    v5 = 4;
    v4 = param;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_voicechat.cpp", 75, ASSERT_TYPE_ASSERT, "(unsigned)( param ) < (unsigned)( ( sizeof( *array_counter( s_LUITalkerInfo ) ) + 0 ) )", "param doesn't index ARRAY_COUNT( s_LUITalkerInfo )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return s_LUITalkerInfo[param].name[0] != 0;
}

/*
==============
s_LUI_DataBinding_Get_TalkerIsSameTeam
==============
*/
_BOOL8 s_LUI_DataBinding_Get_TalkerIsSameTeam(LocalClientNum_t localClientNum, unsigned __int8 param)
{
  int v4; 
  int v5; 

  if ( param >= 4u )
  {
    v5 = 4;
    v4 = param;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_voicechat.cpp", 98, ASSERT_TYPE_ASSERT, "(unsigned)( param ) < (unsigned)( ( sizeof( *array_counter( s_LUITalkerInfo ) ) + 0 ) )", "param doesn't index ARRAY_COUNT( s_LUITalkerInfo )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return s_LUITalkerInfo[param].isSameTeam;
}

/*
==============
s_LUI_DataBinding_Get_TalkerName
==============
*/
char s_LUI_DataBinding_Get_TalkerName(LocalClientNum_t localClientNum, unsigned __int8 param, unsigned __int64 outStringSize, char *outString)
{
  int v5; 
  LUITalkerInfo *v7; 
  int v9; 
  int v10; 

  v5 = outStringSize;
  if ( param >= 4u )
  {
    v10 = 4;
    v9 = param;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_voicechat.cpp", 83, ASSERT_TYPE_ASSERT, "(unsigned)( param ) < (unsigned)( ( sizeof( *array_counter( s_LUITalkerInfo ) ) + 0 ) )", "param doesn't index ARRAY_COUNT( s_LUITalkerInfo )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v7 = &s_LUITalkerInfo[param];
  if ( !v7->name[0] )
    return 0;
  Core_strcpy(outString, v5, v7->name);
  return 1;
}

