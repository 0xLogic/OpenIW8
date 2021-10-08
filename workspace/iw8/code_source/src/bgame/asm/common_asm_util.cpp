/*
==============
Common_Asm::Utils::GetCurrentStateByAssetName
==============
*/

const ASM_State *__fastcall Common_Asm::Utils::GetCurrentStateByAssetName(const ASM_Instance *pInst, scr_string_t asmName)
{
  return ?GetCurrentStateByAssetName@Utils@Common_Asm@@SAPEBUASM_State@@PEBUASM_Instance@@W4scr_string_t@@@Z(pInst, asmName);
}

/*
==============
Common_Asm::Utils::EventFired
==============
*/

bool __fastcall Common_Asm::Utils::EventFired(const ASM_Instance *pInst, const scr_string_t eventName)
{
  return ?EventFired@Utils@Common_Asm@@SA_NPEBUASM_Instance@@W4scr_string_t@@@Z(pInst, eventName);
}

/*
==============
Common_Asm::Utils::DebugRender_States3D
==============
*/

void __fastcall Common_Asm::Utils::DebugRender_States3D(const ASM_Instance *pInst, bool bShouldDrawHistory, vec3_t *drawPos, bool bFromServer, int duration)
{
  ?DebugRender_States3D@Utils@Common_Asm@@SAXPEBUASM_Instance@@_NTvec3_t@@1H@Z(pInst, bShouldDrawHistory, drawPos, bFromServer, duration);
}

/*
==============
Common_Asm::Utils::StateHasSubtree
==============
*/

bool __fastcall Common_Asm::Utils::StateHasSubtree(const ASM_State *pState, const scr_string_t subtreeName)
{
  return ?StateHasSubtree@Utils@Common_Asm@@SA_NPEBUASM_State@@W4scr_string_t@@@Z(pState, subtreeName);
}

/*
==============
Common_Asm::Utils::LogicGroup_IsAncestorOf
==============
*/

bool __fastcall Common_Asm::Utils::LogicGroup_IsAncestorOf(const ASM *pASM, int possibleAncestorGroupID, int groupID)
{
  return ?LogicGroup_IsAncestorOf@Utils@Common_Asm@@SA_NPEBUASM@@HH@Z(pASM, possibleAncestorGroupID, groupID);
}

/*
==============
Common_Asm::Utils::GetLogicGroup
==============
*/

const ASM_LogicGroup *__fastcall Common_Asm::Utils::GetLogicGroup(const ASM *pASM, int logicID)
{
  return ?GetLogicGroup@Utils@Common_Asm@@SAPEBUASM_LogicGroup@@PEBUASM@@H@Z(pASM, logicID);
}

/*
==============
Common_Asm::Utils::CurrentStateHasFlag
==============
*/

bool __fastcall Common_Asm::Utils::CurrentStateHasFlag(const ASM_Instance *pInst, const scr_string_t flagName)
{
  return ?CurrentStateHasFlag@Utils@Common_Asm@@SA_NPEBUASM_Instance@@W4scr_string_t@@@Z(pInst, flagName);
}

/*
==============
Common_Asm::HasState
==============
*/

bool __fastcall Common_Asm::HasState(Common_Asm *this, const ASM *pASM, const scr_string_t stateName)
{
  return ?HasState@Common_Asm@@QEAA_NPEBUASM@@W4scr_string_t@@@Z(this, pASM, stateName);
}

/*
==============
Common_Asm::Utils::FindEventFor
==============
*/

ASM_Event *__fastcall Common_Asm::Utils::FindEventFor(ASM_Event *eventTable, const scr_string_t eventName)
{
  return ?FindEventFor@Utils@Common_Asm@@SAPEAUASM_Event@@PEAU3@W4scr_string_t@@@Z(eventTable, eventName);
}

/*
==============
Common_Asm::Utils::GetStateTransitioningFrom
==============
*/

const ASM_State *__fastcall Common_Asm::Utils::GetStateTransitioningFrom(const ASM_Instance *pInst)
{
  return ?GetStateTransitioningFrom@Utils@Common_Asm@@SAPEBUASM_State@@PEBUASM_Instance@@@Z(pInst);
}

/*
==============
Common_Asm::Utils::DebugRender_Events
==============
*/

