/*
==============
Scr_ErrorWithDialogMessage
==============
*/

void __fastcall Scr_ErrorWithDialogMessage(scrContext_t *scrContext, const char *error, const char *dialog_error)
{
  ?Scr_ErrorWithDialogMessage@@YAXAEAUscrContext_t@@PEBD1@Z(scrContext, error, dialog_error);
}

/*
==============
Scr_ExecThreadCallback_ScrStringWithErrorMsg
==============
*/

void __fastcall Scr_ExecThreadCallback_ScrStringWithErrorMsg(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  ?Scr_ExecThreadCallback_ScrStringWithErrorMsg@@YAXAEAUscrContext_t@@PEBXPEAX@Z(scrContext, userData, outReturnValue);
}

/*
==============
Scr_SetDynamicEntityField
==============
*/

void __fastcall Scr_SetDynamicEntityField(scrContext_t *scrContext, LocalClientNum_t localClientNum, int entnum, EntityClass classnum, unsigned int index)
{
  ?Scr_SetDynamicEntityField@@YAXAEAUscrContext_t@@W4LocalClientNum_t@@HW4EntityClass@@I@Z(scrContext, localClientNum, entnum, classnum, index);
}

/*
==============
Scr_GetRunThreadsTime
==============
*/

double __fastcall Scr_GetRunThreadsTime(ScriptInstanceType inst)
{
  double result; 

  *(float *)&result = ?Scr_GetRunThreadsTime@@YAMW4ScriptInstanceType@@@Z(inst);
  return result;
}

/*
==============
Scr_Abort
==============
*/

void __fastcall Scr_Abort(scrContext_t *scrContext)
{
  ?Scr_Abort@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetFloat
==============
*/

double __fastcall Scr_GetFloat(scrContext_t *scrContext, unsigned int index)
{
  double result; 

  *(float *)&result = ?Scr_GetFloat@@YAMAEAUscrContext_t@@I@Z(scrContext, index);
  return result;
}

/*
==============
Scr_GetFunc
==============
*/

int __fastcall Scr_GetFunc(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetFunc@@YAHAEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_GetConstIString
==============
*/

scr_string_t __fastcall Scr_GetConstIString(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetConstIString@@YA?AW4scr_string_t@@AEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_AddFunc
==============
*/

void __fastcall Scr_AddFunc(scrContext_t *scrContext, int value)
{
  ?Scr_AddFunc@@YAXAEAUscrContext_t@@H@Z(scrContext, value);
}

/*
==============
Scr_SetRecordScriptPlace
==============
*/

void __fastcall Scr_SetRecordScriptPlace(scrContext_t *scrContext, int on)
{
  ?Scr_SetRecordScriptPlace@@YAXAEAUscrContext_t@@H@Z(scrContext, on);
}

/*
==============
Scr_GetOpcodeName
==============
*/

const char *__fastcall Scr_GetOpcodeName(int opcode)
{
  return ?Scr_GetOpcodeName@@YAPEBDH@Z(opcode);
}

/*
==============
Scr_GetConstString
==============
*/

scr_string_t __fastcall Scr_GetConstString(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetConstString@@YA?AW4scr_string_t@@AEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_AddVector
==============
*/

void __fastcall Scr_AddVector(scrContext_t *scrContext, const float *value)
{
  ?Scr_AddVector@@YAXAEAUscrContext_t@@PEBM@Z(scrContext, value);
}

/*
==============
Scr_NotifyLevel
==============
*/

void __fastcall Scr_NotifyLevel(scrContext_t *scrContext, scr_string_t stringValue, unsigned int paramcount)
{
  ?Scr_NotifyLevel@@YAXAEAUscrContext_t@@W4scr_string_t@@I@Z(scrContext, stringValue, paramcount);
}

/*
==============
Scr_AddEntityNum
==============
*/

void __fastcall Scr_AddEntityNum(scrContext_t *scrContext, int entnum, EntityClass classnum)
{
  ?Scr_AddEntityNum@@YAXAEAUscrContext_t@@HW4EntityClass@@@Z(scrContext, entnum, classnum);
}

/*
==============
Scr_CalcScriptProfileTrackServerTime
==============
*/

void __fastcall Scr_CalcScriptProfileTrackServerTime(scrContext_t *scrContext)
{
  ?Scr_CalcScriptProfileTrackServerTime@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ErrorOnObjectsOrVariablesExceededDeveloperLimits
==============
*/

void __fastcall Scr_ErrorOnObjectsOrVariablesExceededDeveloperLimits(scrContext_t *scrContext)
{
  ?Scr_ErrorOnObjectsOrVariablesExceededDeveloperLimits@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
VM_ArchiveStack
==============
*/

VariableStackBuffer *__fastcall VM_ArchiveStack(scrContext_t *scrContext, VariableValue *top, ScriptCodePos codePos)
{
  return ?VM_ArchiveStack@@YAPEAUVariableStackBuffer@@AEAUscrContext_t@@PEAUVariableValue@@UScriptCodePos@@@Z(scrContext, top, codePos);
}

/*
==============
Scr_ProfileBuiltinUpdate
==============
*/

void __fastcall Scr_ProfileBuiltinUpdate(scrContext_t *scrContext)
{
  ?Scr_ProfileBuiltinUpdate@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_DoScriptStackTraceToRecord
==============
*/

void __fastcall Scr_DoScriptStackTraceToRecord(const scrContext_t *scrContext, ScriptStackTraceRecord *record)
{
  ?Scr_DoScriptStackTraceToRecord@@YAXAEBUscrContext_t@@PEAUScriptStackTraceRecord@@@Z(scrContext, record);
}

/*
==============
Scr_GetNextCodepos
==============
*/

const char *__fastcall Scr_GetNextCodepos(scrContext_t *scrContext, VariableValue *top, const char *pos, int opcode, int mode, unsigned int *localId, int *isReturnPos)
{
  return ?Scr_GetNextCodepos@@YAPEBDAEAUscrContext_t@@PEAUVariableValue@@PEBDHHPEAIPEAH@Z(scrContext, top, pos, opcode, mode, localId, isReturnPos);
}

/*
==============
Scr_MakeArray
==============
*/

void __fastcall Scr_MakeArray(scrContext_t *scrContext)
{
  ?Scr_MakeArray@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
SetEntityFieldValue
==============
*/

bool __fastcall SetEntityFieldValue(scrContext_t *scrContext, EntityClass classnum, int entnum, LocalClientNum_t clientnum, int offset, VariableValue *value)
{
  return ?SetEntityFieldValue@@YA_NAEAUscrContext_t@@W4EntityClass@@HW4LocalClientNum_t@@HPEAUVariableValue@@@Z(scrContext, classnum, entnum, clientnum, offset, value);
}

/*
==============
Scr_GetLastScriptPlace
==============
*/

void __fastcall Scr_GetLastScriptPlace(const scrContext_t *scrContext, int *line, const char **filename)
{
  ?Scr_GetLastScriptPlace@@YAXAEBUscrContext_t@@PEAHPEAPEBD@Z(scrContext, line, filename);
}

/*
==============
Scr_PrintScriptCallstack
==============
*/

void __fastcall Scr_PrintScriptCallstack(scrContext_t *scrContext)
{
  ?Scr_PrintScriptCallstack@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_NeverTerminalError
==============
*/

void __fastcall Scr_NeverTerminalError(ComErrorCode uniqueErrorCode, scrContext_t *scrContext, const char *error)
{
  ?Scr_NeverTerminalError@@YAXW4ComErrorCode@@AEAUscrContext_t@@PEBD@Z(uniqueErrorCode, scrContext, error);
}

/*
==============
Scr_GetVariable
==============
*/

VariableValue *__fastcall Scr_GetVariable(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetVariable@@YAPEAUVariableValue@@AEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_ProfileUpdate
==============
*/

void __fastcall Scr_ProfileUpdate(scrContext_t *scrContext)
{
  ?Scr_ProfileUpdate@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Init
==============
*/

void __fastcall Scr_Init(scrContext_t *scrContext)
{
  ?Scr_Init@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_DoProfile
==============
*/

void __fastcall Scr_DoProfile(scrContext_t *scrContext, float minTime)
{
  ?Scr_DoProfile@@YAXAEAUscrContext_t@@M@Z(scrContext, minTime);
}

/*
==============
Scr_AddExecThreadInternal
==============
*/

void __fastcall Scr_AddExecThreadInternal(scrContext_t *scrContext, int handle, unsigned int objId, unsigned int paramcount)
{
  ?Scr_AddExecThreadInternal@@YAXAEAUscrContext_t@@HII@Z(scrContext, handle, objId, paramcount);
}

/*
==============
Scr_GetStringIncludeNull
==============
*/

const char *__fastcall Scr_GetStringIncludeNull(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetStringIncludeNull@@YAPEBDAEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_AddInt
==============
*/

void __fastcall Scr_AddInt(scrContext_t *scrContext, int value)
{
  ?Scr_AddInt@@YAXAEAUscrContext_t@@H@Z(scrContext, value);
}

/*
==============
Scr_GetEntityRef
==============
*/

scr_entref_t __fastcall Scr_GetEntityRef(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetEntityRef@@YA?AUscr_entref_t@@AEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_GetConstLowercaseString
==============
*/

scr_string_t __fastcall Scr_GetConstLowercaseString(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetConstLowercaseString@@YA?AW4scr_string_t@@AEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_AddValue
==============
*/

void __fastcall Scr_AddValue(scrContext_t *scrContext, VariableValue *value)
{
  ?Scr_AddValue@@YAXAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
Scr_Error
==============
*/

void __fastcall Scr_Error(ComErrorCode uniqueErrorCode, scrContext_t *scrContext, const char *error)
{
  ?Scr_Error@@YAXW4ComErrorCode@@AEAUscrContext_t@@PEBD@Z(uniqueErrorCode, scrContext, error);
}

/*
==============
Scr_CheckIfObjectsOrVariablesExceededDeveloperLimits
==============
*/

bool __fastcall Scr_CheckIfObjectsOrVariablesExceededDeveloperLimits(const scrContext_t *scrContext)
{
  return ?Scr_CheckIfObjectsOrVariablesExceededDeveloperLimits@@YA_NAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Scr_GetScriptStackTraceFromRecordForCSV
==============
*/

int __fastcall Scr_Scr_GetScriptStackTraceFromRecordForCSV(const scrContext_t *scrContext, char *msg, int msgSize, const ScriptStackTraceRecord *record)
{
  return ?Scr_Scr_GetScriptStackTraceFromRecordForCSV@@YAHAEBUscrContext_t@@PEADHPEBUScriptStackTraceRecord@@@Z(scrContext, msg, msgSize, record);
}

/*
==============
Scr_GetObject
==============
*/

unsigned int __fastcall Scr_GetObject(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetObject@@YAIAEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_GetConstStringIncludeNull
==============
*/

scr_string_t __fastcall Scr_GetConstStringIncludeNull(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetConstStringIncludeNull@@YA?AW4scr_string_t@@AEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_GetVector
==============
*/

void __fastcall Scr_GetVector(scrContext_t *scrContext, unsigned int index, vec3_t *vectorValue)
{
  ?Scr_GetVector@@YAXAEAUscrContext_t@@IAEATvec3_t@@@Z(scrContext, index, vectorValue);
}

/*
==============
Scr_AddStruct
==============
*/

void __fastcall Scr_AddStruct(scrContext_t *scrContext)
{
  ?Scr_AddStruct@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GScr_DumpOpcodePairs
==============
*/

void GScr_DumpOpcodePairs(void)
{
  ?GScr_DumpOpcodePairs@@YAXXZ();
}

/*
==============
Scr_ExecThread
==============
*/

unsigned int __fastcall Scr_ExecThread(scrContext_t *scrContext, int handle, unsigned int paramcount)
{
  return ?Scr_ExecThread@@YAIAEAUscrContext_t@@HI@Z(scrContext, handle, paramcount);
}

/*
==============
Scr_InitSystem
==============
*/

void __fastcall Scr_InitSystem(scrContext_t *scrContext, const int sys, const ScrThreadMode threadMode, const int frameDuration, const int serverFrameDuration)
{
  ?Scr_InitSystem@@YAXAEAUscrContext_t@@HW4ScrThreadMode@@HH@Z(scrContext, sys, threadMode, frameDuration, serverFrameDuration);
}

/*
==============
Scr_GetInt
==============
*/

int __fastcall Scr_GetInt(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetInt@@YAHAEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_GetDebugString
==============
*/

const char *__fastcall Scr_GetDebugString(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetDebugString@@YAPEBDAEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_PrintProfileBuiltinTimes
==============
*/

bool __fastcall Scr_PrintProfileBuiltinTimes(scrContext_t *scrContext, float minTime)
{
  return ?Scr_PrintProfileBuiltinTimes@@YA_NAEAUscrContext_t@@M@Z(scrContext, minTime);
}

/*
==============
Scr_FreeThread
==============
*/

void __fastcall Scr_FreeThread(scrContext_t *scrContext, unsigned int handle)
{
  ?Scr_FreeThread@@YAXAEAUscrContext_t@@I@Z(scrContext, handle);
}

/*
==============
GetBuiltInName
==============
*/

const char *__fastcall GetBuiltInName(const scrContext_t *scrContext, unsigned int builtInIndex)
{
  return ?GetBuiltInName@@YAPEBDAEBUscrContext_t@@I@Z(scrContext, builtInIndex);
}

/*
==============
Scr_AddFloat
==============
*/

void __fastcall Scr_AddFloat(scrContext_t *scrContext, float value)
{
  ?Scr_AddFloat@@YAXAEAUscrContext_t@@M@Z(scrContext, value);
}

/*
==============
VM_Execute
==============
*/

unsigned int __fastcall VM_Execute(scrContext_t *scrContext)
{
  return ?VM_Execute@@YAIAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ExecThreadCallback_Func
==============
*/

void __fastcall Scr_ExecThreadCallback_Func(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  ?Scr_ExecThreadCallback_Func@@YAXAEAUscrContext_t@@PEBXPEAX@Z(scrContext, userData, outReturnValue);
}

/*
==============
Scr_ClearOutParams
==============
*/

void __fastcall Scr_ClearOutParams(scrContext_t *scrContext)
{
  ?Scr_ClearOutParams@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ParamError
==============
*/

void __fastcall Scr_ParamError(ComErrorCode uniqueErrorCode, scrContext_t *scrContext, unsigned int index, const char *error)
{
  ?Scr_ParamError@@YAXW4ComErrorCode@@AEAUscrContext_t@@IPEBD@Z(uniqueErrorCode, scrContext, index, error);
}

/*
==============
Scr_GetObjectOrigin
==============
*/

int __fastcall Scr_GetObjectOrigin(scrContext_t *scrContext, unsigned int objectId, vec3_t *origin)
{
  return ?Scr_GetObjectOrigin@@YAHAEAUscrContext_t@@IAEATvec3_t@@@Z(scrContext, objectId, origin);
}

/*
==============
Scr_GetString
==============
*/

const char *__fastcall Scr_GetString(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetString@@YAPEBDAEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_GetObjectArray
==============
*/

int __fastcall Scr_GetObjectArray(const scrContext_t *scrContext, unsigned int arrayObjectId, unsigned int bufferSize, unsigned int *buffer, unsigned int *failureIndex, VariableType *failureType)
{
  return ?Scr_GetObjectArray@@YAHAEBUscrContext_t@@IIPEAI1PEAW4VariableType@@@Z(scrContext, arrayObjectId, bufferSize, buffer, failureIndex, failureType);
}

/*
==============
Scr_ExecThreadCallback_ScrString
==============
*/

void __fastcall Scr_ExecThreadCallback_ScrString(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  ?Scr_ExecThreadCallback_ScrString@@YAXAEAUscrContext_t@@PEBXPEAX@Z(scrContext, userData, outReturnValue);
}

/*
==============
Scr_AddAnim
==============
*/

void __fastcall Scr_AddAnim(scrContext_t *scrContext, scr_anim_t value)
{
  ?Scr_AddAnim@@YAXAEAUscrContext_t@@Uscr_anim_t@@@Z(scrContext, value);
}

/*
==============
Scr_AddStructField
==============
*/

void __fastcall Scr_AddStructField(scrContext_t *scrContext, unsigned int key)
{
  ?Scr_AddStructField@@YAXAEAUscrContext_t@@I@Z(scrContext, key);
}

/*
==============
Scr_ErrorInternal
==============
*/

void __fastcall Scr_ErrorInternal(scrContext_t *scrContext)
{
  ?Scr_ErrorInternal@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_AddConstString
==============
*/

void __fastcall Scr_AddConstString(scrContext_t *scrContext, scr_string_t value)
{
  ?Scr_AddConstString@@YAXAEAUscrContext_t@@W4scr_string_t@@@Z(scrContext, value);
}

/*
==============
Scr_ExecEntThreadNumWithReturnValue
==============
*/

unsigned int __fastcall Scr_ExecEntThreadNumWithReturnValue(scrContext_t *scrContext, LocalClientNum_t localClientNum, int entnum, EntityClass classnum, int handle, unsigned int paramcount, void (__fastcall *callback)(scrContext_t *, const void *, void *), const void *cbUserData, void *outReturnValue)
{
  return ?Scr_ExecEntThreadNumWithReturnValue@@YAIAEAUscrContext_t@@W4LocalClientNum_t@@HW4EntityClass@@HIP6AX0PEBXPEAX@Z34@Z(scrContext, localClientNum, entnum, classnum, handle, paramcount, callback, cbUserData, outReturnValue);
}

/*
==============
Scr_AddIString
==============
*/

void __fastcall Scr_AddIString(scrContext_t *scrContext, const char *value)
{
  ?Scr_AddIString@@YAXAEAUscrContext_t@@PEBD@Z(scrContext, value);
}

/*
==============
Scr_ExecThreadCallback_VariableValue
==============
*/

void __fastcall Scr_ExecThreadCallback_VariableValue(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  ?Scr_ExecThreadCallback_VariableValue@@YAXAEAUscrContext_t@@PEBXPEAX@Z(scrContext, userData, outReturnValue);
}

/*
==============
GetEntityFieldValue
==============
*/

VariableValue *__fastcall GetEntityFieldValue(VariableValue *result, scrContext_t *scrContext, EntityClass classnum, unsigned int entnum, LocalClientNum_t localClientNum, int offset)
{
  return ?GetEntityFieldValue@@YA?AUVariableValue@@AEAUscrContext_t@@W4EntityClass@@IW4LocalClientNum_t@@H@Z(result, scrContext, classnum, entnum, localClientNum, offset);
}

/*
==============
Scr_ResetTimeout
==============
*/

void __fastcall Scr_ResetTimeout(scrContext_t *scrContext)
{
  ?Scr_ResetTimeout@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GetDummyObject
==============
*/

unsigned int __fastcall GetDummyObject(scrContext_t *scrContext)
{
  return ?GetDummyObject@@YAIAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetThreadPos
==============
*/

const char *__fastcall Scr_GetThreadPos(scrContext_t *scrContext, unsigned int localId)
{
  return ?Scr_GetThreadPos@@YAPEBDAEAUscrContext_t@@I@Z(scrContext, localId);
}

/*
==============
SetEntityFieldValueBinary
==============
*/

bool __fastcall SetEntityFieldValueBinary(scrContext_t *scrContext, int entnum, int offset, VariableValue *value)
{
  return ?SetEntityFieldValueBinary@@YA_NAEAUscrContext_t@@HHPEAUVariableValue@@@Z(scrContext, entnum, offset, value);
}

/*
==============
Scr_NotifyNum
==============
*/

void __fastcall Scr_NotifyNum(scrContext_t *scrContext, int entnum, EntityClass classnum, scr_string_t stringValue, unsigned int paramcount, const LocalClientNum_t localClientNum)
{
  ?Scr_NotifyNum@@YAXAEAUscrContext_t@@HW4EntityClass@@W4scr_string_t@@IW4LocalClientNum_t@@@Z(scrContext, entnum, classnum, stringValue, paramcount, localClientNum);
}

/*
==============
Scr_GetBuiltinTime
==============
*/

double __fastcall Scr_GetBuiltinTime(ScriptInstanceType inst)
{
  double result; 

  *(float *)&result = ?Scr_GetBuiltinTime@@YAMW4ScriptInstanceType@@@Z(inst);
  return result;
}

/*
==============
Scr_InitUsageAnalysis
==============
*/

void __fastcall Scr_InitUsageAnalysis(scrContext_t *scrContext)
{
  ?Scr_InitUsageAnalysis@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ResetPerfTimes
==============
*/

void __fastcall Scr_ResetPerfTimes(ScriptInstanceType inst)
{
  ?Scr_ResetPerfTimes@@YAXW4ScriptInstanceType@@@Z(inst);
}

/*
==============
Scr_VM_PrintCallstack
==============
*/

void __fastcall Scr_VM_PrintCallstack(const scrContext_t *scrContext)
{
  ?Scr_VM_PrintCallstack@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_IsSystemActive
==============
*/

int __fastcall Scr_IsSystemActive(const scrContext_t *scrContext, unsigned __int8 sys)
{
  return ?Scr_IsSystemActive@@YAHAEBUscrContext_t@@E@Z(scrContext, sys);
}

/*
==============
Scr_IsTrue
==============
*/

int __fastcall Scr_IsTrue(scrContext_t *scrContext, VariableValue *value)
{
  return ?Scr_IsTrue@@YAHAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
Scr_AddString
==============
*/

void __fastcall Scr_AddString(scrContext_t *scrContext, const char *value)
{
  ?Scr_AddString@@YAXAEAUscrContext_t@@PEBD@Z(scrContext, value);
}

/*
==============
Scr_ObjectError
==============
*/

void __fastcall Scr_ObjectError(ComErrorCode uniqueErrorCode, scrContext_t *scrContext, const char *error)
{
  ?Scr_ObjectError@@YAXW4ComErrorCode@@AEAUscrContext_t@@PEBD@Z(uniqueErrorCode, scrContext, error);
}

/*
==============
Scr_TerminalError
==============
*/

void __fastcall Scr_TerminalError(ComErrorCode uniqueErrorCode, scrContext_t *scrContext, const char *error)
{
  ?Scr_TerminalError@@YAXW4ComErrorCode@@AEAUscrContext_t@@PEBD@Z(uniqueErrorCode, scrContext, error);
}

/*
==============
Scr_GetEntFieldTime
==============
*/

double __fastcall Scr_GetEntFieldTime(ScriptInstanceType inst)
{
  double result; 

  *(float *)&result = ?Scr_GetEntFieldTime@@YAMW4ScriptInstanceType@@@Z(inst);
  return result;
}

/*
==============
Scr_AddUndefined
==============
*/

void __fastcall Scr_AddUndefined(scrContext_t *scrContext)
{
  ?Scr_AddUndefined@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetNumParam
==============
*/

unsigned int __fastcall Scr_GetNumParam(const scrContext_t *scrContext)
{
  return ?Scr_GetNumParam@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
GetEntityFieldValue_Out
==============
*/

void __fastcall GetEntityFieldValue_Out(scrContext_t *scrContext, EntityClass classnum, unsigned int entnum, LocalClientNum_t localClientNum, int offset, VariableValue *out)
{
  ?GetEntityFieldValue_Out@@YAXAEAUscrContext_t@@W4EntityClass@@IW4LocalClientNum_t@@HPEAUVariableValue@@@Z(scrContext, classnum, entnum, localClientNum, offset, out);
}

/*
==============
Scr_DoProfileBuiltin
==============
*/

void __fastcall Scr_DoProfileBuiltin(scrContext_t *scrContext, float minTime)
{
  ?Scr_DoProfileBuiltin@@YAXAEAUscrContext_t@@M@Z(scrContext, minTime);
}

/*
==============
RuntimeError
==============
*/

void __fastcall RuntimeError(scrContext_t *scrContext, const ScriptCodePos scriptCodePos, unsigned int index, const char *msg, const char *dialogMessage)
{
  ?RuntimeError@@YAXAEAUscrContext_t@@UScriptCodePos@@IPEBD2@Z(scrContext, scriptCodePos, index, msg, dialogMessage);
}

/*
==============
Scr_ExecThreadCallback_FloatArray
==============
*/

void __fastcall Scr_ExecThreadCallback_FloatArray(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  ?Scr_ExecThreadCallback_FloatArray@@YAXAEAUscrContext_t@@PEBXPEAX@Z(scrContext, userData, outReturnValue);
}

/*
==============
Scr_GetScriptStackTraceFromRecord
==============
*/

int __fastcall Scr_GetScriptStackTraceFromRecord(const scrContext_t *scrContext, char *msg, int msgSize, const ScriptStackTraceRecord *record, bool bFileNline, bool bSource, bool bPosOnLine)
{
  return ?Scr_GetScriptStackTraceFromRecord@@YAHAEBUscrContext_t@@PEADHPEBUScriptStackTraceRecord@@_N33@Z(scrContext, msg, msgSize, record, bFileNline, bSource, bPosOnLine);
}

/*
==============
GetDummyFieldValue
==============
*/

unsigned int __fastcall GetDummyFieldValue(scrContext_t *scrContext)
{
  return ?GetDummyFieldValue@@YAIAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ShutdownSystem
==============
*/

void __fastcall Scr_ShutdownSystem(scrContext_t *scrContext, unsigned __int8 sys, bool freeGameVariable, bool freeObjects)
{
  ?Scr_ShutdownSystem@@YAXAEAUscrContext_t@@E_N1@Z(scrContext, sys, freeGameVariable, freeObjects);
}

/*
==============
Scr_ExecThreadWithReturnValue
==============
*/

unsigned int __fastcall Scr_ExecThreadWithReturnValue(scrContext_t *scrContext, int handle, unsigned int paramcount, void (__fastcall *retCallback)(scrContext_t *, const void *, void *), const void *cbUserData, void *outReturnValue)
{
  return ?Scr_ExecThreadWithReturnValue@@YAIAEAUscrContext_t@@HIP6AX0PEBXPEAX@Z12@Z(scrContext, handle, paramcount, retCallback, cbUserData, outReturnValue);
}

/*
==============
Scr_GetAnimTree
==============
*/

scr_animtree_t __fastcall Scr_GetAnimTree(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetAnimTree@@YA?AUscr_animtree_t@@AEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_DevPrintCallstack
==============
*/

void Scr_DevPrintCallstack(void)
{
  ?Scr_DevPrintCallstack@@YAXXZ();
}

/*
==============
Scr_ExecThreadInternal
==============
*/

unsigned int __fastcall Scr_ExecThreadInternal(scrContext_t *scrContext, int handle, unsigned int objId, unsigned int paramcount, void (__fastcall *callback)(scrContext_t *, const void *, void *), const void *cbUserData, void *outReturnValue)
{
  return ?Scr_ExecThreadInternal@@YAIAEAUscrContext_t@@HIIP6AX0PEBXPEAX@Z12@Z(scrContext, handle, objId, paramcount, callback, cbUserData, outReturnValue);
}

/*
==============
Scr_ExecCode
==============
*/

void __fastcall Scr_ExecCode(scrContext_t *scrContext, const char *pos, unsigned int localId)
{
  ?Scr_ExecCode@@YAXAEAUscrContext_t@@PEBDI@Z(scrContext, pos, localId);
}

/*
==============
Scr_StackClear
==============
*/

void __fastcall Scr_StackClear(scrContext_t *scrContext)
{
  ?Scr_StackClear@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_MakeStruct
==============
*/

void __fastcall Scr_MakeStruct(scrContext_t *scrContext)
{
  ?Scr_MakeStruct@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_IncTime
==============
*/

void __fastcall Scr_IncTime(scrContext_t *scrContext)
{
  ?Scr_IncTime@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetType
==============
*/

VariableType __fastcall Scr_GetType(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetType@@YA?AW4VariableType@@AEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_GetAnim
==============
*/

scr_anim_t __fastcall Scr_GetAnim(scrContext_t *scrContext, unsigned int index, XAnimTree *tree)
{
  return ?Scr_GetAnim@@YA?AUscr_anim_t@@AEAUscrContext_t@@IPEAUXAnimTree@@@Z(scrContext, index, tree);
}

/*
==============
Scr_GetFloatOptional
==============
*/

double __fastcall Scr_GetFloatOptional(scrContext_t *scrContext, unsigned int index, float defaultValue)
{
  double result; 

  *(float *)&result = ?Scr_GetFloatOptional@@YAMAEAUscrContext_t@@IM@Z(scrContext, index, defaultValue);
  return result;
}

/*
==============
VM_Notify
==============
*/

void __fastcall VM_Notify(scrContext_t *scrContext, unsigned int notifyListOwnerId, scr_string_t stringValue, VariableValue *top)
{
  ?VM_Notify@@YAXAEAUscrContext_t@@IW4scr_string_t@@PEAUVariableValue@@@Z(scrContext, notifyListOwnerId, stringValue, top);
}

/*
==============
VM_Endon
==============
*/

void __fastcall VM_Endon(scrContext_t *scrContext, unsigned int selfId, unsigned int localId, scr_string_t stringValue)
{
  ?VM_Endon@@YAXAEAUscrContext_t@@IIW4scr_string_t@@@Z(scrContext, selfId, localId, stringValue);
}

/*
==============
Scr_GetNumScriptThreads
==============
*/

unsigned int __fastcall Scr_GetNumScriptThreads(const scrContext_t *scrContext)
{
  return ?Scr_GetNumScriptThreads@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_CancelNotifyList
==============
*/

void __fastcall Scr_CancelNotifyList(scrContext_t *scrContext, unsigned int notifyListOwnerId)
{
  ?Scr_CancelNotifyList@@YAXAEAUscrContext_t@@I@Z(scrContext, notifyListOwnerId);
}

/*
==============
Scr_AddBool
==============
*/

void __fastcall Scr_AddBool(scrContext_t *scrContext, int value)
{
  ?Scr_AddBool@@YAXAEAUscrContext_t@@H@Z(scrContext, value);
}

/*
==============
Scr_AddObject
==============
*/

void __fastcall Scr_AddObject(scrContext_t *scrContext, unsigned int id)
{
  ?Scr_AddObject@@YAXAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_ExecThreadCallback_Unsigned
==============
*/

void __fastcall Scr_ExecThreadCallback_Unsigned(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  ?Scr_ExecThreadCallback_Unsigned@@YAXAEAUscrContext_t@@PEBXPEAX@Z(scrContext, userData, outReturnValue);
}

/*
==============
Scr_ClearErrorMessage
==============
*/

void __fastcall Scr_ClearErrorMessage(scrContext_t *scrContext)
{
  ?Scr_ClearErrorMessage@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
VM_CancelNotify
==============
*/

void __fastcall VM_CancelNotify(scrContext_t *scrContext, unsigned int notifyListOwnerId, unsigned int startLocalId)
{
  ?VM_CancelNotify@@YAXAEAUscrContext_t@@II@Z(scrContext, notifyListOwnerId, startLocalId);
}

/*
==============
Scr_GetTypeName
==============
*/

const char *__fastcall Scr_GetTypeName(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetTypeName@@YAPEBDAEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_GetIString
==============
*/

const char *__fastcall Scr_GetIString(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetIString@@YAPEBDAEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_SetRecordErrors
==============
*/

void __fastcall Scr_SetRecordErrors(const bool recordErrors)
{
  ?Scr_SetRecordErrors@@YAX_N@Z(recordErrors);
}

/*
==============
Scr_GetReturnPos
==============
*/

const char *__fastcall Scr_GetReturnPos(const scrContext_t *scrContext, unsigned int *localId)
{
  return ?Scr_GetReturnPos@@YAPEBDAEBUscrContext_t@@PEAI@Z(scrContext, localId);
}

/*
==============
Scr_AddExecThread
==============
*/

void __fastcall Scr_AddExecThread(scrContext_t *scrContext, int handle, unsigned int paramcount)
{
  ?Scr_AddExecThread@@YAXAEAUscrContext_t@@HI@Z(scrContext, handle, paramcount);
}

/*
==============
Scr_Cleanup
==============
*/

void __fastcall Scr_Cleanup(scrContext_t *scrContext)
{
  ?Scr_Cleanup@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_VM_ComErrorCleanup
==============
*/

void __fastcall Scr_VM_ComErrorCleanup(scrContext_t *scrContext)
{
  ?Scr_VM_ComErrorCleanup@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_SetStructField
==============
*/

void __fastcall Scr_SetStructField(scrContext_t *scrContext, unsigned int structId, unsigned int index)
{
  ?Scr_SetStructField@@YAXAEAUscrContext_t@@II@Z(scrContext, structId, index);
}

/*
==============
Scr_Settings
==============
*/

void __fastcall Scr_Settings(scrContext_t *scrContext, int developer, int developer_script, int abort_on_error, bool allow_debugger)
{
  ?Scr_Settings@@YAXAEAUscrContext_t@@HHH_N@Z(scrContext, developer, developer_script, abort_on_error, allow_debugger);
}

/*
==============
Scr_IsStackClear
==============
*/

bool __fastcall Scr_IsStackClear(const scrContext_t *scrContext)
{
  return ?Scr_IsStackClear@@YA_NAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_IsDefined
==============
*/

void __fastcall Scr_IsDefined(scrContext_t *scrContext, VariableValue *value)
{
  ?Scr_IsDefined@@YAXAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
Scr_SetStructFields
==============
*/

void __fastcall Scr_SetStructFields(scrContext_t *scrContext, unsigned int structId, const SpawnVar *spawnVar)
{
  ?Scr_SetStructFields@@YAXAEAUscrContext_t@@IPEBUSpawnVar@@@Z(scrContext, structId, spawnVar);
}

/*
==============
Scr_SetLoading
==============
*/

void __fastcall Scr_SetLoading(scrContext_t *scrContext, int bLoading)
{
  ?Scr_SetLoading@@YAXAEAUscrContext_t@@H@Z(scrContext, bLoading);
}

/*
==============
Scr_RunCurrentThreads
==============
*/

void __fastcall Scr_RunCurrentThreads(scrContext_t *scrContext)
{
  ?Scr_RunCurrentThreads@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetPointerType
==============
*/

VariableType __fastcall Scr_GetPointerType(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetPointerType@@YA?AW4VariableType@@AEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_ExecThreadCallback_UnsignedWithErrorMsg
==============
*/

void __fastcall Scr_ExecThreadCallback_UnsignedWithErrorMsg(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  ?Scr_ExecThreadCallback_UnsignedWithErrorMsg@@YAXAEAUscrContext_t@@PEBXPEAX@Z(scrContext, userData, outReturnValue);
}

/*
==============
Scr_DecTime
==============
*/

void __fastcall Scr_DecTime(scrContext_t *scrContext)
{
  ?Scr_DecTime@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ProcessScriptFile
==============
*/

void __fastcall ProcessScriptFile(scrContext_t *scrContext, ScriptFile *scriptfile)
{
  ?ProcessScriptFile@@YAXAEAUscrContext_t@@PEAUScriptFile@@@Z(scrContext, scriptfile);
}

/*
==============
Scr_GetEntityArray
==============
*/

int __fastcall Scr_GetEntityArray(const scrContext_t *scrContext, unsigned int arrayObjectId, unsigned int bufferSize, unsigned int *buffer, unsigned int *count, unsigned int *failureIndex, VariableType *failureType)
{
  return ?Scr_GetEntityArray@@YAHAEBUscrContext_t@@IIPEAI11PEAW4VariableType@@@Z(scrContext, arrayObjectId, bufferSize, buffer, count, failureIndex, failureType);
}

/*
==============
Scr_CleanupVariables
==============
*/

void __fastcall Scr_CleanupVariables(scrContext_t *scrContext)
{
  ?Scr_CleanupVariables@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_AddArray
==============
*/

void __fastcall Scr_AddArray(scrContext_t *scrContext)
{
  ?Scr_AddArray@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GScr_GetObjectFloat
==============
*/

int __fastcall GScr_GetObjectFloat(unsigned int objectId, float *val, unsigned int name)
{
  return ?GScr_GetObjectFloat@@YAHIPEAMI@Z(objectId, val, name);
}

/*
==============
GScr_ResetOpcodeProfile
==============
*/

void GScr_ResetOpcodeProfile(void)
{
  ?GScr_ResetOpcodeProfile@@YAXXZ();
}

/*
==============
Scr_AddArrayStringIndexed
==============
*/

void __fastcall Scr_AddArrayStringIndexed(scrContext_t *scrContext, scr_string_t stringValue)
{
  ?Scr_AddArrayStringIndexed@@YAXAEAUscrContext_t@@W4scr_string_t@@@Z(scrContext, stringValue);
}

/*
==============
Scr_IsEndonThread
==============
*/

bool __fastcall Scr_IsEndonThread(scrContext_t *scrContext, unsigned int localId)
{
  return ?Scr_IsEndonThread@@YA_NAEAUscrContext_t@@I@Z(scrContext, localId);
}

/*
==============
Scr_ExecThreadCallback_Float
==============
*/

void __fastcall Scr_ExecThreadCallback_Float(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  ?Scr_ExecThreadCallback_Float@@YAXAEAUscrContext_t@@PEBXPEAX@Z(scrContext, userData, outReturnValue);
}

/*
==============
Scr_ExecThreadCallback_EntRef
==============
*/

void __fastcall Scr_ExecThreadCallback_EntRef(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  ?Scr_ExecThreadCallback_EntRef@@YAXAEAUscrContext_t@@PEBXPEAX@Z(scrContext, userData, outReturnValue);
}

/*
==============
Scr_IsTrueOpcode
==============
*/

void __fastcall Scr_IsTrueOpcode(scrContext_t *scrContext, VariableValue *value)
{
  ?Scr_IsTrueOpcode@@YAXAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
GScr_DumpOpcodePairs
==============
*/
void GScr_DumpOpcodePairs(void)
{
  scrContext_t *v0; 
  int v1; 
  int v2; 
  OpcodeName *v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  int v7; 
  OpcodeName *v8; 
  const char *name; 
  const char *OpcodeName; 
  char *fmt; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  scrContext_t *v16; 

  v16 = ScriptContext_Server();
  v0 = v16;
  Com_Printf(23, "--------------------------------------------------------\nOpcode Pairs\n");
  v1 = 0;
  v14 = 0;
  do
  {
    v2 = 0;
    v3 = s_opcodeNames;
    v4 = v1 << 8;
    v5 = 0i64;
    v15 = v4;
    do
    {
      v6 = v0->m_vmDebugPub.opcodePairs[v4 | v5];
      if ( v6 )
      {
        if ( !s_opcodesInitialized )
        {
          v7 = 0;
          v8 = s_opcodeNames;
          do
          {
            if ( v8->index != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11757, ASSERT_TYPE_ASSERT, "( check->index == opcodeIndex )", (const char *)&queryFormat, "check->index == opcodeIndex") )
              __debugbreak();
            ++v7;
            ++v8;
          }
          while ( (__int64)v8 < (__int64)&s_opcodeNames[190] );
          v1 = v14;
          v4 = v15;
          s_opcodesInitialized = 1;
        }
        if ( v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11764, ASSERT_TYPE_ASSERT, "( opcode >= 0 )", (const char *)&queryFormat, "opcode >= OP_Begin") )
          __debugbreak();
        if ( (unsigned int)v2 >= 0xBF )
        {
          LODWORD(v13) = 191;
          LODWORD(v12) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11765, ASSERT_TYPE_ASSERT, "(unsigned)( opcode ) < (unsigned)( ( sizeof( *array_counter( s_opcodeNames ) ) + 0 ) )", "opcode doesn't index ARRAY_COUNT( s_opcodeNames )\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( v3->index != v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11768, ASSERT_TYPE_ASSERT, "( opcodeName->index == opcode )", (const char *)&queryFormat, "opcodeName->index == opcode") )
          __debugbreak();
        name = v3->name;
        OpcodeName = Scr_GetOpcodeName(v1);
        LODWORD(fmt) = v6;
        Com_Printf(23, "%s, %s, %d\n", OpcodeName, name, fmt);
        v0 = v16;
      }
      ++v2;
      ++v5;
      ++v3;
    }
    while ( v2 < 190 );
    v14 = ++v1;
  }
  while ( v1 < 190 );
}

/*
==============
GScr_GetObjectFloat
==============
*/
__int64 GScr_GetObjectFloat(unsigned int objectId, float *val, unsigned int name)
{
  scrContext_t *v6; 
  VariableValue *top; 
  VariableValue *VariableField; 
  bool v9; 
  VariableUnion u; 
  VariableType type; 
  VariableUnion v14; 
  VariableValue result; 

  _R14 = val;
  v6 = ScriptContext_Server();
  if ( !objectId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10507, ASSERT_TYPE_ASSERT, "( objectId )", (const char *)&queryFormat, "objectId") )
    __debugbreak();
  if ( v6->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10508, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( v6->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10509, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10510, ASSERT_TYPE_ASSERT, "( val )", (const char *)&queryFormat, "val") )
    __debugbreak();
  top = v6->m_vmPub.top;
  VariableField = Scr_FindVariableField(&result, v6, objectId, name);
  v9 = v6->m_vmPub.inparamcount == 0;
  u = VariableField->u;
  type = VariableField->type;
  v14 = VariableField->u;
  v6->m_vmPub.top = top;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10518, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( v6->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10519, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  if ( type == VAR_FLOAT )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+var_48]
      vmovss  dword ptr [r14], xmm0
    }
    RemoveRefToValue(v6, 5, u);
    return 1i64;
  }
  else
  {
    RemoveRefToValue(v6, (unsigned __int8)type, u);
    return 0i64;
  }
}

/*
==============
GScr_ResetOpcodeProfile
==============
*/
void GScr_ResetOpcodeProfile(void)
{
  scrContext_t *v0; 

  v0 = ScriptContext_Server();
  memset_0(v0->m_vmDebugPub.opcodePairs, 0, sizeof(v0->m_vmDebugPub.opcodePairs));
}

/*
==============
GetBuiltInName
==============
*/
const char *GetBuiltInName(const scrContext_t *scrContext, unsigned int builtInIndex)
{
  unsigned int m_methBegin; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int m_funcEnd; 
  unsigned int m_methEnd; 

  m_methBegin = scrContext->m_methBegin;
  if ( builtInIndex >= m_methBegin )
  {
    if ( builtInIndex - m_methBegin >= scrContext->m_methEnd )
    {
      m_methEnd = scrContext->m_methEnd;
      v7 = builtInIndex - m_methBegin;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1816, ASSERT_TYPE_ASSERT, "(unsigned)( builtInIndex - scrContext.m_methBegin ) < (unsigned)( scrContext.m_methEnd )", "builtInIndex - scrContext.m_methBegin doesn't index scrContext.m_methEnd\n\t%i not in [0, %i)", v7, m_methEnd) )
        __debugbreak();
    }
    return scrContext->m_pMethNames[builtInIndex - scrContext->m_methBegin];
  }
  else
  {
    if ( builtInIndex - scrContext->m_funcBegin >= scrContext->m_funcEnd )
    {
      m_funcEnd = scrContext->m_funcEnd;
      v6 = builtInIndex - scrContext->m_funcBegin;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1811, ASSERT_TYPE_ASSERT, "(unsigned)( builtInIndex - scrContext.m_funcBegin ) < (unsigned)( scrContext.m_funcEnd )", "builtInIndex - scrContext.m_funcBegin doesn't index scrContext.m_funcEnd\n\t%i not in [0, %i)", v6, m_funcEnd) )
        __debugbreak();
    }
    return scrContext->m_pFuncNames[builtInIndex - scrContext->m_funcBegin];
  }
}

/*
==============
GetDummyFieldValue
==============
*/
__int64 GetDummyFieldValue(scrContext_t *scrContext)
{
  ClearVariableValue(scrContext, scrContext->m_varPub.tempVariable);
  return scrContext->m_varPub.tempVariable;
}

/*
==============
GetDummyObject
==============
*/
unsigned int GetDummyObject(scrContext_t *scrContext)
{
  ClearVariableValue(scrContext, scrContext->m_varPub.tempVariable);
  return GetObjectInternal(scrContext, scrContext->m_varPub.tempVariable);
}

/*
==============
GetEntityFieldValue
==============
*/
VariableValue *GetEntityFieldValue(VariableValue *result, scrContext_t *scrContext, EntityClass classnum, unsigned int entnum, LocalClientNum_t localClientNum, int offset)
{
  GetEntityFieldValue_Internal(scrContext, classnum, entnum, localClientNum, offset);
  *result = scrContext->m_vmGlob.eval_stack[0];
  return result;
}

/*
==============
GetEntityFieldValue_Internal
==============
*/
void GetEntityFieldValue_Internal(scrContext_t *scrContext, EntityClass classnum, unsigned int entnum, LocalClientNum_t localClientNum, int offset)
{
  __int64 v5; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 

  v5 = (int)entnum;
  v8 = __rdtsc();
  if ( scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11133, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11134, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  scrContext->m_vmPub.top = (VariableValue *)&scrContext->m_vmGlob.lastFileName;
  scrContext->m_vmGlob.eval_stack[0].type = VAR_UNDEFINED;
  if ( (unsigned int)v5 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v5, "unsigned", (unsigned int)v5) )
    __debugbreak();
  GScr_GetObjectField(classnum, v5, offset);
  if ( scrContext->m_vmPub.inparamcount >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11151, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount || pScrVmPub->inparamcount == 1 )", (const char *)&queryFormat, "!pScrVmPub->inparamcount || pScrVmPub->inparamcount == 1") )
    __debugbreak();
  if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11152, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  if ( (const char **)&scrContext->m_vmPub.top[-scrContext->m_vmPub.inparamcount] != &scrContext->m_vmGlob.lastFileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11153, ASSERT_TYPE_ASSERT, "( pScrVmPub->top - pScrVmPub->inparamcount == pScrVmGlob->eval_stack - 1 )", (const char *)&queryFormat, "pScrVmPub->top - pScrVmPub->inparamcount == pScrVmGlob->eval_stack - 1") )
    __debugbreak();
  scrContext->m_vmPub.inparamcount = 0;
  v9 = __rdtsc();
  scrContext->m_entFieldTime += (((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9) - v8;
}

/*
==============
GetEntityFieldValue_Out
==============
*/
void GetEntityFieldValue_Out(scrContext_t *scrContext, EntityClass classnum, unsigned int entnum, LocalClientNum_t localClientNum, int offset, VariableValue *out)
{
  GetEntityFieldValue_Internal(scrContext, classnum, entnum, localClientNum, offset);
  *out = scrContext->m_vmGlob.eval_stack[0];
}

/*
==============
IncInParam
==============
*/
VariableValue *IncInParam(scrContext_t *scrContext)
{
  VariableValue *top; 
  VariableValue *v3; 
  VariableValue *v4; 
  VariableValue *v5; 
  VariableValue *v6; 

  top = scrContext->m_vmPub.top;
  if ( (top < (VariableValue *)&scrContext->m_vmGlob.lastFileName || top > scrContext->m_vmGlob.eval_stack) && (top < scrContext->m_vmPub.stack || top > scrContext->m_vmPub.maxstack) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8854, ASSERT_TYPE_ASSERT, "( ( ( pScrVmPub->top >= pScrVmGlob->eval_stack - 1 ) && ( pScrVmPub->top <= pScrVmGlob->eval_stack ) ) || ( ( pScrVmPub->top >= pScrVmPub->stack ) && ( pScrVmPub->top <= pScrVmPub->maxstack ) ) )", (const char *)&queryFormat, "( ( pScrVmPub->top >= pScrVmGlob->eval_stack - 1 ) && ( pScrVmPub->top <= pScrVmGlob->eval_stack ) ) || ( ( pScrVmPub->top >= pScrVmPub->stack ) && ( pScrVmPub->top <= pScrVmPub->maxstack ) )") )
    __debugbreak();
  if ( scrContext->m_vmPub.outparamcount )
    Scr_ClearOutParams(scrContext);
  v3 = scrContext->m_vmPub.top;
  v4 = &scrContext->m_vmGlob.eval_stack[1];
  if ( v3 == scrContext->m_vmPub.maxstack || v3 == v4 )
    Sys_Error((const ObfuscateErrorText)&stru_1440B2A90);
  Scr_CheckThreadForInstance(scrContext->m_Instance);
  v5 = scrContext->m_vmPub.top;
  ++scrContext->m_vmPub.inparamcount;
  v6 = v5 + 1;
  scrContext->m_vmPub.top = v6;
  if ( (v6 < scrContext->m_vmGlob.eval_stack || v6 > v4) && (v6 < scrContext->m_vmPub.stack || v6 > scrContext->m_vmPub.maxstack) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8870, ASSERT_TYPE_ASSERT, "( ((top >= pScrVmGlob->eval_stack) && (top <= pScrVmGlob->eval_stack + 1)) || ((top >= pScrVmPub->stack) && (top <= pScrVmPub->maxstack)) )", (const char *)&queryFormat, "((top >= pScrVmGlob->eval_stack) && (top <= pScrVmGlob->eval_stack + 1)) || ((top >= pScrVmPub->stack) && (top <= pScrVmPub->maxstack))") )
    __debugbreak();
  return v6;
}

/*
==============
ProcessScriptFile
==============
*/
void ProcessScriptFile(scrContext_t *scrContext, ScriptFile *scriptfile)
{
  scrContext_t *v2; 
  int readPos; 
  int length; 
  char *v6; 
  char *v7; 
  __int64 bytecodeLen; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  bool v11; 
  __int64 v12; 
  int v13; 
  const char *v14; 
  __int64 v15; 
  int OpaqueStringCount; 
  unsigned int TokenOpaqueString_Internal; 
  int v18; 
  const char *v19; 
  unsigned __int8 v20; 
  unsigned __int8 v21; 
  unsigned __int16 v22; 
  __int64 v23; 
  __int64 v24; 
  const char *v25; 
  int v26; 
  unsigned __int64 v27; 
  const char *TokenString; 
  const char *v29; 
  int v30; 
  __int64 v31; 
  const char *v32; 
  int v33; 
  unsigned __int64 v34; 
  unsigned int v35; 
  __int64 v36; 
  const char *v37; 
  int v38; 
  unsigned __int64 v39; 
  scr_string_t StringOfSize; 
  scr_string_t v41; 
  int v42; 
  unsigned int v43; 
  scr_string_t TokenFilenameString; 
  int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned __int16 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  char *v53; 
  unsigned __int8 *v54; 
  ScriptProcessContext processContext; 
  RawFile rawfile; 
  unsigned __int16 bankIndex; 
  int len; 

  v2 = scrContext;
  if ( !scriptfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11833, ASSERT_TYPE_ASSERT, "( scriptfile )", (const char *)&queryFormat, "scriptfile") )
    __debugbreak();
  len = scriptfile->len;
  processContext.readPos = 0;
  readPos = 0;
  length = len + 1;
  v6 = (char *)Scr_Mem_TempAlloc(v2, len + 1, "ProcessScript");
  rawfile.compressedLen = scriptfile->compressedLen;
  rawfile.len = scriptfile->len;
  rawfile.buffer = scriptfile->buffer;
  processContext.sourceBuf = v6;
  processContext.length = length;
  rawfile.name = NULL;
  DB_GetRawBuffer(&rawfile, v6, length);
  v7 = TempMalloc(scriptfile->bytecodeLen);
  memcpy_0(v7, scriptfile->bytecode, scriptfile->bytecodeLen);
  v2->m_compilePub.programLen = (unsigned int)TempMalloc(0i64) - LODWORD(v2->m_varPub.programBuffer);
  bytecodeLen = scriptfile->bytecodeLen;
  v9 = (unsigned __int8 *)(v7 + 1);
  v53 = v7 + 1;
  v54 = (unsigned __int8 *)&v7[bytecodeLen];
  v10 = (unsigned __int8 *)(v7 + 1);
  v2->m_varPub.checksum = GetProgramBufferOffset(v2, v7 + 1) + 31 * v2->m_varPub.checksum;
  v11 = v7 + 1 < &v7[bytecodeLen];
  if ( v7 + 1 != &v7[bytecodeLen] )
  {
    do
    {
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11887, ASSERT_TYPE_ASSERT, "( local_pos < end_pos )", (const char *)&queryFormat, "local_pos < end_pos") )
        __debugbreak();
      if ( v9 == v10 )
      {
        v12 = readPos;
        v13 = readPos + 4;
        v14 = &processContext.sourceBuf[v12];
        processContext.readPos = v13;
        if ( v13 >= length )
        {
          LODWORD(v52) = length;
          LODWORD(v51) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 209, ASSERT_TYPE_ASSERT, "( processContext.readPos ) < ( processContext.length )", "%s < %s\n\t%i, %i", "processContext.readPos", "processContext.length", v51, v52) )
            __debugbreak();
        }
        v15 = *(int *)v14;
        v10 += v15;
        v53 = (char *)v10;
        v2->m_varPub.checksum = v15 + 31 * v2->m_varPub.checksum;
        OpaqueStringCount = SL_GetOpaqueStringCount();
        TokenOpaqueString_Internal = Scr_GetTokenOpaqueString_Internal(v2, &processContext, OpaqueStringCount);
        Scr_SetThreadPosition_Precompiled(v2, TokenOpaqueString_Internal, (const char *)v9);
        length = processContext.length;
        readPos = processContext.readPos;
      }
      v18 = *v9++;
      v19 = (const char *)v9;
      v2->m_varPub.checksum = v18 + 31 * v2->m_varPub.checksum;
      switch ( v18 )
      {
        case 0:
        case 2:
        case 6:
        case 9:
        case 10:
        case 12:
        case 13:
        case 15:
        case 16:
        case 17:
        case 18:
        case 21:
        case 26:
        case 36:
        case 38:
        case 39:
        case 42:
        case 43:
        case 45:
        case 46:
        case 47:
        case 49:
        case 54:
        case 55:
        case 57:
        case 58:
        case 59:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 74:
        case 75:
        case 78:
        case 83:
        case 84:
        case 87:
        case 88:
        case 89:
        case 90:
        case 92:
        case 93:
        case 94:
        case 97:
        case 100:
        case 103:
        case 105:
        case 106:
        case 115:
        case 118:
        case 119:
        case 120:
        case 121:
        case 124:
        case 125:
        case 133:
        case 135:
        case 136:
        case 139:
        case 143:
        case 144:
        case 149:
        case 151:
        case 153:
        case 165:
        case 167:
        case 168:
          break;
        case 1:
        case 3:
        case 20:
        case 22:
        case 40:
        case 48:
        case 52:
        case 68:
        case 69:
        case 70:
        case 71:
        case 81:
        case 82:
        case 91:
        case 99:
        case 104:
        case 107:
        case 113:
        case 116:
        case 140:
        case 142:
        case 147:
        case 161:
        case 185:
        case 186:
        case 187:
        case 188:
          ++v9;
          break;
        case 4:
        case 7:
        case 8:
        case 24:
        case 37:
        case 44:
        case 56:
        case 60:
        case 76:
        case 109:
        case 123:
        case 141:
          v47 = *(_DWORD *)v9;
          v9 += 4;
          if ( v47 <= SL_GetOpaqueStringCount() )
          {
            v2->m_varPub.checksum = v47 + 31 * v2->m_varPub.checksum;
          }
          else
          {
            v48 = Scr_GetTokenOpaqueString_Internal(v2, &processContext, 0);
            length = processContext.length;
            readPos = processContext.readPos;
            *((_DWORD *)v9 - 1) = v48;
          }
          break;
        case 5:
        case 23:
        case 101:
        case 138:
          TokenFilenameString = Scr_GetTokenFilenameString(v2, &processContext);
          v45 = SL_GetOpaqueStringCount();
          v46 = Scr_GetTokenOpaqueString_Internal(v2, &processContext, v45);
          Scr_EmitFunction_Precompiled(v2, TokenFilenameString, v46, (char *)v9);
          length = processContext.length;
          v9 += 4;
          readPos = processContext.readPos;
          break;
        case 11:
        case 14:
        case 25:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 50:
        case 80:
        case 85:
        case 102:
        case 114:
        case 126:
        case 127:
        case 128:
        case 129:
        case 130:
        case 131:
          v9 += 2;
          break;
        case 19:
          v9 += 12;
          break;
        case 35:
        case 51:
        case 79:
        case 132:
        case 137:
        case 152:
        case 169:
        case 170:
        case 171:
        case 172:
          v9 += 3;
          break;
        case 41:
        case 53:
        case 72:
        case 73:
        case 110:
        case 112:
        case 134:
        case 148:
        case 173:
        case 174:
        case 175:
        case 176:
          v9 += 4;
          break;
        case 86:
          v22 = *(_WORD *)v9;
          v9 += 2;
          if ( v22 )
          {
            v23 = v22;
            do
            {
              if ( *(_DWORD *)v9 < 0x80000u )
              {
                v24 = -1i64;
                v25 = &processContext.sourceBuf[readPos];
                do
                  ++v24;
                while ( v25[v24] );
                v26 = truncate_cast<int,unsigned __int64>(v24 + 1);
                v27 = v26;
                readPos += v26;
                if ( readPos >= length )
                {
                  LODWORD(v52) = length;
                  LODWORD(v51) = readPos;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 225, ASSERT_TYPE_ASSERT, "( processContext.readPos ) < ( processContext.length )", "%s < %s\n\t%i, %i", "processContext.readPos", "processContext.length", v51, v52) )
                    __debugbreak();
                }
                if ( *v25 != 1 )
                  *(_DWORD *)v9 = j_SL_GetStringOfSize(v25, 1u, v27, 16);
              }
              v9 += 7;
              --v23;
            }
            while ( v23 );
            v2 = scrContext;
            v10 = (unsigned __int8 *)v53;
            processContext.readPos = readPos;
          }
          break;
        case 95:
        case 122:
          v36 = -1i64;
          v37 = &processContext.sourceBuf[readPos];
          do
            ++v36;
          while ( v37[v36] );
          v38 = truncate_cast<int,unsigned __int64>(v36 + 1);
          v39 = v38;
          readPos += v38;
          processContext.readPos = readPos;
          if ( readPos >= length )
          {
            LODWORD(v52) = length;
            LODWORD(v51) = readPos;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 225, ASSERT_TYPE_ASSERT, "( processContext.readPos ) < ( processContext.length )", "%s < %s\n\t%i, %i", "processContext.readPos", "processContext.length", v51, v52) )
              __debugbreak();
          }
          v9 += 4;
          StringOfSize = j_SL_GetStringOfSize(v37, 1u, v39, 16);
          v10 = (unsigned __int8 *)v53;
          *((_DWORD *)v9 - 1) = StringOfSize;
          break;
        case 96:
        case 117:
        case 146:
        case 150:
          v41 = Scr_GetTokenFilenameString(v2, &processContext);
          v42 = SL_GetOpaqueStringCount();
          v43 = Scr_GetTokenOpaqueString_Internal(v2, &processContext, v42);
          Scr_EmitFunction_Precompiled(v2, v41, v43, (char *)v9);
          length = processContext.length;
          v9 += 3;
          readPos = processContext.readPos;
          break;
        case 98:
          TokenString = Scr_GetTokenString(NULL, &processContext);
          if ( *TokenString )
            Scr_UsingTree(TokenString, 0, 1);
          length = processContext.length;
          readPos = processContext.readPos;
          *v9++ = v2->m_animPub.animTreeIndex;
          break;
        case 145:
          v29 = Scr_GetTokenString(NULL, &processContext);
          if ( *v29 )
            Scr_UsingTree(v29, 0, 1);
          v30 = processContext.readPos;
          v31 = -1i64;
          v32 = &processContext.sourceBuf[processContext.readPos];
          do
            ++v31;
          while ( v32[v31] );
          v33 = truncate_cast<int,unsigned __int64>(v31 + 1);
          length = processContext.length;
          v34 = v33;
          readPos = v33 + v30;
          processContext.readPos = readPos;
          if ( readPos >= processContext.length )
          {
            LODWORD(v52) = processContext.length;
            LODWORD(v51) = readPos;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 225, ASSERT_TYPE_ASSERT, "( processContext.readPos ) < ( processContext.length )", "%s < %s\n\t%i, %i", "processContext.readPos", "processContext.length", v51, v52) )
              __debugbreak();
          }
          v35 = j_SL_GetStringOfSize(v32, 2u, v34, 16);
          v9 += 8;
          *((_QWORD *)v9 - 1) = -1i64;
          Scr_EmitAnimation(v2, v19, v35, 0);
          v10 = (unsigned __int8 *)v53;
          break;
        case 160:
          v49 = *(_WORD *)(v9 + 1);
          bankIndex = 0;
          if ( ScriptDebugData_GetBankIndex(v49, &bankIndex) )
            *(_WORD *)(v9 + 1) = bankIndex;
          v9 += 5;
          break;
        case 166:
          v20 = *v9++;
          if ( v20 )
            v9 += 2 * v20;
          break;
        case 177:
        case 178:
        case 179:
        case 180:
          Scr_GetTokenInt(v2, &processContext);
          length = processContext.length;
          v9 += 3;
          readPos = processContext.readPos;
          break;
        case 181:
        case 182:
        case 183:
        case 184:
          Scr_GetTokenInt(v2, &processContext);
          length = processContext.length;
          v9 += 4;
          readPos = processContext.readPos;
          break;
        case 189:
          v21 = *v9++;
          if ( v21 )
            v9 += v21;
          break;
        default:
          LODWORD(v50) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 12264, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown opcode %d", v50) )
            __debugbreak();
          break;
      }
      v11 = v9 < v54;
    }
    while ( v9 != v54 );
  }
  if ( readPos != len )
  {
    LODWORD(v52) = len;
    LODWORD(v51) = readPos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11881, ASSERT_TYPE_ASSERT, "( processContext.readPos ) == ( len - 1 )", "%s == %s\n\t%i, %i", "processContext.readPos", "len - 1", v51, v52) )
      __debugbreak();
  }
  if ( v9 != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11882, ASSERT_TYPE_ASSERT, "(local_pos == nextThreadPos)", (const char *)&queryFormat, "local_pos == nextThreadPos") )
    __debugbreak();
  Scr_Mem_TempClear(v2);
}

/*
==============
RuntimeError
==============
*/
void RuntimeError(scrContext_t *scrContext, const ScriptCodePos scriptCodePos, unsigned int index, const char *msg, const char *dialogMessage)
{
  bool terminal_error; 
  const char *ScriptPos; 
  int v10; 
  bool v11; 
  bool v12; 
  int v13; 
  const char *v14; 
  const char *v15; 
  ScriptCodePos codePos; 
  char v17[8192]; 

  terminal_error = scrContext->m_vmPub.terminal_error;
  codePos.m_scriptPos = scriptCodePos.m_scriptPos;
  Scr_RecordScriptRuntimeError(scrContext, terminal_error, index, scriptCodePos, msg, dialogMessage);
  if ( scrContext->m_varPub.developer )
    goto LABEL_7;
  if ( ScriptCodePos::IsScriptPos(&codePos) )
  {
    ScriptPos = ScriptCodePos::GetScriptPos(&codePos, scrContext);
    if ( !Scr_IsInOpcodeMemory(scrContext, ScriptPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1033, ASSERT_TYPE_ASSERT, "( !scriptCodePos.IsScriptPos() || Scr_IsInOpcodeMemory( scrContext, scriptCodePos.GetScriptPos( scrContext ) ) )", (const char *)&queryFormat, "!scriptCodePos.IsScriptPos() || Scr_IsInOpcodeMemory( scrContext, scriptCodePos.GetScriptPos( scrContext ) )") )
      __debugbreak();
  }
  if ( terminal_error )
  {
LABEL_7:
    v10 = 0;
    if ( scrContext->m_vmPub.debugCode )
    {
      Com_Printf(23, "%s\n", msg);
      if ( !terminal_error )
        return;
      goto LABEL_20;
    }
    v11 = scrContext->m_vmPub.abort_on_error || terminal_error;
    v12 = v11;
    if ( Scr_IgnoreErrors(scrContext) )
      v12 = 0;
    v13 = 6;
    if ( v12 )
      v13 = 23;
    Com_PrintError(v13, "\n");
    Com_PrintError(v13, "******* script runtime error *******\n");
    Com_PrintError(v13, "%s:", msg);
    RuntimeErrorInternal(scrContext, v13, codePos, index, msg);
    Com_PrintError(v13, "************************************\n");
    if ( v12 )
    {
      if ( !terminal_error )
      {
LABEL_21:
        Scr_DoScriptTrace(scrContext, index, codePos, v17, 0x2000);
        v14 = (char *)&queryFormat.fmt + 3;
        v15 = (char *)&queryFormat.fmt + 3;
        if ( dialogMessage )
          v14 = "\n";
        if ( dialogMessage )
          v15 = dialogMessage;
        LOBYTE(v10) = terminal_error;
        Com_Error_impl((errorParm_t)(v10 + 4), (const ObfuscateErrorText)&stru_1440AEA10, 857i64, msg, v14, v15, v17);
        return;
      }
LABEL_20:
      Scr_IgnoreDebugChecks(scrContext);
      goto LABEL_21;
    }
  }
}

/*
==============
RuntimeErrorInternal
==============
*/
void RuntimeErrorInternal(const scrContext_t *scrContext, int channel, ScriptCodePos codePos, unsigned int index)
{
  int function_count; 
  __int64 v7; 
  function_frame_t *v8; 

  Scr_PrintPrevCodePos(scrContext, channel, codePos, index, 1);
  function_count = scrContext->m_vmPub.function_count;
  if ( function_count )
  {
    v7 = function_count - 1;
    if ( v7 >= 1 )
    {
      v8 = &scrContext->m_vmPub.function_frame_start[v7];
      do
      {
        Com_PrintError(channel, "called from:\n");
        Scr_PrintPrevCodePos(scrContext, 0, v8->fs.pos, v8->fs.localId == 0, 1);
        --v8;
        --v7;
      }
      while ( v7 );
    }
    Com_PrintError(channel, "started from:\n");
    Scr_PrintPrevCodePos(scrContext, 0, scrContext->m_vmPub.function_frame_start[0].fs.pos, 1u, 1);
  }
  com_fixedConsolePosition = 0;
}

/*
==============
Scr_Abort
==============
*/
void Scr_Abort(scrContext_t *scrContext)
{
  scrContext->m_varPub.abort = 1;
}

/*
==============
Scr_AddAnim
==============
*/
void Scr_AddAnim(scrContext_t *scrContext, scr_anim_t value)
{
  $6CB7272563F4458FB40A4A5E123C4ABA v2; 
  VariableValue *v3; 

  v2 = value.0;
  v3 = IncInParam(scrContext);
  v3->type = VAR_ANIMATION;
  v3->u.intValue = (int)v2;
  if ( !*(_DWORD *)&v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10668, ASSERT_TYPE_ASSERT, "( top->u.intValue )", (const char *)&queryFormat, "top->u.intValue") )
    __debugbreak();
}

/*
==============
Scr_AddArray
==============
*/
void Scr_AddArray(scrContext_t *scrContext)
{
  const char *m_scriptPos; 
  VariableValue *v3; 
  int intValue; 
  unsigned int ArraySize; 
  unsigned int NewArrayVariable; 

  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  ScriptCodePos::SetVarUsagePosIfNull(&scrContext->m_varPub.varUsagePos, "<script array variable>");
  if ( !scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10843, ASSERT_TYPE_ASSERT, "( pScrVmPub->inparamcount )", (const char *)&queryFormat, "pScrVmPub->inparamcount") )
    __debugbreak();
  v3 = --scrContext->m_vmPub.top;
  --scrContext->m_vmPub.inparamcount;
  if ( v3->type != VAR_POINTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10846, ASSERT_TYPE_ASSERT, "( pScrVmPub->top->type == VAR_POINTER )", (const char *)&queryFormat, "pScrVmPub->top->type == VAR_POINTER") )
    __debugbreak();
  intValue = scrContext->m_vmPub.top->u.intValue;
  ArraySize = GetArraySize(scrContext, intValue);
  NewArrayVariable = GetNewArrayVariable(scrContext, intValue, ArraySize);
  SetNewVariableValue(scrContext, NewArrayVariable, scrContext->m_vmPub.top + 1);
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
}

/*
==============
Scr_AddArrayStringIndexed
==============
*/
void Scr_AddArrayStringIndexed(scrContext_t *scrContext, scr_string_t stringValue)
{
  VariableValue *v4; 
  unsigned int NewVariable; 

  if ( !scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10864, ASSERT_TYPE_ASSERT, "( pScrVmPub->inparamcount )", (const char *)&queryFormat, "pScrVmPub->inparamcount") )
    __debugbreak();
  v4 = --scrContext->m_vmPub.top;
  --scrContext->m_vmPub.inparamcount;
  if ( v4->type != VAR_POINTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10867, ASSERT_TYPE_ASSERT, "( pScrVmPub->top->type == VAR_POINTER )", (const char *)&queryFormat, "pScrVmPub->top->type == VAR_POINTER") )
    __debugbreak();
  NewVariable = GetNewVariable(scrContext, scrContext->m_vmPub.top->u.uintValue, stringValue);
  SetNewVariableValue(scrContext, NewVariable, scrContext->m_vmPub.top + 1);
}

/*
==============
Scr_AddBool
==============
*/
void Scr_AddBool(scrContext_t *scrContext, int value)
{
  VariableValue *v4; 

  if ( (unsigned int)value > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10633, ASSERT_TYPE_ASSERT, "( value == 0 || value == 1 )", (const char *)&queryFormat, "value == 0 || value == 1") )
    __debugbreak();
  v4 = IncInParam(scrContext);
  v4->u.intValue = value;
  v4->type = VAR_INTEGER;
}

/*
==============
Scr_AddConstString
==============
*/
void Scr_AddConstString(scrContext_t *scrContext, scr_string_t value)
{
  VariableValue *v4; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10775, ASSERT_TYPE_ASSERT, "( value != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "value != NULL_SCR_STRING") )
    __debugbreak();
  v4 = IncInParam(scrContext);
  v4->type = VAR_STRING;
  Scr_SetStringValue(v4, value);
  SL_AddRefToString(value);
}

/*
==============
Scr_AddEntityNum
==============
*/
void Scr_AddEntityNum(scrContext_t *scrContext, int entnum, EntityClass classnum)
{
  const char *m_scriptPos; 
  unsigned int EntityId; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  ScriptCodePos::SetVarUsagePosIfNull(&scrContext->m_varPub.varUsagePos, "<script entity variable>");
  if ( scrContext->m_Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10713, ASSERT_TYPE_ASSERT, "(scrContext.m_Instance == SCRIPTINSTANCE_SERVER)", (const char *)&queryFormat, "scrContext.m_Instance == SCRIPTINSTANCE_SERVER") )
    __debugbreak();
  EntityId = Scr_GetEntityId(scrContext, entnum, classnum, LOCAL_CLIENT_0);
  AddRefToObject(scrContext, EntityId);
  Scr_AddObject(scrContext, EntityId);
  RemoveRefToObject(scrContext, EntityId);
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
}

/*
==============
Scr_AddExecThread
==============
*/
void Scr_AddExecThread(scrContext_t *scrContext, int handle, unsigned int paramcount)
{
  Scr_AddExecThreadInternal(scrContext, handle, scrContext->m_varPub.levelId, paramcount);
}

/*
==============
Scr_AddExecThreadInternal
==============
*/
void Scr_AddExecThreadInternal(scrContext_t *scrContext, int handle, unsigned int objId, unsigned int paramcount)
{
  __int64 v6; 
  ProfileScript *Profile; 
  ScriptCodePos v11; 
  bool v12; 
  const char *m_scriptPos; 
  const char *ScriptPos; 
  const char *v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned __int64 v23; 
  const char *VarUsagePos; 
  unsigned __int64 v25; 
  ScriptCodePos v26; 
  ScriptCodePos codePos; 

  v6 = handle;
  _RSI = scrContext;
  Profile = ScriptContext_GetProfile(scrContext);
  _RBX = &_RSI->m_varPub.programBuffer[v6];
  __asm { prefetcht0 byte ptr [rbx] }
  if ( !Scr_IsInOpcodeMemory(_RSI, _RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9105, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, pos )") )
    __debugbreak();
  v11.m_scriptPos = ScriptCodePos::CreateScriptPos(_RBX).m_scriptPos;
  v12 = _RSI->m_vmPub.function_count == 0;
  codePos.m_scriptPos = v11.m_scriptPos;
  if ( v12 )
  {
    if ( (int *)_RSI->m_vmPub.localVars != &_RSI->m_vmGlob.starttime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9531, ASSERT_TYPE_ASSERT, "( pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1 )", (const char *)&queryFormat, "pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1") )
      __debugbreak();
    Profile_Begin(466);
    Scr_ResetTimeout(_RSI);
  }
  if ( !_RSI->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9542, ASSERT_TYPE_ASSERT, "( pScrVarPub->timeArrayId )", (const char *)&queryFormat, "pScrVarPub->timeArrayId") )
    __debugbreak();
  if ( !(_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9543, ASSERT_TYPE_ASSERT, "( handle )", (const char *)&queryFormat, "handle") )
    __debugbreak();
  m_scriptPos = _RSI->m_varPub.varUsagePos.m_scriptPos;
  if ( ScriptCodePos::IsScriptPos(&codePos) )
  {
    ScriptPos = ScriptCodePos::GetScriptPos(&codePos, _RSI);
    ScriptCodePos::SetVarUsagePos(&_RSI->m_varPub.varUsagePos, ScriptPos + 1);
  }
  else
  {
    _RSI->m_varPub.varUsagePos = codePos;
  }
  if ( _RSI->m_errorLevel < 0 )
    _RSI->m_runThreadsTimeStart = __rdtsc();
  Scr_VM_EnterExecuteBlock(_RSI);
  AddRefToObject(_RSI, objId);
  v15 = codePos.m_scriptPos;
  v16 = AllocThread(_RSI, objId);
  v17 = VM_Execute(_RSI, v16, (ScriptCodePos)v15, paramcount);
  RemoveRefToObject(_RSI, v17);
  Scr_VM_LeaveExecuteBlock(_RSI);
  if ( _RSI->m_errorLevel < 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(__rdtsc() - _RSI->m_runThreadsTimeStart) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vcvtsd2ss xmm1, xmm0, xmm0
      vaddss  xmm2, xmm1, dword ptr [rsi+0DF080h]
      vmovss  dword ptr [rsi+0DF080h], xmm2
    }
  }
  v12 = !_RSI->m_varPub.bScriptUsageProfile;
  _RSI->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  if ( !v12 )
  {
    v26.m_scriptPos = m_scriptPos;
    v23 = __rdtsc();
    if ( ScriptCodePos::IsScriptPos(&v26) )
    {
      VarUsagePos = ScriptCodePos::GetVarUsagePos(&v26);
      UpdateCurrentFuncInfo(_RSI, VarUsagePos, 0);
    }
    v25 = __rdtsc();
    Profile->scrProfileCalcTimeTotal += (((unsigned __int64)HIDWORD(v25) << 32) | (unsigned int)v25) - v23;
  }
  ++_RSI->m_vmPub.outparamcount;
  --_RSI->m_vmPub.inparamcount;
  if ( !_RSI->m_vmPub.function_count )
  {
    Profile_EndInternal(NULL);
    if ( (int *)_RSI->m_vmPub.localVars != &_RSI->m_vmGlob.starttime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9598, ASSERT_TYPE_ASSERT, "( pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1 )", (const char *)&queryFormat, "pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1") )
      __debugbreak();
  }
}

/*
==============
Scr_AddFloat
==============
*/

void __fastcall Scr_AddFloat(scrContext_t *scrContext, double value)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  _RAX = IncInParam(scrContext);
  __asm
  {
    vmovss  dword ptr [rax], xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  _RAX->type = VAR_FLOAT;
}

/*
==============
Scr_AddFunc
==============
*/
void Scr_AddFunc(scrContext_t *scrContext, int value)
{
  __int64 v2; 
  VariableValue *v4; 
  const char *v5; 
  int v7; 

  v2 = value;
  if ( value < 0 || (unsigned __int64)value > 0x7FFFFF )
  {
    v7 = 0x7FFFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10798, ASSERT_TYPE_ASSERT, "( 0 ) <= ( value ) && ( value ) <= ( MAX_SCRIPT_OFFSET )", "value not in [0, MAX_SCRIPT_OFFSET]\n\t%i not in [%i, %i]", value, 0i64, v7) )
      __debugbreak();
  }
  v4 = IncInParam(scrContext);
  v4->type = VAR_FUNCTION;
  v5 = &scrContext->m_varPub.programBuffer[v2];
  if ( !Scr_IsInOpcodeMemory(scrContext, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10805, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, codePos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePos )") )
    __debugbreak();
  v4->u.scriptCodePosValue = (unsigned __int64)v5;
}

/*
==============
Scr_AddIString
==============
*/
void Scr_AddIString(scrContext_t *scrContext, const char *value)
{
  VariableValue *v4; 
  unsigned int String; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10763, ASSERT_TYPE_ASSERT, "( value )", (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  v4 = IncInParam(scrContext);
  v4->type = VAR_ISTRING;
  String = SL_GetString(value, 0);
  Scr_SetStringValue(v4, String);
}

/*
==============
Scr_AddInt
==============
*/
void Scr_AddInt(scrContext_t *scrContext, int value)
{
  VariableValue *v3; 

  v3 = IncInParam(scrContext);
  v3->type = VAR_INTEGER;
  v3->u.intValue = value;
}

/*
==============
Scr_AddObject
==============
*/
void Scr_AddObject(scrContext_t *scrContext, unsigned int id)
{
  VariableValue *v4; 

  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10685, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  if ( GetObjectType(scrContext, id) == VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10688, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, id ) != VAR_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, id ) != VAR_THREAD") )
    __debugbreak();
  if ( GetObjectType(scrContext, id) == VAR_NOTIFY_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10689, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, id ) != VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, id ) != VAR_NOTIFY_THREAD") )
    __debugbreak();
  if ( GetObjectType(scrContext, id) == VAR_TIME_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10690, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, id ) != VAR_TIME_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, id ) != VAR_TIME_THREAD") )
    __debugbreak();
  if ( GetObjectType(scrContext, id) == VAR_CHILD_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10691, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, id ) != VAR_CHILD_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, id ) != VAR_CHILD_THREAD") )
    __debugbreak();
  if ( GetObjectType(scrContext, id) == VAR_DEAD_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10692, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, id ) != VAR_DEAD_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, id ) != VAR_DEAD_THREAD") )
    __debugbreak();
  v4 = IncInParam(scrContext);
  v4->type = VAR_POINTER;
  v4->u.intValue = id;
  AddRefToObject(scrContext, id);
}

/*
==============
Scr_AddString
==============
*/
void Scr_AddString(scrContext_t *scrContext, const char *value)
{
  VariableValue *v4; 
  unsigned int String; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10751, ASSERT_TYPE_ASSERT, "( value )", (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  v4 = IncInParam(scrContext);
  v4->type = VAR_STRING;
  String = SL_GetString(value, 0);
  Scr_SetStringValue(v4, String);
}

/*
==============
Scr_AddStruct
==============
*/
void Scr_AddStruct(scrContext_t *scrContext)
{
  unsigned int v2; 

  v2 = AllocObject(scrContext);
  Scr_AddObject(scrContext, v2);
  RemoveRefToObject(scrContext, v2);
}

/*
==============
Scr_AddStructField
==============
*/
void Scr_AddStructField(scrContext_t *scrContext, unsigned int key)
{
  VariableValue *top; 
  const char *m_scriptPos; 
  VariableValue *v6; 
  unsigned int VariableFieldIndex; 

  top = scrContext->m_vmPub.top;
  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  ScriptCodePos::SetVarUsagePosIfNull(&scrContext->m_varPub.varUsagePos, "<script struct variable>");
  if ( !scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10897, ASSERT_TYPE_ASSERT, "( pScrVmPub->inparamcount )", (const char *)&queryFormat, "pScrVmPub->inparamcount") )
    __debugbreak();
  v6 = --scrContext->m_vmPub.top;
  --scrContext->m_vmPub.inparamcount;
  if ( v6->type != VAR_POINTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10900, ASSERT_TYPE_ASSERT, "( pScrVmPub->top->type == VAR_POINTER )", (const char *)&queryFormat, "pScrVmPub->top->type == VAR_POINTER") )
    __debugbreak();
  VariableFieldIndex = Scr_GetVariableFieldIndex(scrContext, scrContext->m_vmPub.top->u.uintValue, key);
  SetVariableFieldValue(scrContext, VariableFieldIndex, top);
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
}

/*
==============
Scr_AddUndefined
==============
*/
void Scr_AddUndefined(scrContext_t *scrContext)
{
  IncInParam(scrContext)->type = VAR_UNDEFINED;
}

/*
==============
Scr_AddValue
==============
*/
void Scr_AddValue(scrContext_t *scrContext, VariableValue *value)
{
  *IncInParam(scrContext) = *value;
  AddRefToValue(scrContext, (unsigned __int8)value->type, value->u);
}

/*
==============
Scr_AddVector
==============
*/
void Scr_AddVector(scrContext_t *scrContext, const float *value)
{
  VariableValue *v4; 

  v4 = IncInParam(scrContext);
  v4->type = VAR_VECTOR;
  v4->u.scriptCodePosValue = (unsigned __int64)Scr_AllocVector(scrContext, value);
}

/*
==============
Scr_BuiltinCompare_WithContext
==============
*/
__int64 Scr_BuiltinCompare_WithContext(void *context, const void *a, const void *b)
{
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 

  v3 = *((_QWORD *)context + 11686);
  v4 = *(_QWORD *)(v3 + 16i64 * *(int *)a + 8);
  v5 = *(_QWORD *)(v3 + 16i64 * *(int *)b + 8);
  if ( v5 <= v4 )
    return (unsigned int)-(v5 < v4);
  else
    return 1i64;
}

/*
==============
Scr_CalcScriptProfileTrackServerTime
==============
*/
void Scr_CalcScriptProfileTrackServerTime(scrContext_t *scrContext)
{
  unsigned __int64 v4; 
  unsigned int sourceBufferLookupLen; 
  unsigned int v6; 
  unsigned __int64 srcTotal; 
  __int64 v8; 
  __int64 v9; 
  int *v28; 
  unsigned __int64 v33; 
  int _First[8]; 

  if ( scrContext->m_varPub.developer )
  {
    _EBX = 0;
    _RSI = ScriptContext_GetProfile(scrContext);
    _RSI->srcTotal = 0i64;
    v4 = __rdtsc();
    if ( !scrContext->m_parserPub.sourceBufferLookupLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1768, ASSERT_TYPE_ASSERT, "( pScrParserPub->sourceBufferLookupLen > 0 )", (const char *)&queryFormat, "pScrParserPub->sourceBufferLookupLen > 0") )
      __debugbreak();
    sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
    v6 = 0;
    if ( sourceBufferLookupLen )
    {
      srcTotal = _RSI->srcTotal;
      do
      {
        v8 = v6++;
        srcTotal += scrContext->m_parserPub.sourceBufferLookup[v8].allOpTotal;
        _RSI->srcTotal = srcTotal;
        sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
      }
      while ( v6 < sourceBufferLookupLen );
    }
    if ( sourceBufferLookupLen >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1775, ASSERT_TYPE_ASSERT, "(pScrParserPub->sourceBufferLookupLen < MAX_SCRIPT_FILES)", (const char *)&queryFormat, "pScrParserPub->sourceBufferLookupLen < MAX_SCRIPT_FILES") )
      __debugbreak();
    v9 = scrContext->m_parserPub.sourceBufferLookupLen;
    if ( (_DWORD)v9 )
    {
      if ( (unsigned int)v9 >= 0x10 )
      {
        __asm { vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000 }
        _EDX = 8;
        do
        {
          _RAX = _EBX;
          __asm
          {
            vmovd   xmm0, ebx
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
            vmovdqu xmmword ptr [rsp+rax*4+1058h+_First], xmm1
          }
          LODWORD(_RAX) = _EDX - 4;
          _EBX += 16;
          __asm
          {
            vmovd   xmm0, eax
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          _RAX = _EDX - 4;
          __asm { vmovdqu xmmword ptr [rsp+rax*4+1058h+_First], xmm1 }
          _RAX = _EDX;
          __asm
          {
            vmovd   xmm0, edx
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
            vmovdqu xmmword ptr [rsp+rax*4+1058h+_First], xmm1
          }
          _RAX = _EDX + 4;
          _EDX += 16;
          __asm
          {
            vmovd   xmm0, eax
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
            vmovdqu xmmword ptr [rsp+rax*4+1058h+_First], xmm1
          }
        }
        while ( _EBX < ((unsigned int)v9 & 0xFFFFFFF0) );
      }
      if ( _EBX < (unsigned int)v9 )
      {
        v28 = &_First[_EBX];
        do
          *v28++ = _EBX++;
        while ( _EBX < (unsigned int)v9 );
      }
    }
    if ( scrContext->m_Instance )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1792, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_CalcScriptProfileTrackServerTime: invalid script instance") )
        __debugbreak();
    }
    else
    {
      std::_Sort_unchecked<int *,bool (*)(int,int)>(_First, &_First[v9], v9, Scr_CompareScriptProfileCurrentTimeSource_Server);
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+1058h+_First]
      vmovups ymmword ptr [rsi+9B04h], ymm0
      vmovups ymm1, [rsp+1058h+var_1008]
      vmovups ymmword ptr [rsi+9B24h], ymm1
      vmovups ymm0, [rsp+1058h+var_FE8]
      vmovups ymmword ptr [rsi+9B44h], ymm0
      vmovups ymm1, [rsp+1058h+var_FC8]
      vmovups ymmword ptr [rsi+9B64h], ymm1
    }
    v33 = __rdtsc();
    _RSI->scrProfileCalcTimeTotal += (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) - v4;
  }
}

/*
==============
Scr_CancelNotifyList
==============
*/
void Scr_CancelNotifyList(scrContext_t *scrContext, unsigned int notifyListOwnerId)
{
  unsigned int notifyArrayId; 
  unsigned int i; 
  unsigned int Object; 
  unsigned int FirstSibling; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int VariableKeyObject; 
  VariableStackBuffer *scriptCodePosValue; 
  unsigned int Self; 
  unsigned int StartLocalId; 
  unsigned int ObjectVariable; 
  VariableUnion *VariableValueAddress; 

  notifyArrayId = scrContext->m_varPub.notifyArrayId;
  if ( notifyArrayId )
  {
    for ( i = FindObjectVariable(scrContext, notifyArrayId, notifyListOwnerId); i; i = FindObjectVariable(scrContext, scrContext->m_varPub.notifyArrayId, notifyListOwnerId) )
    {
      Object = FindObject(scrContext, i);
      if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8597, ASSERT_TYPE_ASSERT, "( notifyListId )", (const char *)&queryFormat, "notifyListId") )
        __debugbreak();
      FirstSibling = FindFirstSibling(scrContext, Object);
      if ( !FirstSibling )
        break;
      v8 = FindObject(scrContext, FirstSibling);
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8604, ASSERT_TYPE_ASSERT, "( notifyNameListId )", (const char *)&queryFormat, "notifyNameListId") )
        __debugbreak();
      v9 = FindFirstSibling(scrContext, v8);
      v10 = v9;
      if ( !v9 )
        break;
      VariableKeyObject = GetVariableKeyObject(scrContext, v9);
      if ( !VariableKeyObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8611, ASSERT_TYPE_ASSERT, "( startLocalId )", (const char *)&queryFormat, "startLocalId") )
        __debugbreak();
      if ( GetValueType(scrContext, v10) == VAR_STACK )
      {
        scriptCodePosValue = (VariableStackBuffer *)GetVariableValueAddress(scrContext, v10)->scriptCodePosValue;
        Scr_CancelWaittill(scrContext, VariableKeyObject);
        VM_TrimStack(scrContext, VariableKeyObject, scriptCodePosValue, 0);
      }
      else
      {
        AddRefToObject(scrContext, VariableKeyObject);
        Scr_CancelWaittill(scrContext, VariableKeyObject);
        Self = Scr_GetSelf(scrContext, VariableKeyObject);
        StartLocalId = GetStartLocalId(scrContext, Self);
        ObjectVariable = FindObjectVariable(scrContext, scrContext->m_varPub.objectStackId, StartLocalId);
        if ( ObjectVariable )
        {
          if ( Scr_GetThreadNotifyName(scrContext, StartLocalId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8630, ASSERT_TYPE_ASSERT, "( Scr_GetThreadNotifyName( scrContext, selfStartLocalId ) == ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "Scr_GetThreadNotifyName( scrContext, selfStartLocalId ) == NULL_SCR_STRING") )
            __debugbreak();
          if ( GetValueType(scrContext, ObjectVariable) != VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8631, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, stackId ) == VAR_STACK )", (const char *)&queryFormat, "GetValueType( scrContext, stackId ) == VAR_STACK") )
            __debugbreak();
          VariableValueAddress = GetVariableValueAddress(scrContext, ObjectVariable);
          VM_TrimStack(scrContext, StartLocalId, VariableValueAddress->stackValue, 1);
        }
        Scr_KillEndonThread(scrContext, VariableKeyObject);
        RemoveRefToEmptyObject(scrContext, VariableKeyObject);
      }
    }
  }
}

/*
==============
Scr_CancelWaittill
==============
*/
void Scr_CancelWaittill(scrContext_t *scrContext, unsigned int startLocalId)
{
  unsigned int Self; 
  unsigned int ObjectVariable; 
  unsigned int Object; 
  unsigned int v7; 
  VariableUnion *VariableValueAddress; 
  unsigned int intValue; 
  unsigned int v10; 
  unsigned int v11; 
  signed int stringValue; 
  unsigned int Variable; 
  unsigned int v14; 

  Self = Scr_GetSelf(scrContext, startLocalId);
  ObjectVariable = FindObjectVariable(scrContext, scrContext->m_varPub.pauseArrayId, Self);
  Object = FindObject(scrContext, ObjectVariable);
  v7 = FindObjectVariable(scrContext, Object, startLocalId);
  VariableValueAddress = GetVariableValueAddress(scrContext, v7);
  intValue = VariableValueAddress->intValue;
  v10 = FindObjectVariable(scrContext, scrContext->m_varPub.notifyArrayId, VariableValueAddress->intValue);
  v11 = FindObject(scrContext, v10);
  stringValue = Scr_GetThreadNotifyName(scrContext, startLocalId);
  if ( !stringValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7198, ASSERT_TYPE_ASSERT, "( stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stringValue != NULL_SCR_STRING") )
    __debugbreak();
  Variable = FindVariable(scrContext, v11, stringValue);
  v14 = FindObject(scrContext, Variable);
  VM_CancelNotifyInternal(scrContext, intValue, startLocalId, v11, v14, (scr_string_t)stringValue);
  RemoveObjectVariable(scrContext, Object, startLocalId);
  if ( !GetArraySize(scrContext, Object) )
    RemoveObjectVariable(scrContext, scrContext->m_varPub.pauseArrayId, Self);
}

/*
==============
Scr_CheckIfObjectsOrVariablesExceededDeveloperLimits
==============
*/
bool Scr_CheckIfObjectsOrVariablesExceededDeveloperLimits(const scrContext_t *scrContext)
{
  return scrContext->m_varPub.numScriptObjects > scrContext->m_variableListParentSizeDev || scrContext->m_varPub.numScriptValues > scrContext->m_variableListChildSizeDev;
}

/*
==============
Scr_Cleanup
==============
*/
void Scr_Cleanup(scrContext_t *scrContext)
{
  scrContext->m_varPub.evaluate = 0;
}

/*
==============
Scr_CleanupVariables
==============
*/
void Scr_CleanupVariables(scrContext_t *scrContext)
{
  ScriptCodePos *p_varUsagePos; 
  unsigned int *p_timeArrayId; 
  unsigned int FirstSibling; 
  unsigned int Object; 
  unsigned int v6; 
  unsigned int VariableKeyObject; 
  VariableStackBuffer *scriptCodePosValue; 
  unsigned int VariableName; 
  unsigned int i; 
  unsigned int v11; 
  unsigned int v12; 
  int intValue; 

  p_varUsagePos = &scrContext->m_varPub.varUsagePos;
  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, "<script cleanup variable>");
  p_timeArrayId = &scrContext->m_varPub.timeArrayId;
  FirstSibling = FindFirstSibling(scrContext, scrContext->m_varPub.timeArrayId);
  if ( FirstSibling )
  {
    do
    {
      Object = FindObject(scrContext, FirstSibling);
      if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8650, ASSERT_TYPE_ASSERT, "( timeId )", (const char *)&queryFormat, "timeId") )
        __debugbreak();
      if ( scrContext->m_vmPub.function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8651, ASSERT_TYPE_ASSERT, "( !scrContext.m_vmPub.function_count )", (const char *)&queryFormat, "!scrContext.m_vmPub.function_count") )
        __debugbreak();
      AddRefToObject(scrContext, Object);
      v6 = FindFirstSibling(scrContext, Object);
      if ( v6 )
      {
        do
        {
          if ( GetValueType(scrContext, v6) )
          {
            VariableKeyObject = GetVariableKeyObject(scrContext, v6);
            if ( !VariableKeyObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8667, ASSERT_TYPE_ASSERT, "( startLocalId )", (const char *)&queryFormat, "startLocalId") )
              __debugbreak();
            if ( GetValueType(scrContext, v6) != VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8669, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, stackId ) == VAR_STACK )", (const char *)&queryFormat, "GetValueType( scrContext, stackId ) == VAR_STACK") )
              __debugbreak();
            scriptCodePosValue = (VariableStackBuffer *)GetVariableValueAddress(scrContext, v6)->scriptCodePosValue;
            RemoveObjectVariable(scrContext, Object, VariableKeyObject);
            Scr_ClearWaitTime(scrContext, VariableKeyObject);
            VM_TerminateStack(scrContext, VariableKeyObject, VariableKeyObject, scriptCodePosValue);
          }
          else
          {
            RemoveArrayVariable(scrContext, Object, 0);
          }
          v6 = FindFirstSibling(scrContext, Object);
        }
        while ( v6 );
        p_timeArrayId = &scrContext->m_varPub.timeArrayId;
      }
      RemoveRefToObject(scrContext, Object);
      VariableName = GetVariableName(scrContext, FirstSibling);
      RemoveVariable(scrContext, *p_timeArrayId, VariableName);
      FirstSibling = FindFirstSibling(scrContext, *p_timeArrayId);
    }
    while ( FirstSibling );
    p_varUsagePos = &scrContext->m_varPub.varUsagePos;
  }
  for ( i = FindFirstSibling(scrContext, scrContext->m_varPub.pauseArrayId); i; i = FindFirstSibling(scrContext, scrContext->m_varPub.pauseArrayId) )
  {
    v11 = FindObject(scrContext, i);
    v12 = FindFirstSibling(scrContext, v11);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9844, ASSERT_TYPE_ASSERT, "( threadDataId )", (const char *)&queryFormat, "threadDataId") )
      __debugbreak();
    intValue = GetVariableValueAddress(scrContext, v12)->intValue;
    AddRefToObject(scrContext, intValue);
    Scr_CancelNotifyList(scrContext, intValue);
    RemoveRefToObject(scrContext, intValue);
  }
  Scr_FreeInternalVariable(scrContext, &scrContext->m_varPub.levelId);
  Scr_FreeInternalVariable(scrContext, &scrContext->m_varPub.animId);
  Scr_FreeInternalVariable(scrContext, p_timeArrayId);
  Scr_FreeInternalVariable(scrContext, &scrContext->m_varPub.pauseArrayId);
  Scr_FreeInternalVariable(scrContext, &scrContext->m_varPub.notifyArrayId);
  Scr_FreeInternalVariable(scrContext, &scrContext->m_varPub.objectStackId);
  if ( scrContext->m_varPub.freeEntList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9859, ASSERT_TYPE_ASSERT, "( !pScrVarPub->freeEntList )", (const char *)&queryFormat, "!pScrVarPub->freeEntList") )
    __debugbreak();
  ScriptCodePos::SetVarUsagePos(p_varUsagePos, NULL);
}

/*
==============
Scr_ClearErrorMessage
==============
*/
void Scr_ClearErrorMessage(scrContext_t *scrContext)
{
  scrContext->m_varPub.error_message = NULL;
  scrContext->m_vmGlob.dialog_error_message = NULL;
  scrContext->m_varPub.error_index = 0;
}

/*
==============
Scr_ClearOutParams
==============
*/
void Scr_ClearOutParams(scrContext_t *scrContext)
{
  unsigned int outparamcount; 
  VariableValue *top; 

  outparamcount = scrContext->m_vmPub.outparamcount;
  top = scrContext->m_vmPub.top;
  scrContext->m_vmPub.outparamcount = 0;
  for ( scrContext->m_vmPub.top = &top[-outparamcount]; outparamcount; --outparamcount )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)top->type, top->u);
    --top;
  }
}

/*
==============
Scr_CompareScriptProfileCurrentTimeSource_Server
==============
*/
bool Scr_CompareScriptProfileCurrentTimeSource_Server(int index1, int index2)
{
  __int64 v2; 
  __int64 v3; 
  scrContext_t *v4; 

  v2 = index2;
  v3 = index1;
  v4 = ScriptContext_Server();
  return v4->m_parserPub.sourceBufferLookup[v3].allOpTotal > v4->m_parserPub.sourceBufferLookup[v2].allOpTotal;
}

/*
==============
Scr_DecTime
==============
*/
void Scr_DecTime(scrContext_t *scrContext)
{
  if ( (scrContext->m_varPub.time & 0xFF000000) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11321, ASSERT_TYPE_ASSERT, "( !( pScrVarPub->time & ~VAR_NAME_LOW_MASK ) )", (const char *)&queryFormat, "!( pScrVarPub->time & ~VAR_NAME_LOW_MASK )") )
      __debugbreak();
    --scrContext->m_varPub.time;
    HIBYTE(scrContext->m_varPub.time) = 0;
  }
  else
  {
    --scrContext->m_varPub.time;
    HIBYTE(scrContext->m_varPub.time) = 0;
  }
}

/*
==============
Scr_DevPrintCallstack
==============
*/
void Scr_DevPrintCallstack(void)
{
  scrContext_t *v0; 
  int v1; 
  int function_count; 
  __int64 function_frame; 
  const char *ScriptPos; 
  __int64 SourceBuffer; 
  BOOL v6; 
  const char *v7; 
  unsigned int PrevSourcePos; 
  SourceBufferInfo *sourceBufferLookup; 
  const char *buf; 
  const char *v11; 
  int LineNum; 
  char *v13; 
  int v14; 
  int v15; 
  signed __int64 v16; 
  char v17; 
  __int64 v18; 
  char v19[128]; 

  v0 = ScriptContext_Server();
  Com_Printf(7, "\n\n>> Script Callstack Begin\n\n");
  v1 = 1;
  if ( v0->m_vmPub.function_count < 1 )
    goto LABEL_17;
  do
  {
    function_count = v0->m_vmPub.function_count;
    if ( v1 > function_count || !v0->m_varPub.developer )
      break;
    if ( v1 )
      function_frame = (__int64)&v0->m_vmPub.function_frame_start[function_count - v1 + 1];
    else
      function_frame = (__int64)v0->m_vmPub.function_frame;
    ScriptPos = ScriptCodePos::GetScriptPos((ScriptCodePos *)function_frame, v0);
    SourceBuffer = Scr_GetSourceBuffer(v0, ScriptPos - 1);
    v6 = *(_DWORD *)(function_frame + 8) == 0;
    v7 = ScriptCodePos::GetScriptPos((ScriptCodePos *)function_frame, v0);
    PrevSourcePos = Scr_GetPrevSourcePos(v0, v7 - 1, v6);
    sourceBufferLookup = v0->m_parserPub.sourceBufferLookup;
    buf = sourceBufferLookup[SourceBuffer].buf;
    v11 = &sourceBufferLookup[SourceBuffer].sourceBuf[PrevSourcePos];
    LineNum = Scr_GetLineNum(v0, SourceBuffer, PrevSourcePos);
    v13 = v19;
    v14 = 128;
    v15 = LineNum + 1;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 545, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
      __debugbreak();
    if ( *v11 )
    {
      v16 = v11 - v19;
      do
      {
        if ( v14 <= 1 )
          break;
        --v14;
        *v13 = v13[v16];
        ++v13;
        v17 = v13[v16];
        if ( v17 == 59 )
          break;
      }
      while ( v17 );
    }
    LODWORD(v18) = v15;
    *v13 = 0;
    Com_Printf(7, "%d: %s!%s  line %d\n", (unsigned int)v1++, buf, v19, v18);
  }
  while ( v1 <= v0->m_vmPub.function_count );
  if ( v1 == 1 )
LABEL_17:
    Com_Printf(7, "Empty Script VM Callstack. Only valid within a server VM_Execute().\n");
  Com_Printf(7, "\n<< Script Callstack End\n\n");
}

/*
==============
Scr_DoProfile
==============
*/

void __fastcall Scr_DoProfile(scrContext_t *scrContext, double minTime)
{
  __asm { vmovss  dword ptr [rcx+5E1Ch], xmm1 }
  scrContext->m_varPub.bScriptProfile = 1;
}

/*
==============
Scr_DoProfileBuiltin
==============
*/

void __fastcall Scr_DoProfileBuiltin(scrContext_t *scrContext, double minTime)
{
  __asm { vmovss  dword ptr [rcx+5E24h], xmm1 }
  scrContext->m_varPub.bScriptProfileBuiltin = 1;
}

/*
==============
Scr_DoScriptStackTraceToRecord
==============
*/
void Scr_DoScriptStackTraceToRecord(const scrContext_t *scrContext, ScriptStackTraceRecord *record)
{
  __int64 function_count; 
  unsigned int v5; 
  ScriptStackTraceRecord *v6; 
  BOOL v7; 

  memset_0(record, 0, sizeof(ScriptStackTraceRecord));
  if ( scrContext->m_varPub.vmExecuting )
  {
    function_count = scrContext->m_vmPub.function_count;
    v5 = 0;
    if ( function_count >= 0 )
    {
      v6 = record;
      do
      {
        if ( v5 >= 6 )
          break;
        v7 = !function_count || scrContext->m_vmPub.function_frame_start[function_count].fs.localId == 0;
        ++v5;
        v6->entries[0].codePos.m_genericPos = scrContext->m_vmPub.function_frame_start[function_count].fs.pos.m_genericPos;
        v6->entries[0].index = v7;
        v6 = (ScriptStackTraceRecord *)((char *)v6 + 16);
        --function_count;
      }
      while ( function_count >= 0 );
    }
    record->entryCount = v5;
  }
}

/*
==============
Scr_DoScriptTrace
==============
*/
void Scr_DoScriptTrace(scrContext_t *scrContext, int index, const ScriptCodePos scriptCodePos, char *msg, int msgSize)
{
  unsigned __int64 v5; 
  int function_count; 
  __int64 v11; 
  function_frame_t *v12; 
  int codePos; 
  int destPos; 

  v5 = msgSize;
  destPos = 0;
  if ( msgSize > 0 )
    *msg = 0;
  codePos = (unsigned __int8)scrContext->m_Instance;
  Com_sprintfPos_truncate(msg, v5, &destPos, "\nScript VM stack for context %d:\n\n", codePos);
  Scr_PrintPrevCodePosToBuffer(scrContext, msg, v5, &destPos, scriptCodePos, index == 0);
  function_count = scrContext->m_vmPub.function_count;
  if ( function_count )
  {
    v11 = function_count - 1;
    if ( v11 >= 1 )
    {
      v12 = &scrContext->m_vmPub.function_frame_start[v11];
      do
      {
        Com_sprintfPos_truncate(msg, v5, &destPos, "called from:\n");
        Scr_PrintPrevCodePosToBuffer(scrContext, msg, v5, &destPos, v12->fs.pos, v12->fs.localId == 0);
        --v12;
        --v11;
      }
      while ( v11 );
    }
    Com_sprintfPos_truncate(msg, v5, &destPos, "started from:\n");
    Scr_PrintPrevCodePosToBuffer(scrContext, msg, v5, &destPos, scrContext->m_vmPub.function_frame_start[0].fs.pos, 1u);
  }
}

/*
==============
Scr_Error
==============
*/
void Scr_Error(ComErrorCode uniqueErrorCode, scrContext_t *scrContext, const char *error)
{
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, error);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
}

/*
==============
Scr_ErrorInternal
==============
*/
void Scr_ErrorInternal(scrContext_t *scrContext)
{
  SvGameModeApplication *ActiveServerApplication; 
  SvGameModeApplication *v3; 
  __int64 v4; 
  int v5; 

  if ( !scrContext->m_varPub.error_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1365, ASSERT_TYPE_ASSERT, "( pScrVarPub->error_message )", (const char *)&queryFormat, "pScrVarPub->error_message") )
    __debugbreak();
  if ( scrContext->m_varPub.evaluate || scrContext->m_compilePub.script_loading )
  {
    if ( !scrContext->m_vmPub.terminal_error )
      return;
    goto $error_1;
  }
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  ActiveServerApplication->NotifyClientsSRE(ActiveServerApplication, scrContext->m_varPub.error_message);
  v3 = SvGameModeApplication::GetActiveServerApplication();
  v3->LogScriptError(v3);
  if ( !Sys_IsRemoteDebugServer(scrContext) && scrContext->m_varPub.developer && scrContext->m_vmGlob.loading && loading_sre_fatal->current.enabled )
    scrContext->m_vmPub.terminal_error = 1;
  if ( !scrContext->m_vmPub.function_count && !scrContext->m_vmPub.debugCode )
  {
$error_1:
    Blackbox_ScriptUnlockOnError();
    Sys_Error((const ObfuscateErrorText)&queryFormat, scrContext->m_varPub.error_message);
    return;
  }
  Com_PrintMessage(6, "throwing script exception: ", 0);
  Com_PrintMessage(6, scrContext->m_varPub.error_message, 0);
  Com_PrintMessage(6, "\n", 0);
  if ( scrContext->m_errorLevel >= 0x41u )
  {
    v5 = 65;
    LODWORD(v4) = scrContext->m_errorLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1432, ASSERT_TYPE_ASSERT, "(unsigned)( scrContext.m_errorLevel ) < (unsigned)( ( sizeof( *array_counter( scrContext.m_error ) ) + 0 ) )", "scrContext.m_errorLevel doesn't index ARRAY_COUNT( scrContext.m_error )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  Blackbox_ScriptUnlockOnError();
  if ( sre_fatal->current.enabled )
    longjmp_0(scrContext->m_error[(__int64)scrContext->m_errorLevel], -1);
}

/*
==============
Scr_ErrorOnObjectsOrVariablesExceededDeveloperLimits
==============
*/
void Scr_ErrorOnObjectsOrVariablesExceededDeveloperLimits(scrContext_t *scrContext)
{
  __int64 m_variableListParentSizeDev; 
  const char *v3; 

  if ( scr_errorOnExcessDeveloperVariables->current.enabled )
  {
    if ( scrContext->m_vmPub.showError )
    {
      Scr_DumpScriptMemoryUsage(scrContext);
      Scr_DumpScriptThreads(scrContext, 1);
    }
    if ( !s_lastReportedTime_0 || s_lastReportedTime_0 + 120 < Sys_GetTimeAsSeconds() )
    {
      Scr_PrintVars(scrContext, 0x15u, 0);
      s_lastReportedTime_0 = Sys_GetTimeAsSeconds();
    }
    m_variableListParentSizeDev = scrContext->m_variableListParentSizeDev;
    if ( scrContext->m_varPub.numScriptObjects <= (unsigned int)m_variableListParentSizeDev )
    {
      if ( scrContext->m_varPub.numScriptValues <= scrContext->m_variableListChildSizeDev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1712, ASSERT_TYPE_ASSERT, "(Scr_CheckIfVariablesExceededDeveloperLimits( scrContext ))", (const char *)&queryFormat, "Scr_CheckIfVariablesExceededDeveloperLimits( scrContext )") )
        __debugbreak();
      v3 = j_va("Exceeded maximum number of developer script variables (children): %d (ship: %d)", scrContext->m_variableListChildSizeDev, scrContext->m_variableListChildSize);
    }
    else
    {
      v3 = j_va("Exceeded maximum number of developer script objects (parents): %d (ship: %d)", m_variableListParentSizeDev, scrContext->m_variableListParentSize);
    }
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v3);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
}

/*
==============
Scr_ErrorWithDialogMessage
==============
*/
void Scr_ErrorWithDialogMessage(scrContext_t *scrContext, const char *error, const char *dialog_error)
{
  Core_strcpy_truncate(error_message, 0x400ui64, error);
  scrContext->m_varPub.error_message = error_message;
  scrContext->m_vmGlob.dialog_error_message = dialog_error;
  Scr_ErrorInternal(scrContext);
}

/*
==============
Scr_ExecCode
==============
*/
void Scr_ExecCode(scrContext_t *scrContext, const char *pos, unsigned int localId)
{
  int v6; 
  BOOL v7; 
  ScriptCodePos v8; 
  unsigned int v9; 
  ScriptCodePos v10; 
  bool v11; 
  int function_count; 

  Scr_ResetTimeout(scrContext);
  if ( !scrContext->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9638, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.timeArrayId )", (const char *)&queryFormat, "scrContext.m_varPub.timeArrayId") )
    __debugbreak();
  if ( scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9639, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9640, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9642, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
    __debugbreak();
  if ( scrContext->m_vmPub.debugCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9644, ASSERT_TYPE_ASSERT, "( !pScrVmPub->debugCode )", (const char *)&queryFormat, "!pScrVmPub->debugCode") )
    __debugbreak();
  scrContext->m_vmPub.debugCode = 1;
  v6 = Scr_IgnoreErrors(scrContext);
  v7 = v6 == 0;
  if ( !v6 )
    Scr_EnableBreakpoints(scrContext, 0);
  if ( localId )
  {
    v8.m_scriptPos = ScriptCodePos::CreateScriptPos(pos).m_scriptPos;
    VM_Execute(scrContext, localId, v8, 0);
  }
  else
  {
    AddRefToObject(scrContext, scrContext->m_varPub.levelId);
    v9 = AllocThread(scrContext, scrContext->m_varPub.levelId);
    v10.m_scriptPos = ScriptCodePos::CreateScriptPos(pos).m_scriptPos;
    VM_Execute(scrContext, v9, v10, 0);
    Scr_KillThread(scrContext, v9);
    RemoveRefToObject(scrContext, v9);
  }
  if ( v7 )
  {
    if ( !Scr_IgnoreErrors(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9666, ASSERT_TYPE_ASSERT, "( Scr_IgnoreErrors( scrContext ) )", (const char *)&queryFormat, "Scr_IgnoreErrors( scrContext )") )
      __debugbreak();
    Scr_EnableBreakpoints(scrContext, 1);
  }
  if ( !scrContext->m_vmPub.debugCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9670, ASSERT_TYPE_ASSERT, "( pScrVmPub->debugCode )", (const char *)&queryFormat, "pScrVmPub->debugCode") )
    __debugbreak();
  v11 = scrContext->m_vmPub.inparamcount == 1;
  scrContext->m_vmPub.debugCode = 0;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9673, ASSERT_TYPE_ASSERT, "( pScrVmPub->inparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->inparamcount == 1") )
    __debugbreak();
  if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9674, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  function_count = scrContext->m_vmPub.function_count;
  if ( function_count )
  {
    --scrContext->m_vmPub.function_frame;
    scrContext->m_vmPub.function_count = function_count - 1;
  }
  --scrContext->m_vmPub.top;
  scrContext->m_vmPub.inparamcount = 0;
}

/*
==============
Scr_ExecEntThreadNumWithReturnValue
==============
*/
__int64 Scr_ExecEntThreadNumWithReturnValue(scrContext_t *scrContext, LocalClientNum_t localClientNum, int entnum, EntityClass classnum, int handle, unsigned int paramcount, void (*callback)(scrContext_t *, const void *, void *), const void *cbUserData, void *outReturnValue)
{
  const char *m_scriptPos; 
  unsigned int EntityId; 
  unsigned int v16; 
  unsigned int v17; 

  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  _RSI = &scrContext->m_varPub.programBuffer[handle + 1];
  __asm { prefetcht0 byte ptr [rsi] }
  if ( !Scr_IsInOpcodeMemory(scrContext, _RSI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9105, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, pos )") )
    __debugbreak();
  scrContext->m_varPub.varUsagePos = ScriptCodePos::CreateScriptPos(_RSI);
  EntityId = Scr_GetEntityId(scrContext, entnum, classnum, localClientNum);
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  v16 = EntityId;
  Profile2_UpdateEntry(106);
  if ( ((unsigned __int8)&dword_14FDE8178 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8178) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8178);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Scr_ExecThreadWithReturnValue");
  v17 = Scr_ExecThreadInternal(scrContext, handle, v16, paramcount, callback, cbUserData, outReturnValue);
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(106);
  if ( ((unsigned __int64)&dword_14FDE8178 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8178) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8178);
  return v17;
}

/*
==============
Scr_ExecThread
==============
*/
__int64 Scr_ExecThread(scrContext_t *scrContext, int handle, unsigned int paramcount)
{
  unsigned int v6; 

  Profile2_UpdateEntry(106);
  if ( ((unsigned __int8)&dword_14FDE8178 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8178) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8178);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Scr_ExecThread");
  v6 = Scr_ExecThreadInternal(scrContext, handle, scrContext->m_varPub.levelId, paramcount, NULL, NULL, NULL);
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(106);
  if ( ((unsigned __int64)&dword_14FDE8178 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8178) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8178);
  return v6;
}

/*
==============
Scr_ExecThreadCallback_CleanupOnError
==============
*/
void Scr_ExecThreadCallback_CleanupOnError(scrContext_t *scrContext)
{
  RemoveRefToValue(scrContext, (unsigned __int8)scrContext->m_vmPub.top->type, scrContext->m_vmPub.top->u);
  scrContext->m_vmPub.top->type = VAR_UNDEFINED;
  --scrContext->m_vmPub.top;
  --scrContext->m_vmPub.inparamcount;
}

/*
==============
Scr_ExecThreadCallback_EntRef
==============
*/
void Scr_ExecThreadCallback_EntRef(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  VariableValue *top; 
  VariableType type; 
  VariableType ObjectType; 
  const char *NameForType; 
  const char *v9; 
  VariableValue *v10; 
  const char *v11; 
  const char *v12; 

  if ( userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9329, ASSERT_TYPE_ASSERT, "(userData == 0)", (const char *)&queryFormat, "userData == NULL") )
    __debugbreak();
  if ( !outReturnValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9330, ASSERT_TYPE_ASSERT, "(outReturnValue)", (const char *)&queryFormat, "outReturnValue") )
    __debugbreak();
  top = scrContext->m_vmPub.top;
  type = top->type;
  if ( type )
  {
    if ( type == VAR_POINTER )
    {
      ObjectType = GetObjectType(scrContext, top->u.intValue);
      if ( ObjectType != VAR_ENTITY )
      {
        Scr_ExecThreadCallback_CleanupOnError(scrContext);
        NameForType = Scr_GetNameForType(ObjectType);
        v9 = j_va("Callback expected return type of entity.  Provided %s.", NameForType);
        if ( !scrContext->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, v9);
          scrContext->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(scrContext);
      }
      *(scr_entref_t *)outReturnValue = Scr_GetEntityIdRef(scrContext, scrContext->m_vmPub.top->u.uintValue);
    }
    else
    {
      RemoveRefToValue(scrContext, (unsigned __int8)type, top->u);
      scrContext->m_vmPub.top->type = VAR_UNDEFINED;
      v10 = --scrContext->m_vmPub.top;
      --scrContext->m_vmPub.inparamcount;
      v11 = Scr_GetNameForType(v10->type);
      v12 = j_va("Callback expected return type of pointer-entity.  Provided %s.", v11);
      if ( !scrContext->m_varPub.error_message )
      {
        Core_strcpy_truncate(error_message, 0x400ui64, v12);
        scrContext->m_varPub.error_message = error_message;
      }
      Scr_ErrorInternal(scrContext);
    }
  }
  else
  {
    *((_BYTE *)outReturnValue + 4) = 11;
    *(_DWORD *)outReturnValue = 0;
  }
}

/*
==============
Scr_ExecThreadCallback_Float
==============
*/
void Scr_ExecThreadCallback_Float(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  VariableValue *top; 
  VariableType type; 
  const char *NameForType; 
  const char *v11; 

  _RDI = outReturnValue;
  if ( userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9360, ASSERT_TYPE_ASSERT, "(userData == 0)", (const char *)&queryFormat, "userData == NULL") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9361, ASSERT_TYPE_ASSERT, "(outReturnValue)", (const char *)&queryFormat, "outReturnValue") )
    __debugbreak();
  top = scrContext->m_vmPub.top;
  type = top->type;
  if ( type == VAR_FLOAT )
  {
    *_RDI = top->u.intValue;
  }
  else if ( type == VAR_INTEGER )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r8]
      vmovss  dword ptr [rdi], xmm0
    }
  }
  else
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, top->u);
    scrContext->m_vmPub.top->type = VAR_UNDEFINED;
    --scrContext->m_vmPub.top;
    --scrContext->m_vmPub.inparamcount;
    NameForType = Scr_GetNameForType(type);
    v11 = j_va("Callback expected return type of number.  Provided %s.", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v11);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
}

/*
==============
Scr_ExecThreadCallback_FloatArray
==============
*/
void Scr_ExecThreadCallback_FloatArray(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  unsigned int v6; 
  VariableValue *top; 
  VariableType type; 
  VariableValue *v9; 
  const char *NameForType; 
  const char *v11; 
  VariableType ObjectType; 
  const char *v13; 
  const char *v14; 
  int intValue; 
  unsigned int ArraySize; 
  const char *v17; 
  __int64 v18; 
  unsigned int i; 
  ChildVariableValue *v20; 
  const char *v21; 

  if ( !userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9396, ASSERT_TYPE_ASSERT, "(userData)", (const char *)&queryFormat, "userData") )
    __debugbreak();
  if ( !outReturnValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9397, ASSERT_TYPE_ASSERT, "(outReturnValue)", (const char *)&queryFormat, "outReturnValue") )
    __debugbreak();
  v6 = *(_DWORD *)userData;
  if ( !*(_DWORD *)userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9401, ASSERT_TYPE_ASSERT, "(0 < expectedArraySize)", (const char *)&queryFormat, "0 < expectedArraySize") )
    __debugbreak();
  if ( v6 > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9402, ASSERT_TYPE_SANITY, "( expectedArraySize <= 64 )", (const char *)&queryFormat, "expectedArraySize <= 64") )
    __debugbreak();
  top = scrContext->m_vmPub.top;
  type = top->type;
  if ( type != VAR_POINTER )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, top->u);
    scrContext->m_vmPub.top->type = VAR_UNDEFINED;
    v9 = --scrContext->m_vmPub.top;
    --scrContext->m_vmPub.inparamcount;
    NameForType = Scr_GetNameForType(v9->type);
    v11 = j_va("Callback expected an array.  Encountered return type %s.", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v11);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
    top = scrContext->m_vmPub.top;
  }
  ObjectType = GetObjectType(scrContext, top->u.intValue);
  if ( ObjectType != VAR_ARRAY )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)scrContext->m_vmPub.top->type, scrContext->m_vmPub.top->u);
    scrContext->m_vmPub.top->type = VAR_UNDEFINED;
    --scrContext->m_vmPub.top;
    --scrContext->m_vmPub.inparamcount;
    v13 = Scr_GetNameForType(ObjectType);
    v14 = j_va("Callback expected an array.  Encountered dereferenced pointer type %s.", v13);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v14);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  intValue = scrContext->m_vmPub.top->u.intValue;
  ArraySize = GetArraySize(scrContext, intValue);
  if ( v6 != ArraySize )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)scrContext->m_vmPub.top->type, scrContext->m_vmPub.top->u);
    scrContext->m_vmPub.top->type = VAR_UNDEFINED;
    --scrContext->m_vmPub.top;
    --scrContext->m_vmPub.inparamcount;
    v17 = j_va("Callback expected array of size %u.  Provided %u.", v6, ArraySize);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v17);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  v18 = 0i64;
  for ( i = FindLastSibling(scrContext, intValue); i; i = FindPrevSibling(scrContext, i) )
  {
    v20 = &scrContext->m_varGlob.childVariableValue[i];
    if ( (*(_BYTE *)&v20->tn & 0x3F) != 5 )
    {
      RemoveRefToValue(scrContext, (unsigned __int8)scrContext->m_vmPub.top->type, scrContext->m_vmPub.top->u);
      scrContext->m_vmPub.top->type = VAR_UNDEFINED;
      --scrContext->m_vmPub.top;
      --scrContext->m_vmPub.inparamcount;
      v21 = j_va("Callback expected array with elements of type VAR_FLOAT.  Encountered element of type %i.", *(_BYTE *)&v20->tn & 0x3F);
      if ( !scrContext->m_varPub.error_message )
      {
        Core_strcpy_truncate(error_message, 0x400ui64, v21);
        scrContext->m_varPub.error_message = error_message;
      }
      Scr_ErrorInternal(scrContext);
    }
    *((_DWORD *)outReturnValue + v18) = v20->u.f.prev;
    v18 = (unsigned int)(v18 + 1);
  }
  if ( (_DWORD)v18 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9439, ASSERT_TYPE_ASSERT, "(count == expectedArraySize)", (const char *)&queryFormat, "count == expectedArraySize") )
    __debugbreak();
}

/*
==============
Scr_ExecThreadCallback_Func
==============
*/
void Scr_ExecThreadCallback_Func(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  VariableValue *top; 
  VariableType type; 
  VariableValue *v7; 
  const char *NameForType; 
  const char *v9; 

  if ( userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9276, ASSERT_TYPE_ASSERT, "(userData == 0)", (const char *)&queryFormat, "userData == NULL") )
    __debugbreak();
  if ( !outReturnValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9277, ASSERT_TYPE_ASSERT, "(outReturnValue)", (const char *)&queryFormat, "outReturnValue") )
    __debugbreak();
  top = scrContext->m_vmPub.top;
  type = top->type;
  if ( type != VAR_FUNCTION )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, top->u);
    scrContext->m_vmPub.top->type = VAR_UNDEFINED;
    v7 = --scrContext->m_vmPub.top;
    --scrContext->m_vmPub.inparamcount;
    NameForType = Scr_GetNameForType(v7->type);
    v9 = j_va("Callback expected return type of VAR_FUNCTION.  Provided %s.", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v9);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
    top = scrContext->m_vmPub.top;
  }
  *(_DWORD *)outReturnValue = GetProgramBufferOffset(scrContext, top->u.codePosValue);
}

/*
==============
Scr_ExecThreadCallback_ScrString
==============
*/
void Scr_ExecThreadCallback_ScrString(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  VariableValue *top; 
  VariableType type; 
  VariableValue *v7; 
  const char *NameForType; 
  const char *v9; 

  if ( userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9293, ASSERT_TYPE_ASSERT, "(userData == 0)", (const char *)&queryFormat, "userData == NULL") )
    __debugbreak();
  if ( !outReturnValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9294, ASSERT_TYPE_ASSERT, "(outReturnValue)", (const char *)&queryFormat, "outReturnValue") )
    __debugbreak();
  top = scrContext->m_vmPub.top;
  type = top->type;
  if ( type != VAR_STRING && type )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, top->u);
    scrContext->m_vmPub.top->type = VAR_UNDEFINED;
    v7 = --scrContext->m_vmPub.top;
    --scrContext->m_vmPub.inparamcount;
    NameForType = Scr_GetNameForType(v7->type);
    v9 = j_va("Callback expected return type of VAR_STRING.  Provided %s.", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v9);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
    top = scrContext->m_vmPub.top;
  }
  *(_DWORD *)outReturnValue = top->u.intValue;
}

/*
==============
Scr_ExecThreadCallback_ScrStringWithErrorMsg
==============
*/
void Scr_ExecThreadCallback_ScrStringWithErrorMsg(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  VariableValue *top; 
  VariableType type; 
  VariableValue *v8; 
  const char *NameForType; 
  const char *v10; 

  if ( !userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9310, ASSERT_TYPE_ASSERT, "(userData)", (const char *)&queryFormat, "userData") )
    __debugbreak();
  if ( !outReturnValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9311, ASSERT_TYPE_ASSERT, "(outReturnValue)", (const char *)&queryFormat, "outReturnValue") )
    __debugbreak();
  top = scrContext->m_vmPub.top;
  type = top->type;
  if ( type != VAR_STRING && type )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, top->u);
    scrContext->m_vmPub.top->type = VAR_UNDEFINED;
    v8 = --scrContext->m_vmPub.top;
    --scrContext->m_vmPub.inparamcount;
    NameForType = Scr_GetNameForType(v8->type);
    v10 = j_va("%s: Callback expected return type of VAR_STRING.  Provided %s.", (const char *)userData, NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v10);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
    top = scrContext->m_vmPub.top;
  }
  *(_DWORD *)outReturnValue = top->u.intValue;
}

/*
==============
Scr_ExecThreadCallback_Unsigned
==============
*/
void Scr_ExecThreadCallback_Unsigned(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  VariableValue *top; 
  VariableType type; 
  VariableValue *v7; 
  const char *NameForType; 
  const char *v9; 

  if ( userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9237, ASSERT_TYPE_ASSERT, "(userData == 0)", (const char *)&queryFormat, "userData == NULL") )
    __debugbreak();
  if ( !outReturnValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9238, ASSERT_TYPE_ASSERT, "(outReturnValue)", (const char *)&queryFormat, "outReturnValue") )
    __debugbreak();
  top = scrContext->m_vmPub.top;
  type = top->type;
  if ( type != VAR_INTEGER )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, top->u);
    scrContext->m_vmPub.top->type = VAR_UNDEFINED;
    v7 = --scrContext->m_vmPub.top;
    --scrContext->m_vmPub.inparamcount;
    NameForType = Scr_GetNameForType(v7->type);
    v9 = j_va("Callback expected return type of VAR_INTEGER.  Provided %s.", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v9);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
    top = scrContext->m_vmPub.top;
  }
  *(_DWORD *)outReturnValue = top->u.intValue;
}

/*
==============
Scr_ExecThreadCallback_UnsignedWithErrorMsg
==============
*/
void Scr_ExecThreadCallback_UnsignedWithErrorMsg(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  VariableValue *top; 
  VariableType type; 
  VariableValue *v8; 
  const char *NameForType; 
  const char *v10; 

  if ( !userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9255, ASSERT_TYPE_ASSERT, "(userData)", (const char *)&queryFormat, "userData") )
    __debugbreak();
  if ( !outReturnValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9256, ASSERT_TYPE_ASSERT, "(outReturnValue)", (const char *)&queryFormat, "outReturnValue") )
    __debugbreak();
  top = scrContext->m_vmPub.top;
  type = top->type;
  if ( type != VAR_INTEGER )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, top->u);
    scrContext->m_vmPub.top->type = VAR_UNDEFINED;
    v8 = --scrContext->m_vmPub.top;
    --scrContext->m_vmPub.inparamcount;
    NameForType = Scr_GetNameForType(v8->type);
    v10 = j_va("%s: Callback expected return type of VAR_INTEGER.  Provided %s.", (const char *)userData, NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v10);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
    top = scrContext->m_vmPub.top;
  }
  *(_DWORD *)outReturnValue = top->u.intValue;
}

/*
==============
Scr_ExecThreadCallback_VariableValue
==============
*/
void Scr_ExecThreadCallback_VariableValue(scrContext_t *scrContext, const void *userData, void *outReturnValue)
{
  AddRefToValue(scrContext, (unsigned __int8)scrContext->m_vmPub.top->type, scrContext->m_vmPub.top->u);
  *(VariableValue *)outReturnValue = *scrContext->m_vmPub.top;
}

/*
==============
Scr_ExecThreadInternal
==============
*/
__int64 Scr_ExecThreadInternal(scrContext_t *scrContext, int handle, unsigned int objId, unsigned int paramcount, void (*callback)(scrContext_t *, const void *, void *), const void *cbUserData, void *outReturnValue)
{
  __int64 v9; 
  ProfileScript *Profile; 
  ScriptCodePos v14; 
  bool v15; 
  const char *m_scriptPos; 
  const char *ScriptPos; 
  const char *v18; 
  unsigned int v19; 
  __int64 v20; 
  unsigned __int64 v26; 
  const char *VarUsagePos; 
  unsigned __int64 v28; 
  ScriptCodePos v30; 
  ScriptCodePos codePos; 

  v9 = handle;
  _RSI = scrContext;
  Profile = ScriptContext_GetProfile(scrContext);
  Scr_CheckThreadForInstance(_RSI->m_Instance);
  _RBX = &_RSI->m_varPub.programBuffer[v9];
  __asm { prefetcht0 byte ptr [rbx] }
  if ( !Scr_IsInOpcodeMemory(_RSI, _RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9105, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, pos )") )
    __debugbreak();
  v14.m_scriptPos = ScriptCodePos::CreateScriptPos(_RBX).m_scriptPos;
  v15 = _RSI->m_vmPub.function_count == 0;
  codePos.m_scriptPos = v14.m_scriptPos;
  if ( v15 )
  {
    if ( (int *)_RSI->m_vmPub.localVars != &_RSI->m_vmGlob.starttime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9131, ASSERT_TYPE_ASSERT, "( pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1 )", (const char *)&queryFormat, "pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1") )
      __debugbreak();
    Profile_Begin(466);
    Scr_ResetTimeout(_RSI);
  }
  if ( !_RSI->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9142, ASSERT_TYPE_ASSERT, "( pScrVarPub->timeArrayId )", (const char *)&queryFormat, "pScrVarPub->timeArrayId") )
    __debugbreak();
  if ( !(_DWORD)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9143, ASSERT_TYPE_ASSERT, "( handle )", (const char *)&queryFormat, "handle") )
    __debugbreak();
  ++_RSI->m_varPub.ext_threadcount;
  m_scriptPos = _RSI->m_varPub.varUsagePos.m_scriptPos;
  if ( ScriptCodePos::IsScriptPos(&codePos) )
  {
    ScriptPos = ScriptCodePos::GetScriptPos(&codePos, _RSI);
    ScriptCodePos::SetVarUsagePos(&_RSI->m_varPub.varUsagePos, ScriptPos + 1);
  }
  else
  {
    _RSI->m_varPub.varUsagePos = codePos;
  }
  if ( _RSI->m_errorLevel < 0 )
    _RSI->m_runThreadsTimeStart = __rdtsc();
  Scr_VM_EnterExecuteBlock(_RSI);
  AddRefToObject(_RSI, objId);
  v18 = codePos.m_scriptPos;
  v19 = AllocThread(_RSI, objId);
  v20 = VM_Execute(_RSI, v19, (ScriptCodePos)v18, paramcount);
  Scr_VM_LeaveExecuteBlock(_RSI);
  if ( _RSI->m_errorLevel < 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(__rdtsc() - _RSI->m_runThreadsTimeStart) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vcvtsd2ss xmm1, xmm0, xmm0
      vaddss  xmm2, xmm1, dword ptr [rsi+0DF080h]
      vmovss  dword ptr [rsi+0DF080h], xmm2
    }
  }
  v15 = !_RSI->m_varPub.bScriptUsageProfile;
  _RSI->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  if ( !v15 )
  {
    v30.m_scriptPos = m_scriptPos;
    v26 = __rdtsc();
    if ( ScriptCodePos::IsScriptPos(&v30) )
    {
      VarUsagePos = ScriptCodePos::GetVarUsagePos(&v30);
      UpdateCurrentFuncInfo(_RSI, VarUsagePos, 0);
    }
    v28 = __rdtsc();
    Profile->scrProfileCalcTimeTotal += (((unsigned __int64)HIDWORD(v28) << 32) | (unsigned int)v28) - v26;
  }
  if ( _RSI->m_varDebugPub.m_Inited )
    ++_RSI->m_varDebugPub.extRefCount[v20];
  if ( callback )
    callback(_RSI, cbUserData, outReturnValue);
  RemoveRefToValue(_RSI, (unsigned __int8)_RSI->m_vmPub.top->type, _RSI->m_vmPub.top->u);
  _RSI->m_vmPub.top->type = VAR_UNDEFINED;
  --_RSI->m_vmPub.top;
  --_RSI->m_vmPub.inparamcount;
  if ( !_RSI->m_vmPub.function_count )
  {
    Profile_EndInternal(NULL);
    if ( (int *)_RSI->m_vmPub.localVars != &_RSI->m_vmGlob.starttime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9216, ASSERT_TYPE_ASSERT, "( pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1 )", (const char *)&queryFormat, "pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1") )
      __debugbreak();
  }
  return (unsigned int)v20;
}

/*
==============
Scr_ExecThreadWithReturnValue
==============
*/
__int64 Scr_ExecThreadWithReturnValue(scrContext_t *scrContext, int handle, unsigned int paramcount, void (*retCallback)(scrContext_t *, const void *, void *), const void *cbUserData, void *outReturnValue)
{
  unsigned int v10; 

  Profile2_UpdateEntry(106);
  if ( ((unsigned __int8)&dword_14FDE8178 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8178) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8178);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Scr_ExecThreadWithReturnValue");
  v10 = Scr_ExecThreadInternal(scrContext, handle, scrContext->m_varPub.levelId, paramcount, retCallback, cbUserData, outReturnValue);
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(106);
  if ( ((unsigned __int64)&dword_14FDE8178 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8178) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8178);
  return v10;
}

/*
==============
Scr_FixupDebuggerCallstack
==============
*/
void Scr_FixupDebuggerCallstack(scrContext_t *scrContext, unsigned int localId)
{
  __int64 v3; 
  __int64 v4; 
  unsigned int *p_next; 
  int v6; 
  int function_count; 
  __int64 m_freeDebugCallStack; 
  DebugCallStackEntry2 *v9; 
  DebugCallStackEntry *v10; 
  int *v11; 
  const char *v12; 
  const char *ScriptPos; 
  unsigned int v14; 
  unsigned int next; 
  __int64 v16; 
  DebugCallStackEntry2 *m_debugCallStackEntry2; 
  DebugCallStackEntry *m_debugCallStackEntry; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  v3 = localId;
  if ( scrContext->m_varPub.developer && scrContext->m_vmPub.function_count > 1 )
  {
    if ( localId >= scrContext->m_variableListParentSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7214, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( scrContext.m_variableListParentSize )", "localId doesn't index scrContext.m_variableListParentSize\n\t%i not in [0, %i)", localId, scrContext->m_variableListParentSize) )
      __debugbreak();
    v4 = v3;
    if ( scrContext->m_debuggerGlob.m_debugCallStack[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7215, ASSERT_TYPE_ASSERT, "( !debuggerGlob.m_debugCallStack[localId] )", (const char *)&queryFormat, "!debuggerGlob.m_debugCallStack[localId]") )
      __debugbreak();
    p_next = &scrContext->m_debuggerGlob.m_debugCallStack[v4];
    v6 = 0;
    function_count = scrContext->m_vmPub.function_count;
    if ( function_count > 0 )
    {
      while ( 1 )
      {
        m_freeDebugCallStack = scrContext->m_debuggerGlob.m_freeDebugCallStack;
        if ( !(_DWORD)m_freeDebugCallStack )
          break;
        v9 = &scrContext->m_debuggerGlob.m_debugCallStackEntry2[m_freeDebugCallStack];
        v10 = &scrContext->m_debuggerGlob.m_debugCallStackEntry[m_freeDebugCallStack];
        scrContext->m_debuggerGlob.m_freeDebugCallStack = v9->next;
        v11 = &scrContext->m_vmPub.function_count + 10 * (scrContext->m_vmPub.function_count - v6);
        if ( Scr_IsInOpcodeMemory(scrContext, &g_EndPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7235, ASSERT_TYPE_ASSERT, "(!Scr_IsInOpcodeMemory( scrContext, &g_EndPos ))", (const char *)&queryFormat, "!Scr_IsInOpcodeMemory( scrContext, &g_EndPos )") )
          __debugbreak();
        if ( ScriptCodePos::IsScriptPos((ScriptCodePos *)v11) && (v12 = ScriptCodePos::GetScriptPos((ScriptCodePos *)v11, scrContext), Scr_IsInOpcodeMemory(scrContext, v12)) )
        {
          ScriptPos = ScriptCodePos::GetScriptPos((ScriptCodePos *)v11, scrContext);
          v14 = (2 * GetProgramBufferOffset(scrContext, ScriptPos)) | (v11[2] == 0);
        }
        else
        {
          v14 = -1;
        }
        v10->codeOffset = v14;
        ++v6;
        v9->next = 0;
        *p_next = m_freeDebugCallStack;
        p_next = &v9->next;
        function_count = scrContext->m_vmPub.function_count;
        if ( v6 >= function_count )
          goto LABEL_21;
      }
      *p_next = 1;
      function_count = scrContext->m_vmPub.function_count;
    }
LABEL_21:
    if ( scrContext->m_vmPub.function_frame_start[1].fs.localId >= scrContext->m_variableListParentSize )
    {
      LODWORD(v21) = scrContext->m_variableListParentSize;
      LODWORD(v20) = scrContext->m_vmPub.function_frame_start[1].fs.localId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7255, ASSERT_TYPE_ASSERT, "(unsigned)( scrVmPub.function_frame_start[1].fs.localId ) < (unsigned)( scrContext.m_variableListParentSize )", "scrVmPub.function_frame_start[1].fs.localId doesn't index scrContext.m_variableListParentSize\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    next = scrContext->m_debuggerGlob.m_debugCallStack[scrContext->m_vmPub.function_frame_start[1].fs.localId];
    if ( next )
    {
      while ( 1 )
      {
        v16 = scrContext->m_debuggerGlob.m_freeDebugCallStack;
        if ( !(_DWORD)v16 || next == 1 )
          break;
        if ( function_count >= 64 )
        {
          *p_next = 0;
          return;
        }
        m_debugCallStackEntry2 = scrContext->m_debuggerGlob.m_debugCallStackEntry2;
        ++function_count;
        m_debugCallStackEntry = scrContext->m_debuggerGlob.m_debugCallStackEntry;
        scrContext->m_debuggerGlob.m_freeDebugCallStack = (unsigned int)m_debugCallStackEntry2[v16];
        v19 = next;
        next = m_debugCallStackEntry2[next].next;
        m_debugCallStackEntry[v16] = m_debugCallStackEntry[v19];
        m_debugCallStackEntry2[v16].next = 0;
        *p_next = v16;
        p_next = &m_debugCallStackEntry2[v16].next;
        if ( !next )
          return;
      }
      *p_next = 1;
    }
  }
}

/*
==============
Scr_FreeThread
==============
*/
void Scr_FreeThread(scrContext_t *scrContext, unsigned int handle)
{
  __int64 v2; 

  v2 = handle;
  if ( !scrContext->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9611, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.timeArrayId )", (const char *)&queryFormat, "scrContext.m_varPub.timeArrayId") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9612, ASSERT_TYPE_ASSERT, "( handle )", (const char *)&queryFormat, "handle") )
    __debugbreak();
  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( scrContext->m_varDebugPub.m_Inited )
    --scrContext->m_varDebugPub.extRefCount[v2];
  RemoveRefToObject(scrContext, v2);
  --scrContext->m_varPub.ext_threadcount;
}

/*
==============
Scr_GetAnim
==============
*/
scr_anim_t Scr_GetAnim(scrContext_t *scrContext, unsigned int index, XAnimTree *tree)
{
  VariableValue *v6; 
  VariableType type; 
  VariableUnion v8; 
  XAnim_s *Anims; 
  const XAnim_s *v10; 
  const char *AnimTreeDebugName; 
  const XAnim_s *v12; 
  const char *v13; 
  const XAnim_s *v14; 
  const char *AnimDebugName; 
  const char *v16; 
  const char *NameForType; 
  const char *v19; 
  VariableUnion u; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v6 = &scrContext->m_vmPub.top[-index];
    type = v6->type;
    if ( type == VAR_ANIMATION )
    {
      u = v6->u;
      v8 = v6->u;
      if ( !WORD1(v6->u.scriptCodePosValue) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10020, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
        __debugbreak();
      if ( !tree )
        return (scr_anim_t)v8.scriptCodePosValue;
      Anims = Scr_GetAnims(scrContext, HIWORD(u.uintValue));
      if ( Anims == XAnimGetAnims(tree) )
        return (scr_anim_t)v8.scriptCodePosValue;
      v10 = XAnimGetAnims(tree);
      AnimTreeDebugName = XAnimGetAnimTreeDebugName(v10);
      v12 = Scr_GetAnims(scrContext, HIWORD(u.uintValue));
      v13 = XAnimGetAnimTreeDebugName(v12);
      v14 = Scr_GetAnims(scrContext, HIWORD(u.uintValue));
      AnimDebugName = XAnimGetAnimDebugName(v14, LOWORD(u.uintValue));
      v16 = j_va("anim '%s' in animtree '%s' does not belong to the entity's animtree '%s'", AnimDebugName, v13, AnimTreeDebugName);
    }
    else
    {
      NameForType = Scr_GetNameForType(type);
      v16 = j_va("type %s is not an anim", NameForType);
    }
    scrContext->m_varPub.error_message = v16;
    RemoveRefToValue(scrContext, (unsigned __int8)v6->type, v6->u);
    v6->type = VAR_UNDEFINED;
    scrContext->m_varPub.error_index = index + 1;
    Scr_ErrorInternal(scrContext);
  }
  v19 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v19);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  u.intValue = 0;
  return (scr_anim_t)u.scriptCodePosValue;
}

/*
==============
Scr_GetAnimTree
==============
*/
scr_animtree_t Scr_GetAnimTree(scrContext_t *scrContext, unsigned int index)
{
  VariableValue *v4; 
  VariableType type; 
  __int64 uintValue; 
  scr_animtree_t result; 
  const char *v8; 
  const char *NameForType; 
  const char *v10; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v4 = &scrContext->m_vmPub.top[-index];
    type = v4->type;
    if ( type == VAR_INTEGER )
    {
      uintValue = v4->u.uintValue;
      if ( (unsigned int)uintValue <= scrContext->m_animPub.xanim_num[1] )
      {
        result.anims = scrContext->m_animPub.xanim_lookup[1][uintValue].anims;
        if ( result.anims )
          return result;
      }
      v8 = "bad anim tree";
    }
    else
    {
      NameForType = Scr_GetNameForType(type);
      v8 = j_va("type %s is not an animtree", NameForType);
    }
    scrContext->m_varPub.error_message = v8;
    RemoveRefToValue(scrContext, (unsigned __int8)v4->type, v4->u);
    v4->type = VAR_UNDEFINED;
    scrContext->m_varPub.error_index = index + 1;
    Scr_ErrorInternal(scrContext);
  }
  v10 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v10);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return (scr_animtree_t)scrContext->m_animPub.xanim_lookup[1][0].anims;
}

/*
==============
Scr_GetBuiltinTime
==============
*/
float Scr_GetBuiltinTime(ScriptInstanceType inst)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rcx
  }
  if ( (ScriptContext_GetFromInstance(inst)->m_builtinTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcvtsd2ss xmm0, xmm0, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
Scr_GetConstIString
==============
*/
__int64 Scr_GetConstIString(scrContext_t *scrContext, unsigned int index)
{
  VariableValue *v4; 
  const char *NameForType; 
  const char *v7; 
  const char *v8; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v4 = &scrContext->m_vmPub.top[-index];
    if ( v4->type == VAR_ISTRING )
      return v4->u.uintValue;
    scrContext->m_varPub.error_index = index + 1;
    NameForType = Scr_GetNameForType(v4->type);
    v7 = j_va("type %s is not a localized string", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v7);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  v8 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v8);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return 0i64;
}

/*
==============
Scr_GetConstLowercaseString
==============
*/
__int64 Scr_GetConstLowercaseString(scrContext_t *scrContext, unsigned int index)
{
  VariableValue *v4; 
  scr_string_t intValue; 
  const char *v6; 
  char *v7; 
  int v8; 
  unsigned int String; 
  const char *v11; 
  char str[8192]; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v4 = &scrContext->m_vmPub.top[-index];
    if ( Scr_CastString(scrContext, v4) )
    {
      if ( v4->type != VAR_STRING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10198, ASSERT_TYPE_ASSERT, "( value->type == VAR_STRING )", (const char *)&queryFormat, "value->type == VAR_STRING") )
        __debugbreak();
      intValue = v4->u.intValue;
      v6 = SL_ConvertToString((scr_string_t)v4->u.intValue);
      str[0] = tolower(*v6);
      if ( *v6 )
      {
        v7 = (char *)(str - v6);
        do
        {
          v8 = *++v6;
          v6[(_QWORD)v7] = tolower(v8);
        }
        while ( *v6 );
      }
      if ( v4->type != VAR_STRING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10209, ASSERT_TYPE_ASSERT, "( value->type == VAR_STRING )", (const char *)&queryFormat, "value->type == VAR_STRING", *(_QWORD *)str) )
        __debugbreak();
      String = SL_GetString(str, 0);
      Scr_SetStringValue(v4, String);
      SL_RemoveRefToString(intValue);
      SL_CheckExists((scr_string_t)v4->u.intValue);
      return v4->u.uintValue;
    }
    scrContext->m_varPub.error_index = index + 1;
    Scr_ErrorInternal(scrContext);
  }
  v11 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v11);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return 0i64;
}

/*
==============
Scr_GetConstString
==============
*/
__int64 Scr_GetConstString(scrContext_t *scrContext, unsigned int index)
{
  VariableValue *v4; 
  const char *v6; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v4 = &scrContext->m_vmPub.top[-index];
    if ( Scr_CastString(scrContext, v4) )
    {
      if ( v4->type != VAR_STRING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10164, ASSERT_TYPE_ASSERT, "( value->type == VAR_STRING )", (const char *)&queryFormat, "value->type == VAR_STRING") )
        __debugbreak();
      SL_CheckExists((scr_string_t)v4->u.intValue);
      return v4->u.uintValue;
    }
    scrContext->m_varPub.error_index = index + 1;
    Scr_ErrorInternal(scrContext);
  }
  v6 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v6);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return 0i64;
}

/*
==============
Scr_GetConstStringIncludeNull
==============
*/
scr_string_t Scr_GetConstStringIncludeNull(scrContext_t *scrContext, unsigned int index)
{
  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index >= scrContext->m_vmPub.outparamcount || scrContext->m_vmPub.top[-index].type )
    return Scr_GetConstString(scrContext, index);
  else
    return 0;
}

/*
==============
Scr_GetDebugString
==============
*/
const char *Scr_GetDebugString(scrContext_t *scrContext, unsigned int index)
{
  VariableValue *v4; 
  const char *v6; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index >= scrContext->m_vmPub.outparamcount )
  {
    v6 = j_va("parameter %d does not exist", index + 1);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v6);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
    return 0i64;
  }
  else
  {
    v4 = &scrContext->m_vmPub.top[-index];
    Scr_CastDebugString(scrContext, v4);
    if ( v4->type != VAR_STRING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10262, ASSERT_TYPE_ASSERT, "( value->type == VAR_STRING )", (const char *)&queryFormat, "value->type == VAR_STRING") )
      __debugbreak();
    return SL_ConvertToString((scr_string_t)v4->u.intValue);
  }
}

/*
==============
Scr_GetEntFieldTime
==============
*/
float Scr_GetEntFieldTime(ScriptInstanceType inst)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rcx
  }
  if ( (ScriptContext_GetFromInstance(inst)->m_entFieldTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcvtsd2ss xmm0, xmm0, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
Scr_GetEntityArray
==============
*/
__int64 Scr_GetEntityArray(const scrContext_t *scrContext, unsigned int arrayObjectId, unsigned int bufferSize, unsigned int *buffer, unsigned int *count, unsigned int *failureIndex, VariableType *failureType)
{
  unsigned int FirstSibling; 
  unsigned int Object; 
  VariableType ObjectType; 
  __int64 v14; 

  if ( !arrayObjectId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10540, ASSERT_TYPE_ASSERT, "( arrayObjectId )", (const char *)&queryFormat, "arrayObjectId") )
    __debugbreak();
  if ( GetObjectType(scrContext, arrayObjectId) != VAR_ARRAY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10541, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, arrayObjectId ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, arrayObjectId ) == VAR_ARRAY") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10542, ASSERT_TYPE_ASSERT, "( buffer )", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10543, ASSERT_TYPE_ASSERT, "( count )", (const char *)&queryFormat, "count") )
    __debugbreak();
  if ( !failureIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10544, ASSERT_TYPE_ASSERT, "( failureIndex )", (const char *)&queryFormat, "failureIndex") )
    __debugbreak();
  if ( !failureType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10545, ASSERT_TYPE_ASSERT, "( failureType )", (const char *)&queryFormat, "failureType") )
    __debugbreak();
  *count = 0;
  FirstSibling = FindFirstSibling(scrContext, arrayObjectId);
  if ( !FirstSibling )
    return 1i64;
  while ( GetValueType(scrContext, FirstSibling) == VAR_POINTER && *count < bufferSize )
  {
    Object = FindObject(scrContext, FirstSibling);
    if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10558, ASSERT_TYPE_ASSERT, "( objectId )", (const char *)&queryFormat, "objectId") )
      __debugbreak();
    ObjectType = GetObjectType(scrContext, Object);
    if ( ObjectType != VAR_DEAD_ENTITY )
    {
      v14 = *count;
      if ( ObjectType != VAR_ENTITY )
      {
        *failureIndex = v14;
        *failureType = GetValueType(scrContext, FirstSibling);
        return 0i64;
      }
      buffer[v14] = Object;
      ++*count;
    }
    FirstSibling = FindNextSibling(scrContext, FirstSibling);
    if ( !FirstSibling )
      return 1i64;
  }
  *failureIndex = *count;
  *failureType = GetValueType(scrContext, FirstSibling);
  return 0i64;
}

/*
==============
Scr_GetEntityRef
==============
*/
scr_entref_t Scr_GetEntityRef(scrContext_t *scrContext, unsigned int index)
{
  VariableValue *v4; 
  unsigned int intValue; 
  int v7; 
  VariableType ObjectType; 
  const char *NameForType; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  __int64 v14; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v4 = &scrContext->m_vmPub.top[-index];
    if ( v4->type == VAR_POINTER )
    {
      intValue = v4->u.intValue;
      if ( GetObjectType(scrContext, v4->u.intValue) == VAR_ENTITY )
        return Scr_GetEntityIdRef(scrContext, intValue);
      v7 = index + 1;
      scrContext->m_varPub.error_index = index + 1;
      ObjectType = GetObjectType(scrContext, intValue);
      NameForType = Scr_GetNameForType(ObjectType);
      v10 = j_va("type %s is not an entity", NameForType);
      if ( !scrContext->m_varPub.error_message )
      {
        Core_strcpy_truncate(error_message, 0x400ui64, v10);
        scrContext->m_varPub.error_message = error_message;
      }
      Scr_ErrorInternal(scrContext);
    }
    else
    {
      v7 = index + 1;
    }
    scrContext->m_varPub.error_index = v7;
    v11 = Scr_GetNameForType(v4->type);
    v12 = j_va("type %s is not an entity", v11);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v12);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  v13 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v13);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  BYTE4(v14) = 11;
  LODWORD(v14) = 0;
  return (scr_entref_t)v14;
}

/*
==============
Scr_GetFloat
==============
*/
float Scr_GetFloat(scrContext_t *scrContext, unsigned int index)
{
  VariableType type; 
  const char *NameForType; 
  const char *v10; 
  const char *v11; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    _RCX = &scrContext->m_vmPub.top[-index];
    type = _RCX->type;
    if ( type == VAR_FLOAT )
    {
      __asm { vmovss  xmm0, dword ptr [rcx] }
      return *(float *)&_XMM0;
    }
    if ( type == VAR_INTEGER )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rcx]
      }
      return *(float *)&_XMM0;
    }
    scrContext->m_varPub.error_index = index + 1;
    NameForType = Scr_GetNameForType(_RCX->type);
    v10 = j_va("type %s is not a float", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v10);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  v11 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v11);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
Scr_GetFloatOptional
==============
*/

float __fastcall Scr_GetFloatOptional(scrContext_t *scrContext, unsigned int index, double defaultValue)
{
  VariableType type; 
  const char *NameForType; 
  const char *v15; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index >= scrContext->m_vmPub.outparamcount )
    goto LABEL_8;
  _R8 = &scrContext->m_vmPub.top[-index];
  type = _R8->type;
  if ( type == VAR_UNDEFINED )
    goto LABEL_8;
  if ( type != VAR_FLOAT )
  {
    if ( type == VAR_INTEGER )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r8]
        vmovaps xmm6, [rsp+38h+var_18]
      }
      return *(float *)&_XMM0;
    }
    scrContext->m_varPub.error_index = index + 1;
    NameForType = Scr_GetNameForType(_R8->type);
    v15 = j_va("type %s is not a float", NameForType);
    Scr_Error(COM_ERR_3403, scrContext, v15);
LABEL_8:
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
    return *(float *)&_XMM0;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
Scr_GetFunc
==============
*/
unsigned int Scr_GetFunc(scrContext_t *scrContext, unsigned int index)
{
  VariableValue *v4; 
  const char *NameForType; 
  const char *v7; 
  const char *v8; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v4 = &scrContext->m_vmPub.top[-index];
    if ( v4->type == VAR_FUNCTION )
    {
      if ( !Scr_IsInOpcodeMemory(scrContext, v4->u.codePosValue) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10346, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, value->u.codePosValue ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, value->u.codePosValue )") )
        __debugbreak();
      return GetProgramBufferOffset(scrContext, v4->u.codePosValue);
    }
    scrContext->m_varPub.error_index = index + 1;
    NameForType = Scr_GetNameForType(v4->type);
    v7 = j_va("type %s is not a function", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v7);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  v8 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v8);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return 0;
}

/*
==============
Scr_GetIString
==============
*/
const char *Scr_GetIString(scrContext_t *scrContext, unsigned int index)
{
  VariableValue *v4; 
  const char *NameForType; 
  const char *v7; 
  const char *v8; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v4 = &scrContext->m_vmPub.top[-index];
    if ( v4->type == VAR_ISTRING )
      return SL_ConvertToString((scr_string_t)v4->u.intValue);
    scrContext->m_varPub.error_index = index + 1;
    NameForType = Scr_GetNameForType(v4->type);
    v7 = j_va("type %s is not a localized string", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v7);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  v8 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v8);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return SL_ConvertToString((scr_string_t)0);
}

/*
==============
Scr_GetInt
==============
*/
__int64 Scr_GetInt(scrContext_t *scrContext, unsigned int index)
{
  VariableValue *v4; 
  const char *NameForType; 
  const char *v7; 
  const char *v8; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v4 = &scrContext->m_vmPub.top[-index];
    if ( v4->type == VAR_INTEGER )
      return v4->u.uintValue;
    scrContext->m_varPub.error_index = index + 1;
    NameForType = Scr_GetNameForType(v4->type);
    v7 = j_va("type %s is not an int", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v7);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  v8 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v8);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return 0i64;
}

/*
==============
Scr_GetLastScriptPlace
==============
*/
void Scr_GetLastScriptPlace(const scrContext_t *scrContext, int *line, const char **filename)
{
  const char *lastFileName; 
  const char *v4; 

  *line = scrContext->m_vmGlob.lastLine;
  lastFileName = scrContext->m_vmGlob.lastFileName;
  v4 = (char *)&queryFormat.fmt + 3;
  if ( lastFileName )
    v4 = lastFileName;
  *filename = v4;
}

/*
==============
Scr_GetNextCodepos
==============
*/
const char *Scr_GetNextCodepos(scrContext_t *scrContext, VariableValue *top, const char *pos, int opcode, int mode, unsigned int *localId, int *isReturnPos)
{
  __int64 v7; 
  const char *error_message; 
  const char *result; 
  unsigned __int16 v14; 
  int v15; 
  int type; 
  unsigned __int16 v17; 
  unsigned __int8 v18; 
  unsigned __int8 v19; 
  function_frame_t *function_frame; 
  __int64 v21; 
  int v22; 
  const char *v23; 
  int *v24; 
  VariableType v25; 
  int v26; 
  _DWORD *v27; 
  int v28; 
  int v29; 
  __int64 v30; 
  VariableValue value; 

  v7 = 0i64;
  *isReturnPos = 0;
  *localId = scrContext->m_vmPub.function_frame->fs.localId;
  error_message = scrContext->m_varPub.error_message;
  while ( 2 )
  {
    ++pos;
    if ( error_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6694, ASSERT_TYPE_ASSERT, "( !pScrVarPub->error_message )", (const char *)&queryFormat, "!pScrVarPub->error_message") )
      __debugbreak();
    if ( !top && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6695, ASSERT_TYPE_ASSERT, "( top )", (const char *)&queryFormat, "top") )
      __debugbreak();
    if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6696, ASSERT_TYPE_ASSERT, "( pos )", (const char *)&queryFormat, "pos") )
      __debugbreak();
    if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6697, ASSERT_TYPE_ASSERT, "( pScrVarPub->evaluate )", (const char *)&queryFormat, "pScrVarPub->evaluate") )
      __debugbreak();
    if ( mode == 2 )
    {
      switch ( opcode )
      {
        case 5:
        case 41:
        case 51:
        case 101:
        case 110:
        case 150:
          if ( top->type == VAR_POINTER )
            goto $LN53_13;
          goto LABEL_22;
        case 20:
        case 74:
        case 104:
          if ( top[-1].type == VAR_POINTER )
            goto $LN57_14;
          goto LABEL_22;
        case 23:
        case 53:
        case 72:
        case 79:
        case 96:
        case 117:
        case 138:
        case 152:
$LN53_13:
          if ( scrContext->m_vmPub.function_count >= 64 )
            goto LABEL_22;
          *localId = 0;
          result = &pos[(__int64)(int)(*(_DWORD *)pos << 8) >> 8];
          break;
        case 70:
        case 105:
        case 116:
$LN57_14:
          if ( top->type != VAR_FUNCTION || scrContext->m_vmPub.function_count >= 64 )
            goto LABEL_22;
          *localId = 0;
          result = (const char *)top->u.scriptCodePosValue;
          break;
        default:
          goto LABEL_22;
      }
      return result;
    }
LABEL_22:
    switch ( opcode )
    {
      case 0:
      case 2:
      case 6:
      case 9:
      case 10:
      case 12:
      case 13:
      case 15:
      case 16:
      case 17:
      case 18:
      case 21:
      case 26:
      case 36:
      case 38:
      case 39:
      case 42:
      case 43:
      case 45:
      case 46:
      case 49:
      case 54:
      case 55:
      case 57:
      case 58:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
      case 66:
      case 67:
      case 74:
      case 75:
      case 78:
      case 83:
      case 84:
      case 87:
      case 88:
      case 89:
      case 90:
      case 92:
      case 93:
      case 94:
      case 97:
      case 100:
      case 103:
      case 105:
      case 106:
      case 115:
      case 118:
      case 119:
      case 120:
      case 121:
      case 124:
      case 125:
      case 133:
      case 135:
      case 136:
      case 139:
      case 143:
      case 144:
      case 149:
      case 151:
      case 153:
      case 154:
      case 155:
      case 162:
      case 163:
      case 164:
      case 165:
      case 167:
      case 168:
        goto $LN39_25;
      case 1:
      case 3:
      case 20:
      case 22:
      case 40:
      case 52:
      case 68:
      case 70:
      case 71:
      case 81:
      case 98:
      case 99:
      case 104:
      case 107:
      case 113:
      case 116:
      case 140:
      case 142:
      case 147:
      case 185:
      case 186:
      case 187:
      case 188:
        goto $LN113;
      case 4:
      case 7:
      case 8:
      case 24:
      case 37:
      case 44:
      case 56:
      case 60:
      case 73:
      case 76:
      case 95:
      case 109:
      case 112:
      case 122:
      case 123:
      case 141:
      case 157:
        pos += 4;
        goto $LN39_25;
      case 5:
      case 23:
      case 41:
      case 53:
      case 72:
      case 101:
      case 110:
      case 138:
      case 173:
      case 174:
      case 175:
      case 176:
      case 181:
      case 182:
      case 183:
      case 184:
        pos += 3;
$LN113:
        ++pos;
        goto $LN39_25;
      case 11:
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
      case 48:
      case 50:
      case 69:
      case 80:
      case 82:
      case 85:
      case 91:
      case 102:
      case 126:
      case 127:
      case 128:
      case 129:
      case 130:
      case 131:
      case 158:
      case 159:
        pos += 2;
        goto $LN39_25;
      case 14:
      case 28:
        v14 = *(_WORD *)pos;
        pos += 2;
        if ( Scr_SkipIntructions(scrContext) )
          return &pos[v14];
        type = (unsigned __int8)top->type;
        value.u.scriptCodePosValue = top->u.scriptCodePosValue;
        value.type = type;
        AddRefToValue(scrContext, type, value.u);
        if ( value.type == VAR_INTEGER )
          value.u.intValue = value.u.intValue != 0;
        else
          Scr_CastBool_NonInteger(scrContext, &value);
        if ( scrContext->m_varPub.error_message )
          goto $LN39_25;
        if ( value.type != VAR_INTEGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6791, ASSERT_TYPE_ASSERT, "( value.type == VAR_INTEGER )", (const char *)&queryFormat, "value.type == VAR_INTEGER") )
          __debugbreak();
        if ( !value.u.intValue )
          return pos;
        return &pos[v14];
      case 19:
        pos += 12;
        goto $LN39_25;
      case 25:
      case 114:
        v14 = *(_WORD *)pos;
        pos += 2;
        if ( Scr_SkipIntructions(scrContext) )
          return &pos[v14];
        v15 = (unsigned __int8)top->type;
        value.u.scriptCodePosValue = top->u.scriptCodePosValue;
        value.type = v15;
        AddRefToValue(scrContext, v15, value.u);
        if ( value.type == VAR_INTEGER )
          value.u.intValue = value.u.intValue != 0;
        else
          Scr_CastBool_NonInteger(scrContext, &value);
        if ( scrContext->m_varPub.error_message )
        {
$LN39_25:
          scrContext->m_varPub.error_message = NULL;
          scrContext->m_vmGlob.dialog_error_message = NULL;
          scrContext->m_varPub.error_index = 0;
          opcode = *(unsigned __int8 *)pos;
          if ( opcode != 135 )
            return pos;
          error_message = NULL;
          continue;
        }
        if ( value.type != VAR_INTEGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6772, ASSERT_TYPE_ASSERT, "( value.type == VAR_INTEGER )", (const char *)&queryFormat, "value.type == VAR_INTEGER") )
          __debugbreak();
        if ( value.u.intValue )
          return pos;
        else
          return &pos[v14];
      case 27:
        v17 = *(_WORD *)pos;
        pos += 2;
        if ( Scr_SkipIntructions(scrContext) )
          goto $LN39_25;
        pos -= v17;
        return pos;
      case 35:
      case 51:
      case 79:
      case 96:
      case 117:
      case 132:
      case 137:
      case 146:
      case 150:
      case 152:
      case 169:
      case 170:
      case 171:
      case 172:
      case 177:
      case 178:
      case 179:
      case 180:
        pos += 3;
        goto $LN39_25;
      case 47:
      case 59:
        *isReturnPos = 1;
        if ( scrContext->m_vmPub.function_count > 1 )
        {
          function_frame = scrContext->m_vmPub.function_frame;
          if ( !ScriptCodePos::IsEndPos(&function_frame[-1].fs.pos) )
          {
            *localId = function_frame[-1].fs.localId;
            return function_frame[-1].fs.pos.m_scriptPos;
          }
        }
        return (const char *)v7;
      case 86:
        return &pos[7 * *(unsigned __int16 *)pos + 2];
      case 134:
        v21 = *(int *)pos;
        v22 = *(unsigned __int16 *)&pos[v21 + 4];
        v23 = &pos[v21 + 4];
        v24 = (int *)(v23 + 2);
        if ( Scr_SkipIntructions(scrContext) )
          goto LABEL_77;
        v25 = top->type;
        if ( v25 == VAR_STRING )
        {
          LODWORD(v7) = top->u.intValue;
        }
        else
        {
          if ( v25 != VAR_INTEGER || !IsValidArrayIndex(top->u.intValue) )
            return &v23[7 * v22 + 2];
          LODWORD(v7) = GetInternalVariableIndex(top->u.intValue);
        }
LABEL_77:
        if ( !v22 )
          return (const char *)v24;
        if ( !(_DWORD)v7 && !Scr_SkipIntructions(scrContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6844, ASSERT_TYPE_ASSERT, "( caseValue || Scr_SkipIntructions( scrContext ) )", (const char *)&queryFormat, "caseValue || Scr_SkipIntructions( scrContext )") )
          __debugbreak();
        do
        {
          v26 = *v24;
          v27 = v24 + 1;
          v28 = v24[1];
          v24 = (int *)((char *)v24 + 7);
          v29 = v28 << 8;
          pos = (char *)v27 + ((__int64)v29 >> 8);
          if ( v26 == (_DWORD)v7 )
          {
            if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6853, ASSERT_TYPE_ASSERT, "( pos )", (const char *)&queryFormat, "pos") )
              __debugbreak();
            return pos;
          }
          --v22;
        }
        while ( v22 );
        if ( !v26 )
        {
          v24 = (_DWORD *)((char *)v27 + ((__int64)v29 >> 8));
          if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6863, ASSERT_TYPE_ASSERT, "( pos )", (const char *)&queryFormat, "pos") )
            __debugbreak();
        }
        return (const char *)v24;
      case 145:
      case 156:
        pos += 8;
        goto $LN39_25;
      case 148:
        return &pos[*(int *)pos + 4];
      case 160:
        pos += (*pos == 1) + 5;
        goto $LN39_25;
      case 161:
        pos += (*pos == 1) + 1;
        goto $LN39_25;
      case 166:
        v18 = *pos++;
        if ( v18 )
          pos += 2 * v18;
        goto $LN39_25;
      case 189:
        v19 = *pos++;
        if ( v19 )
          pos += v19;
        goto $LN39_25;
      default:
        LODWORD(v30) = opcode;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7146, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown opcode %d", v30) )
          __debugbreak();
        goto $LN39_25;
    }
  }
}

/*
==============
Scr_GetNumParam
==============
*/
__int64 Scr_GetNumParam(const scrContext_t *scrContext)
{
  return scrContext->m_vmPub.outparamcount;
}

/*
==============
Scr_GetNumScriptThreads
==============
*/
__int64 Scr_GetNumScriptThreads(const scrContext_t *scrContext)
{
  return scrContext->m_varPub.numScriptThreads;
}

/*
==============
Scr_GetObject
==============
*/
__int64 Scr_GetObject(scrContext_t *scrContext, unsigned int index)
{
  VariableValue *v4; 
  const char *NameForType; 
  const char *v7; 
  const char *v8; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v4 = &scrContext->m_vmPub.top[-index];
    if ( v4->type == VAR_POINTER )
      return v4->u.uintValue;
    scrContext->m_varPub.error_index = index + 1;
    NameForType = Scr_GetNameForType(v4->type);
    v7 = j_va("type %s is not an object", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v7);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  v8 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v8);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return 0i64;
}

/*
==============
Scr_GetObjectArray
==============
*/
__int64 Scr_GetObjectArray(const scrContext_t *scrContext, unsigned int arrayObjectId, unsigned int bufferSize, unsigned int *buffer, unsigned int *failureIndex, VariableType *failureType)
{
  __int64 v10; 
  unsigned int FirstSibling; 
  unsigned int Object; 

  if ( !arrayObjectId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10431, ASSERT_TYPE_ASSERT, "( arrayObjectId )", (const char *)&queryFormat, "arrayObjectId") )
    __debugbreak();
  if ( GetObjectType(scrContext, arrayObjectId) != VAR_ARRAY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10432, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, arrayObjectId ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, arrayObjectId ) == VAR_ARRAY") )
    __debugbreak();
  if ( !failureIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10434, ASSERT_TYPE_ASSERT, "( failureIndex )", (const char *)&queryFormat, "failureIndex") )
    __debugbreak();
  if ( !failureType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10435, ASSERT_TYPE_ASSERT, "( failureType )", (const char *)&queryFormat, "failureType") )
    __debugbreak();
  v10 = 0i64;
  FirstSibling = FindFirstSibling(scrContext, arrayObjectId);
  if ( !FirstSibling )
    return 1i64;
  while ( GetValueType(scrContext, FirstSibling) == VAR_POINTER && (unsigned int)v10 < bufferSize )
  {
    Object = FindObject(scrContext, FirstSibling);
    if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10448, ASSERT_TYPE_ASSERT, "( objectId )", (const char *)&queryFormat, "objectId") )
      __debugbreak();
    buffer[v10] = Object;
    v10 = (unsigned int)(v10 + 1);
    FirstSibling = FindNextSibling(scrContext, FirstSibling);
    if ( !FirstSibling )
      return 1i64;
  }
  *failureIndex = v10;
  *failureType = GetValueType(scrContext, FirstSibling);
  return 0i64;
}

/*
==============
Scr_GetObjectOrigin
==============
*/
__int64 Scr_GetObjectOrigin(scrContext_t *scrContext, unsigned int objectId, vec3_t *origin)
{
  VariableValue *top; 
  unsigned int canonicalStringLimit; 
  const char *v8; 
  __int64 v9; 
  __int64 v10; 
  char *v11; 
  signed __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  VariableValue *VariableField; 
  bool v17; 
  float *scriptCodePosValue; 
  VariableType type; 
  __int64 v21; 
  VariableValue result; 

  if ( !objectId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10466, ASSERT_TYPE_ASSERT, "( objectId )", (const char *)&queryFormat, "objectId") )
    __debugbreak();
  if ( scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10467, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10468, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  top = scrContext->m_vmPub.top;
  if ( !g_scrCanonicalStringPub.canonicalStringForOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10472, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringForOrigin )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringForOrigin") )
    __debugbreak();
  if ( !g_scrCanonicalStringPub.canonicalStringData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10474, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringData != nullptr )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringData != nullptr") )
    __debugbreak();
  canonicalStringLimit = g_scrCanonicalStringPub.canonicalStringLimit;
  if ( !g_scrCanonicalStringPub.canonicalStringLimit )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10475, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
      __debugbreak();
    canonicalStringLimit = g_scrCanonicalStringPub.canonicalStringLimit;
  }
  if ( g_scrCanonicalStringPub.canonicalStringForOrigin > canonicalStringLimit )
  {
    LODWORD(v21) = g_scrCanonicalStringPub.canonicalStringForOrigin;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10476, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringForOrigin ) <= ( g_scrCanonicalStringPub.canonicalStringLimit )", "g_scrCanonicalStringPub.canonicalStringForOrigin <= g_scrCanonicalStringPub.canonicalStringLimit\n\t%i, %i", v21, canonicalStringLimit) )
      __debugbreak();
  }
  v8 = "origin";
  v9 = 0x7FFFFFFFi64;
  v10 = g_scrCanonicalStringPub.canonicalStringData->stringOffsets[g_scrCanonicalStringPub.canonicalStringForOrigin] - 1;
  v11 = &g_scrCanonicalStringPub.canonicalStringData->stringBuffer[v10];
  if ( (CanonicalStringData *)((char *)g_scrCanonicalStringPub.canonicalStringData + v10) == (CanonicalStringData *)-114688i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, (AssertType)(v10 + LODWORD(g_scrCanonicalStringPub.canonicalStringData) + 114689), "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v12 = v11 - "origin";
  do
  {
    v13 = v8[v12];
    v14 = v9;
    v15 = *v8++;
    --v9;
    if ( !v14 )
      break;
    if ( v13 != v15 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10477, ASSERT_TYPE_ASSERT, "( !I_strcmp( &g_scrCanonicalStringPub.canonicalStringData->stringBuffer[g_scrCanonicalStringPub.canonicalStringData->stringOffsets[g_scrCanonicalStringPub.canonicalStringForOrigin] - 1], \"origin\" ) )", (const char *)&queryFormat, "!I_strcmp( &g_scrCanonicalStringPub.canonicalStringData->stringBuffer[g_scrCanonicalStringPub.canonicalStringData->stringOffsets[g_scrCanonicalStringPub.canonicalStringForOrigin] - 1], \"origin\" )") )
        __debugbreak();
      break;
    }
  }
  while ( v13 );
  VariableField = Scr_FindVariableField(&result, scrContext, objectId, g_scrCanonicalStringPub.canonicalStringForOrigin);
  v17 = scrContext->m_vmPub.inparamcount == 0;
  scriptCodePosValue = (float *)VariableField->u.scriptCodePosValue;
  type = VariableField->type;
  scrContext->m_vmPub.top = top;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10483, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10484, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  if ( type == VAR_VECTOR )
  {
    origin->v[0] = *scriptCodePosValue;
    origin->v[1] = scriptCodePosValue[1];
    origin->v[2] = scriptCodePosValue[2];
    RemoveRefToValue(scrContext, 4, (VariableUnion)scriptCodePosValue);
    return 1i64;
  }
  else
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, (VariableUnion)scriptCodePosValue);
    return 0i64;
  }
}

/*
==============
Scr_GetOpcodeName
==============
*/
const char *Scr_GetOpcodeName(int opcode)
{
  __int64 v1; 
  OpcodeName *v2; 
  int v3; 
  OpcodeName *v4; 
  __int64 v6; 
  int v7; 

  v1 = opcode;
  if ( !s_opcodesInitialized )
  {
    v2 = s_opcodeNames;
    v3 = 0;
    do
    {
      if ( v2->index != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11757, ASSERT_TYPE_ASSERT, "( check->index == opcodeIndex )", (const char *)&queryFormat, "check->index == opcodeIndex") )
        __debugbreak();
      ++v3;
      ++v2;
    }
    while ( (__int64)v2 < (__int64)&s_opcodeNames[190] );
    s_opcodesInitialized = 1;
  }
  if ( (int)v1 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11764, ASSERT_TYPE_ASSERT, "( opcode >= 0 )", (const char *)&queryFormat, "opcode >= OP_Begin") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0xBF )
  {
    v7 = 191;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11765, ASSERT_TYPE_ASSERT, "(unsigned)( opcode ) < (unsigned)( ( sizeof( *array_counter( s_opcodeNames ) ) + 0 ) )", "opcode doesn't index ARRAY_COUNT( s_opcodeNames )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v4 = &s_opcodeNames[v1];
  if ( v4->index != (_DWORD)v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11768, ASSERT_TYPE_ASSERT, "( opcodeName->index == opcode )", (const char *)&queryFormat, "opcodeName->index == opcode") )
    __debugbreak();
  return v4->name;
}

/*
==============
Scr_GetPointerType
==============
*/
VariableType Scr_GetPointerType(scrContext_t *scrContext, unsigned int index)
{
  VariableValue *v4; 
  VariableType type; 
  const char *NameForType; 
  const char *v8; 
  bool v9; 
  const char *v10; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v4 = &scrContext->m_vmPub.top[-index];
    type = v4->type;
    if ( type == VAR_POINTER )
      return GetObjectType(scrContext, v4->u.intValue);
    NameForType = Scr_GetNameForType(type);
    v8 = j_va("type %s is not an object", NameForType);
    v9 = scrContext->m_varPub.error_message == NULL;
    scrContext->m_varPub.error_index = index + 1;
    if ( v9 )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v8);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  v10 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v10);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return 0;
}

/*
==============
Scr_GetReturnPos
==============
*/
const char *Scr_GetReturnPos(const scrContext_t *scrContext, unsigned int *localId)
{
  function_frame_t *function_frame; 

  if ( scrContext->m_vmPub.function_count <= 1 )
    return 0i64;
  function_frame = scrContext->m_vmPub.function_frame;
  if ( ScriptCodePos::IsEndPos(&function_frame[-1].fs.pos) )
    return 0i64;
  *localId = function_frame[-1].fs.localId;
  return function_frame[-1].fs.pos.m_scriptPos;
}

/*
==============
Scr_GetRunThreadsTime
==============
*/
float Scr_GetRunThreadsTime(ScriptInstanceType inst)
{
  _RAX = ScriptContext_GetFromInstance(inst);
  __asm { vmovss  xmm0, dword ptr [rax+0DF080h] }
  return *(float *)&_XMM0;
}

/*
==============
Scr_GetScriptStackTraceFromRecord
==============
*/
__int64 Scr_GetScriptStackTraceFromRecord(const scrContext_t *scrContext, char *msg, int msgSize, const ScriptStackTraceRecord *record, bool bFileNline, bool bSource, bool bPosOnLine)
{
  unsigned int v7; 
  const ScriptStackTraceRecord *v8; 
  __int64 result; 
  int *p_entryCount; 
  bool v14; 
  bool v15; 
  __int64 index; 
  __int64 v17; 
  int msgPos; 

  v7 = 0;
  v8 = record;
  msgPos = 0;
  result = 0i64;
  if ( msgSize > 0 )
  {
    *msg = 0;
    result = (unsigned int)msgPos;
  }
  p_entryCount = &record->entryCount;
  if ( record->entryCount > 0 )
  {
    v14 = bPosOnLine;
    v15 = bSource;
    do
    {
      if ( v7 >= 6 )
      {
        LODWORD(v17) = 6;
        LODWORD(index) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 998, ASSERT_TYPE_ASSERT, "(unsigned)( recordEntryIndex ) < (unsigned)( ( sizeof( *array_counter( record->entries ) ) + 0 ) )", "recordEntryIndex doesn't index ARRAY_COUNT( record->entries )\n\t%i not in [0, %i)", index, v17) )
          __debugbreak();
      }
      Scr_PrintPrevCodePosToBufferWOptions(scrContext, msg, msgSize, &msgPos, v8->entries[0].codePos, v8->entries[0].index, bFileNline, v15, v14);
      ++v7;
      v8 = (const ScriptStackTraceRecord *)((char *)v8 + 16);
    }
    while ( (int)v7 < *p_entryCount );
    return (unsigned int)msgPos;
  }
  return result;
}

/*
==============
Scr_GetStackThreadPos
==============
*/
const char *Scr_GetStackThreadPos(scrContext_t *scrContext, unsigned int endLocalId, VariableStackBuffer *stackValue, bool killThread)
{
  __int64 size; 
  unsigned int localId; 
  char *v10; 
  const char *ScriptPos; 
  const char *v12; 
  unsigned int ParentLocalId; 
  unsigned int StartLocalId; 

  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7684, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  StartLocalId = GetStartLocalId(scrContext, endLocalId);
  if ( !StartLocalId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7687, ASSERT_TYPE_ASSERT, "( startLocalId )", (const char *)&queryFormat, "startLocalId") )
    __debugbreak();
  size = stackValue->size;
  localId = stackValue->localId;
  v10 = &stackValue->buf[8 * size + size];
  ScriptPos = ScriptCodePos::GetScriptPos(&stackValue->codePos, scrContext);
  while ( (_DWORD)size )
  {
    v12 = (const char *)*((_QWORD *)v10 - 1);
    v10 -= 9;
    LODWORD(size) = size - 1;
    if ( *v10 == 7 )
    {
      ParentLocalId = GetParentLocalId(scrContext, localId);
      if ( localId == endLocalId )
      {
        if ( StartLocalId == localId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7719, ASSERT_TYPE_ASSERT, "( startLocalId != localId )", (const char *)&queryFormat, "startLocalId != localId") )
          __debugbreak();
        break;
      }
      if ( killThread )
        Scr_DebugKillThread(scrContext, localId, ScriptPos);
      localId = ParentLocalId;
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7714, ASSERT_TYPE_ASSERT, "( u.codePosValue )", (const char *)&queryFormat, "u.codePosValue") )
        __debugbreak();
      ScriptPos = v12;
    }
  }
  if ( killThread )
    Scr_DebugKillThread(scrContext, localId, ScriptPos);
  return ScriptPos;
}

/*
==============
Scr_GetString
==============
*/
const char *Scr_GetString(scrContext_t *scrContext, unsigned int index)
{
  scr_string_t ConstString; 

  ConstString = Scr_GetConstString(scrContext, index);
  return SL_ConvertToString(ConstString);
}

/*
==============
Scr_GetStringIncludeNull
==============
*/
const char *Scr_GetStringIncludeNull(scrContext_t *scrContext, unsigned int index)
{
  scr_string_t ConstString; 

  ConstString = Scr_GetConstString(scrContext, index);
  return SL_ConvertToString(ConstString);
}

/*
==============
Scr_GetThreadPos
==============
*/
char *Scr_GetThreadPos(scrContext_t *scrContext, unsigned int localId)
{
  unsigned int StartLocalId; 
  VariableType ObjectType; 
  unsigned int ThreadWaitTime; 
  unsigned int Variable; 
  unsigned int WaittillThreadStackParentId; 
  unsigned int ObjectVariable; 
  VariableUnion *VariableValueAddress; 
  __int64 function_count; 
  __int64 v13; 
  unsigned int *p_localId; 
  __int64 v15; 
  char *ScriptPos; 
  int ValueType; 

  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8096, ASSERT_TYPE_ASSERT, "( pScrVarPub->developer )", (const char *)&queryFormat, "pScrVarPub->developer") )
    __debugbreak();
  StartLocalId = GetStartLocalId(scrContext, localId);
  ObjectType = GetObjectType(scrContext, StartLocalId);
  if ( ObjectType == VAR_THREAD )
  {
    if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7883, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
      __debugbreak();
    if ( !scrContext->m_vmPub.function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7885, ASSERT_TYPE_ASSERT, "( pScrVmPub->function_count )", (const char *)&queryFormat, "pScrVmPub->function_count") )
      __debugbreak();
    function_count = scrContext->m_vmPub.function_count;
    v13 = function_count;
    if ( (_DWORD)function_count )
    {
      p_localId = &scrContext->m_vmPub.function_frame_start[function_count].fs.localId;
      while ( *p_localId != localId )
      {
        LODWORD(function_count) = function_count - 1;
        p_localId -= 10;
        if ( !--v13 )
          goto LABEL_32;
      }
      ScriptPos = (char *)ScriptCodePos::GetScriptPos(&scrContext->m_vmPub.function_frame_start[(int)function_count].fs.pos, scrContext);
      v15 = 0i64;
      if ( ScriptPos != &g_EndPos )
        return ScriptPos;
    }
    else
    {
LABEL_32:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7897, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
        __debugbreak();
      return 0i64;
    }
    return (char *)v15;
  }
  else
  {
    if ( ObjectType == VAR_NOTIFY_THREAD )
    {
      WaittillThreadStackParentId = Scr_GetWaittillThreadStackParentId(scrContext, localId, StartLocalId);
    }
    else
    {
      if ( ObjectType != VAR_TIME_THREAD )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8115, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
          __debugbreak();
        return 0i64;
      }
      if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8109, ASSERT_TYPE_ASSERT, "( pScrVarPub->developer )", (const char *)&queryFormat, "pScrVarPub->developer") )
        __debugbreak();
      ThreadWaitTime = Scr_GetThreadWaitTime(scrContext, StartLocalId);
      Variable = FindVariable(scrContext, scrContext->m_varPub.timeArrayId, ThreadWaitTime);
      WaittillThreadStackParentId = FindObject(scrContext, Variable);
    }
    ObjectVariable = FindObjectVariable(scrContext, WaittillThreadStackParentId, StartLocalId);
    if ( !ObjectVariable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8120, ASSERT_TYPE_ASSERT, "( stackId )", (const char *)&queryFormat, "stackId") )
      __debugbreak();
    if ( GetValueType(scrContext, ObjectVariable) != VAR_STACK )
    {
      ValueType = (unsigned __int8)GetValueType(scrContext, ObjectVariable);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8121, ASSERT_TYPE_ASSERT, "( ( GetValueType( scrContext, stackId ) == VAR_STACK ) )", "%s\n\t( GetValueType( scrContext, stackId ) ) = %i", "( GetValueType( scrContext, stackId ) == VAR_STACK )", ValueType) )
        __debugbreak();
    }
    VariableValueAddress = GetVariableValueAddress(scrContext, ObjectVariable);
    return (char *)Scr_GetStackThreadPos(scrContext, localId, VariableValueAddress->stackValue, 0);
  }
}

/*
==============
Scr_GetType
==============
*/
VariableType Scr_GetType(scrContext_t *scrContext, unsigned int index)
{
  const char *v5; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
    return scrContext->m_vmPub.top[-index].type;
  v5 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v5);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return 0;
}

/*
==============
Scr_GetTypeName
==============
*/
const char *Scr_GetTypeName(scrContext_t *scrContext, unsigned int index)
{
  const char *v5; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
    return Scr_GetNameForType(scrContext->m_vmPub.top[-index].type);
  v5 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v5);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return 0i64;
}

/*
==============
Scr_GetVariable
==============
*/
VariableValue *Scr_GetVariable(scrContext_t *scrContext, unsigned int index)
{
  const char *v5; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
    return &scrContext->m_vmPub.top[-index];
  v5 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v5);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
  return 0i64;
}

/*
==============
Scr_GetVector
==============
*/
void Scr_GetVector(scrContext_t *scrContext, unsigned int index, vec3_t *vectorValue)
{
  VariableValue *v6; 
  const char *NameForType; 
  const char *v8; 
  const char *v9; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v6 = &scrContext->m_vmPub.top[-index];
    if ( v6->type == VAR_VECTOR )
    {
      vectorValue->v[0] = *v6->u.vectorValue;
      vectorValue->v[1] = *(float *)(v6->u.scriptCodePosValue + 4);
      vectorValue->v[2] = *(float *)(v6->u.scriptCodePosValue + 8);
      return;
    }
    scrContext->m_varPub.error_index = index + 1;
    NameForType = Scr_GetNameForType(v6->type);
    v8 = j_va("type %s is not a vector", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v8);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  v9 = j_va("parameter %d does not exist", index + 1);
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, v9);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
}

/*
==============
Scr_GetWaittillThreadStackParentId
==============
*/
unsigned int Scr_GetWaittillThreadStackParentId(scrContext_t *scrContext, unsigned int localId, unsigned int startLocalId)
{
  unsigned int ThreadNotifyName; 
  unsigned int Self; 
  unsigned int ObjectVariable; 
  unsigned int Object; 
  unsigned int v9; 
  VariableUnion *VariableValueAddress; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int Variable; 

  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8020, ASSERT_TYPE_ASSERT, "( pScrVarPub->developer )", (const char *)&queryFormat, "pScrVarPub->developer") )
    __debugbreak();
  ThreadNotifyName = Scr_GetThreadNotifyName(scrContext, startLocalId);
  if ( !ThreadNotifyName )
    return scrContext->m_varPub.objectStackId;
  Self = Scr_GetSelf(scrContext, startLocalId);
  ObjectVariable = FindObjectVariable(scrContext, scrContext->m_varPub.pauseArrayId, Self);
  Object = FindObject(scrContext, ObjectVariable);
  v9 = FindObjectVariable(scrContext, Object, startLocalId);
  VariableValueAddress = GetVariableValueAddress(scrContext, v9);
  v11 = FindObjectVariable(scrContext, scrContext->m_varPub.notifyArrayId, VariableValueAddress->intValue);
  v12 = FindObject(scrContext, v11);
  Variable = FindVariable(scrContext, v12, ThreadNotifyName);
  return FindObject(scrContext, Variable);
}

/*
==============
Scr_IncTime
==============
*/
void Scr_IncTime(scrContext_t *scrContext)
{
  unsigned int timeArrayId; 
  unsigned int Variable; 
  unsigned int Object; 
  unsigned int FirstSibling; 
  unsigned int v6; 
  unsigned int Array; 

  Scr_RunCurrentThreads(scrContext);
  timeArrayId = scrContext->m_varPub.timeArrayId;
  if ( timeArrayId )
  {
    while ( 1 )
    {
      Variable = FindVariable(scrContext, timeArrayId, scrContext->m_varPub.time);
      if ( !Variable )
        break;
      Object = FindObject(scrContext, Variable);
      FirstSibling = FindFirstSibling(scrContext, Object);
      if ( !FirstSibling )
        break;
      if ( GetValueType(scrContext, FirstSibling) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11289, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, stackId ) == VAR_UNDEFINED )", (const char *)&queryFormat, "GetValueType( scrContext, stackId ) == VAR_UNDEFINED") )
          __debugbreak();
      }
      RemoveArrayVariable(scrContext, Object, 0);
      Scr_RunCurrentThreads(scrContext);
      timeArrayId = scrContext->m_varPub.timeArrayId;
      if ( !timeArrayId )
        return;
    }
    Scr_FreeEntityList(scrContext);
    if ( (scrContext->m_varPub.time & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11295, ASSERT_TYPE_ASSERT, "( !(pScrVarPub->time & ~VAR_NAME_LOW_MASK) )", (const char *)&queryFormat, "!(pScrVarPub->time & ~VAR_NAME_LOW_MASK)") )
      __debugbreak();
    ++scrContext->m_varPub.time;
    HIBYTE(scrContext->m_varPub.time) = 0;
    ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, "<script inc time>");
    v6 = GetVariable(scrContext, scrContext->m_varPub.timeArrayId, scrContext->m_varPub.time);
    Array = GetArray(scrContext, v6);
    if ( !FindArrayVariable(scrContext, Array, 0) )
      GetNewArrayVariableReverse(scrContext, Array, 0);
    ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, NULL);
    scrContext->m_vmPub.showError = scrContext->m_vmPub.abort_on_error;
  }
}

/*
==============
Scr_Init
==============
*/
void Scr_Init(scrContext_t *scrContext)
{
  if ( scrContext->m_varPub.bInited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1286, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.bInited )", (const char *)&queryFormat, "!scrContext.m_varPub.bInited") )
    __debugbreak();
  Scr_InitClassMap(scrContext);
  scrContext->m_vmPub.maxstack = &scrContext->m_vmPub.stack[2047];
  scrContext->m_vmPub.function_count = 0;
  scrContext->m_vmPub.top = scrContext->m_vmPub.stack;
  scrContext->m_vmPub.function_frame = scrContext->m_vmPub.function_frame_start;
  scrContext->m_vmPub.localVars = (unsigned int *)&scrContext->m_vmGlob.starttime;
  scrContext->m_varPub.evaluate = 0;
  scrContext->m_vmPub.debugCode = 0;
  scrContext->m_varPub.error_message = NULL;
  scrContext->m_vmGlob.dialog_error_message = NULL;
  scrContext->m_varPub.error_index = 0;
  scrContext->m_vmPub.terminal_error = 0;
  *(_QWORD *)&scrContext->m_vmPub.inparamcount = 0i64;
  *(_QWORD *)&scrContext->m_varPub.freeEntList = 0i64;
  *(_QWORD *)&scrContext->m_varPub.timeArrayId = 0i64;
  *(_QWORD *)&scrContext->m_varPub.notifyArrayId = 0i64;
  *(_QWORD *)&scrContext->m_varPub.levelId = 0i64;
  scrContext->m_varPub.animId = 0;
  scrContext->m_vmPub.stack[0].type = VAR_CODEPOS;
  scrContext->m_vmGlob.loading = 0;
  scrContext->m_vmGlob.recordPlace = 0;
  scrContext->m_vmGlob.lastFileName = NULL;
  scrContext->m_vmGlob.lastLine = 0;
  scrContext->m_varPub.ext_threadcount = 0;
  scrContext->m_varPub.numScriptThreads = 0;
  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, NULL);
  Scr_VM_RegisterDvars();
  ScriptContext_InitDumpStack(scrContext);
  scrContext->m_compilePub.script_loading = 0;
  *(_WORD *)&scrContext->m_animPub.animtree_loading = 0;
  scrContext->m_animPub.animtrees = 0;
  *(_QWORD *)&scrContext->m_compilePub.scriptsPos = 0i64;
  scrContext->m_compilePub.loadedscripts = 0;
  *(_QWORD *)&scrContext->m_compilePub.scriptsDefine = 0i64;
  scrContext->m_compilePub.builtinMeth = 0;
  scrContext->m_profileScript.enabled = 1;
}

/*
==============
Scr_InitSystem
==============
*/
void Scr_InitSystem(scrContext_t *scrContext, const int sys, const ScrThreadMode threadMode, const int frameDuration)
{
  unsigned int CanonicalString; 
  unsigned int Variable; 
  bool v11; 
  bool v12; 
  unsigned int timeArrayId; 
  unsigned int v19; 
  unsigned int Object; 
  unsigned int FirstSibling; 
  unsigned int v22; 
  unsigned int Array; 
  VariableValue value; 

  _RDI = scrContext;
  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( sys != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9736, ASSERT_TYPE_ASSERT, "( sys == SCR_SYS_GAME )", (const char *)&queryFormat, "sys == SCR_SYS_GAME") )
    __debugbreak();
  if ( _RDI->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9737, ASSERT_TYPE_ASSERT, "( !pScrVarPub->timeArrayId )", (const char *)&queryFormat, "!pScrVarPub->timeArrayId") )
    __debugbreak();
  if ( _RDI->m_varPub.ext_threadcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9739, ASSERT_TYPE_ASSERT, "( !pScrVarPub->ext_threadcount )", (const char *)&queryFormat, "!pScrVarPub->ext_threadcount") )
    __debugbreak();
  if ( ScriptCodePos::GetVarUsagePos(&_RDI->m_varPub.varUsagePos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9743, ASSERT_TYPE_ASSERT, "( !pScrVarPub->varUsagePos.GetVarUsagePos() )", (const char *)&queryFormat, "!pScrVarPub->varUsagePos.GetVarUsagePos()") )
    __debugbreak();
  ScriptCodePos::SetVarUsagePos(&_RDI->m_varPub.varUsagePos, "<script init variable>");
  memset_0(_RDI->m_profileScript.threadId, 0, 16i64 * _RDI->m_variableListParentSize);
  Scr_AllocInternalObject(_RDI, &_RDI->m_varPub.timeArrayId);
  Scr_AllocInternalArray(_RDI, &_RDI->m_varPub.pauseArrayId);
  Scr_AllocInternalArray(_RDI, &_RDI->m_varPub.notifyArrayId);
  Scr_AllocInternalArray(_RDI, &_RDI->m_varPub.objectStackId);
  Scr_AllocInternalObject(_RDI, &_RDI->m_varPub.animId);
  Scr_AllocInternalObject(_RDI, &_RDI->m_varPub.levelId);
  CanonicalString = SL_GetCanonicalString("frameduration");
  Variable = GetVariable(_RDI, _RDI->m_varPub.levelId, CanonicalString);
  value.u.intValue = frameDuration;
  value.type = VAR_INTEGER;
  SetVariableValue(_RDI, Variable, &value);
  if ( _RDI->m_varPub.freeEntList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9760, ASSERT_TYPE_ASSERT, "( !pScrVarPub->freeEntList )", (const char *)&queryFormat, "!pScrVarPub->freeEntList") )
    __debugbreak();
  v11 = frameDuration == 0;
  if ( frameDuration <= 0 )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9762, ASSERT_TYPE_ASSERT, "( frameDuration > 0 )", (const char *)&queryFormat, "frameDuration > 0");
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r14d
    vdivss  xmm2, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm2, xmm1
    vmovss  dword ptr [rdi+5D7Ch], xmm2
  }
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9781, ASSERT_TYPE_ASSERT, "( pScrVarPub->framerate > 0.0f )", (const char *)&queryFormat, "pScrVarPub->framerate > 0.0f") )
    __debugbreak();
  _RDI->m_varPub.time = 0;
  _RDI->m_errorLevel = -1;
  Scr_InitDebuggerSystem(_RDI, threadMode);
  ScriptCodePos::SetVarUsagePos(&_RDI->m_varPub.varUsagePos, NULL);
  Scr_RunCurrentThreads(_RDI);
  timeArrayId = _RDI->m_varPub.timeArrayId;
  if ( timeArrayId )
  {
    while ( 1 )
    {
      v19 = FindVariable(_RDI, timeArrayId, _RDI->m_varPub.time);
      if ( !v19 )
        break;
      Object = FindObject(_RDI, v19);
      FirstSibling = FindFirstSibling(_RDI, Object);
      if ( !FirstSibling )
        break;
      if ( GetValueType(_RDI, FirstSibling) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11289, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, stackId ) == VAR_UNDEFINED )", (const char *)&queryFormat, "GetValueType( scrContext, stackId ) == VAR_UNDEFINED") )
          __debugbreak();
      }
      RemoveArrayVariable(_RDI, Object, 0);
      Scr_RunCurrentThreads(_RDI);
      timeArrayId = _RDI->m_varPub.timeArrayId;
      if ( !timeArrayId )
        return;
    }
    Scr_FreeEntityList(_RDI);
    if ( (_RDI->m_varPub.time & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11295, ASSERT_TYPE_ASSERT, "( !(pScrVarPub->time & ~VAR_NAME_LOW_MASK) )", (const char *)&queryFormat, "!(pScrVarPub->time & ~VAR_NAME_LOW_MASK)") )
      __debugbreak();
    ++_RDI->m_varPub.time;
    HIBYTE(_RDI->m_varPub.time) = 0;
    ScriptCodePos::SetVarUsagePos(&_RDI->m_varPub.varUsagePos, "<script inc time>");
    v22 = GetVariable(_RDI, _RDI->m_varPub.timeArrayId, _RDI->m_varPub.time);
    Array = GetArray(_RDI, v22);
    if ( !FindArrayVariable(_RDI, Array, 0) )
      GetNewArrayVariableReverse(_RDI, Array, 0);
    ScriptCodePos::SetVarUsagePos(&_RDI->m_varPub.varUsagePos, NULL);
    _RDI->m_vmPub.showError = _RDI->m_vmPub.abort_on_error;
  }
}

/*
==============
Scr_InitUsageAnalysis
==============
*/
void Scr_InitUsageAnalysis(scrContext_t *scrContext)
{
  bool v1; 

  v1 = script_usage_tracking && script_usage_tracking->current.integer;
  scrContext->m_varPub.bScriptProfile = v1;
  scrContext->m_varPub.bScriptUsageProfile = v1;
  scrContext->m_vmDebugPub.embeddedCount = 0;
  scrContext->m_vmDebugPub.embeddedTime = 0i64;
}

/*
==============
Scr_IsDefined
==============
*/

void __fastcall Scr_IsDefined(scrContext_t *scrContext, VariableValue *value)
{
  Scr_IsDefined_Inline(scrContext, value);
}

/*
==============
Scr_IsDefined_Inline
==============
*/
void Scr_IsDefined_Inline(scrContext_t *scrContext, VariableValue *value)
{
  VariableType type; 
  unsigned int ObjectType; 

  type = value->type;
  if ( type == VAR_POINTER )
  {
    ObjectType = (unsigned __int8)GetObjectType(scrContext, value->u.intValue);
    if ( ObjectType < 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2182, ASSERT_TYPE_ASSERT, "(localType >= VAR_FIRST_OBJECT)", (const char *)&queryFormat, "localType >= VAR_FIRST_OBJECT") )
      __debugbreak();
    RemoveRefToValue(scrContext, (unsigned __int8)value->type, value->u);
    value->type = VAR_INTEGER;
    value->u.intValue = ObjectType < 0x19 && ObjectType != 22 && ObjectType;
  }
  else
  {
    if ( (unsigned __int8)type >= VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2190, ASSERT_TYPE_ASSERT, "(localType < VAR_FIRST_OBJECT)", (const char *)&queryFormat, "localType < VAR_FIRST_OBJECT") )
      __debugbreak();
    RemoveRefToValue(scrContext, (unsigned __int8)value->type, value->u);
    value->type = VAR_INTEGER;
    value->u.intValue = type != VAR_UNDEFINED;
  }
}

/*
==============
Scr_IsEndonThread
==============
*/
bool Scr_IsEndonThread(scrContext_t *scrContext, unsigned int localId)
{
  unsigned int WaittillThreadStackParentId; 
  unsigned int ObjectVariable; 
  VariableType ValueType; 
  VariableType v7; 

  if ( GetObjectType(scrContext, localId) != VAR_NOTIFY_THREAD || GetStartLocalId(scrContext, localId) != localId )
    return 0;
  WaittillThreadStackParentId = Scr_GetWaittillThreadStackParentId(scrContext, localId, localId);
  ObjectVariable = FindObjectVariable(scrContext, WaittillThreadStackParentId, localId);
  ValueType = GetValueType(scrContext, ObjectVariable);
  v7 = ValueType;
  if ( ValueType && ValueType != VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8055, ASSERT_TYPE_ASSERT, "( (type == VAR_UNDEFINED) || (type == VAR_STACK) )", (const char *)&queryFormat, "(type == VAR_UNDEFINED) || (type == VAR_STACK)") )
    __debugbreak();
  return v7 == VAR_UNDEFINED;
}

/*
==============
Scr_IsStackClear
==============
*/
bool Scr_IsStackClear(const scrContext_t *scrContext)
{
  return scrContext->m_vmPub.top == scrContext->m_vmPub.stack;
}

/*
==============
Scr_IsSystemActive
==============
*/
_BOOL8 Scr_IsSystemActive(const scrContext_t *scrContext, unsigned __int8 sys)
{
  return scrContext->m_varPub.timeArrayId && !scrContext->m_varPub.error_message;
}

/*
==============
Scr_IsTrue
==============
*/

int __fastcall Scr_IsTrue(scrContext_t *scrContext, VariableValue *value)
{
  return Scr_IsTrue_Inline(scrContext, value);
}

/*
==============
Scr_IsTrueOpcode
==============
*/

void __fastcall Scr_IsTrueOpcode(scrContext_t *scrContext, VariableValue *value)
{
  Scr_IsTrueOpcode_Inline(scrContext, value);
}

/*
==============
Scr_IsTrueOpcode_Inline
==============
*/
void Scr_IsTrueOpcode_Inline(scrContext_t *scrContext, VariableValue *value)
{
  VariableType type; 
  unsigned int ObjectType; 
  const char *v6; 
  int v7; 
  const char *v8; 
  int IsTrue_Inline; 

  type = value->type;
  if ( type == VAR_POINTER )
  {
    ObjectType = (unsigned __int8)GetObjectType(scrContext, value->u.intValue);
    if ( ObjectType >= 0x11 )
      goto LABEL_8;
    v6 = "localType >= VAR_FIRST_OBJECT";
    v7 = 2211;
    v8 = "(localType >= VAR_FIRST_OBJECT)";
  }
  else
  {
    ObjectType = (unsigned __int8)type;
    if ( (unsigned __int8)type < VAR_THREAD )
      goto LABEL_8;
    v6 = "localType < VAR_FIRST_OBJECT";
    v7 = 2216;
    v8 = "(localType < VAR_FIRST_OBJECT)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", v7, ASSERT_TYPE_ASSERT, v8, (const char *)&queryFormat, v6) )
    __debugbreak();
LABEL_8:
  if ( ObjectType >= 0x19 || ObjectType == 22 || !ObjectType )
    IsTrue_Inline = 0;
  else
    IsTrue_Inline = Scr_IsTrue_Inline(scrContext, value);
  RemoveRefToValue(scrContext, (unsigned __int8)value->type, value->u);
  value->u.intValue = IsTrue_Inline;
  value->type = VAR_INTEGER;
}

/*
==============
Scr_IsTrue_Inline
==============
*/
_BOOL8 Scr_IsTrue_Inline(scrContext_t *scrContext, VariableValue *value)
{
  VariableType type; 
  const char *NameForType; 
  const char *v9; 

  _RBX = value;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1598, ASSERT_TYPE_ASSERT, "( value != nullptr )", (const char *)&queryFormat, "value != nullptr") )
    __debugbreak();
  type = _RBX->type;
  if ( type == VAR_INTEGER )
    return _RBX->u.intValue != 0;
  if ( type == VAR_FLOAT )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rbx]
    }
  }
  else
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, _RBX->u);
    _RBX->type = VAR_UNDEFINED;
    NameForType = Scr_GetNameForType(type);
    v9 = j_va("cannot cast %s to bool", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v9);
      scrContext->m_varPub.error_message = error_message;
    }
    Scr_ErrorInternal(scrContext);
  }
  return 0i64;
}

/*
==============
Scr_MakeArray
==============
*/
void Scr_MakeArray(scrContext_t *scrContext)
{
  VariableValue *v2; 

  v2 = IncInParam(scrContext);
  v2->type = VAR_POINTER;
  v2->u.intValue = Scr_AllocArray(scrContext);
}

/*
==============
Scr_MakeStruct
==============
*/
void Scr_MakeStruct(scrContext_t *scrContext)
{
  VariableValue *v2; 

  v2 = IncInParam(scrContext);
  v2->type = VAR_POINTER;
  v2->u.intValue = AllocObject(scrContext);
}

/*
==============
Scr_NeverTerminalError
==============
*/
void Scr_NeverTerminalError(ComErrorCode uniqueErrorCode, scrContext_t *scrContext, const char *error)
{
  if ( scrContext->m_vmGlob.loading )
  {
    Scr_SetErrorMessage(scrContext, error);
    longjmp_0(scrContext->m_error[(__int64)scrContext->m_errorLevel], -1);
  }
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, error);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
}

/*
==============
Scr_NotifyId
==============
*/
void Scr_NotifyId(scrContext_t *scrContext, unsigned int id, scr_string_t stringValue, unsigned int paramcount)
{
  __int64 v5; 
  const char *m_scriptPos; 
  VariableValue *top; 
  unsigned int v10; 
  VariableValue *v11; 
  VariableValue *v12; 
  bool v13; 
  VariableValue *v14; 
  VariableType type; 

  v5 = paramcount;
  Profile_Begin(465);
  SL_CheckExists(stringValue);
  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  ScriptCodePos::SetVarUsagePosIfNull(&scrContext->m_varPub.varUsagePos, "<script notify variable>");
  if ( !scrContext->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8496, ASSERT_TYPE_ASSERT, "( pScrVarPub->timeArrayId )", (const char *)&queryFormat, "pScrVarPub->timeArrayId") )
    __debugbreak();
  if ( (unsigned int)v5 > scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8497, ASSERT_TYPE_ASSERT, "( paramcount <= pScrVmPub->inparamcount )", (const char *)&queryFormat, "paramcount <= pScrVmPub->inparamcount") )
    __debugbreak();
  if ( scrContext->m_vmPub.outparamcount )
    Scr_ClearOutParams(scrContext);
  top = scrContext->m_vmPub.top;
  v10 = scrContext->m_vmPub.inparamcount - v5;
  v11 = &top[-v5];
  if ( id )
  {
    type = v11->type;
    v11->type = VAR_PRECODEPOS;
    if ( scrContext->m_vmDebugPub.checkBreakon )
    {
      v12 = scrContext->m_vmPub.top;
      scrContext->m_vmPub.inparamcount = 0;
      Scr_CheckBreakonNotify(scrContext, id, stringValue, v12, NULL, 0);
      v13 = scrContext->m_vmPub.outparamcount == 0;
      scrContext->m_vmPub.top = v12;
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8518, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
        __debugbreak();
    }
    Scr_DumpNotify(scrContext, id, stringValue, "code");
    v14 = scrContext->m_vmPub.top;
    scrContext->m_vmPub.inparamcount = 0;
    VM_Notify(scrContext, id, stringValue, v14);
    v11->type = type;
    top = scrContext->m_vmPub.top;
  }
  if ( top != v11 )
  {
    do
    {
      RemoveRefToValue(scrContext, (unsigned __int8)scrContext->m_vmPub.top->type, scrContext->m_vmPub.top->u);
      --scrContext->m_vmPub.top;
    }
    while ( scrContext->m_vmPub.top != v11 );
  }
  v13 = scrContext->m_vmPub.outparamcount == 0;
  scrContext->m_vmPub.inparamcount = v10;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8540, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  SL_CheckExists(stringValue);
  Profile_EndInternal(NULL);
}

/*
==============
Scr_NotifyLevel
==============
*/
void Scr_NotifyLevel(scrContext_t *scrContext, scr_string_t stringValue, unsigned int paramcount)
{
  if ( !scrContext->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8567, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.timeArrayId )", (const char *)&queryFormat, "scrContext.m_varPub.timeArrayId") )
    __debugbreak();
  Scr_NotifyId(scrContext, scrContext->m_varPub.levelId, stringValue, paramcount);
}

/*
==============
Scr_NotifyNum
==============
*/
void Scr_NotifyNum(scrContext_t *scrContext, int entnum, EntityClass classnum, scr_string_t stringValue, unsigned int paramcount, const LocalClientNum_t localClientNum)
{
  unsigned int EntityId; 

  if ( !scrContext->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8558, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.timeArrayId )", (const char *)&queryFormat, "scrContext.m_varPub.timeArrayId") )
    __debugbreak();
  EntityId = Scr_FindEntityId(scrContext, entnum, classnum, localClientNum);
  Scr_NotifyId(scrContext, EntityId, stringValue, paramcount);
}

/*
==============
Scr_ObjectError
==============
*/
void Scr_ObjectError(ComErrorCode uniqueErrorCode, scrContext_t *scrContext, const char *error)
{
  bool v3; 

  v3 = scrContext->m_varPub.error_message == NULL;
  scrContext->m_varPub.error_index = -1;
  if ( v3 )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, error);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
}

/*
==============
Scr_ParamError
==============
*/
void Scr_ParamError(ComErrorCode uniqueErrorCode, scrContext_t *scrContext, unsigned int index, const char *error)
{
  bool v4; 

  v4 = scrContext->m_varPub.error_message == NULL;
  scrContext->m_varPub.error_index = index + 1;
  if ( v4 )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, error);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
}

/*
==============
Scr_PrintProfileBuiltinTimes
==============
*/

bool __fastcall Scr_PrintProfileBuiltinTimes(scrContext_t *scrContext, double minTime)
{
  unsigned int *v9; 
  unsigned int m_FuncTableSize; 
  unsigned int *v11; 
  unsigned int i; 
  unsigned int j; 
  __int64 v14; 
  ScrFuncDebugData *m_pFuncTable; 
  __int64 v16; 
  unsigned int usage; 
  unsigned int m_funcCount; 
  const char **m_pMethNames; 
  const char *v20; 
  bool result; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps [rsp+78h+var_48], xmm7
    vmovss  xmm7, cs:__real@5f800000
    vmovaps xmm6, xmm1
  }
  v9 = (unsigned int *)Mem_Virtual_Alloc(4i64 * scrContext->m_vmDebugPub.m_FuncTableSize, "Scr_PrintProfileBuiltinTimes", TRACK_DEBUG);
  m_FuncTableSize = scrContext->m_vmDebugPub.m_FuncTableSize;
  v11 = v9;
  for ( i = 0; i < m_FuncTableSize; m_FuncTableSize = scrContext->m_vmDebugPub.m_FuncTableSize )
  {
    v9[i] = i;
    ++i;
  }
  qsort_s(v9, m_FuncTableSize, 4ui64, (_CoreCrtSecureSearchSortCompareFunction)Scr_BuiltinCompare_WithContext, scrContext);
  for ( j = 0; j < scrContext->m_vmDebugPub.m_FuncTableSize; ++j )
  {
    v14 = v11[j];
    m_pFuncTable = scrContext->m_vmDebugPub.m_pFuncTable;
    v16 = v14;
    usage = m_pFuncTable[v14].usage;
    if ( usage )
    {
      m_funcCount = scrContext->m_funcCount;
      if ( (unsigned int)v14 >= m_funcCount )
      {
        v14 = (unsigned int)v14 - m_funcCount;
        m_pMethNames = scrContext->m_pMethNames;
      }
      else
      {
        m_pMethNames = scrContext->m_pFuncNames;
      }
      v20 = m_pMethNames[v14];
      Sys_GetValue(0);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rdx
      }
      if ( (scrContext->m_vmDebugPub.m_pFuncTable[v16].prof & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm0, xmm0, xmm7 }
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rax+8B4Ch]
        vcvtss2sd xmm2, xmm0, xmm0
        vmovq   r8, xmm2
      }
      Com_Printf(23, "time: %f, usage: %d, %s\n", *(double *)&_XMM2, usage, v20);
      scrContext->m_vmDebugPub.m_pFuncTable[v16].usage = 0;
      scrContext->m_vmDebugPub.m_pFuncTable[v16].prof = 0i64;
    }
    else if ( m_pFuncTable[v11[j]].prof && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11687, ASSERT_TYPE_ASSERT, "( !pScrVmDebugPub->m_pFuncTable[j].prof )", (const char *)&queryFormat, "!pScrVmDebugPub->m_pFuncTable[j].prof") )
    {
      __debugbreak();
    }
  }
  Mem_Virtual_Free(v11);
  result = 1;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_38]
    vmovaps xmm7, [rsp+78h+var_48]
  }
  return result;
}

/*
==============
Scr_PrintScriptCallstack
==============
*/
void Scr_PrintScriptCallstack(scrContext_t *scrContext)
{
  char *v1; 
  char *i; 
  char msg[4096]; 

  Scr_DoScriptTrace(scrContext, 0, scrContext->m_fs.pos, msg, 4096);
  v1 = strstr_0(msg, "Script VM stack for context ");
  if ( v1 )
  {
    for ( i = v1 + 30; *i == 10; ++i )
      ;
  }
  else
  {
    i = msg;
  }
  Com_Printf(131087, "Script Callstack: %s\n", i);
}

/*
==============
Scr_ProfileBuiltinUpdate
==============
*/
void Scr_ProfileBuiltinUpdate(scrContext_t *scrContext)
{
  scrContext_t *v1; 
  unsigned int v2; 
  __int64 v3; 

  v1 = scrContext;
  if ( scrContext->m_varPub.bScriptProfileBuiltin )
  {
    __asm { vmovss  xmm1, dword ptr [rcx+5E24h]; minTime }
    if ( Scr_PrintProfileBuiltinTimes(scrContext, *(float *)&_XMM1) )
      v1->m_varPub.bScriptProfileBuiltin = 0;
  }
  else
  {
    v2 = 0;
    if ( scrContext->m_vmDebugPub.m_FuncTableSize )
    {
      do
      {
        v3 = v2++;
        v3 *= 2i64;
        *(&v1->m_vmDebugPub.m_pFuncTable->usage + 2 * v3) = 0;
        *(&v1->m_vmDebugPub.m_pFuncTable->prof + v3) = 0i64;
      }
      while ( v2 < v1->m_vmDebugPub.m_FuncTableSize );
    }
  }
}

/*
==============
Scr_ProfileUpdate
==============
*/
void Scr_ProfileUpdate(scrContext_t *scrContext)
{
  const char *v2; 
  bool enabled; 
  int total; 
  int totalNonBuiltIn; 

  _RBX = scrContext;
  v2 = Dvar_EnumToString(profile);
  enabled = profile_script_by_file->current.enabled;
  if ( _RBX->m_varPub.bScriptProfile )
  {
    if ( !_RBX->m_varPub.bScriptUsageProfile || script_usage_tracking->current.integer )
    {
      if ( I_stricmp(v2, "ai") )
      {
        if ( enabled )
        {
          Scr_CalcScriptFileProfile(_RBX);
        }
        else if ( script_usage_tracking && script_usage_tracking->current.integer )
        {
          Scr_CalcScriptProfileTrackServerTime(_RBX);
        }
        else
        {
          __asm { vmovss  xmm1, dword ptr [rbx+5E1Ch]; minTime }
          if ( Scr_PrintProfileTimes(_RBX, *(float *)&_XMM1) )
            _RBX->m_varPub.bScriptProfile = 0;
        }
      }
      else
      {
        Scr_CalcAnimscriptProfile(_RBX, &total, &totalNonBuiltIn);
        Profile_SetTotal(284, total);
        Profile_SetTotal(285, totalNonBuiltIn);
      }
    }
    else
    {
      _RBX->m_varPub.bScriptProfile = 0;
      _RBX->m_varPub.bScriptUsageProfile = 0;
      Com_PrintWarning(23, "Scr_ProfileUpdate: 'script_usage_tracking' has been turned off. Please restart map with 'script_usage_tracking' set to 1 for profiling. \n");
    }
  }
  else
  {
    if ( !I_stricmp(v2, "ai") || enabled )
      _RBX->m_varPub.bScriptProfile = 1;
    if ( _RBX->m_varPub.timeArrayId && script_usage_tracking && script_usage_tracking->current.integer && !_RBX->m_varPub.bScriptUsageProfile )
    {
      Com_PrintWarning(23, "Scr_ProfileUpdate: 'script_usage_tracking' needs to be turned on prior to level load for Usage Analysis reporting. Setting 'script_usage_tracking' to 0. \n");
      Dvar_SetInt_Internal(script_usage_tracking, 0);
    }
  }
}

/*
==============
Scr_RecordScriptRuntimeError
==============
*/
void Scr_RecordScriptRuntimeError(scrContext_t *scrContext, bool terminalError, int index, const ScriptCodePos scriptCodePos, const char *msg, const char *dialogMessage)
{
  char *v7; 
  char *i; 
  const char *v9; 
  const char *v10; 
  char msga[4096]; 
  char dest[4096]; 

  if ( scrContext->m_vmPub.recordErrors )
  {
    Scr_DoScriptTrace(scrContext, index, scriptCodePos, msga, 4096);
    v7 = strstr_0(msga, "Script VM stack for context ");
    if ( v7 )
    {
      for ( i = v7 + 30; *i == 10; ++i )
        ;
    }
    else
    {
      i = msga;
    }
    v9 = (char *)&queryFormat.fmt + 3;
    v10 = (char *)&queryFormat.fmt + 3;
    if ( dialogMessage )
      v9 = "\n";
    if ( dialogMessage )
      v10 = dialogMessage;
    Com_sprintf_truncate(dest, 0x1000ui64, "%s%s%s\n", msg, v9, v10);
    Sys_Print("*****Script Runtime Error*****\n");
    Sys_Print(dest);
    Sys_Print(i);
    if ( (unsigned __int64)(dest - i) > 0xCFF )
      i[3327] = 0;
    DLog_RecordErrorEvent((DLogErrorCode)(terminalError + 6), dest, i);
  }
}

/*
==============
Scr_ResetPerfTimes
==============
*/
void Scr_ResetPerfTimes(ScriptInstanceType inst)
{
  scrContext_t *v1; 

  v1 = ScriptContext_GetFromInstance(inst);
  v1->m_runThreadsTime = 0.0;
  v1->m_builtinTime = 0i64;
  v1->m_entFieldTime = 0i64;
}

/*
==============
Scr_ResetTimeout
==============
*/
void Scr_ResetTimeout(scrContext_t *scrContext)
{
  unsigned int v2; 

  scrContext->m_vmGlob.starttime = Sys_Milliseconds();
  if ( !logScriptTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11454, ASSERT_TYPE_ASSERT, "( logScriptTimes )", (const char *)&queryFormat, "logScriptTimes") )
    __debugbreak();
  if ( logScriptTimes->current.enabled )
  {
    v2 = Sys_Milliseconds();
    Com_Printf(23, "RESET TIME: %d\n", v2);
  }
  memset_0(scrContext->m_vmDebugPub.jumpbackHistory, 0, sizeof(scrContext->m_vmDebugPub.jumpbackHistory));
}

/*
==============
Scr_RunCurrentThreads
==============
*/
void Scr_RunCurrentThreads(scrContext_t *scrContext)
{
  const dvar_t *v2; 
  unsigned int timeArrayId; 
  unsigned int Variable; 
  unsigned int v5; 
  unsigned int Object; 

  Profile_Begin(466);
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "run threads");
  if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
  {
    Sys_ProfBeginNamedEvent(0xFF0000FF, "Dispatch Damage Notifications");
    G_Combat_DispatchDamageNotifications();
    Sys_ProfEndNamedEvent();
  }
  v2 = DVARINT_script_print_vars;
  if ( !DVARINT_script_print_vars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "script_print_vars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer == (unsigned __int8)scrContext->m_Instance + 1 )
  {
    Scr_PrintVars(scrContext, 0, 1);
    Dvar_SetInt_Internal(DVARINT_script_print_vars, 0);
  }
  if ( scrContext->m_vmPub.function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11406, ASSERT_TYPE_ASSERT, "( !pScrVmPub->function_count )", (const char *)&queryFormat, "!pScrVmPub->function_count") )
    __debugbreak();
  if ( scrContext->m_varPub.error_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11408, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.error_message )", (const char *)&queryFormat, "!scrContext.m_varPub.error_message") )
    __debugbreak();
  if ( scrContext->m_varPub.error_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11409, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.error_index )", (const char *)&queryFormat, "!scrContext.m_varPub.error_index") )
    __debugbreak();
  if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11411, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  if ( scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11412, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( scrContext->m_vmPub.top != scrContext->m_vmPub.stack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11413, ASSERT_TYPE_ASSERT, "( pScrVmPub->top == pScrVmPub->stack )", (const char *)&queryFormat, "pScrVmPub->top == pScrVmPub->stack") )
    __debugbreak();
  if ( (scrContext->m_varPub.time & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9694, ASSERT_TYPE_ASSERT, "( !( pScrVarPub->time & ~VAR_NAME_LOW_MASK ) )", (const char *)&queryFormat, "!( pScrVarPub->time & ~VAR_NAME_LOW_MASK )") )
    __debugbreak();
  timeArrayId = scrContext->m_varPub.timeArrayId;
  if ( timeArrayId )
  {
    Variable = FindVariable(scrContext, timeArrayId, scrContext->m_varPub.time);
    if ( Variable )
    {
      if ( !logScriptTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9703, ASSERT_TYPE_ASSERT, "( logScriptTimes )", (const char *)&queryFormat, "logScriptTimes") )
        __debugbreak();
      if ( logScriptTimes->current.enabled )
      {
        v5 = Sys_Milliseconds();
        Com_Printf(23, "SET TIME: %d\n", v5);
      }
      Object = FindObject(scrContext, Variable);
      VM_Resume(scrContext, Object);
    }
  }
  if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "Script Broadphase update");
    if ( Physics_GetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_FIRST) )
      Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
    if ( Physics_GetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_SERVER_DETAIL) )
      Physics_UpdateBroadphase(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
Scr_Scr_GetScriptStackTraceFromRecordForCSV
==============
*/
__int64 Scr_Scr_GetScriptStackTraceFromRecordForCSV(const scrContext_t *scrContext, char *msg, int msgSize, const ScriptStackTraceRecord *record)
{
  const ScriptStackTraceRecord *v5; 
  unsigned int v6; 
  unsigned int v7; 
  int *p_entryCount; 
  unsigned __int64 v11; 
  __int64 v12; 
  __int64 index; 
  __int64 bFileNline; 
  int msgPos; 

  v5 = record;
  v6 = 0;
  v7 = 0;
  msgPos = 0;
  if ( msgSize > 0 )
  {
    *msg = 0;
    v7 = msgPos;
  }
  p_entryCount = &record->entryCount;
  if ( record->entryCount > 0 )
  {
    do
    {
      if ( v6 >= 6 )
      {
        LODWORD(bFileNline) = 6;
        LODWORD(index) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 998, ASSERT_TYPE_ASSERT, "(unsigned)( recordEntryIndex ) < (unsigned)( ( sizeof( *array_counter( record->entries ) ) + 0 ) )", "recordEntryIndex doesn't index ARRAY_COUNT( record->entries )\n\t%i not in [0, %i)", index, bFileNline) )
          __debugbreak();
      }
      Scr_PrintPrevCodePosToBufferWOptions(scrContext, msg, msgSize, &msgPos, v5->entries[0].codePos, v5->entries[0].index, 1, 1, 0);
      ++v6;
      v5 = (const ScriptStackTraceRecord *)((char *)v5 + 16);
    }
    while ( (int)v6 < *p_entryCount );
    v7 = msgPos;
  }
  v11 = (unsigned __int8)*msg;
  if ( (_BYTE)v11 )
  {
    v12 = 0x100400000600i64;
    do
    {
      if ( (unsigned __int8)v11 <= 0x2Cu && _bittest64(&v12, v11) )
        *msg = 32;
      v11 = (unsigned __int8)*++msg;
    }
    while ( (_BYTE)v11 );
  }
  return v7;
}

/*
==============
Scr_SetDynamicEntityField
==============
*/
void Scr_SetDynamicEntityField(scrContext_t *scrContext, LocalClientNum_t localClientNum, int entnum, EntityClass classnum, unsigned int index)
{
  const char *m_scriptPos; 
  unsigned int EntityId; 

  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  ScriptCodePos::SetVarUsagePosIfNull(&scrContext->m_varPub.varUsagePos, "<radiant field variable>");
  EntityId = Scr_GetEntityId(scrContext, entnum, classnum, localClientNum);
  if ( GetObjectType(scrContext, EntityId) != VAR_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11221, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, entId ) == VAR_ENTITY )", (const char *)&queryFormat, "GetObjectType( scrContext, entId ) == VAR_ENTITY") )
    __debugbreak();
  Scr_SetStructField(scrContext, EntityId, index);
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
}

/*
==============
Scr_SetErrorMessage
==============
*/
void Scr_SetErrorMessage(scrContext_t *scrContext, const char *error)
{
  if ( !scrContext->m_varPub.error_message )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, error);
    scrContext->m_varPub.error_message = error_message;
  }
}

/*
==============
Scr_SetLoading
==============
*/
void Scr_SetLoading(scrContext_t *scrContext, int bLoading)
{
  scrContext->m_vmGlob.loading = bLoading;
}

/*
==============
Scr_SetRecordErrors
==============
*/
void Scr_SetRecordErrors(const bool recordErrors)
{
  scrContext_t *i; 

  for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
    i->m_vmPub.recordErrors = recordErrors;
}

/*
==============
Scr_SetRecordScriptPlace
==============
*/
void Scr_SetRecordScriptPlace(scrContext_t *scrContext, int on)
{
  scrContext->m_vmGlob.recordPlace = on == 1 && scrContext->m_varPub.developer;
}

/*
==============
Scr_SetStructField
==============
*/
void Scr_SetStructField(scrContext_t *scrContext, unsigned int structId, unsigned int index)
{
  unsigned int VariableFieldIndex; 
  VariableValue *top; 

  if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11192, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  if ( scrContext->m_vmPub.inparamcount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11193, ASSERT_TYPE_ASSERT, "( pScrVmPub->inparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->inparamcount == 1") )
    __debugbreak();
  VariableFieldIndex = Scr_GetVariableFieldIndex(scrContext, structId, index);
  if ( scrContext->m_vmPub.inparamcount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11197, ASSERT_TYPE_ASSERT, "( pScrVmPub->inparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->inparamcount == 1") )
    __debugbreak();
  top = scrContext->m_vmPub.top;
  scrContext->m_vmPub.inparamcount = 0;
  SetVariableFieldValue(scrContext, VariableFieldIndex, top);
  if ( scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11202, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11203, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  --scrContext->m_vmPub.top;
}

/*
==============
Scr_SetStructFields
==============
*/
void Scr_SetStructFields(scrContext_t *scrContext, unsigned int structId, const SpawnVar *spawnVar)
{
  int v6; 
  const char **v7; 
  unsigned int CanonicalString; 
  unsigned int v9; 
  unsigned int VariableFieldIndex; 
  VariableValue *top; 
  ScriptCodePos v12; 

  if ( !spawnVar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11233, ASSERT_TYPE_ASSERT, "(spawnVar)", (const char *)&queryFormat, "spawnVar") )
    __debugbreak();
  v6 = 0;
  if ( spawnVar->numSpawnVars > 0 )
  {
    v7 = (const char **)&spawnVar->spawnVars[0][1];
    do
    {
      CanonicalString = SL_GetCanonicalString(*(v7 - 1));
      v9 = Scr_SetEntityScriptVariableType(scrContext, CanonicalString, *v7);
      if ( v9 )
      {
        v12.m_scriptPos = ScriptContext_GetVarUsageScriptCodePos(scrContext).m_scriptPos;
        if ( ScriptCodePos::GetVarUsagePos(&v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11252, ASSERT_TYPE_ASSERT, "( varUsageCodePos.GetVarUsagePos() == nullptr )", (const char *)&queryFormat, "varUsageCodePos.GetVarUsagePos() == nullptr") )
          __debugbreak();
        ScriptContext_SetVarUsagePos(scrContext, "<radiant field variable>");
        if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11192, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
          __debugbreak();
        if ( scrContext->m_vmPub.inparamcount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11193, ASSERT_TYPE_ASSERT, "( pScrVmPub->inparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->inparamcount == 1") )
          __debugbreak();
        VariableFieldIndex = Scr_GetVariableFieldIndex(scrContext, structId, v9);
        if ( scrContext->m_vmPub.inparamcount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11197, ASSERT_TYPE_ASSERT, "( pScrVmPub->inparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->inparamcount == 1") )
          __debugbreak();
        top = scrContext->m_vmPub.top;
        scrContext->m_vmPub.inparamcount = 0;
        SetVariableFieldValue(scrContext, VariableFieldIndex, top);
        if ( scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11202, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
          __debugbreak();
        if ( scrContext->m_vmPub.outparamcount )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11203, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
            __debugbreak();
        }
        --scrContext->m_vmPub.top;
        ScriptContext_SetVarUsagePos(scrContext, NULL);
      }
      ++v6;
      v7 += 2;
    }
    while ( v6 < spawnVar->numSpawnVars );
  }
}

/*
==============
Scr_Settings
==============
*/
void Scr_Settings(scrContext_t *scrContext, int developer, int developer_script, int abort_on_error, bool allow_debugger)
{
  bool v9; 

  if ( !abort_on_error )
  {
LABEL_5:
    v9 = developer == 0;
    goto LABEL_6;
  }
  v9 = developer == 0;
  if ( !developer )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1333, ASSERT_TYPE_ASSERT, "( !abort_on_error || developer )", (const char *)&queryFormat, "!abort_on_error || developer") )
      __debugbreak();
    goto LABEL_5;
  }
LABEL_6:
  scrContext->m_varPub.developer = !v9;
  scrContext->m_varPub.allowDebugger = allow_debugger;
  scrContext->m_varPub.developer_script = developer_script != 0;
  scrContext->m_vmPub.abort_on_error = abort_on_error != 0;
}

/*
==============
Scr_ShutdownSystem
==============
*/
void Scr_ShutdownSystem(scrContext_t *scrContext, unsigned __int8 sys, bool freeGameVariable, bool freeObjects)
{
  int function_count; 

  if ( sys != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9887, ASSERT_TYPE_ASSERT, "( sys == SCR_SYS_GAME )", (const char *)&queryFormat, "sys == SCR_SYS_GAME") )
    __debugbreak();
  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, "<script shutdown variable>");
  if ( scrContext->m_varPub.vmExecuting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9895, ASSERT_TYPE_ASSERT, "(pScrVarPub->vmExecuting == 0)", "%s\n\tMismatching enter/leave blocks for executing the vm (%i)", "pScrVarPub->vmExecuting == 0", scrContext->m_varPub.vmExecuting) )
    __debugbreak();
  Scr_ShutdownDebuggerSystem(scrContext, 0);
  if ( scrContext->m_varPub.bInited )
    memset_0(scrContext->m_varPub.saveIdMap, 0, 4i64 * scrContext->m_variableListParentSize);
  Scr_FreeEntityList(scrContext);
  ScriptDebugData_ClearProfileStrings_Runtime();
  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, NULL);
  scrContext->m_varPub.framerate = 0.0;
  if ( scrContext->m_varPub.timeArrayId )
  {
    function_count = scrContext->m_vmPub.function_count;
    scrContext->m_vmPub.function_count = 0;
    scrContext->m_profileScript.enabled = 1;
    if ( scrContext->m_varPub.abort )
    {
      scrContext->m_varPub.abort = 0;
      Scr_InitVariables(scrContext);
    }
    else
    {
      Scr_CleanupVariables(scrContext);
      if ( !function_count )
      {
        if ( scrContext->m_varPub.ext_threadcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9942, ASSERT_TYPE_ASSERT, "( !pScrVarPub->ext_threadcount )", (const char *)&queryFormat, "!pScrVarPub->ext_threadcount") )
          __debugbreak();
        if ( scrContext->m_vmPub.top != scrContext->m_vmPub.stack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9944, ASSERT_TYPE_ASSERT, "( Scr_IsStackClear( scrContext ) )", (const char *)&queryFormat, "Scr_IsStackClear( scrContext )") )
          __debugbreak();
        goto LABEL_26;
      }
    }
    scrContext->m_varPub.bInited = 0;
    Scr_InitClassMap(scrContext);
    scrContext->m_vmPub.function_count = 0;
    scrContext->m_vmPub.maxstack = &scrContext->m_vmPub.stack[2047];
    scrContext->m_vmPub.top = scrContext->m_vmPub.stack;
    scrContext->m_vmPub.function_frame = scrContext->m_vmPub.function_frame_start;
    scrContext->m_vmPub.localVars = (unsigned int *)&scrContext->m_vmGlob.starttime;
    scrContext->m_varPub.evaluate = 0;
    scrContext->m_vmPub.debugCode = 0;
    scrContext->m_varPub.error_message = NULL;
    scrContext->m_vmGlob.dialog_error_message = NULL;
    scrContext->m_varPub.error_index = 0;
    scrContext->m_vmPub.terminal_error = 0;
    *(_QWORD *)&scrContext->m_vmPub.inparamcount = 0i64;
    *(_QWORD *)&scrContext->m_varPub.freeEntList = 0i64;
    *(_QWORD *)&scrContext->m_varPub.timeArrayId = 0i64;
    *(_QWORD *)&scrContext->m_varPub.notifyArrayId = 0i64;
    *(_QWORD *)&scrContext->m_varPub.levelId = 0i64;
    scrContext->m_varPub.animId = 0;
    scrContext->m_vmPub.stack[0].type = VAR_CODEPOS;
    scrContext->m_vmGlob.loading = 0;
    scrContext->m_vmGlob.recordPlace = 0;
    scrContext->m_vmGlob.lastFileName = NULL;
    scrContext->m_vmGlob.lastLine = 0;
    scrContext->m_varPub.ext_threadcount = 0;
    scrContext->m_varPub.numScriptThreads = 0;
    ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, NULL);
    Scr_VM_RegisterDvars();
    ScriptContext_InitDumpStack(scrContext);
    scrContext->m_compilePub.script_loading = 0;
    *(_WORD *)&scrContext->m_animPub.animtree_loading = 0;
    scrContext->m_animPub.animtrees = 0;
    *(_QWORD *)&scrContext->m_compilePub.scriptsPos = 0i64;
    scrContext->m_compilePub.loadedscripts = 0;
    *(_QWORD *)&scrContext->m_compilePub.scriptsDefine = 0i64;
    scrContext->m_compilePub.builtinMeth = 0;
    scrContext->m_profileScript.enabled = 1;
    if ( scrStringDebugGlob )
      scrStringDebugGlob->ignoreChecks = 1;
LABEL_26:
    if ( freeGameVariable )
      Scr_FreeGameVariable(scrContext);
    else
      Scr_MarkGameVariable(scrContext);
    if ( freeObjects )
      goto LABEL_30;
    return;
  }
  scrContext->m_varPub.abort = 0;
  if ( freeGameVariable )
    Scr_FreeGameVariable(scrContext);
  else
    Scr_MarkGameVariable(scrContext);
  if ( freeObjects )
LABEL_30:
    Scr_FreeObjects(scrContext);
}

/*
==============
Scr_StackClear
==============
*/
void Scr_StackClear(scrContext_t *scrContext)
{
  scrContext->m_vmPub.top = scrContext->m_vmPub.stack;
}

/*
==============
Scr_TerminalError
==============
*/
void Scr_TerminalError(ComErrorCode uniqueErrorCode, scrContext_t *scrContext, const char *error)
{
  bool v5; 

  Scr_DumpScriptMemoryUsage(scrContext);
  Scr_DumpScriptThreads(scrContext, 1);
  v5 = scrContext->m_varPub.error_message == NULL;
  scrContext->m_vmPub.terminal_error = 1;
  scrContext->m_varPub.abort = 1;
  if ( v5 )
  {
    Core_strcpy_truncate(error_message, 0x400ui64, error);
    scrContext->m_varPub.error_message = error_message;
  }
  Scr_ErrorInternal(scrContext);
}

/*
==============
Scr_TerminateRunningThread
==============
*/
void Scr_TerminateRunningThread(scrContext_t *scrContext, unsigned int localId)
{
  __int64 function_count; 
  unsigned int *p_localId; 
  int v6; 
  unsigned int v7; 
  function_frame_t *v8; 

  if ( !scrContext->m_vmPub.function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7829, ASSERT_TYPE_ASSERT, "( pScrVmPub->function_count )", (const char *)&queryFormat, "pScrVmPub->function_count") )
    __debugbreak();
  function_count = scrContext->m_vmPub.function_count;
  p_localId = &scrContext->m_vmPub.function_frame_start[function_count].fs.localId;
LABEL_5:
  v6 = function_count;
  while ( 1 )
  {
    if ( !(_DWORD)function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7834, ASSERT_TYPE_ASSERT, "( function_count )", (const char *)&queryFormat, "function_count") )
      __debugbreak();
    v7 = *p_localId;
    if ( *p_localId == localId )
      break;
    LODWORD(function_count) = function_count - 1;
    p_localId -= 10;
    if ( !v7 || !GetSafeParentLocalId(scrContext, v7) )
      goto LABEL_5;
  }
  if ( v6 >= (int)function_count )
  {
    v8 = &scrContext->m_vmPub.function_frame_start[v6];
    do
    {
      if ( scrContext->m_varPub.developer )
        Scr_DebugTerminateThread(scrContext, v6);
      else
        ScriptCodePos::SetScriptPos(&v8->fs.pos, &g_EndPos);
      --v6;
      --v8;
    }
    while ( v6 >= (int)function_count );
  }
}

/*
==============
Scr_TerminateThread
==============
*/
void Scr_TerminateThread(scrContext_t *scrContext, unsigned int localId)
{
  unsigned int StartLocalId; 
  VariableType ObjectType; 
  unsigned int ThreadWaitTime; 
  unsigned int Variable; 
  unsigned int Object; 
  unsigned int ObjectVariable; 
  ScriptCodePos **VariableValueAddress; 
  VariableStackBuffer *v11; 

  StartLocalId = GetStartLocalId(scrContext, localId);
  ObjectType = GetObjectType(scrContext, StartLocalId);
  if ( ObjectType == VAR_THREAD )
  {
    Scr_TerminateRunningThread(scrContext, localId);
  }
  else if ( ObjectType == VAR_NOTIFY_THREAD )
  {
    Scr_TerminateWaittillThread(scrContext, localId, StartLocalId);
  }
  else
  {
    if ( ObjectType != VAR_TIME_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8078, ASSERT_TYPE_ASSERT, "( ( type == VAR_TIME_THREAD ) )", "%s\n\t( type ) = %i", "( type == VAR_TIME_THREAD )", (unsigned __int8)ObjectType) )
      __debugbreak();
    ThreadWaitTime = Scr_GetThreadWaitTime(scrContext, StartLocalId);
    Scr_ClearWaitTime(scrContext, StartLocalId);
    Variable = FindVariable(scrContext, scrContext->m_varPub.timeArrayId, ThreadWaitTime);
    Object = FindObject(scrContext, Variable);
    ObjectVariable = FindObjectVariable(scrContext, Object, StartLocalId);
    if ( !ObjectVariable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7917, ASSERT_TYPE_ASSERT, "( stackId )", (const char *)&queryFormat, "stackId") )
      __debugbreak();
    if ( GetValueType(scrContext, ObjectVariable) != VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7918, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, stackId ) == VAR_STACK )", (const char *)&queryFormat, "GetValueType( scrContext, stackId ) == VAR_STACK") )
      __debugbreak();
    VariableValueAddress = (ScriptCodePos **)GetVariableValueAddress(scrContext, ObjectVariable);
    v11 = (VariableStackBuffer *)*VariableValueAddress;
    if ( scrContext->m_varPub.developer && ScriptCodePos::IsScriptPos(*VariableValueAddress) )
      Scr_GetStackThreadPos(scrContext, localId, v11, 1);
    RemoveObjectVariable(scrContext, Object, StartLocalId);
    if ( !GetArraySize(scrContext, Object) && ThreadWaitTime != scrContext->m_varPub.time )
      RemoveVariable(scrContext, scrContext->m_varPub.timeArrayId, ThreadWaitTime);
    VM_TerminateStack(scrContext, localId, StartLocalId, v11);
  }
}

/*
==============
Scr_TerminateWaittillThread
==============
*/
void Scr_TerminateWaittillThread(scrContext_t *scrContext, unsigned int localId, unsigned int startLocalId)
{
  signed int stringValue; 
  unsigned int Self; 
  unsigned int v8; 
  unsigned int Object; 
  unsigned int v10; 
  VariableUnion *v11; 
  unsigned int v12; 
  unsigned int Variable; 
  unsigned int v14; 
  ScriptCodePos **v15; 
  VariableStackBuffer *v16; 
  unsigned int objectStackId; 
  unsigned int v18; 
  unsigned int ObjectVariable; 
  ScriptCodePos **VariableValueAddress; 
  unsigned int notifyListOwnerId; 
  unsigned int notifyNameListId; 
  unsigned int notifyListId; 

  stringValue = Scr_GetThreadNotifyName(scrContext, startLocalId);
  if ( !stringValue )
  {
    ObjectVariable = FindObjectVariable(scrContext, scrContext->m_varPub.objectStackId, startLocalId);
    if ( !ObjectVariable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7992, ASSERT_TYPE_ASSERT, "( stackId )", (const char *)&queryFormat, "stackId") )
      __debugbreak();
    if ( GetValueType(scrContext, ObjectVariable) != VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7993, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, stackId ) == VAR_STACK )", (const char *)&queryFormat, "GetValueType( scrContext, stackId ) == VAR_STACK") )
      __debugbreak();
    VariableValueAddress = (ScriptCodePos **)GetVariableValueAddress(scrContext, ObjectVariable);
    v16 = (VariableStackBuffer *)*VariableValueAddress;
    if ( scrContext->m_varPub.developer && ScriptCodePos::IsScriptPos(*VariableValueAddress) )
      Scr_GetStackThreadPos(scrContext, localId, v16, 1);
    objectStackId = scrContext->m_varPub.objectStackId;
    v18 = startLocalId;
    goto LABEL_23;
  }
  Self = Scr_GetSelf(scrContext, startLocalId);
  v8 = FindObjectVariable(scrContext, scrContext->m_varPub.pauseArrayId, Self);
  Object = FindObject(scrContext, v8);
  v10 = FindObjectVariable(scrContext, Object, startLocalId);
  v11 = GetVariableValueAddress(scrContext, v10);
  notifyListOwnerId = v11->intValue;
  v12 = FindObjectVariable(scrContext, scrContext->m_varPub.notifyArrayId, v11->intValue);
  notifyListId = FindObject(scrContext, v12);
  Variable = FindVariable(scrContext, notifyListId, stringValue);
  notifyNameListId = FindObject(scrContext, Variable);
  v14 = FindObjectVariable(scrContext, notifyNameListId, startLocalId);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7975, ASSERT_TYPE_ASSERT, "( stackId )", (const char *)&queryFormat, "stackId", notifyListOwnerId) )
    __debugbreak();
  if ( GetValueType(scrContext, v14) != VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7976, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, stackId ) == VAR_STACK )", (const char *)&queryFormat, "GetValueType( scrContext, stackId ) == VAR_STACK") )
    __debugbreak();
  v15 = (ScriptCodePos **)GetVariableValueAddress(scrContext, v14);
  v16 = (VariableStackBuffer *)*v15;
  if ( scrContext->m_varPub.developer && ScriptCodePos::IsScriptPos(*v15) )
    Scr_GetStackThreadPos(scrContext, localId, v16, 1);
  VM_CancelNotifyInternal(scrContext, notifyListOwnerId, startLocalId, notifyListId, notifyNameListId, (scr_string_t)stringValue);
  RemoveObjectVariable(scrContext, Object, startLocalId);
  if ( !GetArraySize(scrContext, Object) )
  {
    objectStackId = scrContext->m_varPub.pauseArrayId;
    v18 = Self;
LABEL_23:
    RemoveObjectVariable(scrContext, objectStackId, v18);
  }
  VM_TerminateStack(scrContext, localId, startLocalId, v16);
}

/*
==============
Scr_UpdateScriptUsageTime
==============
*/
void Scr_UpdateScriptUsageTime(scrContext_t *scrContext, const char *codePos, unsigned __int64 time, unsigned __int64 builtInTime, unsigned int builtInIndex)
{
  unsigned __int64 embeddedTime; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 

  embeddedTime = scrContext->m_vmDebugPub.embeddedTime;
  v6 = time - embeddedTime;
  scrContext->m_vmDebugPub.embeddedTime = 0i64;
  v7 = builtInTime - embeddedTime;
  scrContext->m_vmDebugPub.currentSrcFile->allOpTotal += v6;
  scrContext->m_vmDebugPub.currentSrcFile->allOpTotalBuiltIn += v7;
  if ( scrContext->m_vmDebugPub.currentSrcFile->functionLookupLen )
  {
    scrContext->m_vmDebugPub.currentSrcFuncDynamic->allOpTotal += v6;
    scrContext->m_vmDebugPub.currentSrcFuncDynamic->allOpTotalBuiltIn += v7;
    if ( builtInIndex )
      Scr_UpdateScriptUsageTimeBuiltIn(scrContext, builtInIndex, scrContext->m_vmDebugPub.currentSrcFile, scrContext->m_vmDebugPub.currentSrcFuncStatic, scrContext->m_vmDebugPub.currentSrcFuncDynamic);
  }
}

/*
==============
Scr_UpdateScriptUsageTimeBuiltIn
==============
*/
void Scr_UpdateScriptUsageTimeBuiltIn(const scrContext_t *scrContext, unsigned int builtInIndex, SourceBufferInfo *rootSrcBuffer, SourceFunctionInfoStatic *rootFuncInfoStatic, SourceFunctionInfoDynamic *rootFuncInfoDynamic)
{
  unsigned int m_methBegin; 
  __int64 v19; 
  ScrFuncDebugData *v20; 
  unsigned __int16 *p_builtInIndex; 
  __int64 v22; 
  __int64 prof; 
  int usage; 
  unsigned __int16 *v25; 
  signed __int64 builtInTime; 
  bool v106; 
  int v108; 
  int v123; 
  int v125; 
  int v129; 
  int v130; 
  int v131; 
  int v132; 
  int v134; 
  int v143; 
  int v144; 
  int v146; 
  int v148; 
  int v150; 
  unsigned int v152; 
  __int64 v159; 

  m_methBegin = scrContext->m_methBegin;
  if ( builtInIndex >= m_methBegin )
    v19 = builtInIndex + scrContext->m_funcCount - m_methBegin;
  else
    v19 = builtInIndex - scrContext->m_funcBegin;
  v20 = &scrContext->m_vmDebugPub.m_pFuncTable[v19];
  p_builtInIndex = &rootFuncInfoDynamic->builtInFuncInfo[0].builtInIndex;
  LODWORD(v22) = 0;
  prof = v20->prof;
  usage = v20->usage;
  v20->prof = 0i64;
  v20->usage = 0;
  v25 = &rootFuncInfoDynamic->builtInFuncInfo[0].builtInIndex;
  while ( *v25 != builtInIndex )
  {
    if ( v25[8] == builtInIndex )
    {
      LODWORD(v22) = v22 + 1;
      break;
    }
    if ( v25[16] == builtInIndex )
    {
      LODWORD(v22) = v22 + 2;
      break;
    }
    if ( v25[24] == builtInIndex )
    {
      LODWORD(v22) = v22 + 3;
      break;
    }
    v25 += 32;
    LODWORD(v22) = v22 + 4;
    if ( (unsigned int)v22 >= 0x10 )
      break;
  }
  if ( (_DWORD)v22 != 16 )
    goto LABEL_90;
  LODWORD(v22) = 0;
  while ( *p_builtInIndex )
  {
    if ( !p_builtInIndex[8] )
    {
      LODWORD(v22) = v22 + 1;
      break;
    }
    if ( !p_builtInIndex[16] )
    {
      LODWORD(v22) = v22 + 2;
      break;
    }
    if ( !p_builtInIndex[24] )
    {
      LODWORD(v22) = v22 + 3;
      break;
    }
    p_builtInIndex += 32;
    LODWORD(v22) = v22 + 4;
    if ( (unsigned int)v22 >= 0x10 )
      break;
  }
  if ( (_DWORD)v22 != 16 )
    goto LABEL_90;
  __asm
  {
    vmovaps [rsp+0D8h+var_18], xmm6
    vmovaps [rsp+0D8h+var_28], xmm7
    vmovaps [rsp+0D8h+var_38], xmm8
    vmovaps [rsp+0D8h+var_48], xmm9
    vmovaps [rsp+0D8h+var_58], xmm10
    vmovaps [rsp+0D8h+var_68], xmm11
    vmovaps [rsp+0D8h+var_78], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovaps [rsp+0D8h+var_A8], xmm15
    vmovss  xmm2, cs:__real@5f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[0].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm3, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+var_C4], xmm3
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[1].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm0, xmm1, xmm0
    vminss  xmm3, xmm0, xmm3
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+0D8h+var_CC], xmm3
    vmovss  [rsp+0D8h+var_C0], xmm0
    vcvtsi2ss xmm1, xmm1, rax
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[2].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm0, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+var_D0], xmm0
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[3].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm0, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+var_C8], xmm0
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[4].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm0, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+var_D4], xmm0
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[5].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm0, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+var_D8], xmm0
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[6].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm0, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+arg_0], xmm0
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[7].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm0, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+arg_8], xmm0
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[8].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm15, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[9].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm13, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+var_BC], xmm13
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[10].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm11, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+var_B8], xmm11
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[11].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm9, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+var_B4], xmm9
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[12].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm7, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+var_B0], xmm7
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[13].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm5, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0D8h+var_AC], xmm5
  }
  if ( (rootFuncInfoDynamic->builtInFuncInfo[14].builtInTime & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  builtInTime = rootFuncInfoDynamic->builtInFuncInfo[15].builtInTime;
  __asm
  {
    vdivss  xmm3, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
  }
  v106 = builtInTime == 0;
  if ( builtInTime < 0 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm { vmovss  xmm4, [rsp+0D8h+var_CC] }
  v108 = 2;
  __asm
  {
    vmovss  xmm5, [rsp+0D8h+var_CC]
    vminss  xmm11, xmm5, [rsp+0D8h+var_D0]
    vminss  xmm13, xmm11, [rsp+0D8h+var_C8]
    vminss  xmm2, xmm13, [rsp+0D8h+var_D4]
    vminss  xmm8, xmm2, [rsp+0D8h+var_D8]
    vminss  xmm12, xmm8, [rsp+0D8h+arg_0]
    vmovaps xmm13, [rsp+0D8h+var_88]
  }
  v22 = 15i64;
  __asm
  {
    vmovaps xmm11, [rsp+0D8h+var_68]
    vmovaps xmm9, [rsp+0D8h+var_48]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm1, xmm1, xmm0
    vmovss  xmm0, [rsp+0D8h+var_C4]
    vcomiss xmm0, [rsp+0D8h+var_C0]
    vminss  xmm0, xmm4, [rsp+0D8h+var_D0]
  }
  v123 = 0;
  __asm
  {
    vcomiss xmm4, [rsp+0D8h+var_D0]
    vminss  xmm4, xmm0, [rsp+0D8h+var_C8]
  }
  if ( v106 )
  {
    LOBYTE(v123) = !v106;
    v108 = v123;
  }
  v125 = 3;
  __asm
  {
    vcomiss xmm0, [rsp+0D8h+var_C8]
    vminss  xmm6, xmm4, [rsp+0D8h+var_D4]
    vminss  xmm10, xmm6, [rsp+0D8h+var_D8]
    vminss  xmm0, xmm10, [rsp+0D8h+arg_0]
  }
  if ( v106 )
    v125 = v108;
  v129 = 4;
  __asm { vcomiss xmm4, [rsp+0D8h+var_D4] }
  if ( v106 )
    v129 = v125;
  v130 = 5;
  __asm { vcomiss xmm6, [rsp+0D8h+var_D8] }
  if ( v106 )
    v130 = v129;
  v131 = 6;
  __asm { vcomiss xmm10, [rsp+0D8h+arg_0] }
  if ( v106 )
    v131 = v130;
  v132 = 7;
  __asm
  {
    vcomiss xmm0, [rsp+0D8h+arg_8]
    vminss  xmm0, xmm12, [rsp+0D8h+arg_8]
  }
  if ( v106 )
    v132 = v131;
  v134 = 8;
  __asm
  {
    vcomiss xmm0, xmm15
    vminss  xmm14, xmm0, xmm15
    vminss  xmm12, xmm14, [rsp+0D8h+var_BC]
    vminss  xmm10, xmm12, [rsp+0D8h+var_B8]
    vminss  xmm8, xmm10, [rsp+0D8h+var_B4]
    vminss  xmm6, xmm8, [rsp+0D8h+var_B0]
    vminss  xmm4, xmm6, [rsp+0D8h+var_AC]
    vmovaps xmm15, [rsp+0D8h+var_A8]
  }
  if ( v106 )
    v134 = v132;
  __asm
  {
    vcomiss xmm14, [rsp+0D8h+var_BC]
    vmovaps xmm14, [rsp+0D8h+var_98]
  }
  v143 = 9;
  if ( v106 )
    v143 = v134;
  v144 = 10;
  __asm
  {
    vcomiss xmm12, [rsp+0D8h+var_B8]
    vmovaps xmm12, [rsp+0D8h+var_78]
  }
  if ( v106 )
    v144 = v143;
  v146 = 11;
  __asm
  {
    vcomiss xmm10, [rsp+0D8h+var_B4]
    vmovaps xmm10, [rsp+0D8h+var_58]
  }
  if ( v106 )
    v146 = v144;
  v148 = 12;
  __asm
  {
    vcomiss xmm8, [rsp+0D8h+var_B0]
    vmovaps xmm8, [rsp+0D8h+var_38]
  }
  if ( v106 )
    v148 = v146;
  v150 = 13;
  __asm
  {
    vcomiss xmm6, [rsp+0D8h+var_AC]
    vminss  xmm0, xmm4, xmm3
  }
  if ( v106 )
    v150 = v148;
  v152 = 14;
  __asm
  {
    vcomiss xmm4, xmm3
    vminss  xmm3, xmm0, xmm1
  }
  if ( v106 )
    v152 = v150;
  __asm
  {
    vcomiss xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
  }
  if ( v106 )
    v22 = v152;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, r11
    vmovaps xmm7, [rsp+0D8h+var_28]
    vmovaps xmm6, [rsp+0D8h+var_18]
    vmovss  xmm2, cs:__real@5f800000
  }
  if ( prof < 0 )
    __asm { vaddss  xmm0, xmm0, xmm2 }
  __asm { vcomiss xmm0, xmm3 }
  if ( prof )
  {
    rootFuncInfoDynamic->builtInFuncInfo[(unsigned int)v22].builtInTime = 0i64;
    rootFuncInfoDynamic->builtInFuncInfo[v22].builtInCallCount = 0;
LABEL_90:
    v159 = (unsigned int)v22;
    rootFuncInfoDynamic->builtInFuncInfo[v159].builtInTime += prof;
    rootFuncInfoDynamic->builtInFuncInfo[v159].builtInCallCount += usage;
    rootFuncInfoDynamic->builtInFuncInfo[v159].builtInIndex = builtInIndex;
  }
}

/*
==============
Scr_VM_ComErrorCleanup
==============
*/
void Scr_VM_ComErrorCleanup(scrContext_t *scrContext)
{
  bool v1; 

  v1 = scrContext->m_varPub.vmExecuting == 0;
  scrContext->m_varPub.vmExecuting = 0;
  if ( !v1 )
    scrContext->m_varPub.abort = 1;
}

/*
==============
Scr_VM_EnterExecuteBlock
==============
*/
void Scr_VM_EnterExecuteBlock(scrContext_t *scrContext)
{
  if ( scrContext->m_varPub.vmExecuting == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1494, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.vmExecuting < 0xffffffff )", (const char *)&queryFormat, "scrContext.m_varPub.vmExecuting < UINT_MAX") )
    __debugbreak();
  ++scrContext->m_varPub.vmExecuting;
  scrContext->m_varPub.vmThreadContext = Sys_GetCurrentThreadContext();
}

/*
==============
Scr_VM_LeaveExecuteBlock
==============
*/
void Scr_VM_LeaveExecuteBlock(scrContext_t *scrContext)
{
  int m_threadProfileCount; 
  __int64 v3; 
  ThreadContext CurrentThreadContext; 

  if ( !scrContext->m_varPub.vmExecuting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1528, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.vmExecuting > 0 )", (const char *)&queryFormat, "scrContext.m_varPub.vmExecuting > 0") )
    __debugbreak();
  if ( scrContext->m_varPub.vmThreadContext != Sys_GetCurrentThreadContext() )
  {
    CurrentThreadContext = Sys_GetCurrentThreadContext();
    LODWORD(v3) = scrContext->m_varPub.vmThreadContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1530, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.vmThreadContext ) == ( Sys_GetCurrentThreadContext() )", "scrContext.m_varPub.vmThreadContext == Sys_GetCurrentThreadContext()\n\t%i, %i", v3, CurrentThreadContext) )
      __debugbreak();
  }
  --scrContext->m_varPub.vmExecuting;
  m_threadProfileCount = scrContext->m_threadProfileCount;
  if ( m_threadProfileCount )
  {
    scrContext->m_threadProfileCount = m_threadProfileCount - 1;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
Scr_VM_PrintCallstack
==============
*/
void Scr_VM_PrintCallstack(const scrContext_t *scrContext)
{
  if ( scrContext->m_varPub.vmExecuting )
  {
    if ( scrContext->m_varPub.vmThreadContext == Sys_GetCurrentThreadContext() )
      RuntimeErrorInternal(scrContext, 1, scrContext->m_vmPub.function_frame->fs.pos, 0);
  }
}

/*
==============
Scr_VM_RegisterDvars
==============
*/

void __fastcall Scr_VM_RegisterDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v6; 
  const dvar_t *v10; 

  Dvar_BeginPermanentRegistration();
  logScriptTimes = Dvar_RegisterBool("NLPNNSLPPQ", 0, 0, "Log times for every print called from script");
  scriptIgnoreInfiniteLoops = Dvar_RegisterBool("NMNRTSNMKN", 0, 0, "Allows script to loop infinitely without any script errors or warnings.");
  scriptInfiniteLoopTime = Dvar_RegisterInt("NKKSQQNRPR", 5000, 10, 60000, 0, "The time stuck in script which we treat as an infinite loop (ms).");
  scriptThreadThresholdTime = Dvar_RegisterInt("MPTOPRNQKQ", 60000, 10, 60000, 0, "Threshold time in a thread that will trigger a script stack trace (ms).");
  scriptThreadThresholdTimeMaxDumps = Dvar_RegisterInt("MNROMSLNOL", 5, 1, 1000, 0, "Max script stack traces from threshold times.");
  scriptThreadThresholdTimeMaxResetTime = Dvar_RegisterInt("MNROMSLNOL", 5, 1, 100000, 0, "Reset time when max script stack traces from threshold reached (ms).");
  script_thread_profile = Dvar_RegisterBool("MNMTQKSQQR", 1, 0, "Add profile tags for each resumed top-level thread");
  loading_sre_fatal = Dvar_RegisterBool("MQOOTMSSNN", 1, 0, "Loading errors prevent level from loading.");
  scr_errorOnExcessDeveloperVariables = Dvar_RegisterBool("scr_errorOnExcessDeveloperVariables", 1, 0, "Enables SREs when script variable usage (child or parent) exceeds the developer limits. Disable to suppress the developer limit SRE (application will still terminate if ship limits are exceeded).");
  sre_fatal = Dvar_RegisterBool("NSTQMOPMTQ", 1, 0, "When false, returns from Scr_Error instead of calling Sys_Error (useful when stress testing)");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm1, cs:__real@3f000000; value
  }
  scr_profilingLevel = Dvar_RegisterInt("scr_profilingLevel", 2, 1, 500, 0, "Controls which levels of script profile tags to filter in/out");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v6 = Dvar_RegisterFloat("NTPQLQLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "script file time in ms that will cause it to be tracked.");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm1, cs:__real@3e99999a; value
  }
  script_usage_track_src_min_time = v6;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v10 = Dvar_RegisterFloat("NLQLRNKMNO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "script func time in ms that will cause it to be tracked.");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm1, cs:__real@3dcccccd; value
  }
  script_usage_track_func_min_time = v10;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  script_usage_track_func_min_time_built_in = Dvar_RegisterFloat("NMPLNNPQLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Built-in func time in ms that will cause it to be tracked.");
  script_usage_tracking = Dvar_RegisterInt("LNQMMRLTMK", 0, 0, 1, 0, "Enable calculation of script time and tracking");
  DVARINT_script_print_vars = Dvar_RegisterInt("SLONPMTQP", 0, 0, 2, 0, "Print out all of the script variables to the log (1 = server, 2 = client");
  script_print_vars_file = Dvar_RegisterString("NLPLOSKMTQ", "scriptvars.txt", 0, "If set, specifies the file to output script_print_vars output too.");
  script_print_vars_flags = Dvar_RegisterInt("SLSPPOOML", 31, 0, 31, 0, "Bits that control the printing ( 1 => Include id header, 2 => print the codepos, 4 => dump threads, 8 => dump vars, 16 => values)");
  script_notifydump = Dvar_RegisterInt("LKOPNROPNK", -1, -1, 2047, 4u, "Write notify debug info for this entity");
  Dvar_EndPermanentRegistration();
}

/*
==============
Scr_ValidateNotInProfileBlock
==============
*/
void Scr_ValidateNotInProfileBlock(scrContext_t *scrContext, const char *opcode)
{
  int v2; 
  int v5; 
  bitarray<128> *i; 
  bitarray<128> *v7; 
  const char *v8; 
  __int64 v9; 
  __int64 v10; 

  v2 = 0;
  v5 = 0;
  for ( i = &scrContext->m_profileScript.threadId[scrContext->m_vmPub.function_frame->fs.localId]; !i->array[0]; i = (bitarray<128> *)((char *)i + 4) )
  {
    if ( (unsigned int)++v5 >= 4 )
      return;
  }
  do
  {
    v7 = &scrContext->m_profileScript.threadId[scrContext->m_vmPub.function_frame->fs.localId];
    if ( (unsigned int)v2 >= 0x80 )
    {
      LODWORD(v10) = 128;
      LODWORD(v9) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, v10) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v2 & 0x1F)) & v7->array[(unsigned __int64)(unsigned int)v2 >> 5]) != 0 )
    {
      v8 = j_va("%s while in a profile block not supported. Inside prof %s.", opcode, scrContext->m_profileScript.profileScriptNames[v2]);
      if ( !scrContext->m_varPub.error_message )
      {
        Core_strcpy_truncate(error_message, 0x400ui64, v8);
        scrContext->m_varPub.error_message = error_message;
      }
      Scr_ErrorInternal(scrContext);
    }
    ++v2;
  }
  while ( v2 < 128 );
}

/*
==============
SetEntityFieldValue
==============
*/
char SetEntityFieldValue(scrContext_t *scrContext, EntityClass classnum, int entnum, LocalClientNum_t clientnum, int offset, VariableValue *value)
{
  scrVmPub_t *p_m_vmPub; 
  unsigned __int64 v10; 
  int v11; 
  unsigned int inparamcount; 
  unsigned __int64 v13; 
  unsigned int outparamcount; 
  unsigned __int64 v16; 

  p_m_vmPub = &scrContext->m_vmPub;
  if ( ((char *)value - (char *)&scrContext->m_vmPub - 2616) >> 4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11038, ASSERT_TYPE_ASSERT, "( ( value - pScrVmPub->stack > 0 ) )", "%s\n\t( value - pScrVmPub->stack ) = 0x%llx", "( value - pScrVmPub->stack > 0 )", ((char *)value - (char *)&scrContext->m_vmPub - 2616) >> 4) )
    __debugbreak();
  if ( value - p_m_vmPub->maxstack > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11039, ASSERT_TYPE_ASSERT, "( ( value - pScrVmPub->maxstack <= 0 ) )", "%s\n\t( value - pScrVmPub->maxstack ) = 0x%llx", "( value - pScrVmPub->maxstack <= 0 )", value - p_m_vmPub->maxstack) )
    __debugbreak();
  if ( p_m_vmPub->inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11040, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( p_m_vmPub->outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11041, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  p_m_vmPub->outparamcount = 1;
  p_m_vmPub->top = value;
  v10 = __rdtsc();
  v11 = GScr_SetObjectField(classnum, entnum, offset);
  inparamcount = p_m_vmPub->inparamcount;
  if ( v11 )
  {
    if ( inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11077, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
      __debugbreak();
    outparamcount = p_m_vmPub->outparamcount;
    if ( outparamcount )
    {
      if ( outparamcount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11081, ASSERT_TYPE_ASSERT, "( pScrVmPub->outparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->outparamcount == 1") )
        __debugbreak();
      RemoveRefToValue(scrContext, (unsigned __int8)p_m_vmPub->top->type, p_m_vmPub->top->u);
      --p_m_vmPub->top;
      p_m_vmPub->outparamcount = 0;
    }
    v16 = __rdtsc();
    scrContext->m_entFieldTime += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v10;
    return 1;
  }
  else
  {
    if ( inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11065, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
      __debugbreak();
    if ( p_m_vmPub->outparamcount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11066, ASSERT_TYPE_ASSERT, "( pScrVmPub->outparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->outparamcount == 1") )
      __debugbreak();
    p_m_vmPub->outparamcount = 0;
    v13 = __rdtsc();
    scrContext->m_entFieldTime += (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - v10;
    return 0;
  }
}

/*
==============
SetEntityFieldValueBinary
==============
*/
char SetEntityFieldValueBinary(scrContext_t *scrContext, int entnum, int offset, VariableValue *value)
{
  scrVmPub_t *p_m_vmPub; 
  signed __int64 v7; 
  unsigned int outparamcount; 

  p_m_vmPub = &scrContext->m_vmPub;
  v7 = ((char *)value - (char *)&scrContext->m_vmPub - 2616) >> 4;
  if ( v7 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11100, ASSERT_TYPE_ASSERT, "( ( value - pScrVmPub->stack > 0 ) )", "%s\n\t( value - pScrVmPub->stack ) = 0x%llx", "( value - pScrVmPub->stack > 0 )", v7) )
    __debugbreak();
  if ( value - p_m_vmPub->maxstack > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11101, ASSERT_TYPE_ASSERT, "( ( value - pScrVmPub->maxstack <= 0 ) )", "%s\n\t( value - pScrVmPub->maxstack ) = 0x%llx", "( value - pScrVmPub->maxstack <= 0 )", value - p_m_vmPub->maxstack) )
    __debugbreak();
  if ( p_m_vmPub->inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11102, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( p_m_vmPub->outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11103, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  p_m_vmPub->outparamcount = 1;
  p_m_vmPub->top = value;
  Scr_SetEntityFieldBinary(scrContext, entnum, offset);
  if ( p_m_vmPub->inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11109, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  outparamcount = p_m_vmPub->outparamcount;
  if ( outparamcount )
  {
    if ( outparamcount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11113, ASSERT_TYPE_ASSERT, "( pScrVmPub->outparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->outparamcount == 1") )
      __debugbreak();
    RemoveRefToValue(scrContext, (unsigned __int8)p_m_vmPub->top->type, p_m_vmPub->top->u);
    --p_m_vmPub->top;
    p_m_vmPub->outparamcount = 0;
  }
  return 1;
}

/*
==============
UpdateCurrentFuncInfo
==============
*/
void UpdateCurrentFuncInfo(scrContext_t *scrContext, const char *codePos, bool newCall)
{
  __int64 SourceBuffer_Fast; 
  signed int v7; 
  SourceBufferInfo *v8; 
  unsigned int functionLookupLen; 
  signed int v10; 
  __int64 v11; 
  SourceFunctionInfoStatic *functionLookupStatic; 
  __int64 v13; 
  unsigned __int64 codePosEnd; 
  SourceBufferInfo *currentSrcFile; 
  SourceFunctionInfoDynamic *v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  unsigned int sourceBufferLookupLen; 

  if ( codePos && Scr_IsInOpcodeMemory(scrContext, codePos) )
  {
    SourceBuffer_Fast = Scr_GetSourceBuffer_Fast(scrContext, codePos - 1);
    if ( (unsigned int)SourceBuffer_Fast >= scrContext->m_parserPub.sourceBufferLookupLen )
    {
      sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
      v18 = SourceBuffer_Fast;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2030, ASSERT_TYPE_ASSERT, "(unsigned)( bufferIndex ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "bufferIndex doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", v18, sourceBufferLookupLen) )
        __debugbreak();
    }
    v7 = 0;
    v8 = &scrContext->m_parserPub.sourceBufferLookup[SourceBuffer_Fast];
    scrContext->m_vmDebugPub.currentSrcFile = v8;
    scrContext->m_vmDebugPub.currentSrcFuncStatic = NULL;
    scrContext->m_vmDebugPub.currentSrcFuncDynamic = NULL;
    functionLookupLen = v8->functionLookupLen;
    if ( functionLookupLen )
    {
      v10 = functionLookupLen - 1;
      LODWORD(v11) = 0;
      if ( (int)(functionLookupLen - 1) >= 0 )
      {
        functionLookupStatic = v8->functionLookupStatic;
        do
        {
          v11 = (v10 + v7) / 2;
          v13 = (unsigned int)((v10 + v7) / 2);
          if ( functionLookupStatic[v13].codePos <= codePos )
          {
            codePosEnd = (unsigned __int64)functionLookupStatic[v13].codePosEnd;
            if ( !codePosEnd || codePosEnd >= (unsigned __int64)codePos )
              break;
          }
          if ( functionLookupStatic[v11].codePos <= codePos )
          {
            if ( functionLookupStatic[v11].codePosEnd < codePos )
              v7 = v11 + 1;
          }
          else
          {
            v10 = v11 - 1;
          }
        }
        while ( v7 <= v10 );
      }
      if ( (unsigned int)v11 >= functionLookupLen )
      {
        LODWORD(v19) = v8->functionLookupLen;
        LODWORD(v17) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2065, ASSERT_TYPE_ASSERT, "(unsigned)( funcMid ) < (unsigned)( pScrVmDebugPub->currentSrcFile->functionLookupLen )", "funcMid doesn't index pScrVmDebugPub->currentSrcFile->functionLookupLen\n\t%i not in [0, %i)", v17, v19) )
          __debugbreak();
      }
      currentSrcFile = scrContext->m_vmDebugPub.currentSrcFile;
      scrContext->m_vmDebugPub.currentSrcFuncStatic = &currentSrcFile->functionLookupStatic[(int)v11];
      v16 = &currentSrcFile->functionLookupDynamic[(int)v11];
      scrContext->m_vmDebugPub.currentSrcFuncDynamic = v16;
      if ( newCall )
        ++v16->callCount;
    }
  }
}

/*
==============
VM_ArchiveStack
==============
*/
VariableStackBuffer *VM_ArchiveStack(scrContext_t *scrContext, VariableValue *top, ScriptCodePos codePos)
{
  signed __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  _DWORD *v9; 
  unsigned int localId; 
  VariableType *v11; 
  VariableType *p_type; 
  function_frame_t *v13; 
  VariableType v14; 
  VariableStackBuffer *result; 
  VariableStackBuffer *v16; 

  v5 = top - scrContext->m_fs.startTop;
  if ( v5 != (unsigned __int16)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7370, ASSERT_TYPE_ASSERT, "( size == (unsigned short)size )", (const char *)&queryFormat, "size == (unsigned short)size") )
    __debugbreak();
  v7 = 9 * v5;
  v8 = 9 * v5 + 17;
  if ( v8 != (unsigned __int16)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7372, ASSERT_TYPE_ASSERT, "( bufLen == (unsigned short)bufLen )", (const char *)&queryFormat, "bufLen == (unsigned short)bufLen") )
    __debugbreak();
  v9 = MT_Alloc(9 * v5 + 17, 1);
  ++scrContext->m_varPub.numScriptThreads;
  localId = scrContext->m_fs.localId;
  *(ScriptCodePos *)v9 = codePos;
  v11 = (VariableType *)v9 + v7 + 17;
  v9[3] = localId;
  *((_WORD *)v9 + 4) = v5;
  *((_WORD *)v9 + 5) = 9 * v5 + 17;
  *((_BYTE *)v9 + 16) = scrContext->m_varPub.time;
  v16 = (VariableStackBuffer *)v9;
  scrContext->m_vmPub.localVars -= scrContext->m_fs.localVarCount;
  if ( v7 + 17 != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7388, ASSERT_TYPE_ASSERT, "( buf - (const char *)stackValue == bufLen )", (const char *)&queryFormat, "buf - (const char *)stackValue == bufLen") )
    __debugbreak();
  if ( v5 )
  {
    p_type = &top->type;
    do
    {
      if ( *p_type == VAR_CODEPOS )
      {
        v13 = --scrContext->m_vmPub.function_frame;
        --scrContext->m_vmPub.function_count;
        *((_QWORD *)v11 - 1) = v13->fs.pos.m_genericPos;
        scrContext->m_vmPub.localVars -= scrContext->m_vmPub.function_frame->fs.localVarCount;
        localId = GetParentLocalId(scrContext, localId);
      }
      else
      {
        *((_QWORD *)v11 - 1) = *((_QWORD *)p_type - 1);
      }
      v14 = *p_type;
      v11 -= 9;
      p_type -= 16;
      *v11 = v14;
      --v5;
    }
    while ( v5 );
  }
  Scr_FixupDebuggerCallstack(scrContext, localId);
  --scrContext->m_vmPub.function_count;
  --scrContext->m_vmPub.function_frame;
  AddRefToObject(scrContext, localId);
  result = v16;
  scrContext->m_fs.localId = localId;
  return result;
}

/*
==============
VM_CancelNotify
==============
*/
void VM_CancelNotify(scrContext_t *scrContext, unsigned int notifyListOwnerId, unsigned int startLocalId)
{
  unsigned int ObjectVariable; 
  unsigned int Object; 
  signed int stringValue; 
  unsigned int Variable; 
  unsigned int v10; 

  ObjectVariable = FindObjectVariable(scrContext, scrContext->m_varPub.notifyArrayId, notifyListOwnerId);
  Object = FindObject(scrContext, ObjectVariable);
  stringValue = Scr_GetThreadNotifyName(scrContext, startLocalId);
  if ( !stringValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7198, ASSERT_TYPE_ASSERT, "( stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stringValue != NULL_SCR_STRING") )
    __debugbreak();
  Variable = FindVariable(scrContext, Object, stringValue);
  v10 = FindObject(scrContext, Variable);
  VM_CancelNotifyInternal(scrContext, notifyListOwnerId, startLocalId, Object, v10, (scr_string_t)stringValue);
}

/*
==============
VM_CancelNotifyInternal
==============
*/
void VM_CancelNotifyInternal(scrContext_t *scrContext, unsigned int notifyListOwnerId, unsigned int startLocalId, unsigned int notifyListId, unsigned int notifyNameListId, scr_string_t stringValue)
{
  unsigned int ObjectVariable; 
  unsigned int Variable; 

  if ( stringValue != Scr_GetThreadNotifyName(scrContext, startLocalId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7170, ASSERT_TYPE_ASSERT, "( stringValue == Scr_GetThreadNotifyName( scrContext, startLocalId ) )", (const char *)&queryFormat, "stringValue == Scr_GetThreadNotifyName( scrContext, startLocalId )") )
    __debugbreak();
  ObjectVariable = FindObjectVariable(scrContext, scrContext->m_varPub.notifyArrayId, notifyListOwnerId);
  if ( notifyListId != FindObject(scrContext, ObjectVariable) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7171, ASSERT_TYPE_ASSERT, "( notifyListId == FindObject( scrContext, FindObjectVariable( scrContext, pScrVarPub->notifyArrayId, notifyListOwnerId ) ) )", (const char *)&queryFormat, "notifyListId == FindObject( scrContext, FindObjectVariable( scrContext, pScrVarPub->notifyArrayId, notifyListOwnerId ) )") )
    __debugbreak();
  Variable = FindVariable(scrContext, notifyListId, stringValue);
  if ( notifyNameListId != FindObject(scrContext, Variable) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7172, ASSERT_TYPE_ASSERT, "( notifyNameListId == FindObject( scrContext, FindVariable( scrContext, notifyListId, static_cast<unsigned>(stringValue) ) ) )", (const char *)&queryFormat, "notifyNameListId == FindObject( scrContext, FindVariable( scrContext, notifyListId, static_cast<unsigned>(stringValue) ) )") )
    __debugbreak();
  Scr_RemoveThreadNotifyName(scrContext, startLocalId);
  RemoveObjectVariable(scrContext, notifyNameListId, startLocalId);
  if ( !GetArraySize(scrContext, notifyNameListId) )
  {
    RemoveVariable(scrContext, notifyListId, stringValue);
    if ( !GetArraySize(scrContext, notifyListId) )
      RemoveObjectVariable(scrContext, scrContext->m_varPub.notifyArrayId, notifyListOwnerId);
  }
}

/*
==============
VM_Endon
==============
*/
void VM_Endon(scrContext_t *scrContext, unsigned int selfId, unsigned int localId, scr_string_t stringValue)
{
  unsigned int v8; 
  unsigned int ObjectVariable; 
  unsigned int Array; 
  unsigned int Variable; 
  unsigned int v12; 
  unsigned int pauseArrayId; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int NewObjectVariable; 
  VariableValue value; 

  AddRefToObject(scrContext, localId);
  v8 = AllocThread(scrContext, localId);
  if ( GetObjectType(scrContext, selfId) == VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8452, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, selfId ) != VAR_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, selfId ) != VAR_THREAD") )
    __debugbreak();
  if ( GetObjectType(scrContext, selfId) == VAR_NOTIFY_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8453, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, selfId ) != VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, selfId ) != VAR_NOTIFY_THREAD") )
    __debugbreak();
  if ( GetObjectType(scrContext, selfId) == VAR_TIME_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8454, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, selfId ) != VAR_TIME_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, selfId ) != VAR_TIME_THREAD") )
    __debugbreak();
  if ( GetObjectType(scrContext, selfId) == VAR_CHILD_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8455, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, selfId ) != VAR_CHILD_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, selfId ) != VAR_CHILD_THREAD") )
    __debugbreak();
  if ( GetObjectType(scrContext, selfId) == VAR_DEAD_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8456, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, selfId ) != VAR_DEAD_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, selfId ) != VAR_DEAD_THREAD") )
    __debugbreak();
  ObjectVariable = GetObjectVariable(scrContext, scrContext->m_varPub.notifyArrayId, selfId);
  Array = GetArray(scrContext, ObjectVariable);
  Variable = GetVariable(scrContext, Array, stringValue);
  v12 = GetArray(scrContext, Variable);
  GetObjectVariable(scrContext, v12, v8);
  RemoveRefToObject(scrContext, v8);
  pauseArrayId = scrContext->m_varPub.pauseArrayId;
  value.type = VAR_POINTER;
  value.u.intValue = selfId;
  v14 = GetObjectVariable(scrContext, pauseArrayId, localId);
  v15 = GetArray(scrContext, v14);
  NewObjectVariable = GetNewObjectVariable(scrContext, v15, v8);
  SetNewVariableValue(scrContext, NewObjectVariable, &value);
  Scr_SetThreadNotifyName(scrContext, v8, stringValue);
}

/*
==============
VM_Execute
==============
*/

__int64 __fastcall VM_Execute(scrContext_t *scrContext, __int64 a2, double _XMM2_8)
{
  signed __int64 v3; 
  void *v9; 
  function_stack_t *p_m_fs; 
  scrVmDebugPub_t *p_m_vmDebugPub; 
  scrContext_t *v13; 
  const char *m_scriptPos; 
  ProfileScript *Profile; 
  ProfileScript *v21; 
  unsigned __int64 v22; 
  int v23; 
  __int64 v25; 
  unsigned int **p_localVars; 
  unsigned __int64 v27; 
  __int64 v28; 
  int m_scriptThreadThreshDumps; 
  unsigned __int64 v30; 
  unsigned __int64 m_runThreadsTimeStart; 
  __int64 v32; 
  ScriptCodePos v33; 
  scrVmDebugPub_t *v38; 
  int v39; 
  __int64 v40; 
  unsigned __int64 v41; 
  SourceFunctionInfoDynamic *currentSrcFuncDynamic; 
  unsigned __int64 v43; 
  unsigned __int64 v44; 
  unsigned __int64 embeddedTime; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  unsigned __int64 v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned __int64 v52; 
  VariableValue *v53; 
  unsigned __int64 v54; 
  VariableValue *v55; 
  unsigned __int64 v56; 
  VariableValue *v57; 
  unsigned __int64 v58; 
  VariableValue *v59; 
  unsigned __int64 v60; 
  VariableValue *v61; 
  unsigned __int64 v62; 
  VariableValue *v63; 
  unsigned __int64 v64; 
  VariableValue *v65; 
  unsigned __int64 v66; 
  VariableValue *v67; 
  unsigned __int64 v68; 
  VariableValue *v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned __int64 v72; 
  VariableValue *v73; 
  unsigned int v74; 
  VariableValue *v75; 
  VariableValue *v76; 
  VariableValue *v77; 
  VariableValue *v78; 
  VariableValue *m; 
  VariableValue *v80; 
  unsigned __int8 v81; 
  int v82; 
  unsigned int v83; 
  unsigned int v84; 
  scrContext_t *v85; 
  VariableValue *v86; 
  VariableValue *v87; 
  unsigned __int8 v88; 
  int v89; 
  unsigned int v90; 
  unsigned int v91; 
  scrContext_t *v92; 
  VariableValue *v93; 
  VariableValue *v94; 
  VariableValue *v95; 
  VariableValue *v96; 
  char *v97; 
  char v98; 
  unsigned int v99; 
  unsigned int v100; 
  char *v101; 
  __int64 v102; 
  __int64 v103; 
  VariableValue *v104; 
  VariableValue *v105; 
  unsigned int v106; 
  char *v107; 
  __int64 v108; 
  VariableValue *v109; 
  int v110; 
  __int64 v111; 
  __int64 v112; 
  VariableValue *v113; 
  VariableValue *k; 
  VariableValue *v115; 
  __int64 v116; 
  unsigned int v117; 
  int v118; 
  char *v119; 
  unsigned int v120; 
  int v121; 
  unsigned int v122; 
  int v123; 
  const char *v124; 
  const char *v125; 
  int v126; 
  const char *v127; 
  const char *v128; 
  unsigned int SafeParentLocalId; 
  VariableValue *v130; 
  VariableValue *v131; 
  VariableValue *v132; 
  VariableValue *v133; 
  VariableValue *v134; 
  unsigned int m_threadCount; 
  const char *ScriptPos; 
  __int64 v139; 
  __int64 v140; 
  __int64 v141; 
  unsigned __int64 v142; 
  unsigned __int64 v143; 
  unsigned __int64 v144; 
  unsigned __int64 v145; 
  unsigned int v146; 
  unsigned int v147; 
  __int64 v148; 
  SourceBufferInfo *v149; 
  unsigned int v150; 
  int v151; 
  int v152; 
  int v153; 
  unsigned int v154; 
  SourceFunctionInfoStatic *v155; 
  __int64 v156; 
  unsigned __int64 v157; 
  bool v158; 
  VariableValue *v159; 
  VariableValue *v160; 
  VariableValue *v161; 
  VariableValue *v162; 
  VariableValue *startTop; 
  unsigned __int64 v164; 
  VariableValue *v165; 
  unsigned __int64 v166; 
  VariableValue *v167; 
  VariableValue *v168; 
  unsigned __int64 v169; 
  VariableValue *v170; 
  VariableValue *v171; 
  int v172; 
  unsigned __int64 v173; 
  VariableValue *v174; 
  int v175; 
  unsigned __int64 v176; 
  VariableValue *v177; 
  unsigned __int64 v178; 
  VariableValue *v179; 
  int v180; 
  unsigned __int64 v181; 
  VariableValue *v182; 
  int v183; 
  unsigned __int64 v184; 
  VariableValue *v185; 
  unsigned __int64 v186; 
  VariableValue *v187; 
  int v188; 
  unsigned __int64 v189; 
  VariableValue *v190; 
  unsigned int v191; 
  VariableValue *v192; 
  unsigned __int64 v193; 
  VariableValue *v194; 
  unsigned __int64 v195; 
  VariableValue *v196; 
  scr_string_t v197; 
  VariableValue *v198; 
  unsigned __int64 v199; 
  VariableValue *v200; 
  char *v201; 
  unsigned __int64 v202; 
  VariableValue *v203; 
  unsigned int localId; 
  unsigned __int64 v205; 
  VariableValue *v206; 
  unsigned __int64 v207; 
  VariableValue *v208; 
  unsigned __int64 v209; 
  VariableValue *v210; 
  unsigned __int64 v211; 
  VariableValue *v212; 
  unsigned __int64 v213; 
  VariableValue *v214; 
  VariableUnion v215; 
  bool v216; 
  unsigned __int64 v217; 
  VariableValue *v218; 
  char *v219; 
  unsigned int v220; 
  unsigned int v221; 
  unsigned int v222; 
  unsigned __int64 v223; 
  VariableValue *v224; 
  unsigned __int64 v225; 
  VariableValue *v226; 
  unsigned __int64 v227; 
  VariableValue *v228; 
  unsigned __int64 v229; 
  VariableValue *v230; 
  unsigned __int64 v231; 
  VariableValue *v232; 
  unsigned __int64 v233; 
  VariableValue *v234; 
  unsigned __int64 v235; 
  VariableValue *v236; 
  unsigned __int64 v237; 
  VariableValue *v238; 
  unsigned int v239; 
  unsigned int v240; 
  __int64 v241; 
  unsigned int v242; 
  VariableValue *v243; 
  unsigned int v244; 
  VariableType v245; 
  const char *v246; 
  unsigned int ArrayVariable; 
  const char *v248; 
  const char *v249; 
  bool v250; 
  unsigned int v251; 
  unsigned int ArraySize; 
  unsigned int NewArrayVariable; 
  unsigned int v254; 
  unsigned int animId; 
  unsigned int v256; 
  unsigned int v257; 
  VariableType ObjectType; 
  unsigned int v259; 
  unsigned int Self; 
  unsigned int v261; 
  unsigned int v262; 
  unsigned int v263; 
  VariableValue *v264; 
  VariableValue *v265; 
  VariableValue *v266; 
  VariableValue *top; 
  VariableValue *v268; 
  VariableValue *v269; 
  unsigned int v270; 
  VariableValue *v271; 
  VariableValue *v272; 
  VariableValue *v273; 
  unsigned __int8 v274; 
  int v275; 
  scrContext_t *v276; 
  unsigned int v277; 
  VariableValue *v278; 
  VariableValue *v279; 
  unsigned __int8 v280; 
  int v281; 
  scrContext_t *v282; 
  unsigned int v283; 
  VariableValue *v284; 
  VariableValue *v285; 
  VariableValue *v286; 
  VariableValue *v287; 
  unsigned int *v288; 
  __int64 v289; 
  unsigned int v290; 
  scrContext_t *v291; 
  int i; 
  const char *v293; 
  unsigned int v294; 
  unsigned int levelId; 
  VariableValue *v296; 
  unsigned int Variable; 
  unsigned int v298; 
  unsigned int v299; 
  unsigned int VariableFieldIndex; 
  char v301; 
  VariableValue *v302; 
  __int64 v303; 
  unsigned int v304; 
  unsigned int v305; 
  const char *v306; 
  int v307; 
  unsigned int v308; 
  unsigned int m_funcCount; 
  unsigned int v310; 
  const char *v311; 
  int v312; 
  unsigned int v313; 
  scrContext_t *v314; 
  ScriptCodePos v315; 
  unsigned int v316; 
  unsigned int v317; 
  unsigned int v318; 
  unsigned int NewObjectVariableReverse; 
  unsigned int v320; 
  char *v321; 
  VariableValue *v322; 
  unsigned int v323; 
  char **v324; 
  const char *v325; 
  const char *v326; 
  VariableValue *v327; 
  char *v328; 
  VariableValue *v329; 
  VariableUnion u; 
  const char *v331; 
  const char *v332; 
  unsigned int v333; 
  unsigned int v334; 
  unsigned __int64 v335; 
  __int64 v336; 
  char *v337; 
  __int64 v338; 
  VariableValue *v339; 
  unsigned int v340; 
  unsigned int v341; 
  int v342; 
  const char *v343; 
  const char *v344; 
  const char *v345; 
  const char *v346; 
  unsigned __int64 v347; 
  __int64 v348; 
  VariableUnion *v349; 
  VariableUnion v350; 
  unsigned int m_funcBegin; 
  unsigned int v352; 
  unsigned int v353; 
  unsigned int v354; 
  unsigned __int64 v355; 
  unsigned __int64 v356; 
  scrVmDebugPub_t *v357; 
  unsigned __int64 v358; 
  __int64 v359; 
  unsigned __int64 v360; 
  scrContext_t *v361; 
  unsigned __int64 v362; 
  __int64 v363; 
  __int64 v364; 
  VariableValue *v365; 
  unsigned __int64 v366; 
  unsigned __int64 v367; 
  unsigned __int64 v368; 
  __int64 v369; 
  VariableValue *v370; 
  unsigned __int64 v371; 
  unsigned __int64 v372; 
  __int64 v373; 
  VariableValue *v374; 
  VariableValue *v375; 
  unsigned int v376; 
  int v377; 
  const char *v378; 
  const char *v379; 
  const char *v380; 
  const char *v381; 
  VariableUnion *p_u; 
  unsigned int *v383; 
  unsigned __int64 v384; 
  __int64 v385; 
  __int64 v386; 
  __int64 v387; 
  unsigned __int64 v388; 
  __int64 v389; 
  unsigned int uintValue; 
  unsigned int m_methBegin; 
  unsigned int m_methCount; 
  VariableValue *v393; 
  unsigned int v394; 
  scr_entref_t EntityIdRef; 
  int v396; 
  int v397; 
  unsigned __int64 v398; 
  unsigned __int64 v399; 
  unsigned __int64 v400; 
  __int64 v401; 
  unsigned __int64 v402; 
  scrVmDebugPub_t *v403; 
  unsigned __int64 v404; 
  unsigned int v405; 
  __int64 v406; 
  __int64 v407; 
  const char *v408; 
  unsigned int v409; 
  int v410; 
  VariableType v411; 
  const char *v412; 
  const char *v413; 
  VariableType v414; 
  const char *v415; 
  const char *v416; 
  int v417; 
  bool v418; 
  bool v419; 
  VariableType v421; 
  const char *v430; 
  const char *v431; 
  unsigned int v432; 
  ScriptCodePos v433; 
  unsigned int v434; 
  unsigned int v435; 
  unsigned int v436; 
  unsigned int v437; 
  unsigned int v438; 
  ScriptCodePos v439; 
  unsigned int v440; 
  unsigned int v441; 
  unsigned int v442; 
  unsigned int v443; 
  unsigned int v444; 
  VariableValue *v445; 
  VariableValue *v446; 
  VariableType v447; 
  int v448; 
  int v449; 
  VariableValue *v450; 
  VariableType v451; 
  int v452; 
  const char *v453; 
  int v454; 
  const char *v455; 
  BOOL v456; 
  VariableType v458; 
  BOOL v459; 
  const char *v460; 
  const char *v461; 
  __int64 v462; 
  VariableType type; 
  BOOL v465; 
  const char *NameForType; 
  const char *v467; 
  __int64 v468; 
  VariableValue *v469; 
  int v470; 
  __int64 v471; 
  VariableValue *v472; 
  int v473; 
  __int64 v474; 
  int v475; 
  scrVmGlob_t *v476; 
  unsigned int v477; 
  int jumpbackHistoryIndex; 
  const char *v479; 
  ScriptCodePos v480; 
  ScriptCodePos v481; 
  unsigned int StartLocalId; 
  unsigned int v483; 
  VariableValue *v484; 
  VariableType v485; 
  int v486; 
  unsigned int unsignedInt; 
  int v488; 
  ScriptCodePos v489; 
  __int64 v490; 
  const char *v491; 
  const char *v492; 
  VariableValue *v493; 
  VariableType v494; 
  const char *v495; 
  const char *v496; 
  VariableValue *v497; 
  VariableValue *v498; 
  signed int v499; 
  ScriptCodePos v500; 
  unsigned int ObjectVariable; 
  unsigned int v502; 
  unsigned int v503; 
  unsigned int v504; 
  unsigned int NewObjectVariable; 
  unsigned int v506; 
  unsigned int v507; 
  unsigned int v508; 
  unsigned int v509; 
  unsigned int v510; 
  VariableValue *v511; 
  VariableValue *v512; 
  scr_string_t intValue; 
  VariableValue *v514; 
  __int64 v515; 
  unsigned int v516; 
  VariableValue *v517; 
  VariableValue *v518; 
  VariableValue *v519; 
  VariableValue *v520; 
  unsigned int *v521; 
  unsigned __int64 v522; 
  unsigned __int64 v523; 
  __int64 v524; 
  unsigned int v525; 
  VariableValue *v526; 
  VariableType v527; 
  const char *v528; 
  const char *v529; 
  unsigned int InternalVariableIndex; 
  unsigned int *v531; 
  const char *v532; 
  unsigned int v533; 
  char *v534; 
  int v535; 
  int v536; 
  char *v537; 
  int v538; 
  unsigned int v539; 
  unsigned int v540; 
  unsigned int v541; 
  VariableValue *v542; 
  int v543; 
  VariableValue *v544; 
  unsigned int v545; 
  unsigned int v546; 
  unsigned int v547; 
  char v548; 
  char *v549; 
  scrVmPub_t *v550; 
  char v551; 
  bitarray<128> *v552; 
  scrContext_t *v553; 
  const char *v554; 
  __int16 v555; 
  __int16 v556; 
  int v557; 
  const char *ProfileString; 
  unsigned __int8 v559; 
  bool v560; 
  scrVmPub_t *v561; 
  const char *v562; 
  char v563; 
  bitarray<128> *v564; 
  scrContext_t *v565; 
  const char *v566; 
  __int64 v567; 
  int v568; 
  scrContext_t *v569; 
  __int64 v570; 
  __int64 v571; 
  bitarray<128> *v572; 
  __int64 v573; 
  int v574; 
  unsigned int SourceBuffer_Fast; 
  __int64 v576; 
  SourceBufferInfo *currentSrcFile; 
  unsigned int functionLookupLen; 
  int v579; 
  int v580; 
  int v581; 
  unsigned int v582; 
  SourceFunctionInfoStatic *functionLookupStatic; 
  __int64 v584; 
  unsigned __int64 codePosEnd; 
  bool v586; 
  unsigned __int64 v587; 
  __int64 v588; 
  __int64 v589; 
  unsigned __int64 v590; 
  const char *v591; 
  const char *v592; 
  const char *v593; 
  const char *v594; 
  int error_index; 
  int v596; 
  int v597; 
  unsigned int tempVariable; 
  unsigned int v599; 
  int v600; 
  __int64 v601; 
  VariableValue *v602; 
  VariableValue *j; 
  VariableValue *v604; 
  VariableValue *v605; 
  int v606; 
  VariableValue *v607; 
  unsigned int m_caseCount; 
  int v609; 
  char *v610; 
  unsigned int v611; 
  int v612; 
  int m_errorLevel; 
  int v614; 
  __int64 v615; 
  unsigned __int64 v616; 
  __int64 v617; 
  __int64 v618; 
  unsigned __int64 v619; 
  __int64 result; 
  __int64 builtinIndex; 
  __int64 outparamcount; 
  __int64 v628; 
  __int64 v629; 
  char *pos; 
  unsigned __int64 v631; 
  unsigned __int8 depth; 
  char v633; 
  unsigned int parentId; 
  unsigned int Array; 
  unsigned int id; 
  char v637; 
  scrContext_t *v638; 
  unsigned int builtInIndex; 
  unsigned __int64 v640; 
  scrVmDebugPub_t *v641; 
  unsigned int v642; 
  ProfileScript *v643; 
  scrVarPub_t *v644; 
  scrVmPub_t *p_m_vmPub; 
  unsigned __int64 builtInTime; 
  __int64 v647; 
  int v648; 
  unsigned int v649; 
  char *codePos; 
  VariableValue v651; 
  int v652; 
  unsigned __int64 v653; 
  scr_string_t v654; 
  VariableValue value; 
  scrVmGlob_t *p_m_vmGlob; 
  scrContext_t *scrContexta; 
  ScriptCodePos *p_pos; 
  char msg[4096]; 
  char v664; 

  v9 = alloca(v3);
  __asm
  {
    vmovaps [rsp+15D8h+var_38], xmm6
    vmovaps [rsp+15D8h+var_48], xmm7
    vmovaps [rsp+15D8h+var_58], xmm8
    vmovaps [rsp+15D8h+var_68], xmm9
  }
  ++scrContext->m_errorLevel;
  p_m_fs = &scrContext->m_fs;
  p_m_vmGlob = &scrContext->m_vmGlob;
  scrContexta = scrContext;
  _RDI = &scrContext->m_varPub;
  p_m_vmPub = &scrContext->m_vmPub;
  p_m_vmDebugPub = &scrContext->m_vmDebugPub;
  v649 = 190;
  v13 = scrContext;
  depth = 0;
  m_scriptPos = scrContext->m_fs.pos.m_scriptPos;
  _R15 = NULL;
  v637 = -1;
  v644 = _RDI;
  v641 = p_m_vmDebugPub;
  p_pos = &p_m_fs->pos;
  pos = NULL;
  if ( ScriptCodePos::IsScriptPos_Generic((const unsigned __int64)m_scriptPos) )
  {
    _R15 = (char *)ScriptCodePos::GetScriptPos(&p_m_fs->pos, v13);
    pos = _R15;
  }
  __asm
  {
    vmovsd  xmm8, cs:__real@43f0000000000000
    vmovsd  xmm6, cs:__real@43e0000000000000
    vmovss  xmm9, cs:__real@3f000000
    vxorps  xmm7, xmm7, xmm7
  }
$restart_2:
  Profile = ScriptContext_GetProfile(v13);
  v418 = !_RDI->bScriptUsageProfile;
  v21 = Profile;
  v643 = Profile;
  if ( !v418 )
  {
    v653 = 0i64;
    v22 = __rdtsc();
    v640 = v22;
    codePos = _R15;
    p_m_vmDebugPub->embeddedTime = 0i64;
    v642 = 0;
    v631 = __rdtsc();
    v21->scrProfileCalcTimeTotal += v631 - v22;
  }
  if ( v13->m_errorLevel >= 0x41u )
  {
    LODWORD(outparamcount) = 65;
    LODWORD(builtinIndex) = v13->m_errorLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2362, ASSERT_TYPE_ASSERT, "(unsigned)( scrContext.m_errorLevel ) < (unsigned)( ( sizeof( *array_counter( scrContext.m_error ) ) + 0 ) )", "scrContext.m_errorLevel doesn't index ARRAY_COUNT( scrContext.m_error )\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
      __debugbreak();
  }
  v13->m_largeLocalMark[v13->m_errorLevel] = Mem_LargeLocal_GetMark();
  v23 = setjmp(v13->m_error[(__int64)v13->m_errorLevel]);
  v13 = scrContexta;
  if ( v23 )
  {
    LODWORD(v25) = opcode;
    _R14 = &scrContexta->m_fs;
    v594 = scrContexta->m_fs.pos.m_scriptPos;
    p_pos = &scrContexta->m_fs.pos;
    v649 = opcode;
    if ( !ScriptCodePos::IsScriptPos_Generic((const unsigned __int64)v594) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2393, ASSERT_TYPE_ASSERT, "(ScriptCodePos::IsScriptPos_Generic( pFs->pos.m_genericPos ))", "%s\n\tNative script errors should not longjmp", "ScriptCodePos::IsScriptPos_Generic( pFs->pos.m_genericPos )") )
      __debugbreak();
    _R15 = (char *)ScriptCodePos::GetScriptPos(&v13->m_fs.pos, v13);
    pos = _R15;
    Mem_LargeLocal_ResetToMark(v13->m_largeLocalMark[v13->m_errorLevel]);
    p_localVars = &p_m_vmPub->localVars;
    _RDI = v644;
    goto $error_2;
  }
  _R14 = (function_stack_t *)p_pos;
  LODWORD(v25) = v649;
  _R15 = pos;
  builtInTime = v653;
  builtInIndex = v642;
  parentId = Array;
  v638 = scrContexta;
  v652 = v648;
LABEL_12:
  p_localVars = &p_m_vmPub->localVars;
  while ( 2 )
  {
    v27 = v631;
$loop_0:
    v28 = (__int64)v644;
    if ( v644->error_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2404, ASSERT_TYPE_ASSERT, "( ( !pScrVarPub->error_message ) )", "%s\n\t( pScrVarPub->error_message ) = %s", "( !pScrVarPub->error_message )", v644->error_message) )
      __debugbreak();
    if ( *(_DWORD *)(v28 + 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2405, ASSERT_TYPE_ASSERT, "( !pScrVarPub->error_index )", (const char *)&queryFormat, "!pScrVarPub->error_index") )
      __debugbreak();
    if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2407, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
      __debugbreak();
    if ( *((_DWORD *)p_localVars + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2408, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
      __debugbreak();
    if ( ++v13->m_dumpStack.m_scriptThreadThreshLoopsPerCheck > 100 )
    {
      v13->m_dumpStack.m_scriptThreadThreshLoopsPerCheck = 0;
      if ( scriptThreadThresholdTime->current.integer > 0 )
      {
        m_scriptThreadThreshDumps = v13->m_dumpStack.m_scriptThreadThreshDumps;
        v30 = __rdtsc();
        if ( m_scriptThreadThreshDumps >= scriptThreadThresholdTimeMaxDumps->current.integer )
        {
          if ( v30 - v13->m_dumpStack.m_scriptThreadThreshStopDumpingTime > v13->m_dumpStack.m_threshRawMaxResetTime )
            v13->m_dumpStack.m_scriptThreadThreshDumps = 0;
        }
        else
        {
          m_runThreadsTimeStart = v13->m_runThreadsTimeStart;
          if ( v13->m_dumpStack.m_prevStartTime != m_runThreadsTimeStart )
          {
            v32 = v30 - m_runThreadsTimeStart;
            if ( v30 - m_runThreadsTimeStart > v13->m_dumpStack.m_threshRawTimerCount )
            {
              v13->m_dumpStack.m_scriptThreadThreshDumps = m_scriptThreadThreshDumps + 1;
              v13->m_dumpStack.m_scriptThreadThreshStopDumpingTime = v30;
              v13->m_dumpStack.m_prevStartTime = v13->m_runThreadsTimeStart;
              v33.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
              Scr_DoScriptTrace(v13, 0, v33, msg, 4096);
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2sd xmm0, xmm0, rbx
              }
              if ( v32 < 0 )
                __asm { vaddsd  xmm0, xmm0, xmm8 }
              __asm
              {
                vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
                vcomisd xmm0, xmm6
                vsubsd  xmm0, xmm0, xmm6
                vcomisd xmm0, xmm6
                vcvttsd2si r8, xmm0
              }
              Com_PrintError(23, "ScriptThreadThreshold time %zums Exceeded %dms\n%s\n", _R8, scriptThreadThresholdTime->current.unsignedInt, msg);
            }
          }
        }
      }
    }
    __asm { prefetcht0 byte ptr [r15+80h] }
    v38 = v641;
    v39 = v25;
    v25 = (unsigned __int8)*_R15;
    v647 = v25;
    v649 = v25;
    opcode = v25;
    ++v641->opcodePairs[v25 | (unsigned int)(v39 << 8)];
    if ( v644->bScriptUsageProfile )
    {
      v40 = (__int64)v643;
      v41 = __rdtsc();
      v640 = v41;
      ++v643->scrProfileScriptUsageOpCount;
      ++v38->currentSrcFile->totalOps;
      currentSrcFuncDynamic = v38->currentSrcFuncDynamic;
      if ( currentSrcFuncDynamic )
        ++currentSrcFuncDynamic->opCount;
      v43 = __rdtsc();
      v44 = (unsigned __int64)HIDWORD(v43) << 32;
      if ( *(_DWORD *)(v40 + 623512) >= 0xC350u )
      {
        v38->embeddedTime = 0i64;
        *(_QWORD *)(v40 + 623536) += (v44 | (unsigned int)v43) - v41;
      }
      else
      {
        embeddedTime = v13->m_vmDebugPub.embeddedTime;
        v46 = builtInTime;
        v13->m_vmDebugPub.embeddedTime = 0i64;
        v47 = v46 - embeddedTime;
        v48 = ((unsigned int)v43 | v44) - embeddedTime - v27;
        v13->m_vmDebugPub.currentSrcFile->allOpTotal += v48;
        v13->m_vmDebugPub.currentSrcFile->allOpTotalBuiltIn += v47;
        if ( v13->m_vmDebugPub.currentSrcFile->functionLookupLen )
        {
          v49 = builtInIndex;
          v13->m_vmDebugPub.currentSrcFuncDynamic->allOpTotal += v48;
          v13->m_vmDebugPub.currentSrcFuncDynamic->allOpTotalBuiltIn += v47;
          if ( v49 )
          {
            Scr_UpdateScriptUsageTimeBuiltIn(v13, v49, v13->m_vmDebugPub.currentSrcFile, v13->m_vmDebugPub.currentSrcFuncStatic, v13->m_vmDebugPub.currentSrcFuncDynamic);
            v41 = v640;
          }
        }
        codePos = _R15;
        builtInTime = 0i64;
        v653 = 0i64;
        builtInIndex = 0;
        v642 = 0;
        v631 = __rdtsc();
        *(_QWORD *)(v40 + 623536) += v631 - v41;
      }
    }
    pos = ++_R15;
    ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
    _RDI = v644;
    ScriptCodePos::SetVarUsagePos(&v644->varUsagePos, _R15);
$interrupt_return:
    switch ( (int)v25 )
    {
      case 0:
        v444 = Scr_EvalFieldObject(v13, _RDI->tempVariable, _R14->top);
        --_R14->top;
        parentId = v444;
        Array = v444;
        continue;
      case 1:
        top = _R14->top;
        goto LABEL_680;
      case 2:
        Scr_EvalPlus(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 3:
        v222 = (unsigned __int8)*_R15++;
        v27 = v631;
        *p_localVars -= v222;
        _R14->localVarCount -= v222;
        if ( !(_BYTE)v222 )
          goto $loop_0;
        do
        {
          RemoveNextVariable(v13, _R14->localId);
          LOBYTE(v222) = v222 - 1;
        }
        while ( (_BYTE)v222 );
        continue;
      case 4:
        Self = Scr_GetSelf(v13, _R14->localId);
        parentId = Self;
        Array = Self;
        goto $EvalFieldVariableRef;
      case 5:
      case 110:
        v370 = _R14->top;
        if ( v370->type != VAR_POINTER )
          goto $not_an_object2;
        if ( *((int *)p_localVars + 4) >= 63 )
          goto $ScriptMethodThreadCall_error;
        if ( _RDI->bScriptUsageProfile )
        {
          v371 = __rdtsc();
          v640 = v371;
        }
        else
        {
          v371 = v640;
        }
        _R14->localId = AllocChildThread(v13, v370->u.intValue, _R14->localId);
        if ( _RDI->bScriptUsageProfile )
        {
          v372 = __rdtsc();
          v373 = (__int64)v643;
          v643->scrProfileScriptThreadCreateTime += (((unsigned __int64)HIDWORD(v372) << 32) | (unsigned int)v372) - v371;
          ++*(_DWORD *)(v373 + 623528);
        }
        goto $ScriptMethodThreadCall;
      case 6:
        id = _RDI->gameId;
        v633 = 0;
        continue;
      case 7:
        animId = _RDI->animId;
        goto LABEL_638;
      case 8:
        Self = _RDI->levelId;
        parentId = Self;
        Array = Self;
        goto $EvalFieldVariableRef;
      case 9:
        v205 = (unsigned __int64)_R14->top;
        if ( v205 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2787, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v205 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v206 = ++_R14->top;
        if ( v206 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2789, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v206 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_POINTER;
        localId = _R14->localId;
        goto LABEL_508;
      case 10:
        Scr_EvalGreater(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 11:
        _R15 += 2;
        pos = _R15;
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        goto $LL422;
      case 12:
        Scr_EvalShiftRight(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 13:
        v483 = id;
        goto LABEL_1148;
      case 14:
        _RDI = _R14->top;
        if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1598, ASSERT_TYPE_ASSERT, "( value != nullptr )", (const char *)&queryFormat, "value != nullptr") )
          __debugbreak();
        type = _RDI->type;
        if ( type == VAR_INTEGER )
        {
          v465 = _RDI->u.intValue != 0;
        }
        else
        {
          if ( type == VAR_FLOAT )
          {
            __asm { vucomiss xmm7, dword ptr [rdi] }
          }
          else
          {
            RemoveRefToValue(v13, (unsigned __int8)type, _RDI->u);
            _RDI->type = VAR_UNDEFINED;
            NameForType = Scr_GetNameForType(type);
            v467 = j_va("cannot cast %s to bool", NameForType);
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v467);
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
          }
          v465 = 0;
        }
        if ( _R14->top->type == VAR_UNDEFINED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4524, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_UNDEFINED )", (const char *)&queryFormat, "pFs->top->type != VAR_UNDEFINED") )
          __debugbreak();
        v468 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        if ( !v465 )
          goto $loop_dec_top;
        _R15 += v468;
        --_R14->top;
        continue;
      case 15:
        goto $LN1284;
      case 16:
        Scr_EvalEquality(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 17:
        id = **p_localVars;
        ClearVariableValue(v13, id);
        continue;
      case 18:
        v511 = _R14->top;
        if ( v511->type != VAR_POINTER )
          goto $not_an_object2;
        parentId = v511->u.intValue;
        Array = parentId;
        if ( !IsFieldObject(v13, parentId) )
          goto $not_an_object2a;
        v512 = --_R14->top;
        if ( v512->type != VAR_STRING )
        {
          _R14->top = v512 + 1;
          _RDI->error_index = 1;
          if ( v13->m_varPub.error_message )
            goto LABEL_1419;
          v593 = "first parameter of notify must evaluate to a string";
          goto LABEL_1418;
        }
        intValue = v512->u.intValue;
        v514 = v512 - 1;
        v515 = (__int64)v641;
        v516 = parentId;
        _R14->top = v514;
        if ( *(_DWORD *)(v515 + 12) )
          Scr_CheckBreakonNotify(v13, v516, intValue, v514, _R15, _R14->localId);
        Scr_DumpNotify(v13, v516, intValue, "script");
        ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
        VM_Notify(v13, v516, intValue, _R14->top);
        _R15 = (char *)ScriptCodePos::GetScriptPos((ScriptCodePos *)p_localVars[3], v13);
        RemoveRefToObject(v13, v516);
        SL_RemoveRefToString(intValue);
        v517 = _R14->top;
        if ( v517->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4881, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v517 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v518 = _R14->top;
        if ( v518->type != VAR_PRECODEPOS )
        {
          do
          {
            RemoveRefToValue(v13, (unsigned __int8)v518->type, v518->u);
            v519 = --_R14->top;
            if ( v519->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4886, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v519 - (char *)p_localVars - 2616) >> 4) )
              __debugbreak();
            v518 = _R14->top;
          }
          while ( v518->type != VAR_PRECODEPOS );
          --_R14->top;
          continue;
        }
        goto $loop_dec_top;
      case 19:
        v199 = (unsigned __int64)_R14->top;
        if ( v199 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2762, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v199 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v200 = ++_R14->top;
        if ( v200 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2764, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v200 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v201 = _R15;
        _R15 += 12;
        _R14->top->type = VAR_VECTOR;
        _R14->top->u = (VariableUnion)v201;
        continue;
      case 20:
        goto $LN1220;
      case 21:
        if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3750, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++_R14->top <= (VariableValue *)p_localVars[1] || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3752, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          goto LABEL_1234;
        __debugbreak();
        _R14->top->type = VAR_PRECODEPOS;
        continue;
      case 22:
      case 98:
        v169 = (unsigned __int64)_R14->top;
        if ( v169 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2678, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v169 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v170 = ++_R14->top;
        if ( v170 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2680, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v170 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v171 = _R14->top;
        v172 = (unsigned __int8)*_R15;
        if ( !v171 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 11, ASSERT_TYPE_ASSERT, "( out )", (const char *)&queryFormat, "out") )
          __debugbreak();
        ++_R15;
        v171->u.intValue = v172;
        v171->type = VAR_INTEGER;
        continue;
      case 23:
      case 72:
        goto $LN1167;
      case 24:
        v298 = *(_DWORD *)_R15;
        _R15 += 4;
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        parentId = Scr_GetSelf(v13, _R14->localId);
        Array = parentId;
        v299 = parentId;
        VariableFieldIndex = Scr_GetVariableFieldIndex(v13, parentId, v298);
        id = VariableFieldIndex;
        v301 = 1;
        v633 = 1;
        goto LABEL_737;
      case 25:
        v469 = _R14->top;
        if ( v469->type == VAR_INTEGER )
        {
          v470 = v469->u.intValue != 0;
          v469->u.intValue = v470;
        }
        else
        {
          v470 = Scr_CastBool_NonInteger(v13, v469);
        }
        if ( _R14->top->type != VAR_INTEGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4536, ASSERT_TYPE_ASSERT, "( pFs->top->type == VAR_INTEGER )", (const char *)&queryFormat, "pFs->top->type == VAR_INTEGER") )
          __debugbreak();
        v471 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        if ( v470 )
          goto $loop_dec_top;
        _R15 += v471;
        continue;
      case 26:
        v164 = (unsigned __int64)_R14->top;
        if ( v164 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2663, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v164 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v165 = ++_R14->top;
        if ( v165 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2665, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v165 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_UNDEFINED;
        continue;
      case 27:
        if ( Scr_CheckIfObjectsOrVariablesExceededDeveloperLimits(v13) )
          Scr_ErrorOnObjectsOrVariablesExceededDeveloperLimits(v13);
        v475 = Sys_Milliseconds();
        v476 = p_m_vmGlob;
        if ( v475 - p_m_vmGlob->starttime < scriptInfiniteLoopTime->current.integer || scriptIgnoreInfiniteLoops->current.enabled )
        {
          v490 = (__int64)v641;
          v641->jumpbackHistory[v641->jumpbackHistoryIndex] = _R15;
          *(_DWORD *)(v490 + 196408) = ((unsigned __int8)*(_DWORD *)(v490 + 196408) + 1) & 0x7F;
          _R15 += 2i64 - *(unsigned __int16 *)_R15;
          continue;
        }
        if ( !logScriptTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4589, ASSERT_TYPE_ASSERT, "( logScriptTimes )", (const char *)&queryFormat, "logScriptTimes") )
          __debugbreak();
        if ( logScriptTimes->current.enabled )
        {
          v477 = Sys_Milliseconds();
          Com_Printf(23, "EXCEED TIME: %d\n", v477);
        }
        if ( v476->loading || IsDebuggerConnected() )
        {
          if ( *((_BYTE *)p_localVars + 35386) && !IsDebuggerConnected() )
            *((_BYTE *)p_localVars + 35388) = 1;
          unsignedInt = scriptInfiniteLoopTime->current.unsignedInt;
          v488 = Sys_Milliseconds();
          Com_PrintWarning(23, "script runtime warning: potential infinite loop in script %d > %d.\n", (unsigned int)(v488 - v476->starttime), unsignedInt);
          v489.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
          Scr_PrintPrevCodePos(v13, 23, v489, 0, 1);
          _R15 += 2i64 - *(unsigned __int16 *)_R15;
          Scr_ResetTimeout(v13);
        }
        else
        {
          ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
          Com_Printf(23, "********************************\n");
          Com_Printf(23, "Recent loop history (from most recent) :\n");
          jumpbackHistoryIndex = v13->m_vmDebugPub.jumpbackHistoryIndex;
          do
          {
            if ( !jumpbackHistoryIndex )
              jumpbackHistoryIndex = 128;
            v479 = *(const char **)&v13->m_vmDebugPub.opcodePairs[2 * jumpbackHistoryIndex-- + 48828];
            if ( !v479 )
              break;
            v480.m_scriptPos = ScriptCodePos::CreateScriptPos(v479).m_scriptPos;
            Scr_PrintPrevCodePos(v13, 23, v480, 0, 1);
          }
          while ( jumpbackHistoryIndex != v13->m_vmDebugPub.jumpbackHistoryIndex );
          Com_Printf(23, "********************************\n");
          p_localVars = &p_m_vmPub->localVars;
          if ( p_m_vmPub->showError )
          {
            if ( p_m_vmPub->debugCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4650, ASSERT_TYPE_ASSERT, "( !pScrVmPub->debugCode )", (const char *)&queryFormat, "!pScrVmPub->debugCode") )
              __debugbreak();
            Scr_DumpScriptThreads(v13, 1);
            Scr_DumpScriptVariablesDefault(v13);
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, "potential infinite loop in script");
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
          }
          if ( *((_BYTE *)p_localVars + 35386) )
          {
            Scr_DumpScriptMemoryUsage(v13);
            Scr_DumpScriptThreads(v13, 1);
            v13->m_vmPub.terminal_error = 1;
            v13->m_varPub.abort = 1;
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, "potential infinite loop in script");
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
$LL404:
            if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4686, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
              __debugbreak();
            if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4688, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
              __debugbreak();
            v483 = id;
            Scr_EvalVariableField_Out(v13, id, _R14->top);
            v484 = _R14->top;
            v485 = v484->type;
            if ( v485 == VAR_INTEGER )
            {
              ++v484->u.intValue;
              if ( *_R15 != -121 )
              {
                v486 = 4693;
LABEL_1136:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", v486, ASSERT_TYPE_ASSERT, "( *((unsigned char*) local_pos) == OP_SetVariableField )", (const char *)&queryFormat, "*((unsigned char*) local_pos) == OP_SetVariableField") )
                  __debugbreak();
              }
              goto LABEL_1138;
            }
            v491 = Scr_GetNameForType(v485);
            v492 = j_va("++ must be applied to an int (applied to %s)", v491);
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v492);
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
LABEL_1148:
            if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4701, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
              __debugbreak();
            if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4703, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
              __debugbreak();
            Scr_EvalVariableField_Out(v13, v483, _R14->top);
            v493 = _R14->top;
            v494 = v493->type;
            if ( v494 == VAR_INTEGER )
            {
              --v493->u.intValue;
              if ( *_R15 != -121 )
              {
                v486 = 4708;
                goto LABEL_1136;
              }
LABEL_1138:
              ++_R15;
              SetVariableFieldValue(v13, v483, _R14->top);
              --_R14->top;
              continue;
            }
            v495 = Scr_GetNameForType(v494);
            v496 = j_va("-- must be applied to an int (applied to %s)", v495);
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v496);
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
$LN1284:
            Scr_EvalOr(v13, _R14->top - 1, _R14->top);
            --_R14->top;
          }
          else
          {
            Com_PrintError(23, "script runtime error: potential infinite loop in script - killing thread.\n");
            v481.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
            Scr_PrintPrevCodePos(v13, 23, v481, 0, 1);
            Scr_ResetTimeout(v13);
            StartLocalId = GetStartLocalId(v13, _R14->localId);
            if ( GetObjectType(v13, StartLocalId) != VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5419, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, startLocalId ) == VAR_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, startLocalId ) == VAR_THREAD") )
              __debugbreak();
            ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
            Scr_TerminateRunningThread(v13, StartLocalId);
            _R15 = (char *)ScriptCodePos::GetScriptPos((ScriptCodePos *)p_localVars[3], v13);
          }
        }
        continue;
      case 28:
        v472 = _R14->top;
        if ( v472->type == VAR_INTEGER )
        {
          v473 = v472->u.intValue != 0;
          v472->u.intValue = v473;
        }
        else
        {
          v473 = Scr_CastBool_NonInteger(v13, v472);
        }
        if ( _R14->top->type != VAR_INTEGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4548, ASSERT_TYPE_ASSERT, "( pFs->top->type == VAR_INTEGER )", (const char *)&queryFormat, "pFs->top->type == VAR_INTEGER") )
          __debugbreak();
        v474 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        if ( !v473 )
          goto $loop_dec_top;
        _R15 += v474;
        continue;
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
        v306 = _R15;
        if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3364, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
          __debugbreak();
        v307 = v25 - 29;
        goto LABEL_759;
      case 35:
        v306 = _R15;
        if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3373, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
          __debugbreak();
        v307 = (unsigned __int8)*_R15++;
LABEL_759:
        *((_DWORD *)p_localVars + 11) = v307;
        v308 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        m_funcCount = v13->m_funcCount;
        v310 = v308 - v13->m_funcBegin;
        builtInIndex = v308;
        v642 = v308;
        if ( v310 >= m_funcCount )
        {
          LODWORD(outparamcount) = m_funcCount;
          LODWORD(builtinIndex) = v310;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3382, ASSERT_TYPE_ASSERT, "(unsigned)( builtinIndex - scrContext.m_funcBegin ) < (unsigned)( scrContext.m_funcCount )", "builtinIndex - scrContext.m_funcBegin doesn't index scrContext.m_funcCount\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
            __debugbreak();
        }
        goto $CallBuiltin2;
      case 36:
        goto $SetLocalVariableFieldCached;
      case 37:
        v262 = *(_DWORD *)_R15;
        _R15 += 4;
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        ClearVariableField(v13, parentId, v262, _R14->top);
        continue;
      case 38:
        v207 = (unsigned __int64)_R14->top;
        if ( v207 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2796, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v207 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v208 = ++_R14->top;
        if ( v208 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2798, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v208 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_POINTER;
        _R14->top->u.intValue = _RDI->levelId;
        AddRefToObject(v13, _RDI->levelId);
        continue;
      case 39:
        Scr_EvalSizeValue(v13, _R14->top);
        continue;
      case 40:
        v268 = _R14->top;
        if ( v268->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3153, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v268 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v269 = _R14->top;
        v270 = v13->m_vmPub.localVars[-(unsigned __int8)*_R15];
        if ( v269->type == VAR_CODEPOS )
        {
          ClearVariableValue(v13, v270);
          ++_R15;
        }
        else
        {
          SetVariableValue(v13, v270, v269);
          ++_R15;
          --_R14->top;
        }
        continue;
      case 41:
      case 101:
        v365 = _R14->top;
        if ( v365->type != VAR_POINTER )
          goto $not_an_object2;
        if ( *((int *)p_localVars + 4) >= 63 )
          goto $ScriptMethodThreadCall_error;
        if ( _RDI->bScriptUsageProfile )
        {
          v366 = __rdtsc();
          v640 = v366;
        }
        else
        {
          v366 = v640;
        }
        _R14->localId = AllocThread(v13, v365->u.intValue);
        if ( _RDI->bScriptUsageProfile )
        {
          v367 = __rdtsc();
          v368 = (((unsigned __int64)HIDWORD(v367) << 32) | (unsigned int)v367) - v366;
          v369 = (__int64)v643;
          v643->scrProfileScriptThreadCreateTime += v368;
          ++*(_DWORD *)(v369 + 623528);
          --_R14->top;
        }
        else
        {
$ScriptMethodThreadCall:
          --_R14->top;
        }
        goto LABEL_833;
      case 42:
        if ( _R14->top[-1].type != VAR_POINTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3027, ASSERT_TYPE_ASSERT, "( (pFs->top - 1)->type == VAR_POINTER )", (const char *)&queryFormat, "(pFs->top - 1)->type == VAR_POINTER") )
          __debugbreak();
        parentId = _R14->top[-1].u.uintValue;
        v251 = parentId;
        Array = parentId;
        ArraySize = GetArraySize(v13, parentId);
        NewArrayVariable = GetNewArrayVariable(v13, v251, ArraySize);
        SetNewVariableValue(v13, NewArrayVariable, _R14->top);
        --_R14->top;
        continue;
      case 43:
        v520 = _R14->top;
        if ( v520->type != VAR_POINTER )
          goto $not_an_object1;
        if ( !IsFieldObject(v13, v520->u.intValue) )
          goto $not_an_object1a;
        v521 = (unsigned int *)_R14->top;
        if ( *((_BYTE *)v521 - 8) == 2 )
        {
          if ( _RDI->bScriptUsageProfile )
          {
            v522 = __rdtsc();
            v640 = v522;
          }
          else
          {
            v522 = v640;
          }
          VM_Endon(v13, *v521, _R14->localId, (scr_string_t)*(v521 - 4));
          if ( _RDI->bScriptUsageProfile )
          {
            v523 = __rdtsc();
            v524 = (__int64)v643;
            v643->scrProfileScriptThreadCreateTime += (((unsigned __int64)HIDWORD(v523) << 32) | (unsigned int)v523) - v522;
            ++*(_DWORD *)(v524 + 623528);
          }
          _R14->top -= 2;
          continue;
        }
        if ( !v13->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "first parameter of endon must evaluate to a string");
          v13->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v13);
$not_an_object1a:
        ObjectType = GetObjectType(v13, _R14->top->u.uintValue);
        goto $not_an_object_error1;
      case 44:
        v254 = parentId;
        goto LABEL_655;
      case 45:
        Scr_EvalShiftLeft(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 46:
        goto $EvalLocalArrayRefCached;
      case 47:
        v651 = *_R14->top;
$skip_return:
        SafeParentLocalId = GetSafeParentLocalId(v13, _R14->localId);
        Scr_KillThread(v13, _R14->localId);
        *p_localVars -= _R14->localVarCount;
        v159 = --_R14->top;
        if ( v159->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2641, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v159 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v160 = _R14->top;
        if ( v160->type != VAR_CODEPOS )
        {
          do
          {
            RemoveRefToValue(v13, (unsigned __int8)v160->type, v160->u);
            v161 = --_R14->top;
            if ( v161->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2646, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v161 - (char *)p_localVars - 2616) >> 4) )
              __debugbreak();
            v160 = _R14->top;
          }
          while ( v160->type != VAR_CODEPOS );
          _RDI = v644;
        }
        --*((_DWORD *)p_localVars + 4);
        p_localVars[3] -= 10;
        v162 = _R14->top;
        if ( SafeParentLocalId )
        {
          if ( v162->type != VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2658, ASSERT_TYPE_ASSERT, "( ( pFs->top->type == VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type == VAR_CODEPOS )", ((char *)v162 - (char *)p_localVars - 2616) >> 4) )
            __debugbreak();
          *_R14->top = v651;
$end:
          if ( _R14->top == _R14->startTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2533, ASSERT_TYPE_ASSERT, "( pFs->top != pFs->startTop )", (const char *)&queryFormat, "pFs->top != pFs->startTop") )
            __debugbreak();
          RemoveRefToObject(v13, _R14->localId);
          _R14->localVarCount = p_localVars[3][3];
          _R14->localId = SafeParentLocalId;
          _R15 = (char *)ScriptCodePos::GetScriptPos((ScriptCodePos *)p_localVars[3], v13);
          if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2575, ASSERT_TYPE_ASSERT, "( local_pos )", (const char *)&queryFormat, "local_pos") )
            __debugbreak();
          v418 = !_RDI->bScriptUsageProfile;
          v27 = v631;
          if ( !v418 )
          {
            v588 = (__int64)v641;
            v387 = (__int64)v643;
            v388 = __rdtsc();
            v640 = v388;
            ++v643->scrProfileScriptUsageOpCount;
            ++*(_QWORD *)(*(_QWORD *)(v588 + 24) + 88i64);
            v589 = *(_QWORD *)(v588 + 40);
            if ( v589 )
              ++*(_DWORD *)(v589 + 16);
            if ( *(_DWORD *)(v387 + 623512) >= 0xC350u )
            {
LABEL_1401:
              UpdateCurrentFuncInfo(v13, _R15, 0);
              v641->embeddedTime = 0i64;
              v590 = __rdtsc();
              *(_QWORD *)(v387 + 623536) += (((unsigned __int64)HIDWORD(v590) << 32) | (unsigned int)v590) - v388;
              continue;
            }
            Scr_UpdateScriptUsageTime(v13, codePos, __rdtsc() - v631, builtInTime, builtInIndex);
            codePos = _R15;
            builtInTime = 0i64;
            v653 = 0i64;
            builtInIndex = 0;
            v642 = 0;
            UpdateCurrentFuncInfo(v13, _R15, 0);
            v27 = __rdtsc();
            v631 = v27;
            *(_QWORD *)(v387 + 623536) += v27 - v640;
          }
          goto $loop_0;
        }
        startTop = _R14->startTop;
        if ( v162 != startTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2653, ASSERT_TYPE_ASSERT, "( ( pFs->top == pFs->startTop ) )", "%s\n\t( pFs->top - pFs->startTop ) = 0x%llx", "( pFs->top == pFs->startTop )", v162 - startTop) )
          __debugbreak();
        _R14->top[1] = v651;
$thread_return:
        m_threadCount = v13->m_threadCount;
        v637 = -1;
        if ( m_threadCount )
        {
          v13->m_threadCount = m_threadCount - 1;
          RemoveRefToObject(v13, _R14->localId);
          _RAX = p_localVars[3];
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [r14], ymm0
          }
          _R14->top->type = *((_BYTE *)p_localVars[3] + 32);
          ++_R14->top;
          ScriptPos = ScriptCodePos::GetScriptPos(&_R14->pos, v13);
          v418 = !_RDI->bScriptUsageProfile;
          _R15 = (char *)ScriptPos;
          v27 = v631;
          if ( !v418 )
          {
            v139 = (__int64)v643;
            v140 = (__int64)v641;
            v640 = __rdtsc();
            ++v643->scrProfileScriptUsageOpCount;
            ++*(_QWORD *)(*(_QWORD *)(v140 + 24) + 88i64);
            v141 = *(_QWORD *)(v140 + 40);
            if ( v141 )
              ++*(_DWORD *)(v141 + 16);
            if ( *(_DWORD *)(v139 + 623512) >= 0xC350u )
            {
              if ( _R15 )
              {
                if ( Scr_IsInOpcodeMemory(v13, _R15) )
                {
                  SourceBuffer_Fast = Scr_GetSourceBuffer_Fast(v13, _R15 - 1);
                  v576 = SourceBuffer_Fast;
                  if ( SourceBuffer_Fast >= v13->m_parserPub.sourceBufferLookupLen )
                  {
                    LODWORD(outparamcount) = v13->m_parserPub.sourceBufferLookupLen;
                    LODWORD(builtinIndex) = SourceBuffer_Fast;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2030, ASSERT_TYPE_ASSERT, "(unsigned)( bufferIndex ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "bufferIndex doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
                      __debugbreak();
                  }
                  v13->m_vmDebugPub.currentSrcFile = &v13->m_parserPub.sourceBufferLookup[v576];
                  v13->m_vmDebugPub.currentSrcFuncStatic = NULL;
                  v13->m_vmDebugPub.currentSrcFuncDynamic = NULL;
                  currentSrcFile = v13->m_vmDebugPub.currentSrcFile;
                  functionLookupLen = currentSrcFile->functionLookupLen;
                  if ( functionLookupLen )
                  {
                    v579 = functionLookupLen - 1;
                    v580 = 0;
                    v581 = 0;
                    v582 = 0;
                    if ( (int)(functionLookupLen - 1) >= 0 )
                    {
                      functionLookupStatic = currentSrcFile->functionLookupStatic;
                      do
                      {
                        v581 = (v579 + v580) / 2;
                        v584 = (unsigned int)v581;
                        v586 = 0;
                        if ( functionLookupStatic[v584].codePos <= _R15 )
                        {
                          codePosEnd = (unsigned __int64)functionLookupStatic[v584].codePosEnd;
                          if ( !codePosEnd || codePosEnd >= (unsigned __int64)_R15 )
                            v586 = 1;
                        }
                        v582 = (v579 + v580) / 2;
                        if ( v586 )
                          break;
                        if ( functionLookupStatic[v581].codePos <= _R15 )
                        {
                          if ( functionLookupStatic[v581].codePosEnd < _R15 )
                            v580 = v581 + 1;
                        }
                        else
                        {
                          v579 = v581 - 1;
                        }
                        v582 = v581;
                      }
                      while ( v580 <= v579 );
                    }
                    if ( v582 >= functionLookupLen )
                    {
                      LODWORD(outparamcount) = currentSrcFile->functionLookupLen;
                      LODWORD(builtinIndex) = v581;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2065, ASSERT_TYPE_ASSERT, "(unsigned)( funcMid ) < (unsigned)( pScrVmDebugPub->currentSrcFile->functionLookupLen )", "funcMid doesn't index pScrVmDebugPub->currentSrcFile->functionLookupLen\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
                        __debugbreak();
                    }
                    v13->m_vmDebugPub.currentSrcFuncStatic = &v13->m_vmDebugPub.currentSrcFile->functionLookupStatic[v581];
                    v13->m_vmDebugPub.currentSrcFuncDynamic = &v13->m_vmDebugPub.currentSrcFile->functionLookupDynamic[v581];
                  }
                }
                v139 = (__int64)v643;
              }
              v641->embeddedTime = 0i64;
              v587 = __rdtsc();
              *(_QWORD *)(v139 + 623536) += (((unsigned __int64)HIDWORD(v587) << 32) | (unsigned int)v587) - v640;
              continue;
            }
            v142 = v13->m_vmDebugPub.embeddedTime;
            v143 = builtInTime;
            v13->m_vmDebugPub.embeddedTime = 0i64;
            v144 = v143 - v142;
            v145 = __rdtsc() - v142 - v631;
            v13->m_vmDebugPub.currentSrcFile->allOpTotal += v145;
            v13->m_vmDebugPub.currentSrcFile->allOpTotalBuiltIn += v144;
            if ( v13->m_vmDebugPub.currentSrcFile->functionLookupLen )
            {
              v146 = builtInIndex;
              v13->m_vmDebugPub.currentSrcFuncDynamic->allOpTotal += v145;
              v13->m_vmDebugPub.currentSrcFuncDynamic->allOpTotalBuiltIn += v144;
              if ( v146 )
                Scr_UpdateScriptUsageTimeBuiltIn(v13, v146, v13->m_vmDebugPub.currentSrcFile, v13->m_vmDebugPub.currentSrcFuncStatic, v13->m_vmDebugPub.currentSrcFuncDynamic);
            }
            codePos = _R15;
            builtInTime = 0i64;
            v653 = 0i64;
            builtInIndex = 0;
            v642 = 0;
            if ( _R15 && Scr_IsInOpcodeMemory(v13, _R15) )
            {
              v147 = Scr_GetSourceBuffer_Fast(v13, _R15 - 1);
              v148 = v147;
              if ( v147 >= v13->m_parserPub.sourceBufferLookupLen )
              {
                LODWORD(outparamcount) = v13->m_parserPub.sourceBufferLookupLen;
                LODWORD(builtinIndex) = v147;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2030, ASSERT_TYPE_ASSERT, "(unsigned)( bufferIndex ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "bufferIndex doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
                  __debugbreak();
              }
              v13->m_vmDebugPub.currentSrcFile = &v13->m_parserPub.sourceBufferLookup[v148];
              v13->m_vmDebugPub.currentSrcFuncStatic = NULL;
              v13->m_vmDebugPub.currentSrcFuncDynamic = NULL;
              v149 = v13->m_vmDebugPub.currentSrcFile;
              v150 = v149->functionLookupLen;
              if ( v150 )
              {
                v151 = v150 - 1;
                v152 = 0;
                v153 = 0;
                v154 = 0;
                if ( (int)(v150 - 1) >= 0 )
                {
                  v155 = v149->functionLookupStatic;
                  do
                  {
                    v153 = (v151 + v152) / 2;
                    v156 = (unsigned int)v153;
                    v158 = 0;
                    if ( v155[v156].codePos <= codePos )
                    {
                      v157 = (unsigned __int64)v155[v156].codePosEnd;
                      if ( !v157 || v157 >= (unsigned __int64)codePos )
                        v158 = 1;
                    }
                    v154 = (v151 + v152) / 2;
                    if ( v158 )
                      break;
                    if ( v155[v153].codePos <= codePos )
                    {
                      if ( v155[v153].codePosEnd < codePos )
                        v152 = v153 + 1;
                    }
                    else
                    {
                      v151 = v153 - 1;
                    }
                    v154 = v153;
                  }
                  while ( v152 <= v151 );
                  p_localVars = &p_m_vmPub->localVars;
                }
                if ( v154 >= v150 )
                {
                  LODWORD(outparamcount) = v149->functionLookupLen;
                  LODWORD(builtinIndex) = v153;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2065, ASSERT_TYPE_ASSERT, "(unsigned)( funcMid ) < (unsigned)( pScrVmDebugPub->currentSrcFile->functionLookupLen )", "funcMid doesn't index pScrVmDebugPub->currentSrcFile->functionLookupLen\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
                    __debugbreak();
                }
                v13->m_vmDebugPub.currentSrcFuncStatic = &v13->m_vmDebugPub.currentSrcFile->functionLookupStatic[v153];
                v13->m_vmDebugPub.currentSrcFuncDynamic = &v13->m_vmDebugPub.currentSrcFile->functionLookupDynamic[v153];
              }
            }
            v27 = __rdtsc();
            v631 = v27;
            v643->scrProfileCalcTimeTotal += v27 - v640;
          }
          goto $loop_0;
        }
        if ( v13->m_errorLevel < 0 )
        {
          LODWORD(outparamcount) = v13->m_errorLevel;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5283, ASSERT_TYPE_ASSERT, "( ( scrContext.m_errorLevel >= 0 ) )", "%s\n\t( scrContext.m_errorLevel ) = %i", "( scrContext.m_errorLevel >= 0 )", outparamcount) )
            __debugbreak();
        }
        --v13->m_errorLevel;
        if ( _RDI->bScriptUsageProfile )
        {
          v615 = (__int64)v643;
          v616 = __rdtsc();
          v640 = v616;
          ++v643->scrProfileScriptUsageOpCount;
          v617 = (__int64)v641;
          ++v641->currentSrcFile->totalOps;
          v618 = *(_QWORD *)(v617 + 40);
          if ( v618 )
            ++*(_DWORD *)(v618 + 16);
          if ( *(_DWORD *)(v615 + 623512) >= 0xC350u )
            *(_QWORD *)(v617 + 56) = 0i64;
          else
            Scr_UpdateScriptUsageTime(v13, codePos, __rdtsc() - v631, builtInTime, builtInIndex);
          v619 = __rdtsc();
          *(_QWORD *)(v615 + 623536) += (((unsigned __int64)HIDWORD(v619) << 32) | (unsigned int)v619) - v616;
        }
        result = _R14->localId;
LABEL_1558:
        _R11 = &v664;
        __asm
        {
          vmovaps xmm6, xmmword ptr [r11-10h]
          vmovaps xmm7, xmmword ptr [r11-20h]
          vmovaps xmm8, xmmword ptr [r11-30h]
          vmovaps xmm9, xmmword ptr [r11-40h]
        }
        return result;
      case 48:
        ++*p_localVars;
        ++_R14->localVarCount;
        v221 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        goto LABEL_548;
      case 49:
        goto $SafeSetVariableFieldCached;
      case 50:
        v184 = (unsigned __int64)_R14->top;
        if ( v184 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2720, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v184 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v185 = ++_R14->top;
        if ( v185 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2722, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v185 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_BUILTIN_FUNCTION;
        goto $read_ushort;
      case 51:
      case 150:
        goto $LN1156;
      case 52:
        goto $LN1214;
      case 53:
      case 138:
        goto LABEL_826;
      case 54:
        parentId = Scr_GetSelf(v13, _R14->localId);
        Array = parentId;
        v254 = parentId;
        if ( IsFieldObject(v13, parentId) )
          continue;
        goto $not_an_object;
      case 55:
        v209 = (unsigned __int64)_R14->top;
        if ( v209 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2805, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v209 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v210 = ++_R14->top;
        if ( v210 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2807, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v210 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v13, _RDI->gameId, _R14->top);
        continue;
      case 56:
        v290 = *(_DWORD *)_R15;
        v291 = v638;
        _R15 += 4;
        for ( i = 0; i < 5; ++i )
        {
          if ( SL_GetCanonicalString(levelVariables[i].name) == v290 )
          {
            v293 = j_va("cannot set constant level field %s", levelVariables[i].name);
            if ( !v291->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v293);
              v291->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v291);
          }
        }
        LODWORD(v25) = v647;
        p_localVars = &p_m_vmPub->localVars;
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        v294 = v290;
        v13 = v638;
        levelId = v644->levelId;
        goto LABEL_734;
      case 57:
        goto $LN957_0;
      case 58:
        v202 = (unsigned __int64)_R14->top;
        if ( v202 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2778, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v202 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v203 = ++_R14->top;
        if ( v203 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2780, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v203 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_POINTER;
        localId = Scr_GetSelf(v13, _R14->localId);
LABEL_508:
        _R14->top->u.intValue = localId;
        AddRefToObject(v13, _R14->top->u.uintValue);
        continue;
      case 59:
$skip_end:
        SafeParentLocalId = GetSafeParentLocalId(v13, _R14->localId);
        Scr_KillThread(v13, _R14->localId);
        *p_localVars -= _R14->localVarCount;
        v130 = _R14->top;
        if ( v130->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2514, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v130 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v131 = _R14->top;
        if ( v131->type != VAR_CODEPOS )
        {
          do
          {
            RemoveRefToValue(v13, (unsigned __int8)v131->type, v131->u);
            v132 = --_R14->top;
            if ( v132->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2519, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v132 - (char *)p_localVars - 2616) >> 4) )
              __debugbreak();
            v131 = _R14->top;
          }
          while ( v131->type != VAR_CODEPOS );
          _RDI = v644;
        }
        --*((_DWORD *)p_localVars + 4);
        p_localVars[3] -= 10;
        v133 = _R14->top;
        if ( SafeParentLocalId )
        {
          if ( v133->type != VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2530, ASSERT_TYPE_ASSERT, "( ( pFs->top->type == VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type == VAR_CODEPOS )", ((char *)v133 - (char *)p_localVars - 2616) >> 4) )
            __debugbreak();
          _R14->top->type = VAR_UNDEFINED;
          goto $end;
        }
        v134 = _R14->startTop;
        if ( v133 != v134 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2526, ASSERT_TYPE_ASSERT, "( ( pFs->top == pFs->startTop ) )", "%s\n\t( pFs->top - pFs->startTop ) = 0x%llx", "( pFs->top == pFs->startTop )", v133 - v134) )
          __debugbreak();
        goto $thread_end;
      case 60:
        parentId = Scr_GetSelf(v13, _R14->localId);
        Array = parentId;
        v254 = parentId;
        if ( IsFieldObject(v13, parentId) )
        {
LABEL_655:
          if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3068, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
            __debugbreak();
          if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3070, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
            __debugbreak();
          v259 = *(_DWORD *)_R15;
          _R15 += 4;
          Scr_FindVariableField_Out(v13, v254, v259, _R14->top);
          continue;
        }
        if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3058, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3060, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        _R15 += 4;
        pos = _R15;
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
$not_an_object:
        ObjectType = GetObjectType(v13, v254);
        goto $not_an_object_error;
      case 61:
        Scr_EvalLessEqual(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 62:
        v223 = (unsigned __int64)_R14->top;
        if ( v223 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2895, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v223 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v224 = ++_R14->top;
        if ( v224 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2897, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v224 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v13, **p_localVars, _R14->top);
        continue;
      case 63:
        v225 = (unsigned __int64)_R14->top;
        if ( v225 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2902, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v225 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v226 = ++_R14->top;
        if ( v226 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2904, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v226 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v13, *(v13->m_vmPub.localVars - 1), _R14->top);
        continue;
      case 64:
        v227 = (unsigned __int64)_R14->top;
        if ( v227 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2909, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v227 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v228 = ++_R14->top;
        if ( v228 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2911, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v228 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v13, *(v13->m_vmPub.localVars - 2), _R14->top);
        continue;
      case 65:
        v229 = (unsigned __int64)_R14->top;
        if ( v229 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2916, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v229 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v230 = ++_R14->top;
        if ( v230 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2918, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v230 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v13, *(v13->m_vmPub.localVars - 3), _R14->top);
        continue;
      case 66:
        v231 = (unsigned __int64)_R14->top;
        if ( v231 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2923, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v231 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v232 = ++_R14->top;
        if ( v232 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2925, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v232 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v13, *(v13->m_vmPub.localVars - 4), _R14->top);
        continue;
      case 67:
        v233 = (unsigned __int64)_R14->top;
        if ( v233 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2930, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v233 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v234 = ++_R14->top;
        if ( v234 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2932, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v234 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v13, *(v13->m_vmPub.localVars - 5), _R14->top);
        continue;
      case 68:
        v235 = (unsigned __int64)_R14->top;
        if ( v235 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2937, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v235 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v236 = ++_R14->top;
        if ( v236 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2939, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v236 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v13, v13->m_vmPub.localVars[-(unsigned __int8)*_R15++], _R14->top);
        continue;
      case 69:
        ++*p_localVars;
        ++_R14->localVarCount;
        v239 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        goto LABEL_611;
      case 70:
        goto $LN1188;
      case 71:
        parentId = Scr_EvalVariableObject(v13, v13->m_vmPub.localVars[-(unsigned __int8)*_R15]);
        Array = parentId;
        goto LABEL_1015;
      case 73:
        v181 = (unsigned __int64)_R14->top;
        if ( v181 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2712, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v181 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v182 = ++_R14->top;
        if ( v182 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2714, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v182 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_INTEGER;
        v183 = *(_DWORD *)_R15;
        _R15 += 4;
        _R14->top->u.intValue = v183;
        continue;
      case 74:
        v329 = _R14->top;
        if ( v329->type != VAR_FUNCTION )
        {
          RemoveRefToValue(v13, (unsigned __int8)v329->type, v329->u);
          --_R14->top;
          v331 = Scr_GetNameForType(_R14->top[1].type);
          v332 = j_va("%s is not a function pointer", v331);
          if ( !v13->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, v332);
            v13->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v13);
$LN1167:
          if ( *((int *)p_localVars + 4) >= 63 )
          {
            do
            {
              _RDI->error_index = 1;
              if ( !v13->m_varPub.error_message )
              {
                Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
                v13->m_varPub.error_message = error_message;
              }
              Scr_ErrorInternal(v13);
LABEL_826:
              ;
            }
            while ( *((int *)p_localVars + 4) >= 63 );
            LODWORD(v25) = v647;
            if ( _RDI->bScriptUsageProfile )
              v640 = __rdtsc();
            v333 = Scr_GetSelf(v13, _R14->localId);
            v334 = AllocChildThread(v13, v333, _R14->localId);
          }
          else
          {
            if ( _RDI->bScriptUsageProfile )
              v640 = __rdtsc();
            v333 = Scr_GetSelf(v13, _R14->localId);
            v334 = AllocThread(v13, v333);
          }
          _R14->localId = v334;
          if ( _RDI->bScriptUsageProfile )
          {
            v335 = __rdtsc();
            v336 = (__int64)v643;
            v643->scrProfileScriptThreadCreateTime += (((unsigned __int64)HIDWORD(v335) << 32) | (unsigned int)v335) - v640;
            ++*(_DWORD *)(v336 + 623528);
          }
          AddRefToObject(v13, v333);
LABEL_833:
          v337 = _R15 + 3;
          *((_QWORD *)p_localVars[3] + 3) = _R14->startTop;
          v338 = (unsigned __int8)_R15[3];
          _R15 += (__int64)(int)(*(_DWORD *)_R15 << 8) >> 8;
          _R14->startTop = &_R14->top[-v338];
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], v337 + 1);
          goto $thread_call;
        }
        u = v329->u;
        _R14->top = v329 - 1;
        if ( v329[-1].type != VAR_POINTER )
          goto $not_an_object2;
        if ( *((int *)p_localVars + 4) < 63 )
        {
          _R14->localId = AllocFunction(v13, v329[-1].u.uintValue, _R14->localId);
          --_R14->top;
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
          _R15 = (char *)u.scriptCodePosValue;
          goto $function_call;
        }
        goto $ScriptMethodThreadCall_error;
      case 75:
        goto $CheckClearParams;
      case 76:
        v304 = *(_DWORD *)_R15;
        _R15 += 4;
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        v294 = v304;
        levelId = v644->animId;
LABEL_734:
        v296 = _R14->top;
        Variable = GetVariable(v13, levelId, v294);
        SetVariableValue(v13, Variable, v296);
        --_R14->top;
        continue;
      case 78:
        Scr_EvalMinus(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 79:
      case 117:
        if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3758, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3760, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        _R14->top->type = VAR_PRECODEPOS;
        goto $LN1149;
      case 80:
        v178 = (unsigned __int64)_R14->top;
        if ( v178 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2704, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v178 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v179 = ++_R14->top;
        if ( v179 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2706, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v179 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_INTEGER;
        v180 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        _R14->top->u.intValue = -v180;
        continue;
      case 81:
        v173 = (unsigned __int64)_R14->top;
        if ( v173 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2686, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v173 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v174 = ++_R14->top;
        if ( v174 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2688, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v174 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_INTEGER;
        v175 = -(unsigned __int8)*_R15++;
        _R14->top->u.intValue = v175;
        continue;
      case 82:
        ++*p_localVars;
        ++_R14->localVarCount;
        v263 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        goto LABEL_670;
      case 83:
        Scr_EvalGreaterEqual(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 84:
        _R14->top -= 2;
        Scr_CastVector(v13, _R14->top);
        continue;
      case 85:
        v186 = (unsigned __int64)_R14->top;
        if ( v186 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2727, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v186 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v187 = ++_R14->top;
        if ( v187 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2729, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v187 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_BUILTIN_METHOD;
        goto $read_ushort;
      case 86:
        v539 = *(unsigned __int16 *)_R15;
        v13->m_caseCount = v539;
        _R15 += 7 * v539 + 2;
        continue;
      case 87:
        ClearArray(v13, id, _R14->top);
        --_R14->top;
        continue;
      case 88:
        RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
        --_R14->top;
        continue;
      case 89:
        v445 = _R14->top;
        if ( v445->type == VAR_INTEGER )
          v445->u.intValue = v445->u.intValue != 0;
        else
          Scr_CastBool_NonInteger(v13, v445);
        continue;
      case 90:
        v240 = id;
        goto $EvalArrayRef;
      case 91:
        ++*p_localVars;
        ++_R14->localVarCount;
        v305 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        goto LABEL_748;
      case 92:
        v166 = (unsigned __int64)_R14->top;
        if ( v166 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2670, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v166 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v167 = ++_R14->top;
        if ( v167 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2672, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v167 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v168 = _R14->top;
        if ( !v168 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 11, ASSERT_TYPE_ASSERT, "( out )", (const char *)&queryFormat, "out") )
          __debugbreak();
        v168->u.intValue = 0;
        v168->type = VAR_INTEGER;
        continue;
      case 93:
        goto $LL335;
      case 94:
$LL422:
        if ( !Scr_IsInOpcodeMemory(v13, _R15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4789, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, local_pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, local_pos )") )
          __debugbreak();
        if ( depth )
        {
          if ( _R14->localId != p_localVars[3][2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4794, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
            __debugbreak();
          Scr_ValidateNotInProfileBlock(v13, "waittill");
        }
        v497 = _R14->top;
        if ( v497->type != VAR_POINTER )
          goto $not_an_object2;
        if ( !IsFieldObject(v13, v497->u.intValue) )
          goto $not_an_object2a;
        v651.u.intValue = _R14->top->u.intValue;
        v498 = --_R14->top;
        if ( v498->type != VAR_STRING )
        {
          _R14->top = v498 + 1;
          _RDI->error_index = 3;
          if ( !v13->m_varPub.error_message )
          {
            v593 = "first parameter of waittill must evaluate to a string";
LABEL_1418:
            Core_strcpy_truncate(error_message, 0x400ui64, v593);
            v13->m_varPub.error_message = error_message;
          }
LABEL_1419:
          Scr_ErrorInternal(v13);
$not_an_object2a:
          ObjectType = GetObjectType(v13, _R14->top->u.uintValue);
          _RDI->error_index = 2;
          goto $not_an_object_error;
        }
        v499 = v498->u.intValue;
        _R14->top = v498 - 1;
        if ( GetObjectType(v13, v651.u.uintValue) == VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4811, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_THREAD") )
          __debugbreak();
        if ( GetObjectType(v13, v651.u.uintValue) == VAR_NOTIFY_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4812, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_NOTIFY_THREAD") )
          __debugbreak();
        if ( GetObjectType(v13, v651.u.uintValue) == VAR_TIME_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4813, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_TIME_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_TIME_THREAD") )
          __debugbreak();
        if ( GetObjectType(v13, v651.u.uintValue) == VAR_CHILD_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4814, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_CHILD_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_CHILD_THREAD") )
          __debugbreak();
        if ( GetObjectType(v13, v651.u.uintValue) == VAR_DEAD_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4815, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_DEAD_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_DEAD_THREAD") )
          __debugbreak();
        value.type = VAR_STACK;
        v500.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
        value.u.scriptCodePosValue = (unsigned __int64)VM_ArchiveStack(v13, _R14->top, v500);
        ObjectVariable = GetObjectVariable(v13, _RDI->notifyArrayId, v651.u.uintValue);
        Array = GetArray(v13, ObjectVariable);
        v502 = GetVariable(v13, Array, v499);
        v503 = GetArray(v13, v502);
        v504 = _R14->localId;
        Array = v503;
        NewObjectVariable = GetNewObjectVariable(v13, v503, v504);
        SetNewVariableValue(v13, NewObjectVariable, &value);
        v651.type = VAR_POINTER;
        v506 = Scr_GetSelf(v13, _R14->localId);
        v507 = GetObjectVariable(v13, _RDI->pauseArrayId, v506);
        v508 = GetArray(v13, v507);
        v509 = _R14->localId;
        parentId = v508;
        Array = v508;
        v510 = GetNewObjectVariable(v13, v508, v509);
        SetNewVariableValue(v13, v510, &v651);
        Scr_SetThreadNotifyName(v13, _R14->localId, (scr_string_t)v499);
        goto $thread_end;
      case 95:
        v195 = (unsigned __int64)_R14->top;
        if ( v195 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2755, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v195 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v196 = ++_R14->top;
        if ( v196 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2757, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v196 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_ISTRING;
        goto $read_string;
      case 96:
      case 152:
$LN1149:
        if ( *((int *)p_localVars + 4) < 63 )
        {
          v320 = Scr_GetSelf(v13, _R14->localId);
          AddRefToObject(v13, v320);
          _R14->localId = AllocFunction(v13, v320, _R14->localId);
          v321 = &_R15[(__int64)(int)(*(_DWORD *)_R15 << 8) >> 8];
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15 + 3);
          _R15 = v321;
          goto $function_call;
        }
        if ( !v13->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
          v13->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v13);
$LN1152:
        v322 = _R14->top;
        if ( v322->type != VAR_FUNCTION )
          goto LABEL_809;
        if ( *((int *)p_localVars + 4) < 63 )
        {
          v323 = Scr_GetSelf(v13, _R14->localId);
          AddRefToObject(v13, v323);
          _R14->localId = AllocFunction(v13, v323, _R14->localId);
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
          v324 = (char **)_R14->top;
          _R15 = *v324;
          _R14->top = (VariableValue *)(v324 - 2);
          goto $function_call;
        }
        _RDI->error_index = 1;
        if ( !v13->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
          v13->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v13);
        v322 = _R14->top;
LABEL_809:
        v325 = Scr_GetNameForType(v322->type);
        v326 = j_va("%s is not a function pointer", v325);
        if ( !v13->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, v326);
          v13->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v13);
$LN1156:
        v327 = _R14->top;
        if ( v327->type != VAR_POINTER )
          goto $not_an_object1;
        if ( *((int *)p_localVars + 4) < 63 )
        {
          _R14->localId = AllocFunction(v13, v327->u.intValue, _R14->localId);
          --_R14->top;
          v328 = &_R15[(__int64)(int)(*(_DWORD *)_R15 << 8) >> 8];
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15 + 3);
          _R15 = v328;
          goto $function_call;
        }
        if ( !v13->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
          v13->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v13);
$not_an_object1:
        ObjectType = _R14->top->type;
$not_an_object_error1:
        _RDI->error_index = 1;
        goto $not_an_object_error;
      case 97:
        parentId = _RDI->animId;
        Array = parentId;
        continue;
      case 99:
        v237 = (unsigned __int64)_R14->top;
        if ( v237 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2945, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v237 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v238 = ++_R14->top;
        if ( v238 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2947, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v238 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v13, v13->m_vmPub.localVars[-(unsigned __int8)*_R15++], _R14->top);
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
$LN957_0:
        Scr_EvalArray(v13, _R14->top, _R14->top - 1);
        --_R14->top;
        continue;
      case 100:
        Scr_EvalMod(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 102:
        v176 = (unsigned __int64)_R14->top;
        if ( v176 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2695, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v176 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v177 = ++_R14->top;
        if ( v177 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2697, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v177 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_INTEGER;
$read_ushort:
        v188 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        _R14->top->u.intValue = v188;
        continue;
      case 103:
        v271 = _R14->top;
        if ( v271->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3165, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v271 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v272 = _R14->top;
        v27 = v631;
        if ( v272->type == VAR_CODEPOS )
          goto $loop_0;
        do
        {
          RemoveRefToValue(v13, (unsigned __int8)v272->type, v272->u);
          v273 = --_R14->top;
          if ( v273->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3170, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v273 - (char *)p_localVars - 2616) >> 4) )
            __debugbreak();
          v272 = _R14->top;
        }
        while ( v272->type != VAR_CODEPOS );
        LODWORD(v25) = v647;
        continue;
      case 104:
        v374 = _R14->top;
        if ( v374->type == VAR_FUNCTION )
        {
          v350 = v374->u;
          v375 = v374 - 1;
          _R14->top = v375;
          if ( v375->type != VAR_POINTER )
            goto $not_an_object2;
          if ( *((int *)p_localVars + 4) >= 63 )
            goto $ScriptMethodThreadCall_error;
          if ( _RDI->bScriptUsageProfile )
            v640 = __rdtsc();
          v376 = AllocThread(v13, v375->u.intValue);
LABEL_917:
          _R14->localId = v376;
          if ( _RDI->bScriptUsageProfile )
          {
            v384 = __rdtsc();
            v385 = (__int64)v643;
            v643->scrProfileScriptThreadCreateTime += (((unsigned __int64)HIDWORD(v384) << 32) | (unsigned int)v384) - v640;
            ++*(_DWORD *)(v385 + 623528);
          }
          --_R14->top;
LABEL_920:
          *((_QWORD *)p_localVars[3] + 3) = _R14->startTop;
          _R14->startTop = &_R14->top[-(unsigned __int8)*_R15];
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15 + 1);
          _R15 = (char *)v350.scriptCodePosValue;
$thread_call:
          *((_QWORD *)p_localVars[3] + 2) = _R14->startTop;
          *((_BYTE *)p_localVars[3] + 32) = _R14->startTop->type;
          _R14->startTop->type = VAR_PRECODEPOS;
          ++v13->m_threadCount;
$function_call:
          __asm { prefetcht0 byte ptr [r15] }
          p_localVars[3][3] = _R14->localVarCount;
          _R14->localVarCount = 0;
          ++*((_DWORD *)p_localVars + 4);
          p_localVars[3] += 10;
          p_localVars[3][2] = _R14->localId;
          if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5169, ASSERT_TYPE_ASSERT, "( local_pos )", (const char *)&queryFormat, "local_pos") )
            __debugbreak();
          v418 = !_RDI->bScriptUsageProfile;
          v27 = v631;
          if ( !v418 )
          {
            v386 = (__int64)v641;
            v387 = (__int64)v643;
            v388 = __rdtsc();
            v640 = v388;
            ++v643->scrProfileScriptUsageOpCount;
            ++*(_QWORD *)(*(_QWORD *)(v386 + 24) + 88i64);
            v389 = *(_QWORD *)(v386 + 40);
            if ( v389 )
              ++*(_DWORD *)(v389 + 16);
            if ( *(_DWORD *)(v387 + 623512) >= 0xC350u )
              goto LABEL_1401;
            Scr_UpdateScriptUsageTime(v13, codePos, __rdtsc() - v631, builtInTime, builtInIndex);
            codePos = _R15;
            builtInTime = 0i64;
            v653 = 0i64;
            builtInIndex = 0;
            v642 = 0;
            UpdateCurrentFuncInfo(v13, _R15, 1);
            v27 = __rdtsc();
            v631 = v27;
            *(_QWORD *)(v387 + 623536) += v27 - v640;
          }
        }
        else
        {
          while ( 1 )
          {
            RemoveRefToValue(v13, (unsigned __int8)v374->type, v374->u);
            --_R14->top;
            v380 = Scr_GetNameForType(_R14->top[1].type);
            v381 = j_va("%s is not a function pointer", v380);
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v381);
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
$LN1214:
            v311 = _R15;
            if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4414, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
              __debugbreak();
            v377 = (unsigned __int8)*_R15++;
            *((_DWORD *)p_localVars + 11) = v377;
            pos = _R15;
            if ( _R14->top->type == VAR_BUILTIN_METHOD )
              break;
            ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
            v13 = v638;
            RemoveRefToValue(v638, (unsigned __int8)_R14->top->type, _R14->top->u);
            --_R14->top;
            p_localVars[4] = (unsigned int *)&_R14->top[-1];
            v378 = Scr_GetNameForType(_R14->top[2].type);
            v379 = j_va("%s is not a builtin method", v378);
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v379);
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
$LN1220:
            v374 = _R14->top;
            if ( v374->type == VAR_FUNCTION )
            {
              p_u = &_R14->top->u;
              v383 = (unsigned int *)&p_u[-2];
              v350 = *p_u;
              _R14->top = (VariableValue *)&p_u[-2];
              if ( LOBYTE(p_u[-1].floatValue) == 1 )
              {
                if ( *((int *)p_localVars + 4) < 63 )
                {
                  if ( _RDI->bScriptUsageProfile )
                    v640 = __rdtsc();
                  v376 = AllocChildThread(v13, *v383, _R14->localId);
                  goto LABEL_917;
                }
$ScriptMethodThreadCall_error:
                _RDI->error_index = 1;
                if ( !v13->m_varPub.error_message )
                {
                  Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
                  v13->m_varPub.error_message = error_message;
                }
                Scr_ErrorInternal(v13);
              }
$not_an_object2:
              ObjectType = _R14->top->type;
              _RDI->error_index = 2;
$not_an_object_error:
              v591 = Scr_GetNameForType(ObjectType);
              v592 = j_va("%s is not an object", v591);
              if ( !v13->m_varPub.error_message )
              {
                Core_strcpy_truncate(error_message, 0x400ui64, v592);
                v13->m_varPub.error_message = error_message;
              }
              Scr_ErrorInternal(v13);
$error_2:
              Com_PrintMessage(6, "caught script exception\n", 0);
              switch ( (int)v25 )
              {
                case 13:
                case 24:
                case 37:
                case 44:
                case 60:
                case 125:
                case 135:
                  _RDI->error_index = 0;
                  break;
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 147:
                  if ( _RDI->error_index < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5520, ASSERT_TYPE_ASSERT, "( pScrVarPub->error_index >= 0 )", (const char *)&queryFormat, "pScrVarPub->error_index >= 0") )
                    __debugbreak();
                  error_index = _RDI->error_index;
                  if ( error_index > 0 )
                    _RDI->error_index = *((_DWORD *)p_localVars + 11) - error_index + 1;
                  break;
                case 46:
                case 69:
                case 87:
                case 90:
                case 142:
                case 159:
                case 185:
                  if ( _RDI->error_index < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5491, ASSERT_TYPE_ASSERT, "( pScrVarPub->error_index >= -1 )", (const char *)&queryFormat, "pScrVarPub->error_index >= -1") )
                    __debugbreak();
                  if ( _RDI->error_index < 0 )
                    goto LABEL_1447;
                  break;
                case 52:
                case 126:
                case 127:
                case 128:
                case 129:
                case 130:
                case 131:
                case 132:
                  if ( _RDI->error_index < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5539, ASSERT_TYPE_ASSERT, "( pScrVarPub->error_index >= -1 )", (const char *)&queryFormat, "pScrVarPub->error_index >= -1") )
                    __debugbreak();
                  v596 = _RDI->error_index;
                  if ( v596 <= 0 )
                  {
                    if ( v596 < 0 )
LABEL_1447:
                      _RDI->error_index = 1;
                  }
                  else
                  {
                    _RDI->error_index = *((_DWORD *)p_localVars + 11) - v596 + 2;
                  }
                  break;
                default:
                  break;
              }
              if ( ScriptCodePos::IsScriptPos(&_R14->pos) && _R15 != ScriptCodePos::GetScriptPos(&_R14->pos, v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5553, ASSERT_TYPE_ASSERT, "(!pFs->pos.IsScriptPos() || local_pos == pFs->pos.GetScriptPos( scrContext ))", (const char *)&queryFormat, "!pFs->pos.IsScriptPos() || local_pos == pFs->pos.GetScriptPos( scrContext )") )
                __debugbreak();
              RuntimeError(v13, _R14->pos, _RDI->error_index, _RDI->error_message, p_m_vmGlob->dialog_error_message);
              v13->m_varPub.error_message = NULL;
              v13->m_vmGlob.dialog_error_message = NULL;
              v13->m_varPub.error_index = 0;
              switch ( (int)v25 )
              {
                case 0:
                  Array = GetDummyObject(v13);
                  goto $error_dec_top;
                case 2:
                case 10:
                case 12:
                case 15:
                case 16:
                case 45:
                case 61:
                case 78:
                case 83:
                case 100:
                case 118:
                case 136:
                case 139:
                case 144:
                case 151:
                case 153:
                  goto $error_dec_top;
                case 4:
                case 109:
                  tempVariable = v13->m_varPub.tempVariable;
                  v633 = 0;
                  ClearVariableValue(v13, tempVariable);
                  id = v13->m_varPub.tempVariable;
                  break;
                case 5:
                case 23:
                case 41:
                case 53:
                case 72:
                case 101:
                case 110:
                case 138:
                case 173:
                case 174:
                case 175:
                case 176:
                case 181:
                case 182:
                case 183:
                case 184:
                  _R15 += 3;
                  goto $ScriptMethodThreadCallPointer_cleanup;
                case 11:
                case 43:
                case 94:
                  RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                  --_R14->top;
                  goto $error_dec_top2;
                case 13:
                case 125:
                  if ( *_R15 != -121 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5570, ASSERT_TYPE_ASSERT, "( *((unsigned char*) local_pos) == OP_SetVariableField )", (const char *)&queryFormat, "*((unsigned char*) local_pos) == OP_SetVariableField") )
                    __debugbreak();
                  pos = ++_R15;
                  goto $SetVariableFieldError;
                case 14:
                case 25:
                case 28:
                case 114:
                  _R15 += 2;
                  pos = _R15;
                  goto $error_dec_top;
                case 18:
                  if ( _R14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5799, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                    __debugbreak();
                  v607 = _R14->top;
                  if ( v607->type != VAR_PRECODEPOS )
                  {
                    do
                    {
                      RemoveRefToValue(v13, (unsigned __int8)v607->type, v607->u);
                      --_R14->top;
                      if ( _R14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5804, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                        __debugbreak();
                      v607 = _R14->top;
                    }
                    while ( v607->type != VAR_PRECODEPOS );
                    _RDI = v644;
                  }
                  goto $error_dec_top2;
                case 20:
                case 70:
                case 104:
                case 116:
                  RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                  --_R14->top;
$ScriptMethodThreadCallPointer_cleanup:
                  v606 = (unsigned __int8)*_R15++;
                  for ( pos = _R15; v606; --v606 )
                  {
                    RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                    --_R14->top;
                  }
                  ++_R14->top;
                  _R14->top->type = VAR_UNDEFINED;
                  break;
                case 24:
                  goto $LN533;
                case 27:
                  _R15 += 2i64 - *(unsigned __int16 *)_R15;
                  pos = _R15;
                  break;
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 147:
                  goto $LN1477;
                case 37:
                  v600 = *((_DWORD *)p_localVars + 11);
                  if ( v600 )
                  {
                    if ( v600 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5615, ASSERT_TYPE_ASSERT, "( pScrVmPub->outparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->outparamcount == 1") )
                      __debugbreak();
                    if ( *((_BYTE *)p_localVars[4] + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5617, ASSERT_TYPE_ASSERT, "( pScrVmPub->top->type == VAR_UNDEFINED )", (const char *)&queryFormat, "pScrVmPub->top->type == VAR_UNDEFINED") )
                      __debugbreak();
                    *((_DWORD *)p_localVars + 11) = 0;
                  }
                  break;
                case 44:
                case 60:
                  goto $LN1460;
                case 46:
                case 69:
                case 90:
                case 142:
                case 159:
                case 185:
                  v599 = v13->m_varPub.tempVariable;
                  v633 = 0;
                  ClearVariableValue(v13, v599);
                  id = v13->m_varPub.tempVariable;
                  goto $error_dec_top2;
                case 51:
                case 79:
                case 96:
                case 117:
                case 150:
                case 152:
                case 170:
                case 171:
                case 172:
                case 178:
                case 179:
                case 180:
                  _R15 += 3;
                  pos = _R15;
                  goto $LL546;
                case 52:
                case 126:
                case 127:
                case 128:
                case 129:
                case 130:
                case 131:
                case 132:
                  RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
$LN1477:
                  if ( v13->m_vmPub.outparamcount )
                    Scr_ClearOutParams(v13);
                  v601 = (__int64)(p_localVars[4] + 4);
                  _R14->top = (VariableValue *)v601;
                  *(_BYTE *)(v601 + 8) = 0;
                  break;
                case 54:
                  goto $LN1459;
                case 57:
                case 99:
                  RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                  --_R14->top;
                  RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
$LN1460:
                  _R14->top->type = VAR_UNDEFINED;
                  break;
                case 71:
                  pos = ++_R15;
$LN1459:
                  Array = GetDummyObject(v13);
                  break;
                case 74:
                case 105:
$LL546:
                  if ( _R14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5742, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                    __debugbreak();
                  v605 = _R14->top;
                  if ( v605->type != VAR_PRECODEPOS )
                  {
                    do
                    {
                      RemoveRefToValue(v13, (unsigned __int8)v605->type, v605->u);
                      --_R14->top;
                      if ( _R14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5747, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                        __debugbreak();
                      v605 = _R14->top;
                    }
                    while ( v605->type != VAR_PRECODEPOS );
                    _RDI = v644;
                  }
                  _R14->top->type = VAR_UNDEFINED;
                  break;
                case 75:
                case 166:
                case 189:
                  v602 = _R14->top;
                  if ( v602->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5715, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v602 - (char *)p_localVars - 2616) >> 4) )
                    __debugbreak();
                  for ( j = _R14->top; j->type != VAR_PRECODEPOS; j = _R14->top )
                  {
                    RemoveRefToValue(v13, (unsigned __int8)j->type, j->u);
                    v604 = --_R14->top;
                    if ( v604->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5720, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v604 - (char *)p_localVars - 2616) >> 4) )
                      __debugbreak();
                  }
                  _R14->top->type = VAR_CODEPOS;
                  break;
                case 87:
                case 93:
                  goto $error_dec_top2;
                case 134:
                  m_caseCount = v13->m_caseCount;
                  if ( m_caseCount )
                  {
                    do
                    {
                      v609 = *((_DWORD *)_R15 + 1);
                      v610 = _R15 + 4;
                      v611 = *(_DWORD *)_R15;
                      _R15 += 7;
                      v612 = v609 << 8;
                      v418 = m_caseCount-- == 1;
                      v13->m_caseCount = m_caseCount;
                    }
                    while ( !v418 );
                    pos = _R15;
                    if ( !v611 )
                    {
                      pos = &v610[(__int64)v612 >> 8];
                      _R15 = pos;
                      if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5822, ASSERT_TYPE_ASSERT, "( local_pos )", (const char *)&queryFormat, "local_pos") )
                        __debugbreak();
                    }
                  }
$error_dec_top2:
                  RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                  goto $error_dec_top;
                case 135:
$SetVariableFieldError:
                  v597 = *((_DWORD *)p_localVars + 11);
                  if ( v597 )
                  {
                    if ( v597 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5631, ASSERT_TYPE_ASSERT, "( pScrVmPub->outparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->outparamcount == 1") )
                      __debugbreak();
                    if ( p_localVars[4] != (unsigned int *)_R14->top && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5633, ASSERT_TYPE_ASSERT, "( pScrVmPub->top == pFs->top )", (const char *)&queryFormat, "pScrVmPub->top == pFs->top") )
                      __debugbreak();
$LN533:
                    RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                    *((_DWORD *)p_localVars + 11) = 0;
                  }
$error_dec_top:
                  --_R14->top;
                  break;
                default:
                  break;
              }
              if ( *((_DWORD *)p_localVars + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5829, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
                __debugbreak();
              if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5830, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
                __debugbreak();
              if ( *((_BYTE *)p_localVars + 35388) )
              {
                if ( !*((_BYTE *)p_localVars + 35385) && !Scr_IgnoreErrors(v13) )
                {
                  *((_BYTE *)p_localVars + 35388) = 0;
                  if ( Sys_IsRemoteDebugServer(v13) )
                  {
                    Scr_ShowConsole(v13);
                    Scr_HitBreakpoint(v13, _R14->top, _R15, _R14->localId, 0);
                  }
                }
              }
              p_m_vmDebugPub = v641;
              goto $restart_2;
            }
          }
          v314 = v638;
          uintValue = _R14->top->u.uintValue;
          m_methBegin = v638->m_methBegin;
          m_methCount = v638->m_methCount;
          builtInIndex = uintValue;
          v642 = uintValue;
          if ( uintValue - m_methBegin >= m_methCount )
          {
            LODWORD(outparamcount) = m_methCount;
            LODWORD(builtinIndex) = uintValue - m_methBegin;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4422, ASSERT_TYPE_ASSERT, "(unsigned)( builtinIndex - scrContext.m_methBegin ) < (unsigned)( scrContext.m_methCount )", "builtinIndex - scrContext.m_methBegin doesn't index scrContext.m_methCount\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
              __debugbreak();
          }
          --_R14->top;
$CallBuiltinMethod2:
          if ( *((_DWORD *)p_localVars + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3526, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
            __debugbreak();
          ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
          p_localVars[4] = (unsigned int *)&_R14->top[-1];
          v393 = _R14->top;
          if ( v393->type != VAR_POINTER )
          {
            v13 = v638;
            _RDI = v644;
            goto LABEL_969;
          }
          parentId = v393->u.intValue;
          v394 = parentId;
          Array = parentId;
          if ( GetObjectType(v314, parentId) != VAR_ENTITY )
          {
            v13 = v638;
            v411 = GetObjectType(v638, v394);
            _RDI = v644;
            v644->error_index = -1;
            v412 = Scr_GetNameForType(v411);
            v413 = j_va("%s is not an entity", v412);
            Scr_Error(COM_ERR_3348, v13, v413);
            v393 = _R14->top;
LABEL_969:
            v414 = v393->type;
            _RDI->error_index = -1;
            v415 = Scr_GetNameForType(v414);
            v416 = j_va("%s is not an entity", v415);
            Scr_Error(COM_ERR_3349, v13, v416);
$LL335:
            v417 = Scr_IsInOpcodeMemory(v13, _R15);
            v418 = v417 == 0;
            if ( !v417 )
            {
              v419 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3635, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, local_pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, local_pos )");
              v418 = !v419;
              if ( v419 )
                __debugbreak();
            }
            __asm { vucomiss xmm7, dword ptr [rdi+1Ch] }
            if ( v418 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3636, ASSERT_TYPE_ASSERT, "( pScrVarPub->framerate )", (const char *)&queryFormat, "pScrVarPub->framerate") )
              __debugbreak();
            if ( depth )
            {
              if ( _R14->localId != p_localVars[3][2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3641, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
                __debugbreak();
              Scr_ValidateNotInProfileBlock(v13, "wait");
            }
            _RCX = _R14->top;
            v421 = _RCX->type;
            if ( v421 == VAR_FLOAT )
            {
              __asm
              {
                vmovss  xmm4, dword ptr [rcx]
                vcomiss xmm4, xmm7
                vmulss  xmm0, xmm4, dword ptr [rdi+1Ch]
                vaddss  xmm1, xmm0, xmm9
                vxorps  xmm2, xmm2, xmm2
                vroundss xmm0, xmm2, xmm1, 1
                vcvttss2si ebx, xmm0
              }
              v648 = _EBX;
              if ( !_EBX )
                __asm { vucomiss xmm4, xmm7 }
            }
            else if ( v421 == VAR_INTEGER )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, dword ptr [rcx]
                vmulss  xmm1, xmm0, dword ptr [rdi+1Ch]
                vaddss  xmm2, xmm1, xmm9
                vxorps  xmm1, xmm1, xmm1
                vroundss xmm0, xmm1, xmm2, 1
                vcvttss2si ebx, xmm0
              }
              v648 = _EBX;
            }
            else
            {
              _RDI->error_index = 2;
              v430 = Scr_GetNameForType(_R14->top->type);
              v431 = j_va("type %s is not a float", v430);
              if ( !v13->m_varPub.error_message )
              {
                Core_strcpy_truncate(error_message, 0x400ui64, v431);
                v13->m_varPub.error_message = error_message;
              }
              Scr_ErrorInternal(v13);
              _EBX = v652;
            }
            if ( (unsigned int)_EBX >= 0xFFFFFF )
            {
              _RDI->error_index = 2;
              if ( _EBX >= 0 )
              {
                if ( !v13->m_varPub.error_message )
                {
                  Core_strcpy_truncate(error_message, 0x400ui64, "wait is too long");
                  v13->m_varPub.error_message = error_message;
                }
                Scr_ErrorInternal(v13);
              }
              if ( !v13->m_varPub.error_message )
              {
                Core_strcpy_truncate(error_message, 0x400ui64, "negative wait is not allowed");
                v13->m_varPub.error_message = error_message;
              }
              Scr_ErrorInternal(v13);
$LL344:
              if ( !Scr_IsInOpcodeMemory(v13, _R15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3699, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, local_pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, local_pos )") )
                __debugbreak();
              if ( (_RDI->time & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3700, ASSERT_TYPE_ASSERT, "( !(pScrVarPub->time & ~VAR_NAME_LOW_MASK) )", (const char *)&queryFormat, "!(pScrVarPub->time & ~VAR_NAME_LOW_MASK)") )
                __debugbreak();
              if ( depth )
              {
                if ( _R14->localId != p_localVars[3][2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3705, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
                  __debugbreak();
                Scr_ValidateNotInProfileBlock(v13, "waitframe");
              }
              Scr_ResetTimeout(v13);
              v438 = _RDI->time + 1;
              value.type = VAR_STACK;
              v438 &= 0xFFFFFFu;
              v652 = v438;
              v648 = v438;
              v439.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
              value.u.scriptCodePosValue = (unsigned __int64)VM_ArchiveStack(v13, _R14->top, v439);
              v440 = GetVariable(v13, _RDI->timeArrayId, v438);
              v441 = GetArray(v13, v440);
              v442 = _R14->localId;
              parentId = v441;
              Array = v441;
              v443 = GetNewObjectVariable(v13, v441, v442);
              SetNewVariableValue(v13, v443, &value);
              Scr_SetThreadWaitTime(v13, _R14->localId, v438);
            }
            else
            {
              if ( _EBX )
                Scr_ResetTimeout(v13);
              v432 = _RDI->time + _EBX;
              --_R14->top;
              v432 &= 0xFFFFFFu;
              v652 = v432;
              v648 = v432;
              value.type = VAR_STACK;
              v433.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
              value.u.scriptCodePosValue = (unsigned __int64)VM_ArchiveStack(v13, _R14->top, v433);
              v434 = GetVariable(v13, _RDI->timeArrayId, v432);
              v435 = GetArray(v13, v434);
              v436 = _R14->localId;
              parentId = v435;
              Array = v435;
              v437 = GetNewObjectVariable(v13, v435, v436);
              SetNewVariableValue(v13, v437, &value);
              Scr_SetThreadWaitTime(v13, _R14->localId, v432);
            }
$thread_end:
            _R14->startTop[1].type = VAR_UNDEFINED;
            goto $thread_return;
          }
          EntityIdRef = Scr_GetEntityIdRef(v314, v394);
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
          if ( p_m_vmGlob->recordPlace )
            Scr_GetFileAndLine(v314, _R15, &p_m_vmGlob->lastFileName, &p_m_vmGlob->lastLine);
          v396 = builtInIndex;
          if ( v641->m_pFuncTable[builtInIndex + v314->m_funcCount - v314->m_methBegin].breakpointCount )
          {
            if ( p_localVars[4] != (unsigned int *)&_R14->top[-1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3554, ASSERT_TYPE_ASSERT, "( pScrVmPub->top == pFs->top - 1 )", (const char *)&queryFormat, "pScrVmPub->top == pFs->top - 1") )
              __debugbreak();
            v397 = *((_DWORD *)p_localVars + 11);
            Scr_HitBuiltinBreakpoint(v638, _R14->top, v311, _R14->localId, v25, v396, v397 + 1);
            *((_DWORD *)p_localVars + 11) = v397;
            p_localVars[4] = (unsigned int *)&_R14->top[-1];
          }
          v398 = v641->builtInTime;
          v399 = __rdtsc();
          ((void (__fastcall *)(_QWORD, _QWORD))v638->m_pMethTable[v396 - v638->m_methBegin])(v638, EntityIdRef);
          v400 = __rdtsc();
          v401 = (__int64)v644;
          v402 = v400 - v399;
          v403 = v641;
          v404 = v402 + v398;
          v13 = v638;
          v641->builtInTime = v404;
          v13->m_builtinTime += v402;
          if ( *(_BYTE *)(v401 + 200) )
          {
            builtInTime += v402;
            v653 = builtInTime;
            if ( v402 < v403->embeddedTime )
            {
              LODWORD(outparamcount) = v403->embeddedTime;
              LODWORD(builtinIndex) = v402;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3590, ASSERT_TYPE_ASSERT, "( timeSpent ) >= ( pScrVmDebugPub->embeddedTime )", "timeSpent >= pScrVmDebugPub->embeddedTime\n\t%i, %i", builtinIndex, outparamcount) )
                __debugbreak();
            }
            v402 -= v403->embeddedTime;
          }
          v405 = parentId;
          v406 = v396 + v13->m_funcCount - v13->m_methBegin;
          v403->m_pFuncTable[v406].prof += v402;
          v407 = v396 + v13->m_funcCount - v13->m_methBegin;
          ++v403->m_pFuncTable[v407].usage;
          RemoveRefToObject(v13, v405);
$post_builtin:
          _R14->top = (VariableValue *)p_localVars[4];
          v408 = ScriptCodePos::GetScriptPos((ScriptCodePos *)p_localVars[3], v13);
          v409 = *((_DWORD *)p_localVars + 11);
          _R15 = (char *)v408;
          if ( v409 )
          {
            *((_DWORD *)p_localVars + 11) = 0;
            p_localVars[4] -= 4 * v409;
            do
            {
              RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
              --_R14->top;
              --v409;
            }
            while ( v409 );
          }
          v410 = *((_DWORD *)p_localVars + 10);
          if ( !v410 )
          {
            if ( (unsigned int *)_R14->top != p_localVars[4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3487, ASSERT_TYPE_ASSERT, "( pFs->top == pScrVmPub->top )", (const char *)&queryFormat, "pFs->top == pScrVmPub->top") )
              __debugbreak();
            ++_R14->top;
            _R14->top->type = VAR_UNDEFINED;
            continue;
          }
          if ( v410 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3480, ASSERT_TYPE_ASSERT, "( pScrVmPub->inparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->inparamcount == 1") )
            __debugbreak();
          v27 = v631;
          *((_DWORD *)p_localVars + 10) = 0;
          if ( (unsigned int *)_R14->top != p_localVars[4] )
          {
            v216 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3482, ASSERT_TYPE_ASSERT, "( pFs->top == pScrVmPub->top )", (const char *)&queryFormat, "pFs->top == pScrVmPub->top");
LABEL_961:
            v27 = v631;
            if ( v216 )
            {
              __debugbreak();
              continue;
            }
          }
        }
        goto $loop_0;
      case 105:
        goto $LN1152;
      case 106:
        ++_R14->top;
        _R14->top->type = VAR_POINTER;
        _R14->top->u.intValue = Scr_AllocArray(v13);
        continue;
      case 107:
        v266 = _R14->top;
        if ( v266->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3142, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v266 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        top = _R14->top;
        if ( top->type == VAR_PRECODEPOS )
        {
LABEL_1015:
          ++_R15;
        }
        else
        {
LABEL_680:
          SetVariableValue(v13, v13->m_vmPub.localVars[-(unsigned __int8)*_R15++], top);
          --_R14->top;
        }
        continue;
      case 109:
        Self = parentId;
        goto $EvalFieldVariableRef;
      case 112:
        v189 = (unsigned __int64)_R14->top;
        if ( v189 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2734, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v189 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v190 = ++_R14->top;
        if ( v190 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2736, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v190 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v191 = *(_DWORD *)_R15;
        _R15 += 4;
        v192 = _R14->top;
        if ( !v192 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 11, ASSERT_TYPE_ASSERT, "( out )", (const char *)&queryFormat, "out") )
          __debugbreak();
        v192->u.intValue = v191;
        v192->type = VAR_FLOAT;
        continue;
      case 113:
        v289 = (unsigned __int8)*_R15;
        v633 = 0;
        ++_R15;
        id = v13->m_vmPub.localVars[-v289];
        continue;
      case 114:
        _RDI = _R14->top;
        if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1598, ASSERT_TYPE_ASSERT, "( value != nullptr )", (const char *)&queryFormat, "value != nullptr") )
          __debugbreak();
        v458 = _RDI->type;
        if ( v458 == VAR_INTEGER )
        {
          v459 = _RDI->u.intValue != 0;
        }
        else
        {
          if ( v458 == VAR_FLOAT )
          {
            __asm { vucomiss xmm7, dword ptr [rdi] }
          }
          else
          {
            RemoveRefToValue(v13, (unsigned __int8)v458, _RDI->u);
            _RDI->type = VAR_UNDEFINED;
            v460 = Scr_GetNameForType(v458);
            v461 = j_va("cannot cast %s to bool", v460);
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v461);
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
          }
          v459 = 0;
        }
        if ( _R14->top->type == VAR_UNDEFINED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4512, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_UNDEFINED )", (const char *)&queryFormat, "pFs->top->type != VAR_UNDEFINED") )
          __debugbreak();
        v462 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        if ( v459 )
          goto $loop_dec_top;
        _R15 += v462;
        --_R14->top;
        continue;
      case 115:
        Scr_EvalBoolComplement(v13, _R14->top);
        continue;
      case 116:
        v339 = _R14->top;
        if ( v339->type != VAR_FUNCTION )
          goto $ScriptThreadCallPointer_error1;
        if ( *((int *)p_localVars + 4) >= 63 )
          goto $ScriptThreadCallPointer_error0;
        if ( _RDI->bScriptUsageProfile )
          v640 = __rdtsc();
        v340 = Scr_GetSelf(v13, _R14->localId);
        v341 = AllocThread(v13, v340);
        goto LABEL_860;
      case 118:
        Scr_EvalLess(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 119:
      case 165:
        Scr_EvalBoolNot(v13, _R14->top);
        continue;
      case 120:
        if ( !Scr_IsInOpcodeMemory(v13, _R15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3726, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, local_pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, local_pos )") )
          __debugbreak();
        if ( (_RDI->time & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3727, ASSERT_TYPE_ASSERT, "( !(pScrVarPub->time & ~VAR_NAME_LOW_MASK) )", (const char *)&queryFormat, "!(pScrVarPub->time & ~VAR_NAME_LOW_MASK)") )
          __debugbreak();
        if ( depth )
        {
          if ( _R14->localId != p_localVars[3][2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3732, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
            __debugbreak();
          Scr_ValidateNotInProfileBlock(v13, "waittillframeend");
        }
        value.type = VAR_STACK;
        v315.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
        value.u.scriptCodePosValue = (unsigned __int64)VM_ArchiveStack(v13, _R14->top, v315);
        v316 = GetVariable(v13, _RDI->timeArrayId, _RDI->time);
        v317 = GetArray(v13, v316);
        v318 = _R14->localId;
        parentId = v317;
        Array = v317;
        NewObjectVariableReverse = GetNewObjectVariableReverse(v13, v317, v318);
        SetNewVariableValue(v13, NewObjectVariableReverse, &value);
        Scr_SetThreadWaitTime(v13, _R14->localId, _RDI->time);
        goto $thread_end;
      case 121:
        goto $LL344;
      case 122:
        v193 = (unsigned __int64)_R14->top;
        if ( v193 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2741, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v193 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v194 = ++_R14->top;
        if ( v194 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2743, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v194 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_STRING;
$read_string:
        v197 = *(_DWORD *)_R15;
        _R15 += 4;
        SL_AddRefToString(v197);
        v198 = _R14->top;
        if ( !v198 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 65, ASSERT_TYPE_ASSERT, "( variable )", (const char *)&queryFormat, "variable") )
          __debugbreak();
        if ( (unsigned __int8)(v198->type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 66, ASSERT_TYPE_ASSERT, "( variable->type == VAR_STRING || variable->type == VAR_ISTRING )", (const char *)&queryFormat, "variable->type == VAR_STRING || variable->type == VAR_ISTRING") )
          __debugbreak();
        if ( !v197 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 67, ASSERT_TYPE_ASSERT, "( stringValue != 0 )", (const char *)&queryFormat, "stringValue != 0") )
          __debugbreak();
        v198->u.intValue = v197;
        continue;
      case 123:
        animId = _RDI->levelId;
LABEL_638:
        parentId = animId;
        Array = animId;
        if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3044, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3046, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        v256 = *(_DWORD *)_R15;
        v257 = animId;
        _R15 += 4;
        goto LABEL_1289;
      case 124:
        parentId = _RDI->levelId;
        Array = parentId;
        continue;
      case 125:
        goto $LL404;
      case 126:
      case 127:
      case 128:
      case 129:
      case 130:
      case 131:
        v311 = _R15;
        if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3504, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
          __debugbreak();
        v312 = v25 - 126;
        goto LABEL_770;
      case 132:
        v311 = _R15;
        if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3513, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
          __debugbreak();
        v312 = (unsigned __int8)*_R15++;
LABEL_770:
        *((_DWORD *)p_localVars + 11) = v312;
        v313 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        v314 = v638;
        builtInIndex = v313;
        v642 = v313;
        if ( v313 - v638->m_methBegin >= v638->m_methCount )
        {
          LODWORD(outparamcount) = v638->m_methCount;
          LODWORD(builtinIndex) = v313 - v638->m_methBegin;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3522, ASSERT_TYPE_ASSERT, "(unsigned)( builtinIndex - scrContext.m_methBegin ) < (unsigned)( scrContext.m_methCount )", "builtinIndex - scrContext.m_methBegin doesn't index scrContext.m_methCount\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
            __debugbreak();
        }
        goto $CallBuiltinMethod2;
      case 133:
        v211 = (unsigned __int64)_R14->top;
        if ( v211 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2812, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v211 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v212 = ++_R14->top;
        if ( v212 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2814, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v212 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        _R14->top->type = VAR_POINTER;
        _R14->top->u.intValue = _RDI->animId;
        AddRefToObject(v13, _RDI->animId);
        continue;
      case 134:
        v525 = *(unsigned __int16 *)&_R15[*(int *)_R15 + 4];
        _R15 += *(int *)_R15 + 6;
        v13->m_caseCount = v525;
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        v526 = _R14->top;
        v527 = v526->type;
        if ( v527 == VAR_STRING )
          goto LABEL_1245;
        if ( v527 == VAR_INTEGER )
        {
          v418 = !IsValidArrayIndex(v526->u.intValue);
          v531 = (unsigned int *)_R14->top;
          if ( v418 )
          {
            v532 = j_va("switch index %d out of range", *v531);
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v532);
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
            v526 = _R14->top;
LABEL_1245:
            InternalVariableIndex = v526->u.intValue;
            v654 = v526->u.intValue;
            SL_RemoveRefToString(v654);
          }
          else
          {
            InternalVariableIndex = GetInternalVariableIndex(*v531);
            v654 = InternalVariableIndex;
          }
        }
        else
        {
          v528 = Scr_GetNameForType(v527);
          v529 = j_va("cannot switch on %s", v528);
          if ( !v13->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, v529);
            v13->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v13);
          InternalVariableIndex = v654;
        }
        if ( !v13->m_caseCount )
          goto $loop_dec_top;
        if ( !InternalVariableIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4977, ASSERT_TYPE_ASSERT, "( caseValue )", (const char *)&queryFormat, "caseValue") )
          __debugbreak();
        do
        {
          v533 = *(_DWORD *)_R15;
          v534 = _R15 + 4;
          v535 = *((_DWORD *)_R15 + 1);
          _R15 += 7;
          v536 = v535 << 8;
          v537 = &v534[(__int64)v536 >> 8];
          if ( v533 == InternalVariableIndex )
          {
            _R15 = &v534[(__int64)v536 >> 8];
            if ( v537 )
              goto $loop_dec_top;
            v538 = 4986;
            goto LABEL_1257;
          }
          v418 = v13->m_caseCount-- == 1;
        }
        while ( !v418 );
        if ( v533 )
          goto $loop_dec_top;
        _R15 = &v534[(__int64)v536 >> 8];
        if ( v537 )
          goto $loop_dec_top;
        v538 = 4996;
LABEL_1257:
        v250 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", v538, ASSERT_TYPE_ASSERT, "( local_pos )", (const char *)&queryFormat, "local_pos");
LABEL_1258:
        if ( v250 )
          __debugbreak();
$loop_dec_top:
        --_R14->top;
        continue;
      case 135:
        v299 = parentId;
        VariableFieldIndex = id;
        v301 = v633;
LABEL_737:
        if ( VariableFieldIndex )
        {
          v302 = _R14->top;
          if ( v302->type || !v301 )
          {
            SetVariableValue(v13, VariableFieldIndex, v302);
            --_R14->top;
          }
          else
          {
            RemoveVariableValue(v13, v299, VariableFieldIndex);
            --_R14->top;
          }
        }
        else
        {
          SetVariableFieldValue(v13, _R14->top);
          --_R14->top;
        }
        continue;
      case 136:
        Scr_EvalDivide(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 137:
      case 146:
        v217 = (unsigned __int64)_R14->top;
        if ( v217 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2836, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v217 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v218 = ++_R14->top;
        if ( v218 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2838, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v218 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v219 = _R15;
        _R14->top->type = VAR_FUNCTION;
        v220 = *(_DWORD *)_R15;
        _R15 += 3;
        _R14->top->u = (VariableUnion)&v219[(__int64)(int)(v220 << 8) >> 8];
        continue;
      case 139:
        Scr_EvalMultiply(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 140:
        v303 = 4i64 * (unsigned __int8)*_R15++;
        id = v13->m_vmPub.localVars[v303 / 0xFFFFFFFFFFFFFFFCui64];
        ClearVariableValue(v13, id);
        continue;
      case 141:
        Self = _RDI->animId;
        parentId = Self;
        Array = Self;
$EvalFieldVariableRef:
        v261 = *(_DWORD *)_R15;
        _R15 += 4;
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        id = Scr_GetVariableFieldIndex(v13, Self, v261);
        v633 = 1;
        continue;
      case 142:
        v241 = (unsigned __int8)*_R15++;
        v240 = v13->m_vmPub.localVars[-v241];
        id = v240;
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        goto $EvalArrayRef;
      case 143:
        goto $LN1039;
      case 144:
        Scr_EvalAnd(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 145:
        v213 = (unsigned __int64)_R14->top;
        if ( v213 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2821, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v213 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v214 = ++_R14->top;
        if ( v214 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2823, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v214 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v27 = v631;
        _R14->top->type = VAR_ANIMATION;
        v215 = *(VariableUnion *)_R15;
        _R15 += 8;
        _R14->top->u = v215;
        if ( _R14->top->u )
          goto $loop_0;
        v216 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2826, ASSERT_TYPE_ASSERT, "( pFs->top->u.codePosValue )", (const char *)&queryFormat, "pFs->top->u.codePosValue");
        goto LABEL_961;
      case 147:
        while ( 2 )
        {
          v306 = _R15;
          if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4141, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
            __debugbreak();
          v342 = (unsigned __int8)*_R15++;
          *((_DWORD *)p_localVars + 11) = v342;
          if ( _R14->top->type == VAR_BUILTIN_FUNCTION )
          {
            m_funcBegin = v13->m_funcBegin;
            v352 = v13->m_funcCount;
            v308 = _R14->top->u.uintValue;
            builtInIndex = v308;
            v642 = v308;
            if ( v308 - m_funcBegin >= v352 )
            {
              LODWORD(outparamcount) = v352;
              LODWORD(builtinIndex) = v308 - m_funcBegin;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4149, ASSERT_TYPE_ASSERT, "(unsigned)( builtinIndex - scrContext.m_funcBegin ) < (unsigned)( scrContext.m_funcCount )", "builtinIndex - scrContext.m_funcBegin doesn't index scrContext.m_funcCount\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
                __debugbreak();
            }
            --_R14->top;
$CallBuiltin2:
            if ( *((_DWORD *)p_localVars + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3386, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
              __debugbreak();
            ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
            ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
            v353 = builtInIndex;
            if ( v641->m_pFuncTable[v308 - v13->m_funcBegin].breakpointCount )
            {
              v354 = *((_DWORD *)p_localVars + 11);
              Scr_HitBuiltinBreakpoint(v13, _R14->top, v306, _R14->localId, v25, builtInIndex, v354);
              *((_DWORD *)p_localVars + 11) = v354;
            }
            p_localVars[4] = (unsigned int *)_R14->top;
            v355 = v641->builtInTime;
            v356 = __rdtsc();
            ((void (__fastcall *)(scrContext_t *))v13->m_pFuncTable[v353 - v13->m_funcBegin])(v13);
            v357 = v641;
            v358 = __rdtsc();
            v359 = (__int64)v644;
            v360 = v358 - v356;
            v361 = v638;
            v641->builtInTime = v360 + v355;
            v361->m_builtinTime += v360;
            if ( *(_BYTE *)(v359 + 200) )
            {
              v362 = v357->embeddedTime;
              builtInTime += v360;
              v653 = builtInTime;
              if ( v360 < v362 )
              {
                LODWORD(outparamcount) = v362;
                LODWORD(builtinIndex) = v360;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3436, ASSERT_TYPE_ASSERT, "( timeSpent ) >= ( pScrVmDebugPub->embeddedTime )", "timeSpent >= pScrVmDebugPub->embeddedTime\n\t%i, %i", builtinIndex, outparamcount) )
                  __debugbreak();
                v357 = v641;
              }
              v363 = v353 - v361->m_funcBegin;
              v360 -= v357->embeddedTime;
            }
            else
            {
              v363 = v353 - v361->m_funcBegin;
            }
            v357->m_pFuncTable[v363].prof += v360;
            v13 = v638;
            v364 = v353 - v638->m_funcBegin;
            ++v357->m_pFuncTable[v364].usage;
            goto $post_builtin;
          }
          ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
          RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
          p_localVars[4] = (unsigned int *)--_R14->top;
          v343 = Scr_GetNameForType(_R14->top[1].type);
          v344 = j_va("%s is not a builtin function", v343);
          if ( !v13->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, v344);
            v13->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v13);
          _RDI = v644;
$LN1188:
          v339 = _R14->top;
          if ( v339->type != VAR_FUNCTION )
            goto $ScriptThreadCallPointer_error1;
          if ( *((int *)p_localVars + 4) >= 63 )
          {
$ScriptThreadCallPointer_error0:
            _RDI->error_index = 1;
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
            v339 = _R14->top;
$ScriptThreadCallPointer_error1:
            v345 = Scr_GetNameForType(v339->type);
            v346 = j_va("%s is not a function pointer", v345);
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v346);
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
            continue;
          }
          break;
        }
        if ( _RDI->bScriptUsageProfile )
          v640 = __rdtsc();
        v340 = Scr_GetSelf(v13, _R14->localId);
        v341 = AllocChildThread(v13, v340, _R14->localId);
LABEL_860:
        _R14->localId = v341;
        if ( _RDI->bScriptUsageProfile )
        {
          v347 = __rdtsc();
          v348 = (__int64)v643;
          v643->scrProfileScriptThreadCreateTime += (((unsigned __int64)HIDWORD(v347) << 32) | (unsigned int)v347) - v640;
          ++*(_DWORD *)(v348 + 623528);
        }
        AddRefToObject(v13, v340);
        v349 = &_R14->top->u;
        v350 = *v349;
        _R14->top = (VariableValue *)&v349[-2];
        goto LABEL_920;
      case 148:
        _R15 += *(int *)_R15 + 4;
        continue;
      case 149:
        if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4943, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4945, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
LABEL_1234:
        _R14->top->type = VAR_PRECODEPOS;
        continue;
      case 151:
        Scr_EvalInequality(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 153:
        Scr_EvalExOr(v13, _R14->top - 1, _R14->top);
        --_R14->top;
        continue;
      case 154:
        continue;
      case 155:
        m_errorLevel = v13->m_errorLevel;
        if ( m_errorLevel < 0 )
        {
          v614 = 5013;
LABEL_1555:
          LODWORD(outparamcount) = m_errorLevel;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", v614, ASSERT_TYPE_ASSERT, "( ( scrContext.m_errorLevel >= 0 ) )", "%s\n\t( scrContext.m_errorLevel ) = %i", "( scrContext.m_errorLevel >= 0 )", outparamcount) )
            __debugbreak();
        }
LABEL_1557:
        --v13->m_errorLevel;
        result = 0i64;
        goto LABEL_1558;
      case 156:
        if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5018, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5020, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        v540 = *(_DWORD *)_R15;
        v541 = *((_DWORD *)_R15 + 1);
        _R15 += 8;
        _R14->top->u.intValue = Scr_FindEntityId(v13, v541, (EntityClass)v540, LOCAL_CLIENT_0);
        v542 = _R14->top;
        if ( v542->u.intValue )
          goto $object;
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        _R14->top->type = VAR_UNDEFINED;
        if ( !v13->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "unknown object");
          v13->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v13);
LABEL_1280:
        v542 = _R14->top;
$object:
        v542->type = VAR_POINTER;
        AddRefToObject(v13, _R14->top->u.uintValue);
        continue;
      case 157:
        if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5041, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5043, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        v543 = *(_DWORD *)_R15;
        _R15 += 4;
        _R14->top->u.intValue = v543;
        goto LABEL_1280;
      case 158:
        if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5049, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5051, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        v256 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        v257 = _R14->localId;
LABEL_1289:
        v544 = _R14->top;
        v545 = FindVariable(v13, v257, v256);
        Scr_EvalVariable_Out(v13, v545, v544);
        continue;
      case 159:
        v546 = *(unsigned __int16 *)_R15;
        v547 = _R14->localId;
        _R15 += 2;
        v633 = 0;
        v27 = v631;
        id = FindVariable(v13, v547, v546);
        if ( id )
          goto $loop_0;
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        if ( !v13->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "cannot create a new local variable in the debugger");
          v13->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v13);
        goto $LN1387;
      case 160:
$LN1387:
        v548 = *_R15;
        v549 = _R15 + 1;
        if ( v548 == 1 )
        {
          v550 = p_m_vmPub;
          v551 = *v549++;
          if ( _R14->localId != p_m_vmPub->function_frame->fs.localId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5075, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
            __debugbreak();
          v552 = &v638->m_profileScript.threadId[v550->function_frame->fs.localId];
          if ( (unsigned int)v551 >= 0x80 )
          {
            LODWORD(outparamcount) = 128;
            LODWORD(builtinIndex) = v551;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", builtinIndex, outparamcount) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v551 & 0x1F)) & v552->array[(unsigned __int64)(unsigned int)v551 >> 5]) != 0 )
          {
            ScriptCodePos::SetScriptPos(&_R14->pos, v549);
            if ( (unsigned __int8)v551 >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 239, ASSERT_TYPE_ASSERT, "(index < 128)", (const char *)&queryFormat, "index < PROF_SCRIPT_COUNT") )
              __debugbreak();
            v553 = v638;
            v554 = j_va("prof_start( \"%s\" ) called again before matched prof_end.", v638->m_profileScript.profileScriptNames[(unsigned __int8)v551]);
            if ( !v553->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v554);
              v553->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v553);
          }
          else
          {
            v553 = v638;
          }
          Profile_BeginScript(v553, v551, v637, &depth, p_m_vmPub->function_frame->fs.localId);
          ++depth;
          v637 = v551;
          v13 = v638;
        }
        v555 = *(_WORD *)v549;
        v556 = *((_WORD *)v549 + 1);
        _R15 = v549 + 4;
        v27 = v631;
        if ( (unsigned __int8)v548 <= 1u )
          goto LABEL_34;
        v557 = v548;
        p_localVars = &p_m_vmPub->localVars;
        if ( scr_profilingLevel->current.integer < v557 )
          goto $loop_0;
        ProfileString = ScriptDebugData_GetProfileString(v555, v556);
        if ( !ProfileString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2151, ASSERT_TYPE_ASSERT, "(profileString)", (const char *)&queryFormat, "profileString") )
          __debugbreak();
        Sys_ProfBeginNamedEvent(0xFFFF0000, ProfileString);
        goto LABEL_12;
      case 161:
        v559 = *_R15++;
        v647 = (__int64)_R15;
        v560 = v559 <= 1u;
        if ( v559 == 1 )
        {
          v561 = p_m_vmPub;
          v562 = (const char *)(v647 + 1);
          v563 = *_R15;
          ++v647;
          if ( _R14->localId != p_m_vmPub->function_frame->fs.localId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5107, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
            __debugbreak();
          v564 = &v638->m_profileScript.threadId[v561->function_frame->fs.localId];
          if ( (unsigned int)v563 >= 0x80 )
          {
            LODWORD(outparamcount) = 128;
            LODWORD(builtinIndex) = v563;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", builtinIndex, outparamcount) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v563 & 0x1F)) & v564->array[(unsigned __int64)(unsigned int)v563 >> 5]) == 0 )
          {
            ScriptCodePos::SetScriptPos(&_R14->pos, v562);
            if ( (unsigned __int8)v563 >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 239, ASSERT_TYPE_ASSERT, "(index < 128)", (const char *)&queryFormat, "index < PROF_SCRIPT_COUNT") )
              __debugbreak();
            v565 = v638;
            v566 = j_va("prof_end( \"%s\" ) called without a matching prof_start.", v638->m_profileScript.profileScriptNames[(unsigned __int8)v563]);
            if ( !v565->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v566);
              v565->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v565);
          }
          v567 = p_m_vmPub->function_frame->fs.localId;
          v568 = __rdtsc();
          if ( !(_DWORD)v567 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 284, ASSERT_TYPE_ASSERT, "( fsID != NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "fsID != NULL_OBJECT_VARIABLE_ID") )
            __debugbreak();
          v569 = v638;
          v418 = v638->m_profileScript.write[v563].refCount-- == 1;
          if ( v418 )
            v569->m_profileScript.write[v563].totalTime += v568 - v569->m_profileScript.write[v563].startTime;
          v570 = (__int64)&v569->m_profileScript.threadId[v567];
          if ( (unsigned int)v563 >= 0x80 )
          {
            LODWORD(outparamcount) = 128;
            LODWORD(builtinIndex) = v563;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", builtinIndex, outparamcount) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v563 & 0x1F)) & *(_DWORD *)(v570 + 4 * ((unsigned __int64)(unsigned int)v563 >> 5))) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 291, ASSERT_TYPE_ASSERT, "( scrContext.m_profileScript.threadId[fsID].testBit( profileIndex ) )", (const char *)&queryFormat, "scrContext.m_profileScript.threadId[fsID].testBit( profileIndex )") )
            __debugbreak();
          v571 = v567;
          v13 = v638;
          v572 = &v638->m_profileScript.threadId[v571];
          if ( (unsigned int)v563 >= 0x80 )
          {
            LODWORD(v629) = 128;
            LODWORD(v628) = v563;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v628, v629) )
              __debugbreak();
          }
          --depth;
          v572->array[(unsigned __int64)(unsigned int)v563 >> 5] &= ~(0x80000000 >> (v563 & 0x1F));
          v573 = (unsigned __int8)v563;
          v560 = 1;
          _R15 = (char *)v647;
          v637 = v13->m_profileScript.parentIndex[v573];
        }
        v27 = v631;
        if ( v560 )
        {
LABEL_34:
          p_localVars = &p_m_vmPub->localVars;
          goto $loop_0;
        }
        v574 = (char)v559;
        p_localVars = &p_m_vmPub->localVars;
        if ( scr_profilingLevel->current.integer < v574 )
          goto $loop_0;
        Sys_ProfEndNamedEvent();
        goto LABEL_12;
      case 162:
        v418 = !_RDI->developer;
        v27 = v631;
        if ( v418 )
          goto $loop_0;
        v50 = Scr_HitBreakpoint(v13, _R14->top, _R15, _R14->localId, 0);
        _RDI = v644;
        goto LABEL_52;
      case 163:
        v50 = Scr_HitAssignmentBreakpoint(v13, _R14->top, _R15, _R14->localId, 0);
        goto LABEL_52;
      case 164:
        v50 = Scr_HitAssignmentBreakpoint(v13, _R14->top, _R15, _R14->localId, 1);
LABEL_52:
        LODWORD(v25) = v50;
        v649 = v50;
        v647 = v50;
        v51 = v50;
        opcode = v50;
        if ( Scr_SkipIntructions(v13) )
        {
          do
          {
            switch ( v51 )
            {
              case 0u:
              case 0x24u:
              case 0x2Au:
              case 0x2Eu:
              case 0x57u:
              case 0x58u:
              case 0x5Au:
              case 0x5Du:
              case 0x87u:
                goto $skip_loop_dec_top;
              case 1u:
              case 0x8Eu:
                goto $LN714;
              case 2u:
              case 0xAu:
              case 0xCu:
              case 0xFu:
              case 0x10u:
              case 0x2Du:
              case 0x3Du:
              case 0x4Eu:
              case 0x53u:
              case 0x64u:
              case 0x76u:
              case 0x88u:
              case 0x8Bu:
              case 0x90u:
              case 0x97u:
              case 0x99u:
                RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                --_R14->top;
                goto $LN1672;
              case 3u:
                v71 = (unsigned __int8)*_R15++;
                *p_localVars -= v71;
                for ( _R14->localVarCount -= v71; (_BYTE)v71; LOBYTE(v71) = v71 - 1 )
                  RemoveNextVariable(v13, _R14->localId);
                break;
              case 4u:
              case 8u:
              case 0x25u:
              case 0x6Du:
              case 0x8Du:
                goto $LN1584;
              case 5u:
              case 0x29u:
              case 0x65u:
              case 0x6Eu:
              case 0xAEu:
              case 0xB0u:
              case 0xB6u:
              case 0xB8u:
                RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                --_R14->top;
                goto $LN1660;
              case 6u:
              case 0x36u:
              case 0x61u:
              case 0x78u:
              case 0x79u:
              case 0x7Cu:
              case 0x8Fu:
              case 0x9Au:
              case 0xA7u:
              case 0xA8u:
                break;
              case 7u:
              case 0x7Bu:
                if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6069, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6071, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                goto LABEL_137;
              case 9u:
              case 0x1Au:
              case 0x26u:
              case 0x37u:
              case 0x3Au:
              case 0x3Eu:
              case 0x3Fu:
              case 0x40u:
              case 0x41u:
              case 0x42u:
              case 0x43u:
              case 0x5Cu:
              case 0x6Au:
              case 0x85u:
                v52 = (unsigned __int64)_R14->top;
                if ( v52 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5902, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v52 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v53 = ++_R14->top;
                if ( v53 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5904, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v53 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                goto LABEL_60;
              case 0xBu:
                _R15 += 2;
                goto $LN1674;
              case 0xDu:
              case 0x7Du:
                if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6483, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6485, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                _R14->top->type = VAR_UNDEFINED;
                if ( *_R15 != -121 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6487, ASSERT_TYPE_ASSERT, "( *((unsigned char*) local_pos) == OP_SetVariableField )", (const char *)&queryFormat, "*((unsigned char*) local_pos) == OP_SetVariableField") )
                  __debugbreak();
$LN714:
                ++_R15;
                goto $skip_loop_dec_top;
              case 0xEu:
              case 0x72u:
                _R15 += *(unsigned __int16 *)_R15 + 2;
                goto $skip_loop_dec_top;
              case 0x12u:
                RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                --_R14->top;
                RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                v113 = --_R14->top;
                if ( v113->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6536, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v113 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                for ( k = _R14->top; k->type != VAR_PRECODEPOS; k = _R14->top )
                {
                  RemoveRefToValue(v13, (unsigned __int8)k->type, k->u);
                  v115 = --_R14->top;
                  if ( v115->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6541, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v115 - (char *)p_localVars - 2616) >> 4) )
                    __debugbreak();
                }
                goto $skip_loop_dec_top;
              case 0x13u:
                v66 = (unsigned __int64)_R14->top;
                if ( v66 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5964, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v66 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v67 = ++_R14->top;
                if ( v67 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5966, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v67 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                _R15 += 12;
                _R14->top->type = VAR_UNDEFINED;
                break;
              case 0x14u:
              case 0x68u:
                RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                --_R14->top;
                goto $LN1657;
              case 0x15u:
                if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6381, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6383, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                goto LABEL_233;
              case 0x16u:
              case 0x44u:
              case 0x51u:
              case 0x62u:
                v58 = (unsigned __int64)_R14->top;
                if ( v58 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5928, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v58 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v59 = ++_R14->top;
                if ( v59 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5930, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v59 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                ++_R15;
                _R14->top->type = VAR_UNDEFINED;
                break;
              case 0x17u:
              case 0x35u:
              case 0x48u:
              case 0x8Au:
              case 0xADu:
              case 0xAFu:
              case 0xB5u:
              case 0xB7u:
$LN1660:
                _R15 += 3;
                goto LABEL_255;
              case 0x18u:
              case 0x38u:
              case 0x4Cu:
                _R15 += 4;
                goto $skip_loop_dec_top;
              case 0x19u:
              case 0x1Cu:
                _R15 += *(unsigned __int16 *)_R15 + 2;
                break;
              case 0x1Bu:
              case 0x9Fu:
                goto $LN1585;
              case 0x1Du:
              case 0x1Eu:
              case 0x1Fu:
              case 0x20u:
              case 0x21u:
              case 0x22u:
                v100 = v51 - 29;
                goto $skip_CallBuiltin;
              case 0x23u:
                v100 = (unsigned __int8)*_R15++;
$skip_CallBuiltin:
                v101 = _R15 + 2;
                goto $skip_CallBuiltin2;
              case 0x27u:
              case 0x59u:
              case 0x73u:
              case 0x77u:
              case 0xA5u:
$LN1672:
                _R14->top->type = VAR_UNDEFINED;
                break;
              case 0x28u:
                v77 = _R14->top;
                if ( v77->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6140, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v77 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                ++_R15;
                if ( _R14->top->type != VAR_CODEPOS )
                  goto $skip_loop_dec_top;
                break;
              case 0x2Bu:
              case 0x54u:
              case 0x5Eu:
$LN1674:
                RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                --_R14->top;
                goto $skip_loop_dec_top;
              case 0x2Cu:
              case 0x3Cu:
                if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6078, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6080, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  goto LABEL_308;
                goto LABEL_137;
              case 0x2Fu:
                Scr_ExitSkipIntructions(v13);
                v651.type = VAR_UNDEFINED;
                goto $skip_return;
              case 0x30u:
                ++*p_localVars;
                ++_R14->localVarCount;
                v70 = *(unsigned __int16 *)_R15;
                _R15 += 2;
                goto LABEL_118;
              case 0x31u:
                goto $SafeSetVariableFieldCached_Debugger;
              case 0x32u:
              case 0x50u:
              case 0x55u:
              case 0x66u:
                v62 = (unsigned __int64)_R14->top;
                if ( v62 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5948, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v62 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v63 = ++_R14->top;
                if ( v63 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5950, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v63 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                _R14->top->type = VAR_UNDEFINED;
$LN1585:
                _R15 += 2;
                break;
              case 0x33u:
              case 0x60u:
              case 0x96u:
              case 0x98u:
              case 0xAAu:
              case 0xACu:
              case 0xB2u:
              case 0xB4u:
                _R15 += 3;
                goto $LL700;
              case 0x34u:
                v106 = (unsigned __int8)*_R15;
                v107 = _R15 + 1;
                goto $skip_CallBuiltinMethod2;
              case 0x39u:
                goto $LN1571;
              case 0x3Bu:
                Scr_ExitSkipIntructions(v13);
                goto $skip_end;
              case 0x45u:
              case 0x5Bu:
                ++*p_localVars;
                ++_R14->localVarCount;
                v99 = *(unsigned __int16 *)_R15;
                _R15 += 2;
                goto LABEL_207;
              case 0x46u:
              case 0x74u:
$LN1657:
                RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                --_R14->top;
LABEL_255:
                v104 = _R14->top;
                v110 = (unsigned __int8)*_R15++;
                if ( !v110 )
                  goto LABEL_217;
                do
                {
                  RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                  v111 = (__int64)&_R14->top[-1];
                  _R14->top = (VariableValue *)v111;
                  --v110;
                }
                while ( v110 );
                v112 = v111 + 16;
                _R14->top = (VariableValue *)v112;
                *(_BYTE *)(v112 + 8) = 0;
                break;
              case 0x47u:
              case 0x71u:
                goto $LN1620;
              case 0x49u:
                v54 = (unsigned __int64)_R14->top;
                if ( v54 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5909, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v54 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v55 = ++_R14->top;
                if ( v55 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5911, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v55 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                goto LABEL_67;
              case 0x4Au:
              case 0x69u:
$LL700:
                if ( _R14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6411, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                  __debugbreak();
                v109 = _R14->top;
                if ( v109->type == VAR_PRECODEPOS )
                {
LABEL_60:
                  _R14->top->type = VAR_UNDEFINED;
                }
                else
                {
                  do
                  {
                    RemoveRefToValue(v13, (unsigned __int8)v109->type, v109->u);
                    --_R14->top;
                    if ( _R14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6416, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                      __debugbreak();
                    v109 = _R14->top;
                  }
                  while ( v109->type != VAR_PRECODEPOS );
                  v109->type = VAR_UNDEFINED;
                }
                break;
              case 0x4Bu:
                goto $CheckClearParams_Debugger;
              case 0x4Fu:
              case 0x75u:
              case 0xABu:
              case 0xB3u:
                if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6391, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6393, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                _R15 += 3;
                _R14->top->type = VAR_UNDEFINED;
                break;
              case 0x52u:
                ++*p_localVars;
                ++_R14->localVarCount;
                v74 = *(unsigned __int16 *)_R15;
                _R15 += 2;
                goto LABEL_146;
              case 0x56u:
                v122 = *(unsigned __int16 *)_R15;
                v13->m_caseCount = v122;
                _R15 += 7 * v122 + 2;
                break;
              case 0x5Fu:
              case 0x7Au:
                v60 = (unsigned __int64)_R14->top;
                if ( v60 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5937, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v60 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v61 = ++_R14->top;
                if ( v61 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5939, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v61 - (char *)p_localVars - 2616) >> 4) )
                  goto LABEL_308;
                goto LABEL_67;
              case 0x63u:
                v72 = (unsigned __int64)_R14->top;
                if ( v72 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6041, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v72 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v73 = ++_R14->top;
                if ( v73 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6043, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v73 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                ++_R15;
                _R14->top->type = VAR_UNDEFINED;
$LN1571:
                _R14->top[-1].type = VAR_UNDEFINED;
                goto $skip_loop_dec_top;
              case 0x67u:
                v78 = _R14->top;
                if ( v78->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6150, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v78 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                for ( m = _R14->top; m->type != VAR_CODEPOS; m = _R14->top )
                {
                  RemoveRefToValue(v13, (unsigned __int8)m->type, m->u);
                  v80 = --_R14->top;
                  if ( v80->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6155, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v80 - (char *)p_localVars - 2616) >> 4) )
                    __debugbreak();
                }
                break;
              case 0x6Bu:
                v76 = _R14->top;
                if ( v76->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6130, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v76 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                ++_R15;
                if ( _R14->top->type != VAR_PRECODEPOS )
                  goto $skip_loop_dec_top;
                break;
              case 0x70u:
                v64 = (unsigned __int64)_R14->top;
                if ( v64 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5956, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v64 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v65 = ++_R14->top;
                if ( v65 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5958, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v65 - (char *)p_localVars - 2616) >> 4) )
                  goto LABEL_308;
LABEL_67:
                _R14->top->type = VAR_UNDEFINED;
$LN1584:
                _R15 += 4;
                break;
              case 0x7Eu:
              case 0x7Fu:
              case 0x80u:
              case 0x81u:
              case 0x82u:
              case 0x83u:
                v106 = v51 - 126;
                goto $skip_CallBuiltinMethod;
              case 0x84u:
                v106 = (unsigned __int8)*_R15++;
$skip_CallBuiltinMethod:
                v107 = _R15 + 2;
$skip_CallBuiltinMethod2:
                _R15 = v107;
                if ( v106 )
                {
                  do
                  {
                    RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                    v108 = (__int64)&_R14->top[-1];
                    _R14->top = (VariableValue *)v108;
                    --v106;
                  }
                  while ( v106 );
                }
                else
                {
                  v108 = (__int64)_R14->top;
                }
                RemoveRefToValue(v13, *(unsigned __int8 *)(v108 + 8), *(VariableUnion *)v108);
                _R14->top->type = VAR_UNDEFINED;
                break;
              case 0x86u:
                v116 = *(int *)_R15;
                v117 = *(unsigned __int16 *)&_R15[v116 + 4];
                _R15 += v116 + 6;
                v13->m_caseCount = v117;
                if ( v117 )
                {
                  do
                  {
                    v118 = *((_DWORD *)_R15 + 1);
                    v119 = _R15 + 4;
                    v120 = *(_DWORD *)_R15;
                    _R15 += 7;
                    v121 = v118 << 8;
                    v418 = v117-- == 1;
                    v13->m_caseCount = v117;
                  }
                  while ( !v418 );
                  if ( !v120 )
                  {
                    _R15 = &v119[(__int64)v121 >> 8];
                    if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6570, ASSERT_TYPE_ASSERT, "( local_pos )", (const char *)&queryFormat, "local_pos") )
                      __debugbreak();
                  }
                }
                goto $skip_loop_dec_top;
              case 0x89u:
              case 0x92u:
                v68 = (unsigned __int64)_R14->top;
                if ( v68 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5985, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v68 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v69 = ++_R14->top;
                if ( v69 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5987, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v69 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                _R15 += 3;
                _R14->top->type = VAR_UNDEFINED;
                break;
              case 0x91u:
                v56 = (unsigned __int64)_R14->top;
                if ( v56 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5917, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v56 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v57 = ++_R14->top;
                if ( v57 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5919, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v57 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                _R15 += 8;
                _R14->top->type = VAR_UNDEFINED;
                break;
              case 0x93u:
                v100 = (unsigned __int8)*_R15;
                v101 = _R15 + 1;
$skip_CallBuiltin2:
                _R15 = v101;
                if ( v100 )
                {
                  do
                  {
                    RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                    v102 = (__int64)&_R14->top[-1];
                    _R14->top = (VariableValue *)v102;
                    --v100;
                  }
                  while ( v100 );
                  v103 = v102 + 16;
                  _R14->top = (VariableValue *)v103;
                  *(_BYTE *)(v103 + 8) = 0;
                }
                else
                {
                  v104 = _R14->top;
LABEL_217:
                  v105 = v104 + 1;
                  _R14->top = v105;
                  v105->type = VAR_UNDEFINED;
                }
                break;
              case 0x94u:
                _R15 += *(int *)_R15 + 4;
                break;
              case 0x95u:
                if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6546, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6548, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                {
                  __debugbreak();
                  _R14->top->type = VAR_PRECODEPOS;
                }
                else
                {
LABEL_233:
                  _R14->top->type = VAR_PRECODEPOS;
                }
                break;
              case 0x9Bu:
                Scr_ExitSkipIntructions(v13);
                m_errorLevel = v13->m_errorLevel;
                if ( m_errorLevel >= 0 )
                  goto LABEL_1557;
                v614 = 6585;
                goto LABEL_1555;
              case 0x9Cu:
                if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6591, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6593, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                _R15 += 8;
                _R14->top->type = VAR_UNDEFINED;
                break;
              case 0x9Du:
                if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6601, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6603, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                {
LABEL_308:
                  __debugbreak();
                  _R15 += 4;
                  _R14->top->type = VAR_UNDEFINED;
                }
                else
                {
LABEL_137:
                  _R15 += 4;
                  _R14->top->type = VAR_UNDEFINED;
                }
                break;
              case 0x9Eu:
                if ( _R14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6609, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++_R14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6611, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                _R15 += 2;
                _R14->top->type = VAR_UNDEFINED;
                break;
              case 0xA0u:
                v97 = _R15 + 1;
                if ( *_R15 == 1 )
                  v97 = _R15 + 2;
                _R15 = v97 + 4;
                break;
              case 0xA1u:
                v98 = *_R15++;
                if ( v98 == 1 )
                  ++_R15;
                break;
              case 0xA2u:
                if ( !_RDI->developer )
                  break;
                v51 = Scr_HitBreakpoint(v13, _R14->top, _R15, _R14->localId, 0);
                goto LABEL_323;
              case 0xA3u:
                v123 = Scr_HitAssignmentBreakpoint(v13, _R14->top, _R15, _R14->localId, 0);
                goto LABEL_320;
              case 0xA4u:
                v123 = Scr_HitAssignmentBreakpoint(v13, _R14->top, _R15, _R14->localId, 1);
LABEL_320:
                v51 = v123;
                goto LABEL_323;
              case 0xA6u:
                v88 = *_R15;
                v89 = 0;
                ++_R15;
                if ( v88 )
                {
                  do
                  {
                    ++*p_localVars;
                    ++_R14->localVarCount;
                    v90 = *(unsigned __int16 *)_R15;
                    _R15 += 2;
                    ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
                    v91 = v90;
                    v92 = v638;
                    **p_localVars = GetNewVariable(v638, _R14->localId, v91);
                    v93 = _R14->top;
                    if ( v93->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6201, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v93 - (char *)p_localVars - 2616) >> 4) )
                      __debugbreak();
                    v94 = _R14->top;
                    if ( v94->type != VAR_PRECODEPOS )
                    {
                      RemoveRefToValue(v92, (unsigned __int8)v94->type, v94->u);
                      --_R14->top;
                    }
                    ++v89;
                  }
                  while ( v89 < v88 );
                }
                goto LABEL_186;
              case 0xB9u:
              case 0xBAu:
                ++*p_localVars;
                ++_R14->localVarCount;
                v99 = (unsigned __int8)*_R15++;
LABEL_207:
                ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
                **p_localVars = GetNewVariable(v13, _R14->localId, v99);
                goto $skip_loop_dec_top;
              case 0xBBu:
                ++*p_localVars;
                ++_R14->localVarCount;
                v70 = (unsigned __int8)*_R15++;
LABEL_118:
                ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
                **p_localVars = GetNewVariable(v13, _R14->localId, v70);
                break;
              case 0xBCu:
                ++*p_localVars;
                ++_R14->localVarCount;
                v74 = (unsigned __int8)*_R15++;
LABEL_146:
                ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
                **p_localVars = GetNewVariable(v13, _R14->localId, v74);
$SafeSetVariableFieldCached_Debugger:
                v75 = _R14->top;
                if ( v75->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6124, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v75 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                if ( _R14->top->type == VAR_PRECODEPOS )
                  break;
$skip_loop_dec_top:
                RemoveRefToValue(v13, (unsigned __int8)_R14->top->type, _R14->top->u);
                --_R14->top;
                break;
              case 0xBDu:
                v81 = *_R15;
                v82 = 0;
                ++_R15;
                if ( v81 )
                {
                  do
                  {
                    ++*p_localVars;
                    ++_R14->localVarCount;
                    v83 = (unsigned __int8)*_R15++;
                    ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
                    v84 = v83;
                    v85 = v638;
                    **p_localVars = GetNewVariable(v638, _R14->localId, v84);
                    v86 = _R14->top;
                    if ( v86->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6172, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v86 - (char *)p_localVars - 2616) >> 4) )
                      __debugbreak();
                    v87 = _R14->top;
                    if ( v87->type != VAR_PRECODEPOS )
                    {
                      RemoveRefToValue(v85, (unsigned __int8)v87->type, v87->u);
                      --_R14->top;
                    }
                    ++v82;
                  }
                  while ( v82 < v81 );
                }
LABEL_186:
                v13 = v638;
$CheckClearParams_Debugger:
                v95 = _R14->top;
                if ( v95->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6212, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v95 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
                v96 = _R14->top;
                if ( v96->type == VAR_PRECODEPOS )
                {
                  if ( Scr_CheckIfObjectsOrVariablesExceededDeveloperLimits(v13) )
                  {
                    Scr_ErrorOnObjectsOrVariablesExceededDeveloperLimits(v13);
                    v96 = _R14->top;
                  }
                  v96->type = VAR_CODEPOS;
                }
                else
                {
                  if ( !v13->m_varPub.error_message )
                  {
                    Core_strcpy_truncate(error_message, 0x400ui64, "function called with too many parameters");
                    v13->m_varPub.error_message = error_message;
                  }
                  Scr_ErrorInternal(v13);
$LN1620:
                  ++_R15;
                }
                break;
              default:
                *((_BYTE *)p_localVars + 35387) = 1;
                v124 = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
                v125 = j_va("CODE ERROR: unknown opcode %d", (unsigned int)v25);
                RuntimeError(v13, (const ScriptCodePos)v124, 0, v125, NULL);
                break;
            }
            v51 = (unsigned __int8)*_R15++;
            pos = _R15;
LABEL_323:
            LODWORD(v25) = v51;
            v649 = v51;
            v647 = v51;
            opcode = v51;
            v126 = Scr_SkipIntructions(v13);
            _RDI = v644;
          }
          while ( v126 );
        }
        ScriptCodePos::SetVarUsagePos(&_RDI->varUsagePos, _R15);
        if ( (unsigned int)v25 > 0xBD )
          goto LABEL_325;
        goto $interrupt_return;
      case 166:
        v280 = *_R15;
        v281 = 0;
        ++_R15;
        if ( !v280 )
          goto LABEL_714;
        v282 = v638;
        do
        {
          ++*p_localVars;
          ++_R14->localVarCount;
          v283 = *(unsigned __int16 *)_R15;
          _R15 += 2;
          ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
          **p_localVars = GetNewVariable(v282, _R14->localId, v283);
          v284 = _R14->top;
          if ( v284->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3214, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v284 - (char *)p_localVars - 2616) >> 4) )
            __debugbreak();
          v285 = _R14->top;
          if ( v285->type != VAR_PRECODEPOS )
          {
            SetVariableValue(v282, **p_localVars, v285);
            --_R14->top;
          }
          ++v281;
        }
        while ( v281 < v280 );
        goto LABEL_713;
      case 167:
        v446 = _R14->top;
        v447 = v446->type;
        if ( v447 == VAR_POINTER )
        {
          v448 = (unsigned __int8)GetObjectType(v13, v446->u.intValue);
          if ( (unsigned int)v448 < 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2182, ASSERT_TYPE_ASSERT, "(localType >= VAR_FIRST_OBJECT)", (const char *)&queryFormat, "localType >= VAR_FIRST_OBJECT") )
            __debugbreak();
          RemoveRefToValue(v13, (unsigned __int8)v446->type, v446->u);
          v446->type = VAR_INTEGER;
          v446->u.intValue = v448 < 25 && v448 != 22 && v448;
        }
        else
        {
          v449 = (unsigned __int8)v447;
          if ( (unsigned __int8)v447 >= VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2190, ASSERT_TYPE_ASSERT, "(localType < VAR_FIRST_OBJECT)", (const char *)&queryFormat, "localType < VAR_FIRST_OBJECT") )
            __debugbreak();
          RemoveRefToValue(v13, (unsigned __int8)v446->type, v446->u);
          v446->type = VAR_INTEGER;
          v446->u.intValue = v449 != 0;
        }
        continue;
      case 168:
        v450 = _R14->top;
        v451 = v450->type;
        if ( v451 == VAR_POINTER )
        {
          v452 = (unsigned __int8)GetObjectType(v13, v450->u.intValue);
          if ( (unsigned int)v452 >= 0x11 )
            goto LABEL_1041;
          v453 = "localType >= VAR_FIRST_OBJECT";
          v454 = 2211;
          v455 = "(localType >= VAR_FIRST_OBJECT)";
        }
        else
        {
          v452 = (unsigned __int8)v451;
          if ( (unsigned __int8)v451 < VAR_THREAD )
            goto LABEL_1041;
          v453 = "localType < VAR_FIRST_OBJECT";
          v454 = 2216;
          v455 = "(localType < VAR_FIRST_OBJECT)";
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", v454, ASSERT_TYPE_ASSERT, v455, (const char *)&queryFormat, v453) )
          __debugbreak();
LABEL_1041:
        v456 = v452 < 25 && v452 != 22 && v452 && Scr_IsTrue_Inline(v13, v450);
        RemoveRefToValue(v13, (unsigned __int8)v450->type, v450->u);
        v450->u.intValue = v456;
        v450->type = VAR_INTEGER;
        continue;
      case 185:
        ++*p_localVars;
        ++_R14->localVarCount;
        v239 = (unsigned __int8)*_R15++;
LABEL_611:
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        **p_localVars = GetNewVariable(v13, _R14->localId, v239);
$EvalLocalArrayRefCached:
        v240 = **p_localVars;
        id = v240;
$EvalArrayRef:
        v242 = Scr_EvalArrayRef(v13, v240);
        v243 = _R14->top;
        v244 = v242;
        parentId = v242;
        Array = v242;
        v245 = v243->type;
        if ( v245 == VAR_INTEGER )
        {
          if ( !IsValidArrayIndex(v243->u.intValue) )
          {
            v246 = j_va("array index %d out of range", _R14->top->u.intValue);
            if ( !v13->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v246);
              v13->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v13);
          }
          ArrayVariable = GetArrayVariable(v13, v244, _R14->top->u.uintValue);
          id = ArrayVariable;
        }
        else if ( v245 == VAR_STRING )
        {
          id = GetVariable(v13, v242, v243->u.intValue);
          SL_RemoveRefToString(_R14->top->u.intValue);
          ArrayVariable = id;
        }
        else
        {
          v248 = Scr_GetNameForType(v245);
          v249 = j_va("%s is not an array index", v248);
          if ( !v13->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, v249);
            v13->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v13);
          ArrayVariable = 0;
          id = 0;
        }
        v633 = 1;
        if ( ArrayVariable )
          goto $loop_dec_top;
        v250 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3013, ASSERT_TYPE_ASSERT, "( fieldValueId )", (const char *)&queryFormat, "fieldValueId");
        goto LABEL_1258;
      case 186:
        ++*p_localVars;
        ++_R14->localVarCount;
        v305 = (unsigned __int8)*_R15++;
LABEL_748:
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        **p_localVars = GetNewVariable(v13, _R14->localId, v305);
$SetLocalVariableFieldCached:
        SetVariableValue(v13, **p_localVars, _R14->top);
        --_R14->top;
        continue;
      case 187:
        ++*p_localVars;
        ++_R14->localVarCount;
        v221 = (unsigned __int8)*_R15++;
LABEL_548:
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        **p_localVars = GetNewVariable(v13, _R14->localId, v221);
        continue;
      case 188:
        ++*p_localVars;
        ++_R14->localVarCount;
        v263 = (unsigned __int8)*_R15++;
LABEL_670:
        ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
        **p_localVars = GetNewVariable(v13, _R14->localId, v263);
$SafeSetVariableFieldCached:
        v264 = _R14->top;
        if ( v264->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3133, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v264 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v265 = _R14->top;
        v27 = v631;
        if ( v265->type == VAR_PRECODEPOS )
          goto $loop_0;
        SetVariableValue(v13, **p_localVars, v265);
        --_R14->top;
        continue;
      case 189:
        v274 = *_R15;
        v275 = 0;
        ++_R15;
        if ( !v274 )
          goto LABEL_714;
        v276 = v638;
        do
        {
          ++*p_localVars;
          ++_R14->localVarCount;
          v277 = (unsigned __int8)*_R15++;
          ScriptCodePos::SetScriptPos(&_R14->pos, _R15);
          **p_localVars = GetNewVariable(v276, _R14->localId, v277);
          v278 = _R14->top;
          if ( v278->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3188, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v278 - (char *)p_localVars - 2616) >> 4) )
            __debugbreak();
          v279 = _R14->top;
          if ( v279->type != VAR_PRECODEPOS )
          {
            SetVariableValue(v276, **p_localVars, v279);
            --_R14->top;
          }
          ++v275;
        }
        while ( v275 < v274 );
LABEL_713:
        LODWORD(v25) = v647;
LABEL_714:
        v13 = v638;
$CheckClearParams:
        v286 = _R14->top;
        if ( v286->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3226, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v286 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v287 = _R14->top;
        if ( v287->type == VAR_PRECODEPOS )
        {
          if ( Scr_CheckIfObjectsOrVariablesExceededDeveloperLimits(v13) )
          {
            Scr_ErrorOnObjectsOrVariablesExceededDeveloperLimits(v13);
            v287 = _R14->top;
          }
          v287->type = VAR_CODEPOS;
        }
        else
        {
          if ( !v13->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, "function called with too many parameters");
            v13->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v13);
$LN1039:
          v288 = *p_localVars;
          v633 = 0;
          id = *v288;
        }
        continue;
      default:
LABEL_325:
        *((_BYTE *)p_localVars + 35387) = 1;
        v127 = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
        v128 = j_va("CODE ERROR: unknown opcode %d", (unsigned int)v25);
        RuntimeError(v13, (const ScriptCodePos)v127, 0, v128, NULL);
        continue;
    }
  }
}

/*
==============
VM_Execute
==============
*/
__int64 VM_Execute(scrContext_t *scrContext, unsigned int localId, ScriptCodePos codePos, unsigned int paramcount)
{
  __int64 v4; 
  ProfileScript *Profile; 
  int v9; 
  __int64 v10; 
  int function_count; 
  __int64 v13; 
  function_frame_t *function_frame; 
  unsigned int v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  const char *ScriptPos; 
  unsigned __int64 v19; 
  unsigned __int16 embeddedCount; 
  bool v22; 
  int v23; 
  __int64 top; 
  __int64 v26; 
  unsigned int m_threadCount; 
  char *killThreadCodePos; 
  char v30; 
  bool v31; 

  v4 = paramcount;
  _RDI = scrContext;
  Profile = ScriptContext_GetProfile(scrContext);
  if ( (unsigned int)v4 > _RDI->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8899, ASSERT_TYPE_ASSERT, "( paramcount <= pScrVmPub->inparamcount )", (const char *)&queryFormat, "paramcount <= pScrVmPub->inparamcount") )
    __debugbreak();
  Scr_ClearOutParams(_RDI);
  v9 = _RDI->m_vmPub.inparamcount - v4;
  v10 = (__int64)&_RDI->m_vmPub.top[-v4];
  if ( _RDI->m_vmPub.function_count >= 62 )
  {
    Scr_KillThread(_RDI, localId);
    v22 = _RDI->m_vmPub.outparamcount == 0;
    _RDI->m_vmPub.inparamcount = v9 + 1;
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9074, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
      __debugbreak();
    if ( v9 )
    {
      do
      {
        RemoveRefToValue(_RDI, (unsigned __int8)_RDI->m_vmPub.top->type, _RDI->m_vmPub.top->u);
        top = (__int64)&_RDI->m_vmPub.top[-1];
        _RDI->m_vmPub.top = (VariableValue *)top;
        --v9;
      }
      while ( v9 );
    }
    else
    {
      top = (__int64)_RDI->m_vmPub.top;
    }
    v26 = top + 16;
    _RDI->m_vmPub.top = (VariableValue *)v26;
    *(_BYTE *)(v26 + 8) = 0;
    RuntimeError(_RDI, codePos, 0, "script stack overflow (too many embedded function calls)", NULL);
    return localId;
  }
  else
  {
    __asm { vmovups ymm0, ymmword ptr [rdi+46C70h] }
    m_threadCount = _RDI->m_threadCount;
    _RDI->m_fs.localId = localId;
    _RDI->m_fs.startTop = (VariableValue *)v10;
    function_count = _RDI->m_vmPub.function_count;
    __asm { vmovups [rsp+98h+var_58], ymm0 }
    if ( function_count )
    {
      _RDI->m_vmPub.function_count = function_count + 1;
      v13 = (__int64)&_RDI->m_vmPub.function_frame[1];
      _RDI->m_vmPub.function_frame = (function_frame_t *)v13;
      *(_DWORD *)(v13 + 8) = 0;
    }
    _RDI->m_vmPub.function_frame->fs.pos.m_scriptPos = codePos.m_scriptPos;
    function_frame = _RDI->m_vmPub.function_frame;
    ++_RDI->m_vmPub.function_count;
    _RDI->m_vmPub.function_frame = ++function_frame;
    function_frame->fs.localId = localId;
    LOBYTE(function_frame) = *(_BYTE *)(v10 + 8);
    *(_BYTE *)(v10 + 8) = 8;
    _RDI->m_vmPub.inparamcount = 0;
    v30 = (char)function_frame;
    _RDI->m_fs.top = _RDI->m_vmPub.top;
    _RDI->m_fs.pos = codePos;
    _RDI->m_fs.localVarCount = 0;
    _RDI->m_threadCount = 0;
    v31 = Scr_SaveKillPos(_RDI, &killThreadCodePos);
    Scr_StartThreadExecutionTime(_RDI);
    if ( _RDI->m_varPub.bScriptProfile )
    {
      _RDI->m_vmDebugPub.builtInTime = 0i64;
      v16 = __rdtsc();
      if ( _RDI->m_varPub.bScriptUsageProfile )
      {
        v17 = __rdtsc();
        ScriptPos = ScriptCodePos::GetScriptPos(&_RDI->m_fs.pos, _RDI);
        UpdateCurrentFuncInfo(_RDI, ScriptPos, 1);
        v19 = __rdtsc();
        Profile->scrProfileCalcTimeTotal += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v17;
        ++_RDI->m_vmDebugPub.embeddedCount;
      }
      v15 = VM_Execute(_RDI);
      if ( _RDI->m_varPub.bScriptUsageProfile )
      {
        embeddedCount = _RDI->m_vmDebugPub.embeddedCount;
        if ( embeddedCount > 1u )
          _RDI->m_vmDebugPub.embeddedTime = __rdtsc() - v16;
        _RDI->m_vmDebugPub.embeddedCount = embeddedCount - 1;
      }
      else if ( !_RDI->m_vmPub.function_count )
      {
        Scr_AddProfileTime(_RDI, codePos, __rdtsc() - v16, _RDI->m_vmDebugPub.builtInTime);
      }
    }
    else
    {
      v15 = VM_Execute(_RDI);
    }
    Scr_EndThreadExecutionTime(_RDI, v15);
    Scr_RestoreKillPos(_RDI, v31, killThreadCodePos);
    __asm
    {
      vmovups ymm0, [rsp+98h+var_58]
      vmovups ymmword ptr [rdi+46C70h], ymm0
    }
    _RDI->m_threadCount = m_threadCount;
    *(_BYTE *)(v10 + 8) = v30;
    v22 = _RDI->m_vmPub.outparamcount == 0;
    _RDI->m_vmPub.top = (VariableValue *)(v10 + 16);
    _RDI->m_vmPub.inparamcount = v9 + 1;
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9059, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
      __debugbreak();
    ClearVariableValue(_RDI, _RDI->m_varPub.tempVariable);
    v23 = _RDI->m_vmPub.function_count;
    if ( v23 )
    {
      --_RDI->m_vmPub.function_frame;
      _RDI->m_vmPub.function_count = v23 - 1;
    }
    return v15;
  }
}

/*
==============
VM_Notify
==============
*/
void VM_Notify(scrContext_t *scrContext, unsigned int notifyListOwnerId, scr_string_t stringValue, VariableValue *top)
{
  VariableValue *v5; 
  scrContext_t *v6; 
  unsigned int ObjectVariable; 
  unsigned int Variable; 
  unsigned int v9; 
  unsigned int LastSibling; 
  unsigned int v11; 
  unsigned int VariableKeyObject; 
  unsigned int Self; 
  unsigned int pauseArrayId; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  VariableUnion v18; 
  const char *ScriptPos; 
  const char *v20; 
  int v21; 
  __int64 v22; 
  VariableType *p_type; 
  __int64 v24; 
  VariableType type; 
  VariableUnion v26; 
  int v27; 
  const char *v28; 
  int v29; 
  int intValue; 
  bool v31; 
  int function_count; 
  bool v33; 
  unsigned int time; 
  unsigned int timeArrayId; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int NewObjectVariable; 
  bool v39; 
  VariableValue *v40; 
  scrVmPub_t *p_m_vmPub; 
  int v42; 
  unsigned int v43; 
  _WORD *v44; 
  __int64 v45; 
  unsigned __int64 v46; 
  signed __int64 v47; 
  _DWORD *v48; 
  __int64 v49; 
  unsigned int v50; 
  int v51; 
  __int64 stringValuea; 
  __int64 v53; 
  unsigned int notifyNameListId; 
  VariableValue array; 
  void *p; 
  unsigned int notifyListId; 
  unsigned int parentId[2]; 
  VariableValue value; 
  unsigned int id[2]; 
  VariableValue v61; 

  v5 = top;
  v6 = scrContext;
  ObjectVariable = FindObjectVariable(scrContext, scrContext->m_varPub.notifyArrayId, notifyListOwnerId);
  if ( ObjectVariable )
  {
    notifyListId = FindObject(v6, ObjectVariable);
    if ( !notifyListId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8168, ASSERT_TYPE_ASSERT, "( notifyListId )", (const char *)&queryFormat, "notifyListId") )
      __debugbreak();
    Variable = FindVariable(v6, notifyListId, stringValue);
    if ( Variable )
    {
      notifyNameListId = FindObject(v6, Variable);
      v9 = notifyNameListId;
      if ( !notifyNameListId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8175, ASSERT_TYPE_ASSERT, "( notifyNameListId )", (const char *)&queryFormat, "notifyNameListId") )
        __debugbreak();
      AddRefToObject(v6, notifyNameListId);
      if ( v6->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8179, ASSERT_TYPE_ASSERT, "( !pScrVarPub->evaluate )", (const char *)&queryFormat, "!pScrVarPub->evaluate") )
        __debugbreak();
      v6->m_varPub.evaluate = 1;
      while ( 1 )
      {
        LastSibling = FindLastSibling(v6, v9);
LABEL_14:
        v11 = LastSibling;
        if ( !LastSibling )
          break;
        VariableKeyObject = GetVariableKeyObject(v6, LastSibling);
        Self = Scr_GetSelf(v6, VariableKeyObject);
        pauseArrayId = v6->m_varPub.pauseArrayId;
        id[0] = Self;
        v15 = Self;
        v16 = FindObjectVariable(v6, pauseArrayId, Self);
        parentId[0] = FindObject(v6, v16);
        v17 = parentId[0];
        if ( GetValueType(v6, v11) )
        {
          if ( GetValueType(v6, v11) != VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8216, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, notifyListChildEntry ) == VAR_STACK )", (const char *)&queryFormat, "GetValueType( scrContext, notifyListChildEntry ) == VAR_STACK") )
            __debugbreak();
          v18 = *GetVariableValueAddress(v6, v11);
          p = (void *)v18.scriptCodePosValue;
          if ( ScriptCodePos::IsScriptPos_Generic(*(_QWORD *)v18.vectorValue) )
          {
            ScriptPos = ScriptCodePos::GetScriptPos((ScriptCodePos *)v18.vectorValue, v6);
            v20 = ScriptPos;
            if ( *(ScriptPos - 1) == 77 )
            {
              if ( *(ScriptPos - 3) != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8229, ASSERT_TYPE_ASSERT, "( *((byte *)stackValuePos - 3) == OP_waittillmatch )", (const char *)&queryFormat, "*((byte *)stackValuePos - 3) == OP_waittillmatch") )
                __debugbreak();
              v21 = *(v20 - 2);
              if ( v21 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8248, ASSERT_TYPE_ASSERT, "( size >= 0 )", (const char *)&queryFormat, "size >= 0") )
                __debugbreak();
              if ( v21 > *(unsigned __int16 *)(v18.scriptCodePosValue + 8) )
              {
                LODWORD(v53) = *(unsigned __int16 *)(v18.scriptCodePosValue + 8);
                LODWORD(stringValuea) = v21;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8249, ASSERT_TYPE_ASSERT, "( size ) <= ( stackValue->size )", "size <= stackValue->size\n\t%i, %i", stringValuea, v53) )
                  __debugbreak();
              }
              v22 = *(unsigned __int16 *)(v18.scriptCodePosValue + 8) - v21;
              p_type = &v5->type;
              v24 = v22 + v18.scriptCodePosValue + 8 * v22 + 17;
              while ( 1 )
              {
                if ( !v21 )
                {
LABEL_70:
                  v18.scriptCodePosValue = (unsigned __int64)p;
                  v33 = 1;
                  v15 = id[0];
                  goto LABEL_75;
                }
                if ( *p_type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8256, ASSERT_TYPE_ASSERT, "( currentValue->type != VAR_CODEPOS )", (const char *)&queryFormat, "currentValue->type != VAR_CODEPOS") )
                  __debugbreak();
                if ( *p_type == VAR_PRECODEPOS )
                  goto LABEL_69;
                type = *(_BYTE *)v24;
                --v21;
                array.type = type;
                if ( type == VAR_CODEPOS )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8265, ASSERT_TYPE_ASSERT, "( tempValue3.type != VAR_CODEPOS )", (const char *)&queryFormat, "tempValue3.type != VAR_CODEPOS") )
                    __debugbreak();
                  type = array.type;
                }
                if ( type == VAR_PRECODEPOS )
                  goto LABEL_70;
                v26 = *(VariableUnion *)(v24 + 1);
                v24 += 9i64;
                array.u = v26;
                AddRefToValue(v6, (unsigned __int8)type, v26);
                v27 = *(unsigned __int8 *)p_type;
                value.u.scriptCodePosValue = *((_QWORD *)p_type - 1);
                value.type = v27;
                AddRefToValue(v6, v27, value.u);
                if ( array.type == VAR_UNDEFINED )
                  break;
                if ( array.type == VAR_POINTER && LOBYTE(v6->m_varGlob.objectVariableValue[array.u.uintValue].w.type) == 24 )
                {
                  if ( value.type != VAR_POINTER )
                  {
                    v29 = Scr_EvalEqualAny(v6, &array, &value);
                    RemoveRefToObject(v6, array.u.uintValue);
                    intValue = v29;
                    array.u.intValue = v29;
                    array.type = VAR_INTEGER;
                    if ( (unsigned __int8)(value.type - 2) <= 1u )
                    {
                      SL_RemoveRefToString((scr_string_t)value.u.intValue);
                    }
                    else
                    {
                      if ( value.type != VAR_VECTOR )
                        goto LABEL_63;
                      RemoveRefToVector(v6, value.u.vectorValue);
                    }
                    goto LABEL_61;
                  }
                }
                else if ( value.type != VAR_POINTER )
                {
                  goto LABEL_60;
                }
                if ( LOBYTE(v6->m_varGlob.objectVariableValue[value.u.uintValue].w.type) != 24 || array.type == VAR_POINTER )
                {
LABEL_60:
                  Scr_EvalEquality(v6, &array, &value);
LABEL_61:
                  if ( array.type != VAR_INTEGER )
                  {
                    if ( !v6->m_varPub.error_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8325, ASSERT_TYPE_ASSERT, "( pScrVarPub->error_message )", (const char *)&queryFormat, "pScrVarPub->error_message") )
                      __debugbreak();
                    function_count = v6->m_vmPub.function_count;
                    v6->m_vmPub.function_count = 0;
                    RuntimeError(v6, *(const ScriptCodePos *)p, 0, v6->m_varPub.error_message, v6->m_vmGlob.dialog_error_message);
                    v6->m_vmPub.function_count = function_count;
                    v6->m_varPub.error_message = NULL;
                    v6->m_vmGlob.dialog_error_message = NULL;
                    v6->m_varPub.error_index = 0;
LABEL_69:
                    LastSibling = FindPrevSibling(v6, v11);
                    v5 = top;
                    goto LABEL_14;
                  }
                  intValue = array.u.intValue;
                  goto LABEL_63;
                }
                v31 = Scr_EvalEqualAny(v6, &value, &array);
                RemoveRefToObject(v6, value.u.uintValue);
                if ( (unsigned __int8)(array.type - 2) <= 1u )
                {
                  SL_RemoveRefToString((scr_string_t)array.u.intValue);
                }
                else if ( array.type == VAR_VECTOR )
                {
                  RemoveRefToVector(v6, array.u.vectorValue);
                  intValue = v31;
                  array.u.intValue = v31;
                  array.type = VAR_INTEGER;
                  goto LABEL_63;
                }
                intValue = v31;
                array.u.intValue = v31;
                array.type = VAR_INTEGER;
LABEL_63:
                if ( !intValue )
                  goto LABEL_69;
                p_type -= 16;
              }
              v28 = j_va("thread %d is stuck in waittillmatch on undefined argument!", VariableKeyObject);
              if ( !v6->m_varPub.error_message )
              {
                Core_strcpy_truncate(error_message, 0x400ui64, v28);
                v6->m_varPub.error_message = error_message;
              }
              Scr_ErrorInternal(v6);
              goto LABEL_61;
            }
          }
          if ( v5->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8347, ASSERT_TYPE_ASSERT, "( top->type != VAR_CODEPOS )", (const char *)&queryFormat, "top->type != VAR_CODEPOS") )
            __debugbreak();
          v33 = v5->type == VAR_PRECODEPOS;
LABEL_75:
          time = v6->m_varPub.time;
          timeArrayId = v6->m_varPub.timeArrayId;
          v61.type = VAR_STACK;
          v61.u = v18;
          v36 = GetVariable(v6, timeArrayId, time);
          v37 = GetArray(v6, v36);
          NewObjectVariable = GetNewObjectVariable(v6, v37, VariableKeyObject);
          SetNewVariableValue(v6, NewObjectVariable, &v61);
          *(_QWORD *)id = GetVariableValueAddress(v6, NewObjectVariable);
          VM_CancelNotifyInternal(v6, notifyListOwnerId, VariableKeyObject, notifyListId, notifyNameListId, stringValue);
          RemoveObjectVariable(v6, parentId[0], VariableKeyObject);
          if ( !GetArraySize(v6, parentId[0]) )
            RemoveObjectVariable(v6, v6->m_varPub.pauseArrayId, v15);
          Scr_SetThreadWaitTime(v6, VariableKeyObject, v6->m_varPub.time);
          v9 = notifyNameListId;
          v39 = !v33;
          v5 = top;
          if ( v39 )
          {
            v40 = top;
            p_m_vmPub = &v6->m_vmPub;
            if ( top->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8374, ASSERT_TYPE_ASSERT, "( ( top->type != VAR_PRECODEPOS ) )", "%s\n\t( top - pScrVmPub->stack ) = 0x%llx", "( top->type != VAR_PRECODEPOS )", ((char *)top - (char *)p_m_vmPub - 2616) >> 4) )
              __debugbreak();
            if ( top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8375, ASSERT_TYPE_ASSERT, "( ( top->type != VAR_CODEPOS ) )", "%s\n\t( top - pScrVmPub->stack ) = 0x%llx", "( top->type != VAR_CODEPOS )", ((char *)top - (char *)p_m_vmPub - 2616) >> 4) )
              __debugbreak();
            parentId[0] = *(unsigned __int16 *)(v18.scriptCodePosValue + 8);
            v42 = parentId[0];
            do
            {
              --v40;
              ++v42;
              if ( v40->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8385, ASSERT_TYPE_ASSERT, "( ( currentValue->type != VAR_CODEPOS ) )", "%s\n\t( currentValue - pScrVmPub->stack ) = 0x%llx", "( currentValue->type != VAR_CODEPOS )", (__int64)(&v40[-164].type - (_QWORD)p_m_vmPub) >> 4) )
                __debugbreak();
            }
            while ( v40->type != VAR_PRECODEPOS );
            v6 = scrContext;
            v43 = parentId[0];
            if ( (unsigned int)v42 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8388, ASSERT_TYPE_ASSERT, "( newSize >= 0 && newSize < (1 << 16) )", (const char *)&queryFormat, "newSize >= 0 && newSize < (1 << 16)") )
              __debugbreak();
            v44 = p;
            v45 = 9 * v43;
            v46 = *((unsigned __int16 *)p + 5);
            v47 = 9i64 * v42 + 17;
            *(_QWORD *)parentId = v47;
            if ( !MT_Realloc(v46, v47) )
            {
              v44 = MT_Alloc(9i64 * v42 + 17, 1);
              if ( v47 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8397, ASSERT_TYPE_ASSERT, "( bufLen <= 0xffffui16 )", (const char *)&queryFormat, "bufLen <= UINT16_MAX") )
                __debugbreak();
              v48 = p;
              v44[5] = v47;
              *(_QWORD *)v44 = *(_QWORD *)v48;
              *((_DWORD *)v44 + 3) = v48[3];
              memcpy_0((char *)v44 + 17, (char *)v48 + 17, (unsigned int)v45);
              MT_Free(p, *((unsigned __int16 *)p + 5));
              p = v44;
              **(_QWORD **)id = v44;
            }
            if ( v42 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8409, ASSERT_TYPE_ASSERT, "( newSize <= 0xffffui16 )", (const char *)&queryFormat, "newSize <= UINT16_MAX") )
              __debugbreak();
            v44[4] = v42;
            v49 = (__int64)v44 + v45 + 17;
            v50 = v42 - v43;
            if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8415, ASSERT_TYPE_ASSERT, "( newSize )", (const char *)&queryFormat, "newSize") )
              __debugbreak();
            do
            {
              v51 = (unsigned __int8)v40[1].type;
              ++v40;
              AddRefToValue(scrContext, v51, v40->u);
              if ( v40->type >= VAR_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8421, ASSERT_TYPE_ASSERT, "( (unsigned)currentValue->type < VAR_COUNT )", (const char *)&queryFormat, "(unsigned)currentValue->type < VAR_COUNT") )
                __debugbreak();
              *(_BYTE *)v49 = v40->type;
              *(_QWORD *)(v49 + 1) = v40->u.scriptCodePosValue;
              v49 += 9i64;
              --v50;
            }
            while ( v50 );
            v39 = v49 - (_QWORD)p == *(_QWORD *)parentId;
            v5 = top;
            v9 = notifyNameListId;
            if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8429, ASSERT_TYPE_ASSERT, "( buf - (const char *)stackValue == bufLen )", (const char *)&queryFormat, "buf - (const char *)stackValue == bufLen") )
              __debugbreak();
          }
        }
        else
        {
          VM_CancelNotifyInternal(v6, notifyListOwnerId, VariableKeyObject, notifyListId, notifyNameListId, stringValue);
          Scr_KillEndonThread(v6, VariableKeyObject);
          RemoveObjectVariable(v6, v17, VariableKeyObject);
          if ( !GetArraySize(v6, v17) )
            RemoveObjectVariable(v6, v6->m_varPub.pauseArrayId, v15);
          Scr_TerminateThread(v6, v15);
          v9 = notifyNameListId;
        }
      }
      RemoveRefToObject(v6, notifyNameListId);
      if ( !v6->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8435, ASSERT_TYPE_ASSERT, "( pScrVarPub->evaluate )", (const char *)&queryFormat, "pScrVarPub->evaluate") )
        __debugbreak();
      v6->m_varPub.evaluate = 0;
    }
  }
}

/*
==============
VM_Resume
==============
*/
void VM_Resume(scrContext_t *scrContext, unsigned int timeId)
{
  VariableValue *stack; 
  ProfileScript *v7; 
  unsigned int FirstSibling; 
  unsigned int v10; 
  unsigned int VariableKeyObject; 
  const VariableStackBuffer *scriptCodePosValue; 
  unsigned int v13; 
  ScriptCodePos v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  const char *ScriptPos; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  ProfileScript *Profile; 

  __asm { vmovaps [rsp+68h+var_38], xmm6 }
  _RSI = scrContext;
  stack = scrContext->m_vmPub.stack;
  Profile = ScriptContext_GetProfile(scrContext);
  v7 = Profile;
  if ( _RSI->m_vmPub.top != _RSI->m_vmPub.stack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8703, ASSERT_TYPE_ASSERT, "( pScrVmPub->top == pScrVmPub->stack )", (const char *)&queryFormat, "pScrVmPub->top == pScrVmPub->stack") )
    __debugbreak();
  Scr_ResetAbortDebugger(_RSI);
  Scr_ResetTimeout(_RSI);
  if ( !timeId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8711, ASSERT_TYPE_ASSERT, "( timeId )", (const char *)&queryFormat, "timeId") )
    __debugbreak();
  AddRefToObject(_RSI, timeId);
  __asm { vmovsd  xmm6, cs:__real@43f0000000000000 }
  _RSI->m_fs.startTop = stack;
  _RSI->m_threadCount = 0;
  while ( 1 )
  {
    if ( _RSI->m_varPub.error_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8722, ASSERT_TYPE_ASSERT, "( !pScrVarPub->error_message )", (const char *)&queryFormat, "!pScrVarPub->error_message") )
      __debugbreak();
    if ( _RSI->m_varPub.error_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8723, ASSERT_TYPE_ASSERT, "( !pScrVarPub->error_index )", (const char *)&queryFormat, "!pScrVarPub->error_index") )
      __debugbreak();
    if ( _RSI->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8725, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
      __debugbreak();
    if ( _RSI->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8726, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
      __debugbreak();
    if ( _RSI->m_vmPub.function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8727, ASSERT_TYPE_ASSERT, "( !pScrVmPub->function_count )", (const char *)&queryFormat, "!pScrVmPub->function_count") )
      __debugbreak();
    if ( (int *)_RSI->m_vmPub.localVars != &_RSI->m_vmGlob.starttime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8728, ASSERT_TYPE_ASSERT, "( pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1 )", (const char *)&queryFormat, "pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1") )
      __debugbreak();
    if ( _RSI->m_fs.startTop != stack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8729, ASSERT_TYPE_ASSERT, "( pFs->startTop == &pScrVmPub->stack[0] )", (const char *)&queryFormat, "pFs->startTop == &pScrVmPub->stack[0]") )
      __debugbreak();
    if ( _RSI->m_threadCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8730, ASSERT_TYPE_ASSERT, "( !scrContext.m_threadCount )", (const char *)&queryFormat, "!scrContext.m_threadCount") )
      __debugbreak();
    if ( _RSI->m_threadProfileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8732, ASSERT_TYPE_ASSERT, "( !scrContext.m_threadProfileCount )", (const char *)&queryFormat, "!scrContext.m_threadProfileCount") )
      __debugbreak();
    FirstSibling = FindFirstSibling(_RSI, timeId);
    v10 = FirstSibling;
    if ( !FirstSibling )
      break;
    if ( GetValueType(_RSI, FirstSibling) == VAR_UNDEFINED )
      goto LABEL_64;
    VariableKeyObject = GetVariableKeyObject(_RSI, v10);
    if ( !VariableKeyObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8747, ASSERT_TYPE_ASSERT, "( startLocalId )", (const char *)&queryFormat, "startLocalId") )
      __debugbreak();
    if ( GetValueType(_RSI, v10) != VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8749, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, stackId ) == VAR_STACK )", (const char *)&queryFormat, "GetValueType( scrContext, stackId ) == VAR_STACK") )
      __debugbreak();
    scriptCodePosValue = (const VariableStackBuffer *)GetVariableValueAddress(_RSI, v10)->scriptCodePosValue;
    RemoveNextVariable(_RSI, timeId);
    VM_UnarchiveStack(_RSI, VariableKeyObject, scriptCodePosValue);
    Scr_StartThreadExecutionTime(_RSI);
    if ( _RSI->m_errorLevel < 0 )
      _RSI->m_runThreadsTimeStart = __rdtsc();
    if ( _RSI->m_varPub.bScriptProfile )
    {
      _RSI->m_vmDebugPub.builtInTime = 0i64;
      v14.m_scriptPos = _RSI->m_fs.pos.m_scriptPos;
      v15 = __rdtsc();
      if ( _RSI->m_varPub.bScriptUsageProfile )
      {
        ++v7->scrProfileScriptThreadResumeCount;
        v16 = __rdtsc();
        ScriptPos = ScriptCodePos::GetScriptPos(&_RSI->m_fs.pos, _RSI);
        UpdateCurrentFuncInfo(_RSI, ScriptPos, 0);
        v18 = __rdtsc();
        v19 = (((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) - v16;
        v7 = Profile;
        Profile->scrProfileCalcTimeTotal += v19;
        _RSI->m_vmDebugPub.embeddedCount = 1;
      }
      if ( _RSI->m_varPub.vmExecuting == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1494, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.vmExecuting < 0xffffffff )", (const char *)&queryFormat, "scrContext.m_varPub.vmExecuting < UINT_MAX") )
        __debugbreak();
      ++_RSI->m_varPub.vmExecuting;
      _RSI->m_varPub.vmThreadContext = Sys_GetCurrentThreadContext();
      v20 = VM_Execute(_RSI);
      RemoveRefToObject(_RSI, v20);
      RemoveRefToValue(_RSI, (unsigned __int8)_RSI->m_vmPub.stack[1].type, _RSI->m_vmPub.stack[1].u);
      Scr_VM_LeaveExecuteBlock(_RSI);
      if ( _RSI->m_varPub.bScriptUsageProfile )
        _RSI->m_vmDebugPub.embeddedCount = 0;
      else
        Scr_AddProfileTime(_RSI, v14, __rdtsc() - v15, _RSI->m_vmDebugPub.builtInTime);
    }
    else
    {
      if ( _RSI->m_varPub.vmExecuting == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1494, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.vmExecuting < 0xffffffff )", (const char *)&queryFormat, "scrContext.m_varPub.vmExecuting < UINT_MAX") )
        __debugbreak();
      ++_RSI->m_varPub.vmExecuting;
      _RSI->m_varPub.vmThreadContext = Sys_GetCurrentThreadContext();
      v13 = VM_Execute(_RSI);
      RemoveRefToObject(_RSI, v13);
      RemoveRefToValue(_RSI, (unsigned __int8)_RSI->m_vmPub.stack[1].type, _RSI->m_vmPub.stack[1].u);
      Scr_VM_LeaveExecuteBlock(_RSI);
    }
    if ( _RSI->m_errorLevel < 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( (__int64)(__rdtsc() - _RSI->m_runThreadsTimeStart) < 0 )
        __asm { vaddsd  xmm0, xmm0, xmm6 }
      __asm
      {
        vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vcvtsd2ss xmm1, xmm0, xmm0
        vaddss  xmm2, xmm1, dword ptr [rsi+0DF080h]
        vmovss  dword ptr [rsi+0DF080h], xmm2
      }
    }
    Scr_EndThreadExecutionTime(_RSI, VariableKeyObject);
  }
  SafeRemoveVariable(_RSI, _RSI->m_varPub.timeArrayId, _RSI->m_varPub.time);
LABEL_64:
  RemoveRefToObject(_RSI, timeId);
  ClearVariableValue(_RSI, _RSI->m_varPub.tempVariable);
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
  _RSI->m_vmPub.top = stack;
}

/*
==============
VM_TerminateStack
==============
*/
void VM_TerminateStack(scrContext_t *scrContext, unsigned int endLocalId, unsigned int startLocalId, VariableStackBuffer *stackValue)
{
  unsigned int v5; 
  __int64 size; 
  unsigned int localId; 
  char *v9; 
  unsigned __int64 v10; 
  int v11; 
  unsigned int ParentLocalId; 
  unsigned int time; 
  unsigned int timeArrayId; 
  unsigned int Variable; 
  unsigned int Array; 
  unsigned int NewObjectVariable; 
  VariableValue value; 
  unsigned int v19; 

  v19 = endLocalId;
  v5 = startLocalId;
  if ( !startLocalId )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7604, ASSERT_TYPE_ASSERT, "( startLocalId )", (const char *)&queryFormat, "startLocalId") )
      __debugbreak();
    endLocalId = v19;
  }
  size = stackValue->size;
  localId = stackValue->localId;
  v9 = &stackValue->buf[8 * size + size];
  if ( !stackValue->size )
  {
LABEL_12:
    if ( localId != endLocalId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7658, ASSERT_TYPE_ASSERT, "( localId == endLocalId )", (const char *)&queryFormat, "localId == endLocalId") )
      __debugbreak();
    if ( v5 != localId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7659, ASSERT_TYPE_ASSERT, "( startLocalId == localId )", (const char *)&queryFormat, "startLocalId == localId") )
      __debugbreak();
    Scr_KillThread(scrContext, localId);
    RemoveRefToObject(scrContext, localId);
    --scrContext->m_varPub.numScriptThreads;
    MT_Free(stackValue, stackValue->bufLen);
    return;
  }
  while ( 1 )
  {
    v10 = *((_QWORD *)v9 - 1);
    v9 -= 9;
    v11 = size;
    LODWORD(size) = size - 1;
    if ( *v9 == 7 )
      break;
    RemoveRefToValue(scrContext, (unsigned __int8)*v9, (VariableUnion)v10);
    endLocalId = v19;
LABEL_10:
    if ( !(_DWORD)size )
    {
      v5 = startLocalId;
      goto LABEL_12;
    }
  }
  ParentLocalId = GetParentLocalId(scrContext, localId);
  Scr_KillThread(scrContext, localId);
  RemoveRefToObject(scrContext, localId);
  endLocalId = v19;
  if ( localId != v19 )
  {
    localId = ParentLocalId;
    goto LABEL_10;
  }
  if ( startLocalId == localId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7636, ASSERT_TYPE_ASSERT, "( startLocalId != localId )", (const char *)&queryFormat, "startLocalId != localId") )
    __debugbreak();
  *v9 = 0;
  if ( stackValue->size < v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7641, ASSERT_TYPE_ASSERT, "( stackValue->size >= size )", (const char *)&queryFormat, "stackValue->size >= size") )
    __debugbreak();
  Scr_SetThreadWaitTime(scrContext, startLocalId, scrContext->m_varPub.time);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7644, ASSERT_TYPE_ASSERT, "( u.scriptCodePosValue )", (const char *)&queryFormat, "u.scriptCodePosValue") )
    __debugbreak();
  stackValue->codePos.m_genericPos = v10;
  stackValue->localId = ParentLocalId;
  stackValue->size = v11;
  time = scrContext->m_varPub.time;
  timeArrayId = scrContext->m_varPub.timeArrayId;
  value.type = VAR_STACK;
  value.u.scriptCodePosValue = (unsigned __int64)stackValue;
  Variable = GetVariable(scrContext, timeArrayId, time);
  Array = GetArray(scrContext, Variable);
  NewObjectVariable = GetNewObjectVariable(scrContext, Array, startLocalId);
  SetNewVariableValue(scrContext, NewObjectVariable, &value);
}

/*
==============
VM_TrimStack
==============
*/
void VM_TrimStack(scrContext_t *scrContext, unsigned int startLocalId, VariableStackBuffer *stackValue, bool fromEndon)
{
  bool v4; 
  __int64 size; 
  unsigned int localId; 
  char *v10; 
  unsigned __int64 v11; 
  unsigned int ParentLocalId; 
  const char *m_scriptPos; 
  unsigned int objectStackId; 
  unsigned int NewObjectVariable; 
  VariableValue value; 

  v4 = fromEndon;
  if ( !startLocalId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7741, ASSERT_TYPE_ASSERT, "( startLocalId )", (const char *)&queryFormat, "startLocalId") )
    __debugbreak();
  size = stackValue->size;
  localId = stackValue->localId;
  v10 = &stackValue->buf[8 * size + size];
  if ( !stackValue->size )
  {
LABEL_11:
    if ( startLocalId != localId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7806, ASSERT_TYPE_ASSERT, "( startLocalId == localId )", (const char *)&queryFormat, "startLocalId == localId") )
      __debugbreak();
    if ( v4 )
      RemoveObjectVariable(scrContext, scrContext->m_varPub.objectStackId, startLocalId);
    Scr_KillThread(scrContext, startLocalId);
    RemoveRefToObject(scrContext, startLocalId);
    --scrContext->m_varPub.numScriptThreads;
    MT_Free(stackValue, stackValue->bufLen);
    return;
  }
  while ( 1 )
  {
    v11 = *((_QWORD *)v10 - 1);
    v10 -= 9;
    LODWORD(size) = size - 1;
    if ( *v10 == 7 )
      break;
    RemoveRefToValue(scrContext, (unsigned __int8)*v10, (VariableUnion)v11);
LABEL_9:
    if ( !(_DWORD)size )
    {
      v4 = fromEndon;
      goto LABEL_11;
    }
  }
  if ( !FindObjectVariable(scrContext, scrContext->m_varPub.pauseArrayId, localId) )
  {
    ParentLocalId = GetParentLocalId(scrContext, localId);
    Scr_KillThread(scrContext, localId);
    RemoveRefToObject(scrContext, localId);
    localId = ParentLocalId;
    goto LABEL_9;
  }
  if ( startLocalId == localId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7767, ASSERT_TYPE_ASSERT, "( startLocalId != localId )", (const char *)&queryFormat, "startLocalId != localId") )
    __debugbreak();
  stackValue->localId = localId;
  stackValue->size = size + 1;
  Scr_StopThread(scrContext, localId);
  if ( !fromEndon )
  {
    Scr_SetThreadNotifyName(scrContext, startLocalId, (scr_string_t)0);
    m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
    objectStackId = scrContext->m_varPub.objectStackId;
    value.type = VAR_STACK;
    value.u.scriptCodePosValue = (unsigned __int64)stackValue;
    scrContext->m_varPub.varUsagePos.m_genericPos = v11;
    NewObjectVariable = GetNewObjectVariable(scrContext, objectStackId, startLocalId);
    SetNewVariableValue(scrContext, NewObjectVariable, &value);
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  }
}

/*
==============
VM_UnarchiveStack
==============
*/
void VM_UnarchiveStack(scrContext_t *scrContext, unsigned int startLocalId, const VariableStackBuffer *stackValue)
{
  bool v3; 
  VariableValue *stack; 
  char *buf; 
  int size; 
  char v11; 
  unsigned int localId; 
  __int64 function_count; 
  signed int v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  unsigned int *p_localId; 
  unsigned int ParentLocalId; 
  int v20; 
  unsigned int *p_localVarCount; 
  unsigned int *localVars; 
  signed int v23; 
  unsigned int i; 
  unsigned int *v25; 
  unsigned int j; 
  unsigned __int64 pos; 

  v3 = scrContext->m_vmPub.function_count == 0;
  pos = stackValue->codePos.m_genericPos;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7472, ASSERT_TYPE_ASSERT, "( !pScrVmPub->function_count )", (const char *)&queryFormat, "!pScrVmPub->function_count") )
    __debugbreak();
  if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7473, ASSERT_TYPE_ASSERT, "( codePos.m_genericPos )", (const char *)&queryFormat, "codePos.m_genericPos") )
    __debugbreak();
  stack = scrContext->m_vmPub.stack;
  if ( scrContext->m_fs.startTop != scrContext->m_vmPub.stack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7474, ASSERT_TYPE_ASSERT, "( pFs->startTop == &pScrVmPub->stack[0] )", (const char *)&queryFormat, "pFs->startTop == &pScrVmPub->stack[0]") )
    __debugbreak();
  if ( ScriptCodePos::IsScriptPos_Generic(pos) )
  {
    _RAX = ScriptCodePos::GetScriptPos((ScriptCodePos *)&pos, scrContext);
    __asm { prefetcht0 byte ptr [rax] }
  }
  buf = stackValue->buf;
  scrContext->m_vmPub.function_frame->fs.pos.m_scriptPos = (const char *)pos;
  ++scrContext->m_vmPub.function_count;
  ++scrContext->m_vmPub.function_frame;
  size = stackValue->size;
  if ( stackValue->size )
  {
    do
    {
      v11 = *buf;
      ++stack;
      --size;
      stack->type = *buf;
      if ( v11 == 7 )
      {
        if ( scrContext->m_vmPub.function_count >= 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7512, ASSERT_TYPE_ASSERT, "( pScrVmPub->function_count < MAX_VM_STACK_DEPTH )", (const char *)&queryFormat, "pScrVmPub->function_count < MAX_VM_STACK_DEPTH") )
          __debugbreak();
        scrContext->m_vmPub.function_frame->fs.pos.m_scriptPos = *(const char **)(buf + 1);
        ++scrContext->m_vmPub.function_count;
        ++scrContext->m_vmPub.function_frame;
      }
      else
      {
        stack->u.scriptCodePosValue = *(_QWORD *)(buf + 1);
      }
      buf += 9;
    }
    while ( size );
  }
  scrContext->m_fs.pos.m_genericPos = pos;
  scrContext->m_fs.top = stack;
  localId = stackValue->localId;
  scrContext->m_fs.localId = localId;
  Scr_ClearWaitTime(scrContext, startLocalId);
  if ( scrContext->m_vmPub.function_count >= 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7532, ASSERT_TYPE_ASSERT, "( pScrVmPub->function_count < MAX_VM_STACK_DEPTH )", (const char *)&queryFormat, "pScrVmPub->function_count < MAX_VM_STACK_DEPTH") )
    __debugbreak();
  function_count = scrContext->m_vmPub.function_count;
  v14 = 0;
  v15 = function_count;
  v16 = function_count - 1;
  v17 = v16;
  scrContext->m_vmPub.function_frame_start[v15].fs.localId = localId;
  if ( v16 )
  {
    v16 = 0;
    p_localId = &scrContext->m_vmPub.function_frame_start[v17].fs.localId;
    do
    {
      ParentLocalId = GetParentLocalId(scrContext, localId);
      *p_localId = ParentLocalId;
      p_localId -= 10;
      localId = ParentLocalId;
      --v17;
    }
    while ( v17 );
  }
  v20 = v16 + 1;
  if ( v20 != scrContext->m_vmPub.function_count )
  {
    p_localVarCount = &scrContext->m_vmPub.function_frame_start[v20].fs.localVarCount;
    do
    {
      localVars = scrContext->m_vmPub.localVars;
      v23 = 0;
      for ( i = FindLastSibling(scrContext, *(p_localVarCount - 1)); i; i = FindPrevSibling(scrContext, i) )
      {
        *++localVars = i;
        ++v23;
      }
      ++v20;
      scrContext->m_vmPub.localVars += v23;
      *p_localVarCount = v23;
      p_localVarCount += 10;
    }
    while ( v20 != scrContext->m_vmPub.function_count );
  }
  v25 = scrContext->m_vmPub.localVars;
  for ( j = FindLastSibling(scrContext, scrContext->m_fs.localId); j; j = FindPrevSibling(scrContext, j) )
  {
    *++v25 = j;
    ++v14;
  }
  scrContext->m_vmPub.localVars += v14;
  scrContext->m_fs.localVarCount = v14;
  if ( stackValue->time != (unsigned __int8)scrContext->m_varPub.time )
    Scr_ResetTimeout(scrContext);
  --scrContext->m_varPub.numScriptThreads;
  MT_Free((void *)stackValue, stackValue->bufLen);
  if ( scrContext->m_vmPub.stack[0].type != VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 7578, ASSERT_TYPE_ASSERT, "( pScrVmPub->stack[0].type == VAR_CODEPOS )", (const char *)&queryFormat, "pScrVmPub->stack[0].type == VAR_CODEPOS") )
    __debugbreak();
}

