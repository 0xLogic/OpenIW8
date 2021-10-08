/*
==============
ATClient_StateMachineInGameQuitEnter
==============
*/

void __fastcall ATClient_StateMachineInGameQuitEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineInGameQuitEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineInGameQuitTransition
==============
*/

bool __fastcall ATClient_StateMachineInGameQuitTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineInGameQuitTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineInGameQuitEnter
==============
*/
void ATClient_StateMachineInGameQuitEnter(const LocalClientNum_t localClientNum)
{
  AutomatedInput_Record records; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  int v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  int v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 

  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vmovss  xmm0, cs:__real@3dcccccd
  }
  records.keys.keyBits.array[0] = 0x20000;
  memset(&records.keys.keyBits.array[1], 0, 40);
  v7 = 0i64;
  v8 = 0i64;
  v9 = 0i64;
  v15 = 0i64;
  v16 = 0i64;
  v17 = 0i64;
  v23 = 0i64;
  v24 = 0i64;
  v25 = 0i64;
  v31 = 0i64;
  v32 = 0i64;
  v33 = 0i64;
  v39 = 0i64;
  v40 = 0i64;
  v41 = 0i64;
  __asm
  {
    vmovss  [rsp+170h+records.deferTimeSeconds], xmm1
    vmovss  [rsp+170h+records.holdTimeSeconds], xmm0
    vmovss  [rsp+170h+var_11C], xmm1
    vmovss  [rsp+170h+var_118], xmm0
    vmovss  [rbp+70h+var_E8], xmm1
    vmovss  [rbp+70h+var_E4], xmm0
    vmovss  [rbp+70h+var_B4], xmm1
    vmovss  [rbp+70h+var_B0], xmm0
    vmovss  [rbp+70h+var_80], xmm1
    vmovss  [rbp+70h+var_7C], xmm0
    vmovss  [rbp+70h+var_4C], xmm1
    vmovss  [rbp+70h+var_48], xmm0
  }
  v6 = 1024;
  v10 = 0i64;
  v11 = 0i64;
  v14 = 1024;
  v18 = 0i64;
  v19 = 0i64;
  v22 = 0x40000000;
  v26 = 0i64;
  v27 = 0i64;
  v30 = 2048;
  v34 = 0i64;
  v35 = 0i64;
  v38 = 0x40000000;
  v42 = 0i64;
  v43 = 0i64;
  CL_Input_AddAutomatedSequence(localClientNum, &records, 6);
}

/*
==============
ATClient_StateMachineInGameQuitTransition
==============
*/
char ATClient_StateMachineInGameQuitTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  *outNewState = -2;
  if ( CL_Input_AutomatedSequenceRunning(localClientNum) )
    return 0;
  *outNewState = 0;
  return 1;
}