void __fastcall Common_Asm::Utils::DebugRender_Events(const ASM_Instance *pInst, const ASM_EphemeralEvent *pEphemeralEventTable, float topLeftX, float topLeftY, bool bFromServer, int duration)
{
  ?DebugRender_Events@Utils@Common_Asm@@SAXPEBUASM_Instance@@PEBUASM_EphemeralEvent@@MM_NH@Z(pInst, pEphemeralEventTable, topLeftX, topLeftY, bFromServer, duration);
}

/*
==============
Common_Asm::Utils::GetEventTime
==============
*/

int __fastcall Common_Asm::Utils::GetEventTime(const ASM_Instance *pInst, scr_string_t eventName)
{
  return ?GetEventTime@Utils@Common_Asm@@SAHPEBUASM_Instance@@W4scr_string_t@@@Z(pInst, eventName);
}

/*
==============
Common_Asm::Utils::EventFired
==============
*/

bool __fastcall Common_Asm::Utils::EventFired(const ASM_Instance *pInst, int numEvents, const scr_string_t eventName)
{
  return ?EventFired@Utils@Common_Asm@@SA_NPEBUASM_Instance@@HW4scr_string_t@@@Z(pInst, numEvents, eventName);
}

/*
==============
Common_Asm::Utils::CurrentStateHasAnyAnimFlags
==============
*/

bool __fastcall Common_Asm::Utils::CurrentStateHasAnyAnimFlags(const ASM_Instance *pInst, const AnimScriptFlags flags)
{
  return ?CurrentStateHasAnyAnimFlags@Utils@Common_Asm@@SA_NPEBUASM_Instance@@W4AnimScriptFlags@@@Z(pInst, flags);
}

/*
==============
Common_Asm::Utils::AddEventData_Internal
==============
*/

int __fastcall Common_Asm::Utils::AddEventData_Internal(scrContext_t *scrContext, unsigned int eventTableID, int paramIndex, VariableValue *pData)
{
  return ?AddEventData_Internal@Utils@Common_Asm@@SAHAEAUscrContext_t@@IHPEAUVariableValue@@@Z(scrContext, eventTableID, paramIndex, pData);
}

/*
==============
Common_Asm::Utils::GetSubtree
==============
*/

ASM_Instance *__fastcall Common_Asm::Utils::GetSubtree(const ASM_Instance *pInst, const scr_string_t subtreeName)
{
  return ?GetSubtree@Utils@Common_Asm@@SAPEAUASM_Instance@@PEBU3@W4scr_string_t@@@Z(pInst, subtreeName);
}

/*
==============
Common_Asm::Utils::DebugRender_EntDetails
==============
*/

void __fastcall Common_Asm::Utils::DebugRender_EntDetails(const ASM_Instance *pInst, const ASM_EphemeralEvent *pEphemeralEventTable, bool bFromServer, int duration)
{
  ?DebugRender_EntDetails@Utils@Common_Asm@@SAXPEBUASM_Instance@@PEBUASM_EphemeralEvent@@_NH@Z(pInst, pEphemeralEventTable, bFromServer, duration);
}

/*
==============
Common_Asm::Utils::GetState
==============
*/

const ASM_State *__fastcall Common_Asm::Utils::GetState(const ASM *pASM, int stateID)
{
  return ?GetState@Utils@Common_Asm@@SAPEBUASM_State@@PEBUASM@@H@Z(pASM, stateID);
}

/*
==============
Common_Asm::Utils::AddEventData_Internal
==============
*/
__int64 Common_Asm::Utils::AddEventData_Internal(scrContext_t *scrContext, unsigned int eventTableID, int paramIndex, VariableValue *pData)
{
  const char *m_scriptPos; 
  unsigned int NewArrayVariable; 

  if ( !eventTableID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 25, ASSERT_TYPE_ASSERT, "(eventTableID)", (const char *)&queryFormat, "eventTableID") )
    __debugbreak();
  if ( !pData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 26, ASSERT_TYPE_ASSERT, "(pData)", (const char *)&queryFormat, "pData") )
    __debugbreak();
  if ( paramIndex == -1 )
    paramIndex = GetArraySize(scrContext, eventTableID);
  m_scriptPos = ScriptContext_GetVarUsageScriptCodePos(scrContext).m_scriptPos;
  ScriptContext_SetVarUsagePos(scrContext, "<asm variable>");
  NewArrayVariable = GetNewArrayVariable(scrContext, eventTableID, paramIndex);
  ScriptContext_SetVarUsageScriptCodePos(scrContext, (const ScriptCodePos)m_scriptPos);
  SetNewVariableValue(scrContext, NewArrayVariable, pData);
  AddRefToValue(scrContext, (unsigned __int8)pData->type, pData->u);
  return (unsigned int)paramIndex;
}

