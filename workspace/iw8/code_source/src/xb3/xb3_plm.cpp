/*
==============
PLM_UseDefaultGameSave
==============
*/

bool __fastcall PLM_UseDefaultGameSave()
{
  return ?PLM_UseDefaultGameSave@@YA_NXZ();
}

/*
==============
PLM_SetValidGameSave
==============
*/

void __fastcall PLM_SetValidGameSave(bool valid)
{
  ?PLM_SetValidGameSave@@YAX_N@Z(valid);
}

/*
==============
PLM_SetUseDefaultGameSave
==============
*/

void __fastcall PLM_SetUseDefaultGameSave(bool useDefault)
{
  ?PLM_SetUseDefaultGameSave@@YAX_N@Z(useDefault);
}

/*
==============
PLM_IsValid
==============
*/

bool __fastcall PLM_IsValid(const PLMData *plmData)
{
  return ?PLM_IsValid@@YA_NPEBUPLMData@@@Z(plmData);
}

/*
==============
PLM_IsValidGameSave
==============
*/

bool __fastcall PLM_IsValidGameSave()
{
  return ?PLM_IsValidGameSave@@YA_NXZ();
}

/*
==============
PLM_IsValid
==============
*/
bool PLM_IsValid(const PLMData *plmData)
{
  if ( !plmData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_plm.cpp", 14, ASSERT_TYPE_ASSERT, "(plmData)", (const char *)&queryFormat, "plmData") )
    __debugbreak();
  return plmData->isSuspended && (plmData->gameMode != eGameModeSinglePlayer || plmData->validPLMGameSave && TimerDeltaInMsec(plmData->lastPLMTime) <= 0x48190800);
}

/*
==============
PLM_IsValidGameSave
==============
*/
_BOOL8 PLM_IsValidGameSave()
{
  return s_validPLMGameSave;
}

/*
==============
PLM_SetUseDefaultGameSave
==============
*/
void PLM_SetUseDefaultGameSave(bool useDefault)
{
  s_useDefaultGameSave = useDefault;
}

/*
==============
PLM_SetValidGameSave
==============
*/
void PLM_SetValidGameSave(bool valid)
{
  s_validPLMGameSave = valid;
}

/*
==============
PLM_UseDefaultGameSave
==============
*/
_BOOL8 PLM_UseDefaultGameSave()
{
  return s_useDefaultGameSave;
}

