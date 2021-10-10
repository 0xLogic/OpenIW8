/*
==============
Ai_Asm::RunChooseAnimFunction_with_params
==============
*/

void __fastcall Ai_Asm::RunChooseAnimFunction_with_params(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin, int *outEntryIndex)
{
  ?RunChooseAnimFunction_with_params@Ai_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@H2HHPEAUASM_Function_Param@@_NPEAH@Z(this, context, pInst, asmName, entNum, stateName, funcID, numParams, pParams, bBuiltin, outEntryIndex);
}

/*
==============
Ai_Asm::RunTransitionFunction
==============
*/

bool __fastcall Ai_Asm::RunTransitionFunction(Ai_Asm *this, const ASM_Context *context, const ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, const scr_string_t toStateName, const ASM_Transition *pTransition)
{
  return ?RunTransitionFunction@Ai_Asm@@UEAA_NPEBUASM_Context@@PEBUASM_Instance@@W4scr_string_t@@H22PEBUASM_Transition@@@Z(this, context, pInst, asmName, entNum, stateName, toStateName, pTransition);
}

/*
==============
Ai_Asm::GetEphemeralEventParamTableIDByEnt
==============
*/

unsigned int __fastcall Ai_Asm::GetEphemeralEventParamTableIDByEnt(Ai_Asm *this, int entNum)
{
  return ?GetEphemeralEventParamTableIDByEnt@Ai_Asm@@QEAAIH@Z(this, entNum);
}

/*
==============
Ai_Asm::ValidateEphemeralEventTablesNotInUse
==============
*/

void __fastcall Ai_Asm::ValidateEphemeralEventTablesNotInUse(Ai_Asm *this)
{
  ?ValidateEphemeralEventTablesNotInUse@Ai_Asm@@UEBAXXZ(this);
}

/*
==============
Ai_Asm::FreeMemory
==============
*/

void Ai_Asm::FreeMemory(void)
{
  ?FreeMemory@Ai_Asm@@SAXXZ();
}

/*
==============
Ai_Asm::UpdateState
==============
*/

bool __fastcall Ai_Asm::UpdateState(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pCurState)
{
  return ?UpdateState@Ai_Asm@@UEAA_NPEBUASM_Context@@PEAUASM_Instance@@PEBUASM_State@@@Z(this, context, pInst, pCurState);
}

/*
==============
Ai_Asm::RunServices
==============
*/

void __fastcall Ai_Asm::RunServices(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM *pASM, int entNum)
{
  ?RunServices@Ai_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@PEBUASM@@H@Z(this, context, pInst, pASM, entNum);
}

/*
==============
Ai_Asm::RunChooseAnimFunction
==============
*/

void __fastcall Ai_Asm::RunChooseAnimFunction(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, const ASM_Function *pFunc, int *outEntryIndex)
{
  ?RunChooseAnimFunction@Ai_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@H2PEBUASM_Function@@PEAH@Z(this, context, pInst, asmName, entNum, stateName, pFunc, outEntryIndex);
}

/*
==============
Ai_Asm::FreeInstance
==============
*/

void __fastcall Ai_Asm::FreeInstance(Ai_Asm *this, const ASM_Context *context, int entNum)
{
  ?FreeInstance@Ai_Asm@@UEAAXPEBUASM_Context@@H@Z(this, context, entNum);
}

/*
==============
Ai_Asm::AllocEphemeralTableIndex
==============
*/

