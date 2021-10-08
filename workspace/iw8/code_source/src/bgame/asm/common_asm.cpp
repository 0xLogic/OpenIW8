/*
==============
Common_Asm::ClearEphemeralEventsByInstance
==============
*/

void __fastcall Common_Asm::ClearEphemeralEventsByInstance(Common_Asm *this, ASM_Instance *pInst)
{
  ?ClearEphemeralEventsByInstance@Common_Asm@@QEAAXPEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
Common_Asm::Terminate
==============
*/

void __fastcall Common_Asm::Terminate(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, ASM_Instance *pParentInst, bool forceTerminateFunc)
{
  ?Terminate@Common_Asm@@IEAAXPEBUASM_Context@@PEAUASM_Instance@@1_N@Z(this, context, pInst, pParentInst, forceTerminateFunc);
}

/*
==============
Common_Asm::Common_Asm
==============
*/

void __fastcall Common_Asm::Common_Asm(Common_Asm *this)
{
  ??0Common_Asm@@QEAA@XZ(this);
}

/*
==============
Common_Asm::ChooseAnim
==============
*/

ASM_Error __fastcall Common_Asm::ChooseAnim(Common_Asm *this, const ASM_Context *context, int entNum, const scr_string_t asmName, const scr_string_t stateName, int *outEntryIndex)
{
  return ?ChooseAnim@Common_Asm@@QEAA?AW4ASM_Error@@PEBUASM_Context@@HW4scr_string_t@@1PEAH@Z(this, context, entNum, asmName, stateName, outEntryIndex);
}

/*
==============
Common_Asm::Tick
==============
*/

bool __fastcall Common_Asm::Tick(Common_Asm *this, const ASM_Context *context, int entNum, bool bCheckTransitionsOnly, bool bForceUpdateOnNewState)
{
  return ?Tick@Common_Asm@@QEAA_NPEBUASM_Context@@H_N1@Z(this, context, entNum, bCheckTransitionsOnly, bForceUpdateOnNewState);
}

/*
==============
Common_Asm::DoTraverse
==============
*/

void __fastcall Common_Asm::DoTraverse(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t stateName)
{
  ?DoTraverse@Common_Asm@@QEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@@Z(this, context, pInst, stateName);
}

/*
==============
Common_Asm::EnterState
==============
*/

void __fastcall Common_Asm::EnterState(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, int toStateID, ASM_Transition *pTransitionIn, int numParamsOverride, ASM_Function_Param *pParamsOverride, const ASM_TransitionList *pTransitionList)
{
  ?EnterState@Common_Asm@@QEAAXPEBUASM_Context@@PEAUASM_Instance@@HPEAUASM_Transition@@HPEAUASM_Function_Param@@PEBVASM_TransitionList@@@Z(this, context, pInst, toStateID, pTransitionIn, numParamsOverride, pParamsOverride, pTransitionList);
}

/*
==============
Common_Asm::ChooseAnimWithParamOverride
==============
*/

ASM_Error __fastcall Common_Asm::ChooseAnimWithParamOverride(Common_Asm *this, const ASM_Context *context, int entNum, const scr_string_t asmName, const scr_string_t stateName, int numParamsOverride, ASM_Function_Param *pParamsOverride, int *outEntryIndex)
{
  return ?ChooseAnimWithParamOverride@Common_Asm@@QEAA?AW4ASM_Error@@PEBUASM_Context@@HW4scr_string_t@@1HPEAUASM_Function_Param@@PEAH@Z(this, context, entNum, asmName, stateName, numParamsOverride, pParamsOverride, outEntryIndex);
}

/*
==============
Common_Asm::TerminateState
==============
*/

void __fastcall Common_Asm::TerminateState(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, int fromStateID, int toStateID, bool forceTerminateFunc)
{
  ?TerminateState@Common_Asm@@QEAAXPEBUASM_Context@@PEAUASM_Instance@@HH_N@Z(this, context, pInst, fromStateID, toStateID, forceTerminateFunc);
}

/*
==============
Common_Asm::StateInterruptsSubtrees
==============
*/

bool __fastcall Common_Asm::StateInterruptsSubtrees(Common_Asm *this, const ASM_Instance *pInst, const ASM_State *pCurState)
{
  return ?StateInterruptsSubtrees@Common_Asm@@MEBA_NPEBUASM_Instance@@PEBUASM_State@@@Z(this, pInst, pCurState);
}

/*
==============
Common_Asm::Tick
==============
*/

bool __fastcall Common_Asm::Tick(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, bool bCheckTransitionsOnly, bool bForceUpdateOnNewState)
{
  return ?Tick@Common_Asm@@QEAA_NPEBUASM_Context@@PEAUASM_Instance@@_N2@Z(this, context, pInst, bCheckTransitionsOnly, bForceUpdateOnNewState);
}

/*
==============
Common_Asm::EventFiredWithin
==============
*/

bool __fastcall Common_Asm::EventFiredWithin(Common_Asm *this, const ASM_Instance *pInst, const scr_string_t eventName, int time)
{
  return ?EventFiredWithin@Common_Asm@@QEAA_NPEBUASM_Instance@@W4scr_string_t@@H@Z(this, pInst, eventName, time);
}

/*
==============
Common_Asm::GetASM
==============
*/

ASM *__fastcall Common_Asm::GetASM(Common_Asm *this, const scr_string_t asmName)
{
  return ?GetASM@Common_Asm@@QEAAPEAUASM@@W4scr_string_t@@@Z(this, asmName);
}

/*
==============
Common_Asm::TerminateFunc
==============
*/

void __fastcall Common_Asm::TerminateFunc(Common_Asm *this, const ASM_State *pState, const ASM_Context *context, const ASM *const pASM, ASM_Instance *pInst, bool forceTerminateFunc)
{
  ?TerminateFunc@Common_Asm@@MEAAXPEBUASM_State@@PEBUASM_Context@@QEBUASM@@PEAUASM_Instance@@_N@Z(this, pState, context, pASM, pInst, forceTerminateFunc);
}

/*
==============
Common_Asm::MyChanges_UpdateAssetMaps
==============
*/

void __fastcall Common_Asm::MyChanges_UpdateAssetMaps(ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *asmMap, ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *looseFileMap)
{
  ?MyChanges_UpdateAssetMaps@Common_Asm@@SAXPEAV?$fixed_map@W4scr_string_t@@PEAUASM@@$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@ntl@@PEAV?$fixed_map@W4scr_string_t@@_N$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@3@@Z(asmMap, looseFileMap);
}

/*
==============
Common_Asm::AddEventData
==============
*/

int __fastcall Common_Asm::AddEventData(Common_Asm *this, ASM_Instance *pInst, int paramIndex, VariableValue *pData)
{
  return ?AddEventData@Common_Asm@@QEAAHPEAUASM_Instance@@HPEAUVariableValue@@@Z(this, pInst, paramIndex, pData);
}

/*
==============
Common_Asm::EphemeralEventFired
==============
*/

bool __fastcall Common_Asm::EphemeralEventFired(Common_Asm *this, ASM_Instance *pInst, const scr_string_t tagName, const scr_string_t eventName)
{
  return ?EphemeralEventFired@Common_Asm@@QEAA_NPEAUASM_Instance@@W4scr_string_t@@1@Z(this, pInst, tagName, eventName);
}

/*
==============
Common_Asm::AddSubtree
==============
*/

ASM_Instance *__fastcall Common_Asm::AddSubtree(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM *pSubtree)
{
  return ?AddSubtree@Common_Asm@@QEAAPEAUASM_Instance@@PEBUASM_Context@@PEAU2@PEBUASM@@@Z(this, context, pInst, pSubtree);
}

/*
==============
Common_Asm::ClearEvents
==============
*/

void __fastcall Common_Asm::ClearEvents(Common_Asm *this, ASM_Instance *pInst)
{
  ?ClearEvents@Common_Asm@@QEAAXPEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
Common_Asm::~Common_Asm
==============
*/

void __fastcall Common_Asm::~Common_Asm(Common_Asm *this)
{
  ??1Common_Asm@@UEAA@XZ(this);
}

/*
==============
Common_Asm::Instantiate
==============
*/

void __fastcall Common_Asm::Instantiate(Common_Asm *this, const ASM_Context *context, int entNum, const scr_string_t asmName, bool reset, scrContext_t *scrContext)
{
  ?Instantiate@Common_Asm@@QEAAXPEBUASM_Context@@HW4scr_string_t@@_NPEAUscrContext_t@@@Z(this, context, entNum, asmName, reset, scrContext);
}

/*
==============
Common_Asm::GetASM
==============
*/

const ASM *__fastcall Common_Asm::GetASM(Common_Asm *this, const scr_string_t asmName)
{
  return ?GetASM@Common_Asm@@QEBAPEBUASM@@W4scr_string_t@@@Z(this, asmName);
}

/*
==============
Common_Asm::Release
==============
*/

void __fastcall Common_Asm::Release(ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *asmMap, ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *looseFileMap, ASM *pASM, bool bUnlockPackfileData)
{
  ?Release@Common_Asm@@SAXPEAV?$fixed_map@W4scr_string_t@@PEAUASM@@$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@ntl@@PEAV?$fixed_map@W4scr_string_t@@_N$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@3@PEAUASM@@_N@Z(asmMap, looseFileMap, pASM, bUnlockPackfileData);
}

/*
==============
Common_Asm::FireEventWithVec3
==============
*/

void __fastcall Common_Asm::FireEventWithVec3(Common_Asm *this, ASM_Instance *pInst, const scr_string_t eventName, const vec3_t *v)
{
  ?FireEventWithVec3@Common_Asm@@QEAAXPEAUASM_Instance@@W4scr_string_t@@AEBTvec3_t@@@Z(this, pInst, eventName, v);
}

/*
==============
Common_Asm::EnterState
==============
*/

void __fastcall Common_Asm::EnterState(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, int toStateID, ASM_Transition *pTransitionIn, const ASM_TransitionList *pTransitionList)
{
  ?EnterState@Common_Asm@@QEAAXPEBUASM_Context@@PEAUASM_Instance@@HPEAUASM_Transition@@PEBVASM_TransitionList@@@Z(this, context, pInst, toStateID, pTransitionIn, pTransitionList);
}

/*
==============
Common_Asm::FreeEphemeralTableIndex
==============
*/

void __fastcall Common_Asm::FreeEphemeralTableIndex(Common_Asm *this, ASM_Instance *pInst)
{
  ?FreeEphemeralTableIndex@Common_Asm@@IEAAXPEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
Common_Asm::GetStateByName
==============
*/

const ASM_State *__fastcall Common_Asm::GetStateByName(Common_Asm *this, const ASM *pASM, const scr_string_t stateName)
{
  return ?GetStateByName@Common_Asm@@UEAAPEBUASM_State@@PEBUASM@@W4scr_string_t@@@Z(this, pASM, stateName);
}

/*
==============
Common_Asm::ProcessLogicTerminates
==============
*/

void __fastcall Common_Asm::ProcessLogicTerminates(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pFromState, const ASM_State *pToState)
{
  ?ProcessLogicTerminates@Common_Asm@@IEAAXPEBUASM_Context@@PEAUASM_Instance@@PEBUASM_State@@2@Z(this, context, pInst, pFromState, pToState);
}

/*
==============
Common_Asm::FireEvent
==============
*/

void __fastcall Common_Asm::FireEvent(Common_Asm *this, ASM_Instance *pInst, const scr_string_t eventName)
{
  ?FireEvent@Common_Asm@@UEAAXPEAUASM_Instance@@W4scr_string_t@@@Z(this, pInst, eventName);
}

/*
==============
Common_Asm::FireEphemeralEvent
==============
*/

void __fastcall Common_Asm::FireEphemeralEvent(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t tagName, const scr_string_t eventName)
{
  ?FireEphemeralEvent@Common_Asm@@QEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@2@Z(this, context, pInst, tagName, eventName);
}

/*
==============
Common_Asm::FireEvent
==============
*/

void __fastcall Common_Asm::FireEvent(Common_Asm *this, ASM_Instance *pInst, const scr_string_t eventName, VariableValue *pParam)
{
  ?FireEvent@Common_Asm@@QEAAXPEAUASM_Instance@@W4scr_string_t@@PEAUVariableValue@@@Z(this, pInst, eventName, pParam);
}

/*
==============
Common_Asm::SetState
==============
*/

ASM_Error __fastcall Common_Asm::SetState(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState, int numParamsOverrideEntry, ASM_Function_Param *pParamsOverrideEntry)
{
  return ?SetState@Common_Asm@@QEAA?AW4ASM_Error@@PEBUASM_Context@@PEAUASM_Instance@@PEBUASM_State@@HPEAUASM_Function_Param@@@Z(this, context, pInst, pState, numParamsOverrideEntry, pParamsOverrideEntry);
}

/*
==============
Common_Asm::DerefFunctionParams
==============
*/

void __fastcall Common_Asm::DerefFunctionParams(ASM_Function_Param *pParams, int numParams)
{
  ?DerefFunctionParams@Common_Asm@@KAXPEAUASM_Function_Param@@H@Z(pParams, numParams);
}

/*
==============
Common_Asm::ProcessLogicInits
==============
*/

void __fastcall Common_Asm::ProcessLogicInits(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pFromState, const ASM_State *pToState)
{
  ?ProcessLogicInits@Common_Asm@@IEAAXPEBUASM_Context@@PEAUASM_Instance@@PEBUASM_State@@2@Z(this, context, pInst, pFromState, pToState);
}

/*
==============
Common_Asm::CheckTransitions
==============
*/

ASM_Transition *__fastcall Common_Asm::CheckTransitions(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState, ASM_TransitionList *pOutTransitionList)
{
  return ?CheckTransitions@Common_Asm@@MEAAPEAUASM_Transition@@PEBUASM_Context@@PEAUASM_Instance@@PEBUASM_State@@PEAVASM_TransitionList@@@Z(this, context, pInst, pState, pOutTransitionList);
}

/*
==============
Common_Asm::AddEphemeralEventData
==============
*/

int __fastcall Common_Asm::AddEphemeralEventData(Common_Asm *this, ASM_Instance *pInst, VariableValue *pData)
{
  return ?AddEphemeralEventData@Common_Asm@@QEAAHPEAUASM_Instance@@PEAUVariableValue@@@Z(this, pInst, pData);
}

/*
==============
Common_Asm::PostCheckTransitions
==============
*/

void __fastcall Common_Asm::PostCheckTransitions(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState)
{
  ?PostCheckTransitions@Common_Asm@@QEAAXPEBUASM_Context@@PEAUASM_Instance@@PEBUASM_State@@@Z(this, context, pInst, pState);
}

/*
==============
Common_Asm::Death
==============
*/

ASM_Error __fastcall Common_Asm::Death(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst)
{
  return ?Death@Common_Asm@@QEAA?AW4ASM_Error@@PEBUASM_Context@@PEAUASM_Instance@@@Z(this, context, pInst);
}

/*
==============
Common_Asm::SetState
==============
*/

ASM_Error __fastcall Common_Asm::SetState(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t stateName, int numParamsOverrideEntry, ASM_Function_Param *pParamsOverrideEntry)
{
  return ?SetState@Common_Asm@@QEAA?AW4ASM_Error@@PEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@HPEAUASM_Function_Param@@@Z(this, context, pInst, stateName, numParamsOverrideEntry, pParamsOverrideEntry);
}

/*
==============
Common_Asm::Shutdown
==============
*/

void __fastcall Common_Asm::Shutdown(ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *asmMap, ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *looseFileMap)
{
  ?Shutdown@Common_Asm@@SAXPEAV?$fixed_map@W4scr_string_t@@PEAUASM@@$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@ntl@@PEAV?$fixed_map@W4scr_string_t@@_N$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@3@@Z(asmMap, looseFileMap);
}

/*
==============
Common_Asm::Register
==============
*/

void __fastcall Common_Asm::Register(ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *asmMap, ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *looseFileMap, ASM *pASM, bool bLooseFile)
{
  ?Register@Common_Asm@@SAXPEAV?$fixed_map@W4scr_string_t@@PEAUASM@@$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@ntl@@PEAV?$fixed_map@W4scr_string_t@@_N$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@3@PEAUASM@@_N@Z(asmMap, looseFileMap, pASM, bLooseFile);
}

/*
==============
Common_Asm::GetMode
==============
*/

ASM_Mode __fastcall Common_Asm::GetMode(Common_Asm *this)
{
  return ?GetMode@Common_Asm@@IEBA?AW4ASM_Mode@@XZ(this);
}

/*
==============
Common_Asm::Terminate
==============
*/

void __fastcall Common_Asm::Terminate(Common_Asm *this, const ASM_Context *context, int entNum)
{
  ?Terminate@Common_Asm@@QEAAXPEBUASM_Context@@H@Z(this, context, entNum);
}

/*
==============
Common_Asm::TerminateAllStates
==============
*/

void __fastcall Common_Asm::TerminateAllStates(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst)
{
  ?TerminateAllStates@Common_Asm@@QEAAXPEBUASM_Context@@PEAUASM_Instance@@@Z(this, context, pInst);
}

/*
==============
Common_Asm::ShouldLooseFileLoad
==============
*/

bool __fastcall Common_Asm::ShouldLooseFileLoad()
{
  return ?ShouldLooseFileLoad@Common_Asm@@SA_NXZ();
}

/*
==============
Common_Asm::GetEphemeralEventTable
==============
*/

ASM_EphemeralEvent *__fastcall Common_Asm::GetEphemeralEventTable(Common_Asm *this, ASM_Instance *pInst)
{
  return ?GetEphemeralEventTable@Common_Asm@@QEAAPEAUASM_EphemeralEvent@@PEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
Common_Asm::PreCheckTransitions
==============
*/

bool __fastcall Common_Asm::PreCheckTransitions(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState, const int cMaxRandomTransitionsOut, int *outRandomizedTransitionIndices)
{
  return ?PreCheckTransitions@Common_Asm@@QEAA_NPEBUASM_Context@@PEAUASM_Instance@@PEBUASM_State@@HPEAH@Z(this, context, pInst, pState, cMaxRandomTransitionsOut, outRandomizedTransitionIndices);
}

/*
==============
Common_Asm::LogicInit_r
==============
*/

void __fastcall Common_Asm::LogicInit_r(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, int fromGroupID, int toGroupID)
{
  ?LogicInit_r@Common_Asm@@IEAAXPEBUASM_Context@@PEAUASM_Instance@@HH@Z(this, context, pInst, fromGroupID, toGroupID);
}

/*
==============
Common_Asm::Deref
==============
*/

void __fastcall Common_Asm::Deref(ASM *pASM)
{
  ?Deref@Common_Asm@@KAXPEAUASM@@@Z(pASM);
}

/*
==============
Common_Asm::FireEphemeralEvent
==============
*/

void __fastcall Common_Asm::FireEphemeralEvent(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t tagName, const scr_string_t eventName, VariableValue *pParam)
{
  ?FireEphemeralEvent@Common_Asm@@QEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@2PEAUVariableValue@@@Z(this, context, pInst, tagName, eventName, pParam);
}

/*
==============
Common_Asm::Common_Asm
==============
*/
void Common_Asm::Common_Asm(Common_Asm *this)
{
  this->__vftable = (Common_Asm_vtbl *)&Common_Asm::`vftable';
}

/*
==============
Common_Asm::~Common_Asm
==============
*/
void Common_Asm::~Common_Asm(Common_Asm *this)
{
  this->__vftable = (Common_Asm_vtbl *)&Common_Asm::`vftable';
}

/*
==============
Common_Asm::AddEphemeralEventData
==============
*/
int Common_Asm::AddEphemeralEventData(Common_Asm *this, ASM_Instance *pInst, VariableValue *pData)
{
  unsigned int v5; 

  v5 = ((__int64 (__fastcall *)(Common_Asm *))this->GetEphemeralEventParamTableID)(this);
  return Common_Asm::Utils::AddEventData_Internal(pInst->m_pScrContext, v5, -1, pData);
}

/*
==============
Common_Asm::AddEventData
==============
*/
int Common_Asm::AddEventData(Common_Asm *this, ASM_Instance *pInst, int paramIndex, VariableValue *pData)
{
  unsigned int v7; 

  v7 = ((__int64 (__fastcall *)(Common_Asm *))this->GetEventParamTableID)(this);
  return Common_Asm::Utils::AddEventData_Internal(pInst->m_pScrContext, v7, paramIndex, pData);
}

/*
==============
Common_Asm::AddSubtree
==============
*/
ASM_Instance *Common_Asm::AddSubtree(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM *pSubtree)
{
  ASM_Instance *v9; 
  __int64 v10; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 617, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !pSubtree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 618, ASSERT_TYPE_ASSERT, "(pSubtree)", (const char *)&queryFormat, "pSubtree") )
    __debugbreak();
  if ( pInst->m_NumSubtrees == this->m_MaxSubtreesPerInstance )
  {
    LODWORD(v10) = this->m_MaxSubtreesPerInstance;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 622, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Exceeded max number of subtrees (%d) for ent %d asm %s.", v10, pInst->m_EntNum, pInst->m_pASM->m_szName) )
      __debugbreak();
    return 0i64;
  }
  else
  {
    v9 = this->InstanceAllocate(this, context);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 627, ASSERT_TYPE_ASSERT, "(pSubInst)", (const char *)&queryFormat, "pSubInst") )
      __debugbreak();
    ASM_Instance::AddSubtree(pInst, v9, pSubtree, this->m_MaxSubtreesPerInstance, this->m_SupportsEventParamTableOffsets);
    return v9;
  }
}