/*
==============
Common_Asm::Utils::CurrentStateHasAnyAnimFlags
==============
*/
bool Common_Asm::Utils::CurrentStateHasAnyAnimFlags(const ASM_Instance *pInst, const AnimScriptFlags flags)
{
  const ASM_State *State; 

  State = Common_Asm::Utils::GetState(pInst->m_pASM, pInst->m_CurState);
  if ( !State && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 123, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( pInst->m_pASM->m_Mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 124, ASSERT_TYPE_ASSERT, "(pInst->m_pASM->m_Mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "pInst->m_pASM->m_Mode == ASM_MODE_PLAYER") )
    __debugbreak();
  return (flags & State->m_Flags) != 0;
}

/*
==============
Common_Asm::Utils::CurrentStateHasFlag
==============
*/
char Common_Asm::Utils::CurrentStateHasFlag(const ASM_Instance *pInst, const scr_string_t flagName)
{
  const ASM_State *State; 
  unsigned int v5; 
  __int64 v6; 
  int m_Flags; 
  unsigned int numFlags; 
  char **flagNameArray; 

  ASM_GetStateFlagDefs(pInst->m_pASM->m_Mode, (const char ***)&flagNameArray, &numFlags);
  if ( !flagNameArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 101, ASSERT_TYPE_ASSERT, "(flagNames)", (const char *)&queryFormat, "flagNames") )
    __debugbreak();
  if ( !numFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 102, ASSERT_TYPE_ASSERT, "(numFlags)", (const char *)&queryFormat, "numFlags") )
    __debugbreak();
  State = Common_Asm::Utils::GetState(pInst->m_pASM, pInst->m_CurState);
  if ( !State && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 105, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( pInst->m_pASM->m_Mode )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 106, ASSERT_TYPE_ASSERT, "(pInst->m_pASM->m_Mode == ASM_MODE_AI)", (const char *)&queryFormat, "pInst->m_pASM->m_Mode == ASM_MODE_AI") )
      __debugbreak();
  }
  v5 = numFlags;
  v6 = 0i64;
  if ( !numFlags )
    return 0;
  while ( 1 )
  {
    m_Flags = State->m_Flags;
    if ( _bittest(&m_Flags, v6) )
      break;
LABEL_17:
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= v5 )
      return 0;
  }
  if ( SL_FindString(flagNameArray[v6]) != flagName )
  {
    v5 = numFlags;
    goto LABEL_17;
  }
  return 1;
}

/*
==============
Common_Asm::Utils::DebugRender_EntDetails
==============
*/
void Common_Asm::Utils::DebugRender_EntDetails(const ASM_Instance *pInst, const ASM_EphemeralEvent *pEphemeralEventTable, bool bFromServer, int duration)
{
  BOOL fromServer; 
  const ASM_State *State; 
  const char *v19; 
  int v24; 
  const ASM ***m_Subtrees; 
  const ASM **v27; 
  const ASM_State *v28; 
  const char *v29; 
  char dest[1024]; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  fromServer = bFromServer;
  Com_sprintf(dest, 0x400ui64, "Ent: %d", (unsigned int)pInst->m_EntNum);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm7, cs:__real@42c80000
    vmovss  xmm1, cs:__real@43480000; y
    vmovaps xmm3, xmm9; scale
    vmovaps xmm0, xmm7; x
  }
  CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest, fromServer, duration);
  State = Common_Asm::Utils::GetState(pInst->m_pASM, pInst->m_CurState);
  v19 = SL_ConvertToString(State->m_Name);
  Com_sprintf(dest, 0x400ui64, "%s | %s", pInst->m_pASM->m_szName, v19);
  __asm
  {
    vmovss  xmm1, cs:__real@43540000; y
    vmovaps xmm3, xmm9; scale
    vmovaps xmm0, xmm7; x
  }
  CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest, fromServer, duration);
  __asm { vmovss  xmm6, cs:__real@43600000 }
  v24 = 0;
  if ( pInst->m_NumSubtrees > 0 )
  {
    m_Subtrees = (const ASM ***)pInst->m_Subtrees;
    __asm
    {
      vmovaps [rsp+4D8h+var_78], xmm8
      vmovss  xmm8, cs:__real@41400000
    }
    do
    {
      v27 = *m_Subtrees;
      v28 = Common_Asm::Utils::GetState(**m_Subtrees, *((_DWORD *)*m_Subtrees + 4));
      v29 = SL_ConvertToString(v28->m_Name);
      Com_sprintf(dest, 0x400ui64, " %s | %s", (*v27)->m_szName, v29);
      __asm
      {
        vmovaps xmm3, xmm9; scale
        vmovaps xmm1, xmm6; y
        vmovaps xmm0, xmm7; x
      }
      CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest, fromServer, duration);
      ++v24;
      ++m_Subtrees;
      __asm { vaddss  xmm6, xmm6, xmm8 }
    }
    while ( v24 < pInst->m_NumSubtrees );
    __asm { vmovaps xmm8, [rsp+4D8h+var_78] }
  }
  __asm
  {
    vmovss  xmm3, cs:__real@43c80000; topLeftY
    vmovaps xmm2, xmm7; topLeftX
  }
  Common_Asm::Utils::DebugRender_Events(pInst, pEphemeralEventTable, *(float *)&_XMM2, *(float *)&_XMM3, fromServer, duration);
  _R11 = &v42;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-58h]
  }
}

