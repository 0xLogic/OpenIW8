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
  const char *v9; 
  __int128 v10; 
  int v11; 
  const ASM ***m_Subtrees; 
  const ASM **v13; 
  const ASM_State *v14; 
  const char *v15; 
  __int128 v16; 
  char dest[1024]; 

  fromServer = bFromServer;
  Com_sprintf(dest, 0x400ui64, "Ent: %d", (unsigned int)pInst->m_EntNum);
  CL_AddDebugString2D(100.0, 200.0, &colorYellow, 1.0, dest, fromServer, duration);
  State = Common_Asm::Utils::GetState(pInst->m_pASM, pInst->m_CurState);
  v9 = SL_ConvertToString(State->m_Name);
  Com_sprintf(dest, 0x400ui64, "%s | %s", pInst->m_pASM->m_szName, v9);
  CL_AddDebugString2D(100.0, 212.0, &colorYellow, 1.0, dest, fromServer, duration);
  v10 = LODWORD(FLOAT_224_0);
  v11 = 0;
  if ( pInst->m_NumSubtrees > 0 )
  {
    m_Subtrees = (const ASM ***)pInst->m_Subtrees;
    do
    {
      v13 = *m_Subtrees;
      v14 = Common_Asm::Utils::GetState(**m_Subtrees, *((_DWORD *)*m_Subtrees + 4));
      v15 = SL_ConvertToString(v14->m_Name);
      Com_sprintf(dest, 0x400ui64, " %s | %s", (*v13)->m_szName, v15);
      CL_AddDebugString2D(100.0, *(float *)&v10, &colorYellow, 1.0, dest, fromServer, duration);
      ++v11;
      ++m_Subtrees;
      v16 = v10;
      *(float *)&v16 = *(float *)&v10 + 12.0;
      v10 = v16;
    }
    while ( v11 < pInst->m_NumSubtrees );
  }
  Common_Asm::Utils::DebugRender_Events(pInst, pEphemeralEventTable, 100.0, 400.0, fromServer, duration);
}

/*
==============
Common_Asm::Utils::DebugRender_Events
==============
*/