/*
==============
Common_Asm::CheckTransitions
==============
*/
ASM_Transition *Common_Asm::CheckTransitions(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState, ASM_TransitionList *pOutTransitionList)
{
  Common_Asm *v5; 
  const ASM_Context *v8; 
  bool v9; 
  ASM_Transition *v10; 
  int v11; 
  int *v12; 
  int v13; 
  const ASM *m_pASM; 
  ASM_Transition *v15; 
  const ASM_State *v16; 
  bool v17; 
  char v18; 
  ASM_Transition *v19; 
  __int64 m_FuncID; 
  const char *v21; 
  char *fmt; 
  int *outRandomizedTransitionIndices; 
  bool v25; 
  const ASM_State *State; 
  int v29[24]; 

  v5 = this;
  v8 = context;
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 731, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 732, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  v9 = Common_Asm::PreCheckTransitions(v5, v8, pInst, pState, 24, v29);
  v10 = NULL;
  v25 = v9;
  v11 = 0;
  State = Common_Asm::Utils::GetState(pInst->m_pASM, pInst->m_CurState);
  if ( pState->m_NumTransitions > 0 )
  {
    v12 = v29;
    while ( 1 )
    {
      v13 = v11;
      if ( v9 )
        v13 = *v12;
      m_pASM = pInst->m_pASM;
      v15 = &pState->m_Transitions[v13];
      v16 = Common_Asm::Utils::GetState(pInst->m_pASM, v15->m_ToStateID);
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 639, ASSERT_TYPE_ASSERT, "(pToState)", (const char *)&queryFormat, "pToState") )
        __debugbreak();
      ASM_TransitionList::Push(pOutTransitionList, v15);
      LODWORD(outRandomizedTransitionIndices) = State->m_Name;
      LODWORD(fmt) = pInst->m_EntNum;
      v17 = this->RunTransitionFunction(this, context, pInst, (const scr_string_t)m_pASM->m_Name, (int)fmt, (const scr_string_t)outRandomizedTransitionIndices, v16->m_Name, v15);
      if ( v15->m_FuncName.m_bNegate )
        v17 = !v17;
      if ( v17 )
      {
        v18 = 1;
        if ( (unsigned int)(v16->m_Type - 2) > 3 )
        {
          v19 = v15;
        }
        else
        {
          v19 = this->CheckTransitions(this, context, pInst, v16, pOutTransitionList);
          if ( !v19 && ASM_TransitionList::Pop(pOutTransitionList) != v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 666, ASSERT_TYPE_ASSERT, "(pTransitionListTop == pTransition)", (const char *)&queryFormat, "pTransitionListTop == pTransition") )
            __debugbreak();
        }
        if ( v19 )
        {
          v10 = v19;
          goto LABEL_34;
        }
      }
      else
      {
        if ( ASM_TransitionList::Pop(pOutTransitionList) != v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 680, ASSERT_TYPE_ASSERT, "(pTransitionListTop == pTransition)", (const char *)&queryFormat, "pTransitionListTop == pTransition") )
          __debugbreak();
        v18 = 0;
      }
      if ( pState->m_Type == 3 && v18 )
        break;
      ++v11;
      ++v12;
      if ( v11 >= pState->m_NumTransitions )
        break;
      v9 = v25;
    }
    v10 = NULL;
LABEL_34:
    v5 = this;
    v8 = context;
  }
  if ( pState->m_Type == 4 )
  {
    m_FuncID = (unsigned int)pState->m_TerminateFunc.m_FuncID;
    if ( (_DWORD)m_FuncID != -1 )
    {
      v21 = j_va("%s %d", "PassFuncTerm", m_FuncID);
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, v21);
      v5->RunFunction_asm_state(v5, v8, pInst, (const scr_string_t)pInst->m_pASM->m_Name, pInst->m_EntNum, pState->m_Name, &pState->m_TerminateFunc);
      Sys_ProfEndNamedEvent();
    }
  }
  return v10;
}

/*
==============
Common_Asm::ChooseAnim
==============
*/
__int64 Common_Asm::ChooseAnim(Common_Asm *this, const ASM_Context *context, int entNum, const scr_string_t asmName, const scr_string_t stateName, int *outEntryIndex)
{
  const ASM_Instance *v10; 
  ASM_Instance *Subtree; 
  const ASM_State *State; 
  __int64 v14; 

  v10 = (const ASM_Instance *)((__int64 (__fastcall *)(Common_Asm *))this->GetInstance)(this);
  Subtree = (ASM_Instance *)v10;
  if ( !v10 )
    return 1i64;
  if ( v10->m_pASM->m_Name != asmName )
  {
    Subtree = Common_Asm::Utils::GetSubtree(v10, asmName);
    if ( !Subtree )
      return 2i64;
  }
  State = Common_Asm::Utils::GetState(Subtree->m_pASM, Subtree->m_CurState);
  v14 = (__int64)State;
  if ( stateName && State->m_Name != stateName )
    v14 = ((__int64 (__fastcall *)(Common_Asm *, const ASM *, _QWORD, const ASM_State *))this->GetStateByName)(this, Subtree->m_pASM, (unsigned int)stateName, State);
  if ( !v14 )
    return 3i64;
  this->RunChooseAnimFunction(this, context, Subtree, (const scr_string_t)Subtree->m_pASM->m_Name, entNum, *(const scr_string_t *)(v14 + 12), (const ASM_Function *)(v14 + 120), outEntryIndex);
  return 0i64;
}