unsigned __int8 __fastcall Ai_Asm::AllocEphemeralTableIndex(Ai_Asm *this, ASM_Instance *pInst)
{
  return ?AllocEphemeralTableIndex@Ai_Asm@@UEBAEPEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
Ai_Asm::ClearEphemeralEvents
==============
*/

void __fastcall Ai_Asm::ClearEphemeralEvents(Ai_Asm *this, int entNum)
{
  ?ClearEphemeralEvents@Ai_Asm@@QEAAXH@Z(this, entNum);
}

/*
==============
Ai_Asm::GetEphemeralEventData
==============
*/

bool __fastcall Ai_Asm::GetEphemeralEventData(Ai_Asm *this, int entNum, ASM_Instance *pInst, scr_string_t eventName, scr_string_t eventTag, unsigned int *outVar, int *outParamId)
{
  return ?GetEphemeralEventData@Ai_Asm@@QEAA_NHPEAUASM_Instance@@W4scr_string_t@@1PEAIPEAH@Z(this, entNum, pInst, eventName, eventTag, outVar, outParamId);
}

/*
==============
AI_ASM_FireEvent
==============
*/

void __fastcall AI_ASM_FireEvent(ASM_Instance *pInst, const scr_string_t eventName, VariableValue *pParam)
{
  ?AI_ASM_FireEvent@@YAXPEAUASM_Instance@@W4scr_string_t@@PEAUVariableValue@@@Z(pInst, eventName, pParam);
}

/*
==============
Ai_Asm::RunFunction_asm_with_params
==============
*/

void __fastcall Ai_Asm::RunFunction_asm_with_params(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin)
{
  ?RunFunction_asm_with_params@Ai_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@HHHPEAUASM_Function_Param@@_N@Z(this, context, pInst, asmName, entNum, funcID, numParams, pParams, bBuiltin);
}

/*
==============
Ai_Asm::MyChanges
==============
*/

void Ai_Asm::MyChanges(void)
{
  ?MyChanges@Ai_Asm@@SAXXZ();
}

/*
==============
Ai_Asm::GetEventParamTableID
==============
*/

unsigned int __fastcall Ai_Asm::GetEventParamTableID(Ai_Asm *this, ASM_Instance *pInst)
{
  return ?GetEventParamTableID@Ai_Asm@@UEBAIPEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
Ai_Asm::~Ai_Asm
==============
*/

void __fastcall Ai_Asm::~Ai_Asm(Ai_Asm *this)
{
  ??1Ai_Asm@@UEAA@XZ(this);
}

/*
==============
Ai_Asm::ClearEphemeralEventTables
==============
*/

void __fastcall Ai_Asm::ClearEphemeralEventTables(Ai_Asm *this)
{
  ?ClearEphemeralEventTables@Ai_Asm@@UEBAXXZ(this);
}

/*
==============
Ai_Asm::NotifyAllStatesFinished
==============
*/

void __fastcall Ai_Asm::NotifyAllStatesFinished(Ai_Asm *this, ASM_Instance *pInst)
{
  ?NotifyAllStatesFinished@Ai_Asm@@QEAAXPEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
AI_ASM_FireEvent
==============
*/

void __fastcall AI_ASM_FireEvent(ASM_Instance *pInst, const scr_string_t eventName)
{
  ?AI_ASM_FireEvent@@YAXPEAUASM_Instance@@W4scr_string_t@@@Z(pInst, eventName);
}

/*
==============
Ai_Asm::GetLooseFileMap
==============
*/

ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *__fastcall Ai_Asm::GetLooseFileMap()
{
  return ?GetLooseFileMap@Ai_Asm@@CAPEAV?$fixed_map@W4scr_string_t@@_N$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@ntl@@XZ();
}

/*
==============
Ai_Asm::GetAssetMap
==============
*/

ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *__fastcall Ai_Asm::GetAssetMap(Ai_Asm *this)
{
  return ?GetAssetMap@Ai_Asm@@UEBAPEAV?$fixed_map@W4scr_string_t@@PEAUASM@@$0CA@U?$less@W4scr_string_t@@W41@@ntl@@@ntl@@XZ(this);
}

/*
==============
Ai_Asm::Shutdown
==============
*/

void Ai_Asm::Shutdown(void)
{
  ?Shutdown@Ai_Asm@@SAXXZ();
}

/*
==============
Ai_Asm::TerminateFunc
==============
*/

void __fastcall Ai_Asm::TerminateFunc(Ai_Asm *this, const ASM_State *pState, const ASM_Context *context, const ASM *const pASM, ASM_Instance *pInst, bool forceTerminateFunc)
{
  ?TerminateFunc@Ai_Asm@@UEAAXPEBUASM_State@@PEBUASM_Context@@QEBUASM@@PEAUASM_Instance@@_N@Z(this, pState, context, pASM, pInst, forceTerminateFunc);
}

/*
==============
Ai_Asm::GetEphemeralEventParamTableID
==============
*/

unsigned int __fastcall Ai_Asm::GetEphemeralEventParamTableID(Ai_Asm *this, ASM_Instance *pInst)
{
  return ?GetEphemeralEventParamTableID@Ai_Asm@@UEBAIPEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
Ai_Asm::NotifyStateFinished
==============
*/

void __fastcall Ai_Asm::NotifyStateFinished(Ai_Asm *this, int entNum, const scr_string_t stateName)
{
  ?NotifyStateFinished@Ai_Asm@@UEAAXHW4scr_string_t@@@Z(this, entNum, stateName);
}

/*
==============
Ai_Asm::GetMemorySize
==============
*/

unsigned int __fastcall Ai_Asm::GetMemorySize()
{
  return ?GetMemorySize@Ai_Asm@@SAIXZ();
}

/*
==============
Ai_Asm::Singleton
==============
*/

Ai_Asm *__fastcall Ai_Asm::Singleton()
{
  return ?Singleton@Ai_Asm@@SAPEAV1@XZ();
}

/*
==============
Ai_Asm::Register
==============
*/

void __fastcall Ai_Asm::Register(ASM *pASM, bool bLooseFile)
{
  ?Register@Ai_Asm@@SAXPEAUASM@@_N@Z(pASM, bLooseFile);
}

/*
==============
Ai_Asm::Ai_Asm
==============
*/

void __fastcall Ai_Asm::Ai_Asm(Ai_Asm *this)
{
  ??0Ai_Asm@@QEAA@XZ(this);
}

/*
==============
Ai_Asm::RunFunction_asm_state
==============
*/

void __fastcall Ai_Asm::RunFunction_asm_state(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, const ASM_Function *pFunc)
{
  ?RunFunction_asm_state@Ai_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@H2PEBUASM_Function@@@Z(this, context, pInst, asmName, entNum, stateName, pFunc);
}

/*
==============
Ai_Asm::DebugRender
==============
*/

void __fastcall Ai_Asm::DebugRender(Ai_Asm *this, const ASM_Instance *pInst, vec3_t *drawPos, int dTime)
{
  ?DebugRender@Ai_Asm@@UEAAXPEBUASM_Instance@@Tvec3_t@@H@Z(this, pInst, drawPos, dTime);
}

/*
==============
Ai_Asm::Release
==============
*/

void __fastcall Ai_Asm::Release(ASM *pASM, bool bUnlockPackfileData)
{
  ?Release@Ai_Asm@@SAXPEAUASM@@_N@Z(pASM, bUnlockPackfileData);
}

/*
==============
Ai_Asm::CheckAssetNotUsed
==============
*/

void __fastcall Ai_Asm::CheckAssetNotUsed(Ai_Asm *this, ASM *pASM)
{
  ?CheckAssetNotUsed@Ai_Asm@@QEAAXPEAUASM@@@Z(this, pASM);
}

/*
==============
Ai_Asm::EnterStateFunc
==============
*/

void __fastcall Ai_Asm::EnterStateFunc(Ai_Asm *this, const ASM_Instance *pInst, const ASM_State *pState)
{
  ?EnterStateFunc@Ai_Asm@@UEAAXPEBUASM_Instance@@PEBUASM_State@@@Z(this, pInst, pState);
}

/*
==============
Ai_Asm::ShouldProcessNotetracks
==============
*/

bool __fastcall Ai_Asm::ShouldProcessNotetracks(Ai_Asm *this, int entNum)
{
  return ?ShouldProcessNotetracks@Ai_Asm@@QEAA_NH@Z(this, entNum);
}

/*
==============
Ai_Asm::GetGameTime
==============
*/

int __fastcall Ai_Asm::GetGameTime(Ai_Asm *this)
{
  return ?GetGameTime@Ai_Asm@@UEBAHXZ(this);
}

/*
==============
Ai_Asm::Init
==============
*/

void __fastcall Ai_Asm::Init(bool bServerThreadStartup)
{
  ?Init@Ai_Asm@@SAX_N@Z(bServerThreadStartup);
}

/*
==============
Ai_Asm::GetEphemeralEventTableByIndex
==============
*/

ASM_EphemeralEvent *__fastcall Ai_Asm::GetEphemeralEventTableByIndex(Ai_Asm *this, int tableIndex)
{
  return ?GetEphemeralEventTableByIndex@Ai_Asm@@QEAAPEAUASM_EphemeralEvent@@H@Z(this, tableIndex);
}

/*
==============
Ai_Asm::AllocateMemory
==============
*/

void __fastcall Ai_Asm::AllocateMemory(HunkUser *hunkUser)
{
  ?AllocateMemory@Ai_Asm@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
Ai_Asm::ProcessNotetrack
==============
*/

void __fastcall Ai_Asm::ProcessNotetrack(Ai_Asm *this, int entNum, scr_string_t notifyName, scr_string_t notetrackName)
{
  ?ProcessNotetrack@Ai_Asm@@QEAAXHW4scr_string_t@@0@Z(this, entNum, notifyName, notetrackName);
}

/*
==============
Ai_Asm::GetEventParamTableIDByEnt
==============
*/

unsigned int __fastcall Ai_Asm::GetEventParamTableIDByEnt(Ai_Asm *this, int entNum)
{
  return ?GetEventParamTableIDByEnt@Ai_Asm@@QEAAIH@Z(this, entNum);
}

/*
==============
Ai_Asm::RunFunction_asm_state_with_params
==============
*/

void __fastcall Ai_Asm::RunFunction_asm_state_with_params(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin)
{
  ?RunFunction_asm_state_with_params@Ai_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@H2HHPEAUASM_Function_Param@@_N@Z(this, context, pInst, asmName, entNum, stateName, funcID, numParams, pParams, bBuiltin);
}

/*
==============
Ai_Asm::RunFunction_asm
==============
*/

void __fastcall Ai_Asm::RunFunction_asm(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const ASM_Function *pFunc)
{
  ?RunFunction_asm@Ai_Asm@@UEAAXPEBUASM_Context@@PEAUASM_Instance@@W4scr_string_t@@HPEBUASM_Function@@@Z(this, context, pInst, asmName, entNum, pFunc);
}

/*
==============
Ai_Asm::GetEventData
==============
*/

bool __fastcall Ai_Asm::GetEventData(Ai_Asm *this, int entNum, ASM_Instance *pInst, scr_string_t eventName, unsigned int *outVar, int *outParamId)
{
  return ?GetEventData@Ai_Asm@@QEAA_NHPEAUASM_Instance@@W4scr_string_t@@PEAIPEAH@Z(this, entNum, pInst, eventName, outVar, outParamId);
}

/*
==============
Ai_Asm::ProcessFlags
==============
*/

void __fastcall Ai_Asm::ProcessFlags(Ai_Asm *this, ASM_Instance *pInst, const ASM_State *pState, const ASM_State *pPrevState, const ASM_Transition *pTransition)
{
  ?ProcessFlags@Ai_Asm@@UEAAXPEAUASM_Instance@@PEBUASM_State@@1PEBUASM_Transition@@@Z(this, pInst, pState, pPrevState, pTransition);
}

/*
==============
Ai_Asm::GetHistoryObject
==============
*/

ASM_History *__fastcall Ai_Asm::GetHistoryObject(Ai_Asm *this, const ASM_Instance *pInst)
{
  return ?GetHistoryObject@Ai_Asm@@UEAAPEAVASM_History@@PEBUASM_Instance@@@Z(this, pInst);
}

/*
==============
Ai_Asm::PushParamsToScript
==============
*/

int __fastcall Ai_Asm::PushParamsToScript(scrContext_t *scrContext, int numParams, ASM_Function_Param *pParams)
{
  return ?PushParamsToScript@Ai_Asm@@SAHAEAUscrContext_t@@HPEAUASM_Function_Param@@@Z(scrContext, numParams, pParams);
}

/*
==============
Ai_Asm::irand
==============
*/

int __fastcall Ai_Asm::irand(Ai_Asm *this, const ASM_Instance *pInst, int min, int max, unsigned int *holdrand)
{
  return ?irand@Ai_Asm@@UEBAHPEBUASM_Instance@@HHPEAI@Z(this, pInst, min, max, holdrand);
}

/*
==============
Ai_Asm::Ai_Asm
==============
*/
void Ai_Asm::Ai_Asm(Ai_Asm *this)
{
  Common_Asm::Common_Asm(this);
  this->m_MaxPrimaryInstances = 64;
  this->__vftable = (Ai_Asm_vtbl *)&Ai_Asm::`vftable';
  this->m_MaxInstances = 256;
  this->m_MaxEphemeralTables = 64;
  *(_QWORD *)&this->m_MaxSubtreesPerInstance = 4i64;
  this->m_SupportsEventParamTableOffsets = 1;
  this->m_ChooseAnimReturnMode = SCRIPT;
}

/*
==============
Ai_Asm::~Ai_Asm
==============
*/
void Ai_Asm::~Ai_Asm(Ai_Asm *this)
{
  this->__vftable = (Ai_Asm_vtbl *)&Ai_Asm::`vftable';
  Common_Asm::~Common_Asm(this);
}

/*
==============
AI_ASM_FireEvent
==============
*/
void AI_ASM_FireEvent(ASM_Instance *pInst, const scr_string_t eventName)
{
  AI_ASM_FireEvent(pInst, eventName, NULL);
}

/*
==============
AI_ASM_FireEvent
==============
*/
void AI_ASM_FireEvent(ASM_Instance *pInst, const scr_string_t eventName, VariableValue *pParam)
{
  const scr_string_t **v4; 
  unsigned int v7; 

  v4 = s_aiAsmIgnoreEventNames;
  v7 = 0;
  while ( eventName != **v4 )
  {
    ++v7;
    ++v4;
    if ( v7 >= 6 )
    {
      if ( !Ai_Asm::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 279, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      Common_Asm::FireEvent(Ai_Asm::ms_instance, pInst, eventName, pParam);
      return;
    }
  }
}

/*
==============
Ai_Asm::AllocEphemeralTableIndex
==============
*/
unsigned __int8 Ai_Asm::AllocEphemeralTableIndex(Ai_Asm *this, ASM_Instance *pInst)
{
  int m_MaxEphemeralTables; 
  unsigned __int8 result; 

  m_MaxEphemeralTables = this->m_MaxEphemeralTables;
  result = 0;
  if ( m_MaxEphemeralTables <= 0 )
    return -1;
  while ( Ai_Asm::ms_aiASMEphemeralEventTables[result].m_bInUse )
  {
    if ( ++result >= m_MaxEphemeralTables )
      return -1;
  }
  Ai_Asm::ms_aiASMEphemeralEventTables[result].m_bInUse = 1;
  return result;
}

/*
==============
Ai_Asm::AllocateMemory
==============
*/
void Ai_Asm::AllocateMemory(HunkUser *hunkUser)
{
  char *v1; 

  v1 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 0x28ui64, 8ui64, "Ai_Asm::AllocateMemory");
  *(_QWORD *)v1 = 0i64;
  *((_QWORD *)v1 + 1) = 0i64;
  *((_QWORD *)v1 + 2) = 0i64;
  *((_QWORD *)v1 + 3) = 0i64;
  *((_QWORD *)v1 + 4) = 0i64;
  Common_Asm::Common_Asm((Common_Asm *)v1);
  *((_DWORD *)v1 + 2) = 64;
  *(_QWORD *)v1 = &Ai_Asm::`vftable';
  *((_DWORD *)v1 + 3) = 256;
  *((_DWORD *)v1 + 4) = 64;
  *(_QWORD *)(v1 + 20) = 4i64;
  v1[28] = 1;
  v1[32] = 0;
  Ai_Asm::ms_instance = (Ai_Asm *)v1;
  Ai_Asm::InstanceMap_Init((Ai_Asm *)v1);
}

/*
==============
Ai_Asm::CheckAssetNotUsed
==============
*/
void Ai_Asm::CheckAssetNotUsed(Ai_Asm *this, ASM *pASM)
{
  ntl::map<int,ASM_Instance *,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>,ntl::less<int,int> > *InstanceMap; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ASM_Instance *mp_parent; 
  int m_EntNum; 
  const char *v9; 
  int v10; 
  const char *v11; 
  __int64 v12; 

  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 740, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  InstanceMap = Ai_Asm::GetInstanceMap(this);
  if ( !InstanceMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 743, ASSERT_TYPE_ASSERT, "(instanceMap)", (const char *)&queryFormat, "instanceMap") )
    __debugbreak();
  mp_left = InstanceMap->m_endNodeBase.mp_left;
  for ( i = &InstanceMap->m_endNodeBase; mp_left != i; mp_left = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(mp_left) )
  {
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_parent = (ASM_Instance *)mp_left[1].mp_parent;
    if ( mp_parent->m_pASM == pASM )
    {
      m_EntNum = mp_parent->m_EntNum;
      v9 = SL_ConvertToString(pASM->m_Name);
      LODWORD(v12) = m_EntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 748, ASSERT_TYPE_ASSERT, "(pInst->m_pASM != pASM)", "%s\n\tReleasing ASM %s while it is still being used by ent %d!", "pInst->m_pASM != pASM", v9, v12) )
        __debugbreak();
    }
    if ( ASM_Instance::HasSubtree_r(mp_parent, pASM) )
    {
      v10 = mp_parent->m_EntNum;
      v11 = SL_ConvertToString(pASM->m_Name);
      LODWORD(v12) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 749, ASSERT_TYPE_ASSERT, "(!pInst->HasSubtree_r( pASM ))", "%s\n\tReleasing ASM %s while it is still being used as a subtree by ent %d!", "!pInst->HasSubtree_r( pASM )", v11, v12) )
        __debugbreak();
    }
  }
}

/*
==============
Ai_Asm::ClearEphemeralEventTables
==============
*/
void Ai_Asm::ClearEphemeralEventTables(Ai_Asm *this)
{
  int v1; 
  bool *p_m_bInUse; 

  v1 = 0;
  if ( this->m_MaxEphemeralTables > 0 )
  {
    p_m_bInUse = &Ai_Asm::ms_aiASMEphemeralEventTables[0].m_bInUse;
    do
    {
      *p_m_bInUse = 0;
      p_m_bInUse += 100;
      ++v1;
    }
    while ( v1 < this->m_MaxEphemeralTables );
  }
}

/*
==============
Ai_Asm::ClearEphemeralEvents
==============
*/
void Ai_Asm::ClearEphemeralEvents(Ai_Asm *this, int entNum)
{
  ASM_Instance *Instance; 

  Instance = Ai_Asm::GetInstance(this, NULL, entNum);
  Common_Asm::ClearEphemeralEventsByInstance(this, Instance);
}

/*
==============
Ai_Asm::DebugRender
==============
*/
void Ai_Asm::DebugRender(Ai_Asm *this, const ASM_Instance *pInst, vec3_t *drawPos, int dTime)
{
  const dvar_t *v7; 
  int integer; 
  bool v11; 
  const dvar_t *v12; 
  double v13; 
  const ASM_EphemeralEvent *EphemeralEventTable; 
  int Int_Internal_DebugName; 
  float v16; 
  const dvar_t *v17; 
  gentity_s *v18; 
  scr_string_t AnimsetName; 
  unsigned int animData; 
  const char *v21; 
  float v22; 
  float v23; 
  char *fmt; 
  vec3_t xyz; 
  char dest[128]; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 904, ASSERT_TYPE_ASSERT, "( pInst )", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  v7 = DVARINT_ai_debugAsm;
  if ( !DVARINT_ai_debugAsm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugAsm") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  if ( integer )
  {
    _XMM2 = 0i64;
    __asm { vroundss xmm2, xmm2, xmm1, 2 }
    if ( integer == 1 )
    {
      v11 = 0;
    }
    else
    {
      if ( integer == 2 )
      {
        v12 = DVARINT_ai_debugEntIndex;
        if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        if ( v12->current.integer == pInst->m_EntNum )
        {
          v13 = *(double *)drawPos->v;
          xyz.v[2] = drawPos->v[2];
          *(double *)xyz.v = v13;
          Common_Asm::Utils::DebugRender_States3D(pInst, 1, &xyz, 1, (int)*(float *)&_XMM2);
          if ( pInst->m_EphemeralTableIndex == 0xFF )
            EphemeralEventTable = NULL;
          else
            EphemeralEventTable = Common_Asm::GetEphemeralEventTable(this, (ASM_Instance *)pInst);
          Common_Asm::Utils::DebugRender_EntDetails(pInst, EphemeralEventTable, 1, (int)*(float *)&_XMM2);
        }
        goto LABEL_24;
      }
      if ( integer != 3 || (Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugEntIndex, "ai_debugEntIndex"), Int_Internal_DebugName != -1) && Int_Internal_DebugName != pInst->m_EntNum )
      {
LABEL_24:
        v17 = DVARBOOL_ai_debugArc;
        if ( !DVARBOOL_ai_debugArc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugArc") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        if ( v17->current.enabled )
        {
          v18 = &g_entities[pInst->m_EntNum];
          AnimsetName = BG_AnimationState_GetAnimsetName(&v18->s);
          animData = v18->s.animInfo.animData;
          v21 = SL_ConvertToString(AnimsetName);
          LODWORD(fmt) = (animData >> 11) & 0x7F;
          Com_sprintf<128>((char (*)[128])dest, "arc: %s %d %d", v21, (animData >> 1) & 0x3FF, fmt);
          v22 = v18->r.currentOrigin.v[2];
          v23 = v18->r.currentOrigin.v[0];
          xyz.v[1] = v18->r.currentOrigin.v[1];
          xyz.v[2] = v22 + 90.0;
          xyz.v[0] = v23;
          G_Main_AddDebugString(&xyz, &colorLtYellow, 0.30000001, dest);
        }
        return;
      }
      v11 = 1;
    }
    v16 = drawPos->v[2];
    *(_QWORD *)xyz.v = *(_QWORD *)drawPos->v;
    xyz.v[2] = v16;
    Common_Asm::Utils::DebugRender_States3D(pInst, v11, &xyz, 1, (int)*(float *)&_XMM2);
    goto LABEL_24;
  }
}

/*
==============
Ai_Asm::EnterStateFunc
==============
*/
void Ai_Asm::EnterStateFunc(Ai_Asm *this, const ASM_Instance *pInst, const ASM_State *pState)
{
  const ASM *m_pASM; 
  __int64 m_Stance; 
  scr_string_t String; 
  ASM_State_Union v9; 
  __int64 m_EntNum; 
  scr_string_t m_OrientMode; 
  const gentity_s *v12; 
  scr_string_t m_AnimMode; 
  bool v14; 
  AIWrapper v15; 

  m_pASM = pInst->m_pASM;
  if ( !pInst->m_pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 149, ASSERT_TYPE_ASSERT, "( pASM )", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( m_pASM->m_Mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 150, ASSERT_TYPE_ASSERT, "( pASM->m_Mode == ASM_MODE_AI )", (const char *)&queryFormat, "pASM->m_Mode == ASM_MODE_AI") )
    __debugbreak();
  if ( pInst->m_bPrimary )
  {
    m_Stance = pState->m_Stance;
    if ( (_DWORD)m_Stance )
    {
      String = SL_FindString(g_ASMStanceNames[m_Stance]);
      Ai_Asm::RunSetPose(this, (const scr_string_t)m_pASM->m_Name, pInst->m_EntNum, String);
    }
    v9.m_AIState = (AI_ASM_State *)pState->u;
    m_EntNum = pInst->m_EntNum;
    m_OrientMode = v9.m_AIState->m_OrientMode;
    v12 = &g_entities[m_EntNum];
    m_AnimMode = v9.m_AIState->m_AnimMode;
    if ( m_OrientMode )
      Ai_Asm::RunSetOrientMode(this, (const scr_string_t)m_pASM->m_Name, m_EntNum, m_OrientMode);
    if ( m_AnimMode )
      Ai_Asm::RunSetAnimMode(this, (const scr_string_t)m_pASM->m_Name, pInst->m_EntNum, m_AnimMode);
    AIWrapper::AIWrapper(&v15, v12);
    if ( v15.m_pAI )
    {
      v14 = pState->m_PainState != -1;
      *(_BYTE *)(((__int64 (*)(void))v15.m_pAI->GetAI)() + 1849) = v14;
    }
  }
}

/*
==============
Ai_Asm::FreeInstance
==============
*/
void Ai_Asm::FreeInstance(Ai_Asm *this, const ASM_Context *context, int entNum)
{
  ASM_Instance *InstanceIfExists; 
  ASM_Instance *v6; 
  int v7; 
  ASM_Instance **m_Subtrees; 

  InstanceIfExists = Ai_Asm::GetInstanceIfExists(this, context, entNum);
  v6 = InstanceIfExists;
  if ( InstanceIfExists )
  {
    if ( !InstanceIfExists->m_bInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 854, ASSERT_TYPE_ASSERT, "(pInstance->m_bInUse)", (const char *)&queryFormat, "pInstance->m_bInUse") )
      __debugbreak();
    Ai_Asm::NotifyAllStatesFinished(this, v6);
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
    Common_Asm::ClearEphemeralEventsByInstance(this, v6);
    Common_Asm::FreeEphemeralTableIndex(this, v6);
    Ai_Asm::RemoveInstance(this, entNum);
    ASM_ReleaseHistoryObject(entNum);
    ASM_Instance::FreeInstance(v6);
  }
}

/*
==============
Ai_Asm::FreeMemory
==============
*/
void Ai_Asm::FreeMemory(void)
{
  Ai_Asm *v0; 

  v0 = Ai_Asm::ms_instance;
  if ( Ai_Asm::ms_instance )
  {
    Ai_Asm::ms_instance->__vftable = (Ai_Asm_vtbl *)&Ai_Asm::`vftable';
    Common_Asm::~Common_Asm(v0);
    DebugWipe(Ai_Asm::ms_instance, 0x28ui64);
    Ai_Asm::ms_instance = NULL;
  }
}

/*
==============
Ai_Asm::GetAssetMap
==============
*/
ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *Ai_Asm::GetAssetMap(Ai_Asm *this)
{
  return &Ai_Asm::ms_asmMap;
}

/*
==============
Ai_Asm::GetEphemeralEventData
==============
*/
char Ai_Asm::GetEphemeralEventData(Ai_Asm *this, int entNum, ASM_Instance *pInst, scr_string_t eventName, scr_string_t eventTag, unsigned int *outVar, int *outParamId)
{
  __int64 v11; 
  ASM_EphemeralEvent *i; 
  ASM_Instance *Instance; 
  unsigned int m_EphemeralEventParamTableID; 
  unsigned int BlackboardID; 
  scrContext_t *m_pScrContext; 
  unsigned int CanonicalString; 
  VariableType type; 
  VariableUnion u; 
  VariableValue out; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 787, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !eventName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 788, ASSERT_TYPE_ASSERT, "(eventName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "eventName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !outVar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 789, ASSERT_TYPE_ASSERT, "(outVar)", (const char *)&queryFormat, "outVar") )
    __debugbreak();
  if ( !outParamId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 790, ASSERT_TYPE_ASSERT, "(outParamId)", (const char *)&queryFormat, "outParamId") )
    __debugbreak();
  v11 = 0i64;
  *outVar = 0;
  *outParamId = 0;
  for ( i = Common_Asm::GetEphemeralEventTable(this, pInst); i->m_Tag != eventTag || i->m_Name != eventName; ++i )
  {
    if ( ++v11 >= 6 )
      return 0;
  }
  if ( i->m_ParamID < 0 )
    return 0;
  Instance = Ai_Asm::GetInstance(this, NULL, entNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 255, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  m_EphemeralEventParamTableID = Instance->m_EphemeralEventParamTableID;
  if ( !m_EphemeralEventParamTableID )
  {
    BlackboardID = AI_GetBlackboardID(Instance->m_EntNum);
    if ( !BlackboardID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 259, ASSERT_TYPE_ASSERT, "(blackboardID != 0)", (const char *)&queryFormat, "blackboardID != 0") )
      __debugbreak();
    if ( !Instance->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 261, ASSERT_TYPE_ASSERT, "( pInst->m_pScrContext )", (const char *)&queryFormat, "pInst->m_pScrContext") )
      __debugbreak();
    m_pScrContext = Instance->m_pScrContext;
    CanonicalString = SL_GetCanonicalString("asm_ephemeral_events");
    Scr_FindVariableField_Out(m_pScrContext, BlackboardID, CanonicalString, &out);
    type = out.type;
    if ( out.type == VAR_POINTER )
    {
      if ( GetObjectType(m_pScrContext, out.u.uintValue) != VAR_ARRAY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 268, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY") )
        __debugbreak();
      u = out.u;
      type = out.type;
      Instance->m_EphemeralEventParamTableID = out.u.intValue;
    }
    else
    {
      u = out.u;
    }
    RemoveRefToValue(m_pScrContext, (unsigned __int8)type, u);
    m_EphemeralEventParamTableID = Instance->m_EphemeralEventParamTableID;
  }
  *outVar = m_EphemeralEventParamTableID;
  *outParamId = i->m_ParamID;
  return 1;
}

/*
==============
Ai_Asm::GetEphemeralEventParamTableID
==============
*/
__int64 Ai_Asm::GetEphemeralEventParamTableID(Ai_Asm *this, ASM_Instance *pInst)
{
  __int64 result; 
  unsigned int BlackboardID; 
  scrContext_t *m_pScrContext; 
  unsigned int CanonicalString; 
  VariableType type; 
  VariableUnion u; 
  VariableValue out; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 255, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  result = pInst->m_EphemeralEventParamTableID;
  if ( !(_DWORD)result )
  {
    BlackboardID = AI_GetBlackboardID(pInst->m_EntNum);
    if ( !BlackboardID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 259, ASSERT_TYPE_ASSERT, "(blackboardID != 0)", (const char *)&queryFormat, "blackboardID != 0") )
      __debugbreak();
    if ( !pInst->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 261, ASSERT_TYPE_ASSERT, "( pInst->m_pScrContext )", (const char *)&queryFormat, "pInst->m_pScrContext") )
      __debugbreak();
    m_pScrContext = pInst->m_pScrContext;
    CanonicalString = SL_GetCanonicalString("asm_ephemeral_events");
    Scr_FindVariableField_Out(m_pScrContext, BlackboardID, CanonicalString, &out);
    type = out.type;
    if ( out.type == VAR_POINTER )
    {
      if ( GetObjectType(m_pScrContext, out.u.uintValue) != VAR_ARRAY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 268, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY") )
        __debugbreak();
      u = out.u;
      type = out.type;
      pInst->m_EphemeralEventParamTableID = out.u.intValue;
    }
    else
    {
      u = out.u;
    }
    RemoveRefToValue(m_pScrContext, (unsigned __int8)type, u);
    return pInst->m_EphemeralEventParamTableID;
  }
  return result;
}

