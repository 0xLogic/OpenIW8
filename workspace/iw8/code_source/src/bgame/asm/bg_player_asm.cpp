/*
==============
BgPlayer_Asm::Release
==============
*/

void __fastcall BgPlayer_Asm::Release(ASM *pASM, bool bUnlockPackfileData)
{
  ?Release@BgPlayer_Asm@@SAXPEAUASM@@_N@Z(pASM, bUnlockPackfileData);
}

/*
==============
BgPlayer_Asm::GetLooseFileMap
==============
*/

ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *__fastcall BgPlayer_Asm::GetLooseFileMap()
{
  return ?GetLooseFileMap@BgPlayer_Asm@@KAPEAV?$fixed_map@W4scr_string_t@@_N$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@ntl@@XZ();
}

/*
==============
BgPlayer_Asm::DebugRender_Transition
==============
*/

void __fastcall BgPlayer_Asm::DebugRender_Transition(const PlayerASM_Context *playerContext, const PlayerASM_Instance *pInst, const PlayerASM_AnimSlot slot, unsigned int numExecutedTransitions, const ASM_Function *pFunc, scr_string_t originatingStateName, scr_string_t currentStateName, scr_string_t toStateName, bool result, bool isNegate, bool isPassthrough, int depth)
{
  ?DebugRender_Transition@BgPlayer_Asm@@SAXPEBUPlayerASM_Context@@PEBUPlayerASM_Instance@@W4PlayerASM_AnimSlot@@IPEBUASM_Function@@W4scr_string_t@@44_N55H@Z(playerContext, pInst, slot, numExecutedTransitions, pFunc, originatingStateName, currentStateName, toStateName, result, isNegate, isPassthrough, depth);
}

/*
==============
BgPlayer_Asm::DebugRender
==============
*/

void __fastcall BgPlayer_Asm::DebugRender(BgPlayer_Asm *this, const ASM_Instance *pInst, vec3_t *drawPos, int dTime)
{
  ?DebugRender@BgPlayer_Asm@@UEAAXPEBUASM_Instance@@Tvec3_t@@H@Z(this, pInst, drawPos, dTime);
}

/*
==============
BgPlayer_Asm::TerminateFunc
==============
*/

void __fastcall BgPlayer_Asm::TerminateFunc(BgPlayer_Asm *this, const ASM_State *pState, const ASM_Context *context, const ASM *const pASM, ASM_Instance *pInst, bool forceTerminateFunc)
{
  ?TerminateFunc@BgPlayer_Asm@@UEAAXPEBUASM_State@@PEBUASM_Context@@QEBUASM@@PEAUASM_Instance@@_N@Z(this, pState, context, pASM, pInst, forceTerminateFunc);
}

/*
==============
BgPlayer_Asm::UpdateState
==============
*/

bool __fastcall BgPlayer_Asm::UpdateState(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pCurState)
{
  return ?UpdateState@BgPlayer_Asm@@UEAA_NPEBUASM_Context@@PEAUASM_Instance@@PEBUASM_State@@@Z(this, context, pInst, pCurState);
}

/*
==============
BgPlayer_Asm::RegisterBgInstance
==============
*/

void __fastcall BgPlayer_Asm::RegisterBgInstance(BgPlayer_Asm *playerAsm)
{
  ?RegisterBgInstance@BgPlayer_Asm@@KAXPEAV1@@Z(playerAsm);
}

/*
==============
BgPlayer_Asm::AllocEphemeralTableIndex
==============
*/

unsigned __int8 __fastcall BgPlayer_Asm::AllocEphemeralTableIndex(BgPlayer_Asm *this, ASM_Instance *pInst)
{
  return ?AllocEphemeralTableIndex@BgPlayer_Asm@@UEBAEPEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
BgPlayer_Asm::GetAssetBySuit
==============
*/

const ASM *__fastcall BgPlayer_Asm::GetAssetBySuit(BgPlayer_Asm *this, int suitIndex)
{
  return ?GetAssetBySuit@BgPlayer_Asm@@QEAAPEBUASM@@H@Z(this, suitIndex);
}

/*
==============
BgPlayer_Asm::ValidateAssets
==============
*/

void BgPlayer_Asm::ValidateAssets(void)
{
  ?ValidateAssets@BgPlayer_Asm@@SAXXZ();
}

/*
==============
BgPlayer_Asm::ProcessFlags
==============
*/

void __fastcall BgPlayer_Asm::ProcessFlags(BgPlayer_Asm *this, ASM_Instance *pInst, const ASM_State *pState, const ASM_State *pPrevState, const ASM_Transition *pTransition)
{
  ?ProcessFlags@BgPlayer_Asm@@UEAAXPEAUASM_Instance@@PEBUASM_State@@1PEBUASM_Transition@@@Z(this, pInst, pState, pPrevState, pTransition);
}

/*
==============
BgPlayer_Asm::ClearInstanceState
==============
*/

void __fastcall BgPlayer_Asm::ClearInstanceState(BgPlayer_Asm *this, PlayerASM_Context *context, ASM_Instance *pInst, const playerState_s *ps)
{
  ?ClearInstanceState@BgPlayer_Asm@@IEAAXPEAUPlayerASM_Context@@PEAUASM_Instance@@PEBUplayerState_s@@@Z(this, context, pInst, ps);
}

/*
==============
BgPlayer_Asm::InstanceAllocate
==============
*/

ASM_Instance *__fastcall BgPlayer_Asm::InstanceAllocate(BgPlayer_Asm *this, const ASM_Context *context)
{
  return ?InstanceAllocate@BgPlayer_Asm@@UEBAPEAUASM_Instance@@PEBUASM_Context@@@Z(this, context);
}

/*
==============
BgPlayer_Asm::ClearEphemeralEventTables
==============
*/

void __fastcall BgPlayer_Asm::ClearEphemeralEventTables(BgPlayer_Asm *this)
{
  ?ClearEphemeralEventTables@BgPlayer_Asm@@UEBAXXZ(this);
}

/*
==============
BgPlayer_Asm::Register
==============
*/

void __fastcall BgPlayer_Asm::Register(ASM *pASM, bool bLooseFile)
{
  ?Register@BgPlayer_Asm@@SAXPEAUASM@@_N@Z(pASM, bLooseFile);
}

/*
==============
BgPlayer_Asm::GetInstanceByAssetName
==============
*/

ASM_Instance *__fastcall BgPlayer_Asm::GetInstanceByAssetName(BgPlayer_Asm *this, const ASM_Context *context, int entNum, scr_string_t asmName)
{
  return ?GetInstanceByAssetName@BgPlayer_Asm@@UEAAPEAUASM_Instance@@PEBUASM_Context@@HW4scr_string_t@@@Z(this, context, entNum, asmName);
}

/*
==============
BgPlayer_Asm::~BgPlayer_Asm
==============
*/

void __fastcall BgPlayer_Asm::~BgPlayer_Asm(BgPlayer_Asm *this)
{
  ??1BgPlayer_Asm@@UEAA@XZ(this);
}

/*
==============
BgPlayer_Asm::ValidateEphemeralEventTablesNotInUse
==============
*/

void __fastcall BgPlayer_Asm::ValidateEphemeralEventTablesNotInUse(BgPlayer_Asm *this)
{
  ?ValidateEphemeralEventTablesNotInUse@BgPlayer_Asm@@UEBAXXZ(this);
}

/*
==============
BgPlayer_Asm::GetEventParamTableID
==============
*/

unsigned int __fastcall BgPlayer_Asm::GetEventParamTableID(BgPlayer_Asm *this, ASM_Instance *pInst)
{
  return ?GetEventParamTableID@BgPlayer_Asm@@UEBAIPEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
BgPlayer_Asm::RunFunction_asm_with_params
==============
*/

void __fastcall BgPlayer_Asm::RunFunction_asm_with_params(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin)
{
  ?RunFunction_asm_with_params@BgPlayer_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@HHHPEAUASM_Function_Param@@_N@Z(this, context, pInst, asmName, entNum, funcID, numParams, pParams, bBuiltin);
}

/*
==============
BgPlayer_Asm::BgPlayer_Asm
==============
*/

void __fastcall BgPlayer_Asm::BgPlayer_Asm(BgPlayer_Asm *this)
{
  ??0BgPlayer_Asm@@QEAA@XZ(this);
}

/*
==============
BgPlayer_Asm::SetupInstanceState<1>
==============
*/

void __fastcall BgPlayer_Asm::SetupInstanceState<1>(BgPlayer_Asm *this, PlayerASM_Context *context, int suitIndex, const playerState_s *fromPs, const entityState_t *es)
{
  ??$SetupInstanceState@$00@BgPlayer_Asm@@IEAAXPEAUPlayerASM_Context@@HPEBUplayerState_s@@PEBUentityState_t@@@Z(this, context, suitIndex, fromPs, es);
}

/*
==============
BgPlayer_Asm::RunFunction_asm_state_with_params
==============
*/

void __fastcall BgPlayer_Asm::RunFunction_asm_state_with_params(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin)
{
  ?RunFunction_asm_state_with_params@BgPlayer_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@H2HHPEAUASM_Function_Param@@_N@Z(this, context, pInst, asmName, entNum, stateName, funcID, numParams, pParams, bBuiltin);
}

/*
==============
BgPlayer_Asm::Init
==============
*/

void __fastcall BgPlayer_Asm::Init(BgPlayer_Asm *this, bool fullInit, bool bServerThreadStartup)
{
  ?Init@BgPlayer_Asm@@QEAAX_N0@Z(this, fullInit, bServerThreadStartup);
}

/*
==============
BgPlayer_Asm::MyChanges
==============
*/

void BgPlayer_Asm::MyChanges(void)
{
  ?MyChanges@BgPlayer_Asm@@SAXXZ();
}

/*
==============
BgPlayer_Asm::ClearClientEvents
==============
*/

void __fastcall BgPlayer_Asm::ClearClientEvents(BgPlayer_Asm *this, int entNum)
{
  ?ClearClientEvents@BgPlayer_Asm@@QEAAXH@Z(this, entNum);
}

/*
==============
BgPlayer_Asm::GetInstanceIfExists
==============
*/

const ASM_Instance *__fastcall BgPlayer_Asm::GetInstanceIfExists(BgPlayer_Asm *this, const ASM_Context *context, int entNum)
{
  return ?GetInstanceIfExists@BgPlayer_Asm@@UEBAPEBUASM_Instance@@PEBUASM_Context@@H@Z(this, context, entNum);
}

/*
==============
BgPlayer_Asm::RunFunction_asm_state
==============
*/

void __fastcall BgPlayer_Asm::RunFunction_asm_state(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, const ASM_Function *pFunc)
{
  ?RunFunction_asm_state@BgPlayer_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@H2PEBUASM_Function@@@Z(this, context, pInst, asmName, entNum, stateName, pFunc);
}

/*
==============
BgPlayer_Asm::GetInstanceIfExists
==============
*/

ASM_Instance *__fastcall BgPlayer_Asm::GetInstanceIfExists(BgPlayer_Asm *this, const ASM_Context *context, int entNum)
{
  return ?GetInstanceIfExists@BgPlayer_Asm@@UEAAPEAUASM_Instance@@PEBUASM_Context@@H@Z(this, context, entNum);
}

/*
==============
BgPlayer_Asm::GetEphemeralEventParamTableID
==============
*/

unsigned int __fastcall BgPlayer_Asm::GetEphemeralEventParamTableID(BgPlayer_Asm *this, ASM_Instance *pInst)
{
  return ?GetEphemeralEventParamTableID@BgPlayer_Asm@@UEBAIPEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
BgPlayer_Asm::SetupInstanceState<0>
==============
*/

void __fastcall BgPlayer_Asm::SetupInstanceState<0>(BgPlayer_Asm *this, PlayerASM_Context *context, int suitIndex, const playerState_s *fromPs, const entityState_t *es)
{
  ??$SetupInstanceState@$0A@@BgPlayer_Asm@@IEAAXPEAUPlayerASM_Context@@HPEBUplayerState_s@@PEBUentityState_t@@@Z(this, context, suitIndex, fromPs, es);
}

/*
==============
BgPlayer_Asm::UpdateTimersAndEvents
==============
*/

void __fastcall BgPlayer_Asm::UpdateTimersAndEvents(BgPlayer_Asm *this, PlayerASM_Context *context, playerState_s *ps, int delta)
{
  ?UpdateTimersAndEvents@BgPlayer_Asm@@IEAAXPEAUPlayerASM_Context@@PEAUplayerState_s@@H@Z(this, context, ps, delta);
}

/*
==============
BgPlayer_Asm::RunNotetrackHandler
==============
*/

void __fastcall BgPlayer_Asm::RunNotetrackHandler(BgPlayer_Asm *this, const PlayerASM_Context *context, int entNum, scr_string_t stateName, scr_string_t noteName)
{
  ?RunNotetrackHandler@BgPlayer_Asm@@QEAAXPEBUPlayerASM_Context@@HW4scr_string_t@@1@Z(this, context, entNum, stateName, noteName);
}

/*
==============
BgPlayer_Asm::EnterStateFunc
==============
*/

void __fastcall BgPlayer_Asm::EnterStateFunc(BgPlayer_Asm *this, const ASM_Instance *pInst, const ASM_State *pState)
{
  ?EnterStateFunc@BgPlayer_Asm@@UEAAXPEBUASM_Instance@@PEBUASM_State@@@Z(this, pInst, pState);
}

/*
==============
BgPlayer_Asm::TrySwitchToState
==============
*/

bool __fastcall BgPlayer_Asm::TrySwitchToState(BgPlayer_Asm *this, characterInfo_t *ci, const PlayerASM_Context *context, ASM_Instance *pInst, const ASM_State *pCurState, int stateIndex, int numParams, ASM_Function_Param *params, const PlayerAnimScriptEventType eventType, const PlayerASM_AnimSlot slot)
{
  return ?TrySwitchToState@BgPlayer_Asm@@QEAA_NPEAUcharacterInfo_t@@PEBUPlayerASM_Context@@PEAUASM_Instance@@PEBUASM_State@@HHPEAUASM_Function_Param@@W4PlayerAnimScriptEventType@@W4PlayerASM_AnimSlot@@@Z(this, ci, context, pInst, pCurState, stateIndex, numParams, params, eventType, slot);
}

/*
==============
BgPlayer_Asm::RunNotetrackHandler
==============
*/

void __fastcall BgPlayer_Asm::RunNotetrackHandler(BgPlayer_Asm *this, const PlayerASM_Context *context, const PlayerASM_Instance *pInst, scr_string_t stateName, scr_string_t noteName)
{
  ?RunNotetrackHandler@BgPlayer_Asm@@QEAAXPEBUPlayerASM_Context@@PEBUPlayerASM_Instance@@W4scr_string_t@@2@Z(this, context, pInst, stateName, noteName);
}

/*
==============
BgPlayer_Asm::CheckTransitionsInternal
==============
*/

ASM_Transition *__fastcall BgPlayer_Asm::CheckTransitionsInternal(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState, ASM_TransitionList *pOutTransitionList, unsigned int depth, unsigned int *inOutNumExecTransitions, bitarray<320> *pInOutVisitedStates)
{
  return ?CheckTransitionsInternal@BgPlayer_Asm@@IEAAPEAUASM_Transition@@PEBUASM_Context@@PEAUASM_Instance@@PEBUASM_State@@PEAVASM_TransitionList@@IPEAIPEAV?$bitarray@$0BEA@@@@Z(this, context, pInst, pState, pOutTransitionList, depth, inOutNumExecTransitions, pInOutVisitedStates);
}

/*
==============
BgPlayer_Asm::BuildStateMap
==============
*/

void __fastcall BgPlayer_Asm::BuildStateMap(const ASM *pASM)
{
  ?BuildStateMap@BgPlayer_Asm@@SAXPEBUASM@@@Z(pASM);
}

/*
==============
BgPlayer_Asm::GetInstance
==============
*/

ASM_Instance *__fastcall BgPlayer_Asm::GetInstance(BgPlayer_Asm *this, const ASM_Context *context, int entNum)
{
  return ?GetInstance@BgPlayer_Asm@@UEAAPEAUASM_Instance@@PEBUASM_Context@@H@Z(this, context, entNum);
}

/*
==============
BgPlayer_Asm::UpdateTimersAndEventsSlot
==============
*/

void __fastcall BgPlayer_Asm::UpdateTimersAndEventsSlot(BgPlayer_Asm *this, PlayerASM_Context *context, playerState_s *ps, const PlayerASM_AnimSlot slot, int deltaTime)
{
  ?UpdateTimersAndEventsSlot@BgPlayer_Asm@@IEAAXPEAUPlayerASM_Context@@PEAUplayerState_s@@W4PlayerASM_AnimSlot@@H@Z(this, context, ps, slot, deltaTime);
}

/*
==============
BgPlayer_Asm::RunFunction_asm
==============
*/

void __fastcall BgPlayer_Asm::RunFunction_asm(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const ASM_Function *pFunc)
{
  ?RunFunction_asm@BgPlayer_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@HPEBUASM_Function@@@Z(this, context, pInst, asmName, entNum, pFunc);
}

/*
==============
BgPlayer_Asm::EnterDefaultState
==============
*/

void __fastcall BgPlayer_Asm::EnterDefaultState(BgPlayer_Asm *this, playerState_s *ps, bool bOnlySubASMs, bool bExcludeSubASMs)
{
  ?EnterDefaultState@BgPlayer_Asm@@QEAAXPEAUplayerState_s@@_N1@Z(this, ps, bOnlySubASMs, bExcludeSubASMs);
}

/*
==============
BgPlayer_Asm::RemoveBgInstance
==============
*/

void __fastcall BgPlayer_Asm::RemoveBgInstance(BgPlayer_Asm *playerAsm)
{
  ?RemoveBgInstance@BgPlayer_Asm@@KAXPEAV1@@Z(playerAsm);
}

/*
==============
BgPlayer_Asm::CheckTransitions
==============
*/

ASM_Transition *__fastcall BgPlayer_Asm::CheckTransitions(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState, ASM_TransitionList *pOutTransitionList)
{
  return ?CheckTransitions@BgPlayer_Asm@@UEAAPEAUASM_Transition@@PEBUASM_Context@@PEAUASM_Instance@@PEBUASM_State@@PEAVASM_TransitionList@@@Z(this, context, pInst, pState, pOutTransitionList);
}

/*
==============
BgPlayer_Asm::GetStateByName
==============
*/

const ASM_State *__fastcall BgPlayer_Asm::GetStateByName(BgPlayer_Asm *this, const ASM *pASM, const scr_string_t stateName)
{
  return ?GetStateByName@BgPlayer_Asm@@UEAAPEBUASM_State@@PEBUASM@@W4scr_string_t@@@Z(this, pASM, stateName);
}

/*
==============
BgPlayer_Asm::irand
==============
*/

int __fastcall BgPlayer_Asm::irand(BgPlayer_Asm *this, const ASM_Instance *pInst, int min, int max, unsigned int *holdrand)
{
  return ?irand@BgPlayer_Asm@@UEBAHPEBUASM_Instance@@HHPEAI@Z(this, pInst, min, max, holdrand);
}

/*
==============
BgPlayer_Asm::RunTransitionFunction
==============
*/

bool __fastcall BgPlayer_Asm::RunTransitionFunction(BgPlayer_Asm *this, const ASM_Context *context, const ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, const scr_string_t toStateName, const ASM_Transition *pTransition)
{
  return ?RunTransitionFunction@BgPlayer_Asm@@UEAA_NPEBUASM_Context@@PEBUASM_Instance@@W4scr_string_t@@H22PEBUASM_Transition@@@Z(this, context, pInst, asmName, entNum, stateName, toStateName, pTransition);
}

/*
==============
BgPlayer_Asm::DebugRender_FunctionExecution
==============
*/

void __fastcall BgPlayer_Asm::DebugRender_FunctionExecution(const PlayerASM_Instance *pInst, const PlayerASM_AnimSlot slot, unsigned int numExecutedFunctions, const ASM_Function *pFunc, scr_string_t stateName, scr_string_t aliasName, bool result, bool isNegate)
{
  ?DebugRender_FunctionExecution@BgPlayer_Asm@@SAXPEBUPlayerASM_Instance@@W4PlayerASM_AnimSlot@@IPEBUASM_Function@@W4scr_string_t@@3_N4@Z(pInst, slot, numExecutedFunctions, pFunc, stateName, aliasName, result, isNegate);
}

/*
==============
BgPlayer_Asm::GetAssetMap
==============
*/

ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *__fastcall BgPlayer_Asm::GetAssetMap(BgPlayer_Asm *this)
{
  return ?GetAssetMap@BgPlayer_Asm@@UEBAPEAV?$fixed_map@W4scr_string_t@@PEAUASM@@$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@ntl@@XZ(this);
}

/*
==============
PlayerASM_IsEnabled
==============
*/

bool __fastcall PlayerASM_IsEnabled()
{
  return ?PlayerASM_IsEnabled@@YA_NXZ();
}

/*
==============
BgPlayer_Asm::FireEvent
==============
*/

void __fastcall BgPlayer_Asm::FireEvent(BgPlayer_Asm *this, ASM_Instance *pInst, const scr_string_t eventName)
{
  ?FireEvent@BgPlayer_Asm@@UEAAXPEAUASM_Instance@@W4scr_string_t@@@Z(this, pInst, eventName);
}

/*
==============
BgPlayer_Asm::TickPS
==============
*/

bool __fastcall BgPlayer_Asm::TickPS(BgPlayer_Asm *this, playerState_s *ps, const PmoveASMArgs *pmoveArgs, bool bCheckTransitionsOnly, bool bForceUpdateOnNewState)
{
  return ?TickPS@BgPlayer_Asm@@QEAA_NPEAUplayerState_s@@AEBUPmoveASMArgs@@_N2@Z(this, ps, pmoveArgs, bCheckTransitionsOnly, bForceUpdateOnNewState);
}

/*
==============
BgPlayer_Asm::GetInstanceBySlot
==============
*/

PlayerASM_Instance *__fastcall BgPlayer_Asm::GetInstanceBySlot(BgPlayer_Asm *this, const PlayerASM_Context *context, const PlayerASM_AnimSlot slot)
{
  return ?GetInstanceBySlot@BgPlayer_Asm@@QEAAPEAUPlayerASM_Instance@@PEBUPlayerASM_Context@@W4PlayerASM_AnimSlot@@@Z(this, context, slot);
}

/*
==============
BgPlayer_Asm::RunChooseAnimFunction
==============
*/

void __fastcall BgPlayer_Asm::RunChooseAnimFunction(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, const ASM_Function *pFunc, int *outEntryIndex)
{
  ?RunChooseAnimFunction@BgPlayer_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@H2PEBUASM_Function@@PEAH@Z(this, context, pInst, asmName, entNum, stateName, pFunc, outEntryIndex);
}

/*
==============
BgPlayer_Asm::UpdateAngles
==============
*/

void __fastcall BgPlayer_Asm::UpdateAngles(BgPlayer_Asm *this, playerState_s *const ps, const PmoveASMArgs *pmoveArgs)
{
  ?UpdateAngles@BgPlayer_Asm@@QEBAXQEAUplayerState_s@@AEBUPmoveASMArgs@@@Z(this, ps, pmoveArgs);
}

/*
==============
BgPlayer_Asm::FreeInstance
==============
*/

void __fastcall BgPlayer_Asm::FreeInstance(BgPlayer_Asm *this, const ASM_Context *context, int entNum)
{
  ?FreeInstance@BgPlayer_Asm@@UEAAXPEBUASM_Context@@H@Z(this, context, entNum);
}

/*
==============
PlayerASM_IsConnectingPaths
==============
*/

bool __fastcall PlayerASM_IsConnectingPaths()
{
  return ?PlayerASM_IsConnectingPaths@@YA_NXZ();
}

/*
==============
BgPlayer_Asm::Shutdown
==============
*/

void __fastcall BgPlayer_Asm::Shutdown(BgPlayer_Asm *this, bool fullShutdown)
{
  ?Shutdown@BgPlayer_Asm@@QEAAX_N@Z(this, fullShutdown);
}

/*
==============
BgPlayer_Asm::RunChooseAnimFunction_with_params
==============
*/

void __fastcall BgPlayer_Asm::RunChooseAnimFunction_with_params(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin, int *outEntryIndex)
{
  ?RunChooseAnimFunction_with_params@BgPlayer_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@H2HHPEAUASM_Function_Param@@_NPEAH@Z(this, context, pInst, asmName, entNum, stateName, funcID, numParams, pParams, bBuiltin, outEntryIndex);
}

/*
==============
BgPlayer_Asm::StateInterruptsSubtrees
==============
*/

bool __fastcall BgPlayer_Asm::StateInterruptsSubtrees(BgPlayer_Asm *this, const ASM_Instance *pInst, const ASM_State *pCurState)
{
  return ?StateInterruptsSubtrees@BgPlayer_Asm@@UEBA_NPEBUASM_Instance@@PEBUASM_State@@@Z(this, pInst, pCurState);
}

/*
==============
BgPlayer_Asm::GetHistoryObject
==============
*/

ASM_History *__fastcall BgPlayer_Asm::GetHistoryObject(BgPlayer_Asm *this, const ASM_Instance *pInst)
{
  return ?GetHistoryObject@BgPlayer_Asm@@UEAAPEAVASM_History@@PEBUASM_Instance@@@Z(this, pInst);
}

/*
==============
BgPlayer_Asm::irandWithSeed
==============
*/

int __fastcall BgPlayer_Asm::irandWithSeed(unsigned int *seed, int min, int max)
{
  return ?irandWithSeed@BgPlayer_Asm@@SAHPEAIHH@Z(seed, min, max);
}

/*
==============
BgPlayer_Asm::DebugOverrideStates
==============
*/

bool __fastcall BgPlayer_Asm::DebugOverrideStates(BgPlayer_Asm *this, ASM_Instance *pInst, const int entNum, PlayerASM_Context *context)
{
  return ?DebugOverrideStates@BgPlayer_Asm@@IEAA_NPEAUASM_Instance@@HPEAUPlayerASM_Context@@@Z(this, pInst, entNum, context);
}

/*
==============
BgPlayer_Asm::SetupInstanceState<1>
==============
*/
void BgPlayer_Asm::SetupInstanceState<1>(BgPlayer_Asm *this, PlayerASM_Context *context, int suitIndex, const playerState_s *fromPs)
{
  const ASM *AssetBySuit; 
  int clientNum; 
  scr_string_t m_Name; 
  unsigned __int8 v11; 
  int v12; 
  unsigned int v13; 
  scr_string_t StateNameFromIndex; 
  PlayerASM_AnimSlot v15; 
  const ASM_State *v16; 
  bool v17; 
  scr_string_t v18; 
  const ASM *ASM; 
  ASM_Instance *v20; 
  scr_string_t v21; 
  const ASM_State *v22; 
  unsigned int outAnimSetIndex; 
  unsigned int v24; 
  unsigned int animsetIndex; 
  unsigned int outAnimEntry; 
  unsigned int v27[4]; 
  unsigned int outAnimState; 

  Profile_Begin(443);
  if ( !fromPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 644, ASSERT_TYPE_ASSERT, "((usePlayerState && fromPs) || (!usePlayerState && es))", (const char *)&queryFormat, "(usePlayerState && fromPs) || (!usePlayerState && es)") )
    __debugbreak();
  AssetBySuit = BgPlayer_Asm::GetAssetBySuit(this, suitIndex);
  if ( !AssetBySuit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 647, ASSERT_TYPE_ASSERT, "(asmAsset)", (const char *)&queryFormat, "asmAsset") )
    __debugbreak();
  clientNum = fromPs->clientNum;
  if ( BG_PlayerASM_UnpackAnimFromPs(fromPs, MOVEMENT, &outAnimSetIndex, &outAnimState, &outAnimEntry) )
  {
    ASM_Instance::InitInstance(context->instances);
    context->instances[0].m_bPrimary = 1;
    v11 = this->AllocEphemeralTableIndex(this, context->instances);
    v12 = outAnimState;
    v13 = outAnimSetIndex;
    context->instances[0].m_EphemeralTableIndex = v11;
    context->instances[0].m_EntNum = clientNum;
    context->instances[0].m_pASM = AssetBySuit;
    context->instances[0].m_slot[0] = 0;
    StateNameFromIndex = BG_PlayerASM_GetStateNameFromIndex(v13, v12);
    if ( !StateNameFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 676, ASSERT_TYPE_ASSERT, "(stateName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
      __debugbreak();
    v16 = this->GetStateByName(this, context->instances[0].m_pASM, (unsigned int)StateNameFromIndex);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 679, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    v17 = context->instances[0].m_pASM == NULL;
    context->instances[0].m_CurState = v16->m_ID;
    if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 683, ASSERT_TYPE_ASSERT, "(toInst->m_pASM)", (const char *)&queryFormat, "toInst->m_pASM") )
      __debugbreak();
    context->instances[0].m_NumSubtrees = 0;
    LOBYTE(v15) = 1;
    if ( BG_PlayerASM_UnpackAnimFromPs(fromPs, v15, &animsetIndex, &v24, v27) && v16->m_NumSubtrees > 0 )
    {
      v18 = *v16->m_Subtrees;
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 708, ASSERT_TYPE_ASSERT, "(subAssetName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "subAssetName != NULL_SCR_STRING") )
        __debugbreak();
      ASM = Common_Asm::GetASM(this, v18);
      if ( !ASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 711, ASSERT_TYPE_ASSERT, "(subAsmAsset)", (const char *)&queryFormat, "subAsmAsset") )
        __debugbreak();
      v20 = Common_Asm::AddSubtree(this, context, context->instances, ASM);
      v20->m_pASM = ASM;
      v21 = BG_PlayerASM_GetStateNameFromIndex(animsetIndex, v24);
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 718, ASSERT_TYPE_ASSERT, "(subStateName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "subStateName != NULL_SCR_STRING") )
        __debugbreak();
      v22 = this->GetStateByName(this, v20->m_pASM, (unsigned int)v21);
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 721, ASSERT_TYPE_ASSERT, "(subtreeState)", (const char *)&queryFormat, "subtreeState") )
        __debugbreak();
      v20->m_CurState = v22->m_ID;
      LOBYTE(v20[1].m_pASM) = 1;
    }
  }
  else
  {
    m_Name = AssetBySuit->m_Name;
    if ( !m_Name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 658, ASSERT_TYPE_ASSERT, "(assetName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "assetName != NULL_SCR_STRING") )
      __debugbreak();
    Common_Asm::Instantiate(this, context, clientNum, m_Name, 1, NULL);
  }
  Profile_EndInternal(NULL);
}

