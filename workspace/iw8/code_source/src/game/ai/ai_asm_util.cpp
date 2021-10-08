/*
==============
Ai_Asm::RunStartAim
==============
*/

void __fastcall Ai_Asm::RunStartAim(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t stateName, const scr_string_t prevStateName)
{
  ?RunStartAim@Ai_Asm@@QEAAXW4scr_string_t@@H00@Z(this, asmName, entNum, stateName, prevStateName);
}

/*
==============
Ai_Asm::GetGenericHandler
==============
*/

int __fastcall Ai_Asm::GetGenericHandler(ASM *pASM)
{
  return ?GetGenericHandler@Ai_Asm@@SAHPEAUASM@@@Z(pASM);
}

/*
==============
Ai_Asm::RunSetArchetype
==============
*/

void __fastcall Ai_Asm::RunSetArchetype(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t archetype)
{
  ?RunSetArchetype@Ai_Asm@@QEAAXW4scr_string_t@@H0@Z(this, asmName, entNum, archetype);
}

/*
==============
Ai_Asm::RunSetAnimMode
==============
*/

void __fastcall Ai_Asm::RunSetAnimMode(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t animMode)
{
  ?RunSetAnimMode@Ai_Asm@@QEAAXW4scr_string_t@@H0@Z(this, asmName, entNum, animMode);
}

/*
==============
Ai_Asm::RunMoveThreads
==============
*/

void __fastcall Ai_Asm::RunMoveThreads(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t stateName)
{
  ?RunMoveThreads@Ai_Asm@@QEAAXW4scr_string_t@@H0@Z(this, asmName, entNum, stateName);
}

/*
==============
Ai_Asm::Notify
==============
*/

void __fastcall Ai_Asm::Notify(Ai_Asm *this, int entNum, const char *szNotify)
{
  ?Notify@Ai_Asm@@QEAAXHPEBD@Z(this, entNum, szNotify);
}

/*
==============
Ai_Asm::RunSetOrientMode
==============
*/

void __fastcall Ai_Asm::RunSetOrientMode(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t orientMode)
{
  ?RunSetOrientMode@Ai_Asm@@QEAAXW4scr_string_t@@H0@Z(this, asmName, entNum, orientMode);
}

/*
==============
Ai_Asm::RunStartGesture
==============
*/

void __fastcall Ai_Asm::RunStartGesture(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t stateName)
{
  ?RunStartGesture@Ai_Asm@@QEAAXW4scr_string_t@@H0@Z(this, asmName, entNum, stateName);
}

/*
==============
Ai_Asm::RunNoteHandler
==============
*/

void __fastcall Ai_Asm::RunNoteHandler(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t notifyName, const scr_string_t notetrackName)
{
  ?RunNoteHandler@Ai_Asm@@QEAAXW4scr_string_t@@H00@Z(this, asmName, entNum, notifyName, notetrackName);
}

/*
==============
Ai_Asm::GetFunction
==============
*/

int __fastcall Ai_Asm::GetFunction(ASM *pASM, int funcID)
{
  return ?GetFunction@Ai_Asm@@SAHPEAUASM@@H@Z(pASM, funcID);
}

/*
==============
Ai_Asm::RunDoorThread
==============
*/

void __fastcall Ai_Asm::RunDoorThread(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t stateName, bool bSkipDoorAnim)
{
  ?RunDoorThread@Ai_Asm@@QEAAXW4scr_string_t@@H0_N@Z(this, asmName, entNum, stateName, bSkipDoorAnim);
}

/*
==============
Ai_Asm::RunSetPose
==============
*/

void __fastcall Ai_Asm::RunSetPose(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t pose)
{
  ?RunSetPose@Ai_Asm@@QEAAXW4scr_string_t@@H0@Z(this, asmName, entNum, pose);
}

