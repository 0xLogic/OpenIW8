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
  char v6; 
  char v12; 

  result = Transition_InputSystemAutomated(localClientNum, outNewState);
  if ( !result )
  {
    v6 = 0;
    _RSI = DVARFLT_ATClient_ChanceKillstreak;
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    if ( !DVARFLT_ATClient_ChanceKillstreak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceKillstreak") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
    rand();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, cs:__real@38000100
      vcomiss xmm0, xmm6
    }
    if ( v12 )
    {
      *outNewState = 6;
    }
    else
    {
      _RSI = DVARFLT_ATClient_ChanceAimAtEnemy;
      if ( !DVARFLT_ATClient_ChanceAimAtEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceAimAtEnemy") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm6, dword ptr [rsi+28h] }
      rand();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@38000100
        vcomiss xmm1, xmm6
      }
      if ( !v12 )
        goto LABEL_13;
      *outNewState = 5;
    }
    v6 = 1;
LABEL_13:
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
    return v6;
  }
  return result;
}

/*
==============
Transition_InputSystemAutomated
==============
*/
bool Transition_InputSystemAutomated(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  bool IsTargetingEnemy; 
  bool IsLocalClientWounded; 
  char v15; 
  bool result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  IsTargetingEnemy = ATClient_IsTargetingEnemy(localClientNum);
  __asm { vmovss  xmm7, cs:__real@38000100 }
  IsLocalClientWounded = ATClient_IsLocalClientWounded(localClientNum);
  if ( IsTargetingEnemy )
  {
    _RBX = DVARFLT_ATClient_ChanceShootAtEnemiesInLoS;
    if ( !DVARFLT_ATClient_ChanceShootAtEnemiesInLoS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceShootAtEnemiesInLoS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    rand();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm7
      vcomiss xmm1, xmm6
    }
    if ( v15 )
      goto LABEL_21;
  }
  if ( IsLocalClientWounded )
  {
    _RBX = DVARFLT_ATClient_ChanceHeal;
    if ( !DVARFLT_ATClient_ChanceHeal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceHeal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    rand();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm7
      vcomiss xmm1, xmm6
    }
    if ( v15 )
    {
      *outNewState = 3;
      result = 1;
      goto LABEL_28;
    }
  }
  _RBX = DVARFLT_ATClient_ChanceRandomThrowGrenade;
  if ( !DVARFLT_ATClient_ChanceRandomThrowGrenade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceRandomThrowGrenade") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  rand();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm7
    vcomiss xmm1, xmm6
  }
  if ( v15 )
  {
    *outNewState = 1;
    result = 1;
    goto LABEL_28;
  }
  _RBX = DVARFLT_ATClient_ChanceRandomShoot;
  if ( !DVARFLT_ATClient_ChanceRandomShoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceRandomShoot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  rand();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm7
    vcomiss xmm1, xmm6
  }
  if ( v15 )
  {
LABEL_21:
    *outNewState = 2;
    result = 1;
    goto LABEL_28;
  }
  _RBX = DVARFLT_ATClient_ChanceAddCalloutMarker;
  if ( !DVARFLT_ATClient_ChanceAddCalloutMarker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceAddCalloutMarker") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  rand();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm7
    vcomiss xmm1, xmm6
  }
  if ( v15 )
  {
    *outNewState = 4;
    result = 1;
  }
  else
  {
    result = 0;
  }
LABEL_28:
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
  return result;
}