/*
==============
BgPlayer_Asm::SetupInstanceState<0>
==============
*/
void BgPlayer_Asm::SetupInstanceState<0>(BgPlayer_Asm *this, PlayerASM_Context *context, int suitIndex, const playerState_s *fromPs, const entityState_t *es)
{
  const entityState_t *v8; 
  const ASM *AssetBySuit; 
  int clientNum; 
  scr_string_t m_Name; 
  unsigned __int8 v12; 
  int v13; 
  unsigned int v14; 
  scr_string_t StateNameFromIndex; 
  PlayerASM_AnimSlot v16; 
  const ASM_State *v17; 
  bool v18; 
  scr_string_t v19; 
  const ASM *ASM; 
  ASM_Instance *v21; 
  scr_string_t v22; 
  const ASM_State *v23; 
  unsigned int outAnimState; 
  unsigned int outAnimsetIndex; 
  unsigned int animsetIndex; 
  unsigned int outAnimEntry; 
  unsigned int v28[4]; 

  Profile_Begin(443);
  v8 = es;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 644, ASSERT_TYPE_ASSERT, "((usePlayerState && fromPs) || (!usePlayerState && es))", (const char *)&queryFormat, "(usePlayerState && fromPs) || (!usePlayerState && es)") )
    __debugbreak();
  AssetBySuit = BgPlayer_Asm::GetAssetBySuit(this, suitIndex);
  if ( !AssetBySuit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 647, ASSERT_TYPE_ASSERT, "(asmAsset)", (const char *)&queryFormat, "asmAsset") )
    __debugbreak();
  clientNum = v8->clientNum;
  if ( BG_PlayerASM_UnpackAnimFromEntity(v8, MOVEMENT, &outAnimsetIndex, &outAnimState, &outAnimEntry) )
  {
    ASM_Instance::InitInstance(context->instances);
    context->instances[0].m_bPrimary = 1;
    v12 = this->AllocEphemeralTableIndex(this, context->instances);
    v13 = outAnimState;
    v14 = outAnimsetIndex;
    context->instances[0].m_EphemeralTableIndex = v12;
    context->instances[0].m_EntNum = clientNum;
    context->instances[0].m_pASM = AssetBySuit;
    context->instances[0].m_slot[0] = 0;
    StateNameFromIndex = BG_PlayerASM_GetStateNameFromIndex(v14, v13);
    if ( !StateNameFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 676, ASSERT_TYPE_ASSERT, "(stateName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
      __debugbreak();
    v17 = this->GetStateByName(this, context->instances[0].m_pASM, (unsigned int)StateNameFromIndex);
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 679, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    v18 = context->instances[0].m_pASM == NULL;
    context->instances[0].m_CurState = v17->m_ID;
    if ( v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 683, ASSERT_TYPE_ASSERT, "(toInst->m_pASM)", (const char *)&queryFormat, "toInst->m_pASM") )
      __debugbreak();
    context->instances[0].m_NumSubtrees = 0;
    LOBYTE(v16) = 1;
    if ( BG_PlayerASM_UnpackAnimFromEntity(v8, v16, &animsetIndex, (unsigned int *)&es, v28) && v17->m_NumSubtrees > 0 )
    {
      v19 = *v17->m_Subtrees;
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 708, ASSERT_TYPE_ASSERT, "(subAssetName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "subAssetName != NULL_SCR_STRING") )
        __debugbreak();
      ASM = Common_Asm::GetASM(this, v19);
      if ( !ASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 711, ASSERT_TYPE_ASSERT, "(subAsmAsset)", (const char *)&queryFormat, "subAsmAsset") )
        __debugbreak();
      v21 = Common_Asm::AddSubtree(this, context, context->instances, ASM);
      v21->m_pASM = ASM;
      v22 = BG_PlayerASM_GetStateNameFromIndex(animsetIndex, (int)es);
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 718, ASSERT_TYPE_ASSERT, "(subStateName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "subStateName != NULL_SCR_STRING") )
        __debugbreak();
      v23 = this->GetStateByName(this, v21->m_pASM, (unsigned int)v22);
      if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 721, ASSERT_TYPE_ASSERT, "(subtreeState)", (const char *)&queryFormat, "subtreeState") )
        __debugbreak();
      v21->m_CurState = v23->m_ID;
      LOBYTE(v21[1].m_pASM) = 1;
    }
  }
  else
  {
    m_Name = AssetBySuit->m_Name;
    if ( !m_Name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 658, ASSERT_TYPE_ASSERT, "(assetName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "assetName != NULL_SCR_STRING") )
      __debugbreak();
    Common_Asm::Instantiate(this, context, clientNum, m_Name, 1, NULL);
  }
  Profile_EndInternal(NULL);
}

