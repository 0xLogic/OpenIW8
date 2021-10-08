/*
==============
Scr_ScriptWindow::GetBreakpointCodePos
==============
*/

const char *__fastcall Scr_ScriptWindow::GetBreakpointCodePos(Scr_ScriptWindow *this)
{
  return ?GetBreakpointCodePos@Scr_ScriptWindow@@QEAAPEBDXZ(this);
}

/*
==============
Scr_ScriptWatch::EvaluateWatchChildElement
==============
*/

bool __fastcall Scr_ScriptWatch::EvaluateWatchChildElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, unsigned int fieldName, Scr_WatchElement_s *childElement, bool hardcodedField)
{
  return ?EvaluateWatchChildElement@Scr_ScriptWatch@@QEAA_NPEAUScr_WatchElement_s@@I0_N@Z(this, element, fieldName, childElement, hardcodedField);
}

/*
==============
Scr_ThreadCreated
==============
*/

void __fastcall Scr_ThreadCreated(const scrContext_t *scrContext, unsigned int threadId)
{
  ?Scr_ThreadCreated@@YAXAEBUscrContext_t@@I@Z(scrContext, threadId);
}

/*
==============
Scr_ScriptWatch::PasteNonBreakpointElement
==============
*/

Scr_WatchElement_s *__fastcall Scr_ScriptWatch::PasteNonBreakpointElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, const char *text, bool user)
{
  return ?PasteNonBreakpointElement@Scr_ScriptWatch@@QEAAPEAUScr_WatchElement_s@@PEAU2@PEBD_N@Z(this, element, text, user);
}

/*
==============
Scr_PasteElementRemote<_ScrPasteElement>
==============
*/

void __fastcall Scr_PasteElementRemote<_ScrPasteElement>(scrContext_t *scrContext, const _ScrPasteElement *request)
{
  ??$Scr_PasteElementRemote@U_ScrPasteElement@@@@YAXAEAUscrContext_t@@PEBU_ScrPasteElement@@@Z(scrContext, request);
}

/*
==============
Scr_ScriptWatch::ToggleExpandElement
==============
*/

void __fastcall Scr_ScriptWatch::ToggleExpandElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  ?ToggleExpandElement@Scr_ScriptWatch@@QEAAXPEAUScr_WatchElement_s@@@Z(this, element);
}

/*
==============
Scr_AbstractScriptList::Init
==============
*/

void __fastcall Scr_AbstractScriptList::Init(Scr_AbstractScriptList *this, scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  ?Init@Scr_AbstractScriptList@@QEAAXAEAUscrContext_t@@W4ScrThreadMode@@@Z(this, scrContext, threadMode);
}

/*
==============
Scr_HitBuiltinBreakpoint
==============
*/

void __fastcall Scr_HitBuiltinBreakpoint(scrContext_t *scrContext, VariableValue *top, const char *pos, unsigned int localId, int opcode, int builtinIndex, unsigned int outparamcount)
{
  ?Scr_HitBuiltinBreakpoint@@YAXAEAUscrContext_t@@PEAUVariableValue@@PEBDIHHI@Z(scrContext, top, pos, localId, opcode, builtinIndex, outparamcount);
}

/*
==============
Scr_ScriptWatch::AddElement
==============
*/

void __fastcall Scr_ScriptWatch::AddElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, const char *text)
{
  ?AddElement@Scr_ScriptWatch@@QEAAXPEAUScr_WatchElement_s@@PEBD@Z(this, element, text);
}

/*
==============
Scr_Evaluate
==============
*/

void __fastcall Scr_Evaluate(scrContext_t *scrContext)
{
  ?Scr_Evaluate@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ScriptWatch::CreateWatchElement
==============
*/

Scr_WatchElement_s *__fastcall Scr_ScriptWatch::CreateWatchElement(Scr_ScriptWatch *this, const char *text, Scr_WatchElement_s **prevElem, const char *name)
{
  return ?CreateWatchElement@Scr_ScriptWatch@@QEAAPEAUScr_WatchElement_s@@PEBDPEAPEAU2@0@Z(this, text, prevElem, name);
}

/*
==============
Scr_ScriptWindow::AddBreakpointAtSourcePos
==============
*/

bool __fastcall Scr_ScriptWindow::AddBreakpointAtSourcePos(Scr_ScriptWindow *this, Scr_WatchElement_s *element, _ScriptBreakpointType breakpointType, bool user, Scr_Breakpoint **pBreakpoint, unsigned int startSourcePos, unsigned int endSourcePos, const _ScrToggleBreakpointReply *request, _ScrToggleBreakpointReply *reply)
{
  return ?AddBreakpointAtSourcePos@Scr_ScriptWindow@@QEAA_NPEAUScr_WatchElement_s@@W4_ScriptBreakpointType@@_NPEAPEAUScr_Breakpoint@@IIPEBU_ScrToggleBreakpointReply@@PEAU5@@Z(this, element, breakpointType, user, pBreakpoint, startSourcePos, endSourcePos, request, reply);
}

/*
==============
Scr_AddTextRemote<_ScrAddTextReply>
==============
*/

void __fastcall Scr_AddTextRemote<_ScrAddTextReply>(scrContext_t *scrContext, const _ScrAddTextReply *request)
{
  ??$Scr_AddTextRemote@U_ScrAddTextReply@@@@YAXAEAUscrContext_t@@PEBU_ScrAddTextReply@@@Z(scrContext, request);
}

/*
==============
Scr_RunDebugger
==============
*/

void __fastcall Scr_RunDebugger(scrContext_t *scrContext)
{
  ?Scr_RunDebugger@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_InitDebuggerMain
==============
*/

void __fastcall Scr_InitDebuggerMain(scrContext_t *scrContext)
{
  ?Scr_InitDebuggerMain@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ScriptWatch::CreateBreakpointElement
==============
*/

Scr_WatchElement_s *__fastcall Scr_ScriptWatch::CreateBreakpointElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, unsigned int bufferIndex, unsigned int sourcePos, bool user)
{
  return ?CreateBreakpointElement@Scr_ScriptWatch@@QEAAPEAUScr_WatchElement_s@@PEAU2@II_N@Z(this, element, bufferIndex, sourcePos, user);
}

/*
==============
Scr_AddAssignmentPos
==============
*/

void __fastcall Scr_AddAssignmentPos(scrContext_t *scrContext, char *codePos)
{
  ?Scr_AddAssignmentPos@@YAXAEAUscrContext_t@@PEAD@Z(scrContext, codePos);
}

/*
==============
Scr_ScriptWatch::UpdateBreakpoints
==============
*/

void __fastcall Scr_ScriptWatch::UpdateBreakpoints(Scr_ScriptWatch *this, bool add)
{
  ?UpdateBreakpoints@Scr_ScriptWatch@@QEAAX_N@Z(this, add);
}

/*
==============
Scr_MonitorCommand
==============
*/

void __fastcall Scr_MonitorCommand(scrContext_t *scrContext, const char *text)
{
  ?Scr_MonitorCommand@@YAXAEAUscrContext_t@@PEBD@Z(scrContext, text);
}

/*
==============
Scr_DebugTerminateThread
==============
*/

void __fastcall Scr_DebugTerminateThread(scrContext_t *scrContext, int topThread)
{
  ?Scr_DebugTerminateThread@@YAXAEAUscrContext_t@@H@Z(scrContext, topThread);
}

/*
==============
Scr_ScriptWatch::Evaluate
==============
*/

void __fastcall Scr_ScriptWatch::Evaluate(Scr_ScriptWatch *this)
{
  ?Evaluate@Scr_ScriptWatch@@QEAAXXZ(this);
}

/*
==============
Scr_AbstractScriptList::FindScriptWindow
==============
*/

bool __fastcall Scr_AbstractScriptList::FindScriptWindow(Scr_AbstractScriptList *this, const char *filename, Scr_ScriptWindow **outScriptWindow)
{
  return ?FindScriptWindow@Scr_AbstractScriptList@@QEBA_NPEBDPEAPEAUScr_ScriptWindow@@@Z(this, filename, outScriptWindow);
}

/*
==============
Scr_ExportActiveThreadInfo
==============
*/

void Scr_ExportActiveThreadInfo(void)
{
  ?Scr_ExportActiveThreadInfo@@YAXXZ();
}

/*
==============
Scr_ScriptWindow::AddBreakpoint
==============
*/

void __fastcall Scr_ScriptWindow::AddBreakpoint(Scr_ScriptWindow *this, Scr_Breakpoint **pBreakpoint, char *codePos, int builtinIndex, Scr_WatchElement_s *element, _ScriptBreakpointType type)
{
  ?AddBreakpoint@Scr_ScriptWindow@@QEAAXPEAPEAUScr_Breakpoint@@PEADHPEAUScr_WatchElement_s@@W4_ScriptBreakpointType@@@Z(this, pBreakpoint, codePos, builtinIndex, element, type);
}

/*
==============
Scr_ScriptWatch::DeleteElementInternal
==============
*/

Scr_WatchElement_s *__fastcall Scr_ScriptWatch::DeleteElementInternal(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  return ?DeleteElementInternal@Scr_ScriptWatch@@QEAAPEAUScr_WatchElement_s@@PEAU2@@Z(this, element);
}

/*
==============
Scr_ScriptWindow::operator new
==============
*/

void *__fastcall Scr_ScriptWindow::operator new(unsigned __int64 size)
{
  return ??2Scr_ScriptWindow@@SAPEAX_K@Z(size);
}

/*
==============
Scr_BackspaceElementRemote<_ScrBackspaceElementReply>
==============
*/

void __fastcall Scr_BackspaceElementRemote<_ScrBackspaceElementReply>(scrContext_t *scrContext, const _ScrBackspaceElementReply *request)
{
  ??$Scr_BackspaceElementRemote@U_ScrBackspaceElementReply@@@@YAXAEAUscrContext_t@@PEBU_ScrBackspaceElementReply@@@Z(scrContext, request);
}

/*
==============
Scr_AbstractScriptList::Shutdown
==============
*/

void __fastcall Scr_AbstractScriptList::Shutdown(Scr_AbstractScriptList *this)
{
  ?Shutdown@Scr_AbstractScriptList@@QEAAXXZ(this);
}

/*
==============
Scr_ScriptWindow::SetCurrentLine
==============
*/

void __fastcall Scr_ScriptWindow::SetCurrentLine(Scr_ScriptWindow *this, int line)
{
  ?SetCurrentLine@Scr_ScriptWindow@@QEAAXH@Z(this, line);
}

/*
==============
Scr_AllocBreakpoint
==============
*/

Scr_Breakpoint *__fastcall Scr_AllocBreakpoint(scrContext_t *scrContext)
{
  return ?Scr_AllocBreakpoint@@YAPEAUScr_Breakpoint@@AEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ToggleWatchElementBreakpointRemote<_ScrToggleWatchBreakpoint>
==============
*/

void __fastcall Scr_ToggleWatchElementBreakpointRemote<_ScrToggleWatchBreakpoint>(scrContext_t *scrContext, const _ScrToggleWatchBreakpoint *request)
{
  ??$Scr_ToggleWatchElementBreakpointRemote@U_ScrToggleWatchBreakpoint@@@@YAXAEAUscrContext_t@@PEBU_ScrToggleWatchBreakpoint@@@Z(scrContext, request);
}

/*
==============
Scr_FreeBreakpoint
==============
*/

void __fastcall Scr_FreeBreakpoint(scrContext_t *scrContext, Scr_Breakpoint *breakpoint)
{
  ?Scr_FreeBreakpoint@@YAXAEAUscrContext_t@@PEAUScr_Breakpoint@@@Z(scrContext, breakpoint);
}

/*
==============
Scr_ScriptWindow::SendBreakpointData
==============
*/

bool __fastcall Scr_ScriptWindow::SendBreakpointData(Scr_ScriptWindow *this, Scr_WatchElement_s *element, bool force, bool overwrite, _ScriptBreakpointType breakpointType, bool user, const char *sourceBuffer, Scr_Breakpoint **pBreakpoint, unsigned int startSourcePos, unsigned int endSourcePos, const _ScrToggleBreakpointReply *request)
{
  return ?SendBreakpointData@Scr_ScriptWindow@@QEAA_NPEAUScr_WatchElement_s@@_N1W4_ScriptBreakpointType@@1PEBDPEAPEAUScr_Breakpoint@@IIPEBU_ScrToggleBreakpointReply@@@Z(this, element, force, overwrite, breakpointType, user, sourceBuffer, pBreakpoint, startSourcePos, endSourcePos, request);
}

/*
==============
Scr_DeleteElementRemote<_ScrDeleteElement>
==============
*/

void __fastcall Scr_DeleteElementRemote<_ScrDeleteElement>(scrContext_t *scrContext, const _ScrDeleteElement *request)
{
  ??$Scr_DeleteElementRemote@U_ScrDeleteElement@@@@YAXAEAUscrContext_t@@PEBU_ScrDeleteElement@@@Z(scrContext, request);
}

/*
==============
Scr_StartThreadExecutionTime
==============
*/

void __fastcall Scr_StartThreadExecutionTime(scrContext_t *scrContext)
{
  ?Scr_StartThreadExecutionTime@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_IsVariableBreakpoint
==============
*/

bool __fastcall Scr_IsVariableBreakpoint(const scrContext_t *scrContext, unsigned int id)
{
  return ?Scr_IsVariableBreakpoint@@YA_NAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_ShutdownDebuggerSystem
==============
*/

void __fastcall Scr_ShutdownDebuggerSystem(scrContext_t *scrContext, int restart)
{
  ?Scr_ShutdownDebuggerSystem@@YAXAEAUscrContext_t@@H@Z(scrContext, restart);
}

/*
==============
Scr_ScriptList::Shutdown
==============
*/

void __fastcall Scr_ScriptList::Shutdown(Scr_ScriptList *this)
{
  ?Shutdown@Scr_ScriptList@@QEAAXXZ(this);
}

/*
==============
Scr_EndThreadExecutionTime
==============
*/

void __fastcall Scr_EndThreadExecutionTime(scrContext_t *scrContext, unsigned int threadId)
{
  ?Scr_EndThreadExecutionTime@@YAXAEAUscrContext_t@@I@Z(scrContext, threadId);
}

/*
==============
Scr_ScriptWindow::operator delete
==============
*/

void __fastcall Scr_ScriptWindow::operator delete(void *ptr)
{
  ??3Scr_ScriptWindow@@SAXPEAX@Z(ptr);
}

/*
==============
Scr_ScriptWatch::Init
==============
*/

void __fastcall Scr_ScriptWatch::Init(Scr_ScriptWatch *this, scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  ?Init@Scr_ScriptWatch@@QEAAXAEAUscrContext_t@@W4ScrThreadMode@@@Z(this, scrContext, threadMode);
}

/*
==============
Scr_ScriptWatch::ExpandElement
==============
*/

void __fastcall Scr_ScriptWatch::ExpandElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, bool expand)
{
  ?ExpandElement@Scr_ScriptWatch@@QEAAXPEAUScr_WatchElement_s@@_N@Z(this, element, expand);
}

/*
==============
Scr_DebugKillThread
==============
*/

void __fastcall Scr_DebugKillThread(scrContext_t *scrContext, unsigned int threadId, const char *codePos)
{
  ?Scr_DebugKillThread@@YAXAEAUscrContext_t@@IPEBD@Z(scrContext, threadId, codePos);
}

/*
==============
Scr_ResetAbortDebugger
==============
*/

void __fastcall Scr_ResetAbortDebugger(scrContext_t *scrContext)
{
  ?Scr_ResetAbortDebugger@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ScriptWatch::GetElementRef
==============
*/

Scr_WatchElement_s **__fastcall Scr_ScriptWatch::GetElementRef(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  return ?GetElementRef@Scr_ScriptWatch@@QEAAPEAPEAUScr_WatchElement_s@@PEAU2@@Z(this, element);
}

/*
==============
Scr_ScriptWindow::ToggleBreakpointInternal
==============
*/

void __fastcall Scr_ScriptWindow::ToggleBreakpointInternal(Scr_ScriptWindow *this, Scr_WatchElement_s *element, bool force, bool overwrite, _ScriptBreakpointType breakpointType, bool user, const _ScrToggleBreakpointReply *request)
{
  ?ToggleBreakpointInternal@Scr_ScriptWindow@@QEAAXPEAUScr_WatchElement_s@@_N1W4_ScriptBreakpointType@@1PEBU_ScrToggleBreakpointReply@@@Z(this, element, force, overwrite, breakpointType, user, request);
}

/*
==============
Scr_PasteElementRemote<_ScrPasteElementReply>
==============
*/

void __fastcall Scr_PasteElementRemote<_ScrPasteElementReply>(scrContext_t *scrContext, const _ScrPasteElementReply *request)
{
  ??$Scr_PasteElementRemote@U_ScrPasteElementReply@@@@YAXAEAUscrContext_t@@PEBU_ScrPasteElementReply@@@Z(scrContext, request);
}

/*
==============
Scr_ScriptWatch::DisplayThreadPos
==============
*/

void __fastcall Scr_ScriptWatch::DisplayThreadPos(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  ?DisplayThreadPos@Scr_ScriptWatch@@QEAAXPEAUScr_WatchElement_s@@@Z(this, element);
}

/*
==============
Scr_RestartDebuggerRemote
==============
*/

void __fastcall Scr_RestartDebuggerRemote(scrContext_t *scrContext)
{
  ?Scr_RestartDebuggerRemote@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_AddManualBreakpoint
==============
*/

void __fastcall Scr_AddManualBreakpoint(scrContext_t *scrContext, unsigned __int8 *codePos)
{
  ?Scr_AddManualBreakpoint@@YAXAEAUscrContext_t@@PEAE@Z(scrContext, codePos);
}

/*
==============
Scr_ToggleWatchElementBreakpointRemote<_ScrToggleWatchBreakpointReply>
==============
*/

void __fastcall Scr_ToggleWatchElementBreakpointRemote<_ScrToggleWatchBreakpointReply>(scrContext_t *scrContext, const _ScrToggleWatchBreakpointReply *request)
{
  ??$Scr_ToggleWatchElementBreakpointRemote@U_ScrToggleWatchBreakpointReply@@@@YAXAEAUscrContext_t@@PEBU_ScrToggleWatchBreakpointReply@@@Z(scrContext, request);
}

/*
==============
Scr_IgnoreErrors
==============
*/

int __fastcall Scr_IgnoreErrors(const scrContext_t *scrContext)
{
  return ?Scr_IgnoreErrors@@YAHAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_EnableBreakpoints
==============
*/

void __fastcall Scr_EnableBreakpoints(scrContext_t *scrContext, bool enable)
{
  ?Scr_EnableBreakpoints@@YAXAEAUscrContext_t@@_N@Z(scrContext, enable);
}

/*
==============
Scr_InitDebuggerSystem
==============
*/

void __fastcall Scr_InitDebuggerSystem(scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  ?Scr_InitDebuggerSystem@@YAXAEAUscrContext_t@@W4ScrThreadMode@@@Z(scrContext, threadMode);
}

/*
==============
Scr_ScriptList::Init
==============
*/

void __fastcall Scr_ScriptList::Init(Scr_ScriptList *this, scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  ?Init@Scr_ScriptList@@QEAAXAEAUscrContext_t@@W4ScrThreadMode@@@Z(this, scrContext, threadMode);
}

/*
==============
Scr_ScriptWatch::AddBreakpoint
==============
*/

Scr_WatchElement_s *__fastcall Scr_ScriptWatch::AddBreakpoint(Scr_ScriptWatch *this, Scr_WatchElement_s *element, _ScriptBreakpointType type)
{
  return ?AddBreakpoint@Scr_ScriptWatch@@QEAAPEAUScr_WatchElement_s@@PEAU2@W4_ScriptBreakpointType@@@Z(this, element, type);
}

/*
==============
Scr_ConnectRemote
==============
*/

void __fastcall Scr_ConnectRemote(scrContext_t *scrContext)
{
  ?Scr_ConnectRemote@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ScriptWatch::Shutdown
==============
*/

void __fastcall Scr_ScriptWatch::Shutdown(Scr_ScriptWatch *this)
{
  ?Shutdown@Scr_ScriptWatch@@QEAAXXZ(this);
}

/*
==============
Scr_ScriptCallStack::UpdateStack
==============
*/

void __fastcall Scr_ScriptCallStack::UpdateStack(Scr_ScriptCallStack *this, scrContext_t *scrContext)
{
  ?UpdateStack@Scr_ScriptCallStack@@QEAAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
Scr_DeleteElementRemote<_ScrDeleteElementReply>
==============
*/

void __fastcall Scr_DeleteElementRemote<_ScrDeleteElementReply>(scrContext_t *scrContext, const _ScrDeleteElementReply *request)
{
  ??$Scr_DeleteElementRemote@U_ScrDeleteElementReply@@@@YAXAEAUscrContext_t@@PEBU_ScrDeleteElementReply@@@Z(scrContext, request);
}

/*
==============
Scr_BackspaceElementRemote<_ScrBackspaceElement>
==============
*/

void __fastcall Scr_BackspaceElementRemote<_ScrBackspaceElement>(scrContext_t *scrContext, const _ScrBackspaceElement *request)
{
  ??$Scr_BackspaceElementRemote@U_ScrBackspaceElement@@@@YAXAEAUscrContext_t@@PEBU_ScrBackspaceElement@@@Z(scrContext, request);
}

/*
==============
Scr_CheckBreakonNotify
==============
*/

void __fastcall Scr_CheckBreakonNotify(scrContext_t *scrContext, unsigned int notifyListOwnerId, scr_string_t stringValue, VariableValue *top, const char *pos, unsigned int localId)
{
  ?Scr_CheckBreakonNotify@@YAXAEAUscrContext_t@@IW4scr_string_t@@PEAUVariableValue@@PEBDI@Z(scrContext, notifyListOwnerId, stringValue, top, pos, localId);
}

/*
==============
Scr_ScriptWatch::GetElementWithId
==============
*/

Scr_WatchElement_s *__fastcall Scr_ScriptWatch::GetElementWithId(Scr_ScriptWatch *this, int id)
{
  return ?GetElementWithId@Scr_ScriptWatch@@QEAAPEAUScr_WatchElement_s@@H@Z(this, id);
}

/*
==============
Scr_ScriptWatch::GetElementPrev
==============
*/

Scr_WatchElement_s *__fastcall Scr_ScriptWatch::GetElementPrev(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  return ?GetElementPrev@Scr_ScriptWatch@@QEAAPEAUScr_WatchElement_s@@PEAU2@@Z(this, element);
}

/*
==============
Scr_AddTextRemote<_ScrAddText>
==============
*/

void __fastcall Scr_AddTextRemote<_ScrAddText>(scrContext_t *scrContext, const _ScrAddText *request)
{
  ??$Scr_AddTextRemote@U_ScrAddText@@@@YAXAEAUscrContext_t@@PEBU_ScrAddText@@@Z(scrContext, request);
}

/*
==============
Scr_ScriptWatch::EvaluateWatchElement
==============
*/

void __fastcall Scr_ScriptWatch::EvaluateWatchElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  ?EvaluateWatchElement@Scr_ScriptWatch@@QEAAXPEAUScr_WatchElement_s@@@Z(this, element);
}

/*
==============
Scr_ScriptWatch::CloneElement
==============
*/

Scr_WatchElement_s *__fastcall Scr_ScriptWatch::CloneElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  return ?CloneElement@Scr_ScriptWatch@@QEAAPEAUScr_WatchElement_s@@PEAU2@@Z(this, element);
}

/*
==============
Scr_InsertElementRemote<_ScrInsertElementReply>
==============
*/

void __fastcall Scr_InsertElementRemote<_ScrInsertElementReply>(scrContext_t *scrContext, const _ScrInsertElementReply *request)
{
  ??$Scr_InsertElementRemote@U_ScrInsertElementReply@@@@YAXAEAUscrContext_t@@PEBU_ScrInsertElementReply@@@Z(scrContext, request);
}

/*
==============
Scr_ScriptWatch::ToggleWatchElementBreakpoint
==============
*/

void __fastcall Scr_ScriptWatch::ToggleWatchElementBreakpoint(Scr_ScriptWatch *this, Scr_WatchElement_s *element, _ScriptBreakpointType type)
{
  ?ToggleWatchElementBreakpoint@Scr_ScriptWatch@@QEAAXPEAUScr_WatchElement_s@@W4_ScriptBreakpointType@@@Z(this, element, type);
}

/*
==============
Scr_ScriptWatch::RemoveBreakpoint
==============
*/

Scr_WatchElement_s *__fastcall Scr_ScriptWatch::RemoveBreakpoint(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  return ?RemoveBreakpoint@Scr_ScriptWatch@@QEAAPEAUScr_WatchElement_s@@PEAU2@@Z(this, element);
}

/*
==============
Scr_NoWaitServer
==============
*/

bool __fastcall Scr_NoWaitServer(const scrContext_t *scrContext)
{
  return ?Scr_NoWaitServer@@YA_NAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ToggleBreakpointRemote<_ScrToggleBreakpointReply>
==============
*/

void __fastcall Scr_ToggleBreakpointRemote<_ScrToggleBreakpointReply>(scrContext_t *scrContext, const _ScrToggleBreakpointReply *request)
{
  ??$Scr_ToggleBreakpointRemote@U_ScrToggleBreakpointReply@@@@YAXAEAUscrContext_t@@PEBU_ScrToggleBreakpointReply@@@Z(scrContext, request);
}

/*
==============
Scr_ShowConsole
==============
*/

void __fastcall Scr_ShowConsole(scrContext_t *scrContext)
{
  ?Scr_ShowConsole@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ScriptWindow::GetFilename
==============
*/

const char *__fastcall Scr_ScriptWindow::GetFilename(Scr_ScriptWindow *this)
{
  return ?GetFilename@Scr_ScriptWindow@@QEBAPEBDXZ(this);
}

/*
==============
Scr_ExitSkipIntructions
==============
*/

void __fastcall Scr_ExitSkipIntructions(scrContext_t *scrContext)
{
  ?Scr_ExitSkipIntructions@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_HitBreakpoint
==============
*/

int __fastcall Scr_HitBreakpoint(scrContext_t *scrContext, VariableValue *top, const char *pos, unsigned int localId, int hitBreakpoint)
{
  return ?Scr_HitBreakpoint@@YAHAEAUscrContext_t@@PEAUVariableValue@@PEBDIH@Z(scrContext, top, pos, localId, hitBreakpoint);
}

/*
==============
Scr_ScriptWindow::Init
==============
*/

void __fastcall Scr_ScriptWindow::Init(Scr_ScriptWindow *this)
{
  ?Init@Scr_ScriptWindow@@QEAAXXZ(this);
}

/*
==============
Scr_ScriptWatch::ToggleBreakpointInternal
==============
*/

void __fastcall Scr_ScriptWatch::ToggleBreakpointInternal(Scr_ScriptWatch *this, Scr_WatchElement_s *element, _ScriptBreakpointType type)
{
  ?ToggleBreakpointInternal@Scr_ScriptWatch@@QEAAXPEAUScr_WatchElement_s@@W4_ScriptBreakpointType@@@Z(this, element, type);
}

/*
==============
Scr_ScriptWatch::EvaluateWatchChildren
==============
*/

void __fastcall Scr_ScriptWatch::EvaluateWatchChildren(Scr_ScriptWatch *this, Scr_WatchElement_s *parentElement)
{
  ?EvaluateWatchChildren@Scr_ScriptWatch@@QEAAXPEAUScr_WatchElement_s@@@Z(this, parentElement);
}

/*
==============
Scr_HitAssignmentBreakpoint
==============
*/

int __fastcall Scr_HitAssignmentBreakpoint(scrContext_t *scrContext, VariableValue *top, const char *pos, unsigned int localId, int forceBreak)
{
  return ?Scr_HitAssignmentBreakpoint@@YAHAEAUscrContext_t@@PEAUVariableValue@@PEBDIH@Z(scrContext, top, pos, localId, forceBreak);
}

/*
==============
Scr_FindBreakpointInfo
==============
*/

char *__fastcall Scr_FindBreakpointInfo(const scrContext_t *scrContext, const char *codePos)
{
  return ?Scr_FindBreakpointInfo@@YAPEADAEBUscrContext_t@@PEBD@Z(scrContext, codePos);
}

/*
==============
Scr_UpdateRemoteDebugger
==============
*/

void __fastcall Scr_UpdateRemoteDebugger(scrContext_t *scrContext)
{
  ?Scr_UpdateRemoteDebugger@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ShutdownRemoteClient
==============
*/

void __fastcall Scr_ShutdownRemoteClient(scrContext_t *scrContext, int restart)
{
  ?Scr_ShutdownRemoteClient@@YAXAEAUscrContext_t@@H@Z(scrContext, restart);
}

/*
==============
Scr_ShutdownDebugger
==============
*/

void __fastcall Scr_ShutdownDebugger(scrContext_t *scrContext)
{
  ?Scr_ShutdownDebugger@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_RunDebuggerRemote
==============
*/

void __fastcall Scr_RunDebuggerRemote(scrContext_t *scrContext)
{
  ?Scr_RunDebuggerRemote@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ScriptWatch::SortHitBreakpointsTop
==============
*/

void __fastcall Scr_ScriptWatch::SortHitBreakpointsTop(Scr_ScriptWatch *this)
{
  ?SortHitBreakpointsTop@Scr_ScriptWatch@@QEAAXXZ(this);
}

/*
==============
Scr_InitDebugger
==============
*/

void __fastcall Scr_InitDebugger(scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  ?Scr_InitDebugger@@YAXAEAUscrContext_t@@W4ScrThreadMode@@@Z(scrContext, threadMode);
}

/*
==============
Scr_ShutdownDebuggerMain
==============
*/

void __fastcall Scr_ShutdownDebuggerMain(scrContext_t *scrContext)
{
  ?Scr_ShutdownDebuggerMain@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ToggleBreakpointRemote<_ScrToggleBreakpoint>
==============
*/

void __fastcall Scr_ToggleBreakpointRemote<_ScrToggleBreakpoint>(scrContext_t *scrContext, const _ScrToggleBreakpoint *request)
{
  ??$Scr_ToggleBreakpointRemote@U_ScrToggleBreakpoint@@@@YAXAEAUscrContext_t@@PEBU_ScrToggleBreakpoint@@@Z(scrContext, request);
}

/*
==============
Scr_ScriptWatch::GetElementWithId_r
==============
*/

Scr_WatchElement_s *__fastcall Scr_ScriptWatch::GetElementWithId_r(Scr_ScriptWatch *this, Scr_WatchElement_s *element, int id)
{
  return ?GetElementWithId_r@Scr_ScriptWatch@@QEAAPEAUScr_WatchElement_s@@PEAU2@H@Z(this, element, id);
}

/*
==============
Scr_RefToObjectVariable
==============
*/

bool __fastcall Scr_RefToObjectVariable(scrContext_t *scrContext, const unsigned int objectId)
{
  return ?Scr_RefToObjectVariable@@YA_NAEAUscrContext_t@@I@Z(scrContext, objectId);
}

/*
==============
Scr_RestoreKillPos
==============
*/

void __fastcall Scr_RestoreKillPos(scrContext_t *scrContext, bool kill_thread, char *killThreadCodePos)
{
  ?Scr_RestoreKillPos@@YAXAEAUscrContext_t@@_NPEAD@Z(scrContext, kill_thread, killThreadCodePos);
}

/*
==============
Scr_ScriptWatch::EvaluateWatchElementExpression
==============
*/

void __fastcall Scr_ScriptWatch::EvaluateWatchElementExpression(Scr_ScriptWatch *this, Scr_WatchElement_s *element, VariableValue *value)
{
  ?EvaluateWatchElementExpression@Scr_ScriptWatch@@QEAAXPEAUScr_WatchElement_s@@PEAUVariableValue@@@Z(this, element, value);
}

/*
==============
Scr_AddDebuggerRefs
==============
*/

void __fastcall Scr_AddDebuggerRefs(scrContext_t *scrContext)
{
  ?Scr_AddDebuggerRefs@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_UpdateDebugSocket
==============
*/

int __fastcall Scr_UpdateDebugSocket(scrContext_t *scrContext)
{
  return ?Scr_UpdateDebugSocket@@YAHAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ScriptWatch::BackspaceElementInternal
==============
*/

Scr_WatchElement_s *__fastcall Scr_ScriptWatch::BackspaceElementInternal(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  return ?BackspaceElementInternal@Scr_ScriptWatch@@QEAAPEAUScr_WatchElement_s@@PEAU2@@Z(this, element);
}

/*
==============
Scr_ScriptList::AddFile
==============
*/

void __fastcall Scr_ScriptList::AddFile(Scr_ScriptList *this, const char *filename, Scr_AddFileInfo *info)
{
  ?AddFile@Scr_ScriptList@@QEAAXPEBDPEAUScr_AddFileInfo@@@Z(this, filename, info);
}

/*
==============
Scr_SkipIntructions
==============
*/

int __fastcall Scr_SkipIntructions(const scrContext_t *scrContext)
{
  return ?Scr_SkipIntructions@@YAHAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_RemoveDebuggerRefs
==============
*/

void __fastcall Scr_RemoveDebuggerRefs(scrContext_t *scrContext)
{
  ?Scr_RemoveDebuggerRefs@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_InsertElementRemote<_ScrInsertElement>
==============
*/

void __fastcall Scr_InsertElementRemote<_ScrInsertElement>(scrContext_t *scrContext, const _ScrInsertElement *request)
{
  ??$Scr_InsertElementRemote@U_ScrInsertElement@@@@YAXAEAUscrContext_t@@PEBU_ScrInsertElement@@@Z(scrContext, request);
}

/*
==============
Scr_UpdateDebugger
==============
*/

void __fastcall Scr_UpdateDebugger(scrContext_t *scrContext)
{
  ?Scr_UpdateDebugger@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_AddDebugRefCount
==============
*/

void __fastcall Scr_AddDebugRefCount(const scrContext_t *scrContext, unsigned __int16 *refCount)
{
  ?Scr_AddDebugRefCount@@YAXAEBUscrContext_t@@PEAG@Z(scrContext, refCount);
}

/*
==============
Scr_ScriptWindow::GetSourcePos
==============
*/

void __fastcall Scr_ScriptWindow::GetSourcePos(Scr_ScriptWindow *this, unsigned int *start, unsigned int *end)
{
  ?GetSourcePos@Scr_ScriptWindow@@QEAAXPEAI0@Z(this, start, end);
}

/*
==============
Scr_ScriptWindow::RunToCursor
==============
*/

void __fastcall Scr_ScriptWindow::RunToCursor(Scr_ScriptWindow *this)
{
  ?RunToCursor@Scr_ScriptWindow@@QEAAXXZ(this);
}

/*
==============
Scr_GetElementFromId
==============
*/

Scr_WatchElement_s *__fastcall Scr_GetElementFromId(scrContext_t *scrContext, int id)
{
  return ?Scr_GetElementFromId@@YAPEAUScr_WatchElement_s@@AEAUscrContext_t@@H@Z(scrContext, id);
}

/*
==============
Scr_SaveKillPos
==============
*/

bool __fastcall Scr_SaveKillPos(scrContext_t *scrContext, char **killThreadCodePos)
{
  return ?Scr_SaveKillPos@@YA_NAEAUscrContext_t@@PEAPEAD@Z(scrContext, killThreadCodePos);
}

/*
==============
Scr_ScriptWindow::SetScriptFile
==============
*/

void __fastcall Scr_ScriptWindow::SetScriptFile(Scr_ScriptWindow *this, scrContext_t *scrContext, const char *name)
{
  ?SetScriptFile@Scr_ScriptWindow@@QEAAXAEAUscrContext_t@@PEBD@Z(this, scrContext, name);
}

/*
==============
Scr_ScriptWatch::PostEvaluateWatchElement
==============
*/

bool __fastcall Scr_ScriptWatch::PostEvaluateWatchElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, VariableValue *value)
{
  return ?PostEvaluateWatchElement@Scr_ScriptWatch@@QEAA_NPEAUScr_WatchElement_s@@PEAUVariableValue@@@Z(this, element, value);
}

/*
==============
Scr_ScriptWatch::FreeWatchElement
==============
*/

void __fastcall Scr_ScriptWatch::FreeWatchElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  ?FreeWatchElement@Scr_ScriptWatch@@QEAAXPEAUScr_WatchElement_s@@@Z(this, element);
}

/*
==============
Scr_ScriptWindow::EnterCallInternal
==============
*/

void __fastcall Scr_ScriptWindow::EnterCallInternal(Scr_ScriptWindow *this)
{
  ?EnterCallInternal@Scr_ScriptWindow@@QEAAXXZ(this);
}

/*
==============
Scr_RefToChildVariable
==============
*/

bool __fastcall Scr_RefToChildVariable(const scrContext_t *scrContext, const unsigned int childId)
{
  return ?Scr_RefToChildVariable@@YA_NAEBUscrContext_t@@I@Z(scrContext, childId);
}

/*
==============
Scr_AddTextRemote<_ScrAddText>
==============
*/
void Scr_AddTextRemote<_ScrAddText>(scrContext_t *scrContext, const _ScrAddText *request)
{
  Scr_WatchElement_s *ElementFromId; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7348, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  if ( ElementFromId )
    Scr_ScriptWatch::AddElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId, request->text);
}

/*
==============
Scr_AddTextRemote<_ScrAddTextReply>
==============
*/
void Scr_AddTextRemote<_ScrAddTextReply>(scrContext_t *scrContext, const _ScrAddTextReply *request)
{
  Scr_WatchElement_s *ElementFromId; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7348, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  if ( ElementFromId )
    Scr_ScriptWatch::AddElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId, request->text);
}

/*
==============
Scr_BackspaceElementRemote<_ScrBackspaceElement>
==============
*/
void Scr_BackspaceElementRemote<_ScrBackspaceElement>(scrContext_t *scrContext, const _ScrBackspaceElement *request)
{
  Scr_WatchElement_s *ElementFromId; 
  _DebugMessage message; 
  _ScrBackspaceElementReply v6; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 5043, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  if ( ElementFromId )
  {
    if ( Sys_IsRemoteDebugServer(scrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrBackspaceElementReply::_ScrBackspaceElementReply(&v6);
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_BACKSPACE_ELEMENT_REPLY;
      message.scrreadfile = (const _ScrReadFile *)&v6;
      v6.element = ElementFromId->id;
      v6.has_element = 1;
      Sys_WriteDebugSocketMessage(scrContext, &message);
    }
    Scr_ScriptWatch::BackspaceElementInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId);
  }
}

/*
==============
Scr_BackspaceElementRemote<_ScrBackspaceElementReply>
==============
*/
void Scr_BackspaceElementRemote<_ScrBackspaceElementReply>(scrContext_t *scrContext, const _ScrBackspaceElementReply *request)
{
  Scr_WatchElement_s *ElementFromId; 
  _DebugMessage message; 
  _ScrBackspaceElementReply v6; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 5043, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  if ( ElementFromId )
  {
    if ( Sys_IsRemoteDebugServer(scrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrBackspaceElementReply::_ScrBackspaceElementReply(&v6);
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_BACKSPACE_ELEMENT_REPLY;
      message.scrreadfile = (const _ScrReadFile *)&v6;
      v6.element = ElementFromId->id;
      v6.has_element = 1;
      Sys_WriteDebugSocketMessage(scrContext, &message);
    }
    Scr_ScriptWatch::BackspaceElementInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId);
  }
}

/*
==============
Scr_DeleteElementRemote<_ScrDeleteElement>
==============
*/
void Scr_DeleteElementRemote<_ScrDeleteElement>(scrContext_t *scrContext, const _ScrDeleteElement *request)
{
  Scr_WatchElement_s *ElementFromId; 
  _DebugMessage message; 
  _ScrDeleteElementReply v6; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4939, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  if ( ElementFromId )
  {
    if ( Sys_IsRemoteDebugServer(scrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrDeleteElementReply::_ScrDeleteElementReply(&v6);
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_DELETE_ELEMENT_REPLY;
      message.scrreadfile = (const _ScrReadFile *)&v6;
      v6.element = ElementFromId->id;
      v6.has_element = 1;
      Sys_WriteDebugSocketMessage(scrContext, &message);
    }
    Scr_ScriptWatch::DeleteElementInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId);
  }
}

/*
==============
Scr_DeleteElementRemote<_ScrDeleteElementReply>
==============
*/
void Scr_DeleteElementRemote<_ScrDeleteElementReply>(scrContext_t *scrContext, const _ScrDeleteElementReply *request)
{
  Scr_WatchElement_s *ElementFromId; 
  _DebugMessage message; 
  _ScrDeleteElementReply v6; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4939, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  if ( ElementFromId )
  {
    if ( Sys_IsRemoteDebugServer(scrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrDeleteElementReply::_ScrDeleteElementReply(&v6);
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_DELETE_ELEMENT_REPLY;
      message.scrreadfile = (const _ScrReadFile *)&v6;
      v6.element = ElementFromId->id;
      v6.has_element = 1;
      Sys_WriteDebugSocketMessage(scrContext, &message);
    }
    Scr_ScriptWatch::DeleteElementInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId);
  }
}

/*
==============
Scr_InsertElementRemote<_ScrInsertElement>
==============
*/
void Scr_InsertElementRemote<_ScrInsertElement>(scrContext_t *scrContext, const _ScrInsertElement *request)
{
  Scr_WatchElement_s *ElementFromId; 
  int id; 
  _DebugMessage message; 
  _ScrInsertElementReply v7; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4808, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    _DebugMessage::_DebugMessage(&message);
    _ScrInsertElementReply::_ScrInsertElementReply(&v7);
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_INSERT_ELEMENT_REPLY;
    message.scrreadfile = (const _ScrReadFile *)&v7;
    if ( ElementFromId )
      id = ElementFromId->id;
    else
      id = 0;
    v7.has_element = 1;
    v7.element = id;
    Sys_WriteDebugSocketMessage(scrContext, &message);
  }
  Scr_ScriptWatch::PasteNonBreakpointElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId, (const char *)&queryFormat.fmt + 3, 1);
}

/*
==============
Scr_InsertElementRemote<_ScrInsertElementReply>
==============
*/
void Scr_InsertElementRemote<_ScrInsertElementReply>(scrContext_t *scrContext, const _ScrInsertElementReply *request)
{
  Scr_WatchElement_s *ElementFromId; 
  int id; 
  _DebugMessage message; 
  _ScrInsertElementReply v7; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4808, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    _DebugMessage::_DebugMessage(&message);
    _ScrInsertElementReply::_ScrInsertElementReply(&v7);
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_INSERT_ELEMENT_REPLY;
    message.scrreadfile = (const _ScrReadFile *)&v7;
    if ( ElementFromId )
      id = ElementFromId->id;
    else
      id = 0;
    v7.has_element = 1;
    v7.element = id;
    Sys_WriteDebugSocketMessage(scrContext, &message);
  }
  Scr_ScriptWatch::PasteNonBreakpointElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId, (const char *)&queryFormat.fmt + 3, 1);
}

/*
==============
Scr_PasteElementRemote<_ScrPasteElement>
==============
*/
void Scr_PasteElementRemote<_ScrPasteElement>(scrContext_t *scrContext, const _ScrPasteElement *request)
{
  Scr_WatchElement_s *ElementFromId; 
  const char *text; 
  bool v6; 
  int id; 
  _ScriptBreakpointType type; 
  int v9; 
  Scr_WatchElement_s *v10; 
  _DebugMessage message; 
  _ScrPasteElementReply v12; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4732, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  text = request->text;
  v6 = request->user != 0;
  id = 0;
  type = SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_NONE;
  v9 = scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.elementId + 1;
  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    type = request->type;
    _DebugMessage::_DebugMessage(&message);
    _ScrPasteElementReply::_ScrPasteElementReply(&v12);
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_PASTE_ELEMENT_REPLY;
    message.scrreadfile = (const _ScrReadFile *)&v12;
    if ( ElementFromId )
      id = ElementFromId->id;
    v12.user = v6;
    v12.requestid = request->requestid;
    v12.has_element = 1;
    v12.element = id;
    v12.text = text;
    v12.has_user = 1;
    v12.has_requestid = 1;
    v12.has_newelement = 1;
    v12.newelement = v9;
    Sys_WriteDebugSocketMessage(scrContext, &message);
  }
  v10 = Scr_ScriptWatch::PasteNonBreakpointElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId, text, v6);
  if ( v9 != v10->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4757, ASSERT_TYPE_ASSERT, "(newElementId == newElement->id)", (const char *)&queryFormat, "newElementId == newElement->id") )
    __debugbreak();
  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    if ( type )
      Scr_ScriptWatch::ToggleBreakpointInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v10, type);
  }
}

/*
==============
Scr_PasteElementRemote<_ScrPasteElementReply>
==============
*/
void Scr_PasteElementRemote<_ScrPasteElementReply>(scrContext_t *scrContext, const _ScrPasteElementReply *request)
{
  Scr_WatchElement_s *ElementFromId; 
  const char *text; 
  bool v6; 
  int id; 
  _ScriptBreakpointType type; 
  int v9; 
  Scr_WatchElement_s *v10; 
  _DebugMessage message; 
  _ScrPasteElementReply v12; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4732, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  text = request->text;
  v6 = request->user != 0;
  id = 0;
  type = SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_NONE;
  v9 = scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.elementId + 1;
  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    type = request->type;
    _DebugMessage::_DebugMessage(&message);
    _ScrPasteElementReply::_ScrPasteElementReply(&v12);
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_PASTE_ELEMENT_REPLY;
    message.scrreadfile = (const _ScrReadFile *)&v12;
    if ( ElementFromId )
      id = ElementFromId->id;
    v12.user = v6;
    v12.requestid = request->requestid;
    v12.has_element = 1;
    v12.element = id;
    v12.text = text;
    v12.has_user = 1;
    v12.has_requestid = 1;
    v12.has_newelement = 1;
    v12.newelement = v9;
    Sys_WriteDebugSocketMessage(scrContext, &message);
  }
  v10 = Scr_ScriptWatch::PasteNonBreakpointElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId, text, v6);
  if ( v9 != v10->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4757, ASSERT_TYPE_ASSERT, "(newElementId == newElement->id)", (const char *)&queryFormat, "newElementId == newElement->id") )
    __debugbreak();
  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    if ( type )
      Scr_ScriptWatch::ToggleBreakpointInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v10, type);
  }
}

/*
==============
Scr_ToggleBreakpointRemote<_ScrToggleBreakpoint>
==============
*/
void Scr_ToggleBreakpointRemote<_ScrToggleBreakpoint>(scrContext_t *scrContext, const _ScrToggleBreakpoint *request)
{
  const char *filename; 
  int selectedline; 
  Scr_WatchElement_s *ElementFromId; 
  _ScriptBreakpointType breakpointtype; 
  bool v8; 
  bool v9; 
  bool v10; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  Scr_ScriptWindow **scriptWindows; 
  Scr_ScriptWindow **v13; 
  Scr_ScriptWindow *v14; 

  filename = request->filename;
  selectedline = request->selectedline;
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  breakpointtype = request->breakpointtype;
  v8 = request->force != 0;
  v9 = request->overwrite != 0;
  v10 = request->user != 0;
  if ( filename && *filename )
  {
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1371, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
      __debugbreak();
    m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
    scriptWindows = m_pDynamic->scriptList.scriptWindows;
    if ( scriptWindows )
    {
      v13 = (Scr_ScriptWindow **)bsearch(filename, scriptWindows, m_pDynamic->scriptList.numLines, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareScriptWindow);
      if ( v13 )
      {
        v14 = *v13;
        if ( *v13 )
        {
          v14->selectedLine = selectedline;
          Scr_ScriptWindow::ToggleBreakpointInternal(v14, ElementFromId, v8, v9, breakpointtype, v10, NULL);
        }
      }
    }
  }
}

/*
==============
Scr_ToggleBreakpointRemote<_ScrToggleBreakpointReply>
==============
*/
void Scr_ToggleBreakpointRemote<_ScrToggleBreakpointReply>(scrContext_t *scrContext, const _ScrToggleBreakpointReply *request)
{
  const char *filename; 
  int selectedline; 
  Scr_WatchElement_s *ElementFromId; 
  _ScriptBreakpointType breakpointtype; 
  bool v8; 
  bool v9; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  Scr_ScriptWindow **scriptWindows; 
  Scr_ScriptWindow **v12; 
  Scr_ScriptWindow *v13; 
  bool v14; 

  filename = request->filename;
  selectedline = request->selectedline;
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  breakpointtype = request->breakpointtype;
  v8 = request->force != 0;
  v9 = request->overwrite != 0;
  v14 = request->user != 0;
  if ( filename && *filename )
  {
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1371, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
      __debugbreak();
    m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
    scriptWindows = m_pDynamic->scriptList.scriptWindows;
    if ( scriptWindows )
    {
      v12 = (Scr_ScriptWindow **)bsearch(filename, scriptWindows, m_pDynamic->scriptList.numLines, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareScriptWindow);
      if ( v12 )
      {
        v13 = *v12;
        if ( *v12 )
        {
          v13->selectedLine = selectedline;
          Scr_ScriptWindow::ToggleBreakpointInternal(v13, ElementFromId, v8, v9, breakpointtype, v14, request);
        }
      }
    }
  }
}

/*
==============
Scr_ToggleWatchElementBreakpointRemote<_ScrToggleWatchBreakpoint>
==============
*/
void Scr_ToggleWatchElementBreakpointRemote<_ScrToggleWatchBreakpoint>(scrContext_t *scrContext, const _ScrToggleWatchBreakpoint *request)
{
  Scr_WatchElement_s *ElementFromId; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8524, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  if ( ElementFromId )
    Scr_ScriptWatch::ToggleBreakpointInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId, request->type);
}

/*
==============
Scr_ToggleWatchElementBreakpointRemote<_ScrToggleWatchBreakpointReply>
==============
*/
void Scr_ToggleWatchElementBreakpointRemote<_ScrToggleWatchBreakpointReply>(scrContext_t *scrContext, const _ScrToggleWatchBreakpointReply *request)
{
  Scr_WatchElement_s *ElementFromId; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8524, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  if ( ElementFromId )
    Scr_ScriptWatch::ToggleBreakpointInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId, request->type);
}

/*
==============
Scr_ScriptWindow::operator new
==============
*/
void *Scr_ScriptWindow::operator new(unsigned __int64 size)
{
  return Mem_HunkDebug_AllocAligned(size, 8ui64, "Scr_ScriptWindow");
}

/*
==============
Scr_ScriptWindow::operator delete
==============
*/
void Scr_ScriptWindow::operator delete(void *ptr)
{
  Mem_HunkDebug_Free(ptr);
}

/*
==============
Scr_ScriptWatch::AddBreakpoint
==============
*/
Scr_WatchElement_s *Scr_ScriptWatch::AddBreakpoint(Scr_ScriptWatch *this, Scr_WatchElement_s *element, _ScriptBreakpointType type)
{
  unsigned __int8 v3; 
  Scr_WatchElement_s *result; 

  v3 = type;
  if ( element->breakpointType == type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8328, ASSERT_TYPE_ASSERT, "( element->breakpointType != type )", (const char *)&queryFormat, "element->breakpointType != type") )
    __debugbreak();
  if ( element->parent )
  {
    result = Scr_ScriptWatch::CloneElement(this, element);
    result->breakpointType = v3;
  }
  else
  {
    result = element;
    element->breakpointType = v3;
  }
  return result;
}

/*
==============
Scr_ScriptWindow::AddBreakpoint
==============
*/
void Scr_ScriptWindow::AddBreakpoint(Scr_ScriptWindow *this, Scr_Breakpoint **pBreakpoint, char *codePos, int builtinIndex, Scr_WatchElement_s *element, _ScriptBreakpointType type)
{
  scrContext_t *m_pScrContext; 
  Scr_Breakpoint *v8; 
  Scr_Breakpoint *m_breakpointsHead; 

  m_pScrContext = this->m_pScrContext;
  v8 = *pBreakpoint;
  m_breakpointsHead = m_pScrContext->m_debuggerGlob.m_breakpointsHead;
  if ( !m_breakpointsHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 340, ASSERT_TYPE_ASSERT, "(breakpoint)", "%s\n\tToo many breakpoints ( %d max )", "breakpoint", 128) )
    __debugbreak();
  m_pScrContext->m_debuggerGlob.m_breakpointsHead = m_pScrContext->m_debuggerGlob.m_breakpointsHead->next;
  *pBreakpoint = m_breakpointsHead;
  m_breakpointsHead->prev = pBreakpoint;
  m_breakpointsHead->next = v8;
  if ( v8 )
    v8->prev = &m_breakpointsHead->next;
  m_breakpointsHead->line = this->selectedLine;
  m_breakpointsHead->codePos = codePos;
  m_breakpointsHead->builtinIndex = builtinIndex;
  m_breakpointsHead->bufferIndex = this->bufferIndex;
  m_breakpointsHead->element = element;
  if ( element->breakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 719, ASSERT_TYPE_ASSERT, "( !element->breakpoint )", (const char *)&queryFormat, "!element->breakpoint") )
    __debugbreak();
  element->breakpointType = type;
  element->breakpoint = m_breakpointsHead;
  if ( (unsigned int)(type - 4) <= 1 )
  {
    if ( !codePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 731, ASSERT_TYPE_ASSERT, "( codePos )", (const char *)&queryFormat, "codePos") )
      __debugbreak();
    Scr_AddManualBreakpoint(this->m_pScrContext, (unsigned __int8 *)codePos);
  }
}

/*
==============
Scr_ScriptWindow::AddBreakpointAtSourcePos
==============
*/
char Scr_ScriptWindow::AddBreakpointAtSourcePos(Scr_ScriptWindow *this, Scr_WatchElement_s *element, _ScriptBreakpointType breakpointType, bool user, Scr_Breakpoint **pBreakpoint, unsigned int startSourcePos, unsigned int endSourcePos, const _ScrToggleBreakpointReply *request, _ScrToggleBreakpointReply *reply)
{
  bool v9; 
  unsigned __int8 v13; 
  const char *OpcodePosOfType; 
  char v15; 
  unsigned __int16 *v16; 
  int v17; 
  scrContext_t *m_pScrContext; 
  ScrFuncDebugData *m_pFuncTable; 
  int FuncTableIndex; 
  unsigned __int8 *v21; 
  const char *v23; 
  int LineNum; 
  __int64 bufferIndex; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  Scr_WatchElement_s *i; 
  Scr_WatchElement_s **ElementRef; 
  int v29; 
  Scr_WatchElement_s *WatchElement; 
  scrContext_t *v31; 
  Scr_Breakpoint *m_breakpointsHead; 
  Scr_Breakpoint *v33; 
  Scr_Breakpoint **v34; 
  unsigned int *sourcePos; 
  unsigned int v36; 
  int v37; 
  unsigned int v38; 
  Scr_Breakpoint **v39; 
  char dest[272]; 
  char outBuf[272]; 

  v9 = this->m_pScrContext == NULL;
  v39 = pBreakpoint;
  v37 = -1;
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 919, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  v13 = 0;
  if ( breakpointType < SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_LINE_DISABLED )
    goto LABEL_7;
  if ( breakpointType > SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_LINE_NORMAL )
  {
    if ( breakpointType <= SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_BUILTIN_DISABLED )
    {
LABEL_9:
      OpcodePosOfType = Scr_GetOpcodePosOfType(this->m_pScrContext, this->bufferIndex, startSourcePos, endSourcePos, SOURCE_TYPE_BUILTIN_CALL, &v36);
      if ( OpcodePosOfType )
      {
        v15 = *OpcodePosOfType;
        v13 = 1;
        v16 = (unsigned __int16 *)(OpcodePosOfType + 1);
        if ( v15 == 35 || v15 == -124 )
          v16 = (unsigned __int16 *)((char *)v16 + 1);
        v17 = *v16;
        v37 = v17;
        if ( breakpointType == SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_BUILTIN_NORMAL )
        {
          m_pScrContext = this->m_pScrContext;
          m_pFuncTable = m_pScrContext->m_vmDebugPub.m_pFuncTable;
          FuncTableIndex = Scr_GetFuncTableIndex(m_pScrContext, v17);
          ++m_pFuncTable[FuncTableIndex].breakpointCount;
        }
      }
      v21 = NULL;
      goto LABEL_16;
    }
LABEL_7:
    LODWORD(sourcePos) = breakpointType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 952, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable: %d", sourcePos) )
      __debugbreak();
    goto LABEL_9;
  }
  v23 = Scr_GetOpcodePosOfType(this->m_pScrContext, this->bufferIndex, startSourcePos, endSourcePos, SOURCE_TYPE_BREAKPOINT, &v36);
  v21 = (unsigned __int8 *)v23;
  if ( v23 && (*Scr_FindBreakpointInfo(this->m_pScrContext, v23) != -102 || *v21 != 0xA2) )
    v13 = 1;
LABEL_16:
  if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
  {
    reply->success = v13;
    reply->has_success = 1;
  }
  if ( !v13 )
    return 0;
  if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
  {
    LineNum = Scr_GetLineNum(this->m_pScrContext, this->bufferIndex, v36);
    if ( LineNum != reply->selectedline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 991, ASSERT_TYPE_ASSERT, "(lineNum == reply->selectedline)", (const char *)&queryFormat, "lineNum == reply->selectedline") )
      __debugbreak();
    reply->bufferindex = this->bufferIndex;
    reply->sourcepos = v36;
    reply->has_bufferindex = 1;
    reply->has_sourcepos = 1;
    reply->has_selectedline = 1;
    reply->selectedline = LineNum;
  }
  if ( !this->m_pScrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1014, ASSERT_TYPE_ASSERT, "( m_pScrContext->m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "m_pScrContext->m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  bufferIndex = this->bufferIndex;
  m_pDynamic = this->m_pScrContext->m_debuggerGlob.m_pDynamic;
  v38 = v36;
  if ( !m_pDynamic->scriptWatch.m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4302, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  if ( element )
  {
    for ( i = element->parent; i; i = i->parent )
      element = i;
  }
  ElementRef = Scr_ScriptWatch::GetElementRef(&m_pDynamic->scriptWatch, element);
  v29 = Scr_GetSourcePos(m_pDynamic->scriptWatch.m_pScrContext, bufferIndex, v38, outBuf, 257);
  Com_sprintf(dest, 0x101ui64, "%i %s", (unsigned int)(v29 + 1), m_pDynamic->scriptWatch.m_pScrContext->m_parserPub.sourceBufferLookup[bufferIndex].buf);
  WatchElement = Scr_ScriptWatch::CreateWatchElement(&m_pDynamic->scriptWatch, dest, ElementRef, "Scr_ScriptWatch::CreateBreakpointElement");
  SL_AllocString_Replace(&WatchElement->valueText, outBuf);
  v31 = this->m_pScrContext;
  m_breakpointsHead = v31->m_debuggerGlob.m_breakpointsHead;
  v33 = *v39;
  if ( !m_breakpointsHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 340, ASSERT_TYPE_ASSERT, "(breakpoint)", "%s\n\tToo many breakpoints ( %d max )", "breakpoint", 128) )
    __debugbreak();
  v34 = v39;
  v31->m_debuggerGlob.m_breakpointsHead = v31->m_debuggerGlob.m_breakpointsHead->next;
  *v34 = m_breakpointsHead;
  m_breakpointsHead->prev = v34;
  m_breakpointsHead->next = v33;
  if ( v33 )
    v33->prev = &m_breakpointsHead->next;
  m_breakpointsHead->line = this->selectedLine;
  m_breakpointsHead->builtinIndex = v37;
  m_breakpointsHead->codePos = (char *)v21;
  m_breakpointsHead->bufferIndex = this->bufferIndex;
  m_breakpointsHead->element = WatchElement;
  if ( WatchElement->breakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 719, ASSERT_TYPE_ASSERT, "( !element->breakpoint )", (const char *)&queryFormat, "!element->breakpoint") )
    __debugbreak();
  WatchElement->breakpoint = m_breakpointsHead;
  WatchElement->breakpointType = breakpointType;
  if ( (unsigned int)(breakpointType - 4) <= 1 )
  {
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 731, ASSERT_TYPE_ASSERT, "( codePos )", (const char *)&queryFormat, "codePos") )
      __debugbreak();
    Scr_AddManualBreakpoint(this->m_pScrContext, v21);
  }
  if ( reply )
  {
    reply->element = WatchElement->id;
    reply->has_element = 1;
  }
  return 1;
}

/*
==============
Scr_ScriptWatch::AddElement
==============
*/
void Scr_ScriptWatch::AddElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, const char *text)
{
  scrContext_t *m_pScrContext; 
  scrContext_t *v7; 
  char v10; 
  scrContext_t *v11; 
  scrContext_t *v12; 
  ScriptExpression_t scriptExpr; 
  _DebugMessage message; 
  _ScrAddTextReply v15; 

  _RDI = element;
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7371, ASSERT_TYPE_ASSERT, "( element )", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !_RDI->breakpoint )
  {
    m_pScrContext = this->m_pScrContext;
    scriptExpr.exprHead = NULL;
    Scr_CompileText(m_pScrContext, text, &scriptExpr);
    if ( scriptExpr.parseData.node->type == 94 )
    {
      if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7386, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
        __debugbreak();
      if ( !this->m_pScrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7387, ASSERT_TYPE_ASSERT, "( m_pScrContext->m_varPub.evaluate )", (const char *)&queryFormat, "m_pScrContext->m_varPub.evaluate") )
        __debugbreak();
      this->m_pScrContext->m_varPub.evaluate = 0;
      Scr_ExecCode(this->m_pScrContext, scriptExpr.parseData.node[1].codePosValue, this->localId);
      this->m_pScrContext->m_varPub.evaluate = 1;
      SL_ShutdownSystem(2u);
      Scr_FreeDebugExpr(this->m_pScrContext, &scriptExpr);
      Scr_ScriptWatch::Evaluate(this);
    }
    else
    {
      if ( (unsigned int)(scriptExpr.parseData.node->type - 95) <= 1 )
      {
LABEL_9:
        Scr_FreeDebugExpr(this->m_pScrContext, &scriptExpr);
        return;
      }
      if ( _RDI->parent )
      {
        Com_Printf(23, "Cannot change child element\n");
        goto LABEL_9;
      }
      if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
      {
        _DebugMessage::_DebugMessage(&message);
        _ScrAddTextReply::_ScrAddTextReply(&v15);
        v7 = this->m_pScrContext;
        message.scrreadfile = (const _ScrReadFile *)&v15;
        v15.element = _RDI->id;
        message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_ADD_TEXT_REPLY;
        v15.has_element = 1;
        v15.text = text;
        Sys_WriteDebugSocketMessage(v7, &message);
      }
      Scr_FreeDebugExpr(this->m_pScrContext, &_RDI->expr);
      SL_AllocString_Replace(&_RDI->refText, text);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+57h+scriptExpr.parseData]
        vmovsd  xmm1, [rbp+57h+scriptExpr.exprHead]
      }
      v10 = *((_BYTE *)_RDI + 135);
      __asm
      {
        vmovups xmmword ptr [rdi], xmm0
        vmovsd  qword ptr [rdi+10h], xmm1
      }
      v11 = this->m_pScrContext;
      if ( (v10 & 0x10) != 0 )
      {
        *((_BYTE *)_RDI + 135) = v10 & 0xEF;
        RemoveRefToValue(v11, (unsigned __int8)_RDI->value.type, _RDI->value.u);
      }
      Scr_ScriptWatch::EvaluateWatchElement(this, _RDI);
      if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
      {
        _DebugMessage::_DebugMessage(&message);
        _ScrUpdateWatchHeight::_ScrUpdateWatchHeight((_ScrUpdateWatchHeight *)&v15);
        v12 = this->m_pScrContext;
        message.scrreadfile = (const _ScrReadFile *)&v15;
        message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_UPDATE_WATCH_HEIGHT;
        Sys_WriteDebugSocketMessage(v12, &message);
      }
    }
  }
}

/*
==============
Scr_ScriptList::AddFile
==============
*/
void Scr_ScriptList::AddFile(Scr_ScriptList *this, const char *filename, Scr_AddFileInfo *info)
{
  Scr_ScriptWindow *v6; 
  int numCols; 

  v6 = (Scr_ScriptWindow *)Mem_HunkDebug_AllocAligned(0x38ui64, 8ui64, "Scr_ScriptWindow");
  this->scriptWindows[info->to] = v6;
  Scr_ScriptWindow::SetScriptFile(v6, this->m_pScrContext, filename);
  if ( v6->bufferIndex == 65534 )
  {
    Mem_HunkDebug_Free(v6);
    --this->numLines;
    ++info->from;
  }
  else
  {
    if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2695, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext", -2i64) )
      __debugbreak();
    this->m_pScrContext->m_parserPub.sourceBufferLookup[v6->bufferIndex].sortedIndex = info->to++;
    numCols = v6->numCols;
    ++info->from;
    if ( numCols > info->maxNumCols )
      info->maxNumCols = numCols;
  }
}

/*
==============
Scr_ScriptWatch::BackspaceElementInternal
==============
*/
Scr_WatchElement_s *Scr_ScriptWatch::BackspaceElementInternal(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  Scr_WatchElement_s **ElementRef; 
  Scr_WatchElement_s *elementHead; 
  Scr_WatchElement_s **v7; 
  Scr_WatchElement_s *next; 

  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4970, ASSERT_TYPE_ASSERT, "( element )", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( element->parent )
    return element;
  ElementRef = Scr_ScriptWatch::GetElementRef(this, element);
  elementHead = this->elementHead;
  v7 = ElementRef;
  if ( elementHead != element )
  {
    if ( elementHead )
    {
      do
      {
        next = elementHead->next;
        if ( next == element )
          goto LABEL_13;
        elementHead = elementHead->next;
      }
      while ( next );
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 3983, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
      __debugbreak();
  }
  elementHead = NULL;
LABEL_13:
  *v7 = element->next;
  Scr_ScriptWatch::FreeWatchElement(this, element);
  return elementHead;
}

/*
==============
Scr_ScriptWatch::CloneElement
==============
*/
Scr_WatchElement_s *Scr_ScriptWatch::CloneElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  Scr_WatchElement_s *parent; 
  Scr_WatchElement_s *i; 
  Scr_WatchElement_s **ElementRef; 
  Scr_WatchElement_s *WatchElement; 

  parent = element->parent;
  for ( i = element; parent; parent = parent->parent )
    element = parent;
  ElementRef = Scr_ScriptWatch::GetElementRef(this, element);
  WatchElement = Scr_ScriptWatch::CreateWatchElement(this, i->refText, ElementRef, "Scr_ScriptWatch::CloneElement");
  Scr_CompileText(this->m_pScrContext, i->refText, &WatchElement->expr);
  return WatchElement;
}

/*
==============
CompareArrayIndices
==============
*/
__int64 CompareArrayIndices(const void *arg1, const void *arg2)
{
  scr_string_t *v2; 
  __int64 v3; 
  VariableValue *ArrayIndexValue; 
  const char *v6; 
  const char *v7; 
  signed __int64 v8; 
  unsigned __int8 v9; 
  VariableValue result; 
  scr_string_t v11; 
  unsigned __int8 v12; 
  scr_string_t stringValue; 
  unsigned __int8 v14; 
  unsigned int name; 
  int v16; 

  v2 = &v11;
  name = *(_DWORD *)arg1;
  v3 = 0i64;
  v16 = *(_DWORD *)arg2;
  do
  {
    ArrayIndexValue = Scr_GetArrayIndexValue(&result, *(&name + v3));
    v2 += 4;
    ++v3;
    *((VariableValue *)v2 - 1) = *ArrayIndexValue;
  }
  while ( v3 < 2 );
  if ( v12 != v14 )
    return v12 - (unsigned int)v14;
  if ( v12 == 2 )
  {
    v6 = SL_ConvertToString(stringValue);
    v7 = SL_ConvertToString(v11);
    v8 = v6 - v7;
    while ( 1 )
    {
      v9 = *v7;
      if ( *v7 != v7[v8] )
        break;
      ++v7;
      if ( !v9 )
        return 0i64;
    }
    return v9 < (unsigned int)v7[v8] ? -1 : 1;
  }
  else
  {
    if ( v12 != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 5678, ASSERT_TYPE_ASSERT, "( value[0].type == VAR_INTEGER )", (const char *)&queryFormat, "value[0].type == VAR_INTEGER") )
      __debugbreak();
    return (unsigned int)(v11 - stringValue);
  }
}

/*
==============
CompareScriptWindow
==============
*/
int CompareScriptWindow(const void *key, const void *element)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  const char *v6; 

  v2 = *(_QWORD *)element;
  if ( !*(_QWORD *)(*(_QWORD *)element + 8i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 505, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  v4 = *(unsigned int *)(v2 + 16);
  if ( (_DWORD)v4 == 65534 || (v5 = *(_QWORD *)(v2 + 8), (unsigned int)v4 >= *(_DWORD *)(v5 + 13504)) )
    v6 = (char *)&queryFormat.fmt + 3;
  else
    v6 = *(const char **)(120 * v4 + *(_QWORD *)(v5 + 13496) + 8);
  return I_strnicmp((const char *)key, v6, 0x7FFFFFFFui64);
}

/*
==============
CompareThreadElements_WithContext
==============
*/
__int64 CompareThreadElements_WithContext(void *context, const void *arg1, const void *arg2)
{
  __int64 v3; 
  __int64 v4; 
  __int64 result; 

  v3 = *(_QWORD *)arg2;
  v4 = *(_QWORD *)arg1;
  result = (unsigned int)(*(_DWORD *)(120i64 * *(unsigned __int16 *)(*(_QWORD *)arg1 + 130i64) + *((_QWORD *)context + 1687) + 28) - *(_DWORD *)(120i64 * *(unsigned __int16 *)(*(_QWORD *)arg2 + 130i64) + *((_QWORD *)context + 1687) + 28));
  if ( !(_DWORD)result )
  {
    result = (unsigned int)(*(_DWORD *)(v4 + 80) - *(_DWORD *)(v3 + 80));
    if ( !(_DWORD)result )
      return (unsigned int)(*(_DWORD *)(v4 + 56) - *(_DWORD *)(v3 + 56));
  }
  return result;
}

/*
==============
CompareThreadIndices
==============
*/
__int64 CompareThreadIndices(const void *arg1, const void *arg2)
{
  return (unsigned int)(*(_DWORD *)arg1 - *(_DWORD *)arg2);
}

/*
==============
Scr_ScriptWatch::CreateBreakpointElement
==============
*/
Scr_WatchElement_s *Scr_ScriptWatch::CreateBreakpointElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, unsigned int bufferIndex, unsigned int sourcePos)
{
  __int64 v5; 
  Scr_WatchElement_s *i; 
  Scr_WatchElement_s **ElementRef; 
  int v10; 
  Scr_WatchElement_s *WatchElement; 
  char dest[272]; 
  char outBuf[272]; 

  v5 = bufferIndex;
  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4302, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  if ( element )
  {
    for ( i = element->parent; i; i = i->parent )
      element = i;
  }
  ElementRef = Scr_ScriptWatch::GetElementRef(this, element);
  v10 = Scr_GetSourcePos(this->m_pScrContext, v5, sourcePos, outBuf, 257);
  Com_sprintf(dest, 0x101ui64, "%i %s", (unsigned int)(v10 + 1), this->m_pScrContext->m_parserPub.sourceBufferLookup[v5].buf);
  WatchElement = Scr_ScriptWatch::CreateWatchElement(this, dest, ElementRef, "Scr_ScriptWatch::CreateBreakpointElement");
  SL_AllocString_Replace(&WatchElement->valueText, outBuf);
  return WatchElement;
}

/*
==============
Scr_ScriptWatch::CreateWatchElement
==============
*/
Scr_WatchElement_s *Scr_ScriptWatch::CreateWatchElement(Scr_ScriptWatch *this, const char *text, Scr_WatchElement_s **prevElem, const char *name)
{
  Scr_WatchElement_s *v7; 
  bool v8; 
  int elementId_low; 

  v7 = (Scr_WatchElement_s *)ntl::nxheap::allocate(&s_debuggerHeap.m_heap, 0x88ui64, 0x10ui64, 1);
  if ( !v7 )
    Sys_Error((const ObfuscateErrorText)&stru_144098198);
  memset_0(v7, 0, sizeof(Scr_WatchElement_s));
  v7->valueText = SL_AllocString_Copy((const char *)&queryFormat.fmt + 3);
  v7->refText = SL_AllocString_Copy(text);
  v7->next = *prevElem;
  *prevElem = v7;
  v8 = this->elementId++ == -1;
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7268, ASSERT_TYPE_ASSERT, "( elementId )", (const char *)&queryFormat, "elementId") )
    __debugbreak();
  elementId_low = LOWORD(this->elementId);
  v7->id = elementId_low;
  if ( elementId_low != this->elementId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7270, ASSERT_TYPE_ASSERT, "( element->id == elementId )", (const char *)&queryFormat, "element->id == elementId") )
    __debugbreak();
  return v7;
}

/*
==============
Scr_ScriptWatch::DeleteElementInternal
==============
*/
Scr_WatchElement_s *Scr_ScriptWatch::DeleteElementInternal(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  Scr_WatchElement_s **ElementRef; 

  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4873, ASSERT_TYPE_ASSERT, "( element )", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( element->parent )
    return element;
  ElementRef = Scr_ScriptWatch::GetElementRef(this, element);
  *ElementRef = element->next;
  Scr_ScriptWatch::FreeWatchElement(this, element);
  return *ElementRef;
}

/*
==============
Scr_ScriptWatch::DisplayThreadPos
==============
*/
void Scr_ScriptWatch::DisplayThreadPos(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  scrContext_t *m_pScrContext; 
  VariableType objectType; 
  char *ThreadPos; 
  char *v7; 
  __int64 SourceBuffer; 
  unsigned int PrevSourcePos; 
  int LineNum; 
  scrContext_t *v11; 
  const char *buf; 
  _DebugMessage message; 
  _ScrSelectScriptLine v14; 

  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7902, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  m_pScrContext = this->m_pScrContext;
  if ( m_pScrContext->m_varPub.evaluate )
  {
    objectType = element->objectType;
    if ( objectType == VAR_DEAD_THREAD )
      goto LABEL_11;
    if ( objectType != VAR_THREAD || (*((_BYTE *)element + 135) & 1) == 0 )
      return;
    ThreadPos = (char *)Scr_GetThreadPos(m_pScrContext, element->objectId);
    if ( !ThreadPos )
LABEL_11:
      ThreadPos = (char *)element->deadCodePos;
    v7 = NULL;
    if ( ThreadPos != &g_EndPos )
      v7 = ThreadPos;
    if ( v7 )
    {
      SourceBuffer = Scr_GetSourceBuffer(this->m_pScrContext, v7 - 1);
      PrevSourcePos = Scr_GetPrevSourcePos(this->m_pScrContext, v7 - 1, 0);
      LineNum = Scr_GetLineNum(this->m_pScrContext, SourceBuffer, PrevSourcePos);
      if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
      {
        _DebugMessage::_DebugMessage(&message);
        _ScrSelectScriptLine::_ScrSelectScriptLine(&v14);
        v11 = this->m_pScrContext;
        message.scrreadfile = (const _ScrReadFile *)&v14;
        message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SELECT_SCRIPT_LINE;
        v14.has_bufferindex = 1;
        v14.bufferindex = SourceBuffer;
        v14.has_linenum = 1;
        v14.linenum = LineNum;
        if ( (unsigned int)SourceBuffer <= v11->m_parserPub.sourceBufferLookupLen )
          buf = v11->m_parserPub.sourceBufferLookup[SourceBuffer].buf;
        else
          buf = (char *)&queryFormat.fmt + 3;
        v14.filename = buf;
        Sys_WriteDebugSocketMessage(v11, &message);
      }
    }
  }
}

/*
==============
Scr_ScriptWindow::EnterCallInternal
==============
*/
void Scr_ScriptWindow::EnterCallInternal(Scr_ScriptWindow *this)
{
  const char *OpcodePosOfType; 
  Scr_Breakpoint *breakpointHead; 
  int selectedLine; 
  scrContext_t *v5; 
  const char *buf; 
  Scr_WatchElement_s *element; 
  scrContext_t *m_pScrContext; 
  unsigned int end; 
  unsigned int start; 
  unsigned int sourcePos; 
  _DebugMessage message; 
  _ScrSelectScriptLine v13; 
  Scr_SourcePos_t pos; 

  if ( this->selectedLine < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1736, ASSERT_TYPE_ASSERT, "( selectedLine >= 0 )", (const char *)&queryFormat, "selectedLine >= 0") )
    __debugbreak();
  Scr_ScriptWindow::GetSourcePos(this, &start, &end);
  OpcodePosOfType = Scr_GetOpcodePosOfType(this->m_pScrContext, this->bufferIndex, start, end, SOURCE_TYPE_GETFUNCTION|SOURCE_TYPE_CALL, &sourcePos);
  if ( OpcodePosOfType )
  {
    breakpointHead = this->breakpointHead;
    if ( !breakpointHead )
      goto LABEL_9;
    selectedLine = this->selectedLine;
    while ( breakpointHead->line < selectedLine )
    {
      breakpointHead = breakpointHead->next;
      if ( !breakpointHead )
        goto LABEL_9;
    }
    if ( breakpointHead->line == selectedLine )
    {
      if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
      {
        _DebugMessage::_DebugMessage(&message);
        _ScrSelectElement::_ScrSelectElement((_ScrSelectElement *)&v13);
        message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SELECT_ELEMENT;
        message.scrreadfile = (const _ScrReadFile *)&v13;
        element = breakpointHead->element;
        if ( element )
          LODWORD(element) = element->id;
        m_pScrContext = this->m_pScrContext;
        v13.has_bufferindex = 1;
        v13.bufferindex = (int)element;
        Sys_WriteDebugSocketMessage(m_pScrContext, &message);
      }
    }
    else
    {
LABEL_9:
      Scr_ScriptWindow::ToggleBreakpointInternal(this, NULL, 0, 0, SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_LINE_DISABLED, 1, NULL);
    }
    Scr_GetSourcePosOfType(this->m_pScrContext, &OpcodePosOfType[(__int64)(int)(*(_DWORD *)(OpcodePosOfType + 1) << 8) >> 8], SOURCE_TYPE_THREAD_START, 1, &pos);
    if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrSelectScriptLine::_ScrSelectScriptLine(&v13);
      v5 = this->m_pScrContext;
      message.scrreadfile = (const _ScrReadFile *)&v13;
      v13.linenum = pos.lineNum;
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SELECT_SCRIPT_LINE;
      v13.has_bufferindex = 1;
      v13.bufferindex = pos.bufferIndex;
      v13.has_linenum = 1;
      if ( pos.bufferIndex <= v5->m_parserPub.sourceBufferLookupLen )
        buf = v5->m_parserPub.sourceBufferLookup[pos.bufferIndex].buf;
      else
        buf = (char *)&queryFormat.fmt + 3;
      v13.filename = buf;
      Sys_WriteDebugSocketMessage(v5, &message);
    }
  }
}

/*
==============
Scr_ScriptWatch::Evaluate
==============
*/
void Scr_ScriptWatch::Evaluate(Scr_ScriptWatch *this)
{
  Scr_WatchElement_s *i; 

  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7647, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  if ( !this->m_pScrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7648, ASSERT_TYPE_ASSERT, "( m_pScrContext->m_varPub.evaluate )", (const char *)&queryFormat, "m_pScrContext->m_varPub.evaluate") )
    __debugbreak();
  if ( this->m_pScrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7649, ASSERT_TYPE_ASSERT, "( !m_pScrContext->m_vmPub.outparamcount )", (const char *)&queryFormat, "!m_pScrContext->m_vmPub.outparamcount") )
    __debugbreak();
  if ( this->m_pScrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7650, ASSERT_TYPE_ASSERT, "( !m_pScrContext->m_vmPub.inparamcount )", (const char *)&queryFormat, "!m_pScrContext->m_vmPub.inparamcount") )
    __debugbreak();
  for ( i = this->elementHead; i; i = i->next )
  {
    if ( !i->breakpoint )
      Scr_ScriptWatch::EvaluateWatchElement(this, i);
  }
}

/*
==============
Scr_ScriptWatch::EvaluateWatchChildElement
==============
*/
bool Scr_ScriptWatch::EvaluateWatchChildElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, unsigned int fieldName, Scr_WatchElement_s *childElement, bool hardcodedField)
{
  unsigned int v9; 
  unsigned __int16 v10; 
  scrContext_t *v11; 
  VariableValue *ArrayIndexValue; 
  scrContext_t *m_pScrContext; 
  unsigned int objectId; 
  VariableValue value; 
  VariableValue result; 

  if ( element->breakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7104, ASSERT_TYPE_ASSERT, "( !element->breakpoint )", (const char *)&queryFormat, "!element->breakpoint") )
    __debugbreak();
  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7106, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  if ( !this->m_pScrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7107, ASSERT_TYPE_ASSERT, "( m_pScrContext->m_varPub.evaluate )", (const char *)&queryFormat, "m_pScrContext->m_varPub.evaluate") )
    __debugbreak();
  childElement->fieldName = fieldName;
  if ( hardcodedField )
  {
    objectId = element->objectId;
    value.u.intValue = objectId;
    value.type = VAR_POINTER;
    if ( !fieldName )
    {
      AddRefToObject(this->m_pScrContext, objectId);
      Scr_EvalSizeValue(this->m_pScrContext, &value);
      goto LABEL_32;
    }
    if ( fieldName != 1 )
    {
      if ( fieldName == 2 )
      {
LABEL_30:
        value.type = VAR_UNDEFINED;
        goto LABEL_32;
      }
      if ( fieldName != 3 )
      {
        if ( fieldName != 4 )
        {
          value.u.intValue = fieldName - 5;
          if ( fieldName == 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7163, ASSERT_TYPE_ASSERT, "( value.u.pointerValue )", (const char *)&queryFormat, "value.u.pointerValue", value.u.scriptCodePosValue, *(_QWORD *)&value.type) )
            __debugbreak();
          goto LABEL_32;
        }
        goto LABEL_30;
      }
      value.u.intValue = Scr_GetSelf(this->m_pScrContext, objectId);
    }
LABEL_32:
    AddRefToValue(this->m_pScrContext, (unsigned __int8)value.type, value.u);
    return Scr_ScriptWatch::PostEvaluateWatchElement(this, childElement, &value);
  }
  switch ( element->objectType )
  {
    case VAR_ARRAY:
      ArrayIndexValue = Scr_GetArrayIndexValue(&result, fieldName);
      m_pScrContext = this->m_pScrContext;
      value = *ArrayIndexValue;
      AddRefToValue(m_pScrContext, (unsigned __int8)value.type, value.u);
      Scr_EvalArrayVariable(this->m_pScrContext, element->objectId, &value);
      break;
    case VAR_THREAD_LIST:
      v11 = this->m_pScrContext;
      value.u.intValue = fieldName;
      value.type = VAR_POINTER;
      AddRefToObject(v11, fieldName);
      break;
    case VAR_ENDON_LIST:
      value.type = VAR_STRING;
      if ( !fieldName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 67, ASSERT_TYPE_ASSERT, "( stringValue != 0 )", (const char *)&queryFormat, "stringValue != 0") )
        __debugbreak();
      value.u.intValue = fieldName;
      SL_AddRefToString((scr_string_t)fieldName);
      break;
    default:
      v9 = element->objectId;
      v10 = truncate_cast<unsigned short,unsigned int>(fieldName);
      Scr_EvalFieldVariable(this->m_pScrContext, v10, &value, v9);
      break;
  }
  return Scr_ScriptWatch::PostEvaluateWatchElement(this, childElement, &value);
}

/*
==============
Scr_ScriptWatch::EvaluateWatchChildren
==============
*/
void Scr_ScriptWatch::EvaluateWatchChildren(Scr_ScriptWatch *this, Scr_WatchElement_s *parentElement)
{
  Scr_WatchElement_s *v2; 
  Scr_ScriptWatch *scriptCodePosValue; 
  VariableType oldObjectType; 
  VariableType objectType; 
  VariableType v6; 
  unsigned int v7; 
  unsigned int objectId; 
  unsigned int AllThreads; 
  VariableType v10; 
  unsigned int SafeParentLocalId; 
  __int64 i; 
  unsigned int *p_localId; 
  VariableType v14; 
  int id; 
  unsigned int *v16; 
  size_t v17; 
  VariableType v18; 
  scrContext_t *v19; 
  int (__cdecl *v20)(const void *, const void *); 
  __int64 (__fastcall *v21)(const void *, const void *); 
  Scr_WatchElement_s *childArrayHead; 
  unsigned int childCount; 
  Scr_WatchElement_s *v24; 
  unsigned int v25; 
  unsigned int v26; 
  Scr_WatchElement_s *v27; 
  unsigned int v28; 
  __int64 v29; 
  Scr_WatchElement_s *v30; 
  int elementId_low; 
  __int64 p_fieldName; 
  __int64 v33; 
  bool v34; 
  int v35; 
  scrContext_t *v36; 
  char v37; 
  scrContext_t *v38; 
  char v39; 
  char v40; 
  char v41; 
  __int64 j; 
  char *v43; 
  __int64 v44; 
  scrContext_t *v45; 
  unsigned int v46; 
  bool v47; 
  Scr_WatchElement_s *v48; 
  unsigned __int8 v49; 
  bool v50; 
  int v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v54; 
  __int64 v55; 
  unsigned __int8 v56; 
  char *v57; 
  unsigned __int8 v58; 
  int v59; 
  unsigned __int64 m_size; 
  Scr_WatchElement_s *v61; 
  __int64 v62; 
  int v63; 
  unsigned int v64; 
  Scr_WatchElement_s **v65; 
  const char **p_refText; 
  Scr_WatchElement_s *v67; 
  scrContext_t *v68; 
  const char *v69; 
  int v70; 
  const char *v71; 
  ntl::fixed_vector<int,1024,0> *v72; 
  Scr_WatchElement_s *v73; 
  scrContext_t *v74; 
  VariableType v75; 
  const char *CanonicalString; 
  scrContext_t *v77; 
  const char *v78; 
  const char *refText; 
  const scrContext_t *v80; 
  const char *v81; 
  char *v82; 
  int v83; 
  int v84; 
  const char *v85; 
  const char *valueText; 
  int v87; 
  scrContext_t *v88; 
  char v89; 
  scrContext_t *m_pScrContext; 
  Scr_WatchElement_s *childHead; 
  int v92; 
  __int64 v93; 
  int v94; 
  Scr_WatchElement_s **p_next; 
  Scr_WatchElement_s *v96; 
  int v97; 
  scrContext_t *v98; 
  signed __int64 v99; 
  Scr_WatchElement_s *v100; 
  _QWORD *v101; 
  int v102; 
  signed __int64 v103; 
  signed __int64 k; 
  int v105; 
  signed __int64 v106; 
  int v107; 
  __int64 v108; 
  char v109; 
  bool v110; 
  char v111; 
  unsigned int v112; 
  unsigned int v113; 
  unsigned int v114; 
  unsigned int v115; 
  unsigned int v116; 
  Scr_WatchElement_s *v117; 
  Scr_WatchElement_s *parentElementa; 
  unsigned int *p_addr; 
  char *p_addra; 
  int (__cdecl *v121)(const void *, const void *); 
  Scr_WatchElement_s *v122; 
  _DebugMessage message; 
  _ScrSetChildCount v124; 
  unsigned int *v125; 
  void *v126; 
  __int64 v127; 
  __int64 *v128; 
  VariableValue result; 
  VariableValue value; 
  __int64 v131; 
  ntl::fixed_vector<int,1024,0> v132; 
  ntl::fixed_vector<int,1024,0> v133; 
  int Src[8]; 
  char dest[272]; 

  v131 = -2i64;
  v2 = parentElement;
  v117 = parentElement;
  scriptCodePosValue = this;
  result.u.scriptCodePosValue = (unsigned __int64)this;
  oldObjectType = parentElement->oldObjectType;
  objectType = parentElement->objectType;
  parentElement->oldObjectType = objectType;
  if ( (*((_BYTE *)parentElement + 135) & 2) == 0 || objectType == VAR_UNDEFINED )
  {
    m_pScrContext = this->m_pScrContext;
LABEL_270:
    Scr_FreeWatchElementChildrenStrict(m_pScrContext, parentElement);
    return;
  }
  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6467, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  if ( !scriptCodePosValue->m_pScrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6468, ASSERT_TYPE_ASSERT, "( m_pScrContext->m_varPub.evaluate )", (const char *)&queryFormat, "m_pScrContext->m_varPub.evaluate") )
    __debugbreak();
  v6 = v2->objectType;
  v7 = 0;
  v112 = 0;
  if ( v6 == VAR_THREAD_LIST )
  {
    if ( !v2->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6475, ASSERT_TYPE_ASSERT, "( parentElement->parent )", (const char *)&queryFormat, "parentElement->parent") )
      __debugbreak();
    objectId = v2->parent->objectId;
    if ( !objectId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6477, ASSERT_TYPE_ASSERT, "( objectId )", (const char *)&queryFormat, "objectId") )
      __debugbreak();
    AllThreads = Scr_FindAllThreads(scriptCodePosValue->m_pScrContext, objectId, NULL, scriptCodePosValue->localId);
    goto LABEL_55;
  }
  if ( v6 == VAR_ENDON_LIST )
  {
    if ( !v2->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6483, ASSERT_TYPE_ASSERT, "( parentElement->parent )", (const char *)&queryFormat, "parentElement->parent") )
      __debugbreak();
    objectId = v2->parent->objectId;
    if ( !objectId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6485, ASSERT_TYPE_ASSERT, "( objectId )", (const char *)&queryFormat, "objectId") )
      __debugbreak();
    AllThreads = Scr_FindAllEndons(scriptCodePosValue->m_pScrContext, objectId, NULL);
    goto LABEL_55;
  }
  objectId = v2->objectId;
  if ( !objectId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6492, ASSERT_TYPE_ASSERT, "( objectId )", (const char *)&queryFormat, "objectId") )
    __debugbreak();
  if ( (*((_BYTE *)v2 + 135) & 1) != 0 )
  {
    v10 = v2->objectType;
    if ( v10 == VAR_THREAD )
    {
      SafeParentLocalId = GetSafeParentLocalId(scriptCodePosValue->m_pScrContext, v2->objectId);
      if ( !SafeParentLocalId )
      {
        if ( GetObjectType(scriptCodePosValue->m_pScrContext, v2->objectId) != VAR_THREAD )
          goto LABEL_46;
        for ( i = scriptCodePosValue->m_pScrContext->m_vmPub.function_count; ; --i )
        {
          if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6512, ASSERT_TYPE_ASSERT, "( function_count )", (const char *)&queryFormat, "function_count") )
            __debugbreak();
          p_localId = &scriptCodePosValue->m_pScrContext->m_vmPub.function_frame_start[i].fs.localId;
          if ( v2->objectId == *p_localId )
            break;
        }
        while ( 1 )
        {
          --i;
          p_localId -= 10;
          SafeParentLocalId = *p_localId;
          if ( *p_localId )
            break;
          if ( !i )
          {
            v7 = 0;
            goto LABEL_46;
          }
        }
      }
      Src[0] = SafeParentLocalId + 5;
    }
    else
    {
      if ( (unsigned __int8)(v10 - 21) > 2u )
        goto LABEL_46;
      Src[0] = 4;
    }
  }
  else
  {
    Src[0] = 1;
  }
  v7 = 1;
  v112 = 1;
LABEL_46:
  v14 = v2->objectType;
  if ( v14 == VAR_THREAD )
  {
    Src[v7++] = 2;
    Src[v7] = 3;
  }
  else
  {
    if ( v14 != VAR_ARRAY )
      goto LABEL_51;
    Src[v7] = 0;
  }
  v112 = ++v7;
LABEL_51:
  if ( v7 > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6566, ASSERT_TYPE_ASSERT, "( hardcodedCount <= ( sizeof( *array_counter( hardcodedNames ) ) + 0 ) )", (const char *)&queryFormat, "hardcodedCount <= ARRAY_COUNT( hardcodedNames )") )
    __debugbreak();
  AllThreads = v7 + Scr_FindAllVariableField(scriptCodePosValue->m_pScrContext, objectId, NULL);
LABEL_55:
  v116 = AllThreads;
  if ( !AllThreads )
  {
    if ( v2->childCount )
    {
      if ( Sys_IsRemoteDebugServer(scriptCodePosValue->m_pScrContext) )
      {
        _DebugMessage::_DebugMessage(&message);
        _ScrFreeWatchElementChildren::_ScrFreeWatchElementChildren((_ScrFreeWatchElementChildren *)&v124);
        message.scrreadfile = (const _ScrReadFile *)&v124;
        message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_FREE_WATCH_ELEMENT_CHILDREN;
        id = v2->id;
        v124.has_parentelement = 1;
        v124.parentelement = id;
        Sys_WriteDebugSocketMessage(scriptCodePosValue->m_pScrContext, &message);
      }
      Scr_FreeWatchElementChildren(scriptCodePosValue->m_pScrContext, v2);
    }
    return;
  }
  v16 = (unsigned int *)ntl::nxheap::allocate(&s_debuggerHeap.m_heap, (int)(4 * AllThreads), 0x10ui64, 1);
  p_addr = v16;
  if ( !v16 )
    Sys_Error((const ObfuscateErrorText)&stru_144098198);
  v17 = v7;
  memcpy_0(v16, Src, v17 * 4);
  v18 = v2->objectType;
  v19 = scriptCodePosValue->m_pScrContext;
  if ( v18 == VAR_THREAD_LIST )
  {
    Scr_FindAllThreads(v19, objectId, v16, scriptCodePosValue->localId);
    v20 = (int (__cdecl *)(const void *, const void *))CompareThreadIndices;
  }
  else if ( v18 == VAR_ENDON_LIST )
  {
    Scr_FindAllEndons(v19, objectId, v16);
    v20 = (int (__cdecl *)(const void *, const void *))CompareArrayIndices;
  }
  else
  {
    Scr_FindAllVariableField(v19, objectId, &v16[v17]);
    v21 = (__int64 (__fastcall *)(const void *, const void *))Scr_CompareCanonicalStrings;
    if ( v6 == VAR_ARRAY )
      v21 = CompareArrayIndices;
    v20 = (int (__cdecl *)(const void *, const void *))v21;
  }
  v121 = v20;
  qsort(&v16[v17], v116 - v112, 4ui64, v20);
  childArrayHead = v2->childArrayHead;
  v122 = childArrayHead;
  childCount = v2->childCount;
  v113 = childCount;
  v24 = (Scr_WatchElement_s *)ntl::nxheap::allocate(&s_debuggerHeap.m_heap, (int)(136 * v116), 0x10ui64, 1);
  parentElementa = v24;
  if ( !v24 )
    Sys_Error((const ObfuscateErrorText)&stru_144098198);
  v127 = v116;
  memset_0(v24, 0, 136i64 * v116);
  v126 = ntl::nxheap::allocate(&s_debuggerHeap.m_heap, (int)(8 * v116), 0x10ui64, 1);
  if ( !v126 )
    Sys_Error((const ObfuscateErrorText)&stru_144098198);
  if ( !childArrayHead || (v109 = 1, v2->objectType != oldObjectType) )
    v109 = 0;
  v111 = 0;
  v25 = 0;
  v26 = 0;
  v114 = 0;
  if ( v116 )
  {
    v125 = p_addr;
    v27 = v2;
    v28 = childCount;
    do
    {
      v29 = v26;
      v30 = &parentElementa[v26];
      v30->valueText = SL_AllocString_Copy((const char *)&queryFormat.fmt + 3);
      v30->refText = SL_AllocString_Copy((const char *)&queryFormat.fmt + 3);
      if ( Scr_ScriptWatch::EvaluateWatchChildElement(scriptCodePosValue, v27, *v125, v30, v114 < v112) )
      {
        v30->parent = v27;
        v47 = scriptCodePosValue->elementId++ == -1;
        if ( v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6637, ASSERT_TYPE_ASSERT, "( elementId )", (const char *)&queryFormat, "elementId") )
          __debugbreak();
        elementId_low = LOWORD(scriptCodePosValue->elementId);
        v30->id = elementId_low;
        if ( elementId_low != scriptCodePosValue->elementId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6639, ASSERT_TYPE_ASSERT, "( newElement->id == elementId )", (const char *)&queryFormat, "newElement->id == elementId") )
          __debugbreak();
        v128 = (__int64 *)((char *)v126 + 8 * v29);
        *v128 = 0i64;
        if ( v109 && v25 < v28 )
        {
          p_fieldName = (__int64)&v122[v25].fieldName;
          while ( 1 )
          {
            v33 = p_fieldName - 56;
            v34 = v25 < v117->hardcodedCount;
            if ( v34 == v114 < v112 )
              v35 = v114 < v112 ? *(_DWORD *)p_fieldName - v30->fieldName : ((__int64 (__fastcall *)(__int64, unsigned int *))v121)(p_fieldName, &v30->fieldName);
            else
              v35 = (__PAIR64__(v34, v114) - v112) >> 32;
            if ( v35 >= 0 )
              break;
            v111 = 1;
            v36 = scriptCodePosValue->m_pScrContext;
            Scr_FreeWatchElementText((Scr_WatchElement_s *)(p_fieldName - 56));
            v37 = *(_BYTE *)(p_fieldName + 79);
            if ( (v37 & 0x10) != 0 )
            {
              *(_BYTE *)(p_fieldName + 79) = v37 & 0xEF;
              RemoveRefToValue(v36, *(unsigned __int8 *)(p_fieldName - 8), *(VariableUnion *)(p_fieldName - 16));
            }
            Scr_FreeWatchElementChildrenStrict(v36, (Scr_WatchElement_s *)(p_fieldName - 56));
            ++v25;
            p_fieldName += 136i64;
            if ( v25 >= v113 )
              goto LABEL_112;
          }
          v38 = scriptCodePosValue->m_pScrContext;
          v39 = *(_BYTE *)(v33 + 135);
          if ( (v39 & 0x10) != 0 )
          {
            *(_BYTE *)(v33 + 135) = v39 & 0xEF;
            RemoveRefToValue(v38, *(unsigned __int8 *)(v33 + 48), *(VariableUnion *)(v33 + 40));
          }
          if ( v35 )
          {
            v111 = 1;
          }
          else
          {
            if ( !scriptCodePosValue->elementId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6672, ASSERT_TYPE_ASSERT, "( elementId )", (const char *)&queryFormat, "elementId") )
              __debugbreak();
            --scriptCodePosValue->elementId;
            *((_BYTE *)v30 + 135) ^= (*((_BYTE *)v30 + 135) ^ *(_BYTE *)(v33 + 135)) & 2;
            v40 = *((_BYTE *)v30 + 135);
            v30->childArrayHead = *(Scr_WatchElement_s **)(v33 + 96);
            v30->childHead = *(Scr_WatchElement_s **)(v33 + 104);
            v30->childCount = *(_WORD *)(v33 + 124);
            v30->hardcodedCount = *(_WORD *)(v33 + 126);
            v30->objectType = *(_BYTE *)(v33 + 132);
            v30->oldObjectType = *(_BYTE *)(v33 + 133);
            v41 = v40 ^ (v40 ^ *(_BYTE *)(v33 + 135)) & 1;
            *((_BYTE *)v30 + 135) = v41;
            v30->bufferIndex = *(_WORD *)(v33 + 130);
            v30->sourcePos = *(_DWORD *)(v33 + 80);
            *((_BYTE *)v30 + 135) = v41 ^ (v41 ^ *(_BYTE *)(v33 + 135)) & 8;
            v30->changedTime = *(_DWORD *)(v33 + 84);
            if ( !*(_WORD *)(v33 + 128) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6686, ASSERT_TYPE_ASSERT, "( oldElement->id )", (const char *)&queryFormat, "oldElement->id") )
              __debugbreak();
            v30->id = *(_WORD *)(v33 + 128);
            for ( j = *(_QWORD *)(v33 + 104); j; j = *(_QWORD *)(j + 112) )
              *(_QWORD *)(j + 88) = v30;
            *v128 = v33;
            ++v25;
          }
LABEL_112:
          v27 = v117;
          v28 = v113;
        }
        v26 = ++v114;
      }
      else
      {
        Scr_FreeWatchElementText(v30);
        v26 = v114;
      }
      ++v125;
      --v127;
    }
    while ( v127 );
    v2 = v117;
    childCount = v113;
  }
  ntl::nxheap::free(&s_debuggerHeap.m_heap, p_addr);
  if ( v25 < childCount )
  {
    v111 = 1;
    v43 = (char *)&v122[v25] + 135;
    v44 = childCount - v25;
    do
    {
      v45 = scriptCodePosValue->m_pScrContext;
      Scr_FreeWatchElementText((Scr_WatchElement_s *)(v43 - 135));
      if ( (*v43 & 0x10) != 0 )
      {
        *v43 &= ~0x10u;
        RemoveRefToValue(v45, (unsigned __int8)*(v43 - 87), *(VariableUnion *)(v43 - 95));
      }
      Scr_FreeWatchElementChildrenStrict(v45, (Scr_WatchElement_s *)(v43 - 135));
      v43 += 136;
      --v44;
    }
    while ( v44 );
    childCount = v113;
  }
  v46 = v116;
  v47 = v116 == v114;
  if ( v116 < v114 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6714, ASSERT_TYPE_ASSERT, "( newIndex <= count )", (const char *)&queryFormat, "newIndex <= count") )
      __debugbreak();
    v47 = v116 == v114;
  }
  if ( !v47 )
  {
    v48 = (Scr_WatchElement_s *)ntl::nxheap::allocate(&s_debuggerHeap.m_heap, (int)(136 * v114), 0x10ui64, 1);
    if ( !v48 )
      Sys_Error((const ObfuscateErrorText)&stru_144098198);
    memcpy_0(v48, parentElementa, 136i64 * v114);
    ntl::nxheap::free(&s_debuggerHeap.m_heap, parentElementa);
    parentElementa = v48;
    v46 = v114;
    v116 = v114;
  }
  v49 = v109;
  v50 = v46 && (!v109 || v111 || v46 != childCount);
  v110 = v50;
  if ( Sys_IsRemoteDebugServer(scriptCodePosValue->m_pScrContext) && v50 )
  {
    _DebugMessage::_DebugMessage(&message);
    _ScrSetChildCount::_ScrSetChildCount(&v124);
    message.scrreadfile = (const _ScrReadFile *)&v124;
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_CHILD_COUNT;
    v51 = v2->id;
    v124.has_parentelement = 1;
    v124.parentelement = v51;
    v124.has_count = 1;
    v124.count = v46;
    v124.has_sametype = 1;
    v124.sametype = v49;
    v132.m_size = 0i64;
    if ( v49 )
    {
      v52 = 0;
      v53 = 0;
      if ( v46 )
      {
        v54 = v112;
        do
        {
          v55 = v53;
          v56 = v53 < v54;
          if ( v52 < childCount )
          {
            v57 = (char *)&v122[v52].fieldName;
            while ( 1 )
            {
              v58 = v52 < v117->hardcodedCount;
              if ( v58 == v56 )
              {
                if ( v53 < v54 )
                  v59 = *(_DWORD *)v57 - parentElementa[v55].fieldName;
                else
                  v59 = ((__int64 (__fastcall *)(char *, unsigned int *, const char *))v121)(v57, &parentElementa[v55].fieldName, "size() < max_size()");
              }
              else
              {
                v59 = v58 - v56;
              }
              if ( v132.m_size >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
                __debugbreak();
              *(_DWORD *)&v132.m_data.m_buffer[4 * v132.m_size++] = v59;
              if ( v59 >= 0 )
                break;
              ++v52;
              v57 += 136;
              v54 = v112;
              if ( v52 >= v113 )
                goto LABEL_156;
            }
            if ( !v59 )
              ++v52;
LABEL_156:
            childCount = v113;
            v54 = v112;
          }
          ++v53;
          v46 = v116;
        }
        while ( v53 < v116 );
        scriptCodePosValue = (Scr_ScriptWatch *)result.u.scriptCodePosValue;
        v2 = v117;
      }
    }
    m_size = 0i64;
    v133.m_size = 0i64;
    if ( v46 )
    {
      v61 = parentElementa;
      v62 = v46;
      do
      {
        if ( v61 )
          v63 = v61->id;
        else
          v63 = 0;
        if ( m_size >= 0x400 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 171, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
            __debugbreak();
          m_size = v133.m_size;
        }
        *(_DWORD *)&v133.m_data.m_buffer[4 * m_size] = v63;
        m_size = ++v133.m_size;
        ++v61;
        --v62;
      }
      while ( v62 );
      v2 = v117;
    }
    v124.compareresult = (const int *)&v132;
    v124.n_compareresult = v132.m_size;
    v124.children = (const int *)&v133;
    v124.n_children = m_size;
    Sys_WriteDebugSocketMessage(scriptCodePosValue->m_pScrContext, &message);
    ntl::fixed_vector<int,1024,0>::~fixed_vector<int,1024,0>(&v133);
    ntl::fixed_vector<int,1024,0>::~fixed_vector<int,1024,0>(&v132);
  }
  v64 = 0;
  v115 = 0;
  if ( v46 )
  {
    v65 = (Scr_WatchElement_s **)v126;
    p_addra = (char *)v126;
    p_refText = &parentElementa->refText;
    while ( 1 )
    {
      v67 = *v65;
      if ( v64 >= v112 )
      {
        v75 = v2->objectType;
        if ( v75 == VAR_ARRAY )
        {
          value = *Scr_GetArrayIndexValue(&result, *((_DWORD *)p_refText + 6));
          Scr_GetValueString(scriptCodePosValue->m_pScrContext, 0, &value, 257, dest);
        }
        else if ( (unsigned __int8)(v75 - 27) > 1u )
        {
          CanonicalString = Scr_GetCanonicalString(*((_DWORD *)p_refText + 6));
          Core_strcpy(dest, 0x101ui64, CanonicalString);
        }
        else
        {
          Core_strcpy(dest, 0x101ui64, *(p_refText - 1));
        }
        v77 = scriptCodePosValue->m_pScrContext;
        v78 = p_refText[7];
        switch ( v78[132] )
        {
          case 0x11:
            if ( strcmp_0(*((const char **)v78 + 4), "<locals>") )
              goto $LN650;
            goto LABEL_198;
          case 0x15:
          case 0x16:
          case 0x17:
$LN650:
            Com_sprintf(v132.m_data.m_buffer, 0x100ui64, "%s.%s", *((_QWORD *)v78 + 4), dest);
            goto LABEL_200;
          case 0x18:
            Com_sprintf(v132.m_data.m_buffer, 0x100ui64, "%s[%s]", *((_QWORD *)v78 + 4), dest);
LABEL_200:
            SL_AllocString_Replace(p_refText, v132.m_data.m_buffer);
            break;
          case 0x1B:
          case 0x1C:
LABEL_198:
            SL_AllocString_Replace(p_refText, dest);
            break;
          default:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6189, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
              __debugbreak();
            break;
        }
        v73 = (Scr_WatchElement_s *)(p_refText - 4);
        Scr_PostSetText(v77, (Scr_WatchElement_s *)(p_refText - 4));
        if ( !Sys_IsRemoteDebugServer(scriptCodePosValue->m_pScrContext) )
          goto LABEL_217;
        if ( v67 )
          refText = v67->refText;
        else
          refText = (char *)&queryFormat.fmt + 3;
        v80 = scriptCodePosValue->m_pScrContext;
        if ( !Sys_IsRemoteDebugServer(v80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6209, ASSERT_TYPE_ASSERT, "( Sys_IsRemoteDebugServer( scrContext ) )", (const char *)&queryFormat, "Sys_IsRemoteDebugServer( scrContext )") )
          __debugbreak();
        v81 = *p_refText;
        v82 = (char *)(refText - *p_refText);
        do
        {
          v83 = (unsigned __int8)v82[(_QWORD)v81];
          v84 = *(unsigned __int8 *)v81 - v83;
          if ( v84 )
            break;
          ++v81;
        }
        while ( v83 );
        if ( !v84 )
          goto LABEL_217;
        _DebugMessage::_DebugMessage(&message);
        _ScrSetElementRefText::_ScrSetElementRefText((_ScrSetElementRefText *)&v124);
        message.scrreadfile = (const _ScrReadFile *)&v124;
        message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_ELEMENT_REF_TEXT;
        v124.parentelement = *((unsigned __int16 *)p_refText + 48);
        *(_QWORD *)&v124.has_count = dest;
        v74 = (scrContext_t *)v80;
        goto LABEL_216;
      }
      v68 = scriptCodePosValue->m_pScrContext;
      v69 = p_refText[7];
      v70 = *((_DWORD *)p_refText + 6);
      if ( !v70 )
        break;
      switch ( v70 )
      {
        case 1:
          v72 = (ntl::fixed_vector<int,1024,0> *)*((_QWORD *)v69 + 3);
          break;
        case 2:
          SL_AllocString_Replace(p_refText, "<endons>");
          *((_BYTE *)p_refText + 103) |= 0x40u;
          goto LABEL_189;
        case 3:
          v71 = (const char *)*((_QWORD *)v69 + 4);
          if ( strcmp_0(v71, "<locals>") )
          {
            Com_sprintf(v132.m_data.m_buffer, 0x100ui64, "%s.self", v71);
LABEL_187:
            v72 = &v132;
            break;
          }
          v72 = (ntl::fixed_vector<int,1024,0> *)"self";
          break;
        case 4:
          SL_AllocString_Replace(p_refText, "<threads>");
          *((_BYTE *)p_refText + 103) |= 0x20u;
          goto LABEL_189;
        default:
          Com_sprintf(v132.m_data.m_buffer, 0x100ui64, "$t%i", (unsigned int)(v70 - 5));
          goto LABEL_187;
      }
      SL_AllocString_Replace(p_refText, v72->m_data.m_buffer);
LABEL_189:
      v73 = (Scr_WatchElement_s *)(p_refText - 4);
      Scr_PostSetText(v68, (Scr_WatchElement_s *)(p_refText - 4));
      if ( Sys_IsRemoteDebugServer(scriptCodePosValue->m_pScrContext) )
      {
        _DebugMessage::_DebugMessage(&message);
        _ScrSetNonFieldRefText::_ScrSetNonFieldRefText((_ScrSetNonFieldRefText *)&v124);
        message.scrreadfile = (const _ScrReadFile *)&v124;
        message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_NON_FIELD_REF_TEXT;
        v124.parentelement = *((unsigned __int16 *)p_refText + 48);
        v124.has_count = 1;
        v124.count = *((_DWORD *)p_refText + 6);
        v74 = scriptCodePosValue->m_pScrContext;
LABEL_216:
        v85 = *p_refText;
        v124.has_parentelement = 1;
        *(_QWORD *)&v124.has_sametype = v85;
        Sys_WriteDebugSocketMessage(v74, &message);
      }
LABEL_217:
      if ( v67 )
        valueText = v67->valueText;
      else
        valueText = (char *)&queryFormat.fmt + 3;
      Scr_DeltaElementValueText(scriptCodePosValue->m_pScrContext, v73, valueText);
      if ( v67 )
        Scr_FreeWatchElementText(v67);
      v64 = v115 + 1;
      v115 = v64;
      p_refText += 17;
      v65 = (Scr_WatchElement_s **)(p_addra + 8);
      p_addra += 8;
      v46 = v116;
      if ( v64 >= v116 )
        goto LABEL_223;
    }
    Com_sprintf(v132.m_data.m_buffer, 0x100ui64, "%s.size", *((_QWORD *)v69 + 4));
    goto LABEL_187;
  }
LABEL_223:
  ntl::nxheap::free(&s_debuggerHeap.m_heap, v126);
  if ( v122 )
    ntl::nxheap::free(&s_debuggerHeap.m_heap, v122);
  if ( !v46 )
  {
    ntl::nxheap::free(&s_debuggerHeap.m_heap, parentElementa);
    if ( !v2->childCount )
      return;
    if ( Sys_IsRemoteDebugServer(scriptCodePosValue->m_pScrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrFreeWatchElementChildren::_ScrFreeWatchElementChildren((_ScrFreeWatchElementChildren *)&v124);
      message.scrreadfile = (const _ScrReadFile *)&v124;
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_FREE_WATCH_ELEMENT_CHILDREN;
      v87 = v2->id;
      v124.has_parentelement = 1;
      v124.parentelement = v87;
      Sys_WriteDebugSocketMessage(scriptCodePosValue->m_pScrContext, &message);
    }
    v88 = scriptCodePosValue->m_pScrContext;
    Scr_FreeWatchElementText(v2);
    v89 = *((_BYTE *)v2 + 135);
    if ( (v89 & 0x10) != 0 )
    {
      *((_BYTE *)v2 + 135) = v89 & 0xEF;
      RemoveRefToValue(v88, (unsigned __int8)v2->value.type, v2->value.u);
    }
    parentElement = v2;
    m_pScrContext = v88;
    goto LABEL_270;
  }
  v2->childCount = v46;
  if ( (unsigned __int16)v46 != v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6869, ASSERT_TYPE_ASSERT, "( parentElement->childCount == count )", (const char *)&queryFormat, "parentElement->childCount == count") )
    __debugbreak();
  v2->hardcodedCount = v112;
  if ( (unsigned __int16)v112 != v112 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6871, ASSERT_TYPE_ASSERT, "( parentElement->hardcodedCount == hardcodedCount )", (const char *)&queryFormat, "parentElement->hardcodedCount == hardcodedCount") )
    __debugbreak();
  childHead = parentElementa;
  v2->childArrayHead = parentElementa;
  v92 = 0;
  v93 = v2->childCount;
  if ( v2->childCount )
  {
    v94 = v2->childCount - 1;
    p_next = &parentElementa->next;
    do
    {
      if ( v92 >= v94 )
        v96 = NULL;
      else
        v96 = &parentElementa[v92 + 1];
      *p_next = v96;
      ++v92;
      p_next += 17;
      --v93;
    }
    while ( v93 );
  }
  v2->childHead = parentElementa;
  if ( (*((_BYTE *)v2 + 135) & 0x20) != 0 )
  {
    if ( Sys_IsRemoteDebugServer(scriptCodePosValue->m_pScrContext) && v110 )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrSortElementChildren::_ScrSortElementChildren((_ScrSortElementChildren *)&v124);
      message.scrreadfile = (const _ScrReadFile *)&v124;
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SORT_ELEMENT_CHILDREN;
      v97 = v2->id;
      v124.has_parentelement = 1;
      v124.parentelement = v97;
      Sys_WriteDebugSocketMessage(scriptCodePosValue->m_pScrContext, &message);
    }
    v98 = scriptCodePosValue->m_pScrContext;
    if ( !v98->m_debuggerGlob.debugger_inited_system && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6315, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.debugger_inited_system )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.debugger_inited_system") )
      __debugbreak();
    if ( (*((_BYTE *)v2 + 135) & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 6316, ASSERT_TYPE_ASSERT, "( Scr_IsSortWatchElement( parentElement ) )", (const char *)&queryFormat, "Scr_IsSortWatchElement( parentElement )") )
      __debugbreak();
    v99 = v2->childCount;
    v100 = v2->childArrayHead;
    v101 = ntl::nxheap::allocate(&s_debuggerHeap.m_heap, (unsigned int)(8 * v99), 0x10ui64, 1);
    if ( !v101 )
      Sys_Error((const ObfuscateErrorText)&stru_144098198);
    v102 = 0;
    v103 = v99;
    if ( (_DWORD)v99 )
    {
      for ( k = 0i64; k < v99; ++k )
        v101[k] = &v100[v102++];
    }
    qsort_s(v101, v99, 8ui64, (_CoreCrtSecureSearchSortCompareFunction)CompareThreadElements_WithContext, v98);
    v105 = 0;
    if ( (_DWORD)v99 )
    {
      v106 = 0i64;
      v107 = v99 - 1;
      do
      {
        if ( v105 >= v107 )
          v108 = 0i64;
        else
          v108 = v101[v106 + 1];
        *(_QWORD *)(v101[v106] + 112i64) = v108;
        ++v105;
        ++v106;
      }
      while ( v106 < v103 );
    }
    v2->childHead = (Scr_WatchElement_s *)*v101;
    ntl::nxheap::free(&s_debuggerHeap.m_heap, v101);
    childHead = v2->childHead;
  }
  for ( ; childHead; childHead = childHead->next )
    Scr_ScriptWatch::EvaluateWatchChildren(scriptCodePosValue, childHead);
}

/*
==============
Scr_ScriptWatch::EvaluateWatchElement
==============
*/
void Scr_ScriptWatch::EvaluateWatchElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  char *valueText; 
  char *v5; 
  char v6; 
  VariableValue value; 
  char oldValueText[272]; 

  Scr_ScriptWatch::EvaluateWatchElementExpression(this, element, &value);
  valueText = (char *)element->valueText;
  v5 = (char *)(oldValueText - valueText);
  do
  {
    v6 = *valueText;
    valueText[(_QWORD)v5] = *valueText;
    ++valueText;
  }
  while ( v6 );
  Scr_ScriptWatch::PostEvaluateWatchElement(this, element, &value);
  Scr_PostSetText(this->m_pScrContext, element);
  Scr_DeltaElementValueText(this->m_pScrContext, element, oldValueText);
  Scr_ScriptWatch::EvaluateWatchChildren(this, element);
}

/*
==============
Scr_ScriptWatch::EvaluateWatchElementExpression
==============
*/
void Scr_ScriptWatch::EvaluateWatchElementExpression(Scr_ScriptWatch *this, Scr_WatchElement_s *element, VariableValue *value)
{
  bool v6; 

  if ( element->breakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7192, ASSERT_TYPE_ASSERT, "( !element->breakpoint )", (const char *)&queryFormat, "!element->breakpoint") )
    __debugbreak();
  if ( !element->expr.exprHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7195, ASSERT_TYPE_ASSERT, "( expr->exprHead )", (const char *)&queryFormat, "expr->exprHead") )
    __debugbreak();
  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7197, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  if ( !this->m_pScrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7198, ASSERT_TYPE_ASSERT, "( m_pScrContext->m_varPub.evaluate )", (const char *)&queryFormat, "m_pScrContext->m_varPub.evaluate") )
    __debugbreak();
  if ( this->m_pScrContext->m_Instance == SCRIPTINSTANCE_SERVER )
  {
    if ( !g_archiveGetDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7203, ASSERT_TYPE_ASSERT, "(g_archiveGetDvar)", (const char *)&queryFormat, "g_archiveGetDvar") )
      __debugbreak();
    g_archiveGetDvar = 0;
  }
  v6 = (*((_BYTE *)element + 135) & 0x10) != 0 && ((element->breakpointType - 1) & 0xFD) == 0;
  Scr_EvalScriptExpression(this->m_pScrContext, &element->expr, this->localId, value, v6, 0);
  if ( this->m_pScrContext->m_Instance == SCRIPTINSTANCE_SERVER )
  {
    if ( g_archiveGetDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7211, ASSERT_TYPE_ASSERT, "(!g_archiveGetDvar)", (const char *)&queryFormat, "!g_archiveGetDvar") )
      __debugbreak();
    g_archiveGetDvar = 1;
  }
}

/*
==============
Scr_ScriptWatch::ExpandElement
==============
*/
void Scr_ScriptWatch::ExpandElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, bool expand)
{
  Scr_WatchElement_s *childHead; 
  scrContext_t *m_pScrContext; 
  char v7; 
  char v8; 
  _DebugMessage message; 
  _ScrSelectElement v10; 

  if ( ((*((_BYTE *)element + 135) & 2) != 0) == expand )
  {
    if ( expand )
      childHead = element->childHead;
    else
      childHead = element->parent;
    if ( childHead && Sys_IsRemoteDebugServer(this->m_pScrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrSelectElement::_ScrSelectElement(&v10);
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SELECT_ELEMENT;
      message.scrreadfile = (const _ScrReadFile *)&v10;
      v10.element = childHead->id;
      v10.has_element = 1;
LABEL_18:
      Sys_WriteDebugSocketMessage(this->m_pScrContext, &message);
    }
  }
  else
  {
    if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrToggleExpandElement::_ScrToggleExpandElement((_ScrToggleExpandElement *)&v10);
      m_pScrContext = this->m_pScrContext;
      message.scrreadfile = (const _ScrReadFile *)&v10;
      v10.element = element->id;
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_TOGGLE_EXPAND_ELEMENT;
      v10.has_element = 1;
      Sys_WriteDebugSocketMessage(m_pScrContext, &message);
    }
    v7 = *((_BYTE *)element + 135) ^ (*((_BYTE *)element + 135) ^ (2 * ~(*((_BYTE *)element + 135) >> 1))) & 2;
    *((_BYTE *)element + 135) = v7;
    if ( (v7 & 2) == 0 || (element->objectType == VAR_UNDEFINED ? (v8 = v7 & 0xFD, *((_BYTE *)element + 135) = v8) : (Scr_ScriptWatch::EvaluateWatchChildren(this, element), v8 = *((_BYTE *)element + 135)), (v8 & 2) == 0) )
      Scr_FreeWatchElementChildrenStrict(this->m_pScrContext, element);
    if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrUpdateWatchHeight::_ScrUpdateWatchHeight((_ScrUpdateWatchHeight *)&v10);
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_UPDATE_WATCH_HEIGHT;
      message.scrreadfile = (const _ScrReadFile *)&v10;
      goto LABEL_18;
    }
  }
}

/*
==============
Scr_AbstractScriptList::FindScriptWindow
==============
*/
char Scr_AbstractScriptList::FindScriptWindow(Scr_AbstractScriptList *this, const char *filename, Scr_ScriptWindow **outScriptWindow)
{
  Scr_ScriptWindow **scriptWindows; 
  Scr_ScriptWindow **v6; 

  scriptWindows = this->scriptWindows;
  if ( !scriptWindows )
    return 0;
  v6 = (Scr_ScriptWindow **)bsearch(filename, scriptWindows, this->numLines, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareScriptWindow);
  if ( !v6 )
    return 0;
  *outScriptWindow = *v6;
  return 1;
}

/*
==============
Scr_ScriptWatch::FreeWatchElement
==============
*/
void Scr_ScriptWatch::FreeWatchElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  Scr_Breakpoint *breakpoint; 
  scrContext_t *m_pScrContext; 
  ScrFuncDebugData *m_pFuncTable; 
  int FuncTableIndex; 
  scrContext_t *v8; 
  char v9; 

  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 5586, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  if ( element->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 5587, ASSERT_TYPE_ASSERT, "( !element->parent )", (const char *)&queryFormat, "!element->parent") )
    __debugbreak();
  breakpoint = element->breakpoint;
  if ( breakpoint )
  {
    Scr_FreeWatchElementText(element);
    if ( breakpoint->element )
      Scr_FreeLineBreakpoint(this->m_pScrContext, breakpoint, 0);
    if ( element->breakpointType == 6 )
    {
      m_pScrContext = this->m_pScrContext;
      m_pFuncTable = m_pScrContext->m_vmDebugPub.m_pFuncTable;
      FuncTableIndex = Scr_GetFuncTableIndex(m_pScrContext, breakpoint->builtinIndex);
      --m_pFuncTable[FuncTableIndex].breakpointCount;
    }
  }
  else
  {
    v8 = this->m_pScrContext;
    Scr_FreeWatchElementText(element);
    v9 = *((_BYTE *)element + 135);
    if ( (v9 & 0x10) != 0 )
    {
      *((_BYTE *)element + 135) = v9 & 0xEF;
      RemoveRefToValue(v8, (unsigned __int8)element->value.type, element->value.u);
    }
    Scr_FreeWatchElementChildrenStrict(v8, element);
    if ( element->breakpointType )
      Scr_ScriptWatch::RemoveBreakpoint(this, element);
    Scr_FreeDebugExpr(this->m_pScrContext, &element->expr);
  }
  ntl::nxheap::free(&s_debuggerHeap.m_heap, element);
}

/*
==============
Scr_ScriptWindow::GetBreakpointCodePos
==============
*/
const char *Scr_ScriptWindow::GetBreakpointCodePos(Scr_ScriptWindow *this)
{
  SourceBufferInfo *v2; 
  int v3; 
  const char *i; 
  unsigned int j; 
  const char *result; 
  unsigned int sourcePos; 

  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1243, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  if ( this->selectedLine < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1245, ASSERT_TYPE_ASSERT, "( selectedLine >= 0 )", (const char *)&queryFormat, "selectedLine >= 0") )
    __debugbreak();
  v2 = &this->m_pScrContext->m_parserPub.sourceBufferLookup[this->bufferIndex];
  v3 = 0;
  for ( i = v2->sourceBuf; ; ++i )
  {
    if ( i - v2->sourceBuf > v2->len && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1253, ASSERT_TYPE_ASSERT, "( s - sourceBufData->sourceBuf <= sourceBufData->len )", (const char *)&queryFormat, "s - sourceBufData->sourceBuf <= sourceBufData->len") )
      __debugbreak();
    if ( v3 != this->selectedLine )
      goto LABEL_25;
    if ( i - v2->sourceBuf > 0xFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1256, ASSERT_TYPE_ASSERT, "( ( s - sourceBufData->sourceBuf ) <= 0xffffffff )", (const char *)&queryFormat, "( s - sourceBufData->sourceBuf ) <= UINT_MAX") )
      __debugbreak();
    for ( j = (_DWORD)i - LODWORD(v2->sourceBuf); *i; ++i )
      ;
    if ( i - v2->sourceBuf > 0xFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1262, ASSERT_TYPE_ASSERT, "( ( s - sourceBufData->sourceBuf ) <= 0xffffffff )", (const char *)&queryFormat, "( s - sourceBufData->sourceBuf ) <= UINT_MAX") )
      __debugbreak();
    result = Scr_GetOpcodePosOfType(this->m_pScrContext, this->bufferIndex, j, (int)i - LODWORD(v2->sourceBuf), SOURCE_TYPE_BREAKPOINT, &sourcePos);
    if ( result )
      return result;
    if ( this->selectedLine >= this->numLines - 1 )
      break;
    ++this->selectedLine;
    if ( !*i )
      goto LABEL_27;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1274, ASSERT_TYPE_ASSERT, "( !(*s) )", (const char *)&queryFormat, "!(*s)") )
      __debugbreak();
LABEL_25:
    while ( *i )
      ++i;
LABEL_27:
    ++v3;
  }
  return 0i64;
}

/*
==============
Scr_ScriptWatch::GetElementPrev
==============
*/
Scr_WatchElement_s *Scr_ScriptWatch::GetElementPrev(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  Scr_WatchElement_s *result; 
  Scr_WatchElement_s *next; 

  result = this->elementHead;
  if ( result == element )
    return 0i64;
  if ( !result )
  {
LABEL_5:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 3983, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
      __debugbreak();
    return 0i64;
  }
  while ( 1 )
  {
    next = result->next;
    if ( next == element )
      return result;
    result = result->next;
    if ( !next )
      goto LABEL_5;
  }
}

/*
==============
Scr_ScriptWatch::GetElementRef
==============
*/
Scr_WatchElement_s **Scr_ScriptWatch::GetElementRef(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  Scr_WatchElement_s *elementHead; 
  Scr_WatchElement_s **p_elementHead; 

  elementHead = this->elementHead;
  p_elementHead = &this->elementHead;
  if ( elementHead != element )
  {
    do
    {
      if ( !elementHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 3959, ASSERT_TYPE_ASSERT, "( *pElement )", (const char *)&queryFormat, "*pElement") )
        __debugbreak();
      p_elementHead = &(*p_elementHead)->next;
      elementHead = *p_elementHead;
    }
    while ( *p_elementHead != element );
  }
  return p_elementHead;
}

/*
==============
Scr_ScriptWatch::GetElementWithId
==============
*/
Scr_WatchElement_s *Scr_ScriptWatch::GetElementWithId(Scr_ScriptWatch *this, int id)
{
  return Scr_ScriptWatch::GetElementWithId_r(this, this->elementHead, id);
}

/*
==============
Scr_ScriptWatch::GetElementWithId_r
==============
*/
Scr_WatchElement_s *Scr_ScriptWatch::GetElementWithId_r(Scr_ScriptWatch *this, Scr_WatchElement_s *element, int id)
{
  Scr_WatchElement_s *v4; 
  Scr_WatchElement_s *childHead; 
  Scr_WatchElement_s *result; 

  v4 = element;
  if ( !element )
    return 0i64;
  while ( v4->id != id )
  {
    childHead = v4->childHead;
    if ( childHead )
    {
      result = Scr_ScriptWatch::GetElementWithId_r(this, childHead, id);
      if ( result )
        return result;
    }
    v4 = v4->next;
    if ( !v4 )
      return 0i64;
  }
  return v4;
}

/*
==============
Scr_ScriptWindow::GetFilename
==============
*/
char *Scr_ScriptWindow::GetFilename(Scr_ScriptWindow *this)
{
  __int64 bufferIndex; 
  scrContext_t *m_pScrContext; 

  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 505, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  bufferIndex = this->bufferIndex;
  if ( (_DWORD)bufferIndex == 65534 )
    return (char *)&queryFormat.fmt + 3;
  m_pScrContext = this->m_pScrContext;
  if ( (unsigned int)bufferIndex >= m_pScrContext->m_parserPub.sourceBufferLookupLen )
    return (char *)&queryFormat.fmt + 3;
  else
    return m_pScrContext->m_parserPub.sourceBufferLookup[bufferIndex].buf;
}

/*
==============
Scr_ScriptWindow::GetSourcePos
==============
*/
void Scr_ScriptWindow::GetSourcePos(Scr_ScriptWindow *this, unsigned int *start, unsigned int *end)
{
  SourceBufferInfo *v6; 
  int v7; 
  const char *i; 

  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 850, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  if ( this->selectedLine < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 852, ASSERT_TYPE_ASSERT, "( selectedLine >= 0 )", (const char *)&queryFormat, "selectedLine >= 0") )
    __debugbreak();
  v6 = &this->m_pScrContext->m_parserPub.sourceBufferLookup[this->bufferIndex];
  v7 = 0;
  for ( i = v6->sourceBuf; ; ++i )
  {
    if ( i - v6->sourceBuf > v6->len && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 861, ASSERT_TYPE_ASSERT, "( s - sourceBufData->sourceBuf <= sourceBufData->len )", (const char *)&queryFormat, "s - sourceBufData->sourceBuf <= sourceBufData->len") )
      __debugbreak();
    if ( v7 == this->selectedLine )
      break;
    for ( ; *i; ++i )
      ;
    ++v7;
  }
  if ( i - v6->sourceBuf > 0xFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 872, ASSERT_TYPE_ASSERT, "( ( s - sourceBufData->sourceBuf ) <= 0xffffffff )", (const char *)&queryFormat, "( s - sourceBufData->sourceBuf ) <= UINT_MAX") )
    __debugbreak();
  for ( *start = (_DWORD)i - LODWORD(v6->sourceBuf); *i; ++i )
    ;
  if ( i - v6->sourceBuf > 0xFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 877, ASSERT_TYPE_ASSERT, "( ( s - sourceBufData->sourceBuf ) <= 0xffffffff )", (const char *)&queryFormat, "( s - sourceBufData->sourceBuf ) <= UINT_MAX") )
    __debugbreak();
  *end = (_DWORD)i - LODWORD(v6->sourceBuf);
}

/*
==============
Scr_AbstractScriptList::Init
==============
*/
void Scr_AbstractScriptList::Init(Scr_AbstractScriptList *this, scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  this->m_pScrContext = scrContext;
  this->numLines = 0;
  this->scriptWindows = NULL;
}

/*
==============
Scr_ScriptList::Init
==============
*/
void Scr_ScriptList::Init(Scr_ScriptList *this, scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  int v6; 
  int v7; 
  unsigned int i; 
  unsigned int FirstSibling; 
  char *v10; 
  scr_string_t SiblingName; 
  const char *v12; 
  Scr_ScriptWindow **v13; 
  int v14; 
  Scr_ScriptWindow *v15; 
  int numCols; 
  unsigned int NextSibling; 
  int v18; 
  Scr_ScriptWindow *v19; 
  int v20; 
  const char *v21; 
  char Base[12280]; 
  char dest[128]; 

  this->m_pScrContext = scrContext;
  v6 = 0;
  this->scriptWindows = NULL;
  v7 = 1;
  this->numLines = 1;
  for ( i = FindFirstSibling(scrContext, scrContext->m_compilePub.loadedscripts); i; i = FindNextSibling(scrContext, i) )
    ++this->numLines;
  if ( this->numLines > 1536 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2892, ASSERT_TYPE_ASSERT, "(numLines <= 1536)", "%s\n\tMAX_SCRIPT_WINDOW_NAMES exceeded", "numLines <= MAX_SCRIPT_WINDOW_NAMES") )
    __debugbreak();
  v21 = "scriptdebugger/help.txt";
  FirstSibling = FindFirstSibling(scrContext, scrContext->m_compilePub.loadedscripts);
  if ( FirstSibling )
  {
    v10 = Base;
    do
    {
      SiblingName = GetSiblingName(scrContext, FirstSibling);
      v12 = SL_ConvertToString(SiblingName);
      *(_QWORD *)v10 = v12;
      if ( v12 )
        v10 += 8;
      FirstSibling = FindNextSibling(scrContext, FirstSibling);
    }
    while ( FirstSibling );
  }
  qsort(Base, this->numLines - 1, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)Scr_CompareScriptWindowsNames);
  v13 = (Scr_ScriptWindow **)ntl::nxheap::allocate(&s_debuggerHeap.m_heap, 8 * this->numLines, 0x10ui64, 1);
  if ( !v13 )
    Sys_Error((const ObfuscateErrorText)&stru_144098198);
  this->scriptWindows = v13;
  v14 = 0;
  Scr_Mem_TempCheckClear(scrContext);
  Scr_AddSourceBuffer(scrContext, "scriptdebugger/help.txt", NULL, 0, threadMode, -1);
  Scr_Mem_TempClear(scrContext);
  v15 = (Scr_ScriptWindow *)Mem_HunkDebug_AllocAligned(0x38ui64, 8ui64, "Scr_ScriptWindow");
  *this->scriptWindows = v15;
  Scr_ScriptWindow::SetScriptFile(v15, this->m_pScrContext, "scriptdebugger/help.txt");
  if ( v15->bufferIndex == 65534 )
  {
    Mem_HunkDebug_Free(v15);
    --this->numLines;
  }
  else
  {
    if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2695, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext", -2i64) )
      __debugbreak();
    this->m_pScrContext->m_parserPub.sourceBufferLookup[v15->bufferIndex].sortedIndex = 0;
    v14 = 1;
    numCols = v15->numCols;
    if ( numCols <= 0 )
      numCols = 0;
    this->selectedLine = 0;
    v6 = numCols;
  }
  NextSibling = FindFirstSibling(scrContext, scrContext->m_compilePub.loadedscripts);
  if ( NextSibling )
  {
    v18 = 1;
    do
    {
      Com_sprintf(dest, 0x80ui64, (const char *)&queryFormat, *(_QWORD *)&Base[8 * v7 - 8]);
      v19 = (Scr_ScriptWindow *)Mem_HunkDebug_AllocAligned(0x38ui64, 8ui64, "Scr_ScriptWindow");
      this->scriptWindows[v14] = v19;
      Scr_ScriptWindow::SetScriptFile(v19, this->m_pScrContext, dest);
      if ( v19->bufferIndex == 65534 )
      {
        Mem_HunkDebug_Free(v19);
        --this->numLines;
      }
      else
      {
        if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2695, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
          __debugbreak();
        this->m_pScrContext->m_parserPub.sourceBufferLookup[v19->bufferIndex].sortedIndex = v14++;
        v20 = v19->numCols;
        if ( v20 <= v6 )
          v20 = v6;
        v6 = v20;
      }
      v7 = ++v18;
      NextSibling = FindNextSibling(scrContext, NextSibling);
    }
    while ( NextSibling );
  }
  scrContext->m_debuggerGlob.colBuf = (char *)Mem_HunkDebug_Alloc(v6 + 1, "Scr_ScriptList::Init3");
}

/*
==============
Scr_ScriptWatch::Init
==============
*/
void Scr_ScriptWatch::Init(Scr_ScriptWatch *this, scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  this->m_pScrContext = scrContext;
  this->elementHead = NULL;
  *(_QWORD *)&this->elementId = 0i64;
}

/*
==============
Scr_ScriptWindow::Init
==============
*/
void Scr_ScriptWindow::Init(Scr_ScriptWindow *this)
{
  bool v2; 
  int v3; 
  int v4; 
  SourceBufferInfo *v5; 
  const unsigned __int8 *sourceBuf; 
  int GlyphFromUTF8; 
  int v8; 
  __int64 v9; 
  int numBytesConsumed; 

  v2 = this->bufferIndex == 65534;
  this->breakpointHead = NULL;
  this->builtinHead = NULL;
  this->numLines = 0;
  if ( !v2 )
  {
    if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2155, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
      __debugbreak();
    if ( this->bufferIndex >= this->m_pScrContext->m_parserPub.sourceBufferLookupLen )
    {
      LODWORD(v9) = this->bufferIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2157, ASSERT_TYPE_ASSERT, "(unsigned)( bufferIndex ) < (unsigned)( m_pScrContext->m_parserPub.sourceBufferLookupLen )", "bufferIndex doesn't index m_pScrContext->m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v9, this->m_pScrContext->m_parserPub.sourceBufferLookupLen) )
        __debugbreak();
    }
    v3 = 0;
    v4 = 0;
    v5 = &this->m_pScrContext->m_parserPub.sourceBufferLookup[this->bufferIndex];
    sourceBuf = (const unsigned __int8 *)v5->sourceBuf;
    this->numCols = 0;
    if ( v5->len > 0 )
    {
      do
      {
        if ( *sourceBuf )
        {
          if ( *sourceBuf == 9 )
          {
            v8 = 4 - v3 % 4;
          }
          else
          {
            GlyphFromUTF8 = GetGlyphFromUTF8(sourceBuf, &numBytesConsumed);
            v8 = 1;
            if ( GlyphFromUTF8 == -1 )
              v8 = 3;
          }
          v3 += v8;
        }
        else
        {
          if ( v3 > this->numCols )
            this->numCols = v3;
          ++this->numLines;
          v3 = 0;
        }
        ++v4;
        ++sourceBuf;
      }
      while ( v4 < v5->len );
      if ( v4 )
      {
        if ( *(sourceBuf - 1) )
          ++this->numLines;
      }
    }
  }
}

/*
==============
Scr_ScriptWatch::PasteNonBreakpointElement
==============
*/
Scr_WatchElement_s *Scr_ScriptWatch::PasteNonBreakpointElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, const char *text, bool user)
{
  Scr_WatchElement_s *i; 
  Scr_WatchElement_s **ElementRef; 
  Scr_WatchElement_s *WatchElement; 

  if ( element )
  {
    for ( i = element->parent; i; i = i->parent )
      element = i;
  }
  ElementRef = Scr_ScriptWatch::GetElementRef(this, element);
  WatchElement = Scr_ScriptWatch::CreateWatchElement(this, text, ElementRef, "Scr_ScriptWatch::PasteNonBreakpointElement");
  if ( WatchElement->breakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4344, ASSERT_TYPE_ASSERT, "( !newElement->breakpoint )", (const char *)&queryFormat, "!newElement->breakpoint") )
    __debugbreak();
  Scr_CompileText(this->m_pScrContext, text, &WatchElement->expr);
  Scr_ScriptWatch::EvaluateWatchElement(this, WatchElement);
  return WatchElement;
}

/*
==============
Scr_ScriptWatch::PostEvaluateWatchElement
==============
*/
char Scr_ScriptWatch::PostEvaluateWatchElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element, VariableValue *value)
{
  char v6; 
  scrContext_t *m_pScrContext; 
  const char *error_message; 
  int intValue; 
  char s[272]; 

  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7047, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  if ( !this->m_pScrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7048, ASSERT_TYPE_ASSERT, "( m_pScrContext->m_varPub.evaluate )", (const char *)&queryFormat, "m_pScrContext->m_varPub.evaluate") )
    __debugbreak();
  v6 = *((_BYTE *)element + 135);
  m_pScrContext = this->m_pScrContext;
  if ( (v6 & 0x10) != 0 )
  {
    *((_BYTE *)element + 135) = v6 & 0xEF;
    RemoveRefToValue(m_pScrContext, (unsigned __int8)element->value.type, element->value.u);
    m_pScrContext = this->m_pScrContext;
  }
  error_message = m_pScrContext->m_varPub.error_message;
  if ( error_message )
  {
    Com_sprintf(s, 0x101ui64, "<%s>", error_message);
    SL_AllocString_Replace(&element->valueText, s);
    element->objectId = 0;
    Scr_ClearErrorMessage(this->m_pScrContext);
    RemoveRefToValue(this->m_pScrContext, (unsigned __int8)value->type, value->u);
    return 0;
  }
  else
  {
    Scr_GetValueString(m_pScrContext, this->localId, value, 257, s);
    SL_AllocString_Replace(&element->valueText, s);
    if ( value->type == VAR_POINTER )
      intValue = value->u.intValue;
    else
      intValue = 0;
    element->objectId = intValue;
    if ( intValue || ((element->breakpointType - 1) & 0xFD) == 0 )
    {
      *((_BYTE *)element + 135) |= 0x10u;
      element->value.u.scriptCodePosValue = value->u.scriptCodePosValue;
      element->value.type = value->type;
      return 1;
    }
    else
    {
      RemoveRefToValue(this->m_pScrContext, (unsigned __int8)value->type, value->u);
      return 1;
    }
  }
}

/*
==============
Scr_ScriptWatch::RemoveBreakpoint
==============
*/
Scr_WatchElement_s *Scr_ScriptWatch::RemoveBreakpoint(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  char v4; 
  scrContext_t *m_pScrContext; 

  if ( !element->breakpointType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8346, ASSERT_TYPE_ASSERT, "( element->breakpointType != SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_NONE )", (const char *)&queryFormat, "element->breakpointType != SCR_BREAKPOINT_NONE") )
    __debugbreak();
  v4 = *((_BYTE *)element + 135);
  element->breakpointType = 0;
  m_pScrContext = this->m_pScrContext;
  if ( (v4 & 0x10) != 0 )
  {
    *((_BYTE *)element + 135) = v4 & 0xEF;
    RemoveRefToValue(m_pScrContext, (unsigned __int8)element->value.type, element->value.u);
  }
  return element;
}

/*
==============
Scr_ScriptWindow::RunToCursor
==============
*/
void Scr_ScriptWindow::RunToCursor(Scr_ScriptWindow *this)
{
  scrContext_t *m_pScrContext; 
  const char *BreakpointCodePos; 

  if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
  {
    if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1630, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
      __debugbreak();
    m_pScrContext = this->m_pScrContext;
    if ( m_pScrContext->m_debuggerGlob.atBreakpoint )
      Scr_ResumeBreakpoints(m_pScrContext);
  }
  if ( this->m_pScrContext->m_vmPub.function_count )
  {
    BreakpointCodePos = Scr_ScriptWindow::GetBreakpointCodePos(this);
    Scr_SetTempBreakpoint(this->m_pScrContext, BreakpointCodePos, 0, 0);
  }
}

/*
==============
Scr_AddAssignmentPos
==============
*/
void Scr_AddAssignmentPos(scrContext_t *scrContext, char *codePos)
{
  Scr_OpcodeList_s *v4; 

  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9401, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  if ( scrContext->m_compilePub.developer_statement != 2 && scrContext->m_debuggerGlob.assignHeadCodePos != codePos )
  {
    scrContext->m_debuggerGlob.assignHeadCodePos = codePos;
    v4 = (Scr_OpcodeList_s *)Mem_HunkDebug_AllocAligned(0x10ui64, 8ui64, "Scr_AddAssignmentPos");
    v4->codePos = codePos;
    v4->next = scrContext->m_debuggerGlob.assignHead;
    scrContext->m_debuggerGlob.assignHead = v4;
  }
}

/*
==============
Scr_AddBreakpoint
==============
*/
void Scr_AddBreakpoint(scrContext_t *scrContext, const unsigned __int8 *codePos)
{
  char *BreakpointInfo; 

  if ( *codePos == 0x9A && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 207, ASSERT_TYPE_ASSERT, "( *codePos != OP_NOP )", (const char *)&queryFormat, "*codePos != OP_NOP") )
    __debugbreak();
  BreakpointInfo = Scr_FindBreakpointInfo(scrContext, (const char *)codePos);
  if ( *BreakpointInfo != -102 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 209, ASSERT_TYPE_ASSERT, "( *breakpoint == OP_NOP )", (const char *)&queryFormat, "*breakpoint == OP_NOP") )
    __debugbreak();
  *BreakpointInfo = *codePos;
  ++scrContext->m_debuggerGlob.breakpointCount;
}

/*
==============
Scr_AddDebugRefCount
==============
*/
void Scr_AddDebugRefCount(const scrContext_t *scrContext, unsigned __int16 *refCount)
{
  Scr_WatchElement_s *i; 
  Scr_WatchElement_s *j; 
  __int64 v6; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8069, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  for ( i = scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.elementHead; i; i = i->next )
  {
    if ( !i->breakpoint )
    {
      if ( !i->expr.exprHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8076, ASSERT_TYPE_ASSERT, "( expr->exprHead )", (const char *)&queryFormat, "expr->exprHead") )
        __debugbreak();
      Scr_AddDebugExprRefCount(refCount, i->expr.exprHead);
    }
    if ( (*((_BYTE *)i + 135) & 0x10) != 0 && i->value.type == VAR_POINTER )
      ++refCount[i->value.u.uintValue];
    for ( j = i->childHead; j; j = *(Scr_WatchElement_s **)(v6 + 112) )
      Scr_AddDebugRefCountChildren(scrContext, j, refCount);
  }
}

/*
==============
Scr_AddDebugRefCountChildren
==============
*/
void Scr_AddDebugRefCountChildren(const scrContext_t *scrContext, Scr_WatchElement_s *element, unsigned __int16 *refCount)
{
  Scr_WatchElement_s *i; 

  if ( (*((_BYTE *)element + 135) & 0x10) != 0 && element->value.type == VAR_POINTER )
    ++refCount[element->value.u.uintValue];
  for ( i = element->childHead; i; i = i->next )
    Scr_AddDebugRefCountChildren(scrContext, i, refCount);
}

/*
==============
Scr_AddDebuggerRefs
==============
*/
void Scr_AddDebuggerRefs(scrContext_t *scrContext)
{
  if ( scrContext->m_varPub.developer )
  {
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9830, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
      __debugbreak();
    if ( scrContext->m_vmPub.function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9832, ASSERT_TYPE_ASSERT, "( !scrContext.m_vmPub.function_count )", (const char *)&queryFormat, "!scrContext.m_vmPub.function_count") )
      __debugbreak();
    scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.localId = 0;
    scrContext->m_vmPub.breakpointOutparamcount = 0;
    if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9836, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
      __debugbreak();
    scrContext->m_varPub.evaluate = 1;
    Scr_Evaluate(scrContext);
    Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 1);
    if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9842, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "scrContext.m_varPub.evaluate") )
      __debugbreak();
    scrContext->m_varPub.evaluate = 0;
  }
}

/*
==============
Scr_AddManualBreakpoint
==============
*/
void Scr_AddManualBreakpoint(scrContext_t *scrContext, unsigned __int8 *codePos)
{
  if ( !codePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 244, ASSERT_TYPE_ASSERT, "( codePos )", (const char *)&queryFormat, "codePos") )
    __debugbreak();
  if ( (unsigned __int8 *)scrContext->m_debuggerGlob.nextBreakpointCodePos != codePos || ((*codePos + 94) & 0xFD) != 0 )
  {
    if ( *codePos == 0xA3 )
    {
      *codePos = -92;
    }
    else
    {
      Scr_AddBreakpoint(scrContext, codePos);
      *codePos = -94;
    }
  }
  else
  {
    if ( scrContext->m_debuggerGlob.nextBreakpointCodePosMasked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 250, ASSERT_TYPE_ASSERT, "( !scrContext.m_debuggerGlob.nextBreakpointCodePosMasked )", (const char *)&queryFormat, "!scrContext.m_debuggerGlob.nextBreakpointCodePosMasked") )
      __debugbreak();
    scrContext->m_debuggerGlob.nextBreakpointCodePosMasked = 1;
  }
}

/*
==============
Scr_AllocBreakpoint
==============
*/
Scr_Breakpoint *Scr_AllocBreakpoint(scrContext_t *scrContext)
{
  Scr_Breakpoint *m_breakpointsHead; 
  Scr_Breakpoint *result; 

  m_breakpointsHead = scrContext->m_debuggerGlob.m_breakpointsHead;
  if ( !m_breakpointsHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 340, ASSERT_TYPE_ASSERT, "(breakpoint)", "%s\n\tToo many breakpoints ( %d max )", "breakpoint", 128) )
    __debugbreak();
  result = m_breakpointsHead;
  scrContext->m_debuggerGlob.m_breakpointsHead = scrContext->m_debuggerGlob.m_breakpointsHead->next;
  return result;
}

/*
==============
Scr_CheckBreakonNotify
==============
*/
void Scr_CheckBreakonNotify(scrContext_t *scrContext, unsigned int notifyListOwnerId, scr_string_t stringValue, VariableValue *top, const char *pos, unsigned int localId)
{
  VariableType *p_type; 
  unsigned int v11; 
  char v12; 
  int v13; 
  Scr_WatchElement_s *i; 
  char *nextBreakpointCodePos; 
  VariableValue value; 

  if ( scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7773, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7774, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  if ( !scrContext->m_debuggerGlob.disableBreakpoints )
  {
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7780, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
      __debugbreak();
    scrContext->m_vmPub.top = top;
    scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.localId = localId;
    scrContext->m_evaluateGlob.m_breakonString = stringValue;
    p_type = &top->type;
    scrContext->m_evaluateGlob.m_breakonObject = notifyListOwnerId;
    v11 = 0;
    if ( top->type != VAR_PRECODEPOS )
    {
      do
      {
        ++v11;
        p_type -= 16;
        if ( *p_type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7794, ASSERT_TYPE_ASSERT, "( ( currentValue->type != VAR_CODEPOS ) )", "%s\n\t( currentValue - pScrVmPub->stack ) = 0x%llx", "( currentValue->type != VAR_CODEPOS )", (__int64)&p_type[-60720i64 - (_QWORD)scrContext] >> 4) )
          __debugbreak();
      }
      while ( *p_type != VAR_PRECODEPOS );
    }
    scrContext->m_vmPub.breakpointOutparamcount = v11;
    if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7799, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
      __debugbreak();
    scrContext->m_varPub.evaluate = 1;
    v12 = 0;
    v13 = 0;
LABEL_20:
    for ( i = scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.elementHead; ; i = i->next )
    {
      if ( !i )
      {
        if ( v12 )
          Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 1);
        if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7859, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "scrContext.m_varPub.evaluate") )
          __debugbreak();
        scrContext->m_varPub.evaluate = 0;
        *(_QWORD *)&scrContext->m_evaluateGlob.m_breakonObject = 0i64;
        if ( v13 )
        {
          if ( pos )
          {
            Scr_SpecialBreakpoint(scrContext, top, pos, localId, 18, SOURCE_TYPE_NOTIFY);
          }
          else
          {
            if ( scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7874, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
              __debugbreak();
            if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7875, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
              __debugbreak();
            nextBreakpointCodePos = scrContext->m_debuggerGlob.nextBreakpointCodePos;
            if ( nextBreakpointCodePos )
            {
              if ( scrContext->m_debuggerGlob.nextBreakpointCodePosMasked )
              {
                scrContext->m_debuggerGlob.nextBreakpointCodePosMasked = 0;
              }
              else if ( *nextBreakpointCodePos == -94 )
              {
                Scr_RemoveBreakpoint(scrContext, (unsigned __int8 *)scrContext->m_debuggerGlob.nextBreakpointCodePos);
              }
              else
              {
                if ( *nextBreakpointCodePos != -92 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 289, ASSERT_TYPE_ASSERT, "( *codePos == OP_manualAndAssignmentBreakpoint )", (const char *)&queryFormat, "*codePos == OP_manualAndAssignmentBreakpoint") )
                  __debugbreak();
                *nextBreakpointCodePos = -93;
              }
              scrContext->m_debuggerGlob.nextBreakpointCodePos = NULL;
            }
            Scr_ScriptWatch::SortHitBreakpointsTop(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch);
            scrContext->m_debuggerGlob.breakpointCodePos = NULL;
            scrContext->m_debuggerGlob.stepLineNum = -1;
            Scr_DisplayDebugger(scrContext);
            Scr_ResetTimeout(scrContext);
          }
        }
        return;
      }
      if ( i->expr.breakonExpr )
      {
        if ( i->breakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7811, ASSERT_TYPE_ASSERT, "( !element->breakpoint )", (const char *)&queryFormat, "!element->breakpoint") )
          __debugbreak();
        if ( !i->expr.exprHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7813, ASSERT_TYPE_ASSERT, "( expr->exprHead )", (const char *)&queryFormat, "expr->exprHead") )
          __debugbreak();
        scrContext->m_evaluateGlob.m_breakonHit = 0;
        if ( Scr_EvalScriptExpression(scrContext, &i->expr, 0, &value, 1, 1) && !v12 )
        {
          Scr_ClearErrorMessage(scrContext);
          RemoveRefToValue(scrContext, (unsigned __int8)value.type, value.u);
$retry2_0:
          v12 = 1;
          Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 0);
          goto LABEL_20;
        }
        if ( scrContext->m_varPub.error_message )
        {
          Scr_ClearErrorMessage(scrContext);
          RemoveRefToValue(scrContext, (unsigned __int8)value.type, value.u);
          if ( (*((_BYTE *)i + 135) & 0x10) == 0 )
            continue;
          if ( !v12 )
            goto $retry2_0;
        }
        else if ( !scrContext->m_evaluateGlob.m_breakonHit )
        {
          continue;
        }
        if ( i->breakpointType == 1 && Scr_ConditionalExpression(scrContext, i, localId) )
        {
          Scr_WatchElementHitBreakpoint(scrContext, i, 1);
          v13 = 1;
        }
      }
    }
  }
}

/*
==============
Scr_CompareScriptWindowsNames
==============
*/
int Scr_CompareScriptWindowsNames(const void *a, const void *b)
{
  return I_strnicmp(*(const char **)a, *(const char **)b, 0x7FFFFFFFui64);
}

/*
==============
Scr_ConditionalExpression
==============
*/
bool Scr_ConditionalExpression(scrContext_t *scrContext, Scr_WatchElement_s *element, unsigned int localId)
{
  Scr_WatchElement_s *next; 
  VariableType type; 
  VariableType ObjectType; 
  unsigned int Self; 
  unsigned __int8 breakpointType; 
  bool v11; 
  Scr_WatchElement_s *i; 
  VariableValue value; 

  next = element->next;
  if ( next )
  {
    while ( next->breakpointType == 2 )
    {
      if ( next->breakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9969, ASSERT_TYPE_ASSERT, "( !conditionalElement->breakpoint )", (const char *)&queryFormat, "!conditionalElement->breakpoint") )
        __debugbreak();
      if ( !next->expr.exprHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9971, ASSERT_TYPE_ASSERT, "( expr->exprHead )", (const char *)&queryFormat, "expr->exprHead") )
        __debugbreak();
      Scr_EvalScriptExpression(scrContext, &next->expr, localId, &value, 0, 1);
      type = value.type;
      if ( value.type == VAR_POINTER )
      {
        RemoveRefToObject(scrContext, value.u.uintValue);
        ObjectType = GetObjectType(scrContext, value.u.uintValue);
        if ( (unsigned __int8)ObjectType < VAR_THREAD )
          return 0;
        if ( (unsigned __int8)ObjectType <= VAR_CHILD_THREAD )
        {
          if ( value.u.intValue != localId )
            return 0;
        }
        else
        {
          if ( (unsigned __int8)ObjectType > VAR_ENTITY )
            return 0;
          if ( !localId )
            return 0;
          Self = Scr_GetSelf(scrContext, localId);
          if ( value.u.intValue != Self )
            return 0;
        }
      }
      else
      {
        if ( value.type == VAR_INTEGER )
        {
          value.u.intValue = value.u.intValue != 0;
        }
        else
        {
          Scr_CastBool_NonInteger(scrContext, &value);
          type = value.type;
        }
        if ( scrContext->m_varPub.error_message )
        {
          Scr_ClearErrorMessage(scrContext);
          return 0;
        }
        if ( type != VAR_INTEGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10010, ASSERT_TYPE_ASSERT, "( newValue.type == VAR_INTEGER )", (const char *)&queryFormat, "newValue.type == VAR_INTEGER") )
          __debugbreak();
        if ( !value.u.intValue )
          return 0;
      }
      next = next->next;
      if ( !next )
        break;
    }
  }
  breakpointType = element->breakpointType;
  v11 = ((breakpointType - 1) & 0xFA) == 0 && breakpointType != 2;
  Scr_WatchElementHitBreakpoint(scrContext, element, v11);
  for ( i = element->next; i; i = i->next )
  {
    if ( i->breakpointType != 2 )
      break;
    Scr_WatchElementHitBreakpoint(scrContext, i, v11);
  }
  return v11;
}

/*
==============
Scr_ConnectRemote
==============
*/
void Scr_ConnectRemote(scrContext_t *scrContext)
{
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  Scr_WatchElement_s *elementHead; 
  Scr_WatchElement_s *next; 
  unsigned __int8 *nextBreakpointCodePos; 
  unsigned __int8 *killThreadCodePos; 

  if ( Sys_StartRemoteDebugServer(scrContext) && scrContext->m_debuggerGlob.debugger_inited_system )
  {
    if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9378, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
      __debugbreak();
    if ( scrContext->m_varPub.developer && scrContext->m_debuggerGlob.debugger_inited_system )
    {
      if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9339, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
        __debugbreak();
      scrContext->m_debuggerGlob.debugger_inited_system = 0;
      scrContext->m_varPub.evaluate = 0;
      m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
      Scr_ScriptWatch::UpdateBreakpoints(&m_pDynamic->scriptWatch, 0);
      Scr_UnbreakAllAssignmentPos(m_pDynamic->scriptWatch.m_pScrContext);
      if ( m_pDynamic->scriptWatch.elementHead )
      {
        do
        {
          elementHead = m_pDynamic->scriptWatch.elementHead;
          next = elementHead->next;
          Scr_ScriptWatch::FreeWatchElement(&m_pDynamic->scriptWatch, elementHead);
          m_pDynamic->scriptWatch.elementHead = next;
        }
        while ( next );
      }
      nextBreakpointCodePos = (unsigned __int8 *)scrContext->m_debuggerGlob.nextBreakpointCodePos;
      if ( nextBreakpointCodePos )
      {
        Scr_RemoveManualBreakpoint(scrContext, nextBreakpointCodePos);
        scrContext->m_debuggerGlob.nextBreakpointCodePos = NULL;
      }
      killThreadCodePos = (unsigned __int8 *)scrContext->m_debuggerGlob.killThreadCodePos;
      if ( killThreadCodePos )
      {
        Scr_RemoveManualBreakpoint(scrContext, killThreadCodePos);
        scrContext->m_debuggerGlob.killThreadCodePos = NULL;
      }
      if ( scrContext->m_debuggerGlob.breakpointCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9359, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->breakpointCount )", (const char *)&queryFormat, "!pScrDebuggerGlob->breakpointCount") )
          __debugbreak();
      }
    }
    Scr_InitDebuggerSystem(scrContext, MAIN);
  }
}

/*
==============
Scr_DebugKillThread
==============
*/
void Scr_DebugKillThread(scrContext_t *scrContext, unsigned int threadId, const char *codePos)
{
  __int64 v4; 
  Scr_WatchElementDoubleNode_t *v6; 
  Scr_WatchElementNode_s *list; 
  int v8; 
  Scr_WatchElement_s *element; 
  unsigned __int8 breakpointType; 
  unsigned __int8 *nextBreakpointCodePos; 
  char *ScriptPos; 

  v4 = threadId;
  if ( !scrContext->m_debuggerGlob.variableBreakpoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10259, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->variableBreakpoints )", (const char *)&queryFormat, "pScrDebuggerGlob->variableBreakpoints") )
    __debugbreak();
  v6 = scrContext->m_debuggerGlob.variableBreakpoints[v4];
  if ( v6 )
  {
    if ( scrContext->m_varPub.evaluate )
    {
      list = v6->list;
      v8 = 0;
      if ( list )
      {
        do
        {
          element = list->element;
          if ( !list->element->breakpointType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10272, ASSERT_TYPE_ASSERT, "( element->breakpointType != SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_NONE )", (const char *)&queryFormat, "element->breakpointType != SCR_BREAKPOINT_NONE") )
            __debugbreak();
          breakpointType = element->breakpointType;
          if ( ((breakpointType - 1) & 0xFD) == 0 && element->objectId == (_DWORD)v4 )
          {
            Scr_WatchElementHitBreakpoint(scrContext, element, breakpointType == 1);
            element->deadCodePos = codePos;
            if ( breakpointType == 1 )
              v8 = 1;
          }
          list = list->next;
        }
        while ( list );
        if ( v8 )
        {
          if ( scrContext->m_vmPub.function_count )
          {
            if ( scrContext->m_debuggerGlob.killThreadCodePos )
            {
              if ( scrContext->m_debuggerGlob.killThreadCodePos != ScriptCodePos::GetScriptPos(&scrContext->m_vmPub.function_frame->fs.pos, scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10298, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->killThreadCodePos == pScrVmPub->function_frame->fs.pos.GetScriptPos( scrContext ) )", (const char *)&queryFormat, "pScrDebuggerGlob->killThreadCodePos == pScrVmPub->function_frame->fs.pos.GetScriptPos( scrContext )") )
                __debugbreak();
              Scr_RemoveManualBreakpoint(scrContext, (unsigned __int8 *)scrContext->m_debuggerGlob.killThreadCodePos);
              scrContext->m_debuggerGlob.killThreadCodePos = NULL;
            }
            nextBreakpointCodePos = (unsigned __int8 *)scrContext->m_debuggerGlob.nextBreakpointCodePos;
            if ( nextBreakpointCodePos )
              Scr_RemoveManualBreakpoint(scrContext, nextBreakpointCodePos);
            ScriptPos = (char *)ScriptCodePos::GetScriptPos(&scrContext->m_vmPub.function_frame->fs.pos, scrContext);
            scrContext->m_debuggerGlob.nextBreakpointCodePos = ScriptPos;
            scrContext->m_debuggerGlob.isReturnPos = 0;
            Scr_AddManualBreakpoint(scrContext, (unsigned __int8 *)ScriptPos);
            scrContext->m_debuggerGlob.nextBreakpointThreadId = scrContext->m_vmPub.function_frame->fs.localId;
          }
          else
          {
            scrContext->m_debuggerGlob.run_debugger = 1;
          }
        }
      }
    }
  }
}

/*
==============
Scr_DebugTerminateThread
==============
*/
void Scr_DebugTerminateThread(scrContext_t *scrContext, int topThread)
{
  char *v4; 
  function_frame_t *v5; 
  char *ScriptPos; 
  char *v7; 
  char *killThreadCodePos; 

  v4 = (char *)&scrContext->m_vmPub + 40 * topThread;
  v5 = &scrContext->m_vmPub.function_frame_start[topThread];
  if ( !ScriptCodePos::IsScriptPos(&v5->fs.pos) )
    goto LABEL_12;
  ScriptPos = (char *)ScriptCodePos::GetScriptPos(&v5->fs.pos, scrContext);
  v7 = ScriptPos;
  if ( ScriptPos == &g_EndPos )
    return;
  Scr_DebugKillThread(scrContext, *((_DWORD *)v4 + 16), ScriptPos);
  if ( topThread != scrContext->m_vmPub.function_count )
  {
LABEL_12:
    ScriptCodePos::SetScriptPos(&v5->fs.pos, &g_EndPos);
    return;
  }
  if ( scrContext->m_vmPub.function_frame != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10349, ASSERT_TYPE_ASSERT, "(pScrVmPub->function_frame == &pScrVmPub->function_frame_start[topThread])", (const char *)&queryFormat, "pScrVmPub->function_frame == &pScrVmPub->function_frame_start[topThread]") )
    __debugbreak();
  if ( ScriptCodePos::GetScriptPos(&scrContext->m_vmPub.function_frame->fs.pos, scrContext) != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10350, ASSERT_TYPE_ASSERT, "(pScrVmPub->function_frame->fs.pos.GetScriptPos( scrContext ) == codePos)", (const char *)&queryFormat, "pScrVmPub->function_frame->fs.pos.GetScriptPos( scrContext ) == codePos") )
    __debugbreak();
  killThreadCodePos = scrContext->m_debuggerGlob.killThreadCodePos;
  if ( scrContext->m_debuggerGlob.kill_thread )
  {
    if ( killThreadCodePos == v7 )
      return;
    goto LABEL_12;
  }
  scrContext->m_debuggerGlob.kill_thread = 1;
  if ( killThreadCodePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10362, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->killThreadCodePos )", (const char *)&queryFormat, "!pScrDebuggerGlob->killThreadCodePos") )
    __debugbreak();
  if ( ((*v7 + 94) & 0xFD) != 0 )
  {
    scrContext->m_debuggerGlob.killThreadCodePos = v7;
    Scr_AddManualBreakpoint(scrContext, (unsigned __int8 *)v7);
  }
}

/*
==============
Scr_DeltaElementValueText
==============
*/
void Scr_DeltaElementValueText(scrContext_t *scrContext, Scr_WatchElement_s *element, const char *oldValueText)
{
  const char *valueText; 
  const char *v6; 
  int v8; 
  int v9; 
  _DebugMessage message; 
  _ScrSetElementValueText v11; 

  valueText = element->valueText;
  v6 = (const char *)(oldValueText - valueText);
  do
  {
    v8 = (unsigned __int8)v6[(_QWORD)valueText];
    v9 = *(unsigned __int8 *)valueText - v8;
    if ( v9 )
      break;
    ++valueText;
  }
  while ( v8 );
  if ( v9 )
  {
    if ( Sys_IsRemoteDebugServer(scrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrSetElementValueText::_ScrSetElementValueText(&v11);
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_ELEMENT_VALUE_TEXT;
      message.scrreadfile = (const _ScrReadFile *)&v11;
      v11.element = element->id;
      v11.valuetext = element->valueText;
      v11.has_element = 1;
      Sys_WriteDebugSocketMessage(scrContext, &message);
    }
    else if ( *oldValueText )
    {
      *((_BYTE *)element + 135) |= 8u;
      element->changedTime = 0;
    }
  }
}

/*
==============
Scr_DisplayDebugger
==============
*/
void Scr_DisplayDebugger(scrContext_t *scrContext)
{
  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9641, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
    __debugbreak();
  if ( Sys_IsRemoteDebugServer(scrContext) || Sys_IsMainThread() )
  {
    if ( scrContext->m_debuggerGlob.atBreakpoint )
      Scr_ScriptCallStack::UpdateStack(&scrContext->m_debuggerGlob.m_pDynamic->scriptCallStack, scrContext);
    if ( !Sys_IsRemoteDebugServer(scrContext) || (Scr_DisplayDebuggerRemote(scrContext), !Sys_IsRemoteDebugServer(scrContext)) && Sys_IsMainThread() )
      Scr_ResumeBreakpoints(scrContext);
  }
  else
  {
    if ( scrContext->m_debuggerGlob.smpDisplay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9650, ASSERT_TYPE_ASSERT, "(!pScrDebuggerGlob->smpDisplay)", (const char *)&queryFormat, "!pScrDebuggerGlob->smpDisplay") )
      __debugbreak();
    scrContext->m_debuggerGlob.smpDisplay = 1;
    while ( scrContext->m_debuggerGlob.smpDisplay )
      Sys_Sleep(1);
  }
}

/*
==============
Scr_DisplayDebuggerRemote
==============
*/
void Scr_DisplayDebuggerRemote(scrContext_t *scrContext)
{
  ScriptCodePos *p_varUsagePos; 
  const char *m_scriptPos; 
  __int64 v4; 
  _ScrUpdate__CallstackLine *v5; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  int v7; 
  __int64 v8; 
  int *p_bufferindex; 
  unsigned int sourcePos; 
  char *v11; 
  int v12; 
  __int64 v13; 
  char *v14; 
  int v15; 
  char *v16; 
  SourceBufferInfo *v17; 
  __int64 buf; 
  const char *sourceBuf; 
  int LineNumInternal; 
  int *v21; 
  int HaveSuspendedNetworkCompleteThread; 
  int col; 
  char *startLine; 
  char *v25; 
  const char *v26; 
  _DebugMessage message; 
  _ScrUpdate v28; 
  char v29[1040]; 
  _ScrUpdate__CallstackLine v30; 

  if ( !Sys_IsRemoteDebugServer(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9487, ASSERT_TYPE_ASSERT, "( Sys_IsRemoteDebugServer( scrContext ) )", (const char *)&queryFormat, "Sys_IsRemoteDebugServer( scrContext )") )
    __debugbreak();
  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9490, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
    __debugbreak();
  p_varUsagePos = &scrContext->m_varPub.varUsagePos;
  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  v26 = m_scriptPos;
  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, "<script debugger variable>");
  if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9507, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
    __debugbreak();
  scrContext->m_varPub.evaluate = 1;
  Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 0);
  Scr_Evaluate(scrContext);
  if ( scrContext->m_debuggerGlob.atBreakpoint )
  {
    v4 = 129i64;
    if ( scrContext->m_debuggerGlob.m_pDynamic->scriptCallStack.numLines >= 129 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9517, ASSERT_TYPE_ASSERT, "(pScrDebuggerGlob->m_pDynamic->scriptCallStack.numLines < CALLSTACK_MAX_DEPTH)", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic->scriptCallStack.numLines < CALLSTACK_MAX_DEPTH") )
      __debugbreak();
    v5 = &v30;
    do
    {
      _ScrUpdate__CallstackLine::_ScrUpdate__CallstackLine(v5++);
      --v4;
    }
    while ( v4 );
    m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
    v7 = 0;
    if ( m_pDynamic->scriptCallStack.numLines > 0 )
    {
      v8 = 0i64;
      p_bufferindex = &v30.bufferindex;
      do
      {
        sourcePos = m_pDynamic->scriptCallStack.stack[v8].sourcePos;
        v11 = &v29[v8 * 8];
        v12 = 0;
        v13 = *(unsigned int *)&v29[v8 * 8 + 112i64 - (_QWORD)v29 + (_QWORD)m_pDynamic];
        v14 = (char *)&queryFormat.fmt + 3;
        v15 = 0;
        startLine = (char *)&queryFormat.fmt + 3;
        v16 = (char *)&queryFormat.fmt + 3;
        col = 0;
        if ( (unsigned int)v13 < scrContext->m_parserPub.sourceBufferLookupLen )
        {
          v17 = &scrContext->m_parserPub.sourceBufferLookup[v13];
          buf = (__int64)v17->buf;
          sourceBuf = v17->sourceBuf;
          v25 = (char *)buf;
          LineNumInternal = Scr_GetLineNumInternal(sourceBuf, sourcePos, (const char **)&startLine, &col);
          m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
          v12 = LineNumInternal;
          v15 = col;
          v14 = startLine;
          v16 = v25;
        }
        v21 = p_bufferindex - 7;
        *(p_bufferindex - 1) = 1;
        *p_bufferindex = v13;
        ++v7;
        p_bufferindex[1] = 1;
        ++v8;
        p_bufferindex[2] = sourcePos;
        *(_QWORD *)(p_bufferindex + 3) = v16;
        p_bufferindex[5] = 1;
        p_bufferindex[6] = v12;
        p_bufferindex[7] = 1;
        p_bufferindex[8] = v15;
        *(_QWORD *)(p_bufferindex + 9) = v14;
        p_bufferindex += 18;
        *(_QWORD *)v11 = v21;
      }
      while ( v7 < m_pDynamic->scriptCallStack.numLines );
      m_scriptPos = v26;
    }
    _DebugMessage::_DebugMessage(&message);
    _ScrUpdate::_ScrUpdate(&v28);
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_UPDATE;
    message.scrreadfile = (const _ScrReadFile *)&v28;
    v28.n_callstack = scrContext->m_debuggerGlob.m_pDynamic->scriptCallStack.numLines;
    v28.callstack = (const _ScrUpdate__CallstackLine *const *)v29;
    Sys_WriteDebugSocketMessage(scrContext, &message);
    p_varUsagePos = &scrContext->m_varPub.varUsagePos;
  }
  else
  {
    scrContext->m_debuggerGlob.atBreakpoint = 1;
  }
  if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9556, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "scrContext.m_varPub.evaluate") )
    __debugbreak();
  scrContext->m_varPub.evaluate = 0;
  Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 1);
  p_varUsagePos->m_genericPos = (unsigned __int64)m_scriptPos;
  if ( Sys_IsMainThread() )
  {
    Scr_DisplayDebuggerRemoteInternal(scrContext);
  }
  else
  {
    scrContext->m_debuggerGlob.disableDebuggerRemote = 1;
    HaveSuspendedNetworkCompleteThread = Sys_ThreadsMP_HaveSuspendedNetworkCompleteThread();
    if ( HaveSuspendedNetworkCompleteThread )
      Sys_ThreadsMP_SetServerNetworkCompletedEvent();
    while ( scrContext->m_debuggerGlob.disableDebuggerRemote )
      ;
    if ( HaveSuspendedNetworkCompleteThread )
    {
      Sys_ThreadsMP_WaitAllowServerNetworkLoop();
      Sys_ThreadsMP_ResetServerNetworkCompletedEvent();
    }
  }
}

/*
==============
Scr_DisplayDebuggerRemoteInternal
==============
*/
void Scr_DisplayDebuggerRemoteInternal(scrContext_t *scrContext)
{
  const char *m_scriptPos; 
  _DebugMessage message; 
  _ScrKeepAlive v4; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9426, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9429, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
    __debugbreak();
  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, "<script debugger variable>");
  if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9436, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
    __debugbreak();
  scrContext->m_varPub.evaluate = 1;
  Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 0);
  if ( scrContext->m_debuggerGlob.atBreakpoint )
  {
    while ( Sys_IsRemoteDebugServer(scrContext) )
    {
      if ( scrContext->m_debuggerGlob.atBreakpoint && Sys_Milliseconds() - scrContext->m_debuggerGlob.m_lastKeepAliveTime >= 500 )
      {
        scrContext->m_debuggerGlob.m_lastKeepAliveTime = Sys_Milliseconds();
        _DebugMessage::_DebugMessage(&message);
        _ScrKeepAlive::_ScrKeepAlive(&v4);
        message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_KEEP_ALIVE;
        message.scrreadfile = (const _ScrReadFile *)&v4;
        Sys_WriteDebugSocketMessage(scrContext, &message);
      }
      if ( scrContext->m_debuggerGlob.abort )
      {
        *(_QWORD *)&scrContext->m_debuggerGlob.step_mode = 0i64;
        Scr_Step(scrContext);
      }
      Scr_ProcessDebugMessages(scrContext);
      Sys_FlushDebugSocketData(scrContext);
      RMsg_SendMessages();
      if ( !scrContext->m_debuggerGlob.atBreakpoint )
        goto LABEL_20;
    }
    Scr_ResumeBreakpoints(scrContext);
  }
LABEL_20:
  Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 1);
  if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9474, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "scrContext.m_varPub.evaluate") )
    __debugbreak();
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  scrContext->m_varPub.evaluate = 0;
}

/*
==============
Scr_DisplayThreadPosRemote
==============
*/
void Scr_DisplayThreadPosRemote(scrContext_t *scrContext, const _ScrDisplayThreadPos *request)
{
  Scr_WatchElement_s *ElementFromId; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  scrContext_t *m_pScrContext; 
  VariableType objectType; 
  char *ThreadPos; 
  char *v9; 
  __int64 SourceBuffer; 
  unsigned int PrevSourcePos; 
  int LineNum; 
  scrContext_t *v13; 
  const char *buf; 
  _DebugMessage message; 
  _ScrSelectScriptLine v16; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7952, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  if ( ElementFromId )
  {
    m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
    if ( !m_pDynamic->scriptWatch.m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7902, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
      __debugbreak();
    m_pScrContext = m_pDynamic->scriptWatch.m_pScrContext;
    if ( m_pScrContext->m_varPub.evaluate )
    {
      objectType = ElementFromId->objectType;
      if ( objectType == VAR_DEAD_THREAD )
        goto LABEL_15;
      if ( objectType != VAR_THREAD || (*((_BYTE *)ElementFromId + 135) & 1) == 0 )
        return;
      ThreadPos = (char *)Scr_GetThreadPos(m_pScrContext, ElementFromId->objectId);
      if ( !ThreadPos )
LABEL_15:
        ThreadPos = (char *)ElementFromId->deadCodePos;
      v9 = NULL;
      if ( ThreadPos != &g_EndPos )
        v9 = ThreadPos;
      if ( v9 )
      {
        SourceBuffer = Scr_GetSourceBuffer(m_pDynamic->scriptWatch.m_pScrContext, v9 - 1);
        PrevSourcePos = Scr_GetPrevSourcePos(m_pDynamic->scriptWatch.m_pScrContext, v9 - 1, 0);
        LineNum = Scr_GetLineNum(m_pDynamic->scriptWatch.m_pScrContext, SourceBuffer, PrevSourcePos);
        if ( Sys_IsRemoteDebugServer(m_pDynamic->scriptWatch.m_pScrContext) )
        {
          _DebugMessage::_DebugMessage(&message);
          _ScrSelectScriptLine::_ScrSelectScriptLine(&v16);
          v13 = m_pDynamic->scriptWatch.m_pScrContext;
          message.scrreadfile = (const _ScrReadFile *)&v16;
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SELECT_SCRIPT_LINE;
          v16.has_bufferindex = 1;
          v16.bufferindex = SourceBuffer;
          v16.has_linenum = 1;
          v16.linenum = LineNum;
          if ( (unsigned int)SourceBuffer <= v13->m_parserPub.sourceBufferLookupLen )
            buf = v13->m_parserPub.sourceBufferLookup[SourceBuffer].buf;
          else
            buf = (char *)&queryFormat.fmt + 3;
          v16.filename = buf;
          Sys_WriteDebugSocketMessage(v13, &message);
        }
      }
    }
  }
}

/*
==============
Scr_EnableBreakpoints
==============
*/
void Scr_EnableBreakpoints(scrContext_t *scrContext, bool enable)
{
  scrContext->m_debuggerGlob.disableBreakpoints = !enable;
}

/*
==============
Scr_EndThreadExecutionTime
==============
*/
void Scr_EndThreadExecutionTime(scrContext_t *scrContext, unsigned int threadId)
{
  int v12; 
  unsigned int m_variableListParentSize; 

  if ( scrContext->m_varPub.developer && !IsObjectFree(scrContext, threadId) && GetObjectType(scrContext, threadId) != VAR_DEAD_THREAD )
  {
    _RDI = GetStartLocalId(scrContext, threadId);
    if ( (unsigned int)_RDI >= scrContext->m_variableListParentSize )
    {
      m_variableListParentSize = scrContext->m_variableListParentSize;
      v12 = _RDI;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11351, ASSERT_TYPE_ASSERT, "(unsigned)( parentThreadId ) < (unsigned)( scrContext.m_variableListParentSize )", "parentThreadId doesn't index scrContext.m_variableListParentSize\n\t%i not in [0, %i)", v12, m_variableListParentSize) )
        __debugbreak();
    }
    _RDX = scrContext->m_debuggerGlob.m_debugThreadTimes;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(__rdtsc() - scrContext->m_debuggerGlob.currentThreadExecutionTimeStartTime) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
      vcvtsd2ss xmm1, xmm0, xmm0
      vaddss  xmm2, xmm1, dword ptr [rdx+rdi*8+4]
      vmovss  dword ptr [rdx+rdi*8+4], xmm2
    }
  }
}

/*
==============
Scr_Evaluate
==============
*/
void Scr_Evaluate(scrContext_t *scrContext)
{
  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7683, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  Scr_ScriptWatch::Evaluate(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch);
}

/*
==============
Scr_ExitSkipIntructions
==============
*/
void Scr_ExitSkipIntructions(scrContext_t *scrContext)
{
  scrContext->m_debuggerGlob.skip_instr = 0;
}

/*
==============
Scr_ExpandElementRemote
==============
*/
void Scr_ExpandElementRemote(scrContext_t *scrContext, const _ScrExpandElement *request)
{
  Scr_WatchElement_s *ElementFromId; 
  int expand; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  Scr_WatchElement_s *childHead; 
  scrContext_t *m_pScrContext; 
  char v9; 
  char v10; 
  _DebugMessage message; 
  _ScrSelectElement v12; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4250, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  ElementFromId = Scr_GetElementFromId(scrContext, request->element);
  expand = request->expand;
  if ( ElementFromId )
  {
    m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
    if ( ((*((_BYTE *)ElementFromId + 135) & 2) != 0) == (expand != 0) )
    {
      if ( expand )
        childHead = ElementFromId->childHead;
      else
        childHead = ElementFromId->parent;
      if ( childHead && Sys_IsRemoteDebugServer(m_pDynamic->scriptWatch.m_pScrContext) )
      {
        _DebugMessage::_DebugMessage(&message);
        _ScrSelectElement::_ScrSelectElement(&v12);
        message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SELECT_ELEMENT;
        message.scrreadfile = (const _ScrReadFile *)&v12;
        v12.element = childHead->id;
        v12.has_element = 1;
LABEL_22:
        Sys_WriteDebugSocketMessage(m_pDynamic->scriptWatch.m_pScrContext, &message);
      }
    }
    else
    {
      if ( Sys_IsRemoteDebugServer(m_pDynamic->scriptWatch.m_pScrContext) )
      {
        _DebugMessage::_DebugMessage(&message);
        _ScrToggleExpandElement::_ScrToggleExpandElement((_ScrToggleExpandElement *)&v12);
        m_pScrContext = m_pDynamic->scriptWatch.m_pScrContext;
        message.scrreadfile = (const _ScrReadFile *)&v12;
        v12.element = ElementFromId->id;
        message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_TOGGLE_EXPAND_ELEMENT;
        v12.has_element = 1;
        Sys_WriteDebugSocketMessage(m_pScrContext, &message);
      }
      v9 = *((_BYTE *)ElementFromId + 135) ^ (*((_BYTE *)ElementFromId + 135) ^ (2 * ~(*((_BYTE *)ElementFromId + 135) >> 1))) & 2;
      *((_BYTE *)ElementFromId + 135) = v9;
      if ( (v9 & 2) == 0 || (ElementFromId->objectType == VAR_UNDEFINED ? (v10 = v9 & 0xFD, *((_BYTE *)ElementFromId + 135) = v10) : (Scr_ScriptWatch::EvaluateWatchChildren(&m_pDynamic->scriptWatch, ElementFromId), v10 = *((_BYTE *)ElementFromId + 135)), (v10 & 2) == 0) )
        Scr_FreeWatchElementChildrenStrict(m_pDynamic->scriptWatch.m_pScrContext, ElementFromId);
      if ( Sys_IsRemoteDebugServer(m_pDynamic->scriptWatch.m_pScrContext) )
      {
        _DebugMessage::_DebugMessage(&message);
        _ScrUpdateWatchHeight::_ScrUpdateWatchHeight((_ScrUpdateWatchHeight *)&v12);
        message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_UPDATE_WATCH_HEIGHT;
        message.scrreadfile = (const _ScrReadFile *)&v12;
        goto LABEL_22;
      }
    }
  }
}

/*
==============
Scr_ExportActiveThreadInfo
==============
*/
void Scr_ExportActiveThreadInfo(void)
{
  scrContext_t *i; 

  for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
    Scr_ExportActiveThreadInfoInternal(i);
}

/*
==============
Scr_ExportActiveThreadInfoInternal
==============
*/
void Scr_ExportActiveThreadInfoInternal(scrContext_t *scrContext, const char *a2)
{
  bool v4; 
  fileHandle_t *v11; 
  __int64 v16; 
  __int64 m_variableListChildSize; 
  __int64 v18; 
  __int64 v19; 
  ChildVariableValue *childVariableValue; 
  unsigned int StartLocalId; 
  __int64 v24; 
  unsigned int codeOffset; 
  unsigned __int64 v26; 
  unsigned int v27; 
  const char *v28; 
  unsigned int SourceBuffer; 
  unsigned int PrevSourcePos; 
  const char *v31; 
  const char *v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int ClosestSourcePosOfType; 
  unsigned int Self; 
  unsigned int v37; 
  const char *v38; 
  unsigned int EntNum; 
  __int64 EntClassId; 
  __int64 ObjectType; 
  __int64 v49; 
  char *fmt; 
  char *fmta; 
  __int64 v54; 
  unsigned int localId; 
  __int64 v56; 
  fileHandle_t result[2]; 
  char v58[8]; 
  _BYTE buffer[64]; 
  char v62[8]; 
  char dest[128]; 
  char outBuf[512]; 
  char v65[512]; 
  char v66[2048]; 

  v4 = !scrContext->m_varPub.developer;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:aScriptThreadsC; "script_threads.csv"
    vmovups ymm1, ymmword ptr cs:aTimeSinceStart+20h; "n Time (us), Self, ThreadId, Function N"...
    vmovups xmmword ptr [rsp+0DB0h+result.handle.handle], xmm0
    vmovups ymm0, ymmword ptr cs:aTimeSinceStart; "Time Since Started (s), Execution Time "...
  }
  strcpy(v58, "sv");
  __asm
  {
    vmovups [rbp+0CB0h+buffer], ymm0
    vmovups xmm0, xmmword ptr cs:aTimeSinceStart+40h; "ction Name, Start Location\n"
    vmovups [rbp+0CB0h+var_D10], ymm1
    vmovsd  xmm1, qword ptr cs:aTimeSinceStart+50h; "t Location\n"
    vmovups [rbp+0CB0h+var_CF0], xmm0
    vmovsd  [rbp+0CB0h+var_CE0], xmm1
  }
  strcpy(v62, "on\n");
  if ( !v4 )
  {
    v11 = FS_FOpenTextFileWrite(result, a2);
    if ( v11 == (fileHandle_t *)-1i64 )
    {
      Com_PrintError(23, "Couldn't open file \"%s\" for writing.\n", (const char *)result);
      return;
    }
    __asm
    {
      vmovaps [rsp+0DB0h+var_30], xmm6
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__rdtsc() & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vcvtsd2ss xmm6, xmm0, xmm0
    }
    v16 = -1i64;
    do
      ++v16;
    while ( buffer[v16] );
    FS_Write(buffer, (unsigned int)v16, (fileHandle_t)v11);
    m_variableListChildSize = scrContext->m_variableListChildSize;
    if ( (_DWORD)m_variableListChildSize )
    {
      v18 = (unsigned int)m_variableListChildSize;
      v19 = 0i64;
      __asm
      {
        vmovaps [rsp+0DB0h+var_40], xmm7
        vmovss  xmm7, cs:__real@3a83126f
      }
      v56 = m_variableListChildSize;
      while ( 1 )
      {
        childVariableValue = scrContext->m_varGlob.childVariableValue;
        if ( (*(_BYTE *)&childVariableValue[v19].tn & 0x3F) == 12 )
          break;
LABEL_42:
        ++v19;
        v56 = --v18;
        if ( !v18 )
        {
          __asm { vmovaps xmm7, [rsp+0DB0h+var_40] }
          goto LABEL_44;
        }
      }
      StartLocalId = GetStartLocalId(scrContext, *(_DWORD *)(childVariableValue[v19].u.u.scriptCodePosValue + 12));
      _R13 = StartLocalId;
      localId = StartLocalId;
      v24 = scrContext->m_debuggerGlob.m_debugCallStack[StartLocalId];
      if ( (unsigned int)v24 >= 2 )
      {
        codeOffset = scrContext->m_debuggerGlob.m_debugCallStackEntry[v24].codeOffset;
        if ( codeOffset == -1 )
          goto LABEL_21;
        v26 = (unsigned __int64)codeOffset >> 1;
        v27 = scrContext->m_debuggerGlob.m_debugCallStackEntry[v24].codeOffset & 1;
        v28 = &scrContext->m_varPub.programBuffer[v26];
        if ( !Scr_IsInOpcodeMemory(scrContext, v28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11444, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePosition ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePosition )") )
          __debugbreak();
        SourceBuffer = Scr_GetSourceBuffer(scrContext, v28 - 1);
        PrevSourcePos = Scr_GetPrevSourcePos(scrContext, v28 - 1, v27);
        if ( SourceBuffer == -1 )
        {
          v31 = "<DEBUG_CALLSTACK_ENTRY_COUNT exceeded - internal error>";
LABEL_23:
          Core_strcpy(outBuf, 0x200ui64, v31);
LABEL_24:
          v32 = Scr_GetThreadPos(scrContext, localId) - 1;
          v33 = Scr_GetSourceBuffer(scrContext, v32);
          v34 = Scr_GetPrevSourcePos(scrContext, v32, 0);
          ClosestSourcePosOfType = Scr_GetClosestSourcePosOfType(scrContext, v33, v34, SOURCE_TYPE_THREAD_START);
          Scr_GetSourcePos(scrContext, v33, ClosestSourcePosOfType, v65, 512);
          Self = Scr_GetSelf(scrContext, localId);
          v37 = Self;
          if ( Self == scrContext->m_varPub.levelId )
          {
            v38 = "level";
          }
          else
          {
            if ( Self != scrContext->m_varPub.animId )
            {
              if ( GetObjectType(scrContext, Self) == VAR_ENTITY )
              {
                EntNum = Scr_GetEntNum(scrContext, v37);
                EntClassId = (unsigned int)Scr_GetEntClassId(scrContext, v37);
                LODWORD(fmt) = EntNum;
                Com_sprintf(dest, 0x80ui64, "$%c%i", EntClassId, fmt);
              }
              else if ( GetObjectType(scrContext, v37) == VAR_DEAD_ENTITY )
              {
                Com_sprintf(dest, 0x80ui64, "removed entity");
              }
              else if ( GetObjectType(scrContext, v37) == VAR_OBJECT )
              {
                Com_sprintf(dest, 0x80ui64, "$s%i", v37);
              }
              else if ( GetObjectType(scrContext, v37) == VAR_ARRAY )
              {
                Com_sprintf(dest, 0x80ui64, "$a%i", v37);
              }
              else
              {
                ObjectType = (unsigned __int8)GetObjectType(scrContext, v37);
                LODWORD(fmt) = v37;
                Com_sprintf(dest, 0x80ui64, "%d:%i", ObjectType, fmt);
              }
              goto LABEL_39;
            }
            v38 = "anim";
          }
          Core_strcpy(dest, 0x80ui64, v38);
LABEL_39:
          _RAX = scrContext->m_debuggerGlob.m_debugThreadTimes;
          __asm
          {
            vmovss  xmm2, dword ptr [rax+r13*8+4]
            vsubss  xmm0, xmm6, dword ptr [rax+r13*8]
            vmulss  xmm1, xmm0, xmm7
            vcvtss2sd xmm3, xmm1, xmm1
            vcvtss2sd xmm2, xmm2, xmm2
          }
          LODWORD(v54) = localId;
          __asm
          {
            vmovq   r9, xmm3
            vmovsd  [rsp+0DB0h+fmt], xmm2
          }
          Com_sprintf(v66, 0x800ui64, "%.1f,%.1f,%s,$%d,\"%s\",\"%s\"\n", *(double *)&_XMM3, *(double *)&fmta, dest, v54, v65, outBuf);
          v49 = -1i64;
          do
            ++v49;
          while ( v66[v49] );
          FS_Write(v66, (unsigned int)v49, (fileHandle_t)v11);
          v18 = v56;
          goto LABEL_42;
        }
        if ( SourceBuffer == -2 )
        {
LABEL_21:
          v31 = "<removed thread>";
          goto LABEL_23;
        }
        if ( SourceBuffer != 65534 )
        {
          Scr_GetSourcePos(scrContext, SourceBuffer, PrevSourcePos, outBuf, 512);
          goto LABEL_24;
        }
      }
      v31 = (char *)&queryFormat.fmt + 3;
      goto LABEL_23;
    }
LABEL_44:
    FS_FCloseFile((fileHandle_t)v11);
    __asm { vmovaps xmm6, [rsp+0DB0h+var_30] }
  }
}

/*
==============
Scr_FindBreakpointInfo
==============
*/
char *Scr_FindBreakpointInfo(const scrContext_t *scrContext, const char *codePos)
{
  unsigned int v4; 

  if ( !codePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 190, ASSERT_TYPE_ASSERT, "( codePos )", (const char *)&queryFormat, "codePos") )
    __debugbreak();
  if ( codePos < scrContext->m_varPub.programBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 197, ASSERT_TYPE_ASSERT, "( codePos >= scrContext.m_varPub.programBuffer )", (const char *)&queryFormat, "codePos >= scrContext.m_varPub.programBuffer") )
    __debugbreak();
  if ( (unsigned __int64)(codePos - scrContext->m_varPub.programBuffer) > 0x7FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 199, ASSERT_TYPE_ASSERT, "( ( codePos - scrContext.m_varPub.programBuffer ) <= MAX_SCRIPT_OFFSET )", (const char *)&queryFormat, "( codePos - scrContext.m_varPub.programBuffer ) <= MAX_SCRIPT_OFFSET") )
    __debugbreak();
  v4 = (_DWORD)codePos - LODWORD(scrContext->m_varPub.programBuffer);
  if ( v4 >= scrContext->m_compilePub.programLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 193, ASSERT_TYPE_ASSERT, "( index < scrContext.m_compilePub.programLen )", (const char *)&queryFormat, "index < scrContext.m_compilePub.programLen") )
    __debugbreak();
  return &scrContext->m_debuggerGlob.breakpoints[v4];
}

/*
==============
Scr_FreeBreakpoint
==============
*/
void Scr_FreeBreakpoint(scrContext_t *scrContext, Scr_Breakpoint *breakpoint)
{
  breakpoint->next = scrContext->m_debuggerGlob.m_breakpointsHead;
  scrContext->m_debuggerGlob.m_breakpointsHead = breakpoint;
}

/*
==============
Scr_FreeLineBreakpoint
==============
*/
void Scr_FreeLineBreakpoint(scrContext_t *scrContext, Scr_Breakpoint *breakpoint, bool deleteElement)
{
  Scr_WatchElement_s *element; 
  Scr_Breakpoint **prev; 
  unsigned __int8 breakpointType; 
  Scr_Breakpoint *next; 

  element = breakpoint->element;
  prev = breakpoint->prev;
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 797, ASSERT_TYPE_ASSERT, "( element )", (const char *)&queryFormat, "element") )
    __debugbreak();
  breakpointType = element->breakpointType;
  breakpoint->element = NULL;
  if ( deleteElement )
  {
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 803, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
      __debugbreak();
    Scr_ScriptWatch::DeleteElementInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, element);
  }
  if ( breakpointType >= 4u && breakpointType <= 5u )
  {
    if ( !breakpoint->codePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 819, ASSERT_TYPE_ASSERT, "( breakpoint->codePos )", (const char *)&queryFormat, "breakpoint->codePos") )
      __debugbreak();
    Scr_RemoveManualBreakpoint(scrContext, (unsigned __int8 *)breakpoint->codePos);
  }
  if ( prev != breakpoint->prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 830, ASSERT_TYPE_ASSERT, "( pBreakpoint == breakpoint->prev )", (const char *)&queryFormat, "pBreakpoint == breakpoint->prev") )
    __debugbreak();
  next = breakpoint->next;
  if ( next )
  {
    next->prev = prev;
    next = breakpoint->next;
  }
  *prev = next;
  breakpoint->next = scrContext->m_debuggerGlob.m_breakpointsHead;
  scrContext->m_debuggerGlob.m_breakpointsHead = breakpoint;
}

/*
==============
Scr_FreeWatchElementChildren
==============
*/
void Scr_FreeWatchElementChildren(scrContext_t *scrContext, Scr_WatchElement_s *element)
{
  char v4; 

  Scr_FreeWatchElementText(element);
  v4 = *((_BYTE *)element + 135);
  if ( (v4 & 0x10) != 0 )
  {
    *((_BYTE *)element + 135) = v4 & 0xEF;
    RemoveRefToValue(scrContext, (unsigned __int8)element->value.type, element->value.u);
  }
  Scr_FreeWatchElementChildrenStrict(scrContext, element);
}

/*
==============
Scr_FreeWatchElementChildrenStrict
==============
*/
void Scr_FreeWatchElementChildrenStrict(scrContext_t *scrContext, Scr_WatchElement_s *element)
{
  Scr_WatchElement_s *childHead; 
  Scr_WatchElement_s *next; 
  char v6; 

  childHead = element->childHead;
  if ( childHead )
  {
    do
    {
      next = childHead->next;
      Scr_FreeWatchElementText(childHead);
      v6 = *((_BYTE *)childHead + 135);
      if ( (v6 & 0x10) != 0 )
      {
        *((_BYTE *)childHead + 135) = v6 & 0xEF;
        RemoveRefToValue(scrContext, (unsigned __int8)childHead->value.type, childHead->value.u);
      }
      Scr_FreeWatchElementChildrenStrict(scrContext, childHead);
      childHead = next;
    }
    while ( next );
    if ( !element->childArrayHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 5491, ASSERT_TYPE_ASSERT, "( element->childArrayHead )", (const char *)&queryFormat, "element->childArrayHead") )
      __debugbreak();
    ntl::nxheap::free(&s_debuggerHeap.m_heap, element->childArrayHead);
    element->childCount = 0;
    element->childArrayHead = NULL;
    element->childHead = NULL;
  }
}

/*
==============
Scr_FreeWatchElementText
==============
*/
void Scr_FreeWatchElementText(Scr_WatchElement_s *element)
{
  bool v2; 

  if ( !element->valueText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 5512, ASSERT_TYPE_ASSERT, "( element->valueText )", (const char *)&queryFormat, "element->valueText") )
    __debugbreak();
  SL_AllocString_Free(element->valueText);
  v2 = element->refText == NULL;
  element->valueText = NULL;
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 5521, ASSERT_TYPE_ASSERT, "( element->refText )", (const char *)&queryFormat, "element->refText") )
    __debugbreak();
  SL_AllocString_Free(element->refText);
  element->refText = NULL;
}

/*
==============
Scr_GetElementFromId
==============
*/
Scr_WatchElement_s *Scr_GetElementFromId(scrContext_t *scrContext, int id)
{
  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 766, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  if ( id )
    return Scr_ScriptWatch::GetElementWithId_r(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.elementHead, id);
  else
    return 0i64;
}

/*
==============
Scr_GetFuncTableIndex
==============
*/
__int64 Scr_GetFuncTableIndex(const scrContext_t *scrContext, int builtinIndex)
{
  unsigned int v2; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int m_methCount; 

  v2 = builtinIndex - scrContext->m_funcBegin;
  if ( v2 < scrContext->m_funcCount )
    return v2;
  v5 = builtinIndex - scrContext->m_methBegin;
  if ( v5 >= scrContext->m_methCount )
  {
    m_methCount = scrContext->m_methCount;
    v6 = builtinIndex - scrContext->m_methBegin;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 892, ASSERT_TYPE_ASSERT, "(unsigned)( builtinIndex ) < (unsigned)( scrContext.m_methCount )", "builtinIndex doesn't index scrContext.m_methCount\n\t%i not in [0, %i)", v6, m_methCount) )
      __debugbreak();
  }
  return scrContext->m_funcCount + v5;
}

/*
==============
Scr_HitAssignmentBreakpoint
==============
*/
int Scr_HitAssignmentBreakpoint(scrContext_t *scrContext, VariableValue *top, const char *pos, unsigned int localId, int forceBreak)
{
  __int64 v6; 
  VariableValue *v8; 
  int v9; 
  unsigned int intValue; 
  char v11; 
  int v12; 
  Scr_WatchElementDoubleNode_t *v13; 
  Scr_WatchElementNode_s *i; 
  Scr_WatchElement_s *element; 
  Scr_WatchElementDoubleNode_t *v16; 
  Scr_WatchElementNode_s *list; 
  Scr_WatchElement_s *v18; 
  unsigned __int8 breakpointType; 
  VariableValue value; 
  int v22; 

  v6 = localId;
  v8 = top;
  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11085, ASSERT_TYPE_ASSERT, "( pScrVarPub->developer )", (const char *)&queryFormat, "pScrVarPub->developer") )
    __debugbreak();
  v9 = (unsigned __int8)*Scr_FindBreakpointInfo(scrContext, pos - 1);
  v22 = v9;
  if ( scrContext->m_debuggerGlob.disableBreakpoints )
    return v9;
  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11095, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
    __debugbreak();
  if ( scrContext->m_debuggerGlob.atBreakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11097, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->atBreakpoint )", (const char *)&queryFormat, "!pScrDebuggerGlob->atBreakpoint") )
    __debugbreak();
  intValue = 0;
  v11 = 0;
  v12 = 0;
  scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.localId = 0;
  scrContext->m_vmPub.breakpointOutparamcount = 0;
LABEL_12:
  if ( !scrContext->m_debuggerGlob.variableBreakpoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11105, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->variableBreakpoints )", (const char *)&queryFormat, "pScrDebuggerGlob->variableBreakpoints") )
    __debugbreak();
  v13 = scrContext->m_debuggerGlob.variableBreakpoints[scrContext->m_debuggerGlob.objectId];
  if ( v13 )
  {
    if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11109, ASSERT_TYPE_ASSERT, "( !pScrVarPub->evaluate )", (const char *)&queryFormat, "!pScrVarPub->evaluate") )
      __debugbreak();
    scrContext->m_varPub.evaluate = 1;
    scrContext->m_vmPub.top = v8;
    for ( i = v13->list; ; i = i->next )
    {
      if ( !i )
      {
        if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11168, ASSERT_TYPE_ASSERT, "( pScrVarPub->evaluate )", (const char *)&queryFormat, "pScrVarPub->evaluate") )
          __debugbreak();
        v8 = top;
        scrContext->m_varPub.evaluate = 0;
        break;
      }
      element = i->element;
      if ( !i->element->breakpointType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11117, ASSERT_TYPE_ASSERT, "( element->breakpointType != SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_NONE )", (const char *)&queryFormat, "element->breakpointType != SCR_BREAKPOINT_NONE") )
        __debugbreak();
      if ( element->breakpointType == 1 && ((element->objectType - 17) & 0xF7) != 0 && !element->expr.breakonExpr )
      {
        if ( element->breakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11125, ASSERT_TYPE_ASSERT, "( !element->breakpoint )", (const char *)&queryFormat, "!element->breakpoint") )
          __debugbreak();
        if ( !element->expr.exprHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11127, ASSERT_TYPE_ASSERT, "( expr->exprHead )", (const char *)&queryFormat, "expr->exprHead") )
          __debugbreak();
        if ( Scr_EvalScriptExpression(scrContext, &element->expr, 0, &value, 1, 1) && !v11 )
        {
          Scr_ClearErrorMessage(scrContext);
          RemoveRefToValue(scrContext, (unsigned __int8)value.type, value.u);
$retry2_1:
          v11 = 1;
          Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 0);
          Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 1);
          if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11140, ASSERT_TYPE_ASSERT, "( pScrVarPub->evaluate )", (const char *)&queryFormat, "pScrVarPub->evaluate") )
            __debugbreak();
          v8 = top;
          scrContext->m_varPub.evaluate = 0;
          goto LABEL_12;
        }
        if ( scrContext->m_varPub.error_message )
        {
          Scr_ClearErrorMessage(scrContext);
          RemoveRefToValue(scrContext, (unsigned __int8)value.type, value.u);
          if ( (*((_BYTE *)element + 135) & 0x10) == 0 )
            continue;
          if ( !v11 )
            goto $retry2_1;
        }
        else if ( Scr_WatchElementHasSameValue(scrContext, element, &value) )
        {
          continue;
        }
        if ( Scr_ConditionalExpression(scrContext, element, v6) )
          v12 = 1;
      }
    }
  }
  v9 = v22;
  switch ( v22 )
  {
    case 0:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
      if ( v8->type == VAR_POINTER )
        intValue = v8->u.intValue;
      goto LABEL_81;
    case 1:
    case 36:
    case 40:
    case 46:
    case 49:
    case 69:
    case 82:
    case 91:
    case 107:
    case 113:
    case 142:
    case 143:
      scrContext->m_debuggerGlob.objectId = v6;
      break;
    case 4:
    case 24:
    case 54:
      scrContext->m_debuggerGlob.objectId = Scr_GetSelf(scrContext, v6);
      break;
    case 6:
      scrContext->m_debuggerGlob.objectId = scrContext->m_variableListParentSize + scrContext->m_varPub.gameId;
      break;
    case 8:
    case 56:
    case 124:
      scrContext->m_debuggerGlob.objectId = scrContext->m_varPub.levelId;
      break;
    case 37:
    case 87:
    case 90:
    case 109:
      break;
    case 47:
    case 59:
      scrContext->m_debuggerGlob.objectId = 0;
      if ( !scrContext->m_debuggerGlob.variableBreakpoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11179, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->variableBreakpoints )", (const char *)&queryFormat, "pScrDebuggerGlob->variableBreakpoints") )
        __debugbreak();
      v16 = scrContext->m_debuggerGlob.variableBreakpoints[v6];
      if ( v16 )
      {
        list = v16->list;
        if ( list )
        {
          do
          {
            v18 = list->element;
            if ( !list->element->breakpointType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11186, ASSERT_TYPE_ASSERT, "( element->breakpointType != SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_NONE )", (const char *)&queryFormat, "element->breakpointType != SCR_BREAKPOINT_NONE") )
              __debugbreak();
            breakpointType = v18->breakpointType;
            if ( ((breakpointType - 1) & 0xFD) == 0 && v18->objectId == (_DWORD)v6 )
            {
              Scr_WatchElementHitBreakpoint(scrContext, v18, breakpointType == 1);
              v18->deadCodePos = pos;
              if ( breakpointType == 1 )
                v12 = 1;
            }
            list = list->next;
          }
          while ( list );
          v9 = v22;
        }
      }
      break;
    case 71:
      if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11241, ASSERT_TYPE_ASSERT, "( !pScrVarPub->evaluate )", (const char *)&queryFormat, "!pScrVarPub->evaluate") )
        __debugbreak();
      scrContext->m_varPub.evaluate = 1;
      scrContext->m_debuggerGlob.objectId = Scr_EvalVariableObject(scrContext, scrContext->m_vmPub.localVars[-*(unsigned __int8 *)pos]);
      if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11244, ASSERT_TYPE_ASSERT, "( pScrVarPub->evaluate )", (const char *)&queryFormat, "pScrVarPub->evaluate") )
        __debugbreak();
      scrContext->m_varPub.evaluate = 0;
      break;
    case 76:
    case 97:
    case 141:
      scrContext->m_debuggerGlob.objectId = scrContext->m_varPub.animId;
      break;
    default:
LABEL_81:
      scrContext->m_debuggerGlob.objectId = intValue;
      break;
  }
  if ( v12 || forceBreak )
    return Scr_HitBreakpoint(scrContext, top, pos, v6, v12);
  else
    return v9;
}

/*
==============
Scr_HitBreakpoint
==============
*/
__int64 Scr_HitBreakpoint(scrContext_t *scrContext, VariableValue *top, const char *pos, unsigned int localId, int hitBreakpoint)
{
  const char *v9; 
  char v10; 
  char v11; 
  unsigned int v12; 
  unsigned int nextBreakpointThreadId; 
  int v14; 
  unsigned __int8 *killThreadCodePos; 
  Scr_WatchElement_s *elementHead; 
  Scr_Breakpoint *breakpoint; 
  unsigned __int8 *nextBreakpointCodePos; 
  bool v20; 
  Scr_SourcePos_t *p_breakpointPos; 
  unsigned int PrevSourcePos; 
  int v24; 
  bool kill_thread; 

  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10074, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  if ( !scrContext->m_vmPub.function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10078, ASSERT_TYPE_ASSERT, "( scrContext.m_vmPub.function_count )", (const char *)&queryFormat, "scrContext.m_vmPub.function_count") )
    __debugbreak();
  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10081, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
    __debugbreak();
  v9 = pos - 1;
  v10 = 0;
  v11 = 0;
  v12 = (unsigned __int8)*Scr_FindBreakpointInfo(scrContext, v9);
  v24 = v12;
  if ( scrContext->m_debuggerGlob.nextBreakpointCodePos == v9 )
  {
    nextBreakpointThreadId = scrContext->m_debuggerGlob.nextBreakpointThreadId;
    if ( !nextBreakpointThreadId || localId == nextBreakpointThreadId )
      v10 = 1;
    else
      v11 = 1;
  }
  v14 = 0;
  killThreadCodePos = (unsigned __int8 *)scrContext->m_debuggerGlob.killThreadCodePos;
  kill_thread = scrContext->m_debuggerGlob.kill_thread;
  if ( kill_thread )
  {
    scrContext->m_debuggerGlob.kill_thread = 0;
    v12 = 59;
    v24 = 59;
    if ( killThreadCodePos )
    {
      if ( killThreadCodePos == (unsigned __int8 *)v9 )
        v11 = 1;
      Scr_RemoveManualBreakpoint(scrContext, killThreadCodePos);
      scrContext->m_debuggerGlob.killThreadCodePos = NULL;
    }
  }
  else if ( killThreadCodePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10115, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->killThreadCodePos )", (const char *)&queryFormat, "!pScrDebuggerGlob->killThreadCodePos") )
  {
    __debugbreak();
  }
  if ( !scrContext->m_debuggerGlob.disableBreakpoints )
  {
    if ( scrContext->m_debuggerGlob.breakpointPos.bufferIndex != 65534 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10121, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->breakpointPos.bufferIndex == (0xFFFF - 1) )", (const char *)&queryFormat, "pScrDebuggerGlob->breakpointPos.bufferIndex == NO_BUFFER_BUFFERINDEX") )
      __debugbreak();
    if ( scrContext->m_debuggerGlob.atBreakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10122, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->atBreakpoint )", (const char *)&queryFormat, "!pScrDebuggerGlob->atBreakpoint") )
      __debugbreak();
    scrContext->m_vmPub.top = top;
    scrContext->m_vmPub.breakpointOutparamcount = 0;
    if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10127, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
      __debugbreak();
    scrContext->m_varPub.evaluate = 1;
    elementHead = scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.elementHead;
    if ( elementHead )
    {
      do
      {
        breakpoint = elementHead->breakpoint;
        if ( breakpoint )
        {
          if ( breakpoint->codePos == v9 )
          {
            v11 = 1;
            if ( Scr_ConditionalExpression(scrContext, elementHead, localId) )
              hitBreakpoint = 1;
          }
        }
        elementHead = elementHead->next;
      }
      while ( elementHead );
      v14 = 0;
      v12 = v24;
      if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10144, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "scrContext.m_varPub.evaluate") )
        __debugbreak();
    }
    scrContext->m_varPub.evaluate = 0;
    if ( hitBreakpoint || v10 || !v11 )
    {
      nextBreakpointCodePos = (unsigned __int8 *)scrContext->m_debuggerGlob.nextBreakpointCodePos;
      if ( nextBreakpointCodePos )
      {
        Scr_RemoveManualBreakpoint(scrContext, nextBreakpointCodePos);
        scrContext->m_debuggerGlob.nextBreakpointCodePos = NULL;
      }
      scrContext->m_debuggerGlob.breakpointTop = top;
      scrContext->m_debuggerGlob.breakpointCodePos = v9;
      scrContext->m_debuggerGlob.breakpointOpcode = v12;
      v20 = !kill_thread && !scrContext->m_debuggerGlob.isReturnPos;
      p_breakpointPos = &scrContext->m_debuggerGlob.breakpointPos;
      LOBYTE(v14) = !kill_thread;
      if ( Scr_GetSourcePosOfType(scrContext, v9, (Scr_SourceType_t)v20, v14, &scrContext->m_debuggerGlob.breakpointPos) )
      {
        if ( hitBreakpoint || !v10 || scrContext->m_debuggerGlob.step_mode == 4 || scrContext->m_debuggerGlob.stepLineNum == -1 || scrContext->m_debuggerGlob.stepBufferIndex != Scr_GetSourceBuffer(scrContext, v9) || (PrevSourcePos = Scr_GetPrevSourcePos(scrContext, v9, 0), scrContext->m_debuggerGlob.stepLineNum != Scr_GetLineNum(scrContext, scrContext->m_debuggerGlob.stepBufferIndex, PrevSourcePos)) )
        {
          scrContext->m_debuggerGlob.stepLineNum = -1;
          ScriptCodePos::SetScriptPos(&scrContext->m_vmPub.function_frame->fs.pos, pos);
          scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.localId = localId;
          Scr_HitBreakpointInternal(scrContext);
          return v12;
        }
      }
      else if ( !v10 )
      {
        scrContext->m_debuggerGlob.step_mode = 4;
        Scr_Step(scrContext);
        p_breakpointPos->bufferIndex = 65534;
        return v12;
      }
      Scr_Step(scrContext);
      p_breakpointPos->bufferIndex = 65534;
    }
  }
  return v12;
}

/*
==============
Scr_HitBreakpointInternal
==============
*/
void Scr_HitBreakpointInternal(scrContext_t *scrContext)
{
  __int64 bufferIndex; 
  char *buf; 
  _DebugMessage message; 
  _ScrHitBreakpoint v5; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10038, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  Scr_ScriptWatch::SortHitBreakpointsTop(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch);
  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    if ( !Sys_IsRemoteDebugServer(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9922, ASSERT_TYPE_ASSERT, "( Sys_IsRemoteDebugServer( scrContext ) )", (const char *)&queryFormat, "Sys_IsRemoteDebugServer( scrContext )") )
      __debugbreak();
    if ( scrContext->m_debuggerGlob.breakpointPos.bufferIndex == 65534 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9923, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.breakpointPos.bufferIndex != (0xFFFF - 1) )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.breakpointPos.bufferIndex != NO_BUFFER_BUFFERINDEX") )
      __debugbreak();
    if ( !scrContext->m_debuggerGlob.atBreakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9924, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.atBreakpoint )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.atBreakpoint") )
      __debugbreak();
    _DebugMessage::_DebugMessage(&message);
    _ScrHitBreakpoint::_ScrHitBreakpoint(&v5);
    bufferIndex = scrContext->m_debuggerGlob.breakpointPos.bufferIndex;
    message.scrreadfile = (const _ScrReadFile *)&v5;
    v5.linenum = scrContext->m_debuggerGlob.breakpointPos.lineNum;
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_HIT_BREAKPOINT;
    v5.has_bufferindex = 1;
    v5.bufferindex = bufferIndex;
    v5.has_linenum = 1;
    if ( (unsigned int)bufferIndex <= scrContext->m_parserPub.sourceBufferLookupLen )
      buf = scrContext->m_parserPub.sourceBufferLookup[bufferIndex].buf;
    else
      buf = (char *)&queryFormat.fmt + 3;
    v5.filename = buf;
    Sys_WriteDebugSocketMessage(scrContext, &message);
  }
  Scr_DisplayDebugger(scrContext);
  Scr_ResetTimeout(scrContext);
}

/*
==============
Scr_HitBuiltinBreakpoint
==============
*/
void Scr_HitBuiltinBreakpoint(scrContext_t *scrContext, VariableValue *top, const char *pos, unsigned int localId, int opcode, int builtinIndex, unsigned int outparamcount)
{
  const char *v8; 
  char v11; 
  char v12; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  Scr_WatchElement_s *elementHead; 
  Scr_Breakpoint *breakpoint; 

  v8 = pos;
  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10198, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  if ( !scrContext->m_vmPub.function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10202, ASSERT_TYPE_ASSERT, "( scrContext.m_vmPub.function_count )", (const char *)&queryFormat, "scrContext.m_vmPub.function_count") )
    __debugbreak();
  if ( !scrContext->m_debuggerGlob.disableBreakpoints )
  {
    if ( scrContext->m_debuggerGlob.breakpointPos.bufferIndex != 65534 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10207, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.breakpointPos.bufferIndex == (0xFFFF - 1) )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.breakpointPos.bufferIndex == NO_BUFFER_BUFFERINDEX") )
      __debugbreak();
    if ( scrContext->m_debuggerGlob.atBreakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10208, ASSERT_TYPE_ASSERT, "( !scrContext.m_debuggerGlob.atBreakpoint )", (const char *)&queryFormat, "!scrContext.m_debuggerGlob.atBreakpoint") )
      __debugbreak();
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10209, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
      __debugbreak();
    v11 = 0;
    v12 = 0;
    scrContext->m_vmPub.top = top;
    scrContext->m_vmPub.outparamcount = 0;
    scrContext->m_vmPub.breakpointOutparamcount = outparamcount;
    if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10218, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
      __debugbreak();
    m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
    scrContext->m_varPub.evaluate = 1;
    elementHead = m_pDynamic->scriptWatch.elementHead;
    if ( elementHead )
    {
      do
      {
        breakpoint = elementHead->breakpoint;
        if ( breakpoint )
        {
          if ( !breakpoint->codePos && breakpoint->builtinIndex == builtinIndex )
          {
            v12 = 1;
            if ( Scr_ConditionalExpression(scrContext, elementHead, localId) )
              v11 = 1;
          }
        }
        elementHead = elementHead->next;
      }
      while ( elementHead );
      v8 = pos;
      if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10237, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "scrContext.m_varPub.evaluate") )
        __debugbreak();
    }
    scrContext->m_varPub.evaluate = 0;
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10240, ASSERT_TYPE_ASSERT, "( existsBreakpoint )", (const char *)&queryFormat, "existsBreakpoint") )
      __debugbreak();
    if ( v11 )
      Scr_SpecialBreakpoint(scrContext, top, v8, localId, opcode, SOURCE_TYPE_BUILTIN_CALL);
  }
}

/*
==============
Scr_IgnoreErrors
==============
*/
_BOOL8 Scr_IgnoreErrors(const scrContext_t *scrContext)
{
  return scrContext->m_debuggerGlob.disableBreakpoints;
}

/*
==============
Scr_InitDebugger
==============
*/
void Scr_InitDebugger(scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  char *v4; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 

  if ( scrContext->m_varPub.developer && scrContext->m_compilePub.script_loading )
  {
    if ( scrContext->m_debuggerGlob.debugger_inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9113, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->debugger_inited )", (const char *)&queryFormat, "!pScrDebuggerGlob->debugger_inited") )
      __debugbreak();
    v4 = (char *)Mem_HunkDebug_Alloc(scrContext->m_compilePub.programLen, "scrContext.m_debuggerGlob.breakpoints");
    scrContext->m_debuggerGlob.breakpoints = v4;
    memset_0(v4, 154, scrContext->m_compilePub.programLen);
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9128, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
      __debugbreak();
    Scr_ScriptList::Init(&scrContext->m_debuggerGlob.m_pDynamic->scriptList, scrContext, threadMode);
    m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
    m_pDynamic->openScriptList.m_pScrContext = scrContext;
    m_pDynamic->openScriptList.numLines = 0;
    m_pDynamic->openScriptList.scriptWindows = NULL;
    scrContext->m_debuggerGlob.debugger_inited = 1;
  }
}

/*
==============
Scr_InitDebuggerMain
==============
*/
void Scr_InitDebuggerMain(scrContext_t *scrContext)
{
  __int64 v3; 
  unsigned __int64 v4; 
  Scr_WatchElementDoubleNode_t **v5; 
  bool v6; 
  void *v7; 
  unsigned int v11; 
  __int64 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 

  if ( scrContext->m_varPub.developer )
  {
    if ( scrContext->m_debuggerGlob.debugger_inited_main && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8990, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->debugger_inited_main )", (const char *)&queryFormat, "!pScrDebuggerGlob->debugger_inited_main") )
      __debugbreak();
    v3 = 2i64;
    v4 = 8i64 * (scrContext->m_variableListParentSize + scrContext->m_variableListChildSize);
    v5 = (Scr_WatchElementDoubleNode_t **)Mem_HunkDebug_AllocAligned(v4, 8ui64, "scrContext.m_debuggerGlob.variableBreakpoints");
    scrContext->m_debuggerGlob.variableBreakpoints = v5;
    memset_0(v5, 0, v4);
    v6 = s_debuggerHeapMem == NULL;
    scrContext->m_debuggerGlob.assignHead = NULL;
    scrContext->m_debuggerGlob.assignHeadCodePos = NULL;
    scrContext->m_debuggerGlob.disableBreakpoints = 0;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9019, ASSERT_TYPE_ASSERT, "(!s_debuggerHeapMem)", (const char *)&queryFormat, "!s_debuggerHeapMem") )
      __debugbreak();
    s_debuggerHeapMem = Mem_HunkDebug_AllocAligned(0xA0000ui64, 0x10ui64, "s_debuggerHeapMem");
    v7 = s_debuggerHeapMem;
    if ( !s_debuggerHeapMem )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9022, ASSERT_TYPE_ASSERT, "(s_debuggerHeapMem)", (const char *)&queryFormat, "s_debuggerHeapMem") )
        __debugbreak();
      v7 = s_debuggerHeapMem;
    }
    s_debuggerHeapMemInstance = scrContext->m_Instance;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu [rsp+58h+var_28], xmm0
    }
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start", v13) )
      __debugbreak();
    *(_QWORD *)&v14 = v7;
    *((_QWORD *)&v14 + 1) = 655360i64;
    ntl::nxheap::shutdown(&s_debuggerHeap.m_heap);
    ntl::nxheap_region::shutdown(&s_debuggerHeap.m_region);
    if ( s_debuggerHeap.m_data.m_buffer )
    {
      if ( s_debuggerHeap.m_data.m_buffer != s_debuggerHeap.m_allocator.m_data.m_buffer && s_debuggerHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
        __debugbreak();
      s_debuggerHeap.m_data.m_buffer = NULL;
      s_debuggerHeap.m_data.m_size = 0i64;
    }
    __asm
    {
      vmovups xmm0, [rsp+58h+var_28]
      vmovups xmmword ptr cs:s_debuggerHeap.m_allocator.m_data.m_buffer, xmm0
    }
    ntl::nxheap::shutdown(&s_debuggerHeap.m_heap);
    ntl::nxheap_region::shutdown(&s_debuggerHeap.m_region);
    if ( s_debuggerHeap.m_data.m_buffer )
    {
      if ( s_debuggerHeap.m_data.m_buffer != s_debuggerHeap.m_allocator.m_data.m_buffer && s_debuggerHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
        __debugbreak();
      s_debuggerHeap.m_data.m_buffer = NULL;
      s_debuggerHeap.m_data.m_size = 0i64;
    }
    if ( s_debuggerHeap.m_allocator.m_data.m_size < 0xA0000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
      __debugbreak();
    *(_QWORD *)&v15 = s_debuggerHeap.m_allocator.m_data.m_buffer;
    *((_QWORD *)&v15 + 1) = 655360i64;
    __asm
    {
      vmovups xmm0, [rsp+58h+var_28]
      vmovups xmmword ptr cs:s_debuggerHeap.baseclass_0.m_data.m_buffer, xmm0
    }
    if ( s_debuggerHeap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
      __debugbreak();
    ntl::nxheap_region::init(&s_debuggerHeap.m_region, s_debuggerHeap.m_data.m_buffer, s_debuggerHeap.m_data.m_size);
    if ( s_debuggerHeap.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
      __debugbreak();
    ntl::nxheap::init(&s_debuggerHeap.m_heap, &s_debuggerHeap.m_region, DIR_BOTTOM_UP);
    memset_0(scrContext->m_debuggerGlob.m_debugCallStack, 0, 4i64 * scrContext->m_variableListParentSize);
    v11 = 2;
    v12 = scrContext->m_variableListParentSize - 1;
    if ( (unsigned int)v12 > 2 )
    {
      do
        scrContext->m_debuggerGlob.m_debugCallStackEntry2[v3++].next = ++v11;
      while ( v11 < (unsigned int)v12 );
    }
    scrContext->m_debuggerGlob.m_debugCallStackEntry2[v12].next = 0;
    *(_QWORD *)&scrContext->m_debuggerGlob.m_freeDebugCallStack = 2i64;
    scrContext->m_debuggerGlob.debugger_inited_main = 1;
  }
}

/*
==============
Scr_InitDebuggerSystem
==============
*/
void Scr_InitDebuggerSystem(scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  Scr_Breakpoint **p_next; 
  __int64 v4; 
  Scr_Breakpoint *v5; 
  MemOwnershipType v6; 
  MemOwnershipType v7; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  int v9; 

  if ( scrContext->m_varPub.developer )
  {
    if ( scrContext->m_debuggerGlob.debugger_inited_system && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9189, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->debugger_inited_system )", (const char *)&queryFormat, "!pScrDebuggerGlob->debugger_inited_system") )
      __debugbreak();
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9190, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
      __debugbreak();
    p_next = &scrContext->m_debuggerGlob.m_breakpoints[0].next;
    v4 = 127i64;
    v5 = &scrContext->m_debuggerGlob.m_breakpoints[1];
    do
    {
      *p_next = v5;
      p_next += 6;
      ++v5;
      --v4;
    }
    while ( v4 );
    if ( scrContext->m_debuggerGlob.m_breakpoints[127].next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 330, ASSERT_TYPE_ASSERT, "( !scrContext.m_debuggerGlob.m_breakpoints[128 - 1].next )", (const char *)&queryFormat, "!scrContext.m_debuggerGlob.m_breakpoints[MAX_BREAKPOINTS - 1].next") )
      __debugbreak();
    scrContext->m_debuggerGlob.m_breakpointsHead = scrContext->m_debuggerGlob.m_breakpoints;
    scrContext->m_debuggerGlob.nextBreakpointCodePos = NULL;
    scrContext->m_debuggerGlob.killThreadCodePos = NULL;
    scrContext->m_debuggerGlob.breakpointCount = 0;
    if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9205, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
      __debugbreak();
    scrContext->m_varPub.evaluate = 1;
    scrContext->m_debuggerGlob.assignBreakpointSet = 0;
    scrContext->m_debuggerGlob.breakpointPos.bufferIndex = 65534;
    scrContext->m_debuggerGlob.atBreakpoint = 0;
    scrContext->m_debuggerGlob.run_debugger = 0;
    Mem_Ownership_AllocAcquire(MOVEMENT);
    LOBYTE(v6) = 1;
    Mem_Ownership_AllocAcquire(v6);
    m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
    m_pDynamic->scriptWatch.m_pScrContext = scrContext;
    m_pDynamic->scriptWatch.elementHead = NULL;
    *(_QWORD *)&m_pDynamic->scriptWatch.elementId = 0i64;
    if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9233, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "scrContext.m_varPub.evaluate") )
      __debugbreak();
    LOBYTE(v7) = 1;
    scrContext->m_varPub.evaluate = 0;
    Mem_Ownership_AllocRelease(v7);
    Mem_Ownership_AllocRelease(MOVEMENT);
    scrContext->m_debuggerGlob.debugger_inited_system = 1;
    if ( Sys_IsRemoteDebugServer(scrContext) && (v9 = Scr_SendSourceNames(scrContext), Sys_IsRemoteDebugServer(scrContext)) )
    {
      if ( v9 )
        Scr_RunDebugger(scrContext);
    }
    else
    {
      Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 1);
    }
  }
}

/*
==============
Scr_IsVariableBreakpoint
==============
*/
bool Scr_IsVariableBreakpoint(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v3; 

  v3 = id;
  if ( !scrContext->m_debuggerGlob.variableBreakpoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8036, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.variableBreakpoints )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.variableBreakpoints") )
    __debugbreak();
  return scrContext->m_debuggerGlob.variableBreakpoints[v3] != NULL;
}

/*
==============
Scr_MonitorCommand
==============
*/
void Scr_MonitorCommand(scrContext_t *scrContext, const char *text)
{
  const char *v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  char v11; 

  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1455, ASSERT_TYPE_ASSERT, "( text )", (const char *)&queryFormat, "text") )
    __debugbreak();
  v4 = "map_restart";
  v5 = 11i64;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v6 = (unsigned __int8)v4[text - "map_restart"];
    v7 = v5;
    v8 = *(unsigned __int8 *)v4++;
    --v5;
    if ( !v7 )
      break;
    if ( v6 != v8 )
    {
      v9 = v6 + 32;
      if ( (unsigned int)(v6 - 65) > 0x19 )
        v9 = v6;
      v6 = v9;
      v10 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v10 = v8;
      if ( v6 != v10 )
        return;
    }
  }
  while ( v6 );
  v11 = text[11];
  if ( v11 <= 32 || v11 == 59 )
    scrContext->m_debuggerGlob.abort = 1;
}

/*
==============
Scr_NoWaitServer
==============
*/
_BOOL8 Scr_NoWaitServer(const scrContext_t *scrContext)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10883, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  return scrContext->m_debuggerGlob.ignoreSmpDisplay;
}

/*
==============
Scr_PostSetText
==============
*/
void Scr_PostSetText(scrContext_t *scrContext, Scr_WatchElement_s *element)
{
  char v2; 
  char *buf; 
  int LineInfo; 
  VariableType ObjectType; 
  bool v8; 
  unsigned int objectId; 
  const char *v10; 
  const char *v11; 
  int v12; 
  int v13; 
  char *v14; 
  const char *v15; 
  const char *v16; 
  int v17; 
  int v18; 
  const char *refText; 
  const char *v20; 
  int v21; 
  int v22; 
  char v23; 
  VariableType v24; 
  _WatchType v25; 
  char *deadCodePos; 
  char *v27; 
  unsigned int SourceBuffer; 
  unsigned int PrevSourcePos; 
  unsigned int ClosestSourcePosOfType; 
  __int64 bufferIndex; 
  int id; 
  int sourcePos; 
  __int64 v34; 
  int col[4]; 
  _DebugMessage message; 
  _ScrSetElementObjectType v37; 
  _DebugMessage v38; 
  _ScrSetElementThreadStart v39; 
  char text[272]; 
  char line[1024]; 

  v2 = *((_BYTE *)element + 135);
  buf = (char *)&queryFormat.fmt + 3;
  LineInfo = 0;
  if ( (v2 & 0x20) != 0 )
  {
    ObjectType = VAR_THREAD_LIST;
    v8 = 0;
    goto LABEL_32;
  }
  if ( (v2 & 0x40) != 0 )
  {
    ObjectType = VAR_ENDON_LIST;
    v8 = 0;
    goto LABEL_32;
  }
  objectId = element->objectId;
  if ( objectId )
    ObjectType = GetObjectType(scrContext, objectId);
  else
    ObjectType = VAR_UNDEFINED;
  if ( (unsigned __int8)(ObjectType - 17) <= 3u )
  {
    ObjectType = VAR_UNDEFINED;
    if ( !Scr_IsEndonThread(scrContext, element->objectId) )
      ObjectType = VAR_THREAD;
  }
  v8 = 0;
  if ( ObjectType == VAR_THREAD )
  {
    refText = element->refText;
    v20 = (const char *)(element->valueText - refText);
    do
    {
      v21 = (unsigned __int8)v20[(_QWORD)refText];
      v22 = *(unsigned __int8 *)refText - v21;
      if ( v22 )
        break;
      ++refText;
    }
    while ( v21 );
    v8 = v22 == 0;
    if ( v22 )
      goto LABEL_32;
    v14 = (char *)&queryFormat.fmt + 3;
LABEL_31:
    SL_AllocString_Replace(&element->valueText, v14);
    goto LABEL_32;
  }
  if ( (unsigned __int8)ObjectType <= VAR_CHILD_THREAD )
    goto LABEL_32;
  if ( (unsigned __int8)ObjectType <= VAR_DEAD_ENTITY )
  {
    v15 = element->refText;
    v16 = (const char *)(element->valueText - v15);
    do
    {
      v17 = (unsigned __int8)v16[(_QWORD)v15];
      v18 = *(unsigned __int8 *)v15 - v17;
      if ( v18 )
        break;
      ++v15;
    }
    while ( v17 );
    v8 = v18 == 0;
    goto LABEL_32;
  }
  if ( ObjectType == VAR_ENTITY )
  {
    v10 = element->refText;
    v11 = (const char *)(element->valueText - v10);
    do
    {
      v12 = (unsigned __int8)v11[(_QWORD)v10];
      v13 = *(unsigned __int8 *)v10 - v12;
      if ( v13 )
        break;
      ++v10;
    }
    while ( v12 );
    v8 = v13 == 0;
    if ( v13 )
      goto LABEL_32;
    Scr_GetFieldValue(scrContext, element->objectId, "classname", 257, text);
    v14 = text;
    goto LABEL_31;
  }
  if ( ObjectType == VAR_ARRAY )
    v8 = 1;
LABEL_32:
  if ( element->objectType != ObjectType || (*((_BYTE *)element + 135) & 1) != v8 )
  {
    *((_BYTE *)element + 135) &= ~1u;
    *((_BYTE *)element + 135) |= v8;
    element->objectType = ObjectType;
    if ( Sys_IsRemoteDebugServer(scrContext) )
    {
      v23 = *((_BYTE *)element + 135);
      v24 = element->objectType;
      if ( (v23 & 0x20) != 0 )
      {
        v25 = WATCH_TYPE__THREAD_LIST;
      }
      else if ( (v23 & 0x40) != 0 )
      {
        v25 = WATCH_TYPE__ENDON_LIST;
      }
      else
      {
        v25 = ((v24 - 17) & 0xF7) == 0;
      }
      _DebugMessage::_DebugMessage(&message);
      _ScrSetElementObjectType::_ScrSetElementObjectType(&v37);
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_ELEMENT_OBJECT_TYPE;
      message.scrreadfile = (const _ScrReadFile *)&v37;
      v37.element = element->id;
      v37.type = (unsigned __int8)ObjectType;
      v37.directobject = v8;
      v37.has_element = 1;
      v37.expandable = v24 != VAR_UNDEFINED;
      v37.has_type = 1;
      v37.has_directobject = 1;
      v37.has_watchtype = 1;
      v37.watchtype = v25;
      v37.has_expandable = 1;
      Sys_WriteDebugSocketMessage(scrContext, &message);
      buf = (char *)&queryFormat.fmt + 3;
    }
    if ( ((ObjectType - 17) & 0xF7) == 0 && ((element->oldObjectType - 17) & 0xF7) != 0 )
    {
      if ( element->objectType != VAR_THREAD || (deadCodePos = (char *)Scr_GetThreadPos(scrContext, element->objectId)) == NULL )
        deadCodePos = (char *)element->deadCodePos;
      v27 = NULL;
      if ( deadCodePos != &g_EndPos )
        v27 = deadCodePos;
      if ( v27 )
      {
        SourceBuffer = Scr_GetSourceBuffer(scrContext, v27 - 1);
        PrevSourcePos = Scr_GetPrevSourcePos(scrContext, v27 - 1, 0);
        element->bufferIndex = SourceBuffer;
        ClosestSourcePosOfType = Scr_GetClosestSourcePosOfType(scrContext, SourceBuffer, PrevSourcePos, SOURCE_TYPE_THREAD_START);
      }
      else
      {
        element->bufferIndex = -2;
        ClosestSourcePosOfType = 0;
      }
      element->sourcePos = ClosestSourcePosOfType;
      if ( Sys_IsRemoteDebugServer(scrContext) )
      {
        memset_0(line, 0, sizeof(line));
        bufferIndex = element->bufferIndex;
        col[0] = 0;
        if ( (unsigned int)bufferIndex < scrContext->m_parserPub.sourceBufferLookupLen )
          LineInfo = Scr_GetLineInfo(scrContext->m_parserPub.sourceBufferLookup[bufferIndex].sourceBuf, element->sourcePos, col, line);
        _DebugMessage::_DebugMessage(&v38);
        _ScrSetElementThreadStart::_ScrSetElementThreadStart(&v39);
        id = element->id;
        v38.scrreadfile = (const _ScrReadFile *)&v39;
        sourcePos = element->sourcePos;
        v39.element = id;
        v34 = element->bufferIndex;
        v39.sourcepos = sourcePos;
        v39.line = line;
        v38.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_ELEMENT_THREAD_START;
        v39.has_element = 1;
        v39.has_bufferindex = 1;
        v39.bufferindex = v34;
        v39.has_sourcepos = 1;
        if ( (unsigned int)v34 <= scrContext->m_parserPub.sourceBufferLookupLen )
          buf = scrContext->m_parserPub.sourceBufferLookup[v34].buf;
        v39.filename = buf;
        v39.has_linenum = 1;
        v39.linenum = LineInfo;
        Sys_WriteDebugSocketMessage(scrContext, &v38);
      }
    }
  }
}

/*
==============
Scr_ProcessDebugMessages
==============
*/
void Scr_ProcessDebugMessages(scrContext_t *scrContext)
{
  _DebugMessage *updated; 
  _DebugMessage *v3; 
  DebugMessage__DebugMessageCase debug_message_case; 
  const _ScrReadFile *scrreadfile; 
  Scr_WatchElement_s *ElementFromId; 
  const _ScrReadFile *v7; 
  Scr_WatchElement_s *v8; 
  const char *v9; 
  bool v10; 
  _ScriptBreakpointType data_high; 
  int v12; 
  int id; 
  Scr_WatchElement_s *v14; 
  const _ScrReadFile *v15; 
  Scr_WatchElement_s *v16; 
  int v17; 
  const _ScrReadFile *v18; 
  Scr_WatchElement_s *v19; 
  const _ScrReadFile *v20; 
  Scr_WatchElement_s *v21; 
  Scr_WatchElement_s *v22; 
  Scr_WatchElement_s *v23; 
  const _ScrReadFile *v24; 
  const char *filename; 
  int v26; 
  Scr_WatchElement_s *v27; 
  bool v28; 
  bool v29; 
  bool v30; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  Scr_ScriptWindow **scriptWindows; 
  Scr_ScriptWindow **v33; 
  Scr_ScriptWindow *v34; 
  const _ScrReadFile *v35; 
  const _ScrReadFile *v36; 
  scrDebuggerGlobDynamic_t *v37; 
  Scr_ScriptWindow **v38; 
  Scr_ScriptWindow **v39; 
  Scr_ScriptWindow *v40; 
  const scrContext_t *m_pScrContext; 
  scrContext_t *v42; 
  const char *BreakpointCodePos; 
  const _ScrReadFile *v44; 
  Scr_WatchElement_s *v45; 
  const _ScrReadFile *v46; 
  scrDebuggerGlobDynamic_t *v47; 
  Scr_ScriptWindow **v48; 
  Scr_ScriptWindow **v49; 
  Scr_ScriptWindow *v50; 
  _DebugMessage message; 
  _ScrPasteElementReply v52; 
  _ScriptBreakpointType breakpointType; 

  if ( !Sys_IsRemoteDebugServer(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10508, ASSERT_TYPE_ASSERT, "( Sys_IsRemoteDebugServer( scrContext ) )", (const char *)&queryFormat, "Sys_IsRemoteDebugServer( scrContext )") )
    __debugbreak();
  while ( 1 )
  {
    updated = Sys_UpdateDebugSocket(scrContext);
    v3 = updated;
    if ( updated )
    {
      debug_message_case = updated->debug_message_case;
      if ( debug_message_case == DEBUG_MESSAGE__DEBUG_MESSAGE__NOT_SET )
      {
        Com_Printf(0, "_______ debug message %d\n", 0i64);
        debug_message_case = v3->debug_message_case;
      }
    }
    else
    {
      debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE__NOT_SET;
    }
    switch ( debug_message_case )
    {
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_ADD_TEXT:
        scrreadfile = v3->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7348, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        ElementFromId = Scr_GetElementFromId(scrContext, HIDWORD(scrreadfile->filename));
        if ( !ElementFromId )
          goto LABEL_69;
        Scr_ScriptWatch::AddElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId, *(const char **)&scrreadfile->has_sourcebuf);
        Sys_AckDebugSocket(scrContext);
        break;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_PASTE_ELEMENT:
        v7 = v3->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4732, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v8 = Scr_GetElementFromId(scrContext, HIDWORD(v7->filename));
        v9 = *(const char **)&v7->has_sourcebuf;
        v10 = HIDWORD(v7->sourcebuf.len) != 0;
        data_high = SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_NONE;
        v12 = scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.elementId + 1;
        if ( Sys_IsRemoteDebugServer(scrContext) )
        {
          data_high = HIDWORD(v7->sourcebuf.data);
          _DebugMessage::_DebugMessage(&message);
          _ScrPasteElementReply::_ScrPasteElementReply(&v52);
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_PASTE_ELEMENT_REPLY;
          message.scrreadfile = (const _ScrReadFile *)&v52;
          if ( v8 )
            id = v8->id;
          else
            id = 0;
          v52.element = id;
          v52.user = v10;
          v52.requestid = HIDWORD(v7[1].base.descriptor);
          v52.has_element = 1;
          v52.text = v9;
          v52.has_user = 1;
          v52.has_requestid = 1;
          v52.has_newelement = 1;
          v52.newelement = v12;
          Sys_WriteDebugSocketMessage(scrContext, &message);
        }
        v14 = Scr_ScriptWatch::PasteNonBreakpointElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v8, v9, v10);
        if ( v12 != v14->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4757, ASSERT_TYPE_ASSERT, "(newElementId == newElement->id)", (const char *)&queryFormat, "newElementId == newElement->id") )
          __debugbreak();
        if ( Sys_IsRemoteDebugServer(scrContext) && data_high )
          Scr_ScriptWatch::ToggleBreakpointInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v14, data_high);
        goto LABEL_69;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_INSERT_ELEMENT:
        v15 = v3->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4808, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v16 = Scr_GetElementFromId(scrContext, HIDWORD(v15->filename));
        if ( Sys_IsRemoteDebugServer(scrContext) )
        {
          _DebugMessage::_DebugMessage(&message);
          _ScrInsertElementReply::_ScrInsertElementReply((_ScrInsertElementReply *)&v52);
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_INSERT_ELEMENT_REPLY;
          message.scrreadfile = (const _ScrReadFile *)&v52;
          if ( v16 )
            v17 = v16->id;
          else
            v17 = 0;
          v52.has_element = 1;
          v52.element = v17;
          Sys_WriteDebugSocketMessage(scrContext, &message);
        }
        Scr_ScriptWatch::PasteNonBreakpointElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v16, (const char *)&queryFormat.fmt + 3, 1);
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_DELETE_ELEMENT:
        v18 = v3->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4939, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v19 = Scr_GetElementFromId(scrContext, HIDWORD(v18->filename));
        if ( !v19 )
          goto LABEL_69;
        if ( Sys_IsRemoteDebugServer(scrContext) )
        {
          _DebugMessage::_DebugMessage(&message);
          _ScrDeleteElementReply::_ScrDeleteElementReply((_ScrDeleteElementReply *)&v52);
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_DELETE_ELEMENT_REPLY;
          message.scrreadfile = (const _ScrReadFile *)&v52;
          v52.element = v19->id;
          v52.has_element = 1;
          Sys_WriteDebugSocketMessage(scrContext, &message);
        }
        Scr_ScriptWatch::DeleteElementInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v19);
        Sys_AckDebugSocket(scrContext);
        break;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_BACKSPACE_ELEMENT:
        v20 = v3->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 5043, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v21 = Scr_GetElementFromId(scrContext, HIDWORD(v20->filename));
        if ( !v21 )
          goto LABEL_69;
        if ( Sys_IsRemoteDebugServer(scrContext) )
        {
          _DebugMessage::_DebugMessage(&message);
          _ScrBackspaceElementReply::_ScrBackspaceElementReply((_ScrBackspaceElementReply *)&v52);
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_BACKSPACE_ELEMENT_REPLY;
          message.scrreadfile = (const _ScrReadFile *)&v52;
          v52.element = v21->id;
          v52.has_element = 1;
          Sys_WriteDebugSocketMessage(scrContext, &message);
        }
        Scr_ScriptWatch::BackspaceElementInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v21);
        Sys_AckDebugSocket(scrContext);
        break;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_CLONE_ELEMENT:
        v22 = Scr_GetElementFromId(scrContext, HIDWORD(v3->scrreadfile->filename));
        if ( !v22 )
          goto LABEL_69;
        if ( Sys_IsRemoteDebugServer(scrContext) )
        {
          _DebugMessage::_DebugMessage(&message);
          _ScrCloneElementReply::_ScrCloneElementReply((_ScrCloneElementReply *)&v52);
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_CLONE_ELEMENT_REPLY;
          message.scrreadfile = (const _ScrReadFile *)&v52;
          v52.element = v22->id;
          v52.has_element = 1;
          Sys_WriteDebugSocketMessage(scrContext, &message);
        }
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7602, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
          __debugbreak();
        v23 = Scr_ScriptWatch::CloneElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v22);
        if ( !Sys_IsRemoteDebugServer(scrContext) )
          goto LABEL_69;
        Scr_ScriptWatch::EvaluateWatchElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v23);
        Sys_AckDebugSocket(scrContext);
        break;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_EXPAND_ELEMENT:
        Scr_ExpandElementRemote(scrContext, v3->screxpandelement);
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_TOGGLE_BREAKPOINT:
        v24 = v3->scrreadfile;
        filename = v24->filename;
        v26 = *(&v24->has_sourcebuf + 1);
        v27 = Scr_GetElementFromId(scrContext, HIDWORD(v24->sourcebuf.len));
        v28 = HIDWORD(v24->sourcebuf.data) != 0;
        breakpointType = *(&v24[1].base.n_unknown_fields + 1);
        v29 = HIDWORD(v24[1].base.descriptor) != 0;
        v30 = HIDWORD(v24[1].base.unknown_fields) != 0;
        if ( filename && *filename )
        {
          if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1371, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
            __debugbreak();
          m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
          scriptWindows = m_pDynamic->scriptList.scriptWindows;
          if ( scriptWindows )
          {
            v33 = (Scr_ScriptWindow **)bsearch(filename, scriptWindows, m_pDynamic->scriptList.numLines, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareScriptWindow);
            if ( v33 )
            {
              v34 = *v33;
              if ( *v33 )
              {
                v34->selectedLine = v26;
                Scr_ScriptWindow::ToggleBreakpointInternal(v34, v27, v28, v29, breakpointType, v30, NULL);
              }
            }
          }
        }
        goto LABEL_69;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_STEP:
        v35 = v3->scrreadfile;
        scrContext->m_debuggerGlob.step_mode = HIDWORD(v35->filename);
        scrContext->m_debuggerGlob.skip_instr = *(&v35->has_sourcebuf + 1);
        Scr_Step(scrContext);
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_RUN_TO_CURSOR:
        v36 = v3->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1668, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v37 = scrContext->m_debuggerGlob.m_pDynamic;
        v38 = v37->scriptList.scriptWindows;
        if ( !v38 )
          goto LABEL_69;
        v39 = (Scr_ScriptWindow **)bsearch(v36->filename, v38, v37->scriptList.numLines, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareScriptWindow);
        if ( !v39 )
          goto LABEL_69;
        v40 = *v39;
        m_pScrContext = (*v39)->m_pScrContext;
        (*v39)->selectedLine = *(&v36->has_sourcebuf + 1);
        if ( Sys_IsRemoteDebugServer(m_pScrContext) )
        {
          if ( !v40->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1630, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
            __debugbreak();
          v42 = v40->m_pScrContext;
          if ( v42->m_debuggerGlob.atBreakpoint )
            Scr_ResumeBreakpoints(v42);
        }
        if ( !v40->m_pScrContext->m_vmPub.function_count )
          goto LABEL_69;
        BreakpointCodePos = Scr_ScriptWindow::GetBreakpointCodePos(v40);
        Scr_SetTempBreakpoint(v40->m_pScrContext, BreakpointCodePos, 0, 0);
        Sys_AckDebugSocket(scrContext);
        break;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_TOGGLE_WATCH_BREAKPOINT:
        v44 = v3->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8524, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v45 = Scr_GetElementFromId(scrContext, HIDWORD(v44->filename));
        if ( !v45 )
          goto LABEL_69;
        Scr_ScriptWatch::ToggleBreakpointInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v45, *((_ScriptBreakpointType *)&v44->has_sourcebuf + 1));
        Sys_AckDebugSocket(scrContext);
        break;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_KEEP_ALIVE:
        Scr_SendKeepAliveIfNeeded(scrContext);
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_DISPLAY_THREAD_POS:
        Scr_DisplayThreadPosRemote(scrContext, v3->scrdisplaythreadpos);
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_ENTER_CALL:
        v46 = v3->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1840, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v47 = scrContext->m_debuggerGlob.m_pDynamic;
        v48 = v47->scriptList.scriptWindows;
        if ( v48 && (v49 = (Scr_ScriptWindow **)bsearch(v46->filename, v48, v47->scriptList.numLines, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareScriptWindow)) != NULL )
        {
          v50 = *v49;
          v50->selectedLine = *(&v46->has_sourcebuf + 1);
          Scr_ScriptWindow::EnterCallInternal(v50);
          Sys_AckDebugSocket(scrContext);
        }
        else
        {
LABEL_69:
          Sys_AckDebugSocket(scrContext);
        }
        break;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_CLOSE:
        Sys_DebugSocketError(scrContext, "debug client disconnected\n");
        Sys_AckDebugSocket(scrContext);
        break;
      default:
        Scr_UpdateDebugSocket(scrContext);
        NET_Sleep(1);
        return;
    }
  }
}

/*
==============
Scr_RefAllocateBreakpoints
==============
*/
Scr_WatchElementDoubleNode_t *Scr_RefAllocateBreakpoints()
{
  _QWORD *v0; 

  v0 = ntl::nxheap::allocate(&s_debuggerHeap.m_heap, 0x10ui64, 0x10ui64, 1);
  if ( !v0 )
    Sys_Error((const ObfuscateErrorText)&stru_144098198);
  *v0 = 0i64;
  v0[1] = 0i64;
  return (Scr_WatchElementDoubleNode_t *)v0;
}

/*
==============
Scr_RefAllocateElements
==============
*/
bool Scr_RefAllocateElements(const scrContext_t *scrContext, Scr_WatchElementDoubleNode_t *breakpoints, Scr_WatchElementNode_s **elementNode)
{
  Scr_WatchElementNode_s *list; 
  Scr_WatchElementDoubleNode_t *i; 
  Scr_WatchElementNode_s *v8; 
  Scr_WatchElement_s **p_element; 
  bool v11; 

  list = breakpoints->list;
  for ( i = breakpoints; list; list = list->next )
  {
    if ( list->element == scrContext->m_debuggerGlob.currentElement )
      break;
    i = (Scr_WatchElementDoubleNode_t *)&list->next;
  }
  if ( scrContext->m_debuggerGlob.add )
  {
    if ( !i->list )
    {
      v8 = (Scr_WatchElementNode_s *)ntl::nxheap::allocate(&s_debuggerHeap.m_heap, 0x10ui64, 0x10ui64, 1);
      if ( !v8 )
        Sys_Error((const ObfuscateErrorText)&stru_144098198);
      *elementNode = v8;
      v8->element = scrContext->m_debuggerGlob.currentElement;
      (*elementNode)->next = breakpoints->list;
      breakpoints->list = *elementNode;
    }
    return 0;
  }
  p_element = &i->list->element;
  *elementNode = i->list;
  if ( !p_element )
    return 0;
  if ( *p_element != scrContext->m_debuggerGlob.currentElement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8125, ASSERT_TYPE_ASSERT, "( elementNode->element == scrContext.m_debuggerGlob.currentElement )", (const char *)&queryFormat, "elementNode->element == scrContext.m_debuggerGlob.currentElement") )
    __debugbreak();
  i->list = (*elementNode)->next;
  (*elementNode)->next = breakpoints->removedList;
  v11 = breakpoints->list == NULL;
  breakpoints->removedList = *elementNode;
  return v11;
}

/*
==============
Scr_RefToChildVariable
==============
*/
bool Scr_RefToChildVariable(const scrContext_t *scrContext, const unsigned int childId)
{
  unsigned int removeId; 
  __int64 v4; 
  __int64 v6; 
  Scr_WatchElementDoubleNode_t *Breakpoints; 
  Scr_WatchElementNode_s *removedList; 
  Scr_WatchElementNode_s *next; 
  Scr_WatchElementNode_s *elementNode; 

  if ( childId )
  {
    removeId = scrContext->m_debuggerGlob.removeId;
    v4 = childId + scrContext->m_variableListParentSize;
    if ( removeId )
      return removeId == (_DWORD)v4;
    if ( !scrContext->m_debuggerGlob.currentElement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8171, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->currentElement )", (const char *)&queryFormat, "pScrDebuggerGlob->currentElement") )
      __debugbreak();
    if ( !scrContext->m_debuggerGlob.variableBreakpoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8173, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->variableBreakpoints )", (const char *)&queryFormat, "pScrDebuggerGlob->variableBreakpoints") )
      __debugbreak();
    v6 = v4;
    Breakpoints = scrContext->m_debuggerGlob.variableBreakpoints[v4];
    if ( Breakpoints )
      goto LABEL_13;
    if ( scrContext->m_debuggerGlob.add )
    {
      Breakpoints = Scr_RefAllocateBreakpoints();
      scrContext->m_debuggerGlob.variableBreakpoints[v6] = Breakpoints;
LABEL_13:
      if ( Scr_RefAllocateElements(scrContext, Breakpoints, &elementNode) )
      {
        removedList = Breakpoints->removedList;
        if ( removedList )
        {
          do
          {
            next = removedList->next;
            ntl::nxheap::free(&s_debuggerHeap.m_heap, removedList);
            removedList = next;
          }
          while ( next );
        }
        ntl::nxheap::free(&s_debuggerHeap.m_heap, Breakpoints);
        scrContext->m_debuggerGlob.variableBreakpoints[v6] = NULL;
      }
    }
  }
  return 0;
}

/*
==============
Scr_RefToObjectVariable
==============
*/
bool Scr_RefToObjectVariable(scrContext_t *scrContext, const unsigned int objectId)
{
  __int64 v2; 
  unsigned int removeId; 
  bool result; 
  Scr_WatchElementDoubleNode_t *Breakpoints; 
  bool v7; 
  Scr_WatchElementNode_s *i; 
  Scr_WatchElement_s *element; 
  Scr_WatchElementNode_s *removedList; 
  Scr_WatchElementNode_s *next; 
  VariableValue value; 
  Scr_WatchElementNode_s *elementNode; 

  v2 = objectId;
  if ( !objectId )
    return 0;
  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8205, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
    __debugbreak();
  removeId = scrContext->m_debuggerGlob.removeId;
  if ( removeId )
    return removeId == (_DWORD)v2;
  if ( !scrContext->m_debuggerGlob.currentElement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8212, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->currentElement )", (const char *)&queryFormat, "pScrDebuggerGlob->currentElement") )
    __debugbreak();
  if ( !scrContext->m_debuggerGlob.variableBreakpoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8214, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->variableBreakpoints )", (const char *)&queryFormat, "pScrDebuggerGlob->variableBreakpoints") )
    __debugbreak();
  Breakpoints = scrContext->m_debuggerGlob.variableBreakpoints[v2];
  if ( !Breakpoints )
  {
    if ( !scrContext->m_debuggerGlob.add )
      return 0;
    Breakpoints = Scr_RefAllocateBreakpoints();
    scrContext->m_debuggerGlob.variableBreakpoints[v2] = Breakpoints;
    AddRefToObject(scrContext, v2);
  }
  if ( !Scr_RefAllocateElements(scrContext, Breakpoints, &elementNode) )
    return 0;
  v7 = 0;
  if ( scrContext->m_varPub.evaluate && (!Scr_GetRefCountToObject(scrContext, v2) || !IsFieldObject(scrContext, v2)) )
  {
    for ( i = Breakpoints->removedList; i; i = i->next )
    {
      scrContext->m_debuggerGlob.removeId = v2;
      element = i->element;
      if ( Scr_RefScriptExpression(scrContext, &i->element->expr) )
      {
        Scr_ScriptWatch::EvaluateWatchElementExpression(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, element, &value);
        if ( scrContext->m_varPub.error_message )
          Scr_ClearErrorMessage(scrContext);
        RemoveRefToValue(scrContext, (unsigned __int8)value.type, value.u);
      }
      scrContext->m_debuggerGlob.removeId = 0;
    }
  }
  scrContext->m_varPub.removeId = v2;
  RemoveRefToObject(scrContext, v2);
  if ( scrContext->m_varPub.removeId )
    scrContext->m_varPub.removeId = 0;
  else
    v7 = 1;
  removedList = Breakpoints->removedList;
  if ( removedList )
  {
    do
    {
      next = removedList->next;
      ntl::nxheap::free(&s_debuggerHeap.m_heap, removedList);
      removedList = next;
    }
    while ( next );
  }
  ntl::nxheap::free(&s_debuggerHeap.m_heap, Breakpoints);
  result = v7;
  scrContext->m_debuggerGlob.variableBreakpoints[v2] = NULL;
  return result;
}

/*
==============
Scr_RemoveBreakpoint
==============
*/
void Scr_RemoveBreakpoint(scrContext_t *scrContext, unsigned __int8 *codePos)
{
  unsigned __int8 *BreakpointInfo; 

  BreakpointInfo = (unsigned __int8 *)Scr_FindBreakpointInfo(scrContext, (const char *)codePos);
  if ( *BreakpointInfo == 0x9A && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 227, ASSERT_TYPE_ASSERT, "( *breakpoint != OP_NOP )", (const char *)&queryFormat, "*breakpoint != OP_NOP") )
    __debugbreak();
  *codePos = *BreakpointInfo;
  *BreakpointInfo = -102;
  if ( !scrContext->m_debuggerGlob.breakpointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 232, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.breakpointCount )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.breakpointCount") )
    __debugbreak();
  --scrContext->m_debuggerGlob.breakpointCount;
}

/*
==============
Scr_RemoveDebuggerRefs
==============
*/
void Scr_RemoveDebuggerRefs(scrContext_t *scrContext)
{
  Scr_ScriptWatch *p_scriptWatch; 
  Scr_WatchElement_s *i; 
  char v4; 
  Scr_WatchElement_s *j; 

  if ( scrContext->m_varPub.developer )
  {
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9804, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
      __debugbreak();
    if ( !Scr_IsStackClear(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9806, ASSERT_TYPE_ASSERT, "( Scr_IsStackClear( scrContext ) )", (const char *)&queryFormat, "Scr_IsStackClear( scrContext )") )
      __debugbreak();
    if ( scrContext->m_vmPub.function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9808, ASSERT_TYPE_ASSERT, "( !scrContext.m_vmPub.function_count )", (const char *)&queryFormat, "!scrContext.m_vmPub.function_count") )
      __debugbreak();
    scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.localId = 0;
    scrContext->m_vmPub.breakpointOutparamcount = 0;
    if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9812, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
      __debugbreak();
    p_scriptWatch = &scrContext->m_debuggerGlob.m_pDynamic->scriptWatch;
    scrContext->m_varPub.evaluate = 1;
    Scr_ScriptWatch::UpdateBreakpoints(p_scriptWatch, 0);
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9783, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
      __debugbreak();
    for ( i = scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.elementHead; i; i = i->next )
    {
      v4 = *((_BYTE *)i + 135);
      if ( (v4 & 0x10) != 0 )
      {
        *((_BYTE *)i + 135) = v4 & 0xEF;
        RemoveRefToValue(scrContext, (unsigned __int8)i->value.type, i->value.u);
      }
      for ( j = i->childHead; j; j = j->next )
        Scr_RemoveElementValue(scrContext, j);
      if ( !i->breakpoint )
      {
        if ( !i->expr.exprHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9792, ASSERT_TYPE_ASSERT, "( expr->exprHead )", (const char *)&queryFormat, "expr->exprHead") )
          __debugbreak();
        Scr_ClearDebugExpr(scrContext, i->expr.exprHead);
      }
    }
    if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9818, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "scrContext.m_varPub.evaluate") )
      __debugbreak();
    scrContext->m_varPub.evaluate = 0;
    if ( !Scr_IsStackClear(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9821, ASSERT_TYPE_ASSERT, "( Scr_IsStackClear( scrContext ) )", (const char *)&queryFormat, "Scr_IsStackClear( scrContext )") )
      __debugbreak();
  }
}

/*
==============
Scr_RemoveElementValue
==============
*/
void Scr_RemoveElementValue(scrContext_t *scrContext, Scr_WatchElement_s *element)
{
  char v2; 
  Scr_WatchElement_s *i; 

  v2 = *((_BYTE *)element + 135);
  if ( (v2 & 0x10) != 0 )
  {
    *((_BYTE *)element + 135) = v2 & 0xEF;
    RemoveRefToValue(scrContext, (unsigned __int8)element->value.type, element->value.u);
  }
  for ( i = element->childHead; i; i = i->next )
    Scr_RemoveElementValue(scrContext, i);
}

/*
==============
Scr_RemoveManualBreakpoint
==============
*/
void Scr_RemoveManualBreakpoint(scrContext_t *scrContext, unsigned __int8 *codePos)
{
  if ( (unsigned __int8 *)scrContext->m_debuggerGlob.nextBreakpointCodePos == codePos && scrContext->m_debuggerGlob.nextBreakpointCodePosMasked )
  {
    scrContext->m_debuggerGlob.nextBreakpointCodePosMasked = 0;
  }
  else if ( *codePos == 0xA2 )
  {
    Scr_RemoveBreakpoint(scrContext, codePos);
  }
  else
  {
    if ( *codePos != 0xA4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 289, ASSERT_TYPE_ASSERT, "( *codePos == OP_manualAndAssignmentBreakpoint )", (const char *)&queryFormat, "*codePos == OP_manualAndAssignmentBreakpoint") )
      __debugbreak();
    *codePos = -93;
  }
}

/*
==============
Scr_ResetAbortDebugger
==============
*/
void Scr_ResetAbortDebugger(scrContext_t *scrContext)
{
  scrContext->m_debuggerGlob.abort = 0;
}

/*
==============
Scr_RestartDebuggerRemote
==============
*/
void Scr_RestartDebuggerRemote(scrContext_t *scrContext)
{
  _DebugMessage message; 
  _ScrRestart v3; 

  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9170, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    _DebugMessage::_DebugMessage(&message);
    _ScrRestart::_ScrRestart(&v3);
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_RESTART;
    message.scrreadfile = (const _ScrReadFile *)&v3;
    Sys_WriteDebugSocketMessage(scrContext, &message);
  }
}

/*
==============
Scr_RestoreKillPos
==============
*/
void Scr_RestoreKillPos(scrContext_t *scrContext, bool kill_thread, char *killThreadCodePos)
{
  bool v5; 

  if ( kill_thread )
  {
    if ( scrContext->m_debuggerGlob.kill_thread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10399, ASSERT_TYPE_ASSERT, "(!scrContext.m_debuggerGlob.kill_thread)", (const char *)&queryFormat, "!scrContext.m_debuggerGlob.kill_thread") )
      __debugbreak();
    v5 = scrContext->m_debuggerGlob.killThreadCodePos == NULL;
    scrContext->m_debuggerGlob.kill_thread = 1;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10401, ASSERT_TYPE_ASSERT, "( !scrContext.m_debuggerGlob.killThreadCodePos )", (const char *)&queryFormat, "!scrContext.m_debuggerGlob.killThreadCodePos") )
      __debugbreak();
    if ( killThreadCodePos )
    {
      scrContext->m_debuggerGlob.killThreadCodePos = killThreadCodePos;
      Scr_AddManualBreakpoint(scrContext, (unsigned __int8 *)killThreadCodePos);
    }
  }
}

/*
==============
Scr_ResumeBreakpoints
==============
*/
void Scr_ResumeBreakpoints(scrContext_t *scrContext)
{
  bool v1; 
  Scr_WatchElement_s *i; 

  v1 = scrContext->m_debuggerGlob.m_pDynamic == NULL;
  scrContext->m_debuggerGlob.atBreakpoint = 0;
  scrContext->m_debuggerGlob.breakpointPos.bufferIndex = 65534;
  if ( v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1437, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  for ( i = scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.elementHead; i; i = i->next )
    *((_BYTE *)i + 135) &= 0xF3u;
}

/*
==============
Scr_RunDebugger
==============
*/
void Scr_RunDebugger(scrContext_t *scrContext)
{
  if ( scrContext->m_varPub.developer )
  {
    scrContext->m_debuggerGlob.abort = 0;
    if ( !Scr_IsStackClear(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9890, ASSERT_TYPE_ASSERT, "( Scr_IsStackClear( scrContext ) )", (const char *)&queryFormat, "Scr_IsStackClear( scrContext )") )
      __debugbreak();
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9892, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
      __debugbreak();
    if ( scrContext->m_vmPub.function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9893, ASSERT_TYPE_ASSERT, "( !scrContext.m_vmPub.function_count )", (const char *)&queryFormat, "!scrContext.m_vmPub.function_count") )
      __debugbreak();
    scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.localId = 0;
    scrContext->m_vmPub.breakpointOutparamcount = 0;
    Scr_DisplayDebugger(scrContext);
    if ( !Scr_IsStackClear(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9898, ASSERT_TYPE_ASSERT, "( Scr_IsStackClear( scrContext ) )", (const char *)&queryFormat, "Scr_IsStackClear( scrContext )") )
      __debugbreak();
  }
}

/*
==============
Scr_RunDebuggerRemote
==============
*/
void Scr_RunDebuggerRemote(scrContext_t *scrContext)
{
  ;
}

/*
==============
Scr_SaveKillPos
==============
*/
char Scr_SaveKillPos(scrContext_t *scrContext, char **killThreadCodePos)
{
  bool kill_thread; 
  unsigned __int8 *v5; 

  kill_thread = scrContext->m_debuggerGlob.kill_thread;
  *killThreadCodePos = scrContext->m_debuggerGlob.killThreadCodePos;
  if ( !kill_thread )
    return 0;
  v5 = (unsigned __int8 *)scrContext->m_debuggerGlob.killThreadCodePos;
  scrContext->m_debuggerGlob.kill_thread = 0;
  if ( v5 )
  {
    Scr_RemoveManualBreakpoint(scrContext, v5);
    scrContext->m_debuggerGlob.killThreadCodePos = NULL;
  }
  return 1;
}

/*
==============
Scr_SendKeepAliveIfNeeded
==============
*/
void Scr_SendKeepAliveIfNeeded(scrContext_t *scrContext)
{
  _DebugMessage message; 
  _ScrKeepAlive v3; 

  if ( scrContext->m_debuggerGlob.atBreakpoint && Sys_Milliseconds() - scrContext->m_debuggerGlob.m_lastKeepAliveTime >= 500 )
  {
    scrContext->m_debuggerGlob.m_lastKeepAliveTime = Sys_Milliseconds();
    _DebugMessage::_DebugMessage(&message);
    _ScrKeepAlive::_ScrKeepAlive(&v3);
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_KEEP_ALIVE;
    message.scrreadfile = (const _ScrReadFile *)&v3;
    Sys_WriteDebugSocketMessage(scrContext, &message);
  }
}

/*
==============
Scr_SetTempBreakpoint
==============
*/
void Scr_SetTempBreakpoint(scrContext_t *scrContext, const char *codePos, unsigned int threadId, int isReturnPos)
{
  if ( codePos && ScriptCodePos::IsScriptPos_Generic((const unsigned __int64)codePos) )
  {
    if ( scrContext->m_debuggerGlob.killThreadCodePos )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1484, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->killThreadCodePos )", (const char *)&queryFormat, "!pScrDebuggerGlob->killThreadCodePos") )
        __debugbreak();
    }
    scrContext->m_debuggerGlob.nextBreakpointCodePos = (char *)codePos;
    scrContext->m_debuggerGlob.isReturnPos = isReturnPos;
    Scr_AddManualBreakpoint(scrContext, (unsigned __int8 *)codePos);
    scrContext->m_debuggerGlob.nextBreakpointThreadId = threadId;
  }
}

/*
==============
Scr_ShowConsole
==============
*/
void Scr_ShowConsole(scrContext_t *scrContext)
{
  ;
}

/*
==============
Scr_ShutdownDebugger
==============
*/
void Scr_ShutdownDebugger(scrContext_t *scrContext)
{
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  Scr_ScriptWindow **scriptWindows; 
  int v4; 
  __int64 v5; 
  Scr_ScriptWindow **v6; 
  char *breakpoints; 

  if ( scrContext->m_varPub.developer && scrContext->m_debuggerGlob.debugger_inited )
  {
    scrContext->m_debuggerGlob.debugger_inited = 0;
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9147, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic", -2i64) )
      __debugbreak();
    m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
    scriptWindows = m_pDynamic->openScriptList.scriptWindows;
    if ( scriptWindows )
    {
      ntl::nxheap::free(&s_debuggerHeap.m_heap, scriptWindows);
      m_pDynamic->openScriptList.scriptWindows = NULL;
      m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
    }
    if ( !m_pDynamic->scriptList.m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2978, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
      __debugbreak();
    if ( !m_pDynamic->scriptList.m_pScrContext->m_debuggerGlob.colBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2979, ASSERT_TYPE_ASSERT, "( m_pScrContext->m_debuggerGlob.colBuf )", (const char *)&queryFormat, "m_pScrContext->m_debuggerGlob.colBuf") )
      __debugbreak();
    Mem_HunkDebug_Free(m_pDynamic->scriptList.m_pScrContext->m_debuggerGlob.colBuf);
    v4 = 0;
    if ( m_pDynamic->scriptList.numLines > 0 )
    {
      v5 = 0i64;
      do
      {
        Mem_HunkDebug_Free(m_pDynamic->scriptList.scriptWindows[v5]);
        ++v4;
        ++v5;
      }
      while ( v4 < m_pDynamic->scriptList.numLines );
    }
    v6 = m_pDynamic->scriptList.scriptWindows;
    if ( v6 )
    {
      ntl::nxheap::free(&s_debuggerHeap.m_heap, v6);
      m_pDynamic->scriptList.scriptWindows = NULL;
    }
    breakpoints = scrContext->m_debuggerGlob.breakpoints;
    if ( breakpoints )
    {
      Mem_HunkDebug_Free(breakpoints);
      scrContext->m_debuggerGlob.breakpoints = NULL;
    }
    scrContext->m_debuggerGlob.debugger_inited = 0;
  }
}

/*
==============
Scr_ShutdownDebuggerMain
==============
*/
void Scr_ShutdownDebuggerMain(scrContext_t *scrContext)
{
  bool v3; 
  Scr_WatchElementDoubleNode_t **variableBreakpoints; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  Scr_OpcodeList_s *assignHead; 
  Scr_OpcodeList_s *next; 

  if ( scrContext->m_varPub.developer && scrContext->m_debuggerGlob.debugger_inited_main )
  {
    v3 = s_debuggerHeapMem == NULL;
    scrContext->m_debuggerGlob.debugger_inited_main = 0;
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9064, ASSERT_TYPE_ASSERT, "(s_debuggerHeapMem)", (const char *)&queryFormat, "s_debuggerHeapMem") )
      __debugbreak();
    ntl::nxheap::clear(&s_debuggerHeap.m_heap);
    ntl::nxheap::shutdown(&s_debuggerHeap.m_heap);
    ntl::nxheap_region::shutdown(&s_debuggerHeap.m_region);
    if ( s_debuggerHeap.m_data.m_buffer )
    {
      if ( s_debuggerHeap.m_data.m_buffer != s_debuggerHeap.m_allocator.m_data.m_buffer && s_debuggerHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
        __debugbreak();
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr cs:s_debuggerHeap.baseclass_0.m_data.m_buffer, xmm0
      }
    }
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovups xmmword ptr cs:s_debuggerHeap.m_allocator.m_data.m_buffer, xmm0
    }
    Mem_HunkDebug_Free(s_debuggerHeapMem);
    variableBreakpoints = scrContext->m_debuggerGlob.variableBreakpoints;
    s_debuggerHeapMem = NULL;
    if ( variableBreakpoints )
    {
      v6 = scrContext->m_variableListParentSize + scrContext->m_variableListChildSize;
      if ( v6 )
      {
        v7 = 0i64;
        v8 = v6;
        do
        {
          if ( scrContext->m_debuggerGlob.variableBreakpoints[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9086, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->variableBreakpoints[breakpointIndex] )", (const char *)&queryFormat, "!pScrDebuggerGlob->variableBreakpoints[breakpointIndex]") )
            __debugbreak();
          ++v7;
          --v8;
        }
        while ( v8 );
        variableBreakpoints = scrContext->m_debuggerGlob.variableBreakpoints;
      }
      Mem_HunkDebug_Free(variableBreakpoints);
      scrContext->m_debuggerGlob.variableBreakpoints = NULL;
    }
    if ( scrContext->m_debuggerGlob.assignHead )
    {
      do
      {
        assignHead = scrContext->m_debuggerGlob.assignHead;
        next = assignHead->next;
        Mem_HunkDebug_Free(assignHead);
        scrContext->m_debuggerGlob.assignHead = next;
      }
      while ( next );
    }
  }
}

/*
==============
Scr_ShutdownDebuggerSystem
==============
*/
void Scr_ShutdownDebuggerSystem(scrContext_t *scrContext, int restart)
{
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  Scr_WatchElement_s *elementHead; 
  Scr_WatchElement_s *next; 
  unsigned __int8 *nextBreakpointCodePos; 
  unsigned __int8 *killThreadCodePos; 

  if ( scrContext->m_varPub.developer && scrContext->m_debuggerGlob.debugger_inited_system )
  {
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9339, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
      __debugbreak();
    scrContext->m_debuggerGlob.debugger_inited_system = 0;
    scrContext->m_varPub.evaluate = 0;
    m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
    Scr_ScriptWatch::UpdateBreakpoints(&m_pDynamic->scriptWatch, 0);
    Scr_UnbreakAllAssignmentPos(m_pDynamic->scriptWatch.m_pScrContext);
    if ( m_pDynamic->scriptWatch.elementHead )
    {
      do
      {
        elementHead = m_pDynamic->scriptWatch.elementHead;
        next = elementHead->next;
        Scr_ScriptWatch::FreeWatchElement(&m_pDynamic->scriptWatch, elementHead);
        m_pDynamic->scriptWatch.elementHead = next;
      }
      while ( next );
    }
    nextBreakpointCodePos = (unsigned __int8 *)scrContext->m_debuggerGlob.nextBreakpointCodePos;
    if ( nextBreakpointCodePos )
    {
      Scr_RemoveManualBreakpoint(scrContext, nextBreakpointCodePos);
      scrContext->m_debuggerGlob.nextBreakpointCodePos = NULL;
    }
    killThreadCodePos = (unsigned __int8 *)scrContext->m_debuggerGlob.killThreadCodePos;
    if ( killThreadCodePos )
    {
      Scr_RemoveManualBreakpoint(scrContext, killThreadCodePos);
      scrContext->m_debuggerGlob.killThreadCodePos = NULL;
    }
    if ( scrContext->m_debuggerGlob.breakpointCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 9359, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->breakpointCount )", (const char *)&queryFormat, "!pScrDebuggerGlob->breakpointCount") )
        __debugbreak();
    }
  }
}

/*
==============
Scr_ShutdownRemoteClient
==============
*/
void Scr_ShutdownRemoteClient(scrContext_t *scrContext, int restart)
{
  ;
}

/*
==============
Scr_SkipIntructions
==============
*/
__int64 Scr_SkipIntructions(const scrContext_t *scrContext)
{
  return (unsigned int)scrContext->m_debuggerGlob.skip_instr;
}

/*
==============
Scr_SpecialBreakpoint
==============
*/
void Scr_SpecialBreakpoint(scrContext_t *scrContext, VariableValue *top, const char *pos, unsigned int localId, int opcode, Scr_SourceType_t type)
{
  unsigned __int8 *nextBreakpointCodePos; 
  const char *v11; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 

  if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7735, ASSERT_TYPE_ASSERT, "( pos )", (const char *)&queryFormat, "pos") )
    __debugbreak();
  if ( scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7736, ASSERT_TYPE_ASSERT, "( !scrContext.m_vmPub.inparamcount )", (const char *)&queryFormat, "!scrContext.m_vmPub.inparamcount") )
    __debugbreak();
  nextBreakpointCodePos = (unsigned __int8 *)scrContext->m_debuggerGlob.nextBreakpointCodePos;
  scrContext->m_vmPub.outparamcount = 0;
  if ( nextBreakpointCodePos )
  {
    Scr_RemoveManualBreakpoint(scrContext, nextBreakpointCodePos);
    scrContext->m_debuggerGlob.nextBreakpointCodePos = NULL;
  }
  v11 = pos - 1;
  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7745, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
    __debugbreak();
  scrContext->m_debuggerGlob.breakpointOpcode = opcode;
  m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
  scrContext->m_debuggerGlob.breakpointTop = top;
  scrContext->m_debuggerGlob.breakpointCodePos = v11;
  m_pDynamic->scriptWatch.localId = localId;
  scrContext->m_debuggerGlob.stepLineNum = -1;
  if ( type == SOURCE_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7753, ASSERT_TYPE_ASSERT, "( type )", (const char *)&queryFormat, "type") )
    __debugbreak();
  if ( !Scr_GetSourcePosOfType(scrContext, v11, type, 1, &scrContext->m_debuggerGlob.breakpointPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7755, ASSERT_TYPE_ASSERT, "( hasSourcePos )", (const char *)&queryFormat, "hasSourcePos") )
    __debugbreak();
  Scr_HitBreakpointInternal(scrContext);
}

/*
==============
Scr_StartThreadExecutionTime
==============
*/
void Scr_StartThreadExecutionTime(scrContext_t *scrContext)
{
  if ( scrContext->m_varPub.developer )
    scrContext->m_debuggerGlob.currentThreadExecutionTimeStartTime = __rdtsc();
}

/*
==============
Scr_Step
==============
*/
void Scr_Step(scrContext_t *scrContext)
{
  const char *breakpointCodePos; 
  int step_mode; 
  int v4; 
  const char *ReturnPos; 
  unsigned int SourceBuffer; 
  const char *v7; 
  unsigned int PrevSourcePos; 
  bool evaluate; 
  int isReturnPos; 
  int v11; 
  unsigned int localId; 

  if ( Sys_IsRemoteDebugServer(scrContext) && scrContext->m_debuggerGlob.atBreakpoint )
    Scr_ResumeBreakpoints(scrContext);
  breakpointCodePos = scrContext->m_debuggerGlob.breakpointCodePos;
  if ( breakpointCodePos )
  {
    step_mode = scrContext->m_debuggerGlob.step_mode;
    if ( step_mode )
    {
      if ( scrContext->m_vmPub.function_count )
      {
        if ( step_mode == 3 )
        {
          v4 = 1;
          scrContext->m_debuggerGlob.step_mode = 1;
          ReturnPos = Scr_GetReturnPos(scrContext, &localId);
          v11 = 1;
        }
        else
        {
          if ( scrContext->m_debuggerGlob.stepLineNum == -1 )
          {
            SourceBuffer = Scr_GetSourceBuffer(scrContext, breakpointCodePos);
            v7 = scrContext->m_debuggerGlob.breakpointCodePos;
            scrContext->m_debuggerGlob.stepBufferIndex = SourceBuffer;
            PrevSourcePos = Scr_GetPrevSourcePos(scrContext, v7, 0);
            scrContext->m_debuggerGlob.stepLineNum = Scr_GetLineNum(scrContext, scrContext->m_debuggerGlob.stepBufferIndex, PrevSourcePos);
          }
          evaluate = scrContext->m_varPub.evaluate;
          scrContext->m_varPub.evaluate = 1;
          if ( scrContext->m_debuggerGlob.breakpointOpcode < 0 )
          {
            isReturnPos = scrContext->m_debuggerGlob.breakpointOpcode;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1570, ASSERT_TYPE_ASSERT, "( ( pScrDebuggerGlob->breakpointOpcode >= 0 ) )", "%s\n\t( pScrDebuggerGlob->breakpointOpcode ) = %i", "( pScrDebuggerGlob->breakpointOpcode >= 0 )", isReturnPos) )
              __debugbreak();
          }
          ReturnPos = Scr_GetNextCodepos(scrContext, scrContext->m_debuggerGlob.breakpointTop, scrContext->m_debuggerGlob.breakpointCodePos, scrContext->m_debuggerGlob.breakpointOpcode, scrContext->m_debuggerGlob.step_mode, &localId, &v11);
          scrContext->m_varPub.evaluate = evaluate;
          v4 = v11;
        }
        Scr_SetTempBreakpoint(scrContext, ReturnPos, localId, v4);
      }
    }
  }
}

/*
==============
Scr_ThreadCreated
==============
*/
void Scr_ThreadCreated(const scrContext_t *scrContext, unsigned int threadId)
{
  _RDI = threadId;
  if ( scrContext->m_varPub.developer )
  {
    if ( threadId >= scrContext->m_variableListParentSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11318, ASSERT_TYPE_ASSERT, "(unsigned)( threadId ) < (unsigned)( scrContext.m_variableListParentSize )", "threadId doesn't index scrContext.m_variableListParentSize\n\t%i not in [0, %i)", threadId, scrContext->m_variableListParentSize) )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__rdtsc() & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    _RAX = scrContext->m_debuggerGlob.m_debugThreadTimes;
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rax+rdi*8], xmm1
    }
    scrContext->m_debuggerGlob.m_debugThreadTimes[_RDI].executionTime = 0.0;
  }
}

/*
==============
Scr_UnbreakAllAssignmentPos
==============
*/
void Scr_UnbreakAllAssignmentPos(scrContext_t *scrContext)
{
  Scr_OpcodeList_s *assignHead; 
  char *codePos; 
  char v4; 

  if ( scrContext->m_debuggerGlob.assignBreakpointSet )
  {
    assignHead = scrContext->m_debuggerGlob.assignHead;
    for ( scrContext->m_debuggerGlob.assignBreakpointSet = 0; assignHead; assignHead = assignHead->next )
    {
      codePos = assignHead->codePos;
      v4 = *assignHead->codePos;
      if ( v4 == -93 )
      {
        Scr_RemoveBreakpoint(scrContext, (unsigned __int8 *)assignHead->codePos);
      }
      else
      {
        if ( v4 != -92 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 317, ASSERT_TYPE_ASSERT, "( *codePos == OP_manualAndAssignmentBreakpoint )", (const char *)&queryFormat, "*codePos == OP_manualAndAssignmentBreakpoint") )
          __debugbreak();
        *codePos = -94;
      }
    }
  }
}

/*
==============
Scr_UpdateDebugSocket
==============
*/
__int64 Scr_UpdateDebugSocket(scrContext_t *scrContext)
{
  unsigned int v2; 
  int dirty; 
  _DebugMessage *updated; 
  _DebugMessage *v5; 
  DebugMessage__DebugMessageCase debug_message_case; 
  const _ScrReadFile *scrreadfile; 
  Scr_WatchElement_s *ElementFromId; 
  const _ScrReadFile *v9; 
  Scr_WatchElement_s *v10; 
  const char *v11; 
  bool v12; 
  _ScriptBreakpointType data_high; 
  int v14; 
  int id; 
  Scr_WatchElement_s *v16; 
  const _ScrReadFile *v17; 
  Scr_WatchElement_s *v18; 
  int v19; 
  const _ScrReadFile *v20; 
  Scr_WatchElement_s *v21; 
  const _ScrReadFile *v22; 
  Scr_WatchElement_s *v23; 
  Scr_WatchElement_s *v24; 
  Scr_WatchElement_s *v25; 
  const _ScrReadFile *v26; 
  Scr_WatchElement_s *v27; 
  int filename_high; 
  int function_count; 
  unsigned int localId; 
  scrDebuggerGlobDynamic_t *v31; 
  const _ScrToggleBreakpointReply *request; 
  const char *filename; 
  int selectedline; 
  Scr_WatchElement_s *v36; 
  bool v37; 
  bool v38; 
  scrDebuggerGlobDynamic_t *m_pDynamic; 
  Scr_ScriptWindow **scriptWindows; 
  Scr_ScriptWindow **v41; 
  Scr_ScriptWindow *v42; 
  CLPauseReason PauseReason; 
  _DebugMessage message; 
  _ScrPasteElementReply v45; 
  bool v46; 
  int v47; 
  _ScriptBreakpointType breakpointType; 

  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10620, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
    __debugbreak();
  v2 = 0;
  dirty = scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.dirty;
  v47 = dirty;
  while ( 2 )
  {
    updated = Sys_UpdateDebugSocket(scrContext);
    v5 = updated;
    if ( updated )
      debug_message_case = updated->debug_message_case;
    else
      debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE__NOT_SET;
    switch ( debug_message_case )
    {
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_READ_FILE:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_RESTART:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_LOAD_SCRIPT_NAMES:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SELECT_ELEMENT:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_TOGGLE_EXPAND_ELEMENT:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_HIT_BREAKPOINT:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SORT_HIT_BREAKPOINTS_TOP:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_WATCH_ELEMENT_HIT_BREAKPOINT:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_FREE_WATCH_ELEMENT_CHILDREN:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_ELEMENT_OBJECT_TYPE:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_ELEMENT_THREAD_START:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_ELEMENT_VALUE_TEXT:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_NON_FIELD_REF_TEXT:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_ELEMENT_REF_TEXT:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_CHILD_COUNT:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_UPDATE:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_UPDATE_WATCH_HEIGHT:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SELECT_SCRIPT_LINE:
      case DEBUG_MESSAGE__DEBUG_MESSAGE_CONSOLE_FIX_POS:
        goto $LN8_105;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_REQUEST_SCRIPT:
        if ( !Sys_IsRemoteDebugServer(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10673, ASSERT_TYPE_ASSERT, "( Sys_IsRemoteDebugServer( scrContext ) )", (const char *)&queryFormat, "Sys_IsRemoteDebugServer( scrContext )") )
          __debugbreak();
        Scr_SendSourceFile(scrContext, v5->scrrequestscript);
        v2 = 1;
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_ADD_TEXT_REPLY:
        scrreadfile = updated->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7348, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        ElementFromId = Scr_GetElementFromId(scrContext, HIDWORD(scrreadfile->filename));
        if ( !ElementFromId )
          goto $LN8_105;
        Scr_ScriptWatch::AddElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, ElementFromId, *(const char **)&scrreadfile->has_sourcebuf);
        v2 = 1;
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_PASTE_ELEMENT_REPLY:
        v9 = updated->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4732, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v10 = Scr_GetElementFromId(scrContext, HIDWORD(v9->filename));
        v11 = *(const char **)&v9->has_sourcebuf;
        v12 = HIDWORD(v9->sourcebuf.len) != 0;
        data_high = SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_NONE;
        v14 = scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.elementId + 1;
        if ( Sys_IsRemoteDebugServer(scrContext) )
        {
          data_high = HIDWORD(v9->sourcebuf.data);
          _DebugMessage::_DebugMessage(&message);
          _ScrPasteElementReply::_ScrPasteElementReply(&v45);
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_PASTE_ELEMENT_REPLY;
          message.scrreadfile = (const _ScrReadFile *)&v45;
          if ( v10 )
            id = v10->id;
          else
            id = 0;
          v45.element = id;
          v45.user = v12;
          v45.requestid = HIDWORD(v9[1].base.descriptor);
          v45.has_element = 1;
          v45.text = v11;
          v45.has_user = 1;
          v45.has_requestid = 1;
          v45.has_newelement = 1;
          v45.newelement = v14;
          Sys_WriteDebugSocketMessage(scrContext, &message);
        }
        v16 = Scr_ScriptWatch::PasteNonBreakpointElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v10, v11, v12);
        if ( v14 != v16->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4757, ASSERT_TYPE_ASSERT, "(newElementId == newElement->id)", (const char *)&queryFormat, "newElementId == newElement->id") )
          __debugbreak();
        if ( Sys_IsRemoteDebugServer(scrContext) && data_high )
          Scr_ScriptWatch::ToggleBreakpointInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v16, data_high);
        goto LABEL_32;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_INSERT_ELEMENT_REPLY:
        v17 = updated->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4808, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v18 = Scr_GetElementFromId(scrContext, HIDWORD(v17->filename));
        if ( Sys_IsRemoteDebugServer(scrContext) )
        {
          _DebugMessage::_DebugMessage(&message);
          _ScrInsertElementReply::_ScrInsertElementReply((_ScrInsertElementReply *)&v45);
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_INSERT_ELEMENT_REPLY;
          message.scrreadfile = (const _ScrReadFile *)&v45;
          if ( v18 )
            v19 = v18->id;
          else
            v19 = 0;
          v45.has_element = 1;
          v45.element = v19;
          Sys_WriteDebugSocketMessage(scrContext, &message);
        }
        Scr_ScriptWatch::PasteNonBreakpointElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v18, (const char *)&queryFormat.fmt + 3, 1);
        v2 = 1;
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_DELETE_ELEMENT_REPLY:
        v20 = updated->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 4939, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v21 = Scr_GetElementFromId(scrContext, HIDWORD(v20->filename));
        if ( !v21 )
          goto $LN8_105;
        if ( Sys_IsRemoteDebugServer(scrContext) )
        {
          _DebugMessage::_DebugMessage(&message);
          _ScrDeleteElementReply::_ScrDeleteElementReply((_ScrDeleteElementReply *)&v45);
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_DELETE_ELEMENT_REPLY;
          message.scrreadfile = (const _ScrReadFile *)&v45;
          v45.element = v21->id;
          v45.has_element = 1;
          Sys_WriteDebugSocketMessage(scrContext, &message);
        }
        Scr_ScriptWatch::DeleteElementInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v21);
        v2 = 1;
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_BACKSPACE_ELEMENT_REPLY:
        v22 = updated->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 5043, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v23 = Scr_GetElementFromId(scrContext, HIDWORD(v22->filename));
        if ( !v23 )
          goto $LN8_105;
        if ( Sys_IsRemoteDebugServer(scrContext) )
        {
          _DebugMessage::_DebugMessage(&message);
          _ScrBackspaceElementReply::_ScrBackspaceElementReply((_ScrBackspaceElementReply *)&v45);
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_BACKSPACE_ELEMENT_REPLY;
          message.scrreadfile = (const _ScrReadFile *)&v45;
          v45.element = v23->id;
          v45.has_element = 1;
          Sys_WriteDebugSocketMessage(scrContext, &message);
        }
        Scr_ScriptWatch::BackspaceElementInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v23);
        v2 = 1;
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_CLONE_ELEMENT_REPLY:
        v24 = Scr_GetElementFromId(scrContext, HIDWORD(updated->scrreadfile->filename));
        if ( !v24 )
          goto $LN8_105;
        if ( Sys_IsRemoteDebugServer(scrContext) )
        {
          _DebugMessage::_DebugMessage(&message);
          _ScrCloneElementReply::_ScrCloneElementReply((_ScrCloneElementReply *)&v45);
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_CLONE_ELEMENT_REPLY;
          message.scrreadfile = (const _ScrReadFile *)&v45;
          v45.element = v24->id;
          v45.has_element = 1;
          Sys_WriteDebugSocketMessage(scrContext, &message);
        }
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7602, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
          __debugbreak();
        v25 = Scr_ScriptWatch::CloneElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v24);
        if ( !Sys_IsRemoteDebugServer(scrContext) )
          goto $LN8_105;
        Scr_ScriptWatch::EvaluateWatchElement(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v25);
        v2 = 1;
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_TOGGLE_BREAKPOINT_REPLY:
        request = updated->scrtogglebreakpointreply;
        filename = request->filename;
        selectedline = request->selectedline;
        v36 = Scr_GetElementFromId(scrContext, request->element);
        v37 = request->force != 0;
        breakpointType = request->breakpointtype;
        v38 = request->overwrite != 0;
        v46 = request->user != 0;
        if ( filename && *filename )
        {
          if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1371, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
            __debugbreak();
          m_pDynamic = scrContext->m_debuggerGlob.m_pDynamic;
          scriptWindows = m_pDynamic->scriptList.scriptWindows;
          if ( scriptWindows )
          {
            v41 = (Scr_ScriptWindow **)bsearch(filename, scriptWindows, m_pDynamic->scriptList.numLines, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareScriptWindow);
            if ( v41 )
            {
              v42 = *v41;
              if ( *v41 )
              {
                v42->selectedLine = selectedline;
                Scr_ScriptWindow::ToggleBreakpointInternal(v42, v36, v37, v38, breakpointType, v46, request);
              }
            }
          }
        }
LABEL_32:
        dirty = v47;
        goto $LN8_105;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_TOGGLE_WATCH_BREAKPOINT_REPLY:
        v26 = updated->scrreadfile;
        if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8524, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
          __debugbreak();
        v27 = Scr_GetElementFromId(scrContext, HIDWORD(v26->filename));
        if ( !v27 )
          goto $LN8_105;
        Scr_ScriptWatch::ToggleBreakpointInternal(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, v27, *((_ScriptBreakpointType *)&v26->has_sourcebuf + 1));
        v2 = 1;
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_KEEP_ALIVE:
        Scr_SendKeepAliveIfNeeded(scrContext);
        v2 = 1;
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SORT_ELEMENT_CHILDREN:
        if ( !dirty || scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.dirty )
          goto $LN8_105;
        v2 = 1;
        Sys_AckDebugSocket(scrContext);
        goto LABEL_78;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_PRINT_MESSAGE:
        CL_ConsolePrint(LOCAL_CLIENT_0, 23, updated->scrreadfile->filename, 0, 0, 0);
        v2 = 1;
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_PAUSE:
        PauseReason = CL_Pause_GetPauseReason();
        CL_Pause_SetPauseReason((CLPauseReason)(PauseReason ^ 1));
        v2 = 1;
        Sys_AckDebugSocket(scrContext);
        continue;
      case DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SET_STACK_FRAME:
        filename_high = HIDWORD(updated->scrreadfile->filename);
        function_count = scrContext->m_vmPub.function_count;
        if ( filename_high >= function_count )
          localId = 0;
        else
          localId = scrContext->m_vmPub.function_frame_start[function_count - filename_high].fs.localId;
        v31 = scrContext->m_debuggerGlob.m_pDynamic;
        if ( localId == v31->scriptWatch.localId )
        {
$LN8_105:
          v2 = 1;
          Sys_AckDebugSocket(scrContext);
        }
        else
        {
          v31->scriptWatch.localId = localId;
          Scr_ScriptWatch::Evaluate(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch);
          v2 = 1;
          Sys_AckDebugSocket(scrContext);
        }
        continue;
      default:
LABEL_78:
        Sys_FlushDebugSocketData(scrContext);
        return v2;
    }
  }
}

/*
==============
Scr_UpdateDebugger
==============
*/
void Scr_UpdateDebugger(scrContext_t *scrContext)
{
  const char *m_scriptPos; 
  unsigned __int64 v6; 
  int v13; 
  char v14; 
  Scr_WatchElement_s *i; 
  VariableValue value; 

  if ( !scrContext->m_varPub.developer || !scrContext->m_debuggerGlob.debugger_inited_system || !scrContext->m_varPub.allowDebugger )
    return;
  if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10911, ASSERT_TYPE_ASSERT, "( pScrDebuggerGlob->m_pDynamic )", (const char *)&queryFormat, "pScrDebuggerGlob->m_pDynamic") )
    __debugbreak();
  if ( scrContext->m_debuggerGlob.atBreakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10916, ASSERT_TYPE_ASSERT, "( !pScrDebuggerGlob->atBreakpoint )", (const char *)&queryFormat, "!pScrDebuggerGlob->atBreakpoint") )
    __debugbreak();
  if ( !Scr_IsStackClear(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10917, ASSERT_TYPE_ASSERT, "( Scr_IsStackClear( scrContext ) )", (const char *)&queryFormat, "Scr_IsStackClear( scrContext )") )
    __debugbreak();
  if ( scrContext->m_debuggerGlob.disableBreakpoints )
    return;
  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
  }
  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, "<script debugger variable>");
  if ( g_connected_once )
  {
    Sys_UpdateRemoteDebugListenServer(scrContext);
  }
  else
  {
    g_connected_once = 1;
    v6 = __rdtsc();
    if ( !Sys_IsRemoteDebugServer(scrContext) )
    {
      __asm { vmovsd  xmm7, cs:__real@43f0000000000000 }
      Sys_UpdateRemoteDebugListenServer(scrContext);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( (__int64)(__rdtsc() - v6) < 0 )
        __asm { vaddsd  xmm0, xmm0, xmm7 }
      __asm { vmulsd  xmm6, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick }
      if ( Dvar_GetBoolSafe("scr_waitfordebugger") )
        __asm { vcomisd xmm6, cs:g_timeout_ms }
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_48]
    vmovaps xmm6, [rsp+88h+var_38]
  }
  if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10968, ASSERT_TYPE_ASSERT, "( !pScrVarPub->evaluate )", (const char *)&queryFormat, "!pScrVarPub->evaluate") )
    __debugbreak();
  scrContext->m_varPub.evaluate = 1;
  v13 = 0;
  v14 = 0;
  scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.localId = 0;
  scrContext->m_vmPub.breakpointOutparamcount = 0;
LABEL_25:
  for ( i = scrContext->m_debuggerGlob.m_pDynamic->scriptWatch.elementHead; i; i = i->next )
  {
    if ( i->breakpointType == 1 && ((i->objectType - 17) & 0xF7) != 0 )
    {
      if ( i->breakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10984, ASSERT_TYPE_ASSERT, "( !element->breakpoint )", (const char *)&queryFormat, "!element->breakpoint") )
        __debugbreak();
      if ( !i->expr.exprHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10986, ASSERT_TYPE_ASSERT, "( expr->exprHead )", (const char *)&queryFormat, "expr->exprHead") )
        __debugbreak();
      if ( Scr_EvalScriptExpression(scrContext, &i->expr, 0, &value, 1, 1) && !v14 )
      {
        Scr_ClearErrorMessage(scrContext);
        RemoveRefToValue(scrContext, (unsigned __int8)value.type, value.u);
$retry2_2:
        v14 = 1;
        Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 0);
        goto LABEL_25;
      }
      if ( scrContext->m_varPub.error_message )
      {
        Scr_ClearErrorMessage(scrContext);
        RemoveRefToValue(scrContext, (unsigned __int8)value.type, value.u);
        if ( (*((_BYTE *)i + 135) & 0x10) == 0 )
          continue;
        if ( !v14 )
          goto $retry2_2;
      }
      else if ( Scr_WatchElementHasSameValue(scrContext, i, &value) )
      {
        continue;
      }
      if ( Scr_ConditionalExpression(scrContext, i, 0) )
        v13 = 1;
    }
  }
  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    if ( !v14 )
    {
      v14 = 1;
      Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 0);
    }
    if ( !scrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 7683, ASSERT_TYPE_ASSERT, "( scrContext.m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "scrContext.m_debuggerGlob.m_pDynamic") )
      __debugbreak();
    Scr_ScriptWatch::Evaluate(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch);
    if ( Sys_IsRemoteDebugServer(scrContext) )
      Scr_ProcessDebugMessages(scrContext);
  }
  if ( v14 )
    Scr_ScriptWatch::UpdateBreakpoints(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch, 1);
  if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 11040, ASSERT_TYPE_ASSERT, "( pScrVarPub->evaluate )", (const char *)&queryFormat, "pScrVarPub->evaluate") )
    __debugbreak();
  scrContext->m_varPub.evaluate = 0;
  if ( v13 )
  {
LABEL_63:
    Scr_StackClear(scrContext);
    Scr_ScriptWatch::SortHitBreakpointsTop(&scrContext->m_debuggerGlob.m_pDynamic->scriptWatch);
    Scr_RunDebugger(scrContext);
  }
  else if ( scrContext->m_debuggerGlob.run_debugger )
  {
    scrContext->m_debuggerGlob.run_debugger = 0;
    goto LABEL_63;
  }
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
}

/*
==============
Scr_UpdateRemoteDebugger
==============
*/
void Scr_UpdateRemoteDebugger(scrContext_t *scrContext)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10838, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    if ( scrContext->m_varPub.developer && scrContext->m_debuggerGlob.debugger_inited_system && Sys_IsRemoteDebugServer(scrContext) )
    {
      if ( scrContext->m_debuggerGlob.disableDebuggerRemote )
      {
        Scr_DisplayDebuggerRemoteInternal(scrContext);
        scrContext->m_debuggerGlob.disableDebuggerRemote = 0;
      }
    }
  }
  else
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10862, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( scrContext->m_debuggerGlob.smpDisplay )
    {
      if ( scrContext->m_debuggerGlob.ignoreSmpDisplay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10867, ASSERT_TYPE_ASSERT, "(!pScrDebuggerGlob->ignoreSmpDisplay)", (const char *)&queryFormat, "!pScrDebuggerGlob->ignoreSmpDisplay") )
        __debugbreak();
      scrContext->m_debuggerGlob.ignoreSmpDisplay = 1;
      Scr_DisplayDebugger(scrContext);
      if ( !scrContext->m_debuggerGlob.ignoreSmpDisplay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10872, ASSERT_TYPE_ASSERT, "(pScrDebuggerGlob->ignoreSmpDisplay)", (const char *)&queryFormat, "pScrDebuggerGlob->ignoreSmpDisplay") )
        __debugbreak();
      scrContext->m_debuggerGlob.ignoreSmpDisplay = 0;
      scrContext->m_debuggerGlob.smpDisplay = 0;
    }
  }
}

/*
==============
Scr_WatchElementHasSameValue
==============
*/
char Scr_WatchElementHasSameValue(scrContext_t *scrContext, Scr_WatchElement_s *element, VariableValue *newValue)
{
  VariableUnion u; 
  int type; 
  VariableValue value1; 

  if ( (*((_BYTE *)element + 135) & 0x10) == 0 )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)newValue->type, newValue->u);
    return 0;
  }
  u = element->value.u;
  type = (unsigned __int8)element->value.type;
  value1.type = type;
  value1.u = u;
  AddRefToValue(scrContext, type, u);
  Scr_EvalEquality(scrContext, &value1, newValue);
  if ( scrContext->m_varPub.error_message )
  {
    Scr_ClearErrorMessage(scrContext);
  }
  else
  {
    if ( value1.type != VAR_INTEGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10440, ASSERT_TYPE_ASSERT, "( oldValue.type == VAR_INTEGER )", (const char *)&queryFormat, "oldValue.type == VAR_INTEGER") )
      __debugbreak();
    if ( value1.u.intValue )
    {
      if ( element->value.type != VAR_POINTER )
        return 1;
      if ( newValue->type != VAR_POINTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 10445, ASSERT_TYPE_ASSERT, "( newValue->type == VAR_POINTER )", (const char *)&queryFormat, "newValue->type == VAR_POINTER") )
        __debugbreak();
      if ( GetObjectType(scrContext, newValue->u.intValue) == element->objectType )
        return 1;
    }
  }
  return 0;
}

/*
==============
Scr_WatchElementHitBreakpoint
==============
*/
void Scr_WatchElementHitBreakpoint(scrContext_t *scrContext, Scr_WatchElement_s *element, bool enabled)
{
  int id; 
  char v7; 
  char v8; 
  _DebugMessage message; 
  _ScrWatchElementHitBreakpoint v10; 

  if ( Sys_IsRemoteDebugServer(scrContext) )
  {
    _DebugMessage::_DebugMessage(&message);
    _ScrWatchElementHitBreakpoint::_ScrWatchElementHitBreakpoint(&v10);
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_WATCH_ELEMENT_HIT_BREAKPOINT;
    message.scrreadfile = (const _ScrReadFile *)&v10;
    if ( element )
      id = element->id;
    else
      id = 0;
    v10.element = id;
    v10.enabled = enabled;
    v10.has_element = 1;
    v10.has_enabled = 1;
    Sys_WriteDebugSocketMessage(scrContext, &message);
  }
  v7 = *((_BYTE *)element + 135);
  if ( enabled )
  {
    v8 = 4;
  }
  else
  {
    element->changedTime = 0;
    v8 = 8;
  }
  *((_BYTE *)element + 135) = v8 | v7;
}

/*
==============
Scr_ScriptWindow::SendBreakpointData
==============
*/
bool Scr_ScriptWindow::SendBreakpointData(Scr_ScriptWindow *this, Scr_WatchElement_s *element, bool force, bool overwrite, _ScriptBreakpointType breakpointType, bool user, const char *sourceBuffer, Scr_Breakpoint **pBreakpoint, unsigned int startSourcePos, unsigned int endSourcePos, const _ScrToggleBreakpointReply *request)
{
  scrContext_t *m_pScrContext; 
  int IsRemoteDebugServer; 
  bool v17; 
  int id; 
  bool v19; 
  _DebugMessage message; 
  _ScrToggleBreakpointReply reply; 

  _DebugMessage::_DebugMessage(&message);
  _ScrToggleBreakpointReply::_ScrToggleBreakpointReply(&reply);
  m_pScrContext = this->m_pScrContext;
  message.scrreadfile = (const _ScrReadFile *)&reply;
  message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_TOGGLE_BREAKPOINT_REPLY;
  IsRemoteDebugServer = Sys_IsRemoteDebugServer(m_pScrContext);
  v17 = IsRemoteDebugServer != 0;
  if ( IsRemoteDebugServer )
  {
    reply.filename = sourceBuffer;
    reply.selectedline = this->selectedLine;
    reply.has_selectedline = 1;
    if ( element )
      id = element->id;
    else
      id = 0;
    reply.element = id;
    reply.force = force;
    reply.overwrite = overwrite;
    reply.user = user;
    reply.has_element = 1;
    reply.has_force = 1;
    reply.has_overwrite = 1;
    reply.has_breakpointtype = 1;
    reply.breakpointtype = breakpointType;
    reply.has_user = 1;
  }
  if ( pBreakpoint )
  {
    if ( v17 && request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1063, ASSERT_TYPE_ASSERT, "((request == 0 && reply != 0) || (request != 0 && reply == 0))", (const char *)&queryFormat, "(request == NULL && reply != NULL) || (request != NULL && reply == NULL)") )
      __debugbreak();
    v19 = Scr_ScriptWindow::AddBreakpointAtSourcePos(this, element, breakpointType, user, pBreakpoint, startSourcePos, endSourcePos, request, &reply);
  }
  else
  {
    if ( !v17 )
      return 0;
    *(_QWORD *)&reply.has_success = 1i64;
    v19 = 0;
  }
  if ( v17 )
    Sys_WriteDebugSocketMessage(this->m_pScrContext, &message);
  return v19;
}

/*
==============
Scr_ScriptWindow::SetCurrentLine
==============
*/
void Scr_ScriptWindow::SetCurrentLine(Scr_ScriptWindow *this, int line)
{
  SourceBufferInfo *v4; 
  const char *v5; 
  const char *currentBufPos; 
  const char *v7; 
  int currentTopLine; 
  const char *sourceBuf; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  __int64 v13; 
  __int64 v14; 

  while ( 1 )
  {
    if ( Sys_IsRemoteDebugServer(this->m_pScrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 446, ASSERT_TYPE_ASSERT, "( !Sys_IsRemoteDebugServer( *m_pScrContext ) )", (const char *)&queryFormat, "!Sys_IsRemoteDebugServer( *m_pScrContext )") )
      __debugbreak();
    if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 449, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
      __debugbreak();
    if ( this->bufferIndex >= this->m_pScrContext->m_parserPub.sourceBufferLookupLen )
    {
      LODWORD(v14) = this->m_pScrContext->m_parserPub.sourceBufferLookupLen;
      LODWORD(v13) = this->bufferIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 450, ASSERT_TYPE_ASSERT, "(unsigned)( bufferIndex ) < (unsigned)( m_pScrContext->m_parserPub.sourceBufferLookupLen )", "bufferIndex doesn't index m_pScrContext->m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v4 = &this->m_pScrContext->m_parserPub.sourceBufferLookup[this->bufferIndex];
    if ( line < this->currentTopLine )
      break;
    if ( line <= this->currentTopLine )
      return;
    v5 = &v4->sourceBuf[v4->len];
    currentBufPos = this->currentBufPos;
    v7 = currentBufPos;
    while ( 1 )
    {
      if ( *currentBufPos )
      {
        do
          this->currentBufPos = ++v7;
        while ( *v7 );
      }
      currentTopLine = this->currentTopLine;
      currentBufPos = this->currentBufPos + 1;
      this->currentBufPos = currentBufPos;
      v7 = currentBufPos;
      this->currentTopLine = currentTopLine + 1;
      if ( currentBufPos >= v5 )
        break;
      if ( line <= currentTopLine + 1 )
        return;
    }
    line = currentTopLine;
  }
  sourceBuf = v4->sourceBuf;
  v10 = this->currentBufPos;
  if ( v10 == sourceBuf )
  {
LABEL_27:
    this->currentTopLine = 0;
  }
  else
  {
    while ( 1 )
    {
      v11 = v10 - 1;
      this->currentBufPos = v11;
      if ( *v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 466, ASSERT_TYPE_ASSERT, "( !(*currentBufPos) )", (const char *)&queryFormat, "!(*currentBufPos)") )
        __debugbreak();
      v12 = this->currentBufPos;
      do
        this->currentBufPos = --v12;
      while ( *v12 );
      --this->currentTopLine;
      v10 = v12 + 1;
      this->currentBufPos = v10;
      if ( line >= this->currentTopLine )
        break;
      if ( v10 == sourceBuf )
        goto LABEL_27;
    }
  }
}

/*
==============
Scr_ScriptWindow::SetScriptFile
==============
*/
void Scr_ScriptWindow::SetScriptFile(Scr_ScriptWindow *this, scrContext_t *scrContext, const char *name)
{
  unsigned int v5; 
  SourceBufferInfo *v6; 
  const char *buf; 
  char *v8; 
  char *v9; 
  __int64 v10; 
  signed __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  SourceBufferInfo *v19; 
  const unsigned __int8 *sourceBuf; 
  int GlyphFromUTF8; 
  int v22; 
  __int64 v23; 
  int numBytesConsumed[4]; 
  char goldname[128]; 

  this->m_pScrContext = scrContext;
  v5 = 0;
  if ( scrContext->m_parserPub.sourceBufferLookupLen )
  {
    while ( 1 )
    {
      v6 = &scrContext->m_parserPub.sourceBufferLookup[v5];
      buf = v6->buf;
      if ( buf )
      {
        if ( !I_strnicmp(buf, name, 0x7FFFFFFFui64) )
        {
          this->bufferIndex = v5;
          this->breakpointHead = NULL;
          this->builtinHead = NULL;
          this->numLines = 0;
          if ( v5 != 65534 )
          {
            if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2155, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
              __debugbreak();
            if ( this->bufferIndex >= this->m_pScrContext->m_parserPub.sourceBufferLookupLen )
            {
              LODWORD(v23) = this->bufferIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2157, ASSERT_TYPE_ASSERT, "(unsigned)( bufferIndex ) < (unsigned)( m_pScrContext->m_parserPub.sourceBufferLookupLen )", "bufferIndex doesn't index m_pScrContext->m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v23, this->m_pScrContext->m_parserPub.sourceBufferLookupLen) )
                __debugbreak();
            }
            v17 = 0;
            v18 = 0;
            v19 = &this->m_pScrContext->m_parserPub.sourceBufferLookup[this->bufferIndex];
            sourceBuf = (const unsigned __int8 *)v19->sourceBuf;
            this->numCols = 0;
            if ( v19->len > 0 )
            {
              do
              {
                if ( *sourceBuf )
                {
                  if ( *sourceBuf == 9 )
                  {
                    v17 += 4 - v17 % 4;
                  }
                  else
                  {
                    GlyphFromUTF8 = GetGlyphFromUTF8(sourceBuf, numBytesConsumed);
                    v22 = 1;
                    if ( GlyphFromUTF8 == -1 )
                      v22 = 3;
                    v17 += v22;
                  }
                }
                else
                {
                  if ( v17 > this->numCols )
                    this->numCols = v17;
                  ++this->numLines;
                  v17 = 0;
                }
                ++v18;
                ++sourceBuf;
              }
              while ( v18 < v19->len );
              if ( v18 && *(sourceBuf - 1) )
                ++this->numLines;
            }
          }
          return;
        }
        if ( Scr_UseSPGoldScript(name, goldname, 0x80ui64) )
          break;
      }
LABEL_18:
      scrContext = this->m_pScrContext;
      if ( ++v5 >= scrContext->m_parserPub.sourceBufferLookupLen )
        goto LABEL_19;
    }
    v8 = v6->buf;
    v9 = goldname;
    v10 = 0x7FFFFFFFi64;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v11 = v8 - goldname;
    do
    {
      v12 = (unsigned __int8)v9[v11];
      v13 = v10;
      v14 = (unsigned __int8)*v9++;
      --v10;
      if ( !v13 )
        break;
      if ( v12 != v14 )
      {
        v15 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v15 = v12;
        v12 = v15;
        v16 = v14 + 32;
        if ( (unsigned int)(v14 - 65) > 0x19 )
          v16 = v14;
        if ( v12 != v16 )
          goto LABEL_18;
      }
    }
    while ( v12 );
    this->bufferIndex = v5;
  }
  else
  {
LABEL_19:
    this->bufferIndex = 65534;
  }
  Scr_ScriptWindow::Init(this);
}

/*
==============
Scr_AbstractScriptList::Shutdown
==============
*/
void Scr_AbstractScriptList::Shutdown(Scr_AbstractScriptList *this)
{
  Scr_ScriptWindow **scriptWindows; 

  scriptWindows = this->scriptWindows;
  if ( scriptWindows )
  {
    ntl::nxheap::free(&s_debuggerHeap.m_heap, scriptWindows);
    this->scriptWindows = NULL;
  }
}

/*
==============
Scr_ScriptList::Shutdown
==============
*/
void Scr_ScriptList::Shutdown(Scr_ScriptList *this)
{
  int v2; 
  __int64 v3; 
  Scr_ScriptWindow **scriptWindows; 

  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2978, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext", -2i64) )
    __debugbreak();
  if ( !this->m_pScrContext->m_debuggerGlob.colBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 2979, ASSERT_TYPE_ASSERT, "( m_pScrContext->m_debuggerGlob.colBuf )", (const char *)&queryFormat, "m_pScrContext->m_debuggerGlob.colBuf") )
    __debugbreak();
  Mem_HunkDebug_Free(this->m_pScrContext->m_debuggerGlob.colBuf);
  v2 = 0;
  if ( this->numLines > 0 )
  {
    v3 = 0i64;
    do
    {
      Mem_HunkDebug_Free(this->scriptWindows[v3]);
      ++v2;
      ++v3;
    }
    while ( v2 < this->numLines );
  }
  scriptWindows = this->scriptWindows;
  if ( scriptWindows )
  {
    ntl::nxheap::free(&s_debuggerHeap.m_heap, scriptWindows);
    this->scriptWindows = NULL;
  }
}

/*
==============
Scr_ScriptWatch::Shutdown
==============
*/
void Scr_ScriptWatch::Shutdown(Scr_ScriptWatch *this)
{
  Scr_WatchElement_s *elementHead; 
  Scr_WatchElement_s *next; 

  Scr_ScriptWatch::UpdateBreakpoints(this, 0);
  Scr_UnbreakAllAssignmentPos(this->m_pScrContext);
  if ( this->elementHead )
  {
    do
    {
      elementHead = this->elementHead;
      next = elementHead->next;
      Scr_ScriptWatch::FreeWatchElement(this, elementHead);
      this->elementHead = next;
    }
    while ( next );
  }
}

/*
==============
Scr_ScriptWatch::SortHitBreakpointsTop
==============
*/
void Scr_ScriptWatch::SortHitBreakpointsTop(Scr_ScriptWatch *this)
{
  Scr_WatchElement_s **p_elementHead; 
  int v3; 
  Scr_WatchElement_s *i; 
  Scr_WatchElement_s *v5; 
  Scr_WatchElement_s **j; 
  scrContext_t *m_pScrContext; 
  _DebugMessage message; 
  _ScrSortHitBreakpointsTop v9; 

  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8543, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  p_elementHead = &this->elementHead;
  v3 = 0;
  this->m_pScrContext->m_debuggerGlob.atBreakpoint = 1;
  for ( i = this->elementHead; i; i = i->next )
  {
    if ( (*((_BYTE *)i + 135) & 4) == 0 )
      break;
    p_elementHead = &i->next;
    v3 = 1;
  }
  v5 = *p_elementHead;
  for ( j = p_elementHead; *j; v5 = *j )
  {
    if ( (*((_BYTE *)v5 + 135) & 4) != 0 )
    {
      v3 = 1;
      *j = v5->next;
      v5->next = *p_elementHead;
      *p_elementHead = v5;
      p_elementHead = &v5->next;
    }
    else
    {
      j = &v5->next;
    }
  }
  if ( v3 )
  {
    if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrSortHitBreakpointsTop::_ScrSortHitBreakpointsTop(&v9);
      m_pScrContext = this->m_pScrContext;
      message.scrreadfile = (const _ScrReadFile *)&v9;
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_SORT_HIT_BREAKPOINTS_TOP;
      Sys_WriteDebugSocketMessage(m_pScrContext, &message);
    }
  }
}

/*
==============
Scr_ScriptWatch::ToggleBreakpointInternal
==============
*/
void Scr_ScriptWatch::ToggleBreakpointInternal(Scr_ScriptWatch *this, Scr_WatchElement_s *element, _ScriptBreakpointType type)
{
  Scr_WatchElement_s *v4; 
  scrContext_t *m_pScrContext; 
  Scr_Breakpoint *breakpoint; 
  bool v8; 
  scrContext_t *v9; 
  ScrFuncDebugData *v10; 
  int v11; 
  scrContext_t *v12; 
  ScrFuncDebugData *m_pFuncTable; 
  int FuncTableIndex; 
  Scr_WatchElement_s *i; 
  _DebugMessage message; 
  _ScrToggleWatchBreakpointReply v17; 

  v4 = element;
  if ( (*((_BYTE *)element + 135) & 0x60) == 0 )
  {
    if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8403, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
      __debugbreak();
    if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrToggleWatchBreakpointReply::_ScrToggleWatchBreakpointReply(&v17);
      m_pScrContext = this->m_pScrContext;
      message.scrreadfile = (const _ScrReadFile *)&v17;
      v17.element = v4->id;
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_TOGGLE_WATCH_BREAKPOINT_REPLY;
      v17.has_element = 1;
      v17.has_type = 1;
      v17.type = type;
      Sys_WriteDebugSocketMessage(m_pScrContext, &message);
    }
    breakpoint = v4->breakpoint;
    if ( breakpoint )
    {
      switch ( v4->breakpointType )
      {
        case 4u:
          if ( type == SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_NORMAL )
          {
            v4->breakpointType = 5;
            return;
          }
          v8 = type == SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_DISABLED;
          goto LABEL_24;
        case 6u:
          if ( type == SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_BUILTIN_DISABLED )
          {
            v4->breakpointType = 7;
            v12 = this->m_pScrContext;
            m_pFuncTable = v12->m_vmDebugPub.m_pFuncTable;
            FuncTableIndex = Scr_GetFuncTableIndex(v12, breakpoint->builtinIndex);
            --m_pFuncTable[FuncTableIndex].breakpointCount;
          }
          break;
        case 7u:
          if ( type == SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_BUILTIN_NORMAL )
          {
            v4->breakpointType = 6;
            v9 = this->m_pScrContext;
            v10 = v9->m_vmDebugPub.m_pFuncTable;
            v11 = Scr_GetFuncTableIndex(v9, breakpoint->builtinIndex);
            ++v10[v11].breakpointCount;
          }
          break;
        default:
          if ( v4->breakpointType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8465, ASSERT_TYPE_ASSERT, "( ( element->breakpointType == SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_LINE_NORMAL ) )", "%s\n\t( element->breakpointType ) = %i", "( element->breakpointType == SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_LINE_NORMAL )", v4->breakpointType) )
            __debugbreak();
          if ( type == SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_DISABLED )
          {
            v4->breakpointType = 4;
            return;
          }
          v8 = type == SCRIPT_BREAKPOINT_TYPE__SCR_BREAKPOINT_NORMAL;
LABEL_24:
          if ( v8 )
            Scr_ScriptWatch::DeleteElementInternal(this, v4);
          return;
      }
    }
    else if ( (unsigned int)(type - 6) > 1 )
    {
      if ( v4->breakpointType == type )
      {
        v4 = Scr_ScriptWatch::RemoveBreakpoint(this, v4);
        Scr_FreeDebugExpr(this->m_pScrContext, &v4->expr);
        Scr_CompileText(this->m_pScrContext, v4->refText, &v4->expr);
      }
      else
      {
        if ( v4->parent )
          v4 = Scr_ScriptWatch::CloneElement(this, v4);
        v4->breakpointType = type;
      }
      for ( i = v4->parent; i; i = i->parent )
        v4 = i;
      Scr_ScriptWatch::EvaluateWatchElement(this, v4);
    }
  }
}

/*
==============
Scr_ScriptWindow::ToggleBreakpointInternal
==============
*/
void Scr_ScriptWindow::ToggleBreakpointInternal(Scr_ScriptWindow *this, Scr_WatchElement_s *element, bool force, bool overwrite, _ScriptBreakpointType breakpointType, bool user, const _ScrToggleBreakpointReply *request)
{
  scrContext_t *m_pScrContext; 
  _ScriptBreakpointType v12; 
  __int64 v13; 
  Scr_Breakpoint *breakpointHead; 
  Scr_Breakpoint **p_breakpointHead; 
  _BYTE *v16; 
  int v17; 
  int selectedLine; 
  Scr_WatchElement_s *v19; 
  Scr_WatchElement_s *v20; 
  unsigned int i; 
  const _ScrToggleBreakpointReply *v22; 
  bool v23; 
  bool v24; 
  Scr_WatchElement_s *v25; 
  bool v26; 
  Scr_Breakpoint **pBreakpoint; 
  unsigned int startSourcePos; 
  unsigned int endSourcePos; 
  Scr_WatchElement_s *start; 
  bool v31; 
  bool v32; 

  v32 = overwrite;
  v31 = force;
  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1103, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  if ( this->selectedLine < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1105, ASSERT_TYPE_ASSERT, "( selectedLine >= 0 )", (const char *)&queryFormat, "selectedLine >= 0") )
    __debugbreak();
  m_pScrContext = this->m_pScrContext;
  v12 = breakpointType;
  v13 = (__int64)&m_pScrContext->m_parserPub.sourceBufferLookup[this->bufferIndex];
  if ( (unsigned int)(breakpointType - 6) <= 1 )
  {
    Scr_ScriptWindow::GetSourcePos(this, (unsigned int *)&start, (unsigned int *)&breakpointType);
    Scr_ScriptWindow::SendBreakpointData(this, element, force, overwrite, v12, user, *(const char **)(v13 + 8), &this->builtinHead, (unsigned int)start, breakpointType, request);
    return;
  }
  if ( overwrite && element )
  {
    if ( !m_pScrContext->m_debuggerGlob.m_pDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1123, ASSERT_TYPE_ASSERT, "( m_pScrContext->m_debuggerGlob.m_pDynamic )", (const char *)&queryFormat, "m_pScrContext->m_debuggerGlob.m_pDynamic") )
      __debugbreak();
    element = Scr_ScriptWatch::DeleteElementInternal(&this->m_pScrContext->m_debuggerGlob.m_pDynamic->scriptWatch, element);
  }
  breakpointHead = this->breakpointHead;
  p_breakpointHead = &this->breakpointHead;
  v16 = *(_BYTE **)(v13 + 16);
  v17 = 0;
  if ( !breakpointHead )
    goto LABEL_19;
  selectedLine = this->selectedLine;
  while ( breakpointHead->line < selectedLine )
  {
    p_breakpointHead = &breakpointHead->next;
    breakpointHead = breakpointHead->next;
    if ( !breakpointHead )
      goto LABEL_19;
  }
  if ( breakpointHead->line != selectedLine )
    goto LABEL_19;
  if ( v31 )
  {
    if ( element == breakpointHead->element )
      element = element->next;
    Scr_FreeLineBreakpoint(this->m_pScrContext, breakpointHead, 1);
LABEL_19:
    v19 = NULL;
    if ( v31 )
      v19 = element;
    start = v19;
    while ( 1 )
    {
      if ( (__int64)&v16[-*(_QWORD *)(v13 + 16)] > *(int *)(v13 + 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1187, ASSERT_TYPE_ASSERT, "(s - sourceBufData->sourceBuf <= sourceBufData->len)", "%s\n\tUnable to find/set breakpoint. Probably a breakpoint set on obsolete data? Try clearing out game/pc/main/watch_window.txt.", "s - sourceBufData->sourceBuf <= sourceBufData->len") )
        __debugbreak();
      if ( v17 == this->selectedLine )
        break;
      for ( ; *v16; ++v16 )
        ;
      ++v16;
      ++v17;
    }
    if ( (__int64)&v16[-*(_QWORD *)(v13 + 16)] > 0xFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1190, ASSERT_TYPE_ASSERT, "( ( s - sourceBufData->sourceBuf ) <= 0xffffffff )", (const char *)&queryFormat, "( s - sourceBufData->sourceBuf ) <= UINT_MAX") )
      __debugbreak();
    for ( i = (_DWORD)v16 - *(_DWORD *)(v13 + 16); *v16; ++v16 )
      ;
    if ( (__int64)&v16[-*(_QWORD *)(v13 + 16)] > 0xFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1196, ASSERT_TYPE_ASSERT, "( ( s - sourceBufData->sourceBuf ) <= 0xffffffff )", (const char *)&queryFormat, "( s - sourceBufData->sourceBuf ) <= UINT_MAX") )
      __debugbreak();
    v22 = request;
    v23 = v31;
    endSourcePos = (_DWORD)v16 - *(_DWORD *)(v13 + 16);
    v24 = user;
    startSourcePos = i;
    v25 = start;
    pBreakpoint = p_breakpointHead;
    v26 = v32;
    if ( !Scr_ScriptWindow::SendBreakpointData(this, start, v31, v32, v12, user, *(const char **)(v13 + 8), pBreakpoint, startSourcePos, endSourcePos, request) )
      Scr_ScriptWindow::SendBreakpointData(this, v25, v23, v26, v12, v24, *(const char **)(v13 + 8), NULL, 0, 0, v22);
    return;
  }
  v20 = breakpointHead->element;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 1157, ASSERT_TYPE_ASSERT, "( breakpointElement )", (const char *)&queryFormat, "breakpointElement") )
    __debugbreak();
  if ( v20->breakpointType == v12 )
    Scr_FreeLineBreakpoint(this->m_pScrContext, breakpointHead, 1);
  else
    v20->breakpointType = v12;
}

/*
==============
Scr_ScriptWatch::ToggleExpandElement
==============
*/
void Scr_ScriptWatch::ToggleExpandElement(Scr_ScriptWatch *this, Scr_WatchElement_s *element)
{
  char v4; 
  char v5; 
  scrContext_t *m_pScrContext; 
  _DebugMessage message; 
  _ScrUpdateWatchHeight v8; 

  v4 = *((_BYTE *)element + 135) ^ (*((_BYTE *)element + 135) ^ (2 * ~(*((_BYTE *)element + 135) >> 1))) & 2;
  *((_BYTE *)element + 135) = v4;
  if ( (v4 & 2) == 0 || (element->objectType == VAR_UNDEFINED ? (v5 = v4 & 0xFD, *((_BYTE *)element + 135) = v5) : (Scr_ScriptWatch::EvaluateWatchChildren(this, element), v5 = *((_BYTE *)element + 135)), (v5 & 2) == 0) )
    Scr_FreeWatchElementChildrenStrict(this->m_pScrContext, element);
  if ( Sys_IsRemoteDebugServer(this->m_pScrContext) )
  {
    _DebugMessage::_DebugMessage(&message);
    _ScrUpdateWatchHeight::_ScrUpdateWatchHeight(&v8);
    m_pScrContext = this->m_pScrContext;
    message.scrreadfile = (const _ScrReadFile *)&v8;
    message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_UPDATE_WATCH_HEIGHT;
    Sys_WriteDebugSocketMessage(m_pScrContext, &message);
  }
}

/*
==============
Scr_ScriptWatch::ToggleWatchElementBreakpoint
==============
*/
void Scr_ScriptWatch::ToggleWatchElementBreakpoint(Scr_ScriptWatch *this, Scr_WatchElement_s *element, _ScriptBreakpointType type)
{
  unsigned __int8 v3; 
  Scr_WatchElement_s *v4; 
  Scr_WatchElement_s *i; 

  v3 = type;
  v4 = element;
  if ( element->breakpointType == type )
  {
    v4 = Scr_ScriptWatch::RemoveBreakpoint(this, element);
    Scr_FreeDebugExpr(this->m_pScrContext, &v4->expr);
    Scr_CompileText(this->m_pScrContext, v4->refText, &v4->expr);
  }
  else
  {
    if ( element->parent )
      v4 = Scr_ScriptWatch::CloneElement(this, element);
    v4->breakpointType = v3;
  }
  for ( i = v4->parent; i; i = i->parent )
    v4 = i;
  Scr_ScriptWatch::EvaluateWatchElement(this, v4);
}

/*
==============
Scr_ScriptWatch::UpdateBreakpoints
==============
*/
void Scr_ScriptWatch::UpdateBreakpoints(Scr_ScriptWatch *this, bool add)
{
  Scr_WatchElement_s *i; 
  Scr_WatchElement_s *elementHead; 
  scrContext_t *m_pScrContext; 
  Scr_OpcodeList_s *assignHead; 
  unsigned __int8 *codePos; 
  char v9; 

  if ( !this->m_pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8278, ASSERT_TYPE_ASSERT, "( m_pScrContext )", (const char *)&queryFormat, "m_pScrContext") )
    __debugbreak();
  for ( i = this->elementHead; i; i = i->next )
  {
    if ( ((i->breakpointType - 1) & 0xFD) == 0 )
    {
      if ( i->breakpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8285, ASSERT_TYPE_ASSERT, "( !element->breakpoint )", (const char *)&queryFormat, "!element->breakpoint") )
        __debugbreak();
      if ( !i->expr.exprHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 8299, ASSERT_TYPE_ASSERT, "( expr->exprHead )", (const char *)&queryFormat, "expr->exprHead") )
        __debugbreak();
      this->m_pScrContext->m_debuggerGlob.currentElement = i;
      this->m_pScrContext->m_debuggerGlob.removeId = 0;
      this->m_pScrContext->m_debuggerGlob.add = add;
      if ( (*((_BYTE *)i + 135) & 0x10) != 0 && i->value.type == VAR_POINTER )
        Scr_RefToObjectVariable(this->m_pScrContext, i->value.u.uintValue);
      Scr_RefScriptExpression(this->m_pScrContext, &i->expr);
    }
  }
  if ( add )
  {
    elementHead = this->elementHead;
    if ( elementHead )
    {
      while ( elementHead->breakpointType != 1 )
      {
        elementHead = elementHead->next;
        if ( !elementHead )
          goto LABEL_21;
      }
      m_pScrContext = this->m_pScrContext;
      if ( !m_pScrContext->m_debuggerGlob.assignBreakpointSet )
      {
        assignHead = m_pScrContext->m_debuggerGlob.assignHead;
        m_pScrContext->m_debuggerGlob.assignBreakpointSet = 1;
        for ( m_pScrContext->m_debuggerGlob.objectId = 0; assignHead; assignHead = assignHead->next )
        {
          codePos = (unsigned __int8 *)assignHead->codePos;
          if ( *assignHead->codePos == -94 )
          {
            v9 = -92;
          }
          else
          {
            Scr_AddBreakpoint(m_pScrContext, (const unsigned __int8 *)assignHead->codePos);
            v9 = -93;
          }
          *codePos = v9;
        }
      }
    }
    else
    {
LABEL_21:
      Scr_UnbreakAllAssignmentPos(this->m_pScrContext);
    }
  }
}

/*
==============
Scr_ScriptCallStack::UpdateStack
==============
*/
void Scr_ScriptCallStack::UpdateStack(Scr_ScriptCallStack *this, scrContext_t *scrContext)
{
  int function_count; 
  int v5; 
  int v6; 
  __int64 v7; 
  const char *breakpointCodePos; 
  char *ScriptPos; 
  BOOL v10; 
  function_frame_t *function_frame; 
  unsigned int PrevSourcePos; 
  const char *v13; 
  unsigned int i; 
  __int64 numLines; 
  Scr_SourcePos2_t *v16; 
  __int64 v17; 
  unsigned __int64 codeOffset; 
  unsigned int v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  const char *v22; 

  function_count = scrContext->m_vmPub.function_count;
  if ( !function_count )
  {
    this->numLines = 0;
    return;
  }
  v5 = 0;
  this->numLines = function_count + 1;
  v6 = scrContext->m_vmPub.function_count;
  if ( v6 >= 0 )
  {
    v7 = 0i64;
    while ( !v7 )
    {
      breakpointCodePos = scrContext->m_debuggerGlob.breakpointCodePos;
      if ( !breakpointCodePos )
      {
        function_frame = scrContext->m_vmPub.function_frame;
LABEL_10:
        ScriptPos = (char *)ScriptCodePos::GetScriptPos(&function_frame->fs.pos, scrContext);
        v10 = function_frame->fs.localId == 0;
        goto LABEL_11;
      }
      ScriptPos = (char *)(breakpointCodePos + 1);
      v10 = 0;
LABEL_11:
      if ( ScriptPos == &g_EndPos )
      {
        this->stack[v7].bufferIndex = -2;
        PrevSourcePos = 0;
      }
      else
      {
        v13 = ScriptPos - 1;
        this->stack[v7].bufferIndex = Scr_GetSourceBuffer(scrContext, ScriptPos - 1);
        PrevSourcePos = Scr_GetPrevSourcePos(scrContext, v13, v10);
      }
      this->stack[v7].sourcePos = PrevSourcePos;
      ++v5;
      v6 = scrContext->m_vmPub.function_count;
      ++v7;
      if ( v5 > v6 )
        goto LABEL_15;
    }
    function_frame = &scrContext->m_vmPub.function_frame_start[v6 - v5];
    goto LABEL_10;
  }
LABEL_15:
  for ( i = scrContext->m_debuggerGlob.m_debugCallStack[scrContext->m_vmPub.function_frame_start[1].fs.localId]; i; v16->sourcePos = v19 )
  {
    numLines = this->numLines;
    if ( (unsigned int)numLines >= 0x81 )
      break;
    this->numLines = numLines + 1;
    v16 = &this->stack[numLines];
    if ( i == 1 )
    {
      v16->bufferIndex = -1;
      this->stack[numLines].sourcePos = 0;
      return;
    }
    v17 = i;
    codeOffset = scrContext->m_debuggerGlob.m_debugCallStackEntry[v17].codeOffset;
    i = scrContext->m_debuggerGlob.m_debugCallStackEntry2[v17].next;
    if ( (_DWORD)codeOffset == -1 )
    {
      v16->bufferIndex = -2;
      v19 = 0;
    }
    else
    {
      v20 = codeOffset >> 1;
      v21 = scrContext->m_debuggerGlob.m_debugCallStackEntry[v17].codeOffset & 1;
      v22 = &scrContext->m_varPub.programBuffer[v20];
      if ( !Scr_IsInOpcodeMemory(scrContext, v22) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugger.cpp", 3433, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePos )") )
        __debugbreak();
      v16->bufferIndex = Scr_GetSourceBuffer(scrContext, v22 - 1);
      v19 = Scr_GetPrevSourcePos(scrContext, v22 - 1, v21);
    }
  }
}

