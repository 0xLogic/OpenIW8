/*
==============
CgPlayer_Asm::CheckTransitionPredicted
==============
*/

ASM_Transition *__fastcall CgPlayer_Asm::CheckTransitionPredicted(const ASM *const pASM, ASM_Transition *pTransition, const ASM_State *pOriginatingState, const ASM_State *pFromState, bool *pbThisTransitionReturn)
{
  return ?CheckTransitionPredicted@CgPlayer_Asm@@SAPEAUASM_Transition@@QEBUASM@@PEAU2@PEBUASM_State@@2PEA_N@Z(pASM, pTransition, pOriginatingState, pFromState, pbThisTransitionReturn);
}

/*
==============
CgPlayer_Asm::GetMaxInstances
==============
*/

int __fastcall CgPlayer_Asm::GetMaxInstances(int maxLocalClients, int maxCharacters)
{
  return ?GetMaxInstances@CgPlayer_Asm@@SAHHH@Z(maxLocalClients, maxCharacters);
}

/*
==============
CgPlayer_Asm::~CgPlayer_Asm
==============
*/

void __fastcall CgPlayer_Asm::~CgPlayer_Asm(CgPlayer_Asm *this)
{
  ??1CgPlayer_Asm@@UEAA@XZ(this);
}

/*
==============
CgPlayer_Asm::CgPlayer_Asm
==============
*/

void __fastcall CgPlayer_Asm::CgPlayer_Asm(CgPlayer_Asm *this)
{
  ??0CgPlayer_Asm@@QEAA@XZ(this);
}

/*
==============
CgPlayer_Asm::HandleMisprediction
==============
*/

void __fastcall CgPlayer_Asm::HandleMisprediction(CgPlayer_Asm *this, int predictedLastTime, const PlayerASM_State *predictedState, playerState_s *ps, unsigned int *holdrand)
{
  ?HandleMisprediction@CgPlayer_Asm@@QEAAXHPEBUPlayerASM_State@@PEAUplayerState_s@@PEAI@Z(this, predictedLastTime, predictedState, ps, holdrand);
}

/*
==============
CgPlayer_Asm::CheckTransitionsPredicted
==============
*/

ASM_Transition *__fastcall CgPlayer_Asm::CheckTransitionsPredicted(const ASM *const pASM, const ASM_State *pOriginatingState, const ASM_State *pState)
{
  return ?CheckTransitionsPredicted@CgPlayer_Asm@@SAPEAUASM_Transition@@QEBUASM@@PEBUASM_State@@1@Z(pASM, pOriginatingState, pState);
}

/*
==============
CgPlayer_Asm::FreeMemory
==============
*/

void CgPlayer_Asm::FreeMemory(void)
{
  ?FreeMemory@CgPlayer_Asm@@SAXXZ();
}

/*
==============
CgPlayer_Asm::GetMemorySize
==============
*/

unsigned int __fastcall CgPlayer_Asm::GetMemorySize(const int maxLocalClients)
{
  return ?GetMemorySize@CgPlayer_Asm@@SAIH@Z(maxLocalClients);
}

/*
==============
CgPlayer_Asm::Singleton
==============
*/