/*
==============
BgPlayer_Asm::BgPlayer_Asm
==============
*/
void BgPlayer_Asm::BgPlayer_Asm(BgPlayer_Asm *this)
{
  Common_Asm::Common_Asm(this);
  this->m_MaxSubtreesPerInstance = 1;
  this->__vftable = (BgPlayer_Asm_vtbl *)&BgPlayer_Asm::`vftable';
  this->m_MaxEphemeralTables = 1;
  this->m_Mode = ASM_MODE_PLAYER;
  this->m_SupportsEventParamTableOffsets = 0;
}

/*
==============
BgPlayer_Asm::~BgPlayer_Asm
==============
*/
void BgPlayer_Asm::~BgPlayer_Asm(BgPlayer_Asm *this)
{
  this->__vftable = (BgPlayer_Asm_vtbl *)&BgPlayer_Asm::`vftable';
  Common_Asm::~Common_Asm(this);
}

/*
==============
BgPlayer_Asm::AllocEphemeralTableIndex
==============
*/
unsigned __int8 BgPlayer_Asm::AllocEphemeralTableIndex(BgPlayer_Asm *this, ASM_Instance *pInst)
{
  return -1;
}

/*
==============
BgPlayer_Asm::BuildStateMap
==============
*/
void BgPlayer_Asm::BuildStateMap(const ASM *pASM)
{
  unsigned __int16 v2; 
  scr_string_t m_Name; 
  scr_string_t v4; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  char v6; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base::ENodeColor m_color; 
  bool v9; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v12; 
  scr_string_t v13; 
  bool v14; 
  ntl::pair<PlayerASM_StateMapKey,unsigned short> r_element; 
  PlayerASM_StateMapKey v16; 
  ntl::red_black_tree_iterator<PlayerASM_StateMapKey,ntl::red_black_tree_node<ntl::pair<PlayerASM_StateMapKey,unsigned short> >,ntl::pair<PlayerASM_StateMapKey,unsigned short> *,ntl::pair<PlayerASM_StateMapKey,unsigned short> &> v17; 
  ntl::red_black_tree_iterator<PlayerASM_StateMapKey,ntl::red_black_tree_node<ntl::pair<PlayerASM_StateMapKey,unsigned short> >,ntl::pair<PlayerASM_StateMapKey,unsigned short> *,ntl::pair<PlayerASM_StateMapKey,unsigned short> &> result; 

  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 307, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  v2 = 0;
  if ( pASM->m_NumStates > 0 )
  {
    while ( 1 )
    {
      m_Name = pASM->m_Name;
      v16.asmName = m_Name;
      v4 = pASM->m_States[v2].m_Name;
      v16.stateName = v4;
      if ( BgPlayer_Asm::ms_asmStateMap.m_size >= 0x400 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CAEEA0, 982i64);
      p_m_endNodeBase = &BgPlayer_Asm::ms_asmStateMap.m_endNodeBase;
      r_element.first = v16;
      v6 = 1;
      mp_parent = BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_parent;
      r_element.second = v2;
      while ( mp_parent )
      {
        m_color = mp_parent[1].m_color;
        p_m_endNodeBase = mp_parent;
        v9 = m_Name < (unsigned int)m_color;
        if ( m_Name == m_color )
          v9 = (unsigned int)v4 < *((_DWORD *)&mp_parent[1].m_color + 1);
        v6 = v9;
        if ( v9 )
          mp_parent = mp_parent->mp_left;
        else
          mp_parent = mp_parent->mp_right;
      }
      mp_left = p_m_endNodeBase;
      if ( !v6 )
        goto LABEL_29;
      if ( p_m_endNodeBase != BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_left )
        break;
      ntl::red_black_tree<PlayerASM_StateMapKey,ntl::pair<PlayerASM_StateMapKey,unsigned short>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<PlayerASM_StateMapKey,unsigned short>>,1024,8>,ntl::return_pair_first<PlayerASM_StateMapKey,unsigned short>,ntl::less<PlayerASM_StateMapKey,PlayerASM_StateMapKey>>::insert_node(&BgPlayer_Asm::ms_asmStateMap, &v17, p_m_endNodeBase, &r_element, 1, 0);
LABEL_36:
      if ( ++v2 >= pASM->m_NumStates )
        return;
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
    {
      mp_left = p_m_endNodeBase->mp_left;
      if ( mp_left )
      {
        for ( i = mp_left->mp_right; i; i = i->mp_right )
          mp_left = i;
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_parent;
        if ( p_m_endNodeBase == mp_left->mp_left )
        {
          do
          {
            v12 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v12 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = p_m_endNodeBase->mp_right;
    }
LABEL_29:
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    v13 = mp_left[1].m_color;
    v14 = (unsigned int)v13 < r_element.first.asmName;
    if ( v13 == r_element.first.asmName )
      v14 = *((_DWORD *)&mp_left[1].m_color + 1) < r_element.first.stateName;
    if ( v14 )
      ntl::red_black_tree<PlayerASM_StateMapKey,ntl::pair<PlayerASM_StateMapKey,unsigned short>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<PlayerASM_StateMapKey,unsigned short>>,1024,8>,ntl::return_pair_first<PlayerASM_StateMapKey,unsigned short>,ntl::less<PlayerASM_StateMapKey,PlayerASM_StateMapKey>>::insert_node(&BgPlayer_Asm::ms_asmStateMap, &result, p_m_endNodeBase, &r_element, 0, 0);
    goto LABEL_36;
  }
}

/*
==============
BgPlayer_Asm::CheckTransitions
==============
*/
ASM_Transition *BgPlayer_Asm::CheckTransitions(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState, ASM_TransitionList *pOutTransitionList)
{
  unsigned int inOutNumExecTransitions; 
  bitarray<320> pInOutVisitedStates; 

  inOutNumExecTransitions = 0;
  memset(&pInOutVisitedStates, 0, sizeof(pInOutVisitedStates));
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1331, ASSERT_TYPE_ASSERT, "(pInst->m_pASM)", (const char *)&queryFormat, "pInst->m_pASM") )
    __debugbreak();
  if ( pInst->m_pASM->m_NumStates >= 320 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1332, ASSERT_TYPE_ASSERT, "( pInst->m_pASM->m_NumStates ) < ( (320) )", "%s < %s\n\t%i, %i", "pInst->m_pASM->m_NumStates", "PLAYERASM_MAX_NUM_STATES", pInst->m_pASM->m_NumStates, 320) )
    __debugbreak();
  return BgPlayer_Asm::CheckTransitionsInternal(this, context, pInst, pState, pOutTransitionList, 0, &inOutNumExecTransitions, &pInOutVisitedStates);
}

/*
==============
BgPlayer_Asm::CheckTransitionsInternal
==============
*/
ASM_Transition *BgPlayer_Asm::CheckTransitionsInternal(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState, ASM_TransitionList *pOutTransitionList, unsigned int depth, unsigned int *inOutNumExecTransitions, bitarray<320> *pInOutVisitedStates)
{
  ASM_TransitionList *v9; 
  ASM_Transition *v12; 
  const ASM_State *State; 
  const ASM *m_pASM; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  scr_string_t m_Name; 
  int v18; 
  int *v19; 
  ASM_Transition *v20; 
  const ASM_State *v21; 
  unsigned __int64 m_ID; 
  bool isPassthrough; 
  ASM_Function *p_m_FuncName; 
  bool v25; 
  bool v26; 
  int v27; 
  PlayerASM_AnimSlot v28; 
  bool isNegate; 
  bool v30; 
  bool v31; 
  char v32; 
  bool v33; 
  ASM_Transition *v34; 
  unsigned __int64 v35; 
  bool v36; 
  const ASM_Transition *v37; 
  int *outRandomizedTransitionIndices; 
  __int64 currentStateName; 
  __int64 toStateName; 
  __int64 result; 
  bool v43; 
  int v44; 
  const ASM_State *v47; 
  int *v48; 
  const ASM *v49; 
  PlayerASM_Parameters parameters; 
  int v51[24]; 

  v9 = pOutTransitionList;
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1341, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1342, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( !pInOutVisitedStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1343, ASSERT_TYPE_ASSERT, "(pInOutVisitedStates)", (const char *)&queryFormat, "pInOutVisitedStates") )
    __debugbreak();
  v12 = NULL;
  v43 = Common_Asm::PreCheckTransitions(this, context, pInst, pState, 24, v51);
  State = Common_Asm::Utils::GetState(pInst->m_pASM, pInst->m_CurState);
  m_pASM = pInst->m_pASM;
  v49 = pInst->m_pASM;
  v47 = State;
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, pInst->m_EntNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1358, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !context )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1361, ASSERT_TYPE_ASSERT, "(playerContext)", (const char *)&queryFormat, "playerContext") )
      __debugbreak();
  }
  m_Name = m_pASM->m_Name;
  parameters.entNum = pInst->m_EntNum;
  parameters.slot[0] = pInst[1].m_pASM;
  parameters.pAsm = this;
  parameters.asmName = m_Name;
  *(_QWORD *)&parameters.noteName = 0i64;
  parameters.pParams = NULL;
  parameters.ci = CharacterInfo;
  parameters.stateName = v47->m_Name;
  v18 = 0;
  v44 = 0;
  if ( pState->m_NumTransitions > 0 )
  {
    v19 = v51;
    v48 = v51;
    while ( 1 )
    {
      if ( v43 )
        v18 = *v19;
      v20 = &pState->m_Transitions[v18];
      v21 = Common_Asm::Utils::GetState(m_pASM, v20->m_ToStateID);
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1381, ASSERT_TYPE_ASSERT, "(pToState)", (const char *)&queryFormat, "pToState") )
        __debugbreak();
      if ( (unsigned int)(v21->m_Type - 2) > 3 )
      {
        isPassthrough = 0;
      }
      else
      {
        m_ID = (unsigned int)v21->m_ID;
        isPassthrough = 1;
        if ( (unsigned int)m_ID >= 0x140 )
        {
          LODWORD(currentStateName) = 320;
          LODWORD(outRandomizedTransitionIndices) = v21->m_ID;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outRandomizedTransitionIndices, currentStateName) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (m_ID & 0x1F)) & pInOutVisitedStates->array[m_ID >> 5]) != 0 )
          goto LABEL_60;
      }
      p_m_FuncName = &v20->m_FuncName;
      v25 = ASM_TransitionList::Push(v9, v20);
      if ( v20 == (ASM_Transition *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1396, ASSERT_TYPE_ASSERT, "(pFunc)", (const char *)&queryFormat, "pFunc") )
        __debugbreak();
      if ( !v20->m_FuncName.m_bBuiltin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1397, ASSERT_TYPE_ASSERT, "(pFunc->m_bBuiltin)", (const char *)&queryFormat, "pFunc->m_bBuiltin") )
        __debugbreak();
      if ( p_m_FuncName->m_FuncID >= 0xC7u )
      {
        LODWORD(currentStateName) = 199;
        LODWORD(outRandomizedTransitionIndices) = p_m_FuncName->m_FuncID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1398, ASSERT_TYPE_ASSERT, "(unsigned)( pFunc->m_FuncID ) < (unsigned)( ( sizeof( *array_counter( s_PlayerASMBuiltinFuncs ) ) + 0 ) )", "pFunc->m_FuncID doesn't index ARRAY_COUNT( s_PlayerASMBuiltinFuncs )\n\t%i not in [0, %i)", outRandomizedTransitionIndices, currentStateName) )
          __debugbreak();
      }
      parameters.numParams = v20->m_FuncName.m_NumParams;
      v26 = 0;
      parameters.pParams = v20->m_FuncName.m_Params;
      if ( BG_PlayerASM_IsUpdateNeededForFunction(context, pInst, &parameters, v20, &v20->m_FuncName) )
      {
        v27 = s_PlayerASMBuiltinFuncs_6[p_m_FuncName->m_FuncID].m_Func((const PlayerASM_Context *)context, &parameters);
        isNegate = v20->m_FuncName.m_bNegate;
        v26 = v27 != 0;
        v30 = v27 == 0;
        if ( !isNegate )
          v30 = v27 != 0;
        LOBYTE(v28) = !pInst->m_bPrimary;
        BgPlayer_Asm::DebugRender_Transition((const PlayerASM_Context *)context, (const PlayerASM_Instance *)pInst, v28, *inOutNumExecTransitions, &v20->m_FuncName, v47->m_Name, pState->m_Name, v21->m_Name, v30, isNegate, isPassthrough, depth);
        ++*inOutNumExecTransitions;
      }
      v31 = v26;
      v32 = 0;
      v33 = !v31;
      if ( !v20->m_FuncName.m_bNegate )
        v33 = v31;
      if ( v33 )
      {
        v32 = 1;
        v34 = v20;
        if ( isPassthrough )
        {
          v35 = (unsigned int)v21->m_ID;
          if ( (unsigned int)v35 >= 0x140 )
          {
            LODWORD(result) = 320;
            LODWORD(toStateName) = v21->m_ID;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", toStateName, result) )
              __debugbreak();
          }
          pInOutVisitedStates->array[v35 >> 5] |= 0x80000000 >> (v35 & 0x1F);
          v34 = BgPlayer_Asm::CheckTransitionsInternal(this, context, pInst, v21, pOutTransitionList, depth + 1, inOutNumExecTransitions, pInOutVisitedStates);
        }
        if ( v34 )
        {
          v12 = v34;
          break;
        }
      }
      v36 = !v25;
      v9 = pOutTransitionList;
      if ( !v36 )
      {
        v37 = ASM_TransitionList::Pop(pOutTransitionList);
        if ( v37 != v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1454, ASSERT_TYPE_ASSERT, "( pTransitionListTop ) == ( pTransition )", "%s == %s\n\t%p, %p", "pTransitionListTop", "pTransition", v37, v20) )
          __debugbreak();
      }
      if ( pState->m_Type == 3 && v32 )
      {
LABEL_63:
        v12 = NULL;
        break;
      }
LABEL_60:
      v18 = v44 + 1;
      v19 = v48 + 1;
      v44 = v18;
      ++v48;
      if ( v18 >= pState->m_NumTransitions )
        goto LABEL_63;
      m_pASM = v49;
    }
  }
  Common_Asm::PostCheckTransitions(this, context, pInst, pState);
  return v12;
}

/*
==============
BgPlayer_Asm::ClearClientEvents
==============
*/
void BgPlayer_Asm::ClearClientEvents(BgPlayer_Asm *this, int entNum)
{
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  int v6; 

  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, entNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 950, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v6 = this->GetGameTime(this);
  BG_PlayerASM_DebugAnimEventLog_AddEntry(entNum, v6, &CharacterInfo->clientEvents);
  memset_0(&CharacterInfo->clientEvents, 0, sizeof(CharacterInfo->clientEvents));
}

/*
==============
BgPlayer_Asm::ClearEphemeralEventTables
==============
*/
void BgPlayer_Asm::ClearEphemeralEventTables(BgPlayer_Asm *this)
{
  ;
}

/*
==============
BgPlayer_Asm::ClearInstanceState
==============
*/
void BgPlayer_Asm::ClearInstanceState(BgPlayer_Asm *this, PlayerASM_Context *context, ASM_Instance *pInst, const playerState_s *ps)
{
  int suitIndex; 
  scr_string_t AssetNameBySuit; 
  ASM *ASM; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 734, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 735, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( pInst->m_NumSubtrees >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 737, ASSERT_TYPE_ASSERT, "(pInst->m_NumSubtrees < static_cast<uint>( PlayerASM_AnimSlot::COUNT ))", (const char *)&queryFormat, "pInst->m_NumSubtrees < static_cast<uint>( PlayerASM_AnimSlot::COUNT )") )
    __debugbreak();
  if ( ps == (const playerState_s *)-236i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 741, ASSERT_TYPE_ASSERT, "(primaryState)", (const char *)&queryFormat, "primaryState") )
    __debugbreak();
  suitIndex = ps->suitIndex;
  if ( Common_Asm::ShouldLooseFileLoad() )
  {
    AssetNameBySuit = BG_PlayerASM_GetAssetNameBySuit(suitIndex);
    if ( !AssetNameBySuit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 624, ASSERT_TYPE_ASSERT, "(asmName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "asmName != NULL_SCR_STRING") )
      __debugbreak();
    ASM = Common_Asm::GetASM(this, AssetNameBySuit);
  }
  else
  {
    ASM = (ASM *)BG_PlayerASM_GetAssetBySuit(suitIndex);
  }
  if ( ASM->m_Name != pInst->m_pASM->m_Name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 742, ASSERT_TYPE_ASSERT, "(GetAssetBySuit( ps->suitIndex )->m_Name == pInst->m_pASM->m_Name)", (const char *)&queryFormat, "GetAssetBySuit( ps->suitIndex )->m_Name == pInst->m_pASM->m_Name") )
    __debugbreak();
  this->FreeInstance(this, context, ps->clientNum);
}

