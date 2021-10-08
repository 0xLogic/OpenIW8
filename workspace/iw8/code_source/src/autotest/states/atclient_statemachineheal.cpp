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
  __int64 v3; 
  AutomatedInput_Record records; 

  __asm { vmovss  xmm1, cs:__real@3dcccccd }
  v3 = localClientNum;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  memset(&records.keys.keyBits.array[1], 0, 24);
  __asm
  {
    vmovss  [rsp+68h+records.deferTimeSeconds], xmm0
    vmovss  [rsp+68h+records.holdTimeSeconds], xmm1
  }
  records.keys.keyBits.array[0] = 2048;
  __asm { vmovups xmmword ptr [rsp+68h+records.moveStick], xmm0 }
  CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
  s_durationMS_1[v3] = 2000;
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