/*
==============
Common_Asm::ChooseAnimWithParamOverride
==============
*/
__int64 Common_Asm::ChooseAnimWithParamOverride(Common_Asm *this, const ASM_Context *context, int entNum, const scr_string_t asmName, const scr_string_t stateName, int numParamsOverride, ASM_Function_Param *pParamsOverride, int *outEntryIndex)
{
  const ASM_Instance *v12; 
  ASM_Instance *Subtree; 
  const ASM_State *State; 
  const ASM_State *v16; 

  v12 = (const ASM_Instance *)((__int64 (__fastcall *)(Common_Asm *))this->GetInstance)(this);
  Subtree = (ASM_Instance *)v12;
  if ( !v12 )
    return 1i64;
  if ( v12->m_pASM->m_Name != asmName )
  {
    Subtree = Common_Asm::Utils::GetSubtree(v12, asmName);
    if ( !Subtree )
      return 2i64;
  }
  State = Common_Asm::Utils::GetState(Subtree->m_pASM, Subtree->m_CurState);
  v16 = State;
  if ( stateName && State->m_Name != stateName )
    v16 = this->GetStateByName(this, Subtree->m_pASM, (unsigned int)stateName);
  if ( !v16 )
    return 3i64;
  this->RunChooseAnimFunction_with_params(this, context, Subtree, (const scr_string_t)Subtree->m_pASM->m_Name, entNum, stateName, v16->m_ChooseAnimFunc.m_FuncID, numParamsOverride, pParamsOverride, v16->m_ChooseAnimFunc.m_bBuiltin, outEntryIndex);
  return 0i64;
}

/*
==============
Common_Asm::ClearEphemeralEventsByInstance
==============
*/
void Common_Asm::ClearEphemeralEventsByInstance(Common_Asm *this, ASM_Instance *pInst)
{
  unsigned int v4; 
  __int64 v5; 
  int *p_m_ParamID; 
  scrContext_t *m_pScrContext; 
  scrContext_t *v8; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_ClearEphemeralEvents");
  v4 = this->GetEphemeralEventParamTableID(this, pInst);
  if ( pInst->m_EphemeralTableIndex == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 965, ASSERT_TYPE_ASSERT, "(pInst->m_EphemeralTableIndex != INVALID_EPHEMERAL_TABLE_INDEX)", (const char *)&queryFormat, "pInst->m_EphemeralTableIndex != INVALID_EPHEMERAL_TABLE_INDEX") )
    __debugbreak();
  v5 = 0i64;
  p_m_ParamID = &Common_Asm::GetEphemeralEventTable(this, pInst)->m_ParamID;
  do
  {
    if ( !*(p_m_ParamID - 1) )
      break;
    Scr_SetString((scr_string_t *)p_m_ParamID - 2, (scr_string_t)0);
    Scr_SetString((scr_string_t *)p_m_ParamID - 1, (scr_string_t)0);
    if ( *p_m_ParamID != -1 )
    {
      m_pScrContext = pInst->m_pScrContext;
      if ( !m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 979, ASSERT_TYPE_ASSERT, "( pScrContext )", (const char *)&queryFormat, "pScrContext") )
        __debugbreak();
      if ( !FindArrayVariable(m_pScrContext, v4, *p_m_ParamID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 981, ASSERT_TYPE_ASSERT, "(FindArrayVariable( *pScrContext, paramTableID, pEvent->m_ParamID ))", (const char *)&queryFormat, "FindArrayVariable( *pScrContext, paramTableID, pEvent->m_ParamID )") )
        __debugbreak();
      RemoveArrayVariable(m_pScrContext, v4, *p_m_ParamID);
      *p_m_ParamID = -1;
    }
    ++v5;
    p_m_ParamID += 4;
  }
  while ( v5 < 6 );
  if ( v4 )
  {
    v8 = pInst->m_pScrContext;
    if ( (!v8 || GetArraySize(v8, v4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 986, ASSERT_TYPE_ASSERT, "(!paramTableID || (pInst->m_pScrContext && GetArraySize( *pInst->m_pScrContext, paramTableID ) == 0))", (const char *)&queryFormat, "!paramTableID || (pInst->m_pScrContext && GetArraySize( *pInst->m_pScrContext, paramTableID ) == 0)") )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Common_Asm::ClearEvents
==============
*/
void Common_Asm::ClearEvents(Common_Asm *this, ASM_Instance *pInst)
{
  scrContext_t *m_pScrContext; 
  unsigned int v5; 
  ASM_Event *m_EventTable; 
  unsigned int v7; 
  __int64 i; 
  unsigned int m_ParamID; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_ClearEvents");
  m_pScrContext = pInst->m_pScrContext;
  v5 = this->GetEventParamTableID(this, pInst);
  m_EventTable = pInst->m_EventTable;
  v7 = v5;
  for ( i = 0i64; i < 8; ++i )
  {
    if ( !m_EventTable->m_Name )
      break;
    Scr_SetString(&m_EventTable->m_Name, (scr_string_t)0);
    m_ParamID = m_EventTable->m_ParamID;
    if ( m_ParamID != -1 )
    {
      RemoveArrayVariable(m_pScrContext, v7, m_ParamID);
      m_EventTable->m_ParamID = -1;
    }
    ++m_EventTable;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Common_Asm::Death
==============
*/
ASM_Error Common_Asm::Death(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst)
{
  const ASM *m_pASM; 
  const ASM_State *State; 
  int m_DeathState; 
  const ASM_State *v9; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 892, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  m_pASM = pInst->m_pASM;
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 895, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  State = Common_Asm::Utils::GetState(m_pASM, pInst->m_CurState);
  if ( !State && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 898, ASSERT_TYPE_ASSERT, "(pCurState)", (const char *)&queryFormat, "pCurState") )
    __debugbreak();
  if ( !pInst->m_bPrimary )
    return 0;
  m_DeathState = State->m_DeathState;
  if ( m_DeathState == -1 )
    return 0;
  v9 = Common_Asm::Utils::GetState(m_pASM, m_DeathState);
  return Common_Asm::SetState(this, context, pInst, v9, State->m_DeathNumParams, State->m_DeathParams);
}

/*
==============
Common_Asm::Deref
==============
*/
void Common_Asm::Deref(ASM *pASM)
{
  __int64 v2; 
  char *v3; 
  int i; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  _DWORD *v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  _DWORD *v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  _DWORD *v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  _DWORD *v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  _DWORD *v24; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  _DWORD *v28; 
  __int64 v29; 
  int v30; 
  __int64 v31; 
  _DWORD *v32; 
  ASM_Mode m_Mode; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  __int64 v37; 
  _DWORD *v38; 
  __int64 v39; 
  int v40; 
  __int64 v41; 
  __int64 v42; 
  _DWORD *v43; 
  __int64 v44; 
  int v45; 
  __int64 v46; 
  _DWORD *v47; 
  int v48; 
  __int64 v49; 
  int v50; 
  __int64 v51; 
  __int64 v52; 
  _DWORD *v53; 
  int v54; 
  __int64 v55; 
  int v56; 
  ASM_LogicGroup *v57; 
  __int64 m_NumParams; 
  ASM_Function_Param *m_Params; 
  ASM_Function_Param_Type *p_m_Type; 
  __int64 v61; 
  int v62; 
  ASM_Function_Param *v63; 
  ASM_Function_Param_Type *v64; 
  int v65; 
  __int64 v66; 

  Scr_SetString(&pASM->m_Name, (scr_string_t)0);
  v65 = 0;
  if ( pASM->m_NumStates > 0 )
  {
    v2 = 0i64;
    v66 = 0i64;
    while ( 1 )
    {
      v3 = (char *)pASM->m_States + v2;
      if ( pASM->m_Mode == ASM_MODE_AI )
      {
        Scr_SetString((scr_string_t *)(*((_QWORD *)v3 + 30) + 16i64), (scr_string_t)0);
        Scr_SetString((scr_string_t *)(*((_QWORD *)v3 + 30) + 20i64), (scr_string_t)0);
        Scr_SetString((scr_string_t *)(*((_QWORD *)v3 + 30) + 24i64), (scr_string_t)0);
        Scr_SetString((scr_string_t *)(*((_QWORD *)v3 + 30) + 28i64), (scr_string_t)0);
      }
      Scr_SetString((scr_string_t *)v3 + 46, (scr_string_t)0);
      Scr_SetString((scr_string_t *)v3 + 47, (scr_string_t)0);
      Scr_SetString((scr_string_t *)v3 + 3, (scr_string_t)0);
      for ( i = 0; i < *((_DWORD *)v3 + 12); ++i )
        Scr_SetString((scr_string_t *)(*((_QWORD *)v3 + 5) + 4i64 * i), (scr_string_t)0);
      v5 = *((int *)v3 + 15);
      v6 = 0;
      v7 = *((_QWORD *)v3 + 8);
      if ( v5 > 0 )
      {
        v8 = (_DWORD *)(v7 + 4);
        do
        {
          if ( *v8 == 2 )
            Scr_SetString((scr_string_t *)(v7 + 8i64 * v6), (scr_string_t)0);
          ++v6;
          v8 += 2;
          --v5;
        }
        while ( v5 );
      }
      v9 = *((int *)v3 + 23);
      v10 = 0;
      v11 = *((_QWORD *)v3 + 12);
      if ( v9 > 0 )
      {
        v12 = (_DWORD *)(v11 + 4);
        do
        {
          if ( *v12 == 2 )
            Scr_SetString((scr_string_t *)(v11 + 8i64 * v10), (scr_string_t)0);
          ++v10;
          v12 += 2;
          --v9;
        }
        while ( v9 );
      }
      v13 = *((int *)v3 + 31);
      v14 = 0;
      v15 = *((_QWORD *)v3 + 16);
      if ( v13 > 0 )
      {
        v16 = (_DWORD *)(v15 + 4);
        do
        {
          if ( *v16 == 2 )
            Scr_SetString((scr_string_t *)(v15 + 8i64 * v14), (scr_string_t)0);
          ++v14;
          v16 += 2;
          --v13;
        }
        while ( v13 );
      }
      v17 = *((int *)v3 + 39);
      v18 = 0;
      v19 = *((_QWORD *)v3 + 20);
      if ( v17 > 0 )
      {
        v20 = (_DWORD *)(v19 + 4);
        do
        {
          if ( *v20 == 2 )
            Scr_SetString((scr_string_t *)(v19 + 8i64 * v18), (scr_string_t)0);
          ++v18;
          v20 += 2;
          --v17;
        }
        while ( v17 );
      }
      v21 = *((int *)v3 + 53);
      v22 = 0;
      v23 = *((_QWORD *)v3 + 27);
      if ( v21 > 0 )
      {
        v24 = (_DWORD *)(v23 + 4);
        do
        {
          if ( *v24 == 2 )
            Scr_SetString((scr_string_t *)(v23 + 8i64 * v22), (scr_string_t)0);
          ++v22;
          v24 += 2;
          --v21;
        }
        while ( v21 );
      }
      v25 = *((int *)v3 + 49);
      v26 = 0;
      v27 = *((_QWORD *)v3 + 25);
      if ( v25 > 0 )
      {
        v28 = (_DWORD *)(v27 + 4);
        do
        {
          if ( *v28 == 2 )
            Scr_SetString((scr_string_t *)(v27 + 8i64 * v26), (scr_string_t)0);
          ++v26;
          v28 += 2;
          --v25;
        }
        while ( v25 );
      }
      v29 = *((int *)v3 + 57);
      v30 = 0;
      v31 = *((_QWORD *)v3 + 29);
      if ( v29 > 0 )
      {
        v32 = (_DWORD *)(v31 + 4);
        do
        {
          if ( *v32 == 2 )
            Scr_SetString((scr_string_t *)(v31 + 8i64 * v30), (scr_string_t)0);
          ++v30;
          v32 += 2;
          --v29;
        }
        while ( v29 );
      }
      m_Mode = pASM->m_Mode;
      if ( m_Mode )
        goto LABEL_49;
      v34 = *((_QWORD *)v3 + 30);
      v35 = 0;
      v36 = *(int *)(v34 + 4);
      v37 = *(_QWORD *)(v34 + 8);
      if ( v36 > 0 )
        break;
LABEL_61:
      v48 = 0;
      if ( *((int *)v3 + 2) > 0 )
      {
        v49 = 0i64;
        do
        {
          v50 = 0;
          v51 = *(int *)(v49 + *(_QWORD *)v3 + 12);
          v52 = *(_QWORD *)(v49 + *(_QWORD *)v3 + 16);
          if ( v51 > 0 )
          {
            v53 = (_DWORD *)(v52 + 4);
            do
            {
              if ( *v53 == 2 )
                Scr_SetString((scr_string_t *)(v52 + 8i64 * v50), (scr_string_t)0);
              ++v50;
              v53 += 2;
              --v51;
            }
            while ( v51 );
          }
          ++v48;
          v49 += 48i64;
        }
        while ( v48 < *((_DWORD *)v3 + 2) );
      }
      v2 = v66 + 248;
      ++v65;
      v66 += 248i64;
      if ( v65 >= pASM->m_NumStates )
        goto LABEL_70;
    }
    v38 = (_DWORD *)(v37 + 4);
    do
    {
      if ( *v38 == 2 )
        Scr_SetString((scr_string_t *)(v37 + 8i64 * v35), (scr_string_t)0);
      ++v35;
      v38 += 2;
      --v36;
    }
    while ( v36 );
    m_Mode = pASM->m_Mode;
LABEL_49:
    if ( m_Mode == ASM_MODE_PLAYER )
    {
      v39 = *((_QWORD *)v3 + 30);
      v40 = 0;
      v41 = *(int *)(v39 + 4);
      v42 = *(_QWORD *)(v39 + 8);
      if ( v41 > 0 )
      {
        v43 = (_DWORD *)(v42 + 4);
        do
        {
          if ( *v43 == 2 )
            Scr_SetString((scr_string_t *)(v42 + 8i64 * v40), (scr_string_t)0);
          ++v40;
          v43 += 2;
          --v41;
        }
        while ( v41 );
        v39 = *((_QWORD *)v3 + 30);
      }
      v44 = *(int *)(v39 + 36);
      v45 = 0;
      v46 = *(_QWORD *)(v39 + 40);
      if ( v44 > 0 )
      {
        v47 = (_DWORD *)(v46 + 4);
        do
        {
          if ( *v47 == 2 )
            Scr_SetString((scr_string_t *)(v46 + 8i64 * v45), (scr_string_t)0);
          ++v45;
          v47 += 2;
          --v44;
        }
        while ( v44 );
      }
    }
    goto LABEL_61;
  }
LABEL_70:
  v54 = 0;
  if ( pASM->m_NumLogicGroups > 0 )
  {
    v55 = 0i64;
    do
    {
      v56 = 0;
      v57 = &pASM->m_LogicGroups[v55];
      m_NumParams = v57->m_InitFunc.m_NumParams;
      m_Params = v57->m_InitFunc.m_Params;
      if ( m_NumParams > 0 )
      {
        p_m_Type = &m_Params->m_Type;
        do
        {
          if ( *p_m_Type == ParamType_String )
            Scr_SetString((scr_string_t *)&m_Params[v56], (scr_string_t)0);
          ++v56;
          p_m_Type += 2;
          --m_NumParams;
        }
        while ( m_NumParams );
      }
      v61 = v57->m_TerminateFunc.m_NumParams;
      v62 = 0;
      v63 = v57->m_TerminateFunc.m_Params;
      if ( v61 > 0 )
      {
        v64 = &v63->m_Type;
        do
        {
          if ( *v64 == ParamType_String )
            Scr_SetString((scr_string_t *)&v63[v62], (scr_string_t)0);
          ++v62;
          v64 += 2;
          --v61;
        }
        while ( v61 );
      }
      ++v54;
      ++v55;
    }
    while ( v54 < pASM->m_NumLogicGroups );
  }
}

/*
==============
Common_Asm::DerefFunctionParams
==============
*/
void Common_Asm::DerefFunctionParams(ASM_Function_Param *pParams, int numParams)
{
  ASM_Function_Param *v2; 
  ASM_Function_Param_Type *p_m_Type; 
  __int64 v4; 

  if ( numParams > 0 )
  {
    v2 = pParams;
    p_m_Type = &pParams->m_Type;
    v4 = (unsigned int)numParams;
    do
    {
      if ( *p_m_Type == ParamType_String )
        Scr_SetString((scr_string_t *)v2, (scr_string_t)0);
      ++v2;
      p_m_Type += 2;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
Common_Asm::DoTraverse
==============
*/
void Common_Asm::DoTraverse(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t stateName)
{
  const ASM *m_pASM; 
  const ASM_State *v9; 
  const char *m_szName; 
  const char *v11; 
  ASM_Function_Param *pParamsOverrideEntry; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 923, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !stateName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 924, ASSERT_TYPE_ASSERT, "(stateName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
    __debugbreak();
  m_pASM = pInst->m_pASM;
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 927, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( pInst->m_EntNum >= 0x800u )
  {
    LODWORD(pParamsOverrideEntry) = pInst->m_EntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 929, ASSERT_TYPE_ASSERT, "(unsigned)( pInst->m_EntNum ) < (unsigned)( ( 2048 ) )", "pInst->m_EntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", pParamsOverrideEntry, 2048) )
      __debugbreak();
  }
  v9 = this->GetStateByName(this, m_pASM, (unsigned int)stateName);
  if ( !v9 )
  {
    v9 = this->GetStateByName(this, m_pASM, (unsigned int)scr_const.traverse_external);
    if ( !v9 )
    {
      m_szName = m_pASM->m_szName;
      v11 = SL_ConvertToString(stateName);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 933, ASSERT_TYPE_ASSERT, "( pTraverseState )", "Unable to find traverse state %s or traverse_external in asm %s", v11, m_szName) )
        __debugbreak();
    }
  }
  if ( Common_Asm::Utils::GetState(pInst->m_pASM, pInst->m_CurState)->m_Name != v9->m_Name )
    Common_Asm::SetState(this, context, pInst, v9, 0, NULL);
}

/*
==============
Common_Asm::EnterState
==============
*/
void Common_Asm::EnterState(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, int toStateID, ASM_Transition *pTransitionIn, int numParamsOverride, ASM_Function_Param *pParamsOverride, const ASM_TransitionList *pTransitionList)
{
  const ASM *m_pASM; 
  const ASM_State *State; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  int m_CurState; 
  const ASM_State *v18; 
  ASM_History *v19; 
  int m_PrevState; 
  int v21; 
  int v22; 
  ASM_Instance **m_Subtrees; 
  const char *v24; 
  const char *v25; 
  Common_Asm_vtbl *v26; 
  __int64 m_Name; 
  int v28; 
  __int64 v29; 
  ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *v30; 
  ntl::red_black_tree_node_base *mp_parent; 
  scr_string_t *v32; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const char *v34; 
  const ASM *v35; 
  ASM_Instance *v36; 
  __int64 v37; 
  ASM_Function_Param *v38; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 534, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  m_pASM = pInst->m_pASM;
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 537, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  State = Common_Asm::Utils::GetState(m_pASM, toStateID);
  if ( !State )
  {
    v14 = SL_ConvertToString(m_pASM->m_Name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 540, ASSERT_TYPE_ASSERT, "(pState)", "%s\n\tUnable to find state %d in ASM %s", "pState", toStateID, v14) )
      __debugbreak();
  }
  if ( (unsigned int)(State->m_Type - 2) <= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 541, ASSERT_TYPE_ASSERT, "(!IsPassthroughType( pState->m_Type ))", (const char *)&queryFormat, "!IsPassthroughType( pState->m_Type )") )
    __debugbreak();
  v15 = SL_ConvertToString(State->m_Name);
  v16 = j_va("%s %s", "ASM_EnterState", v15);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, v16);
  m_CurState = pInst->m_CurState;
  pInst->m_PrevState = m_CurState;
  if ( m_CurState < 0 )
    v18 = NULL;
  else
    v18 = Common_Asm::Utils::GetState(m_pASM, m_CurState);
  pInst->m_CurState = toStateID;
  Common_Asm::ClearEvents(this, pInst);
  if ( pInst->m_bPrimary )
  {
    v19 = this->GetHistoryObject(this, pInst);
    if ( v19 )
    {
      m_PrevState = pInst->m_PrevState;
      v21 = this->GetGameTime(this);
      ASM_History::AddEvent(v19, v21, m_PrevState, pTransitionList);
    }
  }
  v22 = 0;
  if ( pInst->m_NumSubtrees > 0 )
  {
    m_Subtrees = pInst->m_Subtrees;
    do
    {
      if ( !Common_Asm::Utils::StateHasSubtree(State, (const scr_string_t)(*m_Subtrees)->m_pASM->m_Name) || this->StateInterruptsSubtrees(this, pInst, State) )
      {
        Common_Asm::Terminate(this, context, *m_Subtrees, pInst, 1);
      }
      else
      {
        ++v22;
        ++m_Subtrees;
      }
    }
    while ( v22 < pInst->m_NumSubtrees );
  }
  this->EnterStateFunc(this, pInst, State);
  if ( v18 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_LogicInits");
    Common_Asm::LogicInit_r(this, context, pInst, v18->m_LogicGroupID, State->m_LogicGroupID);
    Sys_ProfEndNamedEvent();
  }
  v24 = SL_ConvertToString(State->m_Name);
  v25 = j_va("%s %s", "ASM_PlayAnim", v24);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, v25);
  v26 = this->__vftable;
  m_Name = (unsigned int)m_pASM->m_Name;
  if ( numParamsOverride )
    v26->RunFunction_asm_state_with_params(this, context, pInst, (const scr_string_t)m_Name, pInst->m_EntNum, (const scr_string_t)State->m_Name, State->m_PlayAnim.m_FuncID, numParamsOverride, pParamsOverride, State->m_PlayAnim.m_bBuiltin);
  else
    v26->RunFunction_asm_state(this, context, pInst, (const scr_string_t)m_Name, pInst->m_EntNum, (const scr_string_t)State->m_Name, &State->m_PlayAnim);
  Sys_ProfEndNamedEvent();
  this->ProcessFlags(this, pInst, State, v18, pTransitionIn);
  v28 = 0;
  if ( State->m_NumSubtrees > 0 )
  {
    v29 = 0i64;
    while ( 1 )
    {
      v30 = this->GetAssetMap(this);
      if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 599, ASSERT_TYPE_ASSERT, "(asmMap)", (const char *)&queryFormat, "asmMap") )
        __debugbreak();
      mp_parent = v30->m_endNodeBase.mp_parent;
      v32 = State->m_Subtrees;
      p_m_endNodeBase = &v30->m_endNodeBase;
      while ( mp_parent )
      {
        if ( mp_parent[1].m_color < v32[v29] )
        {
          mp_parent = mp_parent->mp_right;
        }
        else
        {
          p_m_endNodeBase = mp_parent;
          mp_parent = mp_parent->mp_left;
        }
      }
      if ( p_m_endNodeBase == &v30->m_endNodeBase )
        goto LABEL_44;
      if ( v32[v29] < p_m_endNodeBase[1].m_color )
        break;
