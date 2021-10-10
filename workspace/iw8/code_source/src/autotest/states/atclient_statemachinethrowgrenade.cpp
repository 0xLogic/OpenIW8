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
  const dvar_t *v1; 
  unsigned int flags; 
  unsigned int v4; 
  AutomatedInput_Record records; 

  v1 = DVARBOOL_ATClient_AllowOffensiveBehavior;
  if ( !DVARBOOL_ATClient_AllowOffensiveBehavior && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_AllowOffensiveBehavior") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v1->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v1->name) )
      __debugbreak();
  }
  if ( v1->current.enabled )
  {
    records.deferTimeSeconds = 0.0;
    records.holdTimeSeconds = FLOAT_0_01667;
    v4 = 0x2000000;
    if ( rand() % 2 )
      v4 = 0x4000000;
    *(_OWORD *)records.keys.keyBits.array = v4;
    memset(&records.keys.keyBits.array[4], 0, 28);
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