/*
==============
Ai_Asm::GetEphemeralEventParamTableIDByEnt
==============
*/
__int64 Ai_Asm::GetEphemeralEventParamTableIDByEnt(Ai_Asm *this, int entNum)
{
  ASM_Instance *Instance; 
  __int64 result; 
  unsigned int BlackboardID; 
  scrContext_t *m_pScrContext; 
  unsigned int CanonicalString; 
  VariableType type; 
  VariableUnion u; 
  VariableValue out; 

  Instance = Ai_Asm::GetInstance(this, NULL, entNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 255, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  result = Instance->m_EphemeralEventParamTableID;
  if ( !(_DWORD)result )
  {
    BlackboardID = AI_GetBlackboardID(Instance->m_EntNum);
    if ( !BlackboardID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 259, ASSERT_TYPE_ASSERT, "(blackboardID != 0)", (const char *)&queryFormat, "blackboardID != 0") )
      __debugbreak();
    if ( !Instance->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 261, ASSERT_TYPE_ASSERT, "( pInst->m_pScrContext )", (const char *)&queryFormat, "pInst->m_pScrContext") )
      __debugbreak();
    m_pScrContext = Instance->m_pScrContext;
    CanonicalString = SL_GetCanonicalString("asm_ephemeral_events");
    Scr_FindVariableField_Out(m_pScrContext, BlackboardID, CanonicalString, &out);
    type = out.type;
    if ( out.type == VAR_POINTER )
    {
      if ( GetObjectType(m_pScrContext, out.u.uintValue) != VAR_ARRAY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 268, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY") )
        __debugbreak();
      u = out.u;
      type = out.type;
      Instance->m_EphemeralEventParamTableID = out.u.intValue;
    }
    else
    {
      u = out.u;
    }
    RemoveRefToValue(m_pScrContext, (unsigned __int8)type, u);
    return Instance->m_EphemeralEventParamTableID;
  }
  return result;
}