LABEL_46:
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v35 = (const ASM *)p_m_endNodeBase[1].mp_parent;
      if ( !ASM_Instance::HasSubtree(pInst, v35) )
      {
        if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 618, ASSERT_TYPE_ASSERT, "(pSubtree)", (const char *)&queryFormat, "pSubtree") )
          __debugbreak();
        if ( pInst->m_NumSubtrees == this->m_MaxSubtreesPerInstance )
        {
          LODWORD(v38) = pInst->m_EntNum;
          LODWORD(v37) = this->m_MaxSubtreesPerInstance;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 622, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Exceeded max number of subtrees (%d) for ent %d asm %s.", v37, v38, pInst->m_pASM->m_szName) )
            __debugbreak();
          v36 = NULL;
        }
        else
        {
          v36 = this->InstanceAllocate(this, context);
          if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 627, ASSERT_TYPE_ASSERT, "(pSubInst)", (const char *)&queryFormat, "pSubInst") )
            __debugbreak();
          ASM_Instance::AddSubtree(pInst, v36, v35, this->m_MaxSubtreesPerInstance, this->m_SupportsEventParamTableOffsets);
        }
        Common_Asm::EnterState(this, context, v36, v35->m_StartState, NULL, 0, NULL, NULL);
      }
      ++v28;
      ++v29;
      if ( v28 >= State->m_NumSubtrees )
        goto LABEL_63;
    }
    p_m_endNodeBase = &v30->m_endNodeBase;
LABEL_44:
    v34 = SL_ConvertToString(v32[v29]);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 602, ASSERT_TYPE_ASSERT, "(subtreeIter != asmMap->end())", "%s\n\tUnable to find asset for subtree %s", "subtreeIter != asmMap->end()", v34) )
      __debugbreak();
    goto LABEL_46;
  }
LABEL_63:
  Sys_ProfEndNamedEvent();
}

/*
==============
Common_Asm::EnterState
==============
*/
void Common_Asm::EnterState(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, int toStateID, ASM_Transition *pTransitionIn, const ASM_TransitionList *pTransitionList)
{
  Common_Asm::EnterState(this, context, pInst, toStateID, pTransitionIn, 0, NULL, pTransitionList);
}