void __fastcall Common_Asm::Utils::DebugRender_Events(const ASM_Instance *pInst, const ASM_EphemeralEvent *pEphemeralEventTable, float topLeftX, double topLeftY, bool bFromServer, int duration)
{
  const ASM_EphemeralEvent *v6; 
  __int128 v8; 
  __int128 v9; 
  int *p_m_Time; 
  __int64 v11; 
  scr_string_t v12; 
  int v13; 
  const char *v14; 
  __int128 v15; 
  int v16; 
  ASM_Instance **m_Subtrees; 
  const char ***v18; 
  unsigned int *v19; 
  __int64 v20; 
  __int128 v21; 
  scr_string_t v22; 
  int v23; 
  const char *v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  int *p_m_ParamID; 
  __int64 v29; 
  scr_string_t v30; 
  int v31; 
  const char *v32; 
  const char *v33; 
  __int128 v34; 
  __int64 fromServer; 
  __int64 fromServera; 
  __int64 v37; 
  char dest[256]; 

  v6 = pEphemeralEventTable;
  Com_sprintf(dest, 0x100ui64, "Events: %s", pInst->m_pASM->m_szName);
  CL_AddDebugString2D(topLeftX, *(float *)&topLeftY, &colorYellow, 1.0, dest, bFromServer, duration);
  v9 = *(_OWORD *)&topLeftY;
  *(float *)&v9 = *(float *)&topLeftY + 13.0;
  v8 = v9;
  p_m_Time = &pInst->m_EventTable[0].m_Time;
  v11 = 8i64;
  do
  {
    v12 = *(p_m_Time - 2);
    if ( v12 )
    {
      v13 = *(p_m_Time - 1);
      v14 = SL_ConvertToString(v12);
      LODWORD(fromServer) = v13;
      Com_sprintf(dest, 0x100ui64, "%d  %s  %d", (unsigned int)*p_m_Time, v14, fromServer);
      CL_AddDebugString2D(topLeftX, *(float *)&v8, &colorYellow, 1.0, dest, bFromServer, duration);
      v15 = v8;
      *(float *)&v15 = *(float *)&v8 + 13.0;
      v8 = v15;
    }
    p_m_Time += 3;
    --v11;
  }
  while ( v11 );
  v16 = 0;
  if ( pInst->m_NumSubtrees > 0 )
  {
    m_Subtrees = pInst->m_Subtrees;
    do
    {
      v18 = (const char ***)*m_Subtrees;
      if ( (*m_Subtrees)->m_EventTable[0].m_Name )
      {
        Com_sprintf(dest, 0x100ui64, " Events: %s", **v18);
        CL_AddDebugString2D(topLeftX, *(float *)&v8, &colorYellow, 1.0, dest, bFromServer, duration);
        v19 = (unsigned int *)(v18 + 10);
        v20 = 8i64;
        v21 = v8;
        *(float *)&v21 = *(float *)&v8 + 13.0;
        v8 = v21;
        do
        {
          v22 = *(v19 - 2);
          if ( v22 )
          {
            v23 = *(v19 - 1);
            v24 = SL_ConvertToString(v22);
            LODWORD(fromServera) = v23;
            Com_sprintf(dest, 0x100ui64, " %d  %s  %d", *v19, v24, fromServera);
            CL_AddDebugString2D(topLeftX, *(float *)&v8, &colorYellow, 1.0, dest, bFromServer, duration);
            v25 = v8;
            *(float *)&v25 = *(float *)&v8 + 13.0;
            v8 = v25;
          }
          v19 += 3;
          --v20;
        }
        while ( v20 );
      }
      ++v16;
      ++m_Subtrees;
    }
    while ( v16 < pInst->m_NumSubtrees );
    v6 = pEphemeralEventTable;
  }
  v26 = v8;
  *(float *)&v26 = *(float *)&v8 + 13.0;
  if ( v6 )
  {
    CL_AddDebugString2D(topLeftX, *(float *)&v26, &colorYellow, 1.0, "Ephemeral Events:", bFromServer, duration);
    *(float *)&v26 = *(float *)&v26 + 13.0;
    v27 = v26;
    p_m_ParamID = &v6->m_ParamID;
    v29 = 6i64;
    do
    {
      v30 = *(p_m_ParamID - 1);
      if ( v30 )
      {
        v31 = *p_m_ParamID;
        v32 = SL_ConvertToString(v30);
        v33 = SL_ConvertToString((scr_string_t)*(p_m_ParamID - 2));
        LODWORD(v37) = v31;
        Com_sprintf(dest, 0x100ui64, "%d  %s %s  %d", (unsigned int)p_m_ParamID[1], v33, v32, v37);
        CL_AddDebugString2D(topLeftX, *(float *)&v27, &colorYellow, 1.0, dest, bFromServer, duration);
        v34 = v27;
        *(float *)&v34 = *(float *)&v27 + 13.0;
        v27 = v34;
      }
      p_m_ParamID += 4;
      --v29;
    }
    while ( v29 );
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
  const vec4_t *v6; 
  int m_CurState; 
  int fromServer; 
  const ASM_State *State; 
  const char *v12; 
  int v13; 
  const ASM ***m_Subtrees; 
  const ASM **v15; 
  const ASM_State *v16; 
  const char *v17; 
  ASM_History *HistoryObject; 
  ASM_History *v19; 
  unsigned int Index; 
  unsigned int v21; 
  unsigned __int64 v22; 
  __int64 v23; 
  unsigned int *v24; 
  int v25; 
  __int128 *v26; 
  vec4_t *p_color; 
  const ASM_State *v28; 
  const char *v29; 
  vec4_t *v30; 
  __int64 v31; 
  const ASM_State *v32; 
  const char *v33; 
  unsigned int v35; 
  ASM *pASM; 
  ASM_History *v37; 
  vec4_t result; 
  vec4_t v39; 
  vec4_t v40; 
  __int128 v41; 
  vec4_t color; 
  vec4_t v43; 
  char dest[1024]; 

  m_pASM = pInst->m_pASM;
  v6 = &colorRed;
  m_CurState = pInst->m_CurState;
  fromServer = bFromServer;
  pASM = (ASM *)pInst->m_pASM;
  drawPos->v[2] = drawPos->v[2] + 80.0;
  if ( bFromServer )
    v6 = &colorOrange;
  State = Common_Asm::Utils::GetState(m_pASM, m_CurState);
  v12 = SL_ConvertToString(State->m_Name);
  Com_sprintf(dest, 0x400ui64, "%d %s | %s", (unsigned int)pInst->m_EntNum, m_pASM->m_szName, v12);
  CL_AddDebugString(drawPos, v6, 0.5, dest, fromServer, duration);
  v13 = 0;
  drawPos->v[2] = drawPos->v[2] - 8.0;
  if ( pInst->m_NumSubtrees > 0 )
  {
    m_Subtrees = (const ASM ***)pInst->m_Subtrees;
    do
    {
      v15 = *m_Subtrees;
      v16 = Common_Asm::Utils::GetState(**m_Subtrees, *((_DWORD *)*m_Subtrees + 4));
      v17 = SL_ConvertToString(v16->m_Name);
      Com_sprintf(dest, 0x400ui64, " %s | %s", (*v15)->m_szName, v17);
      CL_AddDebugString(drawPos, v6, 0.5, dest, fromServer, duration);
      ++v13;
      ++m_Subtrees;
      drawPos->v[2] = drawPos->v[2] - 8.0;
    }
    while ( v13 < pInst->m_NumSubtrees );
    m_pASM = pASM;
  }
  if ( bShouldDrawHistory )
  {
    HistoryObject = ASM_GetHistoryObject(pInst->m_EntNum);
    v37 = HistoryObject;
    v19 = HistoryObject;
    if ( HistoryObject )
    {
      Index = ASM_History::BeginIndex(HistoryObject);
      v21 = 0;
      v35 = ASM_History::Size(v19);
      if ( v35 )
      {
        do
        {
          v22 = (unsigned __int64)Index << 6;
          v23 = *(unsigned int *)((char *)&v19->m_events[0].m_time + v22);
          v24 = (unsigned int *)((char *)v19->m_events + v22);
          if ( (int)v23 < 0 )
            break;
          v25 = *(int *)((char *)&v19->m_events[0].m_fromState + v22);
          if ( v25 >= 0 )
          {
            v28 = Common_Asm::Utils::GetState(m_pASM, v25);
            v29 = SL_ConvertToString(v28->m_Name);
            Com_sprintf(dest, 0x400ui64, "t:%d %s", *v24, v29);
            v30 = ASM_History::GetColor(&v39, Index);
            p_color = &color;
            color = *v30;
          }
          else
          {
            Com_sprintf(dest, 0x400ui64, "t:%d start", v23);
            v26 = (__int128 *)ASM_History::GetColor(&result, Index);
            p_color = (vec4_t *)&v41;
            v41 = *v26;
          }
          CL_AddDebugString(drawPos, p_color, 0.5, dest, fromServer, duration);
          drawPos->v[2] = drawPos->v[2] - 8.0;
          if ( v24[2] )
          {
            v31 = 0i64;
            do
            {
              v32 = Common_Asm::Utils::GetState(pASM, **(_DWORD **)&v24[2 * v31 + 4]);
              v33 = SL_ConvertToString(v32->m_Name);
              Com_sprintf(dest, 0x400ui64, "|_> %s", v33);
              v43 = *ASM_History::GetColor(&v40, Index);
              CL_AddDebugString(drawPos, &v43, 0.5, dest, fromServer, duration);
              v31 = (unsigned int)(v31 + 1);
              drawPos->v[2] = drawPos->v[2] - 8.0;
            }
            while ( (unsigned int)v31 < v24[2] );
            v19 = v37;
          }
          m_pASM = pASM;
          ++v21;
          Index = ASM_History::NextIndex(v19, Index);
        }
        while ( v21 < v35 );
      }
    }
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