/*
==============
BgPlayer_Asm::DebugOverrideStates
==============
*/
char BgPlayer_Asm::DebugOverrideStates(BgPlayer_Asm *this, ASM_Instance *pInst, const int entNum, PlayerASM_Context *context)
{
  const dvar_t *v9; 
  char v10; 
  const dvar_t *v11; 
  __int64 integer64; 
  __int64 v13; 
  __int64 v14; 
  const dvar_t *v15; 
  scr_string_t String; 
  scr_string_t v17; 
  const ASM_State *v18; 
  int m_ID; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  scr_string_t v22; 
  scr_string_t v23; 
  ASM_Instance *v24; 
  const ASM_State *v25; 
  int v26; 

  if ( !pInst )
    return 0;
  v9 = DCONST_DVARINT_playerasm_debug_override_entnum;
  v10 = 0;
  if ( !DCONST_DVARINT_playerasm_debug_override_entnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_entnum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( entNum == v9->current.integer )
  {
    v11 = DVARSTR_playerasm_debug_override_main_state_name;
    if ( !DVARSTR_playerasm_debug_override_main_state_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_main_state_name") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer64 = v11->current.integer64;
    v13 = -1i64;
    v14 = -1i64;
    do
      ++v14;
    while ( *(_BYTE *)(integer64 + v14) );
    if ( (_DWORD)v14 )
    {
      v15 = DVARSTR_playerasm_debug_override_main_state_name;
      if ( !DVARSTR_playerasm_debug_override_main_state_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_main_state_name") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      String = SL_GetString(v15->current.string, 0);
      v17 = String;
      if ( String )
      {
        v18 = this->GetStateByName(this, pInst->m_pASM, (unsigned int)String);
        if ( v18 )
        {
          m_ID = v18->m_ID;
          if ( m_ID != pInst->m_CurState )
            Common_Asm::EnterState(this, context, pInst, m_ID, NULL, NULL);
          v10 = 1;
        }
        SL_RemoveRefToString(v17);
      }
    }
    v20 = DVARSTR_playerasm_debug_override_sub_state_name;
    if ( !DVARSTR_playerasm_debug_override_sub_state_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_sub_state_name") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    do
      ++v13;
    while ( *(_BYTE *)(v20->current.integer64 + v13) );
    if ( (_DWORD)v13 )
    {
      v21 = DVARSTR_playerasm_debug_override_sub_state_name;
      if ( !DVARSTR_playerasm_debug_override_sub_state_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_sub_state_name") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      v22 = SL_GetString(v21->current.string, 0);
      v23 = v22;
      if ( v22 )
      {
        v24 = pInst->m_Subtrees[0];
        if ( v24 )
        {
          v25 = this->GetStateByName(this, v24->m_pASM, (unsigned int)v22);
          if ( v25 )
          {
            v26 = v25->m_ID;
            if ( v26 != v24->m_CurState )
              Common_Asm::EnterState(this, context, v24, v26, NULL, NULL);
            v10 = 1;
          }
        }
        SL_RemoveRefToString(v23);
      }
    }
  }
  return v10;
}

/*
==============
BgPlayer_Asm::DebugRender
==============
*/
void BgPlayer_Asm::DebugRender(BgPlayer_Asm *this, const ASM_Instance *pInst, vec3_t *drawPos, int dTime)
{
  const dvar_t *v6; 
  int integer; 
  const dvar_t *v8; 
  bool enabled; 
  bool IsServerThread; 
  bool v11; 
  const dvar_t *v12; 
  int v15; 
  const dvar_t *v16; 
  double v17; 
  vec3_t v18; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1548, ASSERT_TYPE_ASSERT, "( pInst )", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  v6 = DVARINT_playerasm_debugMode;
  if ( !DVARINT_playerasm_debugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  if ( integer )
  {
    v8 = DVARBOOL_playerasm_debugHistoryEnabled;
    if ( !DVARBOOL_playerasm_debugHistoryEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugHistoryEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    enabled = v8->current.enabled;
    IsServerThread = ASM_IsServerThread();
    v11 = IsServerThread;
    if ( integer == 1 )
    {
      if ( !IsServerThread )
        return;
    }
    else if ( integer == 2 && IsServerThread )
    {
      return;
    }
    v12 = DVARINT_playerasm_debugEntNum;
    if ( !DVARINT_playerasm_debugEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugEntNum") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( pInst->m_EntNum == v12->current.integer )
    {
      _XMM2 = 0i64;
      __asm { vroundss xmm2, xmm2, xmm1, 2 }
      v15 = (int)*(float *)&_XMM2;
      if ( v11 )
        v15 *= 2;
      if ( integer == 3 && !v11 )
      {
        if ( enabled )
          drawPos->v[0] = drawPos->v[0] - 120.0;
        else
          drawPos->v[2] = drawPos->v[2] - 15.0;
      }
      v16 = DVARBOOL_playerasm_debugTransitionsEnabled;
      if ( !DVARBOOL_playerasm_debugTransitionsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugTransitionsEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( !v16->current.enabled && !Dvar_GetBool_Internal_DebugName(DVARBOOL_playerasm_debugAliasFunctionsEnabled, "playerasm_debugAliasFunctionsEnabled") )
      {
        v17 = *(double *)drawPos->v;
        v18.v[2] = drawPos->v[2];
        *(double *)v18.v = v17;
        Common_Asm::Utils::DebugRender_States3D(pInst, enabled, &v18, v11, v15);
      }
      if ( v11 && !Dvar_GetBool_Internal_DebugName(DVARBOOL_playerasm_debugTransitionsEnabled, "playerasm_debugTransitionsEnabled") && !Dvar_GetBool_Internal_DebugName(DVARBOOL_playerasm_debugAliasFunctionsEnabled, "playerasm_debugAliasFunctionsEnabled") )
        Common_Asm::Utils::DebugRender_EntDetails(pInst, NULL, v11, v15);
    }
  }
}

/*
==============
BgPlayer_Asm::DebugRender_FunctionExecution
==============
*/
void BgPlayer_Asm::DebugRender_FunctionExecution(const PlayerASM_Instance *pInst, const PlayerASM_AnimSlot slot, unsigned int numExecutedFunctions, const ASM_Function *pFunc, scr_string_t stateName, scr_string_t aliasName, bool result, bool isNegate)
{
  __int64 v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  int integer; 
  bool IsServerThread; 
  bool v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const char *v18; 
  int Int_Internal_DebugName; 
  const vec4_t *v20; 
  const vec4_t *v21; 
  float v22; 
  float v23; 
  float v24; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  int m_ConditionType; 
  ASM_Function_Param *m_Params; 
  const char *v34; 
  const char *m_Name; 
  const char *v36; 
  bool v37; 
  __int64 v38; 
  const char *v39; 
  __int64 fromServer; 
  const char *fromServera; 
  __int64 duration; 
  unsigned __int8 v43; 
  int bufferPos[12]; 
  char buffer[1024]; 
  char dest[1024]; 

  v10 = numExecutedFunctions;
  v43 = slot;
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1776, ASSERT_TYPE_ASSERT, "( pInst )", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  v11 = DVARBOOL_playerasm_debugAliasFunctionsEnabled;
  if ( !DVARBOOL_playerasm_debugAliasFunctionsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugAliasFunctionsEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v12 = DVARINT_playerasm_debugMode;
    if ( !DVARINT_playerasm_debugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    integer = v12->current.integer;
    if ( integer )
    {
      IsServerThread = ASM_IsServerThread();
      v15 = IsServerThread;
      if ( integer == 1 )
      {
        if ( !IsServerThread )
          return;
      }
      else if ( integer == 2 && IsServerThread )
      {
        return;
      }
      v16 = DVARINT_playerasm_debugEntNum;
      if ( !DVARINT_playerasm_debugEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugEntNum") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( pInst->m_EntNum == v16->current.integer )
      {
        if ( v15 )
        {
          v17 = DCONST_DVARINT_playerasm_debugAliasFunctionDurationServer;
          v18 = "playerasm_debugAliasFunctionDurationServer";
        }
        else
        {
          v17 = DCONST_DVARINT_playerasm_debugAliasFunctionDurationClient;
          v18 = "playerasm_debugAliasFunctionDurationClient";
        }
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v17, v18);
        v20 = &colorRed;
        bufferPos[0] = 0;
        if ( pFunc )
        {
          v21 = &colorWhite;
          if ( result )
            v21 = &colorGreen;
        }
        else
        {
          v21 = &colorRed;
        }
        if ( integer != 3 || v15 )
          v22 = FLOAT_150_0;
        else
          v22 = FLOAT_500_0;
        v23 = (float)v10;
        v24 = (float)((float)Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerasm_debugExecutionOffsetY, "playerasm_debugExecutionOffsetY") + v22) + (float)(v23 * 17.0);
        _XMM0 = v43;
        __asm { vpcmpeqd xmm3, xmm0, xmm1 }
        _XMM1 = LODWORD(FLOAT_875_0);
        __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
        if ( pFunc )
        {
          if ( !(_DWORD)v10 )
          {
            fromServera = SL_ConvertToString(stateName);
            v30 = "SUB";
            if ( !v43 )
              v30 = "PRIMARY";
            v31 = "CLIENT";
            if ( v15 )
              v31 = "SERVER";
            Com_sprintf(dest, 0x400ui64, "%s %s: '%s'\n ", v31, v30, fromServera);
            if ( v15 )
              v20 = &colorOrange;
            CL_AddDebugString2D(*(float *)&_XMM0 - 10.0, v24 - 16.0, v20, 1.2, dest, v15, Int_Internal_DebugName);
          }
          if ( pFunc->m_NumParams <= 0 || (m_ConditionType = s_PlayerASMBuiltinFuncs_6[pFunc->m_FuncID].m_ConditionType, m_ConditionType < 0) )
          {
            v37 = pFunc->m_NumParams <= 0;
            buffer[0] = 0;
            if ( !v37 )
            {
              v38 = *(_DWORD *)pFunc->m_Params;
              if ( (int)v38 > 0 && s_PlayerASMBuiltinFuncs_6[pFunc->m_FuncID].m_Func == PlayerASM_EventFired )
              {
                v39 = SL_ConvertToString((scr_string_t)v38);
                Core_strcpy(buffer, 0x400ui64, v39);
              }
              else
              {
                Com_sprintf(buffer, 0x400ui64, "%i", v38);
              }
            }
            m_Name = s_PlayerASMBuiltinFuncs_6[pFunc->m_FuncID].m_Name;
            v36 = SL_ConvertToString(aliasName);
            v34 = (char *)&queryFormat.fmt + 3;
          }
          else
          {
            if ( (unsigned int)m_ConditionType >= 0x3F )
            {
              LODWORD(duration) = 63;
              LODWORD(fromServer) = s_PlayerASMBuiltinFuncs_6[pFunc->m_FuncID].m_ConditionType;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1855, ASSERT_TYPE_ASSERT, "(unsigned)( conditionType ) < (unsigned)( NUM_ANIM_CONDITIONS )", "conditionType doesn't index NUM_ANIM_CONDITIONS\n\t%i not in [0, %i)", fromServer, duration) )
                __debugbreak();
            }
            m_Params = pFunc->m_Params;
            v34 = (char *)&queryFormat.fmt + 3;
            bufferPos[2] = m_Params->u.m_Int;
            bufferPos[3] = m_Params[1].u.m_Int;
            bufferPos[4] = m_Params[2].u.m_Int;
            bufferPos[5] = m_Params[3].u.m_Int;
            bufferPos[6] = m_Params[4].u.m_Int;
            bufferPos[7] = m_Params[5].u.m_Int;
            bufferPos[8] = m_Params[6].u.m_Int;
            bufferPos[9] = m_Params[7].u.m_Int;
            BG_Animation_PrintConditional(buffer, 1024, bufferPos, m_ConditionType, 0, (const unsigned int (*)[8])&bufferPos[2], (const char *)&queryFormat.fmt + 3);
            I_strlwr(buffer);
            m_Name = s_PlayerASMBuiltinFuncs_6[pFunc->m_FuncID].m_Name;
            v36 = SL_ConvertToString(aliasName);
          }
          if ( isNegate )
            v34 = "!";
          Com_sprintf(dest, 0x400ui64, "[%.2d][%s]: %s%s(%s)\n ", (unsigned int)(v10 + 1), v36, v34, m_Name, buffer);
          CL_AddDebugString2D(*(float *)&_XMM0, v24, v21, 1.2, dest, v15, Int_Internal_DebugName);
        }
        else
        {
          v29 = SL_ConvertToString(aliasName);
          Com_sprintf(dest, 0x400ui64, "[--][%s]: SUCCESS\n ", v29);
          CL_AddDebugString2D(*(float *)&_XMM0, v24, &colorRed, 1.2, dest, v15, Int_Internal_DebugName);
        }
      }
    }
  }
}

/*
==============
BgPlayer_Asm::DebugRender_Transition
==============
*/
void BgPlayer_Asm::DebugRender_Transition(const PlayerASM_Context *playerContext, const PlayerASM_Instance *pInst, const PlayerASM_AnimSlot slot, unsigned int numExecutedTransitions, const ASM_Function *pFunc, scr_string_t originatingStateName, scr_string_t currentStateName, scr_string_t toStateName, bool result, bool isNegate, bool isPassthrough, int depth)
{
  unsigned __int8 v13; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  int integer; 
  bool IsServerThread; 
  bool v20; 
  const dvar_t *v21; 
  __int64 v22; 
  unsigned int count; 
  __int64 v24; 
  int v25; 
  bool v26; 
  int serverTime; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  int v32; 
  int *v33; 
  char *v34; 
  const char *v35; 
  int m_ConditionType; 
  __int64 v37; 
  ASM_Function_Param *m_Params; 
  const char *v39; 
  const char *v40; 
  bool v41; 
  __int64 v42; 
  const char *v43; 
  unsigned int (*value)[8]; 
  char *baseColor; 
  const char *v46; 
  int v48; 
  int bufferPos; 
  int *destPos; 
  char *dest; 
  unsigned int v52[8]; 
  char v53[128]; 
  char buffer[1024]; 
  char v55[1024]; 

  v13 = slot;
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1616, ASSERT_TYPE_ASSERT, "( pInst )", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  v16 = DVARBOOL_playerasm_debugTransitionsEnabled;
  if ( !DVARBOOL_playerasm_debugTransitionsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugTransitionsEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled )
  {
    v17 = DVARINT_playerasm_debugMode;
    if ( !DVARINT_playerasm_debugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    integer = v17->current.integer;
    if ( integer )
    {
      IsServerThread = ASM_IsServerThread();
      v20 = IsServerThread;
      if ( integer == 1 )
      {
        if ( !IsServerThread )
          return;
      }
      else if ( integer == 2 && IsServerThread )
      {
        return;
      }
      v21 = DVARINT_playerasm_debugEntNum;
      if ( !DVARINT_playerasm_debugEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugEntNum") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( pInst->m_EntNum == v21->current.integer )
      {
        v22 = 0i64;
        bufferPos = 0;
        if ( !v20 )
          v22 = 1i64;
        if ( BgPlayer_Asm::ms_debugExecutionBuffer[v22].count < 5 )
        {
          Sys_EnterCriticalSection(CRITSECT_DEBUG_PLAYERASM_EXEC);
          if ( !numExecutedTransitions && !v13 )
            ++BgPlayer_Asm::ms_debugExecutionBuffer[v22].count;
          count = BgPlayer_Asm::ms_debugExecutionBuffer[v22].count;
          if ( count )
          {
            v24 = v22 * 10324 + 1032 * (5i64 * v13 + count - 1);
            v25 = -1;
            v26 = !playerContext->useEntityState;
            dest = (char *)BgPlayer_Asm::ms_debugExecutionBuffer + v24;
            destPos = (int *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].text[v24 + 1024];
            if ( v26 )
              serverTime = playerContext->const_ps->serverTime;
            else
              serverTime = -1;
            v28 = "^1";
            *(int *)((char *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].time + v24) = serverTime;
            if ( numExecutedTransitions )
            {
              v34 = dest;
              v33 = (int *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].text[v24 + 1024];
            }
            else
            {
              *(_DWORD *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].text[v24 + 1024] = 0;
              v29 = SL_ConvertToString(originatingStateName);
              v30 = "SUB";
              v31 = "CLIENT";
              if ( !v13 )
                v30 = "PRIMARY";
              if ( v20 )
                v31 = "SERVER";
              if ( playerContext->useEntityState )
                v32 = -1;
              else
                v32 = playerContext->const_ps->serverTime;
              v33 = destPos;
              v34 = dest;
              v46 = v29;
              v35 = "^1";
              if ( v20 )
                v35 = "^3";
              LODWORD(value) = v32;
              Com_sprintfPos_truncate(dest, 0x400ui64, destPos, "%s[%d] %s %s %s %d: '%s'\n ", v35, value, v31, v30, "^7", pInst->m_EntNum, v46);
            }
            if ( pFunc->m_NumParams > 0 )
            {
              m_ConditionType = s_PlayerASMBuiltinFuncs_6[pFunc->m_FuncID].m_ConditionType;
              if ( m_ConditionType >= 0 )
              {
                v25 = s_PlayerASMBuiltinFuncs_6[pFunc->m_FuncID].m_ConditionType;
                if ( (unsigned int)m_ConditionType >= 0x3F )
                {
                  LODWORD(baseColor) = 63;
                  LODWORD(value) = s_PlayerASMBuiltinFuncs_6[pFunc->m_FuncID].m_ConditionType;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1710, ASSERT_TYPE_ASSERT, "(unsigned)( conditionType ) < (unsigned)( NUM_ANIM_CONDITIONS )", "conditionType doesn't index NUM_ANIM_CONDITIONS\n\t%i not in [0, %i)", value, baseColor) )
                    __debugbreak();
                }
              }
            }
            v53[0] = 0;
            v48 = 0;
            if ( depth > 0 )
            {
              v37 = (unsigned int)depth;
              do
              {
                Com_sprintfPos_truncate(v53, 0x80ui64, &v48, "--");
                --v37;
              }
              while ( v37 );
            }
            if ( v25 < 0 )
            {
              v41 = pFunc->m_NumParams <= 0;
              buffer[0] = 0;
              if ( !v41 )
              {
                v42 = *(_DWORD *)pFunc->m_Params;
                if ( (int)v42 > 0 && s_PlayerASMBuiltinFuncs_6[pFunc->m_FuncID].m_Func == PlayerASM_EventFired )
                {
                  v43 = SL_ConvertToString((scr_string_t)v42);
                  Core_strcpy(buffer, 0x400ui64, v43);
                }
                else
                {
                  Com_sprintf(buffer, 0x400ui64, "%i", v42);
                }
              }
              v40 = SL_ConvertToString(toStateName);
              v39 = (char *)&queryFormat.fmt + 3;
            }
            else
            {
              m_Params = pFunc->m_Params;
              v39 = (char *)&queryFormat.fmt + 3;
              v52[0] = m_Params->u.m_Int;
              v52[1] = m_Params[1].u.m_Int;
              v52[2] = m_Params[2].u.m_Int;
              v52[3] = m_Params[3].u.m_Int;
              v52[4] = m_Params[4].u.m_Int;
              v52[5] = m_Params[5].u.m_Int;
              v52[6] = m_Params[6].u.m_Int;
              v52[7] = m_Params[7].u.m_Int;
              BG_Animation_PrintConditional(buffer, 1024, &bufferPos, v25, 0, (const unsigned int (*)[8])v52, (const char *)&queryFormat.fmt + 3);
              I_strlwr(buffer);
              v40 = SL_ConvertToString(toStateName);
            }
            if ( isNegate )
              v39 = "!";
            Com_sprintf_truncate(v55, 0x3Eui64, "[%.2d]%s%s%s(%s)=>[%s]", numExecutedTransitions + 1, v53, v39, s_PlayerASMBuiltinFuncs_6[pFunc->m_FuncID].m_Name, buffer, v40);
            if ( result )
            {
              if ( isPassthrough )
                v28 = "^2";
            }
            else
            {
              v28 = "^7";
            }
            Com_sprintfPos_truncate(v34, 0x400ui64, v33, "%s%s\n", v28, v55);
          }
          Sys_LeaveCriticalSection(CRITSECT_DEBUG_PLAYERASM_EXEC);
        }
      }
    }
  }
}

/*
==============
BgPlayer_Asm::EnterDefaultState
==============
*/
void BgPlayer_Asm::EnterDefaultState(BgPlayer_Asm *this, playerState_s *ps, bool bOnlySubASMs, bool bExcludeSubASMs)
{
  PlayerASM_Instance *instances; 
  __int64 v9; 
  unsigned int clientNum; 
  ASM_Instance *v11; 
  ASM_Instance *v12; 
  int v13; 
  ASM_Instance **m_Subtrees; 
  PlayerASM_Context context; 

  instances = context.instances;
  v9 = 2i64;
  do
  {
    PlayerASM_Instance::PlayerASM_Instance(instances++);
    --v9;
  }
  while ( v9 );
  clientNum = ps->clientNum;
  context.ps = ps;
  context.playerAsm = NULL;
  context.holdrand = NULL;
  context.const_ps = ps;
  *(_WORD *)&context.useEntityState = 0;
  memset_0(context.instances, 0, sizeof(context.instances));
  BgPlayer_Asm::SetupInstanceState<1>(this, &context, ps->suitIndex, ps, NULL);
  if ( !this->GetInstance(this, &context, clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1112, ASSERT_TYPE_ASSERT, "(GetInstance( &context, entNum ))", "%s\n\tNot running an ASM instance for entity %d", "GetInstance( &context, entNum )", clientNum) )
    __debugbreak();
  v11 = this->GetInstance(this, &context, clientNum);
  v12 = v11;
  if ( !bOnlySubASMs )
    Common_Asm::EnterState(this, &context, v11, v11->m_pASM->m_StartState, NULL, NULL);
  if ( !bExcludeSubASMs )
  {
    v13 = 0;
    if ( v12->m_NumSubtrees > 0 )
    {
      m_Subtrees = v12->m_Subtrees;
      do
      {
        Common_Asm::EnterState(this, &context, *m_Subtrees, (*m_Subtrees)->m_pASM->m_StartState, NULL, NULL);
        ++v13;
        ++m_Subtrees;
      }
      while ( v13 < v12->m_NumSubtrees );
    }
  }
  BgPlayer_Asm::ClearInstanceState(this, &context, v12, ps);
}

/*
==============
BgPlayer_Asm::EnterStateFunc
==============
*/
void BgPlayer_Asm::EnterStateFunc(BgPlayer_Asm *this, const ASM_Instance *pInst, const ASM_State *pState)
{
  ;
}

/*
==============
BgPlayer_Asm::FireEvent
==============
*/
void BgPlayer_Asm::FireEvent(BgPlayer_Asm *this, ASM_Instance *pInst, const scr_string_t eventName)
{
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int *p_m_Time; 
  int v11; 
  ASM_Event *v12; 
  bool v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  v6 = -1;
  v7 = 0x7FFFFFFF;
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1475, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_FireEvent");
  if ( !pInst )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 214, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1480, ASSERT_TYPE_ASSERT, "(playerInst)", (const char *)&queryFormat, "playerInst") )
      __debugbreak();
  }
  v8 = BYTE1(pInst[1].m_pASM);
  v9 = 0;
  if ( !BYTE1(pInst[1].m_pASM) )
    goto LABEL_22;
  p_m_Time = &pInst->m_EventTable[0].m_Time;
  while ( 1 )
  {
    v11 = *(p_m_Time - 2);
    if ( v11 && *p_m_Time < v7 )
    {
      v6 = v9;
      v7 = *p_m_Time;
    }
    if ( eventName && v11 == eventName )
      break;
    ++v9;
    p_m_Time += 3;
    if ( v9 >= v8 )
      goto LABEL_19;
  }
  v12 = &pInst->m_EventTable[v9];
  if ( v12 )
    goto LABEL_28;
LABEL_19:
  if ( v6 < 0 )
  {
LABEL_22:
    v13 = (unsigned __int8)v8 < 8u;
LABEL_23:
    if ( !v13 )
    {
      LODWORD(v16) = BYTE1(pInst[1].m_pASM);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1505, ASSERT_TYPE_ASSERT, "(unsigned)( playerInst->m_NumEvents ) < (unsigned)( MAX_ASM_EVENTS_PER_TABLE )", "playerInst->m_NumEvents doesn't index MAX_ASM_EVENTS_PER_TABLE\n\t%i not in [0, %i)", v16, 8) )
        __debugbreak();
    }
    v15 = BYTE1(pInst[1].m_pASM);
    v14 = 3 * v15 + 18;
    BYTE1(pInst[1].m_pASM) = v15 + 1;
    goto LABEL_27;
  }
  v13 = (unsigned __int8)v8 < 8u;
  if ( (_BYTE)v8 != 8 )
    goto LABEL_23;
  v14 = 3i64 * v6 + 18;
LABEL_27:
  v12 = (ASM_Event *)((char *)pInst + 4 * v14);
LABEL_28:
  Scr_SetString(&v12->m_Name, eventName);
  v12->m_ParamID = -1;
  v12->m_Time = this->GetGameTime(this);
  Sys_ProfEndNamedEvent();
}

/*
==============
BgPlayer_Asm::FreeInstance
==============
*/
void BgPlayer_Asm::FreeInstance(BgPlayer_Asm *this, const ASM_Context *context, int entNum)
{
  PlayerASM_Instance *InstanceBySlot; 
  ASM_Instance *v6; 
  int v7; 
  ASM_Instance **m_Subtrees; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  InstanceBySlot = BgPlayer_Asm::GetInstanceBySlot(this, (const PlayerASM_Context *)context, MOVEMENT);
  v6 = InstanceBySlot;
  if ( InstanceBySlot )
  {
    if ( !InstanceBySlot->m_bInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1307, ASSERT_TYPE_ASSERT, "(pInst->m_bInUse)", (const char *)&queryFormat, "pInst->m_bInUse") )
      __debugbreak();
    Common_Asm::ClearEvents(this, v6);
    v7 = 0;
    if ( v6->m_NumSubtrees > 0 )
    {
      m_Subtrees = v6->m_Subtrees;
      do
      {
        Common_Asm::ClearEvents(this, *m_Subtrees);
        ++v7;
        ++m_Subtrees;
      }
      while ( v7 < v6->m_NumSubtrees );
    }
    ASM_Instance::FreeInstance(v6);
  }
}

/*
==============
BgPlayer_Asm::GetAssetBySuit
==============
*/
ASM *BgPlayer_Asm::GetAssetBySuit(BgPlayer_Asm *this, int suitIndex)
{
  scr_string_t AssetNameBySuit; 

  if ( !Common_Asm::ShouldLooseFileLoad() )
    return (ASM *)BG_PlayerASM_GetAssetBySuit(suitIndex);
  AssetNameBySuit = BG_PlayerASM_GetAssetNameBySuit(suitIndex);
  if ( !AssetNameBySuit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 624, ASSERT_TYPE_ASSERT, "(asmName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "asmName != NULL_SCR_STRING") )
    __debugbreak();
  return Common_Asm::GetASM(this, AssetNameBySuit);
}

/*
==============
BgPlayer_Asm::GetAssetMap
==============
*/
ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *BgPlayer_Asm::GetAssetMap(BgPlayer_Asm *this)
{
  return &BgPlayer_Asm::ms_asmMap;
}

/*
==============
BgPlayer_Asm::GetEphemeralEventParamTableID
==============
*/
__int64 BgPlayer_Asm::GetEphemeralEventParamTableID(BgPlayer_Asm *this, ASM_Instance *pInst)
{
  if ( pInst )
    return pInst->m_EphemeralEventParamTableID;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 223, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  return MEMORY[0x40];
}

/*
==============
BgPlayer_Asm::GetEventParamTableID
==============
*/
__int64 BgPlayer_Asm::GetEventParamTableID(BgPlayer_Asm *this, ASM_Instance *pInst)
{
  if ( pInst )
    return pInst->m_EventParamTableID;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 216, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  return MEMORY[0x3C];
}

/*
==============
BgPlayer_Asm::GetHistoryObject
==============
*/
ASM_History *BgPlayer_Asm::GetHistoryObject(BgPlayer_Asm *this, const ASM_Instance *pInst)
{
  const dvar_t *v2; 

  v2 = DVARBOOL_playerasm_debugHistoryEnabled;
  if ( !DVARBOOL_playerasm_debugHistoryEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugHistoryEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return ASM_GetHistoryObject(pInst->m_EntNum);
  else
    return 0i64;
}

/*
==============
BgPlayer_Asm::GetInstance
==============
*/
const ASM_Context *BgPlayer_Asm::GetInstance(BgPlayer_Asm *this, const ASM_Context *context, int entNum)
{
  const ASM_Context *v4; 

  if ( !context )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1175, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
  }
  v4 = context + 40;
  if ( !*(_BYTE *)&v4[185] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1179, ASSERT_TYPE_ASSERT, "(pInst->m_bInUse)", (const char *)&queryFormat, "pInst->m_bInUse") )
    __debugbreak();
  return v4;
}

/*
==============
BgPlayer_Asm::GetInstanceByAssetName
==============
*/
ASM_Instance *BgPlayer_Asm::GetInstanceByAssetName(BgPlayer_Asm *this, const ASM_Context *context, int entNum, scr_string_t asmName)
{
  const ASM_Instance *Subtree; 

  if ( !context )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1232, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
  }
  Subtree = (const ASM_Instance *)&context[40];
  if ( *(_BYTE *)&context[225] && (Subtree->m_pASM->m_Name == asmName || (Subtree = Common_Asm::Utils::GetSubtree(Subtree, asmName)) != NULL) )
    return (ASM_Instance *)Subtree;
  else
    return 0i64;
}

