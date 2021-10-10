/*
==============
ATClient_StateMachineInGameSpawnSelectTransition
==============
*/

bool __fastcall ATClient_StateMachineInGameSpawnSelectTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineInGameSpawnSelectTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineInGameSpawnSelectUpdate
==============
*/

void __fastcall ATClient_StateMachineInGameSpawnSelectUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  ?ATClient_StateMachineInGameSpawnSelectUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineInGameSpawnSelectEnter
==============
*/

void __fastcall ATClient_StateMachineInGameSpawnSelectEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineInGameSpawnSelectEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineInGameSpawnSelectEnter
==============
*/
void ATClient_StateMachineInGameSpawnSelectEnter(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  AutomatedInput_Record records; 

  v1 = localClientNum;
  if ( !LUI_IsMenuOpenAndVisible(localClientNum, "???") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineingamespawnselect.cpp", 21, ASSERT_TYPE_ASSERT, "(LUI_IsMenuOpenAndVisible( localClientNum, ATCLIENT_MENU_SPAWN_SELECT ))", (const char *)&queryFormat, "LUI_IsMenuOpenAndVisible( localClientNum, ATCLIENT_MENU_SPAWN_SELECT )") )
    __debugbreak();
  records.keys.keyBits.array[0] = 0x40000000;
  memset(&records.keys.keyBits.array[1], 0, 40);
  records.deferTimeSeconds = 0.0;
  records.holdTimeSeconds = 0.0;
  CL_Input_AddAutomatedSequence((LocalClientNum_t)v1, &records, 1);
  s_durationMS_4[v1] = 1000;
}

/*
==============
ATClient_StateMachineInGameSpawnSelectTransition
==============
*/
char ATClient_StateMachineInGameSpawnSelectTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  if ( s_durationMS_4[localClientNum] > 0 )
    return 0;
  *outNewState = 0;
  return 1;
}

/*
==============
ATClient_StateMachineInGameSpawnSelectUpdate
==============
*/
void ATClient_StateMachineInGameSpawnSelectUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  s_durationMS_4[localClientNum] -= msec;
}

