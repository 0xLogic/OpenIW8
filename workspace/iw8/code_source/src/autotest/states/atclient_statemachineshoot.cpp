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

void __fastcall ATClient_StateMachineShootEnter(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  const dvar_t *v2; 
  __int64 v3; 
  int v4; 
  AutomatedInput_Record records; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v2 = DVARBOOL_ATClient_AllowOffensiveBehavior;
  v3 = localClientNum;
  if ( !DVARBOOL_ATClient_AllowOffensiveBehavior && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_AllowOffensiveBehavior") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v4 = 0;
  if ( v2->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vmovss  [rbp+57h+records.holdTimeSeconds], xmm0
      vmovss  [rbp+57h+var_4C], xmm0
      vmovss  xmm0, cs:__real@3dcccccd
    }
    memset(&records.keys.keyBits.array[1], 0, 24);
    v12 = 0i64;
    v13 = 0i64;
    v14 = 0i64;
    __asm
    {
      vmovss  [rbp+57h+var_48], xmm0
      vmovss  [rbp+57h+records.deferTimeSeconds], xmm1
    }
    records.keys.keyBits.array[0] = 4096;
    __asm { vmovups xmmword ptr [rbp+57h+records.moveStick], xmm1 }
    v11 = 0x10000000;
    __asm { vmovups [rbp+57h+var_28], xmm1 }
    CL_Input_AddAutomatedSequence((LocalClientNum_t)v3, &records, 2);
    v4 = 3000;
  }
  s_durationMS_5[v3] = v4;
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

