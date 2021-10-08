/*
==============
Scr_GetNumParentScriptVars
==============
*/

unsigned int __fastcall Scr_GetNumParentScriptVars(const scrContext_t *scrContext)
{
  return ?Scr_GetNumParentScriptVars@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_InitClassMap
==============
*/

void __fastcall Scr_InitClassMap(scrContext_t *scrContext)
{
  ?Scr_InitClassMap@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
FindLastSibling
==============
*/

unsigned int __fastcall FindLastSibling(const scrContext_t *scrContext, unsigned int parentId)
{
  return ?FindLastSibling@@YAIAEBUscrContext_t@@I@Z(scrContext, parentId);
}

/*
==============
GetObjectVariable
==============
*/

unsigned int __fastcall GetObjectVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int id)
{
  return ?GetObjectVariable@@YAIAEAUscrContext_t@@II@Z(scrContext, parentId, id);
}

/*
==============
GetArrayVariable
==============
*/

unsigned int __fastcall GetArrayVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  return ?GetArrayVariable@@YAIAEAUscrContext_t@@II@Z(scrContext, parentId, unsignedValue);
}

/*
==============
GetValueType
==============
*/

VariableType __fastcall GetValueType(const scrContext_t *scrContext, unsigned int id)
{
  return ?GetValueType@@YA?AW4VariableType@@AEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_StopThread
==============
*/

void __fastcall Scr_StopThread(scrContext_t *scrContext, unsigned int threadId)
{
  ?Scr_StopThread@@YAXAEAUscrContext_t@@I@Z(scrContext, threadId);
}

/*
==============
Scr_FindField
==============
*/

unsigned int __fastcall Scr_FindField(const scrContext_t *scrContext, unsigned int name, VariableType *type)
{
  return ?Scr_FindField@@YAIAEBUscrContext_t@@IPEAW4VariableType@@@Z(scrContext, name, type);
}

/*
==============
Scr_EvalOr
==============
*/

void __fastcall Scr_EvalOr(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalOr@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
Scr_EvalShiftRight
==============
*/

void __fastcall Scr_EvalShiftRight(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalShiftRight@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
IsObjectFree
==============
*/

bool __fastcall IsObjectFree(const scrContext_t *scrContext, unsigned int id)
{
  return ?IsObjectFree@@YA_NAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_EvalBoolNot
==============
*/

void __fastcall Scr_EvalBoolNot(scrContext_t *scrContext, VariableValue *value)
{
  ?Scr_EvalBoolNot@@YAXAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
RemoveObjectVariable
==============
*/

void __fastcall RemoveObjectVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int id)
{
  ?RemoveObjectVariable@@YAXAEAUscrContext_t@@II@Z(scrContext, parentId, id);
}

/*
==============
Scr_EvalEquality
==============
*/

void __fastcall Scr_EvalEquality(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalEquality@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
Scr_AddPrevArrayKey
==============
*/

void __fastcall Scr_AddPrevArrayKey(scrContext_t *scrContext, unsigned int parentId, VariableValue *value)
{
  ?Scr_AddPrevArrayKey@@YAXAEAUscrContext_t@@IPEAUVariableValue@@@Z(scrContext, parentId, value);
}

/*
==============
Scr_FindAllEndons
==============
*/

unsigned int __fastcall Scr_FindAllEndons(scrContext_t *scrContext, unsigned int threadId, unsigned int *names)
{
  return ?Scr_FindAllEndons@@YAIAEAUscrContext_t@@IPEAI@Z(scrContext, threadId, names);
}

/*
==============
GetParentLocalId
==============
*/

unsigned int __fastcall GetParentLocalId(const scrContext_t *scrContext, unsigned int threadId)
{
  return ?GetParentLocalId@@YAIAEBUscrContext_t@@I@Z(scrContext, threadId);
}

/*
==============
ClearObject
==============
*/

void __fastcall ClearObject(scrContext_t *scrContext, unsigned int parentId)
{
  ?ClearObject@@YAXAEAUscrContext_t@@I@Z(scrContext, parentId);
}

/*
==============
ScriptCodePos::IsScriptPos
==============
*/

bool __fastcall ScriptCodePos::IsScriptPos(ScriptCodePos *this)
{
  return ?IsScriptPos@ScriptCodePos@@QEBA_NXZ(this);
}

/*
==============
GetStartLocalId
==============
*/

unsigned int __fastcall GetStartLocalId(scrContext_t *scrContext, unsigned int threadId)
{
  return ?GetStartLocalId@@YAIAEAUscrContext_t@@I@Z(scrContext, threadId);
}

/*
==============
Scr_WarnChildScriptVarsLimit
==============
*/

bool __fastcall Scr_WarnChildScriptVarsLimit(const scrContext_t *scrContext)
{
  return ?Scr_WarnChildScriptVarsLimit@@YA_NAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_FreeExtArray
==============
*/

void __fastcall Scr_FreeExtArray(scrContext_t *scrContext, unsigned int id)
{
  ?Scr_FreeExtArray@@YAXAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_ShutdownStringSet
==============
*/

void __fastcall Scr_ShutdownStringSet(scrContext_t *scrContext, unsigned int setId)
{
  ?Scr_ShutdownStringSet@@YAXAEAUscrContext_t@@I@Z(scrContext, setId);
}

/*
==============
Scr_GetThreadNotifyName
==============
*/

scr_string_t __fastcall Scr_GetThreadNotifyName(scrContext_t *scrContext, unsigned int startLocalId)
{
  return ?Scr_GetThreadNotifyName@@YA?AW4scr_string_t@@AEAUscrContext_t@@I@Z(scrContext, startLocalId);
}

/*
==============
Scr_DumpNotify
==============
*/

void __fastcall Scr_DumpNotify(const scrContext_t *scrContext, unsigned int notifyListOwnerId, scr_string_t stringValue, const char *source)
{
  ?Scr_DumpNotify@@YAXAEBUscrContext_t@@IW4scr_string_t@@PEBD@Z(scrContext, notifyListOwnerId, stringValue, source);
}

/*
==============
SetVariableEntityFieldValue
==============
*/

void __fastcall SetVariableEntityFieldValue(scrContext_t *scrContext, unsigned int entId, unsigned int fieldName, VariableValue *value)
{
  ?SetVariableEntityFieldValue@@YAXAEAUscrContext_t@@IIPEAUVariableValue@@@Z(scrContext, entId, fieldName, value);
}

/*
==============
GetVariableType
==============
*/

VariableType __fastcall GetVariableType(scrContext_t *scrContext, unsigned int id)
{
  return ?GetVariableType@@YA?AW4VariableType@@AEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_FindVariableField_NoCopyEntFieldArray_Out
==============
*/

void __fastcall Scr_FindVariableField_NoCopyEntFieldArray_Out(scrContext_t *scrContext, unsigned int parentId, unsigned int name, VariableValue *out)
{
  ?Scr_FindVariableField_NoCopyEntFieldArray_Out@@YAXAEAUscrContext_t@@IIPEAUVariableValue@@@Z(scrContext, parentId, name, out);
}

/*
==============
Scr_MarkExtArray
==============
*/

void __fastcall Scr_MarkExtArray(scrContext_t *scrContext, unsigned int id)
{
  ?Scr_MarkExtArray@@YAXAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
GetVariableName
==============
*/

unsigned int __fastcall GetVariableName(const scrContext_t *scrContext, unsigned int id)
{
  return ?GetVariableName@@YAIAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_KillEndonThread
==============
*/

void __fastcall Scr_KillEndonThread(scrContext_t *scrContext, unsigned int threadId)
{
  ?Scr_KillEndonThread@@YAXAEAUscrContext_t@@I@Z(scrContext, threadId);
}

/*
==============
Scr_CastString
==============
*/

bool __fastcall Scr_CastString(scrContext_t *scrContext, VariableValue *value)
{
  return ?Scr_CastString@@YA_NAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
AllocObject
==============
*/

unsigned int __fastcall AllocObject(scrContext_t *scrContext)
{
  return ?AllocObject@@YAIAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_MarkVariable
==============
*/

void __fastcall Scr_MarkVariable(scrContext_t *scrContext, unsigned int parentId)
{
  ?Scr_MarkVariable@@YAXAEAUscrContext_t@@I@Z(scrContext, parentId);
}

/*
==============
Scr_GetSelf
==============
*/

unsigned int __fastcall Scr_GetSelf(scrContext_t *scrContext, unsigned int threadId)
{
  return ?Scr_GetSelf@@YAIAEAUscrContext_t@@I@Z(scrContext, threadId);
}

/*
==============
Scr_ClearVector
==============
*/

void __fastcall Scr_ClearVector(scrContext_t *scrContext, VariableValue *value)
{
  ?Scr_ClearVector@@YAXAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
GetVariable
==============
*/

unsigned int __fastcall GetVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  return ?GetVariable@@YAIAEAUscrContext_t@@II@Z(scrContext, parentId, name);
}

/*
==============
FindNextSibling
==============
*/

unsigned int __fastcall FindNextSibling(const scrContext_t *scrContext, unsigned int id)
{
  return ?FindNextSibling@@YAIAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
SafeRemoveArrayVariable
==============
*/

void __fastcall SafeRemoveArrayVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  ?SafeRemoveArrayVariable@@YAXAEAUscrContext_t@@II@Z(scrContext, parentId, unsignedValue);
}

/*
==============
GetSiblingName
==============
*/

unsigned int __fastcall GetSiblingName(const scrContext_t *scrContext, unsigned int id)
{
  return ?GetSiblingName@@YAIAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_KillThread
==============
*/

void __fastcall Scr_KillThread(scrContext_t *scrContext, unsigned int parentId)
{
  ?Scr_KillThread@@YAXAEAUscrContext_t@@I@Z(scrContext, parentId);
}

/*
==============
AllocThread
==============
*/

unsigned int __fastcall AllocThread(scrContext_t *scrContext, unsigned int self)
{
  return ?AllocThread@@YAIAEAUscrContext_t@@I@Z(scrContext, self);
}

/*
==============
SetVariableNonEntityFieldValue
==============
*/

bool __fastcall SetVariableNonEntityFieldValue(scrContext_t *scrContext, unsigned int entId, unsigned int fieldName, VariableValue *value)
{
  return ?SetVariableNonEntityFieldValue@@YA_NAEAUscrContext_t@@IIPEAUVariableValue@@@Z(scrContext, entId, fieldName, value);
}

/*
==============
IsValidArrayIndex
==============
*/

bool __fastcall IsValidArrayIndex(unsigned int unsignedValue)
{
  return ?IsValidArrayIndex@@YA_NI@Z(unsignedValue);
}

/*
==============
Scr_GetMaxDevParentScriptVars
==============
*/

unsigned int __fastcall Scr_GetMaxDevParentScriptVars(const scrContext_t *scrContext)
{
  return ?Scr_GetMaxDevParentScriptVars@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
SetVariableFieldValue
==============
*/

void __fastcall SetVariableFieldValue(scrContext_t *scrContext, VariableValue *value)
{
  ?SetVariableFieldValue@@YAXAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
Scr_EvalGreaterEqual
==============
*/

void __fastcall Scr_EvalGreaterEqual(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalGreaterEqual@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
GetArraySize
==============
*/

unsigned int __fastcall GetArraySize(const scrContext_t *scrContext, unsigned int id)
{
  return ?GetArraySize@@YAIAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_AddFirstArrayKey
==============
*/

void __fastcall Scr_AddFirstArrayKey(scrContext_t *scrContext, unsigned int parentId)
{
  ?Scr_AddFirstArrayKey@@YAXAEAUscrContext_t@@I@Z(scrContext, parentId);
}

/*
==============
ScriptCodePos::CreateGenericPos
==============
*/

ScriptCodePos __fastcall ScriptCodePos::CreateGenericPos(const unsigned __int64 pos)
{
  return ?CreateGenericPos@ScriptCodePos@@SA?AU1@_K@Z(pos);
}

/*
==============
Scr_EvalGreater
==============
*/

void __fastcall Scr_EvalGreater(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalGreater@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
Scr_FreeObjects
==============
*/

void __fastcall Scr_FreeObjects(scrContext_t *scrContext)
{
  ?Scr_FreeObjects@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_AddClassField
==============
*/

void __fastcall Scr_AddClassField(scrContext_t *scrContext, EntityClass classnum, unsigned int name, unsigned int canonicalString, unsigned int offset)
{
  ?Scr_AddClassField@@YAXAEAUscrContext_t@@W4EntityClass@@III@Z(scrContext, classnum, name, canonicalString, offset);
}

/*
==============
Scr_GetMaxDevChildScriptVars
==============
*/

unsigned int __fastcall Scr_GetMaxDevChildScriptVars(const scrContext_t *scrContext)
{
  return ?Scr_GetMaxDevChildScriptVars@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
AddRefToValue
==============
*/

void __fastcall AddRefToValue(scrContext_t *scrContext, int type, VariableUnion u)
{
  ?AddRefToValue@@YAXAEAUscrContext_t@@HTVariableUnion@@@Z(scrContext, type, u);
}

/*
==============
Scr_GetOffset
==============
*/

int __fastcall Scr_GetOffset(scrContext_t *scrContext, EntityClass classnum, const char *name)
{
  return ?Scr_GetOffset@@YAHAEAUscrContext_t@@W4EntityClass@@PEBD@Z(scrContext, classnum, name);
}

/*
==============
AddRefToObject
==============
*/

void __fastcall AddRefToObject(scrContext_t *scrContext, unsigned int id)
{
  ?AddRefToObject@@YAXAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_GetArrayIndexValue
==============
*/

VariableValue *__fastcall Scr_GetArrayIndexValue(VariableValue *result, unsigned int name)
{
  return ?Scr_GetArrayIndexValue@@YA?AUVariableValue@@I@Z(result, name);
}

/*
==============
Scr_FixupFreeLists
==============
*/

void __fastcall Scr_FixupFreeLists(scrContext_t *scrContext)
{
  ?Scr_FixupFreeLists@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_CopyEntityNum
==============
*/

void __fastcall Scr_CopyEntityNum(scrContext_t *scrContext, int fromEntnum, int toEntnum)
{
  ?Scr_CopyEntityNum@@YAXAEAUscrContext_t@@HH@Z(scrContext, fromEntnum, toEntnum);
}

/*
==============
FreeValue
==============
*/

void __fastcall FreeValue(scrContext_t *scrContext, unsigned int id)
{
  ?FreeValue@@YAXAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_EvalLess
==============
*/

void __fastcall Scr_EvalLess(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalLess@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
Scr_FindVariableField_NoCopyEntFieldArray
==============
*/

VariableValue *__fastcall Scr_FindVariableField_NoCopyEntFieldArray(VariableValue *result, scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  return ?Scr_FindVariableField_NoCopyEntFieldArray@@YA?AUVariableValue@@AEAUscrContext_t@@II@Z(result, scrContext, parentId, name);
}

/*
==============
Scr_SetClassMap
==============
*/

void __fastcall Scr_SetClassMap(scrContext_t *scrContext, EntityClass classnum)
{
  ?Scr_SetClassMap@@YAXAEAUscrContext_t@@W4EntityClass@@@Z(scrContext, classnum);
}

/*
==============
FindObject
==============
*/

unsigned int __fastcall FindObject(const scrContext_t *scrContext, unsigned int id)
{
  return ?FindObject@@YAIAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
RemoveVariable
==============
*/

void __fastcall RemoveVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  ?RemoveVariable@@YAXAEAUscrContext_t@@II@Z(scrContext, parentId, unsignedValue);
}

/*
==============
Scr_AddStringSet
==============
*/

bool __fastcall Scr_AddStringSet(scrContext_t *scrContext, unsigned int setId, const char *string)
{
  return ?Scr_AddStringSet@@YA_NAEAUscrContext_t@@IPEBD@Z(scrContext, setId, string);
}

/*
==============
Scr_AllocExtArray
==============
*/

unsigned int __fastcall Scr_AllocExtArray(scrContext_t *scrContext)
{
  return ?Scr_AllocExtArray@@YAIAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptCodePos::SetScriptPos
==============
*/

void __fastcall ScriptCodePos::SetScriptPos(ScriptCodePos *this, const char *pos)
{
  ?SetScriptPos@ScriptCodePos@@QEAAXPEBD@Z(this, pos);
}

/*
==============
Scr_GetClassnumForCharId
==============
*/

EntityClass __fastcall Scr_GetClassnumForCharId(const scrContext_t *scrContext, char charId)
{
  return ?Scr_GetClassnumForCharId@@YA?AW4EntityClass@@AEBUscrContext_t@@D@Z(scrContext, charId);
}

/*
==============
RemoveArrayVariable
==============
*/

void __fastcall RemoveArrayVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  ?RemoveArrayVariable@@YAXAEAUscrContext_t@@II@Z(scrContext, parentId, unsignedValue);
}

/*
==============
Scr_AddFieldsForFileInternal
==============
*/

void __fastcall Scr_AddFieldsForFileInternal(const scrContext_t *scrContext, char *sourceBuffer, const char *filename)
{
  ?Scr_AddFieldsForFileInternal@@YAXAEBUscrContext_t@@PEADPEBD@Z(scrContext, sourceBuffer, filename);
}

/*
==============
ScriptCodePos::SetVarUsagePosIfNull
==============
*/

void __fastcall ScriptCodePos::SetVarUsagePosIfNull(ScriptCodePos *this, const char *varUsagePos)
{
  ?SetVarUsagePosIfNull@ScriptCodePos@@QEAAXPEBD@Z(this, varUsagePos);
}

/*
==============
RemoveRefToObject
==============
*/

void __fastcall RemoveRefToObject(scrContext_t *scrContext, unsigned int id)
{
  ?RemoveRefToObject@@YAXAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_RemoveThreadEmptyNotifyName
==============
*/

void __fastcall Scr_RemoveThreadEmptyNotifyName(scrContext_t *scrContext, unsigned int startLocalId)
{
  ?Scr_RemoveThreadEmptyNotifyName@@YAXAEAUscrContext_t@@I@Z(scrContext, startLocalId);
}

/*
==============
FindPrevSibling
==============
*/

unsigned int __fastcall FindPrevSibling(const scrContext_t *scrContext, unsigned int id)
{
  return ?FindPrevSibling@@YAIAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_FindVariableField
==============
*/

VariableValue *__fastcall Scr_FindVariableField(VariableValue *result, scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  return ?Scr_FindVariableField@@YA?AUVariableValue@@AEAUscrContext_t@@II@Z(result, scrContext, parentId, name);
}

/*
==============
GetObjectType
==============
*/

VariableType __fastcall GetObjectType(const scrContext_t *scrContext, unsigned int id)
{
  return ?GetObjectType@@YA?AW4VariableType@@AEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
FindArrayVariable
==============
*/

unsigned int __fastcall FindArrayVariable(scrContext_t *scrContext, unsigned int parentId, int intValue)
{
  return ?FindArrayVariable@@YAIAEAUscrContext_t@@IH@Z(scrContext, parentId, intValue);
}

/*
==============
Scr_FreeEntityList
==============
*/

void __fastcall Scr_FreeEntityList(scrContext_t *scrContext)
{
  ?Scr_FreeEntityList@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Variable_CheckReferences
==============
*/

void __fastcall Scr_Variable_CheckReferences(scrContext_t *scrContext)
{
  ?Scr_Variable_CheckReferences@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_DumpScriptMemoryUsage
==============
*/

void __fastcall Scr_DumpScriptMemoryUsage(const scrContext_t *scrContext)
{
  ?Scr_DumpScriptMemoryUsage@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_CastBool_NonInteger
==============
*/

int __fastcall Scr_CastBool_NonInteger(scrContext_t *scrContext, VariableValue *value)
{
  return ?Scr_CastBool_NonInteger@@YAHAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
Scr_AllocGameVariable
==============
*/

void __fastcall Scr_AllocGameVariable(scrContext_t *scrContext)
{
  ?Scr_AllocGameVariable@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptCodePos::IsEndPos
==============
*/

bool __fastcall ScriptCodePos::IsEndPos(ScriptCodePos *this)
{
  return ?IsEndPos@ScriptCodePos@@QEBA_NXZ(this);
}

/*
==============
RemoveRefToValue
==============
*/

void __fastcall RemoveRefToValue(scrContext_t *scrContext, int type, VariableUnion u)
{
  ?RemoveRefToValue@@YAXAEAUscrContext_t@@HTVariableUnion@@@Z(scrContext, type, u);
}

/*
==============
Scr_EvalDivide
==============
*/

void __fastcall Scr_EvalDivide(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalDivide@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
SetNewVariableValue
==============
*/

void __fastcall SetNewVariableValue(scrContext_t *scrContext, unsigned int id, VariableValue *value)
{
  ?SetNewVariableValue@@YAXAEAUscrContext_t@@IPEAUVariableValue@@@Z(scrContext, id, value);
}

/*
==============
Scr_EvalPlus
==============
*/

void __fastcall Scr_EvalPlus(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalPlus@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
Scr_EvalBinaryOperator
==============
*/

void __fastcall Scr_EvalBinaryOperator(scrContext_t *scrContext, int op, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalBinaryOperator@@YAXAEAUscrContext_t@@HPEAUVariableValue@@1@Z(scrContext, op, value1, value2);
}

/*
==============
Scr_SetThreadNotifyName
==============
*/

void __fastcall Scr_SetThreadNotifyName(scrContext_t *scrContext, unsigned int startLocalId, scr_string_t stringValue)
{
  ?Scr_SetThreadNotifyName@@YAXAEAUscrContext_t@@IW4scr_string_t@@@Z(scrContext, startLocalId, stringValue);
}

/*
==============
ClearVariableValue
==============
*/

void __fastcall ClearVariableValue(scrContext_t *scrContext, unsigned int id)
{
  ?ClearVariableValue@@YAXAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_EvalLessEqual
==============
*/

void __fastcall Scr_EvalLessEqual(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalLessEqual@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
Scr_InitVariables
==============
*/

void __fastcall Scr_InitVariables(scrContext_t *scrContext)
{
  ?Scr_InitVariables@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_EvalExOr
==============
*/

void __fastcall Scr_EvalExOr(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalExOr@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
GetNewObjectVariableReverse
==============
*/

unsigned int __fastcall GetNewObjectVariableReverse(scrContext_t *scrContext, unsigned int parentId, unsigned int id)
{
  return ?GetNewObjectVariableReverse@@YAIAEAUscrContext_t@@II@Z(scrContext, parentId, id);
}

/*
==============
GetObjectInternal
==============
*/

unsigned int __fastcall GetObjectInternal(scrContext_t *scrContext, unsigned int id)
{
  return ?GetObjectInternal@@YAIAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
ClearVariableField
==============
*/

void __fastcall ClearVariableField(scrContext_t *scrContext, unsigned int parentId, unsigned int name, VariableValue *value)
{
  ?ClearVariableField@@YAXAEAUscrContext_t@@IIPEAUVariableValue@@@Z(scrContext, parentId, name, value);
}

/*
==============
Scr_GetNumScriptVars
==============
*/

unsigned int __fastcall Scr_GetNumScriptVars(const scrContext_t *scrContext)
{
  return ?Scr_GetNumScriptVars@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_EvalVariableField
==============
*/

VariableValue *__fastcall Scr_EvalVariableField(VariableValue *result, scrContext_t *scrContext, unsigned int id)
{
  return ?Scr_EvalVariableField@@YA?AUVariableValue@@AEAUscrContext_t@@I@Z(result, scrContext, id);
}

/*
==============
Scr_FreeEntityNumForLocalClient
==============
*/

void __fastcall Scr_FreeEntityNumForLocalClient(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum, LocalClientNum_t localClientNum)
{
  ?Scr_FreeEntityNumForLocalClient@@YAXAEAUscrContext_t@@IW4EntityClass@@W4LocalClientNum_t@@@Z(scrContext, entnum, classnum, localClientNum);
}

/*
==============
Scr_WarnParentScriptVarsLimit
==============
*/

bool __fastcall Scr_WarnParentScriptVarsLimit(const scrContext_t *scrContext)
{
  return ?Scr_WarnParentScriptVarsLimit@@YA_NAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_EvalMultiply
==============
*/

void __fastcall Scr_EvalMultiply(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalMultiply@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
FindFirstSibling
==============
*/

unsigned int __fastcall FindFirstSibling(const scrContext_t *scrContext, unsigned int parentId)
{
  return ?FindFirstSibling@@YAIAEBUscrContext_t@@I@Z(scrContext, parentId);
}

/*
==============
Scr_GetVariableFieldIndex
==============
*/

unsigned int __fastcall Scr_GetVariableFieldIndex(scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  return ?Scr_GetVariableFieldIndex@@YAIAEAUscrContext_t@@II@Z(scrContext, parentId, name);
}

/*
==============
Scr_EvalShiftLeft
==============
*/

void __fastcall Scr_EvalShiftLeft(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalShiftLeft@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
SetVariableEntityFieldValueByValue
==============
*/

void __fastcall SetVariableEntityFieldValueByValue(scrContext_t *scrContext, unsigned int entId, unsigned int fieldName, VariableValue *value)
{
  ?SetVariableEntityFieldValueByValue@@YAXAEAUscrContext_t@@IIPEAUVariableValue@@@Z(scrContext, entId, fieldName, value);
}

/*
==============
RemoveRefToEmptyObject
==============
*/

void __fastcall RemoveRefToEmptyObject(scrContext_t *scrContext, unsigned int id)
{
  ?RemoveRefToEmptyObject@@YAXAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_DumpScriptVariables
==============
*/

void __fastcall Scr_DumpScriptVariables(const scrContext_t *scrContext, bool spreadsheet, bool summary, bool total, bool functionSummary, bool lineSort, const char *fileName, const char *functionName, unsigned int minCount, bool parentVars, bool childVars, bool notifyVars)
{
  ?Scr_DumpScriptVariables@@YAXAEBUscrContext_t@@_N1111PEBD2I111@Z(scrContext, spreadsheet, summary, total, functionSummary, lineSort, fileName, functionName, minCount, parentVars, childVars, notifyVars);
}

/*
==============
AddRefToVector
==============
*/

void __fastcall AddRefToVector(scrContext_t *scrContext, const float *vectorValue)
{
  ?AddRefToVector@@YAXAEAUscrContext_t@@PEBM@Z(scrContext, vectorValue);
}

/*
==============
Scr_EvalInequality
==============
*/

void __fastcall Scr_EvalInequality(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalInequality@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
Scr_DrawDebugVariablesForEntity
==============
*/

void __fastcall Scr_DrawDebugVariablesForEntity(scrContext_t *scrContext, unsigned int entityNum, const vec3_t *origin, const vec4_t *textColor, float fontSize)
{
  ?Scr_DrawDebugVariablesForEntity@@YAXAEAUscrContext_t@@IAEBTvec3_t@@AEBTvec4_t@@M@Z(scrContext, entityNum, origin, textColor, fontSize);
}

/*
==============
GetVariableKeyObject
==============
*/

unsigned int __fastcall GetVariableKeyObject(scrContext_t *scrContext, unsigned int id)
{
  return ?GetVariableKeyObject@@YAIAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_EvalAnd
==============
*/

void __fastcall Scr_EvalAnd(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalAnd@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
Scr_AddArrayKeys
==============
*/

void __fastcall Scr_AddArrayKeys(scrContext_t *scrContext, unsigned int parentId)
{
  ?Scr_AddArrayKeys@@YAXAEAUscrContext_t@@I@Z(scrContext, parentId);
}

/*
==============
RemoveVariableValue
==============
*/

void __fastcall RemoveVariableValue(scrContext_t *scrContext, unsigned int parentId, unsigned int index)
{
  ?RemoveVariableValue@@YAXAEAUscrContext_t@@II@Z(scrContext, parentId, index);
}

/*
==============
Scr_GetNameForType
==============
*/

const char *__fastcall Scr_GetNameForType(VariableType type)
{
  return ?Scr_GetNameForType@@YAPEBDW4VariableType@@@Z(type);
}

/*
==============
Scr_GetEntNum
==============
*/

unsigned int __fastcall Scr_GetEntNum(const scrContext_t *scrContext, unsigned int id)
{
  return ?Scr_GetEntNum@@YAIAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
GetNewObjectVariable
==============
*/

unsigned int __fastcall GetNewObjectVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int id)
{
  return ?GetNewObjectVariable@@YAIAEAUscrContext_t@@II@Z(scrContext, parentId, id);
}

/*
==============
Scr_AddFields
==============
*/

void __fastcall Scr_AddFields(scrContext_t *scrContext, const char *path, const char *extension)
{
  ?Scr_AddFields@@YAXAEAUscrContext_t@@PEBD1@Z(scrContext, path, extension);
}

/*
==============
GetNewVariable
==============
*/

unsigned int __fastcall GetNewVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  return ?GetNewVariable@@YAIAEAUscrContext_t@@II@Z(scrContext, parentId, name);
}

/*
==============
ScriptCodePos::IsScriptPos_Generic
==============
*/

bool __fastcall ScriptCodePos::IsScriptPos_Generic(const unsigned __int64 pos)
{
  return ?IsScriptPos_Generic@ScriptCodePos@@SA_N_K@Z(pos);
}

/*
==============
Scr_InitStringSet
==============
*/

unsigned int __fastcall Scr_InitStringSet(scrContext_t *scrContext)
{
  return ?Scr_InitStringSet@@YAIAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GetSafeParentLocalId
==============
*/

unsigned int __fastcall GetSafeParentLocalId(const scrContext_t *scrContext, unsigned int threadId)
{
  return ?GetSafeParentLocalId@@YAIAEBUscrContext_t@@I@Z(scrContext, threadId);
}

/*
==============
GetInternalVariableIndex
==============
*/

unsigned int __fastcall GetInternalVariableIndex(unsigned int unsignedValue)
{
  return ?GetInternalVariableIndex@@YAII@Z(unsignedValue);
}

/*
==============
Scr_ClearEntityNumForLocalClient
==============
*/

void __fastcall Scr_ClearEntityNumForLocalClient(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum, LocalClientNum_t localClientNum)
{
  ?Scr_ClearEntityNumForLocalClient@@YAXAEAUscrContext_t@@IW4EntityClass@@W4LocalClientNum_t@@@Z(scrContext, entnum, classnum, localClientNum);
}

/*
==============
Scr_EvalVariableObject
==============
*/

unsigned int __fastcall Scr_EvalVariableObject(scrContext_t *scrContext, unsigned int id)
{
  return ?Scr_EvalVariableObject@@YAIAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_RemoveClassMap
==============
*/

void __fastcall Scr_RemoveClassMap(scrContext_t *scrContext, EntityClass classnum)
{
  ?Scr_RemoveClassMap@@YAXAEAUscrContext_t@@W4EntityClass@@@Z(scrContext, classnum);
}

/*
==============
Scr_EvalBoolComplement
==============
*/

void __fastcall Scr_EvalBoolComplement(scrContext_t *scrContext, VariableValue *value)
{
  ?Scr_EvalBoolComplement@@YAXAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
Scr_GetThreadWaitTime
==============
*/

unsigned int __fastcall Scr_GetThreadWaitTime(scrContext_t *scrContext, unsigned int startLocalId)
{
  return ?Scr_GetThreadWaitTime@@YAIAEAUscrContext_t@@I@Z(scrContext, startLocalId);
}

/*
==============
AllocChildThread
==============
*/

unsigned int __fastcall AllocChildThread(scrContext_t *scrContext, unsigned int self, unsigned int parentLocalId)
{
  return ?AllocChildThread@@YAIAEAUscrContext_t@@II@Z(scrContext, self, parentLocalId);
}

/*
==============
Scr_GetMaxChildScriptVars
==============
*/

unsigned int __fastcall Scr_GetMaxChildScriptVars(const scrContext_t *scrContext)
{
  return ?Scr_GetMaxChildScriptVars@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetShortNameForType
==============
*/

const char *__fastcall Scr_GetShortNameForType(VariableType type)
{
  return ?Scr_GetShortNameForType@@YAPEBDW4VariableType@@@Z(type);
}

/*
==============
Scr_IsThreadAlive
==============
*/

int __fastcall Scr_IsThreadAlive(const scrContext_t *scrContext, unsigned int thread)
{
  return ?Scr_IsThreadAlive@@YAHAEBUscrContext_t@@I@Z(scrContext, thread);
}

/*
==============
SetVariableValue
==============
*/

void __fastcall SetVariableValue(scrContext_t *scrContext, unsigned int id, VariableValue *value)
{
  ?SetVariableValue@@YAXAEAUscrContext_t@@IPEAUVariableValue@@@Z(scrContext, id, value);
}

/*
==============
SafeRemoveVariable
==============
*/

void __fastcall SafeRemoveVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  ?SafeRemoveVariable@@YAXAEAUscrContext_t@@II@Z(scrContext, parentId, unsignedValue);
}

/*
==============
Scr_GetHWMChildScriptVars
==============
*/

unsigned int __fastcall Scr_GetHWMChildScriptVars(const scrContext_t *scrContext)
{
  return ?Scr_GetHWMChildScriptVars@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetMaxParentScriptVars
==============
*/

unsigned int __fastcall Scr_GetMaxParentScriptVars(const scrContext_t *scrContext)
{
  return ?Scr_GetMaxParentScriptVars@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetNumChildScriptVars
==============
*/

unsigned int __fastcall Scr_GetNumChildScriptVars(const scrContext_t *scrContext)
{
  return ?Scr_GetNumChildScriptVars@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_RemoveThreadNotifyName
==============
*/

void __fastcall Scr_RemoveThreadNotifyName(scrContext_t *scrContext, unsigned int startLocalId)
{
  ?Scr_RemoveThreadNotifyName@@YAXAEAUscrContext_t@@I@Z(scrContext, startLocalId);
}

/*
==============
IsFieldObject
==============
*/

bool __fastcall IsFieldObject(const scrContext_t *scrContext, unsigned int id)
{
  return ?IsFieldObject@@YA_NAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_GetEntClassId
==============
*/

char __fastcall Scr_GetEntClassId(const scrContext_t *scrContext, unsigned int id)
{
  return ?Scr_GetEntClassId@@YADAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_EvalVariableField_Out
==============
*/

void __fastcall Scr_EvalVariableField_Out(scrContext_t *scrContext, unsigned int id, VariableValue *out)
{
  ?Scr_EvalVariableField_Out@@YAXAEAUscrContext_t@@IPEAUVariableValue@@@Z(scrContext, id, out);
}

/*
==============
Scr_EvalVariable
==============
*/

VariableValue *__fastcall Scr_EvalVariable(VariableValue *result, scrContext_t *scrContext, unsigned int id)
{
  return ?Scr_EvalVariable@@YA?AUVariableValue@@AEAUscrContext_t@@I@Z(result, scrContext, id);
}

/*
==============
Scr_CastDebugString
==============
*/

void __fastcall Scr_CastDebugString(scrContext_t *scrContext, VariableValue *value)
{
  ?Scr_CastDebugString@@YAXAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
Scr_ClearWaitTime
==============
*/

void __fastcall Scr_ClearWaitTime(scrContext_t *scrContext, unsigned int startLocalId)
{
  ?Scr_ClearWaitTime@@YAXAEAUscrContext_t@@I@Z(scrContext, startLocalId);
}

/*
==============
Scr_AllocVector
==============
*/

float *__fastcall Scr_AllocVector(scrContext_t *scrContext)
{
  return ?Scr_AllocVector@@YAPEAMAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
IsValidObject
==============
*/

bool __fastcall IsValidObject(const ObjectVariableValue *value)
{
  return ?IsValidObject@@YA_NPEBUObjectVariableValue@@@Z(value);
}

/*
==============
RemoveRefToVector
==============
*/

void __fastcall RemoveRefToVector(scrContext_t *scrContext, const float *vectorValue)
{
  ?RemoveRefToVector@@YAXAEAUscrContext_t@@PEBM@Z(scrContext, vectorValue);
}

/*
==============
ScriptCodePos::CreateVarUsagePos
==============
*/

ScriptCodePos __fastcall ScriptCodePos::CreateVarUsagePos(const char *pos)
{
  return ?CreateVarUsagePos@ScriptCodePos@@SA?AU1@PEBD@Z(pos);
}

/*
==============
Scr_FindVariableField_Out
==============
*/

void __fastcall Scr_FindVariableField_Out(scrContext_t *scrContext, unsigned int parentId, unsigned int name, VariableValue *out)
{
  ?Scr_FindVariableField_Out@@YAXAEAUscrContext_t@@IIPEAUVariableValue@@@Z(scrContext, parentId, name, out);
}

/*
==============
Scr_FindAllThreads
==============
*/

unsigned int __fastcall Scr_FindAllThreads(scrContext_t *scrContext, unsigned int selfId, unsigned int *threads, unsigned int localId)
{
  return ?Scr_FindAllThreads@@YAIAEAUscrContext_t@@IPEAII@Z(scrContext, selfId, threads, localId);
}

/*
==============
SetVariableFieldValue
==============
*/

void __fastcall SetVariableFieldValue(scrContext_t *scrContext, unsigned int id, VariableValue *value)
{
  ?SetVariableFieldValue@@YAXAEAUscrContext_t@@IPEAUVariableValue@@@Z(scrContext, id, value);
}

/*
==============
Scr_EvalMinus
==============
*/

void __fastcall Scr_EvalMinus(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalMinus@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
GetNewArrayVariableReverse
==============
*/

unsigned int __fastcall GetNewArrayVariableReverse(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  return ?GetNewArrayVariableReverse@@YAIAEAUscrContext_t@@II@Z(scrContext, parentId, unsignedValue);
}

/*
==============
Scr_DumpScriptVariablesDefault
==============
*/

void __fastcall Scr_DumpScriptVariablesDefault(const scrContext_t *scrContext)
{
  ?Scr_DumpScriptVariablesDefault@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
GetVariableValueAddress
==============
*/

VariableUnion *__fastcall GetVariableValueAddress(scrContext_t *scrContext, unsigned int id)
{
  return ?GetVariableValueAddress@@YAPEATVariableUnion@@AEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_AddNextArrayKey
==============
*/

void __fastcall Scr_AddNextArrayKey(scrContext_t *scrContext, unsigned int parentId, VariableValue *value)
{
  ?Scr_AddNextArrayKey@@YAXAEAUscrContext_t@@IPEAUVariableValue@@@Z(scrContext, parentId, value);
}

/*
==============
Scr_EvalArrayRef
==============
*/

unsigned int __fastcall Scr_EvalArrayRef(scrContext_t *scrContext, unsigned int id)
{
  return ?Scr_EvalArrayRef@@YAIAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_ClearEntityNum
==============
*/

void __fastcall Scr_ClearEntityNum(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum)
{
  ?Scr_ClearEntityNum@@YAXAEAUscrContext_t@@IW4EntityClass@@@Z(scrContext, entnum, classnum);
}

/*
==============
Scr_GetHWMParentScriptVars
==============
*/

unsigned int __fastcall Scr_GetHWMParentScriptVars(const scrContext_t *scrContext)
{
  return ?Scr_GetHWMParentScriptVars@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
IsValidValue
==============
*/

bool __fastcall IsValidValue(const VariableValue *value)
{
  return ?IsValidValue@@YA_NPEBUVariableValue@@@Z(value);
}

/*
==============
AllocValue
==============
*/

unsigned int __fastcall AllocValue(scrContext_t *scrContext)
{
  return ?AllocValue@@YAIAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_FreeGameVariable
==============
*/

void __fastcall Scr_FreeGameVariable(scrContext_t *scrContext)
{
  ?Scr_FreeGameVariable@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GetNewArrayVariable
==============
*/

unsigned int __fastcall GetNewArrayVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  return ?GetNewArrayVariable@@YAIAEAUscrContext_t@@II@Z(scrContext, parentId, unsignedValue);
}

/*
==============
Scr_GetNameForTypeExtended
==============
*/

const char *__fastcall Scr_GetNameForTypeExtended(VariableType type)
{
  return ?Scr_GetNameForTypeExtended@@YAPEBDW4VariableType@@@Z(type);
}

/*
==============
ClearArray
==============
*/

void __fastcall ClearArray(scrContext_t *scrContext, unsigned int id, VariableValue *value)
{
  ?ClearArray@@YAXAEAUscrContext_t@@IPEAUVariableValue@@@Z(scrContext, id, value);
}

/*
==============
Scr_EvalEqualAny
==============
*/

bool __fastcall Scr_EvalEqualAny(const scrContext_t *scrContext, VariableValue *array, VariableValue *value)
{
  return ?Scr_EvalEqualAny@@YA_NAEBUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, array, value);
}

/*
==============
Scr_GetEntityId
==============
*/

unsigned int __fastcall Scr_GetEntityId(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum, LocalClientNum_t localClientNum)
{
  return ?Scr_GetEntityId@@YAIAEAUscrContext_t@@IW4EntityClass@@W4LocalClientNum_t@@@Z(scrContext, entnum, classnum, localClientNum);
}

/*
==============
Scr_MarkGameVariable
==============
*/

void __fastcall Scr_MarkGameVariable(scrContext_t *scrContext)
{
  ?Scr_MarkGameVariable@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_EvalMod
==============
*/

void __fastcall Scr_EvalMod(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_EvalMod@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
FreeThread
==============
*/

void __fastcall FreeThread(scrContext_t *scrContext, unsigned int self)
{
  ?FreeThread@@YAXAEAUscrContext_t@@I@Z(scrContext, self);
}

/*
==============
Scr_AllocVector
==============
*/

const float *__fastcall Scr_AllocVector(scrContext_t *scrContext, const float *v)
{
  return ?Scr_AllocVector@@YAPEBMAEAUscrContext_t@@PEBM@Z(scrContext, v);
}

/*
==============
FindVariable
==============
*/

unsigned int __fastcall FindVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  return ?FindVariable@@YAIAEAUscrContext_t@@II@Z(scrContext, parentId, name);
}

/*
==============
Scr_UnmatchingTypesError
==============
*/

void __fastcall Scr_UnmatchingTypesError(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  ?Scr_UnmatchingTypesError@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value1, value2);
}

/*
==============
Scr_EvalArray
==============
*/

void __fastcall Scr_EvalArray(scrContext_t *scrContext, VariableValue *value, VariableValue *index)
{
  ?Scr_EvalArray@@YAXAEAUscrContext_t@@PEAUVariableValue@@1@Z(scrContext, value, index);
}

/*
==============
Scr_SetEntityScriptVariableType
==============
*/

unsigned int __fastcall Scr_SetEntityScriptVariableType(scrContext_t *scrContext, unsigned int key, const char *value)
{
  return ?Scr_SetEntityScriptVariableType@@YAIAEAUscrContext_t@@IPEBD@Z(scrContext, key, value);
}

/*
==============
Scr_GetArrayIndexValue_Out
==============
*/

void __fastcall Scr_GetArrayIndexValue_Out(unsigned int name, VariableValue *out)
{
  ?Scr_GetArrayIndexValue_Out@@YAXIPEAUVariableValue@@@Z(name, out);
}

/*
==============
Scr_FindAllVariableField
==============
*/

unsigned int __fastcall Scr_FindAllVariableField(scrContext_t *scrContext, unsigned int parentId, unsigned int *names)
{
  return ?Scr_FindAllVariableField@@YAIAEAUscrContext_t@@IPEAI@Z(scrContext, parentId, names);
}

/*
==============
Scr_AllocArray
==============
*/

unsigned int __fastcall Scr_AllocArray(scrContext_t *scrContext)
{
  return ?Scr_AllocArray@@YAIAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetEntityIdRef
==============
*/

scr_entref_t __fastcall Scr_GetEntityIdRef(scrContext_t *scrContext, unsigned int entId)
{
  return ?Scr_GetEntityIdRef@@YA?AUscr_entref_t@@AEAUscrContext_t@@I@Z(scrContext, entId);
}

/*
==============
ScriptCodePos::CreateScriptPos
==============
*/

ScriptCodePos __fastcall ScriptCodePos::CreateScriptPos(const char *pos)
{
  return ?CreateScriptPos@ScriptCodePos@@SA?AU1@PEBD@Z(pos);
}

/*
==============
Scr_ShutdownVariables
==============
*/

void __fastcall Scr_ShutdownVariables(scrContext_t *scrContext)
{
  ?Scr_ShutdownVariables@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetChecksum
==============
*/

void __fastcall Scr_GetChecksum(const scrContext_t *scrContext, int *checksum)
{
  ?Scr_GetChecksum@@YAXAEBUscrContext_t@@QEAH@Z(scrContext, checksum);
}

/*
==============
GetVariableValueAddressConst
==============
*/

const VariableUnion *__fastcall GetVariableValueAddressConst(const scrContext_t *scrContext, unsigned int id)
{
  return ?GetVariableValueAddressConst@@YAPEBTVariableUnion@@AEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
ScriptCodePos::SetVarUsagePos
==============
*/

void __fastcall ScriptCodePos::SetVarUsagePos(ScriptCodePos *this, const char *varUsagePos)
{
  ?SetVarUsagePos@ScriptCodePos@@QEAAXPEBD@Z(this, varUsagePos);
}

/*
==============
Scr_FindEntityId
==============
*/

unsigned int __fastcall Scr_FindEntityId(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum, const LocalClientNum_t localClientNum)
{
  return ?Scr_FindEntityId@@YAIAEAUscrContext_t@@IW4EntityClass@@W4LocalClientNum_t@@@Z(scrContext, entnum, classnum, localClientNum);
}

/*
==============
Scr_PrintVars
==============
*/

void __fastcall Scr_PrintVars(scrContext_t *scrContext, unsigned int overrideFlags, bool allowFile)
{
  ?Scr_PrintVars@@YAXAEAUscrContext_t@@I_N@Z(scrContext, overrideFlags, allowFile);
}

/*
==============
RemoveNextVariable
==============
*/

void __fastcall RemoveNextVariable(scrContext_t *scrContext, unsigned int parentId)
{
  ?RemoveNextVariable@@YAXAEAUscrContext_t@@I@Z(scrContext, parentId);
}

/*
==============
Scr_FreeEntityNum
==============
*/

void __fastcall Scr_FreeEntityNum(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum)
{
  ?Scr_FreeEntityNum@@YAXAEAUscrContext_t@@IW4EntityClass@@@Z(scrContext, entnum, classnum);
}

/*
==============
Scr_GetChildStringValue
==============
*/

scr_string_t __fastcall Scr_GetChildStringValue(const scrContext_t *scrContext, unsigned int id)
{
  return ?Scr_GetChildStringValue@@YA?AW4scr_string_t@@AEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_GetRefCountToObject
==============
*/

int __fastcall Scr_GetRefCountToObject(const scrContext_t *scrContext, unsigned int id)
{
  return ?Scr_GetRefCountToObject@@YAHAEBUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
Scr_AddFieldsForRadiant
==============
*/

void __fastcall Scr_AddFieldsForRadiant(scrContext_t *scrContext)
{
  ?Scr_AddFieldsForRadiant@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_CastVector
==============
*/

void __fastcall Scr_CastVector(scrContext_t *scrContext, VariableValue *value)
{
  ?Scr_CastVector@@YAXAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
Scr_SetThreadWaitTime
==============
*/

void __fastcall Scr_SetThreadWaitTime(scrContext_t *scrContext, unsigned int startLocalId, unsigned int waitTime)
{
  ?Scr_SetThreadWaitTime@@YAXAEAUscrContext_t@@II@Z(scrContext, startLocalId, waitTime);
}

/*
==============
ScriptCodePos::GetScriptPos
==============
*/

const char *__fastcall ScriptCodePos::GetScriptPos(ScriptCodePos *this, const scrContext_t *scrContext)
{
  return ?GetScriptPos@ScriptCodePos@@QEBAPEBDAEBUscrContext_t@@@Z(this, scrContext);
}

/*
==============
Scr_EvalSizeValue
==============
*/

void __fastcall Scr_EvalSizeValue(scrContext_t *scrContext, VariableValue *value)
{
  ?Scr_EvalSizeValue@@YAXAEAUscrContext_t@@PEAUVariableValue@@@Z(scrContext, value);
}

/*
==============
FindObjectVariable
==============
*/

unsigned int __fastcall FindObjectVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int id)
{
  return ?FindObjectVariable@@YAIAEAUscrContext_t@@II@Z(scrContext, parentId, id);
}

/*
==============
IsValidChild
==============
*/

bool __fastcall IsValidChild(const ChildVariableValue *value)
{
  return ?IsValidChild@@YA_NPEBUChildVariableValue@@@Z(value);
}

/*
==============
Scr_AddLastArrayKey
==============
*/

void __fastcall Scr_AddLastArrayKey(scrContext_t *scrContext, unsigned int parentId)
{
  ?Scr_AddLastArrayKey@@YAXAEAUscrContext_t@@I@Z(scrContext, parentId);
}

/*
==============
Scr_CloneSpawnerIntoEnt
==============
*/

void __fastcall Scr_CloneSpawnerIntoEnt(scrContext_t *scrContext, int fromEntnum, int toEntnum)
{
  ?Scr_CloneSpawnerIntoEnt@@YAXAEAUscrContext_t@@HH@Z(scrContext, fromEntnum, toEntnum);
}

/*
==============
CopyArray
==============
*/

void __fastcall CopyArray(scrContext_t *scrContext, unsigned int parentId, unsigned int newParentId)
{
  ?CopyArray@@YAXAEAUscrContext_t@@II@Z(scrContext, parentId, newParentId);
}

/*
==============
ScriptCodePos::GetVarUsagePos
==============
*/

const char *__fastcall ScriptCodePos::GetVarUsagePos(ScriptCodePos *this)
{
  return ?GetVarUsagePos@ScriptCodePos@@QEBAPEBDXZ(this);
}

/*
==============
Scr_EvalFieldObject
==============
*/

unsigned int __fastcall Scr_EvalFieldObject(scrContext_t *scrContext, unsigned int tempVariable, VariableValue *value)
{
  return ?Scr_EvalFieldObject@@YAIAEAUscrContext_t@@IPEAUVariableValue@@@Z(scrContext, tempVariable, value);
}

/*
==============
Scr_EvalVariable_Out
==============
*/

void __fastcall Scr_EvalVariable_Out(scrContext_t *scrContext, unsigned int id, VariableValue *out)
{
  ?Scr_EvalVariable_Out@@YAXAEAUscrContext_t@@IPEAUVariableValue@@@Z(scrContext, id, out);
}

/*
==============
AllocFunction
==============
*/

unsigned int __fastcall AllocFunction(scrContext_t *scrContext, unsigned int self, unsigned int parentLocalId)
{
  return ?AllocFunction@@YAIAEAUscrContext_t@@II@Z(scrContext, self, parentLocalId);
}

/*
==============
Scr_DumpScriptThreads
==============
*/

void __fastcall Scr_DumpScriptThreads(scrContext_t *scrContext, bool bError)
{
  ?Scr_DumpScriptThreads@@YAXAEAUscrContext_t@@_N@Z(scrContext, bError);
}

/*
==============
AddRefToObject
==============
*/
void AddRefToObject(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ObjectVariableValue *v4; 
  bool v5; 

  v2 = id;
  if ( (!id || id >= scrContext->m_variableListParentSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4467, ASSERT_TYPE_ASSERT, "( id >= 1 && id < scrContext.m_variableListParentSize )", (const char *)&queryFormat, "id >= 1 && id < scrContext.m_variableListParentSize") )
    __debugbreak();
  ++scrContext->m_varPub.totalObjectRefCount;
  if ( scrContext->m_varDebugPub.m_Inited )
  {
    if ( !scrContext->m_varDebugPub.objectLeakCount[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4472, ASSERT_TYPE_ASSERT, "( scrContext.m_varDebugPub.objectLeakCount[id] )", (const char *)&queryFormat, "scrContext.m_varDebugPub.objectLeakCount[id]") )
      __debugbreak();
    ++scrContext->m_varDebugPub.objectLeakCount[v2];
  }
  v4 = &scrContext->m_varGlob.objectVariableValue[v2];
  if ( !IsValidObject(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4478, ASSERT_TYPE_ASSERT, "( IsValidObject( entryValue ) )", (const char *)&queryFormat, "IsValidObject( entryValue )") )
    __debugbreak();
  v5 = v4->u.o.refCount++ == 0xFFFF;
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4481, ASSERT_TYPE_ASSERT, "( entryValue->u.o.refCount )", (const char *)&queryFormat, "entryValue->u.o.refCount") )
    __debugbreak();
  if ( LOBYTE(v4->w.type) == 23 )
    Scr_AcquireObject(scrContext, (EntityClass)SBYTE1(v4->w.type), v4->u.f.next);
}

/*
==============
AddRefToValue
==============
*/
void AddRefToValue(scrContext_t *scrContext, int type, VariableUnion u)
{
  unsigned int v3; 
  volatile int *p_totalVectorRefCount; 

  v3 = type - 1;
  if ( v3 < 4 )
  {
    if ( v3 )
    {
      if ( v3 > 2 )
      {
        if ( !*(_BYTE *)(u.scriptCodePosValue - 1) )
        {
          p_totalVectorRefCount = &scrContext->m_varPub.totalVectorRefCount;
          if ( (((_BYTE)scrContext + 80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_totalVectorRefCount) )
            __debugbreak();
          _InterlockedIncrement(p_totalVectorRefCount);
          if ( scrStringDebugGlob )
          {
            if ( scrStringDebugGlob->refCount[(signed __int64)(u.scriptCodePosValue - (unsigned __int64)scrMemTreePub.mt_buffer - 4) / 16] < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4682, ASSERT_TYPE_ASSERT, "( scrStringDebugGlob->refCount[((char *)vectorValue - 4 - scrMemTreePub.mt_buffer) / MT_NODE_SIZE] >= 0 )", (const char *)&queryFormat, "scrStringDebugGlob->refCount[((char *)vectorValue - 4 - scrMemTreePub.mt_buffer) / MT_NODE_SIZE] >= 0") )
              __debugbreak();
            Sys_InterlockedIncrement(&scrStringDebugGlob->refCount[(signed __int64)(u.scriptCodePosValue - (unsigned __int64)scrMemTreePub.mt_buffer - 4) / 16]);
          }
          if ( (*(_WORD *)(u.scriptCodePosValue - 4))++ == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4688, ASSERT_TYPE_ASSERT, "( ((unsigned short *)vectorValue)[-2] )", (const char *)&queryFormat, "((unsigned short *)vectorValue)[-2]") )
            __debugbreak();
        }
      }
      else
      {
        SL_AddRefToString((scr_string_t)u.intValue);
      }
    }
    else
    {
      AddRefToObject(scrContext, u.uintValue);
    }
  }
}

/*
==============
AddRefToVector
==============
*/
void AddRefToVector(scrContext_t *scrContext, const float *vectorValue)
{
  volatile int *p_totalVectorRefCount; 

  if ( !*((_BYTE *)vectorValue - 1) )
  {
    p_totalVectorRefCount = &scrContext->m_varPub.totalVectorRefCount;
    if ( (((_BYTE)scrContext + 80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scrContext->m_varPub.totalVectorRefCount) )
      __debugbreak();
    _InterlockedIncrement(p_totalVectorRefCount);
    if ( scrStringDebugGlob )
    {
      if ( scrStringDebugGlob->refCount[((char *)vectorValue - scrMemTreePub.mt_buffer - 4) / 16] < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4682, ASSERT_TYPE_ASSERT, "( scrStringDebugGlob->refCount[((char *)vectorValue - 4 - scrMemTreePub.mt_buffer) / MT_NODE_SIZE] >= 0 )", (const char *)&queryFormat, "scrStringDebugGlob->refCount[((char *)vectorValue - 4 - scrMemTreePub.mt_buffer) / MT_NODE_SIZE] >= 0") )
        __debugbreak();
      Sys_InterlockedIncrement(&scrStringDebugGlob->refCount[((char *)vectorValue - scrMemTreePub.mt_buffer - 4) / 16]);
    }
    if ( (*((_WORD *)vectorValue - 2))++ == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4688, ASSERT_TYPE_ASSERT, "( ((unsigned short *)vectorValue)[-2] )", (const char *)&queryFormat, "((unsigned short *)vectorValue)[-2]") )
      __debugbreak();
  }
}

/*
==============
AllocChildThread
==============
*/
__int64 AllocChildThread(scrContext_t *scrContext, unsigned int self, unsigned int parentLocalId)
{
  int v4; 
  ObjectVariableValue *v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int Variable; 
  unsigned int Object; 
  unsigned int FirstSibling; 
  ChildVariableValue *v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  int intValue; 
  ObjectVariableValue *objectVariableValue; 
  bool v18; 
  ObjectVariableValue *v19; 
  scr_string_t v20; 
  __int64 v22; 
  __int64 v23; 
  unsigned int index; 
  unsigned int SafeParentLocalId; 

  SafeParentLocalId = parentLocalId;
  v4 = parentLocalId;
  v6 = AllocVariable(scrContext, &index);
  v7 = index;
  v8 = index;
  v6->u.o.refCount = 0;
  v6->w.type = 17;
  v6->u.f.next = self;
  Scr_ThreadCreated(scrContext, v8);
  do
  {
    Variable = FindVariable(scrContext, scrContext->m_varPub.pauseArrayId, v4 + 0x80000);
    if ( Variable )
    {
      Object = FindObject(scrContext, Variable);
      FirstSibling = FindFirstSibling(scrContext, Object);
      if ( FirstSibling )
      {
        do
        {
          v12 = &scrContext->m_varGlob.childVariableValue[FirstSibling];
          if ( (*(_BYTE *)&v12->tn & 0x3F) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4389, ASSERT_TYPE_ASSERT, "( value->GetType() == VAR_POINTER )", (const char *)&queryFormat, "value->GetType() == VAR_POINTER") )
            __debugbreak();
          if ( v12->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
            __debugbreak();
          v13 = (*(_WORD *)&v12->tn >> 6) + ((v12->k.match & 0x3FFF) << 10);
          v14 = v13 - 0x80000;
          if ( (unsigned int)v14 >= 0x40000 )
          {
            LODWORD(v23) = 0x40000;
            LODWORD(v22) = v13 - 0x80000;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4391, ASSERT_TYPE_ASSERT, "(unsigned)( (name - MEMORY_NODE_COUNT) ) < (unsigned)( ( 1 << 18 ) )", "(name - SL_MAX_STRING_INDEX) doesn't index VARIABLELIST_PARENT_SIZE_MAX\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          v15 = FindVariable(scrContext, Object, v13);
          intValue = GetVariableValueAddress(scrContext, v15)->intValue;
          objectVariableValue = scrContext->m_varGlob.objectVariableValue;
          v18 = LOBYTE(objectVariableValue[v14].w.type) == 18;
          v19 = &objectVariableValue[v14];
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3902, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "entryValue->GetType() == VAR_NOTIFY_THREAD") )
            __debugbreak();
          v20 = v19->w.type >> 8;
          AddRefToObject(scrContext, intValue);
          SL_AddRefToString(v20);
          VM_Endon(scrContext, intValue, v7, v20);
          FirstSibling = FindNextSibling(scrContext, FirstSibling);
        }
        while ( FirstSibling );
        v4 = SafeParentLocalId;
      }
    }
    SafeParentLocalId = GetSafeParentLocalId(scrContext, v4);
    v4 = SafeParentLocalId;
  }
  while ( SafeParentLocalId );
  return v7;
}

/*
==============
AllocChildVariable
==============
*/
ChildVariableValue *AllocChildVariable(scrContext_t *scrContext, unsigned int *index)
{
  ChildVariableValue *childVariableValue; 
  __int64 next; 
  const char *v6; 
  ChildVariableValue *v7; 
  ChildVariableValue *v8; 
  unsigned int hwmScriptValues; 
  bool v10; 
  ChildVariableValue *result; 

  childVariableValue = scrContext->m_varGlob.childVariableValue;
  next = childVariableValue->u.f.next;
  if ( (_DWORD)next )
  {
    if ( (unsigned int)next < scrContext->m_variableListChildSize )
      goto LABEL_9;
  }
  else
  {
    if ( !s_lastReportedTime || s_lastReportedTime + 120 < Sys_GetTimeAsSeconds() )
    {
      Scr_PrintVars(scrContext, 0x1Du, 0);
      s_lastReportedTime = Sys_GetTimeAsSeconds();
    }
    v6 = j_va("Exceeded maximum number of script variables (children): %d", scrContext->m_variableListChildSize);
    Scr_TerminalError(COM_ERR_5225, scrContext, v6);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3334, ASSERT_TYPE_ASSERT, "( ( new_index > 0 && new_index < scrContext.m_variableListChildSize ) )", "%s\n\t( new_index ) = %i", "( new_index > 0 && new_index < scrContext.m_variableListChildSize )", next) )
    __debugbreak();
LABEL_9:
  v7 = &scrContext->m_varGlob.childVariableValue[next];
  if ( (*(_BYTE *)&v7->tn & 0x3F) != 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3338, ASSERT_TYPE_ASSERT, "( new_value->GetType() == VAR_FREE )", (const char *)&queryFormat, "new_value->GetType() == VAR_FREE") )
    __debugbreak();
  v8 = &scrContext->m_varGlob.childVariableValue[v7->u.f.next];
  childVariableValue->u.f.next = v7->u.f.next;
  v8->u.f.prev = 0;
  ++scrContext->m_varPub.totalObjectRefCount;
  if ( scrContext->m_varDebugPub.m_Inited )
  {
    if ( scrContext->m_varDebugPub.childLeakCount[next] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3352, ASSERT_TYPE_ASSERT, "( !scrContext.m_varDebugPub.childLeakCount[new_index] )", (const char *)&queryFormat, "!scrContext.m_varDebugPub.childLeakCount[new_index]") )
      __debugbreak();
    ++scrContext->m_varDebugPub.childLeakCount[next];
  }
  hwmScriptValues = ++scrContext->m_varPub.numScriptValues;
  if ( scrContext->m_varPub.hwmScriptValues > hwmScriptValues )
    hwmScriptValues = scrContext->m_varPub.hwmScriptValues;
  v10 = scrContext->m_varPub.varUsagePos.m_genericPos == 0;
  scrContext->m_varPub.hwmScriptValues = hwmScriptValues;
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3362, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.varUsagePos.GetVarUsagePos() )", (const char *)&queryFormat, "scrContext.m_varPub.varUsagePos.GetVarUsagePos()") )
    __debugbreak();
  if ( scrContext->m_varDebugPub.m_Inited )
  {
    if ( scrContext->m_varDebugPub.childVarUsage[next].m_genericPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3365, ASSERT_TYPE_ASSERT, "( !scrContext.m_varDebugPub.childVarUsage[new_index].GetVarUsagePos() )", (const char *)&queryFormat, "!scrContext.m_varDebugPub.childVarUsage[new_index].GetVarUsagePos()") )
      __debugbreak();
    scrContext->m_varDebugPub.childVarUsage[next].m_genericPos = scrContext->m_varPub.varUsagePos.m_genericPos;
  }
  result = v7;
  *index = next;
  return result;
}

/*
==============
AllocFunction
==============
*/
__int64 AllocFunction(scrContext_t *scrContext, unsigned int self, unsigned int parentLocalId)
{
  ObjectVariableValue *v5; 
  __int64 result; 
  unsigned int index; 

  v5 = AllocVariable(scrContext, &index);
  if ( (parentLocalId & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 186, ASSERT_TYPE_ASSERT, "( !( ( unsigned ) parentLocalId & VAR_NAME_TEST_MASK ) )", (const char *)&queryFormat, "!( ( unsigned ) parentLocalId & VAR_NAME_TEST_MASK )") )
    __debugbreak();
  v5->u.f.next = self;
  v5->u.o.refCount = 0;
  result = index;
  v5->w.type = (parentLocalId << 8) | 0x14;
  return result;
}

/*
==============
AllocObject
==============
*/
__int64 AllocObject(scrContext_t *scrContext)
{
  const char *m_scriptPos; 
  ObjectVariableValue *v3; 
  __int64 result; 
  unsigned int index; 

  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  if ( !m_scriptPos )
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script object variable>";
  v3 = AllocVariable(scrContext, &index);
  v3->w.type = 21;
  v3->u.o.refCount = 0;
  result = index;
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  return result;
}

/*
==============
AllocThread
==============
*/
__int64 AllocThread(scrContext_t *scrContext, unsigned int self)
{
  ObjectVariableValue *v4; 
  unsigned int v5; 
  unsigned int index; 

  v4 = AllocVariable(scrContext, &index);
  v5 = index;
  v4->u.o.refCount = 0;
  v4->w.type = 17;
  v4->u.f.next = self;
  Scr_ThreadCreated(scrContext, v5);
  return index;
}

/*
==============
AllocValue
==============
*/
__int64 AllocValue(scrContext_t *scrContext)
{
  ChildVariableValue *v1; 
  unsigned int index; 

  v1 = AllocChildVariable(scrContext, &index);
  *(_WORD *)&v1->tn &= 0xFFC0u;
  v1->k.match &= 0x3FFFu;
  return index;
}

/*
==============
AllocVariable
==============
*/
ObjectVariableValue *AllocVariable(scrContext_t *scrContext, unsigned int *index)
{
  ObjectVariableValue *objectVariableValue; 
  __int64 next; 
  const char *v6; 
  ObjectVariableValue *v7; 
  __int64 v8; 
  ObjectVariableValue *v9; 
  unsigned int hwmScriptObjects; 
  bool v11; 
  ObjectVariableValue *result; 

  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  next = objectVariableValue->u.f.next;
  if ( (_DWORD)next )
  {
    if ( (unsigned int)next < scrContext->m_variableListParentSize )
      goto LABEL_9;
  }
  else
  {
    if ( !s_lastReportedTime || s_lastReportedTime + 120 < Sys_GetTimeAsSeconds() )
    {
      Scr_PrintVars(scrContext, 0x1Du, 0);
      s_lastReportedTime = Sys_GetTimeAsSeconds();
    }
    v6 = j_va("Exceeded maximum number of script objects (parents): %d", scrContext->m_variableListParentSize);
    Scr_TerminalError(COM_ERR_5224, scrContext, v6);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4100, ASSERT_TYPE_ASSERT, "( ( new_index >= 1 && new_index < scrContext.m_variableListParentSize ) )", "%s\n\t( new_index ) = %i", "( new_index >= 1 && new_index < scrContext.m_variableListParentSize )", next) )
    __debugbreak();
LABEL_9:
  v7 = &scrContext->m_varGlob.objectVariableValue[next];
  if ( LOBYTE(v7->w.type) != 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4102, ASSERT_TYPE_ASSERT, "( new_value->GetType() == VAR_FREE )", (const char *)&queryFormat, "new_value->GetType() == VAR_FREE") )
    __debugbreak();
  if ( scrContext->m_varGlob.objectVariableChildren[next].firstChild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4104, ASSERT_TYPE_ASSERT, "( !pScrVarGlob->objectVariableChildren[new_index].firstChild )", (const char *)&queryFormat, "!pScrVarGlob->objectVariableChildren[new_index].firstChild") )
    __debugbreak();
  if ( scrContext->m_varGlob.objectVariableChildren[next].lastChild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4105, ASSERT_TYPE_ASSERT, "( !pScrVarGlob->objectVariableChildren[new_index].lastChild )", (const char *)&queryFormat, "!pScrVarGlob->objectVariableChildren[new_index].lastChild") )
    __debugbreak();
  v8 = v7->u.f.next;
  v9 = scrContext->m_varGlob.objectVariableValue;
  objectVariableValue->u.f.next = v8;
  v9[v8].u.f.prev = 0;
  ++scrContext->m_varPub.totalObjectRefCount;
  if ( scrContext->m_varDebugPub.m_Inited )
  {
    if ( scrContext->m_varDebugPub.objectLeakCount[next] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4146, ASSERT_TYPE_ASSERT, "( !scrContext.m_varDebugPub.objectLeakCount[new_index] )", (const char *)&queryFormat, "!scrContext.m_varDebugPub.objectLeakCount[new_index]") )
      __debugbreak();
    ++scrContext->m_varDebugPub.objectLeakCount[next];
  }
  hwmScriptObjects = ++scrContext->m_varPub.numScriptObjects;
  if ( scrContext->m_varPub.hwmScriptObjects > hwmScriptObjects )
    hwmScriptObjects = scrContext->m_varPub.hwmScriptObjects;
  v11 = scrContext->m_varPub.varUsagePos.m_genericPos == 0;
  scrContext->m_varPub.hwmScriptObjects = hwmScriptObjects;
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4154, ASSERT_TYPE_ASSERT, "( pScrVarPub->varUsagePos.GetVarUsagePos() )", (const char *)&queryFormat, "pScrVarPub->varUsagePos.GetVarUsagePos()") )
    __debugbreak();
  if ( scrContext->m_varDebugPub.m_Inited )
  {
    if ( scrContext->m_varDebugPub.objectVarUsage[next].m_genericPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4157, ASSERT_TYPE_ASSERT, "( !scrContext.m_varDebugPub.objectVarUsage[new_index].GetVarUsagePos() )", (const char *)&queryFormat, "!scrContext.m_varDebugPub.objectVarUsage[new_index].GetVarUsagePos()") )
      __debugbreak();
    scrContext->m_varDebugPub.objectVarUsage[next].m_genericPos = scrContext->m_varPub.varUsagePos.m_genericPos;
  }
  result = v7;
  *index = next;
  return result;
}

/*
==============
ClearArray
==============
*/
void ClearArray(scrContext_t *scrContext, unsigned int id, VariableValue *value)
{
  ObjectVariableValue *v5; 
  unsigned int v6; 
  unsigned int ArrayVariable; 
  VariableValue *EntityFieldValue; 
  VariableType type; 
  VariableUnion u; 
  __int64 uintValue; 
  ChildVariableValue *v12; 
  const char *NameForType; 
  const char *v14; 
  unsigned int prev; 
  ObjectVariableValue *v16; 
  const char *v17; 
  const char *v18; 
  ComErrorCode v19; 
  unsigned int v20; 
  VariableType v21; 
  __int64 v22; 
  const char *v23; 
  ChildVariableValue::FreeListOrVariableUnion ida; 
  VariableValue result; 

  if ( id )
  {
    v12 = &scrContext->m_varGlob.childVariableValue[id];
    if ( (*(_BYTE *)&v12->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7598, ASSERT_TYPE_ASSERT, "( IsValidChild( childValue ) )", (const char *)&queryFormat, "IsValidChild( childValue )") )
      __debugbreak();
    type = *(_BYTE *)&v12->tn & 0x3F;
    ida = v12->u;
  }
  else
  {
    v5 = &scrContext->m_varGlob.objectVariableValue[scrContext->m_varPub.entId];
    if ( LOBYTE(v5->w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7562, ASSERT_TYPE_ASSERT, "( entValue->GetType() == VAR_ENTITY )", (const char *)&queryFormat, "entValue->GetType() == VAR_ENTITY") )
      __debugbreak();
    v6 = v5->w.type >> 8;
    if ( BYTE1(v5->w.type) >= 0xBu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7564, ASSERT_TYPE_ASSERT, "( classnum < ENTITY_CLASS_COUNT )", (const char *)&queryFormat, "classnum < ENTITY_CLASS_COUNT") )
      __debugbreak();
    ArrayVariable = FindArrayVariable(scrContext, scrContext->m_varPub.m_classMap[(unsigned __int8)v6].id, scrContext->m_varPub.entFieldName);
    if ( !ArrayVariable || (EntityFieldValue = GetEntityFieldValue(&result, scrContext, (EntityClass)v6, v5->u.f.next, (LocalClientNum_t)(BYTE2(v5->w.entInfo) - 1), scrContext->m_varGlob.childVariableValue[ArrayVariable].u.u.intValue), type = EntityFieldValue->type, u = EntityFieldValue->u, ida = (ChildVariableValue::FreeListOrVariableUnion)EntityFieldValue->u, type == VAR_UNDEFINED) )
    {
      type = VAR_UNDEFINED;
$error:
      scrContext->m_varPub.error_index = 1;
      NameForType = Scr_GetNameForType(type);
      v14 = j_va("%s is not an array", NameForType);
      Scr_Error(COM_ERR_5263, scrContext, v14);
      return;
    }
    uintValue = u.uintValue;
    if ( type == VAR_POINTER && !scrContext->m_varGlob.objectVariableValue[u.uintValue].u.o.refCount )
    {
      RemoveRefToValue(scrContext, 1, u);
      scrContext->m_varPub.error_index = 1;
      Scr_Error(COM_ERR_5262, scrContext, "read-only array cannot be changed");
      return;
    }
    RemoveRefToValue(scrContext, (unsigned __int8)type, u);
    if ( type == VAR_POINTER && scrContext->m_varGlob.objectVariableValue[uintValue].u.o.refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7586, ASSERT_TYPE_ASSERT, "( (varValue.type != VAR_POINTER) || !pScrVarGlob->objectVariableValue[varValue.u.pointerValue].u.o.refCount )", (const char *)&queryFormat, "(varValue.type != VAR_POINTER) || !pScrVarGlob->objectVariableValue[varValue.u.pointerValue].u.o.refCount") )
      __debugbreak();
    v12 = NULL;
  }
  if ( type != VAR_POINTER )
  {
    if ( type == VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7607, ASSERT_TYPE_ASSERT, "( varValue.type != VAR_STACK )", (const char *)&queryFormat, "varValue.type != VAR_STACK") )
      __debugbreak();
    goto $error;
  }
  prev = ida.f.prev;
  v16 = &scrContext->m_varGlob.objectVariableValue[ida.f.prev];
  if ( !IsValidObject(v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7619, ASSERT_TYPE_ASSERT, "( IsValidObject( entryValue ) )", (const char *)&queryFormat, "IsValidObject( entryValue )") )
    __debugbreak();
  if ( LOBYTE(v16->w.type) == 24 )
  {
    if ( v16->u.o.refCount )
    {
      RemoveRefToObject(scrContext, ida.f.prev);
      ida.f.prev = Scr_AllocArray(scrContext);
      v20 = prev;
      prev = ida.f.prev;
      CopyArray(scrContext, v20, ida.f.prev);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7636, ASSERT_TYPE_ASSERT, "( childValue )", (const char *)&queryFormat, "childValue") )
        __debugbreak();
      v12->u = ida;
    }
    v21 = value->type;
    if ( v21 == VAR_INTEGER )
    {
      v22 = value->u.uintValue;
      if ( (unsigned int)(v22 + 7602176) <= 0xF3FFFF )
      {
        SafeRemoveArrayVariable_Inline(scrContext, prev, v22);
        return;
      }
      v18 = j_va("array index %d out of range", v22);
      v19 = COM_ERR_5265;
    }
    else
    {
      if ( v21 == VAR_STRING )
      {
        SL_RemoveRefToString((scr_string_t)value->u.intValue);
        SafeRemoveVariable(scrContext, prev, value->u.intValue);
        return;
      }
      v23 = Scr_GetNameForType(v21);
      v18 = j_va("%s is not an array index", v23);
      v19 = COM_ERR_5266;
    }
  }
  else
  {
    scrContext->m_varPub.error_index = 1;
    v17 = Scr_GetNameForType((VariableType)LOBYTE(v16->w.type));
    v18 = j_va("%s is not an array", v17);
    v19 = COM_ERR_5264;
  }
  Scr_Error(v19, scrContext, v18);
}

/*
==============
ClearObject
==============
*/
void ClearObject(scrContext_t *scrContext, unsigned int parentId)
{
  __int64 v2; 
  __int64 v4; 
  unsigned __int8 type; 
  const ObjectVariableValue *v6; 

  v2 = parentId;
  v4 = parentId;
  type = scrContext->m_varGlob.objectVariableValue[v4].w.type;
  if ( (type == 26 || type == 23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3800, ASSERT_TYPE_ASSERT, "( ( parentType != VAR_FREE && parentType != VAR_ENTITY ) )", "%s\n\t( parentType ) = %i", "( parentType != VAR_FREE && parentType != VAR_ENTITY )", type) )
    __debugbreak();
  if ( (unsigned __int8)(type - 17) <= 3u )
    Com_Printf(0, "Unexpected script condition was detected. Object type %d not between FIRST_OBJECT and FIRST_CLEARABLE_OBJECT\n", type);
  AddRefToObject(scrContext, v2);
  ClearObjectInternal(scrContext, v2);
  if ( (!(_DWORD)v2 || (unsigned int)v2 >= scrContext->m_variableListParentSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4600, ASSERT_TYPE_ASSERT, "( id >= 1 && id < scrContext.m_variableListParentSize )", (const char *)&queryFormat, "id >= 1 && id < scrContext.m_variableListParentSize") )
    __debugbreak();
  v6 = &scrContext->m_varGlob.objectVariableValue[v4];
  if ( !IsValidObject(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4602, ASSERT_TYPE_ASSERT, "( IsValidObject( entryValue ) )", (const char *)&queryFormat, "IsValidObject( entryValue )") )
    __debugbreak();
  if ( scrContext->m_varGlob.objectVariableChildren[v2].firstChild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4603, ASSERT_TYPE_ASSERT, "( !scrContext.m_varGlob.objectVariableChildren[id].firstChild )", (const char *)&queryFormat, "!scrContext.m_varGlob.objectVariableChildren[id].firstChild") )
    __debugbreak();
  if ( v6->u.o.refCount )
  {
    --scrContext->m_varPub.totalObjectRefCount;
    if ( scrContext->m_varDebugPub.m_Inited )
    {
      if ( !scrContext->m_varDebugPub.objectLeakCount[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4611, ASSERT_TYPE_ASSERT, "( scrContext.m_varDebugPub.objectLeakCount[id] )", (const char *)&queryFormat, "scrContext.m_varDebugPub.objectLeakCount[id]") )
        __debugbreak();
      --scrContext->m_varDebugPub.objectLeakCount[v2];
    }
    --v6->u.o.refCount;
  }
  else
  {
    FreeVariable(scrContext, v2);
  }
}

/*
==============
ClearObjectInternal
==============
*/
void ClearObjectInternal(scrContext_t *scrContext, unsigned int parentId)
{
  __int64 v2; 
  ObjectVariableValue *v4; 
  ObjectVariableChildren *objectVariableChildren; 
  unsigned int firstChild; 
  ChildVariableValue *v7; 
  unsigned int nextSibling; 

  v2 = parentId;
  if ( (!parentId || parentId >= scrContext->m_variableListParentSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3762, ASSERT_TYPE_ASSERT, "( parentId > 0 && parentId < scrContext.m_variableListParentSize )", (const char *)&queryFormat, "parentId > 0 && parentId < scrContext.m_variableListParentSize") )
    __debugbreak();
  v4 = &scrContext->m_varGlob.objectVariableValue[v2];
  if ( !IsValidObject(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3765, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  objectVariableChildren = scrContext->m_varGlob.objectVariableChildren;
  firstChild = objectVariableChildren[v2].firstChild;
  if ( firstChild )
  {
    objectVariableChildren[v2] = 0i64;
    do
    {
      v7 = &scrContext->m_varGlob.childVariableValue[firstChild];
      if ( (*(_BYTE *)&v7->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3782, ASSERT_TYPE_ASSERT, "( IsValidChild( value ) )", (const char *)&queryFormat, "IsValidChild( value )") )
        __debugbreak();
      if ( v7->k.match >> 14 != (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3783, ASSERT_TYPE_ASSERT, "( value->GetParentId() == parentId )", (const char *)&queryFormat, "value->GetParentId() == parentId") )
        __debugbreak();
      nextSibling = v7->nextSibling;
      FreeChildValuePart1(scrContext, v7, firstChild, v4);
      FreeChildValuePart3(scrContext, v7, firstChild);
      firstChild = nextSibling;
    }
    while ( nextSibling );
  }
}

/*
==============
ClearVariableField
==============
*/
void ClearVariableField(scrContext_t *scrContext, unsigned int parentId, unsigned int name, VariableValue *value)
{
  __int64 v4; 
  __int64 v8; 
  unsigned __int8 type; 
  unsigned __int8 v10; 
  unsigned int Variable; 
  ObjectVariableValue *v12; 
  unsigned int v13; 
  unsigned int ArrayVariable; 

  v4 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5079, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  v8 = v4;
  type = scrContext->m_varGlob.objectVariableValue[v4].w.type;
  if ( (type == 26 || type < 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5080, ASSERT_TYPE_ASSERT, "( IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] ) )", (const char *)&queryFormat, "IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] )") )
    __debugbreak();
  v10 = scrContext->m_varGlob.objectVariableValue[v8].w.type;
  if ( (v10 <= 0x10u || v10 == 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5081, ASSERT_TYPE_ASSERT, "( (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_OBJECT && scrContext.m_varGlob.objectVariableValue[parentId].GetType() < VAR_FIRST_NONFIELD_OBJECT) || (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_DEAD_OBJECT) )", (const char *)&queryFormat, "(scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_OBJECT && scrContext.m_varGlob.objectVariableValue[parentId].GetType() < VAR_FIRST_NONFIELD_OBJECT) || (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_DEAD_OBJECT)") )
    __debugbreak();
  if ( FindVariable(scrContext, v4, name) )
  {
    Variable = FindVariable(scrContext, v4, name);
    RemoveVariableValue(scrContext, v4, Variable);
  }
  else
  {
    v12 = &scrContext->m_varGlob.objectVariableValue[v8];
    if ( LOBYTE(v12->w.type) == 23 )
    {
      v13 = v12->w.type >> 8;
      if ( BYTE1(v12->w.type) >= 0xBu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5095, ASSERT_TYPE_ASSERT, "( classnum < ENTITY_CLASS_COUNT )", (const char *)&queryFormat, "classnum < ENTITY_CLASS_COUNT") )
        __debugbreak();
      ArrayVariable = FindArrayVariable(scrContext, scrContext->m_varPub.m_classMap[(unsigned __int8)v13].id, name);
      if ( ArrayVariable )
      {
        value[1].type = VAR_UNDEFINED;
        SetEntityFieldValue(scrContext, (EntityClass)v13, v12->u.f.next, (LocalClientNum_t)(BYTE2(v12->w.entInfo) - 1), scrContext->m_varGlob.childVariableValue[ArrayVariable].u.u.intValue, value + 1);
      }
    }
  }
}

/*
==============
ClearVariableValue
==============
*/
void ClearVariableValue(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ChildVariableValue *v4; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5484, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  v4 = &scrContext->m_varGlob.childVariableValue[v2];
  if ( (*(_BYTE *)&v4->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5487, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
    __debugbreak();
  if ( (*(_BYTE *)&v4->tn & 0x3F) == 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5488, ASSERT_TYPE_ASSERT, "( entryValue->GetType() != VAR_STACK )", (const char *)&queryFormat, "entryValue->GetType() != VAR_STACK") )
    __debugbreak();
  RemoveRefToValue(scrContext, *(_BYTE *)&v4->tn & 0x3F, v4->u.u);
  *(_WORD *)&v4->tn &= 0xFFC0u;
}

/*
==============
CloneEntity
==============
*/
void CloneEntity(scrContext_t *scrContext, unsigned int parentId, unsigned int newParentId, unsigned int newClassnum)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int id; 
  unsigned int i; 
  ChildVariableValue *v11; 
  unsigned int v12; 
  VariableType v13; 
  unsigned int Variable; 
  VariableValue *top; 
  VariableValue value; 
  ObjectVariableValue *v17; 

  v4 = newClassnum;
  v6 = newParentId;
  v7 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7849, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  if ( !(_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7850, ASSERT_TYPE_ASSERT, "( newParentId )", (const char *)&queryFormat, "newParentId") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v7].w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7854, ASSERT_TYPE_ASSERT, "( parentValue->GetType() == VAR_ENTITY )", (const char *)&queryFormat, "parentValue->GetType() == VAR_ENTITY") )
    __debugbreak();
  v8 = v6;
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v6].w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7855, ASSERT_TYPE_ASSERT, "( pScrVarGlob->objectVariableValue[newParentId].GetType() == VAR_ENTITY )", (const char *)&queryFormat, "pScrVarGlob->objectVariableValue[newParentId].GetType() == VAR_ENTITY") )
    __debugbreak();
  v17 = &scrContext->m_varGlob.objectVariableValue[v8];
  if ( LOBYTE(v17->w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7859, ASSERT_TYPE_ASSERT, "( newParentValue->GetType() == VAR_ENTITY )", (const char *)&queryFormat, "newParentValue->GetType() == VAR_ENTITY") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v8].w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7860, ASSERT_TYPE_ASSERT, "( pScrVarGlob->objectVariableValue[newParentId].GetType() == VAR_ENTITY )", (const char *)&queryFormat, "pScrVarGlob->objectVariableValue[newParentId].GetType() == VAR_ENTITY") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7863, ASSERT_TYPE_ASSERT, "( newClassnum < ENTITY_CLASS_COUNT )", (const char *)&queryFormat, "newClassnum < ENTITY_CLASS_COUNT") )
    __debugbreak();
  id = scrContext->m_varPub.m_classMap[v4].id;
  for ( i = FindFirstSibling(scrContext, v7); i; i = FindNextSibling(scrContext, i) )
  {
    v11 = &scrContext->m_varGlob.childVariableValue[i];
    if ( (*(_BYTE *)&v11->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7870, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
      __debugbreak();
    if ( v11->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
      __debugbreak();
    v12 = (*(_WORD *)&v11->tn >> 6) + ((v11->k.match & 0x3FFF) << 10);
    if ( FindVariable(scrContext, v6, v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7873, ASSERT_TYPE_ASSERT, "( !FindVariable( scrContext, newParentId, name ) )", (const char *)&queryFormat, "!FindVariable( scrContext, newParentId, name )") )
      __debugbreak();
    v13 = *(_BYTE *)&v11->tn & 0x3F;
    if ( v12 + 7602176 > 0xF3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4791, ASSERT_TYPE_ASSERT, "( IsValidArrayIndex( (unsigned)intValue ) )", (const char *)&queryFormat, "IsValidArrayIndex( (unsigned)intValue )") )
      __debugbreak();
    Variable = FindVariable(scrContext, id, (v12 - 0x800000) & 0xFFFFFF);
    if ( Variable )
    {
      value.u.scriptCodePosValue = v11->u.u.scriptCodePosValue;
      value.type = v13;
      Scr_AddValue(scrContext, &value);
      top = scrContext->m_vmPub.top;
      scrContext->m_vmPub.inparamcount = 0;
      if ( SetEntityFieldValueBinary(scrContext, v17->u.f.next, scrContext->m_varGlob.childVariableValue[Variable].u.u.intValue, top) )
        continue;
    }
    SetObjectVariable(scrContext, v6, v13, v12, v11);
  }
}

/*
==============
CopyArray
==============
*/
void CopyArray(scrContext_t *scrContext, unsigned int parentId, unsigned int newParentId)
{
  __int64 v4; 
  ObjectVariableValue *v6; 
  unsigned int i; 
  ChildVariableValue *v8; 
  unsigned __int8 v9; 
  ChildVariableValue *childVariableValue; 
  ChildVariableValue *v11; 
  __int64 prev; 
  const char *m_scriptPos; 
  ObjectVariableValue *v14; 
  unsigned int v15; 
  unsigned int index; 

  v4 = parentId;
  v6 = &scrContext->m_varGlob.objectVariableValue[parentId];
  if ( !IsValidObject(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5223, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  if ( LOBYTE(v6->w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5224, ASSERT_TYPE_ASSERT, "( parentValue->GetType() == VAR_ARRAY )", (const char *)&queryFormat, "parentValue->GetType() == VAR_ARRAY") )
    __debugbreak();
  for ( i = scrContext->m_varGlob.objectVariableChildren[v4].firstChild; i; i = v8->nextSibling )
  {
    v8 = &scrContext->m_varGlob.childVariableValue[i];
    v9 = *(_BYTE *)&v8->tn & 0x3F;
    if ( v9 >= 0x11u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5236, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
      __debugbreak();
    childVariableValue = scrContext->m_varGlob.childVariableValue;
    if ( v8->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
      __debugbreak();
    v11 = &childVariableValue[GetNewVariableIndexReverseInternal(scrContext, newParentId, (*(_WORD *)&v8->tn >> 6) + ((v8->k.match & 0x3FFF) << 10))];
    if ( (*(_BYTE *)&v11->tn & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5240, ASSERT_TYPE_ASSERT, "( newEntryValue->GetType() == VAR_UNDEFINED )", (const char *)&queryFormat, "newEntryValue->GetType() == VAR_UNDEFINED") )
      __debugbreak();
    *(_WORD *)&v11->tn &= 0xFFC0u;
    *(_WORD *)&v11->tn |= v9;
    if ( v9 == 1 )
    {
      prev = v8->u.f.prev;
      if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[prev].w.type) == 24 )
      {
        m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
        if ( !m_scriptPos )
          scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script array variable>";
        v14 = AllocVariable(scrContext, &index);
        v15 = index;
        v14->w.type = 24;
        v14->u.o.refCount = 0;
        v14->u.f.next = 0;
        scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
        v11->u.f.prev = v15;
        CopyArray(scrContext, v8->u.f.prev, v15);
      }
      else
      {
        v11->u.f.prev = prev;
        AddRefToObject(scrContext, v8->u.f.prev);
      }
    }
    else
    {
      if ( v9 == 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5246, ASSERT_TYPE_ASSERT, "( type != VAR_STACK )", (const char *)&queryFormat, "type != VAR_STACK") )
        __debugbreak();
      v11->u.u.scriptCodePosValue = v8->u.u.scriptCodePosValue;
      AddRefToValue(scrContext, v9, v8->u.u);
    }
  }
}

/*
==============
CopyEntity
==============
*/
void CopyEntity(scrContext_t *scrContext, unsigned int parentId, unsigned int newParentId)
{
  __int64 v3; 
  __int64 v5; 
  unsigned int i; 
  ChildVariableValue *v7; 
  unsigned int v8; 

  v3 = newParentId;
  v5 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7930, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  if ( !(_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7931, ASSERT_TYPE_ASSERT, "( newParentId )", (const char *)&queryFormat, "newParentId") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v5].w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7935, ASSERT_TYPE_ASSERT, "( parentValue->GetType() == VAR_ENTITY )", (const char *)&queryFormat, "parentValue->GetType() == VAR_ENTITY") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7936, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[newParentId].GetType() == VAR_ENTITY )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[newParentId].GetType() == VAR_ENTITY") )
    __debugbreak();
  for ( i = FindFirstSibling(scrContext, v5); i; i = FindNextSibling(scrContext, i) )
  {
    v7 = &scrContext->m_varGlob.childVariableValue[i];
    if ( (*(_BYTE *)&v7->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7943, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
      __debugbreak();
    if ( v7->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
      __debugbreak();
    v8 = (*(_WORD *)&v7->tn >> 6) + ((v7->k.match & 0x3FFF) << 10);
    if ( FindVariable(scrContext, v3, v8) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7946, ASSERT_TYPE_ASSERT, "( !FindVariable( scrContext, newParentId, name ) )", (const char *)&queryFormat, "!FindVariable( scrContext, newParentId, name )") )
        __debugbreak();
    }
    SetObjectVariable(scrContext, v3, (VariableType)(*(_BYTE *)&v7->tn & 0x3F), v8, v7);
  }
}

/*
==============
ScriptCodePos::CreateGenericPos
==============
*/
ScriptCodePos ScriptCodePos::CreateGenericPos(const unsigned __int64 pos)
{
  return (ScriptCodePos)pos;
}

/*
==============
ScriptCodePos::CreateScriptPos
==============
*/
ScriptCodePos ScriptCodePos::CreateScriptPos(const char *pos)
{
  return (ScriptCodePos)pos;
}

/*
==============
ScriptCodePos::CreateVarUsagePos
==============
*/
ScriptCodePos ScriptCodePos::CreateVarUsagePos(const char *pos)
{
  return (ScriptCodePos)pos;
}

/*
==============
FindArrayVariable
==============
*/
unsigned int FindArrayVariable(scrContext_t *scrContext, unsigned int parentId, int intValue)
{
  if ( (unsigned int)(intValue + 7602176) > 0xF3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4791, ASSERT_TYPE_ASSERT, "( IsValidArrayIndex( (unsigned)intValue ) )", (const char *)&queryFormat, "IsValidArrayIndex( (unsigned)intValue )") )
    __debugbreak();
  return FindVariable(scrContext, parentId, (intValue - 0x800000) & 0xFFFFFF);
}

/*
==============
FindFirstSibling
==============
*/
__int64 FindFirstSibling(const scrContext_t *scrContext, unsigned int parentId)
{
  __int64 v2; 
  unsigned __int8 type; 

  v2 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5753, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  type = scrContext->m_varGlob.objectVariableValue[v2].w.type;
  if ( (type == 26 || type < 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5754, ASSERT_TYPE_ASSERT, "( IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] ) )", (const char *)&queryFormat, "IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] )") )
    __debugbreak();
  return scrContext->m_varGlob.objectVariableChildren[v2].firstChild;
}

/*
==============
FindLastSibling
==============
*/
__int64 FindLastSibling(const scrContext_t *scrContext, unsigned int parentId)
{
  __int64 v2; 
  unsigned __int8 type; 

  v2 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5776, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  type = scrContext->m_varGlob.objectVariableValue[v2].w.type;
  if ( (type == 26 || type < 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5777, ASSERT_TYPE_ASSERT, "( IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] ) )", (const char *)&queryFormat, "IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] )") )
    __debugbreak();
  return scrContext->m_varGlob.objectVariableChildren[v2].lastChild;
}

/*
==============
FindNextSibling
==============
*/
__int64 FindNextSibling(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ChildVariableValue *v4; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5765, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  if ( (unsigned int)v2 >= scrContext->m_variableListChildSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5766, ASSERT_TYPE_ASSERT, "( id < scrContext.m_variableListChildSize )", (const char *)&queryFormat, "id < scrContext.m_variableListChildSize") )
    __debugbreak();
  v4 = &scrContext->m_varGlob.childVariableValue[v2];
  if ( (*(_BYTE *)&v4->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5768, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
    __debugbreak();
  return v4->nextSibling;
}

/*
==============
FindObject
==============
*/
__int64 FindObject(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ChildVariableValue *v4; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5856, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  v4 = &scrContext->m_varGlob.childVariableValue[v2];
  if ( (*(_BYTE *)&v4->tn & 0x3F) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5859, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_POINTER )", (const char *)&queryFormat, "entryValue->GetType() == VAR_POINTER") )
    __debugbreak();
  return v4->u.f.prev;
}

/*
==============
FindObjectVariable
==============
*/
unsigned int FindObjectVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int id)
{
  return FindVariable(scrContext, parentId, id + 0x80000);
}

/*
==============
FindPrevSibling
==============
*/
__int64 FindPrevSibling(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ChildVariableValue *v4; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5788, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  if ( (unsigned int)v2 >= scrContext->m_variableListChildSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5789, ASSERT_TYPE_ASSERT, "( id < scrContext.m_variableListChildSize )", (const char *)&queryFormat, "id < scrContext.m_variableListChildSize") )
    __debugbreak();
  v4 = &scrContext->m_varGlob.childVariableValue[v2];
  if ( (*(_BYTE *)&v4->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5791, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
    __debugbreak();
  return v4->prevSibling;
}

/*
==============
FindVariable
==============
*/
__int64 FindVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  __int64 v3; 
  __int64 v6; 
  unsigned int *childVariableBucket; 
  unsigned int v8; 
  unsigned int *v9; 
  unsigned int BucketMatch; 
  unsigned int VariableIndexInternal3; 

  v3 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3255, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  if ( !IsValidObject(&scrContext->m_varGlob.objectVariableValue[v3]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3257, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  v6 = (unsigned __int16)(name + 101 * v3);
  childVariableBucket = scrContext->m_varGlob.childVariableBucket;
  v8 = childVariableBucket[v6];
  v9 = &childVariableBucket[v6];
  if ( !v8 )
    return 0i64;
  BucketMatch = GetBucketMatch(v3, name);
  VariableIndexInternal3 = FindVariableIndexInternal3(scrContext, v9, v8, BucketMatch);
  if ( VariableIndexInternal3 && scrContext->m_varGlob.childVariableValue[VariableIndexInternal3].k.match >> 14 != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3277, ASSERT_TYPE_ASSERT, "( index == NULL_CHILD_VARIABLE_ID || scrContext.m_varGlob.childVariableValue[index].GetParentId() == parentId )", (const char *)&queryFormat, "index == NULL_CHILD_VARIABLE_ID || scrContext.m_varGlob.childVariableValue[index].GetParentId() == parentId") )
    __debugbreak();
  return VariableIndexInternal3;
}

/*
==============
FindVariableIndexInternal3
==============
*/
__int64 FindVariableIndexInternal3(scrContext_t *scrContext, unsigned int *bucket, unsigned int first_index, unsigned int match)
{
  __int64 v5; 
  ChildVariableValue *v9; 
  __int64 result; 
  unsigned int next; 
  ChildVariableValue *v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v17; 
  unsigned int m_variableListChildSize; 

  v5 = first_index;
  if ( first_index >= scrContext->m_variableListChildSize )
  {
    m_variableListChildSize = scrContext->m_variableListChildSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3158, ASSERT_TYPE_ASSERT, "(unsigned)( first_index ) < (unsigned)( scrContext.m_variableListChildSize )", "first_index doesn't index scrContext.m_variableListChildSize\n\t%i not in [0, %i)", first_index, m_variableListChildSize) )
      __debugbreak();
  }
  _RDX = scrContext->m_varGlob.childVariableValue;
  v9 = &_RDX[v5];
  if ( v9->k.match == match )
  {
    _RCX = 32i64 * v9->prevSibling;
    __asm { prefetcht0 byte ptr [rcx+rdx] }
    return (unsigned int)v5;
  }
  else
  {
    next = v9->next;
    if ( next )
    {
      while ( 1 )
      {
        v13 = v9;
        if ( next >= scrContext->m_variableListChildSize )
        {
          LODWORD(v17) = scrContext->m_variableListChildSize;
          LODWORD(v15) = next;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3200, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( scrContext.m_variableListChildSize )", "index doesn't index scrContext.m_variableListChildSize\n\t%i not in [0, %i)", v15, v17) )
            __debugbreak();
        }
        v9 = &scrContext->m_varGlob.childVariableValue[next];
        v14 = v9->next;
        if ( v9->k.match == match )
          break;
        next = v9->next;
        if ( !v14 )
          return 0i64;
      }
      v13->next = v14;
      v9->next = v5;
      result = next;
      *bucket = next;
    }
    else
    {
      return 0i64;
    }
  }
  return result;
}

/*
==============
FreeChildValuePart1
==============
*/
void FreeChildValuePart1(scrContext_t *scrContext, ChildVariableValue *value, unsigned int index, ObjectVariableValue *parentValue)
{
  unsigned int Name; 
  VariableType v8; 
  unsigned int *childVariableBucket; 
  unsigned int *p_next; 
  __int64 i; 
  VariableValue out; 

  if ( LOBYTE(parentValue->w.type) == 24 )
  {
    --parentValue->u.f.next;
    Name = ChildVariableValue::GetName(value);
    if ( Name )
    {
      if ( Name >= 0x80000 )
      {
        if ( Name >= 0xC0000 )
        {
          v8 = VAR_INTEGER;
          Name -= 0x800000;
        }
        else
        {
          v8 = VAR_POINTER;
          Name -= 0x80000;
        }
        goto LABEL_10;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5028, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    {
      __debugbreak();
      v8 = VAR_STRING;
LABEL_10:
      MakeVariableValue_Out(v8, Name, &out);
      RemoveRefToValue(scrContext, (unsigned __int8)out.type, out.u);
      goto LABEL_11;
    }
    v8 = VAR_STRING;
    goto LABEL_10;
  }
LABEL_11:
  childVariableBucket = scrContext->m_varGlob.childVariableBucket;
  p_next = &childVariableBucket[(unsigned __int16)(ChildVariableValue::GetName(value) + 101 * (value->k.match >> 14))];
  for ( i = *p_next; (_DWORD)i != index; i = *p_next )
    p_next = &scrContext->m_varGlob.childVariableValue[i].next;
  *p_next = value->next;
}

/*
==============
FreeChildValuePart3
==============
*/
void FreeChildValuePart3(scrContext_t *scrContext, ChildVariableValue *value, unsigned int index)
{
  __int64 v4; 
  bool m_Inited; 
  ChildVariableValue *childVariableValue; 
  __int64 next; 

  v4 = index;
  RemoveRefToValue(scrContext, *(_BYTE *)&value->tn & 0x3F, value->u.u);
  m_Inited = scrContext->m_varDebugPub.m_Inited;
  --scrContext->m_varPub.totalObjectRefCount;
  if ( m_Inited )
  {
    if ( !scrContext->m_varDebugPub.childLeakCount[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3695, ASSERT_TYPE_ASSERT, "( scrContext.m_varDebugPub.childLeakCount[index] )", (const char *)&queryFormat, "scrContext.m_varDebugPub.childLeakCount[index]") )
      __debugbreak();
    if ( --scrContext->m_varDebugPub.childLeakCount[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3697, ASSERT_TYPE_ASSERT, "( !scrContext.m_varDebugPub.childLeakCount[index] )", (const char *)&queryFormat, "!scrContext.m_varDebugPub.childLeakCount[index]") )
      __debugbreak();
    m_Inited = scrContext->m_varDebugPub.m_Inited;
  }
  --scrContext->m_varPub.numScriptValues;
  if ( m_Inited )
  {
    if ( !scrContext->m_varDebugPub.childVarUsage[v4].m_genericPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3706, ASSERT_TYPE_ASSERT, "( scrContext.m_varDebugPub.childVarUsage[index].GetVarUsagePos() )", (const char *)&queryFormat, "scrContext.m_varDebugPub.childVarUsage[index].GetVarUsagePos()") )
      __debugbreak();
    scrContext->m_varDebugPub.childVarUsage[v4].m_genericPos = 0i64;
  }
  *(_WORD *)&value->tn &= 0xFFDAu;
  *(_WORD *)&value->tn |= 0x1Au;
  childVariableValue = scrContext->m_varGlob.childVariableValue;
  next = childVariableValue->u.f.next;
  value->u.f.next = next;
  value->u.f.prev = 0;
  childVariableValue[next].u.f.prev = v4;
  childVariableValue->u.f.next = v4;
}

/*
==============
FreeThread
==============
*/
void FreeThread(scrContext_t *scrContext, unsigned int self)
{
  unsigned int v2; 
  __int64 v4; 
  int v5; 
  bitarray<128> *i; 
  unsigned int *p_totalTime; 
  bitarray<128> *v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  int v12; 
  bitarray<128> *v14; 
  bitarray<128> *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v2 = 0;
  v4 = self;
  v5 = 0;
  for ( i = &scrContext->m_profileScript.threadId[v4]; !i->array[0]; i = (bitarray<128> *)((char *)i + 4) )
  {
    if ( (unsigned int)++v5 >= 4 )
      return;
  }
  p_totalTime = &scrContext->m_profileScript.write[0].totalTime;
  do
  {
    v9 = &scrContext->m_profileScript.threadId[v4];
    if ( v2 >= 0x80 )
    {
      LODWORD(v17) = 128;
      LODWORD(v16) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v16, v17) )
        __debugbreak();
    }
    v10 = 0x80000000 >> (v2 & 0x1F);
    v11 = (unsigned __int64)v2 >> 5;
    if ( (v10 & v9->array[v11]) != 0 )
    {
      v12 = __rdtsc();
      if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 284, ASSERT_TYPE_ASSERT, "( fsID != NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "fsID != NULL_OBJECT_VARIABLE_ID") )
        __debugbreak();
      if ( (*(p_totalTime - 3))-- == 1 )
        *p_totalTime += v12 - *(p_totalTime - 1);
      v14 = &scrContext->m_profileScript.threadId[v4];
      if ( v2 >= 0x80 )
      {
        LODWORD(v17) = 128;
        LODWORD(v16) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v16, v17) )
          __debugbreak();
      }
      if ( (v10 & v14->array[v11]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 291, ASSERT_TYPE_ASSERT, "( scrContext.m_profileScript.threadId[fsID].testBit( profileIndex ) )", (const char *)&queryFormat, "scrContext.m_profileScript.threadId[fsID].testBit( profileIndex )") )
        __debugbreak();
      v15 = &scrContext->m_profileScript.threadId[v4];
      if ( v2 >= 0x80 )
      {
        LODWORD(v19) = 128;
        LODWORD(v18) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v18, v19) )
          __debugbreak();
      }
      v15->array[v11] &= ~v10;
    }
    ++v2;
    p_totalTime += 4;
  }
  while ( (int)v2 < 128 );
}

/*
==============
FreeValue
==============
*/
void FreeValue(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ChildVariableValue *v4; 

  v2 = id;
  if ( (!id || id >= scrContext->m_variableListChildSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4455, ASSERT_TYPE_ASSERT, "( id > 0 && id < scrContext.m_variableListChildSize )", (const char *)&queryFormat, "id > 0 && id < scrContext.m_variableListChildSize") )
    __debugbreak();
  v4 = &scrContext->m_varGlob.childVariableValue[v2];
  if ( (*(_BYTE *)&v4->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4457, ASSERT_TYPE_ASSERT, "( IsValidChild( value ) )", (const char *)&queryFormat, "IsValidChild( value )") )
    __debugbreak();
  if ( v4->k.match >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4458, ASSERT_TYPE_ASSERT, "( value->GetParentId() == 0 )", (const char *)&queryFormat, "value->GetParentId() == 0") )
    __debugbreak();
  FreeChildValuePart3(scrContext, v4, v2);
}

/*
==============
FreeVariable
==============
*/
void FreeVariable(scrContext_t *scrContext, unsigned int index)
{
  __int64 v2; 
  ObjectVariableValue *v4; 
  ObjectVariableValue *objectVariableValue; 
  __int64 next; 

  v2 = index;
  if ( (!index || index >= scrContext->m_variableListParentSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4182, ASSERT_TYPE_ASSERT, "( index > 0 && index < scrContext.m_variableListParentSize )", (const char *)&queryFormat, "index > 0 && index < scrContext.m_variableListParentSize") )
    __debugbreak();
  v4 = &scrContext->m_varGlob.objectVariableValue[v2];
  if ( !IsValidObject(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4184, ASSERT_TYPE_ASSERT, "( IsValidObject( value ) )", (const char *)&queryFormat, "IsValidObject( value )") )
    __debugbreak();
  if ( scrContext->m_varGlob.objectVariableChildren[v2].firstChild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4185, ASSERT_TYPE_ASSERT, "( !pScrVarGlob->objectVariableChildren[index].firstChild )", (const char *)&queryFormat, "!pScrVarGlob->objectVariableChildren[index].firstChild") )
    __debugbreak();
  if ( scrContext->m_varGlob.objectVariableChildren[v2].lastChild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4186, ASSERT_TYPE_ASSERT, "( !pScrVarGlob->objectVariableChildren[index].lastChild )", (const char *)&queryFormat, "!pScrVarGlob->objectVariableChildren[index].lastChild") )
    __debugbreak();
  if ( (_DWORD)v2 == scrContext->m_varPub.removeId )
    scrContext->m_varPub.removeId = 0;
  --scrContext->m_varPub.totalObjectRefCount;
  if ( scrContext->m_varDebugPub.m_Inited )
  {
    if ( !scrContext->m_varDebugPub.objectLeakCount[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4199, ASSERT_TYPE_ASSERT, "( scrContext.m_varDebugPub.objectLeakCount[index] )", (const char *)&queryFormat, "scrContext.m_varDebugPub.objectLeakCount[index]") )
      __debugbreak();
    if ( --scrContext->m_varDebugPub.objectLeakCount[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4201, ASSERT_TYPE_ASSERT, "( !scrContext.m_varDebugPub.objectLeakCount[index] )", (const char *)&queryFormat, "!scrContext.m_varDebugPub.objectLeakCount[index]") )
      __debugbreak();
  }
  --scrContext->m_varPub.numScriptObjects;
  if ( scrContext->m_varDebugPub.m_Inited )
  {
    if ( !scrContext->m_varDebugPub.objectVarUsage[v2].m_genericPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4209, ASSERT_TYPE_ASSERT, "( scrContext.m_varDebugPub.objectVarUsage[index].GetVarUsagePos() )", (const char *)&queryFormat, "scrContext.m_varDebugPub.objectVarUsage[index].GetVarUsagePos()") )
      __debugbreak();
    scrContext->m_varDebugPub.objectVarUsage[v2].m_genericPos = 0i64;
  }
  v4->w.type = 26;
  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  next = objectVariableValue->u.f.next;
  v4->u.f.next = next;
  v4->u.f.prev = 0;
  objectVariableValue[next].u.f.prev = v2;
  objectVariableValue->u.f.next = v2;
}

/*
==============
GetArraySize
==============
*/
__int64 GetArraySize(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ObjectVariableValue *objectVariableValue; 
  bool v5; 
  ObjectVariableValue *v6; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5742, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  v5 = LOBYTE(objectVariableValue[v2].w.type) == 24;
  v6 = &objectVariableValue[v2];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5745, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_ARRAY )", (const char *)&queryFormat, "entryValue->GetType() == VAR_ARRAY") )
    __debugbreak();
  return v6->u.f.next;
}

/*
==============
GetArrayVariable
==============
*/
unsigned int GetArrayVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  if ( unsignedValue + 7602176 > 0xF3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4805, ASSERT_TYPE_ASSERT, "( IsValidArrayIndex( unsignedValue ) )", (const char *)&queryFormat, "IsValidArrayIndex( unsignedValue )") )
    __debugbreak();
  return GetVariable(scrContext, parentId, (unsignedValue - 0x800000) & 0xFFFFFF);
}

/*
==============
GetInternalVariableIndex
==============
*/
__int64 GetInternalVariableIndex(unsigned int unsignedValue)
{
  if ( unsignedValue + 7602176 > 0xF3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4783, ASSERT_TYPE_ASSERT, "( IsValidArrayIndex( unsignedValue ) )", (const char *)&queryFormat, "IsValidArrayIndex( unsignedValue )") )
    __debugbreak();
  return (unsignedValue - 0x800000) & 0xFFFFFF;
}

/*
==============
GetNewArrayVariable
==============
*/
unsigned int GetNewArrayVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  if ( unsignedValue + 7602176 > 0xF3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4813, ASSERT_TYPE_ASSERT, "( IsValidArrayIndex( unsignedValue ) )", (const char *)&queryFormat, "IsValidArrayIndex( unsignedValue )") )
    __debugbreak();
  return GetNewVariable(scrContext, parentId, (unsignedValue - 0x800000) & 0xFFFFFF);
}

/*
==============
GetNewArrayVariableReverse
==============
*/
unsigned int GetNewArrayVariableReverse(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[parentId].w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5128, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[parentId].GetType() == VAR_ARRAY )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[parentId].GetType() == VAR_ARRAY") )
    __debugbreak();
  return GetNewVariableIndexReverseInternal(scrContext, parentId, (unsignedValue - 0x800000) & 0xFFFFFF);
}

/*
==============
GetNewObjectVariable
==============
*/
unsigned int GetNewObjectVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int id)
{
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[parentId].w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5120, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[parentId].GetType() == VAR_ARRAY )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[parentId].GetType() == VAR_ARRAY") )
    __debugbreak();
  return GetNewVariable(scrContext, parentId, id + 0x80000);
}

/*
==============
GetNewObjectVariableReverse
==============
*/
unsigned int GetNewObjectVariableReverse(scrContext_t *scrContext, unsigned int parentId, unsigned int id)
{
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[parentId].w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5138, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[parentId].GetType() == VAR_ARRAY )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[parentId].GetType() == VAR_ARRAY") )
    __debugbreak();
  return GetNewVariableIndexReverseInternal(scrContext, parentId, id + 0x80000);
}

/*
==============
GetNewVariable
==============
*/
unsigned int GetNewVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  __int64 v3; 
  unsigned int *v6; 
  unsigned int BucketMatch; 
  unsigned int v8; 

  v3 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3519, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  if ( !IsValidObject(&scrContext->m_varGlob.objectVariableValue[v3]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3521, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  v6 = &scrContext->m_varGlob.childVariableBucket[(unsigned __int16)(name + 101 * v3)];
  BucketMatch = GetBucketMatch(v3, name);
  v8 = BucketMatch;
  if ( *v6 && (unsigned int)FindVariableIndexInternal3(scrContext, v6, *v6, BucketMatch) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3532, ASSERT_TYPE_ASSERT, "( !FindVariableIndexInternal2( scrContext, bucket, match ) )", (const char *)&queryFormat, "!FindVariableIndexInternal2( scrContext, bucket, match )") )
    __debugbreak();
  return GetNewVariableIndexInternal2(scrContext, v3, name, v6, v8);
}

/*
==============
GetNewVariableIndexInternal2
==============
*/
__int64 GetNewVariableIndexInternal2(scrContext_t *scrContext, unsigned int parentId, unsigned int name, unsigned int *bucket, unsigned int match)
{
  __int64 v6; 
  unsigned int NewVariableIndexInternal3; 
  ObjectVariableChildren *objectVariableChildren; 
  ChildVariableValue *v9; 
  __int64 firstChild; 
  unsigned int v11; 
  ChildVariableValue *v12; 

  v6 = parentId;
  NewVariableIndexInternal3 = GetNewVariableIndexInternal3(scrContext, parentId, name, bucket, match);
  objectVariableChildren = scrContext->m_varGlob.objectVariableChildren;
  v9 = &scrContext->m_varGlob.childVariableValue[NewVariableIndexInternal3];
  firstChild = objectVariableChildren[v6].firstChild;
  v11 = NewVariableIndexInternal3;
  objectVariableChildren[v6].firstChild = NewVariableIndexInternal3;
  v9->prevSibling = 0;
  if ( (_DWORD)firstChild )
  {
    if ( (unsigned int)firstChild >= scrContext->m_variableListChildSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3452, ASSERT_TYPE_ASSERT, "( ( next_index < scrContext.m_variableListChildSize ) )", "%s\n\t( next_index ) = %i", "( next_index < scrContext.m_variableListChildSize )", firstChild) )
      __debugbreak();
    v12 = &scrContext->m_varGlob.childVariableValue[firstChild];
    if ( (*(_BYTE *)&v12->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3454, ASSERT_TYPE_ASSERT, "( IsValidChild( next_value ) )", (const char *)&queryFormat, "IsValidChild( next_value )") )
      __debugbreak();
    v9->nextSibling = firstChild;
    v12->prevSibling = v11;
  }
  else
  {
    v9->nextSibling = 0;
    objectVariableChildren[v6].lastChild = NewVariableIndexInternal3;
  }
  return v11;
}

/*
==============
GetNewVariableIndexInternal3
==============
*/
__int64 GetNewVariableIndexInternal3(scrContext_t *scrContext, unsigned int parentId, unsigned int name, unsigned int *bucket, unsigned int match)
{
  __int64 v5; 
  ChildVariableValue *v9; 
  unsigned int v10; 
  ChildVariableValue *v11; 
  unsigned int v12; 
  ObjectVariableValue *v13; 
  unsigned int next; 
  const char *v15; 
  VariableType v16; 
  VariableValue out; 
  unsigned int index; 

  v5 = parentId;
  v9 = AllocChildVariable(scrContext, &index);
  v10 = index;
  v11 = v9;
  v9->next = *bucket;
  v12 = match;
  *bucket = v10;
  v9->k.match = v12;
  v9->tn = (ChildVariableValue::TypeAndName)((_WORD)name << 6);
  if ( v12 < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
    __debugbreak();
  if ( ((v11->k.match & 0x3FFF) << 10) + (*(_WORD *)&v11->tn >> 6) != name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3397, ASSERT_TYPE_ASSERT, "(new_value->GetName() == name)", (const char *)&queryFormat, "new_value->GetName() == name") )
    __debugbreak();
  v13 = &scrContext->m_varGlob.objectVariableValue[v5];
  if ( !IsValidObject(v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3403, ASSERT_TYPE_ASSERT, "( IsValidObject( parent_value ) )", (const char *)&queryFormat, "IsValidObject( parent_value )") )
    __debugbreak();
  if ( LOBYTE(v13->w.type) == 24 )
  {
    next = v13->u.f.next;
    if ( next == 0x7FFFFFFF )
    {
      Scr_DumpScriptThreads(scrContext, 1);
      Scr_DumpScriptVariables(scrContext, 1, 0, 0, 0, 0, NULL, NULL, 0, 1, 1, 1);
      v15 = j_va("exceeded maximum number of array values for variable %d (see console log for more info)", (unsigned int)v5);
      Scr_Error(COM_ERR_5226, scrContext, v15);
      next = v13->u.f.next;
    }
    v13->u.f.next = next + 1;
    if ( name )
    {
      if ( name >= 0x80000 )
      {
        if ( name >= 0xC0000 )
        {
          v16 = VAR_INTEGER;
          name -= 0x800000;
        }
        else
        {
          v16 = VAR_POINTER;
          name -= 0x80000;
        }
        goto LABEL_21;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5028, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    {
      __debugbreak();
      v16 = VAR_STRING;
LABEL_21:
      MakeVariableValue_Out(v16, name, &out);
      AddRefToValue(scrContext, (unsigned __int8)out.type, out.u);
      return v10;
    }
    v16 = VAR_STRING;
    goto LABEL_21;
  }
  return v10;
}

/*
==============
GetNewVariableIndexReverseInternal
==============
*/
__int64 GetNewVariableIndexReverseInternal(scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  __int64 v3; 
  unsigned int *v6; 
  unsigned int BucketMatch; 
  unsigned int v8; 
  unsigned int NewVariableIndexInternal3; 
  ObjectVariableChildren *objectVariableChildren; 
  __int64 lastChild; 
  unsigned int v12; 
  ObjectVariableChildren *v13; 
  ChildVariableValue *v14; 
  ChildVariableValue *v15; 

  v3 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3545, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  if ( !IsValidObject(&scrContext->m_varGlob.objectVariableValue[v3]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3547, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  v6 = &scrContext->m_varGlob.childVariableBucket[(unsigned __int16)(name + 101 * v3)];
  BucketMatch = GetBucketMatch(v3, name);
  v8 = BucketMatch;
  if ( *v6 && (unsigned int)FindVariableIndexInternal3(scrContext, v6, *v6, BucketMatch) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3558, ASSERT_TYPE_ASSERT, "( !FindVariableIndexInternal2( scrContext, bucket, match ) )", (const char *)&queryFormat, "!FindVariableIndexInternal2( scrContext, bucket, match )") )
    __debugbreak();
  NewVariableIndexInternal3 = GetNewVariableIndexInternal3(scrContext, v3, name, v6, v8);
  objectVariableChildren = scrContext->m_varGlob.objectVariableChildren;
  lastChild = objectVariableChildren[v3].lastChild;
  v12 = NewVariableIndexInternal3;
  v13 = &objectVariableChildren[v3];
  v14 = &scrContext->m_varGlob.childVariableValue[v12];
  v13->lastChild = v12;
  v14->nextSibling = 0;
  if ( (_DWORD)lastChild )
  {
    if ( (unsigned int)lastChild >= scrContext->m_variableListChildSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3494, ASSERT_TYPE_ASSERT, "( ( prev_index < scrContext.m_variableListChildSize ) )", "%s\n\t( prev_index ) = %i", "( prev_index < scrContext.m_variableListChildSize )", lastChild) )
      __debugbreak();
    v15 = &scrContext->m_varGlob.childVariableValue[lastChild];
    if ( (*(_BYTE *)&v15->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3496, ASSERT_TYPE_ASSERT, "( IsValidChild( prev_value ) )", (const char *)&queryFormat, "IsValidChild( prev_value )") )
      __debugbreak();
    v14->prevSibling = lastChild;
    v15->nextSibling = v12;
  }
  else
  {
    v14->prevSibling = 0;
    v13->firstChild = v12;
  }
  return v12;
}

/*
==============
GetObjectInternal
==============
*/
__int64 GetObjectInternal(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ChildVariableValue *v4; 
  const char *m_scriptPos; 
  ObjectVariableValue *v6; 
  unsigned int index; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5818, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  v4 = &scrContext->m_varGlob.childVariableValue[v2];
  if ( (*(_BYTE *)&v4->tn & 0x3F) == 0 )
  {
    *(_WORD *)&v4->tn &= 0xFFC1u;
    *(_WORD *)&v4->tn |= 1u;
    m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
    if ( !m_scriptPos )
      scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script object variable>";
    v6 = AllocVariable(scrContext, &index);
    v6->w.type = 21;
    v6->u.o.refCount = 0;
    LODWORD(v6) = index;
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
    v4->u.f.prev = (unsigned int)v6;
  }
  if ( (*(_BYTE *)&v4->tn & 0x3F) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5827, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_POINTER )", (const char *)&queryFormat, "entryValue->GetType() == VAR_POINTER") )
    __debugbreak();
  return v4->u.f.prev;
}

/*
==============
GetObjectType
==============
*/
__int64 GetObjectType(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v3; 

  v3 = id;
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
    __debugbreak();
  return LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type);
}

/*
==============
GetObjectVariable
==============
*/
unsigned int GetObjectVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int id)
{
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[parentId].w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5112, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[parentId].GetType() == VAR_ARRAY )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[parentId].GetType() == VAR_ARRAY") )
    __debugbreak();
  return GetVariable(scrContext, parentId, id + 0x80000);
}

/*
==============
GetParentLocalId
==============
*/
__int64 GetParentLocalId(const scrContext_t *scrContext, unsigned int threadId)
{
  __int64 v2; 
  ObjectVariableValue *objectVariableValue; 
  bool v5; 
  ObjectVariableValue *v6; 

  v2 = threadId;
  if ( !threadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3942, ASSERT_TYPE_ASSERT, "( threadId )", (const char *)&queryFormat, "threadId") )
    __debugbreak();
  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  v5 = LOBYTE(objectVariableValue[v2].w.type) == 20;
  v6 = &objectVariableValue[v2];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3944, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_CHILD_THREAD )", (const char *)&queryFormat, "entryValue->GetType() == VAR_CHILD_THREAD") )
    __debugbreak();
  return v6->w.type >> 8;
}

/*
==============
GetSafeParentLocalId
==============
*/
__int64 GetSafeParentLocalId(const scrContext_t *scrContext, unsigned int threadId)
{
  __int64 v2; 
  ObjectVariableValue *v4; 

  v2 = threadId;
  if ( !threadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3952, ASSERT_TYPE_ASSERT, "( threadId )", (const char *)&queryFormat, "threadId") )
    __debugbreak();
  v4 = &scrContext->m_varGlob.objectVariableValue[v2];
  if ( (unsigned __int8)(LOBYTE(v4->w.type) - 17) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3954, ASSERT_TYPE_ASSERT, "( entryValue->GetType() >= VAR_THREAD && entryValue->GetType() <= VAR_CHILD_THREAD )", (const char *)&queryFormat, "entryValue->GetType() >= VAR_THREAD && entryValue->GetType() <= VAR_CHILD_THREAD") )
    __debugbreak();
  if ( LOBYTE(v4->w.type) == 20 )
    return v4->w.type >> 8;
  else
    return 0i64;
}

/*
==============
ScriptCodePos::GetScriptPos
==============
*/
const char *ScriptCodePos::GetScriptPos(ScriptCodePos *this, const scrContext_t *scrContext)
{
  if ( !Scr_IsInOpcodeMemory(scrContext, this->m_scriptPos) && this->m_scriptPos != &g_EndPos && !scrContext->m_vmPub.debugCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 366, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, m_scriptPos ) || IsEndPos() || scrContext.m_vmPub.debugCode )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, m_scriptPos ) || IsEndPos() || scrContext.m_vmPub.debugCode") )
    __debugbreak();
  return (const char *)this->m_genericPos;
}

/*
==============
GetSiblingName
==============
*/
unsigned int GetSiblingName(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  __int64 v4; 

  v2 = id;
  if ( id >= scrContext->m_variableListChildSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5799, ASSERT_TYPE_ASSERT, "( id < scrContext.m_variableListChildSize )", (const char *)&queryFormat, "id < scrContext.m_variableListChildSize") )
    __debugbreak();
  v4 = v2;
  if ( (*(_BYTE *)&scrContext->m_varGlob.childVariableValue[v4].tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5800, ASSERT_TYPE_ASSERT, "( IsValidChild( &scrContext.m_varGlob.childVariableValue[id] ) )", (const char *)&queryFormat, "IsValidChild( &scrContext.m_varGlob.childVariableValue[id] )") )
    __debugbreak();
  return ChildVariableValue::GetName(&scrContext->m_varGlob.childVariableValue[v4]);
}

/*
==============
GetStartLocalId
==============
*/
__int64 GetStartLocalId(scrContext_t *scrContext, unsigned int threadId)
{
  ObjectVariableValue *v4; 
  char type; 

  while ( 1 )
  {
    if ( !threadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3964, ASSERT_TYPE_ASSERT, "( threadId )", (const char *)&queryFormat, "threadId") )
      __debugbreak();
    v4 = &scrContext->m_varGlob.objectVariableValue[threadId];
    type = v4->w.type;
    if ( type != 20 )
      break;
    threadId = v4->w.type >> 8;
  }
  if ( (unsigned __int8)(type - 17) > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3970, ASSERT_TYPE_ASSERT, "( entryValue->GetType() >= VAR_THREAD && entryValue->GetType() <= VAR_TIME_THREAD )", (const char *)&queryFormat, "entryValue->GetType() >= VAR_THREAD && entryValue->GetType() <= VAR_TIME_THREAD") )
    __debugbreak();
  return threadId;
}

/*
==============
GetValueType
==============
*/
VariableType GetValueType(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v3; 

  v3 = id;
  if ( (*(_BYTE *)&scrContext->m_varGlob.childVariableValue[v3].tn & 0x3F) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6916, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.childVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.childVariableValue[id].GetType() != VAR_FREE") )
    __debugbreak();
  return *(_BYTE *)&scrContext->m_varGlob.childVariableValue[v3].tn & 0x3F;
}

/*
==============
ScriptCodePos::GetVarUsagePos
==============
*/
const char *ScriptCodePos::GetVarUsagePos(ScriptCodePos *this)
{
  return (const char *)this->m_genericPos;
}

/*
==============
GetVariable
==============
*/
__int64 GetVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  __int64 v3; 
  unsigned int *v6; 
  unsigned int BucketMatch; 
  unsigned int v8; 
  __int64 result; 

  v3 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3572, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  if ( !IsValidObject(&scrContext->m_varGlob.objectVariableValue[v3]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3574, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  v6 = &scrContext->m_varGlob.childVariableBucket[(unsigned __int16)(name + 101 * v3)];
  BucketMatch = GetBucketMatch(v3, name);
  v8 = BucketMatch;
  if ( !*v6 )
    return GetNewVariableIndexInternal2(scrContext, v3, name, v6, v8);
  result = FindVariableIndexInternal3(scrContext, v6, *v6, BucketMatch);
  if ( !(_DWORD)result )
    return GetNewVariableIndexInternal2(scrContext, v3, name, v6, v8);
  return result;
}

/*
==============
GetVariableKeyObject
==============
*/
__int64 GetVariableKeyObject(scrContext_t *scrContext, unsigned int id)
{
  __int64 v3; 

  v3 = id;
  if ( (*(_BYTE *)&scrContext->m_varGlob.childVariableValue[v3].tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3146, ASSERT_TYPE_ASSERT, "( IsValidChild( &scrContext.m_varGlob.childVariableValue[id] ) )", (const char *)&queryFormat, "IsValidChild( &scrContext.m_varGlob.childVariableValue[id] )") )
    __debugbreak();
  return ChildVariableValue::GetName(&scrContext->m_varGlob.childVariableValue[v3]) - 0x80000;
}

/*
==============
GetVariableName
==============
*/
unsigned int GetVariableName(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v3; 

  v3 = id;
  if ( (*(_BYTE *)&scrContext->m_varGlob.childVariableValue[v3].tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5808, ASSERT_TYPE_ASSERT, "( IsValidChild( &scrContext.m_varGlob.childVariableValue[id] ) )", (const char *)&queryFormat, "IsValidChild( &scrContext.m_varGlob.childVariableValue[id] )") )
    __debugbreak();
  return ChildVariableValue::GetName(&scrContext->m_varGlob.childVariableValue[v3]);
}

/*
==============
GetVariableType
==============
*/
VariableType GetVariableType(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ChildVariableValue *v4; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5310, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  v4 = &scrContext->m_varGlob.childVariableValue[v2];
  if ( (*(_BYTE *)&v4->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5312, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
    __debugbreak();
  return *(_BYTE *)&v4->tn & 0x3F;
}

/*
==============
GetVariableValueAddress
==============
*/
ChildVariableValue *GetVariableValueAddress(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ChildVariableValue *v4; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5321, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  v4 = &scrContext->m_varGlob.childVariableValue[v2];
  if ( (*(_BYTE *)&v4->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5323, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
    __debugbreak();
  if ( (*(_BYTE *)&v4->tn & 0x3F) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5324, ASSERT_TYPE_ASSERT, "( entryValue->GetType() != VAR_UNDEFINED )", (const char *)&queryFormat, "entryValue->GetType() != VAR_UNDEFINED") )
    __debugbreak();
  return v4;
}

/*
==============
GetVariableValueAddressConst
==============
*/
ChildVariableValue *GetVariableValueAddressConst(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ChildVariableValue *v4; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5334, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  v4 = &scrContext->m_varGlob.childVariableValue[v2];
  if ( (*(_BYTE *)&v4->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5336, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
    __debugbreak();
  if ( (*(_BYTE *)&v4->tn & 0x3F) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5337, ASSERT_TYPE_ASSERT, "( entryValue->GetType() != VAR_UNDEFINED )", (const char *)&queryFormat, "entryValue->GetType() != VAR_UNDEFINED") )
    __debugbreak();
  return v4;
}

/*
==============
ScriptCodePos::IsEndPos
==============
*/
bool ScriptCodePos::IsEndPos(ScriptCodePos *this)
{
  return this->m_genericPos == (_QWORD)&g_EndPos;
}

/*
==============
IsFieldObject
==============
*/
bool IsFieldObject(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ObjectVariableValue *v4; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5869, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  v4 = &scrContext->m_varGlob.objectVariableValue[v2];
  if ( !IsValidObject(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5872, ASSERT_TYPE_ASSERT, "( IsValidObject( entryValue ) )", (const char *)&queryFormat, "IsValidObject( entryValue )") )
    __debugbreak();
  return LOBYTE(v4->w.type) < 0x18u;
}

/*
==============
IsObjectFree
==============
*/
bool IsObjectFree(const scrContext_t *scrContext, unsigned int id)
{
  return LOBYTE(scrContext->m_varGlob.objectVariableValue[id].w.type) == 26;
}

/*
==============
ScriptCodePos::IsScriptPos
==============
*/
char ScriptCodePos::IsScriptPos(ScriptCodePos *this)
{
  return 1;
}

/*
==============
ScriptCodePos::IsScriptPos_Generic
==============
*/
char ScriptCodePos::IsScriptPos_Generic(const unsigned __int64 pos)
{
  return 1;
}

/*
==============
IsValidArrayIndex
==============
*/
bool IsValidArrayIndex(unsigned int unsignedValue)
{
  return unsignedValue + 7602176 <= 0xF3FFFF;
}

/*
==============
IsValidChild
==============
*/
bool IsValidChild(const ChildVariableValue *value)
{
  return (*(_BYTE *)&value->tn & 0x3Fu) < 0x11;
}

/*
==============
IsValidObject
==============
*/
bool IsValidObject(const ObjectVariableValue *value)
{
  unsigned __int8 type; 

  type = value->w.type;
  return type != 26 && type >= 0x11u;
}

/*
==============
IsValidValue
==============
*/
bool IsValidValue(const VariableValue *value)
{
  return value->type < VAR_THREAD;
}

/*
==============
RemoveArrayVariable
==============
*/
void RemoveArrayVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  unsigned int Variable; 

  if ( unsignedValue + 7602176 > 0xF3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5189, ASSERT_TYPE_ASSERT, "( IsValidArrayIndex( unsignedValue ) )", (const char *)&queryFormat, "IsValidArrayIndex( unsignedValue )") )
    __debugbreak();
  Variable = FindVariable(scrContext, parentId, (unsignedValue - 0x800000) & 0xFFFFFF);
  RemoveVariableValue(scrContext, parentId, Variable);
}

/*
==============
RemoveNextVariable
==============
*/
void RemoveNextVariable(scrContext_t *scrContext, unsigned int parentId)
{
  RemoveVariableValue(scrContext, parentId, scrContext->m_varGlob.objectVariableChildren[parentId].firstChild);
}

/*
==============
RemoveObjectVariable
==============
*/
void RemoveObjectVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int id)
{
  unsigned int Variable; 

  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[parentId].w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5164, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[parentId].GetType() == VAR_ARRAY )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[parentId].GetType() == VAR_ARRAY") )
    __debugbreak();
  Variable = FindVariable(scrContext, parentId, id + 0x80000);
  RemoveVariableValue(scrContext, parentId, Variable);
}

/*
==============
RemoveRefToEmptyObject
==============
*/
void RemoveRefToEmptyObject(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  const ObjectVariableValue *v4; 

  v2 = id;
  if ( (!id || id >= scrContext->m_variableListParentSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4600, ASSERT_TYPE_ASSERT, "( id >= 1 && id < scrContext.m_variableListParentSize )", (const char *)&queryFormat, "id >= 1 && id < scrContext.m_variableListParentSize") )
    __debugbreak();
  v4 = &scrContext->m_varGlob.objectVariableValue[v2];
  if ( !IsValidObject(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4602, ASSERT_TYPE_ASSERT, "( IsValidObject( entryValue ) )", (const char *)&queryFormat, "IsValidObject( entryValue )") )
    __debugbreak();
  if ( scrContext->m_varGlob.objectVariableChildren[v2].firstChild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4603, ASSERT_TYPE_ASSERT, "( !scrContext.m_varGlob.objectVariableChildren[id].firstChild )", (const char *)&queryFormat, "!scrContext.m_varGlob.objectVariableChildren[id].firstChild") )
    __debugbreak();
  if ( v4->u.o.refCount )
  {
    --scrContext->m_varPub.totalObjectRefCount;
    if ( scrContext->m_varDebugPub.m_Inited )
    {
      if ( !scrContext->m_varDebugPub.objectLeakCount[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4611, ASSERT_TYPE_ASSERT, "( scrContext.m_varDebugPub.objectLeakCount[id] )", (const char *)&queryFormat, "scrContext.m_varDebugPub.objectLeakCount[id]") )
        __debugbreak();
      --scrContext->m_varDebugPub.objectLeakCount[v2];
    }
    --v4->u.o.refCount;
  }
  else
  {
    FreeVariable(scrContext, v2);
  }
}

/*
==============
RemoveRefToObject
==============
*/
void RemoveRefToObject(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  __int64 v4; 
  ObjectVariableValue *v5; 
  unsigned __int16 refCount; 
  unsigned __int8 type; 
  unsigned int v8; 
  unsigned int next; 
  unsigned int entArrayId; 
  unsigned int v11; 
  __int64 v12; 

  v2 = id;
  if ( (!id || id >= scrContext->m_variableListParentSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4522, ASSERT_TYPE_ASSERT, "( id >= 1 && id < scrContext.m_variableListParentSize )", (const char *)&queryFormat, "id >= 1 && id < scrContext.m_variableListParentSize") )
    __debugbreak();
  v4 = v2;
  v5 = &scrContext->m_varGlob.objectVariableValue[v2];
  if ( !IsValidObject(v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4524, ASSERT_TYPE_ASSERT, "( IsValidObject( entryValue ) )", (const char *)&queryFormat, "IsValidObject( entryValue )") )
    __debugbreak();
  if ( v5->u.o.refCount )
  {
    --scrContext->m_varPub.totalObjectRefCount;
    if ( scrContext->m_varDebugPub.m_Inited )
    {
      if ( !scrContext->m_varDebugPub.objectLeakCount[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4532, ASSERT_TYPE_ASSERT, "( scrContext.m_varDebugPub.objectLeakCount[id] )", (const char *)&queryFormat, "scrContext.m_varDebugPub.objectLeakCount[id]") )
        __debugbreak();
      --scrContext->m_varDebugPub.objectLeakCount[v2];
    }
    refCount = --v5->u.o.refCount;
    if ( LOBYTE(v5->w.type) == 23 )
    {
      Scr_ReleaseObject(scrContext, (EntityClass)SBYTE1(v5->w.type), v5->u.f.next);
      refCount = v5->u.o.refCount;
    }
    if ( !refCount )
    {
      type = v5->w.type;
      if ( type >= 0x11u )
      {
        if ( type <= 0x14u )
        {
          FreeThread(scrContext, v2);
        }
        else if ( type == 23 )
        {
          v8 = v5->w.type >> 8;
          next = v5->u.f.next;
          if ( BYTE1(v5->w.type) >= 0xBu )
          {
            LODWORD(v12) = (unsigned __int8)v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4554, ASSERT_TYPE_ASSERT, "(unsigned)( classnum ) < (unsigned)( ENTITY_CLASS_COUNT )", "classnum doesn't index ENTITY_CLASS_COUNT\n\t%i not in [0, %i)", v12, 11) )
              __debugbreak();
          }
          if ( !scrContext->m_varGlob.objectVariableChildren[v4].firstChild )
          {
            v5->w.type &= 0xFFFFFF16;
            v5->w.type |= 0x16u;
            entArrayId = scrContext->m_varPub.m_classMap[(unsigned __int8)v8].entArrayId;
            if ( !entArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4562, ASSERT_TYPE_ASSERT, "( entArrayId )", (const char *)&queryFormat, "entArrayId") )
              __debugbreak();
            v11 = Scr_Variable_CalculateEntityIndex(scrContext, next, (EntityClass)v8, (LocalClientNum_t)(BYTE2(v5->w.entInfo) - 1));
            RemoveArrayVariable(scrContext, entArrayId, v11);
          }
        }
      }
    }
  }
  else
  {
    if ( scrContext->m_varGlob.objectVariableChildren[v2].firstChild )
      ClearObject(scrContext, v2);
    FreeVariable(scrContext, v2);
  }
}

/*
==============
RemoveRefToValue
==============
*/
void RemoveRefToValue(scrContext_t *scrContext, int type, VariableUnion u)
{
  unsigned int v3; 
  int intValue; 

  v3 = type - 1;
  intValue = u.intValue;
  if ( v3 < 4 )
  {
    if ( v3 )
    {
      if ( v3 > 2 )
      {
        RemoveRefToVector(scrContext, u.vectorValue);
      }
      else
      {
        if ( !u.intValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4765, ASSERT_TYPE_ASSERT, "(u.stringValue != 0)", (const char *)&queryFormat, "u.stringValue != 0") )
          __debugbreak();
        SL_RemoveRefToString((scr_string_t)intValue);
      }
    }
    else
    {
      RemoveRefToObject(scrContext, u.uintValue);
    }
  }
}

/*
==============
RemoveRefToVector
==============
*/
void RemoveRefToVector(scrContext_t *scrContext, const float *vectorValue)
{
  volatile int *p_totalVectorRefCount; 
  __int16 v4; 
  float *v5; 

  if ( !*((_BYTE *)vectorValue - 1) )
  {
    p_totalVectorRefCount = &scrContext->m_varPub.totalVectorRefCount;
    if ( (((_BYTE)scrContext + 80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scrContext->m_varPub.totalVectorRefCount) )
      __debugbreak();
    _InterlockedDecrement(p_totalVectorRefCount);
    if ( scrStringDebugGlob )
    {
      if ( scrStringDebugGlob->refCount[((char *)vectorValue - scrMemTreePub.mt_buffer - 4) / 16] < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4701, ASSERT_TYPE_ASSERT, "( scrStringDebugGlob->refCount[((char *)vectorValue - 4 - scrMemTreePub.mt_buffer) / MT_NODE_SIZE] >= 0 )", (const char *)&queryFormat, "scrStringDebugGlob->refCount[((char *)vectorValue - 4 - scrMemTreePub.mt_buffer) / MT_NODE_SIZE] >= 0") )
        __debugbreak();
      Sys_InterlockedDecrement(&scrStringDebugGlob->refCount[((char *)vectorValue - scrMemTreePub.mt_buffer - 4) / 16]);
    }
    v4 = *((_WORD *)vectorValue - 2);
    v5 = (float *)(vectorValue - 1);
    if ( v4 )
      *(_WORD *)v5 = v4 - 1;
    else
      MT_Free(v5, 0x10ui64);
  }
}

/*
==============
RemoveVariable
==============
*/
void RemoveVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  unsigned int Variable; 

  Variable = FindVariable(scrContext, parentId, unsignedValue);
  RemoveVariableValue(scrContext, parentId, Variable);
}

/*
==============
RemoveVariableValue
==============
*/
void RemoveVariableValue(scrContext_t *scrContext, unsigned int parentId, unsigned int index)
{
  __int64 v4; 
  __int64 v5; 
  ObjectVariableValue *v6; 
  ChildVariableValue *v7; 
  ObjectVariableChildren *v8; 
  int type_low; 
  unsigned int nextSibling; 
  __int64 prevSibling; 

  v4 = index;
  v5 = parentId;
  if ( (!parentId || parentId >= scrContext->m_variableListParentSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3734, ASSERT_TYPE_ASSERT, "( parentId > 0 && parentId < scrContext.m_variableListParentSize )", (const char *)&queryFormat, "parentId > 0 && parentId < scrContext.m_variableListParentSize") )
    __debugbreak();
  if ( (!(_DWORD)v4 || (unsigned int)v4 >= scrContext->m_variableListChildSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3735, ASSERT_TYPE_ASSERT, "( index > 0 && index < scrContext.m_variableListChildSize )", (const char *)&queryFormat, "index > 0 && index < scrContext.m_variableListChildSize") )
    __debugbreak();
  v6 = &scrContext->m_varGlob.objectVariableValue[v5];
  if ( !IsValidObject(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3738, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  v7 = &scrContext->m_varGlob.childVariableValue[v4];
  v8 = &scrContext->m_varGlob.objectVariableChildren[v5];
  if ( (*(_BYTE *)&v7->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3742, ASSERT_TYPE_ASSERT, "( IsValidChild( value ) )", (const char *)&queryFormat, "IsValidChild( value )") )
    __debugbreak();
  if ( v7->k.match >> 14 != (_DWORD)v5 )
  {
    type_low = LOBYTE(v6->w.type);
    if ( v7->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3743, ASSERT_TYPE_ASSERT, "(value->GetParentId() == parentId)", "%s\n\tI:%i VP:%i P:%i VN:%i PT:%i", "value->GetParentId() == parentId", v4, v7->k.match >> 14, v5, ((v7->k.match & 0x3FFF) << 10) + (*(_WORD *)&v7->tn >> 6), type_low) )
      __debugbreak();
  }
  FreeChildValuePart1(scrContext, v7, v4, v6);
  nextSibling = v7->nextSibling;
  prevSibling = v7->prevSibling;
  if ( nextSibling )
    scrContext->m_varGlob.childVariableValue[nextSibling].prevSibling = prevSibling;
  else
    v8->lastChild = prevSibling;
  if ( (_DWORD)prevSibling )
    scrContext->m_varGlob.childVariableValue[prevSibling].nextSibling = nextSibling;
  else
    v8->firstChild = nextSibling;
  FreeChildValuePart3(scrContext, v7, v4);
}

/*
==============
SafeRemoveArrayVariable
==============
*/

void __fastcall SafeRemoveArrayVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  SafeRemoveArrayVariable_Inline(scrContext, parentId, unsignedValue);
}

/*
==============
SafeRemoveArrayVariable_Inline
==============
*/
void SafeRemoveArrayVariable_Inline(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  unsigned int Variable; 

  if ( unsignedValue + 7602176 > 0xF3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5174, ASSERT_TYPE_ASSERT, "( IsValidArrayIndex( unsignedValue ) )", (const char *)&queryFormat, "IsValidArrayIndex( unsignedValue )") )
    __debugbreak();
  Variable = FindVariable(scrContext, parentId, (unsignedValue - 0x800000) & 0xFFFFFF);
  if ( Variable )
    RemoveVariableValue(scrContext, parentId, Variable);
}

/*
==============
SafeRemoveVariable
==============
*/
void SafeRemoveVariable(scrContext_t *scrContext, unsigned int parentId, unsigned int unsignedValue)
{
  unsigned int Variable; 

  Variable = FindVariable(scrContext, parentId, unsignedValue);
  if ( Variable )
    RemoveVariableValue(scrContext, parentId, Variable);
}

/*
==============
Scr_AddArrayKeys
==============
*/
void Scr_AddArrayKeys(scrContext_t *scrContext, unsigned int parentId)
{
  __int64 v3; 
  unsigned int ArraySize; 
  int intValue; 
  unsigned int FirstSibling; 
  ChildVariableValue *v7; 
  unsigned int Name; 
  VariableType v9; 
  VariableType type; 
  VariableUnion u; 
  __int64 NewVariable; 
  ChildVariableValue *v13; 
  __int64 v14; 
  VariableValue out; 

  v3 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7697, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7698, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, parentId ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, parentId ) == VAR_ARRAY") )
    __debugbreak();
  ArraySize = GetArraySize(scrContext, v3);
  Scr_MakeArray(scrContext);
  if ( scrContext->m_vmPub.top->type != VAR_POINTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7704, ASSERT_TYPE_ASSERT, "( scrContext.m_vmPub.top->type == VAR_POINTER )", (const char *)&queryFormat, "scrContext.m_vmPub.top->type == VAR_POINTER") )
    __debugbreak();
  intValue = scrContext->m_vmPub.top->u.intValue;
  FirstSibling = FindFirstSibling(scrContext, v3);
  if ( FirstSibling )
  {
    while ( 1 )
    {
      v7 = &scrContext->m_varGlob.childVariableValue[FirstSibling];
      if ( (*(_BYTE *)&v7->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7683, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
        __debugbreak();
      Name = ChildVariableValue::GetName(v7);
      if ( !Name )
        break;
      if ( Name < 0x80000 )
        goto LABEL_21;
      if ( Name >= 0xC0000 )
      {
        v9 = VAR_INTEGER;
        Name -= 0x800000;
      }
      else
      {
        v9 = VAR_POINTER;
        Name -= 0x80000;
      }
LABEL_25:
      MakeVariableValue_Out(v9, Name, &out);
      type = out.type;
      u = out.u;
      if ( out.type == VAR_INTEGER )
        goto LABEL_29;
      if ( out.type != VAR_STRING )
      {
        LODWORD(v14) = (unsigned __int8)out.type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7710, ASSERT_TYPE_ASSERT, "( ( (value.type == VAR_INTEGER) || (value.type == VAR_STRING) ) )", "%s\n\t( value.type ) = %i", "( (value.type == VAR_INTEGER) || (value.type == VAR_STRING) )", v14) )
          __debugbreak();
LABEL_29:
        if ( type != VAR_STRING )
          goto LABEL_31;
      }
      SL_AddRefToString((scr_string_t)u.intValue);
LABEL_31:
      if ( --ArraySize + 7602176 > 0xF3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4813, ASSERT_TYPE_ASSERT, "( IsValidArrayIndex( unsignedValue ) )", (const char *)&queryFormat, "IsValidArrayIndex( unsignedValue )") )
        __debugbreak();
      NewVariable = GetNewVariable(scrContext, intValue, (ArraySize - 0x800000) & 0xFFFFFF);
      if ( (unsigned __int8)type >= VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5296, ASSERT_TYPE_ASSERT, "( !IsObject( value ) )", (const char *)&queryFormat, "!IsObject( value )") )
        __debugbreak();
      v13 = &scrContext->m_varGlob.childVariableValue[NewVariable];
      if ( (unsigned __int8)type >= VAR_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5299, ASSERT_TYPE_ASSERT, "( value->type >= 0 && value->type < VAR_COUNT )", (const char *)&queryFormat, "value->type >= 0 && value->type < VAR_COUNT") )
        __debugbreak();
      if ( (*(_BYTE *)&v13->tn & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5300, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_UNDEFINED )", (const char *)&queryFormat, "entryValue->GetType() == VAR_UNDEFINED") )
        __debugbreak();
      v13->u.u = u;
      *(_WORD *)&v13->tn &= 0xFFC0u;
      *(_WORD *)&v13->tn |= type & 0x3F;
      FirstSibling = FindNextSibling(scrContext, FirstSibling);
      if ( !FirstSibling )
        goto LABEL_44;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5028, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    {
      __debugbreak();
      v9 = VAR_STRING;
      goto LABEL_25;
    }
LABEL_21:
    v9 = VAR_STRING;
    goto LABEL_25;
  }
LABEL_44:
  if ( ArraySize )
  {
    LODWORD(v14) = ArraySize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7718, ASSERT_TYPE_ASSERT, "( ( !arrayIndex ) )", "%s\n\t( arrayIndex ) = %i", "( !arrayIndex )", v14) )
      __debugbreak();
  }
}

/*
==============
Scr_AddClassField
==============
*/
void Scr_AddClassField(scrContext_t *scrContext, EntityClass classnum, unsigned int name, unsigned int canonicalString, unsigned int offset)
{
  unsigned int id; 
  const char *CanonicalStringAtIndex; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  ChildVariableValue *v14; 
  ChildVariableValue *v15; 

  if ( offset >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7173, ASSERT_TYPE_ASSERT, "( offset < (1 << 16) )", (const char *)&queryFormat, "offset < (1 << 16)") )
    __debugbreak();
  id = scrContext->m_varPub.m_classMap[(unsigned __int8)classnum].id;
  CanonicalStringAtIndex = Scr_GetCanonicalStringAtIndex(canonicalString);
  v11 = SL_GetCanonicalString(CanonicalStringAtIndex);
  v12 = v11 + 7602176;
  if ( v11 + 7602176 > 0xF3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4791, ASSERT_TYPE_ASSERT, "( IsValidArrayIndex( (unsigned)intValue ) )", (const char *)&queryFormat, "IsValidArrayIndex( (unsigned)intValue )") )
    __debugbreak();
  v13 = (v11 - 0x800000) & 0xFFFFFF;
  if ( FindVariable(scrContext, id, v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7181, ASSERT_TYPE_ASSERT, "( !FindArrayVariable( scrContext, classId, canonicalString ) )", (const char *)&queryFormat, "!FindArrayVariable( scrContext, classId, canonicalString )") )
    __debugbreak();
  if ( v12 > 0xF3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4813, ASSERT_TYPE_ASSERT, "( IsValidArrayIndex( unsignedValue ) )", (const char *)&queryFormat, "IsValidArrayIndex( unsignedValue )") )
    __debugbreak();
  v14 = &scrContext->m_varGlob.childVariableValue[GetNewVariable(scrContext, id, v13)];
  *(_WORD *)&v14->tn &= 0xFFC6u;
  *(_WORD *)&v14->tn |= 6u;
  v14->u.f.prev = truncate_cast<unsigned short,unsigned int>(offset);
  if ( FindVariable(scrContext, id, name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7189, ASSERT_TYPE_ASSERT, "( !FindVariable( scrContext, classId, name ) )", (const char *)&queryFormat, "!FindVariable( scrContext, classId, name )") )
    __debugbreak();
  v15 = &scrContext->m_varGlob.childVariableValue[GetNewVariable(scrContext, id, name)];
  *(_WORD *)&v15->tn &= 0xFFC6u;
  *(_WORD *)&v15->tn |= 6u;
  v15->u.f.prev = truncate_cast<unsigned short,unsigned int>(offset);
}

/*
==============
Scr_AddFields
==============
*/
void Scr_AddFields(scrContext_t *scrContext, const char *path, const char *extension)
{
  const char *v6; 
  const RawFile *rawfile; 
  int RawFileLen; 
  char *v9; 
  char dest[128]; 

  v6 = TempMalloc(4ui64);
  scrContext->m_varPub.fieldBuffer = v6;
  *(_DWORD *)v6 = 0;
  Com_sprintf(dest, 0x80ui64, "%s/%s.%s", path, "keys", extension);
  Scr_Mem_TempCheckClear(scrContext);
  rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, dest, 1).rawfile;
  if ( DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, dest) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440AC790, 1150i64, dest);
  RawFileLen = DB_GetRawFileLen(rawfile);
  v9 = (char *)Scr_Mem_TempAlloc(scrContext, RawFileLen, "Scr_GetSourceFile_FastFile");
  DB_GetRawBuffer(rawfile, v9, RawFileLen);
  Scr_AddFieldsForFileInternal(scrContext, v9, dest);
  Scr_Mem_TempClear(scrContext);
}

/*
==============
Scr_AddFieldsForFileInternal
==============
*/
void Scr_AddFieldsForFileInternal(const scrContext_t *scrContext, char *sourceBuffer, const char *filename)
{
  char *v5; 
  const char *v6; 
  __int64 v7; 
  char v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  char *v16; 
  unsigned int CanonicalString; 
  const char *fieldBuffer; 
  int v19; 
  char *v20; 
  char *data_p; 

  data_p = sourceBuffer;
  Com_BeginParseSession("Scr_AddFields");
  v5 = TempMalloc(0i64) - 4;
  v6 = Com_Parse((const char **)&data_p);
  if ( data_p )
  {
    while ( 2 )
    {
      v7 = 0i64;
      do
      {
        v8 = v6[v7++];
        if ( v8 != aFloat[v7 - 1] )
        {
          v10 = 0i64;
          while ( 1 )
          {
            v11 = v6[v10++];
            if ( v11 != aInt[v10 - 1] )
              break;
            if ( v10 == 4 )
            {
              v9 = 6;
              goto LABEL_18;
            }
          }
          v12 = 0i64;
          while ( 1 )
          {
            v13 = v6[v12++];
            if ( v13 != aString_4[v12 - 1] )
              break;
            if ( v12 == 7 )
            {
              v9 = 2;
              goto LABEL_18;
            }
          }
          v14 = 0i64;
          while ( 1 )
          {
            v15 = v6[v14++];
            if ( v15 != aVector[v14 - 1] )
              break;
            if ( v14 == 7 )
            {
              v9 = 4;
              goto LABEL_18;
            }
          }
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440AC7E8, 1151i64);
          return;
        }
      }
      while ( v7 != 6 );
      v9 = 5;
LABEL_18:
      v16 = (char *)Com_Parse((const char **)&data_p);
      if ( !data_p )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440AC820, 1152i64, filename);
      I_strlwr(v16);
      if ( v5 != TempMalloc(0i64) - 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8224, ASSERT_TYPE_ASSERT, "(targetPos == TempMalloc( 0 ) - sizeof( unsigned ))", (const char *)&queryFormat, "targetPos == TempMalloc( 0 ) - sizeof( unsigned )") )
        __debugbreak();
      TempMemorySetPos(v5);
      CanonicalString = SL_GetCanonicalString(v16);
      if ( !scrContext->m_varPub.fieldBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8103, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.fieldBuffer )", (const char *)&queryFormat, "scrContext.m_varPub.fieldBuffer") )
        __debugbreak();
      fieldBuffer = scrContext->m_varPub.fieldBuffer;
      while ( 1 )
      {
        v19 = *(_DWORD *)fieldBuffer;
        if ( !*(_DWORD *)fieldBuffer )
          break;
        fieldBuffer += 5;
        if ( CanonicalString == v19 )
        {
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440AC8D8, 1153i64, v16, filename);
          break;
        }
      }
      v20 = TempMalloc(9ui64);
      *(_DWORD *)v20 = CanonicalString;
      v5 = v20 + 5;
      v20[4] = v9;
      *(_DWORD *)(v20 + 5) = 0;
      v6 = Com_Parse((const char **)&data_p);
      if ( data_p )
        continue;
      break;
    }
  }
  Com_EndParseSession();
}

/*
==============
Scr_AddFieldsForRadiant
==============
*/
void Scr_AddFieldsForRadiant(scrContext_t *scrContext)
{
  const char *v2; 
  const RawFile *rawfile; 
  int RawFileLen; 
  char *v5; 
  char dest[128]; 

  v2 = TempMalloc(4ui64);
  scrContext->m_varPub.fieldBuffer = v2;
  *(_DWORD *)v2 = 0;
  Com_sprintf(dest, 0x80ui64, "%s/%s.%s", "radiant", "keys", "txt");
  Scr_Mem_TempCheckClear(scrContext);
  rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, dest, 1).rawfile;
  if ( DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, dest) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440AC790, 1150i64, dest);
  RawFileLen = DB_GetRawFileLen(rawfile);
  v5 = (char *)Scr_Mem_TempAlloc(scrContext, RawFileLen, "Scr_GetSourceFile_FastFile");
  DB_GetRawBuffer(rawfile, v5, RawFileLen);
  Scr_AddFieldsForFileInternal(scrContext, v5, dest);
  Scr_Mem_TempClear(scrContext);
}

/*
==============
Scr_AddFirstArrayKey
==============
*/
void Scr_AddFirstArrayKey(scrContext_t *scrContext, unsigned int parentId)
{
  __int64 v2; 
  __int64 v4; 
  unsigned __int8 type; 
  unsigned int lastChild; 
  ChildVariableValue *v7; 
  unsigned int Name; 
  VariableType v9; 
  VariableValue out; 

  v2 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7727, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  v4 = v2;
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v2].w.type) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v4].w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7728, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, parentId ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, parentId ) == VAR_ARRAY") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5776, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  type = scrContext->m_varGlob.objectVariableValue[v4].w.type;
  if ( (type == 26 || type < 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5777, ASSERT_TYPE_ASSERT, "( IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] ) )", (const char *)&queryFormat, "IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] )") )
    __debugbreak();
  lastChild = scrContext->m_varGlob.objectVariableChildren[v2].lastChild;
  if ( lastChild )
  {
    v7 = &scrContext->m_varGlob.childVariableValue[lastChild];
    if ( (*(_BYTE *)&v7->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7683, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
      __debugbreak();
    Name = ChildVariableValue::GetName(v7);
    if ( Name )
    {
      if ( Name >= 0x80000 )
      {
        if ( Name >= 0xC0000 )
        {
          v9 = VAR_INTEGER;
          Name -= 0x800000;
        }
        else
        {
          v9 = VAR_POINTER;
          Name -= 0x80000;
        }
        goto LABEL_29;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5028, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    {
      __debugbreak();
      v9 = VAR_STRING;
LABEL_29:
      MakeVariableValue_Out(v9, Name, &out);
      Scr_AddValue(scrContext, &out);
      return;
    }
    v9 = VAR_STRING;
    goto LABEL_29;
  }
}

/*
==============
Scr_AddLastArrayKey
==============
*/
void Scr_AddLastArrayKey(scrContext_t *scrContext, unsigned int parentId)
{
  __int64 v2; 
  unsigned int FirstSibling; 
  ChildVariableValue *v5; 
  unsigned int Name; 
  VariableType v7; 
  VariableValue out; 

  v2 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7744, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v2].w.type) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v2].w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7745, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, parentId ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, parentId ) == VAR_ARRAY") )
    __debugbreak();
  FirstSibling = FindFirstSibling(scrContext, v2);
  if ( FirstSibling )
  {
    v5 = &scrContext->m_varGlob.childVariableValue[FirstSibling];
    if ( (*(_BYTE *)&v5->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7683, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
      __debugbreak();
    Name = ChildVariableValue::GetName(v5);
    if ( Name )
    {
      if ( Name >= 0x80000 )
      {
        if ( Name >= 0xC0000 )
        {
          v7 = VAR_INTEGER;
          Name -= 0x800000;
        }
        else
        {
          v7 = VAR_POINTER;
          Name -= 0x80000;
        }
        goto LABEL_22;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5028, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    {
      __debugbreak();
      v7 = VAR_STRING;
LABEL_22:
      MakeVariableValue_Out(v7, Name, &out);
      Scr_AddValue(scrContext, &out);
      return;
    }
    v7 = VAR_STRING;
    goto LABEL_22;
  }
}

/*
==============
Scr_AddNextArrayKey
==============
*/
void Scr_AddNextArrayKey(scrContext_t *scrContext, unsigned int parentId, VariableValue *value)
{
  __int64 v3; 
  unsigned int ArrayIndex2; 
  __int64 v7; 
  ChildVariableValue *v8; 
  unsigned int prevSibling; 
  ChildVariableValue *v10; 
  unsigned int Name; 
  VariableType v12; 
  VariableValue out; 

  v3 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7786, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7787, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, parentId ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, parentId ) == VAR_ARRAY") )
    __debugbreak();
  ArrayIndex2 = Scr_FindArrayIndex2(scrContext, v3, value);
  v7 = ArrayIndex2;
  if ( !ArrayIndex2 )
  {
    Scr_ParamError(COM_ERR_5268, scrContext, 1u, "not an array key");
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5788, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= scrContext->m_variableListChildSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5789, ASSERT_TYPE_ASSERT, "( id < scrContext.m_variableListChildSize )", (const char *)&queryFormat, "id < scrContext.m_variableListChildSize") )
    __debugbreak();
  v8 = &scrContext->m_varGlob.childVariableValue[v7];
  if ( (*(_BYTE *)&v8->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5791, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
    __debugbreak();
  prevSibling = v8->prevSibling;
  if ( prevSibling )
  {
    v10 = &scrContext->m_varGlob.childVariableValue[prevSibling];
    if ( (*(_BYTE *)&v10->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7683, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
      __debugbreak();
    Name = ChildVariableValue::GetName(v10);
    if ( Name )
    {
      if ( Name >= 0x80000 )
      {
        if ( Name >= 0xC0000 )
        {
          v12 = VAR_INTEGER;
          Name -= 0x800000;
        }
        else
        {
          v12 = VAR_POINTER;
          Name -= 0x80000;
        }
        goto LABEL_31;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5028, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    {
      __debugbreak();
      v12 = VAR_STRING;
LABEL_31:
      MakeVariableValue_Out(v12, Name, &out);
      Scr_AddValue(scrContext, &out);
      return;
    }
    v12 = VAR_STRING;
    goto LABEL_31;
  }
}

/*
==============
Scr_AddPrevArrayKey
==============
*/
void Scr_AddPrevArrayKey(scrContext_t *scrContext, unsigned int parentId, VariableValue *value)
{
  __int64 v3; 
  unsigned int ArrayIndex2; 
  unsigned int NextSibling; 
  ChildVariableValue *v8; 
  unsigned int Name; 
  VariableType v10; 
  VariableValue out; 

  v3 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7763, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7764, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, parentId ) == VAR_ARRAY )", (const char *)&queryFormat, "GetObjectType( scrContext, parentId ) == VAR_ARRAY") )
    __debugbreak();
  ArrayIndex2 = Scr_FindArrayIndex2(scrContext, v3, value);
  if ( !ArrayIndex2 )
    Scr_ParamError(COM_ERR_5267, scrContext, 1u, "not an array key");
  NextSibling = FindNextSibling(scrContext, ArrayIndex2);
  if ( NextSibling )
  {
    v8 = &scrContext->m_varGlob.childVariableValue[NextSibling];
    if ( (*(_BYTE *)&v8->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7683, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
      __debugbreak();
    Name = ChildVariableValue::GetName(v8);
    if ( Name )
    {
      if ( Name >= 0x80000 )
      {
        if ( Name >= 0xC0000 )
        {
          v10 = VAR_INTEGER;
          Name -= 0x800000;
        }
        else
        {
          v10 = VAR_POINTER;
          Name -= 0x80000;
        }
        goto LABEL_24;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5028, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    {
      __debugbreak();
      v10 = VAR_STRING;
LABEL_24:
      MakeVariableValue_Out(v10, Name, &out);
      Scr_AddValue(scrContext, &out);
      return;
    }
    v10 = VAR_STRING;
    goto LABEL_24;
  }
}

/*
==============
Scr_AddStringSet
==============
*/
char Scr_AddStringSet(scrContext_t *scrContext, unsigned int setId, const char *string)
{
  signed int LowercaseString; 
  unsigned int Variable; 
  VariableValue value; 

  LowercaseString = SL_GetLowercaseString(string, 0);
  if ( FindVariable(scrContext, setId, LowercaseString) )
  {
    SL_RemoveRefToString((scr_string_t)LowercaseString);
    return 0;
  }
  else
  {
    Variable = GetVariable(scrContext, setId, LowercaseString);
    SL_RemoveRefToString((scr_string_t)LowercaseString);
    value.type = VAR_INTEGER;
    value.u.intValue = 0;
    SetVariableValue(scrContext, Variable, &value);
    return 1;
  }
}

/*
==============
Scr_AllocArray
==============
*/
__int64 Scr_AllocArray(scrContext_t *scrContext)
{
  const char *m_scriptPos; 
  ObjectVariableValue *v3; 
  __int64 result; 
  unsigned int index; 

  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  if ( !m_scriptPos )
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script array variable>";
  v3 = AllocVariable(scrContext, &index);
  v3->w.type = 24;
  v3->u.o.refCount = 0;
  v3->u.f.next = 0;
  result = index;
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  return result;
}

/*
==============
Scr_AllocExtArray
==============
*/
__int64 Scr_AllocExtArray(scrContext_t *scrContext)
{
  const char *m_scriptPos; 
  ObjectVariableValue *v3; 
  __int64 result; 
  unsigned int index; 

  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  if ( !m_scriptPos )
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script array variable>";
  v3 = AllocVariable(scrContext, &index);
  v3->w.type = 24;
  v3->u.o.refCount = 0;
  v3->u.f.next = 0;
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  result = index;
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[index];
  return result;
}

/*
==============
Scr_AllocGameVariable
==============
*/
void Scr_AllocGameVariable(scrContext_t *scrContext)
{
  ChildVariableValue *v2; 
  const char *m_scriptPos; 
  ObjectVariableValue *v4; 
  unsigned int gameId; 
  VariableValue value; 
  unsigned int index; 

  if ( !scrContext->m_varPub.gameId )
  {
    if ( scrContext->m_varPub.varUsagePos.m_genericPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8444, ASSERT_TYPE_ASSERT, "( !pScrVarPub->varUsagePos.GetVarUsagePos() )", (const char *)&queryFormat, "!pScrVarPub->varUsagePos.GetVarUsagePos()") )
      __debugbreak();
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<game variable>";
    v2 = AllocChildVariable(scrContext, &index);
    value.type = VAR_POINTER;
    *(_WORD *)&v2->tn &= 0xFFC0u;
    v2->k.match &= 0x3FFFu;
    scrContext->m_varPub.gameId = index;
    m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
    if ( !m_scriptPos )
      scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script array variable>";
    v4 = AllocVariable(scrContext, &index);
    v4->w.type = 24;
    v4->u.o.refCount = 0;
    v4->u.f.next = 0;
    LODWORD(v4) = index;
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
    gameId = scrContext->m_varPub.gameId;
    value.u.intValue = (int)v4;
    SetVariableValue(scrContext, gameId, &value);
    scrContext->m_varPub.varUsagePos.m_genericPos = 0i64;
    Scr_UpdateDebugger(scrContext);
  }
}

/*
==============
Scr_AllocVector
==============
*/

float *__fastcall Scr_AllocVector(scrContext_t *scrContext)
{
  return Scr_AllocVector_Inline(scrContext);
}

/*
==============
Scr_AllocVector
==============
*/
float *Scr_AllocVector(scrContext_t *scrContext, const float *v)
{
  const float *v3; 
  float *result; 
  int v8; 
  int v9; 
  int v10; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+38h+arg_8], xmm0
  }
  v3 = v;
  if ( (v8 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+38h+arg_8], xmm0
  }
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+38h+arg_8], xmm0
  }
  if ( (v10 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4663, ASSERT_TYPE_SANITY, "( !IS_NAN( ( v )[0] ) && !IS_NAN( ( v )[1] ) && !IS_NAN( ( v )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( v )[0] ) && !IS_NAN( ( v )[1] ) && !IS_NAN( ( v )[2] )") )
      __debugbreak();
  }
  result = Scr_AllocVector_Inline(scrContext);
  *result = *v3;
  result[1] = v3[1];
  result[2] = v3[2];
  return result;
}

/*
==============
Scr_AllocVector_Inline
==============
*/
float *Scr_AllocVector_Inline(scrContext_t *scrContext)
{
  _DWORD *v2; 
  volatile int *p_totalVectorRefCount; 
  float *v4; 
  float *result; 
  volatile signed __int32 *v6; 

  v2 = MT_Alloc(0x10ui64, 2);
  p_totalVectorRefCount = &scrContext->m_varPub.totalVectorRefCount;
  *v2 = 0;
  v4 = (float *)(v2 + 1);
  if ( ((unsigned __int8)p_totalVectorRefCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_totalVectorRefCount) )
    __debugbreak();
  _InterlockedIncrement(p_totalVectorRefCount);
  result = v4;
  if ( scrStringDebugGlob )
  {
    v6 = &scrStringDebugGlob->refCount[((char *)v4 - scrMemTreePub.mt_buffer - 4) / 16];
    if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v6) )
      __debugbreak();
    _InterlockedIncrement(v6);
    return v4;
  }
  return result;
}

/*
==============
Scr_CastBool_NonInteger
==============
*/
__int64 Scr_CastBool_NonInteger(scrContext_t *scrContext, VariableValue *value)
{
  VariableType type; 
  VariableValue *v4; 
  const char *NameForType; 
  const char *v9; 

  type = value->type;
  v4 = value;
  if ( type == VAR_FLOAT )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rdx]
    }
    MakeVariableValue_Out(VAR_INTEGER, 0, value);
  }
  else
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, value->u);
    v4->type = VAR_UNDEFINED;
    NameForType = Scr_GetNameForType(type);
    v9 = j_va("cannot cast %s to bool", NameForType);
    Scr_Error(COM_ERR_5233, scrContext, v9);
  }
  return 0i64;
}

/*
==============
Scr_CastDebugString
==============
*/
void Scr_CastDebugString(scrContext_t *scrContext, VariableValue *value)
{
  VariableType type; 
  unsigned int scriptCodePosValue; 
  const XAnim_s *Anims; 
  const char *AnimDebugName; 
  unsigned int String; 

  type = value->type;
  switch ( type )
  {
    case VAR_POINTER:
      type = GetObjectType(scrContext, value->u.intValue);
      goto LABEL_6;
    case VAR_STRING:
    case VAR_VECTOR:
    case VAR_FLOAT:
    case VAR_INTEGER:
      Scr_CastString(scrContext, value);
      return;
    case VAR_ISTRING:
      value->type = VAR_STRING;
      return;
    case VAR_ANIMATION:
      scriptCodePosValue = (unsigned __int16)value->u.scriptCodePosValue;
      Anims = Scr_GetAnims(scrContext, WORD1(value->u.scriptCodePosValue));
      AnimDebugName = XAnimGetAnimDebugName(Anims, scriptCodePosValue);
      goto LABEL_7;
    default:
LABEL_6:
      AnimDebugName = Scr_GetNameForType(type);
LABEL_7:
      String = j_SL_GetString_(AnimDebugName, 0, 17);
      RemoveRefToValue(scrContext, (unsigned __int8)value->type, value->u);
      value->type = VAR_STRING;
      Scr_SetStringValue(value, String);
      return;
  }
}

/*
==============
Scr_CastString
==============
*/
bool Scr_CastString(scrContext_t *scrContext, VariableValue *value)
{
  VariableValue *v3; 
  VariableType type; 
  int intValue; 
  unsigned int StringForInt; 
  bool result; 
  unsigned int StringForFloat; 
  const float *scriptCodePosValue; 
  const float *v11; 
  unsigned int StringForVector; 
  unsigned int v13; 
  const XAnim_s *Anims; 
  const char *AnimName; 
  unsigned int String; 
  const char *NameForType; 

  v3 = value;
  type = value->type;
  switch ( type )
  {
    case VAR_STRING:
      return 1;
    case VAR_INTEGER:
      intValue = value->u.intValue;
      value->type = VAR_STRING;
      StringForInt = SL_GetStringForInt(intValue);
      Scr_SetStringValue(v3, StringForInt);
      return 1;
    case VAR_FLOAT:
      __asm { vmovss  xmm0, dword ptr [rdx]; f }
      value->type = VAR_STRING;
      StringForFloat = SL_GetStringForFloat(*(float *)&_XMM0);
      Scr_SetStringValue(v3, StringForFloat);
      return 1;
    case VAR_VECTOR:
      scriptCodePosValue = (const float *)value->u.scriptCodePosValue;
      v11 = (const float *)value->u.scriptCodePosValue;
      value->type = VAR_STRING;
      StringForVector = SL_GetStringForVector(v11);
      Scr_SetStringValue(v3, StringForVector);
      RemoveRefToVector(scrContext, scriptCodePosValue);
      return 1;
    case VAR_ANIMATION:
      v13 = (unsigned __int16)value->u.scriptCodePosValue;
      Anims = Scr_GetAnims(scrContext, WORD1(value->u.scriptCodePosValue));
      AnimName = XAnimGetAnimName(Anims, v13);
      String = j_SL_GetString_(AnimName, 0, 17);
      RemoveRefToValue(scrContext, (unsigned __int8)v3->type, v3->u);
      v3->type = VAR_STRING;
      Scr_SetStringValue(v3, String);
      return 1;
    default:
      NameForType = Scr_GetNameForType(type);
      scrContext->m_varPub.error_message = j_va("cannot cast %s to string", NameForType);
      RemoveRefToValue(scrContext, (unsigned __int8)v3->type, v3->u);
      result = 0;
      v3->type = VAR_UNDEFINED;
      break;
  }
  return result;
}

/*
==============
Scr_CastVector
==============
*/
void Scr_CastVector(scrContext_t *scrContext, VariableValue *value)
{
  __int64 v6; 
  VariableValue *v7; 
  int v10; 
  __int64 v11; 
  VariableType type; 
  const char *NameForType; 
  const char *v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31[4]; 

  v6 = 2i64;
  v7 = value + 2;
  _R8 = v31;
  v10 = 2;
  v11 = 2i64;
  _RAX = value + 2;
  do
  {
    type = _RAX->type;
    if ( type == VAR_FLOAT )
    {
      __asm { vmovss  xmm0, dword ptr [rax] }
    }
    else
    {
      if ( type != VAR_INTEGER )
      {
        scrContext->m_varPub.error_index = v10 + 1;
        do
        {
          RemoveRefToValue(scrContext, (unsigned __int8)v7->type, v7->u);
          --v6;
          --v7;
        }
        while ( v6 >= 0 );
        value->type = VAR_UNDEFINED;
        NameForType = Scr_GetNameForType(type);
        v24 = j_va("type %s is not a float", NameForType);
        Scr_Error(COM_ERR_5235, scrContext, v24);
        return;
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rax]
      }
    }
    __asm { vmovss  dword ptr [r8], xmm0 }
    ++_R8;
    --v10;
    --_RAX;
    --v11;
  }
  while ( v11 >= 0 );
  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovss  xmm6, [rsp+98h+var_58]
    vmovaps [rsp+98h+var_38], xmm7
    vmovss  xmm7, [rsp+98h+var_5C]
    vmovaps [rsp+98h+var_48], xmm8
    vmovss  xmm8, [rsp+98h+var_60]
    vmovss  [rsp+98h+var_68], xmm8
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm { vmovss  [rsp+98h+var_68], xmm7 }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm { vmovss  [rsp+98h+var_68], xmm6 }
  if ( (v27 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6114, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vec )[0] ) && !IS_NAN( ( vec )[1] ) && !IS_NAN( ( vec )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vec )[0] ) && !IS_NAN( ( vec )[1] ) && !IS_NAN( ( vec )[2] )") )
      __debugbreak();
  }
  __asm { vmovss  [rsp+98h+var_68], xmm8 }
  value->type = VAR_VECTOR;
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm { vmovss  [rsp+98h+var_68], xmm7 }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm { vmovss  [rsp+98h+var_68], xmm6 }
  if ( (v30 & 0x7F800000) == 2139095040 )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4663, ASSERT_TYPE_SANITY, "( !IS_NAN( ( v )[0] ) && !IS_NAN( ( v )[1] ) && !IS_NAN( ( v )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( v )[0] ) && !IS_NAN( ( v )[1] ) && !IS_NAN( ( v )[2] )") )
      __debugbreak();
  }
  _RAX = Scr_AllocVector_Inline(scrContext);
  __asm
  {
    vmovss  dword ptr [rax], xmm8
    vmovaps xmm8, [rsp+98h+var_48]
    vmovss  dword ptr [rax+4], xmm7
    vmovaps xmm7, [rsp+98h+var_38]
    vmovss  dword ptr [rax+8], xmm6
    vmovaps xmm6, [rsp+98h+var_28]
  }
  value->u.scriptCodePosValue = (unsigned __int64)_RAX;
}

/*
==============
Scr_CastWeakerPair2
==============
*/
void Scr_CastWeakerPair2(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2, VariableType type1, VariableType type2)
{
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 

  _RBX = value2;
  _RDI = value1;
  switch ( type1 )
  {
    case VAR_FLOAT:
      if ( type2 == VAR_INTEGER )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [r8]
          vmovss  dword ptr [r8], xmm0
        }
        value2->type = VAR_FLOAT;
        return;
      }
      goto LABEL_21;
    case VAR_INTEGER:
      if ( type2 == VAR_FLOAT )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rdx]
          vmovss  dword ptr [rdx], xmm0
        }
        value1->type = type2;
        return;
      }
      goto LABEL_21;
    case VAR_VECTOR:
      if ( type2 == VAR_FLOAT )
      {
        _RAX = Scr_AllocVector_Inline(scrContext);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  [rsp+38h+arg_18], xmm0
        }
        _RDI = _RAX;
        __asm
        {
          vmovss  dword ptr [rax], xmm0
          vmovss  xmm2, dword ptr [rbx]
          vmovss  dword ptr [rax+4], xmm2
          vmovss  xmm1, dword ptr [rbx]
          vmovss  dword ptr [rax+8], xmm1
        }
        if ( (v36 & 0x7F800000) == 2139095040 )
          goto LABEL_38;
        __asm { vmovss  [rsp+38h+arg_18], xmm2 }
        if ( (v37 & 0x7F800000) == 2139095040 )
          goto LABEL_38;
        __asm { vmovss  [rsp+38h+arg_18], xmm1 }
        if ( (v38 & 0x7F800000) == 2139095040 )
        {
LABEL_38:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6213, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] )") )
            __debugbreak();
        }
        goto LABEL_14;
      }
      if ( type2 == VAR_INTEGER )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
          vmovss  [rsp+38h+arg_18], xmm0
        }
        _RDI = Scr_AllocVector_Inline(scrContext);
        __asm
        {
          vmovss  dword ptr [rax], xmm0
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, dword ptr [rbx]
          vxorps  xmm1, xmm1, xmm1
          vmovss  dword ptr [rax+4], xmm2
          vcvtsi2ss xmm1, xmm1, dword ptr [rbx]
          vmovss  dword ptr [rax+8], xmm1
        }
        if ( (v39 & 0x7F800000) == 2139095040 )
          goto LABEL_39;
        __asm { vmovss  [rsp+38h+arg_18], xmm2 }
        if ( (v40 & 0x7F800000) == 2139095040 )
          goto LABEL_39;
        __asm { vmovss  [rsp+38h+arg_18], xmm1 }
        if ( (v41 & 0x7F800000) == 2139095040 )
        {
LABEL_39:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6225, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] )") )
          {
            __debugbreak();
            _RBX->u.scriptCodePosValue = (unsigned __int64)_RDI;
            _RBX->type = VAR_VECTOR;
            return;
          }
        }
LABEL_14:
        _RBX->u.scriptCodePosValue = (unsigned __int64)_RDI;
        _RBX->type = VAR_VECTOR;
        return;
      }
      break;
  }
  if ( type2 != VAR_VECTOR )
    goto LABEL_35;
LABEL_21:
  if ( type1 == VAR_FLOAT )
  {
    _RAX = Scr_AllocVector_Inline(scrContext);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  [rsp+38h+arg_18], xmm0
    }
    _RBX = _RAX;
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vmovss  xmm2, dword ptr [rdi]
      vmovss  dword ptr [rax+4], xmm2
      vmovss  xmm1, dword ptr [rdi]
      vmovss  dword ptr [rax+8], xmm1
    }
    if ( (v42 & 0x7F800000) == 2139095040 )
      goto LABEL_40;
    __asm { vmovss  [rsp+38h+arg_18], xmm2 }
    if ( (v43 & 0x7F800000) == 2139095040 )
      goto LABEL_40;
    __asm { vmovss  [rsp+38h+arg_18], xmm1 }
    if ( (v44 & 0x7F800000) == 2139095040 )
    {
LABEL_40:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6240, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] )") )
        __debugbreak();
    }
LABEL_28:
    _RDI->u.scriptCodePosValue = (unsigned __int64)_RBX;
    _RDI->type = VAR_VECTOR;
    return;
  }
  if ( type1 == VAR_INTEGER )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi]
      vmovss  [rsp+38h+arg_18], xmm0
    }
    _RBX = Scr_AllocVector_Inline(scrContext);
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [rdi]
      vxorps  xmm1, xmm1, xmm1
      vmovss  dword ptr [rax+4], xmm2
      vcvtsi2ss xmm1, xmm1, dword ptr [rdi]
      vmovss  dword ptr [rax+8], xmm1
    }
    if ( (v45 & 0x7F800000) != 2139095040 )
    {
      __asm { vmovss  [rsp+38h+arg_18], xmm2 }
      if ( (v46 & 0x7F800000) != 2139095040 )
      {
        __asm { vmovss  [rsp+38h+arg_18], xmm1 }
        if ( (v47 & 0x7F800000) != 2139095040 )
          goto LABEL_28;
      }
    }
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6252, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] )") )
      goto LABEL_28;
    __debugbreak();
    _RDI->u.scriptCodePosValue = (unsigned __int64)_RBX;
    _RDI->type = VAR_VECTOR;
  }
  else
  {
LABEL_35:
    Scr_UnmatchingTypesError(scrContext, value1, value2);
  }
}

/*
==============
Scr_CheckLeaks
==============
*/
void Scr_CheckLeaks(scrContext_t *scrContext)
{
  char v2; 
  unsigned int v3; 
  unsigned int m_variableListParentSize; 
  int *objectLeakCount; 
  __int64 v6; 
  bool v7; 
  unsigned int m_variableListChildSize; 
  int *childLeakCount; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  scrStringDebugGlob_t *v15; 
  unsigned int v16; 
  unsigned int v17; 
  ObjectVariableValue::<unnamed_type_w> *p_w; 
  unsigned __int8 type; 
  unsigned __int8 v20; 
  unsigned int v21; 
  __int64 v22; 
  ChildVariableValue *v23; 
  unsigned __int8 v24; 
  unsigned int v25; 
  unsigned __int8 v26; 
  unsigned __int8 v27; 
  const char *v28; 
  unsigned __int8 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int nextSibling; 
  unsigned int prevSibling; 

  if ( !scrContext->m_varDebugPub.m_Inited )
    return;
  v2 = 0;
  v3 = 1;
  m_variableListParentSize = scrContext->m_variableListParentSize;
  if ( m_variableListParentSize )
  {
    objectLeakCount = scrContext->m_varDebugPub.objectLeakCount;
    v6 = m_variableListParentSize;
    do
    {
      v7 = *objectLeakCount++ == 0;
      if ( !v7 )
        v2 = 1;
      --v6;
    }
    while ( v6 );
  }
  m_variableListChildSize = scrContext->m_variableListChildSize;
  if ( m_variableListChildSize )
  {
    childLeakCount = scrContext->m_varDebugPub.childLeakCount;
    v10 = m_variableListChildSize;
    do
    {
      v7 = *childLeakCount++ == 0;
      if ( !v7 )
        v2 = 1;
      --v10;
    }
    while ( v10 );
  }
  if ( v2 )
  {
    s_noIdHeader = 0;
    Com_Printf(23, "parent leaks:\n");
    v11 = 0;
    v12 = 0;
    if ( m_variableListParentSize )
    {
      v13 = 0i64;
      do
      {
        if ( scrContext->m_varDebugPub.objectLeakCount[v13] )
          Scr_PrintObject(scrContext, v12, 0, s_defaultEnterEnts);
        ++v12;
        ++v13;
      }
      while ( v12 < m_variableListParentSize );
    }
    Com_Printf(23, "child leaks:\n");
    if ( m_variableListChildSize )
    {
      v14 = 0i64;
      do
      {
        if ( scrContext->m_varDebugPub.childLeakCount[v14] )
          Scr_PrintChildValue(scrContext, &scrContext->m_varGlob.childVariableValue[v11], v11, 0, 0);
        ++v11;
        ++v14;
      }
      while ( v11 < m_variableListChildSize );
    }
    Com_Printf(23, "\n");
    v15 = scrStringDebugGlob;
    if ( scrStringDebugGlob && scrStringDebugGlob->ignoreChecks )
      goto LABEL_28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1377, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "leak") )
      __debugbreak();
  }
  v15 = scrStringDebugGlob;
LABEL_28:
  if ( !v15 || !v15->ignoreChecks )
  {
    v16 = scrContext->m_variableListParentSize;
    v17 = 1;
    if ( v16 > 1 )
    {
      p_w = &scrContext->m_varGlob.objectVariableValue[1].w;
      do
      {
        type = p_w->type;
        if ( LOBYTE(p_w->type) != 26 )
        {
          if ( type >= 0x1Au )
          {
            LODWORD(v31) = 26;
            LODWORD(v30) = type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2725, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( VAR_COUNT )", "type doesn't index VAR_COUNT\n\t%i not in [0, %i)", v30, v31) )
              __debugbreak();
          }
          v20 = type;
          if ( type > 0x1Du )
            v20 = 29;
          Com_Printf(23, "parent: %d (%s)\n", v17, var_typename[v20]);
        }
        ++v17;
        p_w += 3;
      }
      while ( v17 < v16 );
      v3 = 1;
    }
    v21 = scrContext->m_variableListChildSize;
    if ( v21 > 1 )
    {
      v22 = 1i64;
      do
      {
        v23 = &scrContext->m_varGlob.childVariableValue[v22];
        v24 = *(_BYTE *)&v23->tn & 0x3F;
        if ( v24 != 26 )
        {
          v25 = v23->k.match >> 14;
          nextSibling = v23->nextSibling;
          prevSibling = v23->prevSibling;
          if ( v25 )
          {
            v26 = scrContext->m_varGlob.objectVariableValue[v25].w.type;
            if ( v26 >= 0x1Au )
            {
              LODWORD(v31) = 26;
              LODWORD(v30) = v26;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2725, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( VAR_COUNT )", "type doesn't index VAR_COUNT\n\t%i not in [0, %i)", v30, v31) )
                __debugbreak();
            }
            v27 = v26;
            if ( v26 > 0x1Du )
              v27 = 29;
          }
          else
          {
            v27 = 0;
          }
          v28 = var_typename[v27];
          if ( v24 >= 0x1Au )
          {
            LODWORD(v31) = 26;
            LODWORD(v30) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2725, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( VAR_COUNT )", "type doesn't index VAR_COUNT\n\t%i not in [0, %i)", v30, v31) )
              __debugbreak();
          }
          v29 = v24;
          if ( v24 > 0x1Du )
            v29 = 29;
          LODWORD(v34) = nextSibling;
          LODWORD(v33) = v3;
          LODWORD(v32) = prevSibling;
          LODWORD(v30) = v25;
          Com_Printf(23, "child: %d -> %d (%s), parent=%d (%s), sib: %d -> %d -> %d\n", v3, v23->next, var_typename[v29], v30, v28, v32, v33, v34);
        }
        ++v3;
        ++v22;
      }
      while ( v3 < v21 );
    }
    if ( scrContext->m_varPub.totalObjectRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1387, ASSERT_TYPE_ASSERT, "(!scrContext.m_varPub.totalObjectRefCount)", (const char *)&queryFormat, "!scrContext.m_varPub.totalObjectRefCount") )
      __debugbreak();
    if ( scrContext->m_varPub.totalVectorRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1388, ASSERT_TYPE_ASSERT, "(!scrContext.m_varPub.totalVectorRefCount)", (const char *)&queryFormat, "!scrContext.m_varPub.totalVectorRefCount") )
      __debugbreak();
    if ( scrContext->m_varPub.ext_threadcount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1389, ASSERT_TYPE_ASSERT, "(!scrContext.m_varPub.ext_threadcount)", (const char *)&queryFormat, "!scrContext.m_varPub.ext_threadcount") )
        __debugbreak();
    }
  }
  scrContext->m_varDebugPub.m_Inited = 0;
}

/*
==============
Scr_ClearEntityNum
==============
*/
void Scr_ClearEntityNum(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum)
{
  if ( scrContext->m_Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6935, ASSERT_TYPE_ASSERT, "( scrContext.m_Instance == SCRIPTINSTANCE_SERVER )", (const char *)&queryFormat, "scrContext.m_Instance == SCRIPTINSTANCE_SERVER") )
    __debugbreak();
  Scr_ClearEntityNumForLocalClient(scrContext, entnum, classnum, LOCAL_CLIENT_0);
}

/*
==============
Scr_ClearEntityNumForLocalClient
==============
*/
void Scr_ClearEntityNumForLocalClient(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum, LocalClientNum_t localClientNum)
{
  unsigned int entArrayId; 
  unsigned int ArrayVariable; 
  unsigned int Object; 
  __int64 v11; 
  ObjectVariableValue *v12; 
  __int64 v13; 

  if ( scrContext->m_varPub.bInited )
  {
    entArrayId = scrContext->m_varPub.m_classMap[(unsigned __int8)classnum].entArrayId;
    if ( !entArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6949, ASSERT_TYPE_ASSERT, "( entArrayId )", (const char *)&queryFormat, "entArrayId") )
      __debugbreak();
    if ( classnum != ENTITY_CLASS_SCRIPTABLE && entnum > 0xFFFF )
    {
      LODWORD(v13) = entnum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4507, ASSERT_TYPE_ASSERT, "( entnum ) <= ( 0xffff )", "entnum <= USHRT_MAX\n\t%i, %i", v13, 0xFFFF) )
        __debugbreak();
    }
    ArrayVariable = FindArrayVariable(scrContext, entArrayId, entnum);
    if ( ArrayVariable )
    {
      Object = FindObject(scrContext, ArrayVariable);
      v11 = Object;
      if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6958, ASSERT_TYPE_ASSERT, "( entId )", (const char *)&queryFormat, "entId") )
        __debugbreak();
      v12 = &scrContext->m_varGlob.objectVariableValue[v11];
      if ( LOBYTE(v12->w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6964, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_ENTITY )", (const char *)&queryFormat, "entryValue->GetType() == VAR_ENTITY") )
        __debugbreak();
      if ( v12->u.f.next != entnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6965, ASSERT_TYPE_ASSERT, "( entryValue->GetEntnum() == entnum )", (const char *)&queryFormat, "entryValue->GetEntnum() == entnum") )
        __debugbreak();
      if ( BYTE1(v12->w.type) != classnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6966, ASSERT_TYPE_ASSERT, "( entryValue->GetEntityClass() == classnum )", (const char *)&queryFormat, "entryValue->GetEntityClass() == classnum") )
        __debugbreak();
      if ( BYTE2(v12->w.entInfo) - 1 != localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6967, ASSERT_TYPE_ASSERT, "( entryValue->GetLocalClientNum() == localClientNum )", (const char *)&queryFormat, "entryValue->GetLocalClientNum() == localClientNum") )
        __debugbreak();
      Scr_CancelNotifyList(scrContext, v11);
      if ( scrContext->m_varGlob.objectVariableChildren[v11].firstChild )
        ClearObjectInternal(scrContext, v11);
    }
  }
}

/*
==============
Scr_ClearThread
==============
*/
void Scr_ClearThread(scrContext_t *scrContext, unsigned int parentId)
{
  __int64 v2; 
  ObjectVariableValue *v4; 

  v2 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3841, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  v4 = &scrContext->m_varGlob.objectVariableValue[v2];
  if ( (unsigned __int8)(LOBYTE(v4->w.type) - 17) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3844, ASSERT_TYPE_ASSERT, "( ( parentValue->GetType() >= VAR_THREAD) && ( parentValue->GetType() <= VAR_CHILD_THREAD) )", (const char *)&queryFormat, "( parentValue->GetType() >= VAR_THREAD) && ( parentValue->GetType() <= VAR_CHILD_THREAD)") )
    __debugbreak();
  if ( scrContext->m_varGlob.objectVariableChildren[v2].firstChild )
    ClearObjectInternal(scrContext, v2);
  RemoveRefToObject(scrContext, v4->u.f.next);
}

/*
==============
Scr_ClearVector
==============
*/
void Scr_ClearVector(scrContext_t *scrContext, VariableValue *value)
{
  VariableValue *v3; 
  __int64 i; 

  v3 = value + 2;
  for ( i = 2i64; i >= 0; --i )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)v3->type, v3->u);
    --v3;
  }
  value->type = VAR_UNDEFINED;
}

/*
==============
Scr_ClearWaitTime
==============
*/
void Scr_ClearWaitTime(scrContext_t *scrContext, unsigned int startLocalId)
{
  ObjectVariableValue *v2; 

  v2 = &scrContext->m_varGlob.objectVariableValue[startLocalId];
  if ( LOBYTE(v2->w.type) != 19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3923, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_TIME_THREAD )", (const char *)&queryFormat, "entryValue->GetType() == VAR_TIME_THREAD") )
    __debugbreak();
  v2->w.type &= 0xFFFFFF11;
  v2->w.type |= 0x11u;
}

/*
==============
Scr_CloneSpawnerIntoEnt
==============
*/
void Scr_CloneSpawnerIntoEnt(scrContext_t *scrContext, int fromEntnum, int toEntnum)
{
  unsigned int EntityId; 
  unsigned int v7; 
  unsigned int v8; 

  if ( scrContext->m_Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7902, ASSERT_TYPE_ASSERT, "(scrContext.m_Instance == SCRIPTINSTANCE_SERVER)", (const char *)&queryFormat, "scrContext.m_Instance == SCRIPTINSTANCE_SERVER") )
    __debugbreak();
  EntityId = Scr_FindEntityId(scrContext, fromEntnum, ENTITY_CLASS_SPAWNER, LOCAL_CLIENT_0);
  v7 = EntityId;
  if ( EntityId && FindFirstSibling(scrContext, EntityId) )
  {
    v8 = Scr_FindEntityId(scrContext, toEntnum, ENTITY_CLASS_GENTITY, LOCAL_CLIENT_0);
    if ( !v8 )
    {
      v8 = Scr_GetEntityId(scrContext, toEntnum, ENTITY_CLASS_GENTITY, LOCAL_CLIENT_0);
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7914, ASSERT_TYPE_ASSERT, "( toEntId )", (const char *)&queryFormat, "toEntId") )
        __debugbreak();
    }
    CloneEntity(scrContext, v7, v8, 0);
  }
}

/*
==============
Scr_CopyEntityNum
==============
*/
void Scr_CopyEntityNum(scrContext_t *scrContext, int fromEntnum, int toEntnum)
{
  unsigned int EntityId; 
  unsigned int v7; 
  unsigned int v8; 

  if ( scrContext->m_Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7959, ASSERT_TYPE_ASSERT, "(scrContext.m_Instance == SCRIPTINSTANCE_SERVER)", (const char *)&queryFormat, "scrContext.m_Instance == SCRIPTINSTANCE_SERVER") )
    __debugbreak();
  EntityId = Scr_FindEntityId(scrContext, fromEntnum, ENTITY_CLASS_GENTITY, LOCAL_CLIENT_0);
  v7 = EntityId;
  if ( EntityId && FindFirstSibling(scrContext, EntityId) )
  {
    if ( Scr_FindEntityId(scrContext, toEntnum, ENTITY_CLASS_GENTITY, LOCAL_CLIENT_0) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7965, ASSERT_TYPE_ASSERT, "( !Scr_FindEntityId( scrContext, toEntnum, ENTITY_CLASS_GENTITY, LOCAL_CLIENT_0 ) )", (const char *)&queryFormat, "!Scr_FindEntityId( scrContext, toEntnum, ENTITY_CLASS_GENTITY, LOCAL_CLIENT_0 )") )
        __debugbreak();
    }
    v8 = Scr_GetEntityId(scrContext, toEntnum, ENTITY_CLASS_GENTITY, LOCAL_CLIENT_0);
    CopyEntity(scrContext, v7, v8);
  }
}

/*
==============
Scr_DrawDebugVariablesForEntity
==============
*/
void Scr_DrawDebugVariablesForEntity(scrContext_t *scrContext, unsigned int entityNum, const vec3_t *origin, const vec4_t *textColor, float fontSize)
{
  const char *m_scriptPos; 
  unsigned int EntityId; 
  __int64 v17; 
  size_t AllVariableField; 
  const char *v19; 
  unsigned int *v25; 
  unsigned int v26; 
  unsigned __int8 type; 
  unsigned __int8 v28; 
  unsigned int Variable; 
  const char *CanonicalString; 
  const char *v31; 
  unsigned int outparamcount; 
  VariableValue out; 
  VariableValue *top; 
  vec3_t xyz; 
  unsigned int names[512]; 
  char s[128]; 
  char v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<trigger draw variable>";
  _RSI = origin;
  if ( scrContext->m_Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8814, ASSERT_TYPE_ASSERT, "(scrContext.m_Instance == SCRIPTINSTANCE_SERVER)", (const char *)&queryFormat, "scrContext.m_Instance == SCRIPTINSTANCE_SERVER") )
    __debugbreak();
  EntityId = Scr_GetEntityId(scrContext, entityNum, ENTITY_CLASS_GENTITY, LOCAL_CLIENT_0);
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+940h+xyz], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
  }
  v17 = EntityId;
  __asm
  {
    vmovss  dword ptr [rsp+940h+xyz+8], xmm0
    vmovss  dword ptr [rsp+940h+xyz+4], xmm1
  }
  AllVariableField = Scr_FindAllVariableField(scrContext, EntityId, names);
  qsort(names, AllVariableField, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)Scr_CompareCanonicalStrings);
  v19 = j_va("entity: %d", entityNum);
  __asm
  {
    vmovss  xmm6, [rbp+840h+fontSize]
    vmovaps xmm2, xmm6; scale
  }
  G_Main_AddDebugString(&xyz, textColor, *(float *)&_XMM2, v19);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+940h+xyz+8]
    vmulss  xmm7, xmm6, cs:__real@41400000
    vsubss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rsp+940h+xyz+8], xmm1
  }
  if ( (_DWORD)AllVariableField )
  {
    outparamcount = scrContext->m_vmPub.outparamcount;
    v25 = names;
    top = scrContext->m_vmPub.top;
    do
    {
      v26 = *v25;
      scrContext->m_vmPub.outparamcount = 0;
      if ( !(_DWORD)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4899, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
        __debugbreak();
      type = scrContext->m_varGlob.objectVariableValue[v17].w.type;
      if ( (type == 26 || type < 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4900, ASSERT_TYPE_ASSERT, "( IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] ) )", (const char *)&queryFormat, "IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] )") )
        __debugbreak();
      v28 = scrContext->m_varGlob.objectVariableValue[v17].w.type;
      if ( (v28 <= 0x10u || v28 == 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4901, ASSERT_TYPE_ASSERT, "( (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_OBJECT && scrContext.m_varGlob.objectVariableValue[parentId].GetType() < VAR_FIRST_NONFIELD_OBJECT) || (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_DEAD_OBJECT) )", (const char *)&queryFormat, "(scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_OBJECT && scrContext.m_varGlob.objectVariableValue[parentId].GetType() < VAR_FIRST_NONFIELD_OBJECT) || (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_DEAD_OBJECT)") )
        __debugbreak();
      Variable = FindVariable(scrContext, v17, v26);
      if ( Variable )
      {
        Scr_EvalVariable_Out(scrContext, Variable, &out);
      }
      else if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v17].w.type) == 23 )
      {
        Scr_EvalVariableEntityField_Out_1_(scrContext, v17, v26, &out);
      }
      else
      {
        out.type = VAR_UNDEFINED;
      }
      if ( (unsigned __int8)(out.type - 2) <= 4u )
      {
        if ( (CanonicalString = Scr_GetCanonicalString(*v25), Scr_GetValueString(scrContext, 0, &out, 128, s), strncmp(s, "\"\"", 2ui64)) && strncmp(s, "0", 1ui64) && strncmp(s, "(0, 0, 0)", 9ui64) && strcmp_0(CanonicalString, "anglelerprate") && strcmp_0(CanonicalString, "realorigin") && strcmp_0(CanonicalString, "code_classname") || !strncmp(CanonicalString, "script_", 7ui64) )
        {
          v31 = j_va("%s: %s", CanonicalString, s);
          __asm { vmovaps xmm2, xmm6; scale }
          G_Main_AddDebugString(&xyz, textColor, *(float *)&_XMM2, v31);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+940h+xyz+8]
            vsubss  xmm1, xmm0, xmm7
            vmovss  dword ptr [rsp+940h+xyz+8], xmm1
          }
        }
      }
      RemoveRefToValue(scrContext, (unsigned __int8)out.type, out.u);
      scrContext->m_vmPub.outparamcount = outparamcount;
      ++v25;
      scrContext->m_vmPub.top = top;
      --AllVariableField;
    }
    while ( AllVariableField );
  }
  _R11 = &v44;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Scr_DumpNotify
==============
*/
void Scr_DumpNotify(const scrContext_t *scrContext, unsigned int notifyListOwnerId, scr_string_t stringValue, const char *source)
{
  int integer; 
  ObjectVariableValue *v8; 
  int Time; 
  const char *v10; 
  const char *InstanceName; 
  int v12; 

  integer = script_notifydump->current.integer;
  if ( integer >= 0 )
  {
    v8 = &scrContext->m_varGlob.objectVariableValue[notifyListOwnerId];
    if ( __PAIR16__(BYTE1(v8->w.type), v8->w.type) == 23 && v8->u.f.next == integer )
    {
      Time = G_Main_GetTime();
      v10 = SL_ConvertToString(stringValue);
      InstanceName = ScriptContext_GetInstanceName(scrContext);
      v12 = Time;
      Com_Printf(0, "%s: %s notify: '%s'  ^7level time:%d \n", InstanceName, source, v10, v12);
    }
  }
}

/*
==============
Scr_DumpScriptMemoryUsage
==============
*/
void Scr_DumpScriptMemoryUsage(const scrContext_t *scrContext)
{
  unsigned int v2; 
  __int64 v3; 

  Com_Printf(0x10000, "***************************************\n");
  v2 = scrContext->m_variableListParentSize - 1;
  Com_Printf(0x10000, "Total objects (parents) used %d of dev: %d (rel: %d)\n", scrContext->m_varPub.numScriptObjects, scrContext->m_variableListParentSizeDev, v2);
  LODWORD(v3) = scrContext->m_variableListChildSize - 1;
  Com_Printf(0x10000, "Total variables (children) used %d of dev: %d (rel: %d)\n", scrContext->m_varPub.numScriptValues, scrContext->m_variableListChildSizeDev, v3);
  Com_Printf(0x10000, "***************************************\n");
}

/*
==============
Scr_DumpScriptThreads
==============
*/
void Scr_DumpScriptThreads(scrContext_t *scrContext, bool bError)
{
  unsigned int m_variableListChildSize; 
  int v9; 
  ChildVariableValue::TypeAndName *p_tn; 
  __int64 v12; 
  int v13; 
  char v14; 
  ChildVariableValue *childVariableValue; 
  char *v16; 
  __int64 v17; 
  int v18; 
  int v20; 
  ChildVariableValue::FreeListOrVariableUnion u; 
  __int64 v22; 
  char *v23; 
  __int64 v24; 
  int v25; 
  __int64 v26; 
  char v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  _BYTE *v31; 
  int v32; 
  unsigned int ParentLocalId; 
  VariableUnion v35; 
  int v36; 
  _DWORD *v37; 
  int v38; 
  int v39; 
  __int64 v40; 
  char *v41; 
  __int64 v42; 
  int v43; 
  __int64 v47; 
  unsigned int v48; 
  ScriptCodePos *v49; 
  __int64 v53; 
  char type; 
  unsigned int EntNum; 
  __int64 EntClassId; 
  char v58; 
  char v59; 
  int v66; 
  ScriptCodePos *v67; 
  int v72; 
  __int64 v75; 
  const char **p_name; 
  __int64 v79; 
  unsigned int v80; 
  unsigned int v81; 
  unsigned int i; 
  ChildVariableValue *v84; 
  unsigned int NumScriptThreads; 
  char *fmt; 
  __int64 v90; 
  int v92; 
  unsigned int v93; 
  char *v94; 
  __int64 v95; 
  __int64 v96; 
  char *Base; 
  ChildVariableValue *v98; 
  __int64 v99; 
  ObjectVariableValue *objectVariableValue; 
  __int64 v101[64]; 
  int v102; 
  int next; 
  __int64 v104[8]; 
  __int64 v105[8]; 
  __int64 v106[8]; 

  m_variableListChildSize = scrContext->m_variableListChildSize;
  v9 = 0;
  if ( m_variableListChildSize )
  {
    p_tn = &scrContext->m_varGlob.childVariableValue->tn;
    v96 = scrContext->m_variableListChildSize;
    v12 = m_variableListChildSize;
    do
    {
      v13 = v9 + 1;
      v14 = *(_BYTE *)p_tn & 0x3F;
      p_tn += 16;
      if ( v14 != 12 )
        v13 = v9;
      v9 = v13;
      --v12;
    }
    while ( v12 );
    if ( v13 )
    {
      Base = (char *)Mem_Virtual_TryAlloc(528i64 * v13, "Scr_DumpScriptThreads", TRACK_DEBUG);
      if ( Base )
      {
        childVariableValue = scrContext->m_varGlob.childVariableValue;
        v16 = Base;
        v17 = v96;
        v18 = 0;
        __asm
        {
          vmovaps [rsp+3D0h+var_40], xmm6
          vmovaps [rsp+3D0h+var_60], xmm8
          vmovaps [rsp+3D0h+var_70], xmm9
          vmovaps [rsp+3D0h+var_80], xmm10
        }
        v98 = childVariableValue;
        do
        {
          if ( (*(_BYTE *)&childVariableValue->tn & 0x3F) == 12 )
          {
            _RSI = v16;
            v20 = 0;
            v94 = v16 + 528;
            v92 = v18 + 1;
            u = v98->u;
            v102 = 0;
            v22 = *(unsigned int *)(u.u.scriptCodePosValue + 12);
            v23 = (char *)(u.u.scriptCodePosValue + 17);
            v24 = *(_QWORD *)u.u.vectorValue;
            v25 = *(unsigned __int16 *)(u.u.scriptCodePosValue + 8);
            v99 = *(_QWORD *)u.u.vectorValue;
            v26 = v22;
            objectVariableValue = scrContext->m_varGlob.objectVariableValue;
            if ( (unsigned __int8)(LOBYTE(objectVariableValue[v22].w.type) - 17) > 3u )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4447, ASSERT_TYPE_ASSERT, "( (entryValue->GetType() >= VAR_THREAD) && (entryValue->GetType() <= VAR_CHILD_THREAD) )", (const char *)&queryFormat, "(entryValue->GetType() >= VAR_THREAD) && (entryValue->GetType() <= VAR_CHILD_THREAD)") )
                __debugbreak();
              v24 = v99;
            }
            next = objectVariableValue[v26].u.f.next;
            while ( v25 )
            {
              v27 = *v23;
              --v25;
              v28 = *(_QWORD *)(v23 + 1);
              v23 += 9;
              if ( v27 == 7 )
              {
                v101[v20] = v28;
                v20 = ++v102;
              }
            }
            v29 = v20;
            v30 = *(unsigned __int16 *)(u.u.scriptCodePosValue + 8);
            v101[v29] = v24;
            v31 = (_BYTE *)(v30 + u.u.scriptCodePosValue + 8 * v30 + 17);
            v32 = v102 + 1;
            *(float *)&_XMM0 = Scr_GetObjectUsage(scrContext, *(_DWORD *)(u.u.scriptCodePosValue + 12));
            __asm { vmovaps xmm6, xmm0 }
            *(float *)&_XMM0 = Scr_GetEndonUsage(scrContext, *(_DWORD *)(u.u.scriptCodePosValue + 12));
            __asm { vmovss  dword ptr [rsi+208h], xmm0 }
            ParentLocalId = *(_DWORD *)(u.u.scriptCodePosValue + 12);
            while ( (_DWORD)v30 )
            {
              v35 = *(VariableUnion *)(v31 - 8);
              v31 -= 9;
              LODWORD(v30) = v30 - 1;
              if ( *v31 == 7 )
              {
                ParentLocalId = GetParentLocalId(scrContext, ParentLocalId);
                Scr_GetObjectUsage(scrContext, ParentLocalId);
                __asm { vaddss  xmm6, xmm6, xmm0 }
                *(float *)&_XMM0 = Scr_GetEndonUsage(scrContext, ParentLocalId);
                __asm
                {
                  vaddss  xmm0, xmm0, dword ptr [rsi+208h]
                  vmovss  dword ptr [rsi+208h], xmm0
                }
              }
              else
              {
                Scr_GetEntryUsage(scrContext, (unsigned __int8)*v31, v35);
                __asm { vaddss  xmm6, xmm6, xmm0 }
              }
            }
            v36 = next;
            v37 = _RSI + 512;
            v38 = 0;
            *((_DWORD *)_RSI + 128) = v32;
            *((_DWORD *)_RSI + 131) = v36;
            v39 = v32 - 1;
            v102 = v32 - 1;
            __asm { vmovss  dword ptr [rsi+204h], xmm6 }
            if ( v32 > 0 )
            {
              do
              {
                v40 = v39;
                _RSI += 8;
                ++v38;
                --v39;
                *((_QWORD *)_RSI - 1) = v101[v40];
              }
              while ( v38 < *v37 );
            }
            v18 = v92;
            v16 = v94;
            v17 = v96;
          }
          childVariableValue = v98 + 1;
          --v17;
          ++v98;
          v96 = v17;
        }
        while ( v17 );
        v41 = Base;
        v42 = v18;
        v95 = v18;
        qsort(Base, v18, 0x210ui64, (_CoreCrtNonSecureSearchSortCompareFunction)ThreadInfoCompare);
        Com_Printf(65559, "********************************\n");
        v43 = 0;
        memset(v105, 0, sizeof(v105));
        memset(v104, 0, sizeof(v104));
        memset(v106, 0, sizeof(v106));
        __asm
        {
          vxorps  xmm8, xmm8, xmm8
          vxorps  xmm9, xmm9, xmm9
          vxorps  xmm10, xmm10, xmm10
        }
        if ( v42 > 0 )
        {
          __asm { vmovaps [rsp+3D0h+var_50], xmm7 }
          v47 = 0i64;
          do
          {
            v48 = 0;
            v49 = (ScriptCodePos *)&v41[528 * v47];
            __asm
            {
              vmovaps xmm6, xmm8
              vmovaps xmm7, xmm8
            }
            Com_Printf(65559, "selves: ");
            _R14 = (char *)&v49[64].m_genericPos + 4;
            do
            {
              v53 = *((unsigned int *)_R14 + 2);
              __asm
              {
                vaddss  xmm6, xmm6, dword ptr [r14]
                vaddss  xmm7, xmm7, dword ptr [r14+4]
              }
              v93 = v48 + 1;
              if ( (_DWORD)v53 == scrContext->m_varPub.levelId )
              {
                Com_Printf(65559, "level  ");
              }
              else if ( (_DWORD)v53 == scrContext->m_varPub.animId )
              {
                Com_Printf(65559, "anim  ");
              }
              else
              {
                if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v53].w.type) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
                  __debugbreak();
                type = scrContext->m_varGlob.objectVariableValue[v53].w.type;
                if ( type == 23 )
                {
                  EntNum = Scr_GetEntNum(scrContext, v53);
                  EntClassId = (unsigned int)Scr_GetEntClassId(scrContext, v53);
                  Com_Printf(65559, "%c%i  ", EntClassId, EntNum);
                }
                else
                {
                  if ( type == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
                    __debugbreak();
                  v58 = scrContext->m_varGlob.objectVariableValue[v53].w.type;
                  if ( v58 == 21 )
                  {
                    Com_Printf(65559, "s%i  ", (unsigned int)v53);
                  }
                  else
                  {
                    if ( v58 == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
                      __debugbreak();
                    v59 = scrContext->m_varGlob.objectVariableValue[v53].w.type;
                    if ( v59 == 24 )
                    {
                      Com_Printf(65559, "a%i  ", (unsigned int)v53);
                    }
                    else
                    {
                      if ( v59 == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
                        __debugbreak();
                      Com_Printf(65559, "%d:%i  ", LOBYTE(scrContext->m_varGlob.objectVariableValue[v53].w.type), (unsigned int)v53);
                    }
                  }
                }
              }
              if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v53].w.type) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
                __debugbreak();
              if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v53].w.type) == 23 && Scr_GetEntClassId(scrContext, v53) == 101 && Scr_GetEntNum(scrContext, v53) < 0x10 )
              {
                LODWORD(_RAX) = Scr_GetEntNum(scrContext, v53);
                __asm { vmovss  xmm0, dword ptr [r14] }
                _RAX = (unsigned int)_RAX;
                __asm
                {
                  vaddss  xmm1, xmm0, dword ptr [rbp+rax*4+2D0h+var_110]
                  vmovss  xmm0, dword ptr [r14+4]
                }
                ++*((_DWORD *)v106 + (unsigned int)_RAX);
                __asm
                {
                  vmovss  dword ptr [rbp+rax*4+2D0h+var_110], xmm1
                  vaddss  xmm1, xmm0, dword ptr [rbp+rax*4+2D0h+var_150]
                  vmovss  dword ptr [rbp+rax*4+2D0h+var_150], xmm1
                }
              }
              ++v43;
              ++v47;
              _R14 += 528;
              if ( v47 >= v95 )
                break;
              v48 = v93;
            }
            while ( !ThreadInfoCompare(v49, &Base[528 * v43]) );
            __asm
            {
              vcvttss2si eax, xmm7
              vcvttss2si r9d, xmm6
            }
            LODWORD(fmt) = _EAX;
            __asm
            {
              vaddss  xmm9, xmm9, xmm6
              vaddss  xmm10, xmm10, xmm7
            }
            Com_Printf(65559, "\ncount: %d, var usage: %d, endon usage: %d\n", v93, _R9, fmt);
            Scr_PrintPrevCodePos(scrContext, 65559, (ScriptCodePos)v49->m_scriptPos, 0, bError);
            v66 = 1;
            if ( SLODWORD(v49[64].m_scriptPos) > 1 )
            {
              v67 = v49 + 1;
              do
              {
                Com_Printf(65559, "called from:\n");
                Scr_PrintPrevCodePos(scrContext, 65559, (ScriptCodePos)v67->m_scriptPos, 0, bError);
                ++v66;
                ++v67;
              }
              while ( v66 < SLODWORD(v49[64].m_scriptPos) );
            }
            v41 = Base;
          }
          while ( v47 < v95 );
          __asm { vmovaps xmm7, [rsp+3D0h+var_50] }
        }
        Mem_Virtual_Free(v41);
        Com_Printf(65559, "********************************\n");
        __asm
        {
          vcvttss2si r9d, xmm10
          vcvttss2si r8d, xmm9
        }
        Com_Printf(65559, "var usage: %d, endon usage: %d\n", _R8, _R9);
        Com_Printf(65559, "\n");
        __asm { vmovaps xmm10, [rsp+3D0h+var_80] }
        v72 = 0;
        __asm { vmovaps xmm9, [rsp+3D0h+var_70] }
        _RBX = 0i64;
        do
        {
          v75 = *(unsigned int *)((char *)v106 + _RBX);
          if ( (_DWORD)v75 )
          {
            __asm
            {
              vcvttss2si ecx, dword ptr [rbp+rbx+2D0h+var_110]
              vcvttss2si eax, dword ptr [rbp+rbx+2D0h+var_150]
            }
            LODWORD(v90) = _EAX;
            LODWORD(fmt) = _ECX;
            Com_Printf(65559, "e%d ... count: %d, var usage: %d, endon usage: %d\n", (unsigned int)v72, v75, fmt, v90);
          }
          else
          {
            __asm
            {
              vcomiss xmm8, dword ptr [rbp+rbx+2D0h+var_110]
              vcomiss xmm8, dword ptr [rbp+rbx+2D0h+var_150]
            }
          }
          Com_Printf(65559, "\n");
          ++v72;
          _RBX += 4i64;
        }
        while ( v72 < 16 );
        p_name = &scrContext->m_varPub.m_classMap[0].name;
        v79 = 11i64;
        do
        {
          v80 = *((_DWORD *)p_name - 3);
          if ( v80 )
          {
            v81 = 0;
            __asm { vmovaps xmm6, xmm8 }
            for ( i = FindFirstSibling(scrContext, v80); i; i = v84->nextSibling )
            {
              ++v81;
              v84 = &scrContext->m_varGlob.childVariableValue[i];
              if ( (*(_BYTE *)&v84->tn & 0x3F) == 1 )
              {
                Scr_GetObjectUsage(scrContext, v84->u.f.prev);
                __asm { vaddss  xmm6, xmm6, xmm0 }
              }
            }
            __asm { vcvttss2si eax, xmm6 }
            LODWORD(fmt) = _EAX;
            Com_Printf(65559, "ent type '%s'... count: %d, var usage: %d\n", *p_name, v81, fmt);
          }
          p_name += 3;
          --v79;
        }
        while ( v79 );
        Com_Printf(65559, "********************************\n");
        Com_Printf(65559, "num vars:    %d\n", scrContext->m_varPub.numScriptValues + scrContext->m_varPub.numScriptObjects);
        NumScriptThreads = Scr_GetNumScriptThreads(scrContext);
        Com_Printf(65559, "num threads: %d\n", NumScriptThreads);
        Com_Printf(65559, "********************************\n");
        __asm
        {
          vmovaps xmm8, [rsp+3D0h+var_60]
          vmovaps xmm6, [rsp+3D0h+var_40]
        }
      }
      else
      {
        Com_Printf(23, "Cannot dump script threads: out of memory\n");
      }
    }
  }
}

/*
==============
Scr_DumpScriptVariables
==============
*/
void Scr_DumpScriptVariables(const scrContext_t *scrContext, bool spreadsheet, bool summary, bool total, bool functionSummary, bool lineSort, const char *fileName, const char *functionName, unsigned int minCount, bool parentVars, bool childVars)
{
  const scrContext_t *v11; 
  char *v12; 
  char *v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  ScriptCodePos *v17; 
  __int64 v18; 
  unsigned int v19; 
  ScriptCodePos v20; 
  const char *CodePosFunctionName; 
  const char *CodePosFileName; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned int v26; 
  ScriptCodePos v27; 
  const char *v28; 
  const char *v29; 
  unsigned int *v30; 
  int (__cdecl *v31)(const void *, const void *); 
  unsigned int *v32; 
  signed __int64 v33; 
  int v34; 
  int v35; 
  __int64 v36; 
  char *v37; 
  int v38; 
  char *v39; 
  signed __int64 v40; 
  int (__cdecl *v41)(const void *, const void *); 
  bool v42; 
  bool v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int *v46; 
  unsigned int v47; 
  unsigned __int8 v48; 
  _DWORD *v49; 
  const void *v50; 
  __int64 v51; 
  const char *v52; 
  const char *v53; 
  __int64 v54; 
  __int64 v55; 
  int v57; 
  unsigned int m_variableListParentSize; 
  unsigned int m_variableListChildSize; 
  __int64 v61; 
  int v62; 
  char *Base; 
  __int64 v66; 
  unsigned int v67; 

  v11 = scrContext;
  if ( !scrContext->m_varDebugPub.m_Inited || !scrContext->m_varPub.developer && (spreadsheet || fileName || functionName || lineSort || functionSummary || minCount) )
    return;
  v12 = (char *)Mem_Virtual_TryAlloc(40i64 * (scrContext->m_variableListChildSize + scrContext->m_variableListParentSize), "Scr_DumpScriptVariables", TRACK_DEBUG);
  Base = v12;
  v13 = v12;
  if ( !v12 )
  {
    Com_Printf(23, "Cannot dump script variables: out of memory\n");
    return;
  }
  v14 = 0i64;
  v15 = 1i64;
  v57 = 0;
  if ( parentVars )
  {
    v16 = 0;
    m_variableListParentSize = v11->m_variableListParentSize;
    if ( m_variableListParentSize )
    {
      v17 = (ScriptCodePos *)(v12 + 16);
      v18 = 0i64;
      v19 = v11->m_variableListParentSize;
      do
      {
        v20.m_scriptPos = v11->m_varDebugPub.objectVarUsage[v18].m_scriptPos;
        if ( v20.m_scriptPos )
        {
          v17[-2].m_genericPos = 0i64;
          v17[-1].m_genericPos = 0i64;
          v17->m_genericPos = 0i64;
          v17[1].m_genericPos = 0i64;
          v17[2].m_genericPos = 0i64;
          LOBYTE(v17[2].m_scriptPos) = 1;
          if ( (!fileName || Scr_PrevCodePosFileNameMatches(v11, v20, fileName)) && (functionName || functionSummary ? (CodePosFunctionName = Scr_PrevCodePosFunctionName(v11, v20)) : (CodePosFunctionName = NULL), (v17->m_genericPos = (unsigned __int64)CodePosFunctionName, !functionName) || CodePosFunctionName && I_stristr(CodePosFunctionName, functionName)) )
          {
            v17[-2].m_scriptPos = v20.m_scriptPos;
            CodePosFileName = Scr_PrevCodePosFileName(v11, v20);
            v14 = (unsigned int)(v57 + 1);
            v17[-1].m_genericPos = (unsigned __int64)CodePosFileName;
            HIDWORD(v17[1].m_genericPos) = 1;
            LODWORD(v17[1].m_scriptPos) = v16;
            v17 += 5;
            ++v57;
          }
          else
          {
            v14 = (unsigned int)v57;
          }
          v19 = m_variableListParentSize;
        }
        ++v16;
        ++v18;
      }
      while ( v16 < v19 );
      v13 = Base;
    }
  }
  if ( childVars )
  {
    v23 = 0;
    m_variableListChildSize = v11->m_variableListChildSize;
    if ( m_variableListChildSize )
    {
      v24 = 0i64;
      v25 = (__int64)&v13[40 * (int)v14 + 16];
      v26 = v11->m_variableListChildSize;
      do
      {
        v27.m_scriptPos = v11->m_varDebugPub.childVarUsage[v24].m_scriptPos;
        if ( v27.m_scriptPos )
        {
          *(_QWORD *)(v25 - 16) = 0i64;
          *(_QWORD *)(v25 - 8) = 0i64;
          *(_QWORD *)v25 = 0i64;
          *(_QWORD *)(v25 + 8) = 0i64;
          *(_QWORD *)(v25 + 16) = 0i64;
          *(_BYTE *)(v25 + 16) = 2;
          if ( (!fileName || Scr_PrevCodePosFileNameMatches(v11, v27, fileName)) && (functionName || functionSummary ? (v28 = Scr_PrevCodePosFunctionName(v11, v27)) : (v28 = NULL), (*(_QWORD *)v25 = v28, !functionName) || v28 && I_stristr(v28, functionName)) )
          {
            *(ScriptCodePos *)(v25 - 16) = v27;
            v29 = Scr_PrevCodePosFileName(v11, v27);
            v14 = (unsigned int)(v57 + 1);
            *(_QWORD *)(v25 - 8) = v29;
            *(_DWORD *)(v25 + 12) = 1;
            *(_DWORD *)(v25 + 8) = v23;
            v25 += 40i64;
            ++v57;
          }
          else
          {
            v14 = (unsigned int)v57;
          }
          v26 = m_variableListChildSize;
        }
        ++v23;
        ++v24;
      }
      while ( v23 < v26 );
    }
  }
  if ( total )
  {
    Com_Printf(0, "num vars:          %d\n", v14);
    v30 = (unsigned int *)Base;
    goto LABEL_115;
  }
  if ( summary )
  {
    v31 = (int (__cdecl *)(const void *, const void *))VariableInfoFileNameCompare;
  }
  else
  {
    v31 = (int (__cdecl *)(const void *, const void *))VariableInfoCompare;
    if ( functionSummary )
      v31 = (int (__cdecl *)(const void *, const void *))VariableInfoFunctionCompare;
  }
  v32 = (unsigned int *)Base;
  if ( !noSort )
    qsort(Base, (int)v14, 0x28ui64, v31);
  v33 = v57;
  v34 = 0;
  v35 = 0;
  if ( v57 > 0 )
  {
    v36 = v57;
    v61 = v57;
    v37 = Base + 28;
    do
    {
      if ( *(_DWORD *)v37 )
      {
        v38 = v35 + 1;
        if ( v15 < v33 )
        {
          v39 = v37 + 40;
          v40 = v33 - v15;
          do
          {
            if ( *(_DWORD *)v39 && v37[4] == v39[4] && !((int (__fastcall *)(const void *, const void *))v31)(&Base[40 * v35], &Base[40 * v38]) )
            {
              ++*(_DWORD *)v37;
              --*(_DWORD *)v39;
            }
            ++v38;
            v39 += 40;
            --v40;
          }
          while ( v40 );
          v36 = v61;
          v33 = v57;
        }
      }
      ++v35;
      v37 += 40;
      ++v15;
      v61 = --v36;
    }
    while ( v36 );
    v11 = scrContext;
    v34 = 0;
    v32 = (unsigned int *)Base;
  }
  if ( !noSort )
  {
    v41 = (int (__cdecl *)(const void *, const void *))VariableInfoFileLineCompare;
    if ( !lineSort )
      v41 = (int (__cdecl *)(const void *, const void *))VariableInfoCountCompare;
    qsort(v32, v33, 0x28ui64, v41);
  }
  Com_Printf(65559, "********************************\n", v14);
  if ( spreadsheet )
  {
    if ( s_showCodePos )
      Com_Printf(0x10000, "index\tcodePos\t");
    v42 = summary;
    if ( !summary )
    {
      v43 = functionSummary;
      if ( functionSummary )
        Com_Printf(0x10000, "type\tcount\tfile\tfunction\n");
      else
        Com_Printf(0x10000, "type\tcount\tfile\tline\tsource\tcol\n");
      goto LABEL_81;
    }
    Com_Printf(0x10000, "type\tcount\tfile\n");
  }
  else
  {
    v42 = summary;
  }
  v43 = functionSummary;
LABEL_81:
  v44 = 0;
  v66 = 0i64;
  v45 = 0;
  v67 = 0;
  if ( v33 <= 0 )
    goto LABEL_111;
  v46 = v32 + 7;
  do
  {
    v47 = *v46;
    if ( *v46 )
    {
      v34 += v47;
      v62 = v34;
      if ( v47 >= minCount )
      {
        v45 += v47;
        if ( !*((_BYTE *)v46 + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2630, ASSERT_TYPE_ASSERT, "(pInfo->varDebugType)", (const char *)&queryFormat, "pInfo->varDebugType") )
          __debugbreak();
        v48 = *((_BYTE *)v46 + 4);
        if ( v48 >= 3u )
        {
          LODWORD(v55) = 3;
          LODWORD(v54) = v48;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2631, ASSERT_TYPE_ASSERT, "(unsigned)( pInfo->varDebugType ) < (unsigned)( VAR_DEBUG_TYPE_COUNT )", "pInfo->varDebugType doesn't index VAR_DEBUG_TYPE_COUNT\n\t%i not in [0, %i)", v54, v55) )
            __debugbreak();
        }
        v49 = (_DWORD *)&v66 + *((unsigned __int8 *)v46 + 4);
        *v49 += *v46;
        if ( s_showCodePos )
        {
          v50 = *(const void **)(v46 - 7);
          v51 = *(v46 - 1);
          if ( v50 )
            Com_Printf(0x10000, " %d\t*%p*\t", v51, v50);
          else
            Com_Printf(0x10000, " %d\t*NULL*\t", v51);
        }
        if ( spreadsheet )
        {
          Com_Printf(0x10000, "%s\t%d\t", varDebugTypeNames[*((unsigned __int8 *)v46 + 4)], *v46);
          Scr_PrintPrevCodePosSpreadSheet(v11, 0x10000, *(ScriptCodePos *)(v46 - 7), v42, v43);
          goto LABEL_109;
        }
        if ( v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2656, ASSERT_TYPE_ASSERT, "(!summary)", (const char *)&queryFormat, "!summary") )
          __debugbreak();
        Com_Printf(0x10000, "type: %s, count: %d\n", varDebugTypeNames[*((unsigned __int8 *)v46 + 4)], *v46);
        v52 = *(const char **)(v46 - 7);
        if ( v52 )
        {
          if ( v52 == &g_EndPos )
          {
            v53 = "<removed thread>\n";
          }
          else
          {
            if ( Scr_IsInOpcodeMemory(v11, *(const char **)(v46 - 7)) )
            {
              Scr_PrintPrevCodePos(v11, 0x10000, *(ScriptCodePos *)(v46 - 7), 0, 1);
LABEL_108:
              v34 = v62;
              goto LABEL_109;
            }
            v53 = j_va("%s\n", v52);
          }
        }
        else
        {
          v53 = "<frozen thread>\n";
        }
        Com_PrintMessage(0x10000, v53, 0);
        goto LABEL_108;
      }
    }
LABEL_109:
    v46 += 10;
    --v33;
  }
  while ( v33 );
  v44 = v67;
  v32 = (unsigned int *)Base;
LABEL_111:
  if ( v57 != v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2688, ASSERT_TYPE_ASSERT, "(num == count)", (const char *)&queryFormat, "num == count") )
    __debugbreak();
  Com_Printf(0x10000, "********************************\n");
  Com_Printf(0x10000, "num vars:          %d\n", v45);
  Com_Printf(0x10000, " parent:           %d\n", HIDWORD(v66));
  Com_Printf(0x10000, "  child:           %d\n", v44);
  Com_Printf(0x10000, "num unlisted vars: %d\n", v11->m_varPub.numScriptValues + v11->m_varPub.numScriptObjects - v45);
  Com_Printf(0x10000, "********************************\n");
  v30 = v32;
LABEL_115:
  Mem_Virtual_Free(v30);
}

/*
==============
Scr_DumpScriptVariablesDefault
==============
*/
void Scr_DumpScriptVariablesDefault(const scrContext_t *scrContext)
{
  Scr_DumpScriptVariables(scrContext, 1, 0, 0, 0, 0, NULL, NULL, 0, 1, 1, 1);
}

/*
==============
Scr_EvalAnd
==============
*/
void Scr_EvalAnd(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  if ( value1->type == VAR_INTEGER && value2->type == VAR_INTEGER )
    value1->u.intValue &= value2->u.intValue;
  else
    Scr_UnmatchingTypesError(scrContext, value1, value2);
}

/*
==============
Scr_EvalArray
==============
*/
void Scr_EvalArray(scrContext_t *scrContext, VariableValue *value, VariableValue *index)
{
  const char *v6; 
  const char *v7; 
  VariableType v8; 
  __int64 v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  VariableType v13; 
  __int64 v14; 
  const char *v15; 
  __int64 v16; 
  unsigned int StringOfSize; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  ObjectVariableValue *v21; 
  const char *NameForType; 
  const char *v23; 
  VariableType type; 
  int intValue; 
  __int64 uintValue; 
  unsigned int Variable; 
  const char *v28; 
  ComErrorCode v29; 
  const char *v30; 
  char str; 
  char v32; 

  if ( value == index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7341, ASSERT_TYPE_ASSERT, "( value != index )", (const char *)&queryFormat, "value != index") )
    __debugbreak();
  switch ( value->type )
  {
    case VAR_POINTER:
      v21 = &scrContext->m_varGlob.objectVariableValue[value->u.uintValue];
      if ( !IsValidObject(v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7393, ASSERT_TYPE_ASSERT, "( IsValidObject( entryValue ) )", (const char *)&queryFormat, "IsValidObject( entryValue )") )
        __debugbreak();
      if ( LOBYTE(v21->w.type) != 24 )
      {
        scrContext->m_varPub.error_index = 1;
        NameForType = Scr_GetNameForType((VariableType)LOBYTE(v21->w.type));
        v23 = j_va("%s is not an array", NameForType);
        Scr_Error(COM_ERR_5255, scrContext, v23);
        return;
      }
      type = index->type;
      intValue = value->u.intValue;
      if ( type == VAR_INTEGER )
      {
        uintValue = index->u.uintValue;
        if ( (unsigned int)(uintValue + 7602176) <= 0xF3FFFF )
        {
          Variable = FindVariable(scrContext, intValue, (uintValue - 0x800000) & 0xFFFFFF);
LABEL_37:
          Scr_EvalVariable_Out(scrContext, Variable, index);
          RemoveRefToObject(scrContext, value->u.intValue);
          return;
        }
        v28 = j_va("array index %d out of range", uintValue);
        v29 = COM_ERR_5247;
      }
      else
      {
        if ( type == VAR_STRING )
        {
          Variable = FindVariable(scrContext, intValue, index->u.intValue);
          SL_RemoveRefToString((scr_string_t)index->u.intValue);
          goto LABEL_37;
        }
        v30 = Scr_GetNameForType(type);
        v28 = j_va("%s is not an array index", v30);
        v29 = COM_ERR_5248;
      }
      Scr_Error(v29, scrContext, v28);
      AddRefToObject(scrContext, intValue);
      Variable = 0;
      goto LABEL_37;
    case VAR_STRING:
      v13 = index->type;
      if ( v13 == VAR_INTEGER )
      {
        v14 = index->u.uintValue;
        if ( (int)v14 < 0 )
          goto LABEL_22;
        v15 = SL_ConvertToString((scr_string_t)value->u.intValue);
        v14 = index->u.intValue;
        v16 = -1i64;
        do
          ++v16;
        while ( v15[v16] );
        if ( (int)v14 >= (int)v16 )
        {
LABEL_22:
          v18 = j_va("string index %d out of range", v14);
          Scr_Error(COM_ERR_5251, scrContext, v18);
        }
        else
        {
          index->type = VAR_STRING;
          str = v15[v14];
          v32 = 0;
          StringOfSize = j_SL_GetStringOfSize(&str, 0, 2ui64, 17);
          Scr_SetStringValue(index, StringOfSize);
          SL_RemoveRefToString((scr_string_t)value->u.intValue);
        }
      }
      else
      {
        v19 = Scr_GetNameForType(v13);
        v20 = j_va("%s is not a string index", v19);
        Scr_Error(COM_ERR_5252, scrContext, v20);
      }
      break;
    case VAR_VECTOR:
      v8 = index->type;
      if ( v8 == VAR_INTEGER )
      {
        v9 = index->u.intValue;
        if ( (unsigned int)v9 >= 3 )
        {
          v10 = j_va("vector index %d out of range", v9);
          Scr_Error(COM_ERR_5253, scrContext, v10);
        }
        else
        {
          index->type = VAR_FLOAT;
          index->u.intValue = *(_DWORD *)(value->u.scriptCodePosValue + 4 * v9);
          RemoveRefToVector(scrContext, value->u.vectorValue);
        }
      }
      else
      {
        v11 = Scr_GetNameForType(v8);
        v12 = j_va("%s is not a vector index", v11);
        Scr_Error(COM_ERR_5254, scrContext, v12);
      }
      break;
    default:
      if ( value->type == VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7415, ASSERT_TYPE_ASSERT, "( value->type != VAR_STACK )", (const char *)&queryFormat, "value->type != VAR_STACK") )
        __debugbreak();
      scrContext->m_varPub.error_index = 1;
      v6 = Scr_GetNameForType(value->type);
      v7 = j_va("%s is not an array, string, or vector", v6);
      Scr_Error(COM_ERR_5256, scrContext, v7);
      break;
  }
}

/*
==============
Scr_EvalArrayRef
==============
*/
__int64 Scr_EvalArrayRef(scrContext_t *scrContext, unsigned int id)
{
  ObjectVariableValue *v3; 
  unsigned int v4; 
  unsigned int ArrayVariable; 
  VariableValue *EntityFieldValue; 
  VariableType type; 
  VariableUnion u; 
  __int64 uintValue; 
  __int64 v10; 
  ChildVariableValue *v11; 
  ChildVariableValue *childVariableValue; 
  const char *m_scriptPos; 
  ObjectVariableValue *v14; 
  const char *v15; 
  const char *v16; 
  unsigned int prev; 
  ObjectVariableValue *v18; 
  const char *NameForType; 
  const char *v20; 
  unsigned int v21; 
  ChildVariableValue::FreeListOrVariableUnion ida; 
  VariableValue result; 
  unsigned int index; 

  if ( id )
  {
    v11 = &scrContext->m_varGlob.childVariableValue[id];
    if ( (*(_BYTE *)&v11->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7478, ASSERT_TYPE_ASSERT, "( IsValidChild( childValue ) )", (const char *)&queryFormat, "IsValidChild( childValue )") )
      __debugbreak();
    type = *(_BYTE *)&v11->tn & 0x3F;
    if ( type )
    {
      ida = v11->u;
$add_array_0:
      if ( type == VAR_POINTER )
      {
        prev = ida.f.prev;
        v18 = &scrContext->m_varGlob.objectVariableValue[ida.f.prev];
        if ( !IsValidObject(v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7520, ASSERT_TYPE_ASSERT, "( IsValidObject( entryValue ) )", (const char *)&queryFormat, "IsValidObject( entryValue )") )
          __debugbreak();
        if ( LOBYTE(v18->w.type) == 24 )
        {
          if ( v18->u.o.refCount )
          {
            RemoveRefToObject(scrContext, ida.f.prev);
            ida.f.prev = Scr_AllocArray(scrContext);
            v21 = prev;
            prev = ida.f.prev;
            CopyArray(scrContext, v21, ida.f.prev);
            if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7537, ASSERT_TYPE_ASSERT, "( childValue )", (const char *)&queryFormat, "childValue") )
              __debugbreak();
            v11->u = ida;
          }
          return prev;
        }
        else
        {
          scrContext->m_varPub.error_index = 1;
          NameForType = Scr_GetNameForType((VariableType)LOBYTE(v18->w.type));
          v20 = j_va("%s is not an array", NameForType);
          Scr_Error(COM_ERR_5261, scrContext, v20);
          return 0i64;
        }
      }
      else
      {
        if ( type == VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7496, ASSERT_TYPE_ASSERT, "( varValue.type != VAR_STACK )", (const char *)&queryFormat, "varValue.type != VAR_STACK") )
          __debugbreak();
        scrContext->m_varPub.error_index = 1;
        if ( type == VAR_STRING )
        {
          Scr_Error(COM_ERR_5258, scrContext, "string characters cannot be individually changed");
          return 0i64;
        }
        else
        {
          if ( type == VAR_VECTOR )
          {
            Scr_Error(COM_ERR_5259, scrContext, "vector components cannot be individually changed");
          }
          else
          {
            v15 = Scr_GetNameForType(type);
            v16 = j_va("%s is not an array", v15);
            Scr_Error(COM_ERR_5260, scrContext, v16);
          }
          return 0i64;
        }
      }
    }
  }
  else
  {
    v3 = &scrContext->m_varGlob.objectVariableValue[scrContext->m_varPub.entId];
    if ( LOBYTE(v3->w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7442, ASSERT_TYPE_ASSERT, "( entValue->GetType() == VAR_ENTITY )", (const char *)&queryFormat, "entValue->GetType() == VAR_ENTITY") )
      __debugbreak();
    v4 = v3->w.type >> 8;
    if ( BYTE1(v3->w.type) >= 0xBu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7444, ASSERT_TYPE_ASSERT, "( classnum < ENTITY_CLASS_COUNT )", (const char *)&queryFormat, "classnum < ENTITY_CLASS_COUNT") )
      __debugbreak();
    ArrayVariable = FindArrayVariable(scrContext, scrContext->m_varPub.m_classMap[(unsigned __int8)v4].id, scrContext->m_varPub.entFieldName);
    if ( ArrayVariable )
    {
      EntityFieldValue = GetEntityFieldValue(&result, scrContext, (EntityClass)v4, v3->u.f.next, (LocalClientNum_t)(BYTE2(v3->w.entInfo) - 1), scrContext->m_varGlob.childVariableValue[ArrayVariable].u.u.intValue);
      type = EntityFieldValue->type;
      u = EntityFieldValue->u;
      ida = (ChildVariableValue::FreeListOrVariableUnion)EntityFieldValue->u;
      if ( type )
      {
        uintValue = u.uintValue;
        if ( type == VAR_POINTER && !scrContext->m_varGlob.objectVariableValue[u.uintValue].u.o.refCount )
        {
          RemoveRefToValue(scrContext, 1, u);
          scrContext->m_varPub.error_index = 1;
          Scr_Error(COM_ERR_5257, scrContext, "read-only array cannot be changed");
          return 0i64;
        }
        RemoveRefToValue(scrContext, (unsigned __int8)type, u);
        if ( type == VAR_POINTER && scrContext->m_varGlob.objectVariableValue[uintValue].u.o.refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7466, ASSERT_TYPE_ASSERT, "( (varValue.type != VAR_POINTER) || !pScrVarGlob->objectVariableValue[varValue.u.pointerValue].u.o.refCount )", (const char *)&queryFormat, "(varValue.type != VAR_POINTER) || !pScrVarGlob->objectVariableValue[varValue.u.pointerValue].u.o.refCount") )
          __debugbreak();
        v11 = NULL;
        goto $add_array_0;
      }
    }
    childVariableValue = scrContext->m_varGlob.childVariableValue;
    v11 = &childVariableValue[GetNewVariable(scrContext, scrContext->m_varPub.entId, scrContext->m_varPub.entFieldName)];
  }
  *(_WORD *)&v11->tn &= 0xFFC1u;
  *(_WORD *)&v11->tn |= 1u;
  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  if ( !m_scriptPos )
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script array variable>";
  v14 = AllocVariable(scrContext, &index);
  v14->w.type = 24;
  v14->u.o.refCount = 0;
  v14->u.f.next = 0;
  v10 = index;
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  v11->u.f.prev = v10;
  return v10;
}

/*
==============
Scr_EvalBinaryOperator
==============
*/
void Scr_EvalBinaryOperator(scrContext_t *scrContext, int op, VariableValue *value1, VariableValue *value2)
{
  VariableType v8; 
  VariableType type; 
  VariableType v10; 
  VariableType v11; 
  VariableType v12; 
  float *v17; 
  int v26; 
  VariableType v27; 
  VariableType v28; 
  VariableType v41; 
  VariableType v42; 
  VariableType v43; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 

  _RDI = value2;
  _RBX = value1;
  switch ( op )
  {
    case 2:
      Scr_EvalPlus(scrContext, value1, value2);
      return;
    case 10:
      Scr_EvalGreater(scrContext, value1, value2);
      return;
    case 12:
      if ( value1->type != VAR_INTEGER || value2->type != VAR_INTEGER )
        goto LABEL_77;
      value1->u.intValue >>= value2->u.intValue;
      return;
    case 15:
      if ( value1->type != VAR_INTEGER || value2->type != VAR_INTEGER )
        goto LABEL_77;
      value1->u.intValue |= value2->u.intValue;
      return;
    case 16:
      Scr_EvalEquality(scrContext, value1, value2);
      return;
    case 45:
      if ( value1->type != VAR_INTEGER || value2->type != VAR_INTEGER )
        goto LABEL_77;
      value1->u.intValue <<= value2->u.intValue;
      return;
    case 61:
      Scr_EvalGreater(scrContext, value1, value2);
      type = _RBX->type;
      if ( type == VAR_INTEGER || type == VAR_UNDEFINED || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6565, ASSERT_TYPE_ASSERT, "( (value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED) )", (const char *)&queryFormat, "(value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED)") )
        goto LABEL_26;
      goto LABEL_15;
    case 78:
      v11 = value1->type;
      v12 = value2->type;
      if ( v11 != v12 )
      {
        Scr_CastWeakerPair2(scrContext, value1, value2, v11, v12);
        v11 = _RBX->type;
        v12 = _RDI->type;
      }
      if ( v11 != v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6670, ASSERT_TYPE_ASSERT, "( value1->type == value2->type )", (const char *)&queryFormat, "value1->type == value2->type") )
        __debugbreak();
      if ( _RBX->type != VAR_VECTOR )
      {
        if ( _RBX->type == VAR_FLOAT )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx]
            vsubss  xmm1, xmm0, dword ptr [rdi]
            vmovss  dword ptr [rbx], xmm1
          }
        }
        else
        {
          if ( _RBX->type != VAR_INTEGER )
            goto LABEL_77;
          _RBX->u.intValue -= _RDI->u.intValue;
        }
        return;
      }
      _RAX = Scr_AllocVector_Inline(scrContext);
      _RCX = _RBX->u;
      v17 = _RAX;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vsubss  xmm1, xmm0, dword ptr [rdx]
        vmovss  dword ptr [rax], xmm1
      }
      _RCX = _RBX->u;
      __asm
      {
        vmovss  [rsp+48h+arg_8], xmm1
        vmovss  xmm0, dword ptr [rcx+4]
        vsubss  xmm2, xmm0, dword ptr [rdx+4]
        vmovss  dword ptr [rax+4], xmm2
      }
      _RCX = _RBX->u;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+8]
        vsubss  xmm3, xmm0, dword ptr [rdx+8]
        vmovss  dword ptr [rax+8], xmm3
      }
      if ( (v46 & 0x7F800000) == 2139095040 )
        goto LABEL_47;
      __asm { vmovss  [rsp+48h+arg_8], xmm2 }
      if ( (v47 & 0x7F800000) == 2139095040 )
        goto LABEL_47;
      __asm { vmovss  [rsp+48h+arg_8], xmm3 }
      if ( (v48 & 0x7F800000) == 2139095040 )
      {
LABEL_47:
        v26 = 6687;
        goto LABEL_62;
      }
      goto LABEL_64;
    case 83:
      Scr_EvalLess(scrContext, value1, value2);
      v10 = _RBX->type;
      if ( v10 != VAR_INTEGER && v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6531, ASSERT_TYPE_ASSERT, "( (value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED) )", (const char *)&queryFormat, "(value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED)") )
        __debugbreak();
      goto LABEL_26;
    case 100:
      v41 = value1->type;
      v42 = value2->type;
      if ( v41 != v42 )
      {
        Scr_CastWeakerPair2(scrContext, value1, value2, v41, v42);
        if ( _RBX->type != _RDI->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6805, ASSERT_TYPE_ASSERT, "( value1->type == value2->type )", (const char *)&queryFormat, "value1->type == value2->type") )
          __debugbreak();
      }
      v43 = _RBX->type;
      if ( v43 == VAR_INTEGER )
      {
        if ( _RDI->type != VAR_INTEGER )
          goto LABEL_77;
        if ( _RDI->u.intValue )
        {
          _RBX->u.intValue %= _RDI->u.intValue;
        }
        else
        {
          _RBX->u.intValue = 0;
          Scr_Error(COM_ERR_5245, scrContext, "divide by 0");
        }
      }
      else
      {
        if ( v43 != VAR_FLOAT )
          goto LABEL_77;
        __asm
        {
          vmovss  xmm1, dword ptr [rdi]; Y
          vxorps  xmm0, xmm0, xmm0
          vucomiss xmm1, xmm0
        }
        _RBX->u.intValue = 0;
        Scr_Error(COM_ERR_5246, scrContext, "divide by 0");
      }
      break;
    case 118:
      Scr_EvalLess(scrContext, value1, value2);
      return;
    case 136:
      Scr_EvalDivide(scrContext, value1, value2);
      return;
    case 139:
      v27 = value1->type;
      v28 = value2->type;
      if ( v27 != v28 )
      {
        Scr_CastWeakerPair2(scrContext, value1, value2, v27, v28);
        v27 = _RBX->type;
        v28 = _RDI->type;
      }
      if ( v27 != v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6708, ASSERT_TYPE_ASSERT, "( value1->type == value2->type )", (const char *)&queryFormat, "value1->type == value2->type") )
        __debugbreak();
      switch ( _RBX->type )
      {
        case VAR_VECTOR:
          _RAX = Scr_AllocVector_Inline(scrContext);
          _RCX = _RBX->u;
          v17 = _RAX;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx]
            vmulss  xmm1, xmm0, dword ptr [rdx]
            vmovss  dword ptr [rax], xmm1
          }
          _RCX = _RBX->u;
          __asm
          {
            vmovss  [rsp+48h+arg_8], xmm1
            vmovss  xmm0, dword ptr [rcx+4]
            vmulss  xmm2, xmm0, dword ptr [rdx+4]
            vmovss  dword ptr [rax+4], xmm2
          }
          _RCX = _RBX->u;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+8]
            vmulss  xmm3, xmm0, dword ptr [rdx+8]
            vmovss  dword ptr [rax+8], xmm3
          }
          if ( (v49 & 0x7F800000) == 2139095040 )
            goto LABEL_61;
          __asm { vmovss  [rsp+48h+arg_8], xmm2 }
          if ( (v50 & 0x7F800000) == 2139095040 )
            goto LABEL_61;
          __asm { vmovss  [rsp+48h+arg_8], xmm3 }
          if ( (v51 & 0x7F800000) == 2139095040 )
          {
LABEL_61:
            v26 = 6725;
LABEL_62:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", v26, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] )") )
              __debugbreak();
          }
LABEL_64:
          RemoveRefToVector(scrContext, _RBX->u.vectorValue);
          RemoveRefToVector(scrContext, _RDI->u.vectorValue);
          _RBX->u.scriptCodePosValue = (unsigned __int64)v17;
          break;
        case VAR_FLOAT:
          __asm
          {
            vmovss  xmm0, dword ptr [rbx]
            vmulss  xmm1, xmm0, dword ptr [rdi]
            vmovss  dword ptr [rbx], xmm1
          }
          break;
        case VAR_INTEGER:
          _RBX->u.intValue *= _RDI->u.intValue;
          break;
        default:
LABEL_77:
          Scr_UnmatchingTypesError(scrContext, _RBX, _RDI);
          break;
      }
      break;
    case 144:
      if ( value1->type != VAR_INTEGER || value2->type != VAR_INTEGER )
        goto LABEL_77;
      value1->u.intValue &= value2->u.intValue;
      return;
    case 151:
      Scr_EvalEquality(scrContext, value1, value2);
      v8 = _RBX->type;
      if ( v8 != VAR_INTEGER && v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6497, ASSERT_TYPE_ASSERT, "( (value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED) )", (const char *)&queryFormat, "(value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED)") )
      {
LABEL_15:
        __debugbreak();
        _RBX->u.intValue = _RBX->u.intValue == 0;
      }
      else
      {
LABEL_26:
        _RBX->u.intValue = _RBX->u.intValue == 0;
      }
      return;
    case 153:
      if ( value1->type != VAR_INTEGER || value2->type != VAR_INTEGER )
        goto LABEL_77;
      value1->u.intValue ^= value2->u.intValue;
      return;
    default:
      return;
  }
}

/*
==============
Scr_EvalBoolComplement
==============
*/
void Scr_EvalBoolComplement(scrContext_t *scrContext, VariableValue *value)
{
  VariableType type; 
  const char *NameForType; 
  const char *v6; 

  type = value->type;
  if ( type == VAR_INTEGER )
  {
    value->u.intValue = ~value->u.intValue;
  }
  else
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, value->u);
    value->type = VAR_UNDEFINED;
    NameForType = Scr_GetNameForType(type);
    v6 = j_va("~ cannot be applied to \"%s\"", NameForType);
    Scr_Error(COM_ERR_5231, scrContext, v6);
  }
}

/*
==============
Scr_EvalBoolNot
==============
*/
void Scr_EvalBoolNot(scrContext_t *scrContext, VariableValue *value)
{
  int v2; 

  v2 = 0;
  if ( value->type == VAR_INTEGER )
  {
    value->u.intValue = value->u.intValue != 0;
    LOBYTE(v2) = value->u.intValue == 0;
    value->u.intValue = v2;
  }
  else
  {
    Scr_CastBool_NonInteger(scrContext, value);
    if ( value->type == VAR_INTEGER )
    {
      LOBYTE(v2) = value->u.intValue == 0;
      value->u.intValue = v2;
    }
  }
}

/*
==============
Scr_EvalDivide
==============
*/
void Scr_EvalDivide(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 
  VariableType type2; 
  char v23; 
  int v33; 
  int v34; 
  int v35; 

  type = value1->type;
  type2 = value2->type;
  _RSI = value2;
  _RBX = value1;
  if ( type != type2 )
  {
    Scr_CastWeakerPair2(scrContext, value1, value2, type, type2);
    type = _RBX->type;
    type2 = _RSI->type;
  }
  if ( type != type2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6745, ASSERT_TYPE_ASSERT, "( value1->type == value2->type )", (const char *)&queryFormat, "value1->type == value2->type") )
    __debugbreak();
  switch ( _RBX->type )
  {
    case VAR_VECTOR:
      _R14 = Scr_AllocVector_Inline(scrContext);
      _RAX = (const float *)_RSI->u.scriptCodePosValue;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, dword ptr [rax]
        vucomiss xmm1, xmm0
      }
      if ( v23 )
      {
        *(_QWORD *)_R14 = 0i64;
        _R14[2] = 0.0;
        RemoveRefToVector(scrContext, _RBX->u.vectorValue);
        RemoveRefToVector(scrContext, _RSI->u.vectorValue);
        _RBX->u.scriptCodePosValue = (unsigned __int64)_R14;
        Scr_Error(COM_ERR_5244, scrContext, "divide by 0");
      }
      else
      {
        __asm
        {
          vucomiss xmm0, dword ptr [rax+4]
          vucomiss xmm0, dword ptr [rax+8]
        }
        _RAX = (const float *)_RBX->u.scriptCodePosValue;
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vdivss  xmm1, xmm0, xmm1
          vmovss  dword ptr [r14], xmm1
        }
        _RAX = (const float *)_RBX->u.scriptCodePosValue;
        __asm
        {
          vmovss  [rsp+48h+arg_8], xmm1
          vmovss  xmm0, dword ptr [rax+4]
          vdivss  xmm2, xmm0, dword ptr [rcx+4]
          vmovss  dword ptr [r14+4], xmm2
        }
        _RAX = (const float *)_RBX->u.scriptCodePosValue;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+8]
          vdivss  xmm3, xmm0, dword ptr [rcx+8]
          vmovss  dword ptr [r14+8], xmm3
        }
        if ( (v33 & 0x7F800000) == 2139095040 )
          goto LABEL_28;
        __asm { vmovss  [rsp+48h+arg_8], xmm2 }
        if ( (v34 & 0x7F800000) == 2139095040 )
          goto LABEL_28;
        __asm { vmovss  [rsp+48h+arg_8], xmm3 }
        if ( (v35 & 0x7F800000) == 2139095040 )
        {
LABEL_28:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6787, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] )") )
            __debugbreak();
        }
        RemoveRefToVector(scrContext, _RBX->u.vectorValue);
        RemoveRefToVector(scrContext, _RSI->u.vectorValue);
        _RBX->u.scriptCodePosValue = (unsigned __int64)_R14;
      }
      break;
    case VAR_FLOAT:
      __asm
      {
        vmovss  xmm1, dword ptr [rsi]
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm1, xmm0
      }
      if ( _RBX->type == VAR_FLOAT )
      {
        _RBX->u.intValue = 0;
        Scr_Error(COM_ERR_5243, scrContext, "divide by 0");
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vdivss  xmm1, xmm0, xmm1
          vmovss  dword ptr [rbx], xmm1
        }
      }
      break;
    case VAR_INTEGER:
      _RBX->type = VAR_FLOAT;
      if ( _RSI->u.intValue )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, dword ptr [rbx]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rbx], xmm1
        }
      }
      else
      {
        _RBX->u.intValue = 0;
        Scr_Error(COM_ERR_5242, scrContext, "divide by 0");
      }
      break;
    default:
      Scr_UnmatchingTypesError(scrContext, _RBX, _RSI);
      break;
  }
}

/*
==============
Scr_EvalEqualAny
==============
*/
char Scr_EvalEqualAny(const scrContext_t *scrContext, VariableValue *array, VariableValue *value)
{
  unsigned int firstChild; 
  VariableType type; 
  char v10; 
  bool v11; 

  _RDI = value;
  if ( array->type != VAR_POINTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6374, ASSERT_TYPE_ASSERT, "( array->type == VAR_POINTER )", (const char *)&queryFormat, "array->type == VAR_POINTER") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[array->u.uintValue].w.type) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6375, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[array->u.pointerValue].GetType() == VAR_ARRAY )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[array->u.pointerValue].GetType() == VAR_ARRAY") )
    __debugbreak();
  if ( _RDI->type == VAR_POINTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6376, ASSERT_TYPE_ASSERT, "( value->type != VAR_POINTER )", (const char *)&queryFormat, "value->type != VAR_POINTER") )
    __debugbreak();
  firstChild = scrContext->m_varGlob.objectVariableChildren[array->u.uintValue].firstChild;
  if ( !firstChild )
    return 0;
  while ( 1 )
  {
    _RBX = &scrContext->m_varGlob.childVariableValue[firstChild];
    if ( (*(_BYTE *)&_RBX->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6387, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
      __debugbreak();
    type = _RDI->type;
    v10 = *(_BYTE *)&_RBX->tn & 0x3F;
    if ( v10 == type )
    {
      v11 = _RBX->u.f.prev == _RDI->u.intValue;
      goto LABEL_22;
    }
    if ( v10 != 5 )
      break;
    v11 = type == VAR_INTEGER;
    if ( type == VAR_INTEGER )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi]
        vucomiss xmm0, dword ptr [rbx]
      }
      goto LABEL_22;
    }
LABEL_23:
    firstChild = _RBX->nextSibling;
    if ( !firstChild )
      return 0;
  }
  if ( v10 != 6 )
    goto LABEL_23;
  v11 = type == VAR_FLOAT;
  if ( type != VAR_FLOAT )
    goto LABEL_23;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
    vucomiss xmm0, dword ptr [rdi]
  }
LABEL_22:
  if ( !v11 )
    goto LABEL_23;
  return 1;
}

/*
==============
Scr_EvalEquality
==============
*/
void Scr_EvalEquality(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 
  VariableType type2; 
  bool v8; 
  VariableType v9; 
  VariableType v10; 
  bool v11; 
  scr_string_t intValue; 
  BOOL v16; 
  int v22; 
  __int64 uintValue; 
  ObjectVariableValue *objectVariableValue; 
  BOOL v25; 

  type = value1->type;
  type2 = value2->type;
  _RBX = value1;
  v8 = type == type2;
  if ( type != type2 )
  {
    Scr_CastWeakerPair2(scrContext, value1, value2, type, type2);
    v9 = _RBX->type;
    v10 = value2->type;
    v8 = v9 == v10;
    if ( v9 != v10 )
    {
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6426, ASSERT_TYPE_ASSERT, "( value1->type == value2->type )", (const char *)&queryFormat, "value1->type == value2->type");
      v8 = !v11;
      if ( v11 )
        __debugbreak();
    }
  }
  switch ( _RBX->type )
  {
    case VAR_UNDEFINED:
      _RBX->type = VAR_INTEGER;
      _RBX->u.intValue = 1;
      break;
    case VAR_POINTER:
      uintValue = _RBX->u.uintValue;
      objectVariableValue = scrContext->m_varGlob.objectVariableValue;
      if ( (LOBYTE(objectVariableValue[uintValue].w.type) == 24 || LOBYTE(objectVariableValue[value2->u.uintValue].w.type) == 24) && !scrContext->m_varPub.evaluate )
        goto LABEL_22;
      _RBX->type = VAR_INTEGER;
      v25 = uintValue == value2->u.intValue;
      RemoveRefToObject(scrContext, uintValue);
      RemoveRefToObject(scrContext, value2->u.intValue);
      _RBX->u.intValue = v25;
      break;
    case VAR_STRING:
    case VAR_ISTRING:
      intValue = _RBX->u.intValue;
      _RBX->type = VAR_INTEGER;
      v16 = intValue == value2->u.intValue;
      SL_RemoveRefToString(intValue);
      SL_RemoveRefToString((scr_string_t)value2->u.intValue);
      _RBX->u.intValue = v16;
      break;
    case VAR_VECTOR:
      _RDX = (const float *)_RBX->u.scriptCodePosValue;
      _RBX->type = VAR_INTEGER;
      _RAX = value2->u;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vucomiss xmm0, dword ptr [rdx]
      }
      if ( !v8 )
        goto LABEL_15;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+4]
        vucomiss xmm0, dword ptr [rdx+4]
      }
      if ( !v8 )
        goto LABEL_15;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+8]
        vucomiss xmm0, dword ptr [rdx+8]
      }
      if ( v8 )
        v22 = 1;
      else
LABEL_15:
        v22 = 0;
      RemoveRefToVector(scrContext, _RDX);
      RemoveRefToVector(scrContext, value2->u.vectorValue);
      _RBX->u.intValue = v22;
      break;
    case VAR_FLOAT:
      __asm { vmovss  xmm0, dword ptr [rbx]; jumptable 0000000141589FCC case 5 }
      _RBX->type = VAR_INTEGER;
      __asm
      {
        vsubss  xmm1, xmm0, dword ptr [rsi]
        vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm1, cs:__real@358637bd
      }
      _RBX->u.intValue = 0;
      break;
    case VAR_INTEGER:
      goto $LN11_93;
    case VAR_FUNCTION:
      _RBX->type = VAR_INTEGER;
      _RBX->u.intValue = _RBX->u.scriptCodePosValue == value2->u.scriptCodePosValue;
      break;
    case VAR_BUILTIN_FUNCTION:
    case VAR_BUILTIN_METHOD:
    case VAR_ANIMATION:
      _RBX->type = VAR_INTEGER;
$LN11_93:
      _RBX->u.intValue = _RBX->u.intValue == value2->u.intValue;
      break;
    default:
LABEL_22:
      Scr_UnmatchingTypesError(scrContext, _RBX, value2);
      break;
  }
}

/*
==============
Scr_EvalExOr
==============
*/
void Scr_EvalExOr(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  if ( value1->type == VAR_INTEGER && value2->type == VAR_INTEGER )
    value1->u.intValue ^= value2->u.intValue;
  else
    Scr_UnmatchingTypesError(scrContext, value1, value2);
}

/*
==============
Scr_EvalFieldObject
==============
*/
__int64 Scr_EvalFieldObject(scrContext_t *scrContext, unsigned int tempVariable, VariableValue *value)
{
  VariableType type; 
  VariableType v7; 
  unsigned int intValue; 
  const char *NameForType; 
  const char *v11; 
  VariableValue valuea; 

  type = value->type;
  v7 = type;
  if ( type == VAR_POINTER && (v7 = scrContext->m_varGlob.objectVariableValue[value->u.uintValue].w.type, (unsigned __int8)v7 < VAR_ARRAY) )
  {
    if ( (unsigned __int8)v7 < VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6131, ASSERT_TYPE_ASSERT, "( type >= VAR_FIRST_OBJECT )", (const char *)&queryFormat, "type >= VAR_FIRST_OBJECT") )
      __debugbreak();
    valuea.u.intValue = value->u.intValue;
    intValue = valuea.u.intValue;
    valuea.type = VAR_POINTER;
    SetVariableValue(scrContext, tempVariable, &valuea);
    return intValue;
  }
  else
  {
    RemoveRefToValue(scrContext, (unsigned __int8)type, value->u);
    NameForType = Scr_GetNameForType(v7);
    v11 = j_va("%s is not a field object", NameForType);
    Scr_Error(COM_ERR_5236, scrContext, v11);
    return 0i64;
  }
}

/*
==============
Scr_EvalGreater
==============
*/
void Scr_EvalGreater(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 
  VariableType type2; 

  type = value1->type;
  _RBX = value1;
  type2 = value2->type;
  _RDI = value2;
  if ( type != type2 )
  {
    Scr_CastWeakerPair2(scrContext, _RBX, value2, type, type2);
    if ( _RBX->type != _RDI->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6540, ASSERT_TYPE_ASSERT, "( value1->type == value2->type )", (const char *)&queryFormat, "value1->type == value2->type") )
      __debugbreak();
  }
  if ( _RBX->type == VAR_FLOAT )
  {
    _RBX->type = VAR_INTEGER;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vcomiss xmm0, dword ptr [rbx]
    }
    _RBX->u.intValue = 0;
  }
  else if ( _RBX->type == VAR_INTEGER )
  {
    _RBX->u.intValue = _RBX->u.intValue > _RDI->u.intValue;
  }
  else
  {
    Scr_UnmatchingTypesError(scrContext, _RBX, _RDI);
  }
}

/*
==============
Scr_EvalGreaterEqual
==============
*/
void Scr_EvalGreaterEqual(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 

  Scr_EvalLess(scrContext, value1, value2);
  type = value1->type;
  if ( type != VAR_INTEGER && type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6531, ASSERT_TYPE_ASSERT, "( (value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED) )", (const char *)&queryFormat, "(value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED)") )
    __debugbreak();
  value1->u.intValue = value1->u.intValue == 0;
}

/*
==============
Scr_EvalInequality
==============
*/
void Scr_EvalInequality(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 

  Scr_EvalEquality(scrContext, value1, value2);
  type = value1->type;
  if ( type != VAR_INTEGER && type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6497, ASSERT_TYPE_ASSERT, "( (value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED) )", (const char *)&queryFormat, "(value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED)") )
    __debugbreak();
  value1->u.intValue = value1->u.intValue == 0;
}

/*
==============
Scr_EvalLess
==============
*/
void Scr_EvalLess(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 
  VariableType type2; 

  type = value1->type;
  _RBX = value1;
  type2 = value2->type;
  _RDI = value2;
  if ( type != type2 )
  {
    Scr_CastWeakerPair2(scrContext, _RBX, value2, type, type2);
    if ( _RBX->type != _RDI->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6506, ASSERT_TYPE_ASSERT, "( value1->type == value2->type )", (const char *)&queryFormat, "value1->type == value2->type") )
      __debugbreak();
  }
  if ( _RBX->type == VAR_FLOAT )
  {
    __asm { vmovss  xmm0, dword ptr [rbx] }
    _RBX->type = VAR_INTEGER;
    __asm { vcomiss xmm0, dword ptr [rdi] }
    _RBX->u.intValue = 0;
  }
  else if ( _RBX->type == VAR_INTEGER )
  {
    _RBX->u.intValue = _RBX->u.intValue < _RDI->u.intValue;
  }
  else
  {
    Scr_UnmatchingTypesError(scrContext, _RBX, _RDI);
  }
}

/*
==============
Scr_EvalLessEqual
==============
*/
void Scr_EvalLessEqual(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 

  Scr_EvalGreater(scrContext, value1, value2);
  type = value1->type;
  if ( type != VAR_INTEGER && type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6565, ASSERT_TYPE_ASSERT, "( (value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED) )", (const char *)&queryFormat, "(value1->type == VAR_INTEGER) || (value1->type == VAR_UNDEFINED)") )
    __debugbreak();
  value1->u.intValue = value1->u.intValue == 0;
}

/*
==============
Scr_EvalMinus
==============
*/
void Scr_EvalMinus(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 
  VariableType type2; 
  float *v12; 
  int v21; 
  int v22; 
  int v23; 

  type = value1->type;
  type2 = value2->type;
  _RBX = value1;
  if ( type != type2 )
  {
    Scr_CastWeakerPair2(scrContext, value1, value2, type, type2);
    type = _RBX->type;
    type2 = value2->type;
  }
  if ( type != type2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6670, ASSERT_TYPE_ASSERT, "( value1->type == value2->type )", (const char *)&queryFormat, "value1->type == value2->type") )
    __debugbreak();
  switch ( _RBX->type )
  {
    case VAR_VECTOR:
      _RAX = Scr_AllocVector_Inline(scrContext);
      _RCX = (const float *)_RBX->u.scriptCodePosValue;
      v12 = _RAX;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vsubss  xmm1, xmm0, dword ptr [rdx]
        vmovss  dword ptr [rax], xmm1
      }
      _RCX = _RBX->u;
      __asm
      {
        vmovss  [rsp+48h+arg_8], xmm1
        vmovss  xmm0, dword ptr [rcx+4]
        vsubss  xmm2, xmm0, dword ptr [rdx+4]
        vmovss  dword ptr [rax+4], xmm2
      }
      _RCX = _RBX->u;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+8]
        vsubss  xmm3, xmm0, dword ptr [rdx+8]
        vmovss  dword ptr [rax+8], xmm3
      }
      if ( (v21 & 0x7F800000) == 2139095040 )
        goto LABEL_20;
      __asm { vmovss  [rsp+48h+arg_8], xmm2 }
      if ( (v22 & 0x7F800000) == 2139095040 )
        goto LABEL_20;
      __asm { vmovss  [rsp+48h+arg_8], xmm3 }
      if ( (v23 & 0x7F800000) == 2139095040 )
      {
LABEL_20:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6687, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] )") )
          __debugbreak();
      }
      RemoveRefToVector(scrContext, _RBX->u.vectorValue);
      RemoveRefToVector(scrContext, value2->u.vectorValue);
      _RBX->u.scriptCodePosValue = (unsigned __int64)v12;
      break;
    case VAR_FLOAT:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vsubss  xmm1, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rbx], xmm1
      }
      break;
    case VAR_INTEGER:
      _RBX->u.intValue -= value2->u.intValue;
      break;
    default:
      Scr_UnmatchingTypesError(scrContext, _RBX, value2);
      break;
  }
}

/*
==============
Scr_EvalMod
==============
*/
void Scr_EvalMod(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 
  VariableType type2; 
  VariableType v9; 

  type = value1->type;
  type2 = value2->type;
  _RDI = value2;
  if ( type != type2 )
  {
    Scr_CastWeakerPair2(scrContext, value1, value2, type, type2);
    if ( value1->type != _RDI->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6805, ASSERT_TYPE_ASSERT, "( value1->type == value2->type )", (const char *)&queryFormat, "value1->type == value2->type") )
      __debugbreak();
  }
  v9 = value1->type;
  if ( v9 != VAR_INTEGER )
  {
    if ( v9 == VAR_FLOAT )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rdi]; Y
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm1, xmm0
      }
      value1->u.intValue = 0;
      Scr_Error(COM_ERR_5246, scrContext, "divide by 0");
      return;
    }
    goto LABEL_12;
  }
  if ( _RDI->type != VAR_INTEGER )
  {
LABEL_12:
    Scr_UnmatchingTypesError(scrContext, value1, _RDI);
    return;
  }
  if ( _RDI->u.intValue )
  {
    value1->u.intValue %= _RDI->u.intValue;
  }
  else
  {
    value1->u.intValue = 0;
    Scr_Error(COM_ERR_5245, scrContext, "divide by 0");
  }
}

/*
==============
Scr_EvalMultiply
==============
*/
void Scr_EvalMultiply(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 
  VariableType type2; 
  float *v12; 
  int v21; 
  int v22; 
  int v23; 

  type = value1->type;
  type2 = value2->type;
  _RBX = value1;
  if ( type != type2 )
  {
    Scr_CastWeakerPair2(scrContext, value1, value2, type, type2);
    type = _RBX->type;
    type2 = value2->type;
  }
  if ( type != type2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6708, ASSERT_TYPE_ASSERT, "( value1->type == value2->type )", (const char *)&queryFormat, "value1->type == value2->type") )
    __debugbreak();
  switch ( _RBX->type )
  {
    case VAR_VECTOR:
      _RAX = Scr_AllocVector_Inline(scrContext);
      _RCX = (const float *)_RBX->u.scriptCodePosValue;
      v12 = _RAX;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vmulss  xmm1, xmm0, dword ptr [rdx]
        vmovss  dword ptr [rax], xmm1
      }
      _RCX = _RBX->u;
      __asm
      {
        vmovss  [rsp+48h+arg_8], xmm1
        vmovss  xmm0, dword ptr [rcx+4]
        vmulss  xmm2, xmm0, dword ptr [rdx+4]
        vmovss  dword ptr [rax+4], xmm2
      }
      _RCX = _RBX->u;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+8]
        vmulss  xmm3, xmm0, dword ptr [rdx+8]
        vmovss  dword ptr [rax+8], xmm3
      }
      if ( (v21 & 0x7F800000) == 2139095040 )
        goto LABEL_20;
      __asm { vmovss  [rsp+48h+arg_8], xmm2 }
      if ( (v22 & 0x7F800000) == 2139095040 )
        goto LABEL_20;
      __asm { vmovss  [rsp+48h+arg_8], xmm3 }
      if ( (v23 & 0x7F800000) == 2139095040 )
      {
LABEL_20:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6725, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] )") )
          __debugbreak();
      }
      RemoveRefToVector(scrContext, _RBX->u.vectorValue);
      RemoveRefToVector(scrContext, value2->u.vectorValue);
      _RBX->u.scriptCodePosValue = (unsigned __int64)v12;
      break;
    case VAR_FLOAT:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmulss  xmm1, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rbx], xmm1
      }
      break;
    case VAR_INTEGER:
      _RBX->u.intValue *= value2->u.intValue;
      break;
    default:
      Scr_UnmatchingTypesError(scrContext, _RBX, value2);
      break;
  }
}

/*
==============
Scr_EvalOr
==============
*/
void Scr_EvalOr(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  if ( value1->type == VAR_INTEGER && value2->type == VAR_INTEGER )
    value1->u.intValue |= value2->u.intValue;
  else
    Scr_UnmatchingTypesError(scrContext, value1, value2);
}

/*
==============
Scr_EvalPlus
==============
*/
void Scr_EvalPlus(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 
  VariableType v6; 
  float *v17; 
  char *v26; 
  char *v27; 
  unsigned __int64 StringLen; 
  unsigned __int64 v29; 
  const char *v30; 
  char *v31; 
  char v32; 
  unsigned __int64 v33; 
  char v34; 
  unsigned int StringOfSize; 
  int v36; 
  int v37; 
  int v38; 
  char str[8192]; 

  type = value1->type;
  v6 = value2->type;
  _R14 = value2;
  _RDI = value1;
  if ( type != v6 )
  {
    if ( type == VAR_STRING )
    {
      if ( !Scr_CastString(scrContext, value2) )
      {
        RemoveRefToValue(scrContext, (unsigned __int8)_RDI->type, _RDI->u);
        _RDI->type = VAR_UNDEFINED;
        Scr_Error(COM_ERR_5239, scrContext, scrContext->m_varPub.error_message);
      }
    }
    else
    {
      if ( v6 != VAR_STRING )
      {
        if ( type == VAR_FLOAT )
        {
          if ( v6 == VAR_INTEGER )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, dword ptr [r8]
              vmovss  dword ptr [r8], xmm0
            }
            value2->type = VAR_FLOAT;
            goto LABEL_15;
          }
        }
        else if ( v6 == VAR_FLOAT && type == VAR_INTEGER )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rdx]
            vmovss  dword ptr [rdx], xmm0
          }
          value1->type = VAR_FLOAT;
          goto LABEL_15;
        }
        Scr_UnmatchingTypesError(scrContext, value1, value2);
        goto LABEL_15;
      }
      if ( !Scr_CastString(scrContext, value1) )
      {
        RemoveRefToValue(scrContext, (unsigned __int8)_R14->type, _R14->u);
        _R14->type = VAR_UNDEFINED;
        Scr_Error(COM_ERR_5240, scrContext, scrContext->m_varPub.error_message);
      }
    }
  }
LABEL_15:
  if ( _RDI->type != _R14->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6608, ASSERT_TYPE_ASSERT, "( value1->type == value2->type )", (const char *)&queryFormat, "value1->type == value2->type") )
    __debugbreak();
  switch ( _RDI->type )
  {
    case VAR_STRING:
      v26 = (char *)SL_ConvertToString((scr_string_t)_RDI->u.intValue);
      v27 = (char *)SL_ConvertToString((scr_string_t)_R14->u.intValue);
      StringLen = SL_GetStringLen((scr_string_t)_RDI->u.intValue);
      v29 = SL_GetStringLen((scr_string_t)_R14->u.intValue) + StringLen + 1;
      if ( v29 <= 0x2000 )
      {
        v31 = (char *)(str - v26);
        do
        {
          v32 = *v26;
          v26[(_QWORD)v31] = *v26;
          ++v26;
        }
        while ( v32 );
        v33 = StringLen - (_QWORD)v27;
        do
        {
          v34 = *v27;
          str[v33 + (_QWORD)v27] = *v27;
          ++v27;
        }
        while ( v34 );
        StringOfSize = j_SL_GetStringOfSize(str, 0, v29, 17);
        SL_RemoveRefToString((scr_string_t)_RDI->u.intValue);
        SL_RemoveRefToString((scr_string_t)_R14->u.intValue);
        Scr_SetStringValue(_RDI, StringOfSize);
      }
      else
      {
        SL_RemoveRefToString((scr_string_t)_RDI->u.intValue);
        SL_RemoveRefToString((scr_string_t)_R14->u.intValue);
        _RDI->type = VAR_UNDEFINED;
        _R14->type = VAR_UNDEFINED;
        v30 = j_va("cannot concat \"%s\" and \"%s\" - max string length exceeded", v26, v27);
        Scr_Error(COM_ERR_5241, scrContext, v30);
      }
      break;
    case VAR_VECTOR:
      _RAX = Scr_AllocVector_Inline(scrContext);
      _RCX = _R14->u;
      v17 = _RAX;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vaddss  xmm1, xmm0, dword ptr [rdx]
        vmovss  dword ptr [rax], xmm1
      }
      _RCX = _R14->u;
      __asm
      {
        vmovss  [rsp+2078h+var_2048], xmm1
        vmovss  xmm0, dword ptr [rcx+4]
        vaddss  xmm2, xmm0, dword ptr [rdx+4]
        vmovss  dword ptr [rax+4], xmm2
      }
      _RCX = _R14->u;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+8]
        vaddss  xmm3, xmm0, dword ptr [rdx+8]
        vmovss  dword ptr [rax+8], xmm3
      }
      if ( (v36 & 0x7F800000) == 2139095040 )
        goto LABEL_40;
      __asm { vmovss  [rsp+2078h+var_2048], xmm2 }
      if ( (v37 & 0x7F800000) == 2139095040 )
        goto LABEL_40;
      __asm { vmovss  [rsp+2078h+var_2048], xmm3 }
      if ( (v38 & 0x7F800000) == 2139095040 )
      {
LABEL_40:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6649, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tempVector )[0] ) && !IS_NAN( ( tempVector )[1] ) && !IS_NAN( ( tempVector )[2] )") )
          __debugbreak();
      }
      RemoveRefToVector(scrContext, _RDI->u.vectorValue);
      RemoveRefToVector(scrContext, _R14->u.vectorValue);
      _RDI->u.scriptCodePosValue = (unsigned __int64)v17;
      break;
    case VAR_FLOAT:
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
      }
      break;
    case VAR_INTEGER:
      _RDI->u.intValue += _R14->u.intValue;
      break;
    default:
      Scr_UnmatchingTypesError(scrContext, _RDI, _R14);
      break;
  }
}

/*
==============
Scr_EvalShiftLeft
==============
*/
void Scr_EvalShiftLeft(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  if ( value1->type == VAR_INTEGER && value2->type == VAR_INTEGER )
    value1->u.intValue <<= value2->u.intValue;
  else
    Scr_UnmatchingTypesError(scrContext, value1, value2);
}

/*
==============
Scr_EvalShiftRight
==============
*/
void Scr_EvalShiftRight(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  if ( value1->type == VAR_INTEGER && value2->type == VAR_INTEGER )
    value1->u.intValue >>= value2->u.intValue;
  else
    Scr_UnmatchingTypesError(scrContext, value1, value2);
}

/*
==============
Scr_EvalSizeValue
==============
*/
void Scr_EvalSizeValue(scrContext_t *scrContext, VariableValue *value)
{
  VariableType type; 
  ObjectVariableValue *objectVariableValue; 
  __int64 uintValue; 
  __int64 next; 
  int intValue; 
  int v9; 
  const char *v10; 
  __int64 v11; 
  const char *NameForType; 
  const char *v13; 

  type = value->type;
  if ( type == VAR_POINTER )
  {
    objectVariableValue = scrContext->m_varGlob.objectVariableValue;
    uintValue = value->u.uintValue;
    value->type = VAR_INTEGER;
    if ( LOBYTE(objectVariableValue[uintValue].w.type) == 24 )
    {
      next = (int)objectVariableValue[uintValue].u.f.next;
      if ( (unsigned int)next > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", next, "unsigned", (unsigned int)next) )
        __debugbreak();
    }
    else
    {
      LODWORD(next) = 1;
    }
    value->u.intValue = next;
    RemoveRefToObject(scrContext, uintValue);
  }
  else if ( type == VAR_STRING )
  {
    intValue = value->u.intValue;
    v9 = value->u.intValue;
    value->type = VAR_INTEGER;
    v10 = SL_ConvertToString((scr_string_t)v9);
    v11 = -1i64;
    do
      ++v11;
    while ( v10[v11] );
    value->u.intValue = v11;
    SL_RemoveRefToString((scr_string_t)intValue);
  }
  else
  {
    if ( type == VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5722, ASSERT_TYPE_ASSERT, "( value->type != VAR_STACK )", (const char *)&queryFormat, "value->type != VAR_STACK") )
      __debugbreak();
    NameForType = Scr_GetNameForType(value->type);
    v13 = j_va("size cannot be applied to %s", NameForType);
    RemoveRefToValue(scrContext, (unsigned __int8)value->type, value->u);
    value->type = VAR_UNDEFINED;
    Scr_Error(COM_ERR_5229, scrContext, v13);
  }
}

/*
==============
Scr_EvalVariable
==============
*/
VariableValue *Scr_EvalVariable(VariableValue *result, scrContext_t *scrContext, unsigned int id)
{
  ChildVariableValue *v5; 

  v5 = &scrContext->m_varGlob.childVariableValue[id];
  if ( id && (*(_BYTE *)&v5->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5523, ASSERT_TYPE_ASSERT, "( !id || IsValidChild( entryValue ) )", (const char *)&queryFormat, "!id || IsValidChild( entryValue )") )
    __debugbreak();
  AddRefToValue(scrContext, *(_BYTE *)&v5->tn & 0x3F, v5->u.u);
  result->u.scriptCodePosValue = v5->u.u.scriptCodePosValue;
  result->type = *(_BYTE *)&v5->tn & 0x3F;
  return result;
}

/*
==============
Scr_EvalVariableField
==============
*/
VariableValue *Scr_EvalVariableField(VariableValue *result, scrContext_t *scrContext, unsigned int id)
{
  ChildVariableValue *v5; 
  __int64 scriptCodePosValue; 
  VariableValue *v7; 
  VariableValue *v8; 
  __int64 v9; 
  char v10; 
  VariableValue resulta; 

  if ( id )
  {
    v5 = &scrContext->m_varGlob.childVariableValue[id];
    if ( (*(_BYTE *)&v5->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5523, ASSERT_TYPE_ASSERT, "( !id || IsValidChild( entryValue ) )", (const char *)&queryFormat, "!id || IsValidChild( entryValue )") )
      __debugbreak();
    AddRefToValue(scrContext, *(_BYTE *)&v5->tn & 0x3F, v5->u.u);
    scriptCodePosValue = v5->u.u.scriptCodePosValue;
    v10 = *(_BYTE *)&v5->tn & 0x3F;
    v7 = (VariableValue *)&v9;
    v9 = scriptCodePosValue;
  }
  else
  {
    v7 = Scr_EvalVariableEntityField_1_(&resulta, scrContext, scrContext->m_varPub.entId, scrContext->m_varPub.entFieldName);
    scriptCodePosValue = v7->u.scriptCodePosValue;
  }
  result->type = v7->type;
  v8 = result;
  result->u.scriptCodePosValue = scriptCodePosValue;
  return v8;
}

/*
==============
Scr_EvalVariableField_Out
==============
*/
void Scr_EvalVariableField_Out(scrContext_t *scrContext, unsigned int id, VariableValue *out)
{
  if ( id )
    Scr_EvalVariable_Out(scrContext, id, out);
  else
    Scr_EvalVariableEntityField_Out_1_(scrContext, scrContext->m_varPub.entId, scrContext->m_varPub.entFieldName, out);
}

/*
==============
Scr_EvalVariableObject
==============
*/
__int64 Scr_EvalVariableObject(scrContext_t *scrContext, unsigned int id)
{
  ChildVariableValue *v3; 
  VariableType type; 
  const char *NameForType; 
  const char *v7; 

  v3 = &scrContext->m_varGlob.childVariableValue[id];
  if ( id && (*(_BYTE *)&v3->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5550, ASSERT_TYPE_ASSERT, "( !id || IsValidChild( entryValue ) )", (const char *)&queryFormat, "!id || IsValidChild( entryValue )") )
    __debugbreak();
  type = *(_BYTE *)&v3->tn & 0x3F;
  if ( type == VAR_POINTER && (type = scrContext->m_varGlob.objectVariableValue[v3->u.f.prev].w.type, (unsigned __int8)type < VAR_ARRAY) )
  {
    if ( (unsigned __int8)type < VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5558, ASSERT_TYPE_ASSERT, "( type >= VAR_FIRST_OBJECT )", (const char *)&queryFormat, "type >= VAR_FIRST_OBJECT") )
      __debugbreak();
    return v3->u.f.prev;
  }
  else
  {
    NameForType = Scr_GetNameForType(type);
    v7 = j_va("%s is not a field object", NameForType);
    Scr_Error(COM_ERR_5228, scrContext, v7);
    return 0i64;
  }
}

/*
==============
Scr_EvalVariable_Out
==============
*/
void Scr_EvalVariable_Out(scrContext_t *scrContext, unsigned int id, VariableValue *out)
{
  ChildVariableValue *v5; 

  v5 = &scrContext->m_varGlob.childVariableValue[id];
  if ( id && (*(_BYTE *)&v5->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5536, ASSERT_TYPE_ASSERT, "( !id || IsValidChild( entryValue ) )", (const char *)&queryFormat, "!id || IsValidChild( entryValue )") )
    __debugbreak();
  AddRefToValue(scrContext, *(_BYTE *)&v5->tn & 0x3F, v5->u.u);
  MakeVariableValueUnion_Out((VariableType)(*(_BYTE *)&v5->tn & 0x3F), v5->u.u, out);
}

/*
==============
Scr_FindAllEndons
==============
*/
__int64 Scr_FindAllEndons(scrContext_t *scrContext, unsigned int threadId, unsigned int *names)
{
  __int64 v3; 
  __int64 v6; 
  unsigned int Variable; 
  unsigned int Object; 
  unsigned int FirstSibling; 
  __int64 v10; 
  ChildVariableValue *v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  ObjectVariableValue *objectVariableValue; 
  bool v16; 
  ObjectVariableValue *v17; 
  ObjectVariableValue *v18; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 

  v22 = threadId;
  v3 = threadId;
  if ( !threadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8753, ASSERT_TYPE_ASSERT, "( threadId )", (const char *)&queryFormat, "threadId") )
    __debugbreak();
  if ( (unsigned __int8)(LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) - 17) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8755, ASSERT_TYPE_ASSERT, "( (threadValue->GetType() >= VAR_THREAD) && (threadValue->GetType() <= VAR_CHILD_THREAD) )", (const char *)&queryFormat, "(threadValue->GetType() >= VAR_THREAD) && (threadValue->GetType() <= VAR_CHILD_THREAD)") )
    __debugbreak();
  v6 = 0i64;
  if ( !(_DWORD)v3 )
    return 0i64;
  do
  {
    Variable = FindVariable(scrContext, scrContext->m_varPub.pauseArrayId, v3 + 0x80000);
    if ( Variable )
    {
      Object = FindObject(scrContext, Variable);
      FirstSibling = FindFirstSibling(scrContext, Object);
      if ( FirstSibling )
      {
        do
        {
          v10 = FirstSibling;
          if ( (*(_BYTE *)&scrContext->m_varGlob.childVariableValue[v10].tn & 0x3F) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8770, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.childVariableValue[notifyListEntry].GetType() == VAR_POINTER )", (const char *)&queryFormat, "scrContext.m_varGlob.childVariableValue[notifyListEntry].GetType() == VAR_POINTER") )
            __debugbreak();
          v11 = &scrContext->m_varGlob.childVariableValue[v10];
          if ( v11->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
            __debugbreak();
          v12 = (v11->k.match & 0x3FFF) << 10;
          v13 = *(_WORD *)&v11->tn >> 6;
          v14 = (unsigned int)(v13 + v12 - 0x80000);
          if ( (unsigned int)v14 >= 0x40000 )
          {
            LODWORD(v21) = 0x40000;
            LODWORD(v20) = v13 + v12 - 0x80000;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8772, ASSERT_TYPE_ASSERT, "(unsigned)( (name - MEMORY_NODE_COUNT) ) < (unsigned)( ( 1 << 18 ) )", "(name - SL_MAX_STRING_INDEX) doesn't index VARIABLELIST_PARENT_SIZE_MAX\n\t%i not in [0, %i)", v20, v21) )
              __debugbreak();
          }
          if ( names )
          {
            objectVariableValue = scrContext->m_varGlob.objectVariableValue;
            v16 = LOBYTE(objectVariableValue[v14].w.type) == 18;
            v17 = &objectVariableValue[v14];
            if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3902, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "entryValue->GetType() == VAR_NOTIFY_THREAD") )
              __debugbreak();
            names[v6] = v17->w.type >> 8;
          }
          v6 = (unsigned int)(v6 + 1);
          FirstSibling = FindNextSibling(scrContext, FirstSibling);
        }
        while ( FirstSibling );
        LODWORD(v3) = v22;
      }
    }
    v18 = &scrContext->m_varGlob.objectVariableValue[(unsigned int)v3];
    if ( (unsigned __int8)(LOBYTE(v18->w.type) - 17) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3954, ASSERT_TYPE_ASSERT, "( entryValue->GetType() >= VAR_THREAD && entryValue->GetType() <= VAR_CHILD_THREAD )", (const char *)&queryFormat, "entryValue->GetType() >= VAR_THREAD && entryValue->GetType() <= VAR_CHILD_THREAD") )
      __debugbreak();
    if ( LOBYTE(v18->w.type) != 20 )
      break;
    LODWORD(v3) = v18->w.type >> 8;
    v22 = v3;
  }
  while ( v18->w.type >= 0x100 );
  return (unsigned int)v6;
}

/*
==============
Scr_FindAllThreads
==============
*/
__int64 Scr_FindAllThreads(scrContext_t *scrContext, unsigned int selfId, unsigned int *threads, unsigned int localId)
{
  __int64 v4; 
  unsigned int *v6; 
  unsigned int v9; 
  unsigned int m_variableListChildSize; 
  __int64 v11; 
  unsigned int *v12; 
  ChildVariableValue *childVariableValue; 
  unsigned int SafeParentLocalId; 
  ObjectVariableValue *v15; 
  unsigned int Variable; 
  unsigned int Object; 
  unsigned int FirstSibling; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int i; 
  __int64 v22; 
  unsigned int v23; 
  ObjectVariableValue *v24; 
  unsigned int id; 

  v4 = 0i64;
  v6 = threads;
  v9 = 0;
  if ( localId && selfId == Scr_GetSelf(scrContext, localId) )
  {
    if ( v6 )
      *v6 = localId;
    v9 = 1;
  }
  m_variableListChildSize = scrContext->m_variableListChildSize;
  if ( m_variableListChildSize )
  {
    v11 = m_variableListChildSize;
    v12 = &v6[v9];
    do
    {
      childVariableValue = scrContext->m_varGlob.childVariableValue;
      if ( (*(_BYTE *)&childVariableValue[v4].tn & 0x3F) == 12 )
      {
        SafeParentLocalId = *(_DWORD *)(childVariableValue[v4].u.u.scriptCodePosValue + 12);
        if ( SafeParentLocalId )
        {
          while ( 1 )
          {
            v15 = &scrContext->m_varGlob.objectVariableValue[SafeParentLocalId];
            if ( (unsigned __int8)(LOBYTE(v15->w.type) - 17) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4447, ASSERT_TYPE_ASSERT, "( (entryValue->GetType() >= VAR_THREAD) && (entryValue->GetType() <= VAR_CHILD_THREAD) )", (const char *)&queryFormat, "(entryValue->GetType() >= VAR_THREAD) && (entryValue->GetType() <= VAR_CHILD_THREAD)") )
              __debugbreak();
            if ( selfId == v15->u.f.next )
              break;
            SafeParentLocalId = GetSafeParentLocalId(scrContext, SafeParentLocalId);
            if ( !SafeParentLocalId )
              goto LABEL_19;
          }
          if ( threads )
            *v12 = SafeParentLocalId;
          ++v9;
          ++v12;
        }
      }
LABEL_19:
      ++v4;
      --v11;
    }
    while ( v11 );
    v6 = threads;
  }
  Variable = FindVariable(scrContext, scrContext->m_varPub.notifyArrayId, selfId + 0x80000);
  if ( Variable )
  {
    Object = FindObject(scrContext, Variable);
    FirstSibling = FindFirstSibling(scrContext, Object);
    id = FirstSibling;
    if ( FirstSibling )
    {
      v19 = (int)v9;
      do
      {
        v20 = FindObject(scrContext, FirstSibling);
        if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8716, ASSERT_TYPE_ASSERT, "( timeId )", (const char *)&queryFormat, "timeId") )
          __debugbreak();
        for ( i = FindFirstSibling(scrContext, v20); i; i = FindNextSibling(scrContext, i) )
        {
          v22 = i;
          if ( (*(_BYTE *)&scrContext->m_varGlob.childVariableValue[v22].tn & 0x3F) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6916, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.childVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.childVariableValue[id].GetType() != VAR_FREE") )
            __debugbreak();
          if ( (*(_BYTE *)&scrContext->m_varGlob.childVariableValue[v22].tn & 0x3F) == 12 )
          {
            v23 = *(_DWORD *)(GetVariableValueAddress(scrContext, i)->scriptCodePosValue + 12);
            if ( v23 )
            {
              while ( 1 )
              {
                v24 = &scrContext->m_varGlob.objectVariableValue[v23];
                if ( (unsigned __int8)(LOBYTE(v24->w.type) - 17) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4447, ASSERT_TYPE_ASSERT, "( (entryValue->GetType() >= VAR_THREAD) && (entryValue->GetType() <= VAR_CHILD_THREAD) )", (const char *)&queryFormat, "(entryValue->GetType() >= VAR_THREAD) && (entryValue->GetType() <= VAR_CHILD_THREAD)") )
                  __debugbreak();
                if ( selfId != v24->u.f.next )
                  break;
                v23 = GetSafeParentLocalId(scrContext, v23);
                if ( !v23 )
                  goto LABEL_42;
              }
              if ( v6 )
                v6[v19] = v23;
              ++v9;
              ++v19;
            }
          }
LABEL_42:
          ;
        }
        FirstSibling = FindNextSibling(scrContext, id);
        id = FirstSibling;
      }
      while ( FirstSibling );
    }
  }
  return v9;
}

/*
==============
Scr_FindAllVariableField
==============
*/
__int64 Scr_FindAllVariableField(scrContext_t *scrContext, unsigned int parentId, unsigned int *names)
{
  __int64 v4; 
  ObjectVariableValue *v6; 
  unsigned __int8 type; 
  __int64 v8; 
  unsigned int i; 
  ChildVariableValue *v10; 
  int v11; 
  unsigned int v12; 
  unsigned int FirstSibling; 
  unsigned int Name; 
  unsigned int v15; 
  bool v16; 
  unsigned int NextSibling; 
  ChildVariableValue *v18; 
  unsigned int v19; 
  bool v20; 
  __int64 v22; 
  __int64 v23; 

  v4 = parentId;
  if ( !g_scrCanonicalStringPub.canonicalStringData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4947, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringData != nullptr )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringData != nullptr") )
    __debugbreak();
  if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4948, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
    __debugbreak();
  v6 = &scrContext->m_varGlob.objectVariableValue[v4];
  if ( !IsValidObject(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4951, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  type = v6->w.type;
  v8 = 0i64;
  if ( type >= 0x11u )
  {
    if ( type > 0x16u )
    {
      if ( type != 23 )
      {
        if ( type == 24 )
        {
          for ( i = FindFirstSibling(scrContext, v4); i; i = FindNextSibling(scrContext, i) )
          {
            v10 = &scrContext->m_varGlob.childVariableValue[i];
            if ( v10->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
              __debugbreak();
            v11 = ((v10->k.match & 0x3FFF) << 10) + (*(_WORD *)&v10->tn >> 6);
            if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5008, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
              __debugbreak();
            if ( names )
              names[v8] = v11;
            v8 = (unsigned int)(v8 + 1);
          }
        }
        return (unsigned int)v8;
      }
      v12 = v6->w.type >> 8;
      if ( (unsigned __int8)v12 >= 0xBu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4959, ASSERT_TYPE_ASSERT, "( classnum < ENTITY_CLASS_COUNT )", (const char *)&queryFormat, "classnum < ENTITY_CLASS_COUNT") )
        __debugbreak();
      FirstSibling = FindFirstSibling(scrContext, scrContext->m_varPub.m_classMap[(unsigned __int8)v12].id);
      if ( FirstSibling )
      {
        while ( 1 )
        {
          Name = ChildVariableValue::GetName(&scrContext->m_varGlob.childVariableValue[FirstSibling]);
          v15 = Name - 0x800000;
          if ( Name == 0x800000 )
            break;
          if ( v15 < 0x80000 )
          {
            if ( v15 > g_scrCanonicalStringPub.canonicalStringLimit )
            {
              LODWORD(v23) = g_scrCanonicalStringPub.canonicalStringLimit;
              LODWORD(v22) = Name - 0x800000;
              v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4971, ASSERT_TYPE_ASSERT, "( name ) <= ( g_scrCanonicalStringPub.canonicalStringLimit )", "name <= g_scrCanonicalStringPub.canonicalStringLimit\n\t%i, %i", v22, v23);
              goto LABEL_34;
            }
LABEL_36:
            if ( !FindVariable(scrContext, v4, v15) )
            {
              if ( names )
                names[v8] = v15;
              v8 = (unsigned int)(v8 + 1);
            }
          }
          FirstSibling = FindNextSibling(scrContext, FirstSibling);
          if ( !FirstSibling )
            goto LABEL_41;
        }
        v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4968, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4);
LABEL_34:
        if ( v16 )
          __debugbreak();
        goto LABEL_36;
      }
    }
LABEL_41:
    NextSibling = FindFirstSibling(scrContext, v4);
    if ( !NextSibling )
      return (unsigned int)v8;
    do
    {
      v18 = &scrContext->m_varGlob.childVariableValue[NextSibling];
      if ( v18->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
        __debugbreak();
      v19 = ((v18->k.match & 0x3FFF) << 10) + (*(_WORD *)&v18->tn >> 6);
      if ( v19 )
      {
        if ( v19 >= 0x80000 )
        {
          LODWORD(v23) = 0x80000;
          LODWORD(v22) = ((v18->k.match & 0x3FFF) << 10) + (*(_WORD *)&v18->tn >> 6);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4994, ASSERT_TYPE_ASSERT, "( name ) < ( MEMORY_NODE_COUNT )", "name < SL_MAX_STRING_INDEX\n\t%i, %i", v22, v23) )
            __debugbreak();
        }
        if ( v19 <= g_scrCanonicalStringPub.canonicalStringLimit )
          goto LABEL_54;
        LODWORD(v23) = g_scrCanonicalStringPub.canonicalStringLimit;
        LODWORD(v22) = v19;
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4995, ASSERT_TYPE_ASSERT, "( name ) <= ( g_scrCanonicalStringPub.canonicalStringLimit )", "name <= g_scrCanonicalStringPub.canonicalStringLimit\n\t%i, %i", v22, v23);
      }
      else
      {
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4993, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4);
      }
      if ( v20 )
        __debugbreak();
LABEL_54:
      if ( names )
        names[v8] = v19;
      v8 = (unsigned int)(v8 + 1);
      NextSibling = FindNextSibling(scrContext, NextSibling);
    }
    while ( NextSibling );
  }
  return (unsigned int)v8;
}

/*
==============
Scr_FindArrayIndex2
==============
*/
unsigned int Scr_FindArrayIndex2(scrContext_t *scrContext, unsigned int parentId, VariableValue *index)
{
  VariableType type; 
  __int64 uintValue; 
  const char *v8; 
  ComErrorCode v9; 
  const char *NameForType; 

  type = index->type;
  if ( type == VAR_INTEGER )
  {
    uintValue = index->u.uintValue;
    if ( (unsigned int)(uintValue + 7602176) <= 0xF3FFFF )
      return FindVariable(scrContext, parentId, (uintValue - 0x800000) & 0xFFFFFF);
    v8 = j_va("array index %d out of range", uintValue);
    v9 = COM_ERR_5249;
  }
  else
  {
    if ( type == VAR_STRING )
      return FindVariable(scrContext, parentId, index->u.intValue);
    NameForType = Scr_GetNameForType(type);
    v8 = j_va("%s is not an array index", NameForType);
    v9 = COM_ERR_5250;
  }
  Scr_ParamError(v9, scrContext, 1u, v8);
  return 0;
}

/*
==============
Scr_FindEntityId
==============
*/
unsigned int Scr_FindEntityId(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum, const LocalClientNum_t localClientNum)
{
  unsigned int entArrayId; 
  unsigned int result; 
  ChildVariableValue *v9; 

  if ( classnum != ENTITY_CLASS_SCRIPTABLE && entnum > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4507, ASSERT_TYPE_ASSERT, "( entnum ) <= ( 0xffff )", "entnum <= USHRT_MAX\n\t%i, %i", entnum, 0xFFFF) )
    __debugbreak();
  entArrayId = scrContext->m_varPub.m_classMap[(unsigned __int8)classnum].entArrayId;
  if ( !entArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7226, ASSERT_TYPE_ASSERT, "( entArrayId )", (const char *)&queryFormat, "entArrayId") )
    __debugbreak();
  result = FindArrayVariable(scrContext, entArrayId, entnum);
  if ( result )
  {
    v9 = &scrContext->m_varGlob.childVariableValue[result];
    if ( (*(_BYTE *)&v9->tn & 0x3F) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7233, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_POINTER )", (const char *)&queryFormat, "entryValue->GetType() == VAR_POINTER") )
      __debugbreak();
    if ( !v9->u.f.prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7234, ASSERT_TYPE_ASSERT, "( entryValue->u.u.pointerValue )", (const char *)&queryFormat, "GETVARPOINTER( entryValue )") )
      __debugbreak();
    return v9->u.f.prev;
  }
  return result;
}

/*
==============
Scr_FindField
==============
*/
__int64 Scr_FindField(const scrContext_t *scrContext, unsigned int name, VariableType *type)
{
  const char *i; 
  __int64 result; 
  VariableType v8; 

  if ( !scrContext->m_varPub.fieldBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8103, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.fieldBuffer )", (const char *)&queryFormat, "scrContext.m_varPub.fieldBuffer") )
    __debugbreak();
  for ( i = scrContext->m_varPub.fieldBuffer; ; i += 5 )
  {
    result = *(unsigned int *)i;
    if ( !(_DWORD)result )
      break;
    v8 = i[4];
    *type = v8;
    if ( name == (_DWORD)result )
      return result;
  }
  return 0i64;
}

/*
==============
Scr_FindVariableField
==============
*/
VariableValue *Scr_FindVariableField(VariableValue *result, scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  __int64 v4; 
  __int64 v8; 
  unsigned __int8 type; 
  unsigned __int8 v10; 
  unsigned int Variable; 
  VariableUnion v13; 

  v4 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4861, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  v8 = v4;
  type = scrContext->m_varGlob.objectVariableValue[v4].w.type;
  if ( (type == 26 || type < 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4862, ASSERT_TYPE_ASSERT, "( IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] ) )", (const char *)&queryFormat, "IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] )") )
    __debugbreak();
  v10 = scrContext->m_varGlob.objectVariableValue[v8].w.type;
  if ( (v10 <= 0x10u || v10 == 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4863, ASSERT_TYPE_ASSERT, "( (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_OBJECT && scrContext.m_varGlob.objectVariableValue[parentId].GetType() < VAR_FIRST_NONFIELD_OBJECT) || (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_DEAD_OBJECT) )", (const char *)&queryFormat, "(scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_OBJECT && scrContext.m_varGlob.objectVariableValue[parentId].GetType() < VAR_FIRST_NONFIELD_OBJECT) || (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_DEAD_OBJECT)") )
    __debugbreak();
  Variable = FindVariable(scrContext, v4, name);
  if ( Variable )
  {
    Scr_EvalVariable(result, scrContext, Variable);
  }
  else if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v8].w.type) == 23 )
  {
    Scr_EvalVariableEntityField_1_(result, scrContext, v4, name);
  }
  else
  {
    result->u = v13;
    result->type = VAR_UNDEFINED;
  }
  return result;
}

/*
==============
Scr_FindVariableField_NoCopyEntFieldArray
==============
*/
VariableValue *Scr_FindVariableField_NoCopyEntFieldArray(VariableValue *result, scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  Scr_FindVariableField_Internal_0_(result, scrContext, parentId, name);
  return result;
}

/*
==============
Scr_FindVariableField_NoCopyEntFieldArray_Out
==============
*/

void __fastcall Scr_FindVariableField_NoCopyEntFieldArray_Out(scrContext_t *scrContext, unsigned int parentId, unsigned int name, VariableValue *out)
{
  Scr_FindVariableField_Out_Internal_0_(scrContext, parentId, name, out);
}

/*
==============
Scr_FindVariableField_Out
==============
*/
void Scr_FindVariableField_Out(scrContext_t *scrContext, unsigned int parentId, unsigned int name, VariableValue *out)
{
  __int64 v4; 
  __int64 v8; 
  unsigned __int8 type; 
  unsigned __int8 v10; 
  unsigned int Variable; 

  v4 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4899, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  v8 = v4;
  type = scrContext->m_varGlob.objectVariableValue[v4].w.type;
  if ( (type == 26 || type < 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4900, ASSERT_TYPE_ASSERT, "( IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] ) )", (const char *)&queryFormat, "IsValidObject( &scrContext.m_varGlob.objectVariableValue[parentId] )") )
    __debugbreak();
  v10 = scrContext->m_varGlob.objectVariableValue[v8].w.type;
  if ( (v10 <= 0x10u || v10 == 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4901, ASSERT_TYPE_ASSERT, "( (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_OBJECT && scrContext.m_varGlob.objectVariableValue[parentId].GetType() < VAR_FIRST_NONFIELD_OBJECT) || (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_DEAD_OBJECT) )", (const char *)&queryFormat, "(scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_OBJECT && scrContext.m_varGlob.objectVariableValue[parentId].GetType() < VAR_FIRST_NONFIELD_OBJECT) || (scrContext.m_varGlob.objectVariableValue[parentId].GetType() >= VAR_FIRST_DEAD_OBJECT)") )
    __debugbreak();
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4902, ASSERT_TYPE_ASSERT, "( out )", (const char *)&queryFormat, "out") )
    __debugbreak();
  Variable = FindVariable(scrContext, v4, name);
  if ( Variable )
  {
    Scr_EvalVariable_Out(scrContext, Variable, out);
  }
  else if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v8].w.type) == 23 )
  {
    Scr_EvalVariableEntityField_Out_1_(scrContext, v4, name, out);
  }
  else
  {
    out->type = VAR_UNDEFINED;
  }
}

/*
==============
Scr_FixupFreeLists
==============
*/
void Scr_FixupFreeLists(scrContext_t *scrContext)
{
  ObjectVariableValue *objectVariableValue; 
  unsigned int v3; 
  unsigned int m_variableListParentSize; 
  ObjectVariableValue *v5; 
  unsigned int v6; 
  unsigned int i; 
  unsigned int v8; 
  ChildVariableValue *childVariableValue; 
  ChildVariableValue *v10; 
  unsigned int m_variableListChildSize; 
  ChildVariableValue *v12; 

  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  if ( LOBYTE(objectVariableValue->w.type) != 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2936, ASSERT_TYPE_ASSERT, "(value->GetType() == VAR_FREE)", (const char *)&queryFormat, "value->GetType() == VAR_FREE") )
    __debugbreak();
  v3 = 1;
  m_variableListParentSize = scrContext->m_variableListParentSize;
  v5 = scrContext->m_varGlob.objectVariableValue + 1;
  v6 = 1;
  for ( i = 0; v6 < m_variableListParentSize; ++v5 )
  {
    if ( LOBYTE(v5->w.type) == 26 )
    {
      objectVariableValue->u.f.next = v6;
      objectVariableValue = v5;
      v5->u.f.prev = i;
      i = v6;
    }
    ++v6;
  }
  objectVariableValue->u.f.next = 0;
  v8 = 0;
  scrContext->m_varGlob.objectVariableValue->u.f.prev = i;
  childVariableValue = scrContext->m_varGlob.childVariableValue;
  v10 = childVariableValue;
  if ( (*(_BYTE *)&childVariableValue->tn & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2904, ASSERT_TYPE_ASSERT, "( value->GetType() == VAR_UNDEFINED )", (const char *)&queryFormat, "value->GetType() == VAR_UNDEFINED") )
    __debugbreak();
  m_variableListChildSize = scrContext->m_variableListChildSize;
  v12 = childVariableValue + 1;
  if ( m_variableListChildSize > 1 )
  {
    do
    {
      if ( (*(_BYTE *)&v12->tn & 0x3F) == 26 )
      {
        v10->u.f.next = v3;
        v10 = v12;
        v12->u.f.prev = v8;
        v8 = v3;
      }
      ++v3;
      ++v12;
    }
    while ( v3 < m_variableListChildSize );
  }
  v10->u.f.next = 0;
  scrContext->m_varGlob.childVariableValue->u.f.prev = v8;
}

/*
==============
Scr_FreeEntityList
==============
*/
void Scr_FreeEntityList(scrContext_t *scrContext)
{
  unsigned int i; 
  ObjectVariableValue *v3; 

  if ( scrContext->m_varDebugPub.m_Inited )
    --scrContext->m_varDebugPub.extRefCount[scrContext->m_varPub.freeEntList];
  if ( scrContext->m_varPub.bInited )
  {
    for ( i = scrContext->m_varPub.freeEntList; i; i = scrContext->m_varPub.freeEntList )
    {
      v3 = &scrContext->m_varGlob.objectVariableValue[i];
      scrContext->m_varPub.freeEntList = v3->u.f.next;
      v3->u.f.next = 0;
      Scr_CancelNotifyList(scrContext, i);
      if ( scrContext->m_varGlob.objectVariableChildren[i].firstChild )
        ClearObjectInternal(scrContext, i);
      RemoveRefToObject(scrContext, i);
    }
  }
  else
  {
    if ( scrContext->m_hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7059, ASSERT_TYPE_ASSERT, "( !scrContext.m_hunkUser )", (const char *)&queryFormat, "!scrContext.m_hunkUser") )
      __debugbreak();
    if ( scrContext->m_varPub.freeEntList )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7060, ASSERT_TYPE_ASSERT, "( !pScrVarPub->freeEntList )", (const char *)&queryFormat, "!pScrVarPub->freeEntList") )
        __debugbreak();
    }
  }
}

/*
==============
Scr_FreeEntityNum
==============
*/
void Scr_FreeEntityNum(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum)
{
  if ( scrContext->m_Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6979, ASSERT_TYPE_ASSERT, "( scrContext.m_Instance == SCRIPTINSTANCE_SERVER )", (const char *)&queryFormat, "scrContext.m_Instance == SCRIPTINSTANCE_SERVER") )
    __debugbreak();
  Scr_FreeEntityNumForLocalClient(scrContext, entnum, classnum, LOCAL_CLIENT_0);
}

/*
==============
Scr_FreeEntityNumForLocalClient
==============
*/
void Scr_FreeEntityNumForLocalClient(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum, LocalClientNum_t localClientNum)
{
  unsigned int entArrayId; 
  unsigned int ArrayVariable; 
  unsigned int Object; 
  __int64 v11; 
  ObjectVariableValue *v12; 

  if ( scrContext->m_varPub.bInited )
  {
    entArrayId = scrContext->m_varPub.m_classMap[(unsigned __int8)classnum].entArrayId;
    if ( entArrayId )
    {
      if ( classnum != ENTITY_CLASS_SCRIPTABLE && entnum > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4507, ASSERT_TYPE_ASSERT, "( entnum ) <= ( 0xffff )", "entnum <= USHRT_MAX\n\t%i, %i", entnum, 0xFFFF) )
        __debugbreak();
      ArrayVariable = FindArrayVariable(scrContext, entArrayId, entnum);
      if ( ArrayVariable )
      {
        Object = FindObject(scrContext, ArrayVariable);
        v11 = Object;
        if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7014, ASSERT_TYPE_ASSERT, "( entId )", (const char *)&queryFormat, "entId") )
          __debugbreak();
        v12 = &scrContext->m_varGlob.objectVariableValue[v11];
        if ( LOBYTE(v12->w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7017, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_ENTITY )", (const char *)&queryFormat, "entryValue->GetType() == VAR_ENTITY") )
          __debugbreak();
        if ( v12->u.f.next != entnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7018, ASSERT_TYPE_ASSERT, "( entryValue->GetEntnum() == entnum )", (const char *)&queryFormat, "entryValue->GetEntnum() == entnum") )
          __debugbreak();
        if ( BYTE1(v12->w.type) != classnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7019, ASSERT_TYPE_ASSERT, "( entryValue->GetEntityClass() == classnum )", (const char *)&queryFormat, "entryValue->GetEntityClass() == classnum") )
          __debugbreak();
        if ( BYTE2(v12->w.entInfo) - 1 != localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7020, ASSERT_TYPE_ASSERT, "( entryValue->GetLocalClientNum() == localClientNum )", (const char *)&queryFormat, "entryValue->GetLocalClientNum() == localClientNum") )
          __debugbreak();
        v12->w.type &= 0xFFFFFF16;
        v12->w.type |= 0x16u;
        AddRefToObject(scrContext, v11);
        v12->u.f.next = scrContext->m_varPub.freeEntList;
        if ( scrContext->m_varDebugPub.m_Inited )
          --scrContext->m_varDebugPub.extRefCount[scrContext->m_varPub.freeEntList];
        scrContext->m_varPub.freeEntList = v11;
        if ( scrContext->m_varDebugPub.m_Inited )
          ++scrContext->m_varDebugPub.extRefCount[v11];
        RemoveArrayVariable(scrContext, entArrayId, entnum);
      }
    }
    else if ( !Com_ErrorEntered() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7001, ASSERT_TYPE_ASSERT, "( Com_ErrorEntered() )", "Missing entArrayId for %i, should not happen unless we're in an error scenario", (unsigned __int8)classnum) )
    {
      __debugbreak();
    }
  }
}

/*
==============
Scr_FreeExtArray
==============
*/
void Scr_FreeExtArray(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8492, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v2].w.type) != 26 )
  {
    if ( scrContext->m_varDebugPub.m_Inited )
      --scrContext->m_varDebugPub.extRefCount[v2];
    RemoveRefToObject(scrContext, v2);
  }
}

/*
==============
Scr_FreeGameVariable
==============
*/
void Scr_FreeGameVariable(scrContext_t *scrContext)
{
  unsigned int gameId; 

  gameId = scrContext->m_varPub.gameId;
  if ( gameId )
  {
    FreeValue(scrContext, gameId);
    scrContext->m_varPub.gameId = 0;
  }
}

/*
==============
Scr_FreeObjects
==============
*/
void Scr_FreeObjects(scrContext_t *scrContext)
{
  unsigned int m_variableListParentSize; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  char type; 

  if ( scrContext->m_varPub.bInited )
  {
    if ( scrContext->m_varPub.notifyArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7092, ASSERT_TYPE_ASSERT, "(!scrContext.m_varPub.notifyArrayId)", (const char *)&queryFormat, "!scrContext.m_varPub.notifyArrayId") )
      __debugbreak();
    m_variableListParentSize = scrContext->m_variableListParentSize;
    v3 = 1;
    if ( m_variableListParentSize > 1 )
    {
      v4 = 1i64;
      v5 = 1i64;
      v6 = 1i64;
      do
      {
        if ( !scrContext->m_varPub.saveIdMap[v4] )
        {
          type = scrContext->m_varGlob.objectVariableValue[v6].w.type;
          if ( type == 21 )
          {
            ClearObject(scrContext, v3);
          }
          else if ( type == 22 && scrContext->m_varGlob.objectVariableChildren[v5].firstChild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7106, ASSERT_TYPE_ASSERT, "(!scrContext.m_varGlob.objectVariableChildren[id].firstChild)", (const char *)&queryFormat, "!scrContext.m_varGlob.objectVariableChildren[id].firstChild") )
          {
            __debugbreak();
          }
        }
        ++v3;
        ++v4;
        ++v6;
        ++v5;
      }
      while ( v3 < m_variableListParentSize );
    }
  }
}

/*
==============
Scr_GetArrayIndexValue
==============
*/
VariableValue *Scr_GetArrayIndexValue(VariableValue *result, unsigned int name)
{
  VariableValue *v4; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5048, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( name >= 0x80000 )
  {
    if ( name >= 0xC0000 )
    {
      result->type = VAR_INTEGER;
      result->u.intValue = name - 0x800000;
    }
    else
    {
      result->type = VAR_POINTER;
      result->u.intValue = name - 0x80000;
    }
    return result;
  }
  else
  {
    result->u.intValue = name;
    v4 = result;
    result->type = VAR_STRING;
  }
  return v4;
}

/*
==============
Scr_GetArrayIndexValue_Out
==============
*/
void Scr_GetArrayIndexValue_Out(unsigned int name, VariableValue *out)
{
  VariableType v4; 

  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5027, ASSERT_TYPE_ASSERT, "( out )", (const char *)&queryFormat, "out") )
    __debugbreak();
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5028, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    {
      __debugbreak();
      v4 = VAR_STRING;
      goto LABEL_12;
    }
LABEL_8:
    v4 = VAR_STRING;
    goto LABEL_12;
  }
  if ( name < 0x80000 )
    goto LABEL_8;
  if ( name >= 0xC0000 )
  {
    v4 = VAR_INTEGER;
    name -= 0x800000;
  }
  else
  {
    v4 = VAR_POINTER;
    name -= 0x80000;
  }
LABEL_12:
  MakeVariableValue_Out(v4, name, out);
}

/*
==============
Scr_GetChecksum
==============
*/
void Scr_GetChecksum(const scrContext_t *scrContext, int *checksum)
{
  if ( !scrContext->m_varPub.endScriptBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8554, ASSERT_TYPE_ASSERT, "( pScrVarPub->endScriptBuffer )", (const char *)&queryFormat, "pScrVarPub->endScriptBuffer") )
    __debugbreak();
  if ( scrContext->m_varPub.programBuffer > scrContext->m_varPub.endScriptBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8555, ASSERT_TYPE_ASSERT, "( pScrVarPub->programBuffer <= pScrVarPub->endScriptBuffer )", (const char *)&queryFormat, "pScrVarPub->programBuffer <= pScrVarPub->endScriptBuffer") )
    __debugbreak();
  if ( !scrContext->m_varPub.programBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8557, ASSERT_TYPE_ASSERT, "( pScrVarPub->programBuffer )", (const char *)&queryFormat, "pScrVarPub->programBuffer") )
    __debugbreak();
  *checksum = scrContext->m_varPub.checksum;
  checksum[1] = scrContext->m_compilePub.programLen;
  checksum[2] = truncate_cast<int,__int64>(scrContext->m_varPub.endScriptBuffer - scrContext->m_varPub.programBuffer);
}

/*
==============
Scr_GetChildStringValue
==============
*/
__int64 Scr_GetChildStringValue(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ChildVariableValue *v4; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5334, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  v4 = &scrContext->m_varGlob.childVariableValue[v2];
  if ( (*(_BYTE *)&v4->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5336, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
    __debugbreak();
  if ( (*(_BYTE *)&v4->tn & 0x3F) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5337, ASSERT_TYPE_ASSERT, "( entryValue->GetType() != VAR_UNDEFINED )", (const char *)&queryFormat, "entryValue->GetType() != VAR_UNDEFINED") )
    __debugbreak();
  return v4->u.f.prev;
}

/*
==============
Scr_GetClassnumForCharId
==============
*/
EntityClass Scr_GetClassnumForCharId(const scrContext_t *scrContext, char charId)
{
  int v2; 

  v2 = 0;
  while ( scrContext->m_varPub.m_classMap[v2].charId != charId )
  {
    if ( ++v2 >= 11 )
    {
      LOBYTE(v2) = 11;
      return (char)v2;
    }
  }
  return (char)v2;
}

/*
==============
Scr_GetEndonUsage
==============
*/
float Scr_GetEndonUsage(scrContext_t *scrContext, unsigned int parentId)
{
  unsigned int Variable; 
  unsigned int Object; 
  unsigned int FirstSibling; 

  if ( !IsValidObject(&scrContext->m_varGlob.objectVariableValue[parentId]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8012, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  Variable = FindVariable(scrContext, scrContext->m_varPub.pauseArrayId, parentId + 0x80000);
  if ( Variable )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    Object = FindObject(scrContext, Variable);
    FirstSibling = FindFirstSibling(scrContext, Object);
    if ( FirstSibling )
    {
      __asm
      {
        vmovaps [rsp+58h+var_28], xmm7
        vmovss  xmm7, cs:__real@3f800000
      }
      do
      {
        __asm { vaddss  xmm6, xmm6, xmm7 }
        FirstSibling = FindNextSibling(scrContext, FirstSibling);
      }
      while ( FirstSibling );
      __asm { vmovaps xmm7, [rsp+58h+var_28] }
    }
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
Scr_GetEntClassId
==============
*/
__int64 Scr_GetEntClassId(const scrContext_t *scrContext, unsigned int id)
{
  __int64 v3; 

  v3 = id;
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6061, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, id ) == VAR_ENTITY )", (const char *)&queryFormat, "GetObjectType( scrContext, id ) == VAR_ENTITY") )
    __debugbreak();
  return (unsigned __int8)scrContext->m_varPub.m_classMap[BYTE1(scrContext->m_varGlob.objectVariableValue[v3].w.type)].charId;
}

/*
==============
Scr_GetEntNum
==============
*/
__int64 Scr_GetEntNum(const scrContext_t *scrContext, unsigned int id)
{
  unsigned __int64 v3; 
  ObjectVariableValue *objectVariableValue; 

  v3 = id;
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v3].w.type) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
    __debugbreak();
  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  if ( LOBYTE(objectVariableValue[v3].w.type) != 23 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6069, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, id ) == VAR_ENTITY )", (const char *)&queryFormat, "GetObjectType( scrContext, id ) == VAR_ENTITY") )
      __debugbreak();
    objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  }
  return objectVariableValue[v3].u.f.next;
}

/*
==============
Scr_GetEntityId
==============
*/
__int64 Scr_GetEntityId(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum, LocalClientNum_t localClientNum)
{
  unsigned int entArrayId; 
  unsigned int Variable; 
  __int64 v10; 
  ChildVariableValue *v11; 
  char v12; 
  __int64 result; 
  ObjectVariableValue *v14; 
  unsigned int index; 

  Scr_CheckThreadForInstance(scrContext->m_Instance);
  if ( classnum != ENTITY_CLASS_SCRIPTABLE && entnum > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4507, ASSERT_TYPE_ASSERT, "( entnum ) <= ( 0xffff )", "entnum <= USHRT_MAX\n\t%i, %i", entnum, 0xFFFF) )
    __debugbreak();
  entArrayId = scrContext->m_varPub.m_classMap[(unsigned __int8)classnum].entArrayId;
  if ( !entArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7252, ASSERT_TYPE_ASSERT, "( entArrayId )", (const char *)&queryFormat, "entArrayId") )
    __debugbreak();
  if ( entnum + 7602176 > 0xF3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4805, ASSERT_TYPE_ASSERT, "( IsValidArrayIndex( unsignedValue ) )", (const char *)&queryFormat, "IsValidArrayIndex( unsignedValue )") )
    __debugbreak();
  Variable = GetVariable(scrContext, entArrayId, (entnum - 0x800000) & 0xFFFFFF);
  v10 = Variable;
  if ( !Variable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7255, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  v11 = &scrContext->m_varGlob.childVariableValue[v10];
  v12 = *(_BYTE *)&v11->tn & 0x3F;
  if ( v12 )
  {
    if ( v12 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7260, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_POINTER )", (const char *)&queryFormat, "entryValue->GetType() == VAR_POINTER") )
      __debugbreak();
    return v11->u.f.prev;
  }
  else
  {
    v14 = AllocVariable(scrContext, &index);
    v14->u.f.next = entnum;
    v14->w.type = ((localClientNum << 16) + 0x10000) | ((unsigned __int8)classnum << 8) | 0x17;
    v14->u.o.refCount = 0;
    *(_WORD *)&v11->tn &= 0xFFC1u;
    result = index;
    *(_WORD *)&v11->tn |= 1u;
    v11->u.f.prev = result;
  }
  return result;
}

/*
==============
Scr_GetEntityIdRef
==============
*/
scr_entref_t Scr_GetEntityIdRef(scrContext_t *scrContext, unsigned int entId)
{
  ObjectVariableValue *v2; 
  __int64 v4; 

  v2 = &scrContext->m_varGlob.objectVariableValue[entId];
  if ( LOBYTE(v2->w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7809, ASSERT_TYPE_ASSERT, "( entValue->GetType() == VAR_ENTITY )", (const char *)&queryFormat, "entValue->GetType() == VAR_ENTITY") )
    __debugbreak();
  if ( BYTE1(v2->w.type) >= 0xBu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7810, ASSERT_TYPE_ASSERT, "( entValue->GetEntityClass() < ENTITY_CLASS_COUNT )", (const char *)&queryFormat, "entValue->GetEntityClass() < ENTITY_CLASS_COUNT") )
    __debugbreak();
  LODWORD(v4) = v2->u.f.next;
  BYTE4(v4) = BYTE1(v2->w.type);
  return (scr_entref_t)v4;
}

/*
==============
Scr_GetEntryUsage
==============
*/
float Scr_GetEntryUsage(scrContext_t *scrContext, unsigned int type, VariableUnion u)
{
  int intValue; 
  ObjectVariableValue *v7; 

  intValue = u.intValue;
  if ( type != 1 )
    goto LABEL_10;
  if ( u.intValue >= scrContext->m_variableListParentSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7979, ASSERT_TYPE_ASSERT, "(unsigned)( u.pointerValue ) < (unsigned)( scrContext.m_variableListParentSize )", "u.pointerValue doesn't index scrContext.m_variableListParentSize\n\t%i not in [0, %i)", u.intValue, scrContext->m_variableListParentSize) )
    __debugbreak();
  v7 = &scrContext->m_varGlob.objectVariableValue[intValue];
  if ( !IsValidObject(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7981, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  if ( LOBYTE(v7->w.type) == 24 )
  {
    *(float *)&_XMM0 = Scr_GetObjectUsage(scrContext, intValue);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vaddss  xmm2, xmm1, cs:__real@3f800000
      vdivss  xmm0, xmm0, xmm2
    }
  }
  else
  {
LABEL_10:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
Scr_GetHWMChildScriptVars
==============
*/
__int64 Scr_GetHWMChildScriptVars(const scrContext_t *scrContext)
{
  return scrContext->m_varPub.hwmScriptValues;
}

/*
==============
Scr_GetHWMParentScriptVars
==============
*/
__int64 Scr_GetHWMParentScriptVars(const scrContext_t *scrContext)
{
  return scrContext->m_varPub.hwmScriptObjects;
}

/*
==============
Scr_GetMaxChildScriptVars
==============
*/
__int64 Scr_GetMaxChildScriptVars(const scrContext_t *scrContext)
{
  return scrContext->m_variableListChildSize;
}

/*
==============
Scr_GetMaxDevChildScriptVars
==============
*/
__int64 Scr_GetMaxDevChildScriptVars(const scrContext_t *scrContext)
{
  return scrContext->m_variableListChildSizeDev;
}

/*
==============
Scr_GetMaxDevParentScriptVars
==============
*/
__int64 Scr_GetMaxDevParentScriptVars(const scrContext_t *scrContext)
{
  return scrContext->m_variableListParentSizeDev;
}

/*
==============
Scr_GetMaxParentScriptVars
==============
*/
__int64 Scr_GetMaxParentScriptVars(const scrContext_t *scrContext)
{
  return scrContext->m_variableListParentSize;
}

/*
==============
Scr_GetNameForType
==============
*/
const char *Scr_GetNameForType(VariableType type)
{
  VariableType v2; 
  int v4; 
  int v5; 

  if ( (unsigned __int8)type >= VAR_COUNT )
  {
    v5 = 26;
    v4 = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2725, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( VAR_COUNT )", "type doesn't index VAR_COUNT\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = VAR_TOTAL_COUNT;
  if ( (unsigned __int8)type <= VAR_TOTAL_COUNT )
    v2 = type;
  return var_typename[(unsigned __int8)v2];
}

/*
==============
Scr_GetNameForTypeExtended
==============
*/
const char *Scr_GetNameForTypeExtended(VariableType type)
{
  VariableType v1; 
  int v4; 
  int v5; 

  v1 = VAR_TOTAL_COUNT;
  if ( (unsigned __int8)type >= VAR_TOTAL_COUNT )
  {
    v5 = 29;
    v4 = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 861, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( VAR_TOTAL_COUNT )", "type doesn't index VAR_TOTAL_COUNT\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( (unsigned __int8)type <= VAR_TOTAL_COUNT )
    v1 = type;
  return var_typename[(unsigned __int8)v1];
}

/*
==============
Scr_GetNumChildScriptVars
==============
*/
__int64 Scr_GetNumChildScriptVars(const scrContext_t *scrContext)
{
  return scrContext->m_varPub.numScriptValues;
}

/*
==============
Scr_GetNumParentScriptVars
==============
*/
__int64 Scr_GetNumParentScriptVars(const scrContext_t *scrContext)
{
  return scrContext->m_varPub.numScriptObjects;
}

/*
==============
Scr_GetNumScriptVars
==============
*/
__int64 Scr_GetNumScriptVars(const scrContext_t *scrContext)
{
  return scrContext->m_varPub.numScriptValues + scrContext->m_varPub.numScriptObjects;
}

/*
==============
Scr_GetObjectUsage
==============
*/
float Scr_GetObjectUsage(scrContext_t *scrContext, unsigned int parentId)
{
  unsigned int FirstSibling; 
  ChildVariableValue *v10; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !IsValidObject(&scrContext->m_varGlob.objectVariableValue[parentId]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8041, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, xmm6 }
  FirstSibling = FindFirstSibling(scrContext, parentId);
  if ( FirstSibling )
  {
    __asm
    {
      vmovaps [rsp+58h+var_28], xmm7
      vmovss  xmm7, cs:__real@3f800000
    }
    do
    {
      v10 = &scrContext->m_varGlob.childVariableValue[FirstSibling];
      *(float *)&_XMM0 = Scr_GetEntryUsage(scrContext, *(_BYTE *)&v10->tn & 0x3F, v10->u.u);
      __asm
      {
        vaddss  xmm1, xmm0, xmm7
        vaddss  xmm6, xmm6, xmm1
      }
      FirstSibling = FindNextSibling(scrContext, FirstSibling);
    }
    while ( FirstSibling );
    __asm
    {
      vmovaps xmm7, [rsp+58h+var_28]
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  else
  {
    __asm
    {
      vmovaps xmm6, [rsp+58h+var_18]
      vxorps  xmm0, xmm0, xmm0
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
Scr_GetOffset
==============
*/
__int64 Scr_GetOffset(scrContext_t *scrContext, EntityClass classnum, const char *name)
{
  unsigned int id; 
  unsigned int v5; 
  unsigned int Variable; 

  id = scrContext->m_varPub.m_classMap[(unsigned __int8)classnum].id;
  v5 = SL_ConvertFromString(name);
  Variable = FindVariable(scrContext, id, v5);
  if ( Variable )
    return scrContext->m_varGlob.childVariableValue[Variable].u.f.prev;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
Scr_GetRefCountToObject
==============
*/
__int64 Scr_GetRefCountToObject(const scrContext_t *scrContext, unsigned int id)
{
  const ObjectVariableValue *v2; 

  v2 = &scrContext->m_varGlob.objectVariableValue[id];
  if ( !IsValidObject(v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4630, ASSERT_TYPE_ASSERT, "( IsValidObject( entryValue ) )", (const char *)&queryFormat, "IsValidObject( entryValue )") )
    __debugbreak();
  return v2->u.o.refCount;
}

/*
==============
Scr_GetSelf
==============
*/
__int64 Scr_GetSelf(scrContext_t *scrContext, unsigned int threadId)
{
  ObjectVariableValue *v2; 

  v2 = &scrContext->m_varGlob.objectVariableValue[threadId];
  if ( (unsigned __int8)(LOBYTE(v2->w.type) - 17) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4447, ASSERT_TYPE_ASSERT, "( (entryValue->GetType() >= VAR_THREAD) && (entryValue->GetType() <= VAR_CHILD_THREAD) )", (const char *)&queryFormat, "(entryValue->GetType() >= VAR_THREAD) && (entryValue->GetType() <= VAR_CHILD_THREAD)") )
    __debugbreak();
  return v2->u.f.next;
}

/*
==============
Scr_GetShortNameForType
==============
*/
const char *Scr_GetShortNameForType(VariableType type)
{
  int v3; 
  int v4; 

  if ( (unsigned __int8)type >= VAR_COUNT )
  {
    v4 = 26;
    v3 = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 579, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( VAR_COUNT )", "type doesn't index VAR_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return var_shorttypename[(unsigned __int8)type];
}

/*
==============
Scr_GetThreadNotifyName
==============
*/
__int64 Scr_GetThreadNotifyName(scrContext_t *scrContext, unsigned int startLocalId)
{
  ObjectVariableValue *v2; 

  v2 = &scrContext->m_varGlob.objectVariableValue[startLocalId];
  if ( LOBYTE(v2->w.type) != 18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3902, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "entryValue->GetType() == VAR_NOTIFY_THREAD") )
    __debugbreak();
  return v2->w.type >> 8;
}

/*
==============
Scr_GetThreadWaitTime
==============
*/
__int64 Scr_GetThreadWaitTime(scrContext_t *scrContext, unsigned int startLocalId)
{
  __int64 v2; 
  ObjectVariableValue *objectVariableValue; 
  bool v5; 
  ObjectVariableValue *v6; 

  v2 = startLocalId;
  if ( !startLocalId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3932, ASSERT_TYPE_ASSERT, "( startLocalId )", (const char *)&queryFormat, "startLocalId") )
    __debugbreak();
  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  v5 = LOBYTE(objectVariableValue[v2].w.type) == 19;
  v6 = &objectVariableValue[v2];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3934, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_TIME_THREAD )", (const char *)&queryFormat, "entryValue->GetType() == VAR_TIME_THREAD") )
    __debugbreak();
  return v6->w.type >> 8;
}

/*
==============
Scr_GetVariableFieldIndex
==============
*/
unsigned int Scr_GetVariableFieldIndex(scrContext_t *scrContext, unsigned int parentId, unsigned int name)
{
  __int64 v3; 
  ObjectVariableValue *v6; 
  VariableType type; 
  unsigned int result; 
  const char *NameForType; 
  const char *v10; 

  v3 = parentId;
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4825, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  v6 = &scrContext->m_varGlob.objectVariableValue[v3];
  if ( !IsValidObject(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4827, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  type = v6->w.type;
  if ( (unsigned __int8)type <= VAR_OBJECT )
    return GetVariable(scrContext, v3, name);
  if ( type == VAR_ENTITY )
  {
    result = FindVariable(scrContext, v3, name);
    if ( result )
      return result;
    scrContext->m_varPub.entId = v3;
    scrContext->m_varPub.entFieldName = name;
  }
  else
  {
    NameForType = Scr_GetNameForType(type);
    v10 = j_va("cannot set field of %s", NameForType);
    Scr_Error(COM_ERR_5227, scrContext, v10);
  }
  return 0;
}

/*
==============
Scr_InitClassMap
==============
*/
void Scr_InitClassMap(scrContext_t *scrContext)
{
  *(_QWORD *)&scrContext->m_varPub.m_classMap[0].id = 0i64;
  *(_QWORD *)&scrContext->m_varPub.m_classMap[1].id = 0i64;
  *(_QWORD *)&scrContext->m_varPub.m_classMap[2].id = 0i64;
  *(_QWORD *)&scrContext->m_varPub.m_classMap[3].id = 0i64;
  *(_QWORD *)&scrContext->m_varPub.m_classMap[4].id = 0i64;
  *(_QWORD *)&scrContext->m_varPub.m_classMap[5].id = 0i64;
  *(_QWORD *)&scrContext->m_varPub.m_classMap[6].id = 0i64;
  *(_QWORD *)&scrContext->m_varPub.m_classMap[7].id = 0i64;
  *(_QWORD *)&scrContext->m_varPub.m_classMap[8].id = 0i64;
  *(_QWORD *)&scrContext->m_varPub.m_classMap[9].id = 0i64;
  *(_QWORD *)&scrContext->m_varPub.m_classMap[10].id = 0i64;
}

/*
==============
Scr_InitStringSet
==============
*/
__int64 Scr_InitStringSet(scrContext_t *scrContext)
{
  const char *m_scriptPos; 
  ObjectVariableValue *v3; 
  __int64 result; 
  unsigned int index; 

  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  if ( !m_scriptPos )
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script array variable>";
  v3 = AllocVariable(scrContext, &index);
  v3->w.type = 24;
  v3->u.o.refCount = 0;
  v3->u.f.next = 0;
  result = index;
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  return result;
}

/*
==============
Scr_InitVariables
==============
*/
void Scr_InitVariables(scrContext_t *scrContext)
{
  __int64 m_variableListParentSize; 
  __int64 m_variableListChildSize; 
  unsigned int v4; 
  unsigned int v5; 
  ObjectVariableValue *objectVariableValue; 
  int v7; 
  ObjectVariableChildren *objectVariableChildren; 
  int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  ChildVariableValue *childVariableValue; 
  __int64 v14; 
  unsigned int v15; 
  ChildVariableValue *v16; 
  __int64 v18; 
  ChildVariableValue *v28; 
  unsigned int index; 

  m_variableListParentSize = scrContext->m_variableListParentSize;
  m_variableListChildSize = scrContext->m_variableListChildSize;
  scrContext->m_varDebugPub.m_Inited = 1;
  memset_0(scrContext->m_varDebugPub.objectLeakCount, 0, 4 * m_variableListParentSize);
  memset_0(scrContext->m_varDebugPub.childLeakCount, 0, 4 * m_variableListChildSize);
  scrContext->m_varPub.totalObjectRefCount = 0;
  scrContext->m_varPub.totalVectorRefCount = 0;
  if ( !scrContext->m_varDebugPub.m_Inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2849, ASSERT_TYPE_ASSERT, "(scrContext.m_varDebugPub.m_Inited)", (const char *)&queryFormat, "scrContext.m_varDebugPub.m_Inited") )
    __debugbreak();
  memset_0(scrContext->m_varDebugPub.extRefCount, 0, 2 * m_variableListParentSize);
  scrContext->m_varPub.numScriptValues = 0;
  scrContext->m_varPub.numScriptObjects = 0;
  *(_QWORD *)&scrContext->m_varPub.hwmScriptValues = 0i64;
  if ( !scrContext->m_varDebugPub.m_Inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2861, ASSERT_TYPE_ASSERT, "(scrContext.m_varDebugPub.m_Inited)", (const char *)&queryFormat, "scrContext.m_varDebugPub.m_Inited") )
    __debugbreak();
  memset_0(scrContext->m_varDebugPub.objectVarUsage, 0, 8 * m_variableListParentSize);
  memset_0(scrContext->m_varDebugPub.childVarUsage, 0, 8 * m_variableListChildSize);
  v4 = scrContext->m_variableListParentSize;
  v5 = 0;
  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  v7 = -1;
  objectVariableChildren = scrContext->m_varGlob.objectVariableChildren;
  if ( v4 )
  {
    v9 = -1;
    v5 = scrContext->m_variableListParentSize;
    v10 = v4;
    do
    {
      objectVariableValue->u.f.prev = v9;
      objectVariableValue->u.f.next = v9 + 2;
      ++objectVariableChildren;
      objectVariableValue->w.type = 26;
      ++v9;
      ++objectVariableValue;
      objectVariableChildren[-1] = 0i64;
      --v10;
    }
    while ( v10 );
  }
  objectVariableValue[-1].u.f.next = 0;
  v11 = 0;
  scrContext->m_varGlob.objectVariableValue->u.f.prev = v5 - 1;
  v12 = scrContext->m_variableListChildSize;
  childVariableValue = scrContext->m_varGlob.childVariableValue;
  if ( v12 )
  {
    v11 = scrContext->m_variableListChildSize;
    v14 = v12;
    do
    {
      *(_WORD *)&childVariableValue->tn &= 0xFFDAu;
      v15 = v7 + 2;
      *(_WORD *)&childVariableValue->tn |= 0x1Au;
      childVariableValue->u.f.prev = v7++;
      childVariableValue->u.f.next = v15;
      ++childVariableValue;
      --v14;
    }
    while ( v14 );
  }
  childVariableValue[-1].u.f.next = 0;
  v16 = scrContext->m_varGlob.childVariableValue;
  *(_WORD *)&v16->tn &= 0xFFC0u;
  v16->u.f.prev = v11 - 1;
  memset_0(scrContext->m_varGlob.childVariableBucket, 0, 0x40000ui64);
  _RCX = scrContext->m_varPub.m_classMap;
  v18 = 2i64;
  _RAX = g_classMapTemplate;
  do
  {
    _RCX = (scr_classStruct_t *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (scr_classStruct_t *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v18;
  }
  while ( v18 );
  *(_QWORD *)&_RCX->id = *(_QWORD *)&_RAX->id;
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script temp variable>";
  v28 = AllocChildVariable(scrContext, &index);
  *(_WORD *)&v28->tn &= 0xFFC0u;
  v28->k.match &= 0x3FFFu;
  scrContext->m_varPub.tempVariable = index;
  scrContext->m_varPub.varUsagePos.m_genericPos = 0i64;
  scrContext->m_varPub.bInited = 1;
}

/*
==============
Scr_IsThreadAlive
==============
*/
_BOOL8 Scr_IsThreadAlive(const scrContext_t *scrContext, unsigned int thread)
{
  __int64 v2; 
  ObjectVariableValue *objectVariableValue; 
  char type; 
  ObjectVariableValue *v6; 

  v2 = thread;
  if ( !scrContext->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5882, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.timeArrayId )", (const char *)&queryFormat, "scrContext.m_varPub.timeArrayId") )
    __debugbreak();
  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  type = objectVariableValue[v2].w.type;
  v6 = &objectVariableValue[v2];
  if ( (unsigned __int8)(type - 17) > 3u && type != 25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5885, ASSERT_TYPE_ASSERT, "( (entryValue->GetType() >= VAR_THREAD && entryValue->GetType() <= VAR_CHILD_THREAD) || entryValue->GetType() == VAR_DEAD_THREAD )", (const char *)&queryFormat, "(entryValue->GetType() >= VAR_THREAD && entryValue->GetType() <= VAR_CHILD_THREAD) || entryValue->GetType() == VAR_DEAD_THREAD") )
    __debugbreak();
  return LOBYTE(v6->w.type) != 25;
}

/*
==============
Scr_KillEndonThread
==============
*/
void Scr_KillEndonThread(scrContext_t *scrContext, unsigned int threadId)
{
  __int64 v2; 
  ObjectVariableValue *v4; 

  v2 = threadId;
  v4 = &scrContext->m_varGlob.objectVariableValue[threadId];
  if ( LOBYTE(v4->w.type) != 17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4063, ASSERT_TYPE_ASSERT, "( parentValue->GetType() == VAR_THREAD )", (const char *)&queryFormat, "parentValue->GetType() == VAR_THREAD") )
    __debugbreak();
  if ( scrContext->m_varGlob.objectVariableChildren[v2].firstChild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4064, ASSERT_TYPE_ASSERT, "( !scrContext.m_varGlob.objectVariableChildren[threadId].firstChild )", (const char *)&queryFormat, "!scrContext.m_varGlob.objectVariableChildren[threadId].firstChild") )
    __debugbreak();
  RemoveRefToObject(scrContext, v4->u.f.next);
  if ( FindVariable(scrContext, scrContext->m_varPub.pauseArrayId, v2 + 0x80000) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4068, ASSERT_TYPE_ASSERT, "( !FindObjectVariable( scrContext, scrContext.m_varPub.pauseArrayId, threadId ) )", (const char *)&queryFormat, "!FindObjectVariable( scrContext, scrContext.m_varPub.pauseArrayId, threadId )") )
    __debugbreak();
  v4->w.type &= 0xFFFFFF19;
  v4->w.type |= 0x19u;
}

/*
==============
Scr_KillThread
==============
*/
void Scr_KillThread(scrContext_t *scrContext, unsigned int parentId)
{
  __int64 v3; 
  unsigned int *m_debugCallStack; 
  unsigned int v5; 
  DebugCallStackEntry2 *v6; 
  unsigned int next; 
  ObjectVariableValue *v8; 
  unsigned int Variable; 
  unsigned int Object; 
  unsigned int FirstSibling; 
  ChildVariableValue *v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  VariableUnion *VariableValueAddress; 
  ObjectVariableValue *v17; 
  __int64 v18; 
  __int64 v19; 

  v3 = parentId;
  if ( scrContext->m_varPub.developer )
  {
    m_debugCallStack = scrContext->m_debuggerGlob.m_debugCallStack;
    v5 = m_debugCallStack[parentId];
    if ( v5 )
    {
      m_debugCallStack[parentId] = 0;
      do
      {
        if ( v5 == 1 )
          break;
        v6 = &scrContext->m_debuggerGlob.m_debugCallStackEntry2[v5];
        next = v6->next;
        v6->next = scrContext->m_debuggerGlob.m_freeDebugCallStack;
        scrContext->m_debuggerGlob.m_freeDebugCallStack = v5;
        v5 = next;
      }
      while ( next );
    }
  }
  if ( !(_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4014, ASSERT_TYPE_ASSERT, "( parentId )", (const char *)&queryFormat, "parentId") )
    __debugbreak();
  v8 = &scrContext->m_varGlob.objectVariableValue[v3];
  if ( (unsigned __int8)(LOBYTE(v8->w.type) - 17) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4017, ASSERT_TYPE_ASSERT, "( (parentValue->GetType() >= VAR_THREAD) && (parentValue->GetType() <= VAR_CHILD_THREAD) )", (const char *)&queryFormat, "(parentValue->GetType() >= VAR_THREAD) && (parentValue->GetType() <= VAR_CHILD_THREAD)") )
    __debugbreak();
  Scr_ClearThread(scrContext, v3);
  Variable = FindVariable(scrContext, scrContext->m_varPub.pauseArrayId, v3 + 0x80000);
  if ( Variable )
  {
    Object = FindObject(scrContext, Variable);
    FirstSibling = FindFirstSibling(scrContext, Object);
    if ( FirstSibling )
    {
      do
      {
        v12 = &scrContext->m_varGlob.childVariableValue[FirstSibling];
        if ( (*(_BYTE *)&v12->tn & 0x3F) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4036, ASSERT_TYPE_ASSERT, "( value->GetType() == VAR_POINTER )", (const char *)&queryFormat, "value->GetType() == VAR_POINTER") )
          __debugbreak();
        if ( v12->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
          __debugbreak();
        v13 = (*(_WORD *)&v12->tn >> 6) + ((v12->k.match & 0x3FFF) << 10);
        v14 = v13 - 0x80000;
        if ( (unsigned int)v14 >= 0x40000 )
        {
          LODWORD(v19) = 0x40000;
          LODWORD(v18) = v13 - 0x80000;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4038, ASSERT_TYPE_ASSERT, "(unsigned)( (name - MEMORY_NODE_COUNT) ) < (unsigned)( ( 1 << 18 ) )", "(name - SL_MAX_STRING_INDEX) doesn't index VARIABLELIST_PARENT_SIZE_MAX\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v15 = FindVariable(scrContext, Object, v13);
        VariableValueAddress = GetVariableValueAddress(scrContext, v15);
        VM_CancelNotify(scrContext, VariableValueAddress->intValue, v14);
        v17 = &scrContext->m_varGlob.objectVariableValue[v14];
        if ( LOBYTE(v17->w.type) != 17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4063, ASSERT_TYPE_ASSERT, "( parentValue->GetType() == VAR_THREAD )", (const char *)&queryFormat, "parentValue->GetType() == VAR_THREAD") )
          __debugbreak();
        if ( scrContext->m_varGlob.objectVariableChildren[v14].firstChild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4064, ASSERT_TYPE_ASSERT, "( !scrContext.m_varGlob.objectVariableChildren[threadId].firstChild )", (const char *)&queryFormat, "!scrContext.m_varGlob.objectVariableChildren[threadId].firstChild") )
          __debugbreak();
        RemoveRefToObject(scrContext, v17->u.f.next);
        if ( FindVariable(scrContext, scrContext->m_varPub.pauseArrayId, v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4068, ASSERT_TYPE_ASSERT, "( !FindObjectVariable( scrContext, scrContext.m_varPub.pauseArrayId, threadId ) )", (const char *)&queryFormat, "!FindObjectVariable( scrContext, scrContext.m_varPub.pauseArrayId, threadId )") )
          __debugbreak();
        v17->w.type &= 0xFFFFFF19;
        v17->w.type |= 0x19u;
        RemoveObjectVariable(scrContext, Object, v14);
        FirstSibling = FindFirstSibling(scrContext, Object);
      }
      while ( FirstSibling );
      LODWORD(v3) = parentId;
    }
    if ( GetArraySize(scrContext, Object) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4047, ASSERT_TYPE_ASSERT, "( !GetArraySize( scrContext, selfNameId ) )", (const char *)&queryFormat, "!GetArraySize( scrContext, selfNameId )") )
      __debugbreak();
    RemoveObjectVariable(scrContext, scrContext->m_varPub.pauseArrayId, v3);
  }
  v8->w.type &= 0xFFFFFF19;
  v8->w.type |= 0x19u;
}

/*
==============
Scr_MarkExtArray
==============
*/
void Scr_MarkExtArray(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8514, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v2].w.type) != 26 )
    Scr_MarkVariable(scrContext, v2);
}

/*
==============
Scr_MarkGameVariable
==============
*/
void Scr_MarkGameVariable(scrContext_t *scrContext)
{
  unsigned int gameId; 
  ChildVariableValue *v2; 

  gameId = scrContext->m_varPub.gameId;
  if ( gameId )
  {
    v2 = &scrContext->m_varGlob.childVariableValue[gameId];
    if ( (*(_BYTE *)&v2->tn & 0x3F) == 1 )
      Scr_MarkVariable(scrContext, v2->u.f.prev);
  }
}

/*
==============
Scr_MarkVariable
==============
*/
void Scr_MarkVariable(scrContext_t *scrContext, unsigned int parentId)
{
  __int64 v3; 
  unsigned int *saveIdMap; 
  unsigned int i; 
  ChildVariableValue *v6; 
  unsigned int m_variableListParentSize; 

  v3 = parentId;
  if ( parentId >= scrContext->m_variableListParentSize )
  {
    m_variableListParentSize = scrContext->m_variableListParentSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8469, ASSERT_TYPE_ASSERT, "(unsigned)( parentId ) < (unsigned)( scrContext.m_variableListParentSize )", "parentId doesn't index scrContext.m_variableListParentSize\n\t%i not in [0, %i)", parentId, m_variableListParentSize) )
      __debugbreak();
  }
  saveIdMap = scrContext->m_varPub.saveIdMap;
  if ( !saveIdMap[v3] )
  {
    saveIdMap[v3] = 1;
    for ( i = scrContext->m_varGlob.objectVariableChildren[v3].firstChild; i; i = v6->nextSibling )
    {
      v6 = &scrContext->m_varGlob.childVariableValue[i];
      if ( (*(_BYTE *)&v6->tn & 0x3F) == 1 )
        Scr_MarkVariable(scrContext, v6->u.f.prev);
    }
  }
}

/*
==============
Scr_PrintChild
==============
*/
ChildVariableValue *Scr_PrintChild(scrContext_t *scrContext, unsigned int index, int depth, bool isArray)
{
  __int64 v6; 
  __int64 v8; 
  ChildVariableValue *v9; 
  VariableType v10; 
  const char *NameForTypeExtended; 
  bool v12; 
  const char *v13; 
  unsigned int v14; 
  unsigned int v15; 
  const char *v16; 
  __int64 v17; 
  const char *v18; 

  v6 = index;
  if ( index >= scrContext->m_variableListChildSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1095, ASSERT_TYPE_ASSERT, "( index < scrContext.m_variableListChildSize )", (const char *)&queryFormat, "index < scrContext.m_variableListChildSize") )
    __debugbreak();
  v8 = v6;
  v9 = &scrContext->m_varGlob.childVariableValue[v6];
  v10 = *(_BYTE *)&v9->tn & 0x3F;
  if ( v10 )
  {
    if ( s_crPrinted )
      Com_Printf(65559, "%*s", 2 * depth, (const char *)&queryFormat.fmt + 3);
    if ( !s_noIdHeader )
    {
      NameForTypeExtended = Scr_GetNameForTypeExtended(v10);
      Com_Printf(65559, "child id %d: type:(%s) = ", (unsigned int)v6, NameForTypeExtended);
    }
    s_crPrinted = 0;
    Scr_PrintChildValue(scrContext, v9, v6, depth, isArray);
  }
  else
  {
    if ( s_childBitArray && !bitarray_base<bitarray<655360>>::testBit(s_childBitArray, v6) )
      bitarray_base<bitarray<655360>>::setBit(s_childBitArray, v6);
    ++s_childCount;
    s_crPrinted = 1;
    Com_Printf(65559, "%*s", 2 * depth, (const char *)&queryFormat.fmt + 3);
    v12 = s_noIdHeader;
    if ( !s_noIdHeader )
    {
      v13 = Scr_GetNameForTypeExtended(VAR_UNDEFINED);
      Com_Printf(65559, "child id %d: type:(%s) = ", (unsigned int)v6, v13);
      v12 = s_noIdHeader;
    }
    if ( v9->k.match < 0x4000 )
      v14 = 0;
    else
      v14 = ((v9->k.match & 0x3FFF) << 10) + (*(_WORD *)&v9->tn >> 6);
    if ( v14 < scrContext->m_variableListParentSize + 0x80000 )
    {
      if ( v14 <= 0x80000 )
      {
        if ( v12 )
        {
          v18 = Scr_GetNameForTypeExtended(VAR_UNDEFINED);
          Com_Printf(65559, "type:(%s)\n", v18);
          return v9;
        }
      }
      else
      {
        if ( (*(_BYTE *)&scrContext->m_varGlob.childVariableValue[v8].tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3146, ASSERT_TYPE_ASSERT, "( IsValidChild( &scrContext.m_varGlob.childVariableValue[id] ) )", (const char *)&queryFormat, "IsValidChild( &scrContext.m_varGlob.childVariableValue[id] )") )
          __debugbreak();
        v17 = ChildVariableValue::GetName(&scrContext->m_varGlob.childVariableValue[v8]) - 0x80000;
        if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v17].w.type) != 26 )
        {
          s_crPrinted = 0;
          Scr_PrintObject(scrContext, v17, depth + 1, 0);
          return v9;
        }
      }
      Com_Printf(65559, "\n");
      return v9;
    }
    v15 = v14 + 7602176;
    if ( v14 + 7602176 <= 0xF3FFFF )
      v14 = (v14 - 0x800000) & 0xFFFFFF;
    v16 = "[%d]\n";
    if ( v15 > 0xF3FFFF )
      v16 = "??%d\n";
    Com_Printf(65559, v16, v14);
  }
  return v9;
}

/*
==============
Scr_PrintChildValue
==============
*/
void Scr_PrintChildValue(scrContext_t *scrContext, const ChildVariableValue *value, unsigned int index, int depth, bool isArray)
{
  VariableType v6; 
  __int64 v7; 
  int v10; 
  unsigned int match; 
  unsigned int v12; 
  __int64 v13; 
  const char *ShortNameForType; 
  const char *v15; 
  __int64 v16; 
  const char *v17; 
  unsigned int v18; 
  __int64 v19; 
  const char *v20; 
  VariableType type; 
  const char *NameForTypeExtended; 
  const char *v23; 
  bool v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v31; 
  const char *v40; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  const char *v49; 
  const char *v50; 
  const char *v51; 
  char *fmt; 

  v6 = *(_BYTE *)&value->tn & 0x3F;
  v7 = index;
  _RSI = value;
  if ( s_childBitArray && !bitarray_base<bitarray<655360>>::testBit(s_childBitArray, index) )
    bitarray_base<bitarray<655360>>::setBit(s_childBitArray, v7);
  ++s_childCount;
  v10 = 0;
  match = _RSI->k.match;
  s_crPrinted = 1;
  if ( match < 0x4000 )
  {
    v12 = 0;
LABEL_14:
    if ( isArray )
    {
      v17 = SL_ConvertToString((scr_string_t)v12);
      Com_Printf(65559, "[\"%s\"] ", v17);
    }
    else
    {
      if ( v6 == VAR_CODEPOS || v6 == VAR_DEVELOPER_CODEPOS || s_printingTimeArray )
        goto LABEL_29;
      if ( !g_scrCanonicalStringPub.canonicalStringData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 740, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringData != nullptr )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringData != nullptr") )
        __debugbreak();
      if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 741, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
        __debugbreak();
      if ( v12 >= g_scrCanonicalStringPub.canonicalStringLimit || (v18 = g_scrCanonicalStringPub.canonicalStringData->stringOffsets[v12]) == 0 || (v19 = v18 - 1, (CanonicalStringData *)((char *)g_scrCanonicalStringPub.canonicalStringData + v19) == (CanonicalStringData *)-114688i64) )
LABEL_29:
        Com_Printf(65559, "'%d' ", v12);
      else
        Com_Printf(65559, "%s ", &g_scrCanonicalStringPub.canonicalStringData->stringBuffer[v19]);
    }
    goto LABEL_30;
  }
  v12 = (*(_WORD *)&_RSI->tn >> 6) + ((match & 0x3FFF) << 10);
  if ( v12 < 0x80000 )
    goto LABEL_14;
  if ( v12 >= scrContext->m_variableListParentSize + 0x80000 )
  {
    v16 = v12 - 0x800000;
    if ( isArray )
      Com_Printf(65559, "[%d] ", v16);
    else
      Com_Printf(65559, "(%d) ", v16);
  }
  else
  {
    v13 = v12 - 0x80000;
    ShortNameForType = Scr_GetShortNameForType((VariableType)LOBYTE(scrContext->m_varGlob.objectVariableValue[v13].w.type));
    v15 = "[%s:%d] ";
    if ( !isArray )
      v15 = "%s:%d ";
    Com_Printf(65559, v15, ShortNameForType, (unsigned int)v13);
  }
LABEL_30:
  switch ( v6 )
  {
    case VAR_POINTER:
      if ( (s_printVarFlags & 0x10) != 0 )
      {
        if ( s_noIdHeader )
        {
          type = scrContext->m_varGlob.objectVariableValue[_RSI->u.f.prev].w.type;
          NameForTypeExtended = Scr_GetNameForTypeExtended(type);
          Com_Printf(65559, "= %s ", NameForTypeExtended);
          if ( type == VAR_OBJECT )
          {
            if ( s_showCodePos )
              v23 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
            else
              v23 = (char *)&queryFormat.fmt + 3;
            Com_Printf(65559, "{%d} %s\n", _RSI->u.f.prev, v23);
            v24 = s_crPrinted;
            goto LABEL_46;
          }
          if ( s_showCodePos )
          {
            v25 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
            Com_Printf(65559, "%s: ", v25);
          }
        }
        else
        {
          if ( s_showCodePos )
            v20 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
          else
            v20 = (char *)&queryFormat.fmt + 3;
          Com_Printf(65559, "%u = %s: ", _RSI->u.f.prev, v20);
        }
      }
      else
      {
        v26 = Scr_GetNameForTypeExtended((VariableType)LOBYTE(scrContext->m_varGlob.objectVariableValue[_RSI->u.f.prev].w.type));
        Com_Printf(65559, "%s ", v26);
      }
      v24 = 0;
      s_crPrinted = 0;
LABEL_46:
      LOBYTE(v10) = v24;
      Scr_PrintObject(scrContext, _RSI->u.f.prev, depth + v10, s_defaultEnterEnts);
      return;
    case VAR_STRING:
      if ( (s_printVarFlags & 0x10) == 0 )
        goto LABEL_52;
      if ( s_showCodePos )
        v27 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
      else
        v27 = (char *)&queryFormat.fmt + 3;
      v28 = SL_ConvertToString((scr_string_t)_RSI->u.f.prev);
      Com_Printf(65559, "= \"%s\" %s\n", v28, v27);
      return;
    case VAR_ISTRING:
      if ( (s_printVarFlags & 0x10) == 0 )
        goto LABEL_52;
      if ( s_showCodePos )
      {
        v29 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
        Com_Printf(65559, "= *ISTRING* %s\n", v29);
      }
      else
      {
        Com_Printf(65559, "= *ISTRING* %s\n", (char *)&queryFormat.fmt + 3);
      }
      return;
    case VAR_VECTOR:
      _RAX = _RSI->u;
      if ( !_RSI->u.u.scriptCodePosValue || (s_printVarFlags & 0x10) == 0 )
        goto LABEL_52;
      if ( s_showCodePos )
      {
        v31 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
        _RAX = _RSI->u;
      }
      else
      {
        v31 = (char *)&queryFormat.fmt + 3;
      }
      __asm
      {
        vmovss  xmm3, dword ptr [rax+4]
        vmovss  xmm2, dword ptr [rax]
        vmovss  xmm0, dword ptr [rax+8]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovsd  [rsp+58h+fmt], xmm0
      }
      Com_Printf(65559, "= [%f %f %f] %s\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, v31);
      return;
    case VAR_FLOAT:
      if ( (s_printVarFlags & 0x10) == 0 )
        goto LABEL_52;
      if ( s_showCodePos )
        v40 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
      else
        v40 = (char *)&queryFormat.fmt + 3;
      __asm
      {
        vmovss  xmm2, dword ptr [rsi]
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r8, xmm2
      }
      Com_Printf(65559, "= %f %s\n", *(double *)&_XMM2, v40);
      return;
    case VAR_INTEGER:
      if ( (s_printVarFlags & 0x10) == 0 )
        goto LABEL_52;
      if ( s_showCodePos )
        v44 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
      else
        v44 = (char *)&queryFormat.fmt + 3;
      Com_Printf(65559, "= %d %s\n", _RSI->u.f.prev, v44);
      return;
    case VAR_CODEPOS:
      if ( (s_printVarFlags & 0x10) == 0 )
        goto LABEL_52;
      if ( s_showCodePos )
        v48 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
      else
        v48 = (char *)&queryFormat.fmt + 3;
      Com_Printf(65559, "= CP*%p %s\n", _RSI->u.u.vectorValue, v48);
      return;
    case VAR_PRECODEPOS:
      v50 = "PRECODEPOS\n";
      if ( (s_printVarFlags & 0x10) == 0 )
        v50 = "\n";
      Com_Printf(65559, v50);
      return;
    case VAR_FUNCTION:
      if ( (s_printVarFlags & 0x10) == 0 )
        goto LABEL_52;
      if ( s_showCodePos )
        v49 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
      else
        v49 = (char *)&queryFormat.fmt + 3;
      Com_Printf(65559, "= F*%p %s\n", _RSI->u.u.vectorValue, v49);
      return;
    case VAR_BUILTIN_FUNCTION:
      if ( (s_printVarFlags & 0x10) == 0 )
        goto LABEL_52;
      if ( s_showCodePos )
        v46 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
      else
        v46 = (char *)&queryFormat.fmt + 3;
      Com_Printf(65559, "= BF*%d %s\n", _RSI->u.f.prev, v46);
      return;
    case VAR_BUILTIN_METHOD:
      if ( (s_printVarFlags & 0x10) == 0 )
        goto LABEL_52;
      if ( s_showCodePos )
        v47 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
      else
        v47 = (char *)&queryFormat.fmt + 3;
      Com_Printf(65559, "= BM*%d %s\n", _RSI->u.f.prev, v47);
      return;
    case VAR_STACK:
      Scr_PrintStackValue(scrContext, _RSI->u.u, v7, depth);
      return;
    case VAR_ANIMATION:
      if ( (s_printVarFlags & 0x10) != 0 )
      {
        if ( s_showCodePos )
          v45 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v7]);
        else
          v45 = (char *)&queryFormat.fmt + 3;
        Com_Printf(65559, "= A*%d %s\n", _RSI->u.f.prev, v45);
      }
      else
      {
LABEL_52:
        Com_Printf(65559, "\n");
      }
      return;
    default:
      v51 = Scr_GetShortNameForType(v6);
      Com_Printf(65559, "unhandled %s\n", v51);
      return;
  }
}

/*
==============
Scr_PrintChildren
==============
*/
void Scr_PrintChildren(scrContext_t *scrContext, unsigned int begin, unsigned int end, int depth, bool isArray)
{
  unsigned int nextSibling; 
  unsigned int m_variableListChildSize; 
  __int64 v10; 
  ChildVariableValue *v11; 
  VariableType v12; 
  const char *NameForTypeExtended; 
  bool v14; 
  const char *v15; 
  unsigned int v16; 
  unsigned int v17; 
  const char *v18; 
  __int64 v19; 
  const char *v20; 
  __int64 v21; 
  __int64 v22; 

  nextSibling = begin;
  if ( begin >= scrContext->m_variableListChildSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1169, ASSERT_TYPE_ASSERT, "(unsigned)( begin ) < (unsigned)( scrContext.m_variableListChildSize )", "begin doesn't index scrContext.m_variableListChildSize\n\t%i not in [0, %i)", begin, scrContext->m_variableListChildSize) )
    __debugbreak();
  if ( end >= scrContext->m_variableListChildSize )
  {
    LODWORD(v22) = scrContext->m_variableListChildSize;
    LODWORD(v21) = end;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1170, ASSERT_TYPE_ASSERT, "(unsigned)( end ) < (unsigned)( scrContext.m_variableListChildSize )", "end doesn't index scrContext.m_variableListChildSize\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  m_variableListChildSize = scrContext->m_variableListChildSize;
  if ( nextSibling )
  {
    while ( 1 )
    {
      if ( nextSibling >= m_variableListChildSize )
        return;
      if ( nextSibling >= scrContext->m_variableListChildSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1095, ASSERT_TYPE_ASSERT, "( index < scrContext.m_variableListChildSize )", (const char *)&queryFormat, "index < scrContext.m_variableListChildSize") )
        __debugbreak();
      v10 = nextSibling;
      v11 = &scrContext->m_varGlob.childVariableValue[v10];
      v12 = *(_BYTE *)&v11->tn & 0x3F;
      if ( v12 )
      {
        if ( s_crPrinted )
          Com_Printf(65559, "%*s", 2 * depth, (const char *)&queryFormat.fmt + 3);
        if ( !s_noIdHeader )
        {
          NameForTypeExtended = Scr_GetNameForTypeExtended(v12);
          Com_Printf(65559, "child id %d: type:(%s) = ", nextSibling, NameForTypeExtended);
        }
        s_crPrinted = 0;
        Scr_PrintChildValue(scrContext, v11, nextSibling, depth, isArray);
        goto LABEL_41;
      }
      if ( s_childBitArray && !bitarray_base<bitarray<655360>>::testBit(s_childBitArray, nextSibling) )
        bitarray_base<bitarray<655360>>::setBit(s_childBitArray, nextSibling);
      ++s_childCount;
      s_crPrinted = 1;
      Com_Printf(65559, "%*s", 2 * depth, (const char *)&queryFormat.fmt + 3);
      v14 = s_noIdHeader;
      if ( !s_noIdHeader )
      {
        v15 = Scr_GetNameForTypeExtended(VAR_UNDEFINED);
        Com_Printf(65559, "child id %d: type:(%s) = ", nextSibling, v15);
        v14 = s_noIdHeader;
      }
      if ( v11->k.match < 0x4000 )
        v16 = 0;
      else
        v16 = (*(_WORD *)&v11->tn >> 6) + ((v11->k.match & 0x3FFF) << 10);
      if ( v16 >= scrContext->m_variableListParentSize + 0x80000 )
      {
        v17 = v16 + 7602176;
        if ( v16 + 7602176 <= 0xF3FFFF )
          v16 = (v16 - 0x800000) & 0xFFFFFF;
        v18 = "[%d]\n";
        if ( v17 > 0xF3FFFF )
          v18 = "??%d\n";
        Com_Printf(65559, v18, v16);
        goto LABEL_41;
      }
      if ( v16 <= 0x80000 )
      {
        if ( v14 )
        {
          v20 = Scr_GetNameForTypeExtended(VAR_UNDEFINED);
          Com_Printf(65559, "type:(%s)\n", v20);
          goto LABEL_41;
        }
      }
      else
      {
        if ( (*(_BYTE *)&scrContext->m_varGlob.childVariableValue[v10].tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3146, ASSERT_TYPE_ASSERT, "( IsValidChild( &scrContext.m_varGlob.childVariableValue[id] ) )", (const char *)&queryFormat, "IsValidChild( &scrContext.m_varGlob.childVariableValue[id] )") )
          __debugbreak();
        v19 = ChildVariableValue::GetName(&scrContext->m_varGlob.childVariableValue[v10]) - 0x80000;
        if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v19].w.type) != 26 )
        {
          s_crPrinted = 0;
          Scr_PrintObject(scrContext, v19, depth + 1, 0);
          goto LABEL_41;
        }
      }
      Com_Printf(65559, "\n");
LABEL_41:
      if ( nextSibling != end )
      {
        nextSibling = v11->nextSibling;
        if ( nextSibling )
          continue;
      }
      return;
    }
  }
}

/*
==============
Scr_PrintCodePos
==============
*/
char *Scr_PrintCodePos(const scrContext_t *scrContext, ScriptCodePos codePos)
{
  unsigned int SourceBuffer; 
  unsigned int PrevSourcePos; 

  buffer[0] = 0;
  if ( codePos.m_scriptPos )
  {
    if ( scrContext->m_varPub.programBuffer && Scr_IsInOpcodeMemory(scrContext, codePos.m_scriptPos) )
    {
      if ( scrContext->m_varPub.developer )
      {
        SourceBuffer = Scr_GetSourceBuffer(scrContext, codePos.m_scriptPos - 1);
        PrevSourcePos = Scr_GetPrevSourcePos(scrContext, codePos.m_scriptPos - 1, 0);
        Scr_GetSourcePos(scrContext, SourceBuffer, PrevSourcePos, buffer, 256);
      }
      else
      {
        Com_sprintf_truncate(buffer, 0x100ui64, "@ %zd *%p*", codePos.m_scriptPos - scrContext->m_varPub.programBuffer, codePos.m_scriptPos);
      }
      return buffer;
    }
    else
    {
      Com_sprintf_truncate(buffer, 0x100ui64, "%s ", codePos.m_scriptPos);
      return buffer;
    }
  }
  else
  {
    return buffer;
  }
}

/*
==============
Scr_PrintEntityClasses
==============
*/
void Scr_PrintEntityClasses(scrContext_t *scrContext, Scr_VarCount *varCountPlayer, Scr_VarCount *varCountByClass)
{
  unsigned int m_variableListParentSize; 
  int v5; 
  ObjectVariableValue::<unnamed_type_w> *p_w; 
  __int64 v8; 
  unsigned __int64 v9; 
  char *v10; 
  char *v11; 
  __int64 *v12; 
  char *v13; 
  unsigned int i; 
  __int64 v15; 
  char *v16; 
  char *v17; 
  __int64 v18; 
  char *v19; 
  char *v20; 
  __int64 v21; 
  char *v22; 
  char *v23; 
  __int64 v24; 
  char *v25; 
  char *v26; 
  __int64 v27; 
  char *v28; 
  char *v29; 
  __int64 v30; 
  char *v31; 
  char *v32; 
  __int64 v33; 
  char *v34; 
  char *v35; 
  __int64 v36; 
  char *v37; 
  char *v38; 
  __int64 v39; 
  char *v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned int v47; 
  unsigned int v48; 
  __int64 v49; 
  ObjectVariableValue *objectVariableValue; 
  unsigned int v51; 
  __int64 v52; 
  __int64 j; 
  unsigned int v54; 
  unsigned int *v55; 
  char *p_charId; 
  __int64 v57; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int v60; 
  Scr_VarCount *v61; 
  __int64 v62; 
  unsigned int v63; 
  __int64 v64; 
  Scr_VarCount *v65; 
  char *v66; 
  void *ptr; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  int v73; 
  __int64 v74[2]; 
  char v75; 

  v65 = varCountByClass;
  m_variableListParentSize = scrContext->m_variableListParentSize;
  v5 = 0;
  v68 = 0i64;
  v69 = 0i64;
  v70 = 0i64;
  v71 = 0i64;
  v72 = 0i64;
  v73 = 0;
  if ( m_variableListParentSize > 1 )
  {
    p_w = &scrContext->m_varGlob.objectVariableValue[1].w;
    v8 = m_variableListParentSize - 1;
    do
    {
      if ( LOBYTE(p_w->type) == 23 )
      {
        ++*((_DWORD *)&v68 + (unsigned __int8)BYTE1(p_w->type));
        ++v5;
      }
      p_w += 3;
      --v8;
    }
    while ( v8 );
  }
  v9 = 4i64 * v5;
  v10 = (char *)Mem_Virtual_TryAlloc(v9, "entIds", TRACK_SCRIPT);
  ptr = v10;
  if ( v10 )
  {
    v11 = &v75;
    v12 = &v69;
    v13 = v10;
    for ( i = 0; i < 0xB; i += 11 )
    {
      v15 = *((int *)v12 - 2);
      v12 = (__int64 *)((char *)v12 + 44);
      v16 = NULL;
      v11 += 88;
      if ( (_DWORD)v15 )
        v16 = v13;
      v17 = &v13[4 * v15];
      v18 = *((int *)v12 - 12);
      *((_QWORD *)v11 - 13) = v16;
      v19 = NULL;
      if ( (_DWORD)v18 )
        v19 = v17;
      v20 = &v17[4 * v18];
      v21 = *((int *)v12 - 11);
      *((_QWORD *)v11 - 12) = v19;
      v22 = NULL;
      if ( (_DWORD)v21 )
        v22 = v20;
      v23 = &v20[4 * v21];
      v24 = *((int *)v12 - 10);
      *((_QWORD *)v11 - 11) = v22;
      v25 = NULL;
      if ( (_DWORD)v24 )
        v25 = v23;
      v26 = &v23[4 * v24];
      v27 = *((int *)v12 - 9);
      *((_QWORD *)v11 - 10) = v25;
      v28 = NULL;
      if ( (_DWORD)v27 )
        v28 = v26;
      v29 = &v26[4 * v27];
      v30 = *((int *)v12 - 8);
      *((_QWORD *)v11 - 9) = v28;
      v31 = NULL;
      if ( (_DWORD)v30 )
        v31 = v29;
      v32 = &v29[4 * v30];
      v33 = *((int *)v12 - 7);
      *((_QWORD *)v11 - 8) = v31;
      v34 = NULL;
      if ( (_DWORD)v33 )
        v34 = v32;
      v35 = &v32[4 * v33];
      v36 = *((int *)v12 - 6);
      *((_QWORD *)v11 - 7) = v34;
      v37 = NULL;
      if ( (_DWORD)v36 )
        v37 = v35;
      v38 = (__int64)&v35[4 * v36];
      v39 = *((int *)v12 - 5);
      *((_QWORD *)v11 - 6) = v37;
      v40 = 0i64;
      if ( (_DWORD)v39 )
        v40 = v38;
      v41 = v38 + 4 * v39;
      v42 = *((int *)v12 - 4);
      *((_QWORD *)v11 - 5) = v40;
      v43 = 0i64;
      if ( (_DWORD)v42 )
        v43 = v41;
      v44 = v41 + 4 * v42;
      v45 = *((int *)v12 - 3);
      *((_QWORD *)v11 - 4) = v43;
      v46 = 0i64;
      if ( (_DWORD)v45 )
        v46 = v44;
      v13 = (char *)(v44 + 4 * v45);
      *((_QWORD *)v11 - 3) = v46;
    }
    v47 = scrContext->m_variableListParentSize;
    v48 = 1;
    v68 = 0i64;
    v69 = 0i64;
    v70 = 0i64;
    v71 = 0i64;
    v72 = 0i64;
    v73 = 0;
    if ( v47 > 1 )
    {
      v49 = 1i64;
      do
      {
        objectVariableValue = scrContext->m_varGlob.objectVariableValue;
        if ( LOBYTE(objectVariableValue[v49].w.type) == 23 )
        {
          v51 = objectVariableValue[v49].w.type >> 8;
          v52 = *((int *)&v68 + (unsigned __int8)v51);
          *((_DWORD *)&v68 + (unsigned __int8)v51) = v52 + 1;
          *(_DWORD *)(v74[(unsigned __int8)v51] + 4 * v52) = v48;
        }
        ++v48;
        ++v49;
      }
      while ( v48 < v47 );
    }
    for ( j = 0i64; j < 11; ++j )
    {
      if ( s_crPrinted )
        Com_Printf(65559, "%*s", 2, (const char *)&queryFormat.fmt + 3);
      Com_Printf(65559, "%s\n", scrContext->m_varPub.m_classMap[j].name);
      v54 = 0;
      v64 = *((int *)&v68 + j);
      if ( v64 > 0 )
      {
        v55 = (unsigned int *)v74[j];
        p_charId = &scrContext->m_varPub.m_classMap[j].charId;
        v57 = 0i64;
        v66 = p_charId;
        do
        {
          v58 = s_childCount;
          v63 = s_parentCount;
          if ( s_crPrinted )
            Com_Printf(65559, "%*s", 4, (const char *)&queryFormat.fmt + 3);
          Com_Printf(65559, "%c%d\n", (unsigned int)*p_charId, v54);
          Scr_PrintObject(scrContext, *v55, 3, 1);
          v59 = s_childCount - v58;
          v60 = s_parentCount - v63;
          Com_Printf(65559, "      childCount = %d    parentCount = %d\n", v59, s_parentCount - v63);
          if ( j || scrContext->m_varGlob.objectVariableValue[v57].u.f.next >= SvClient::ms_clientCount )
          {
            v61 = v65;
            v62 = j;
            v65[v62].childCount += v59;
            v61[v62].parentCount += v60;
            ++v61[v62].objectCount;
          }
          else
          {
            varCountPlayer->childCount += v59;
            varCountPlayer->parentCount += v60;
            ++varCountPlayer->objectCount;
          }
          p_charId = v66;
          ++v54;
          ++v55;
          ++v57;
          --v64;
        }
        while ( v64 );
      }
    }
    Mem_Virtual_Free(ptr);
  }
  else
  {
    Com_PrintError(65559, "Unable to allocate %zd bytes for Scr_PrintEntityClasses\n", v9);
  }
}

/*
==============
Scr_PrintObject
==============
*/
void Scr_PrintObject(scrContext_t *scrContext, unsigned int id, int depth, bool enterEnts)
{
  char *v5; 
  char v8; 
  ObjectVariableValue *objectVariableValue; 
  __int64 v10; 
  VariableType type; 
  ObjectVariableValue *v12; 
  bitarray<262144> *v13; 
  const char *NameForTypeExtended; 
  char *v15; 
  char *v16; 
  const char *v17; 
  char *v18; 
  char *v19; 
  char *v20; 
  const char *TypeName; 
  bool fmt; 
  __int64 v23; 
  __int64 v24; 
  int deptha; 
  int v26; 

  v26 = depth;
  deptha = depth + 1;
  v5 = (char *)&queryFormat.fmt + 3;
  while ( 2 )
  {
    v8 = 1;
    objectVariableValue = scrContext->m_varGlob.objectVariableValue;
    v10 = id;
    type = objectVariableValue[id].w.type;
    v12 = &objectVariableValue[id];
    if ( s_crPrinted )
      Com_Printf(65559, "%*s", 2 * depth, (const char *)&queryFormat.fmt + 3);
    s_crPrinted = 1;
    if ( s_parentBitArray )
    {
      if ( bitarray_base<bitarray<262144>>::testBit(s_parentBitArray, id) || type == VAR_ENTITY && !enterEnts )
      {
        v8 = 0;
        Com_Printf(65559, "|=> ");
      }
      else
      {
        ++s_parentCount;
        v13 = s_parentBitArray;
        if ( id >= 0x40000 )
        {
          LODWORD(v24) = 0x40000;
          LODWORD(v23) = id;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
            __debugbreak();
        }
        v13->array[(unsigned __int64)id >> 5] |= 0x80000000 >> (id & 0x1F);
      }
    }
    if ( !s_noIdHeader )
    {
      if ( type )
        NameForTypeExtended = Scr_GetNameForTypeExtended(type);
      else
        NameForTypeExtended = "undefined";
      Com_Printf(65559, "obj %d: type:(%s) = ", id, NameForTypeExtended);
    }
    switch ( type )
    {
      case VAR_FUNCTION:
        if ( s_showCodePos )
          v5 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.objectVarUsage[id]);
        Com_Printf(65559, "%s\n", v5);
        return;
      case VAR_THREAD:
        if ( s_showCodePos )
          v15 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.objectVarUsage[id]);
        else
          v15 = (char *)&queryFormat.fmt + 3;
        Com_Printf(65559, "self: %s\n", v15);
        goto LABEL_23;
      case VAR_NOTIFY_THREAD:
        if ( s_showCodePos )
          v16 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.objectVarUsage[id]);
        else
          v16 = (char *)&queryFormat.fmt + 3;
        v17 = SL_ConvertToString((scr_string_t)(v12->w.type >> 8));
        Com_Printf(65559, "notifyName = %s self: %s\n", v17, v16);
        goto LABEL_23;
      case VAR_TIME_THREAD:
        if ( s_showCodePos )
          v18 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.objectVarUsage[id]);
        else
          v18 = (char *)&queryFormat.fmt + 3;
        Com_Printf(65559, "waittime = %d self: %s\n", v12->w.type >> 8, v18);
        goto LABEL_23;
      case VAR_CHILD_THREAD:
        if ( s_showCodePos )
          v19 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.objectVarUsage[id]);
        else
          v19 = (char *)&queryFormat.fmt + 3;
        Com_Printf(65559, "parentLocalId = %d self: %s\n", v12->w.type >> 8, v19);
LABEL_23:
        if ( !v8 )
          return;
        Scr_PrintChildren(scrContext, scrContext->m_varGlob.objectVariableChildren[v10].firstChild, scrContext->m_varGlob.objectVariableChildren[v10].lastChild, deptha, 0);
        enterEnts = s_defaultEnterEnts;
        id = ObjectVariableValue::GetSelf(v12);
        depth = v26 + 1;
        ++deptha;
        ++v26;
        continue;
      case VAR_OBJECT:
        if ( s_noIdHeader )
        {
          if ( (s_printVarFlags & 0x10) != 0 )
          {
            if ( s_showCodePos )
            {
              v20 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.objectVarUsage[id]);
              Com_Printf(65559, (const char *)&queryFormat, v20);
            }
            s_crPrinted = 0;
          }
          else
          {
            Com_Printf(65559, "\n");
          }
        }
        else
        {
          if ( s_showCodePos )
            v5 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.objectVarUsage[id]);
          Com_Printf(65559, "children: %s\n", v5);
        }
        if ( v8 )
          Scr_PrintChildren(scrContext, scrContext->m_varGlob.objectVariableChildren[id].firstChild, scrContext->m_varGlob.objectVariableChildren[id].lastChild, v26 + s_crPrinted, 0);
        return;
      case VAR_DEAD_ENTITY:
      case VAR_ENTITY:
        if ( type == VAR_DEAD_ENTITY )
          Com_Printf(65559, "DEADENTITY ");
        if ( s_showCodePos )
          v5 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.objectVarUsage[id]);
        Com_Printf(65559, "classnum %d entnum %d: %s\n", (unsigned __int8)BYTE1(v12->w.type), v12->u.f.next, v5);
        if ( !v8 )
          return;
        fmt = 0;
        goto LABEL_45;
      case VAR_ARRAY:
        if ( (s_printVarFlags & 0x10) != 0 )
        {
          if ( s_showCodePos )
            v5 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.objectVarUsage[id]);
          Com_Printf(65559, "size = %d %s\n", v12->u.f.next, v5);
        }
        else
        {
          Com_Printf(65559, "size = %d \n", v12->u.f.next);
        }
        if ( !v8 )
          return;
        fmt = 1;
LABEL_45:
        Scr_PrintChildren(scrContext, scrContext->m_varGlob.objectVariableChildren[id].firstChild, scrContext->m_varGlob.objectVariableChildren[id].lastChild, v26 + 1, fmt);
        return;
      case VAR_DEAD_THREAD:
        Com_Printf(65559, "DEADTHREAD\n");
        return;
      case VAR_COUNT:
        return;
      default:
        TypeName = Scr_GetTypeName(scrContext, id);
        Com_Printf(65559, "%s not handled\n", TypeName);
        return;
    }
  }
}

/*
==============
Scr_PrintStackValue
==============
*/
void Scr_PrintStackValue(scrContext_t *scrContext, VariableUnion stackU, unsigned int index, int depth)
{
  __int64 v4; 
  ObjectVariableValue *v8; 
  __int64 next; 
  unsigned __int8 type; 
  unsigned int EntNum; 
  __int64 EntClassId; 
  char *v13; 
  __int64 v14; 
  unsigned int intValue; 
  char *v16; 
  VariableUnion v17; 
  char v18; 

  v4 = index;
  Com_Printf(65559, "= STK*%p ", stackU.vectorValue);
  v8 = &scrContext->m_varGlob.objectVariableValue[*(unsigned int *)(stackU.scriptCodePosValue + 12)];
  if ( (unsigned __int8)(LOBYTE(v8->w.type) - 17) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4447, ASSERT_TYPE_ASSERT, "( (entryValue->GetType() >= VAR_THREAD) && (entryValue->GetType() <= VAR_CHILD_THREAD) )", (const char *)&queryFormat, "(entryValue->GetType() >= VAR_THREAD) && (entryValue->GetType() <= VAR_CHILD_THREAD)") )
    __debugbreak();
  next = v8->u.f.next;
  if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[next].w.type) == 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6923, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE )", (const char *)&queryFormat, "scrContext.m_varGlob.objectVariableValue[id].GetType() != VAR_FREE") )
    __debugbreak();
  type = scrContext->m_varGlob.objectVariableValue[next].w.type;
  if ( (_DWORD)next == scrContext->m_varPub.levelId )
  {
    Com_Printf(65559, "level  ");
  }
  else if ( (_DWORD)next == scrContext->m_varPub.animId )
  {
    Com_Printf(65559, "anim  ");
  }
  else
  {
    switch ( type )
    {
      case 0x17u:
        EntNum = Scr_GetEntNum(scrContext, next);
        EntClassId = (unsigned int)Scr_GetEntClassId(scrContext, next);
        Com_Printf(65559, "%c%i  ", EntClassId, EntNum);
        break;
      case 0x15u:
        Com_Printf(65559, "s%i  ", (unsigned int)next);
        break;
      case 0x18u:
        Com_Printf(65559, "a%i  ", (unsigned int)next);
        break;
      default:
        Com_Printf(65559, "%d:%i  ", type, (unsigned int)next);
        break;
    }
  }
  if ( s_showCodePos )
    v13 = Scr_PrintCodePos(scrContext, scrContext->m_varDebugPub.childVarUsage[v4]);
  else
    v13 = (char *)&queryFormat.fmt + 3;
  Com_Printf(65559, "%s\n", v13);
  v14 = *(unsigned __int16 *)(stackU.scriptCodePosValue + 8);
  intValue = *(_DWORD *)(stackU.scriptCodePosValue + 12);
  v16 = (char *)(v14 + stackU.scriptCodePosValue + 8 * v14 + 17);
  Scr_PrintObject(scrContext, intValue, depth + 1, 0);
  while ( (_DWORD)v14 )
  {
    v17 = *(VariableUnion *)(v16 - 8);
    v16 -= 9;
    v18 = *v16;
    LODWORD(v14) = v14 - 1;
    if ( *v16 == 7 )
    {
      v17.intValue = GetParentLocalId(scrContext, intValue);
      intValue = v17.intValue;
    }
    else if ( v18 != 1 )
    {
      if ( v18 == 12 )
        Scr_PrintStackValue(scrContext, v17, 0, depth + 1);
      continue;
    }
    Scr_PrintObject(scrContext, v17.uintValue, depth + 1, 0);
  }
}

/*
==============
Scr_PrintVars
==============
*/
void Scr_PrintVars(scrContext_t *scrContext, unsigned int overrideFlags, bool allowFile)
{
  const char *string; 
  bitarray<262144> *m_ptr; 
  bitarray<655360> *v15; 
  unsigned int v16; 
  unsigned int v17; 
  bitarray<262144> *v18; 
  __int64 v19; 
  bitarray<655360> *v20; 
  __int64 i; 
  unsigned int v22; 
  int v23; 
  signed int v24; 
  unsigned __int8 ActiveGameMode; 
  SvClient *CommonClient; 
  unsigned int gentity; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int levelId; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int gameId; 
  ChildVariableValue *v36; 
  unsigned int prev; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int animId; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int timeArrayId; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int pauseArrayId; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int notifyArrayId; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int objectStackId; 
  unsigned int v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int v62; 
  unsigned int v63; 
  scr_classStruct_t *m_classMap; 
  unsigned int v65; 
  unsigned int v66; 
  unsigned int entArrayId; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int m_variableListParentSize; 
  unsigned int v72; 
  unsigned __int64 v73; 
  __int64 v74; 
  bitarray<262144> *v75; 
  unsigned int v76; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned int v79; 
  unsigned int v80; 
  unsigned int m_variableListChildSize; 
  unsigned int v82; 
  unsigned __int64 v83; 
  __int64 v84; 
  bitarray<655360> *v85; 
  unsigned int v86; 
  unsigned int v87; 
  unsigned int v88; 
  unsigned int v89; 
  _DWORD *v115; 
  Scr_VarCount *v116; 
  const char **p_name; 
  __int64 v118; 
  char *fmt; 
  __int64 lineSort; 
  char *fileName; 
  char *functionName; 
  unsigned int v180; 
  unsigned int v181; 
  unsigned int v182; 
  unsigned int v183; 
  unsigned int v184; 
  unsigned int v185; 
  int v187; 
  int v188; 
  int v189; 
  int v190; 
  unsigned int v191; 
  unsigned int v192; 
  unsigned int v193; 
  unsigned int v194; 
  int v195; 
  unsigned int v196; 
  unsigned int v197; 
  unsigned int v198; 
  unsigned int v199; 
  unsigned int v200; 
  unsigned int v201; 
  int v202; 
  unsigned int v203; 
  int v204; 
  unsigned int v205; 
  int v206; 
  Scr_VarCount varCountPlayer; 
  unsigned int v208; 
  unsigned int v209; 
  __int64 v210; 
  Mem_LargeLocal v211; 
  Mem_LargeLocal v212; 
  _BYTE varCountByClass[128]; 
  int v214; 
  char v215; 
  void *retaddr; 

  _RAX = &retaddr;
  v210 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( scrContext->m_varDebugPub.m_Inited )
  {
    if ( allowFile )
    {
      string = script_print_vars_file->current.string;
      if ( *string )
        Com_OpenUserFileCon(string);
    }
    Mem_LargeLocal::Mem_LargeLocal(&v212, 0x8000ui64, "parentBitArray_t tParentBitArray");
    m_ptr = (bitarray<262144> *)v212.m_ptr;
    Mem_LargeLocal::Mem_LargeLocal(&v211, 0x14000ui64, "childBitArray_t tChildBitArray");
    v15 = (bitarray<655360> *)v211.m_ptr;
    if ( !overrideFlags )
      overrideFlags = script_print_vars_flags->current.unsignedInt;
    s_printVarFlags = overrideFlags;
    s_noIdHeader = (overrideFlags & 1) == 0;
    s_showCodePos = (overrideFlags & 2) != 0;
    v16 = overrideFlags >> 3;
    LOBYTE(v16) = (overrideFlags & 8) != 0;
    v208 = v16;
    v17 = overrideFlags >> 2;
    LOBYTE(v17) = v17 & 1;
    v209 = v17;
    v18 = m_ptr;
    v19 = 512i64;
    do
    {
      *(_QWORD *)v18->array = 0i64;
      *(_QWORD *)&v18->array[2] = 0i64;
      *(_QWORD *)&v18->array[4] = 0i64;
      v18 = (bitarray<262144> *)((char *)v18 + 64);
      *(_QWORD *)&v18[-1].array[8182] = 0i64;
      *(_QWORD *)&v18[-1].array[8184] = 0i64;
      *(_QWORD *)&v18[-1].array[8186] = 0i64;
      *(_QWORD *)&v18[-1].array[8188] = 0i64;
      *(_QWORD *)&v18[-1].array[8190] = 0i64;
      --v19;
    }
    while ( v19 );
    s_parentBitArray = m_ptr;
    v20 = v15;
    for ( i = 20480i64; i; --i )
    {
      v20->array[0] = 0;
      v20 = (bitarray<655360> *)((char *)v20 + 4);
    }
    s_childBitArray = v15;
    memset(varCountByClass, 0, sizeof(varCountByClass));
    v214 = 0;
    *(_QWORD *)&varCountPlayer.childCount = 0i64;
    varCountPlayer.objectCount = 0;
    v22 = 0;
    v200 = 0;
    v23 = 0;
    v189 = 0;
    v190 = 0;
    v201 = 0;
    v191 = 0;
    v202 = 0;
    v203 = 0;
    v192 = 0;
    v204 = 0;
    v205 = 0;
    v193 = 0;
    v206 = 0;
    v183 = 0;
    v180 = 0;
    v24 = 0;
    v187 = 0;
    v194 = 0;
    v188 = 0;
    v195 = 0;
    Com_Printf(65559, "entity variables:\n");
    s_defaultEnterEnts = 0;
    s_childCount = 0;
    s_parentCount = 0;
    Scr_PrintEntityClasses(scrContext, &varCountPlayer, (Scr_VarCount *)varCountByClass);
    if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
    {
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      if ( BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode) )
      {
        Com_Printf(65559, "client variables:\n");
        if ( (int)SvClient::ms_clientCount <= 0 )
        {
          v24 = 0;
        }
        else
        {
          do
          {
            if ( SvClient::GetCommonClient(v24)->state >= CS_CONNECTED )
            {
              if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
                __debugbreak();
              CommonClient = SvClient::GetCommonClient(v24);
              if ( !SV_ClientMP_IsLocalClient(v24) && (SV_ClientMP_IsLocalClient(v24) || *(_QWORD *)&CommonClient[1].state) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1644, ASSERT_TYPE_ASSERT, "(SV_ClientMP_IsLocalClient( i ) || !SV_ClientMP_IsLocalClient( i ) && !client->dropReason)", "%s\n\tUnexpected drop reason for non local clients", "SV_ClientMP_IsLocalClient( i ) || !SV_ClientMP_IsLocalClient( i ) && !client->dropReason") )
                __debugbreak();
              gentity = (unsigned int)CommonClient[854].gentity;
              if ( gentity )
              {
                v28 = s_childCount;
                v29 = s_parentCount;
                Com_Printf(65559, "%s variables:\n", "client");
                Scr_PrintObject(scrContext, gentity, 1, 0);
                v30 = s_childCount - v28;
                v31 = s_parentCount - v29;
                Com_Printf(65559, "  childCount = %d    parentCount = %d\n", v30, s_parentCount - v29);
                v22 += v30;
                v23 += v31;
                ++v190;
              }
            }
            ++v24;
          }
          while ( v24 < (int)SvClient::ms_clientCount );
          v200 = v22;
          v189 = v23;
          v24 = 0;
        }
      }
    }
    levelId = scrContext->m_varPub.levelId;
    if ( levelId )
    {
      v33 = s_childCount;
      v34 = s_parentCount;
      Com_Printf(65559, "%s variables:\n", "level");
      Scr_PrintObject(scrContext, levelId, 1, 0);
      v201 = s_childCount - v33;
      v191 = s_parentCount - v34;
      Com_Printf(65559, "  childCount = %d    parentCount = %d\n", s_childCount - v33, s_parentCount - v34);
      v202 = 1;
    }
    gameId = scrContext->m_varPub.gameId;
    if ( !gameId )
      goto LABEL_40;
    if ( s_childBitArray && !bitarray_base<bitarray<655360>>::testBit(s_childBitArray, gameId) )
      bitarray_base<bitarray<655360>>::setBit(s_childBitArray, scrContext->m_varPub.gameId);
    ++s_childCount;
    v36 = &scrContext->m_varGlob.childVariableValue[scrContext->m_varPub.gameId];
    if ( (*(_BYTE *)&v36->tn & 0x3F) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1668, ASSERT_TYPE_ASSERT, "(value->GetType() == VAR_POINTER)", (const char *)&queryFormat, "value->GetType() == VAR_POINTER") )
      __debugbreak();
    prev = v36->u.f.prev;
    if ( v36->u.f.prev )
    {
      v38 = s_childCount;
      v39 = s_parentCount;
      Com_Printf(65559, "%s variables:\n", "game");
      Scr_PrintObject(scrContext, prev, 1, 0);
      v40 = s_childCount - v38;
      v183 = s_childCount - v38;
      v41 = s_parentCount - v39;
      v180 = s_parentCount - v39;
      Com_Printf(65559, "  childCount = %d    parentCount = %d\n", s_childCount - v38, s_parentCount - v39);
      v24 = 1;
      v187 = 1;
    }
    else
    {
LABEL_40:
      v41 = 0;
      v40 = 0;
    }
    animId = scrContext->m_varPub.animId;
    if ( animId )
    {
      v43 = s_childCount;
      v44 = s_parentCount;
      Com_Printf(65559, "%s variables:\n", "anim");
      Scr_PrintObject(scrContext, animId, 1, 0);
      v203 = s_childCount - v43;
      v192 = s_parentCount - v44;
      Com_Printf(65559, "  childCount = %d    parentCount = %d\n", s_childCount - v43, s_parentCount - v44);
      v204 = 1;
    }
    timeArrayId = scrContext->m_varPub.timeArrayId;
    if ( timeArrayId )
    {
      v46 = s_childCount;
      v47 = s_parentCount;
      Com_Printf(65559, "%s variables:\n", "timeArray");
      Scr_PrintObject(scrContext, timeArrayId, 1, 0);
      v48 = s_childCount - v46;
      v49 = s_parentCount - v47;
      Com_Printf(65559, "  childCount = %d    parentCount = %d\n", v48, s_parentCount - v47);
      v40 += v48;
      v183 = v40;
      v41 += v49;
      v180 = v41;
      v187 = ++v24;
    }
    pauseArrayId = scrContext->m_varPub.pauseArrayId;
    if ( pauseArrayId )
    {
      v51 = s_childCount;
      v52 = s_parentCount;
      Com_Printf(65559, "%s variables:\n", "pauseArray");
      Scr_PrintObject(scrContext, pauseArrayId, 1, 0);
      v53 = s_childCount - v51;
      v54 = s_parentCount - v52;
      Com_Printf(65559, "  childCount = %d    parentCount = %d\n", v53, s_parentCount - v52);
      v40 += v53;
      v183 = v40;
      v41 += v54;
      v180 = v41;
      v187 = ++v24;
    }
    notifyArrayId = scrContext->m_varPub.notifyArrayId;
    if ( notifyArrayId )
    {
      v56 = s_childCount;
      v57 = s_parentCount;
      Com_Printf(65559, "%s variables:\n", "notifyArray");
      Scr_PrintObject(scrContext, notifyArrayId, 1, 0);
      v205 = s_childCount - v56;
      v193 = s_parentCount - v57;
      Com_Printf(65559, "  childCount = %d    parentCount = %d\n", s_childCount - v56, s_parentCount - v57);
      v206 = 1;
    }
    objectStackId = scrContext->m_varPub.objectStackId;
    if ( objectStackId )
    {
      v59 = s_childCount;
      v60 = s_parentCount;
      Com_Printf(65559, "%s variables:\n", "objectStack");
      Scr_PrintObject(scrContext, objectStackId, 1, 0);
      v61 = s_childCount - v59;
      v62 = s_parentCount - v60;
      Com_Printf(65559, "  childCount = %d    parentCount = %d\n", v61, s_parentCount - v60);
      v183 = v61 + v40;
      v180 = v62 + v41;
      v187 = v24 + 1;
    }
    Com_Printf(65559, "classMaps\n");
    v63 = 0;
    m_classMap = scrContext->m_varPub.m_classMap;
    do
    {
      v65 = s_childCount;
      v66 = s_parentCount;
      if ( s_crPrinted )
        Com_Printf(65559, "%*s", 2, (const char *)&queryFormat.fmt + 3);
      Com_Printf(65559, "classMap %s:\n", m_classMap->name);
      if ( m_classMap->id )
        Scr_PrintObject(scrContext, m_classMap->id, 2, 0);
      entArrayId = m_classMap->entArrayId;
      if ( entArrayId )
        Scr_PrintObject(scrContext, entArrayId, 2, 0);
      if ( s_crPrinted )
        Com_Printf(65559, "%*s", 6, (const char *)&queryFormat.fmt + 3);
      v68 = s_childCount - v65;
      v69 = s_parentCount - v66;
      Com_Printf(65559, "childCount = %d    parentCount = %d\n", v68, s_parentCount - v66);
      v194 += v68;
      v188 += v69;
      ++v195;
      ++v63;
      ++m_classMap;
    }
    while ( v63 < 0xB );
    v70 = s_childCount;
    v196 = s_childCount;
    v198 = s_parentCount;
    Com_Printf(65559, "leftover parents:\n");
    m_variableListParentSize = scrContext->m_variableListParentSize;
    v72 = 0;
    if ( m_variableListParentSize )
    {
      v73 = 0i64;
      v74 = 0i64;
      do
      {
        if ( LOBYTE(scrContext->m_varGlob.objectVariableValue[v74].w.type) != 26 )
        {
          v75 = s_parentBitArray;
          if ( v72 >= 0x40000 )
          {
            LODWORD(fileName) = 0x40000;
            LODWORD(lineSort) = v72;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", lineSort, fileName) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v72 & 0x1F)) & v75->array[v73 >> 5]) == 0 )
            Scr_PrintObject(scrContext, v72, 1, s_defaultEnterEnts);
        }
        ++v72;
        ++v73;
        ++v74;
      }
      while ( v72 < m_variableListParentSize );
      v70 = v196;
    }
    v76 = s_childCount - v70;
    v77 = s_parentCount - v198;
    Com_Printf(65559, "  childCount = %d    parentCount = %d\n", s_childCount - v70, s_parentCount - v198);
    v78 = v76 + v183;
    v184 = v76 + v183;
    v79 = v77 + v180;
    v181 = v77 + v180;
    v80 = s_childCount;
    v199 = s_childCount;
    v197 = s_parentCount;
    Com_Printf(65559, "leftover children:\n");
    m_variableListChildSize = scrContext->m_variableListChildSize;
    v82 = 1;
    if ( m_variableListChildSize > 1 )
    {
      v83 = 1i64;
      v84 = 1i64;
      do
      {
        if ( (*(_BYTE *)&scrContext->m_varGlob.childVariableValue[v84].tn & 0x3F) != 26 )
        {
          v85 = s_childBitArray;
          if ( v82 >= 0xA0000 )
          {
            LODWORD(fileName) = 655360;
            LODWORD(lineSort) = v82;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", lineSort, fileName) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v82 & 0x1F)) & v85->array[v83 >> 5]) == 0 )
            Scr_PrintChild(scrContext, v82, 1, 0);
        }
        ++v82;
        ++v83;
        ++v84;
      }
      while ( v82 < m_variableListChildSize );
      v80 = v199;
      v79 = v181;
      v78 = v184;
    }
    v86 = s_childCount - v80;
    v87 = s_parentCount - v197;
    Com_Printf(65559, "  childCount = %d    parentCount = %d\n", s_childCount - v80, s_parentCount - v197);
    v185 = v86 + v78;
    v182 = v87 + v79;
    Com_Printf(65559, "\n");
    v88 = s_childCount;
    v89 = s_parentCount;
    Com_Printf(65559, "        TYPE :      child     parent\n");
    Com_Printf(65559, "--------------------------------------------------------\n");
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  xmm7, cs:__real@42c80000
    }
    if ( varCountPlayer.childCount || varCountPlayer.parentCount )
    {
      if ( v88 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, r9
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r14
          vdivss  xmm2, xmm1, xmm0
        }
      }
      else
      {
        __asm { vxorps  xmm2, xmm2, xmm2 }
      }
      __asm
      {
        vmulss  xmm0, xmm2, xmm7
        vcvttss2si edi, xmm0
      }
      if ( v89 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rdx
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r15
          vdivss  xmm2, xmm1, xmm0
        }
      }
      else
      {
        __asm { vxorps  xmm2, xmm2, xmm2 }
      }
      __asm
      {
        vmulss  xmm0, xmm2, xmm7
        vcvttss2si ecx, xmm0
      }
      LODWORD(fileName) = _ECX;
      LODWORD(lineSort) = varCountPlayer.parentCount;
      LODWORD(fmt) = _EDI;
      Com_Printf(65559, "  %10s : %6d %2d%% %6d %2d%%  -  %d objects\n", rowName, varCountPlayer.childCount, fmt, lineSort, fileName, varCountPlayer.objectCount);
    }
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vcvtsi2ss xmm9, xmm9, rax
    }
    if ( v200 || v189 )
    {
      if ( v88 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, r9
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r14
          vdivss  xmm2, xmm1, xmm0
        }
      }
      else
      {
        __asm { vxorps  xmm2, xmm2, xmm2 }
      }
      __asm
      {
        vmulss  xmm0, xmm2, xmm7
        vcvttss2si ecx, xmm0
      }
      if ( v89 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r15
          vdivss  xmm2, xmm1, xmm0
        }
      }
      else
      {
        __asm { vxorps  xmm2, xmm2, xmm2 }
      }
      __asm
      {
        vmulss  xmm0, xmm2, xmm7
        vcvttss2si eax, xmm0
      }
      LODWORD(functionName) = v190;
      LODWORD(fileName) = _EAX;
      LODWORD(lineSort) = v189;
      LODWORD(fmt) = _ECX;
      Com_Printf(65559, "  %10s : %6d %2d%% %6d %2d%%  -  %d objects\n", "client", v200, fmt, lineSort, fileName, functionName);
    }
    v115 = &varCountByClass[8];
    v116 = (Scr_VarCount *)varCountByClass;
    p_name = &scrContext->m_varPub.m_classMap[0].name;
    v118 = 11i64;
    do
    {
      if ( *v115 )
        Scr_VarCount_Print(v116, *p_name, v88, v89);
      ++v116;
      p_name += 3;
      v115 += 3;
      --v118;
    }
    while ( v118 );
    if ( v201 || v191 )
    {
      if ( v88 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rdx
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r14
          vdivss  xmm2, xmm1, xmm0
        }
      }
      else
      {
        __asm { vmovaps xmm2, xmm6 }
      }
      __asm
      {
        vmulss  xmm0, xmm2, xmm7
        vcvttss2si ecx, xmm0
      }
      if ( v89 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r15
          vdivss  xmm2, xmm1, xmm0
        }
      }
      else
      {
        __asm { vmovaps xmm2, xmm6 }
      }
      __asm
      {
        vmulss  xmm0, xmm2, xmm7
        vcvttss2si eax, xmm0
      }
      LODWORD(functionName) = v202;
      LODWORD(fileName) = _EAX;
      LODWORD(lineSort) = v191;
      LODWORD(fmt) = _ECX;
      Com_Printf(65559, "  %10s : %6d %2d%% %6d %2d%%  -  %d objects\n", "level", v201, fmt, lineSort, fileName, functionName);
    }
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vcvtsi2ss xmm8, xmm8, r15
    }
    if ( v203 || v192 )
    {
      if ( v88 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rdx
          vdivss  xmm1, xmm0, xmm9
        }
      }
      else
      {
        __asm { vmovaps xmm1, xmm6 }
      }
      __asm
      {
        vmulss  xmm0, xmm1, xmm7
        vcvttss2si ecx, xmm0
      }
      if ( v89 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r15
          vdivss  xmm2, xmm1, xmm0
        }
      }
      else
      {
        __asm { vmovaps xmm2, xmm6 }
      }
      __asm
      {
        vmulss  xmm0, xmm2, xmm7
        vcvttss2si eax, xmm0
      }
      LODWORD(functionName) = v204;
      LODWORD(fileName) = _EAX;
      LODWORD(lineSort) = v192;
      LODWORD(fmt) = _ECX;
      Com_Printf(65559, "  %10s : %6d %2d%% %6d %2d%%  -  %d objects\n", "anim", v203, fmt, lineSort, fileName, functionName);
    }
    if ( v205 || v193 )
    {
      if ( v88 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rdx
          vdivss  xmm1, xmm0, xmm9
        }
      }
      else
      {
        __asm { vmovaps xmm1, xmm6 }
      }
      __asm
      {
        vmulss  xmm0, xmm1, xmm7
        vcvttss2si ecx, xmm0
      }
      if ( v89 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm1, xmm0, xmm8
        }
      }
      else
      {
        __asm { vmovaps xmm1, xmm6 }
      }
      __asm
      {
        vmulss  xmm0, xmm1, xmm7
        vcvttss2si eax, xmm0
      }
      LODWORD(functionName) = v206;
      LODWORD(fileName) = _EAX;
      LODWORD(lineSort) = v193;
      LODWORD(fmt) = _ECX;
      Com_Printf(65559, "  %10s : %6d %2d%% %6d %2d%%  -  %d objects\n", "notify", v205, fmt, lineSort, fileName, functionName);
    }
    if ( v194 || v188 )
    {
      if ( v88 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r9
          vdivss  xmm1, xmm0, xmm9
        }
      }
      else
      {
        __asm { vmovaps xmm1, xmm6 }
      }
      __asm
      {
        vmulss  xmm0, xmm1, xmm7
        vcvttss2si ecx, xmm0
      }
      if ( v89 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm1, xmm0, xmm8
        }
      }
      else
      {
        __asm { vmovaps xmm1, xmm6 }
      }
      __asm
      {
        vmulss  xmm0, xmm1, xmm7
        vcvttss2si eax, xmm0
      }
      LODWORD(functionName) = v195;
      LODWORD(fileName) = _EAX;
      LODWORD(lineSort) = v188;
      LODWORD(fmt) = _ECX;
      Com_Printf(65559, "  %10s : %6d %2d%% %6d %2d%%  -  %d objects\n", "classmap", v194, fmt, lineSort, fileName, functionName);
    }
    if ( v185 || v182 )
    {
      if ( v88 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r9
          vdivss  xmm1, xmm0, xmm9
        }
      }
      else
      {
        __asm { vmovaps xmm1, xmm6 }
      }
      __asm
      {
        vmulss  xmm0, xmm1, xmm7
        vcvttss2si ecx, xmm0
      }
      if ( v89 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm6, xmm0, xmm8
        }
      }
      __asm
      {
        vmulss  xmm0, xmm6, xmm7
        vcvttss2si eax, xmm0
      }
      LODWORD(functionName) = v187 + 2;
      LODWORD(fileName) = _EAX;
      LODWORD(lineSort) = v182;
      LODWORD(fmt) = _ECX;
      Com_Printf(65559, "  %10s : %6d %2d%% %6d %2d%%  -  %d objects\n", "misc", v185, fmt, lineSort, fileName, functionName);
    }
    LODWORD(fmt) = v89;
    Com_Printf(65559, "  %10s : %6d     %6d\n", "TOTALS", v88, fmt);
    Com_Printf(65559, "  %10s : %d vars\n", "GRANDTOTAL", v89 + v88);
    Com_Printf(65559, "\n");
    s_parentBitArray = NULL;
    s_childBitArray = NULL;
    s_defaultEnterEnts = 1;
    if ( (_BYTE)v208 )
      Scr_DumpScriptVariables(scrContext, 1, 0, 0, 0, 0, NULL, NULL, 0, 1, 1, 1);
    if ( (_BYTE)v209 )
      Scr_DumpScriptThreads(scrContext, 0);
    if ( allowFile && *(_BYTE *)script_print_vars_file->current.integer64 )
      Com_CloseUserFileCon();
    Mem_LargeLocal::~Mem_LargeLocal(&v211);
    Mem_LargeLocal::~Mem_LargeLocal(&v212);
  }
  _R11 = &v215;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
Scr_RemoveClassMap
==============
*/
void Scr_RemoveClassMap(scrContext_t *scrContext, EntityClass classnum)
{
  char *v3; 
  __int64 entArrayId; 
  __int64 v5; 

  if ( scrContext->m_varPub.bInited )
  {
    v3 = (char *)&scrContext->m_varPub + 24 * (unsigned __int8)classnum;
    entArrayId = scrContext->m_varPub.m_classMap[(unsigned __int8)classnum].entArrayId;
    if ( (_DWORD)entArrayId )
    {
      if ( scrContext->m_varDebugPub.m_Inited )
      {
        --scrContext->m_varDebugPub.extRefCount[entArrayId];
        LODWORD(entArrayId) = *((_DWORD *)v3 + 63);
      }
      RemoveRefToObject(scrContext, entArrayId);
      *((_DWORD *)v3 + 63) = 0;
    }
    v5 = *((unsigned int *)v3 + 62);
    if ( (_DWORD)v5 )
    {
      if ( scrContext->m_varDebugPub.m_Inited )
      {
        --scrContext->m_varDebugPub.extRefCount[v5];
        LODWORD(v5) = *((_DWORD *)v3 + 62);
      }
      RemoveRefToObject(scrContext, v5);
      *((_DWORD *)v3 + 62) = 0;
    }
  }
}

/*
==============
Scr_RemoveThreadEmptyNotifyName
==============
*/
void Scr_RemoveThreadEmptyNotifyName(scrContext_t *scrContext, unsigned int startLocalId)
{
  unsigned __int64 v3; 
  ObjectVariableValue *v4; 
  ObjectVariableValue *objectVariableValue; 

  v3 = startLocalId;
  v4 = &scrContext->m_varGlob.objectVariableValue[v3];
  if ( LOBYTE(v4->w.type) != 18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3892, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "entryValue->GetType() == VAR_NOTIFY_THREAD") )
    __debugbreak();
  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  if ( LOBYTE(objectVariableValue[v3].w.type) != 18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3902, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "entryValue->GetType() == VAR_NOTIFY_THREAD") )
    __debugbreak();
  if ( objectVariableValue[v3].w.type >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3893, ASSERT_TYPE_ASSERT, "( Scr_GetThreadNotifyName( scrContext, startLocalId ) == ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "Scr_GetThreadNotifyName( scrContext, startLocalId ) == NULL_SCR_STRING") )
    __debugbreak();
  v4->w.type &= 0xFFFFFF11;
  v4->w.type |= 0x11u;
}

/*
==============
Scr_RemoveThreadNotifyName
==============
*/
void Scr_RemoveThreadNotifyName(scrContext_t *scrContext, unsigned int startLocalId)
{
  ObjectVariableValue *objectVariableValue; 
  __int64 v4; 
  ObjectVariableValue *v5; 
  scr_string_t v6; 

  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  v4 = startLocalId;
  if ( LOBYTE(objectVariableValue[v4].w.type) != 18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3878, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "entryValue->GetType() == VAR_NOTIFY_THREAD") )
    __debugbreak();
  v5 = scrContext->m_varGlob.objectVariableValue;
  if ( LOBYTE(v5[v4].w.type) != 18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3902, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "entryValue->GetType() == VAR_NOTIFY_THREAD") )
    __debugbreak();
  v6 = v5[v4].w.type >> 8;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3880, ASSERT_TYPE_ASSERT, "( stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stringValue != NULL_SCR_STRING") )
    __debugbreak();
  SL_RemoveRefToString(v6);
  objectVariableValue[v4].w.type = objectVariableValue[v4].w.type & 0xFFFFFF00 | 0x11;
}

/*
==============
Scr_SetClassMap
==============
*/
void Scr_SetClassMap(scrContext_t *scrContext, EntityClass classnum)
{
  char *v3; 
  const char *m_scriptPos; 
  ObjectVariableValue *v5; 
  unsigned int v6; 
  const char *v7; 
  ObjectVariableValue *v8; 
  unsigned int v9; 
  unsigned int index; 

  v3 = (char *)scrContext + 24 * (unsigned __int8)classnum;
  if ( *((_DWORD *)v3 + 6039) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7120, ASSERT_TYPE_ASSERT, "( !pScrVarPub->m_classMap[classnum].entArrayId )", (const char *)&queryFormat, "!pScrVarPub->m_classMap[classnum].entArrayId") )
    __debugbreak();
  if ( *((_DWORD *)v3 + 6038) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7121, ASSERT_TYPE_ASSERT, "( !pScrVarPub->m_classMap[classnum].id )", (const char *)&queryFormat, "!pScrVarPub->m_classMap[classnum].id") )
    __debugbreak();
  m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
  if ( !m_scriptPos )
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script array variable>";
  v5 = AllocVariable(scrContext, &index);
  v5->w.type = 24;
  v5->u.o.refCount = 0;
  v5->u.f.next = 0;
  v6 = index;
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
  *((_DWORD *)v3 + 6039) = v6;
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[v6];
  v7 = scrContext->m_varPub.varUsagePos.m_scriptPos;
  if ( !v7 )
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script array variable>";
  v8 = AllocVariable(scrContext, &index);
  v8->w.type = 24;
  v8->u.o.refCount = 0;
  v8->u.f.next = 0;
  v9 = index;
  scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)v7;
  *((_DWORD *)v3 + 6038) = v9;
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[v9];
}

/*
==============
Scr_SetEntityScriptVariableType
==============
*/
__int64 Scr_SetEntityScriptVariableType(scrContext_t *scrContext, unsigned int key, const char *value)
{
  const char *fieldBuffer; 
  unsigned int v8; 
  VariableType v9; 
  const char *NameForType; 
  int v12; 
  float valuea; 
  int v16; 
  int v17; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8626, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  if ( !scrContext->m_varPub.fieldBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8103, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.fieldBuffer )", (const char *)&queryFormat, "scrContext.m_varPub.fieldBuffer") )
    __debugbreak();
  fieldBuffer = scrContext->m_varPub.fieldBuffer;
  do
  {
    v8 = *(_DWORD *)fieldBuffer;
    if ( !*(_DWORD *)fieldBuffer )
      return 0i64;
    v9 = fieldBuffer[4];
    fieldBuffer += 5;
  }
  while ( key != v8 );
  switch ( v9 )
  {
    case VAR_STRING:
      Scr_AddString(scrContext, value);
      break;
    case VAR_VECTOR:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+68h+value], xmm0
        vmovss  [rsp+68h+var_34], xmm0
        vmovss  [rsp+68h+var_30], xmm0
      }
      j_sscanf(value, "%f %f %f", &valuea, &v16, &v17);
      Scr_AddVector(scrContext, &valuea);
      return v8;
    case VAR_FLOAT:
      *(double *)&_XMM0 = atof(value);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0; value }
      Scr_AddFloat(scrContext, *(float *)&_XMM1);
      return v8;
    case VAR_INTEGER:
      v12 = atoi(value);
      Scr_AddInt(scrContext, v12);
      return v8;
    default:
      NameForType = Scr_GetNameForType(v9);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 8655, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_SetEntityScriptVariableType: unsupported type %s", NameForType) )
      {
        __debugbreak();
        return v8;
      }
      break;
  }
  return v8;
}

/*
==============
Scr_SetThreadNotifyName
==============
*/
void Scr_SetThreadNotifyName(scrContext_t *scrContext, unsigned int startLocalId, scr_string_t stringValue)
{
  ObjectVariableValue *v4; 
  ObjectVariableValue::<unnamed_type_w> v5; 

  v4 = &scrContext->m_varGlob.objectVariableValue[startLocalId];
  if ( LOBYTE(v4->w.type) != 17 )
  {
    v5.type = (unsigned int)v4->w;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3829, ASSERT_TYPE_ASSERT, "( ( entryValue->GetType() == VAR_THREAD ) )", "%s\n\t( entryValue->w.type ) = %i", "( entryValue->GetType() == VAR_THREAD )", v5.type) )
      __debugbreak();
  }
  if ( (stringValue & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 158, ASSERT_TYPE_ASSERT, "( !( (unsigned)name & VAR_NAME_TEST_MASK ) )", (const char *)&queryFormat, "!( (unsigned)name & VAR_NAME_TEST_MASK )") )
    __debugbreak();
  v4->w.type = (stringValue << 8) | 0x12;
}

/*
==============
Scr_SetThreadWaitTime
==============
*/
void Scr_SetThreadWaitTime(scrContext_t *scrContext, unsigned int startLocalId, unsigned int waitTime)
{
  ObjectVariableValue *v4; 
  char type; 

  v4 = &scrContext->m_varGlob.objectVariableValue[startLocalId];
  type = v4->w.type;
  if ( type != 17 )
  {
    if ( type != 18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3902, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "entryValue->GetType() == VAR_NOTIFY_THREAD") )
      __debugbreak();
    if ( v4->w.type >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3912, ASSERT_TYPE_ASSERT, "( (entryValue->GetType() == VAR_THREAD) || (Scr_GetThreadNotifyName( scrContext, startLocalId ) == ( static_cast< scr_string_t >( 0 ) )) )", (const char *)&queryFormat, "(entryValue->GetType() == VAR_THREAD) || (Scr_GetThreadNotifyName( scrContext, startLocalId ) == NULL_SCR_STRING)") )
      __debugbreak();
  }
  if ( (waitTime & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 172, ASSERT_TYPE_ASSERT, "( !( ( unsigned ) waitTime & VAR_NAME_TEST_MASK ) )", (const char *)&queryFormat, "!( ( unsigned ) waitTime & VAR_NAME_TEST_MASK )") )
    __debugbreak();
  v4->w.type = (waitTime << 8) | 0x13;
}

/*
==============
Scr_ShutdownStringSet
==============
*/

void __fastcall Scr_ShutdownStringSet(scrContext_t *scrContext, unsigned int setId)
{
  RemoveRefToObject(scrContext, setId);
}

/*
==============
Scr_ShutdownVariables
==============
*/
void Scr_ShutdownVariables(scrContext_t *scrContext)
{
  unsigned int gameId; 
  unsigned int tempVariable; 
  __int64 v4; 
  unsigned int numScriptValues; 

  gameId = scrContext->m_varPub.gameId;
  if ( gameId )
  {
    FreeValue(scrContext, gameId);
    scrContext->m_varPub.gameId = 0;
  }
  tempVariable = scrContext->m_varPub.tempVariable;
  if ( tempVariable )
  {
    FreeValue(scrContext, tempVariable);
    scrContext->m_varPub.tempVariable = 0;
  }
  Scr_CheckLeaks(scrContext);
  if ( !scrStringDebugGlob || !scrStringDebugGlob->ignoreChecks )
  {
    if ( scrContext->m_varPub.numScriptValues )
    {
      numScriptValues = scrContext->m_varPub.numScriptValues;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3003, ASSERT_TYPE_ASSERT, "( ( !pScrVarPub->numScriptValues ) )", "( pScrVarPub->numScriptValues ) = %i", numScriptValues) )
        __debugbreak();
    }
    if ( scrContext->m_varPub.numScriptObjects )
    {
      LODWORD(v4) = scrContext->m_varPub.numScriptObjects;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3004, ASSERT_TYPE_ASSERT, "( ( !pScrVarPub->numScriptObjects ) )", "( pScrVarPub->numScriptObjects ) = %i", v4) )
        __debugbreak();
    }
  }
}

/*
==============
Scr_StopThread
==============
*/
void Scr_StopThread(scrContext_t *scrContext, unsigned int threadId)
{
  __int64 v2; 

  v2 = threadId;
  if ( !threadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 3864, ASSERT_TYPE_ASSERT, "( threadId )", (const char *)&queryFormat, "threadId") )
    __debugbreak();
  Scr_ClearThread(scrContext, v2);
  scrContext->m_varGlob.objectVariableValue[v2].u.f.next = scrContext->m_varPub.levelId;
  AddRefToObject(scrContext, scrContext->m_varPub.levelId);
}

/*
==============
Scr_UnmatchingTypesError
==============
*/
void Scr_UnmatchingTypesError(scrContext_t *scrContext, VariableValue *value1, VariableValue *value2)
{
  VariableType type; 
  VariableType v7; 
  const char *NameForType; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 

  if ( scrContext->m_varPub.error_message )
  {
    v12 = NULL;
  }
  else
  {
    type = value1->type;
    v7 = value2->type;
    Scr_CastDebugString(scrContext, value1);
    Scr_CastDebugString(scrContext, value2);
    if ( value1->type != VAR_STRING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6161, ASSERT_TYPE_ASSERT, "( value1->type == VAR_STRING )", (const char *)&queryFormat, "value1->type == VAR_STRING") )
      __debugbreak();
    if ( value2->type != VAR_STRING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 6162, ASSERT_TYPE_ASSERT, "( value2->type == VAR_STRING )", (const char *)&queryFormat, "value2->type == VAR_STRING") )
      __debugbreak();
    NameForType = Scr_GetNameForType(v7);
    v9 = Scr_GetNameForType(type);
    v10 = SL_ConvertToString((scr_string_t)value2->u.intValue);
    v11 = SL_ConvertToString((scr_string_t)value1->u.intValue);
    v12 = j_va("pair '%s' and '%s' has unmatching types '%s' and '%s'", v11, v10, v9, NameForType);
  }
  RemoveRefToValue(scrContext, (unsigned __int8)value1->type, value1->u);
  value1->type = VAR_UNDEFINED;
  RemoveRefToValue(scrContext, (unsigned __int8)value2->type, value2->u);
  value2->type = VAR_UNDEFINED;
  Scr_Error(COM_ERR_5237, scrContext, v12);
}

/*
==============
Scr_VarCount_Print
==============
*/
void Scr_VarCount_Print(Scr_VarCount *varCount, const char *name, unsigned int childCount, unsigned int parentCount)
{
  __int64 v10; 
  unsigned int v16; 
  unsigned int objectCount; 

  v10 = varCount->childCount;
  if ( *(_QWORD *)&varCount->childCount )
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
    if ( childCount )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, r9
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm3, xmm1, xmm0
      }
    }
    else
    {
      __asm { vxorps  xmm3, xmm3, xmm3 }
    }
    v16 = varCount->parentCount;
    __asm
    {
      vmovss  xmm4, cs:__real@42c80000
      vmulss  xmm0, xmm3, xmm4
      vcvttss2si r8d, xmm0
    }
    if ( parentCount )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, rdx
        vcvtsi2ss xmm0, xmm0, r11
        vdivss  xmm2, xmm1, xmm0
      }
    }
    objectCount = varCount->objectCount;
    __asm
    {
      vmulss  xmm0, xmm2, xmm4
      vcvttss2si ecx, xmm0
    }
    Com_Printf(65559, "  %10s : %6d %2d%% %6d %2d%%  -  %d objects\n", name, v10, _ER8, v16, _ECX, objectCount);
  }
}

/*
==============
Scr_Variable_CalculateEntityIndex
==============
*/
__int64 Scr_Variable_CalculateEntityIndex(scrContext_t *scrContext, unsigned int entnum, EntityClass classnum, LocalClientNum_t localClientNum)
{
  int v7; 

  if ( classnum != ENTITY_CLASS_SCRIPTABLE && entnum > 0xFFFF )
  {
    v7 = 0xFFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 4507, ASSERT_TYPE_ASSERT, "( entnum ) <= ( 0xffff )", "entnum <= USHRT_MAX\n\t%i, %i", entnum, v7) )
      __debugbreak();
  }
  return entnum;
}

/*
==============
Scr_Variable_CheckObjectReference
==============
*/
void Scr_Variable_CheckObjectReference(scrContext_t *scrContext)
{
  unsigned int m_variableListParentSize; 
  unsigned int v2; 
  ObjectVariableValue *objectVariableValue; 
  ObjectVariableValue::<unnamed_type_w> *p_w; 
  char type; 
  unsigned __int16 *refCount; 
  unsigned int FirstSibling; 
  ChildVariableValue *v9; 
  unsigned int v10; 
  VariableType v11; 
  VariableValue out; 
  int v13; 
  unsigned int v14; 
  ObjectVariableValue::<unnamed_type_w> *v15; 

  m_variableListParentSize = scrContext->m_variableListParentSize;
  v2 = 1;
  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  v14 = m_variableListParentSize;
  v13 = 1;
  if ( m_variableListParentSize <= 1 )
    return;
  p_w = &objectVariableValue[1].w;
  v15 = &objectVariableValue[1].w;
  do
  {
    type = p_w->type;
    switch ( LOBYTE(p_w->type) )
    {
      case 0x11:
      case 0x12:
      case 0x13:
        goto $LN15_78;
      case 0x14:
        ++scrContext->m_varDebugPub.refCount[(unsigned __int64)p_w->type >> 8];
        type = p_w->type;
$LN15_78:
        refCount = scrContext->m_varDebugPub.refCount;
        if ( (unsigned __int8)(type - 17) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 193, ASSERT_TYPE_ASSERT, "( GetType() == VAR_THREAD || GetType() == VAR_TIME_THREAD || GetType() == VAR_CHILD_THREAD || GetType() == VAR_NOTIFY_THREAD )", (const char *)&queryFormat, "GetType() == VAR_THREAD || GetType() == VAR_TIME_THREAD || GetType() == VAR_CHILD_THREAD || GetType() == VAR_NOTIFY_THREAD") )
          __debugbreak();
        ++refCount[p_w[-1].type];
        goto $LN2_7;
      case 0x16:
        ++scrContext->m_varDebugPub.refCount[p_w[-1].type];
        goto $LN2_7;
      case 0x18:
        FirstSibling = FindFirstSibling(scrContext, v2);
        if ( !FirstSibling )
          goto $LN2_7;
        break;
      default:
        goto $LN2_7;
    }
    do
    {
      v9 = &scrContext->m_varGlob.childVariableValue[FirstSibling];
      if ( (*(_BYTE *)&v9->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1881, ASSERT_TYPE_ASSERT, "( IsValidChild( childValue ) )", (const char *)&queryFormat, "IsValidChild( childValue )") )
        __debugbreak();
      if ( v9->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
        __debugbreak();
      v10 = (*(_WORD *)&v9->tn >> 6) + ((v9->k.match & 0x3FFF) << 10);
      if ( !v10 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5028, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
        {
          __debugbreak();
          v11 = VAR_STRING;
          goto LABEL_25;
        }
LABEL_21:
        v11 = VAR_STRING;
        goto LABEL_25;
      }
      if ( v10 < 0x80000 )
        goto LABEL_21;
      if ( v10 >= 0xC0000 )
      {
        v11 = VAR_INTEGER;
        v10 -= 0x800000;
      }
      else
      {
        v11 = VAR_POINTER;
        v10 -= 0x80000;
      }
LABEL_25:
      MakeVariableValue_Out(v11, v10, &out);
      if ( out.type == VAR_POINTER )
        ++scrContext->m_varDebugPub.refCount[out.u.uintValue];
      FirstSibling = FindNextSibling(scrContext, FirstSibling);
    }
    while ( FirstSibling );
    p_w = v15;
    v2 = v13;
    m_variableListParentSize = v14;
$LN2_7:
    ++v2;
    p_w += 3;
    v13 = v2;
    v15 = p_w;
  }
  while ( v2 < m_variableListParentSize );
}

/*
==============
Scr_Variable_CheckReferences
==============
*/
void Scr_Variable_CheckReferences(scrContext_t *scrContext)
{
  unsigned int m_variableListChildSize; 
  ChildVariableValue *v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  char v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int m_variableListParentSize; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  char v14; 
  ObjectVariableValue *v15; 
  VariableType type; 
  const char *NameForType; 
  unsigned __int8 v18; 
  char *fmt; 
  __int64 v20; 
  __int64 v21; 

  if ( scrContext->m_varDebugPub.m_Inited && (!scrStringDebugGlob || !scrStringDebugGlob->ignoreChecks) )
  {
    memcpy_0(scrContext->m_varDebugPub.refCount, scrContext->m_varDebugPub.extRefCount, 2i64 * scrContext->m_variableListParentSize);
    Scr_AddDebugRefCount(scrContext, scrContext->m_varDebugPub.refCount);
    Scr_Variable_CheckObjectReference(scrContext);
    m_variableListChildSize = scrContext->m_variableListChildSize;
    v3 = scrContext->m_varGlob.childVariableValue + 1;
    if ( m_variableListChildSize > 1 )
    {
      v4 = m_variableListChildSize - 1;
      do
      {
        if ( (*(_BYTE *)&v3->tn & 0x3F) == 1 )
        {
          ++scrContext->m_varDebugPub.refCount[v3->u.f.prev];
        }
        else if ( (*(_BYTE *)&v3->tn & 0x3F) == 12 )
        {
          if ( !*(_DWORD *)(v3->u.u.scriptCodePosValue + 12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 1925, ASSERT_TYPE_ASSERT, "( value->u.u.stackValue->localId )", (const char *)&queryFormat, "GETVARSTACK( value )->localId") )
            __debugbreak();
          ++scrContext->m_varDebugPub.refCount[*(unsigned int *)(v3->u.u.scriptCodePosValue + 12)];
          v5 = *(unsigned __int16 *)(v3->u.u.scriptCodePosValue + 8);
          v6 = v3->u.u.scriptCodePosValue + 17;
          if ( *(_WORD *)(v3->u.u.scriptCodePosValue + 8) )
          {
            do
            {
              v7 = *(_BYTE *)v6;
              --v5;
              v8 = *(unsigned int *)(v6 + 1);
              v6 += 9i64;
              if ( v7 == 1 )
                ++scrContext->m_varDebugPub.refCount[v8];
            }
            while ( v5 );
          }
        }
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    v9 = 1;
    m_variableListParentSize = scrContext->m_variableListParentSize;
    v11 = 1i64;
    if ( scrContext->m_varPub.developer )
    {
      v12 = 1;
      if ( m_variableListParentSize > 1 )
      {
        v13 = 1i64;
        do
        {
          if ( Scr_IsVariableBreakpoint(scrContext, v12) )
            ++scrContext->m_varDebugPub.refCount[v13];
          ++v12;
          ++v13;
        }
        while ( v12 < m_variableListParentSize );
      }
    }
    v14 = 0;
    v15 = scrContext->m_varGlob.objectVariableValue + 1;
    if ( m_variableListParentSize > 1 )
    {
      do
      {
        type = v15->w.type;
        if ( type != VAR_COUNT )
        {
          if ( !scrContext->m_varDebugPub.refCount[v11] )
          {
            v14 = 1;
            if ( type == VAR_ENTITY )
            {
              Com_PrintError(24, "Zero Reference count for object id: %d Entity num %d\n", v9, v15->u.f.next);
            }
            else
            {
              NameForType = Scr_GetNameForType(type);
              Com_PrintError(24, "Zero Reference count for object id: %d of type %s\n", v9, NameForType);
            }
          }
          if ( scrContext->m_varDebugPub.refCount[v11] != v15->u.o.refCount + 1 )
          {
            v14 = 1;
            if ( (unsigned __int8)type >= VAR_COUNT )
            {
              LODWORD(v21) = 26;
              LODWORD(v20) = (unsigned __int8)type;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2725, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( VAR_COUNT )", "type doesn't index VAR_COUNT\n\t%i not in [0, %i)", v20, v21) )
                __debugbreak();
            }
            v18 = type;
            if ( (unsigned __int8)type > VAR_TOTAL_COUNT )
              v18 = 29;
            LODWORD(fmt) = v15->u.o.refCount + 1;
            Com_PrintError(24, "id: %d scrVarDebugPub->refCount %d does not match value->u.o.refCount + 1 %d, CheckReferences() is broken. Type = %s\n", v9, scrContext->m_varDebugPub.refCount[v11], fmt, var_typename[v18]);
          }
        }
        ++v9;
        ++v11;
        ++v15;
      }
      while ( v9 < m_variableListParentSize );
      if ( v14 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 2017, ASSERT_TYPE_ASSERT, "(!badRef)", "%s\n\tBad Reference found, see above output.", "!badRef") )
          __debugbreak();
      }
    }
  }
}

/*
==============
Scr_WarnChildScriptVarsLimit
==============
*/
bool Scr_WarnChildScriptVarsLimit(const scrContext_t *scrContext)
{
  unsigned int m_variableListChildSizeWarn; 
  bool result; 

  m_variableListChildSizeWarn = scrContext->m_variableListChildSizeWarn;
  result = 0;
  if ( m_variableListChildSizeWarn )
    return scrContext->m_varPub.numScriptValues > m_variableListChildSizeWarn;
  return result;
}

/*
==============
Scr_WarnParentScriptVarsLimit
==============
*/
bool Scr_WarnParentScriptVarsLimit(const scrContext_t *scrContext)
{
  unsigned int m_variableListParentSizeWarn; 
  bool result; 

  m_variableListParentSizeWarn = scrContext->m_variableListParentSizeWarn;
  result = 0;
  if ( m_variableListParentSizeWarn )
    return scrContext->m_varPub.numScriptObjects > m_variableListParentSizeWarn;
  return result;
}

/*
==============
SetNewVariableValue
==============
*/
void SetNewVariableValue(scrContext_t *scrContext, unsigned int id, VariableValue *value)
{
  __int64 v4; 
  ChildVariableValue *v6; 

  v4 = id;
  if ( value->type >= VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5296, ASSERT_TYPE_ASSERT, "( !IsObject( value ) )", (const char *)&queryFormat, "!IsObject( value )") )
    __debugbreak();
  v6 = &scrContext->m_varGlob.childVariableValue[v4];
  if ( value->type >= VAR_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5299, ASSERT_TYPE_ASSERT, "( value->type >= 0 && value->type < VAR_COUNT )", (const char *)&queryFormat, "value->type >= 0 && value->type < VAR_COUNT") )
    __debugbreak();
  if ( (*(_BYTE *)&v6->tn & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5300, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_UNDEFINED )", (const char *)&queryFormat, "entryValue->GetType() == VAR_UNDEFINED") )
    __debugbreak();
  v6->tn = (ChildVariableValue::TypeAndName)(*(_WORD *)&v6->tn & 0xFFC0 | value->type & 0x3F);
  v6->u.u.scriptCodePosValue = value->u.scriptCodePosValue;
}

/*
==============
SetObjectVariable
==============
*/
void SetObjectVariable(scrContext_t *scrContext, unsigned int newParentId, VariableType type, unsigned int name, ChildVariableValue *entryValue)
{
  ChildVariableValue *childVariableValue; 
  ChildVariableValue *v9; 
  ChildVariableValue::FreeListOrVariableUnion u; 

  childVariableValue = scrContext->m_varGlob.childVariableValue;
  v9 = &childVariableValue[GetVariable(scrContext, newParentId, name)];
  if ( (*(_BYTE *)&v9->tn & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7826, ASSERT_TYPE_ASSERT, "( newEntryValue->GetType() == VAR_UNDEFINED )", (const char *)&queryFormat, "newEntryValue->GetType() == VAR_UNDEFINED") )
    __debugbreak();
  if ( v9->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
    __debugbreak();
  if ( (*(_WORD *)&v9->tn >> 6) + ((v9->k.match & 0x3FFF) << 10) != name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 7827, ASSERT_TYPE_ASSERT, "( newEntryValue->GetName() == name )", (const char *)&queryFormat, "newEntryValue->GetName() == name") )
    __debugbreak();
  *(_WORD *)&v9->tn &= 0xFFC0u;
  *(_WORD *)&v9->tn |= type & 0x3F;
  u = entryValue->u;
  v9->u.u.scriptCodePosValue = entryValue->u.u.scriptCodePosValue;
  AddRefToValue(scrContext, (unsigned __int8)type, u.u);
}

/*
==============
ScriptCodePos::SetScriptPos
==============
*/
void ScriptCodePos::SetScriptPos(ScriptCodePos *this, const char *pos)
{
  this->m_genericPos = (unsigned __int64)pos;
}

/*
==============
ScriptCodePos::SetVarUsagePos
==============
*/
void ScriptCodePos::SetVarUsagePos(ScriptCodePos *this, const char *varUsagePos)
{
  this->m_genericPos = (unsigned __int64)varUsagePos;
}

/*
==============
ScriptCodePos::SetVarUsagePosIfNull
==============
*/
void ScriptCodePos::SetVarUsagePosIfNull(ScriptCodePos *this, const char *varUsagePos)
{
  if ( !this->m_genericPos )
    this->m_genericPos = (unsigned __int64)varUsagePos;
}

/*
==============
SetVariableEntityFieldValue
==============
*/
void SetVariableEntityFieldValue(scrContext_t *scrContext, unsigned int entId, unsigned int fieldName, VariableValue *value)
{
  __int64 v5; 
  ObjectVariableValue *v8; 
  unsigned int v9; 
  unsigned int ArrayVariable; 
  ChildVariableValue *childVariableValue; 
  __int64 NewVariable; 

  v5 = entId;
  if ( value->type >= VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5383, ASSERT_TYPE_ASSERT, "( !IsObject( value ) )", (const char *)&queryFormat, "!IsObject( value )") )
    __debugbreak();
  if ( value->type == VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5384, ASSERT_TYPE_ASSERT, "( value->type != VAR_STACK )", (const char *)&queryFormat, "value->type != VAR_STACK") )
    __debugbreak();
  v8 = &scrContext->m_varGlob.objectVariableValue[v5];
  if ( LOBYTE(v8->w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5387, ASSERT_TYPE_ASSERT, "( entValue->GetType() == VAR_ENTITY )", (const char *)&queryFormat, "entValue->GetType() == VAR_ENTITY") )
    __debugbreak();
  v9 = v8->w.type >> 8;
  if ( BYTE1(v8->w.type) >= 0xBu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5389, ASSERT_TYPE_ASSERT, "( classnum < ENTITY_CLASS_COUNT )", (const char *)&queryFormat, "classnum < ENTITY_CLASS_COUNT") )
    __debugbreak();
  ArrayVariable = FindArrayVariable(scrContext, scrContext->m_varPub.m_classMap[(unsigned __int8)v9].id, fieldName);
  if ( !ArrayVariable || !SetEntityFieldValue(scrContext, (EntityClass)v9, v8->u.f.next, (LocalClientNum_t)(BYTE2(v8->w.entInfo) - 1), scrContext->m_varGlob.childVariableValue[ArrayVariable].u.u.intValue, value) )
  {
    childVariableValue = scrContext->m_varGlob.childVariableValue;
    NewVariable = GetNewVariable(scrContext, v5, fieldName);
    childVariableValue[NewVariable].tn = (ChildVariableValue::TypeAndName)(*(_WORD *)&childVariableValue[NewVariable].tn & 0xFFC0 | value->type & 0x3F);
    childVariableValue[NewVariable].u.u.scriptCodePosValue = value->u.scriptCodePosValue;
  }
}

/*
==============
SetVariableEntityFieldValueByValue
==============
*/
void SetVariableEntityFieldValueByValue(scrContext_t *scrContext, unsigned int entId, unsigned int fieldName, VariableValue *value)
{
  __int64 v5; 
  ObjectVariableValue *v8; 
  unsigned int v9; 
  unsigned int ArrayVariable; 
  int v11; 
  int v12; 
  unsigned __int64 v13; 
  ChildVariableValue *childVariableValue; 
  __int64 NewVariable; 

  v5 = entId;
  if ( value->type >= VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5412, ASSERT_TYPE_ASSERT, "( !IsObject( value ) )", (const char *)&queryFormat, "!IsObject( value )") )
    __debugbreak();
  if ( value->type == VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5413, ASSERT_TYPE_ASSERT, "( value->type != VAR_STACK )", (const char *)&queryFormat, "value->type != VAR_STACK") )
    __debugbreak();
  v8 = &scrContext->m_varGlob.objectVariableValue[v5];
  if ( LOBYTE(v8->w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5416, ASSERT_TYPE_ASSERT, "( entValue->GetType() == VAR_ENTITY )", (const char *)&queryFormat, "entValue->GetType() == VAR_ENTITY") )
    __debugbreak();
  v9 = v8->w.type >> 8;
  if ( BYTE1(v8->w.type) >= 0xBu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5418, ASSERT_TYPE_ASSERT, "( classnum < ENTITY_CLASS_COUNT )", (const char *)&queryFormat, "classnum < ENTITY_CLASS_COUNT") )
    __debugbreak();
  ArrayVariable = FindArrayVariable(scrContext, scrContext->m_varPub.m_classMap[(unsigned __int8)v9].id, fieldName);
  if ( !ArrayVariable || (v11 = __rdtsc(), v12 = Scr_SetObjectFieldByValue(scrContext, (EntityClass)v9, v8->u.f.next, scrContext->m_varGlob.childVariableValue[ArrayVariable].u.u.intValue, value), v13 = __rdtsc(), scrContext->m_entFieldTime += (unsigned int)(v13 - v11), !v12) )
  {
    childVariableValue = scrContext->m_varGlob.childVariableValue;
    NewVariable = GetNewVariable(scrContext, v5, fieldName);
    childVariableValue[NewVariable].tn = (ChildVariableValue::TypeAndName)(*(_WORD *)&childVariableValue[NewVariable].tn & 0xFFC0 | value->type & 0x3F);
    childVariableValue[NewVariable].u.u.scriptCodePosValue = value->u.scriptCodePosValue;
  }
}

/*
==============
SetVariableFieldValue
==============
*/
void SetVariableFieldValue(scrContext_t *scrContext, unsigned int id, VariableValue *value)
{
  if ( id )
    SetVariableValue(scrContext, id, value);
  else
    SetVariableEntityFieldValue(scrContext, scrContext->m_varPub.entId, scrContext->m_varPub.entFieldName, value);
}

/*
==============
SetVariableFieldValue
==============
*/
void SetVariableFieldValue(scrContext_t *scrContext, VariableValue *value)
{
  SetVariableEntityFieldValue(scrContext, scrContext->m_varPub.entId, scrContext->m_varPub.entFieldName, value);
}

/*
==============
SetVariableNonEntityFieldValue
==============
*/
char SetVariableNonEntityFieldValue(scrContext_t *scrContext, unsigned int entId, unsigned int fieldName, VariableValue *value)
{
  __int64 v5; 
  ObjectVariableValue *v8; 
  unsigned int v9; 
  ChildVariableValue *childVariableValue; 
  __int64 NewVariable; 

  v5 = entId;
  if ( value->type >= VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5353, ASSERT_TYPE_ASSERT, "( !IsObject( value ) )", (const char *)&queryFormat, "!IsObject( value )") )
    __debugbreak();
  if ( value->type == VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5354, ASSERT_TYPE_ASSERT, "( value->type != VAR_STACK )", (const char *)&queryFormat, "value->type != VAR_STACK") )
    __debugbreak();
  v8 = &scrContext->m_varGlob.objectVariableValue[v5];
  if ( LOBYTE(v8->w.type) != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5357, ASSERT_TYPE_ASSERT, "( entValue->GetType() == VAR_ENTITY )", (const char *)&queryFormat, "entValue->GetType() == VAR_ENTITY") )
    __debugbreak();
  v9 = v8->w.type >> 8;
  if ( (unsigned __int8)v9 >= 0xBu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5359, ASSERT_TYPE_ASSERT, "( classnum < ENTITY_CLASS_COUNT )", (const char *)&queryFormat, "classnum < ENTITY_CLASS_COUNT") )
    __debugbreak();
  if ( FindArrayVariable(scrContext, scrContext->m_varPub.m_classMap[(unsigned __int8)v9].id, fieldName) )
    return 0;
  childVariableValue = scrContext->m_varGlob.childVariableValue;
  NewVariable = GetNewVariable(scrContext, v5, fieldName);
  childVariableValue[NewVariable].tn = (ChildVariableValue::TypeAndName)(*(_WORD *)&childVariableValue[NewVariable].tn & 0xFFC0 | value->type & 0x3F);
  childVariableValue[NewVariable].u.u.scriptCodePosValue = value->u.scriptCodePosValue;
  return 1;
}

/*
==============
SetVariableValue
==============
*/
void SetVariableValue(scrContext_t *scrContext, unsigned int id, VariableValue *value)
{
  __int64 v3; 
  ChildVariableValue *v6; 

  v3 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5275, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  if ( value->type >= VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5276, ASSERT_TYPE_ASSERT, "( !IsObject( value ) )", (const char *)&queryFormat, "!IsObject( value )") )
    __debugbreak();
  if ( value->type >= VAR_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5277, ASSERT_TYPE_ASSERT, "( value->type >= 0 && value->type < VAR_COUNT )", (const char *)&queryFormat, "value->type >= 0 && value->type < VAR_COUNT") )
    __debugbreak();
  if ( value->type == VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5279, ASSERT_TYPE_ASSERT, "( value->type != VAR_STACK )", (const char *)&queryFormat, "value->type != VAR_STACK") )
    __debugbreak();
  v6 = &scrContext->m_varGlob.childVariableValue[v3];
  if ( (*(_BYTE *)&v6->tn & 0x3Fu) >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5282, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
    __debugbreak();
  if ( (*(_BYTE *)&v6->tn & 0x3F) == 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5283, ASSERT_TYPE_ASSERT, "( entryValue->GetType() != VAR_STACK )", (const char *)&queryFormat, "entryValue->GetType() != VAR_STACK") )
    __debugbreak();
  RemoveRefToValue(scrContext, *(_BYTE *)&v6->tn & 0x3F, v6->u.u);
  v6->tn = (ChildVariableValue::TypeAndName)(*(_WORD *)&v6->tn & 0xFFC0 | value->type & 0x3F);
  v6->u.u.scriptCodePosValue = value->u.scriptCodePosValue;
}

/*
==============
ThreadInfoCompare
==============
*/
__int64 ThreadInfoCompare(const void *info1, const void *info2)
{
  __int64 v2; 
  __int64 v3; 
  _QWORD *v4; 
  __int64 v5; 
  __int64 v7; 

  v2 = *((int *)info1 + 128);
  if ( (int)v2 > 0 )
  {
    v3 = 0i64;
    v4 = info2;
    while ( v3 < *((int *)info2 + 128) )
    {
      v5 = *(_QWORD *)((char *)v4 + (_BYTE *)info1 - (_BYTE *)info2);
      if ( v5 != *v4 )
      {
        v7 = v5 - *v4;
        if ( (unsigned __int64)(v7 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v7, "signed", v7) )
          __debugbreak();
        return (unsigned int)v7;
      }
      ++v3;
      ++v4;
      if ( v3 >= v2 )
        return (unsigned int)(v2 - *((_DWORD *)info2 + 128));
    }
  }
  return (unsigned int)(v2 - *((_DWORD *)info2 + 128));
}

/*
==============
VariableInfoCompare
==============
*/
__int64 VariableInfoCompare(const void *info1, const void *info2)
{
  if ( *(_QWORD *)info1 <= *(_QWORD *)info2 )
    return (unsigned int)-(*(_QWORD *)info1 < *(_QWORD *)info2);
  else
    return 1i64;
}

/*
==============
VariableInfoCountCompare
==============
*/
__int64 VariableInfoCountCompare(const void *info1, const void *info2)
{
  return (unsigned int)(*((_DWORD *)info1 + 7) - *((_DWORD *)info2 + 7));
}

/*
==============
VariableInfoFileLineCompare
==============
*/
int VariableInfoFileLineCompare(const void *info1, const void *info2)
{
  const char *v4; 
  const char *v5; 
  int result; 

  v4 = (const char *)*((_QWORD *)info1 + 1);
  if ( !v4 )
    return 1;
  v5 = (const char *)*((_QWORD *)info2 + 1);
  if ( !v5 )
    return -1;
  result = I_stricmp(v4, v5);
  if ( !result )
  {
    if ( *(_QWORD *)info1 > *(_QWORD *)info2 )
      return 1;
    return -(*(_QWORD *)info1 < *(_QWORD *)info2);
  }
  return result;
}

/*
==============
VariableInfoFileNameCompare
==============
*/
int VariableInfoFileNameCompare(const void *info1, const void *info2)
{
  const char *v2; 
  const char *v3; 

  v2 = (const char *)*((_QWORD *)info1 + 1);
  v3 = (const char *)*((_QWORD *)info2 + 1);
  if ( !v2 )
    return 1;
  if ( v3 )
    return I_stricmp(v2, v3);
  return -1;
}

/*
==============
VariableInfoFunctionCompare
==============
*/
int VariableInfoFunctionCompare(const void *info1, const void *info2)
{
  const char *v4; 
  const char *v5; 
  int result; 
  const char *v7; 
  const char *v8; 

  v4 = (const char *)*((_QWORD *)info1 + 1);
  if ( !v4 )
    return 1;
  v5 = (const char *)*((_QWORD *)info2 + 1);
  if ( !v5 )
    return -1;
  result = I_stricmp(v4, v5);
  if ( result )
    return result;
  v7 = (const char *)*((_QWORD *)info1 + 2);
  v8 = (const char *)*((_QWORD *)info2 + 2);
  if ( !v7 )
    return 1;
  if ( v8 )
    return I_stricmp(v7, v8);
  else
    return -1;
}