/*
==============
Common_Asm::EphemeralEventFired
==============
*/
char Common_Asm::EphemeralEventFired(Common_Asm *this, ASM_Instance *pInst, const scr_string_t tagName, const scr_string_t eventName)
{
  ASM_EphemeralEvent *EphemeralEventTable; 
  __int64 v7; 

  EphemeralEventTable = Common_Asm::GetEphemeralEventTable(this, pInst);
  v7 = 0i64;
  while ( EphemeralEventTable->m_Tag != tagName || EphemeralEventTable->m_Name != eventName )
  {
    ++v7;
    ++EphemeralEventTable;
    if ( v7 >= 6 )
      return 0;
  }
  return 1;
}

/*
==============
Common_Asm::EventFiredWithin
==============
*/
bool Common_Asm::EventFiredWithin(Common_Asm *this, const ASM_Instance *pInst, const scr_string_t eventName, int time)
{
  int v8; 
  ASM_Event *m_EventTable; 
  __int64 v10; 

  if ( time < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 1142, ASSERT_TYPE_ASSERT, "(time >= 0)", (const char *)&queryFormat, "time >= 0") )
    __debugbreak();
  v8 = 0;
  m_EventTable = pInst->m_EventTable;
  v10 = 0i64;
  while ( m_EventTable->m_Name != eventName )
  {
    ++v8;
    ++v10;
    ++m_EventTable;
    if ( v10 >= 8 )
      return 0;
  }
  return (int)(((__int64 (__fastcall *)(Common_Asm *))this->GetGameTime)(this) - pInst->m_EventTable[v8].m_Time) <= time;
}

/*
==============
Common_Asm::FireEphemeralEvent
==============
*/
void Common_Asm::FireEphemeralEvent(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t tagName, const scr_string_t eventName)
{
  Common_Asm::FireEphemeralEvent(this, context, pInst, tagName, eventName, NULL);
}

/*
==============
Common_Asm::FireEphemeralEvent
==============
*/
void Common_Asm::FireEphemeralEvent(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t tagName, const scr_string_t eventName, VariableValue *pParam)
{
  ASM_Instance *v6; 
  scrContext_t *m_pScrContext; 
  ASM_EphemeralEvent *EphemeralEventTable; 
  ASM_EphemeralEvent *v12; 
  int v13; 
  __int64 v14; 
  scr_string_t *p_m_Name; 
  bool v16; 
  unsigned int v17; 
  unsigned int v18; 
  int v19; 

  v6 = pInst;
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 1020, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_FireEphemeralEvent");
  if ( !v6->m_bPrimary )
    v6 = this->GetInstance(this, context, (unsigned int)v6->m_EntNum);
  m_pScrContext = v6->m_pScrContext;
  EphemeralEventTable = Common_Asm::GetEphemeralEventTable(this, v6);
  v12 = NULL;
  v13 = 0;
  v14 = 0i64;
  p_m_Name = &EphemeralEventTable->m_Name;
  while ( *((_DWORD *)p_m_Name - 1) != tagName || *p_m_Name != eventName )
  {
    if ( !*p_m_Name )
    {
      v12 = &EphemeralEventTable[v13];
      if ( !v12->m_Tag )
        goto LABEL_21;
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 1047, ASSERT_TYPE_ASSERT, "(pEvent->m_Tag == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "pEvent->m_Tag == NULL_SCR_STRING");
      goto LABEL_19;
    }
    ++v13;
    ++v14;
    p_m_Name += 4;
    if ( v14 >= 6 )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 1052, ASSERT_TYPE_ASSERT, "(pEvent)", "%s\n\tExceeded max number of ephemeral events per frame. (%d)", "pEvent", 6);
LABEL_19:
      if ( v16 )
        __debugbreak();
      goto LABEL_21;
    }
  }
  v12 = &EphemeralEventTable[v13];
  if ( v12->m_ParamID != -1 )
  {
    v17 = this->GetEphemeralEventParamTableID(this, v6);
    if ( !FindArrayVariable(m_pScrContext, v17, v12->m_ParamID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 1039, ASSERT_TYPE_ASSERT, "(FindArrayVariable( *pScrContext, paramTableID, pEvent->m_ParamID ))", (const char *)&queryFormat, "FindArrayVariable( *pScrContext, paramTableID, pEvent->m_ParamID )") )
      __debugbreak();
    RemoveArrayVariable(m_pScrContext, v17, v12->m_ParamID);
  }
LABEL_21:
  Scr_SetString(&v12->m_Tag, tagName);
  Scr_SetString(&v12->m_Name, eventName);
  if ( pParam )
  {
    v18 = this->GetEphemeralEventParamTableID(this, v6);
    v19 = Common_Asm::Utils::AddEventData_Internal(v6->m_pScrContext, v18, -1, pParam);
  }
  else
  {
    v19 = -1;
  }
  v12->m_ParamID = v19;
  v12->m_Time = this->GetGameTime(this);
  Sys_ProfEndNamedEvent();
}

/*
==============
Common_Asm::FireEvent
==============
*/
void Common_Asm::FireEvent(Common_Asm *this, ASM_Instance *pInst, const scr_string_t eventName, VariableValue *pParam)
{
  ASM_Event *EventFor; 
  scrContext_t *m_pScrContext; 
  int v10; 
  unsigned int m_ParamID; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 1079, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_FireEvent");
  EventFor = Common_Asm::Utils::FindEventFor(pInst->m_EventTable, eventName);
  if ( !EventFor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 1084, ASSERT_TYPE_ASSERT, "(pEvent)", (const char *)&queryFormat, "pEvent") )
    __debugbreak();
  m_pScrContext = pInst->m_pScrContext;
  v10 = pInst->m_EventParamTableOffset + ((int)EventFor - (int)pInst - 72) / 12;
  if ( EventFor->m_Name )
  {
    m_ParamID = EventFor->m_ParamID;
    if ( m_ParamID != -1 )
    {
      v12 = this->GetEventParamTableID(this, pInst);
      RemoveArrayVariable(m_pScrContext, v12, m_ParamID);
    }
  }
  Scr_SetString(&EventFor->m_Name, eventName);
  if ( pParam )
  {
    v13 = this->GetEventParamTableID(this, pInst);
    v14 = Common_Asm::Utils::AddEventData_Internal(pInst->m_pScrContext, v13, v10, pParam);
  }
  else
  {
    v14 = -1;
  }
  EventFor->m_ParamID = v14;
  EventFor->m_Time = this->GetGameTime(this);
  Sys_ProfEndNamedEvent();
}

/*
==============
Common_Asm::FireEvent
==============
*/
void Common_Asm::FireEvent(Common_Asm *this, ASM_Instance *pInst, const scr_string_t eventName)
{
  Common_Asm::FireEvent(this, pInst, eventName, NULL);
}

/*
==============
Common_Asm::FireEventWithVec3
==============
*/
void Common_Asm::FireEventWithVec3(Common_Asm *this, ASM_Instance *pInst, const scr_string_t eventName, const vec3_t *v)
{
  scrContext_t *m_pScrContext; 
  VariableValue pParam; 

  m_pScrContext = pInst->m_pScrContext;
  pParam.type = VAR_VECTOR;
  pParam.u.scriptCodePosValue = (unsigned __int64)Scr_AllocVector(m_pScrContext, v->v);
  Common_Asm::FireEvent(this, pInst, eventName, &pParam);
  RemoveRefToVector(m_pScrContext, pParam.u.vectorValue);
}

/*
==============
Common_Asm::FreeEphemeralTableIndex
==============
*/
void Common_Asm::FreeEphemeralTableIndex(Common_Asm *this, ASM_Instance *pInst)
{
  ASM_EphemeralTable *v4; 
  __int64 v5; 
  scr_string_t *v6; 
  __int64 v7; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 216, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( pInst->m_EphemeralTableIndex != 0xFF )
  {
    v4 = this->GetEphemeralEventTables(this, pInst);
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 225, ASSERT_TYPE_ASSERT, "(ephemeralEventTables)", (const char *)&queryFormat, "ephemeralEventTables") )
      __debugbreak();
    if ( (unsigned int)pInst->m_EphemeralTableIndex >= this->m_MaxEphemeralTables )
    {
      LODWORD(v7) = pInst->m_EphemeralTableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 226, ASSERT_TYPE_ASSERT, "(unsigned)( pInst->m_EphemeralTableIndex ) < (unsigned)( m_MaxEphemeralTables )", "pInst->m_EphemeralTableIndex doesn't index m_MaxEphemeralTables\n\t%i not in [0, %i)", v7, this->m_MaxEphemeralTables) )
        __debugbreak();
    }
    v5 = 6i64;
    v6 = (scr_string_t *)&v4[pInst->m_EphemeralTableIndex];
    do
    {
      Scr_SetString(v6, (scr_string_t)0);
      Scr_SetString(v6 + 1, (scr_string_t)0);
      v6 += 4;
      --v5;
    }
    while ( v5 );
    v4[pInst->m_EphemeralTableIndex].m_bInUse = 0;
  }
}

/*
==============
Common_Asm::GetASM
==============
*/
ntl::red_black_tree_node_base *Common_Asm::GetASM(Common_Asm *this, const scr_string_t asmName)
{
  ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *v3; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  v3 = this->GetAssetMap(this);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 291, ASSERT_TYPE_ASSERT, "(asmMap)", (const char *)&queryFormat, "asmMap") )
    __debugbreak();
  mp_parent = v3->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &v3->m_endNodeBase;
  while ( mp_parent )
  {
    if ( mp_parent[1].m_color < asmName )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( p_m_endNodeBase == &v3->m_endNodeBase || asmName < p_m_endNodeBase[1].m_color )
    return 0i64;
  else
    return p_m_endNodeBase[1].mp_parent;
}

/*
==============
Common_Asm::GetASM
==============
*/
ntl::red_black_tree_node_base *Common_Asm::GetASM(Common_Asm *this, const scr_string_t asmName)
{
  ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *v3; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  v3 = this->GetAssetMap(this);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 304, ASSERT_TYPE_ASSERT, "(asmMap)", (const char *)&queryFormat, "asmMap") )
    __debugbreak();
  mp_parent = v3->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &v3->m_endNodeBase;
  while ( mp_parent )
  {
    if ( mp_parent[1].m_color < asmName )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( p_m_endNodeBase == &v3->m_endNodeBase || asmName < p_m_endNodeBase[1].m_color )
    return 0i64;
  else
    return p_m_endNodeBase[1].mp_parent;
}

/*
==============
Common_Asm::GetEphemeralEventTable
==============
*/
ASM_EphemeralEvent *Common_Asm::GetEphemeralEventTable(Common_Asm *this, ASM_Instance *pInst)
{
  __int64 v4; 
  __int64 v6; 

  v4 = ((__int64 (__fastcall *)(Common_Asm *))this->GetEphemeralEventTables)(this);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 949, ASSERT_TYPE_ASSERT, "(ephemeralEventTables)", (const char *)&queryFormat, "ephemeralEventTables") )
    __debugbreak();
  if ( (unsigned int)pInst->m_EphemeralTableIndex >= this->m_MaxEphemeralTables )
  {
    LODWORD(v6) = pInst->m_EphemeralTableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 950, ASSERT_TYPE_ASSERT, "(unsigned)( pInst->m_EphemeralTableIndex ) < (unsigned)( m_MaxEphemeralTables )", "pInst->m_EphemeralTableIndex doesn't index m_MaxEphemeralTables\n\t%i not in [0, %i)", v6, this->m_MaxEphemeralTables) )
      __debugbreak();
  }
  if ( !*(_BYTE *)(100i64 * pInst->m_EphemeralTableIndex + v4 + 96) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 951, ASSERT_TYPE_ASSERT, "(ephemeralEventTables[ pInst->m_EphemeralTableIndex ].m_bInUse)", (const char *)&queryFormat, "ephemeralEventTables[ pInst->m_EphemeralTableIndex ].m_bInUse") )
    __debugbreak();
  return (ASM_EphemeralEvent *)(v4 + 100i64 * pInst->m_EphemeralTableIndex);
}

/*
==============
Common_Asm::GetMode
==============
*/
__int64 Common_Asm::GetMode(Common_Asm *this)
{
  return (unsigned int)this->m_Mode;
}

/*
==============
Common_Asm::GetStateByName
==============
*/
ASM_State *Common_Asm::GetStateByName(Common_Asm *this, const ASM *pASM, const scr_string_t stateName)
{
  int v5; 
  ASM_State *m_States; 
  __int64 v7; 
  scr_string_t *i; 

  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 789, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  v5 = 0;
  if ( pASM->m_NumStates <= 0 )
    return 0i64;
  m_States = pASM->m_States;
  v7 = 0i64;
  for ( i = &m_States->m_Name; *i != stateName; i += 62 )
  {
    ++v5;
    if ( ++v7 >= pASM->m_NumStates )
      return 0i64;
  }
  return &m_States[v5];
}