CgPlayer_Asm *__fastcall CgPlayer_Asm::Singleton(const LocalClientNum_t localClientNum)
{
  return ?Singleton@CgPlayer_Asm@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgPlayer_Asm::GetGameTime
==============
*/

int __fastcall CgPlayer_Asm::GetGameTime(CgPlayer_Asm *this)
{
  return ?GetGameTime@CgPlayer_Asm@@UEBAHXZ(this);
}

/*
==============
CgPlayer_Asm::CG_PredictTransitionalExit
==============
*/

bool __fastcall CgPlayer_Asm::CG_PredictTransitionalExit(CgPlayer_Asm *this, const ASM *pASM, const ASM_State *currentState, const PlayerASM_AnimSlot slot, int suitIndex, entityState_t *es)
{
  return ?CG_PredictTransitionalExit@CgPlayer_Asm@@QEAA_NPEBUASM@@PEBUASM_State@@W4PlayerASM_AnimSlot@@HPEAUentityState_t@@@Z(this, pASM, currentState, slot, suitIndex, es);
}

/*
==============
CgPlayer_Asm::GetEphemeralEventTables
==============
*/

ASM_EphemeralTable *__fastcall CgPlayer_Asm::GetEphemeralEventTables(CgPlayer_Asm *this, ASM_Instance *pInst)
{
  return ?GetEphemeralEventTables@CgPlayer_Asm@@UEBAPEAUASM_EphemeralTable@@PEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
CgPlayer_Asm::AllocateMemory
==============
*/

void __fastcall CgPlayer_Asm::AllocateMemory(HunkUser *hunkUser, const int maxLocalClients, const int maxCharacters)
{
  ?AllocateMemory@CgPlayer_Asm@@SAXPEAUHunkUser@@HH@Z(hunkUser, maxLocalClients, maxCharacters);
}

/*
==============
CgPlayer_Asm::CgPlayer_Asm
==============
*/
void CgPlayer_Asm::CgPlayer_Asm(CgPlayer_Asm *this)
{
  BgPlayer_Asm::BgPlayer_Asm(this);
  this->__vftable = (CgPlayer_Asm_vtbl *)&CgPlayer_Asm::`vftable';
}

/*
==============
CgPlayer_Asm::~CgPlayer_Asm
==============
*/
void CgPlayer_Asm::~CgPlayer_Asm(CgPlayer_Asm *this)
{
  this->__vftable = (CgPlayer_Asm_vtbl *)&CgPlayer_Asm::`vftable';
  BgPlayer_Asm::~BgPlayer_Asm(this);
}

/*
==============
CgPlayer_Asm::AllocateMemory
==============
*/
void CgPlayer_Asm::AllocateMemory(HunkUser *hunkUser, const int maxLocalClients, const int maxCharacters)
{
  BgPlayer_Asm *v5; 
  int v6; 
  BgPlayer_Asm **v7; 

  if ( maxLocalClients > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 50, ASSERT_TYPE_ASSERT, "(maxLocalClients <= 2)", (const char *)&queryFormat, "maxLocalClients <= STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  v5 = (BgPlayer_Asm *)Mem_HunkUser_AllocInternal(hunkUser, 40 * maxLocalClients, 8ui64, "CgPlayer_Asm::AllocateMemory");
  memset_0(v5, 0, 40 * maxLocalClients);
  v6 = 0;
  if ( maxLocalClients > 0 )
  {
    v7 = CgPlayer_Asm::ms_instance;
    do
    {
      if ( *v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 67, ASSERT_TYPE_ASSERT, "(!ms_instance[clientAsmIndex])", (const char *)&queryFormat, "!ms_instance[clientAsmIndex]") )
        __debugbreak();
      BgPlayer_Asm::BgPlayer_Asm(v5);
      v5->__vftable = (BgPlayer_Asm_vtbl *)&CgPlayer_Asm::`vftable';
      *v7 = v5;
      v5->m_MaxInstances = 2 * maxLocalClients;
      LODWORD((*v7)[1].__vftable) = v6;
      BgPlayer_Asm::RegisterBgInstance(*v7);
      ++v6;
      v5 = (BgPlayer_Asm *)((char *)v5 + 40);
      ++v7;
    }
    while ( v6 < maxLocalClients );
  }
  CgPlayer_Asm::ms_allocatedCount = maxLocalClients;
}

/*
==============
CgPlayer_Asm::CG_PredictTransitionalExit
==============
*/
bool CgPlayer_Asm::CG_PredictTransitionalExit(CgPlayer_Asm *this, const ASM *pASM, const ASM_State *currentState, const PlayerASM_AnimSlot slot, int suitIndex, entityState_t *es)
{
  char v6; 
  ASM_Transition *v10; 
  const ASM_State *State; 
  PlayerASM_Instance *instances; 
  __int64 v13; 
  PlayerASM_Parameters parameters; 
  PlayerASM_Context context; 

  v6 = slot;
  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 143, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( !currentState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 144, ASSERT_TYPE_ASSERT, "(currentState)", (const char *)&queryFormat, "currentState") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 145, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v10 = CgPlayer_Asm::CheckTransitionsPredicted(pASM, currentState, currentState);
  if ( !v10 )
    return 0;
  State = Common_Asm::Utils::GetState(pASM, v10->m_ToStateID);
  if ( !State && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 152, ASSERT_TYPE_ASSERT, "(pToState)", (const char *)&queryFormat, "pToState") )
    __debugbreak();
  instances = context.instances;
  v13 = 2i64;
  do
  {
    PlayerASM_Instance::PlayerASM_Instance(instances++);
    --v13;
  }
  while ( v13 );
  context.ps = (playerState_s *)es;
  context.playerAsm = NULL;
  context.holdrand = NULL;
  context.const_ps = (const playerState_s *)es;
  context.useEntityState = 1;
  memset_0(context.instances, 0, sizeof(context.instances));
  parameters.asmName = pASM->m_Name;
  parameters.entNum = es->clientNum;
  parameters.numParams = 0;
  parameters.pAsm = this;
  parameters.pParams = NULL;
  parameters.stateName = State->m_Name;
  parameters.slot[0] = v6;
  BgPlayer_Asm::SetupInstanceState<0>(this, &context, suitIndex, NULL, es);
  return PlayerASM_PlayPredictedAnim(&context, &parameters) != 0;
}

/*
==============
CgPlayer_Asm::CheckTransitionPredicted
==============
*/
ASM_Transition *CgPlayer_Asm::CheckTransitionPredicted(const ASM *const pASM, ASM_Transition *pTransition, const ASM_State *pOriginatingState, const ASM_State *pFromState, bool *pbThisTransitionReturn)
{
  const ASM_State *State; 
  int m_FuncID; 
  int (__fastcall *BuiltinFunc)(const PlayerASM_Context *, const PlayerASM_Parameters *); 
  int m_NumParams; 
  ASM_Function_Param *m_Params; 
  __int64 v14; 

  State = Common_Asm::Utils::GetState(pASM, pTransition->m_ToStateID);
  if ( !State && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 182, ASSERT_TYPE_ASSERT, "(pToState)", (const char *)&queryFormat, "pToState") )
    __debugbreak();
  if ( !pTransition->m_FuncName.m_bBuiltin )
    goto LABEL_23;
  m_FuncID = pTransition->m_FuncName.m_FuncID;
  if ( m_FuncID == -1 )
    goto LABEL_23;
  BuiltinFunc = PlayerASM_GetBuiltinFunc(m_FuncID);
  if ( BuiltinFunc == PlayerASM_AnimationFinished )
    goto LABEL_18;
  if ( BuiltinFunc != PlayerASM_EventFired )
    goto LABEL_23;
  m_NumParams = pTransition->m_FuncName.m_NumParams;
  m_Params = pTransition->m_FuncName.m_Params;
  if ( !m_Params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_builtin.h", 702, ASSERT_TYPE_ASSERT, "(pParams)", (const char *)&queryFormat, "pParams") )
    __debugbreak();
  if ( !m_NumParams )
  {
    LODWORD(v14) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_builtin.h", 703, ASSERT_TYPE_ASSERT, "(unsigned)( iParam ) < (unsigned)( numParams )", "iParam doesn't index numParams\n\t%i not in [0, %i)", v14, 0) )
      __debugbreak();
  }
  if ( m_Params->m_Type != ParamType_String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_builtin.h", 704, ASSERT_TYPE_ASSERT, "(pParams[iParam].m_Type == ParamType_String)", (const char *)&queryFormat, "pParams[iParam].m_Type == ParamType_String") )
    __debugbreak();
  if ( m_Params->u.m_Int == scr_const.end )
  {
LABEL_18:
    if ( pbThisTransitionReturn )
      *pbThisTransitionReturn = 1;
    if ( (unsigned int)(State->m_Type - 2) > 3 )
      return pTransition;
    else
      return CgPlayer_Asm::CheckTransitionsPredicted(pASM, pOriginatingState, State);
  }
  else
  {
LABEL_23:
    if ( pbThisTransitionReturn )
      *pbThisTransitionReturn = 0;
    return 0i64;
  }
}

/*
==============
CgPlayer_Asm::CheckTransitionsPredicted
==============
*/
ASM_Transition *CgPlayer_Asm::CheckTransitionsPredicted(const ASM *const pASM, const ASM_State *pOriginatingState, const ASM_State *pState)
{
  const ASM_State *v4; 
  int v6; 
  __int64 v7; 
  ASM_Transition *v8; 
  const ASM_State *State; 
  int m_FuncID; 
  int (__fastcall *BuiltinFunc)(const PlayerASM_Context *, const PlayerASM_Parameters *); 
  ASM_Function_Param *m_Params; 
  int m_NumParams; 
  bool v14; 
  char v15; 
  __int64 v17; 
  __int64 v18; 

  v4 = pOriginatingState;
  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 215, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 216, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  v6 = 0;
  if ( pState->m_NumTransitions <= 0 )
    return 0i64;
  v7 = 0i64;
  do
  {
    v8 = &pState->m_Transitions[v7];
    State = Common_Asm::Utils::GetState(pASM, v8->m_ToStateID);
    if ( !State && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 182, ASSERT_TYPE_ASSERT, "(pToState)", (const char *)&queryFormat, "pToState") )
      __debugbreak();
    if ( !v8->m_FuncName.m_bBuiltin )
      goto LABEL_31;
    m_FuncID = v8->m_FuncName.m_FuncID;
    if ( m_FuncID == -1 )
      goto LABEL_31;
    BuiltinFunc = PlayerASM_GetBuiltinFunc(m_FuncID);
    if ( BuiltinFunc == PlayerASM_AnimationFinished )
      goto LABEL_26;
    if ( BuiltinFunc != PlayerASM_EventFired )
      goto LABEL_31;
    m_Params = v8->m_FuncName.m_Params;
    m_NumParams = v8->m_FuncName.m_NumParams;
    if ( !m_Params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_builtin.h", 702, ASSERT_TYPE_ASSERT, "(pParams)", (const char *)&queryFormat, "pParams") )
      __debugbreak();
    if ( !m_NumParams )
    {
      LODWORD(v18) = 0;
      LODWORD(v17) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_builtin.h", 703, ASSERT_TYPE_ASSERT, "(unsigned)( iParam ) < (unsigned)( numParams )", "iParam doesn't index numParams\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    if ( m_Params->m_Type != ParamType_String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_builtin.h", 704, ASSERT_TYPE_ASSERT, "(pParams[iParam].m_Type == ParamType_String)", (const char *)&queryFormat, "pParams[iParam].m_Type == ParamType_String") )
      __debugbreak();
    v14 = m_Params->u.m_Int == scr_const.end;
    v4 = pOriginatingState;
    if ( v14 )
    {
LABEL_26:
      if ( (unsigned int)(State->m_Type - 2) <= 3 )
        v8 = CgPlayer_Asm::CheckTransitionsPredicted(pASM, v4, State);
      v15 = 1;
      if ( v8 )
        return v8;
    }
    else
    {
LABEL_31:
      v15 = 0;
    }
    if ( pState->m_Type == 3 && v15 )
      break;
    ++v6;
    ++v7;
  }
  while ( v6 < pState->m_NumTransitions );
  return 0i64;
}

/*
==============
CgPlayer_Asm::FreeMemory
==============
*/
void CgPlayer_Asm::FreeMemory(void)
{
  int v0; 
  int v1; 
  CgPlayer_Asm **v2; 
  BgPlayer_Asm *v3; 

  v0 = CgPlayer_Asm::ms_allocatedCount;
  v1 = 0;
  if ( CgPlayer_Asm::ms_allocatedCount > 0 )
  {
    v2 = CgPlayer_Asm::ms_instance;
    do
    {
      v3 = *v2;
      if ( *v2 )
      {
        v3->__vftable = (BgPlayer_Asm_vtbl *)&CgPlayer_Asm::`vftable';
        BgPlayer_Asm::~BgPlayer_Asm(v3);
        BgPlayer_Asm::RemoveBgInstance(*v2);
        DebugWipe(*v2, 0x28ui64);
        v0 = CgPlayer_Asm::ms_allocatedCount;
        *v2 = NULL;
      }
      ++v1;
      ++v2;
    }
    while ( v1 < v0 );
  }
  CgPlayer_Asm::ms_allocatedCount = 0;
}

/*
==============
CgPlayer_Asm::GetEphemeralEventTables
==============
*/
ASM_EphemeralTable *CgPlayer_Asm::GetEphemeralEventTables(CgPlayer_Asm *this, ASM_Instance *pInst)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 119, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "PlayerASM: Ephemeral events not enabled.") )
    __debugbreak();
  return 0i64;
}