/*
==============
Common_Asm::Utils::DebugRender_Events
==============
*/

void __fastcall Common_Asm::Utils::DebugRender_Events(const ASM_Instance *pInst, const ASM_EphemeralEvent *pEphemeralEventTable, double topLeftX, double topLeftY, bool bFromServer, int duration)
{
  const ASM_EphemeralEvent *v11; 
  int *p_m_Time; 
  __int64 v22; 
  scr_string_t v23; 
  int v24; 
  const char *v25; 
  int v29; 
  ASM_Instance **m_Subtrees; 
  const char ***v31; 
  unsigned int *v35; 
  __int64 v36; 
  scr_string_t v37; 
  int v38; 
  const char *v39; 
  int *p_m_ParamID; 
  __int64 v49; 
  scr_string_t v50; 
  int v51; 
  const char *v52; 
  const char *v53; 
  __int64 fromServer; 
  __int64 fromServera; 
  __int64 v64; 
  char dest[256]; 
  char v67; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm7
    vmovaps xmmword ptr [r11-78h], xmm8
    vmovaps xmmword ptr [r11-88h], xmm9
  }
  v11 = pEphemeralEventTable;
  __asm
  {
    vmovaps xmm6, xmm3
    vmovaps xmm8, xmm2
  }
  Com_sprintf(dest, 0x100ui64, "Events: %s", pInst->m_pASM->m_szName);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovaps xmm3, xmm9; scale
    vmovaps xmm1, xmm6; y
    vmovaps xmm0, xmm8; x
  }
  CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest, bFromServer, duration);
  __asm
  {
    vmovss  xmm7, cs:__real@41500000
    vaddss  xmm6, xmm6, xmm7
  }
  p_m_Time = &pInst->m_EventTable[0].m_Time;
  v22 = 8i64;
  do
  {
    v23 = *(p_m_Time - 2);
    if ( v23 )
    {
      v24 = *(p_m_Time - 1);
      v25 = SL_ConvertToString(v23);
      LODWORD(fromServer) = v24;
      Com_sprintf(dest, 0x100ui64, "%d  %s  %d", (unsigned int)*p_m_Time, v25, fromServer);
      __asm
      {
        vmovaps xmm3, xmm9; scale
        vmovaps xmm1, xmm6; y
        vmovaps xmm0, xmm8; x
      }
      CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest, bFromServer, duration);
      __asm { vaddss  xmm6, xmm6, xmm7 }
    }
    p_m_Time += 3;
    --v22;
  }
  while ( v22 );
  v29 = 0;
  if ( pInst->m_NumSubtrees > 0 )
  {
    m_Subtrees = pInst->m_Subtrees;
    do
    {
      v31 = (const char ***)*m_Subtrees;
      if ( (*m_Subtrees)->m_EventTable[0].m_Name )
      {
        Com_sprintf(dest, 0x100ui64, " Events: %s", **v31);
        __asm
        {
          vmovaps xmm3, xmm9; scale
          vmovaps xmm1, xmm6; y
          vmovaps xmm0, xmm8; x
        }
        CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest, bFromServer, duration);
        v35 = (unsigned int *)(v31 + 10);
        v36 = 8i64;
        __asm { vaddss  xmm6, xmm6, xmm7 }
        do
        {
          v37 = *(v35 - 2);
          if ( v37 )
          {
            v38 = *(v35 - 1);
            v39 = SL_ConvertToString(v37);
            LODWORD(fromServera) = v38;
            Com_sprintf(dest, 0x100ui64, " %d  %s  %d", *v35, v39, fromServera);
            __asm
            {
              vmovaps xmm3, xmm9; scale
              vmovaps xmm1, xmm6; y
              vmovaps xmm0, xmm8; x
            }
            CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest, bFromServer, duration);
            __asm { vaddss  xmm6, xmm6, xmm7 }
          }
          v35 += 3;
          --v36;
        }
        while ( v36 );
      }
      ++v29;
      ++m_Subtrees;
    }
    while ( v29 < pInst->m_NumSubtrees );
    v11 = pEphemeralEventTable;
  }
  __asm { vaddss  xmm6, xmm6, xmm7 }
  if ( v11 )
  {
    __asm
    {
      vmovaps xmm3, xmm9; scale
      vmovaps xmm1, xmm6; y
      vmovaps xmm0, xmm8; x
    }
    CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, "Ephemeral Events:", bFromServer, duration);
    __asm { vaddss  xmm6, xmm6, xmm7 }
    p_m_ParamID = &v11->m_ParamID;
    v49 = 6i64;
    do
    {
      v50 = *(p_m_ParamID - 1);
      if ( v50 )
      {
        v51 = *p_m_ParamID;
        v52 = SL_ConvertToString(v50);
        v53 = SL_ConvertToString((scr_string_t)*(p_m_ParamID - 2));
        LODWORD(v64) = v51;
        Com_sprintf(dest, 0x100ui64, "%d  %s %s  %d", (unsigned int)p_m_ParamID[1], v53, v52, v64);
        __asm
        {
          vmovaps xmm3, xmm9; scale
          vmovaps xmm1, xmm6; y
          vmovaps xmm0, xmm8; x
        }
        CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest, bFromServer, duration);
        __asm { vaddss  xmm6, xmm6, xmm7 }
      }
      p_m_ParamID += 4;
      --v49;
    }
    while ( v49 );
  }
  _R11 = &v67;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm8, xmmword ptr [r11-48h]
    vmovaps xmm9, xmmword ptr [r11-58h]
  }
}