/*
==============
Ai_Asm::GetEphemeralEventTableByIndex
==============
*/
ASM_EphemeralTable *Ai_Asm::GetEphemeralEventTableByIndex(Ai_Asm *this, int tableIndex)
{
  __int64 v2; 
  ASM_EphemeralTable *v3; 
  int m_MaxEphemeralTables; 

  v2 = tableIndex;
  if ( (unsigned int)tableIndex >= this->m_MaxEphemeralTables )
  {
    m_MaxEphemeralTables = this->m_MaxEphemeralTables;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 721, ASSERT_TYPE_ASSERT, "(unsigned)( tableIndex ) < (unsigned)( m_MaxEphemeralTables )", "tableIndex doesn't index m_MaxEphemeralTables\n\t%i not in [0, %i)", tableIndex, m_MaxEphemeralTables) )
      __debugbreak();
  }
  v3 = &Ai_Asm::ms_aiASMEphemeralEventTables[v2];
  if ( !v3->m_bInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 722, ASSERT_TYPE_ASSERT, "(ephemeralEventTables[tableIndex].m_bInUse)", (const char *)&queryFormat, "ephemeralEventTables[tableIndex].m_bInUse") )
    __debugbreak();
  return v3;
}

/*
==============
Ai_Asm::GetEventData
==============
*/
char Ai_Asm::GetEventData(Ai_Asm *this, int entNum, ASM_Instance *pInst, scr_string_t eventName, unsigned int *outVar, int *outParamId)
{
  __int64 v10; 
  ASM_Event *m_EventTable; 
  ASM_Instance *Instance; 
  unsigned int m_EventParamTableID; 
  unsigned int BlackboardID; 
  scrContext_t *m_pScrContext; 
  unsigned int CanonicalString; 
  VariableType type; 
  VariableUnion u; 
  VariableValue out; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 757, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !eventName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 758, ASSERT_TYPE_ASSERT, "(eventName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "eventName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !outVar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 759, ASSERT_TYPE_ASSERT, "(outVar)", (const char *)&queryFormat, "outVar") )
    __debugbreak();
  if ( !outParamId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 760, ASSERT_TYPE_ASSERT, "(outParamId)", (const char *)&queryFormat, "outParamId") )
    __debugbreak();
  v10 = 0i64;
  *outVar = 0;
  m_EventTable = pInst->m_EventTable;
  *outParamId = 0;
  while ( m_EventTable->m_Name != eventName )
  {
    ++v10;
    ++m_EventTable;
    if ( v10 >= 8 )
      return 0;
  }
  if ( m_EventTable->m_ParamID < 0 )
    return 0;
  Instance = Ai_Asm::GetInstance(this, NULL, entNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 230, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  m_EventParamTableID = Instance->m_EventParamTableID;
  if ( !m_EventParamTableID )
  {
    BlackboardID = AI_GetBlackboardID(Instance->m_EntNum);
    if ( !BlackboardID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 234, ASSERT_TYPE_ASSERT, "(blackboardID != NULL_OBJECT_VARIABLE_ID)", (const char *)&queryFormat, "blackboardID != NULL_OBJECT_VARIABLE_ID") )
      __debugbreak();
    if ( !Instance->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 236, ASSERT_TYPE_ASSERT, "( pInst->m_pScrContext )", (const char *)&queryFormat, "pInst->m_pScrContext") )
      __debugbreak();
    m_pScrContext = Instance->m_pScrContext;
    CanonicalString = SL_GetCanonicalString("asm_events");
    Scr_FindVariableField_Out(m_pScrContext, BlackboardID, CanonicalString, &out);
    type = out.type;
    if ( out.type == VAR_POINTER )
    {
      if ( GetObjectType(m_pScrContext, out.u.uintValue) != VAR_ARRAY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 243, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY") )
        __debugbreak();
      u = out.u;
      type = out.type;
      Instance->m_EventParamTableID = out.u.intValue;
    }
    else
    {
      u = out.u;
    }
    RemoveRefToValue(m_pScrContext, (unsigned __int8)type, u);
    m_EventParamTableID = Instance->m_EventParamTableID;
  }
  *outVar = m_EventParamTableID;
  *outParamId = m_EventTable->m_ParamID;
  return 1;
}

