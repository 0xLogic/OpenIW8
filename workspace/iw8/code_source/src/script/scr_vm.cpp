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
  VariableUnion v13; 
  VariableValue result; 

  v6 = ScriptContext_Server();
  if ( !objectId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10507, ASSERT_TYPE_ASSERT, "( objectId )", (const char *)&queryFormat, "objectId") )
    __debugbreak();
  if ( v6->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10508, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( v6->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10509, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  if ( !val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10510, ASSERT_TYPE_ASSERT, "( val )", (const char *)&queryFormat, "val") )
    __debugbreak();
  top = v6->m_vmPub.top;
  VariableField = Scr_FindVariableField(&result, v6, objectId, name);
  v9 = v6->m_vmPub.inparamcount == 0;
  u = VariableField->u;
  type = VariableField->type;
  v13 = VariableField->u;
  v6->m_vmPub.top = top;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10518, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  if ( v6->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 10519, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  if ( type == VAR_FLOAT )
  {
    *val = v13.floatValue;
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
  __int64 v5; 
  ProfileScript *Profile; 
  ScriptCodePos v10; 
  bool v11; 
  const char *m_scriptPos; 
  const char *ScriptPos; 
  const char *v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int128 v19; 
  __int128 v21; 
  unsigned __int64 v23; 
  const char *VarUsagePos; 
  unsigned __int64 v25; 
  ScriptCodePos v26; 
  ScriptCodePos codePos; 

  v5 = handle;
  Profile = ScriptContext_GetProfile(scrContext);
  _RBX = &scrContext->m_varPub.programBuffer[v5];
  __asm { prefetcht0 byte ptr [rbx] }
  if ( !Scr_IsInOpcodeMemory(scrContext, _RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9105, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, pos )") )
    __debugbreak();
  v10.m_scriptPos = ScriptCodePos::CreateScriptPos(_RBX).m_scriptPos;
  v11 = scrContext->m_vmPub.function_count == 0;
  codePos.m_scriptPos = v10.m_scriptPos;
  if ( v11 )
  {
    if ( (int *)scrContext->m_vmPub.localVars != &scrContext->m_vmGlob.starttime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9531, ASSERT_TYPE_ASSERT, "( pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1 )", (const char *)&queryFormat, "pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1") )
      __debugbreak();
    Profile_Begin(466);
    Scr_ResetTimeout(scrContext);
  }
  if ( !scrContext->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9542, ASSERT_TYPE_ASSERT, "( pScrVarPub->timeArrayId )", (const char *)&queryFormat, "pScrVarPub->timeArrayId") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9543, ASSERT_TYPE_ASSERT, "( handle )", (const char *)&queryFormat, "handle") )
    __debugbreak();
  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  if ( ScriptCodePos::IsScriptPos(&codePos) )
  {
    ScriptPos = ScriptCodePos::GetScriptPos(&codePos, scrContext);
    ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, ScriptPos + 1);
  }
  else
  {
    scrContext->m_varPub.varUsagePos = codePos;
  }
  if ( scrContext->m_errorLevel < 0 )
    scrContext->m_runThreadsTimeStart = __rdtsc();
  Scr_VM_EnterExecuteBlock(scrContext);
  AddRefToObject(scrContext, objId);
  v14 = codePos.m_scriptPos;
  v15 = AllocThread(scrContext, objId);
  v16 = VM_Execute(scrContext, v15, (ScriptCodePos)v14, paramcount);
  RemoveRefToObject(scrContext, v16);
  Scr_VM_LeaveExecuteBlock(scrContext);
  if ( scrContext->m_errorLevel < 0 )
  {
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(__rdtsc() - scrContext->m_runThreadsTimeStart) < 0 )
    {
      *((_QWORD *)&v19 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v19 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v19;
    }
    *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v21 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v21;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    scrContext->m_runThreadsTime = *(float *)&_XMM1 + scrContext->m_runThreadsTime;
  }
  v11 = !scrContext->m_varPub.bScriptUsageProfile;
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  if ( !v11 )
  {
    v26.m_scriptPos = m_scriptPos;
    v23 = __rdtsc();
    if ( ScriptCodePos::IsScriptPos(&v26) )
    {
      VarUsagePos = ScriptCodePos::GetVarUsagePos(&v26);
      UpdateCurrentFuncInfo(scrContext, VarUsagePos, 0);
    }
    v25 = __rdtsc();
    Profile->scrProfileCalcTimeTotal += (((unsigned __int64)HIDWORD(v25) << 32) | (unsigned int)v25) - v23;
  }
  ++scrContext->m_vmPub.outparamcount;
  --scrContext->m_vmPub.inparamcount;
  if ( !scrContext->m_vmPub.function_count )
  {
    Profile_EndInternal(NULL);
    if ( (int *)scrContext->m_vmPub.localVars != &scrContext->m_vmGlob.starttime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9598, ASSERT_TYPE_ASSERT, "( pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1 )", (const char *)&queryFormat, "pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1") )
      __debugbreak();
  }
}

/*
==============
Scr_AddFloat
==============
*/
void Scr_AddFloat(scrContext_t *scrContext, float value)
{
  VariableValue *v2; 

  v2 = IncInParam(scrContext);
  v2->u.floatValue = value;
  v2->type = VAR_FLOAT;
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
  unsigned int v2; 
  ProfileScript *Profile; 
  unsigned __int64 v4; 
  unsigned int sourceBufferLookupLen; 
  unsigned int v6; 
  unsigned __int64 srcTotal; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v20; 
  int *v24; 
  unsigned __int64 v25; 
  int _First[8]; 
  __m256i v27; 
  __m256i v28; 
  __m256i v29; 

  if ( scrContext->m_varPub.developer )
  {
    v2 = 0;
    Profile = ScriptContext_GetProfile(scrContext);
    Profile->srcTotal = 0i64;
    v4 = __rdtsc();
    if ( !scrContext->m_parserPub.sourceBufferLookupLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1768, ASSERT_TYPE_ASSERT, "( pScrParserPub->sourceBufferLookupLen > 0 )", (const char *)&queryFormat, "pScrParserPub->sourceBufferLookupLen > 0") )
      __debugbreak();
    sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
    v6 = 0;
    if ( sourceBufferLookupLen )
    {
      srcTotal = Profile->srcTotal;
      do
      {
        v8 = v6++;
        srcTotal += scrContext->m_parserPub.sourceBufferLookup[v8].allOpTotal;
        Profile->srcTotal = srcTotal;
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
        v10 = 8;
        do
        {
          _XMM0 = v2;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v2] = _XMM1;
          v2 += 16;
          _XMM0 = v10 - 4;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v10 - 4] = _XMM1;
          _XMM0 = v10;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v10] = _XMM1;
          v20 = v10 + 4;
          v10 += 16;
          _XMM0 = (unsigned int)v20;
          __asm
          {
            vpshufd xmm0, xmm0, 0
            vpaddd  xmm1, xmm0, xmm2
          }
          *(_OWORD *)&_First[v20] = _XMM1;
        }
        while ( v2 < ((unsigned int)v9 & 0xFFFFFFF0) );
      }
      if ( v2 < (unsigned int)v9 )
      {
        v24 = &_First[v2];
        do
          *v24++ = v2++;
        while ( v2 < (unsigned int)v9 );
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
    *(__m256i *)Profile->scriptSrcBufferIndex = *(__m256i *)_First;
    *(__m256i *)&Profile->scriptSrcBufferIndex[8] = v27;
    *(__m256i *)&Profile->scriptSrcBufferIndex[16] = v28;
    *(__m256i *)&Profile->scriptSrcBufferIndex[24] = v29;
    v25 = __rdtsc();
    Profile->scrProfileCalcTimeTotal += (((unsigned __int64)HIDWORD(v25) << 32) | (unsigned int)v25) - v4;
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
void Scr_DoProfile(scrContext_t *scrContext, float minTime)
{
  scrContext->m_varPub.scriptProfileMinTime = minTime;
  scrContext->m_varPub.bScriptProfile = 1;
}

/*
==============
Scr_DoProfileBuiltin
==============
*/
void Scr_DoProfileBuiltin(scrContext_t *scrContext, float minTime)
{
  scrContext->m_varPub.scriptProfileBuiltinMinTime = minTime;
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
  const char *v8; 

  if ( userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9360, ASSERT_TYPE_ASSERT, "(userData == 0)", (const char *)&queryFormat, "userData == NULL") )
    __debugbreak();
  if ( !outReturnValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9361, ASSERT_TYPE_ASSERT, "(outReturnValue)", (const char *)&queryFormat, "outReturnValue") )
    __debugbreak();
  top = scrContext->m_vmPub.top;
  type = top->type;
  if ( type == VAR_FLOAT )
  {
    *(_DWORD *)outReturnValue = top->u.intValue;
  }
  else if ( type == VAR_INTEGER )
  {
    *(float *)outReturnValue = (float)top->u.intValue;
  }
  else
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, top->u);
    scrContext->m_vmPub.top->type = VAR_UNDEFINED;
    --scrContext->m_vmPub.top;
    --scrContext->m_vmPub.inparamcount;
    NameForType = Scr_GetNameForType(type);
    v8 = j_va("Callback expected return type of number.  Provided %s.", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v8);
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
  __int64 v8; 
  ProfileScript *Profile; 
  ScriptCodePos v13; 
  bool v14; 
  const char *m_scriptPos; 
  const char *ScriptPos; 
  const char *v17; 
  unsigned int v18; 
  __int64 v19; 
  __int128 v22; 
  __int128 v24; 
  unsigned __int64 v26; 
  const char *VarUsagePos; 
  unsigned __int64 v28; 
  ScriptCodePos v30; 
  ScriptCodePos codePos; 

  v8 = handle;
  Profile = ScriptContext_GetProfile(scrContext);
  Scr_CheckThreadForInstance(scrContext->m_Instance);
  _RBX = &scrContext->m_varPub.programBuffer[v8];
  __asm { prefetcht0 byte ptr [rbx] }
  if ( !Scr_IsInOpcodeMemory(scrContext, _RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9105, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, pos )") )
    __debugbreak();
  v13.m_scriptPos = ScriptCodePos::CreateScriptPos(_RBX).m_scriptPos;
  v14 = scrContext->m_vmPub.function_count == 0;
  codePos.m_scriptPos = v13.m_scriptPos;
  if ( v14 )
  {
    if ( (int *)scrContext->m_vmPub.localVars != &scrContext->m_vmGlob.starttime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9131, ASSERT_TYPE_ASSERT, "( pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1 )", (const char *)&queryFormat, "pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1") )
      __debugbreak();
    Profile_Begin(466);
    Scr_ResetTimeout(scrContext);
  }
  if ( !scrContext->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9142, ASSERT_TYPE_ASSERT, "( pScrVarPub->timeArrayId )", (const char *)&queryFormat, "pScrVarPub->timeArrayId") )
    __debugbreak();
  if ( !(_DWORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9143, ASSERT_TYPE_ASSERT, "( handle )", (const char *)&queryFormat, "handle") )
    __debugbreak();
  ++scrContext->m_varPub.ext_threadcount;
  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  if ( ScriptCodePos::IsScriptPos(&codePos) )
  {
    ScriptPos = ScriptCodePos::GetScriptPos(&codePos, scrContext);
    ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, ScriptPos + 1);
  }
  else
  {
    scrContext->m_varPub.varUsagePos = codePos;
  }
  if ( scrContext->m_errorLevel < 0 )
    scrContext->m_runThreadsTimeStart = __rdtsc();
  Scr_VM_EnterExecuteBlock(scrContext);
  AddRefToObject(scrContext, objId);
  v17 = codePos.m_scriptPos;
  v18 = AllocThread(scrContext, objId);
  v19 = VM_Execute(scrContext, v18, (ScriptCodePos)v17, paramcount);
  Scr_VM_LeaveExecuteBlock(scrContext);
  if ( scrContext->m_errorLevel < 0 )
  {
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(__rdtsc() - scrContext->m_runThreadsTimeStart) < 0 )
    {
      *((_QWORD *)&v22 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v22 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v22;
    }
    *((_QWORD *)&v24 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v24 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v24;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    scrContext->m_runThreadsTime = *(float *)&_XMM1 + scrContext->m_runThreadsTime;
  }
  v14 = !scrContext->m_varPub.bScriptUsageProfile;
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  if ( !v14 )
  {
    v30.m_scriptPos = m_scriptPos;
    v26 = __rdtsc();
    if ( ScriptCodePos::IsScriptPos(&v30) )
    {
      VarUsagePos = ScriptCodePos::GetVarUsagePos(&v30);
      UpdateCurrentFuncInfo(scrContext, VarUsagePos, 0);
    }
    v28 = __rdtsc();
    Profile->scrProfileCalcTimeTotal += (((unsigned __int64)HIDWORD(v28) << 32) | (unsigned int)v28) - v26;
  }
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[v19];
  if ( callback )
    callback(scrContext, cbUserData, outReturnValue);
  RemoveRefToValue(scrContext, (unsigned __int8)scrContext->m_vmPub.top->type, scrContext->m_vmPub.top->u);
  scrContext->m_vmPub.top->type = VAR_UNDEFINED;
  --scrContext->m_vmPub.top;
  --scrContext->m_vmPub.inparamcount;
  if ( !scrContext->m_vmPub.function_count )
  {
    Profile_EndInternal(NULL);
    if ( (int *)scrContext->m_vmPub.localVars != &scrContext->m_vmGlob.starttime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9216, ASSERT_TYPE_ASSERT, "( pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1 )", (const char *)&queryFormat, "pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1") )
      __debugbreak();
  }
  return (unsigned int)v19;
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
  __int128 v3; 
  __int128 v5; 

  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rcx }
  if ( (ScriptContext_GetFromInstance(inst)->m_builtinTime & 0x8000000000000000ui64) != 0i64 )
  {
    *((_QWORD *)&v3 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v3 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v3;
  }
  *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v5 = *(double *)&_XMM0 * msecPerRawTimerTick;
  _XMM0 = v5;
  __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
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
  __int128 v3; 
  __int128 v5; 

  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rcx }
  if ( (ScriptContext_GetFromInstance(inst)->m_entFieldTime & 0x8000000000000000ui64) != 0i64 )
  {
    *((_QWORD *)&v3 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v3 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v3;
  }
  *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v5 = *(double *)&_XMM0 * msecPerRawTimerTick;
  _XMM0 = v5;
  __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
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
  VariableValue *v4; 
  VariableType type; 
  const char *NameForType; 
  const char *v8; 
  const char *v9; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v4 = &scrContext->m_vmPub.top[-index];
    type = v4->type;
    if ( type == VAR_FLOAT )
      return v4->u.floatValue;
    if ( type == VAR_INTEGER )
      return (float)v4->u.intValue;
    scrContext->m_varPub.error_index = index + 1;
    NameForType = Scr_GetNameForType(v4->type);
    v8 = j_va("type %s is not a float", NameForType);
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
  return 0.0;
}

