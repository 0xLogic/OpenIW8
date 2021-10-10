/*
==============
ATClient_StateMachineInGameLoadoutSelectTransition
==============
*/

bool __fastcall ATClient_StateMachineInGameLoadoutSelectTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineInGameLoadoutSelectTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineInGameLoadoutSelectEnter
==============
*/

void __fastcall ATClient_StateMachineInGameLoadoutSelectEnter(LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineInGameLoadoutSelectEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineInGameLoadoutSelectEnter
==============
*/
void ATClient_StateMachineInGameLoadoutSelectEnter(LocalClientNum_t localClientNum)
{
  AutomatedInput_Record records; 

  if ( !LUI_IsMenuOpenAndVisible(localClientNum, "LoadoutSelect") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineingameloadoutselect.cpp", 15, ASSERT_TYPE_ASSERT, "(LUI_IsMenuOpenAndVisible( localClientNum, ATCLIENT_MENU_LOADOUT_SELECT ))", (const char *)&queryFormat, "LUI_IsMenuOpenAndVisible( localClientNum, ATCLIENT_MENU_LOADOUT_SELECT )") )
    __debugbreak();
  records.keys.keyBits.array[0] = 0x40000000;
  memset(&records.keys.keyBits.array[1], 0, 40);
  records.deferTimeSeconds = 0.0;
  records.holdTimeSeconds = 0.0;
  CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
}

/*
==============
ATClient_StateMachineInGameLoadoutSelectTransition
==============
*/
char ATClient_StateMachineInGameLoadoutSelectTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  *outNewState = 0;
  return 1;
}

