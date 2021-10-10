/*
==============
ATClient_StateMachineInGameRandomWalkChooseActionTransition
==============
*/

bool __fastcall ATClient_StateMachineInGameRandomWalkChooseActionTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineInGameRandomWalkChooseActionTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineInGameRandomWalkChooseActionTransition
==============
*/
char ATClient_StateMachineInGameRandomWalkChooseActionTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  char result; 
  char v4; 
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  float v8; 

  result = Transition_InputSystemAutomated(localClientNum, outNewState);
  if ( !result )
  {
    v4 = 0;
    v5 = DVARFLT_ATClient_ChanceKillstreak;
    if ( !DVARFLT_ATClient_ChanceKillstreak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceKillstreak") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    value = v5->current.value;
    if ( (float)((float)rand() * 0.000030518509) >= value )
    {
      v7 = DVARFLT_ATClient_ChanceAimAtEnemy;
      if ( !DVARFLT_ATClient_ChanceAimAtEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceAimAtEnemy") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      v8 = v7->current.value;
      if ( (float)((float)rand() * 0.000030518509) >= v8 )
        return v4;
      *outNewState = 5;
    }
    else
    {
      *outNewState = 6;
    }
    return 1;
  }
  return result;
}

/*
==============
Transition_InputSystemAutomated
==============
*/
char Transition_InputSystemAutomated(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  bool IsTargetingEnemy; 
  bool IsLocalClientWounded; 
  const dvar_t *v6; 
  float value; 
  const dvar_t *v8; 
  float v9; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 

  IsTargetingEnemy = ATClient_IsTargetingEnemy(localClientNum);
  IsLocalClientWounded = ATClient_IsLocalClientWounded(localClientNum);
  if ( IsTargetingEnemy )
  {
    v6 = DVARFLT_ATClient_ChanceShootAtEnemiesInLoS;
    if ( !DVARFLT_ATClient_ChanceShootAtEnemiesInLoS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceShootAtEnemiesInLoS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    value = v6->current.value;
    if ( (float)((float)rand() * 0.000030518509) < value )
      goto LABEL_21;
  }
  if ( IsLocalClientWounded )
  {
    v8 = DVARFLT_ATClient_ChanceHeal;
    if ( !DVARFLT_ATClient_ChanceHeal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceHeal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = v8->current.value;
    if ( (float)((float)rand() * 0.000030518509) < v9 )
    {
      *outNewState = 3;
      return 1;
    }
  }
  v11 = DVARFLT_ATClient_ChanceRandomThrowGrenade;
  if ( !DVARFLT_ATClient_ChanceRandomThrowGrenade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceRandomThrowGrenade") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.value;
  if ( (float)((float)rand() * 0.000030518509) < v12 )
  {
    *outNewState = 1;
    return 1;
  }
  v13 = DVARFLT_ATClient_ChanceRandomShoot;
  if ( !DVARFLT_ATClient_ChanceRandomShoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceRandomShoot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.value;
  if ( (float)((float)rand() * 0.000030518509) < v14 )
  {
LABEL_21:
    *outNewState = 2;
    return 1;
  }
  else
  {
    v15 = DVARFLT_ATClient_ChanceAddCalloutMarker;
    if ( !DVARFLT_ATClient_ChanceAddCalloutMarker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceAddCalloutMarker") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = v15->current.value;
    if ( (float)((float)rand() * 0.000030518509) >= v16 )
    {
      return 0;
    }
    else
    {
      *outNewState = 4;
      return 1;
    }
  }
}