/*
==============
Scr_GetFloatOptional
==============
*/
float Scr_GetFloatOptional(scrContext_t *scrContext, unsigned int index, float defaultValue)
{
  VariableValue *v5; 
  VariableType type; 
  const char *NameForType; 
  const char *v9; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( index < scrContext->m_vmPub.outparamcount )
  {
    v5 = &scrContext->m_vmPub.top[-index];
    type = v5->type;
    if ( type )
    {
      if ( type == VAR_FLOAT )
        return v5->u.floatValue;
      if ( type == VAR_INTEGER )
        return (float)v5->u.intValue;
      scrContext->m_varPub.error_index = index + 1;
      NameForType = Scr_GetNameForType(v5->type);
      v9 = j_va("type %s is not a float", NameForType);
      Scr_Error(COM_ERR_3403, scrContext, v9);
    }
  }
  return defaultValue;
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
  return ScriptContext_GetFromInstance(inst)->m_runThreadsTime;
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
  float v10; 
  unsigned int timeArrayId; 
  unsigned int v12; 
  unsigned int Object; 
  unsigned int FirstSibling; 
  unsigned int v15; 
  unsigned int Array; 
  VariableValue value; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( sys != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9736, ASSERT_TYPE_ASSERT, "( sys == SCR_SYS_GAME )", (const char *)&queryFormat, "sys == SCR_SYS_GAME") )
    __debugbreak();
  if ( scrContext->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9737, ASSERT_TYPE_ASSERT, "( !pScrVarPub->timeArrayId )", (const char *)&queryFormat, "!pScrVarPub->timeArrayId") )
    __debugbreak();
  if ( scrContext->m_varPub.ext_threadcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9739, ASSERT_TYPE_ASSERT, "( !pScrVarPub->ext_threadcount )", (const char *)&queryFormat, "!pScrVarPub->ext_threadcount") )
    __debugbreak();
  if ( ScriptCodePos::GetVarUsagePos(&scrContext->m_varPub.varUsagePos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9743, ASSERT_TYPE_ASSERT, "( !pScrVarPub->varUsagePos.GetVarUsagePos() )", (const char *)&queryFormat, "!pScrVarPub->varUsagePos.GetVarUsagePos()") )
    __debugbreak();
  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, "<script init variable>");
  memset_0(scrContext->m_profileScript.threadId, 0, 16i64 * scrContext->m_variableListParentSize);
  Scr_AllocInternalObject(scrContext, &scrContext->m_varPub.timeArrayId);
  Scr_AllocInternalArray(scrContext, &scrContext->m_varPub.pauseArrayId);
  Scr_AllocInternalArray(scrContext, &scrContext->m_varPub.notifyArrayId);
  Scr_AllocInternalArray(scrContext, &scrContext->m_varPub.objectStackId);
  Scr_AllocInternalObject(scrContext, &scrContext->m_varPub.animId);
  Scr_AllocInternalObject(scrContext, &scrContext->m_varPub.levelId);
  CanonicalString = SL_GetCanonicalString("frameduration");
  Variable = GetVariable(scrContext, scrContext->m_varPub.levelId, CanonicalString);
  value.u.intValue = frameDuration;
  value.type = VAR_INTEGER;
  SetVariableValue(scrContext, Variable, &value);
  if ( scrContext->m_varPub.freeEntList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9760, ASSERT_TYPE_ASSERT, "( !pScrVarPub->freeEntList )", (const char *)&queryFormat, "!pScrVarPub->freeEntList") )
    __debugbreak();
  if ( frameDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9762, ASSERT_TYPE_ASSERT, "( frameDuration > 0 )", (const char *)&queryFormat, "frameDuration > 0") )
    __debugbreak();
  v10 = 1000.0 / (float)frameDuration;
  scrContext->m_varPub.framerate = v10;
  if ( v10 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9781, ASSERT_TYPE_ASSERT, "( pScrVarPub->framerate > 0.0f )", (const char *)&queryFormat, "pScrVarPub->framerate > 0.0f") )
    __debugbreak();
  scrContext->m_varPub.time = 0;
  scrContext->m_errorLevel = -1;
  Scr_InitDebuggerSystem(scrContext, threadMode);
  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, NULL);
  Scr_RunCurrentThreads(scrContext);
  timeArrayId = scrContext->m_varPub.timeArrayId;
  if ( timeArrayId )
  {
    while ( 1 )
    {
      v12 = FindVariable(scrContext, timeArrayId, scrContext->m_varPub.time);
      if ( !v12 )
        break;
      Object = FindObject(scrContext, v12);
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
    v15 = GetVariable(scrContext, scrContext->m_varPub.timeArrayId, scrContext->m_varPub.time);
    Array = GetArray(scrContext, v15);
    if ( !FindArrayVariable(scrContext, Array, 0) )
      GetNewArrayVariableReverse(scrContext, Array, 0);
    ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, NULL);
    scrContext->m_vmPub.showError = scrContext->m_vmPub.abort_on_error;
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
  const char *v7; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1598, ASSERT_TYPE_ASSERT, "( value != nullptr )", (const char *)&queryFormat, "value != nullptr") )
    __debugbreak();
  type = value->type;
  if ( type == VAR_INTEGER )
    return value->u.intValue != 0;
  if ( type == VAR_FLOAT )
  {
    if ( value->u.floatValue != 0.0 )
      return 1i64;
  }
  else
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, value->u);
    value->type = VAR_UNDEFINED;
    NameForType = Scr_GetNameForType(type);
    v7 = j_va("cannot cast %s to bool", NameForType);
    if ( !scrContext->m_varPub.error_message )
    {
      Core_strcpy_truncate(error_message, 0x400ui64, v7);
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

char __fastcall Scr_PrintProfileBuiltinTimes(scrContext_t *scrContext, double minTime, double _XMM2_8)
{
  float v4; 
  unsigned int m_FuncTableSize; 
  __int64 v6; 
  unsigned int v7; 
  ScrFuncDebugData *m_pFuncTable; 
  unsigned int v9; 
  __int64 v12; 
  __int64 v15; 
  __int64 v23; 
  __int64 v24; 
  ScrFuncDebugData *v25; 
  __int64 v26; 
  unsigned int v27; 
  __int64 v28; 
  float *Value; 
  float v30; 
  float v31; 
  unsigned int k; 
  __int64 v33; 
  unsigned int *v35; 
  unsigned int v36; 
  unsigned int *v37; 
  unsigned int i; 
  unsigned int j; 
  __int64 v40; 
  ScrFuncDebugData *v41; 
  __int64 v42; 
  unsigned int usage; 
  unsigned int m_funcCount; 
  const char **m_pMethNames; 
  const char *v46; 
  float *v47; 
  signed __int64 prof; 
  float v49; 
  float v50; 

  v4 = *(float *)&minTime;
  if ( *(float *)&minTime <= 0.0 )
    goto LABEL_19;
  m_FuncTableSize = scrContext->m_vmDebugPub.m_FuncTableSize;
  v6 = 0i64;
  v7 = 0;
  if ( m_FuncTableSize >= 4 )
  {
    m_pFuncTable = scrContext->m_vmDebugPub.m_pFuncTable;
    v9 = 2;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    do
    {
      v12 = v7;
      v7 += 4;
      _XMM0 = m_pFuncTable[v12].prof;
      __asm { vmovhpd xmm0, xmm0, qword ptr [r9+rcx*8+8] }
      v15 = v9;
      __asm { vpaddq  xmm1, xmm0, xmm1 }
      v9 += 4;
      _XMM0 = m_pFuncTable[v15].prof;
      __asm
      {
        vmovhpd xmm0, xmm0, qword ptr [r9+rcx*8+8]
        vpaddq  xmm2, xmm0, xmm2
      }
    }
    while ( v7 < (m_FuncTableSize & 0xFFFFFFFC) );
    __asm
    {
      vpaddq  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddq  xmm1, xmm1, xmm0
    }
    v6 = _XMM1;
  }
  v23 = 0i64;
  v24 = 0i64;
  if ( v7 < m_FuncTableSize )
  {
    if ( m_FuncTableSize - v7 >= 2 )
    {
      v25 = scrContext->m_vmDebugPub.m_pFuncTable;
      v26 = v7;
      v27 = ((m_FuncTableSize - v7 - 2) >> 1) + 1;
      v28 = v27;
      v7 += 2 * v27;
      do
      {
        v23 += v25[v26].prof;
        v24 += v25[v26 + 1].prof;
        v26 += 2i64;
        --v28;
      }
      while ( v28 );
    }
    if ( v7 < m_FuncTableSize )
      v6 += scrContext->m_vmDebugPub.m_pFuncTable[v7].prof;
    v6 += v24 + v23;
  }
  Value = (float *)Sys_GetValue(0);
  v30 = (float)v6;
  if ( v6 < 0 )
  {
    v31 = (float)v6;
    v30 = v31 + 1.8446744e19;
  }
  if ( (float)(v30 * Value[8915]) >= v4 )
  {
LABEL_19:
    v35 = (unsigned int *)Mem_Virtual_Alloc(4i64 * scrContext->m_vmDebugPub.m_FuncTableSize, "Scr_PrintProfileBuiltinTimes", TRACK_DEBUG);
    v36 = scrContext->m_vmDebugPub.m_FuncTableSize;
    v37 = v35;
    for ( i = 0; i < v36; v36 = scrContext->m_vmDebugPub.m_FuncTableSize )
    {
      v35[i] = i;
      ++i;
    }
    qsort_s(v35, v36, 4ui64, (_CoreCrtSecureSearchSortCompareFunction)Scr_BuiltinCompare_WithContext, scrContext);
    for ( j = 0; j < scrContext->m_vmDebugPub.m_FuncTableSize; ++j )
    {
      v40 = v37[j];
      v41 = scrContext->m_vmDebugPub.m_pFuncTable;
      v42 = v40;
      usage = v41[v40].usage;
      if ( usage )
      {
        m_funcCount = scrContext->m_funcCount;
        if ( (unsigned int)v40 >= m_funcCount )
        {
          v40 = (unsigned int)v40 - m_funcCount;
          m_pMethNames = scrContext->m_pMethNames;
        }
        else
        {
          m_pMethNames = scrContext->m_pFuncNames;
        }
        v46 = m_pMethNames[v40];
        v47 = (float *)Sys_GetValue(0);
        prof = scrContext->m_vmDebugPub.m_pFuncTable[v42].prof;
        v49 = (float)prof;
        if ( prof < 0 )
        {
          v50 = (float)prof;
          v49 = v50 + 1.8446744e19;
        }
        Com_Printf(23, "time: %f, usage: %d, %s\n", (float)(v49 * v47[8915]), usage, v46);
        scrContext->m_vmDebugPub.m_pFuncTable[v42].usage = 0;
        scrContext->m_vmDebugPub.m_pFuncTable[v42].prof = 0i64;
      }
      else if ( v41[v37[j]].prof && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 11687, ASSERT_TYPE_ASSERT, "( !pScrVmDebugPub->m_pFuncTable[j].prof )", (const char *)&queryFormat, "!pScrVmDebugPub->m_pFuncTable[j].prof") )
      {
        __debugbreak();
      }
    }
    Mem_Virtual_Free(v37);
    return 1;
  }
  else
  {
    for ( k = 0; k < scrContext->m_vmDebugPub.m_FuncTableSize; *(&scrContext->m_vmDebugPub.m_pFuncTable->prof + v33) = 0i64 )
    {
      v33 = k++;
      v33 *= 2i64;
      *(&scrContext->m_vmDebugPub.m_pFuncTable->usage + 2 * v33) = 0;
    }
    return 0;
  }
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
  unsigned int i; 
  __int64 v3; 

  if ( scrContext->m_varPub.bScriptProfileBuiltin )
  {
    if ( Scr_PrintProfileBuiltinTimes(scrContext, scrContext->m_varPub.scriptProfileBuiltinMinTime) )
      scrContext->m_varPub.bScriptProfileBuiltin = 0;
  }
  else
  {
    for ( i = 0; i < scrContext->m_vmDebugPub.m_FuncTableSize; *(&scrContext->m_vmDebugPub.m_pFuncTable->prof + v3) = 0i64 )
    {
      v3 = i++;
      v3 *= 2i64;
      *(&scrContext->m_vmDebugPub.m_pFuncTable->usage + 2 * v3) = 0;
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

  v2 = Dvar_EnumToString(profile);
  enabled = profile_script_by_file->current.enabled;
  if ( scrContext->m_varPub.bScriptProfile )
  {
    if ( !scrContext->m_varPub.bScriptUsageProfile || script_usage_tracking->current.integer )
    {
      if ( I_stricmp(v2, "ai") )
      {
        if ( enabled )
        {
          Scr_CalcScriptFileProfile(scrContext);
        }
        else if ( script_usage_tracking && script_usage_tracking->current.integer )
        {
          Scr_CalcScriptProfileTrackServerTime(scrContext);
        }
        else if ( Scr_PrintProfileTimes(scrContext, scrContext->m_varPub.scriptProfileMinTime) )
        {
          scrContext->m_varPub.bScriptProfile = 0;
        }
      }
      else
      {
        Scr_CalcAnimscriptProfile(scrContext, &total, &totalNonBuiltIn);
        Profile_SetTotal(284, total);
        Profile_SetTotal(285, totalNonBuiltIn);
      }
    }
    else
    {
      scrContext->m_varPub.bScriptProfile = 0;
      scrContext->m_varPub.bScriptUsageProfile = 0;
      Com_PrintWarning(23, "Scr_ProfileUpdate: 'script_usage_tracking' has been turned off. Please restart map with 'script_usage_tracking' set to 1 for profiling. \n");
    }
  }
  else
  {
    if ( !I_stricmp(v2, "ai") || enabled )
      scrContext->m_varPub.bScriptProfile = 1;
    if ( scrContext->m_varPub.timeArrayId && script_usage_tracking && script_usage_tracking->current.integer && !scrContext->m_varPub.bScriptUsageProfile )
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
  __int64 v7; 
  ScrFuncDebugData *v8; 
  unsigned __int16 *p_builtInIndex; 
  __int64 v10; 
  __int64 prof; 
  int usage; 
  unsigned __int16 *v13; 
  signed __int64 builtInTime; 
  float v15; 
  float v16; 
  signed __int64 v17; 
  float v18; 
  __int128 v19; 
  __int128 v20; 
  signed __int64 v21; 
  __int128 v23; 
  float v25; 
  float v26; 
  signed __int64 v27; 
  float v28; 
  float v29; 
  float v30; 
  signed __int64 v31; 
  float v32; 
  float v33; 
  float v34; 
  signed __int64 v35; 
  float v36; 
  float v37; 
  float v38; 
  signed __int64 v39; 
  float v40; 
  float v41; 
  float v42; 
  signed __int64 v43; 
  float v44; 
  float v45; 
  float v46; 
  signed __int64 v47; 
  float v48; 
  float v49; 
  float v50; 
  signed __int64 v51; 
  float v52; 
  float v53; 
  float v54; 
  signed __int64 v55; 
  float v56; 
  float v57; 
  float v58; 
  signed __int64 v59; 
  float v60; 
  float v61; 
  float v62; 
  signed __int64 v63; 
  float v64; 
  float v65; 
  float v66; 
  signed __int64 v67; 
  float v68; 
  float v69; 
  float v70; 
  signed __int64 v71; 
  float v72; 
  float v73; 
  float v74; 
  signed __int64 v75; 
  float v76; 
  float v77; 
  float v78; 
  int v80; 
  int v88; 
  int v90; 
  bool v91; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v100; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  unsigned int v113; 
  float v115; 
  float v116; 
  __int64 v117; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 

  m_methBegin = scrContext->m_methBegin;
  if ( builtInIndex >= m_methBegin )
    v7 = builtInIndex + scrContext->m_funcCount - m_methBegin;
  else
    v7 = builtInIndex - scrContext->m_funcBegin;
  v8 = &scrContext->m_vmDebugPub.m_pFuncTable[v7];
  p_builtInIndex = &rootFuncInfoDynamic->builtInFuncInfo[0].builtInIndex;
  LODWORD(v10) = 0;
  prof = v8->prof;
  usage = v8->usage;
  v8->prof = 0i64;
  v8->usage = 0;
  v13 = &rootFuncInfoDynamic->builtInFuncInfo[0].builtInIndex;
  while ( *v13 != builtInIndex )
  {
    if ( v13[8] == builtInIndex )
    {
      LODWORD(v10) = v10 + 1;
      break;
    }
    if ( v13[16] == builtInIndex )
    {
      LODWORD(v10) = v10 + 2;
      break;
    }
    if ( v13[24] == builtInIndex )
    {
      LODWORD(v10) = v10 + 3;
      break;
    }
    v13 += 32;
    LODWORD(v10) = v10 + 4;
    if ( (unsigned int)v10 >= 0x10 )
      break;
  }
  if ( (_DWORD)v10 != 16 )
    goto LABEL_90;
  LODWORD(v10) = 0;
  while ( *p_builtInIndex )
  {
    if ( !p_builtInIndex[8] )
    {
      LODWORD(v10) = v10 + 1;
      break;
    }
    if ( !p_builtInIndex[16] )
    {
      LODWORD(v10) = v10 + 2;
      break;
    }
    if ( !p_builtInIndex[24] )
    {
      LODWORD(v10) = v10 + 3;
      break;
    }
    p_builtInIndex += 32;
    LODWORD(v10) = v10 + 4;
    if ( (unsigned int)v10 >= 0x10 )
      break;
  }
  if ( (_DWORD)v10 != 16 )
    goto LABEL_90;
  builtInTime = rootFuncInfoDynamic->builtInFuncInfo[0].builtInTime;
  v15 = (float)builtInTime;
  if ( builtInTime < 0 )
  {
    v16 = (float)builtInTime;
    v15 = v16 + 1.8446744e19;
  }
  v17 = rootFuncInfoDynamic->builtInFuncInfo[1].builtInTime;
  v18 = v15 / (float)rootFuncInfoDynamic->builtInFuncInfo[0].builtInCallCount;
  v20 = 0i64;
  *(float *)&v20 = (float)v17;
  v19 = v20;
  v123 = v18;
  if ( v17 < 0 )
  {
    *(float *)&v20 = *(float *)&v20 + 1.8446744e19;
    v19 = v20;
  }
  v21 = rootFuncInfoDynamic->builtInFuncInfo[2].builtInTime;
  v23 = v19;
  *(float *)&v23 = *(float *)&v19 / (float)rootFuncInfoDynamic->builtInFuncInfo[1].builtInCallCount;
  _XMM0 = v23;
  __asm { vminss  xmm3, xmm0, xmm3 }
  v121 = *(float *)&_XMM3;
  v124 = *(float *)&v23;
  v25 = (float)v21;
  if ( v21 < 0 )
  {
    v26 = (float)v21;
    v25 = v26 + 1.8446744e19;
  }
  v27 = rootFuncInfoDynamic->builtInFuncInfo[3].builtInTime;
  v28 = v25 / (float)rootFuncInfoDynamic->builtInFuncInfo[2].builtInCallCount;
  v29 = (float)v27;
  v120 = v28;
  if ( v27 < 0 )
  {
    v30 = (float)v27;
    v29 = v30 + 1.8446744e19;
  }
  v31 = rootFuncInfoDynamic->builtInFuncInfo[4].builtInTime;
  v32 = v29 / (float)rootFuncInfoDynamic->builtInFuncInfo[3].builtInCallCount;
  v33 = (float)v31;
  v122 = v32;
  if ( v31 < 0 )
  {
    v34 = (float)v31;
    v33 = v34 + 1.8446744e19;
  }
  v35 = rootFuncInfoDynamic->builtInFuncInfo[5].builtInTime;
  v36 = v33 / (float)rootFuncInfoDynamic->builtInFuncInfo[4].builtInCallCount;
  v37 = (float)v35;
  v119 = v36;
  if ( v35 < 0 )
  {
    v38 = (float)v35;
    v37 = v38 + 1.8446744e19;
  }
  v39 = rootFuncInfoDynamic->builtInFuncInfo[6].builtInTime;
  v40 = v37 / (float)rootFuncInfoDynamic->builtInFuncInfo[5].builtInCallCount;
  v41 = (float)v39;
  v118 = v40;
  if ( v39 < 0 )
  {
    v42 = (float)v39;
    v41 = v42 + 1.8446744e19;
  }
  v43 = rootFuncInfoDynamic->builtInFuncInfo[7].builtInTime;
  v44 = v41 / (float)rootFuncInfoDynamic->builtInFuncInfo[6].builtInCallCount;
  v45 = (float)v43;
  v128 = v44;
  if ( v43 < 0 )
  {
    v46 = (float)v43;
    v45 = v46 + 1.8446744e19;
  }
  v47 = rootFuncInfoDynamic->builtInFuncInfo[8].builtInTime;
  v48 = v45 / (float)rootFuncInfoDynamic->builtInFuncInfo[7].builtInCallCount;
  v49 = (float)v47;
  v129 = v48;
  if ( v47 < 0 )
  {
    v50 = (float)v47;
    v49 = v50 + 1.8446744e19;
  }
  v51 = rootFuncInfoDynamic->builtInFuncInfo[9].builtInTime;
  v52 = v49 / (float)rootFuncInfoDynamic->builtInFuncInfo[8].builtInCallCount;
  v53 = (float)v51;
  if ( v51 < 0 )
  {
    v54 = (float)v51;
    v53 = v54 + 1.8446744e19;
  }
  v55 = rootFuncInfoDynamic->builtInFuncInfo[10].builtInTime;
  v56 = v53 / (float)rootFuncInfoDynamic->builtInFuncInfo[9].builtInCallCount;
  v57 = (float)v55;
  v125 = v56;
  if ( v55 < 0 )
  {
    v58 = (float)v55;
    v57 = v58 + 1.8446744e19;
  }
  v59 = rootFuncInfoDynamic->builtInFuncInfo[11].builtInTime;
  v60 = v57 / (float)rootFuncInfoDynamic->builtInFuncInfo[10].builtInCallCount;
  v61 = (float)v59;
  v126 = v60;
  if ( v59 < 0 )
  {
    v62 = (float)v59;
    v61 = v62 + 1.8446744e19;
  }
  v63 = rootFuncInfoDynamic->builtInFuncInfo[12].builtInTime;
  v64 = v61 / (float)rootFuncInfoDynamic->builtInFuncInfo[11].builtInCallCount;
  v65 = (float)v63;
  if ( v63 < 0 )
  {
    v66 = (float)v63;
    v65 = v66 + 1.8446744e19;
  }
  v67 = rootFuncInfoDynamic->builtInFuncInfo[13].builtInTime;
  v68 = v65 / (float)rootFuncInfoDynamic->builtInFuncInfo[12].builtInCallCount;
  v69 = (float)v67;
  if ( v67 < 0 )
  {
    v70 = (float)v67;
    v69 = v70 + 1.8446744e19;
  }
  v71 = rootFuncInfoDynamic->builtInFuncInfo[14].builtInTime;
  v72 = v69 / (float)rootFuncInfoDynamic->builtInFuncInfo[13].builtInCallCount;
  v73 = (float)v71;
  v127 = v72;
  if ( v71 < 0 )
  {
    v74 = (float)v71;
    v73 = v74 + 1.8446744e19;
  }
  v75 = rootFuncInfoDynamic->builtInFuncInfo[15].builtInTime;
  v76 = v73 / (float)rootFuncInfoDynamic->builtInFuncInfo[14].builtInCallCount;
  v77 = (float)v75;
  if ( v75 < 0 )
  {
    v78 = (float)v75;
    v77 = v78 + 1.8446744e19;
  }
  _XMM4 = LODWORD(v121);
  v80 = 2;
  _XMM5 = LODWORD(v121);
  __asm
  {
    vminss  xmm11, xmm5, [rsp+0D8h+var_D0]
    vminss  xmm13, xmm11, [rsp+0D8h+var_C8]
    vminss  xmm2, xmm13, [rsp+0D8h+var_D4]
    vminss  xmm8, xmm2, [rsp+0D8h+var_D8]
    vminss  xmm12, xmm8, [rsp+0D8h+arg_0]
  }
  v10 = 15i64;
  __asm { vminss  xmm0, xmm4, [rsp+0D8h+var_D0] }
  v88 = 0;
  __asm { vminss  xmm4, xmm0, [rsp+0D8h+var_C8] }
  if ( v121 <= v120 )
  {
    LOBYTE(v88) = v123 > v124;
    v80 = v88;
  }
  v90 = 3;
  v91 = *(float *)&_XMM0 <= v122;
  __asm
  {
    vminss  xmm6, xmm4, [rsp+0D8h+var_D4]
    vminss  xmm10, xmm6, [rsp+0D8h+var_D8]
    vminss  xmm0, xmm10, [rsp+0D8h+arg_0]
  }
  if ( v91 )
    v90 = v80;
  v95 = 4;
  if ( *(float *)&_XMM4 <= v119 )
    v95 = v90;
  v96 = 5;
  if ( *(float *)&_XMM6 <= v118 )
    v96 = v95;
  v97 = 6;
  if ( *(float *)&_XMM10 <= v128 )
    v97 = v96;
  v98 = 7;
  v91 = *(float *)&_XMM0 <= v129;
  __asm { vminss  xmm0, xmm12, [rsp+0D8h+arg_8] }
  if ( v91 )
    v98 = v97;
  v100 = 8;
  __asm
  {
    vminss  xmm14, xmm0, xmm15
    vminss  xmm12, xmm14, [rsp+0D8h+var_BC]
    vminss  xmm10, xmm12, [rsp+0D8h+var_B8]
    vminss  xmm8, xmm10, [rsp+0D8h+var_B4]
    vminss  xmm6, xmm8, [rsp+0D8h+var_B0]
    vminss  xmm4, xmm6, [rsp+0D8h+var_AC]
  }
  if ( *(float *)&_XMM0 <= v52 )
    v100 = v98;
  v107 = 9;
  if ( *(float *)&_XMM14 <= v125 )
    v107 = v100;
  v108 = 10;
  if ( *(float *)&_XMM12 <= v126 )
    v108 = v107;
  v109 = 11;
  if ( *(float *)&_XMM10 <= v64 )
    v109 = v108;
  v110 = 12;
  if ( *(float *)&_XMM8 <= v68 )
    v110 = v109;
  v111 = 13;
  __asm { vminss  xmm0, xmm4, xmm3 }
  if ( *(float *)&_XMM6 <= v127 )
    v111 = v110;
  v113 = 14;
  v91 = *(float *)&_XMM4 <= v76;
  __asm { vminss  xmm3, xmm0, xmm1 }
  if ( v91 )
    v113 = v111;
  if ( *(float *)&_XMM0 <= (float)(v77 / (float)rootFuncInfoDynamic->builtInFuncInfo[15].builtInCallCount) )
    v10 = v113;
  v115 = (float)prof;
  if ( prof < 0 )
  {
    v116 = (float)prof;
    v115 = v116 + 1.8446744e19;
  }
  if ( v115 > *(float *)&_XMM3 )
  {
    rootFuncInfoDynamic->builtInFuncInfo[(unsigned int)v10].builtInTime = 0i64;
    rootFuncInfoDynamic->builtInFuncInfo[v10].builtInCallCount = 0;
LABEL_90:
    v117 = (unsigned int)v10;
    rootFuncInfoDynamic->builtInFuncInfo[v117].builtInTime += prof;
    rootFuncInfoDynamic->builtInFuncInfo[v117].builtInCallCount += usage;
    rootFuncInfoDynamic->builtInFuncInfo[v117].builtInIndex = builtInIndex;
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
void Scr_VM_RegisterDvars()
{
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
  scr_profilingLevel = Dvar_RegisterInt("scr_profilingLevel", 2, 1, 500, 0, "Controls which levels of script profile tags to filter in/out");
  script_usage_track_src_min_time = Dvar_RegisterFloat("NTPQLQLS", 0.5, 0.0, 50.0, 0, "script file time in ms that will cause it to be tracked.");
  script_usage_track_func_min_time = Dvar_RegisterFloat("NLQLRNKMNO", 0.30000001, 0.0, 50.0, 0, "script func time in ms that will cause it to be tracked.");
  script_usage_track_func_min_time_built_in = Dvar_RegisterFloat("NMPLNNPQLL", 0.1, 0.0, 50.0, 0, "Built-in func time in ms that will cause it to be tracked.");
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
__int64 VM_Execute(scrContext_t *scrContext)
{
  signed __int64 v1; 
  void *v2; 
  function_stack_t *p_m_fs; 
  scrVarPub_t *p_m_varPub; 
  scrVmDebugPub_t *p_m_vmDebugPub; 
  scrContext_t *v6; 
  const char *m_scriptPos; 
  ProfileScript *Profile; 
  bool v10; 
  ProfileScript *v11; 
  unsigned __int64 v12; 
  int v13; 
  function_stack_t *v14; 
  __int64 v15; 
  unsigned int **p_localVars; 
  unsigned __int64 v17; 
  __int64 v18; 
  int m_scriptThreadThreshDumps; 
  unsigned __int64 v20; 
  unsigned __int64 m_runThreadsTimeStart; 
  __int64 v22; 
  ScriptCodePos v23; 
  __int128 v26; 
  __int128 v28; 
  unsigned __int64 v29; 
  scrVmDebugPub_t *v31; 
  int v32; 
  __int64 v33; 
  unsigned __int64 v34; 
  SourceFunctionInfoDynamic *currentSrcFuncDynamic; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  unsigned __int64 embeddedTime; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  unsigned __int64 v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned __int64 v45; 
  VariableValue *v46; 
  unsigned __int64 v47; 
  VariableValue *v48; 
  unsigned __int64 v49; 
  VariableValue *v50; 
  unsigned __int64 v51; 
  VariableValue *v52; 
  unsigned __int64 v53; 
  VariableValue *v54; 
  unsigned __int64 v55; 
  VariableValue *v56; 
  unsigned __int64 v57; 
  VariableValue *v58; 
  unsigned __int64 v59; 
  VariableValue *v60; 
  unsigned __int64 v61; 
  VariableValue *v62; 
  unsigned int v63; 
  unsigned int v64; 
  unsigned __int64 v65; 
  VariableValue *v66; 
  unsigned int v67; 
  VariableValue *v68; 
  VariableValue *v69; 
  VariableValue *v70; 
  VariableValue *v71; 
  VariableValue *m; 
  VariableValue *v73; 
  unsigned __int8 v74; 
  int v75; 
  unsigned int v76; 
  unsigned int v77; 
  scrContext_t *v78; 
  VariableValue *v79; 
  VariableValue *v80; 
  unsigned __int8 v81; 
  int v82; 
  unsigned int v83; 
  unsigned int v84; 
  scrContext_t *v85; 
  VariableValue *v86; 
  VariableValue *v87; 
  VariableValue *v88; 
  VariableValue *v89; 
  char *v90; 
  char v91; 
  unsigned int v92; 
  unsigned int v93; 
  char *v94; 
  __int64 v95; 
  __int64 v96; 
  VariableValue *v97; 
  VariableValue *v98; 
  unsigned int v99; 
  char *v100; 
  __int64 v101; 
  VariableValue *v102; 
  int v103; 
  __int64 v104; 
  __int64 v105; 
  VariableValue *v106; 
  VariableValue *k; 
  VariableValue *v108; 
  __int64 v109; 
  unsigned int v110; 
  int v111; 
  char *v112; 
  unsigned int v113; 
  int v114; 
  unsigned int v115; 
  int v116; 
  const char *v117; 
  const char *v118; 
  int v119; 
  const char *v120; 
  const char *v121; 
  unsigned int SafeParentLocalId; 
  VariableValue *v123; 
  VariableValue *v124; 
  VariableValue *v125; 
  VariableValue *v126; 
  VariableValue *v127; 
  unsigned int m_threadCount; 
  const char *ScriptPos; 
  __int64 v130; 
  __int64 v131; 
  __int64 v132; 
  unsigned __int64 v133; 
  unsigned __int64 v134; 
  unsigned __int64 v135; 
  unsigned __int64 v136; 
  unsigned int v137; 
  unsigned int v138; 
  __int64 v139; 
  SourceBufferInfo *v140; 
  unsigned int v141; 
  int v142; 
  int v143; 
  int v144; 
  unsigned int v145; 
  SourceFunctionInfoStatic *v146; 
  __int64 v147; 
  unsigned __int64 v148; 
  bool v149; 
  VariableValue *v150; 
  VariableValue *v151; 
  VariableValue *v152; 
  VariableValue *v153; 
  VariableValue *startTop; 
  unsigned __int64 v155; 
  VariableValue *v156; 
  unsigned __int64 v157; 
  VariableValue *v158; 
  VariableValue *v159; 
  unsigned __int64 v160; 
  VariableValue *v161; 
  VariableValue *v162; 
  int v163; 
  unsigned __int64 v164; 
  VariableValue *v165; 
  int v166; 
  unsigned __int64 v167; 
  VariableValue *v168; 
  unsigned __int64 v169; 
  VariableValue *v170; 
  int v171; 
  unsigned __int64 v172; 
  VariableValue *v173; 
  int v174; 
  unsigned __int64 v175; 
  VariableValue *v176; 
  unsigned __int64 v177; 
  VariableValue *v178; 
  int v179; 
  unsigned __int64 v180; 
  VariableValue *v181; 
  unsigned int v182; 
  VariableValue *v183; 
  unsigned __int64 v184; 
  VariableValue *v185; 
  unsigned __int64 v186; 
  VariableValue *v187; 
  scr_string_t v188; 
  VariableValue *v189; 
  unsigned __int64 v190; 
  VariableValue *v191; 
  char *v192; 
  unsigned __int64 v193; 
  VariableValue *v194; 
  unsigned int localId; 
  unsigned __int64 v196; 
  VariableValue *v197; 
  unsigned __int64 v198; 
  VariableValue *v199; 
  unsigned __int64 v200; 
  VariableValue *v201; 
  unsigned __int64 v202; 
  VariableValue *v203; 
  unsigned __int64 v204; 
  VariableValue *v205; 
  VariableUnion v206; 
  bool v207; 
  unsigned __int64 v208; 
  VariableValue *v209; 
  char *v210; 
  unsigned int v211; 
  unsigned int v212; 
  unsigned int v213; 
  unsigned __int64 v214; 
  VariableValue *v215; 
  unsigned __int64 v216; 
  VariableValue *v217; 
  unsigned __int64 v218; 
  VariableValue *v219; 
  unsigned __int64 v220; 
  VariableValue *v221; 
  unsigned __int64 v222; 
  VariableValue *v223; 
  unsigned __int64 v224; 
  VariableValue *v225; 
  unsigned __int64 v226; 
  VariableValue *v227; 
  unsigned __int64 v228; 
  VariableValue *v229; 
  unsigned int v230; 
  unsigned int v231; 
  __int64 v232; 
  unsigned int v233; 
  VariableValue *v234; 
  unsigned int v235; 
  VariableType v236; 
  const char *v237; 
  unsigned int ArrayVariable; 
  const char *v239; 
  const char *v240; 
  bool v241; 
  unsigned int v242; 
  unsigned int ArraySize; 
  unsigned int NewArrayVariable; 
  unsigned int v245; 
  unsigned int animId; 
  unsigned int v247; 
  unsigned int v248; 
  VariableType ObjectType; 
  unsigned int v250; 
  unsigned int Self; 
  unsigned int v252; 
  unsigned int v253; 
  unsigned int v254; 
  VariableValue *v255; 
  VariableValue *v256; 
  VariableValue *v257; 
  VariableValue *top; 
  VariableValue *v259; 
  VariableValue *v260; 
  unsigned int v261; 
  VariableValue *v262; 
  VariableValue *v263; 
  VariableValue *v264; 
  unsigned __int8 v265; 
  int v266; 
  scrContext_t *v267; 
  unsigned int v268; 
  VariableValue *v269; 
  VariableValue *v270; 
  unsigned __int8 v271; 
  int v272; 
  scrContext_t *v273; 
  unsigned int v274; 
  VariableValue *v275; 
  VariableValue *v276; 
  VariableValue *v277; 
  VariableValue *v278; 
  unsigned int *v279; 
  __int64 v280; 
  unsigned int v281; 
  scrContext_t *v282; 
  int i; 
  const char *v284; 
  unsigned int v285; 
  unsigned int levelId; 
  VariableValue *v287; 
  unsigned int Variable; 
  unsigned int v289; 
  unsigned int v290; 
  unsigned int VariableFieldIndex; 
  char v292; 
  VariableValue *v293; 
  __int64 v294; 
  unsigned int v295; 
  unsigned int v296; 
  const char *v297; 
  int v298; 
  unsigned int v299; 
  unsigned int m_funcCount; 
  unsigned int v301; 
  const char *v302; 
  int v303; 
  unsigned int v304; 
  scrContext_t *v305; 
  ScriptCodePos v306; 
  unsigned int v307; 
  unsigned int v308; 
  unsigned int v309; 
  unsigned int NewObjectVariableReverse; 
  unsigned int v311; 
  char *v312; 
  VariableValue *v313; 
  unsigned int v314; 
  char **v315; 
  const char *v316; 
  const char *v317; 
  VariableValue *v318; 
  char *v319; 
  VariableValue *v320; 
  VariableUnion u; 
  const char *v322; 
  const char *v323; 
  unsigned int v324; 
  unsigned int v325; 
  unsigned __int64 v326; 
  __int64 v327; 
  char *v328; 
  __int64 v329; 
  VariableValue *v330; 
  unsigned int v331; 
  unsigned int v332; 
  int v333; 
  const char *v334; 
  const char *v335; 
  const char *v336; 
  const char *v337; 
  unsigned __int64 v338; 
  __int64 v339; 
  VariableUnion *v340; 
  VariableUnion v341; 
  unsigned int m_funcBegin; 
  unsigned int v343; 
  unsigned int v344; 
  unsigned int v345; 
  unsigned __int64 v346; 
  unsigned __int64 v347; 
  scrVmDebugPub_t *v348; 
  unsigned __int64 v349; 
  __int64 v350; 
  unsigned __int64 v351; 
  scrContext_t *v352; 
  unsigned __int64 v353; 
  __int64 v354; 
  __int64 v355; 
  VariableValue *v356; 
  unsigned __int64 v357; 
  unsigned __int64 v358; 
  unsigned __int64 v359; 
  __int64 v360; 
  VariableValue *v361; 
  unsigned __int64 v362; 
  unsigned __int64 v363; 
  __int64 v364; 
  VariableValue *v365; 
  VariableValue *v366; 
  unsigned int v367; 
  int v368; 
  const char *v369; 
  const char *v370; 
  const char *v371; 
  const char *v372; 
  VariableUnion *p_u; 
  unsigned int *v374; 
  unsigned __int64 v375; 
  __int64 v376; 
  __int64 v377; 
  __int64 v378; 
  unsigned __int64 v379; 
  __int64 v380; 
  unsigned int uintValue; 
  unsigned int m_methBegin; 
  unsigned int m_methCount; 
  VariableValue *v384; 
  unsigned int v385; 
  scr_entref_t EntityIdRef; 
  int v387; 
  int v388; 
  unsigned __int64 v389; 
  unsigned __int64 v390; 
  unsigned __int64 v391; 
  __int64 v392; 
  unsigned __int64 v393; 
  scrVmDebugPub_t *v394; 
  unsigned __int64 v395; 
  unsigned int v396; 
  __int64 v397; 
  __int64 v398; 
  const char *v399; 
  unsigned int v400; 
  int v401; 
  VariableType v402; 
  const char *v403; 
  const char *v404; 
  VariableType v405; 
  const char *v406; 
  const char *v407; 
  VariableValue *v408; 
  VariableType v409; 
  float floatValue; 
  int v413; 
  const char *v416; 
  const char *v417; 
  unsigned int v418; 
  ScriptCodePos v419; 
  unsigned int v420; 
  unsigned int v421; 
  unsigned int v422; 
  unsigned int v423; 
  unsigned int v424; 
  ScriptCodePos v425; 
  unsigned int v426; 
  unsigned int v427; 
  unsigned int v428; 
  unsigned int v429; 
  unsigned int v430; 
  VariableValue *v431; 
  VariableValue *v432; 
  VariableType v433; 
  int v434; 
  int v435; 
  VariableValue *v436; 
  VariableType v437; 
  int v438; 
  const char *v439; 
  int v440; 
  const char *v441; 
  BOOL v442; 
  VariableValue *v443; 
  VariableType v444; 
  BOOL v445; 
  const char *v446; 
  const char *v447; 
  __int64 v448; 
  VariableValue *v449; 
  VariableType type; 
  BOOL v451; 
  const char *NameForType; 
  const char *v453; 
  __int64 v454; 
  VariableValue *v455; 
  int v456; 
  __int64 v457; 
  VariableValue *v458; 
  int v459; 
  __int64 v460; 
  int v461; 
  scrVmGlob_t *v462; 
  unsigned int v463; 
  int jumpbackHistoryIndex; 
  const char *v465; 
  ScriptCodePos v466; 
  ScriptCodePos v467; 
  unsigned int StartLocalId; 
  unsigned int v469; 
  VariableValue *v470; 
  VariableType v471; 
  int v472; 
  unsigned int unsignedInt; 
  int v474; 
  ScriptCodePos v475; 
  __int64 v476; 
  const char *v477; 
  const char *v478; 
  VariableValue *v479; 
  VariableType v480; 
  const char *v481; 
  const char *v482; 
  VariableValue *v483; 
  VariableValue *v484; 
  signed int v485; 
  ScriptCodePos v486; 
  unsigned int ObjectVariable; 
  unsigned int v488; 
  unsigned int v489; 
  unsigned int v490; 
  unsigned int NewObjectVariable; 
  unsigned int v492; 
  unsigned int v493; 
  unsigned int v494; 
  unsigned int v495; 
  unsigned int v496; 
  VariableValue *v497; 
  VariableValue *v498; 
  scr_string_t intValue; 
  VariableValue *v500; 
  __int64 v501; 
  unsigned int v502; 
  VariableValue *v503; 
  VariableValue *v504; 
  VariableValue *v505; 
  VariableValue *v506; 
  unsigned int *v507; 
  unsigned __int64 v508; 
  unsigned __int64 v509; 
  __int64 v510; 
  unsigned int v511; 
  VariableValue *v512; 
  VariableType v513; 
  const char *v514; 
  const char *v515; 
  unsigned int InternalVariableIndex; 
  unsigned int *v517; 
  const char *v518; 
  unsigned int v519; 
  char *v520; 
  int v521; 
  int v522; 
  char *v523; 
  int v524; 
  unsigned int v525; 
  unsigned int v526; 
  unsigned int v527; 
  VariableValue *v528; 
  int v529; 
  VariableValue *v530; 
  unsigned int v531; 
  unsigned int v532; 
  unsigned int v533; 
  char v534; 
  char *v535; 
  scrVmPub_t *v536; 
  char v537; 
  bitarray<128> *v538; 
  scrContext_t *v539; 
  const char *v540; 
  __int16 v541; 
  __int16 v542; 
  int v543; 
  const char *ProfileString; 
  unsigned __int8 v545; 
  bool v546; 
  scrVmPub_t *v547; 
  const char *v548; 
  char v549; 
  bitarray<128> *v550; 
  scrContext_t *v551; 
  const char *v552; 
  __int64 v553; 
  int v554; 
  scrContext_t *v555; 
  __int64 v556; 
  __int64 v557; 
  bitarray<128> *v558; 
  __int64 v559; 
  int v560; 
  unsigned int SourceBuffer_Fast; 
  __int64 v562; 
  SourceBufferInfo *currentSrcFile; 
  unsigned int functionLookupLen; 
  int v565; 
  int v566; 
  int v567; 
  unsigned int v568; 
  SourceFunctionInfoStatic *functionLookupStatic; 
  __int64 v570; 
  unsigned __int64 codePosEnd; 
  bool v572; 
  unsigned __int64 v573; 
  __int64 v574; 
  __int64 v575; 
  unsigned __int64 v576; 
  const char *v577; 
  const char *v578; 
  const char *v579; 
  const char *v580; 
  int error_index; 
  int v582; 
  int v583; 
  unsigned int tempVariable; 
  unsigned int v585; 
  int v586; 
  __int64 v587; 
  VariableValue *v588; 
  VariableValue *j; 
  VariableValue *v590; 
  VariableValue *v591; 
  int v592; 
  VariableValue *v593; 
  unsigned int m_caseCount; 
  int v595; 
  char *v596; 
  unsigned int v597; 
  int v598; 
  int m_errorLevel; 
  int v600; 
  __int64 v601; 
  unsigned __int64 v602; 
  __int64 v603; 
  __int64 v604; 
  unsigned __int64 v605; 
  __int64 builtinIndex; 
  __int64 outparamcount; 
  __int64 v609; 
  __int64 v610; 
  char *pos; 
  unsigned __int64 v612; 
  unsigned __int8 depth; 
  char v614; 
  unsigned int parentId; 
  unsigned int Array; 
  unsigned int id; 
  char v618; 
  scrContext_t *v619; 
  unsigned int builtInIndex; 
  unsigned __int64 v621; 
  scrVmDebugPub_t *v622; 
  unsigned int v623; 
  ProfileScript *v624; 
  scrVarPub_t *v625; 
  scrVmPub_t *p_m_vmPub; 
  unsigned __int64 builtInTime; 
  __int64 v628; 
  unsigned int v629; 
  unsigned int v630; 
  char *codePos; 
  VariableValue v632; 
  int v633; 
  unsigned __int64 v634; 
  scr_string_t v635; 
  VariableValue value; 
  scrVmGlob_t *p_m_vmGlob; 
  scrContext_t *scrContexta; 
  ScriptCodePos *p_pos; 
  char msg[4096]; 

  v2 = alloca(v1);
  ++scrContext->m_errorLevel;
  p_m_fs = &scrContext->m_fs;
  p_m_vmGlob = &scrContext->m_vmGlob;
  scrContexta = scrContext;
  p_m_varPub = &scrContext->m_varPub;
  p_m_vmPub = &scrContext->m_vmPub;
  p_m_vmDebugPub = &scrContext->m_vmDebugPub;
  v630 = 190;
  v6 = scrContext;
  depth = 0;
  m_scriptPos = scrContext->m_fs.pos.m_scriptPos;
  _R15 = NULL;
  v618 = -1;
  v625 = p_m_varPub;
  v622 = p_m_vmDebugPub;
  p_pos = &p_m_fs->pos;
  pos = NULL;
  if ( ScriptCodePos::IsScriptPos_Generic((const unsigned __int64)m_scriptPos) )
  {
    _R15 = (char *)ScriptCodePos::GetScriptPos(&p_m_fs->pos, v6);
    pos = _R15;
  }
$restart_2:
  Profile = ScriptContext_GetProfile(v6);
  v10 = !p_m_varPub->bScriptUsageProfile;
  v11 = Profile;
  v624 = Profile;
  if ( !v10 )
  {
    v634 = 0i64;
    v12 = __rdtsc();
    v621 = v12;
    codePos = _R15;
    p_m_vmDebugPub->embeddedTime = 0i64;
    v623 = 0;
    v612 = __rdtsc();
    v11->scrProfileCalcTimeTotal += v612 - v12;
  }
  if ( v6->m_errorLevel >= 0x41u )
  {
    LODWORD(outparamcount) = 65;
    LODWORD(builtinIndex) = v6->m_errorLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2362, ASSERT_TYPE_ASSERT, "(unsigned)( scrContext.m_errorLevel ) < (unsigned)( ( sizeof( *array_counter( scrContext.m_error ) ) + 0 ) )", "scrContext.m_errorLevel doesn't index ARRAY_COUNT( scrContext.m_error )\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
      __debugbreak();
  }
  v6->m_largeLocalMark[v6->m_errorLevel] = Mem_LargeLocal_GetMark();
  v13 = setjmp(v6->m_error[(__int64)v6->m_errorLevel]);
  v6 = scrContexta;
  if ( v13 )
  {
    LODWORD(v15) = opcode;
    v14 = &scrContexta->m_fs;
    v580 = scrContexta->m_fs.pos.m_scriptPos;
    p_pos = &scrContexta->m_fs.pos;
    v630 = opcode;
    if ( !ScriptCodePos::IsScriptPos_Generic((const unsigned __int64)v580) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2393, ASSERT_TYPE_ASSERT, "(ScriptCodePos::IsScriptPos_Generic( pFs->pos.m_genericPos ))", "%s\n\tNative script errors should not longjmp", "ScriptCodePos::IsScriptPos_Generic( pFs->pos.m_genericPos )") )
      __debugbreak();
    _R15 = (char *)ScriptCodePos::GetScriptPos(&v6->m_fs.pos, v6);
    pos = _R15;
    Mem_LargeLocal_ResetToMark(v6->m_largeLocalMark[v6->m_errorLevel]);
    p_localVars = &p_m_vmPub->localVars;
    p_m_varPub = v625;
    goto $error_2;
  }
  v14 = (function_stack_t *)p_pos;
  LODWORD(v15) = v630;
  _R15 = pos;
  builtInTime = v634;
  builtInIndex = v623;
  parentId = Array;
  v619 = scrContexta;
  v633 = v629;
LABEL_12:
  p_localVars = &p_m_vmPub->localVars;
  while ( 2 )
  {
    v17 = v612;
$loop_0:
    v18 = (__int64)v625;
    if ( v625->error_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2404, ASSERT_TYPE_ASSERT, "( ( !pScrVarPub->error_message ) )", "%s\n\t( pScrVarPub->error_message ) = %s", "( !pScrVarPub->error_message )", v625->error_message) )
      __debugbreak();
    if ( *(_DWORD *)(v18 + 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2405, ASSERT_TYPE_ASSERT, "( !pScrVarPub->error_index )", (const char *)&queryFormat, "!pScrVarPub->error_index") )
      __debugbreak();
    if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2407, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
      __debugbreak();
    if ( *((_DWORD *)p_localVars + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2408, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
      __debugbreak();
    if ( ++v6->m_dumpStack.m_scriptThreadThreshLoopsPerCheck > 100 )
    {
      v6->m_dumpStack.m_scriptThreadThreshLoopsPerCheck = 0;
      if ( scriptThreadThresholdTime->current.integer > 0 )
      {
        m_scriptThreadThreshDumps = v6->m_dumpStack.m_scriptThreadThreshDumps;
        v20 = __rdtsc();
        if ( m_scriptThreadThreshDumps >= scriptThreadThresholdTimeMaxDumps->current.integer )
        {
          if ( v20 - v6->m_dumpStack.m_scriptThreadThreshStopDumpingTime > v6->m_dumpStack.m_threshRawMaxResetTime )
            v6->m_dumpStack.m_scriptThreadThreshDumps = 0;
        }
        else
        {
          m_runThreadsTimeStart = v6->m_runThreadsTimeStart;
          if ( v6->m_dumpStack.m_prevStartTime != m_runThreadsTimeStart )
          {
            v22 = v20 - m_runThreadsTimeStart;
            if ( v20 - m_runThreadsTimeStart > v6->m_dumpStack.m_threshRawTimerCount )
            {
              v6->m_dumpStack.m_scriptThreadThreshDumps = m_scriptThreadThreshDumps + 1;
              v6->m_dumpStack.m_scriptThreadThreshStopDumpingTime = v20;
              v6->m_dumpStack.m_prevStartTime = v6->m_runThreadsTimeStart;
              v23.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
              Scr_DoScriptTrace(v6, 0, v23, msg, 4096);
              _XMM0 = 0i64;
              __asm { vcvtsi2sd xmm0, xmm0, rbx }
              if ( v22 < 0 )
              {
                *((_QWORD *)&v26 + 1) = *((_QWORD *)&_XMM0 + 1);
                *(double *)&v26 = *(double *)&_XMM0 + 1.844674407370955e19;
                _XMM0 = v26;
              }
              *((_QWORD *)&v28 + 1) = *((_QWORD *)&_XMM0 + 1);
              *(double *)&v28 = *(double *)&_XMM0 * msecPerRawTimerTick;
              _XMM0 = v28;
              v29 = 0i64;
              if ( *(double *)&v28 >= 9.223372036854776e18 )
              {
                *(double *)&v28 = *(double *)&v28 - 9.223372036854776e18;
                _XMM0 = v28;
                if ( *(double *)&v28 < 9.223372036854776e18 )
                  v29 = 0x8000000000000000ui64;
              }
              __asm { vcvttsd2si r8, xmm0 }
              Com_PrintError(23, "ScriptThreadThreshold time %zums Exceeded %dms\n%s\n", v29 + _R8, scriptThreadThresholdTime->current.unsignedInt, msg);
            }
          }
        }
      }
    }
    __asm { prefetcht0 byte ptr [r15+80h] }
    v31 = v622;
    v32 = v15;
    v15 = (unsigned __int8)*_R15;
    v628 = v15;
    v630 = v15;
    opcode = v15;
    ++v622->opcodePairs[v15 | (unsigned int)(v32 << 8)];
    if ( v625->bScriptUsageProfile )
    {
      v33 = (__int64)v624;
      v34 = __rdtsc();
      v621 = v34;
      ++v624->scrProfileScriptUsageOpCount;
      ++v31->currentSrcFile->totalOps;
      currentSrcFuncDynamic = v31->currentSrcFuncDynamic;
      if ( currentSrcFuncDynamic )
        ++currentSrcFuncDynamic->opCount;
      v36 = __rdtsc();
      v37 = (unsigned __int64)HIDWORD(v36) << 32;
      if ( *(_DWORD *)(v33 + 623512) >= 0xC350u )
      {
        v31->embeddedTime = 0i64;
        *(_QWORD *)(v33 + 623536) += (v37 | (unsigned int)v36) - v34;
      }
      else
      {
        embeddedTime = v6->m_vmDebugPub.embeddedTime;
        v39 = builtInTime;
        v6->m_vmDebugPub.embeddedTime = 0i64;
        v40 = v39 - embeddedTime;
        v41 = ((unsigned int)v36 | v37) - embeddedTime - v17;
        v6->m_vmDebugPub.currentSrcFile->allOpTotal += v41;
        v6->m_vmDebugPub.currentSrcFile->allOpTotalBuiltIn += v40;
        if ( v6->m_vmDebugPub.currentSrcFile->functionLookupLen )
        {
          v42 = builtInIndex;
          v6->m_vmDebugPub.currentSrcFuncDynamic->allOpTotal += v41;
          v6->m_vmDebugPub.currentSrcFuncDynamic->allOpTotalBuiltIn += v40;
          if ( v42 )
          {
            Scr_UpdateScriptUsageTimeBuiltIn(v6, v42, v6->m_vmDebugPub.currentSrcFile, v6->m_vmDebugPub.currentSrcFuncStatic, v6->m_vmDebugPub.currentSrcFuncDynamic);
            v34 = v621;
          }
        }
        codePos = _R15;
        builtInTime = 0i64;
        v634 = 0i64;
        builtInIndex = 0;
        v623 = 0;
        v612 = __rdtsc();
        *(_QWORD *)(v33 + 623536) += v612 - v34;
      }
    }
    pos = ++_R15;
    ScriptCodePos::SetScriptPos(&v14->pos, _R15);
    p_m_varPub = v625;
    ScriptCodePos::SetVarUsagePos(&v625->varUsagePos, _R15);
$interrupt_return:
    switch ( (int)v15 )
    {
      case 0:
        v430 = Scr_EvalFieldObject(v6, p_m_varPub->tempVariable, v14->top);
        --v14->top;
        parentId = v430;
        Array = v430;
        continue;
      case 1:
        top = v14->top;
        goto LABEL_683;
      case 2:
        Scr_EvalPlus(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 3:
        v213 = (unsigned __int8)*_R15++;
        v17 = v612;
        *p_localVars -= v213;
        v14->localVarCount -= v213;
        if ( !(_BYTE)v213 )
          goto $loop_0;
        do
        {
          RemoveNextVariable(v6, v14->localId);
          LOBYTE(v213) = v213 - 1;
        }
        while ( (_BYTE)v213 );
        continue;
      case 4:
        Self = Scr_GetSelf(v6, v14->localId);
        parentId = Self;
        Array = Self;
        goto $EvalFieldVariableRef;
      case 5:
      case 110:
        v361 = v14->top;
        if ( v361->type != VAR_POINTER )
          goto $not_an_object2;
        if ( *((int *)p_localVars + 4) >= 63 )
          goto $ScriptMethodThreadCall_error;
        if ( p_m_varPub->bScriptUsageProfile )
        {
          v362 = __rdtsc();
          v621 = v362;
        }
        else
        {
          v362 = v621;
        }
        v14->localId = AllocChildThread(v6, v361->u.intValue, v14->localId);
        if ( p_m_varPub->bScriptUsageProfile )
        {
          v363 = __rdtsc();
          v364 = (__int64)v624;
          v624->scrProfileScriptThreadCreateTime += (((unsigned __int64)HIDWORD(v363) << 32) | (unsigned int)v363) - v362;
          ++*(_DWORD *)(v364 + 623528);
        }
        goto $ScriptMethodThreadCall;
      case 6:
        id = p_m_varPub->gameId;
        v614 = 0;
        continue;
      case 7:
        animId = p_m_varPub->animId;
        goto LABEL_641;
      case 8:
        Self = p_m_varPub->levelId;
        parentId = Self;
        Array = Self;
        goto $EvalFieldVariableRef;
      case 9:
        v196 = (unsigned __int64)v14->top;
        if ( v196 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2787, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v196 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v197 = ++v14->top;
        if ( v197 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2789, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v197 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_POINTER;
        localId = v14->localId;
        goto LABEL_511;
      case 10:
        Scr_EvalGreater(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 11:
        _R15 += 2;
        pos = _R15;
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        goto $LL422;
      case 12:
        Scr_EvalShiftRight(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 13:
        v469 = id;
        goto LABEL_1155;
      case 14:
        v449 = v14->top;
        if ( !v449 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1598, ASSERT_TYPE_ASSERT, "( value != nullptr )", (const char *)&queryFormat, "value != nullptr") )
          __debugbreak();
        type = v449->type;
        if ( type == VAR_INTEGER )
        {
          v451 = v449->u.intValue != 0;
          goto LABEL_1081;
        }
        if ( type == VAR_FLOAT )
        {
          if ( v449->u.floatValue != 0.0 )
          {
            v451 = 1;
            goto LABEL_1081;
          }
        }
        else
        {
          RemoveRefToValue(v6, (unsigned __int8)type, v449->u);
          v449->type = VAR_UNDEFINED;
          NameForType = Scr_GetNameForType(type);
          v453 = j_va("cannot cast %s to bool", NameForType);
          if ( !v6->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, v453);
            v6->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v6);
        }
        v451 = 0;
LABEL_1081:
        if ( v14->top->type == VAR_UNDEFINED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4524, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_UNDEFINED )", (const char *)&queryFormat, "pFs->top->type != VAR_UNDEFINED") )
          __debugbreak();
        v454 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        if ( !v451 )
          goto $loop_dec_top;
        _R15 += v454;
        --v14->top;
        continue;
      case 15:
        goto $LN1284;
      case 16:
        Scr_EvalEquality(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 17:
        id = **p_localVars;
        ClearVariableValue(v6, id);
        continue;
      case 18:
        v497 = v14->top;
        if ( v497->type != VAR_POINTER )
          goto $not_an_object2;
        parentId = v497->u.intValue;
        Array = parentId;
        if ( !IsFieldObject(v6, parentId) )
          goto $not_an_object2a;
        v498 = --v14->top;
        if ( v498->type != VAR_STRING )
        {
          v14->top = v498 + 1;
          p_m_varPub->error_index = 1;
          if ( v6->m_varPub.error_message )
            goto LABEL_1426;
          v579 = "first parameter of notify must evaluate to a string";
          goto LABEL_1425;
        }
        intValue = v498->u.intValue;
        v500 = v498 - 1;
        v501 = (__int64)v622;
        v502 = parentId;
        v14->top = v500;
        if ( *(_DWORD *)(v501 + 12) )
          Scr_CheckBreakonNotify(v6, v502, intValue, v500, _R15, v14->localId);
        Scr_DumpNotify(v6, v502, intValue, "script");
        ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
        VM_Notify(v6, v502, intValue, v14->top);
        _R15 = (char *)ScriptCodePos::GetScriptPos((ScriptCodePos *)p_localVars[3], v6);
        RemoveRefToObject(v6, v502);
        SL_RemoveRefToString(intValue);
        v503 = v14->top;
        if ( v503->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4881, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v503 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v504 = v14->top;
        if ( v504->type != VAR_PRECODEPOS )
        {
          do
          {
            RemoveRefToValue(v6, (unsigned __int8)v504->type, v504->u);
            v505 = --v14->top;
            if ( v505->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4886, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v505 - (char *)p_localVars - 2616) >> 4) )
              __debugbreak();
            v504 = v14->top;
          }
          while ( v504->type != VAR_PRECODEPOS );
          --v14->top;
          continue;
        }
        goto $loop_dec_top;
      case 19:
        v190 = (unsigned __int64)v14->top;
        if ( v190 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2762, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v190 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v191 = ++v14->top;
        if ( v191 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2764, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v191 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v192 = _R15;
        _R15 += 12;
        v14->top->type = VAR_VECTOR;
        v14->top->u = (VariableUnion)v192;
        continue;
      case 20:
        goto $LN1220;
      case 21:
        if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3750, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++v14->top <= (VariableValue *)p_localVars[1] || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3752, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          goto LABEL_1241;
        __debugbreak();
        v14->top->type = VAR_PRECODEPOS;
        continue;
      case 22:
      case 98:
        v160 = (unsigned __int64)v14->top;
        if ( v160 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2678, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v160 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v161 = ++v14->top;
        if ( v161 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2680, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v161 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v162 = v14->top;
        v163 = (unsigned __int8)*_R15;
        if ( !v162 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 11, ASSERT_TYPE_ASSERT, "( out )", (const char *)&queryFormat, "out") )
          __debugbreak();
        ++_R15;
        v162->u.intValue = v163;
        v162->type = VAR_INTEGER;
        continue;
      case 23:
      case 72:
        goto $LN1167;
      case 24:
        v289 = *(_DWORD *)_R15;
        _R15 += 4;
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        parentId = Scr_GetSelf(v6, v14->localId);
        Array = parentId;
        v290 = parentId;
        VariableFieldIndex = Scr_GetVariableFieldIndex(v6, parentId, v289);
        id = VariableFieldIndex;
        v292 = 1;
        v614 = 1;
        goto LABEL_740;
      case 25:
        v455 = v14->top;
        if ( v455->type == VAR_INTEGER )
        {
          v456 = v455->u.intValue != 0;
          v455->u.intValue = v456;
        }
        else
        {
          v456 = Scr_CastBool_NonInteger(v6, v455);
        }
        if ( v14->top->type != VAR_INTEGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4536, ASSERT_TYPE_ASSERT, "( pFs->top->type == VAR_INTEGER )", (const char *)&queryFormat, "pFs->top->type == VAR_INTEGER") )
          __debugbreak();
        v457 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        if ( v456 )
          goto $loop_dec_top;
        _R15 += v457;
        continue;
      case 26:
        v155 = (unsigned __int64)v14->top;
        if ( v155 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2663, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v155 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v156 = ++v14->top;
        if ( v156 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2665, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v156 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_UNDEFINED;
        continue;
      case 27:
        if ( Scr_CheckIfObjectsOrVariablesExceededDeveloperLimits(v6) )
          Scr_ErrorOnObjectsOrVariablesExceededDeveloperLimits(v6);
        v461 = Sys_Milliseconds();
        v462 = p_m_vmGlob;
        if ( v461 - p_m_vmGlob->starttime < scriptInfiniteLoopTime->current.integer || scriptIgnoreInfiniteLoops->current.enabled )
        {
          v476 = (__int64)v622;
          v622->jumpbackHistory[v622->jumpbackHistoryIndex] = _R15;
          *(_DWORD *)(v476 + 196408) = ((unsigned __int8)*(_DWORD *)(v476 + 196408) + 1) & 0x7F;
          _R15 += 2i64 - *(unsigned __int16 *)_R15;
          continue;
        }
        if ( !logScriptTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4589, ASSERT_TYPE_ASSERT, "( logScriptTimes )", (const char *)&queryFormat, "logScriptTimes") )
          __debugbreak();
        if ( logScriptTimes->current.enabled )
        {
          v463 = Sys_Milliseconds();
          Com_Printf(23, "EXCEED TIME: %d\n", v463);
        }
        if ( v462->loading || IsDebuggerConnected() )
        {
          if ( *((_BYTE *)p_localVars + 35386) && !IsDebuggerConnected() )
            *((_BYTE *)p_localVars + 35388) = 1;
          unsignedInt = scriptInfiniteLoopTime->current.unsignedInt;
          v474 = Sys_Milliseconds();
          Com_PrintWarning(23, "script runtime warning: potential infinite loop in script %d > %d.\n", (unsigned int)(v474 - v462->starttime), unsignedInt);
          v475.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
          Scr_PrintPrevCodePos(v6, 23, v475, 0, 1);
          _R15 += 2i64 - *(unsigned __int16 *)_R15;
          Scr_ResetTimeout(v6);
        }
        else
        {
          ScriptCodePos::SetScriptPos(&v14->pos, _R15);
          Com_Printf(23, "********************************\n");
          Com_Printf(23, "Recent loop history (from most recent) :\n");
          jumpbackHistoryIndex = v6->m_vmDebugPub.jumpbackHistoryIndex;
          do
          {
            if ( !jumpbackHistoryIndex )
              jumpbackHistoryIndex = 128;
            v465 = *(const char **)&v6->m_vmDebugPub.opcodePairs[2 * jumpbackHistoryIndex-- + 48828];
            if ( !v465 )
              break;
            v466.m_scriptPos = ScriptCodePos::CreateScriptPos(v465).m_scriptPos;
            Scr_PrintPrevCodePos(v6, 23, v466, 0, 1);
          }
          while ( jumpbackHistoryIndex != v6->m_vmDebugPub.jumpbackHistoryIndex );
          Com_Printf(23, "********************************\n");
          p_localVars = &p_m_vmPub->localVars;
          if ( p_m_vmPub->showError )
          {
            if ( p_m_vmPub->debugCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4650, ASSERT_TYPE_ASSERT, "( !pScrVmPub->debugCode )", (const char *)&queryFormat, "!pScrVmPub->debugCode") )
              __debugbreak();
            Scr_DumpScriptThreads(v6, 1);
            Scr_DumpScriptVariablesDefault(v6);
            if ( !v6->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, "potential infinite loop in script");
              v6->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v6);
          }
          if ( *((_BYTE *)p_localVars + 35386) )
          {
            Scr_DumpScriptMemoryUsage(v6);
            Scr_DumpScriptThreads(v6, 1);
            v6->m_vmPub.terminal_error = 1;
            v6->m_varPub.abort = 1;
            if ( !v6->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, "potential infinite loop in script");
              v6->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v6);
$LL404:
            if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4686, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
              __debugbreak();
            if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4688, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
              __debugbreak();
            v469 = id;
            Scr_EvalVariableField_Out(v6, id, v14->top);
            v470 = v14->top;
            v471 = v470->type;
            if ( v471 == VAR_INTEGER )
            {
              ++v470->u.intValue;
              if ( *_R15 != -121 )
              {
                v472 = 4693;
LABEL_1143:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", v472, ASSERT_TYPE_ASSERT, "( *((unsigned char*) local_pos) == OP_SetVariableField )", (const char *)&queryFormat, "*((unsigned char*) local_pos) == OP_SetVariableField") )
                  __debugbreak();
              }
              goto LABEL_1145;
            }
            v477 = Scr_GetNameForType(v471);
            v478 = j_va("++ must be applied to an int (applied to %s)", v477);
            if ( !v6->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v478);
              v6->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v6);
LABEL_1155:
            if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4701, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
              __debugbreak();
            if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4703, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
              __debugbreak();
            Scr_EvalVariableField_Out(v6, v469, v14->top);
            v479 = v14->top;
            v480 = v479->type;
            if ( v480 == VAR_INTEGER )
            {
              --v479->u.intValue;
              if ( *_R15 != -121 )
              {
                v472 = 4708;
                goto LABEL_1143;
              }
LABEL_1145:
              ++_R15;
              SetVariableFieldValue(v6, v469, v14->top);
              --v14->top;
              continue;
            }
            v481 = Scr_GetNameForType(v480);
            v482 = j_va("-- must be applied to an int (applied to %s)", v481);
            if ( !v6->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v482);
              v6->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v6);
$LN1284:
            Scr_EvalOr(v6, v14->top - 1, v14->top);
            --v14->top;
          }
          else
          {
            Com_PrintError(23, "script runtime error: potential infinite loop in script - killing thread.\n");
            v467.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
            Scr_PrintPrevCodePos(v6, 23, v467, 0, 1);
            Scr_ResetTimeout(v6);
            StartLocalId = GetStartLocalId(v6, v14->localId);
            if ( GetObjectType(v6, StartLocalId) != VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5419, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, startLocalId ) == VAR_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, startLocalId ) == VAR_THREAD") )
              __debugbreak();
            ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
            Scr_TerminateRunningThread(v6, StartLocalId);
            _R15 = (char *)ScriptCodePos::GetScriptPos((ScriptCodePos *)p_localVars[3], v6);
          }
        }
        continue;
      case 28:
        v458 = v14->top;
        if ( v458->type == VAR_INTEGER )
        {
          v459 = v458->u.intValue != 0;
          v458->u.intValue = v459;
        }
        else
        {
          v459 = Scr_CastBool_NonInteger(v6, v458);
        }
        if ( v14->top->type != VAR_INTEGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4548, ASSERT_TYPE_ASSERT, "( pFs->top->type == VAR_INTEGER )", (const char *)&queryFormat, "pFs->top->type == VAR_INTEGER") )
          __debugbreak();
        v460 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        if ( !v459 )
          goto $loop_dec_top;
        _R15 += v460;
        continue;
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
        v297 = _R15;
        if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3364, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
          __debugbreak();
        v298 = v15 - 29;
        goto LABEL_762;
      case 35:
        v297 = _R15;
        if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3373, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
          __debugbreak();
        v298 = (unsigned __int8)*_R15++;
LABEL_762:
        *((_DWORD *)p_localVars + 11) = v298;
        v299 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        m_funcCount = v6->m_funcCount;
        v301 = v299 - v6->m_funcBegin;
        builtInIndex = v299;
        v623 = v299;
        if ( v301 >= m_funcCount )
        {
          LODWORD(outparamcount) = m_funcCount;
          LODWORD(builtinIndex) = v301;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3382, ASSERT_TYPE_ASSERT, "(unsigned)( builtinIndex - scrContext.m_funcBegin ) < (unsigned)( scrContext.m_funcCount )", "builtinIndex - scrContext.m_funcBegin doesn't index scrContext.m_funcCount\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
            __debugbreak();
        }
        goto $CallBuiltin2;
      case 36:
        goto $SetLocalVariableFieldCached;
      case 37:
        v253 = *(_DWORD *)_R15;
        _R15 += 4;
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        ClearVariableField(v6, parentId, v253, v14->top);
        continue;
      case 38:
        v198 = (unsigned __int64)v14->top;
        if ( v198 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2796, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v198 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v199 = ++v14->top;
        if ( v199 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2798, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v199 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_POINTER;
        v14->top->u.intValue = p_m_varPub->levelId;
        AddRefToObject(v6, p_m_varPub->levelId);
        continue;
      case 39:
        Scr_EvalSizeValue(v6, v14->top);
        continue;
      case 40:
        v259 = v14->top;
        if ( v259->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3153, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v259 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v260 = v14->top;
        v261 = v6->m_vmPub.localVars[-(unsigned __int8)*_R15];
        if ( v260->type == VAR_CODEPOS )
        {
          ClearVariableValue(v6, v261);
          ++_R15;
        }
        else
        {
          SetVariableValue(v6, v261, v260);
          ++_R15;
          --v14->top;
        }
        continue;
      case 41:
      case 101:
        v356 = v14->top;
        if ( v356->type != VAR_POINTER )
          goto $not_an_object2;
        if ( *((int *)p_localVars + 4) >= 63 )
          goto $ScriptMethodThreadCall_error;
        if ( p_m_varPub->bScriptUsageProfile )
        {
          v357 = __rdtsc();
          v621 = v357;
        }
        else
        {
          v357 = v621;
        }
        v14->localId = AllocThread(v6, v356->u.intValue);
        if ( p_m_varPub->bScriptUsageProfile )
        {
          v358 = __rdtsc();
          v359 = (((unsigned __int64)HIDWORD(v358) << 32) | (unsigned int)v358) - v357;
          v360 = (__int64)v624;
          v624->scrProfileScriptThreadCreateTime += v359;
          ++*(_DWORD *)(v360 + 623528);
          --v14->top;
        }
        else
        {
$ScriptMethodThreadCall:
          --v14->top;
        }
        goto LABEL_836;
      case 42:
        if ( v14->top[-1].type != VAR_POINTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3027, ASSERT_TYPE_ASSERT, "( (pFs->top - 1)->type == VAR_POINTER )", (const char *)&queryFormat, "(pFs->top - 1)->type == VAR_POINTER") )
          __debugbreak();
        parentId = v14->top[-1].u.uintValue;
        v242 = parentId;
        Array = parentId;
        ArraySize = GetArraySize(v6, parentId);
        NewArrayVariable = GetNewArrayVariable(v6, v242, ArraySize);
        SetNewVariableValue(v6, NewArrayVariable, v14->top);
        --v14->top;
        continue;
      case 43:
        v506 = v14->top;
        if ( v506->type != VAR_POINTER )
          goto $not_an_object1;
        if ( !IsFieldObject(v6, v506->u.intValue) )
          goto $not_an_object1a;
        v507 = (unsigned int *)v14->top;
        if ( *((_BYTE *)v507 - 8) == 2 )
        {
          if ( p_m_varPub->bScriptUsageProfile )
          {
            v508 = __rdtsc();
            v621 = v508;
          }
          else
          {
            v508 = v621;
          }
          VM_Endon(v6, *v507, v14->localId, (scr_string_t)*(v507 - 4));
          if ( p_m_varPub->bScriptUsageProfile )
          {
            v509 = __rdtsc();
            v510 = (__int64)v624;
            v624->scrProfileScriptThreadCreateTime += (((unsigned __int64)HIDWORD(v509) << 32) | (unsigned int)v509) - v508;
            ++*(_DWORD *)(v510 + 623528);
          }
          v14->top -= 2;
          continue;
        }
        if ( !v6->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "first parameter of endon must evaluate to a string");
          v6->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v6);
$not_an_object1a:
        ObjectType = GetObjectType(v6, v14->top->u.uintValue);
        goto $not_an_object_error1;
      case 44:
        v245 = parentId;
        goto LABEL_658;
      case 45:
        Scr_EvalShiftLeft(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 46:
        goto $EvalLocalArrayRefCached;
      case 47:
        v632 = *v14->top;
$skip_return:
        SafeParentLocalId = GetSafeParentLocalId(v6, v14->localId);
        Scr_KillThread(v6, v14->localId);
        *p_localVars -= v14->localVarCount;
        v150 = --v14->top;
        if ( v150->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2641, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v150 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v151 = v14->top;
        if ( v151->type != VAR_CODEPOS )
        {
          do
          {
            RemoveRefToValue(v6, (unsigned __int8)v151->type, v151->u);
            v152 = --v14->top;
            if ( v152->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2646, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v152 - (char *)p_localVars - 2616) >> 4) )
              __debugbreak();
            v151 = v14->top;
          }
          while ( v151->type != VAR_CODEPOS );
          p_m_varPub = v625;
        }
        --*((_DWORD *)p_localVars + 4);
        p_localVars[3] -= 10;
        v153 = v14->top;
        if ( SafeParentLocalId )
        {
          if ( v153->type != VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2658, ASSERT_TYPE_ASSERT, "( ( pFs->top->type == VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type == VAR_CODEPOS )", ((char *)v153 - (char *)p_localVars - 2616) >> 4) )
            __debugbreak();
          *v14->top = v632;
$end:
          if ( v14->top == v14->startTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2533, ASSERT_TYPE_ASSERT, "( pFs->top != pFs->startTop )", (const char *)&queryFormat, "pFs->top != pFs->startTop") )
            __debugbreak();
          RemoveRefToObject(v6, v14->localId);
          v14->localVarCount = p_localVars[3][3];
          v14->localId = SafeParentLocalId;
          _R15 = (char *)ScriptCodePos::GetScriptPos((ScriptCodePos *)p_localVars[3], v6);
          if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2575, ASSERT_TYPE_ASSERT, "( local_pos )", (const char *)&queryFormat, "local_pos") )
            __debugbreak();
          v10 = !p_m_varPub->bScriptUsageProfile;
          v17 = v612;
          if ( !v10 )
          {
            v574 = (__int64)v622;
            v378 = (__int64)v624;
            v379 = __rdtsc();
            v621 = v379;
            ++v624->scrProfileScriptUsageOpCount;
            ++*(_QWORD *)(*(_QWORD *)(v574 + 24) + 88i64);
            v575 = *(_QWORD *)(v574 + 40);
            if ( v575 )
              ++*(_DWORD *)(v575 + 16);
            if ( *(_DWORD *)(v378 + 623512) >= 0xC350u )
            {
LABEL_1408:
              UpdateCurrentFuncInfo(v6, _R15, 0);
              v622->embeddedTime = 0i64;
              v576 = __rdtsc();
              *(_QWORD *)(v378 + 623536) += (((unsigned __int64)HIDWORD(v576) << 32) | (unsigned int)v576) - v379;
              continue;
            }
            Scr_UpdateScriptUsageTime(v6, codePos, __rdtsc() - v612, builtInTime, builtInIndex);
            codePos = _R15;
            builtInTime = 0i64;
            v634 = 0i64;
            builtInIndex = 0;
            v623 = 0;
            UpdateCurrentFuncInfo(v6, _R15, 0);
            v17 = __rdtsc();
            v612 = v17;
            *(_QWORD *)(v378 + 623536) += v17 - v621;
          }
          goto $loop_0;
        }
        startTop = v14->startTop;
        if ( v153 != startTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2653, ASSERT_TYPE_ASSERT, "( ( pFs->top == pFs->startTop ) )", "%s\n\t( pFs->top - pFs->startTop ) = 0x%llx", "( pFs->top == pFs->startTop )", v153 - startTop) )
          __debugbreak();
        v14->top[1] = v632;
$thread_return:
        m_threadCount = v6->m_threadCount;
        v618 = -1;
        if ( m_threadCount )
        {
          v6->m_threadCount = m_threadCount - 1;
          RemoveRefToObject(v6, v14->localId);
          *v14 = *(function_stack_t *)p_localVars[3];
          v14->top->type = *((_BYTE *)p_localVars[3] + 32);
          ++v14->top;
          ScriptPos = ScriptCodePos::GetScriptPos(&v14->pos, v6);
          v10 = !p_m_varPub->bScriptUsageProfile;
          _R15 = (char *)ScriptPos;
          v17 = v612;
          if ( !v10 )
          {
            v130 = (__int64)v624;
            v131 = (__int64)v622;
            v621 = __rdtsc();
            ++v624->scrProfileScriptUsageOpCount;
            ++*(_QWORD *)(*(_QWORD *)(v131 + 24) + 88i64);
            v132 = *(_QWORD *)(v131 + 40);
            if ( v132 )
              ++*(_DWORD *)(v132 + 16);
            if ( *(_DWORD *)(v130 + 623512) >= 0xC350u )
            {
              if ( _R15 )
              {
                if ( Scr_IsInOpcodeMemory(v6, _R15) )
                {
                  SourceBuffer_Fast = Scr_GetSourceBuffer_Fast(v6, _R15 - 1);
                  v562 = SourceBuffer_Fast;
                  if ( SourceBuffer_Fast >= v6->m_parserPub.sourceBufferLookupLen )
                  {
                    LODWORD(outparamcount) = v6->m_parserPub.sourceBufferLookupLen;
                    LODWORD(builtinIndex) = SourceBuffer_Fast;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2030, ASSERT_TYPE_ASSERT, "(unsigned)( bufferIndex ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "bufferIndex doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
                      __debugbreak();
                  }
                  v6->m_vmDebugPub.currentSrcFile = &v6->m_parserPub.sourceBufferLookup[v562];
                  v6->m_vmDebugPub.currentSrcFuncStatic = NULL;
                  v6->m_vmDebugPub.currentSrcFuncDynamic = NULL;
                  currentSrcFile = v6->m_vmDebugPub.currentSrcFile;
                  functionLookupLen = currentSrcFile->functionLookupLen;
                  if ( functionLookupLen )
                  {
                    v565 = functionLookupLen - 1;
                    v566 = 0;
                    v567 = 0;
                    v568 = 0;
                    if ( (int)(functionLookupLen - 1) >= 0 )
                    {
                      functionLookupStatic = currentSrcFile->functionLookupStatic;
                      do
                      {
                        v567 = (v565 + v566) / 2;
                        v570 = (unsigned int)v567;
                        v572 = 0;
                        if ( functionLookupStatic[v570].codePos <= _R15 )
                        {
                          codePosEnd = (unsigned __int64)functionLookupStatic[v570].codePosEnd;
                          if ( !codePosEnd || codePosEnd >= (unsigned __int64)_R15 )
                            v572 = 1;
                        }
                        v568 = (v565 + v566) / 2;
                        if ( v572 )
                          break;
                        if ( functionLookupStatic[v567].codePos <= _R15 )
                        {
                          if ( functionLookupStatic[v567].codePosEnd < _R15 )
                            v566 = v567 + 1;
                        }
                        else
                        {
                          v565 = v567 - 1;
                        }
                        v568 = v567;
                      }
                      while ( v566 <= v565 );
                    }
                    if ( v568 >= functionLookupLen )
                    {
                      LODWORD(outparamcount) = currentSrcFile->functionLookupLen;
                      LODWORD(builtinIndex) = v567;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2065, ASSERT_TYPE_ASSERT, "(unsigned)( funcMid ) < (unsigned)( pScrVmDebugPub->currentSrcFile->functionLookupLen )", "funcMid doesn't index pScrVmDebugPub->currentSrcFile->functionLookupLen\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
                        __debugbreak();
                    }
                    v6->m_vmDebugPub.currentSrcFuncStatic = &v6->m_vmDebugPub.currentSrcFile->functionLookupStatic[v567];
                    v6->m_vmDebugPub.currentSrcFuncDynamic = &v6->m_vmDebugPub.currentSrcFile->functionLookupDynamic[v567];
                  }
                }
                v130 = (__int64)v624;
              }
              v622->embeddedTime = 0i64;
              v573 = __rdtsc();
              *(_QWORD *)(v130 + 623536) += (((unsigned __int64)HIDWORD(v573) << 32) | (unsigned int)v573) - v621;
              continue;
            }
            v133 = v6->m_vmDebugPub.embeddedTime;
            v134 = builtInTime;
            v6->m_vmDebugPub.embeddedTime = 0i64;
            v135 = v134 - v133;
            v136 = __rdtsc() - v133 - v612;
            v6->m_vmDebugPub.currentSrcFile->allOpTotal += v136;
            v6->m_vmDebugPub.currentSrcFile->allOpTotalBuiltIn += v135;
            if ( v6->m_vmDebugPub.currentSrcFile->functionLookupLen )
            {
              v137 = builtInIndex;
              v6->m_vmDebugPub.currentSrcFuncDynamic->allOpTotal += v136;
              v6->m_vmDebugPub.currentSrcFuncDynamic->allOpTotalBuiltIn += v135;
              if ( v137 )
                Scr_UpdateScriptUsageTimeBuiltIn(v6, v137, v6->m_vmDebugPub.currentSrcFile, v6->m_vmDebugPub.currentSrcFuncStatic, v6->m_vmDebugPub.currentSrcFuncDynamic);
            }
            codePos = _R15;
            builtInTime = 0i64;
            v634 = 0i64;
            builtInIndex = 0;
            v623 = 0;
            if ( _R15 && Scr_IsInOpcodeMemory(v6, _R15) )
            {
              v138 = Scr_GetSourceBuffer_Fast(v6, _R15 - 1);
              v139 = v138;
              if ( v138 >= v6->m_parserPub.sourceBufferLookupLen )
              {
                LODWORD(outparamcount) = v6->m_parserPub.sourceBufferLookupLen;
                LODWORD(builtinIndex) = v138;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2030, ASSERT_TYPE_ASSERT, "(unsigned)( bufferIndex ) < (unsigned)( scrContext.m_parserPub.sourceBufferLookupLen )", "bufferIndex doesn't index scrContext.m_parserPub.sourceBufferLookupLen\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
                  __debugbreak();
              }
              v6->m_vmDebugPub.currentSrcFile = &v6->m_parserPub.sourceBufferLookup[v139];
              v6->m_vmDebugPub.currentSrcFuncStatic = NULL;
              v6->m_vmDebugPub.currentSrcFuncDynamic = NULL;
              v140 = v6->m_vmDebugPub.currentSrcFile;
              v141 = v140->functionLookupLen;
              if ( v141 )
              {
                v142 = v141 - 1;
                v143 = 0;
                v144 = 0;
                v145 = 0;
                if ( (int)(v141 - 1) >= 0 )
                {
                  v146 = v140->functionLookupStatic;
                  do
                  {
                    v144 = (v142 + v143) / 2;
                    v147 = (unsigned int)v144;
                    v149 = 0;
                    if ( v146[v147].codePos <= codePos )
                    {
                      v148 = (unsigned __int64)v146[v147].codePosEnd;
                      if ( !v148 || v148 >= (unsigned __int64)codePos )
                        v149 = 1;
                    }
                    v145 = (v142 + v143) / 2;
                    if ( v149 )
                      break;
                    if ( v146[v144].codePos <= codePos )
                    {
                      if ( v146[v144].codePosEnd < codePos )
                        v143 = v144 + 1;
                    }
                    else
                    {
                      v142 = v144 - 1;
                    }
                    v145 = v144;
                  }
                  while ( v143 <= v142 );
                  p_localVars = &p_m_vmPub->localVars;
                }
                if ( v145 >= v141 )
                {
                  LODWORD(outparamcount) = v140->functionLookupLen;
                  LODWORD(builtinIndex) = v144;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2065, ASSERT_TYPE_ASSERT, "(unsigned)( funcMid ) < (unsigned)( pScrVmDebugPub->currentSrcFile->functionLookupLen )", "funcMid doesn't index pScrVmDebugPub->currentSrcFile->functionLookupLen\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
                    __debugbreak();
                }
                v6->m_vmDebugPub.currentSrcFuncStatic = &v6->m_vmDebugPub.currentSrcFile->functionLookupStatic[v144];
                v6->m_vmDebugPub.currentSrcFuncDynamic = &v6->m_vmDebugPub.currentSrcFile->functionLookupDynamic[v144];
              }
            }
            v17 = __rdtsc();
            v612 = v17;
            v624->scrProfileCalcTimeTotal += v17 - v621;
          }
          goto $loop_0;
        }
        if ( v6->m_errorLevel < 0 )
        {
          LODWORD(outparamcount) = v6->m_errorLevel;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5283, ASSERT_TYPE_ASSERT, "( ( scrContext.m_errorLevel >= 0 ) )", "%s\n\t( scrContext.m_errorLevel ) = %i", "( scrContext.m_errorLevel >= 0 )", outparamcount) )
            __debugbreak();
        }
        --v6->m_errorLevel;
        if ( p_m_varPub->bScriptUsageProfile )
        {
          v601 = (__int64)v624;
          v602 = __rdtsc();
          v621 = v602;
          ++v624->scrProfileScriptUsageOpCount;
          v603 = (__int64)v622;
          ++v622->currentSrcFile->totalOps;
          v604 = *(_QWORD *)(v603 + 40);
          if ( v604 )
            ++*(_DWORD *)(v604 + 16);
          if ( *(_DWORD *)(v601 + 623512) >= 0xC350u )
            *(_QWORD *)(v603 + 56) = 0i64;
          else
            Scr_UpdateScriptUsageTime(v6, codePos, __rdtsc() - v612, builtInTime, builtInIndex);
          v605 = __rdtsc();
          *(_QWORD *)(v601 + 623536) += (((unsigned __int64)HIDWORD(v605) << 32) | (unsigned int)v605) - v602;
        }
        return v14->localId;
      case 48:
        ++*p_localVars;
        ++v14->localVarCount;
        v212 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        goto LABEL_551;
      case 49:
        goto $SafeSetVariableFieldCached;
      case 50:
        v175 = (unsigned __int64)v14->top;
        if ( v175 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2720, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v175 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v176 = ++v14->top;
        if ( v176 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2722, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v176 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_BUILTIN_FUNCTION;
        goto $read_ushort;
      case 51:
      case 150:
        goto $LN1156;
      case 52:
        goto $LN1214;
      case 53:
      case 138:
        goto LABEL_829;
      case 54:
        parentId = Scr_GetSelf(v6, v14->localId);
        Array = parentId;
        v245 = parentId;
        if ( IsFieldObject(v6, parentId) )
          continue;
        goto $not_an_object;
      case 55:
        v200 = (unsigned __int64)v14->top;
        if ( v200 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2805, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v200 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v201 = ++v14->top;
        if ( v201 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2807, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v201 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v6, p_m_varPub->gameId, v14->top);
        continue;
      case 56:
        v281 = *(_DWORD *)_R15;
        v282 = v619;
        _R15 += 4;
        for ( i = 0; i < 5; ++i )
        {
          if ( SL_GetCanonicalString(levelVariables[i].name) == v281 )
          {
            v284 = j_va("cannot set constant level field %s", levelVariables[i].name);
            if ( !v282->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v284);
              v282->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v282);
          }
        }
        LODWORD(v15) = v628;
        p_localVars = &p_m_vmPub->localVars;
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        v285 = v281;
        v6 = v619;
        levelId = v625->levelId;
        goto LABEL_737;
      case 57:
        goto $LN957_0;
      case 58:
        v193 = (unsigned __int64)v14->top;
        if ( v193 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2778, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v193 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v194 = ++v14->top;
        if ( v194 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2780, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v194 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_POINTER;
        localId = Scr_GetSelf(v6, v14->localId);
LABEL_511:
        v14->top->u.intValue = localId;
        AddRefToObject(v6, v14->top->u.uintValue);
        continue;
      case 59:
$skip_end:
        SafeParentLocalId = GetSafeParentLocalId(v6, v14->localId);
        Scr_KillThread(v6, v14->localId);
        *p_localVars -= v14->localVarCount;
        v123 = v14->top;
        if ( v123->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2514, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v123 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v124 = v14->top;
        if ( v124->type != VAR_CODEPOS )
        {
          do
          {
            RemoveRefToValue(v6, (unsigned __int8)v124->type, v124->u);
            v125 = --v14->top;
            if ( v125->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2519, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v125 - (char *)p_localVars - 2616) >> 4) )
              __debugbreak();
            v124 = v14->top;
          }
          while ( v124->type != VAR_CODEPOS );
          p_m_varPub = v625;
        }
        --*((_DWORD *)p_localVars + 4);
        p_localVars[3] -= 10;
        v126 = v14->top;
        if ( SafeParentLocalId )
        {
          if ( v126->type != VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2530, ASSERT_TYPE_ASSERT, "( ( pFs->top->type == VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type == VAR_CODEPOS )", ((char *)v126 - (char *)p_localVars - 2616) >> 4) )
            __debugbreak();
          v14->top->type = VAR_UNDEFINED;
          goto $end;
        }
        v127 = v14->startTop;
        if ( v126 != v127 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2526, ASSERT_TYPE_ASSERT, "( ( pFs->top == pFs->startTop ) )", "%s\n\t( pFs->top - pFs->startTop ) = 0x%llx", "( pFs->top == pFs->startTop )", v126 - v127) )
          __debugbreak();
        goto $thread_end;
      case 60:
        parentId = Scr_GetSelf(v6, v14->localId);
        Array = parentId;
        v245 = parentId;
        if ( IsFieldObject(v6, parentId) )
        {
LABEL_658:
          if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3068, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
            __debugbreak();
          if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3070, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
            __debugbreak();
          v250 = *(_DWORD *)_R15;
          _R15 += 4;
          Scr_FindVariableField_Out(v6, v245, v250, v14->top);
          continue;
        }
        if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3058, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3060, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        _R15 += 4;
        pos = _R15;
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
$not_an_object:
        ObjectType = GetObjectType(v6, v245);
        goto $not_an_object_error;
      case 61:
        Scr_EvalLessEqual(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 62:
        v214 = (unsigned __int64)v14->top;
        if ( v214 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2895, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v214 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v215 = ++v14->top;
        if ( v215 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2897, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v215 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v6, **p_localVars, v14->top);
        continue;
      case 63:
        v216 = (unsigned __int64)v14->top;
        if ( v216 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2902, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v216 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v217 = ++v14->top;
        if ( v217 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2904, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v217 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v6, *(v6->m_vmPub.localVars - 1), v14->top);
        continue;
      case 64:
        v218 = (unsigned __int64)v14->top;
        if ( v218 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2909, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v218 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v219 = ++v14->top;
        if ( v219 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2911, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v219 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v6, *(v6->m_vmPub.localVars - 2), v14->top);
        continue;
      case 65:
        v220 = (unsigned __int64)v14->top;
        if ( v220 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2916, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v220 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v221 = ++v14->top;
        if ( v221 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2918, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v221 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v6, *(v6->m_vmPub.localVars - 3), v14->top);
        continue;
      case 66:
        v222 = (unsigned __int64)v14->top;
        if ( v222 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2923, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v222 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v223 = ++v14->top;
        if ( v223 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2925, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v223 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v6, *(v6->m_vmPub.localVars - 4), v14->top);
        continue;
      case 67:
        v224 = (unsigned __int64)v14->top;
        if ( v224 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2930, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v224 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v225 = ++v14->top;
        if ( v225 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2932, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v225 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v6, *(v6->m_vmPub.localVars - 5), v14->top);
        continue;
      case 68:
        v226 = (unsigned __int64)v14->top;
        if ( v226 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2937, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v226 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v227 = ++v14->top;
        if ( v227 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2939, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v227 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v6, v6->m_vmPub.localVars[-(unsigned __int8)*_R15++], v14->top);
        continue;
      case 69:
        ++*p_localVars;
        ++v14->localVarCount;
        v230 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        goto LABEL_614;
      case 70:
        goto $LN1188;
      case 71:
        parentId = Scr_EvalVariableObject(v6, v6->m_vmPub.localVars[-(unsigned __int8)*_R15]);
        Array = parentId;
        goto LABEL_1020;
      case 73:
        v172 = (unsigned __int64)v14->top;
        if ( v172 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2712, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v172 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v173 = ++v14->top;
        if ( v173 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2714, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v173 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_INTEGER;
        v174 = *(_DWORD *)_R15;
        _R15 += 4;
        v14->top->u.intValue = v174;
        continue;
      case 74:
        v320 = v14->top;
        if ( v320->type != VAR_FUNCTION )
        {
          RemoveRefToValue(v6, (unsigned __int8)v320->type, v320->u);
          --v14->top;
          v322 = Scr_GetNameForType(v14->top[1].type);
          v323 = j_va("%s is not a function pointer", v322);
          if ( !v6->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, v323);
            v6->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v6);
$LN1167:
          if ( *((int *)p_localVars + 4) >= 63 )
          {
            do
            {
              p_m_varPub->error_index = 1;
              if ( !v6->m_varPub.error_message )
              {
                Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
                v6->m_varPub.error_message = error_message;
              }
              Scr_ErrorInternal(v6);
LABEL_829:
              ;
            }
            while ( *((int *)p_localVars + 4) >= 63 );
            LODWORD(v15) = v628;
            if ( p_m_varPub->bScriptUsageProfile )
              v621 = __rdtsc();
            v324 = Scr_GetSelf(v6, v14->localId);
            v325 = AllocChildThread(v6, v324, v14->localId);
          }
          else
          {
            if ( p_m_varPub->bScriptUsageProfile )
              v621 = __rdtsc();
            v324 = Scr_GetSelf(v6, v14->localId);
            v325 = AllocThread(v6, v324);
          }
          v14->localId = v325;
          if ( p_m_varPub->bScriptUsageProfile )
          {
            v326 = __rdtsc();
            v327 = (__int64)v624;
            v624->scrProfileScriptThreadCreateTime += (((unsigned __int64)HIDWORD(v326) << 32) | (unsigned int)v326) - v621;
            ++*(_DWORD *)(v327 + 623528);
          }
          AddRefToObject(v6, v324);
LABEL_836:
          v328 = _R15 + 3;
          *((_QWORD *)p_localVars[3] + 3) = v14->startTop;
          v329 = (unsigned __int8)_R15[3];
          _R15 += (__int64)(int)(*(_DWORD *)_R15 << 8) >> 8;
          v14->startTop = &v14->top[-v329];
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], v328 + 1);
          goto $thread_call;
        }
        u = v320->u;
        v14->top = v320 - 1;
        if ( v320[-1].type != VAR_POINTER )
          goto $not_an_object2;
        if ( *((int *)p_localVars + 4) < 63 )
        {
          v14->localId = AllocFunction(v6, v320[-1].u.uintValue, v14->localId);
          --v14->top;
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
          _R15 = (char *)u.scriptCodePosValue;
          goto $function_call;
        }
        goto $ScriptMethodThreadCall_error;
      case 75:
        goto $CheckClearParams;
      case 76:
        v295 = *(_DWORD *)_R15;
        _R15 += 4;
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        v285 = v295;
        levelId = v625->animId;
LABEL_737:
        v287 = v14->top;
        Variable = GetVariable(v6, levelId, v285);
        SetVariableValue(v6, Variable, v287);
        --v14->top;
        continue;
      case 78:
        Scr_EvalMinus(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 79:
      case 117:
        if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3758, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3760, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        v14->top->type = VAR_PRECODEPOS;
        goto $LN1149;
      case 80:
        v169 = (unsigned __int64)v14->top;
        if ( v169 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2704, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v169 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v170 = ++v14->top;
        if ( v170 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2706, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v170 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_INTEGER;
        v171 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        v14->top->u.intValue = -v171;
        continue;
      case 81:
        v164 = (unsigned __int64)v14->top;
        if ( v164 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2686, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v164 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v165 = ++v14->top;
        if ( v165 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2688, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v165 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_INTEGER;
        v166 = -(unsigned __int8)*_R15++;
        v14->top->u.intValue = v166;
        continue;
      case 82:
        ++*p_localVars;
        ++v14->localVarCount;
        v254 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        goto LABEL_673;
      case 83:
        Scr_EvalGreaterEqual(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 84:
        v14->top -= 2;
        Scr_CastVector(v6, v14->top);
        continue;
      case 85:
        v177 = (unsigned __int64)v14->top;
        if ( v177 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2727, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v177 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v178 = ++v14->top;
        if ( v178 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2729, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v178 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_BUILTIN_METHOD;
        goto $read_ushort;
      case 86:
        v525 = *(unsigned __int16 *)_R15;
        v6->m_caseCount = v525;
        _R15 += 7 * v525 + 2;
        continue;
      case 87:
        ClearArray(v6, id, v14->top);
        --v14->top;
        continue;
      case 88:
        RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
        --v14->top;
        continue;
      case 89:
        v431 = v14->top;
        if ( v431->type == VAR_INTEGER )
          v431->u.intValue = v431->u.intValue != 0;
        else
          Scr_CastBool_NonInteger(v6, v431);
        continue;
      case 90:
        v231 = id;
        goto $EvalArrayRef;
      case 91:
        ++*p_localVars;
        ++v14->localVarCount;
        v296 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        goto LABEL_751;
      case 92:
        v157 = (unsigned __int64)v14->top;
        if ( v157 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2670, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v157 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v158 = ++v14->top;
        if ( v158 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2672, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v158 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v159 = v14->top;
        if ( !v159 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 11, ASSERT_TYPE_ASSERT, "( out )", (const char *)&queryFormat, "out") )
          __debugbreak();
        v159->u.intValue = 0;
        v159->type = VAR_INTEGER;
        continue;
      case 93:
        goto $LL335;
      case 94:
$LL422:
        if ( !Scr_IsInOpcodeMemory(v6, _R15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4789, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, local_pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, local_pos )") )
          __debugbreak();
        if ( depth )
        {
          if ( v14->localId != p_localVars[3][2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4794, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
            __debugbreak();
          Scr_ValidateNotInProfileBlock(v6, "waittill");
        }
        v483 = v14->top;
        if ( v483->type != VAR_POINTER )
          goto $not_an_object2;
        if ( !IsFieldObject(v6, v483->u.intValue) )
          goto $not_an_object2a;
        v632.u.intValue = v14->top->u.intValue;
        v484 = --v14->top;
        if ( v484->type != VAR_STRING )
        {
          v14->top = v484 + 1;
          p_m_varPub->error_index = 3;
          if ( !v6->m_varPub.error_message )
          {
            v579 = "first parameter of waittill must evaluate to a string";
LABEL_1425:
            Core_strcpy_truncate(error_message, 0x400ui64, v579);
            v6->m_varPub.error_message = error_message;
          }
LABEL_1426:
          Scr_ErrorInternal(v6);
$not_an_object2a:
          ObjectType = GetObjectType(v6, v14->top->u.uintValue);
          p_m_varPub->error_index = 2;
          goto $not_an_object_error;
        }
        v485 = v484->u.intValue;
        v14->top = v484 - 1;
        if ( GetObjectType(v6, v632.u.uintValue) == VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4811, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_THREAD") )
          __debugbreak();
        if ( GetObjectType(v6, v632.u.uintValue) == VAR_NOTIFY_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4812, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_NOTIFY_THREAD") )
          __debugbreak();
        if ( GetObjectType(v6, v632.u.uintValue) == VAR_TIME_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4813, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_TIME_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_TIME_THREAD") )
          __debugbreak();
        if ( GetObjectType(v6, v632.u.uintValue) == VAR_CHILD_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4814, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_CHILD_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_CHILD_THREAD") )
          __debugbreak();
        if ( GetObjectType(v6, v632.u.uintValue) == VAR_DEAD_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4815, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_DEAD_THREAD )", (const char *)&queryFormat, "GetObjectType( scrContext, tempValue.u.pointerValue ) != VAR_DEAD_THREAD") )
          __debugbreak();
        value.type = VAR_STACK;
        v486.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
        value.u.scriptCodePosValue = (unsigned __int64)VM_ArchiveStack(v6, v14->top, v486);
        ObjectVariable = GetObjectVariable(v6, p_m_varPub->notifyArrayId, v632.u.uintValue);
        Array = GetArray(v6, ObjectVariable);
        v488 = GetVariable(v6, Array, v485);
        v489 = GetArray(v6, v488);
        v490 = v14->localId;
        Array = v489;
        NewObjectVariable = GetNewObjectVariable(v6, v489, v490);
        SetNewVariableValue(v6, NewObjectVariable, &value);
        v632.type = VAR_POINTER;
        v492 = Scr_GetSelf(v6, v14->localId);
        v493 = GetObjectVariable(v6, p_m_varPub->pauseArrayId, v492);
        v494 = GetArray(v6, v493);
        v495 = v14->localId;
        parentId = v494;
        Array = v494;
        v496 = GetNewObjectVariable(v6, v494, v495);
        SetNewVariableValue(v6, v496, &v632);
        Scr_SetThreadNotifyName(v6, v14->localId, (scr_string_t)v485);
        goto $thread_end;
      case 95:
        v186 = (unsigned __int64)v14->top;
        if ( v186 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2755, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v186 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v187 = ++v14->top;
        if ( v187 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2757, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v187 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_ISTRING;
        goto $read_string;
      case 96:
      case 152:
$LN1149:
        if ( *((int *)p_localVars + 4) < 63 )
        {
          v311 = Scr_GetSelf(v6, v14->localId);
          AddRefToObject(v6, v311);
          v14->localId = AllocFunction(v6, v311, v14->localId);
          v312 = &_R15[(__int64)(int)(*(_DWORD *)_R15 << 8) >> 8];
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15 + 3);
          _R15 = v312;
          goto $function_call;
        }
        if ( !v6->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
          v6->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v6);
$LN1152:
        v313 = v14->top;
        if ( v313->type != VAR_FUNCTION )
          goto LABEL_812;
        if ( *((int *)p_localVars + 4) < 63 )
        {
          v314 = Scr_GetSelf(v6, v14->localId);
          AddRefToObject(v6, v314);
          v14->localId = AllocFunction(v6, v314, v14->localId);
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
          v315 = (char **)v14->top;
          _R15 = *v315;
          v14->top = (VariableValue *)(v315 - 2);
          goto $function_call;
        }
        p_m_varPub->error_index = 1;
        if ( !v6->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
          v6->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v6);
        v313 = v14->top;
LABEL_812:
        v316 = Scr_GetNameForType(v313->type);
        v317 = j_va("%s is not a function pointer", v316);
        if ( !v6->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, v317);
          v6->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v6);
$LN1156:
        v318 = v14->top;
        if ( v318->type != VAR_POINTER )
          goto $not_an_object1;
        if ( *((int *)p_localVars + 4) < 63 )
        {
          v14->localId = AllocFunction(v6, v318->u.intValue, v14->localId);
          --v14->top;
          v319 = &_R15[(__int64)(int)(*(_DWORD *)_R15 << 8) >> 8];
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15 + 3);
          _R15 = v319;
          goto $function_call;
        }
        if ( !v6->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
          v6->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v6);
$not_an_object1:
        ObjectType = v14->top->type;
$not_an_object_error1:
        p_m_varPub->error_index = 1;
        goto $not_an_object_error;
      case 97:
        parentId = p_m_varPub->animId;
        Array = parentId;
        continue;
      case 99:
        v228 = (unsigned __int64)v14->top;
        if ( v228 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2945, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v228 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v229 = ++v14->top;
        if ( v229 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2947, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v229 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        Scr_EvalVariable_Out(v6, v6->m_vmPub.localVars[-(unsigned __int8)*_R15++], v14->top);
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
$LN957_0:
        Scr_EvalArray(v6, v14->top, v14->top - 1);
        --v14->top;
        continue;
      case 100:
        Scr_EvalMod(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 102:
        v167 = (unsigned __int64)v14->top;
        if ( v167 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2695, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v167 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v168 = ++v14->top;
        if ( v168 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2697, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v168 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_INTEGER;
$read_ushort:
        v179 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        v14->top->u.intValue = v179;
        continue;
      case 103:
        v262 = v14->top;
        if ( v262->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3165, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v262 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v263 = v14->top;
        v17 = v612;
        if ( v263->type == VAR_CODEPOS )
          goto $loop_0;
        do
        {
          RemoveRefToValue(v6, (unsigned __int8)v263->type, v263->u);
          v264 = --v14->top;
          if ( v264->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3170, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v264 - (char *)p_localVars - 2616) >> 4) )
            __debugbreak();
          v263 = v14->top;
        }
        while ( v263->type != VAR_CODEPOS );
        LODWORD(v15) = v628;
        continue;
      case 104:
        v365 = v14->top;
        if ( v365->type == VAR_FUNCTION )
        {
          v341 = v365->u;
          v366 = v365 - 1;
          v14->top = v366;
          if ( v366->type != VAR_POINTER )
            goto $not_an_object2;
          if ( *((int *)p_localVars + 4) >= 63 )
            goto $ScriptMethodThreadCall_error;
          if ( p_m_varPub->bScriptUsageProfile )
            v621 = __rdtsc();
          v367 = AllocThread(v6, v366->u.intValue);
LABEL_920:
          v14->localId = v367;
          if ( p_m_varPub->bScriptUsageProfile )
          {
            v375 = __rdtsc();
            v376 = (__int64)v624;
            v624->scrProfileScriptThreadCreateTime += (((unsigned __int64)HIDWORD(v375) << 32) | (unsigned int)v375) - v621;
            ++*(_DWORD *)(v376 + 623528);
          }
          --v14->top;
LABEL_923:
          *((_QWORD *)p_localVars[3] + 3) = v14->startTop;
          v14->startTop = &v14->top[-(unsigned __int8)*_R15];
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15 + 1);
          _R15 = (char *)v341.scriptCodePosValue;
$thread_call:
          *((_QWORD *)p_localVars[3] + 2) = v14->startTop;
          *((_BYTE *)p_localVars[3] + 32) = v14->startTop->type;
          v14->startTop->type = VAR_PRECODEPOS;
          ++v6->m_threadCount;
$function_call:
          __asm { prefetcht0 byte ptr [r15] }
          p_localVars[3][3] = v14->localVarCount;
          v14->localVarCount = 0;
          ++*((_DWORD *)p_localVars + 4);
          p_localVars[3] += 10;
          p_localVars[3][2] = v14->localId;
          if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5169, ASSERT_TYPE_ASSERT, "( local_pos )", (const char *)&queryFormat, "local_pos") )
            __debugbreak();
          v10 = !p_m_varPub->bScriptUsageProfile;
          v17 = v612;
          if ( !v10 )
          {
            v377 = (__int64)v622;
            v378 = (__int64)v624;
            v379 = __rdtsc();
            v621 = v379;
            ++v624->scrProfileScriptUsageOpCount;
            ++*(_QWORD *)(*(_QWORD *)(v377 + 24) + 88i64);
            v380 = *(_QWORD *)(v377 + 40);
            if ( v380 )
              ++*(_DWORD *)(v380 + 16);
            if ( *(_DWORD *)(v378 + 623512) >= 0xC350u )
              goto LABEL_1408;
            Scr_UpdateScriptUsageTime(v6, codePos, __rdtsc() - v612, builtInTime, builtInIndex);
            codePos = _R15;
            builtInTime = 0i64;
            v634 = 0i64;
            builtInIndex = 0;
            v623 = 0;
            UpdateCurrentFuncInfo(v6, _R15, 1);
            v17 = __rdtsc();
            v612 = v17;
            *(_QWORD *)(v378 + 623536) += v17 - v621;
          }
        }
        else
        {
          while ( 1 )
          {
            RemoveRefToValue(v6, (unsigned __int8)v365->type, v365->u);
            --v14->top;
            v371 = Scr_GetNameForType(v14->top[1].type);
            v372 = j_va("%s is not a function pointer", v371);
            if ( !v6->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v372);
              v6->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v6);
$LN1214:
            v302 = _R15;
            if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4414, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
              __debugbreak();
            v368 = (unsigned __int8)*_R15++;
            *((_DWORD *)p_localVars + 11) = v368;
            pos = _R15;
            if ( v14->top->type == VAR_BUILTIN_METHOD )
              break;
            ScriptCodePos::SetScriptPos(&v14->pos, _R15);
            v6 = v619;
            RemoveRefToValue(v619, (unsigned __int8)v14->top->type, v14->top->u);
            --v14->top;
            p_localVars[4] = (unsigned int *)&v14->top[-1];
            v369 = Scr_GetNameForType(v14->top[2].type);
            v370 = j_va("%s is not a builtin method", v369);
            if ( !v6->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v370);
              v6->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v6);
$LN1220:
            v365 = v14->top;
            if ( v365->type == VAR_FUNCTION )
            {
              p_u = &v14->top->u;
              v374 = (unsigned int *)&p_u[-2];
              v341 = *p_u;
              v14->top = (VariableValue *)&p_u[-2];
              if ( LOBYTE(p_u[-1].floatValue) == 1 )
              {
                if ( *((int *)p_localVars + 4) < 63 )
                {
                  if ( p_m_varPub->bScriptUsageProfile )
                    v621 = __rdtsc();
                  v367 = AllocChildThread(v6, *v374, v14->localId);
                  goto LABEL_920;
                }
$ScriptMethodThreadCall_error:
                p_m_varPub->error_index = 1;
                if ( !v6->m_varPub.error_message )
                {
                  Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
                  v6->m_varPub.error_message = error_message;
                }
                Scr_ErrorInternal(v6);
              }
$not_an_object2:
              ObjectType = v14->top->type;
              p_m_varPub->error_index = 2;
$not_an_object_error:
              v577 = Scr_GetNameForType(ObjectType);
              v578 = j_va("%s is not an object", v577);
              if ( !v6->m_varPub.error_message )
              {
                Core_strcpy_truncate(error_message, 0x400ui64, v578);
                v6->m_varPub.error_message = error_message;
              }
              Scr_ErrorInternal(v6);
$error_2:
              Com_PrintMessage(6, "caught script exception\n", 0);
              switch ( (int)v15 )
              {
                case 13:
                case 24:
                case 37:
                case 44:
                case 60:
                case 125:
                case 135:
                  p_m_varPub->error_index = 0;
                  break;
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 147:
                  if ( p_m_varPub->error_index < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5520, ASSERT_TYPE_ASSERT, "( pScrVarPub->error_index >= 0 )", (const char *)&queryFormat, "pScrVarPub->error_index >= 0") )
                    __debugbreak();
                  error_index = p_m_varPub->error_index;
                  if ( error_index > 0 )
                    p_m_varPub->error_index = *((_DWORD *)p_localVars + 11) - error_index + 1;
                  break;
                case 46:
                case 69:
                case 87:
                case 90:
                case 142:
                case 159:
                case 185:
                  if ( p_m_varPub->error_index < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5491, ASSERT_TYPE_ASSERT, "( pScrVarPub->error_index >= -1 )", (const char *)&queryFormat, "pScrVarPub->error_index >= -1") )
                    __debugbreak();
                  if ( p_m_varPub->error_index < 0 )
                    goto LABEL_1454;
                  break;
                case 52:
                case 126:
                case 127:
                case 128:
                case 129:
                case 130:
                case 131:
                case 132:
                  if ( p_m_varPub->error_index < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5539, ASSERT_TYPE_ASSERT, "( pScrVarPub->error_index >= -1 )", (const char *)&queryFormat, "pScrVarPub->error_index >= -1") )
                    __debugbreak();
                  v582 = p_m_varPub->error_index;
                  if ( v582 <= 0 )
                  {
                    if ( v582 < 0 )
LABEL_1454:
                      p_m_varPub->error_index = 1;
                  }
                  else
                  {
                    p_m_varPub->error_index = *((_DWORD *)p_localVars + 11) - v582 + 2;
                  }
                  break;
                default:
                  break;
              }
              if ( ScriptCodePos::IsScriptPos(&v14->pos) && _R15 != ScriptCodePos::GetScriptPos(&v14->pos, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5553, ASSERT_TYPE_ASSERT, "(!pFs->pos.IsScriptPos() || local_pos == pFs->pos.GetScriptPos( scrContext ))", (const char *)&queryFormat, "!pFs->pos.IsScriptPos() || local_pos == pFs->pos.GetScriptPos( scrContext )") )
                __debugbreak();
              RuntimeError(v6, v14->pos, p_m_varPub->error_index, p_m_varPub->error_message, p_m_vmGlob->dialog_error_message);
              v6->m_varPub.error_message = NULL;
              v6->m_vmGlob.dialog_error_message = NULL;
              v6->m_varPub.error_index = 0;
              switch ( (int)v15 )
              {
                case 0:
                  Array = GetDummyObject(v6);
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
                  tempVariable = v6->m_varPub.tempVariable;
                  v614 = 0;
                  ClearVariableValue(v6, tempVariable);
                  id = v6->m_varPub.tempVariable;
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
                  RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                  --v14->top;
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
                  if ( v14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5799, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                    __debugbreak();
                  v593 = v14->top;
                  if ( v593->type != VAR_PRECODEPOS )
                  {
                    do
                    {
                      RemoveRefToValue(v6, (unsigned __int8)v593->type, v593->u);
                      --v14->top;
                      if ( v14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5804, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                        __debugbreak();
                      v593 = v14->top;
                    }
                    while ( v593->type != VAR_PRECODEPOS );
                    p_m_varPub = v625;
                  }
                  goto $error_dec_top2;
                case 20:
                case 70:
                case 104:
                case 116:
                  RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                  --v14->top;
$ScriptMethodThreadCallPointer_cleanup:
                  v592 = (unsigned __int8)*_R15++;
                  for ( pos = _R15; v592; --v592 )
                  {
                    RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                    --v14->top;
                  }
                  ++v14->top;
                  v14->top->type = VAR_UNDEFINED;
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
                  v586 = *((_DWORD *)p_localVars + 11);
                  if ( v586 )
                  {
                    if ( v586 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5615, ASSERT_TYPE_ASSERT, "( pScrVmPub->outparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->outparamcount == 1") )
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
                  v585 = v6->m_varPub.tempVariable;
                  v614 = 0;
                  ClearVariableValue(v6, v585);
                  id = v6->m_varPub.tempVariable;
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
                  RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
$LN1477:
                  if ( v6->m_vmPub.outparamcount )
                    Scr_ClearOutParams(v6);
                  v587 = (__int64)(p_localVars[4] + 4);
                  v14->top = (VariableValue *)v587;
                  *(_BYTE *)(v587 + 8) = 0;
                  break;
                case 54:
                  goto $LN1459;
                case 57:
                case 99:
                  RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                  --v14->top;
                  RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
$LN1460:
                  v14->top->type = VAR_UNDEFINED;
                  break;
                case 71:
                  pos = ++_R15;
$LN1459:
                  Array = GetDummyObject(v6);
                  break;
                case 74:
                case 105:
$LL546:
                  if ( v14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5742, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                    __debugbreak();
                  v591 = v14->top;
                  if ( v591->type != VAR_PRECODEPOS )
                  {
                    do
                    {
                      RemoveRefToValue(v6, (unsigned __int8)v591->type, v591->u);
                      --v14->top;
                      if ( v14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5747, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                        __debugbreak();
                      v591 = v14->top;
                    }
                    while ( v591->type != VAR_PRECODEPOS );
                    p_m_varPub = v625;
                  }
                  v14->top->type = VAR_UNDEFINED;
                  break;
                case 75:
                case 166:
                case 189:
                  v588 = v14->top;
                  if ( v588->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5715, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v588 - (char *)p_localVars - 2616) >> 4) )
                    __debugbreak();
                  for ( j = v14->top; j->type != VAR_PRECODEPOS; j = v14->top )
                  {
                    RemoveRefToValue(v6, (unsigned __int8)j->type, j->u);
                    v590 = --v14->top;
                    if ( v590->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5720, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v590 - (char *)p_localVars - 2616) >> 4) )
                      __debugbreak();
                  }
                  v14->top->type = VAR_CODEPOS;
                  break;
                case 87:
                case 93:
                  goto $error_dec_top2;
                case 134:
                  m_caseCount = v6->m_caseCount;
                  if ( m_caseCount )
                  {
                    do
                    {
                      v595 = *((_DWORD *)_R15 + 1);
                      v596 = _R15 + 4;
                      v597 = *(_DWORD *)_R15;
                      _R15 += 7;
                      v598 = v595 << 8;
                      v10 = m_caseCount-- == 1;
                      v6->m_caseCount = m_caseCount;
                    }
                    while ( !v10 );
                    pos = _R15;
                    if ( !v597 )
                    {
                      pos = &v596[(__int64)v598 >> 8];
                      _R15 = pos;
                      if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5822, ASSERT_TYPE_ASSERT, "( local_pos )", (const char *)&queryFormat, "local_pos") )
                        __debugbreak();
                    }
                  }
$error_dec_top2:
                  RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                  goto $error_dec_top;
                case 135:
$SetVariableFieldError:
                  v583 = *((_DWORD *)p_localVars + 11);
                  if ( v583 )
                  {
                    if ( v583 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5631, ASSERT_TYPE_ASSERT, "( pScrVmPub->outparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->outparamcount == 1") )
                      __debugbreak();
                    if ( p_localVars[4] != (unsigned int *)v14->top && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5633, ASSERT_TYPE_ASSERT, "( pScrVmPub->top == pFs->top )", (const char *)&queryFormat, "pScrVmPub->top == pFs->top") )
                      __debugbreak();
$LN533:
                    RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                    *((_DWORD *)p_localVars + 11) = 0;
                  }
$error_dec_top:
                  --v14->top;
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
                if ( !*((_BYTE *)p_localVars + 35385) && !Scr_IgnoreErrors(v6) )
                {
                  *((_BYTE *)p_localVars + 35388) = 0;
                  if ( Sys_IsRemoteDebugServer(v6) )
                  {
                    Scr_ShowConsole(v6);
                    Scr_HitBreakpoint(v6, v14->top, _R15, v14->localId, 0);
                  }
                }
              }
              p_m_vmDebugPub = v622;
              goto $restart_2;
            }
          }
          v305 = v619;
          uintValue = v14->top->u.uintValue;
          m_methBegin = v619->m_methBegin;
          m_methCount = v619->m_methCount;
          builtInIndex = uintValue;
          v623 = uintValue;
          if ( uintValue - m_methBegin >= m_methCount )
          {
            LODWORD(outparamcount) = m_methCount;
            LODWORD(builtinIndex) = uintValue - m_methBegin;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4422, ASSERT_TYPE_ASSERT, "(unsigned)( builtinIndex - scrContext.m_methBegin ) < (unsigned)( scrContext.m_methCount )", "builtinIndex - scrContext.m_methBegin doesn't index scrContext.m_methCount\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
              __debugbreak();
          }
          --v14->top;
$CallBuiltinMethod2:
          if ( *((_DWORD *)p_localVars + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3526, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
            __debugbreak();
          ScriptCodePos::SetScriptPos(&v14->pos, _R15);
          p_localVars[4] = (unsigned int *)&v14->top[-1];
          v384 = v14->top;
          if ( v384->type != VAR_POINTER )
          {
            v6 = v619;
            p_m_varPub = v625;
            goto LABEL_972;
          }
          parentId = v384->u.intValue;
          v385 = parentId;
          Array = parentId;
          if ( GetObjectType(v305, parentId) != VAR_ENTITY )
          {
            v6 = v619;
            v402 = GetObjectType(v619, v385);
            p_m_varPub = v625;
            v625->error_index = -1;
            v403 = Scr_GetNameForType(v402);
            v404 = j_va("%s is not an entity", v403);
            Scr_Error(COM_ERR_3348, v6, v404);
            v384 = v14->top;
LABEL_972:
            v405 = v384->type;
            p_m_varPub->error_index = -1;
            v406 = Scr_GetNameForType(v405);
            v407 = j_va("%s is not an entity", v406);
            Scr_Error(COM_ERR_3349, v6, v407);
$LL335:
            if ( !Scr_IsInOpcodeMemory(v6, _R15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3635, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, local_pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, local_pos )") )
              __debugbreak();
            if ( p_m_varPub->framerate == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3636, ASSERT_TYPE_ASSERT, "( pScrVarPub->framerate )", (const char *)&queryFormat, "pScrVarPub->framerate") )
              __debugbreak();
            if ( depth )
            {
              if ( v14->localId != p_localVars[3][2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3641, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
                __debugbreak();
              Scr_ValidateNotInProfileBlock(v6, "wait");
            }
            v408 = v14->top;
            v409 = v408->type;
            if ( v409 == VAR_FLOAT )
            {
              floatValue = v408->u.floatValue;
              if ( v408->u.floatValue < 0.0 )
                goto $negWait;
              _XMM2 = 0i64;
              __asm { vroundss xmm0, xmm2, xmm1, 1 }
              v413 = (int)*(float *)&_XMM0;
              v629 = (int)*(float *)&_XMM0;
              if ( !(int)*(float *)&_XMM0 && floatValue != 0.0 )
              {
                v413 = 1;
                v629 = 1;
                goto LABEL_996;
              }
            }
            else if ( v409 == VAR_INTEGER )
            {
              _XMM1 = 0i64;
              __asm { vroundss xmm0, xmm1, xmm2, 1 }
              v413 = (int)*(float *)&_XMM0;
              v629 = (int)*(float *)&_XMM0;
            }
            else
            {
              p_m_varPub->error_index = 2;
              v416 = Scr_GetNameForType(v14->top->type);
              v417 = j_va("type %s is not a float", v416);
              if ( !v6->m_varPub.error_message )
              {
                Core_strcpy_truncate(error_message, 0x400ui64, v417);
                v6->m_varPub.error_message = error_message;
              }
              Scr_ErrorInternal(v6);
              v413 = v633;
            }
            if ( (unsigned int)v413 < 0xFFFFFF )
            {
              if ( !v413 )
              {
LABEL_997:
                v418 = p_m_varPub->time + v413;
                --v14->top;
                v418 &= 0xFFFFFFu;
                v633 = v418;
                v629 = v418;
                value.type = VAR_STACK;
                v419.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
                value.u.scriptCodePosValue = (unsigned __int64)VM_ArchiveStack(v6, v14->top, v419);
                v420 = GetVariable(v6, p_m_varPub->timeArrayId, v418);
                v421 = GetArray(v6, v420);
                v422 = v14->localId;
                parentId = v421;
                Array = v421;
                v423 = GetNewObjectVariable(v6, v421, v422);
                SetNewVariableValue(v6, v423, &value);
                Scr_SetThreadWaitTime(v6, v14->localId, v418);
$thread_end:
                v14->startTop[1].type = VAR_UNDEFINED;
                goto $thread_return;
              }
LABEL_996:
              Scr_ResetTimeout(v6);
              goto LABEL_997;
            }
            p_m_varPub->error_index = 2;
            if ( v413 >= 0 )
            {
              if ( !v6->m_varPub.error_message )
              {
                Core_strcpy_truncate(error_message, 0x400ui64, "wait is too long");
                v6->m_varPub.error_message = error_message;
              }
              Scr_ErrorInternal(v6);
            }
$negWait:
            if ( !v6->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, "negative wait is not allowed");
              v6->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v6);
$LL344:
            if ( !Scr_IsInOpcodeMemory(v6, _R15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3699, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, local_pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, local_pos )") )
              __debugbreak();
            if ( (p_m_varPub->time & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3700, ASSERT_TYPE_ASSERT, "( !(pScrVarPub->time & ~VAR_NAME_LOW_MASK) )", (const char *)&queryFormat, "!(pScrVarPub->time & ~VAR_NAME_LOW_MASK)") )
              __debugbreak();
            if ( depth )
            {
              if ( v14->localId != p_localVars[3][2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3705, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
                __debugbreak();
              Scr_ValidateNotInProfileBlock(v6, "waitframe");
            }
            Scr_ResetTimeout(v6);
            v424 = p_m_varPub->time + 1;
            value.type = VAR_STACK;
            v424 &= 0xFFFFFFu;
            v633 = v424;
            v629 = v424;
            v425.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
            value.u.scriptCodePosValue = (unsigned __int64)VM_ArchiveStack(v6, v14->top, v425);
            v426 = GetVariable(v6, p_m_varPub->timeArrayId, v424);
            v427 = GetArray(v6, v426);
            v428 = v14->localId;
            parentId = v427;
            Array = v427;
            v429 = GetNewObjectVariable(v6, v427, v428);
            SetNewVariableValue(v6, v429, &value);
            Scr_SetThreadWaitTime(v6, v14->localId, v424);
            goto $thread_end;
          }
          EntityIdRef = Scr_GetEntityIdRef(v305, v385);
          ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
          if ( p_m_vmGlob->recordPlace )
            Scr_GetFileAndLine(v305, _R15, &p_m_vmGlob->lastFileName, &p_m_vmGlob->lastLine);
          v387 = builtInIndex;
          if ( v622->m_pFuncTable[builtInIndex + v305->m_funcCount - v305->m_methBegin].breakpointCount )
          {
            if ( p_localVars[4] != (unsigned int *)&v14->top[-1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3554, ASSERT_TYPE_ASSERT, "( pScrVmPub->top == pFs->top - 1 )", (const char *)&queryFormat, "pScrVmPub->top == pFs->top - 1") )
              __debugbreak();
            v388 = *((_DWORD *)p_localVars + 11);
            Scr_HitBuiltinBreakpoint(v619, v14->top, v302, v14->localId, v15, v387, v388 + 1);
            *((_DWORD *)p_localVars + 11) = v388;
            p_localVars[4] = (unsigned int *)&v14->top[-1];
          }
          v389 = v622->builtInTime;
          v390 = __rdtsc();
          ((void (__fastcall *)(_QWORD, _QWORD))v619->m_pMethTable[v387 - v619->m_methBegin])(v619, EntityIdRef);
          v391 = __rdtsc();
          v392 = (__int64)v625;
          v393 = v391 - v390;
          v394 = v622;
          v395 = v393 + v389;
          v6 = v619;
          v622->builtInTime = v395;
          v6->m_builtinTime += v393;
          if ( *(_BYTE *)(v392 + 200) )
          {
            builtInTime += v393;
            v634 = builtInTime;
            if ( v393 < v394->embeddedTime )
            {
              LODWORD(outparamcount) = v394->embeddedTime;
              LODWORD(builtinIndex) = v393;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3590, ASSERT_TYPE_ASSERT, "( timeSpent ) >= ( pScrVmDebugPub->embeddedTime )", "timeSpent >= pScrVmDebugPub->embeddedTime\n\t%i, %i", builtinIndex, outparamcount) )
                __debugbreak();
            }
            v393 -= v394->embeddedTime;
          }
          v396 = parentId;
          v397 = v387 + v6->m_funcCount - v6->m_methBegin;
          v394->m_pFuncTable[v397].prof += v393;
          v398 = v387 + v6->m_funcCount - v6->m_methBegin;
          ++v394->m_pFuncTable[v398].usage;
          RemoveRefToObject(v6, v396);
$post_builtin:
          v14->top = (VariableValue *)p_localVars[4];
          v399 = ScriptCodePos::GetScriptPos((ScriptCodePos *)p_localVars[3], v6);
          v400 = *((_DWORD *)p_localVars + 11);
          _R15 = (char *)v399;
          if ( v400 )
          {
            *((_DWORD *)p_localVars + 11) = 0;
            p_localVars[4] -= 4 * v400;
            do
            {
              RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
              --v14->top;
              --v400;
            }
            while ( v400 );
          }
          v401 = *((_DWORD *)p_localVars + 10);
          if ( !v401 )
          {
            if ( (unsigned int *)v14->top != p_localVars[4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3487, ASSERT_TYPE_ASSERT, "( pFs->top == pScrVmPub->top )", (const char *)&queryFormat, "pFs->top == pScrVmPub->top") )
              __debugbreak();
            ++v14->top;
            v14->top->type = VAR_UNDEFINED;
            continue;
          }
          if ( v401 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3480, ASSERT_TYPE_ASSERT, "( pScrVmPub->inparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->inparamcount == 1") )
            __debugbreak();
          v17 = v612;
          *((_DWORD *)p_localVars + 10) = 0;
          if ( (unsigned int *)v14->top != p_localVars[4] )
          {
            v207 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3482, ASSERT_TYPE_ASSERT, "( pFs->top == pScrVmPub->top )", (const char *)&queryFormat, "pFs->top == pScrVmPub->top");
LABEL_964:
            v17 = v612;
            if ( v207 )
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
        ++v14->top;
        v14->top->type = VAR_POINTER;
        v14->top->u.intValue = Scr_AllocArray(v6);
        continue;
      case 107:
        v257 = v14->top;
        if ( v257->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3142, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v257 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        top = v14->top;
        if ( top->type == VAR_PRECODEPOS )
        {
LABEL_1020:
          ++_R15;
        }
        else
        {
LABEL_683:
          SetVariableValue(v6, v6->m_vmPub.localVars[-(unsigned __int8)*_R15++], top);
          --v14->top;
        }
        continue;
      case 109:
        Self = parentId;
        goto $EvalFieldVariableRef;
      case 112:
        v180 = (unsigned __int64)v14->top;
        if ( v180 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2734, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v180 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v181 = ++v14->top;
        if ( v181 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2736, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v181 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v182 = *(_DWORD *)_R15;
        _R15 += 4;
        v183 = v14->top;
        if ( !v183 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 11, ASSERT_TYPE_ASSERT, "( out )", (const char *)&queryFormat, "out") )
          __debugbreak();
        v183->u.intValue = v182;
        v183->type = VAR_FLOAT;
        continue;
      case 113:
        v280 = (unsigned __int8)*_R15;
        v614 = 0;
        ++_R15;
        id = v6->m_vmPub.localVars[-v280];
        continue;
      case 114:
        v443 = v14->top;
        if ( !v443 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1598, ASSERT_TYPE_ASSERT, "( value != nullptr )", (const char *)&queryFormat, "value != nullptr") )
          __debugbreak();
        v444 = v443->type;
        if ( v444 == VAR_INTEGER )
        {
          v445 = v443->u.intValue != 0;
          goto LABEL_1064;
        }
        if ( v444 == VAR_FLOAT )
        {
          if ( v443->u.floatValue != 0.0 )
          {
            v445 = 1;
            goto LABEL_1064;
          }
        }
        else
        {
          RemoveRefToValue(v6, (unsigned __int8)v444, v443->u);
          v443->type = VAR_UNDEFINED;
          v446 = Scr_GetNameForType(v444);
          v447 = j_va("cannot cast %s to bool", v446);
          if ( !v6->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, v447);
            v6->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v6);
        }
        v445 = 0;
LABEL_1064:
        if ( v14->top->type == VAR_UNDEFINED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4512, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_UNDEFINED )", (const char *)&queryFormat, "pFs->top->type != VAR_UNDEFINED") )
          __debugbreak();
        v448 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        if ( v445 )
          goto $loop_dec_top;
        _R15 += v448;
        --v14->top;
        continue;
      case 115:
        Scr_EvalBoolComplement(v6, v14->top);
        continue;
      case 116:
        v330 = v14->top;
        if ( v330->type != VAR_FUNCTION )
          goto $ScriptThreadCallPointer_error1;
        if ( *((int *)p_localVars + 4) >= 63 )
          goto $ScriptThreadCallPointer_error0;
        if ( p_m_varPub->bScriptUsageProfile )
          v621 = __rdtsc();
        v331 = Scr_GetSelf(v6, v14->localId);
        v332 = AllocThread(v6, v331);
        goto LABEL_863;
      case 118:
        Scr_EvalLess(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 119:
      case 165:
        Scr_EvalBoolNot(v6, v14->top);
        continue;
      case 120:
        if ( !Scr_IsInOpcodeMemory(v6, _R15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3726, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, local_pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, local_pos )") )
          __debugbreak();
        if ( (p_m_varPub->time & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3727, ASSERT_TYPE_ASSERT, "( !(pScrVarPub->time & ~VAR_NAME_LOW_MASK) )", (const char *)&queryFormat, "!(pScrVarPub->time & ~VAR_NAME_LOW_MASK)") )
          __debugbreak();
        if ( depth )
        {
          if ( v14->localId != p_localVars[3][2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3732, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
            __debugbreak();
          Scr_ValidateNotInProfileBlock(v6, "waittillframeend");
        }
        value.type = VAR_STACK;
        v306.m_scriptPos = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
        value.u.scriptCodePosValue = (unsigned __int64)VM_ArchiveStack(v6, v14->top, v306);
        v307 = GetVariable(v6, p_m_varPub->timeArrayId, p_m_varPub->time);
        v308 = GetArray(v6, v307);
        v309 = v14->localId;
        parentId = v308;
        Array = v308;
        NewObjectVariableReverse = GetNewObjectVariableReverse(v6, v308, v309);
        SetNewVariableValue(v6, NewObjectVariableReverse, &value);
        Scr_SetThreadWaitTime(v6, v14->localId, p_m_varPub->time);
        goto $thread_end;
      case 121:
        goto $LL344;
      case 122:
        v184 = (unsigned __int64)v14->top;
        if ( v184 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2741, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v184 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v185 = ++v14->top;
        if ( v185 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2743, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v185 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_STRING;
$read_string:
        v188 = *(_DWORD *)_R15;
        _R15 += 4;
        SL_AddRefToString(v188);
        v189 = v14->top;
        if ( !v189 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 65, ASSERT_TYPE_ASSERT, "( variable )", (const char *)&queryFormat, "variable") )
          __debugbreak();
        if ( (unsigned __int8)(v189->type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 66, ASSERT_TYPE_ASSERT, "( variable->type == VAR_STRING || variable->type == VAR_ISTRING )", (const char *)&queryFormat, "variable->type == VAR_STRING || variable->type == VAR_ISTRING") )
          __debugbreak();
        if ( !v188 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 67, ASSERT_TYPE_ASSERT, "( stringValue != 0 )", (const char *)&queryFormat, "stringValue != 0") )
          __debugbreak();
        v189->u.intValue = v188;
        continue;
      case 123:
        animId = p_m_varPub->levelId;
LABEL_641:
        parentId = animId;
        Array = animId;
        if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3044, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3046, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        v247 = *(_DWORD *)_R15;
        v248 = animId;
        _R15 += 4;
        goto LABEL_1296;
      case 124:
        parentId = p_m_varPub->levelId;
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
        v302 = _R15;
        if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3504, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
          __debugbreak();
        v303 = v15 - 126;
        goto LABEL_773;
      case 132:
        v302 = _R15;
        if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3513, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
          __debugbreak();
        v303 = (unsigned __int8)*_R15++;
LABEL_773:
        *((_DWORD *)p_localVars + 11) = v303;
        v304 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        v305 = v619;
        builtInIndex = v304;
        v623 = v304;
        if ( v304 - v619->m_methBegin >= v619->m_methCount )
        {
          LODWORD(outparamcount) = v619->m_methCount;
          LODWORD(builtinIndex) = v304 - v619->m_methBegin;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3522, ASSERT_TYPE_ASSERT, "(unsigned)( builtinIndex - scrContext.m_methBegin ) < (unsigned)( scrContext.m_methCount )", "builtinIndex - scrContext.m_methBegin doesn't index scrContext.m_methCount\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
            __debugbreak();
        }
        goto $CallBuiltinMethod2;
      case 133:
        v202 = (unsigned __int64)v14->top;
        if ( v202 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2812, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v202 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v203 = ++v14->top;
        if ( v203 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2814, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v203 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v14->top->type = VAR_POINTER;
        v14->top->u.intValue = p_m_varPub->animId;
        AddRefToObject(v6, p_m_varPub->animId);
        continue;
      case 134:
        v511 = *(unsigned __int16 *)&_R15[*(int *)_R15 + 4];
        _R15 += *(int *)_R15 + 6;
        v6->m_caseCount = v511;
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        v512 = v14->top;
        v513 = v512->type;
        if ( v513 == VAR_STRING )
          goto LABEL_1252;
        if ( v513 == VAR_INTEGER )
        {
          v10 = !IsValidArrayIndex(v512->u.intValue);
          v517 = (unsigned int *)v14->top;
          if ( v10 )
          {
            v518 = j_va("switch index %d out of range", *v517);
            if ( !v6->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v518);
              v6->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v6);
            v512 = v14->top;
LABEL_1252:
            InternalVariableIndex = v512->u.intValue;
            v635 = v512->u.intValue;
            SL_RemoveRefToString(v635);
          }
          else
          {
            InternalVariableIndex = GetInternalVariableIndex(*v517);
            v635 = InternalVariableIndex;
          }
        }
        else
        {
          v514 = Scr_GetNameForType(v513);
          v515 = j_va("cannot switch on %s", v514);
          if ( !v6->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, v515);
            v6->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v6);
          InternalVariableIndex = v635;
        }
        if ( !v6->m_caseCount )
          goto $loop_dec_top;
        if ( !InternalVariableIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4977, ASSERT_TYPE_ASSERT, "( caseValue )", (const char *)&queryFormat, "caseValue") )
          __debugbreak();
        do
        {
          v519 = *(_DWORD *)_R15;
          v520 = _R15 + 4;
          v521 = *((_DWORD *)_R15 + 1);
          _R15 += 7;
          v522 = v521 << 8;
          v523 = &v520[(__int64)v522 >> 8];
          if ( v519 == InternalVariableIndex )
          {
            _R15 = &v520[(__int64)v522 >> 8];
            if ( v523 )
              goto $loop_dec_top;
            v524 = 4986;
            goto LABEL_1264;
          }
          v10 = v6->m_caseCount-- == 1;
        }
        while ( !v10 );
        if ( v519 )
          goto $loop_dec_top;
        _R15 = &v520[(__int64)v522 >> 8];
        if ( v523 )
          goto $loop_dec_top;
        v524 = 4996;
LABEL_1264:
        v241 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", v524, ASSERT_TYPE_ASSERT, "( local_pos )", (const char *)&queryFormat, "local_pos");
LABEL_1265:
        if ( v241 )
          __debugbreak();
$loop_dec_top:
        --v14->top;
        continue;
      case 135:
        v290 = parentId;
        VariableFieldIndex = id;
        v292 = v614;
LABEL_740:
        if ( VariableFieldIndex )
        {
          v293 = v14->top;
          if ( v293->type || !v292 )
          {
            SetVariableValue(v6, VariableFieldIndex, v293);
            --v14->top;
          }
          else
          {
            RemoveVariableValue(v6, v290, VariableFieldIndex);
            --v14->top;
          }
        }
        else
        {
          SetVariableFieldValue(v6, v14->top);
          --v14->top;
        }
        continue;
      case 136:
        Scr_EvalDivide(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 137:
      case 146:
        v208 = (unsigned __int64)v14->top;
        if ( v208 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2836, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v208 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v209 = ++v14->top;
        if ( v209 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2838, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v209 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v210 = _R15;
        v14->top->type = VAR_FUNCTION;
        v211 = *(_DWORD *)_R15;
        _R15 += 3;
        v14->top->u = (VariableUnion)&v210[(__int64)(int)(v211 << 8) >> 8];
        continue;
      case 139:
        Scr_EvalMultiply(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 140:
        v294 = 4i64 * (unsigned __int8)*_R15++;
        id = v6->m_vmPub.localVars[v294 / 0xFFFFFFFFFFFFFFFCui64];
        ClearVariableValue(v6, id);
        continue;
      case 141:
        Self = p_m_varPub->animId;
        parentId = Self;
        Array = Self;
$EvalFieldVariableRef:
        v252 = *(_DWORD *)_R15;
        _R15 += 4;
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        id = Scr_GetVariableFieldIndex(v6, Self, v252);
        v614 = 1;
        continue;
      case 142:
        v232 = (unsigned __int8)*_R15++;
        v231 = v6->m_vmPub.localVars[-v232];
        id = v231;
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        goto $EvalArrayRef;
      case 143:
        goto $LN1039;
      case 144:
        Scr_EvalAnd(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 145:
        v204 = (unsigned __int64)v14->top;
        if ( v204 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2821, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v204 - (_QWORD)p_localVars - 2616) >> 4) )
          __debugbreak();
        v205 = ++v14->top;
        if ( v205 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2823, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v205 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v17 = v612;
        v14->top->type = VAR_ANIMATION;
        v206 = *(VariableUnion *)_R15;
        _R15 += 8;
        v14->top->u = v206;
        if ( v14->top->u )
          goto $loop_0;
        v207 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2826, ASSERT_TYPE_ASSERT, "( pFs->top->u.codePosValue )", (const char *)&queryFormat, "pFs->top->u.codePosValue");
        goto LABEL_964;
      case 147:
        while ( 2 )
        {
          v297 = _R15;
          if ( *((_DWORD *)p_localVars + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4141, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
            __debugbreak();
          v333 = (unsigned __int8)*_R15++;
          *((_DWORD *)p_localVars + 11) = v333;
          if ( v14->top->type == VAR_BUILTIN_FUNCTION )
          {
            m_funcBegin = v6->m_funcBegin;
            v343 = v6->m_funcCount;
            v299 = v14->top->u.uintValue;
            builtInIndex = v299;
            v623 = v299;
            if ( v299 - m_funcBegin >= v343 )
            {
              LODWORD(outparamcount) = v343;
              LODWORD(builtinIndex) = v299 - m_funcBegin;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4149, ASSERT_TYPE_ASSERT, "(unsigned)( builtinIndex - scrContext.m_funcBegin ) < (unsigned)( scrContext.m_funcCount )", "builtinIndex - scrContext.m_funcBegin doesn't index scrContext.m_funcCount\n\t%i not in [0, %i)", builtinIndex, outparamcount) )
                __debugbreak();
            }
            --v14->top;
$CallBuiltin2:
            if ( *((_DWORD *)p_localVars + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3386, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
              __debugbreak();
            ScriptCodePos::SetScriptPos((ScriptCodePos *)p_localVars[3], _R15);
            ScriptCodePos::SetScriptPos(&v14->pos, _R15);
            v344 = builtInIndex;
            if ( v622->m_pFuncTable[v299 - v6->m_funcBegin].breakpointCount )
            {
              v345 = *((_DWORD *)p_localVars + 11);
              Scr_HitBuiltinBreakpoint(v6, v14->top, v297, v14->localId, v15, builtInIndex, v345);
              *((_DWORD *)p_localVars + 11) = v345;
            }
            p_localVars[4] = (unsigned int *)v14->top;
            v346 = v622->builtInTime;
            v347 = __rdtsc();
            ((void (__fastcall *)(scrContext_t *))v6->m_pFuncTable[v344 - v6->m_funcBegin])(v6);
            v348 = v622;
            v349 = __rdtsc();
            v350 = (__int64)v625;
            v351 = v349 - v347;
            v352 = v619;
            v622->builtInTime = v351 + v346;
            v352->m_builtinTime += v351;
            if ( *(_BYTE *)(v350 + 200) )
            {
              v353 = v348->embeddedTime;
              builtInTime += v351;
              v634 = builtInTime;
              if ( v351 < v353 )
              {
                LODWORD(outparamcount) = v353;
                LODWORD(builtinIndex) = v351;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3436, ASSERT_TYPE_ASSERT, "( timeSpent ) >= ( pScrVmDebugPub->embeddedTime )", "timeSpent >= pScrVmDebugPub->embeddedTime\n\t%i, %i", builtinIndex, outparamcount) )
                  __debugbreak();
                v348 = v622;
              }
              v354 = v344 - v352->m_funcBegin;
              v351 -= v348->embeddedTime;
            }
            else
            {
              v354 = v344 - v352->m_funcBegin;
            }
            v348->m_pFuncTable[v354].prof += v351;
            v6 = v619;
            v355 = v344 - v619->m_funcBegin;
            ++v348->m_pFuncTable[v355].usage;
            goto $post_builtin;
          }
          ScriptCodePos::SetScriptPos(&v14->pos, _R15);
          RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
          p_localVars[4] = (unsigned int *)--v14->top;
          v334 = Scr_GetNameForType(v14->top[1].type);
          v335 = j_va("%s is not a builtin function", v334);
          if ( !v6->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, v335);
            v6->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v6);
          p_m_varPub = v625;
$LN1188:
          v330 = v14->top;
          if ( v330->type != VAR_FUNCTION )
            goto $ScriptThreadCallPointer_error1;
          if ( *((int *)p_localVars + 4) >= 63 )
          {
$ScriptThreadCallPointer_error0:
            p_m_varPub->error_index = 1;
            if ( !v6->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, "script stack overflow (too many embedded function calls)");
              v6->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v6);
            v330 = v14->top;
$ScriptThreadCallPointer_error1:
            v336 = Scr_GetNameForType(v330->type);
            v337 = j_va("%s is not a function pointer", v336);
            if ( !v6->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v337);
              v6->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v6);
            continue;
          }
          break;
        }
        if ( p_m_varPub->bScriptUsageProfile )
          v621 = __rdtsc();
        v331 = Scr_GetSelf(v6, v14->localId);
        v332 = AllocChildThread(v6, v331, v14->localId);
LABEL_863:
        v14->localId = v332;
        if ( p_m_varPub->bScriptUsageProfile )
        {
          v338 = __rdtsc();
          v339 = (__int64)v624;
          v624->scrProfileScriptThreadCreateTime += (((unsigned __int64)HIDWORD(v338) << 32) | (unsigned int)v338) - v621;
          ++*(_DWORD *)(v339 + 623528);
        }
        AddRefToObject(v6, v331);
        v340 = &v14->top->u;
        v341 = *v340;
        v14->top = (VariableValue *)&v340[-2];
        goto LABEL_923;
      case 148:
        _R15 += *(int *)_R15 + 4;
        continue;
      case 149:
        if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4943, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 4945, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
LABEL_1241:
        v14->top->type = VAR_PRECODEPOS;
        continue;
      case 151:
        Scr_EvalInequality(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 153:
        Scr_EvalExOr(v6, v14->top - 1, v14->top);
        --v14->top;
        continue;
      case 154:
        continue;
      case 155:
        m_errorLevel = v6->m_errorLevel;
        if ( m_errorLevel < 0 )
        {
          v600 = 5013;
LABEL_1562:
          LODWORD(outparamcount) = m_errorLevel;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", v600, ASSERT_TYPE_ASSERT, "( ( scrContext.m_errorLevel >= 0 ) )", "%s\n\t( scrContext.m_errorLevel ) = %i", "( scrContext.m_errorLevel >= 0 )", outparamcount) )
            __debugbreak();
        }
LABEL_1564:
        --v6->m_errorLevel;
        return 0i64;
      case 156:
        if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5018, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5020, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        v526 = *(_DWORD *)_R15;
        v527 = *((_DWORD *)_R15 + 1);
        _R15 += 8;
        v14->top->u.intValue = Scr_FindEntityId(v6, v527, (EntityClass)v526, LOCAL_CLIENT_0);
        v528 = v14->top;
        if ( v528->u.intValue )
          goto $object;
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        v14->top->type = VAR_UNDEFINED;
        if ( !v6->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "unknown object");
          v6->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v6);
LABEL_1287:
        v528 = v14->top;
$object:
        v528->type = VAR_POINTER;
        AddRefToObject(v6, v14->top->u.uintValue);
        continue;
      case 157:
        if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5041, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5043, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        v529 = *(_DWORD *)_R15;
        _R15 += 4;
        v14->top->u.intValue = v529;
        goto LABEL_1287;
      case 158:
        if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5049, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
          __debugbreak();
        if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5051, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
          __debugbreak();
        v247 = *(unsigned __int16 *)_R15;
        _R15 += 2;
        v248 = v14->localId;
LABEL_1296:
        v530 = v14->top;
        v531 = FindVariable(v6, v248, v247);
        Scr_EvalVariable_Out(v6, v531, v530);
        continue;
      case 159:
        v532 = *(unsigned __int16 *)_R15;
        v533 = v14->localId;
        _R15 += 2;
        v614 = 0;
        v17 = v612;
        id = FindVariable(v6, v533, v532);
        if ( id )
          goto $loop_0;
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        if ( !v6->m_varPub.error_message )
        {
          Core_strcpy_truncate(error_message, 0x400ui64, "cannot create a new local variable in the debugger");
          v6->m_varPub.error_message = error_message;
        }
        Scr_ErrorInternal(v6);
        goto $LN1387;
      case 160:
$LN1387:
        v534 = *_R15;
        v535 = _R15 + 1;
        if ( v534 == 1 )
        {
          v536 = p_m_vmPub;
          v537 = *v535++;
          if ( v14->localId != p_m_vmPub->function_frame->fs.localId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5075, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
            __debugbreak();
          v538 = &v619->m_profileScript.threadId[v536->function_frame->fs.localId];
          if ( (unsigned int)v537 >= 0x80 )
          {
            LODWORD(outparamcount) = 128;
            LODWORD(builtinIndex) = v537;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", builtinIndex, outparamcount) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v537 & 0x1F)) & v538->array[(unsigned __int64)(unsigned int)v537 >> 5]) != 0 )
          {
            ScriptCodePos::SetScriptPos(&v14->pos, v535);
            if ( (unsigned __int8)v537 >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 239, ASSERT_TYPE_ASSERT, "(index < 128)", (const char *)&queryFormat, "index < PROF_SCRIPT_COUNT") )
              __debugbreak();
            v539 = v619;
            v540 = j_va("prof_start( \"%s\" ) called again before matched prof_end.", v619->m_profileScript.profileScriptNames[(unsigned __int8)v537]);
            if ( !v539->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v540);
              v539->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v539);
          }
          else
          {
            v539 = v619;
          }
          Profile_BeginScript(v539, v537, v618, &depth, p_m_vmPub->function_frame->fs.localId);
          ++depth;
          v618 = v537;
          v6 = v619;
        }
        v541 = *(_WORD *)v535;
        v542 = *((_WORD *)v535 + 1);
        _R15 = v535 + 4;
        v17 = v612;
        if ( (unsigned __int8)v534 <= 1u )
          goto LABEL_37;
        v543 = v534;
        p_localVars = &p_m_vmPub->localVars;
        if ( scr_profilingLevel->current.integer < v543 )
          goto $loop_0;
        ProfileString = ScriptDebugData_GetProfileString(v541, v542);
        if ( !ProfileString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2151, ASSERT_TYPE_ASSERT, "(profileString)", (const char *)&queryFormat, "profileString") )
          __debugbreak();
        Sys_ProfBeginNamedEvent(0xFFFF0000, ProfileString);
        goto LABEL_12;
      case 161:
        v545 = *_R15++;
        v628 = (__int64)_R15;
        v546 = v545 <= 1u;
        if ( v545 == 1 )
        {
          v547 = p_m_vmPub;
          v548 = (const char *)(v628 + 1);
          v549 = *_R15;
          ++v628;
          if ( v14->localId != p_m_vmPub->function_frame->fs.localId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5107, ASSERT_TYPE_ASSERT, "( pFs->localId == pScrVmPub->function_frame->fs.localId )", (const char *)&queryFormat, "pFs->localId == pScrVmPub->function_frame->fs.localId") )
            __debugbreak();
          v550 = &v619->m_profileScript.threadId[v547->function_frame->fs.localId];
          if ( (unsigned int)v549 >= 0x80 )
          {
            LODWORD(outparamcount) = 128;
            LODWORD(builtinIndex) = v549;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", builtinIndex, outparamcount) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v549 & 0x1F)) & v550->array[(unsigned __int64)(unsigned int)v549 >> 5]) == 0 )
          {
            ScriptCodePos::SetScriptPos(&v14->pos, v548);
            if ( (unsigned __int8)v549 >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 239, ASSERT_TYPE_ASSERT, "(index < 128)", (const char *)&queryFormat, "index < PROF_SCRIPT_COUNT") )
              __debugbreak();
            v551 = v619;
            v552 = j_va("prof_end( \"%s\" ) called without a matching prof_start.", v619->m_profileScript.profileScriptNames[(unsigned __int8)v549]);
            if ( !v551->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v552);
              v551->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v551);
          }
          v553 = p_m_vmPub->function_frame->fs.localId;
          v554 = __rdtsc();
          if ( !(_DWORD)v553 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 284, ASSERT_TYPE_ASSERT, "( fsID != NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "fsID != NULL_OBJECT_VARIABLE_ID") )
            __debugbreak();
          v555 = v619;
          v10 = v619->m_profileScript.write[v549].refCount-- == 1;
          if ( v10 )
            v555->m_profileScript.write[v549].totalTime += v554 - v555->m_profileScript.write[v549].startTime;
          v556 = (__int64)&v555->m_profileScript.threadId[v553];
          if ( (unsigned int)v549 >= 0x80 )
          {
            LODWORD(outparamcount) = 128;
            LODWORD(builtinIndex) = v549;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", builtinIndex, outparamcount) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v549 & 0x1F)) & *(_DWORD *)(v556 + 4 * ((unsigned __int64)(unsigned int)v549 >> 5))) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 291, ASSERT_TYPE_ASSERT, "( scrContext.m_profileScript.threadId[fsID].testBit( profileIndex ) )", (const char *)&queryFormat, "scrContext.m_profileScript.threadId[fsID].testBit( profileIndex )") )
            __debugbreak();
          v557 = v553;
          v6 = v619;
          v558 = &v619->m_profileScript.threadId[v557];
          if ( (unsigned int)v549 >= 0x80 )
          {
            LODWORD(v610) = 128;
            LODWORD(v609) = v549;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v609, v610) )
              __debugbreak();
          }
          --depth;
          v558->array[(unsigned __int64)(unsigned int)v549 >> 5] &= ~(0x80000000 >> (v549 & 0x1F));
          v559 = (unsigned __int8)v549;
          v546 = 1;
          _R15 = (char *)v628;
          v618 = v6->m_profileScript.parentIndex[v559];
        }
        v17 = v612;
        if ( v546 )
        {
LABEL_37:
          p_localVars = &p_m_vmPub->localVars;
          goto $loop_0;
        }
        v560 = (char)v545;
        p_localVars = &p_m_vmPub->localVars;
        if ( scr_profilingLevel->current.integer < v560 )
          goto $loop_0;
        Sys_ProfEndNamedEvent();
        goto LABEL_12;
      case 162:
        v10 = !p_m_varPub->developer;
        v17 = v612;
        if ( v10 )
          goto $loop_0;
        v43 = Scr_HitBreakpoint(v6, v14->top, _R15, v14->localId, 0);
        p_m_varPub = v625;
        goto LABEL_55;
      case 163:
        v43 = Scr_HitAssignmentBreakpoint(v6, v14->top, _R15, v14->localId, 0);
        goto LABEL_55;
      case 164:
        v43 = Scr_HitAssignmentBreakpoint(v6, v14->top, _R15, v14->localId, 1);
LABEL_55:
        LODWORD(v15) = v43;
        v630 = v43;
        v628 = v43;
        v44 = v43;
        opcode = v43;
        if ( Scr_SkipIntructions(v6) )
        {
          do
          {
            switch ( v44 )
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
                RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                --v14->top;
                goto $LN1672;
              case 3u:
                v64 = (unsigned __int8)*_R15++;
                *p_localVars -= v64;
                for ( v14->localVarCount -= v64; (_BYTE)v64; LOBYTE(v64) = v64 - 1 )
                  RemoveNextVariable(v6, v14->localId);
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
                RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                --v14->top;
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
                if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6069, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6071, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                goto LABEL_140;
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
                v45 = (unsigned __int64)v14->top;
                if ( v45 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5902, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v45 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v46 = ++v14->top;
                if ( v46 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5904, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v46 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                goto LABEL_63;
              case 0xBu:
                _R15 += 2;
                goto $LN1674;
              case 0xDu:
              case 0x7Du:
                if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6483, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6485, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                v14->top->type = VAR_UNDEFINED;
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
                RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                --v14->top;
                RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                v106 = --v14->top;
                if ( v106->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6536, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v106 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                for ( k = v14->top; k->type != VAR_PRECODEPOS; k = v14->top )
                {
                  RemoveRefToValue(v6, (unsigned __int8)k->type, k->u);
                  v108 = --v14->top;
                  if ( v108->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6541, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v108 - (char *)p_localVars - 2616) >> 4) )
                    __debugbreak();
                }
                goto $skip_loop_dec_top;
              case 0x13u:
                v59 = (unsigned __int64)v14->top;
                if ( v59 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5964, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v59 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v60 = ++v14->top;
                if ( v60 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5966, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v60 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                _R15 += 12;
                v14->top->type = VAR_UNDEFINED;
                break;
              case 0x14u:
              case 0x68u:
                RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                --v14->top;
                goto $LN1657;
              case 0x15u:
                if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6381, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6383, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                goto LABEL_236;
              case 0x16u:
              case 0x44u:
              case 0x51u:
              case 0x62u:
                v51 = (unsigned __int64)v14->top;
                if ( v51 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5928, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v51 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v52 = ++v14->top;
                if ( v52 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5930, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v52 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                ++_R15;
                v14->top->type = VAR_UNDEFINED;
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
                goto LABEL_258;
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
                v93 = v44 - 29;
                goto $skip_CallBuiltin;
              case 0x23u:
                v93 = (unsigned __int8)*_R15++;
$skip_CallBuiltin:
                v94 = _R15 + 2;
                goto $skip_CallBuiltin2;
              case 0x27u:
              case 0x59u:
              case 0x73u:
              case 0x77u:
              case 0xA5u:
$LN1672:
                v14->top->type = VAR_UNDEFINED;
                break;
              case 0x28u:
                v70 = v14->top;
                if ( v70->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6140, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v70 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                ++_R15;
                if ( v14->top->type != VAR_CODEPOS )
                  goto $skip_loop_dec_top;
                break;
              case 0x2Bu:
              case 0x54u:
              case 0x5Eu:
$LN1674:
                RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                --v14->top;
                goto $skip_loop_dec_top;
              case 0x2Cu:
              case 0x3Cu:
                if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6078, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6080, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  goto LABEL_311;
                goto LABEL_140;
              case 0x2Fu:
                Scr_ExitSkipIntructions(v6);
                v632.type = VAR_UNDEFINED;
                goto $skip_return;
              case 0x30u:
                ++*p_localVars;
                ++v14->localVarCount;
                v63 = *(unsigned __int16 *)_R15;
                _R15 += 2;
                goto LABEL_121;
              case 0x31u:
                goto $SafeSetVariableFieldCached_Debugger;
              case 0x32u:
              case 0x50u:
              case 0x55u:
              case 0x66u:
                v55 = (unsigned __int64)v14->top;
                if ( v55 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5948, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v55 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v56 = ++v14->top;
                if ( v56 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5950, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v56 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v14->top->type = VAR_UNDEFINED;
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
                v99 = (unsigned __int8)*_R15;
                v100 = _R15 + 1;
                goto $skip_CallBuiltinMethod2;
              case 0x39u:
                goto $LN1571;
              case 0x3Bu:
                Scr_ExitSkipIntructions(v6);
                goto $skip_end;
              case 0x45u:
              case 0x5Bu:
                ++*p_localVars;
                ++v14->localVarCount;
                v92 = *(unsigned __int16 *)_R15;
                _R15 += 2;
                goto LABEL_210;
              case 0x46u:
              case 0x74u:
$LN1657:
                RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                --v14->top;
LABEL_258:
                v97 = v14->top;
                v103 = (unsigned __int8)*_R15++;
                if ( !v103 )
                  goto LABEL_220;
                do
                {
                  RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                  v104 = (__int64)&v14->top[-1];
                  v14->top = (VariableValue *)v104;
                  --v103;
                }
                while ( v103 );
                v105 = v104 + 16;
                v14->top = (VariableValue *)v105;
                *(_BYTE *)(v105 + 8) = 0;
                break;
              case 0x47u:
              case 0x71u:
                goto $LN1620;
              case 0x49u:
                v47 = (unsigned __int64)v14->top;
                if ( v47 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5909, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v47 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v48 = ++v14->top;
                if ( v48 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5911, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v48 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                goto LABEL_70;
              case 0x4Au:
              case 0x69u:
$LL700:
                if ( v14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6411, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                  __debugbreak();
                v102 = v14->top;
                if ( v102->type == VAR_PRECODEPOS )
                {
LABEL_63:
                  v14->top->type = VAR_UNDEFINED;
                }
                else
                {
                  do
                  {
                    RemoveRefToValue(v6, (unsigned __int8)v102->type, v102->u);
                    --v14->top;
                    if ( v14->top->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6416, ASSERT_TYPE_ASSERT, "( pFs->top->type != VAR_CODEPOS )", (const char *)&queryFormat, "pFs->top->type != VAR_CODEPOS") )
                      __debugbreak();
                    v102 = v14->top;
                  }
                  while ( v102->type != VAR_PRECODEPOS );
                  v102->type = VAR_UNDEFINED;
                }
                break;
              case 0x4Bu:
                goto $CheckClearParams_Debugger;
              case 0x4Fu:
              case 0x75u:
              case 0xABu:
              case 0xB3u:
                if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6391, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6393, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                _R15 += 3;
                v14->top->type = VAR_UNDEFINED;
                break;
              case 0x52u:
                ++*p_localVars;
                ++v14->localVarCount;
                v67 = *(unsigned __int16 *)_R15;
                _R15 += 2;
                goto LABEL_149;
              case 0x56u:
                v115 = *(unsigned __int16 *)_R15;
                v6->m_caseCount = v115;
                _R15 += 7 * v115 + 2;
                break;
              case 0x5Fu:
              case 0x7Au:
                v53 = (unsigned __int64)v14->top;
                if ( v53 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5937, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v53 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v54 = ++v14->top;
                if ( v54 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5939, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v54 - (char *)p_localVars - 2616) >> 4) )
                  goto LABEL_311;
                goto LABEL_70;
              case 0x63u:
                v65 = (unsigned __int64)v14->top;
                if ( v65 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6041, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v65 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v66 = ++v14->top;
                if ( v66 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6043, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v66 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                ++_R15;
                v14->top->type = VAR_UNDEFINED;
$LN1571:
                v14->top[-1].type = VAR_UNDEFINED;
                goto $skip_loop_dec_top;
              case 0x67u:
                v71 = v14->top;
                if ( v71->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6150, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v71 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                for ( m = v14->top; m->type != VAR_CODEPOS; m = v14->top )
                {
                  RemoveRefToValue(v6, (unsigned __int8)m->type, m->u);
                  v73 = --v14->top;
                  if ( v73->type == VAR_PRECODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6155, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_PRECODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_PRECODEPOS )", ((char *)v73 - (char *)p_localVars - 2616) >> 4) )
                    __debugbreak();
                }
                break;
              case 0x6Bu:
                v69 = v14->top;
                if ( v69->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6130, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v69 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                ++_R15;
                if ( v14->top->type != VAR_PRECODEPOS )
                  goto $skip_loop_dec_top;
                break;
              case 0x70u:
                v57 = (unsigned __int64)v14->top;
                if ( v57 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5956, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v57 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v58 = ++v14->top;
                if ( v58 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5958, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v58 - (char *)p_localVars - 2616) >> 4) )
                  goto LABEL_311;
LABEL_70:
                v14->top->type = VAR_UNDEFINED;
$LN1584:
                _R15 += 4;
                break;
              case 0x7Eu:
              case 0x7Fu:
              case 0x80u:
              case 0x81u:
              case 0x82u:
              case 0x83u:
                v99 = v44 - 126;
                goto $skip_CallBuiltinMethod;
              case 0x84u:
                v99 = (unsigned __int8)*_R15++;
$skip_CallBuiltinMethod:
                v100 = _R15 + 2;
$skip_CallBuiltinMethod2:
                _R15 = v100;
                if ( v99 )
                {
                  do
                  {
                    RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                    v101 = (__int64)&v14->top[-1];
                    v14->top = (VariableValue *)v101;
                    --v99;
                  }
                  while ( v99 );
                }
                else
                {
                  v101 = (__int64)v14->top;
                }
                RemoveRefToValue(v6, *(unsigned __int8 *)(v101 + 8), *(VariableUnion *)v101);
                v14->top->type = VAR_UNDEFINED;
                break;
              case 0x86u:
                v109 = *(int *)_R15;
                v110 = *(unsigned __int16 *)&_R15[v109 + 4];
                _R15 += v109 + 6;
                v6->m_caseCount = v110;
                if ( v110 )
                {
                  do
                  {
                    v111 = *((_DWORD *)_R15 + 1);
                    v112 = _R15 + 4;
                    v113 = *(_DWORD *)_R15;
                    _R15 += 7;
                    v114 = v111 << 8;
                    v10 = v110-- == 1;
                    v6->m_caseCount = v110;
                  }
                  while ( !v10 );
                  if ( !v113 )
                  {
                    _R15 = &v112[(__int64)v114 >> 8];
                    if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6570, ASSERT_TYPE_ASSERT, "( local_pos )", (const char *)&queryFormat, "local_pos") )
                      __debugbreak();
                  }
                }
                goto $skip_loop_dec_top;
              case 0x89u:
              case 0x92u:
                v61 = (unsigned __int64)v14->top;
                if ( v61 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5985, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v61 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v62 = ++v14->top;
                if ( v62 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5987, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v62 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                _R15 += 3;
                v14->top->type = VAR_UNDEFINED;
                break;
              case 0x91u:
                v49 = (unsigned __int64)v14->top;
                if ( v49 < (unsigned __int64)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5917, ASSERT_TYPE_ASSERT, "( ( pFs->top >= pScrVmPub->stack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top >= pScrVmPub->stack )", (__int64)(v49 - (_QWORD)p_localVars - 2616) >> 4) )
                  __debugbreak();
                v50 = ++v14->top;
                if ( v50 > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 5919, ASSERT_TYPE_ASSERT, "( ( pFs->top <= pScrVmPub->maxstack ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top <= pScrVmPub->maxstack )", ((char *)v50 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                _R15 += 8;
                v14->top->type = VAR_UNDEFINED;
                break;
              case 0x93u:
                v93 = (unsigned __int8)*_R15;
                v94 = _R15 + 1;
$skip_CallBuiltin2:
                _R15 = v94;
                if ( v93 )
                {
                  do
                  {
                    RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                    v95 = (__int64)&v14->top[-1];
                    v14->top = (VariableValue *)v95;
                    --v93;
                  }
                  while ( v93 );
                  v96 = v95 + 16;
                  v14->top = (VariableValue *)v96;
                  *(_BYTE *)(v96 + 8) = 0;
                }
                else
                {
                  v97 = v14->top;
LABEL_220:
                  v98 = v97 + 1;
                  v14->top = v98;
                  v98->type = VAR_UNDEFINED;
                }
                break;
              case 0x94u:
                _R15 += *(int *)_R15 + 4;
                break;
              case 0x95u:
                if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6546, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6548, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                {
                  __debugbreak();
                  v14->top->type = VAR_PRECODEPOS;
                }
                else
                {
LABEL_236:
                  v14->top->type = VAR_PRECODEPOS;
                }
                break;
              case 0x9Bu:
                Scr_ExitSkipIntructions(v6);
                m_errorLevel = v6->m_errorLevel;
                if ( m_errorLevel >= 0 )
                  goto LABEL_1564;
                v600 = 6585;
                goto LABEL_1562;
              case 0x9Cu:
                if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6591, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6593, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                _R15 += 8;
                v14->top->type = VAR_UNDEFINED;
                break;
              case 0x9Du:
                if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6601, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6603, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                {
LABEL_311:
                  __debugbreak();
                  _R15 += 4;
                  v14->top->type = VAR_UNDEFINED;
                }
                else
                {
LABEL_140:
                  _R15 += 4;
                  v14->top->type = VAR_UNDEFINED;
                }
                break;
              case 0x9Eu:
                if ( v14->top < (VariableValue *)(p_localVars + 327) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6609, ASSERT_TYPE_ASSERT, "( pFs->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pFs->top >= pScrVmPub->stack") )
                  __debugbreak();
                if ( ++v14->top > (VariableValue *)p_localVars[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6611, ASSERT_TYPE_ASSERT, "( pFs->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pFs->top <= pScrVmPub->maxstack") )
                  __debugbreak();
                _R15 += 2;
                v14->top->type = VAR_UNDEFINED;
                break;
              case 0xA0u:
                v90 = _R15 + 1;
                if ( *_R15 == 1 )
                  v90 = _R15 + 2;
                _R15 = v90 + 4;
                break;
              case 0xA1u:
                v91 = *_R15++;
                if ( v91 == 1 )
                  ++_R15;
                break;
              case 0xA2u:
                if ( !p_m_varPub->developer )
                  break;
                v44 = Scr_HitBreakpoint(v6, v14->top, _R15, v14->localId, 0);
                goto LABEL_326;
              case 0xA3u:
                v116 = Scr_HitAssignmentBreakpoint(v6, v14->top, _R15, v14->localId, 0);
                goto LABEL_323;
              case 0xA4u:
                v116 = Scr_HitAssignmentBreakpoint(v6, v14->top, _R15, v14->localId, 1);
LABEL_323:
                v44 = v116;
                goto LABEL_326;
              case 0xA6u:
                v81 = *_R15;
                v82 = 0;
                ++_R15;
                if ( v81 )
                {
                  do
                  {
                    ++*p_localVars;
                    ++v14->localVarCount;
                    v83 = *(unsigned __int16 *)_R15;
                    _R15 += 2;
                    ScriptCodePos::SetScriptPos(&v14->pos, _R15);
                    v84 = v83;
                    v85 = v619;
                    **p_localVars = GetNewVariable(v619, v14->localId, v84);
                    v86 = v14->top;
                    if ( v86->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6201, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v86 - (char *)p_localVars - 2616) >> 4) )
                      __debugbreak();
                    v87 = v14->top;
                    if ( v87->type != VAR_PRECODEPOS )
                    {
                      RemoveRefToValue(v85, (unsigned __int8)v87->type, v87->u);
                      --v14->top;
                    }
                    ++v82;
                  }
                  while ( v82 < v81 );
                }
                goto LABEL_189;
              case 0xB9u:
              case 0xBAu:
                ++*p_localVars;
                ++v14->localVarCount;
                v92 = (unsigned __int8)*_R15++;
LABEL_210:
                ScriptCodePos::SetScriptPos(&v14->pos, _R15);
                **p_localVars = GetNewVariable(v6, v14->localId, v92);
                goto $skip_loop_dec_top;
              case 0xBBu:
                ++*p_localVars;
                ++v14->localVarCount;
                v63 = (unsigned __int8)*_R15++;
LABEL_121:
                ScriptCodePos::SetScriptPos(&v14->pos, _R15);
                **p_localVars = GetNewVariable(v6, v14->localId, v63);
                break;
              case 0xBCu:
                ++*p_localVars;
                ++v14->localVarCount;
                v67 = (unsigned __int8)*_R15++;
LABEL_149:
                ScriptCodePos::SetScriptPos(&v14->pos, _R15);
                **p_localVars = GetNewVariable(v6, v14->localId, v67);
$SafeSetVariableFieldCached_Debugger:
                v68 = v14->top;
                if ( v68->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6124, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v68 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                if ( v14->top->type == VAR_PRECODEPOS )
                  break;
$skip_loop_dec_top:
                RemoveRefToValue(v6, (unsigned __int8)v14->top->type, v14->top->u);
                --v14->top;
                break;
              case 0xBDu:
                v74 = *_R15;
                v75 = 0;
                ++_R15;
                if ( v74 )
                {
                  do
                  {
                    ++*p_localVars;
                    ++v14->localVarCount;
                    v76 = (unsigned __int8)*_R15++;
                    ScriptCodePos::SetScriptPos(&v14->pos, _R15);
                    v77 = v76;
                    v78 = v619;
                    **p_localVars = GetNewVariable(v619, v14->localId, v77);
                    v79 = v14->top;
                    if ( v79->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6172, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v79 - (char *)p_localVars - 2616) >> 4) )
                      __debugbreak();
                    v80 = v14->top;
                    if ( v80->type != VAR_PRECODEPOS )
                    {
                      RemoveRefToValue(v78, (unsigned __int8)v80->type, v80->u);
                      --v14->top;
                    }
                    ++v75;
                  }
                  while ( v75 < v74 );
                }
LABEL_189:
                v6 = v619;
$CheckClearParams_Debugger:
                v88 = v14->top;
                if ( v88->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 6212, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v88 - (char *)p_localVars - 2616) >> 4) )
                  __debugbreak();
                ScriptCodePos::SetScriptPos(&v14->pos, _R15);
                v89 = v14->top;
                if ( v89->type == VAR_PRECODEPOS )
                {
                  if ( Scr_CheckIfObjectsOrVariablesExceededDeveloperLimits(v6) )
                  {
                    Scr_ErrorOnObjectsOrVariablesExceededDeveloperLimits(v6);
                    v89 = v14->top;
                  }
                  v89->type = VAR_CODEPOS;
                }
                else
                {
                  if ( !v6->m_varPub.error_message )
                  {
                    Core_strcpy_truncate(error_message, 0x400ui64, "function called with too many parameters");
                    v6->m_varPub.error_message = error_message;
                  }
                  Scr_ErrorInternal(v6);
$LN1620:
                  ++_R15;
                }
                break;
              default:
                *((_BYTE *)p_localVars + 35387) = 1;
                v117 = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
                v118 = j_va("CODE ERROR: unknown opcode %d", (unsigned int)v15);
                RuntimeError(v6, (const ScriptCodePos)v117, 0, v118, NULL);
                break;
            }
            v44 = (unsigned __int8)*_R15++;
            pos = _R15;
LABEL_326:
            LODWORD(v15) = v44;
            v630 = v44;
            v628 = v44;
            opcode = v44;
            v119 = Scr_SkipIntructions(v6);
            p_m_varPub = v625;
          }
          while ( v119 );
        }
        ScriptCodePos::SetVarUsagePos(&p_m_varPub->varUsagePos, _R15);
        if ( (unsigned int)v15 > 0xBD )
          goto LABEL_328;
        goto $interrupt_return;
      case 166:
        v271 = *_R15;
        v272 = 0;
        ++_R15;
        if ( !v271 )
          goto LABEL_717;
        v273 = v619;
        do
        {
          ++*p_localVars;
          ++v14->localVarCount;
          v274 = *(unsigned __int16 *)_R15;
          _R15 += 2;
          ScriptCodePos::SetScriptPos(&v14->pos, _R15);
          **p_localVars = GetNewVariable(v273, v14->localId, v274);
          v275 = v14->top;
          if ( v275->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3214, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v275 - (char *)p_localVars - 2616) >> 4) )
            __debugbreak();
          v276 = v14->top;
          if ( v276->type != VAR_PRECODEPOS )
          {
            SetVariableValue(v273, **p_localVars, v276);
            --v14->top;
          }
          ++v272;
        }
        while ( v272 < v271 );
        goto LABEL_716;
      case 167:
        v432 = v14->top;
        v433 = v432->type;
        if ( v433 == VAR_POINTER )
        {
          v434 = (unsigned __int8)GetObjectType(v6, v432->u.intValue);
          if ( (unsigned int)v434 < 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2182, ASSERT_TYPE_ASSERT, "(localType >= VAR_FIRST_OBJECT)", (const char *)&queryFormat, "localType >= VAR_FIRST_OBJECT") )
            __debugbreak();
          RemoveRefToValue(v6, (unsigned __int8)v432->type, v432->u);
          v432->type = VAR_INTEGER;
          v432->u.intValue = v434 < 25 && v434 != 22 && v434;
        }
        else
        {
          v435 = (unsigned __int8)v433;
          if ( (unsigned __int8)v433 >= VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 2190, ASSERT_TYPE_ASSERT, "(localType < VAR_FIRST_OBJECT)", (const char *)&queryFormat, "localType < VAR_FIRST_OBJECT") )
            __debugbreak();
          RemoveRefToValue(v6, (unsigned __int8)v432->type, v432->u);
          v432->type = VAR_INTEGER;
          v432->u.intValue = v435 != 0;
        }
        continue;
      case 168:
        v436 = v14->top;
        v437 = v436->type;
        if ( v437 == VAR_POINTER )
        {
          v438 = (unsigned __int8)GetObjectType(v6, v436->u.intValue);
          if ( (unsigned int)v438 >= 0x11 )
            goto LABEL_1046;
          v439 = "localType >= VAR_FIRST_OBJECT";
          v440 = 2211;
          v441 = "(localType >= VAR_FIRST_OBJECT)";
        }
        else
        {
          v438 = (unsigned __int8)v437;
          if ( (unsigned __int8)v437 < VAR_THREAD )
            goto LABEL_1046;
          v439 = "localType < VAR_FIRST_OBJECT";
          v440 = 2216;
          v441 = "(localType < VAR_FIRST_OBJECT)";
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", v440, ASSERT_TYPE_ASSERT, v441, (const char *)&queryFormat, v439) )
          __debugbreak();
LABEL_1046:
        v442 = v438 < 25 && v438 != 22 && v438 && Scr_IsTrue_Inline(v6, v436);
        RemoveRefToValue(v6, (unsigned __int8)v436->type, v436->u);
        v436->u.intValue = v442;
        v436->type = VAR_INTEGER;
        continue;
      case 185:
        ++*p_localVars;
        ++v14->localVarCount;
        v230 = (unsigned __int8)*_R15++;
LABEL_614:
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        **p_localVars = GetNewVariable(v6, v14->localId, v230);
$EvalLocalArrayRefCached:
        v231 = **p_localVars;
        id = v231;
$EvalArrayRef:
        v233 = Scr_EvalArrayRef(v6, v231);
        v234 = v14->top;
        v235 = v233;
        parentId = v233;
        Array = v233;
        v236 = v234->type;
        if ( v236 == VAR_INTEGER )
        {
          if ( !IsValidArrayIndex(v234->u.intValue) )
          {
            v237 = j_va("array index %d out of range", v14->top->u.intValue);
            if ( !v6->m_varPub.error_message )
            {
              Core_strcpy_truncate(error_message, 0x400ui64, v237);
              v6->m_varPub.error_message = error_message;
            }
            Scr_ErrorInternal(v6);
          }
          ArrayVariable = GetArrayVariable(v6, v235, v14->top->u.uintValue);
          id = ArrayVariable;
        }
        else if ( v236 == VAR_STRING )
        {
          id = GetVariable(v6, v233, v234->u.intValue);
          SL_RemoveRefToString(v14->top->u.intValue);
          ArrayVariable = id;
        }
        else
        {
          v239 = Scr_GetNameForType(v236);
          v240 = j_va("%s is not an array index", v239);
          if ( !v6->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, v240);
            v6->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v6);
          ArrayVariable = 0;
          id = 0;
        }
        v614 = 1;
        if ( ArrayVariable )
          goto $loop_dec_top;
        v241 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3013, ASSERT_TYPE_ASSERT, "( fieldValueId )", (const char *)&queryFormat, "fieldValueId");
        goto LABEL_1265;
      case 186:
        ++*p_localVars;
        ++v14->localVarCount;
        v296 = (unsigned __int8)*_R15++;
LABEL_751:
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        **p_localVars = GetNewVariable(v6, v14->localId, v296);
$SetLocalVariableFieldCached:
        SetVariableValue(v6, **p_localVars, v14->top);
        --v14->top;
        continue;
      case 187:
        ++*p_localVars;
        ++v14->localVarCount;
        v212 = (unsigned __int8)*_R15++;
LABEL_551:
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        **p_localVars = GetNewVariable(v6, v14->localId, v212);
        continue;
      case 188:
        ++*p_localVars;
        ++v14->localVarCount;
        v254 = (unsigned __int8)*_R15++;
LABEL_673:
        ScriptCodePos::SetScriptPos(&v14->pos, _R15);
        **p_localVars = GetNewVariable(v6, v14->localId, v254);
$SafeSetVariableFieldCached:
        v255 = v14->top;
        if ( v255->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3133, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v255 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v256 = v14->top;
        v17 = v612;
        if ( v256->type == VAR_PRECODEPOS )
          goto $loop_0;
        SetVariableValue(v6, **p_localVars, v256);
        --v14->top;
        continue;
      case 189:
        v265 = *_R15;
        v266 = 0;
        ++_R15;
        if ( !v265 )
          goto LABEL_717;
        v267 = v619;
        do
        {
          ++*p_localVars;
          ++v14->localVarCount;
          v268 = (unsigned __int8)*_R15++;
          ScriptCodePos::SetScriptPos(&v14->pos, _R15);
          **p_localVars = GetNewVariable(v267, v14->localId, v268);
          v269 = v14->top;
          if ( v269->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3188, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v269 - (char *)p_localVars - 2616) >> 4) )
            __debugbreak();
          v270 = v14->top;
          if ( v270->type != VAR_PRECODEPOS )
          {
            SetVariableValue(v267, **p_localVars, v270);
            --v14->top;
          }
          ++v266;
        }
        while ( v266 < v265 );
LABEL_716:
        LODWORD(v15) = v628;
LABEL_717:
        v6 = v619;
$CheckClearParams:
        v277 = v14->top;
        if ( v277->type == VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 3226, ASSERT_TYPE_ASSERT, "( ( pFs->top->type != VAR_CODEPOS ) )", "%s\n\t( pFs->top - pScrVmPub->stack ) = 0x%llx", "( pFs->top->type != VAR_CODEPOS )", ((char *)v277 - (char *)p_localVars - 2616) >> 4) )
          __debugbreak();
        v278 = v14->top;
        if ( v278->type == VAR_PRECODEPOS )
        {
          if ( Scr_CheckIfObjectsOrVariablesExceededDeveloperLimits(v6) )
          {
            Scr_ErrorOnObjectsOrVariablesExceededDeveloperLimits(v6);
            v278 = v14->top;
          }
          v278->type = VAR_CODEPOS;
        }
        else
        {
          if ( !v6->m_varPub.error_message )
          {
            Core_strcpy_truncate(error_message, 0x400ui64, "function called with too many parameters");
            v6->m_varPub.error_message = error_message;
          }
          Scr_ErrorInternal(v6);
$LN1039:
          v279 = *p_localVars;
          v614 = 0;
          id = *v279;
        }
        continue;
      default:
LABEL_328:
        *((_BYTE *)p_localVars + 35387) = 1;
        v120 = ScriptCodePos::CreateScriptPos(_R15).m_scriptPos;
        v121 = j_va("CODE ERROR: unknown opcode %d", (unsigned int)v15);
        RuntimeError(v6, (const ScriptCodePos)v120, 0, v121, NULL);
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
  VariableValue *v10; 
  function_stack_t m_fs; 
  int function_count; 
  function_frame_t *v13; 
  function_frame_t *function_frame; 
  unsigned int v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  const char *ScriptPos; 
  unsigned __int64 v19; 
  unsigned __int16 embeddedCount; 
  bool v21; 
  int v22; 
  VariableValue *top; 
  VariableValue *v25; 
  unsigned int m_threadCount; 
  char *killThreadCodePos; 
  function_stack_t v28; 
  VariableType v29; 
  bool v30; 

  v4 = paramcount;
  Profile = ScriptContext_GetProfile(scrContext);
  if ( (unsigned int)v4 > scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8899, ASSERT_TYPE_ASSERT, "( paramcount <= pScrVmPub->inparamcount )", (const char *)&queryFormat, "paramcount <= pScrVmPub->inparamcount") )
    __debugbreak();
  Scr_ClearOutParams(scrContext);
  v9 = scrContext->m_vmPub.inparamcount - v4;
  v10 = &scrContext->m_vmPub.top[-v4];
  if ( scrContext->m_vmPub.function_count >= 62 )
  {
    Scr_KillThread(scrContext, localId);
    v21 = scrContext->m_vmPub.outparamcount == 0;
    scrContext->m_vmPub.inparamcount = v9 + 1;
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9074, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
      __debugbreak();
    if ( v9 )
    {
      do
      {
        RemoveRefToValue(scrContext, (unsigned __int8)scrContext->m_vmPub.top->type, scrContext->m_vmPub.top->u);
        top = scrContext->m_vmPub.top - 1;
        scrContext->m_vmPub.top = top;
        --v9;
      }
      while ( v9 );
    }
    else
    {
      top = scrContext->m_vmPub.top;
    }
    v25 = top + 1;
    scrContext->m_vmPub.top = v25;
    v25->type = VAR_UNDEFINED;
    RuntimeError(scrContext, codePos, 0, "script stack overflow (too many embedded function calls)", NULL);
    return localId;
  }
  else
  {
    m_fs = scrContext->m_fs;
    m_threadCount = scrContext->m_threadCount;
    scrContext->m_fs.localId = localId;
    scrContext->m_fs.startTop = v10;
    function_count = scrContext->m_vmPub.function_count;
    v28 = m_fs;
    if ( function_count )
    {
      scrContext->m_vmPub.function_count = function_count + 1;
      v13 = scrContext->m_vmPub.function_frame + 1;
      scrContext->m_vmPub.function_frame = v13;
      v13->fs.localId = 0;
    }
    scrContext->m_vmPub.function_frame->fs.pos.m_scriptPos = codePos.m_scriptPos;
    function_frame = scrContext->m_vmPub.function_frame;
    ++scrContext->m_vmPub.function_count;
    scrContext->m_vmPub.function_frame = ++function_frame;
    function_frame->fs.localId = localId;
    LOBYTE(function_frame) = v10->type;
    v10->type = VAR_PRECODEPOS;
    scrContext->m_vmPub.inparamcount = 0;
    v29 = (char)function_frame;
    scrContext->m_fs.top = scrContext->m_vmPub.top;
    scrContext->m_fs.pos = codePos;
    scrContext->m_fs.localVarCount = 0;
    scrContext->m_threadCount = 0;
    v30 = Scr_SaveKillPos(scrContext, &killThreadCodePos);
    Scr_StartThreadExecutionTime(scrContext);
    if ( scrContext->m_varPub.bScriptProfile )
    {
      scrContext->m_vmDebugPub.builtInTime = 0i64;
      v16 = __rdtsc();
      if ( scrContext->m_varPub.bScriptUsageProfile )
      {
        v17 = __rdtsc();
        ScriptPos = ScriptCodePos::GetScriptPos(&scrContext->m_fs.pos, scrContext);
        UpdateCurrentFuncInfo(scrContext, ScriptPos, 1);
        v19 = __rdtsc();
        Profile->scrProfileCalcTimeTotal += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v17;
        ++scrContext->m_vmDebugPub.embeddedCount;
      }
      v15 = VM_Execute(scrContext);
      if ( scrContext->m_varPub.bScriptUsageProfile )
      {
        embeddedCount = scrContext->m_vmDebugPub.embeddedCount;
        if ( embeddedCount > 1u )
          scrContext->m_vmDebugPub.embeddedTime = __rdtsc() - v16;
        scrContext->m_vmDebugPub.embeddedCount = embeddedCount - 1;
      }
      else if ( !scrContext->m_vmPub.function_count )
      {
        Scr_AddProfileTime(scrContext, codePos, __rdtsc() - v16, scrContext->m_vmDebugPub.builtInTime);
      }
    }
    else
    {
      v15 = VM_Execute(scrContext);
    }
    Scr_EndThreadExecutionTime(scrContext, v15);
    Scr_RestoreKillPos(scrContext, v30, killThreadCodePos);
    scrContext->m_fs = v28;
    scrContext->m_threadCount = m_threadCount;
    v10->type = v29;
    v21 = scrContext->m_vmPub.outparamcount == 0;
    scrContext->m_vmPub.top = v10 + 1;
    scrContext->m_vmPub.inparamcount = v9 + 1;
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 9059, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
      __debugbreak();
    ClearVariableValue(scrContext, scrContext->m_varPub.tempVariable);
    v22 = scrContext->m_vmPub.function_count;
    if ( v22 )
    {
      --scrContext->m_vmPub.function_frame;
      scrContext->m_vmPub.function_count = v22 - 1;
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
  ProfileScript *v5; 
  unsigned int FirstSibling; 
  unsigned int v7; 
  unsigned int VariableKeyObject; 
  const VariableStackBuffer *scriptCodePosValue; 
  unsigned int v10; 
  const char *m_scriptPos; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  const char *ScriptPos; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned int v17; 
  __int128 v20; 
  __int128 v22; 
  ProfileScript *Profile; 

  stack = scrContext->m_vmPub.stack;
  Profile = ScriptContext_GetProfile(scrContext);
  v5 = Profile;
  if ( scrContext->m_vmPub.top != scrContext->m_vmPub.stack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8703, ASSERT_TYPE_ASSERT, "( pScrVmPub->top == pScrVmPub->stack )", (const char *)&queryFormat, "pScrVmPub->top == pScrVmPub->stack") )
    __debugbreak();
  Scr_ResetAbortDebugger(scrContext);
  Scr_ResetTimeout(scrContext);
  if ( !timeId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8711, ASSERT_TYPE_ASSERT, "( timeId )", (const char *)&queryFormat, "timeId") )
    __debugbreak();
  AddRefToObject(scrContext, timeId);
  scrContext->m_fs.startTop = stack;
  scrContext->m_threadCount = 0;
  while ( 1 )
  {
    if ( scrContext->m_varPub.error_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8722, ASSERT_TYPE_ASSERT, "( !pScrVarPub->error_message )", (const char *)&queryFormat, "!pScrVarPub->error_message") )
      __debugbreak();
    if ( scrContext->m_varPub.error_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8723, ASSERT_TYPE_ASSERT, "( !pScrVarPub->error_index )", (const char *)&queryFormat, "!pScrVarPub->error_index") )
      __debugbreak();
    if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8725, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
      __debugbreak();
    if ( scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8726, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
      __debugbreak();
    if ( scrContext->m_vmPub.function_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8727, ASSERT_TYPE_ASSERT, "( !pScrVmPub->function_count )", (const char *)&queryFormat, "!pScrVmPub->function_count") )
      __debugbreak();
    if ( (int *)scrContext->m_vmPub.localVars != &scrContext->m_vmGlob.starttime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8728, ASSERT_TYPE_ASSERT, "( pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1 )", (const char *)&queryFormat, "pScrVmPub->localVars == scrContext.m_vmGlob.localVarsStack - 1") )
      __debugbreak();
    if ( scrContext->m_fs.startTop != stack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8729, ASSERT_TYPE_ASSERT, "( pFs->startTop == &pScrVmPub->stack[0] )", (const char *)&queryFormat, "pFs->startTop == &pScrVmPub->stack[0]") )
      __debugbreak();
    if ( scrContext->m_threadCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8730, ASSERT_TYPE_ASSERT, "( !scrContext.m_threadCount )", (const char *)&queryFormat, "!scrContext.m_threadCount") )
      __debugbreak();
    if ( scrContext->m_threadProfileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8732, ASSERT_TYPE_ASSERT, "( !scrContext.m_threadProfileCount )", (const char *)&queryFormat, "!scrContext.m_threadProfileCount") )
      __debugbreak();
    FirstSibling = FindFirstSibling(scrContext, timeId);
    v7 = FirstSibling;
    if ( !FirstSibling )
      break;
    if ( GetValueType(scrContext, FirstSibling) == VAR_UNDEFINED )
      goto LABEL_64;
    VariableKeyObject = GetVariableKeyObject(scrContext, v7);
    if ( !VariableKeyObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8747, ASSERT_TYPE_ASSERT, "( startLocalId )", (const char *)&queryFormat, "startLocalId") )
      __debugbreak();
    if ( GetValueType(scrContext, v7) != VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 8749, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, stackId ) == VAR_STACK )", (const char *)&queryFormat, "GetValueType( scrContext, stackId ) == VAR_STACK") )
      __debugbreak();
    scriptCodePosValue = (const VariableStackBuffer *)GetVariableValueAddress(scrContext, v7)->scriptCodePosValue;
    RemoveNextVariable(scrContext, timeId);
    VM_UnarchiveStack(scrContext, VariableKeyObject, scriptCodePosValue);
    Scr_StartThreadExecutionTime(scrContext);
    if ( scrContext->m_errorLevel < 0 )
      scrContext->m_runThreadsTimeStart = __rdtsc();
    if ( scrContext->m_varPub.bScriptProfile )
    {
      scrContext->m_vmDebugPub.builtInTime = 0i64;
      m_scriptPos = scrContext->m_fs.pos.m_scriptPos;
      v12 = __rdtsc();
      if ( scrContext->m_varPub.bScriptUsageProfile )
      {
        ++v5->scrProfileScriptThreadResumeCount;
        v13 = __rdtsc();
        ScriptPos = ScriptCodePos::GetScriptPos(&scrContext->m_fs.pos, scrContext);
        UpdateCurrentFuncInfo(scrContext, ScriptPos, 0);
        v15 = __rdtsc();
        v16 = (((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) - v13;
        v5 = Profile;
        Profile->scrProfileCalcTimeTotal += v16;
        scrContext->m_vmDebugPub.embeddedCount = 1;
      }
      if ( scrContext->m_varPub.vmExecuting == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1494, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.vmExecuting < 0xffffffff )", (const char *)&queryFormat, "scrContext.m_varPub.vmExecuting < UINT_MAX") )
        __debugbreak();
      ++scrContext->m_varPub.vmExecuting;
      scrContext->m_varPub.vmThreadContext = Sys_GetCurrentThreadContext();
      v17 = VM_Execute(scrContext);
      RemoveRefToObject(scrContext, v17);
      RemoveRefToValue(scrContext, (unsigned __int8)scrContext->m_vmPub.stack[1].type, scrContext->m_vmPub.stack[1].u);
      Scr_VM_LeaveExecuteBlock(scrContext);
      if ( scrContext->m_varPub.bScriptUsageProfile )
        scrContext->m_vmDebugPub.embeddedCount = 0;
      else
        Scr_AddProfileTime(scrContext, (ScriptCodePos)m_scriptPos, __rdtsc() - v12, scrContext->m_vmDebugPub.builtInTime);
    }
    else
    {
      if ( scrContext->m_varPub.vmExecuting == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_vm.cpp", 1494, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.vmExecuting < 0xffffffff )", (const char *)&queryFormat, "scrContext.m_varPub.vmExecuting < UINT_MAX") )
        __debugbreak();
      ++scrContext->m_varPub.vmExecuting;
      scrContext->m_varPub.vmThreadContext = Sys_GetCurrentThreadContext();
      v10 = VM_Execute(scrContext);
      RemoveRefToObject(scrContext, v10);
      RemoveRefToValue(scrContext, (unsigned __int8)scrContext->m_vmPub.stack[1].type, scrContext->m_vmPub.stack[1].u);
      Scr_VM_LeaveExecuteBlock(scrContext);
    }
    if ( scrContext->m_errorLevel < 0 )
    {
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      if ( (__int64)(__rdtsc() - scrContext->m_runThreadsTimeStart) < 0 )
      {
        *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v20 = *(double *)&_XMM0 + 1.844674407370955e19;
        _XMM0 = v20;
      }
      *((_QWORD *)&v22 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v22 = *(double *)&_XMM0 * msecPerRawTimerTick;
      _XMM0 = v22;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      scrContext->m_runThreadsTime = *(float *)&_XMM1 + scrContext->m_runThreadsTime;
    }
    Scr_EndThreadExecutionTime(scrContext, VariableKeyObject);
  }
  SafeRemoveVariable(scrContext, scrContext->m_varPub.timeArrayId, scrContext->m_varPub.time);
LABEL_64:
  RemoveRefToObject(scrContext, timeId);
  ClearVariableValue(scrContext, scrContext->m_varPub.tempVariable);
  scrContext->m_vmPub.top = stack;
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