/*
==============
Common_Asm::Instantiate
==============
*/
void Common_Asm::Instantiate(Common_Asm *this, const ASM_Context *context, int entNum, const scr_string_t asmName, bool reset, scrContext_t *scrContext)
{
  ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *v10; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ASM_Instance *v13; 
  ASM_Instance *v14; 
  const ASM *v15; 
  const char *v16; 

  if ( reset && ((__int64 (__fastcall *)(Common_Asm *))this->GetInstanceIfExists)(this) )
    this->FreeInstance(this, context, entNum);
  if ( this->GetInstanceIfExists(this, context, (unsigned int)entNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 248, ASSERT_TYPE_ASSERT, "(!GetInstanceIfExists( context, entNum ))", "%s\n\tASM already instantiated for ent num %d", "!GetInstanceIfExists( context, entNum )", entNum) )
    __debugbreak();
  v10 = this->GetAssetMap(this);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 251, ASSERT_TYPE_ASSERT, "(asmMap)", (const char *)&queryFormat, "asmMap") )
    __debugbreak();
  mp_parent = v10->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &v10->m_endNodeBase;
  while ( mp_parent )
  {
    if ( mp_parent[1].m_color < asmName )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( p_m_endNodeBase == &v10->m_endNodeBase || asmName < p_m_endNodeBase[1].m_color )
  {
    v16 = SL_ConvertToString(asmName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 256, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find ASM '%s'", v16) )
      __debugbreak();
  }
  else
  {
    v13 = this->InstanceAllocate(this, context);
    v14 = v13;
    if ( v13 )
    {
      v15 = (const ASM *)p_m_endNodeBase[1].mp_parent;
      v13->m_pASM = v15;
      v13->m_EntNum = entNum;
      v13->m_bPrimary = 1;
      v13->m_EphemeralTableIndex = this->AllocEphemeralTableIndex(this, v13);
      v14->m_pScrContext = scrContext;
      this->StoreInstance(this, v14, entNum);
      Common_Asm::EnterState(this, context, v14, v15->m_StartState, NULL, 0, NULL, NULL);
      this->RunServices(this, context, v14, v15, entNum);
    }
  }
}

/*
==============
Common_Asm::LogicInit_r
==============
*/
void Common_Asm::LogicInit_r(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, int fromGroupID, int toGroupID)
{
  const ASM *m_pASM; 
  const ASM_LogicGroup *LogicGroup; 
  const ASM_Function *p_m_InitFunc; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 440, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  m_pASM = pInst->m_pASM;
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 443, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( toGroupID != -1 && !Common_Asm::Utils::LogicGroup_IsAncestorOf(m_pASM, toGroupID, fromGroupID) )
  {
    LogicGroup = Common_Asm::Utils::GetLogicGroup(m_pASM, toGroupID);
    Common_Asm::LogicInit_r(this, context, pInst, fromGroupID, LogicGroup->m_ParentID);
    p_m_InitFunc = &LogicGroup->m_InitFunc;
    if ( p_m_InitFunc->m_FuncID != -1 )
      this->RunFunction_asm(this, context, pInst, (const scr_string_t)m_pASM->m_Name, pInst->m_EntNum, p_m_InitFunc);
  }
}

/*
==============
Common_Asm::MyChanges_UpdateAssetMaps
==============
*/
void Common_Asm::MyChanges_UpdateAssetMaps(ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *asmMap, ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *looseFileMap)
{
  __int64 v3; 
  unsigned int v4; 
  DB_AssetEntryFlags *p_m_headEntries; 
  DB_AssetEntryPool *AssetEntryPool; 
  unsigned int v7; 
  __int64 assetCount; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ASM *v10; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *v12; 
  ntl::red_black_tree_node_base::ENodeColor m_Name; 
  ntl::red_black_tree_node_base *v14; 
  ntl::red_black_tree_node_base *v15; 
  ntl::red_black_tree_node_base *v16; 
  ntl::red_black_tree_node_base *v17; 
  scr_string_t v18; 
  ntl::red_black_tree_node_base *v19; 
  GetAllXAssetFunctor functor; 
  ASM *pASM[32]; 

  if ( !asmMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 148, ASSERT_TYPE_ASSERT, "(asmMap)", (const char *)&queryFormat, "asmMap") )
    __debugbreak();
  functor.type = ASSET_TYPE_ASM;
  v3 = 0i64;
  functor.assets = (XAssetHeader *)pASM;
  functor.assetCount = 0;
  functor.maxCount = 32;
  DB_LockHashRead();
  v4 = 0;
  p_m_headEntries = &s_assetManager.table.m_headEntries;
  AssetEntryPool = DB_GetAssetEntryPool();
  v7 = 0;
  do
  {
    DB_AssetEntryPool::MutableForEachInBlock<GetAllXAssetFunctor>(AssetEntryPool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v7, &functor);
    v7 += 64;
    ++v4;
    p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
  }
  while ( v4 < 0x1768 );
  DB_UnlockHashRead();
  assetCount = functor.assetCount;
  if ( functor.assetCount > 0 )
  {
    p_m_endNodeBase = &looseFileMap->m_endNodeBase;
    do
    {
      v10 = pASM[v3];
      if ( v10->m_Mode == ASM_MODE_AI )
        v10->u.m_AIASM->m_ScriptHandler = -1;
      memset_0(v10->m_FuncIDs, -1, 4i64 * v10->m_NumFuncIDs);
      if ( !looseFileMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 164, ASSERT_TYPE_ASSERT, "(looseFileMap)", (const char *)&queryFormat, "looseFileMap") )
        __debugbreak();
      mp_parent = looseFileMap->m_endNodeBase.mp_parent;
      v12 = p_m_endNodeBase;
      if ( !mp_parent )
        goto LABEL_22;
      m_Name = v10->m_Name;
      do
      {
        if ( mp_parent[1].m_color < m_Name )
        {
          mp_parent = mp_parent->mp_right;
        }
        else
        {
          v12 = mp_parent;
          mp_parent = mp_parent->mp_left;
        }
      }
      while ( mp_parent );
      if ( v12 == p_m_endNodeBase || m_Name < v12[1].m_color || !*((_BYTE *)&v12[1].m_color + 4) )
      {
LABEL_22:
        v14 = asmMap->m_endNodeBase.mp_parent;
        v15 = &asmMap->m_endNodeBase;
        v16 = &asmMap->m_endNodeBase;
        v17 = v14;
        while ( v17 )
        {
          if ( v17[1].m_color < v10->m_Name )
          {
            v17 = v17->mp_right;
          }
          else
          {
            v16 = v17;
            v17 = v17->mp_left;
          }
        }
        if ( v16 == v15 || (v18 = v10->m_Name, v18 < v16[1].m_color) )
        {
          Common_Asm::Register(asmMap, looseFileMap, v10, 0);
        }
        else if ( v10 != (ASM *)v16[1].mp_parent )
        {
          v19 = &asmMap->m_endNodeBase;
          if ( v14 )
          {
            do
            {
              if ( v14[1].m_color < v18 )
              {
                v14 = v14->mp_right;
              }
              else
              {
                v19 = v14;
                v14 = v14->mp_left;
              }
            }
            while ( v14 );
            if ( v19 != v15 && v18 >= v19[1].m_color )
            {
              if ( !asmMap->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
                __debugbreak();
              if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              ntl::red_black_tree_node_base::get_next(v19);
              if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
                __debugbreak();
              if ( v19 == v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
                __debugbreak();
              ntl::red_black_tree_node_base::rebalance_for_erase(v19, &asmMap->m_endNodeBase.mp_parent, &asmMap->m_endNodeBase.mp_left, &asmMap->m_endNodeBase.mp_right);
              if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
                __debugbreak();
              *(_QWORD *)&v19->m_color = asmMap->m_freelist.m_head.mp_next;
              asmMap->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v19;
              --asmMap->m_size;
            }
          }
          Common_Asm::Register(asmMap, looseFileMap, v10, 0);
          p_m_endNodeBase = &looseFileMap->m_endNodeBase;
        }
      }
      ++v3;
    }
    while ( v3 < assetCount );
  }
}

/*
==============
Common_Asm::PostCheckTransitions
==============
*/
void Common_Asm::PostCheckTransitions(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState)
{
  __int64 m_FuncID; 
  const char *v9; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 775, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 776, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( pState->m_Type == 4 )
  {
    m_FuncID = (unsigned int)pState->m_TerminateFunc.m_FuncID;
    if ( (_DWORD)m_FuncID != -1 )
    {
      v9 = j_va("%s %d", "PassFuncTerm", m_FuncID);
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, v9);
      this->RunFunction_asm_state(this, context, pInst, (const scr_string_t)pInst->m_pASM->m_Name, pInst->m_EntNum, pState->m_Name, &pState->m_TerminateFunc);
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
Common_Asm::PreCheckTransitions
==============
*/
_BOOL8 Common_Asm::PreCheckTransitions(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState, const int cMaxRandomTransitionsOut, int *outRandomizedTransitionIndices)
{
  int m_Type; 
  __int64 m_FuncID; 
  const char *v12; 
  bool v13; 
  const char *v14; 
  int m_NumTransitions; 
  int v16; 
  int *v17; 
  int v18; 
  int *v19; 
  int v20; 
  int v21; 
  __int64 v23; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 692, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 693, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( !outRandomizedTransitionIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 694, ASSERT_TYPE_ASSERT, "(outRandomizedTransitionIndices)", (const char *)&queryFormat, "outRandomizedTransitionIndices") )
    __debugbreak();
  m_Type = pState->m_Type;
  if ( m_Type == 4 )
  {
    m_FuncID = (unsigned int)pState->m_PlayAnim.m_FuncID;
    if ( (_DWORD)m_FuncID != -1 )
    {
      v12 = j_va("%s %d", "PassFunc", m_FuncID);
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, v12);
      this->RunFunction_asm_state(this, context, pInst, (const scr_string_t)pInst->m_pASM->m_Name, pInst->m_EntNum, pState->m_Name, &pState->m_PlayAnim);
      Sys_ProfEndNamedEvent();
      m_Type = pState->m_Type;
    }
  }
  v13 = m_Type == 5;
  if ( m_Type != 5 )
    return v13;
  if ( pState->m_NumTransitions > cMaxRandomTransitionsOut )
  {
    v14 = SL_ConvertToString(pState->m_Name);
    LODWORD(v23) = cMaxRandomTransitionsOut;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 707, ASSERT_TYPE_ASSERT, "(pState->m_NumTransitions <= cMaxRandomTransitionsOut)", "%s\n\texceeded max number of randomized transitions (%d) in state %s", "pState->m_NumTransitions <= cMaxRandomTransitionsOut", v23, v14) )
      __debugbreak();
  }
  m_NumTransitions = pState->m_NumTransitions;
  v16 = 0;
  if ( m_NumTransitions > 0 )
  {
    v17 = outRandomizedTransitionIndices;
    do
    {
      *v17++ = v16;
      m_NumTransitions = pState->m_NumTransitions;
      ++v16;
    }
    while ( v16 < m_NumTransitions );
  }
  v18 = 0;
  if ( m_NumTransitions - 1 > 0 )
  {
    v19 = outRandomizedTransitionIndices;
    do
    {
      v20 = this->irand(this, pInst, v18, m_NumTransitions - 1, NULL);
      if ( v20 != v18 )
      {
        v21 = *v19;
        *v19 = outRandomizedTransitionIndices[v20];
        outRandomizedTransitionIndices[v20] = v21;
      }
      m_NumTransitions = pState->m_NumTransitions;
      ++v18;
      ++v19;
    }
    while ( v18 < m_NumTransitions - 1 );
  }
  return v13;
}