/*
==============
Common_Asm::Utils::DebugRender_States3D
==============
*/
void Common_Asm::Utils::DebugRender_States3D(const ASM_Instance *pInst, bool bShouldDrawHistory, vec3_t *drawPos, bool bFromServer, int duration)
{
  const ASM *m_pASM; 
  const vec4_t *v11; 
  int m_CurState; 
  int fromServer; 
  const ASM_State *State; 
  const char *v17; 
  int v22; 
  const ASM ***m_Subtrees; 
  const ASM **v25; 
  const ASM_State *v26; 
  const char *v27; 
  ASM_History *HistoryObject; 
  ASM_History *v32; 
  unsigned int Index; 
  unsigned int v34; 
  unsigned __int64 v35; 
  __int64 v36; 
  unsigned int *v37; 
  int v38; 
  vec4_t *p_color; 
  const ASM_State *v42; 
  const char *v43; 
  __int64 v49; 
  const ASM_State *v50; 
  const char *v51; 
  unsigned int v61; 
  ASM *pASM; 
  ASM_History *v63; 
  vec4_t result; 
  vec4_t v65; 
  vec4_t v66; 
  __int128 v67; 
  vec4_t color; 
  vec4_t v69; 
  char dest[1024]; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovss  xmm0, dword ptr [r8+8]
  }
  m_pASM = pInst->m_pASM;
  __asm { vaddss  xmm1, xmm0, cs:__real@42a00000 }
  v11 = &colorRed;
  m_CurState = pInst->m_CurState;
  fromServer = bFromServer;
  pASM = (ASM *)pInst->m_pASM;
  __asm { vmovss  dword ptr [r8+8], xmm1 }
  _RDI = drawPos;
  if ( bFromServer )
    v11 = &colorOrange;
  State = Common_Asm::Utils::GetState(m_pASM, m_CurState);
  v17 = SL_ConvertToString(State->m_Name);
  Com_sprintf(dest, 0x400ui64, "%d %s | %s", (unsigned int)pInst->m_EntNum, m_pASM->m_szName, v17);
  __asm
  {
    vmovss  xmm6, cs:__real@3f000000
    vmovaps xmm2, xmm6; scale
  }
  CL_AddDebugString(_RDI, v11, *(float *)&_XMM2, dest, fromServer, duration);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  xmm7, cs:__real@41000000
  }
  v22 = 0;
  __asm
  {
    vsubss  xmm0, xmm0, xmm7
    vmovss  dword ptr [rdi+8], xmm0
  }
  if ( pInst->m_NumSubtrees > 0 )
  {
    m_Subtrees = (const ASM ***)pInst->m_Subtrees;
    do
    {
      v25 = *m_Subtrees;
      v26 = Common_Asm::Utils::GetState(**m_Subtrees, *((_DWORD *)*m_Subtrees + 4));
      v27 = SL_ConvertToString(v26->m_Name);
      Com_sprintf(dest, 0x400ui64, " %s | %s", (*v25)->m_szName, v27);
      __asm { vmovaps xmm2, xmm6; scale }
      CL_AddDebugString(_RDI, v11, *(float *)&_XMM2, dest, fromServer, duration);
      __asm { vmovss  xmm0, dword ptr [rdi+8] }
      ++v22;
      ++m_Subtrees;
      __asm
      {
        vsubss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rdi+8], xmm1
      }
    }
    while ( v22 < pInst->m_NumSubtrees );
    m_pASM = pASM;
  }
  if ( bShouldDrawHistory )
  {
    HistoryObject = ASM_GetHistoryObject(pInst->m_EntNum);
    v63 = HistoryObject;
    v32 = HistoryObject;
    if ( HistoryObject )
    {
      Index = ASM_History::BeginIndex(HistoryObject);
      v34 = 0;
      v61 = ASM_History::Size(v32);
      if ( v61 )
      {
        do
        {
          v35 = (unsigned __int64)Index << 6;
          v36 = *(unsigned int *)((char *)&v32->m_events[0].m_time + v35);
          v37 = (unsigned int *)((char *)v32->m_events + v35);
          if ( (int)v36 < 0 )
            break;
          v38 = *(int *)((char *)&v32->m_events[0].m_fromState + v35);
          if ( v38 >= 0 )
          {
            v42 = Common_Asm::Utils::GetState(m_pASM, v38);
            v43 = SL_ConvertToString(v42->m_Name);
            Com_sprintf(dest, 0x400ui64, "t:%d %s", *v37, v43);
            _RAX = ASM_History::GetColor(&v65, Index);
            p_color = &color;
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vmovups xmmword ptr [rsp+518h+color], xmm0
            }
          }
          else
          {
            Com_sprintf(dest, 0x400ui64, "t:%d start", v36);
            _RAX = ASM_History::GetColor(&result, Index);
            p_color = (vec4_t *)&v67;
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vmovups [rsp+518h+var_4A0], xmm0
            }
          }
          __asm { vmovaps xmm2, xmm6; scale }
          CL_AddDebugString(_RDI, p_color, *(float *)&_XMM2, dest, fromServer, duration);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+8]
            vsubss  xmm1, xmm0, xmm7
            vmovss  dword ptr [rdi+8], xmm1
          }
          if ( v37[2] )
          {
            v49 = 0i64;
            do
            {
              v50 = Common_Asm::Utils::GetState(pASM, **(_DWORD **)&v37[2 * v49 + 4]);
              v51 = SL_ConvertToString(v50->m_Name);
              Com_sprintf(dest, 0x400ui64, "|_> %s", v51);
              _RAX = ASM_History::GetColor(&v66, Index);
              __asm
              {
                vmovaps xmm2, xmm6; scale
                vmovups xmm0, xmmword ptr [rax]
                vmovups xmmword ptr [rsp+518h+var_480], xmm0
              }
              CL_AddDebugString(_RDI, &v69, *(float *)&_XMM2, dest, fromServer, duration);
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+8]
                vsubss  xmm1, xmm0, xmm7
              }
              v49 = (unsigned int)(v49 + 1);
              __asm { vmovss  dword ptr [rdi+8], xmm1 }
            }
            while ( (unsigned int)v49 < v37[2] );
            v32 = v63;
          }
          m_pASM = pASM;
          ++v34;
          Index = ASM_History::NextIndex(v32, Index);
        }
        while ( v34 < v61 );
      }
    }
  }
  _R11 = &v71;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Common_Asm::Utils::EventFired
