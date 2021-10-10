/*
==============
ATClient_StateMachineShootTransition
==============
*/

bool __fastcall ATClient_StateMachineShootTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineShootTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineShootUpdate
==============
*/

void __fastcall ATClient_StateMachineShootUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  ?ATClient_StateMachineShootUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineShootEnter
==============
*/

void __fastcall ATClient_StateMachineShootEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineShootEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineShootEnter
==============
*/
void ATClient_StateMachineShootEnter(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v2; 
  int v3; 
  AutomatedInput_Record records; 
  float v5; 
  float v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int128 v11; 

  v1 = DVARBOOL_ATClient_AllowOffensiveBehavior;
  v2 = localClientNum;
  if ( !DVARBOOL_ATClient_AllowOffensiveBehavior && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_AllowOffensiveBehavior") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v3 = 0;
  if ( v1->current.enabled )
  {
    records.holdTimeSeconds = FLOAT_1_0;
    v5 = FLOAT_1_0;
    memset(&records.keys.keyBits.array[1], 0, 40);
    v8 = 0i64;
    v9 = 0i64;
    v10 = 0i64;
    v6 = FLOAT_0_1;
    records.deferTimeSeconds = 0.0;
    records.keys.keyBits.array[0] = 4096;
    v7 = 0x10000000;
    v11 = 0i64;
    CL_Input_AddAutomatedSequence((LocalClientNum_t)v2, &records, 2);
    v3 = 3000;
  }
  s_durationMS_5[v2] = v3;
}

/*
==============
ATClient_StateMachineShootTransition
==============
*/
char ATClient_StateMachineShootTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  if ( s_durationMS_5[localClientNum] > 0 )
    return 0;
  *outNewState = 0;
  return 1;
}

/*
==============
ATClient_StateMachineShootUpdate
==============
*/
void ATClient_StateMachineShootUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  s_durationMS_5[localClientNum] -= msec;
}