/*
==============
Ai_Asm::GetEventParamTableID
==============
*/
__int64 Ai_Asm::GetEventParamTableID(Ai_Asm *this, ASM_Instance *pInst)
{
  __int64 result; 
  unsigned int BlackboardID; 
  scrContext_t *m_pScrContext; 
  unsigned int CanonicalString; 
  VariableType type; 
  VariableUnion u; 
  VariableValue out; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 230, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  result = pInst->m_EventParamTableID;
  if ( !(_DWORD)result )
  {
    BlackboardID = AI_GetBlackboardID(pInst->m_EntNum);
    if ( !BlackboardID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 234, ASSERT_TYPE_ASSERT, "(blackboardID != NULL_OBJECT_VARIABLE_ID)", (const char *)&queryFormat, "blackboardID != NULL_OBJECT_VARIABLE_ID") )
      __debugbreak();
    if ( !pInst->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 236, ASSERT_TYPE_ASSERT, "( pInst->m_pScrContext )", (const char *)&queryFormat, "pInst->m_pScrContext") )
      __debugbreak();
    m_pScrContext = pInst->m_pScrContext;
    CanonicalString = SL_GetCanonicalString("asm_events");
    Scr_FindVariableField_Out(m_pScrContext, BlackboardID, CanonicalString, &out);
    type = out.type;
    if ( out.type == VAR_POINTER )
    {
      if ( GetObjectType(m_pScrContext, out.u.uintValue) != VAR_ARRAY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 243, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY") )
        __debugbreak();
      u = out.u;
      type = out.type;
      pInst->m_EventParamTableID = out.u.intValue;
    }
    else
    {
      u = out.u;
    }
    RemoveRefToValue(m_pScrContext, (unsigned __int8)type, u);
    return pInst->m_EventParamTableID;
  }
  return result;
}

/*
==============
Ai_Asm::GetEventParamTableIDByEnt
==============
*/
__int64 Ai_Asm::GetEventParamTableIDByEnt(Ai_Asm *this, int entNum)
{
  ASM_Instance *Instance; 
  __int64 result; 
  unsigned int BlackboardID; 
  scrContext_t *m_pScrContext; 
  unsigned int CanonicalString; 
  VariableType type; 
  VariableUnion u; 
  VariableValue out; 

  Instance = Ai_Asm::GetInstance(this, NULL, entNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 230, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  result = Instance->m_EventParamTableID;
  if ( !(_DWORD)result )
  {
    BlackboardID = AI_GetBlackboardID(Instance->m_EntNum);
    if ( !BlackboardID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 234, ASSERT_TYPE_ASSERT, "(blackboardID != NULL_OBJECT_VARIABLE_ID)", (const char *)&queryFormat, "blackboardID != NULL_OBJECT_VARIABLE_ID") )
      __debugbreak();
    if ( !Instance->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 236, ASSERT_TYPE_ASSERT, "( pInst->m_pScrContext )", (const char *)&queryFormat, "pInst->m_pScrContext") )
      __debugbreak();
    m_pScrContext = Instance->m_pScrContext;
    CanonicalString = SL_GetCanonicalString("asm_events");
    Scr_FindVariableField_Out(m_pScrContext, BlackboardID, CanonicalString, &out);
    type = out.type;
    if ( out.type == VAR_POINTER )
    {
      if ( GetObjectType(m_pScrContext, out.u.uintValue) != VAR_ARRAY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 243, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, val.u.pointerValue ) == VAR_ARRAY") )
        __debugbreak();
      u = out.u;
      type = out.type;
      Instance->m_EventParamTableID = out.u.intValue;
    }
    else
    {
      u = out.u;
    }
    RemoveRefToValue(m_pScrContext, (unsigned __int8)type, u);
    return Instance->m_EventParamTableID;
  }
  return result;
}

/*
==============
Ai_Asm::GetGameTime
==============
*/

int __fastcall Ai_Asm::GetGameTime(Ai_Asm *this)
{
  return G_Main_GetTime();
}

/*
==============
Ai_Asm::GetHistoryObject
==============
*/
ASM_History *Ai_Asm::GetHistoryObject(Ai_Asm *this, const ASM_Instance *pInst)
{
  return ASM_GetHistoryObject(pInst->m_EntNum);
}

/*
==============
Ai_Asm::GetLooseFileMap
==============
*/
ntl::fixed_map<enum scr_string_t,bool,32,ntl::less<enum scr_string_t,enum scr_string_t> > *Ai_Asm::GetLooseFileMap()
{
  return &Ai_Asm::ms_asmLooseFileMap;
}

/*
==============
Ai_Asm::GetMemorySize
==============
*/
__int64 Ai_Asm::GetMemorySize()
{
  return 48i64;
}