/*
==============
Common_Asm::ProcessLogicInits
==============
*/
void Common_Asm::ProcessLogicInits(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pFromState, const ASM_State *pToState)
{
  if ( pFromState )
  {
    if ( !pToState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 463, ASSERT_TYPE_ASSERT, "(pToState)", (const char *)&queryFormat, "pToState") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_LogicInits");
    Common_Asm::LogicInit_r(this, context, pInst, pFromState->m_LogicGroupID, pToState->m_LogicGroupID);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
Common_Asm::ProcessLogicTerminates
==============
*/
void Common_Asm::ProcessLogicTerminates(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pFromState, const ASM_State *pToState)
{
  const ASM *m_pASM; 
  int m_LogicGroupID; 
  int i; 
  const ASM_LogicGroup *LogicGroup; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 410, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( pFromState )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_LogicTerminates");
    m_pASM = pInst->m_pASM;
    if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 418, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
      __debugbreak();
    if ( pToState )
      m_LogicGroupID = pToState->m_LogicGroupID;
    else
      m_LogicGroupID = -1;
    for ( i = pFromState->m_LogicGroupID; i != -1; i = LogicGroup->m_ParentID )
    {
      if ( Common_Asm::Utils::LogicGroup_IsAncestorOf(m_pASM, i, m_LogicGroupID) )
        break;
      LogicGroup = Common_Asm::Utils::GetLogicGroup(m_pASM, i);
      if ( LogicGroup->m_TerminateFunc.m_FuncID != -1 )
        this->RunFunction_asm(this, context, pInst, (const scr_string_t)m_pASM->m_Name, pInst->m_EntNum, &LogicGroup->m_TerminateFunc);
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
Common_Asm::Register
==============
*/
void Common_Asm::Register(ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *asmMap, ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *looseFileMap, ASM *pASM, bool bLooseFile)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v10; 
  ASM *v11; 
  ntl::red_black_tree_node_base *v12; 
  bool v13; 
  scr_string_t m_Name; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v17; 
  ntl::red_black_tree_node_base *v18; 
  ntl::red_black_tree_node_base *v19; 
  scr_string_t v20; 
  bool v21; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v24; 
  ntl::pair<enum scr_string_t,ASM *> r_element; 
  ntl::red_black_tree_iterator<enum scr_string_t,ntl::red_black_tree_node<ntl::pair<enum scr_string_t,ASM *> >,ntl::pair<enum scr_string_t,ASM *> *,ntl::pair<enum scr_string_t,ASM *> &> result; 
  ntl::red_black_tree_iterator<enum scr_string_t,ntl::red_black_tree_node<ntl::pair<enum scr_string_t,bool> >,ntl::pair<enum scr_string_t,bool> *,ntl::pair<enum scr_string_t,bool> &> v27; 

  if ( !asmMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 37, ASSERT_TYPE_ASSERT, "(asmMap)", (const char *)&queryFormat, "asmMap") )
    __debugbreak();
  if ( !looseFileMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 39, ASSERT_TYPE_ASSERT, "(looseFileMap)", (const char *)&queryFormat, "looseFileMap") )
    __debugbreak();
  mp_parent = asmMap->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &asmMap->m_endNodeBase;
  v10 = &asmMap->m_endNodeBase;
  while ( mp_parent )
  {
    if ( mp_parent[1].m_color < pASM->m_Name )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      v10 = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( v10 != p_m_endNodeBase && pASM->m_Name >= v10[1].m_color )
  {
    v11 = (ASM *)v10[1].mp_parent;
    if ( v11 != pASM )
      Common_Asm::Release(asmMap, looseFileMap, v11, 0);
  }
  v12 = asmMap->m_endNodeBase.mp_parent;
  v13 = 1;
  m_Name = pASM->m_Name;
  r_element.first = m_Name;
  r_element.second = pASM;
  while ( v12 )
  {
    p_m_endNodeBase = v12;
    v13 = m_Name < v12[1].m_color;
    if ( m_Name >= v12[1].m_color )
      v12 = v12->mp_right;
    else
      v12 = v12->mp_left;
  }
  mp_left = p_m_endNodeBase;
  if ( v13 )
  {
    if ( p_m_endNodeBase == asmMap->m_endNodeBase.mp_left )
    {
      ntl::red_black_tree<enum scr_string_t,ntl::pair<enum scr_string_t,ASM *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<enum scr_string_t,ASM *>>,32,8>,ntl::return_pair_first<enum scr_string_t,ASM *>,ntl::less<enum scr_string_t,enum scr_string_t>>::insert_node(asmMap, &result, p_m_endNodeBase, &r_element, 1, 0);
      goto LABEL_41;
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node", *(_QWORD *)&r_element.first, r_element.second) )
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
            v17 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v17 == mp_left->mp_left );
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
  if ( mp_left[1].m_color < m_Name )
    ntl::red_black_tree<enum scr_string_t,ntl::pair<enum scr_string_t,ASM *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<enum scr_string_t,ASM *>>,32,8>,ntl::return_pair_first<enum scr_string_t,ASM *>,ntl::less<enum scr_string_t,enum scr_string_t>>::insert_node(asmMap, &result, p_m_endNodeBase, &r_element, 0, 0);
LABEL_41:
  v18 = looseFileMap->m_endNodeBase.mp_parent;
  v19 = &looseFileMap->m_endNodeBase;
  v20 = pASM->m_Name;
  v21 = 1;
  LODWORD(result.mp_node) = v20;
  BYTE4(result.mp_node) = bLooseFile;
  while ( v18 )
  {
    v19 = v18;
    v21 = v20 < v18[1].m_color;
    if ( v20 >= v18[1].m_color )
      v18 = v18->mp_right;
    else
      v18 = v18->mp_left;
  }
  mp_right = v19;
  if ( v21 )
  {
    if ( v19 == looseFileMap->m_endNodeBase.mp_left )
    {
      ntl::red_black_tree<enum scr_string_t,ntl::pair<enum scr_string_t,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<enum scr_string_t,bool>>,32,8>,ntl::return_pair_first<enum scr_string_t,bool>,ntl::less<enum scr_string_t,enum scr_string_t>>::insert_node(looseFileMap, &v27, v19, (const ntl::pair<enum scr_string_t,bool> *)&result, 1, 0);
      return;
    }
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( v19->m_color || v19->mp_parent->mp_parent != v19 )
    {
      mp_right = v19->mp_left;
      if ( mp_right )
      {
        for ( j = mp_right->mp_right; j; j = j->mp_right )
          mp_right = j;
      }
      else
      {
        mp_right = v19->mp_parent;
        if ( v19 == mp_right->mp_left )
        {
          do
          {
            v24 = mp_right;
            mp_right = mp_right->mp_parent;
          }
          while ( v24 == mp_right->mp_left );
        }
      }
    }
    else
    {
      mp_right = v19->mp_right;
    }
  }
  if ( !mp_right && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( mp_right[1].m_color < v20 )
    ntl::red_black_tree<enum scr_string_t,ntl::pair<enum scr_string_t,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<enum scr_string_t,bool>>,32,8>,ntl::return_pair_first<enum scr_string_t,bool>,ntl::less<enum scr_string_t,enum scr_string_t>>::insert_node(looseFileMap, &v27, v19, (const ntl::pair<enum scr_string_t,bool> *)&result, 0, 0);
}

/*
==============
Common_Asm::Release
==============
*/
void Common_Asm::Release(ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *asmMap, ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *looseFileMap, ASM *pASM, bool bUnlockPackfileData)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v9; 
  ntl::red_black_tree_node_base *v10; 
  ntl::red_black_tree_node_base *v11; 
  ntl::red_black_tree_node_base *v12; 
  ntl::red_black_tree_node_base *v13; 
  ntl::red_black_tree_node_base *v14; 
  ntl::red_black_tree_node_base *v15; 
  ntl::red_black_tree_node_base *v16; 
  ntl::red_black_tree_node_base *v17; 
  scr_string_t m_Name; 

  if ( !asmMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 122, ASSERT_TYPE_ASSERT, "(asmMap)", (const char *)&queryFormat, "asmMap") )
    __debugbreak();
  mp_parent = asmMap->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &asmMap->m_endNodeBase;
  v9 = &asmMap->m_endNodeBase;
  v10 = mp_parent;
  while ( v10 )
  {
    if ( v10[1].m_color < pASM->m_Name )
    {
      v10 = v10->mp_right;
    }
    else
    {
      v9 = v10;
      v10 = v10->mp_left;
    }
  }
  if ( v9 != p_m_endNodeBase )
  {
    if ( pASM->m_Name < v9[1].m_color )
      v9 = &asmMap->m_endNodeBase;
    if ( v9 != p_m_endNodeBase )
    {
      v11 = &asmMap->m_endNodeBase;
      while ( mp_parent )
      {
        if ( mp_parent[1].m_color < pASM->m_Name )
        {
          mp_parent = mp_parent->mp_right;
        }
        else
        {
          v11 = mp_parent;
          mp_parent = mp_parent->mp_left;
        }
      }
      if ( v11 != p_m_endNodeBase )
      {
        v12 = &asmMap->m_endNodeBase;
        if ( pASM->m_Name >= v11[1].m_color )
          v12 = v11;
        if ( v12 != p_m_endNodeBase )
        {
          if ( !asmMap->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
            __debugbreak();
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          ntl::red_black_tree_node_base::get_next(v12);
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
            __debugbreak();
          if ( v12 == p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
            __debugbreak();
          ntl::red_black_tree_node_base::rebalance_for_erase(v12, &asmMap->m_endNodeBase.mp_parent, &asmMap->m_endNodeBase.mp_left, &asmMap->m_endNodeBase.mp_right);
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
            __debugbreak();
          *(_QWORD *)&v12->m_color = asmMap->m_freelist.m_head.mp_next;
          asmMap->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v12;
          --asmMap->m_size;
        }
      }
      if ( !looseFileMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 128, ASSERT_TYPE_ASSERT, "(looseFileMap)", (const char *)&queryFormat, "looseFileMap") )
        __debugbreak();
      v13 = looseFileMap->m_endNodeBase.mp_parent;
      v14 = &looseFileMap->m_endNodeBase;
      v15 = &looseFileMap->m_endNodeBase;
      while ( v13 )
      {
        if ( v13[1].m_color < pASM->m_Name )
        {
          v13 = v13->mp_right;
        }
        else
        {
          v15 = v13;
          v13 = v13->mp_left;
        }
      }
      if ( v15 != v14 )
      {
        if ( pASM->m_Name >= v15[1].m_color )
        {
LABEL_51:
          v16 = looseFileMap->m_endNodeBase.mp_parent;
          v17 = &looseFileMap->m_endNodeBase;
          if ( v16 )
          {
            m_Name = pASM->m_Name;
            do
            {
              if ( v16[1].m_color < m_Name )
              {
                v16 = v16->mp_right;
              }
              else
              {
                v17 = v16;
                v16 = v16->mp_left;
              }
            }
            while ( v16 );
            if ( v17 != v14 && m_Name >= v17[1].m_color )
            {
              if ( !looseFileMap->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
                __debugbreak();
              if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              ntl::red_black_tree_node_base::get_next(v17);
              if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
                __debugbreak();
              if ( v17 == v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
                __debugbreak();
              ntl::red_black_tree_node_base::rebalance_for_erase(v17, &looseFileMap->m_endNodeBase.mp_parent, &looseFileMap->m_endNodeBase.mp_left, &looseFileMap->m_endNodeBase.mp_right);
              if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
                __debugbreak();
              *(_QWORD *)&v17->m_color = looseFileMap->m_freelist.m_head.mp_next;
              looseFileMap->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v17;
              --looseFileMap->m_size;
            }
          }
          if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( *((_BYTE *)&v15[1].m_color + 4) )
            Common_Asm::Deref(pASM);
          return;
        }
        v15 = &looseFileMap->m_endNodeBase;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 130, ASSERT_TYPE_ASSERT, "(looseFile != looseFileMap->end())", (const char *)&queryFormat, "looseFile != looseFileMap->end()") )
        __debugbreak();
      goto LABEL_51;
    }
  }
}

/*
==============
Common_Asm::SetState
==============
*/
__int64 Common_Asm::SetState(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pState, int numParamsOverrideEntry, ASM_Function_Param *pParamsOverrideEntry)
{
  ASM_Transition *v10; 
  ASM_Transition *v11; 
  ASM_TransitionList pTransitionList; 

  v10 = NULL;
  ASM_TransitionList::ASM_TransitionList(&pTransitionList);
  if ( pState->m_Type == 2 )
  {
    v11 = this->CheckTransitions(this, context, pInst, pState, &pTransitionList);
    v10 = v11;
    if ( !v11 )
      return 4i64;
    pState = Common_Asm::Utils::GetState(pInst->m_pASM, v11->m_ToStateID);
    if ( pState->m_Type == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 871, ASSERT_TYPE_ASSERT, "(pState->m_Type != ASM_STATE_PASSTHROUGH)", (const char *)&queryFormat, "pState->m_Type != ASM_STATE_PASSTHROUGH") )
      __debugbreak();
  }
  Common_Asm::TerminateState(this, context, pInst, pInst->m_CurState, pState->m_ID, 0);
  Common_Asm::EnterState(this, context, pInst, pState->m_ID, v10, numParamsOverrideEntry, pParamsOverrideEntry, &pTransitionList);
  return 0i64;
}

/*
==============
Common_Asm::SetState
==============
*/
ASM_Error Common_Asm::SetState(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t stateName, int numParamsOverrideEntry, ASM_Function_Param *pParamsOverrideEntry)
{
  const ASM_State *v9; 

  v9 = this->GetStateByName(this, pInst->m_pASM, (unsigned int)stateName);
  if ( v9 )
    return Common_Asm::SetState(this, context, pInst, v9, numParamsOverrideEntry, pParamsOverrideEntry);
  else
    return 3;
}

/*
==============
Common_Asm::ShouldLooseFileLoad
==============
*/
bool Common_Asm::ShouldLooseFileLoad()
{
  const dvar_t *v0; 
  const dvar_t *v1; 

  v0 = DCONST_DVARINT_developer;
  if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.integer )
    return 0;
  v1 = DCONST_DVARBOOL_developer_looseScriptLoadConsole;
  if ( !DCONST_DVARBOOL_developer_looseScriptLoadConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_looseScriptLoadConsole") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled;
}

/*
==============
Common_Asm::Shutdown
==============
*/
void Common_Asm::Shutdown(ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *asmMap, ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *looseFileMap)
{
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *v7; 
  ntl::red_black_tree_node_base *v8; 
  ntl::red_black_tree_node_base *v9; 
  ntl::red_black_tree_node_base *v10; 
  ntl::red_black_tree_node_base *v11; 

  if ( !asmMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 193, ASSERT_TYPE_ASSERT, "(asmMap)", (const char *)&queryFormat, "asmMap") )
    __debugbreak();
  if ( !looseFileMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 196, ASSERT_TYPE_ASSERT, "(looseFileMap)", (const char *)&queryFormat, "looseFileMap") )
    __debugbreak();
  mp_left = looseFileMap->m_endNodeBase.mp_left;
  p_m_endNodeBase = &looseFileMap->m_endNodeBase;
  if ( mp_left != &looseFileMap->m_endNodeBase )
  {
    while ( 1 )
    {
      if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( !*((_BYTE *)&mp_left[1].m_color + 4) )
        goto LABEL_26;
      mp_parent = asmMap->m_endNodeBase.mp_parent;
      v7 = &asmMap->m_endNodeBase;
      while ( mp_parent )
      {
        if ( mp_parent[1].m_color < mp_left[1].m_color )
        {
          mp_parent = mp_parent->mp_right;
        }
        else
        {
          v7 = mp_parent;
          mp_parent = mp_parent->mp_left;
        }
      }
      if ( v7 == &asmMap->m_endNodeBase )
        goto LABEL_20;
      if ( mp_left[1].m_color < v7[1].m_color )
        break;
LABEL_22:
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      Common_Asm::Deref((ASM *)v7[1].mp_parent);
LABEL_26:
      mp_left = ntl::red_black_tree_node_base::get_next(mp_left);
      if ( mp_left == p_m_endNodeBase )
        goto LABEL_27;
    }
    v7 = &asmMap->m_endNodeBase;
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 202, ASSERT_TYPE_ASSERT, "(asmIter != asmMap->end())", (const char *)&queryFormat, "asmIter != asmMap->end()") )
      __debugbreak();
    goto LABEL_22;
  }