/*
==============
BgPlayer_Asm::GetInstanceBySlot
==============
*/
PlayerASM_Instance *BgPlayer_Asm::GetInstanceBySlot(BgPlayer_Asm *this, const PlayerASM_Context *context, const PlayerASM_AnimSlot slot)
{
  unsigned __int8 v3; 
  PlayerASM_Instance *v5; 
  unsigned __int8 v6; 
  __int64 v8; 

  v3 = slot;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1187, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( v3 >= 2u )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1188, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", v8, 2) )
      __debugbreak();
  }
  v5 = &context->instances[v3];
  if ( !v5->m_bInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1192, ASSERT_TYPE_ASSERT, "(pInst->m_bInUse)", (const char *)&queryFormat, "pInst->m_bInUse") )
    __debugbreak();
  v6 = v5->m_slot[0];
  if ( v6 != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1193, ASSERT_TYPE_ASSERT, "( pInst->m_slot ) == ( slot )", "%s == %s\n\t%i, %i", "pInst->m_slot", "slot", v6, v3) )
    __debugbreak();
  return v5;
}

/*
==============
BgPlayer_Asm::GetInstanceIfExists
==============
*/
const ASM_Context *BgPlayer_Asm::GetInstanceIfExists(BgPlayer_Asm *this, const ASM_Context *context, int entNum)
{
  const ASM_Context *result; 

  if ( !context )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1201, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
  }
  result = NULL;
  if ( context[225] )
    return context + 40;
  return result;
}

/*
==============
BgPlayer_Asm::GetInstanceIfExists
==============
*/
const ASM_Context *BgPlayer_Asm::GetInstanceIfExists(BgPlayer_Asm *this, const ASM_Context *context, int entNum)
{
  const ASM_Context *result; 

  if ( !context )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1217, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
  }
  result = NULL;
  if ( context[225] )
    return context + 40;
  return result;
}

/*
==============
BgPlayer_Asm::GetLooseFileMap
==============
*/
ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *BgPlayer_Asm::GetLooseFileMap()
{
  return &BgPlayer_Asm::ms_asmLooseFileMap;
}

/*
==============
BgPlayer_Asm::GetStateByName
==============
*/
ASM_State *BgPlayer_Asm::GetStateByName(BgPlayer_Asm *this, const ASM *pASM, const scr_string_t stateName)
{
  ntl::red_black_tree_node_base *mp_parent; 
  scr_string_t m_Name; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base::ENodeColor m_color; 
  bool v9; 
  ntl::red_black_tree_node_base::ENodeColor v10; 
  bool v11; 
  __int64 v13; 

  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1278, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  mp_parent = BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_parent;
  m_Name = pASM->m_Name;
  p_m_endNodeBase = &BgPlayer_Asm::ms_asmStateMap.m_endNodeBase;
  if ( !BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_parent )
    return 0i64;
  do
  {
    m_color = mp_parent[1].m_color;
    v9 = m_color < (unsigned int)m_Name;
    if ( m_color == m_Name )
      v9 = *((_DWORD *)&mp_parent[1].m_color + 1) < (unsigned int)stateName;
    if ( v9 )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &BgPlayer_Asm::ms_asmStateMap.m_endNodeBase )
    return 0i64;
  v10 = p_m_endNodeBase[1].m_color;
  v11 = m_Name < (unsigned int)v10;
  if ( m_Name == v10 )
    v11 = (unsigned int)stateName < *((_DWORD *)&p_m_endNodeBase[1].m_color + 1);
  if ( v11 )
    return 0i64;
  if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( (unsigned int)LOWORD(p_m_endNodeBase[1].mp_parent) >= pASM->m_NumStates )
  {
    LODWORD(v13) = LOWORD(p_m_endNodeBase[1].mp_parent);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1288, ASSERT_TYPE_ASSERT, "(unsigned)( iter->second ) < (unsigned)( pASM->m_NumStates )", "iter->second doesn't index pASM->m_NumStates\n\t%i not in [0, %i)", v13, pASM->m_NumStates) )
      __debugbreak();
  }
  return &pASM->m_States[LOWORD(p_m_endNodeBase[1].mp_parent)];
}

/*
==============
BgPlayer_Asm::Init
==============
*/
void BgPlayer_Asm::Init(BgPlayer_Asm *this, bool fullInit, bool bServerThreadStartup)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  ASM_Mode Mode; 

  this->ClearEphemeralEventTables(this);
  if ( fullInit )
  {
    if ( BgPlayer_Asm::ms_asmStateMap.m_size )
    {
      mp_parent = BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_parent;
      if ( BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_parent )
      {
        do
        {
          ntl::red_black_tree<PlayerASM_StateMapKey,ntl::pair<PlayerASM_StateMapKey,unsigned short>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<PlayerASM_StateMapKey,unsigned short>>,1024,8>,ntl::return_pair_first<PlayerASM_StateMapKey,unsigned short>,ntl::less<PlayerASM_StateMapKey,PlayerASM_StateMapKey>>::erase_tree(&BgPlayer_Asm::ms_asmStateMap, (ntl::red_black_tree_node<ntl::pair<PlayerASM_StateMapKey,unsigned short> > *)mp_parent->mp_right);
          mp_left = mp_parent->mp_left;
          *(_QWORD *)&mp_parent->m_color = BgPlayer_Asm::ms_asmStateMap.m_freelist.m_head.mp_next;
          BgPlayer_Asm::ms_asmStateMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
          mp_parent = mp_left;
        }
        while ( mp_left );
      }
      BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_parent = NULL;
      BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_left = &BgPlayer_Asm::ms_asmStateMap.m_endNodeBase;
      BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_right = &BgPlayer_Asm::ms_asmStateMap.m_endNodeBase;
      BgPlayer_Asm::ms_asmStateMap.m_size = 0i64;
    }
    Mode = Common_Asm::GetMode(this);
    ASM_LoadAll(Mode, (ScrThreadMode)bServerThreadStartup);
    BgPlayer_Asm::ValidateAssets();
    memset_0(BgPlayer_Asm::ms_debugExecutionBuffer, 0, sizeof(BgPlayer_Asm::ms_debugExecutionBuffer));
  }
}