/*
==============
Ai_Asm::Init
==============
*/
void Ai_Asm::Init(bool bServerThreadStartup)
{
  Ai_Asm *v2; 
  int v3; 
  bool *p_m_bInUse; 
  ASM_Mode Mode; 

  if ( !Ai_Asm::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 279, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v2 = Ai_Asm::ms_instance;
  if ( !Ai_Asm::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 639, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  v3 = 0;
  if ( v2->m_MaxEphemeralTables > 0 )
  {
    p_m_bInUse = &Ai_Asm::ms_aiASMEphemeralEventTables[0].m_bInUse;
    do
    {
      *p_m_bInUse = 0;
      p_m_bInUse += 100;
      ++v3;
    }
    while ( v3 < v2->m_MaxEphemeralTables );
  }
  Mode = Common_Asm::GetMode(v2);
  ASM_LoadAll(Mode, (ScrThreadMode)bServerThreadStartup);
}

/*
==============
Ai_Asm::MyChanges
==============
*/
void Ai_Asm::MyChanges(void)
{
  Common_Asm::MyChanges_UpdateAssetMaps(&Ai_Asm::ms_asmMap, &Ai_Asm::ms_asmLooseFileMap);
  if ( Ai_Asm::ms_instance )
    Ai_Asm::MyChanges_UpdateInstances(Ai_Asm::ms_instance);
}

/*
==============
Ai_Asm::NotifyAllStatesFinished
==============
*/
void Ai_Asm::NotifyAllStatesFinished(Ai_Asm *this, ASM_Instance *pInst)
{
  const ASM_State *State; 
  int m_EntNum; 
  const char *v6; 
  int v7; 
  ASM_Instance **m_Subtrees; 
  char dest[128]; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 877, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  State = Common_Asm::Utils::GetState(pInst->m_pASM, pInst->m_CurState);
  if ( !State && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 880, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  m_EntNum = pInst->m_EntNum;
  v6 = SL_ConvertToString(State->m_Name);
  if ( Com_sprintf_truncate(dest, 0x80ui64, "%s_finished", v6) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 567, ASSERT_TYPE_ASSERT, "(result >= 0)", "%s\n\tState name '%s' too long for <statename>_finished buffer.", "result >= 0", v6) )
    __debugbreak();
  Ai_Asm::Notify(this, m_EntNum, dest);
  v7 = 0;
  if ( pInst->m_NumSubtrees > 0 )
  {
    m_Subtrees = pInst->m_Subtrees;
    do
    {
      Ai_Asm::NotifyAllStatesFinished(this, *m_Subtrees);
      ++v7;
      ++m_Subtrees;
    }
    while ( v7 < pInst->m_NumSubtrees );
  }
}

/*
==============
Ai_Asm::NotifyStateFinished
==============
*/
void Ai_Asm::NotifyStateFinished(Ai_Asm *this, int entNum, const scr_string_t stateName)
{
  const char *v5; 
  char dest[128]; 

  v5 = SL_ConvertToString(stateName);
  if ( Com_sprintf_truncate(dest, 0x80ui64, "%s_finished", v5) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 567, ASSERT_TYPE_ASSERT, "(result >= 0)", "%s\n\tState name '%s' too long for <statename>_finished buffer.", "result >= 0", v5) )
    __debugbreak();
  Ai_Asm::Notify(this, entNum, dest);
}

/*
==============
Ai_Asm::ProcessFlags
==============
*/
void Ai_Asm::ProcessFlags(Ai_Asm *this, ASM_Instance *pInst, const ASM_State *pState, const ASM_State *pPrevState)
{
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 216, ASSERT_TYPE_ASSERT, "( pInst )", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 217, ASSERT_TYPE_ASSERT, "( pState )", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( (pState->m_Flags & 1) != 0 )
    Ai_Asm::RunStartAim(this, (const scr_string_t)pInst->m_pASM->m_Name, pInst->m_EntNum, (const scr_string_t)pState->m_Name, (const scr_string_t)pPrevState->m_Name);
}

/*
==============
Ai_Asm::ProcessNotetrack
==============
*/
void Ai_Asm::ProcessNotetrack(Ai_Asm *this, int entNum, scr_string_t notifyName, scr_string_t notetrackName)
{
  Ai_Asm *v4; 
  scr_string_t v5; 
  int v7; 
  ASM_Instance *Instance; 
  int v9; 
  int *v10; 
  __int64 v11; 
  int *p_m_NumSubtrees; 
  ASM_Instance **m_Subtrees; 
  bool v14; 
  __int64 v15; 
  int m_CurState; 
  __int64 v17; 
  int m_NumStates; 
  AIWrapper v19; 

  v4 = this;
  v5 = notetrackName;
  v7 = entNum;
  Instance = AI_ASM_GetInstance(entNum);
  if ( Instance->m_CurState >= (unsigned int)Instance->m_pASM->m_NumStates )
  {
    m_NumStates = Instance->m_pASM->m_NumStates;
    m_CurState = Instance->m_CurState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 105, ASSERT_TYPE_ASSERT, "(unsigned)( pInst->m_CurState ) < (unsigned)( pInst->m_pASM->m_NumStates )", "pInst->m_CurState doesn't index pInst->m_pASM->m_NumStates\n\t%i not in [0, %i)", m_CurState, m_NumStates) )
      __debugbreak();
  }
  v9 = 0;
  v10 = (int *)Instance;
  v11 = (__int64)&Instance->m_pASM->m_States[Instance->m_CurState];
  if ( *(_DWORD *)(v11 + 12) != notifyName )
  {
    p_m_NumSubtrees = &Instance->m_NumSubtrees;
    m_Subtrees = Instance->m_Subtrees;
    do
    {
      if ( v9 >= *p_m_NumSubtrees )
        break;
      Instance = *m_Subtrees;
      if ( (*m_Subtrees)->m_CurState >= (unsigned int)(*m_Subtrees)->m_pASM->m_NumStates )
      {
        LODWORD(v17) = (*m_Subtrees)->m_pASM->m_NumStates;
        LODWORD(v15) = (*m_Subtrees)->m_CurState;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( pInst->m_CurState ) < (unsigned)( pInst->m_pASM->m_NumStates )", "pInst->m_CurState doesn't index pInst->m_pASM->m_NumStates\n\t%i not in [0, %i)", v15, v17) )
          __debugbreak();
      }
      ++v9;
      ++m_Subtrees;
      v11 = (__int64)&Instance->m_pASM->m_States[Instance->m_CurState];
    }
    while ( *(_DWORD *)(v11 + 12) != notifyName );
    v7 = entNum;
    v5 = notetrackName;
    v4 = this;
    if ( *(_DWORD *)(v11 + 12) != notifyName )
    {
      Instance = (ASM_Instance *)v10;
      v11 = *(_QWORD *)(*(_QWORD *)v10 + 16i64) + 248i64 * v10[4];
    }
  }
  AI_ASM_FireEvent(Instance, v5, NULL);
  v14 = 1;
  if ( *(_BYTE *)(v11 + 104) && *(_DWORD *)(v11 + 12) == notifyName )
    v14 = !s_ASMBuiltinFuncs_0[*(int *)(v11 + 88)].m_Func(v7, (const scr_string_t)Instance->m_pASM->m_Name, (const scr_string_t)v5, *(unsigned int *)(v11 + 92), *(ASM_Function_Param **)(v11 + 96), NULL);
  AIWrapper::AIWrapper(&v19, &g_entities[v7]);
  if ( v19.m_pAI )
    AIScriptedInterface::HandleNotetrack(v19.m_pAI, v5);
  if ( v14 )
    Ai_Asm::RunNoteHandler(v4, (const scr_string_t)Instance->m_pASM->m_Name, v7, notifyName, notifyName);
}

/*
==============
Ai_Asm::PushParamsToScript
==============
*/
__int64 Ai_Asm::PushParamsToScript(scrContext_t *scrContext, int numParams, ASM_Function_Param *pParams)
{
  __int64 v3; 
  __int64 v7; 
  ASM_Function_Param_Type m_Type; 
  __int64 v9; 

  v3 = numParams;
  if ( !numParams )
    return 0i64;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_GetParams");
  if ( !pParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 291, ASSERT_TYPE_ASSERT, "(pParams)", (const char *)&queryFormat, "pParams") )
    __debugbreak();
  if ( (int)v3 > 1 )
    Scr_MakeArray(scrContext);
  if ( (int)v3 > 0 )
  {
    v7 = 0i64;
    while ( 1 )
    {
      m_Type = pParams[v7].m_Type;
      if ( m_Type == ParamType_Undefined )
        break;
      switch ( m_Type )
      {
        case ParamType_Bool:
          Scr_AddBool(scrContext, pParams[v7].u.m_Bool);
          goto LABEL_22;
        case ParamType_String:
          Scr_AddConstString(scrContext, pParams[v7].u.m_String);
          goto LABEL_22;
        case ParamType_Int:
          Scr_AddInt(scrContext, pParams[v7].u.m_Int);
          goto LABEL_22;
        case ParamType_Float:
          Scr_AddFloat(scrContext, pParams[v7].u.m_Float);
          goto LABEL_22;
      }
      LODWORD(v9) = pParams[v7].m_Type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 327, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported param type %d", v9) )
        __debugbreak();
LABEL_24:
      if ( ++v7 >= v3 )
        goto LABEL_25;
    }
    Scr_AddUndefined(scrContext);
LABEL_22:
    if ( (int)v3 > 1 )
      Scr_AddArray(scrContext);
    goto LABEL_24;
  }
LABEL_25:
  Sys_ProfEndNamedEvent();
  return 1i64;
}

/*
==============
Ai_Asm::Register
==============
*/
void Ai_Asm::Register(ASM *pASM, bool bLooseFile)
{
  Common_Asm::Register(&Ai_Asm::ms_asmMap, &Ai_Asm::ms_asmLooseFileMap, pASM, bLooseFile);
}

/*
==============
Ai_Asm::Release
==============
*/
void Ai_Asm::Release(ASM *pASM, bool bUnlockPackfileData)
{
  Ai_Asm *v2; 
  bool v3; 
  ntl::map<int,ASM_Instance *,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>,ntl::less<int,int> > *InstanceMap; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ASM_Instance *mp_parent; 
  int m_EntNum; 
  const char *v10; 
  int v11; 
  const char *v12; 
  __int64 v13; 

  v2 = Ai_Asm::ms_instance;
  v3 = bUnlockPackfileData;
  if ( Ai_Asm::ms_instance )
  {
    if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 740, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
      __debugbreak();
    InstanceMap = Ai_Asm::GetInstanceMap(v2);
    if ( !InstanceMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 743, ASSERT_TYPE_ASSERT, "(instanceMap)", (const char *)&queryFormat, "instanceMap") )
      __debugbreak();
    mp_left = InstanceMap->m_endNodeBase.mp_left;
    p_m_endNodeBase = &InstanceMap->m_endNodeBase;
    if ( mp_left != &InstanceMap->m_endNodeBase )
    {
      do
      {
        if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        mp_parent = (ASM_Instance *)mp_left[1].mp_parent;
        if ( mp_parent->m_pASM == pASM )
        {
          m_EntNum = mp_parent->m_EntNum;
          v10 = SL_ConvertToString(pASM->m_Name);
          LODWORD(v13) = m_EntNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 748, ASSERT_TYPE_ASSERT, "(pInst->m_pASM != pASM)", "%s\n\tReleasing ASM %s while it is still being used by ent %d!", "pInst->m_pASM != pASM", v10, v13) )
            __debugbreak();
        }
        if ( ASM_Instance::HasSubtree_r(mp_parent, pASM) )
        {
          v11 = mp_parent->m_EntNum;
          v12 = SL_ConvertToString(pASM->m_Name);
          LODWORD(v13) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 749, ASSERT_TYPE_ASSERT, "(!pInst->HasSubtree_r( pASM ))", "%s\n\tReleasing ASM %s while it is still being used as a subtree by ent %d!", "!pInst->HasSubtree_r( pASM )", v12, v13) )
            __debugbreak();
        }
        mp_left = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(mp_left);
      }
      while ( mp_left != p_m_endNodeBase );
      v3 = bUnlockPackfileData;
    }
  }
  Common_Asm::Release(&Ai_Asm::ms_asmMap, &Ai_Asm::ms_asmLooseFileMap, pASM, v3);
}

/*
==============
Ai_Asm::RunChooseAnimFunction
==============
*/
void Ai_Asm::RunChooseAnimFunction(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, const ASM_Function *pFunc, int *outEntryIndex)
{
  if ( !pFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 541, ASSERT_TYPE_ASSERT, "( pFunc )", (const char *)&queryFormat, "pFunc") )
    __debugbreak();
  Ai_Asm::RunChooseAnimFunction_with_params(this, context, pInst, asmName, entNum, stateName, pFunc->m_FuncID, pFunc->m_NumParams, pFunc->m_Params, pFunc->m_bBuiltin, outEntryIndex);
}

