/*
==============
FXEntity_SetTriggerTime
==============
*/

void __fastcall FXEntity_SetTriggerTime(FxEntity *fxEnt, int triggerTime)
{
  ?FXEntity_SetTriggerTime@@YAXPEAUFxEntity@@H@Z(fxEnt, triggerTime);
}

/*
==============
FXEntity_SetTriggerTime
==============
*/
void FXEntity_SetTriggerTime(FxEntity *fxEnt, int triggerTime)
{
  if ( (fxEnt->flags & 0x20) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity.h", 101, ASSERT_TYPE_ASSERT, "(!FXEntity_IsLoopingType( fxEnt ))", "%s\n\tTried to set trigger time on a looping-type FX entity.", "!FXEntity_IsLoopingType( fxEnt )") )
      __debugbreak();
    fxEnt->un1.triggerTime = triggerTime;
  }
  else
  {
    fxEnt->un1.triggerTime = triggerTime;
  }
}