==============
*/
char Common_Asm::Utils::EventFired(const ASM_Instance *pInst, int numEvents, const scr_string_t eventName)
{
  __int64 v3; 
  __int64 v6; 
  ASM_Event *i; 

  v3 = numEvents;
  if ( numEvents > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 188, ASSERT_TYPE_ASSERT, "(numEvents <= MAX_ASM_EVENTS_PER_TABLE)", (const char *)&queryFormat, "numEvents <= MAX_ASM_EVENTS_PER_TABLE") )
    __debugbreak();
  if ( (int)v3 <= 0 )
    return 0;
  v6 = 0i64;
  for ( i = pInst->m_EventTable; i->m_Name != eventName; ++i )
  {
    if ( ++v6 >= v3 )
      return 0;
  }
  return 1;
}

/*
==============
Common_Asm::Utils::EventFired
==============
*/
char Common_Asm::Utils::EventFired(const ASM_Instance *pInst, const scr_string_t eventName)
{
  __int64 v2; 
  ASM_Event *i; 

  v2 = 0i64;
  for ( i = pInst->m_EventTable; i->m_Name != eventName; ++i )
  {
    if ( ++v2 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
Common_Asm::Utils::FindEventFor
==============
*/
ASM_Event *Common_Asm::Utils::FindEventFor(ASM_Event *eventTable, const scr_string_t eventName)
{
  ASM_Event *v2; 
  int m_Time; 
  int v4; 
  ASM_Event *v5; 
  int v6; 
  scr_string_t m_Name; 

  v2 = NULL;
  m_Time = 0x7FFFFFFF;
  v4 = 0;
  v5 = eventTable;
  v6 = -1;
  while ( 1 )
  {
    m_Name = v5->m_Name;
    if ( v5->m_Name && v5->m_Time < m_Time )
    {
      v6 = v4;
      m_Time = v5->m_Time;
    }
    if ( v2 || m_Name )
      break;
    v2 = &eventTable[v4];
LABEL_10:
    ++v4;
    ++v5;
    if ( v4 >= 8 )
      goto LABEL_13;
  }
  if ( !eventName || m_Name != eventName )
    goto LABEL_10;
  v2 = &eventTable[v4];
LABEL_13:
  if ( v2 || v6 < 0 )
    return v2;
  else
    return &eventTable[v6];
}

/*
==============
Common_Asm::Utils::GetCurrentStateByAssetName
==============
*/
const ASM_State *Common_Asm::Utils::GetCurrentStateByAssetName(const ASM_Instance *pInst, scr_string_t asmName)
{
  const ASM_Instance *v3; 
  const ASM_State *result; 

  v3 = pInst;
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 210, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( v3->m_pASM->m_Name == asmName )
    return Common_Asm::Utils::GetState(v3->m_pASM, v3->m_CurState);
  result = (const ASM_State *)Common_Asm::Utils::GetSubtree(v3, asmName);
  v3 = (const ASM_Instance *)result;
  if ( result )
    return Common_Asm::Utils::GetState(v3->m_pASM, v3->m_CurState);
  return result;
}

/*
==============
Common_Asm::Utils::GetEventTime
==============
*/
__int64 Common_Asm::Utils::GetEventTime(const ASM_Instance *pInst, scr_string_t eventName)
{
  ASM_Event *m_EventTable; 
  __int64 v5; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 239, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  m_EventTable = pInst->m_EventTable;
  v5 = 0i64;
  while ( m_EventTable->m_Name != eventName )
  {
    ++v5;
    ++m_EventTable;
    if ( v5 >= 8 )
      return 0i64;
  }
  return (unsigned int)m_EventTable->m_Time;
}

/*
==============
Common_Asm::Utils::GetLogicGroup
==============
*/
ASM_LogicGroup *Common_Asm::Utils::GetLogicGroup(const ASM *pASM, int logicID)
{
  __int64 v2; 
  __int64 v5; 

  v2 = logicID;
  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 50, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( (unsigned int)v2 >= pASM->m_NumLogicGroups )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 51, ASSERT_TYPE_ASSERT, "(unsigned)( logicID ) < (unsigned)( pASM->m_NumLogicGroups )", "logicID doesn't index pASM->m_NumLogicGroups\n\t%i not in [0, %i)", v5, pASM->m_NumLogicGroups) )
      __debugbreak();
  }
  return &pASM->m_LogicGroups[v2];
}