/*
==============
Ai_Asm::RunChooseAnimFunction_with_params
==============
*/
void Ai_Asm::RunChooseAnimFunction_with_params(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin, int *outEntryIndex)
{
  const gentity_s *v13; 
  ASM *ASM; 
  int Function; 
  scrContext_t *v16; 
  int v17; 
  unsigned int v18; 
  void *outReturnValue; 
  __int64 v20; 
  VariableValue value; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 495, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_ChooseAnim");
  if ( bBuiltin )
  {
    if ( (unsigned int)funcID >= 0x62 )
    {
      LODWORD(v20) = 98;
      LODWORD(outReturnValue) = funcID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 501, ASSERT_TYPE_ASSERT, "(unsigned)( funcID ) < (unsigned)( ( sizeof( *array_counter( s_ASMBuiltinFuncs ) ) + 0 ) )", "funcID doesn't index ARRAY_COUNT( s_ASMBuiltinFuncs )\n\t%i not in [0, %i)", outReturnValue, v20) )
        __debugbreak();
    }
    s_ASMBuiltinFuncs_0[funcID].m_Func(entNum, asmName, stateName, numParams, pParams, outEntryIndex);
  }
  else
  {
    if ( funcID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 506, ASSERT_TYPE_ASSERT, "( funcID != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "funcID != cINVALID_ASM_FUNC_ID") )
      __debugbreak();
    v13 = &g_entities[entNum];
    ASM = Common_Asm::GetASM(this, asmName);
    Function = Ai_Asm::GetFunction(ASM, funcID);
    v16 = ScriptContext_Server();
    v17 = Ai_Asm::PushParamsToScript(v16, numParams, pParams);
    Scr_AddConstString(v16, stateName);
    Scr_AddConstString(v16, asmName);
    v18 = GScr_ExecEntThreadWithReturnValue(v13, Function, v17 + 2, Scr_ExecThreadCallback_VariableValue, NULL, &value);
    if ( outEntryIndex && value.type == VAR_INTEGER )
      *outEntryIndex = value.u.intValue;
    if ( !Ai_Asm::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 279, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    if ( Ai_Asm::ms_instance->m_ChooseAnimReturnMode == SCRIPT )
      Scr_AddValue(v16, &value);
    RemoveRefToValue(v16, (unsigned __int8)value.type, value.u);
    Scr_FreeThread(v16, v18);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Ai_Asm::RunFunction_asm
==============
*/
void Ai_Asm::RunFunction_asm(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const ASM_Function *pFunc)
{
  Ai_Asm::RunFunction_asm_with_params(this, context, pInst, asmName, entNum, pFunc->m_FuncID, pFunc->m_NumParams, pFunc->m_Params, pFunc->m_bBuiltin);
}

/*
==============
Ai_Asm::RunFunction_asm_state
==============
*/
void Ai_Asm::RunFunction_asm_state(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, const ASM_Function *pFunc)
{
  ASM *ASM; 
  int Function; 
  const gentity_s *v11; 
  scrContext_t *v12; 
  int v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 375, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  if ( !pFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 376, ASSERT_TYPE_ASSERT, "( pFunc )", (const char *)&queryFormat, "pFunc") )
    __debugbreak();
  if ( pFunc->m_bBuiltin )
  {
    if ( pFunc->m_FuncID >= 0x62u )
    {
      LODWORD(v16) = 98;
      LODWORD(v15) = pFunc->m_FuncID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 380, ASSERT_TYPE_ASSERT, "(unsigned)( pFunc->m_FuncID ) < (unsigned)( ( sizeof( *array_counter( s_ASMBuiltinFuncs ) ) + 0 ) )", "pFunc->m_FuncID doesn't index ARRAY_COUNT( s_ASMBuiltinFuncs )\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    s_ASMBuiltinFuncs_0[pFunc->m_FuncID].m_Func(entNum, asmName, stateName, pFunc->m_NumParams, pFunc->m_Params, NULL);
  }
  else
  {
    if ( pFunc->m_FuncID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 385, ASSERT_TYPE_ASSERT, "( pFunc->m_FuncID != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "pFunc->m_FuncID != cINVALID_ASM_FUNC_ID") )
      __debugbreak();
    ASM = Common_Asm::GetASM(this, asmName);
    Function = Ai_Asm::GetFunction(ASM, pFunc->m_FuncID);
    v11 = &g_entities[entNum];
    v12 = ScriptContext_Server();
    v13 = Ai_Asm::PushParamsToScript(v12, pFunc->m_NumParams, pFunc->m_Params);
    Scr_AddConstString(v12, stateName);
    Scr_AddConstString(v12, asmName);
    v14 = GScr_ExecEntThread(v11, Function, v13 + 2);
    Scr_FreeThread(v12, v14);
  }
}

/*
==============
Ai_Asm::RunFunction_asm_state_with_params
==============
*/
void Ai_Asm::RunFunction_asm_state_with_params(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin)
{
  ASM *ASM; 
  int Function; 
  const gentity_s *v14; 
  scrContext_t *v15; 
  int v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  if ( bBuiltin )
  {
    if ( (unsigned int)funcID >= 0x62 )
    {
      LODWORD(v19) = 98;
      LODWORD(v18) = funcID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 411, ASSERT_TYPE_ASSERT, "(unsigned)( funcID ) < (unsigned)( ( sizeof( *array_counter( s_ASMBuiltinFuncs ) ) + 0 ) )", "funcID doesn't index ARRAY_COUNT( s_ASMBuiltinFuncs )\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    s_ASMBuiltinFuncs_0[funcID].m_Func(entNum, asmName, stateName, numParams, pParams, NULL);
  }
  else
  {
    if ( funcID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 416, ASSERT_TYPE_ASSERT, "( funcID != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "funcID != cINVALID_ASM_FUNC_ID") )
      __debugbreak();
    ASM = Common_Asm::GetASM(this, asmName);
    Function = Ai_Asm::GetFunction(ASM, funcID);
    v14 = &g_entities[entNum];
    v15 = ScriptContext_Server();
    v16 = Ai_Asm::PushParamsToScript(v15, numParams, pParams);
    Scr_AddConstString(v15, stateName);
    Scr_AddConstString(v15, asmName);
    v17 = GScr_ExecEntThread(v14, Function, v16 + 2);
    Scr_FreeThread(v15, v17);
  }
}

/*
==============
Ai_Asm::RunFunction_asm_with_params
==============
*/
void Ai_Asm::RunFunction_asm_with_params(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const scr_string_t asmName, int entNum, int funcID, int numParams, ASM_Function_Param *pParams, bool bBuiltin)
{
  const gentity_s *v11; 
  ASM *ASM; 
  int Function; 
  scrContext_t *v14; 
  int v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 339, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  if ( bBuiltin )
  {
    if ( (unsigned int)funcID >= 0x62 )
    {
      LODWORD(v18) = 98;
      LODWORD(v17) = funcID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 343, ASSERT_TYPE_ASSERT, "(unsigned)( funcID ) < (unsigned)( ( sizeof( *array_counter( s_ASMBuiltinFuncs ) ) + 0 ) )", "funcID doesn't index ARRAY_COUNT( s_ASMBuiltinFuncs )\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    s_ASMBuiltinFuncs_0[funcID].m_Func(entNum, asmName, (const scr_string_t)0i64, numParams, pParams, NULL);
  }
  else
  {
    if ( funcID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 348, ASSERT_TYPE_ASSERT, "( funcID != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "funcID != cINVALID_ASM_FUNC_ID") )
      __debugbreak();
    v11 = &g_entities[entNum];
    ASM = Common_Asm::GetASM(this, asmName);
    Function = Ai_Asm::GetFunction(ASM, funcID);
    v14 = ScriptContext_Server();
    v15 = Ai_Asm::PushParamsToScript(v14, numParams, pParams);
    Scr_AddConstString(v14, asmName);
    v16 = GScr_ExecEntThread(v11, Function, v15 + 1);
    Scr_FreeThread(v14, v16);
  }
}

/*
==============
Ai_Asm::RunServices
==============
*/
void Ai_Asm::RunServices(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM *pASM, int entNum)
{
  ASM_Union v5; 
  int v6; 
  Ai_Asm *v8; 
  __int64 v9; 
  __int64 v10; 
  scr_string_t m_Name; 
  int v12; 
  const gentity_s *v13; 
  ASM *ASM; 
  int Function; 
  scrContext_t *v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 

  v5.m_AIASM = (AI_ASM *)pASM->u;
  v6 = 0;
  v8 = this;
  if ( v5.m_AIASM->m_NumServices > 0 )
  {
    v9 = entNum;
    v10 = 0i64;
    do
    {
      m_Name = pASM->m_Name;
      v12 = v5.m_AIASM->m_Services[v10];
      if ( (unsigned int)entNum >= 0x800 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = entNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 339, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( v12 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 348, ASSERT_TYPE_ASSERT, "( funcID != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "funcID != cINVALID_ASM_FUNC_ID") )
        __debugbreak();
      v13 = &g_entities[v9];
      ASM = Common_Asm::GetASM(v8, m_Name);
      Function = Ai_Asm::GetFunction(ASM, v12);
      v16 = ScriptContext_Server();
      Scr_AddConstString(v16, m_Name);
      v17 = GScr_ExecEntThread(v13, Function, 1u);
      Scr_FreeThread(v16, v17);
      v5.m_AIASM = (AI_ASM *)pASM->u;
      v8 = this;
      v9 = entNum;
      ++v6;
      ++v10;
    }
    while ( v6 < v5.m_AIASM->m_NumServices );
  }
}

/*
==============
Ai_Asm::RunTransitionFunction
==============
*/
bool Ai_Asm::RunTransitionFunction(Ai_Asm *this, const ASM_Context *context, const ASM_Instance *pInst, const scr_string_t asmName, int entNum, const scr_string_t stateName, const scr_string_t toStateName, const ASM_Transition *pTransition)
{
  ASM_Function *p_m_FuncName; 
  const char *m_Name; 
  const char *v11; 
  const char *v12; 
  unsigned int m_FuncID; 
  const gentity_s *v15; 
  const char *v16; 
  const char *v17; 
  scrContext_t *v18; 
  int v19; 
  ASM *ASM; 
  int Function; 
  const char *v22; 
  const char *v23; 
  unsigned int v24; 
  void *outReturnValue; 
  __int64 v26; 
  int v27; 
  Common_Asm *v28; 
  char dest[128]; 

  v28 = this;
  if ( !pTransition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 438, ASSERT_TYPE_ASSERT, "( pTransition )", (const char *)&queryFormat, "pTransition") )
    __debugbreak();
  p_m_FuncName = &pTransition->m_FuncName;
  if ( pTransition == (const ASM_Transition *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 441, ASSERT_TYPE_ASSERT, "( pFunc )", (const char *)&queryFormat, "pFunc") )
    __debugbreak();
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(outReturnValue) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 443, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outReturnValue, 2048) )
      __debugbreak();
  }
  if ( pTransition->m_FuncName.m_bBuiltin )
  {
    if ( p_m_FuncName->m_FuncID >= 0x62u )
    {
      LODWORD(v26) = 98;
      LODWORD(outReturnValue) = p_m_FuncName->m_FuncID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 447, ASSERT_TYPE_ASSERT, "(unsigned)( pFunc->m_FuncID ) < (unsigned)( ( sizeof( *array_counter( s_ASMBuiltinFuncs ) ) + 0 ) )", "pFunc->m_FuncID doesn't index ARRAY_COUNT( s_ASMBuiltinFuncs )\n\t%i not in [0, %i)", outReturnValue, v26) )
        __debugbreak();
    }
    m_Name = s_ASMBuiltinFuncs_0[p_m_FuncName->m_FuncID].m_Name;
    v11 = SL_ConvertToString(asmName);
    v12 = j_va("%s %s %s", "ASMTrans Builtin", v11, m_Name);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, v12);
    LOBYTE(m_Name) = s_ASMBuiltinFuncs_0[pTransition->m_FuncName.m_FuncID].m_Func(entNum, asmName, toStateName, pTransition->m_FuncName.m_NumParams, pTransition->m_FuncName.m_Params, NULL);
    Sys_ProfEndNamedEvent();
    return (char)m_Name;
  }
  else
  {
    if ( p_m_FuncName->m_FuncID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 458, ASSERT_TYPE_ASSERT, "( pFunc->m_FuncID != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "pFunc->m_FuncID != cINVALID_ASM_FUNC_ID") )
      __debugbreak();
    m_FuncID = p_m_FuncName->m_FuncID;
    v15 = &g_entities[entNum];
    v16 = SL_ConvertToString(asmName);
    v17 = j_va("%s %s %d", "ASMTrans Scr", v16, m_FuncID);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, v17);
    v18 = ScriptContext_Server();
    v19 = Ai_Asm::PushParamsToScript(v18, pTransition->m_FuncName.m_NumParams, pTransition->m_FuncName.m_Params);
    ASM = Common_Asm::GetASM(v28, asmName);
    Function = Ai_Asm::GetFunction(ASM, p_m_FuncName->m_FuncID);
    Scr_AddConstString(v18, toStateName);
    Scr_AddConstString(v18, stateName);
    Scr_AddConstString(v18, asmName);
    v22 = SL_ConvertToString(toStateName);
    v23 = SL_ConvertToString(stateName);
    Com_sprintf(dest, 0x80ui64, "%s -> %s", v23, v22);
    v24 = GScr_ExecEntThreadWithReturnValue(v15, Function, v19 + 3, Scr_ExecThreadCallback_UnsignedWithErrorMsg, dest, &v27);
    Scr_FreeThread(v18, v24);
    Sys_ProfEndNamedEvent();
    return v27 != 0;
  }
}

/*
==============
Ai_Asm::ShouldProcessNotetracks
==============
*/
bool Ai_Asm::ShouldProcessNotetracks(Ai_Asm *this, int entNum)
{
  ASM_Instance *InstanceIfExists; 

  if ( !Ai_Asm::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 279, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  InstanceIfExists = Ai_Asm::GetInstanceIfExists(Ai_Asm::ms_instance, NULL, entNum);
  return InstanceIfExists && InstanceIfExists->m_pASM->m_States[InstanceIfExists->m_CurState].m_PlayAnim.m_bBuiltin;
}

/*
==============
Ai_Asm::Shutdown
==============
*/
void Ai_Asm::Shutdown(void)
{
  Common_Asm::Shutdown(&Ai_Asm::ms_asmMap, &Ai_Asm::ms_asmLooseFileMap);
}

/*
==============
Ai_Asm::Singleton
==============
*/
Ai_Asm *Ai_Asm::Singleton()
{
  Ai_Asm *result; 

  result = Ai_Asm::ms_instance;
  if ( !Ai_Asm::ms_instance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 279, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    return Ai_Asm::ms_instance;
  }
  return result;
}

/*
==============
Ai_Asm::TerminateFunc
==============
*/
void Ai_Asm::TerminateFunc(Ai_Asm *this, const ASM_State *pState, const ASM_Context *context, const ASM *const pASM, ASM_Instance *pInst)
{
  ASM_Function *p_m_TerminateFunc; 
  scr_string_t m_Name; 
  __int64 m_EntNum; 
  scr_string_t v11; 
  ASM *ASM; 
  int Function; 
  const gentity_s *v14; 
  scrContext_t *v15; 
  int v16; 
  unsigned int v17; 
  AIScriptedInterface *m_pAI; 
  scr_string_t *v19; 
  bool (__fastcall *SetAnimset)(AIScriptedInterface *, const char *); 
  const char *v21; 
  __int64 v22; 
  __int64 v23; 
  AIWrapper v24; 

  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 185, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 186, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 187, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  p_m_TerminateFunc = &pState->m_TerminateFunc;
  if ( pState->m_TerminateFunc.m_FuncID != -1 )
  {
    m_Name = pState->m_Name;
    m_EntNum = pInst->m_EntNum;
    v11 = pASM->m_Name;
    if ( (unsigned int)m_EntNum >= 0x800 )
    {
      LODWORD(v22) = pInst->m_EntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 375, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v22, 2048) )
        __debugbreak();
    }
    if ( !p_m_TerminateFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 376, ASSERT_TYPE_ASSERT, "( pFunc )", (const char *)&queryFormat, "pFunc") )
      __debugbreak();
    if ( p_m_TerminateFunc->m_bBuiltin )
    {
      if ( p_m_TerminateFunc->m_FuncID >= 0x62u )
      {
        LODWORD(v23) = 98;
        LODWORD(v22) = p_m_TerminateFunc->m_FuncID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 380, ASSERT_TYPE_ASSERT, "(unsigned)( pFunc->m_FuncID ) < (unsigned)( ( sizeof( *array_counter( s_ASMBuiltinFuncs ) ) + 0 ) )", "pFunc->m_FuncID doesn't index ARRAY_COUNT( s_ASMBuiltinFuncs )\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      s_ASMBuiltinFuncs_0[p_m_TerminateFunc->m_FuncID].m_Func(m_EntNum, (const scr_string_t)v11, (const scr_string_t)m_Name, p_m_TerminateFunc->m_NumParams, p_m_TerminateFunc->m_Params, NULL);
    }
    else
    {
      if ( p_m_TerminateFunc->m_FuncID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 385, ASSERT_TYPE_ASSERT, "( pFunc->m_FuncID != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "pFunc->m_FuncID != cINVALID_ASM_FUNC_ID") )
        __debugbreak();
      ASM = Common_Asm::GetASM(this, v11);
      Function = Ai_Asm::GetFunction(ASM, p_m_TerminateFunc->m_FuncID);
      v14 = &g_entities[m_EntNum];
      v15 = ScriptContext_Server();
      v16 = Ai_Asm::PushParamsToScript(v15, p_m_TerminateFunc->m_NumParams, p_m_TerminateFunc->m_Params);
      Scr_AddConstString(v15, m_Name);
      Scr_AddConstString(v15, v11);
      v17 = GScr_ExecEntThread(v14, Function, v16 + 2);
      Scr_FreeThread(v15, v17);
    }
  }
  if ( pInst->m_EntNum >= 0x800u )
  {
    LODWORD(v23) = 2048;
    LODWORD(v22) = pInst->m_EntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( pInst->m_EntNum ) < (unsigned)( ( 2048 ) )", "pInst->m_EntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  AIWrapper::AIWrapper(&v24, &g_entities[pInst->m_EntNum]);
  m_pAI = v24.m_pAI;
  if ( v24.m_pAI )
  {
    v19 = (scr_string_t *)((__int64)v24.m_pAI->GetAI(v24.m_pAI) + 3468);
    if ( *v19 )
    {
      if ( pInst == AI_ASM_GetInstance(pInst->m_EntNum) )
      {
        SetAnimset = m_pAI->SetAnimset;
        v21 = SL_ConvertToString(*v19);
        SetAnimset(m_pAI, v21);
        Ai_Asm::RunSetArchetype(this, (const scr_string_t)pInst->m_pASM->m_Name, pInst->m_EntNum, *v19);
        Scr_SetString(v19, (scr_string_t)0);
      }
    }
  }
}

/*
==============
Ai_Asm::UpdateState
==============
*/
bool Ai_Asm::UpdateState(Ai_Asm *this, const ASM_Context *context, ASM_Instance *pInst, const ASM_State *pCurState)
{
  return 0;
}

/*
==============
Ai_Asm::ValidateEphemeralEventTablesNotInUse
==============
*/
void Ai_Asm::ValidateEphemeralEventTablesNotInUse(Ai_Asm *this)
{
  int v1; 
  bool *p_m_bInUse; 

  v1 = 0;
  if ( this->m_MaxEphemeralTables > 0 )
  {
    p_m_bInUse = &Ai_Asm::ms_aiASMEphemeralEventTables[0].m_bInUse;
    do
    {
      if ( *p_m_bInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm.cpp", 709, ASSERT_TYPE_ASSERT, "(!ephemeralEventTables[iTable].m_bInUse)", (const char *)&queryFormat, "!ephemeralEventTables[iTable].m_bInUse") )
        __debugbreak();
      ++v1;
      p_m_bInUse += 100;
    }
    while ( v1 < this->m_MaxEphemeralTables );
  }
}

/*
==============
Ai_Asm::irand
==============
*/
int Ai_Asm::irand(Ai_Asm *this, const ASM_Instance *pInst, int min, int max)
{
  return G_irand(min, max);
}

