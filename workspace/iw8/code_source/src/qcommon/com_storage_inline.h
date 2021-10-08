/*
==============
LiveStorage_IsPaidUser
==============
*/

bool __fastcall LiveStorage_IsPaidUser(const int controllerIndex)
{
  return ?LiveStorage_IsPaidUser@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_IsPaidUser
==============
*/
bool LiveStorage_IsPaidUser(const int controllerIndex)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  Online_Commerce *Instance; 
  Online_Commerce *v6; 
  bool v7; 
  Online_Commerce *v8; 
  bool HavePaidEntitlement; 

  v1 = DVARBOOL_com_force_free_to_play;
  if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    return 0;
  v3 = DVARBOOL_com_force_premium;
  if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled || Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() )
    return 1;
  Instance = Online_Commerce::GetInstance();
  v7 = 1;
  if ( Online_Commerce::GetPaidEntitlementTaskState(Instance, controllerIndex) != ENTITLEMENT_STATE_COMPLETE )
  {
    v6 = Online_Commerce::GetInstance();
    if ( Online_Commerce::GetPaidEntitlementTaskState(v6, controllerIndex) != ENTITLEMENT_STATE_ERROR )
      v7 = 0;
  }
  v8 = Online_Commerce::GetInstance();
  HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v8, controllerIndex);
  return Live_IsUserSignedInToLive(controllerIndex) && v7 && HavePaidEntitlement;
}

