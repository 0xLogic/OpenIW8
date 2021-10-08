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

void __fastcall ATClient_StateMachineRandomWalkEnter(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  char v29; 
  char v30; 
  AutomatedInput_Record records; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm9
  }
  _RBX = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinerandomwalk.cpp", 15, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationSeconds ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationSeconds )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_RandomWalkTimeMinimum, "ATClient_RandomWalkTimeMinimum");
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_RandomWalkTimeDurationRange, "ATClient_RandomWalkTimeDurationRange");
  __asm { vmovaps xmm6, xmm0 }
  rand();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm1, xmm1, cs:__real@38000100
  }
  _RCX = s_durationSeconds;
  __asm
  {
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm0, xmm2, xmm7
    vxorps  xmm9, xmm9, xmm9
    vmovss  dword ptr [rcx+rbx*4], xmm0
    vmovss  [rsp+0B8h+records.holdTimeSeconds], xmm0
    vmovss  [rsp+0B8h+records.deferTimeSeconds], xmm9
  }
  memset(&records.keys, 0, sizeof(records.keys));
  rand();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@38000100
    vsubss  xmm1, xmm1, cs:__real@3f000000
    vmovss  dword ptr [rsp+0B8h+records.moveStick], xmm1
  }
  rand();
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0B8h+records.moveStick]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@38000100
    vsubss  xmm2, xmm1, cs:__real@3f000000
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm6, xmm3, xmm0
    vcomiss xmm6, xmm9
    vmovss  dword ptr [rsp+0B8h+records.moveStick+4], xmm2
  }
  if ( v29 | v30 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    __asm { vmovss  xmm4, dword ptr [rsp+0B8h+records.moveStick] }
  }
  __asm
  {
    vmovaps xmm1, xmm6
    vrsqrtss xmm2, xmm1, xmm6
    vmovss  xmm1, cs:__real@bf666666; min
    vmulss  xmm0, xmm4, xmm2; val
    vmulss  xmm2, xmm2, dword ptr [rsp+0B8h+records.moveStick+4]
    vmovss  dword ptr [rsp+0B8h+records.moveStick+4], xmm2
    vmovss  xmm2, cs:__real@3f666666; max
    vmovss  dword ptr [rsp+0B8h+records.moveStick], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@3f666666; max
    vmovss  xmm1, cs:__real@bf666666; min
    vmovss  dword ptr [rsp+0B8h+records.moveStick], xmm0
    vmovss  xmm0, dword ptr [rsp+0B8h+records.moveStick+4]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+records.moveStick+4], xmm0
    vmovss  dword ptr [rsp+0B8h+records.lookStick], xmm9
    vmovss  dword ptr [rsp+0B8h+records.lookStick+4], xmm9
  }
  CL_Input_AddAutomatedSequence((LocalClientNum_t)_RBX, &records, 1);
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
  }
}

/*
==============
ATClient_StateMachineRandomWalkTransition
==============
*/
char ATClient_StateMachineRandomWalkTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  bool v5; 
  bool v6; 
  int v11; 

  _RBX = localClientNum;
  v5 = (unsigned int)localClientNum <= LOCAL_CLIENT_COUNT;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v11 = 2;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinerandomwalk.cpp", 48, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationSeconds ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationSeconds )\n\t%i not in [0, %i)", localClientNum, v11);
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  _RCX = s_durationSeconds;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rcx+rbx*4]
  }
  if ( v5 )
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
  int v11; 

  _RBX = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v11 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinerandomwalk.cpp", 39, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationSeconds ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationSeconds )\n\t%i not in [0, %i)", localClientNum, v11) )
      __debugbreak();
  }
  _RCX = s_durationSeconds;
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+rbx*4]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vmulss  xmm2, xmm0, cs:__real@3a83126f
    vsubss  xmm2, xmm1, xmm2
    vmovss  dword ptr [rcx+rbx*4], xmm2
  }
}