/*
==============
BgPlayer_Asm::InstanceAllocate
==============
*/
ASM_Context *BgPlayer_Asm::InstanceAllocate(BgPlayer_Asm *this, const ASM_Context *context)
{
  unsigned int i; 
  ASM_Context *result; 
  ASM_Context *v5; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  for ( i = 0; i < 2; ++i )
  {
    if ( !*(_BYTE *)&context[200 * i + 225] )
    {
      v5 = (ASM_Context *)&context[200 * i + 40];
      ASM_Instance::InitInstance((ASM_Instance *)v5);
      v5[192] = (ASM_Context)i;
      result = v5;
      v5[193] = 0;
      return result;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 290, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find unused ASM_Instance!") )
    __debugbreak();
  return 0i64;
}

/*
==============
BgPlayer_Asm::MyChanges
==============
*/
void BgPlayer_Asm::MyChanges(void)
{
  const dvar_t *v0; 

  v0 = DCONST_DVARBOOL_playerasm_enable;
  if ( DCONST_DVARBOOL_playerasm_enable )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_playerasm_enable);
    if ( v0->current.enabled )
    {
      Common_Asm::MyChanges_UpdateAssetMaps(&BgPlayer_Asm::ms_asmMap, &BgPlayer_Asm::ms_asmLooseFileMap);
      BgPlayer_Asm::ValidateAssets();
    }
  }
}

/*
==============
PlayerASM_IsConnectingPaths
==============
*/
bool PlayerASM_IsConnectingPaths()
{
  return 0;
}

/*
==============
PlayerASM_IsEnabled
==============
*/
bool PlayerASM_IsEnabled()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARBOOL_playerasm_enable;
  if ( !DCONST_DVARBOOL_playerasm_enable )
    return 0;
  Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_playerasm_enable);
  return v0->current.enabled;
}

/*
==============
BgPlayer_Asm::ProcessFlags
==============
*/
void BgPlayer_Asm::ProcessFlags(BgPlayer_Asm *this, ASM_Instance *pInst, const ASM_State *pState, const ASM_State *pPrevState)
{
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 261, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 262, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
}

/*
==============
BgPlayer_Asm::Register
==============
*/
void BgPlayer_Asm::Register(ASM *pASM, bool bLooseFile)
{
  Common_Asm::Register(&BgPlayer_Asm::ms_asmMap, &BgPlayer_Asm::ms_asmLooseFileMap, pASM, bLooseFile);
  BgPlayer_Asm::BuildStateMap(pASM);
}

/*
==============
BgPlayer_Asm::RegisterBgInstance
==============
*/
void BgPlayer_Asm::RegisterBgInstance(BgPlayer_Asm *playerAsm)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v4; 
  ntl::red_black_tree_node_base *v5; 
  ntl::red_black_tree_node_base *v6; 
  bool v7; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v10; 
  BgPlayer_Asm *r_element; 
  ntl::red_black_tree_iterator<BgPlayer_Asm *,ntl::red_black_tree_node<BgPlayer_Asm *>,BgPlayer_Asm * *,BgPlayer_Asm * &> result; 

  r_element = playerAsm;
  if ( !playerAsm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 412, ASSERT_TYPE_ASSERT, "(playerAsm)", (const char *)&queryFormat, "playerAsm") )
    __debugbreak();
  mp_parent = BgPlayer_Asm::ms_bgInstances.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &BgPlayer_Asm::ms_bgInstances.m_endNodeBase;
  result.mp_node = (ntl::red_black_tree_node<BgPlayer_Asm *> *)&BgPlayer_Asm::ms_bgInstances.m_endNodeBase;
  v4 = &BgPlayer_Asm::ms_bgInstances.m_endNodeBase;
  if ( BgPlayer_Asm::ms_bgInstances.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( *(_QWORD *)&mp_parent[1].m_color < (unsigned __int64)playerAsm )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        v4 = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( v4 != &BgPlayer_Asm::ms_bgInstances.m_endNodeBase )
    {
      v5 = &BgPlayer_Asm::ms_bgInstances.m_endNodeBase;
      if ( (unsigned __int64)playerAsm >= *(_QWORD *)&v4[1].m_color )
        v5 = v4;
      v4 = v5;
    }
  }
  result.mp_node = (ntl::red_black_tree_node<BgPlayer_Asm *> *)v4;
  if ( v4 != &BgPlayer_Asm::ms_bgInstances.m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 413, ASSERT_TYPE_ASSERT, "(!ms_bgInstances.exists( playerAsm ))", (const char *)&queryFormat, "!ms_bgInstances.exists( playerAsm )") )
    __debugbreak();
  v6 = BgPlayer_Asm::ms_bgInstances.m_endNodeBase.mp_parent;
  v7 = 1;
  while ( v6 )
  {
    p_m_endNodeBase = v6;
    v7 = (unsigned __int64)playerAsm < *(_QWORD *)&v6[1].m_color;
    if ( (unsigned __int64)playerAsm >= *(_QWORD *)&v6[1].m_color )
      v6 = v6->mp_right;
    else
      v6 = v6->mp_left;
  }
  mp_left = p_m_endNodeBase;
  if ( v7 )
  {
    if ( p_m_endNodeBase == BgPlayer_Asm::ms_bgInstances.m_endNodeBase.mp_left )
    {
      ntl::red_black_tree<BgPlayer_Asm *,BgPlayer_Asm *,ntl::fixed_pool_allocator<ntl::red_black_tree_node<BgPlayer_Asm *>,3,8>,ntl::return_input<BgPlayer_Asm *>,ntl::less<BgPlayer_Asm *,BgPlayer_Asm *>>::insert_node(&BgPlayer_Asm::ms_bgInstances, &result, p_m_endNodeBase, &r_element, 1, 0);
      return;
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
    {
      mp_left = p_m_endNodeBase->mp_left;
      if ( mp_left )
      {
        for ( i = mp_left->mp_right; i; i = i->mp_right )
          mp_left = i;
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_parent;
        if ( p_m_endNodeBase == mp_left->mp_left )
        {
          do
          {
            v10 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v10 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = p_m_endNodeBase->mp_right;
    }
  }
  if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( *(_QWORD *)&mp_left[1].m_color < (unsigned __int64)playerAsm )
    ntl::red_black_tree<BgPlayer_Asm *,BgPlayer_Asm *,ntl::fixed_pool_allocator<ntl::red_black_tree_node<BgPlayer_Asm *>,3,8>,ntl::return_input<BgPlayer_Asm *>,ntl::less<BgPlayer_Asm *,BgPlayer_Asm *>>::insert_node(&BgPlayer_Asm::ms_bgInstances, &result, p_m_endNodeBase, &r_element, 0, 0);
}

/*
==============
BgPlayer_Asm::Release
==============
*/
void BgPlayer_Asm::Release(ASM *pASM, bool bUnlockPackfileData)
{
  const dvar_t *v2; 

  v2 = DCONST_DVARBOOL_playerasm_enable;
  if ( DCONST_DVARBOOL_playerasm_enable )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_playerasm_enable);
    if ( v2->current.enabled )
      Common_Asm::Release(&BgPlayer_Asm::ms_asmMap, &BgPlayer_Asm::ms_asmLooseFileMap, pASM, bUnlockPackfileData);
  }
}

/*
==============
BgPlayer_Asm::RemoveBgInstance
==============
*/
void BgPlayer_Asm::RemoveBgInstance(BgPlayer_Asm *playerAsm)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v4; 
  ntl::red_black_tree_node_base *v5; 
  ntl::red_black_tree_node_base *v6; 

  if ( !playerAsm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 421, ASSERT_TYPE_ASSERT, "(playerAsm)", (const char *)&queryFormat, "playerAsm") )
    __debugbreak();
  mp_parent = BgPlayer_Asm::ms_bgInstances.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &BgPlayer_Asm::ms_bgInstances.m_endNodeBase;
  if ( !BgPlayer_Asm::ms_bgInstances.m_endNodeBase.mp_parent )
  {
LABEL_13:
    if ( p_m_endNodeBase != &BgPlayer_Asm::ms_bgInstances.m_endNodeBase )
      goto LABEL_16;
    goto LABEL_14;
  }
  do
  {
    if ( *(_QWORD *)&mp_parent[1].m_color < (unsigned __int64)playerAsm )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase != &BgPlayer_Asm::ms_bgInstances.m_endNodeBase )
  {
    v4 = &BgPlayer_Asm::ms_bgInstances.m_endNodeBase;
    if ( (unsigned __int64)playerAsm >= *(_QWORD *)&p_m_endNodeBase[1].m_color )
      v4 = p_m_endNodeBase;
    p_m_endNodeBase = v4;
    goto LABEL_13;
  }
LABEL_14:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 422, ASSERT_TYPE_ASSERT, "(ms_bgInstances.exists( playerAsm ))", (const char *)&queryFormat, "ms_bgInstances.exists( playerAsm )") )
    __debugbreak();
LABEL_16:
  v5 = BgPlayer_Asm::ms_bgInstances.m_endNodeBase.mp_parent;
  v6 = &BgPlayer_Asm::ms_bgInstances.m_endNodeBase;
  if ( BgPlayer_Asm::ms_bgInstances.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( *(_QWORD *)&v5[1].m_color < (unsigned __int64)playerAsm )
      {
        v5 = v5->mp_right;
      }
      else
      {
        v6 = v5;
        v5 = v5->mp_left;
      }
    }
    while ( v5 );
    if ( v6 != &BgPlayer_Asm::ms_bgInstances.m_endNodeBase && (unsigned __int64)playerAsm >= *(_QWORD *)&v6[1].m_color )
    {
      if ( !BgPlayer_Asm::ms_bgInstances.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
        __debugbreak();
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      ntl::red_black_tree_node_base::get_next(v6);
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      if ( v6 == &BgPlayer_Asm::ms_bgInstances.m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
        __debugbreak();
      ntl::red_black_tree_node_base::rebalance_for_erase(v6, &BgPlayer_Asm::ms_bgInstances.m_endNodeBase.mp_parent, &BgPlayer_Asm::ms_bgInstances.m_endNodeBase.mp_left, &BgPlayer_Asm::ms_bgInstances.m_endNodeBase.mp_right);
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
        __debugbreak();
      *(_QWORD *)&v6->m_color = BgPlayer_Asm::ms_bgInstances.m_freelist.m_head.mp_next;
      --BgPlayer_Asm::ms_bgInstances.m_size;
      BgPlayer_Asm::ms_bgInstances.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v6;
    }
  }
}

/*
==============
BgPlayer_Asm::RunChooseAnimFunction
==============
*/
void BgPlayer_Asm::RunChooseAnimFunction(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, const ASM_Function *pFunc, int *outEntryIndex)
{
  if ( !pFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 208, ASSERT_TYPE_ASSERT, "(pFunc)", (const char *)&queryFormat, "pFunc") )
    __debugbreak();
  this->RunChooseAnimFunction_with_params(this, context, pInst, asmName, entNum, stateName, pFunc->m_FuncID, pFunc->m_NumParams, pFunc->m_Params, pFunc->m_bBuiltin, outEntryIndex);
}

/*
==============
BgPlayer_Asm::RunChooseAnimFunction_with_params
==============
*/
void BgPlayer_Asm::RunChooseAnimFunction_with_params(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin, int *outEntryIndex)
{
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  int (__fastcall *m_Func)(const PlayerASM_Context *, const PlayerASM_Parameters *); 
  __int64 v18; 
  BgPlayer_Asm *v19; 
  int v20; 
  scr_string_t v21; 
  scr_string_t v22; 
  int v23; 
  int v24; 
  ASM_Function_Param *v25; 
  char m_pASM; 
  characterInfo_t *v27; 

  if ( !bBuiltin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 186, ASSERT_TYPE_ASSERT, "(bBuiltin)", (const char *)&queryFormat, "bBuiltin") )
    __debugbreak();
  if ( !outEntryIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 187, ASSERT_TYPE_ASSERT, "(outEntryIndex)", (const char *)&queryFormat, "outEntryIndex") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 188, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( (unsigned int)funcID >= 0xC7 )
  {
    LODWORD(v18) = funcID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 190, ASSERT_TYPE_ASSERT, "(unsigned)( funcID ) < (unsigned)( ( sizeof( *array_counter( s_PlayerASMBuiltinFuncs ) ) + 0 ) )", "funcID doesn't index ARRAY_COUNT( s_PlayerASMBuiltinFuncs )\n\t%i not in [0, %i)", v18, 199) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, entNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 194, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 214, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  v24 = numParams;
  v25 = pParams;
  m_pASM = (char)pInst[1].m_pASM;
  v22 = stateName;
  m_Func = s_PlayerASMBuiltinFuncs_6[funcID].m_Func;
  v19 = this;
  v20 = entNum;
  v21 = asmName;
  v23 = 0;
  v27 = CharacterInfo;
  *outEntryIndex = m_Func((const PlayerASM_Context *)context, (const PlayerASM_Parameters *)&v19);
}

/*
==============
BgPlayer_Asm::RunFunction_asm
==============
*/
void BgPlayer_Asm::RunFunction_asm(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, __int64 asmName, int entNum, const ASM_Function *pFunc)
{
  bool m_bBuiltin; 

  m_bBuiltin = pFunc->m_bBuiltin;
  this->RunFunction_asm_with_params(this, context, pInst, (const scr_string_t)asmName, entNum, pFunc->m_FuncID, pFunc->m_NumParams, pFunc->m_Params, m_bBuiltin);
}

/*
==============
BgPlayer_Asm::RunFunction_asm_state
==============
*/
void BgPlayer_Asm::RunFunction_asm_state(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, const ASM_Function *pFunc)
{
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  __int64 m_FuncID; 
  __int64 v14; 
  BgPlayer_Asm *v15; 
  int v16; 
  scr_string_t v17; 
  scr_string_t v18; 
  int v19; 
  int m_NumParams; 
  ASM_Function_Param *m_Params; 
  char m_pASM; 
  characterInfo_t *v23; 

  if ( !pFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 112, ASSERT_TYPE_ASSERT, "(pFunc)", (const char *)&queryFormat, "pFunc") )
    __debugbreak();
  if ( !pFunc->m_bBuiltin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 113, ASSERT_TYPE_ASSERT, "(pFunc->m_bBuiltin)", (const char *)&queryFormat, "pFunc->m_bBuiltin") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 114, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( pFunc->m_FuncID >= 0xC7u )
  {
    LODWORD(v14) = pFunc->m_FuncID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 116, ASSERT_TYPE_ASSERT, "(unsigned)( pFunc->m_FuncID ) < (unsigned)( ( sizeof( *array_counter( s_PlayerASMBuiltinFuncs ) ) + 0 ) )", "pFunc->m_FuncID doesn't index ARRAY_COUNT( s_PlayerASMBuiltinFuncs )\n\t%i not in [0, %i)", v14, 199) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, entNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 120, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 214, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  m_NumParams = pFunc->m_NumParams;
  m_Params = pFunc->m_Params;
  m_pASM = (char)pInst[1].m_pASM;
  v18 = stateName;
  m_FuncID = pFunc->m_FuncID;
  v15 = this;
  v16 = entNum;
  v17 = asmName;
  v19 = 0;
  v23 = CharacterInfo;
  s_PlayerASMBuiltinFuncs_6[m_FuncID].m_Func((const PlayerASM_Context *)context, (const PlayerASM_Parameters *)&v15);
}

/*
==============
BgPlayer_Asm::RunFunction_asm_state_with_params
==============
*/
void BgPlayer_Asm::RunFunction_asm_state_with_params(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin)
{
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  __int64 v16; 
  BgPlayer_Asm *v17; 
  int v18; 
  scr_string_t v19; 
  scr_string_t v20; 
  int v21; 
  int v22; 
  ASM_Function_Param *v23; 
  char m_pASM; 
  characterInfo_t *v25; 

  if ( !bBuiltin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 157, ASSERT_TYPE_ASSERT, "(bBuiltin)", (const char *)&queryFormat, "bBuiltin") )
    __debugbreak();
  if ( (unsigned int)funcID >= 0xC7 )
  {
    LODWORD(v16) = funcID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( funcID ) < (unsigned)( ( sizeof( *array_counter( s_PlayerASMBuiltinFuncs ) ) + 0 ) )", "funcID doesn't index ARRAY_COUNT( s_PlayerASMBuiltinFuncs )\n\t%i not in [0, %i)", v16, 199) )
      __debugbreak();
  }
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 159, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, entNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 163, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 214, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  v22 = numParams;
  v23 = pParams;
  m_pASM = (char)pInst[1].m_pASM;
  v20 = stateName;
  v17 = this;
  v18 = entNum;
  v19 = asmName;
  v21 = 0;
  v25 = CharacterInfo;
  s_PlayerASMBuiltinFuncs_6[funcID].m_Func((const PlayerASM_Context *)context, (const PlayerASM_Parameters *)&v17);
}

