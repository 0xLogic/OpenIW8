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
  float v2; 
  float v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  float v10; 
  float v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  float v18; 
  float v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  float v26; 
  float v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  float v34; 
  float v35; 
  int v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 

  records.keys.keyBits.array[0] = 0x20000;
  memset(&records.keys.keyBits.array[1], 0, 40);
  v5 = 0i64;
  v6 = 0i64;
  v7 = 0i64;
  v13 = 0i64;
  v14 = 0i64;
  v15 = 0i64;
  v21 = 0i64;
  v22 = 0i64;
  v23 = 0i64;
  v29 = 0i64;
  v30 = 0i64;
  v31 = 0i64;
  v37 = 0i64;
  v38 = 0i64;
  v39 = 0i64;
  records.deferTimeSeconds = FLOAT_0_5;
  records.holdTimeSeconds = FLOAT_0_1;
  v2 = FLOAT_0_5;
  v3 = FLOAT_0_1;
  v10 = FLOAT_0_5;
  v11 = FLOAT_0_1;
  v18 = FLOAT_0_5;
  v19 = FLOAT_0_1;
  v26 = FLOAT_0_5;
  v27 = FLOAT_0_1;
  v34 = FLOAT_0_5;
  v35 = FLOAT_0_1;
  v4 = 1024;
  v8 = 0i64;
  v9 = 0i64;
  v12 = 1024;
  v16 = 0i64;
  v17 = 0i64;
  v20 = 0x40000000;
  v24 = 0i64;
  v25 = 0i64;
  v28 = 2048;
  v32 = 0i64;
  v33 = 0i64;
  v36 = 0x40000000;
  v40 = 0i64;
  v41 = 0i64;
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

