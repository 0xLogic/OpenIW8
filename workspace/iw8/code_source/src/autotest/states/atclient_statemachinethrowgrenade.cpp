/*
==============
ATClient_StateMachineThrowGrenadeTransition
==============
*/

bool __fastcall ATClient_StateMachineThrowGrenadeTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineThrowGrenadeTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineThrowGrenadeEnter
==============
*/

void __fastcall ATClient_StateMachineThrowGrenadeEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineThrowGrenadeEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineThrowGrenadeEnter
==============
*/
void ATClient_StateMachineThrowGrenadeEnter(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  unsigned int flags; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  AutomatedInput_Record records; 

  v2 = DVARBOOL_ATClient_AllowOffensiveBehavior;
  if ( !DVARBOOL_ATClient_AllowOffensiveBehavior && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_AllowOffensiveBehavior") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v2->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v2->name) )
      __debugbreak();
  }
  if ( v2->current.enabled )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3c888f86
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+0A8h+records.deferTimeSeconds], xmm0
      vmovss  [rsp+0A8h+records.holdTimeSeconds], xmm1
    }
    v11 = 0x2000000;
    if ( rand() % 2 )
      v11 = 0x4000000;
    v12 = 0i64;
    v13 = 0i64;
    v14 = 0i64;
    _RAX = &v11;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovups xmmword ptr [rsp+0A8h+records.keys.keyBits.array], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovups xmmword ptr [rsp+0A8h+records.moveStick], xmm0
      vmovsd  qword ptr [rsp+0A8h+records.keys.keyBits.array+10h], xmm1
    }
    records.keys.keyBits.array[6] = 0;
    CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
  }
}

/*
==============
ATClient_StateMachineThrowGrenadeTransition
==============
*/
char ATClient_StateMachineThrowGrenadeTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  *outNewState = 0;
  return 1;
}