/*
==============
BgPlayer_Asm::RunFunction_asm_with_params
==============
*/
void BgPlayer_Asm::RunFunction_asm_with_params(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin)
{
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  __int64 v15; 
  BgPlayer_Asm *v16; 
  int v17; 
  scr_string_t v18; 
  __int64 v19; 
  int v20; 
  ASM_Function_Param *v21; 
  char m_pASM; 
  characterInfo_t *v23; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 85, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !bBuiltin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 86, ASSERT_TYPE_ASSERT, "(bBuiltin)", (const char *)&queryFormat, "bBuiltin") )
    __debugbreak();
  if ( (unsigned int)funcID >= 0xC7 )
  {
    LODWORD(v15) = funcID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( funcID ) < (unsigned)( ( sizeof( *array_counter( s_PlayerASMBuiltinFuncs ) ) + 0 ) )", "funcID doesn't index ARRAY_COUNT( s_PlayerASMBuiltinFuncs )\n\t%i not in [0, %i)", v15, 199) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, entNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 91, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 214, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  v20 = numParams;
  v21 = pParams;
  v19 = 0i64;
  m_pASM = (char)pInst[1].m_pASM;
  v16 = this;
  v17 = entNum;
  v18 = asmName;
  v23 = CharacterInfo;
  s_PlayerASMBuiltinFuncs_6[funcID].m_Func((const PlayerASM_Context *)context, (const PlayerASM_Parameters *)&v16);
}

/*
==============
BgPlayer_Asm::RunNotetrackHandler
==============
*/
void BgPlayer_Asm::RunNotetrackHandler(BgPlayer_Asm *this, const PlayerASM_Context *context, int entNum, scr_string_t stateName, scr_string_t noteName)
{
  const PlayerASM_Instance *v9; 

  v9 = (const PlayerASM_Instance *)((__int64 (__fastcall *)(BgPlayer_Asm *))this->GetInstance)(this);
  if ( !v9 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CAF0D0, 984i64, (unsigned int)entNum);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 220, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
      __debugbreak();
  }
  BgPlayer_Asm::RunNotetrackHandler(this, context, v9, stateName, noteName);
}

/*
==============
BgPlayer_Asm::RunNotetrackHandler
==============
*/
void BgPlayer_Asm::RunNotetrackHandler(BgPlayer_Asm *this, const PlayerASM_Context *context, const PlayerASM_Instance *pInst, scr_string_t stateName, scr_string_t noteName)
{
  const ASM_State *v9; 
  ASM_Function *p_m_PlayAnimNoteHandler; 
  int m_Name; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  scr_string_t v14; 
  __int64 m_FuncID; 
  __int64 v16; 
  BgPlayer_Asm *v17; 
  int m_EntNum; 
  scr_string_t v19; 
  int v20; 
  scr_string_t v21; 
  int m_NumParams; 
  ASM_Function_Param *m_Params; 
  char v24; 
  characterInfo_t *v25; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 540, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !stateName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 541, ASSERT_TYPE_ASSERT, "(stateName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !noteName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 542, ASSERT_TYPE_ASSERT, "(noteName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "noteName != NULL_SCR_STRING") )
    __debugbreak();
  v9 = this->GetStateByName(this, pInst->m_pASM, (unsigned int)stateName);
  if ( v9 )
  {
    p_m_PlayAnimNoteHandler = &v9->m_PlayAnimNoteHandler;
    if ( v9->m_PlayAnimNoteHandler.m_FuncID != -1 )
    {
      m_Name = v9->m_Name;
      if ( v9 == (const ASM_State *)-88i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 136, ASSERT_TYPE_ASSERT, "(pFunc)", (const char *)&queryFormat, "pFunc") )
        __debugbreak();
      if ( !p_m_PlayAnimNoteHandler->m_bBuiltin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 137, ASSERT_TYPE_ASSERT, "(pFunc->m_bBuiltin)", (const char *)&queryFormat, "pFunc->m_bBuiltin") )
        __debugbreak();
      if ( p_m_PlayAnimNoteHandler->m_FuncID >= 0xC7u )
      {
        LODWORD(v16) = p_m_PlayAnimNoteHandler->m_FuncID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( pFunc->m_FuncID ) < (unsigned)( ( sizeof( *array_counter( s_PlayerASMBuiltinFuncs ) ) + 0 ) )", "pFunc->m_FuncID doesn't index ARRAY_COUNT( s_PlayerASMBuiltinFuncs )\n\t%i not in [0, %i)", v16, 199) )
          __debugbreak();
      }
      ActiveStatics = BgStatic::GetActiveStatics();
      CharacterInfo = BG_GetCharacterInfo(ActiveStatics, pInst->m_EntNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 143, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      v14 = pInst->m_pASM->m_Name;
      m_EntNum = pInst->m_EntNum;
      m_NumParams = p_m_PlayAnimNoteHandler->m_NumParams;
      m_Params = p_m_PlayAnimNoteHandler->m_Params;
      v24 = pInst->m_slot[0];
      m_FuncID = p_m_PlayAnimNoteHandler->m_FuncID;
      v19 = v14;
      v17 = this;
      v25 = CharacterInfo;
      v20 = m_Name;
      v21 = noteName;
      s_PlayerASMBuiltinFuncs_6[m_FuncID].m_Func(context, (const PlayerASM_Parameters *)&v17);
    }
  }
}

/*
==============
BgPlayer_Asm::RunTransitionFunction
==============
*/
bool BgPlayer_Asm::RunTransitionFunction(BgPlayer_Asm *this, const ASM_Context *context, const ASM_Instance *pInst, const scr_string_t asmName)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 177, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BgPlayer_Asm::RunTransitionFunction() not implemented.") )
    __debugbreak();
  return 0;
}

/*
==============
BgPlayer_Asm::Shutdown
==============
*/
void BgPlayer_Asm::Shutdown(BgPlayer_Asm *this, bool fullShutdown)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 

  if ( fullShutdown )
  {
    Common_Asm::Shutdown(&BgPlayer_Asm::ms_asmMap, &BgPlayer_Asm::ms_asmLooseFileMap);
    if ( BgPlayer_Asm::ms_asmStateMap.m_size )
    {
      mp_parent = BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_parent;
      if ( BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_parent )
      {
        do
        {
          ntl::red_black_tree<PlayerASM_StateMapKey,ntl::pair<PlayerASM_StateMapKey,unsigned short>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<PlayerASM_StateMapKey,unsigned short>>,1024,8>,ntl::return_pair_first<PlayerASM_StateMapKey,unsigned short>,ntl::less<PlayerASM_StateMapKey,PlayerASM_StateMapKey>>::erase_tree(&BgPlayer_Asm::ms_asmStateMap, (ntl::red_black_tree_node<ntl::pair<PlayerASM_StateMapKey,unsigned short> > *)mp_parent->mp_right);
          mp_left = mp_parent->mp_left;
          *(_QWORD *)&mp_parent->m_color = BgPlayer_Asm::ms_asmStateMap.m_freelist.m_head.mp_next;
          BgPlayer_Asm::ms_asmStateMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
          mp_parent = mp_left;
        }
        while ( mp_left );
      }
      BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_left = &BgPlayer_Asm::ms_asmStateMap.m_endNodeBase;
      BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_parent = NULL;
      BgPlayer_Asm::ms_asmStateMap.m_endNodeBase.mp_right = &BgPlayer_Asm::ms_asmStateMap.m_endNodeBase;
      BgPlayer_Asm::ms_asmStateMap.m_size = 0i64;
    }
  }
}

/*
==============
BgPlayer_Asm::StateInterruptsSubtrees
==============
*/
bool BgPlayer_Asm::StateInterruptsSubtrees(BgPlayer_Asm *this, const ASM_Instance *pInst, const ASM_State *pCurState)
{
  if ( !pCurState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1137, ASSERT_TYPE_ASSERT, "(pCurState)", (const char *)&queryFormat, "pCurState") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1138, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  return pInst->m_bPrimary && (pCurState->m_Flags & 1) != 0;
}

/*
==============
BgPlayer_Asm::TerminateFunc
==============
*/
void BgPlayer_Asm::TerminateFunc(BgPlayer_Asm *this, const ASM_State *pState, const ASM_Context *context, const ASM *const pASM, ASM_Instance *pInst, bool forceTerminateFunc)
{
  PlayerASM_Instance *PlayerASMInstance; 

  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1257, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1258, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1259, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( pState->m_TerminateFunc.m_FuncID == -1 )
  {
    if ( forceTerminateFunc )
    {
      if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
        __debugbreak();
      PlayerASMInstance = GetPlayerASMInstance(pInst);
      BG_PlayerASM_ClearState((const PlayerASM_Context *)context, (const PlayerASM_AnimSlot)(unsigned __int8)PlayerASMInstance->m_slot[0]);
    }
  }
  else
  {
    this->RunFunction_asm_state(this, context, pInst, (const scr_string_t)pASM->m_Name, pInst->m_EntNum, pState->m_Name, &pState->m_TerminateFunc);
  }
}

/*
==============
BgPlayer_Asm::TickPS
==============
*/
_BOOL8 BgPlayer_Asm::TickPS(BgPlayer_Asm *this, playerState_s *ps, const PmoveASMArgs *pmoveArgs, bool bCheckTransitionsOnly, bool bForceUpdateOnNewState)
{
  PlayerASM_Instance *instances; 
  __int64 v10; 
  unsigned int clientNum; 
  unsigned int *holdrand; 
  const BgHandler *handler; 
  bool v14; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  double v17; 
  float v18; 
  double v19; 
  int AnimMoveSpeed; 
  __int16 v21; 
  __int16 VelocityDir; 
  double v23; 
  PlayerASM_AnimSlot v24; 
  ASM_Instance *v25; 
  int delta; 
  bool v27; 
  double v28; 
  BgPlayer_Asm_vtbl *v29; 
  __int64 v30; 
  BgStatic *v31; 
  characterInfo_t *v32; 
  int v33; 
  __int64 v35; 
  double v36; 
  float v37; 
  PlayerASM_Context context; 

  instances = context.instances;
  v10 = 2i64;
  do
  {
    PlayerASM_Instance::PlayerASM_Instance(instances++);
    --v10;
  }
  while ( v10 );
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 979, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  clientNum = ps->clientNum;
  context.ps = ps;
  context.const_ps = ps;
  *(_WORD *)&context.useEntityState = 0;
  memset_0(context.instances, 0, sizeof(context.instances));
  holdrand = pmoveArgs->holdrand;
  handler = pmoveArgs->handler;
  context.playerAsm = this;
  context.holdrand = holdrand;
  v14 = handler->IsServer((BgHandler *)handler);
  Profile_Begin(438 - v14);
  pmoveArgs->handler->ProfBeginAnimUpdate((BgHandler *)pmoveArgs->handler);
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
  v17 = BG_MovementDirToDegrees(ps->movementDir);
  v18 = *(float *)&v17;
  v19 = AngleDelta(*(const float *)&v17, CharacterInfo->lerpMoveDir);
  CharacterInfo->deltaLerpMoveDir = *(float *)&v19;
  CharacterInfo->lerpMoveDir = v18;
  AnimMoveSpeed = BG_GetAnimMoveSpeed(ps, CharacterInfo, pmoveArgs);
  v21 = AnimMoveSpeed;
  CharacterInfo->speed = AnimMoveSpeed;
  if ( (unsigned int)(AnimMoveSpeed + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)AnimMoveSpeed, "signed", AnimMoveSpeed) )
    __debugbreak();
  ps->moveSpeedForAnimBlend = v21;
  VelocityDir = BG_PlayerASM_GetVelocityDir(ps, pmoveArgs->handler);
  v23 = BG_MovementDirToDegrees(VelocityDir);
  BG_PlayerASM_UpdateAngles(*(const float *)&v23, CharacterInfo);
  BgPlayer_Asm::SetupInstanceState<1>(this, &context, ps->suitIndex, ps, NULL);
  v25 = this->GetInstance(this, &context, clientNum);
  if ( !v25 )
  {
    LODWORD(v35) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 1006, ASSERT_TYPE_ASSERT, "(pInst)", "%s\n\tNot running an ASM instance for entity %d", "pInst", v35) )
      __debugbreak();
  }
  delta = pmoveArgs->delta;
  if ( delta )
  {
    if ( ps->animState.slot[0].packedAnim )
      BgPlayer_Asm::UpdateTimersAndEventsSlot(this, &context, ps, MOVEMENT, pmoveArgs->delta);
    if ( ps->animState.slot[1].packedAnim )
    {
      LOBYTE(v24) = 1;
      BgPlayer_Asm::UpdateTimersAndEventsSlot(this, &context, ps, v24, delta);
    }
  }
  v27 = 0;
  if ( !BgPlayer_Asm::DebugOverrideStates(this, v25, clientNum, &context) )
    v27 = Common_Asm::Tick(this, &context, clientNum, bCheckTransitionsOnly, bForceUpdateOnNewState);
  BgPlayer_Asm::ClearInstanceState(this, &context, v25, ps);
  v28 = *(double *)ps->origin.v;
  v29 = this->__vftable;
  v30 = (unsigned int)pmoveArgs->delta;
  v37 = ps->origin.v[2];
  v36 = v28;
  ((void (__fastcall *)(BgPlayer_Asm *, ASM_Instance *, double *, __int64))v29->DebugRender)(this, v25, &v36, v30);
  v31 = BgStatic::GetActiveStatics();
  v32 = BG_GetCharacterInfo(v31, clientNum);
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 950, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v33 = this->GetGameTime(this);
  BG_PlayerASM_DebugAnimEventLog_AddEntry(clientNum, v33, &v32->clientEvents);
  memset_0(&v32->clientEvents, 0, sizeof(v32->clientEvents));
  pmoveArgs->handler->ProfEndAnimUpdate((BgHandler *)pmoveArgs->handler);
  Profile_EndInternal(NULL);
  return v27;
}

/*
==============
BgPlayer_Asm::TrySwitchToState
==============
*/
char BgPlayer_Asm::TrySwitchToState(BgPlayer_Asm *this, characterInfo_t *ci, const PlayerASM_Context *context, ASM_Instance *pInst, const ASM_State *pCurState, int stateIndex, int numParams, ASM_Function_Param *params, const PlayerAnimScriptEventType eventType, const PlayerASM_AnimSlot slot)
{
  const ASM *m_pASM; 
  playerState_s *PlayerState; 
  const ASM_State *State; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 431, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 432, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  m_pASM = pInst->m_pASM;
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 435, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( m_pASM->m_Mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 436, ASSERT_TYPE_ASSERT, "(pASM->m_Mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "pASM->m_Mode == ASM_MODE_PLAYER") )
    __debugbreak();
  if ( !(_BYTE)slot && !pInst->m_bPrimary || !Com_BitCheckAssert(ci->clientEvents.events, eventType, 32) || stateIndex == -1 )
    return 0;
  PlayerState = BG_PlayerASM_GetPlayerState(context);
  if ( !PlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 446, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_PlayerASM_GetAnim(ci, (const PlayerASM_AnimSlot)(unsigned __int8)slot) && PlayerState->animState.slot[(unsigned __int8)slot].m_Timer && !Com_BitCheckAssert(ci->clientEvents.force, eventType, 32) )
    return 0;
  State = Common_Asm::Utils::GetState(m_pASM, stateIndex);
  Common_Asm::SetState(this, context, pInst, State, numParams, params);
  return 1;
}

/*
==============
BgPlayer_Asm::UpdateAngles
==============
*/
void BgPlayer_Asm::UpdateAngles(BgPlayer_Asm *this, playerState_s *const ps, const PmoveASMArgs *pmoveArgs)
{
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  double v7; 
  float v8; 
  double v9; 
  int AnimMoveSpeed; 
  __int16 v11; 
  __int16 VelocityDir; 
  double v13; 

  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
  v7 = BG_MovementDirToDegrees(ps->movementDir);
  v8 = *(float *)&v7;
  v9 = AngleDelta(*(const float *)&v7, CharacterInfo->lerpMoveDir);
  CharacterInfo->deltaLerpMoveDir = *(float *)&v9;
  CharacterInfo->lerpMoveDir = v8;
  AnimMoveSpeed = BG_GetAnimMoveSpeed(ps, CharacterInfo, pmoveArgs);
  v11 = AnimMoveSpeed;
  CharacterInfo->speed = AnimMoveSpeed;
  if ( (unsigned int)(AnimMoveSpeed + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)AnimMoveSpeed, "signed", AnimMoveSpeed) )
    __debugbreak();
  ps->moveSpeedForAnimBlend = v11;
  VelocityDir = BG_PlayerASM_GetVelocityDir(ps, pmoveArgs->handler);
  v13 = BG_MovementDirToDegrees(VelocityDir);
  BG_PlayerASM_UpdateAngles(*(const float *)&v13, CharacterInfo);
}

