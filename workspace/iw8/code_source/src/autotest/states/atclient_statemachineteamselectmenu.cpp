/*
==============
ATClient_StateMachineTeamSelectMenuEnter
==============
*/

void __fastcall ATClient_StateMachineTeamSelectMenuEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineTeamSelectMenuEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineTeamSelectMenuTransition
==============
*/

bool __fastcall ATClient_StateMachineTeamSelectMenuTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineTeamSelectMenuTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineTeamSelectMenuEnter
==============
*/
void ATClient_StateMachineTeamSelectMenuEnter(const LocalClientNum_t localClientNum)
{
  AutomatedInput_Record records; 

  records.keys.keyBits.array[0] = 0x40000000;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  memset(&records.keys.keyBits.array[1], 0, 24);
  __asm
  {
    vmovss  [rsp+68h+records.deferTimeSeconds], xmm0
    vmovss  [rsp+68h+records.holdTimeSeconds], xmm0
    vmovups xmmword ptr [rsp+68h+records.moveStick], xmm0
  }
  CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
}

/*
==============
ATClient_StateMachineTeamSelectMenuTransition
==============
*/
char ATClient_StateMachineTeamSelectMenuTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  *outNewState = 0;
  return 1;
}