/*
==============
CgPlayer_Asm::GetGameTime
==============
*/
__int64 CgPlayer_Asm::GetGameTime(CgPlayer_Asm *this)
{
  __int64 localClientNum; 
  __int64 v3; 

  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    return 0i64;
  localClientNum = this->localClientNum;
  if ( (unsigned int)localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", this->localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[localClientNum] )
  {
    LODWORD(v3) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v3) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v3) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v3) )
      __debugbreak();
  }
  return (unsigned int)cg_t::ms_cgArray[localClientNum]->time;
}

/*
==============
CgPlayer_Asm::GetMaxInstances
==============
*/
__int64 CgPlayer_Asm::GetMaxInstances(int maxLocalClients, int maxCharacters)
{
  return (unsigned int)(2 * maxLocalClients);
}

/*
==============
CgPlayer_Asm::GetMemorySize
==============
*/
__int64 CgPlayer_Asm::GetMemorySize(const int maxLocalClients)
{
  return (unsigned int)(40 * maxLocalClients);
}

/*
==============
CgPlayer_Asm::HandleMisprediction
==============
*/
void CgPlayer_Asm::HandleMisprediction(CgPlayer_Asm *this, int predictedLastTime, const PlayerASM_State *predictedState, playerState_s *ps, unsigned int *holdrand)
{
  const dvar_t *v8; 
  __int16 *v9; 
  char v10; 
  unsigned int v11; 
  unsigned int *v12; 
  unsigned int v13; 
  unsigned int Anim; 
  BgPlayer_Asm *v15; 
  PlayerASM_Instance *instances; 
  __int64 v17; 
  int clientNum; 
  int suitIndex; 
  unsigned int *v20; 
  unsigned int v21; 
  __int16 *v22; 
  PlayerASM_Instance *InstanceBySlot; 
  const ASM_State *State; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int Animset; 
  const dvar_t *v28; 
  scr_string_t v29; 
  int v30; 
  scr_string_t v31; 
  unsigned int v32; 
  scr_string_t v33; 
  const char *v34; 
  const char *v35; 
  const ASM_Instance *Instance; 
  double v37; 
  ASM_Instance *v38; 
  unsigned int v39; 
  const Animset *AnimsetByIndex; 
  int v41; 
  unsigned int v42; 
  scr_string_t StateNameFromIndex; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  ASM_Instance *v47; 
  scr_string_t m_Name; 
  int m_EntNum; 
  ASM_Function *pFunc; 
  int v51; 
  unsigned int stateIndex; 
  __int16 v53[2]; 
  unsigned int outAnimState; 
  unsigned int *p_packedAnim; 
  BgPlayer_Asm *v56; 
  unsigned int outAnimEntry; 
  unsigned int entryIndex; 
  const PlayerASM_State *v59; 
  AnimsetAlias *v60; 
  AnimsetAlias *ppOutAlias; 
  __int16 *v62; 
  vec3_t v63; 
  AnimsetAnim *ppOutAnim; 
  PlayerASM_Context context; 

  v56 = this;
  v59 = predictedState;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 250, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    v8 = DCONST_DVARBOOL_playerasm_misprediction_handling;
    if ( !DCONST_DVARBOOL_playerasm_misprediction_handling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_misprediction_handling") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled && predictedLastTime && ps->commandTime == predictedLastTime )
    {
      v9 = v53;
      v10 = 0;
      v53[0] = 0;
      v11 = 0;
      p_packedAnim = &predictedState->slot[0].packedAnim;
      v12 = &predictedState->slot[0].packedAnim;
      do
      {
        v13 = *v12;
        Anim = BG_PlayerASM_GetAnim(ps, (const PlayerASM_AnimSlot)(unsigned __int8)v11);
        if ( v13 && Anim && v13 != Anim )
        {
          *(_BYTE *)v9 = 1;
          v10 = 1;
        }
        ++v11;
        v12 += 2;
        v9 = (__int16 *)((char *)v9 + 1);
      }
      while ( v11 < 2 );
      if ( v10 )
      {
        Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_PlayerASM_ForceUpdateAnimChoice");
        v15 = v56;
        CgHandler::getHandler((LocalClientNum_t)v56[1].__vftable);
        instances = context.instances;
        v17 = 2i64;
        do
        {
          PlayerASM_Instance::PlayerASM_Instance(instances++);
          --v17;
        }
        while ( v17 );
        clientNum = ps->clientNum;
        v51 = clientNum;
        context.ps = ps;
        context.const_ps = ps;
        context.useEntityState = 0;
        memset_0(context.instances, 0, sizeof(context.instances));
        suitIndex = ps->suitIndex;
        context.playerAsm = v15;
        context.holdrand = holdrand;
        context.disableCache = 1;
        BgPlayer_Asm::SetupInstanceState<1>(v15, &context, suitIndex, ps, NULL);
        v20 = p_packedAnim;
        v21 = 0;
        v22 = v53;
        v62 = v53;
        while ( !*(_BYTE *)v22 )
        {
LABEL_36:
          v22 = (__int16 *)((char *)v22 + 1);
          v20 += 2;
          ++v21;
          v62 = v22;
          p_packedAnim = v20;
          if ( v21 >= 2 )
          {
            Instance = BgPlayer_Asm::GetInstance(v15, &context, clientNum);
            v37 = *(double *)ps->origin.v;
            v63.v[2] = ps->origin.v[2];
            v38 = (ASM_Instance *)Instance;
            *(double *)v63.v = v37;
            BgPlayer_Asm::DebugRender(v15, Instance, &v63, 0);
            BgPlayer_Asm::ClearInstanceState(v15, &context, v38, ps);
            Sys_ProfEndNamedEvent();
            return;
          }
        }
        InstanceBySlot = BgPlayer_Asm::GetInstanceBySlot(v15, &context, (const PlayerASM_AnimSlot)(unsigned __int8)v21);
        if ( !InstanceBySlot )
        {
          LODWORD(pFunc) = clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 322, ASSERT_TYPE_ASSERT, "(pInst)", "%s\n\tNot running an ASM instance for entity %d", "pInst", pFunc) )
            __debugbreak();
        }
        State = Common_Asm::Utils::GetState(InstanceBySlot->m_pASM, InstanceBySlot->m_CurState);
        if ( !State && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 325, ASSERT_TYPE_ASSERT, "(pCurState)", (const char *)&queryFormat, "pCurState") )
          __debugbreak();
        v25 = *p_packedAnim;
        v26 = BG_PlayerASM_GetAnim(ps, (const PlayerASM_AnimSlot)(unsigned __int8)v21);
        outAnimState = 0;
        outAnimEntry = 0;
        BG_PlayerASM_UnpackAnim(v59->animSet, v25, &outAnimState, &outAnimEntry);
        stateIndex = 0;
        entryIndex = 0;
        Animset = BG_PlayerASM_GetAnimset(ps);
        BG_PlayerASM_UnpackAnim(Animset, v26, &stateIndex, &entryIndex);
        if ( stateIndex == outAnimState )
        {
          if ( State->u.m_AIState->m_PowerDownState != -1 )
          {
            v39 = BG_PlayerASM_GetAnimset(ps);
            AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(v39);
            if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 354, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
              __debugbreak();
            if ( BG_PlayerASM_IsAnimEntryValid(AnimsetByIndex, stateIndex, entryIndex) && BG_PlayerASM_IsAnimEntryValid(AnimsetByIndex, outAnimState, outAnimEntry) )
            {
              BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, outAnimState, outAnimEntry, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
              BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, stateIndex, entryIndex, (const AnimsetAlias **)&v60, (const AnimsetAnim **)&v63);
              if ( v60 != ppOutAlias )
              {
                if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerasm_misprediction_handling_debug, "playerasm_misprediction_handling_debug") )
                {
                  v41 = stateIndex;
                  v42 = BG_PlayerASM_GetAnimset(ps);
                  StateNameFromIndex = BG_PlayerASM_GetStateNameFromIndex(v42, v41);
                  v44 = SL_ConvertToString(v60->name);
                  v45 = SL_ConvertToString(ppOutAlias->name);
                  v46 = SL_ConvertToString(StateNameFromIndex);
                  Com_PrintWarning(19, "PlayerASM: Misprediction handled for state '%s'. Predicted alias is '%s' but pmove rewind chose '%s'.\n", v46, v45, v44);
                  v22 = v62;
                }
                v47 = InstanceBySlot;
                m_Name = InstanceBySlot->m_pASM->m_Name;
                m_EntNum = InstanceBySlot->m_EntNum;
                v15 = v56;
                BgPlayer_Asm::RunFunction_asm_state(v56, &context, v47, m_Name, m_EntNum, (const scr_string_t)State->m_Name, (const ASM_Function *)State->u.m_AIState);
                goto LABEL_35;
              }
            }
          }
        }
        else
        {
          v28 = DCONST_DVARBOOL_playerasm_misprediction_handling_debug;
          if ( !DCONST_DVARBOOL_playerasm_misprediction_handling_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_misprediction_handling_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v28);
          if ( v28->current.enabled )
          {
            v29 = BG_PlayerASM_GetStateNameFromIndex(v59->animSet, outAnimState);
            v30 = stateIndex;
            v31 = v29;
            v32 = BG_PlayerASM_GetAnimset(ps);
            v33 = BG_PlayerASM_GetStateNameFromIndex(v32, v30);
            v34 = SL_ConvertToString(v33);
            v35 = SL_ConvertToString(v31);
            Com_PrintWarning(19, "PlayerASM: Misprediction not handled. Predicted state is '%s' but pmove rewind chose '%s'.\n", v35, v34);
          }
        }
        v15 = v56;
LABEL_35:
        v20 = p_packedAnim;
        clientNum = v51;
        goto LABEL_36;
      }
    }
  }
}

/*
==============
CgPlayer_Asm::Singleton
==============
*/
CgPlayer_Asm *CgPlayer_Asm::Singleton(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  CgPlayer_Asm **v3; 
  int v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 31, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  v2 = CgPlayer_Asm::ms_instance[v1] == NULL;
  v3 = &CgPlayer_Asm::ms_instance[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\cg_player_asm.cpp", 33, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  return *v3;
}