/*
==============
Common_Asm::Utils::GetState
==============
*/
ASM_State *Common_Asm::Utils::GetState(const ASM *pASM, int stateID)
{
  __int64 v2; 
  __int64 v5; 

  v2 = stateID;
  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 16, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( (unsigned int)v2 >= pASM->m_NumStates )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 17, ASSERT_TYPE_ASSERT, "(unsigned)( stateID ) < (unsigned)( pASM->m_NumStates )", "stateID doesn't index pASM->m_NumStates\n\t%i not in [0, %i)", v5, pASM->m_NumStates) )
      __debugbreak();
  }
  return &pASM->m_States[v2];
}

/*
==============
Common_Asm::Utils::GetStateTransitioningFrom
==============
*/
const ASM_State *Common_Asm::Utils::GetStateTransitioningFrom(const ASM_Instance *pInst)
{
  int m_PrevState; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 227, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  m_PrevState = pInst->m_PrevState;
  if ( m_PrevState == -1 )
    return 0i64;
  else
    return Common_Asm::Utils::GetState(pInst->m_pASM, m_PrevState);
}

/*
==============
Common_Asm::Utils::GetSubtree
==============
*/
ASM_Instance *Common_Asm::Utils::GetSubtree(const ASM_Instance *pInst, const scr_string_t subtreeName)
{
  int v4; 
  ASM_Instance **i; 
  ASM_Instance *result; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 79, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  v4 = 0;
  if ( pInst->m_NumSubtrees <= 0 )
    return 0i64;
  for ( i = pInst->m_Subtrees; (*i)->m_pASM->m_Name != subtreeName; ++i )
  {
    result = Common_Asm::Utils::GetSubtree(*i, subtreeName);
    if ( result )
      return result;
    if ( ++v4 >= pInst->m_NumSubtrees )
      return 0i64;
  }
  return *i;
}

