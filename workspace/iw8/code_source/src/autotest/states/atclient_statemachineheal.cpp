/*
==============
ATClient_StateMachineHealTransition
==============
*/

bool __fastcall ATClient_StateMachineHealTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineHealTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineHealEnter
==============
*/

void __fastcall ATClient_StateMachineHealEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineHealEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineHealUpdate
==============
*/

void __fastcall ATClient_StateMachineHealUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  ?ATClient_StateMachineHealUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineHealEnter
==============
*/
void ATClient_StateMachineHealEnter(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  AutomatedInput_Record records; 

  v1 = localClientNum;
  memset(&records.keys.keyBits.array[1], 0, 40);
  records.deferTimeSeconds = 0.0;
  records.holdTimeSeconds = FLOAT_0_1;
  records.keys.keyBits.array[0] = 2048;
  CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
  s_durationMS_1[v1] = 2000;
}

/*
==============
ATClient_StateMachineHealTransition
==============
*/
char ATClient_StateMachineHealTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  if ( s_durationMS_1[localClientNum] > 0 )
    return 0;
  *outNewState = 0;
  return 1;
}

/*
==============
ATClient_StateMachineHealUpdate
==============
*/
void ATClient_StateMachineHealUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  s_durationMS_1[localClientNum] -= msec;
}