/*
==============
BgPlayer_Asm::UpdateState
==============
*/
char BgPlayer_Asm::UpdateState(BgPlayer_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pCurState)
{
  const ASM *m_pASM; 
  const char *v9; 
  const char *v10; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  unsigned int v13; 
  __int64 *v14; 
  PlayerASM_AnimSlot slot; 
  PlayerASM_AnimSlot slota; 
  PlayerASM_AnimSlot slotb; 
  PlayerASM_AnimSlot slotc; 
  __int64 v20[4]; 

  m_pASM = pInst->m_pASM;
  memset(v20, 0, sizeof(v20));
  if ( !m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 469, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( m_pASM->m_Mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 470, ASSERT_TYPE_ASSERT, "(pASM->m_Mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "pASM->m_Mode == ASM_MODE_PLAYER") )
    __debugbreak();
  if ( !pCurState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 471, ASSERT_TYPE_ASSERT, "(pCurState)", (const char *)&queryFormat, "pCurState") )
    __debugbreak();
  v9 = SL_ConvertToString(pCurState->m_Name);
  v10 = j_va("%s %s", "ASM_UpdateState", v9);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, v10);
  v20[0] |= 0x4400004001ui64;
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, pInst->m_EntNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 482, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( CharacterInfo == (characterInfo_t *)-4980i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 1041, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
    __debugbreak();
  v13 = 0;
  v14 = v20;
  while ( (*(_DWORD *)((_BYTE *)v14 + (char *)&CharacterInfo->clientEvents - (char *)v20) & *(_DWORD *)v14) == 0 )
  {
    ++v13;
    v14 = (__int64 *)((char *)v14 + 4);
    if ( v13 >= 8 )
      goto LABEL_27;
  }
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 256, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  LOBYTE(slot) = 0;
  if ( BgPlayer_Asm::TrySwitchToState(this, CharacterInfo, (const PlayerASM_Context *)context, pInst, pCurState, pCurState->m_DeathState, pCurState->m_DeathNumParams, pCurState->m_DeathParams, ANIM_ET_DEATH, slot) || (LOBYTE(slota) = 1, BgPlayer_Asm::TrySwitchToState(this, CharacterInfo, (const PlayerASM_Context *)context, pInst, pCurState, pCurState->m_PainState, pCurState->m_PainNumParams, pCurState->m_PainParams, ANIM_ET_FLINCH, slota)) || (LOBYTE(slotb) = 0, BgPlayer_Asm::TrySwitchToState(this, CharacterInfo, (const PlayerASM_Context *)context, pInst, pCurState, pCurState->u.m_AIState[1].m_PowerDownState, pCurState->u.m_AIState[1].m_PowerDownNumParams, pCurState->u.m_AIState[1].m_PowerDownParams, ANIM_ET_SCRIPTED_SCENE, slotb)) || (LOBYTE(slotc) = 0, BgPlayer_Asm::TrySwitchToState(this, CharacterInfo, (const PlayerASM_Context *)context, pInst, pCurState, pCurState->m_ExecutionState, pCurState->m_ExecutionNumParams, pCurState->m_ExecutionParams, ANIM_ET_EXECUTION, slotc)) )
  {
    Sys_ProfEndNamedEvent();
    return 1;
  }
LABEL_27:
  if ( pCurState->u.m_AIState->m_PowerDownState != -1 )
    this->RunFunction_asm_state(this, context, pInst, (const scr_string_t)m_pASM->m_Name, pInst->m_EntNum, pCurState->m_Name, (const ASM_Function *)pCurState->u.m_AIState);
  Sys_ProfEndNamedEvent();
  return 0;
}

/*
==============
BgPlayer_Asm::UpdateTimersAndEvents
==============
*/
void BgPlayer_Asm::UpdateTimersAndEvents(BgPlayer_Asm *this, PlayerASM_Context *context, playerState_s *ps, int delta)
{
  int v4; 

  v4 = delta;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 751, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v4 )
  {
    if ( ps->animState.slot[0].packedAnim )
      BgPlayer_Asm::UpdateTimersAndEventsSlot(this, context, ps, MOVEMENT, v4);
    if ( ps->animState.slot[1].packedAnim )
    {
      LOBYTE(delta) = 1;
      BgPlayer_Asm::UpdateTimersAndEventsSlot(this, context, ps, (const PlayerASM_AnimSlot)delta, v4);
    }
  }
}

/*
==============
BgPlayer_Asm::UpdateTimersAndEventsSlot
==============
*/
void BgPlayer_Asm::UpdateTimersAndEventsSlot(BgPlayer_Asm *this, PlayerASM_Context *context, playerState_s *ps, const PlayerASM_AnimSlot slot, int deltaTime)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  unsigned __int8 v10; 
  __int64 v11; 
  unsigned int v12; 
  const Animset *AnimsetByIndex; 
  BgStatic *ActiveStatics; 
  characterInfo_t *v15; 
  int v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  float v20; 
  unsigned int index; 
  const XAnim_s *Anims; 
  AnimsetAlias_Union v23; 
  float v24; 
  float v25; 
  int v26; 
  unsigned int v27; 
  bool v28; 
  __int64 m_Timer; 
  const char *AnimDebugName; 
  float v31; 
  float v32; 
  int v33; 
  XAnimParts *XAnimParts; 
  unsigned int XAnimLength; 
  bool v38; 
  scr_string_t v39; 
  float v40; 
  float v41; 
  float v42; 
  double v43; 
  float v44; 
  float v52; 
  float v53; 
  __int64 animIndex; 
  __int64 animIndexa; 
  __int64 rate; 
  XAnimNotifyHandle inOutNotifyHead[2]; 
  scr_string_t notifyName; 
  unsigned int outAnimState; 
  unsigned int outAnimSetIndex; 
  unsigned int outAnimEntry; 
  float outFrequency; 
  unsigned int outLeadIndex[2]; 
  XAnimParts *outLeadParts; 
  characterInfo_t *CharacterInfo; 
  PlayerASM_InstanceState *v66; 
  __int64 customData[2]; 
  AnimsetAnim *ppOutAnim; 
  AnimsetAlias *ppOutAlias; 
  __int64 v70; 
  __int128 v71; 
  __int128 v72; 
  _OWORD v73[2]; 
  unsigned __int8 v76; 

  v76 = slot;
  v10 = slot;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 777, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 786, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Profile_Begin(436);
  v11 = v10;
  v66 = &ps->animState.slot[v10];
  if ( (playerState_s *)((char *)ps + 8 * v10) == (playerState_s *)-236i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 790, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  v12 = BG_PlayerASM_UnpackAnimFromPs(ps, (const PlayerASM_AnimSlot)v10, &outAnimSetIndex, &outAnimState, &outAnimEntry);
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(outAnimSetIndex);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 795, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( AnimsetByIndex->mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 796, ASSERT_TYPE_ASSERT, "(pAnimset->mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "pAnimset->mode == ASM_MODE_PLAYER") )
    __debugbreak();
  inOutNotifyHead[0].m_notifyIndex = -1;
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
  v15 = CharacterInfo;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 803, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v16 = 0;
  v17 = 5 * v11;
  v70 = 5 * v11;
  v18 = 0;
  v19 = 0;
  v20 = 0.0;
  if ( v12 && BG_PlayerASM_IsAnimEntryValid(AnimsetByIndex, outAnimState, outAnimEntry) )
  {
    v73[1] = v5;
    v73[0] = v6;
    v71 = v8;
    outFrequency = 0.0;
    BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, outAnimState, outAnimEntry, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
    notifyName = BG_PlayerASM_GetNotify(AnimsetByIndex, outAnimState);
    if ( !notifyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 830, ASSERT_TYPE_ASSERT, "(notifyName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "notifyName != NULL_SCR_STRING") )
      __debugbreak();
    index = ppOutAnim->anim.index;
    Anims = BG_PlayerASM_GetAnims(outAnimSetIndex);
    if ( !Anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 835, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    v23.m_AIAnimsetAlias = (AIAnimsetAlias *)ppOutAlias->u;
    v24 = *(float *)&v23.m_AIAnimsetAlias->redAnims;
    v25 = *((float *)&v23.m_AIAnimsetAlias->redAnims + 1);
    if ( *(float *)&v23.m_AIAnimsetAlias->redAnims <= 0.0 )
      v26 = 50;
    else
      v26 = (int)(float)(v24 * 1000.0);
    v27 = 2 * (5 * v26 + 250);
    if ( v27 >= 0x80000 )
    {
      LODWORD(animIndex) = 2 * (5 * v26 + 250);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 843, ASSERT_TYPE_ASSERT, "(unsigned)( duration ) < (unsigned)( PLAYER_ASM_MAX_TIMER_VALUE )", "duration doesn't index PLAYER_ASM_MAX_TIMER_VALUE\n\t%i not in [0, %i)", animIndex, 0x80000) )
        __debugbreak();
    }
    v28 = BG_PlayerASM_GetLeadAnimationInfo(CharacterInfo, outAnimSetIndex, v12, (const PlayerASM_AnimSlot)v76, Anims, index, v25, outLeadIndex, (const XAnimParts **)&outLeadParts, &outFrequency) && outLeadIndex[0] != -1;
    m_Timer = (unsigned int)v66->m_Timer;
    outLeadIndex[1] = v66->m_Timer;
    if ( v28 )
    {
      if ( v24 > 0.0 )
      {
        AnimDebugName = XAnimGetAnimDebugName(Anims, index);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CAF4D0, 990i64, AnimDebugName);
      }
      v18 = 0x7FFFF;
      if ( (_DWORD)m_Timer == 0x7FFFF )
      {
        v31 = FLOAT_1_0;
      }
      else
      {
        v32 = (float)m_Timer;
        v31 = v32 * 0.0000019073486;
      }
      v33 = deltaTime;
      if ( (float)((float)((float)((float)deltaTime * 0.001) * outFrequency) + v31) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.h", 182, ASSERT_TYPE_ASSERT, "(value >= 0.f)", (const char *)&queryFormat, "value >= 0.f") )
        __debugbreak();
      _XMM1 = 0i64;
      __asm { vroundss xmm1, xmm1, xmm0, 1 }
      v19 = (int)*(float *)&_XMM1;
      if ( (int)*(float *)&_XMM1 > 0x7FFFF )
        v19 = 0x7FFFF;
    }
    else
    {
      v33 = deltaTime;
      v19 = m_Timer + 10 * deltaTime;
      XAnimParts = (XAnimParts *)BG_PlayerASM_GetXAnimParts(Anims, index, NULL);
      outLeadParts = XAnimParts;
      if ( XAnimParts )
      {
        XAnimLength = BG_PlayerASM_GetXAnimLength(XAnimParts, v25);
        v18 = XAnimLength;
        if ( XAnimLength >= 0x80000 )
        {
          LODWORD(rate) = 0x80000;
          LODWORD(animIndexa) = XAnimLength;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 870, ASSERT_TYPE_ASSERT, "(unsigned)( animLength ) < (unsigned)( PLAYER_ASM_MAX_TIMER_VALUE )", "animLength doesn't index PLAYER_ASM_MAX_TIMER_VALUE\n\t%i not in [0, %i)", animIndexa, rate) )
            __debugbreak();
        }
      }
    }
    v72 = v7;
    customData[1] = (__int64)BgPlayer_Asm::GetInstanceBySlot(this, context, (const PlayerASM_AnimSlot)v76);
    customData[0] = (__int64)context;
    if ( !outLeadParts )
    {
      if ( v19 >= v27 )
      {
        v19 = v27;
        XAnimProcessNotifyFromParts(NULL, 1.0, 1.0, 0, notifyName, 0, (float)v33 * 0.001, customData, BG_PlayerASM_AddNotify, inOutNotifyHead);
      }
      goto LABEL_71;
    }
    v38 = outLeadParts->numframes && outLeadParts->notifyCount;
    if ( v24 > 0.0 )
    {
      if ( v19 > v27 )
      {
        v19 = v27;
        if ( v38 )
        {
          v39 = notifyName;
          XAnimProcessNotifyFromParts(NULL, 1.0, 1.0, 0, notifyName, 0, (float)v33 * 0.001, customData, BG_PlayerASM_AddNotify, inOutNotifyHead);
LABEL_62:
          v40 = (float)v18;
          v41 = 1.0 / v40;
          v42 = (float)outLeadIndex[1];
          v43 = I_fclamp(v42 * (float)(1.0 / v40), 0.0, 1.0);
          v44 = (float)v19;
          _XMM9 = *(unsigned __int64 *)&v43;
          *((_QWORD *)&_XMM0 + 1) = 0i64;
          *(double *)&_XMM0 = I_fclamp(v44 * v41, 0.0, 1.0);
          if ( v38 )
          {
            _XMM3 = LODWORD(FLOAT_0_99999988);
            __asm
            {
              vcmpless xmm1, xmm3, xmm0
              vblendvps xmm2, xmm0, xmm7, xmm1
              vcmpless xmm0, xmm3, xmm9
              vblendvps xmm1, xmm9, xmm7, xmm0
            }
            XAnimProcessNotifyFromParts(outLeadParts, *(float *)&_XMM1, *(float *)&_XMM2, 0, v39, 0, (float)v33 * 0.001, customData, BG_PlayerASM_AddNotify, inOutNotifyHead);
          }
LABEL_71:
          if ( v19 >= 0x80000 )
          {
            LODWORD(rate) = 0x80000;
            LODWORD(animIndexa) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 932, ASSERT_TYPE_ASSERT, "(unsigned)( newTimer ) < (unsigned)( PLAYER_ASM_MAX_TIMER_VALUE )", "newTimer doesn't index PLAYER_ASM_MAX_TIMER_VALUE\n\t%i not in [0, %i)", animIndexa, rate) )
              __debugbreak();
          }
          v15 = CharacterInfo;
          v16 = v19;
          v17 = v70;
          goto LABEL_75;
        }
      }
    }
    else
    {
      if ( (outLeadParts->flags & 1) == 0 )
      {
        v39 = notifyName;
        if ( v19 > v18 )
          v19 = v18;
        goto LABEL_62;
      }
      v19 %= v18;
    }
    v39 = notifyName;
    goto LABEL_62;
  }
LABEL_75:
  v66->m_Timer = v16;
  if ( v18 )
  {
    v52 = (float)v19;
    v53 = (float)v18;
    v20 = v52 / v53;
  }
  *(float *)&v15->playerASMLocomotion.animCache[0].bindingIndexes[4 * v17 + 6] = v20;
  Profile_EndInternal(NULL);
}

/*
==============
BgPlayer_Asm::ValidateAssets
==============
*/
void BgPlayer_Asm::ValidateAssets(void)
{
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *mp_parent; 
  unsigned int v2; 
  unsigned int mp_right; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v8; 
  ntl::red_black_tree_node_base::ENodeColor v9; 
  ntl::red_black_tree_node_base *v10; 
  unsigned int v11; 
  unsigned int v12; 
  ntl::red_black_tree_node_base *v13; 
  __int64 v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 

  mp_left = BgPlayer_Asm::ms_asmMap.m_endNodeBase.mp_left;
  if ( BgPlayer_Asm::ms_asmMap.m_endNodeBase.mp_left != &BgPlayer_Asm::ms_asmMap.m_endNodeBase )
  {
    while ( 1 )
    {
      if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_parent = mp_left[1].mp_parent;
      v2 = 0;
      mp_right = (unsigned int)mp_parent->mp_right;
      if ( mp_right )
        break;
LABEL_21:
      mp_left = ntl::red_black_tree_node_base::get_next(mp_left);
      if ( mp_left == &BgPlayer_Asm::ms_asmMap.m_endNodeBase )
        return;
    }
    while ( 1 )
    {
      v4 = 0i64;
      v5 = (__int64)mp_parent->mp_left + 248 * v2;
      v6 = *(_DWORD *)(v5 + 48);
      if ( v6 )
        break;
LABEL_20:
      if ( ++v2 >= mp_right )
        goto LABEL_21;
    }
    while ( 1 )
    {
      p_m_endNodeBase = &BgPlayer_Asm::ms_asmMap.m_endNodeBase;
      v8 = BgPlayer_Asm::ms_asmMap.m_endNodeBase.mp_parent;
      if ( BgPlayer_Asm::ms_asmMap.m_endNodeBase.mp_parent )
      {
        v9 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 4 * v4);
        do
        {
          if ( v8[1].m_color < v9 )
          {
            v8 = v8->mp_right;
          }
          else
          {
            p_m_endNodeBase = v8;
            v8 = v8->mp_left;
          }
        }
        while ( v8 );
        if ( p_m_endNodeBase != &BgPlayer_Asm::ms_asmMap.m_endNodeBase && v9 >= p_m_endNodeBase[1].m_color )
        {
          v10 = p_m_endNodeBase[1].mp_parent;
          v11 = 0;
          v12 = (unsigned int)v10->mp_right;
          if ( v12 )
            break;
        }
      }
LABEL_19:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v6 )
        goto LABEL_20;
    }
    v13 = v10->mp_left;
    while ( 1 )
    {
      v14 = 248i64 * v11;
      if ( *(int *)((char *)&v13[1].mp_left + v14) > 0 )
        break;
      if ( ++v11 >= v12 )
        goto LABEL_19;
    }
    v15 = SL_ConvertToString((scr_string_t)*(_DWORD *)((char *)&v13->mp_parent + v14 + 4));
    v16 = SL_ConvertToString((scr_string_t)*(_DWORD *)(v5 + 12));
    v17 = SL_ConvertToString((scr_string_t)*(_DWORD *)(*(_QWORD *)(v5 + 40) + 4 * v4));
    v18 = SL_ConvertToString((scr_string_t)mp_left[1].m_color);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CAEEF0, 983i64, v18, v17, v16, v15);
  }
}

/*
==============
BgPlayer_Asm::ValidateEphemeralEventTablesNotInUse
==============
*/
void BgPlayer_Asm::ValidateEphemeralEventTablesNotInUse(BgPlayer_Asm *this)
{
  ;
}

/*
==============
BgPlayer_Asm::irand
==============
*/
int BgPlayer_Asm::irand(BgPlayer_Asm *this, const ASM_Instance *pInst, int min, int max, unsigned int *holdrand)
{
  unsigned int *p_holdrand; 

  p_holdrand = holdrand;
  if ( !holdrand )
  {
    LODWORD(holdrand) = pInst->m_CurState + 7 * pInst->m_EntNum;
    BG_srand((unsigned int *)&holdrand);
    p_holdrand = (unsigned int *)&holdrand;
  }
  return BG_irand(min, max, p_holdrand);
}

/*
==============
BgPlayer_Asm::irandWithSeed
==============
*/
int BgPlayer_Asm::irandWithSeed(unsigned int *seed, int min, int max)
{
  if ( !seed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.cpp", 247, ASSERT_TYPE_ASSERT, "(seed)", (const char *)&queryFormat, "seed") )
    __debugbreak();
  BG_srand(seed);
  return BG_irand(min, max, seed);
}