/*
==============
Ai_Asm::GetFunction
==============
*/
__int64 Ai_Asm::GetFunction(ASM *pASM, int funcID)
{
  __int64 v2; 
  __int64 result; 
  GameScriptData *GameScriptDataCommon; 
  scrContext_t *v6; 
  unsigned int v7; 
  void *outReturnValue; 
  unsigned int v9; 

  v2 = funcID;
  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 24, ASSERT_TYPE_ASSERT, "( pASM )", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  if ( (unsigned int)v2 >= pASM->m_NumFuncIDs )
  {
    LODWORD(outReturnValue) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 25, ASSERT_TYPE_ASSERT, "(unsigned)( funcID ) < (unsigned)( pASM->m_NumFuncIDs )", "funcID doesn't index pASM->m_NumFuncIDs\n\t%i not in [0, %i)", outReturnValue, pASM->m_NumFuncIDs) )
      __debugbreak();
  }
  result = (unsigned int)pASM->m_FuncIDs[v2];
  if ( (_DWORD)result == -1 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_GetFunc");
    GameScriptDataCommon = GameScriptData::GetGameScriptDataCommon();
    if ( !GameScriptDataCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 33, ASSERT_TYPE_ASSERT, "(gScrData)", (const char *)&queryFormat, "gScrData") )
      __debugbreak();
    v6 = ScriptContext_Server();
    Scr_AddInt(v6, v2);
    Scr_AddConstString(v6, pASM->m_Name);
    v7 = Scr_ExecThreadWithReturnValue(v6, GameScriptDataCommon->ai_asm_getfunction, 2u, Scr_ExecThreadCallback_Func, NULL, &v9);
    Scr_FreeThread(v6, v7);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 43, ASSERT_TYPE_ASSERT, "( func )", (const char *)&queryFormat, "func") )
      __debugbreak();
    pASM->m_FuncIDs[v2] = v9;
    Sys_ProfEndNamedEvent();
    return v9;
  }
  return result;
}

/*
==============
Ai_Asm::GetGenericHandler
==============
*/
__int64 Ai_Asm::GetGenericHandler(ASM *pASM)
{
  bool v2; 
  __int64 result; 
  GameScriptData *GameScriptDataCommon; 
  scrContext_t *v5; 
  unsigned int v6; 
  unsigned int outReturnValue; 

  if ( !pASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 53, ASSERT_TYPE_ASSERT, "( pASM )", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  v2 = pASM->m_Mode == ASM_MODE_AI;
  result = 0xFFFFFFFFi64;
  outReturnValue = -1;
  if ( v2 )
  {
    result = (unsigned int)pASM->u.m_AIASM->m_ScriptHandler;
    if ( (_DWORD)result == -1 )
    {
      GameScriptDataCommon = GameScriptData::GetGameScriptDataCommon();
      if ( !GameScriptDataCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 63, ASSERT_TYPE_ASSERT, "(gScrData)", (const char *)&queryFormat, "gScrData") )
        __debugbreak();
      v5 = ScriptContext_Server();
      v6 = Scr_ExecThreadWithReturnValue(v5, GameScriptDataCommon->ai_asm_getgenerichandler, 0, Scr_ExecThreadCallback_Func, NULL, &outReturnValue);
      Scr_FreeThread(v5, v6);
      pASM->u.m_AIASM->m_ScriptHandler = outReturnValue;
      return outReturnValue;
    }
  }
  return result;
}

/*
==============
Ai_Asm::Notify
==============
*/
void Ai_Asm::Notify(Ai_Asm *this, int entNum, const char *szNotify)
{
  __int64 v3; 
  const gentity_s *v5; 
  scr_string_t String; 
  int v8; 

  v3 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v8 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 286, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v8) )
      __debugbreak();
  }
  v5 = &g_entities[v3];
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_Notify");
  String = SL_GetString(szNotify, 0);
  GScr_Notify(v5, String, 0);
  SL_RemoveRefToString(String);
  Sys_ProfEndNamedEvent();
}