LABEL_27:
  if ( looseFileMap->m_size )
  {
    v8 = looseFileMap->m_endNodeBase.mp_parent;
    if ( v8 )
    {
      do
      {
        ntl::red_black_tree<enum scr_string_t,ntl::pair<enum scr_string_t,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<enum scr_string_t,bool>>,32,8>,ntl::return_pair_first<enum scr_string_t,bool>,ntl::less<enum scr_string_t,enum scr_string_t>>::erase_tree(looseFileMap, (ntl::red_black_tree_node<ntl::pair<enum scr_string_t,bool> > *)v8->mp_right);
        v9 = v8->mp_left;
        *(_QWORD *)&v8->m_color = looseFileMap->m_freelist.m_head.mp_next;
        looseFileMap->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v8;
        v8 = v9;
      }
      while ( v9 );
    }
    looseFileMap->m_endNodeBase.mp_parent = NULL;
    looseFileMap->m_endNodeBase.mp_left = p_m_endNodeBase;
    looseFileMap->m_endNodeBase.mp_right = p_m_endNodeBase;
    looseFileMap->m_size = 0i64;
  }
  if ( asmMap->m_size )
  {
    v10 = asmMap->m_endNodeBase.mp_parent;
    if ( v10 )
    {
      do
      {
        ntl::red_black_tree<enum scr_string_t,ntl::pair<enum scr_string_t,ASM *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<enum scr_string_t,ASM *>>,32,8>,ntl::return_pair_first<enum scr_string_t,ASM *>,ntl::less<enum scr_string_t,enum scr_string_t>>::erase_tree(asmMap, (ntl::red_black_tree_node<ntl::pair<enum scr_string_t,ASM *> > *)v10->mp_right);
        v11 = v10->mp_left;
        *(_QWORD *)&v10->m_color = asmMap->m_freelist.m_head.mp_next;
        asmMap->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v10;
        v10 = v11;
      }
      while ( v11 );
    }
    asmMap->m_endNodeBase.mp_parent = NULL;
    asmMap->m_endNodeBase.mp_left = &asmMap->m_endNodeBase;
    asmMap->m_endNodeBase.mp_right = &asmMap->m_endNodeBase;
    asmMap->m_size = 0i64;
  }
}

/*
==============
Common_Asm::StateInterruptsSubtrees
==============
*/
bool Common_Asm::StateInterruptsSubtrees(Common_Asm *this, const ASM_Instance *pInst, const ASM_State *pCurState)
{
  return 0;
}

/*
==============
Common_Asm::Terminate
==============
*/
void Common_Asm::Terminate(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, ASM_Instance *pParentInst, bool forceTerminateFunc)
{
  while ( pInst->m_NumSubtrees > 0 )
    Common_Asm::Terminate(this, context, pInst->m_Subtrees[0], pInst, forceTerminateFunc);
  Common_Asm::TerminateState(this, context, pInst, pInst->m_CurState, -1, forceTerminateFunc);
  Common_Asm::ClearEvents(this, pInst);
  if ( pParentInst )
    ASM_Instance::RemoveSubtree(pParentInst, pInst);
}

/*
==============
Common_Asm::Terminate
==============
*/
void Common_Asm::Terminate(Common_Asm *this, const ASM_Context *context, int entNum)
{
  ASM_Instance *v6; 

  v6 = (ASM_Instance *)((__int64 (__fastcall *)(Common_Asm *))this->GetInstance)(this);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 1188, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  Common_Asm::TerminateAllStates(this, context, v6);
  this->FreeInstance(this, context, entNum);
}

/*
==============
Common_Asm::TerminateAllStates
==============
*/
void Common_Asm::TerminateAllStates(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst)
{
  int v3; 
  ASM_Instance **m_Subtrees; 
  const ASM *m_pASM; 
  int m_CurState; 
  const ASM_State *State; 
  const char *v11; 
  const char *v12; 
  scr_string_t m_ExitNotify; 
  const ASM *v14; 
  int i; 
  const ASM_LogicGroup *LogicGroup; 
  BOOL pParam; 

  v3 = 0;
  if ( pInst->m_NumSubtrees > 0 )
  {
    m_Subtrees = pInst->m_Subtrees;
    do
    {
      Common_Asm::TerminateAllStates(this, context, *m_Subtrees);
      ++v3;
      ++m_Subtrees;
    }
    while ( v3 < pInst->m_NumSubtrees );
  }
  m_pASM = pInst->m_pASM;
  m_CurState = pInst->m_CurState;
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 490, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  State = Common_Asm::Utils::GetState(m_pASM, m_CurState);
  v11 = SL_ConvertToString(State->m_Name);
  v12 = j_va("%s %s", "ASM_TermState", v11);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, v12);
  this->NotifyStateFinished(this, pInst->m_EntNum, (const scr_string_t)State->m_Name);
  LOBYTE(pParam) = 0;
  this->TerminateFunc(this, State, context, m_pASM, pInst, pParam);
  m_ExitNotify = State->m_ExitNotify;
  if ( m_ExitNotify )
    Common_Asm::FireEphemeralEvent(this, context, pInst, m_ExitNotify, (const scr_string_t)scr_const.end, NULL);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_LogicTerminates");
  v14 = pInst->m_pASM;
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 418, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  for ( i = State->m_LogicGroupID; i != -1; i = LogicGroup->m_ParentID )
  {
    if ( Common_Asm::Utils::LogicGroup_IsAncestorOf(v14, i, -1) )
      break;
    LogicGroup = Common_Asm::Utils::GetLogicGroup(v14, i);
    if ( LogicGroup->m_TerminateFunc.m_FuncID != -1 )
      this->RunFunction_asm(this, context, pInst, (const scr_string_t)v14->m_Name, pInst->m_EntNum, &LogicGroup->m_TerminateFunc);
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
}

/*
==============
Common_Asm::TerminateFunc
==============
*/
void Common_Asm::TerminateFunc(Common_Asm *this, const ASM_State *pState, const ASM_Context *context, const ASM *const pASM, ASM_Instance *pInst)
{
  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 476, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 477, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 478, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( pState->m_TerminateFunc.m_FuncID != -1 )
    this->RunFunction_asm_state(this, context, pInst, (const scr_string_t)pASM->m_Name, pInst->m_EntNum, pState->m_Name, &pState->m_TerminateFunc);
}

/*
==============
Common_Asm::TerminateState
==============
*/
void Common_Asm::TerminateState(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, int fromStateID, int toStateID, bool forceTerminateFunc)
{
  const ASM *m_pASM; 
  const ASM_State *State; 
  const char *v12; 
  const char *v13; 
  scr_string_t m_ExitNotify; 
  const ASM_State *v15; 
  const ASM *v16; 
  int m_LogicGroupID; 
  int i; 
  const ASM_LogicGroup *LogicGroup; 
  BOOL pParam; 

  m_pASM = pInst->m_pASM;
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 490, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  State = Common_Asm::Utils::GetState(m_pASM, fromStateID);
  v12 = SL_ConvertToString(State->m_Name);
  v13 = j_va("%s %s", "ASM_TermState", v12);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, v13);
  this->NotifyStateFinished(this, pInst->m_EntNum, (const scr_string_t)State->m_Name);
  LOBYTE(pParam) = forceTerminateFunc;
  this->TerminateFunc(this, State, context, m_pASM, pInst, pParam);
  m_ExitNotify = State->m_ExitNotify;
  v15 = NULL;
  if ( m_ExitNotify )
    Common_Asm::FireEphemeralEvent(this, context, pInst, m_ExitNotify, (const scr_string_t)scr_const.end, NULL);
  if ( toStateID != -1 )
    v15 = Common_Asm::Utils::GetState(m_pASM, toStateID);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_LogicTerminates");
  v16 = pInst->m_pASM;
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 418, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( v15 )
    m_LogicGroupID = v15->m_LogicGroupID;
  else
    m_LogicGroupID = -1;
  for ( i = State->m_LogicGroupID; i != -1; i = LogicGroup->m_ParentID )
  {
    if ( Common_Asm::Utils::LogicGroup_IsAncestorOf(v16, i, m_LogicGroupID) )
      break;
    LogicGroup = Common_Asm::Utils::GetLogicGroup(v16, i);
    if ( LogicGroup->m_TerminateFunc.m_FuncID != -1 )
      this->RunFunction_asm(this, context, pInst, (const scr_string_t)v16->m_Name, pInst->m_EntNum, &LogicGroup->m_TerminateFunc);
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
}

/*
==============
Common_Asm::Tick
==============
*/
_BOOL8 Common_Asm::Tick(Common_Asm *this, const ASM_Context *context, int entNum, bool bCheckTransitionsOnly, bool bForceUpdateOnNewState)
{
  char *Value; 
  int *v10; 
  _QWORD *v11; 
  char *v12; 
  int *v13; 
  unsigned __int64 v14; 
  ThreadContext CurrentThreadContext; 
  ASM_Instance *v16; 
  bool v17; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 

  Value = (char *)Sys_GetValue(0);
  v10 = (int *)(Value + 13536);
  if ( (unsigned int)(*((_DWORD *)Value + 3384) + 1) >= 3 )
  {
    v22 = 3;
    v20 = *((_DWORD *)Value + 3384) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
  if ( (unsigned int)++*v10 >= 3 )
  {
    LODWORD(v21) = 3;
    LODWORD(v19) = *v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v19, v21) )
      __debugbreak();
  }
  v11 = Value + 2088;
  v12 = Value + 40;
  if ( *v11 < (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v11 += 8i64;
  if ( *v11 >= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v11 = v10;
  if ( *v11 <= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v13 = &v10[*v10 + 2];
  v14 = __rdtsc();
  *v13 = v14;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 286, NULL, 0);
  v16 = this->GetInstance(this, context, (unsigned int)entNum);
  v17 = Common_Asm::Tick(this, context, v16, bCheckTransitionsOnly, bForceUpdateOnNewState);
  Profile_EndInternal(NULL);
  return v17;
}

/*
==============
Common_Asm::Tick
==============
*/
__int64 Common_Asm::Tick(Common_Asm *this, const ASM_Context *context, ASM_Instance *pInst, bool bCheckTransitionsOnly, bool bForceUpdateOnNewState)
{
  const ASM *m_pASM; 
  const ASM_State *State; 
  const char *v10; 
  const char *v11; 
  ASM_Transition *v12; 
  unsigned __int8 v13; 
  int v14; 
  ASM_Instance **m_Subtrees; 
  ASM_TransitionList pTransitionList; 

  ASM_TransitionList::ASM_TransitionList(&pTransitionList);
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 319, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  m_pASM = pInst->m_pASM;
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 322, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  State = Common_Asm::Utils::GetState(m_pASM, pInst->m_CurState);
  if ( !State && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm.cpp", 325, ASSERT_TYPE_ASSERT, "(pCurState)", (const char *)&queryFormat, "pCurState") )
    __debugbreak();
  v10 = SL_ConvertToString(State->m_Name);
  v11 = j_va("%s %s", "ASM_CheckTransitions", v10);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, v11);
  v12 = this->CheckTransitions(this, context, pInst, State, &pTransitionList);
  Sys_ProfEndNamedEvent();
  v13 = 0;
  v14 = 0;
  if ( !v12 || (Common_Asm::TerminateState(this, context, pInst, pInst->m_CurState, v12->m_ToStateID, 0), Common_Asm::EnterState(this, context, pInst, v12->m_ToStateID, v12, 0, NULL, &pTransitionList), v13 = 1, State = Common_Asm::Utils::GetState(m_pASM, pInst->m_CurState), bForceUpdateOnNewState) )
  {
    if ( this->UpdateState(this, context, pInst, State) )
      v13 = 1;
  }
  if ( (!bCheckTransitionsOnly || v12) && pInst->m_NumSubtrees > 0 )
  {
    m_Subtrees = pInst->m_Subtrees;
    do
    {
      Common_Asm::Tick(this, context, *m_Subtrees, 0, 0);
      ++v14;
      ++m_Subtrees;
    }
    while ( v14 < pInst->m_NumSubtrees );
  }
  return v13;
}