/*
==============
Common_Asm::HasState
==============
*/
bool Common_Asm::HasState(Common_Asm *this, const ASM *pASM, __int64 stateName)
{
  return this->GetStateByName(this, pASM, stateName) != NULL;
}

/*
==============
Common_Asm::Utils::LogicGroup_IsAncestorOf
==============
*/
char Common_Asm::Utils::LogicGroup_IsAncestorOf(const ASM *pASM, int possibleAncestorGroupID, int groupID)
{
  unsigned int m_ParentID; 
  ASM_LogicGroup *v6; 
  __int64 v8; 
  __int64 v9; 

  m_ParentID = groupID;
  if ( possibleAncestorGroupID == -1 || groupID == -1 )
    return 0;
  while ( m_ParentID != possibleAncestorGroupID )
  {
    if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 50, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
      __debugbreak();
    if ( m_ParentID >= pASM->m_NumLogicGroups )
    {
      LODWORD(v9) = pASM->m_NumLogicGroups;
      LODWORD(v8) = m_ParentID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 51, ASSERT_TYPE_ASSERT, "(unsigned)( logicID ) < (unsigned)( pASM->m_NumLogicGroups )", "logicID doesn't index pASM->m_NumLogicGroups\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v6 = &pASM->m_LogicGroups[m_ParentID];
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_util.cpp", 69, ASSERT_TYPE_ASSERT, "(pGroup)", (const char *)&queryFormat, "pGroup") )
      __debugbreak();
    m_ParentID = v6->m_ParentID;
    if ( m_ParentID == -1 )
      return 0;
  }
  return 1;
}

/*
==============
Common_Asm::Utils::StateHasSubtree
==============
*/
char Common_Asm::Utils::StateHasSubtree(const ASM_State *pState, const scr_string_t subtreeName)
{
  __int64 v2; 
  scr_string_t *i; 

  if ( pState->m_NumSubtrees <= 0 )
    return 0;
  v2 = 0i64;
  for ( i = pState->m_Subtrees; *i != subtreeName; ++i )
  {
    if ( ++v2 >= pState->m_NumSubtrees )
      return 0;
  }
  return 1;
}

