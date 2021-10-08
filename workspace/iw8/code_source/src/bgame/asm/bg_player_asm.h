/*
==============
GetPlayerASMInstance
==============
*/

PlayerASM_Instance *__fastcall GetPlayerASMInstance(ASM_Instance *pInst)
{
  return ?GetPlayerASMInstance@@YAPEAUPlayerASM_Instance@@PEAUASM_Instance@@@Z(pInst);
}

/*
==============
GetPlayerASMInstance
==============
*/

const PlayerASM_Instance *__fastcall GetPlayerASMInstance(const ASM_Instance *pInst)
{
  return ?GetPlayerASMInstance@@YAPEBUPlayerASM_Instance@@PEBUASM_Instance@@@Z(pInst);
}

/*
==============
BgPlayer_Asm::NotifyStateFinished
==============
*/

void __fastcall BgPlayer_Asm::NotifyStateFinished(BgPlayer_Asm *this, int entNum, const scr_string_t stateName)
{
  ?NotifyStateFinished@BgPlayer_Asm@@UEAAXHW4scr_string_t@@@Z(this, entNum, stateName);
}

/*
==============
BgPlayer_Asm::StoreInstance
==============
*/

void __fastcall BgPlayer_Asm::StoreInstance(BgPlayer_Asm *this, ASM_Instance *pInst, int entNum)
{
  ?StoreInstance@BgPlayer_Asm@@UEBAXPEAUASM_Instance@@H@Z(this, pInst, entNum);
}

/*
==============
BgPlayer_Asm::RunServices
==============
*/

void __fastcall BgPlayer_Asm::RunServices(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM *pASM, int entNum)
{
  ?RunServices@BgPlayer_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@PEBUASM@@H@Z(this, context, pInst, pASM, entNum);
}

/*
==============
BgPlayer_Asm::RemoveInstance
==============
*/

void __fastcall BgPlayer_Asm::RemoveInstance(BgPlayer_Asm *this, int entNum)
{
  ?RemoveInstance@BgPlayer_Asm@@UEBAXH@Z(this, entNum);
}

/*
==============
GetPlayerASMInstance
==============
*/
const ASM_Instance *GetPlayerASMInstance(const ASM_Instance *pInst)
{
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 220, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  return pInst;
}

/*
==============
BgPlayer_Asm::NotifyStateFinished
==============
*/
void BgPlayer_Asm::NotifyStateFinished(BgPlayer_Asm *this, int entNum, const scr_string_t stateName)
{
  ;
}

/*
==============
BgPlayer_Asm::RemoveInstance
==============
*/
void BgPlayer_Asm::RemoveInstance(BgPlayer_Asm *this, int entNum)
{
  ;
}

/*
==============
BgPlayer_Asm::RunServices
==============
*/
void BgPlayer_Asm::RunServices(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM *pASM)
{
  ;
}

/*
==============
BgPlayer_Asm::StoreInstance
==============
*/
void BgPlayer_Asm::StoreInstance(BgPlayer_Asm *this, ASM_Instance *pInst, int entNum)
{
  ;
}

/*
==============
GetPlayerASMInstance
==============
*/
ASM_Instance *GetPlayerASMInstance(ASM_Instance *pInst)
{
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 214, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  return pInst;
}