/*
==============
Ai_Asm::RunDoorThread
==============
*/
void Ai_Asm::RunDoorThread(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t stateName, bool bSkipDoorAnim)
{
  __int64 v5; 
  const gentity_s *v9; 
  ASM *ASM; 
  int GenericHandler; 
  scrContext_t *v12; 
  unsigned int v13; 

  v5 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 237, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v9 = &g_entities[v5];
  ASM = Common_Asm::GetASM(this, asmName);
  if ( !ASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 242, ASSERT_TYPE_ASSERT, "( pASM )", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  GenericHandler = Ai_Asm::GetGenericHandler(ASM);
  if ( GenericHandler == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 245, ASSERT_TYPE_ASSERT, "( fnHandler != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "fnHandler != cINVALID_ASM_FUNC_ID") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_GenericHandler");
  v12 = ScriptContext_Server();
  Scr_AddBool(v12, bSkipDoorAnim);
  Scr_AddConstString(v12, stateName);
  Scr_AddConstString(v12, asmName);
  Scr_AddString(v12, "waitfordooropen");
  v13 = GScr_ExecEntThread(v9, GenericHandler, 4u);
  Scr_FreeThread(v12, v13);
  Sys_ProfEndNamedEvent();
}

/*
==============
Ai_Asm::RunMoveThreads
==============
*/
void Ai_Asm::RunMoveThreads(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t stateName)
{
  __int64 v4; 
  const gentity_s *v8; 
  ASM *ASM; 
  int GenericHandler; 
  scrContext_t *v11; 
  unsigned int v12; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 262, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v8 = &g_entities[v4];
  ASM = Common_Asm::GetASM(this, asmName);
  if ( !ASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 267, ASSERT_TYPE_ASSERT, "( pASM )", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  GenericHandler = Ai_Asm::GetGenericHandler(ASM);
  if ( GenericHandler == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 270, ASSERT_TYPE_ASSERT, "( fnHandler != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "fnHandler != cINVALID_ASM_FUNC_ID") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_GenericHandler");
  v11 = ScriptContext_Server();
  Scr_AddConstString(v11, stateName);
  Scr_AddConstString(v11, asmName);
  Scr_AddString(v11, "move_threads");
  v12 = GScr_ExecEntThread(v8, GenericHandler, 3u);
  Scr_FreeThread(v11, v12);
  Sys_ProfEndNamedEvent();
}

/*
==============
Ai_Asm::RunNoteHandler
==============
*/
void Ai_Asm::RunNoteHandler(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t notifyName, const scr_string_t notetrackName)
{
  __int64 v5; 
  const gentity_s *v9; 
  ASM *ASM; 
  int GenericHandler; 
  scrContext_t *v12; 
  unsigned int v13; 

  v5 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 212, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v9 = &g_entities[v5];
  ASM = Common_Asm::GetASM(this, asmName);
  if ( !ASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 217, ASSERT_TYPE_ASSERT, "( pASM )", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  GenericHandler = Ai_Asm::GetGenericHandler(ASM);
  if ( GenericHandler == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 220, ASSERT_TYPE_ASSERT, "( fnHandler != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "fnHandler != cINVALID_ASM_FUNC_ID") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_GenericHandler");
  v12 = ScriptContext_Server();
  Scr_AddConstString(v12, notetrackName);
  Scr_AddConstString(v12, notifyName);
  Scr_AddConstString(v12, asmName);
  Scr_AddString(v12, "note");
  v13 = GScr_ExecEntThread(v9, GenericHandler, 4u);
  Scr_FreeThread(v12, v13);
  Sys_ProfEndNamedEvent();
}

/*
==============
Ai_Asm::RunSetAnimMode
==============
*/
void Ai_Asm::RunSetAnimMode(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t animMode)
{
  __int64 v4; 
  AIWrapper v6; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  AIWrapper::AIWrapper(&v6, &g_entities[v4]);
  v6.m_pAI->SetAnimMode(v6.m_pAI, (scr_string_t)animMode);
}

/*
==============
Ai_Asm::RunSetArchetype
==============
*/
void Ai_Asm::RunSetArchetype(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t archetype)
{
  __int64 v4; 
  const gentity_s *v8; 
  ASM *ASM; 
  int GenericHandler; 
  scrContext_t *v11; 
  unsigned int v12; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v8 = &g_entities[v4];
  ASM = Common_Asm::GetASM(this, asmName);
  if ( !ASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 193, ASSERT_TYPE_ASSERT, "( pASM )", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  GenericHandler = Ai_Asm::GetGenericHandler(ASM);
  if ( GenericHandler == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 196, ASSERT_TYPE_ASSERT, "( fnHandler != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "fnHandler != cINVALID_ASM_FUNC_ID") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_GenericHandler");
  v11 = ScriptContext_Server();
  Scr_AddConstString(v11, archetype);
  Scr_AddConstString(v11, asmName);
  Scr_AddString(v11, "archetype");
  v12 = GScr_ExecEntThread(v8, GenericHandler, 3u);
  Scr_FreeThread(v11, v12);
  Sys_ProfEndNamedEvent();
}

/*
==============
Ai_Asm::RunSetOrientMode
==============
*/
void Ai_Asm::RunSetOrientMode(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t orientMode)
{
  __int64 v4; 
  const gentity_s *v8; 
  ASM *ASM; 
  int GenericHandler; 
  scrContext_t *v11; 
  unsigned int v12; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v8 = &g_entities[v4];
  ASM = Common_Asm::GetASM(this, asmName);
  if ( !ASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 92, ASSERT_TYPE_ASSERT, "( pASM )", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  GenericHandler = Ai_Asm::GetGenericHandler(ASM);
  if ( GenericHandler == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 95, ASSERT_TYPE_ASSERT, "( fnHandler != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "fnHandler != cINVALID_ASM_FUNC_ID") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_GenericHandler");
  v11 = ScriptContext_Server();
  Scr_AddConstString(v11, orientMode);
  Scr_AddConstString(v11, asmName);
  Scr_AddString(v11, "orientmode");
  v12 = GScr_ExecEntThread(v8, GenericHandler, 3u);
  Scr_FreeThread(v11, v12);
  Sys_ProfEndNamedEvent();
}

/*
==============
Ai_Asm::RunSetPose
==============
*/
void Ai_Asm::RunSetPose(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t pose)
{
  __int64 v4; 
  AIWrapper v6; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  AIWrapper::AIWrapper(&v6, &g_entities[v4]);
  if ( pose == scr_const.stand )
  {
    AIScriptedInterface::SetCurrentStance(v6.m_pAI, STANCE_STAND);
  }
  else if ( pose == scr_const.crouch )
  {
    AIScriptedInterface::SetCurrentStance(v6.m_pAI, STANCE_CROUCH);
  }
  else if ( pose == scr_const.prone )
  {
    AIScriptedInterface::SetCurrentStance(v6.m_pAI, STANCE_PRONE);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 124, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid stance.") )
  {
    __debugbreak();
  }
}

/*
==============
Ai_Asm::RunStartAim
==============
*/
void Ai_Asm::RunStartAim(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t stateName)
{
  __int64 v4; 
  gentity_s *v8; 
  scr_string_t AnimsetName; 
  ASM *ASM; 
  int GenericHandler; 
  scrContext_t *v12; 
  unsigned int v13; 
  scr_string_t aliases[10]; 
  int outAnimIndices; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v8 = &g_entities[v4];
  AnimsetName = BG_AnimationState_GetAnimsetName(&v8->s);
  if ( !BG_Animset_GetAddonAnimsFromState(AnimsetName, (v8->s.animInfo.animData >> 1) & 0x3FF, (v8->s.animInfo.animData >> 11) & 0x7F, ANIMSTATE_AIMSET, aliases, 0, &outAnimIndices) )
  {
    ASM = Common_Asm::GetASM(this, asmName);
    if ( !ASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 145, ASSERT_TYPE_ASSERT, "( pASM )", (const char *)&queryFormat, "pASM") )
      __debugbreak();
    GenericHandler = Ai_Asm::GetGenericHandler(ASM);
    if ( GenericHandler == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 148, ASSERT_TYPE_ASSERT, "( fnHandler != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "fnHandler != cINVALID_ASM_FUNC_ID") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_GenericHandler");
    v12 = ScriptContext_Server();
    Scr_AddConstString(v12, stateName);
    Scr_AddConstString(v12, asmName);
    Scr_AddString(v12, "setupaim");
    v13 = GScr_ExecEntThread(v8, GenericHandler, 3u);
    Scr_FreeThread(v12, v13);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
Ai_Asm::RunStartGesture
==============
*/
void Ai_Asm::RunStartGesture(Ai_Asm *this, const scr_string_t asmName, int entNum, const scr_string_t stateName)
{
  __int64 v4; 
  const gentity_s *v8; 
  ASM *ASM; 
  int GenericHandler; 
  scrContext_t *v11; 
  unsigned int v12; 

  v4 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 164, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v8 = &g_entities[v4];
  ASM = Common_Asm::GetASM(this, asmName);
  if ( !ASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 169, ASSERT_TYPE_ASSERT, "( pASM )", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  GenericHandler = Ai_Asm::GetGenericHandler(ASM);
  if ( GenericHandler == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_util.cpp", 172, ASSERT_TYPE_ASSERT, "( fnHandler != cINVALID_ASM_FUNC_ID )", (const char *)&queryFormat, "fnHandler != cINVALID_ASM_FUNC_ID") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ASM_GenericHandler");
  v11 = ScriptContext_Server();
  Scr_AddConstString(v11, stateName);
  Scr_AddConstString(v11, asmName);
  Scr_AddString(v11, "setupgesture");
  v12 = GScr_ExecEntThread(v8, GenericHandler, 3u);
  Scr_FreeThread(v11, v12);
  Sys_ProfEndNamedEvent();
}

