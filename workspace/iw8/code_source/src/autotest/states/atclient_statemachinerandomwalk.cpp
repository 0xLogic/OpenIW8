/*
==============
ATClient_StateMachineRandomWalkUpdate
==============
*/

void __fastcall ATClient_StateMachineRandomWalkUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  ?ATClient_StateMachineRandomWalkUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineRandomWalkEnter
==============
*/

void __fastcall ATClient_StateMachineRandomWalkEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineRandomWalkEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineRandomWalkTransition
==============
*/

bool __fastcall ATClient_StateMachineRandomWalkTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineRandomWalkTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineRandomWalkEnter
==============
*/
void ATClient_StateMachineRandomWalkEnter(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  double Float_Internal_DebugName; 
  float v3; 
  double v4; 
  int v5; 
  int v6; 
  float v7; 
  __int128 v8; 
  double v11; 
  double v12; 
  AutomatedInput_Record records; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinerandomwalk.cpp", 15, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationSeconds ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationSeconds )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_RandomWalkTimeMinimum, "ATClient_RandomWalkTimeMinimum");
  v3 = *(float *)&Float_Internal_DebugName;
  v4 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_RandomWalkTimeDurationRange, "ATClient_RandomWalkTimeDurationRange");
  v5 = rand();
  s_durationSeconds[v1] = (float)((float)((float)v5 * 0.000030518509) * *(float *)&v4) + v3;
  records.holdTimeSeconds = (float)((float)((float)v5 * 0.000030518509) * *(float *)&v4) + v3;
  records.deferTimeSeconds = 0.0;
  memset(&records.keys, 0, sizeof(records.keys));
  records.moveStick.v[0] = (float)((float)rand() * 0.000030518509) - 0.5;
  v6 = rand();
  v7 = records.moveStick.v[0];
  v8 = 0i64;
  *(float *)&v8 = (float)((float)((float)((float)v6 * 0.000030518509) - 0.5) * (float)((float)((float)v6 * 0.000030518509) - 0.5)) + (float)(v7 * v7);
  records.moveStick.v[1] = (float)((float)v6 * 0.000030518509) - 0.5;
  if ( *(float *)&v8 <= 0.0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    v7 = records.moveStick.v[0];
  }
  _XMM1 = v8;
  __asm { vrsqrtss xmm2, xmm1, xmm6 }
  v11 = I_fclamp(v7 * *(float *)&_XMM2, -0.89999998, 0.89999998);
  records.moveStick.v[0] = *(float *)&v11;
  v12 = I_fclamp(*(float *)&_XMM2 * records.moveStick.v[1], -0.89999998, 0.89999998);
  records.moveStick.v[1] = *(float *)&v12;
  records.lookStick.v[0] = 0.0;
  records.lookStick.v[1] = 0.0;
  CL_Input_AddAutomatedSequence((LocalClientNum_t)v1, &records, 1);
}

/*
==============
ATClient_StateMachineRandomWalkTransition
==============
*/
char ATClient_StateMachineRandomWalkTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  __int64 v2; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinerandomwalk.cpp", 48, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationSeconds ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationSeconds )\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( s_durationSeconds[v2] >= 0.0 )
    return 0;
  *outNewState = 0;
  return 1;
}

/*
==============
ATClient_StateMachineRandomWalkUpdate
==============
*/
void ATClient_StateMachineRandomWalkUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  __int64 v2; 
  int v5; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinerandomwalk.cpp", 39, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationSeconds ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationSeconds )\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  s_durationSeconds[v2] = s_durationSeconds[v2] - (float)((float)msec * 0.001);
}

