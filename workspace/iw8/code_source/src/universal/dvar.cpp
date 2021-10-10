/*
==============
Dvar_SetVec3FromSource
==============
*/

void __fastcall Dvar_SetVec3FromSource(const dvar_t *dvar, float x, float y, float z, DvarSetSource source)
{
  ?Dvar_SetVec3FromSource@@YAXPEBUdvar_t@@MMMW4DvarSetSource@@@Z(dvar, x, y, z, source);
}

/*
==============
Dvar_SetVec2_Internal
==============
*/

void __fastcall Dvar_SetVec2_Internal(const dvar_t *dvar, float x, float y)
{
  ?Dvar_SetVec2_Internal@@YAXPEBUdvar_t@@MM@Z(dvar, x, y);
}

/*
==============
Dvar_GetIntSafe
==============
*/

int __fastcall Dvar_GetIntSafe(const char *dvarName)
{
  return ?Dvar_GetIntSafe@@YAHPEBD@Z(dvarName);
}

/*
==============
Dvar_ForEachName
==============
*/

void __fastcall Dvar_ForEachName(void (__fastcall *callback)(const char *))
{
  ?Dvar_ForEachName@@YAXP6AXPEBD@Z@Z(callback);
}

/*
==============
Dvar_UpdateDevGuiStep
==============
*/

void __fastcall Dvar_UpdateDevGuiStep(const dvar_t *dvar, float step)
{
  ?Dvar_UpdateDevGuiStep@@YAXPEBUdvar_t@@M@Z(dvar, step);
}

/*
==============
Dvar_SetVec3_Internal
==============
*/

void __fastcall Dvar_SetVec3_Internal(const dvar_t *dvar, float x, float y, float z)
{
  ?Dvar_SetVec3_Internal@@YAXPEBUdvar_t@@MMM@Z(dvar, x, y, z);
}

/*
==============
Dvar_Printf
==============
*/

bool Dvar_Printf(const dvar_t *dvar, int channel, const char *fmt, ...)
{
  return ?Dvar_Printf@@YA_NPEBUdvar_t@@HPEBDZZ(dvar, channel, fmt);
}

/*
==============
Dvar_DeregisterGamemodeDvars
==============
*/

void Dvar_DeregisterGamemodeDvars(void)
{
  ?Dvar_DeregisterGamemodeDvars@@YAXXZ();
}

/*
==============
Dvar_RegisterString
==============
*/

const dvar_t *__fastcall Dvar_RegisterString(const char *dvarName, const char *value, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterString@@YAPEBUdvar_t@@PEBD0I0@Z(dvarName, value, flags, description);
}

/*
==============
Dvar_AddFlags
==============
*/

void __fastcall Dvar_AddFlags(const dvar_t *dvar, int flags)
{
  ?Dvar_AddFlags@@YAXPEBUdvar_t@@H@Z(dvar, flags);
}

/*
==============
Dvar_Init
==============
*/

void Dvar_Init(void)
{
  ?Dvar_Init@@YAXXZ();
}

/*
==============
Dvar_SetFromStringByNameFromScript
==============
*/

const dvar_t *__fastcall Dvar_SetFromStringByNameFromScript(ScriptInstanceType instanceType, const char *dvarName, const char *string)
{
  return ?Dvar_SetFromStringByNameFromScript@@YAPEBUdvar_t@@W4ScriptInstanceType@@PEBD1@Z(instanceType, dvarName, string);
}

/*
==============
Dvar_SetServerThreadCheckEnabled
==============
*/

void __fastcall Dvar_SetServerThreadCheckEnabled(bool isEnabled)
{
  ?Dvar_SetServerThreadCheckEnabled@@YAX_N@Z(isEnabled);
}

/*
==============
Dvar_ForEachName_UNSAFE_LockBegin
==============
*/

void Dvar_ForEachName_UNSAFE_LockBegin(void)
{
  ?Dvar_ForEachName_UNSAFE_LockBegin@@YAXXZ();
}

/*
==============
Dvar_SetString_Internal
==============
*/

void __fastcall Dvar_SetString_Internal(const dvar_t *dvar, const char *value)
{
  ?Dvar_SetString_Internal@@YAXPEBUdvar_t@@PEBD@Z(dvar, value);
}

/*
==============
Dvar_RegisterInt64
==============
*/

const dvar_t *__fastcall Dvar_RegisterInt64(const char *dvarName, __int64 value, __int64 min, __int64 max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterInt64@@YAPEBUdvar_t@@PEBD_J11I0@Z(dvarName, value, min, max, flags, description);
}

/*
==============
Dvar_SetCommandByChecksum
==============
*/

void __fastcall Dvar_SetCommandByChecksum(unsigned int checksum, const char *string, bool isSuperUser)
{
  ?Dvar_SetCommandByChecksum@@YAXIPEBD_N@Z(checksum, string, isSuperUser);
}

/*
==============
Dvar_RegisterVec2
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec2(const char *dvarName, const vec2_t *value, float min, float max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec2@@YAPEBUdvar_t@@PEBDAEBTvec2_t@@MMI0@Z(dvarName, value, min, max, flags, description);
}

/*
==============
Dvar_ReportDvarConstUsage_Frame
==============
*/

void Dvar_ReportDvarConstUsage_Frame(void)
{
  ?Dvar_ReportDvarConstUsage_Frame@@YAXXZ();
}

/*
==============
Dvar_InfoValueForKey
==============
*/

const char *__fastcall Dvar_InfoValueForKey(const char *s, const char *key)
{
  return ?Dvar_InfoValueForKey@@YAPEBDPEBD0@Z(s, key);
}

/*
==============
Dvar_ClearLatchedValue
==============
*/

void __fastcall Dvar_ClearLatchedValue(const dvar_t *dvar)
{
  ?Dvar_ClearLatchedValue@@YAXPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_EnumToString
==============
*/

const char *__fastcall Dvar_EnumToString(const dvar_t *dvar)
{
  return ?Dvar_EnumToString@@YAPEBDPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_SetColorFromSource
==============
*/

void __fastcall Dvar_SetColorFromSource(const dvar_t *dvar, float r, float g, float b, float a, DvarSetSource source)
{
  ?Dvar_SetColorFromSource@@YAXPEBUdvar_t@@MMMMW4DvarSetSource@@@Z(dvar, r, g, b, a, source);
}

/*
==============
Dvar_InfoPrint
==============
*/

void __fastcall Dvar_InfoPrint(const char *s)
{
  ?Dvar_InfoPrint@@YAXPEBD@Z(s);
}

/*
==============
Dvar_RegisterVec2
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec2(const char *dvarName, const vec2_t *value, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec2@@YAPEBUdvar_t@@PEBDAEBTvec2_t@@MMMI0@Z(dvarName, value, min, max, devguistep, flags, description);
}

/*
==============
Dvar_RegisterFloat
==============
*/

const dvar_t *__fastcall Dvar_RegisterFloat(const char *dvarName, float value, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterFloat@@YAPEBUdvar_t@@PEBDMMMMI0@Z(dvarName, value, min, max, devguistep, flags, description);
}

/*
==============
Dvar_GenerateChecksumStringFromName
==============
*/

void __fastcall Dvar_GenerateChecksumStringFromName(char *dest, int size, const char *dvarName)
{
  ?Dvar_GenerateChecksumStringFromName@@YAXPEADHPEBD@Z(dest, size, dvarName);
}

/*
==============
Dvar_RegisterInt
==============
*/

const dvar_t *__fastcall Dvar_RegisterInt(const char *dvarName, int value, int min, int max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterInt@@YAPEBUdvar_t@@PEBDHHHI0@Z(dvarName, value, min, max, flags, description);
}

/*
==============
Dvar_Shutdown
==============
*/

void Dvar_Shutdown(void)
{
  ?Dvar_Shutdown@@YAXXZ();
}

/*
==============
Dvar_ValueToStringBuffer
==============
*/

void __fastcall Dvar_ValueToStringBuffer(const dvar_t *dvar, DvarValue *value, char *outBuffer, unsigned __int64 outBufferLen)
{
  ?Dvar_ValueToStringBuffer@@YAXPEBUdvar_t@@TDvarValue@@PEAD_K@Z(dvar, value, outBuffer, outBufferLen);
}

/*
==============
Dvar_DomainToString_GetLines
==============
*/

const char *__fastcall Dvar_DomainToString_GetLines(const dvar_t *dvar, char *outBuffer, unsigned __int64 outBufferLen, int *outLineCount)
{
  return ?Dvar_DomainToString_GetLines@@YAPEBDPEBUdvar_t@@PEAD_KPEAH@Z(dvar, outBuffer, outBufferLen, outLineCount);
}

/*
==============
Dvar_GetStringSafe
==============
*/

const char *__fastcall Dvar_GetStringSafe(const char *dvarName)
{
  return ?Dvar_GetStringSafe@@YAPEBDPEBD@Z(dvarName);
}

/*
==============
Dvar_EndPermanentRegistration
==============
*/

void Dvar_EndPermanentRegistration(void)
{
  ?Dvar_EndPermanentRegistration@@YAXXZ();
}

/*
==============
Dvar_ValidatePermanentDvars
==============
*/

bool __fastcall Dvar_ValidatePermanentDvars()
{
  return ?Dvar_ValidatePermanentDvars@@YA_NXZ();
}

/*
==============
Dvar_EnumStringToIndex
==============
*/

int __fastcall Dvar_EnumStringToIndex(const dvar_t *dvar, const char *enumString)
{
  return ?Dvar_EnumStringToIndex@@YAHPEBUdvar_t@@PEBD@Z(dvar, enumString);
}

/*
==============
Dvar_SetBool_Internal
==============
*/

void __fastcall Dvar_SetBool_Internal(const dvar_t *dvar, bool value)
{
  ?Dvar_SetBool_Internal@@YAXPEBUdvar_t@@_N@Z(dvar, value);
}

/*
==============
Dvar_RegisterBool
==============
*/

const dvar_t *__fastcall Dvar_RegisterBool(const char *dvarName, bool value, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterBool@@YAPEBUdvar_t@@PEBD_NI0@Z(dvarName, value, flags, description);
}

/*
==============
Dvar_SetInt_Internal
==============
*/

void __fastcall Dvar_SetInt_Internal(const dvar_t *dvar, int value)
{
  ?Dvar_SetInt_Internal@@YAXPEBUdvar_t@@H@Z(dvar, value);
}

/*
==============
Dvar_SetCommandByName
==============
*/

void __fastcall Dvar_SetCommandByName(const char *dvarName, const char *string, const bool isSuperUser)
{
  ?Dvar_SetCommandByName@@YAXPEBD0_N@Z(dvarName, string, isSuperUser);
}

/*
==============
Dvar_HasLatchedValue
==============
*/

bool __fastcall Dvar_HasLatchedValue(const dvar_t *dvar)
{
  return ?Dvar_HasLatchedValue@@YA_NPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_DisplayableLatchedValue
==============
*/

const char *__fastcall Dvar_DisplayableLatchedValue(const dvar_t *dvar)
{
  return ?Dvar_DisplayableLatchedValue@@YAPEBDPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_IndexStringToEnumString
==============
*/

const char *__fastcall Dvar_IndexStringToEnumString(const dvar_t *dvar, const char *indexString)
{
  return ?Dvar_IndexStringToEnumString@@YAPEBDPEBUdvar_t@@PEBD@Z(dvar, indexString);
}

/*
==============
Dvar_SetVec3ByName
==============
*/

void __fastcall Dvar_SetVec3ByName(const char *dvarName, float x, float y, float z)
{
  ?Dvar_SetVec3ByName@@YAXPEBDMMM@Z(dvarName, x, y, z);
}

/*
==============
Dvar_SetInt64FromSource
==============
*/

void __fastcall Dvar_SetInt64FromSource(const dvar_t *dvar, __int64 value, DvarSetSource source)
{
  ?Dvar_SetInt64FromSource@@YAXPEBUdvar_t@@_JW4DvarSetSource@@@Z(dvar, value, source);
}

/*
==============
Dvar_SetFlags
==============
*/

void __fastcall Dvar_SetFlags(const dvar_t *dvar, unsigned int flags)
{
  ?Dvar_SetFlags@@YAXPEBUdvar_t@@I@Z(dvar, flags);
}

/*
==============
Dvar_RegisterSuperUserInt
==============
*/

const dvar_t *__fastcall Dvar_RegisterSuperUserInt(const char *dvarName, int value, int min, int max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterSuperUserInt@@YAPEBUdvar_t@@PEBDHHHI0@Z(dvarName, value, min, max, flags, description);
}

/*
==============
Dvar_SetBoolByName
==============
*/

void __fastcall Dvar_SetBoolByName(const char *dvarName, bool value)
{
  ?Dvar_SetBoolByName@@YAXPEBD_N@Z(dvarName, value);
}

/*
==============
Dvar_DisplayableResetValue
==============
*/

const char *__fastcall Dvar_DisplayableResetValue(const dvar_t *dvar)
{
  return ?Dvar_DisplayableResetValue@@YAPEBDPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_SetInAutoExec
==============
*/

void __fastcall Dvar_SetInAutoExec(bool inAutoExec)
{
  ?Dvar_SetInAutoExec@@YAX_N@Z(inAutoExec);
}

/*
==============
Dvar_GenerateChecksum
==============
*/

unsigned int __fastcall Dvar_GenerateChecksum(const char *dvarName)
{
  return ?Dvar_GenerateChecksum@@YAIPEBD@Z(dvarName);
}

/*
==============
Dvar_GetInt64Safe
==============
*/

__int64 __fastcall Dvar_GetInt64Safe(const char *dvarName)
{
  return ?Dvar_GetInt64Safe@@YA_JPEBD@Z(dvarName);
}

/*
==============
Dvar_SetInt64ByName
==============
*/

void __fastcall Dvar_SetInt64ByName(const char *dvarName, __int64 value)
{
  ?Dvar_SetInt64ByName@@YAXPEBD_J@Z(dvarName, value);
}

/*
==============
Dvar_RegisterFloat
==============
*/

const dvar_t *__fastcall Dvar_RegisterFloat(const char *dvarName, float value, float min, float max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterFloat@@YAPEBUdvar_t@@PEBDMMMI0@Z(dvarName, value, min, max, flags, description);
}

/*
==============
Dvar_BeginPermanentRegistration
==============
*/

void Dvar_BeginPermanentRegistration(void)
{
  ?Dvar_BeginPermanentRegistration@@YAXXZ();
}

/*
==============
Dvar_SetVec4ByName
==============
*/

void __fastcall Dvar_SetVec4ByName(const char *dvarName, float x, float y, float z, float w)
{
  ?Dvar_SetVec4ByName@@YAXPEBDMMMM@Z(dvarName, x, y, z, w);
}

/*
==============
Dvar_SetUInt64FromSource
==============
*/

void __fastcall Dvar_SetUInt64FromSource(const dvar_t *dvar, unsigned __int64 value, DvarSetSource source)
{
  ?Dvar_SetUInt64FromSource@@YAXPEBUdvar_t@@_KW4DvarSetSource@@@Z(dvar, value, source);
}

/*
==============
Dvar_RegisterCustomDomainCallback
==============
*/

void __fastcall Dvar_RegisterCustomDomainCallback(const dvar_t *dvar, char *(__fastcall *callback)(int *))
{
  ?Dvar_RegisterCustomDomainCallback@@YAXPEBUdvar_t@@P6APEADPEAH@Z@Z(dvar, callback);
}

/*
==============
Dvar_ForEachName_UNSAFE_LockEnd
==============
*/

void Dvar_ForEachName_UNSAFE_LockEnd(void)
{
  ?Dvar_ForEachName_UNSAFE_LockEnd@@YAXXZ();
}

/*
==============
Dvar_RegisterVec2
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec2(const char *dvarName, float x, float y, float min, float max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec2@@YAPEBUdvar_t@@PEBDMMMMI0@Z(dvarName, x, y, min, max, flags, description);
}

/*
==============
Dvar_MakeLatchedValueCurrent
==============
*/

void __fastcall Dvar_MakeLatchedValueCurrent(const dvar_t *dvar)
{
  ?Dvar_MakeLatchedValueCurrent@@YAXPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_SetVec2ByName
==============
*/

void __fastcall Dvar_SetVec2ByName(const char *dvarName, float x, float y)
{
  ?Dvar_SetVec2ByName@@YAXPEBDMM@Z(dvarName, x, y);
}

/*
==============
Dvar_IsValidName
==============
*/

bool __fastcall Dvar_IsValidName(const char *dvarName)
{
  return ?Dvar_IsValidName@@YA_NPEBD@Z(dvarName);
}

/*
==============
Dvar_GetBoolSafe
==============
*/

bool __fastcall Dvar_GetBoolSafe(const char *dvarName)
{
  return ?Dvar_GetBoolSafe@@YA_NPEBD@Z(dvarName);
}

/*
==============
Dvar_ForEachNameWithUserData
==============
*/

void __fastcall Dvar_ForEachNameWithUserData(void (__fastcall *callback)(const dvar_t *, void *), void *userData)
{
  ?Dvar_ForEachNameWithUserData@@YAXP6AXPEBUdvar_t@@PEAX@Z1@Z(callback, userData);
}

/*
==============
Dvar_GenerateChecksumStringFromChecksum
==============
*/

void __fastcall Dvar_GenerateChecksumStringFromChecksum(char *dest, int size, unsigned int checksum)
{
  ?Dvar_GenerateChecksumStringFromChecksum@@YAXPEADHI@Z(dest, size, checksum);
}

/*
==============
Dvar_SetVec2FromSource
==============
*/

void __fastcall Dvar_SetVec2FromSource(const dvar_t *dvar, float x, float y, DvarSetSource source)
{
  ?Dvar_SetVec2FromSource@@YAXPEBUdvar_t@@MMW4DvarSetSource@@@Z(dvar, x, y, source);
}

/*
==============
Dvar_DisableReplication
==============
*/

void Dvar_DisableReplication(void)
{
  ?Dvar_DisableReplication@@YAXXZ();
}

/*
==============
Dvar_RegisterSuperUserFloat
==============
*/

const dvar_t *__fastcall Dvar_RegisterSuperUserFloat(const char *dvarName, float value, float min, float max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterSuperUserFloat@@YAPEBUdvar_t@@PEBDMMMI0@Z(dvarName, value, min, max, flags, description);
}

/*
==============
Dvar_SetModified
==============
*/

void __fastcall Dvar_SetModified(const dvar_t *dvar)
{
  ?Dvar_SetModified@@YAXPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_RegisterVec3
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec3(const char *dvarName, float x, float y, float z, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec3@@YAPEBUdvar_t@@PEBDMMMMMMI0@Z(dvarName, x, y, z, min, max, devguistep, flags, description);
}

/*
==============
Dvar_RegisterSuperUserBool
==============
*/

const dvar_t *__fastcall Dvar_RegisterSuperUserBool(const char *dvarName, bool value, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterSuperUserBool@@YAPEBUdvar_t@@PEBD_NI0@Z(dvarName, value, flags, description);
}

/*
==============
Dvar_ConvertStringToVec3
==============
*/

bool __fastcall Dvar_ConvertStringToVec3(const char *stringValue, vec3_t *vec3Value)
{
  return ?Dvar_ConvertStringToVec3@@YA_NPEBDAEATvec3_t@@@Z(stringValue, vec3Value);
}

/*
==============
Dvar_RegisterVec4
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec4(const char *dvarName, const vec4_t *value, float min, float max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec4@@YAPEBUdvar_t@@PEBDAEBTvec4_t@@MMI0@Z(dvarName, value, min, max, flags, description);
}

/*
==============
Dvar_DomainToString
==============
*/

const char *__fastcall Dvar_DomainToString(const dvar_t *dvar, char *outBuffer, unsigned __int64 outBufferLen)
{
  return ?Dvar_DomainToString@@YAPEBDPEBUdvar_t@@PEAD_K@Z(dvar, outBuffer, outBufferLen);
}

/*
==============
Dvar_RegisterVec3Color
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec3Color(const char *dvarName, float x, float y, float z, float max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec3Color@@YAPEBUdvar_t@@PEBDMMMMI0@Z(dvarName, x, y, z, max, flags, description);
}

/*
==============
Dvar_FindVarByName
==============
*/

const dvar_t *__fastcall Dvar_FindVarByName(const char *dvarName)
{
  return ?Dvar_FindVarByName@@YAPEBUdvar_t@@PEBD@Z(dvarName);
}

/*
==============
Dvar_RegisterSuperUserVec3Color
==============
*/

const dvar_t *__fastcall Dvar_RegisterSuperUserVec3Color(const char *dvarName, float x, float y, float z, float max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterSuperUserVec3Color@@YAPEBUdvar_t@@PEBDMMMMI0@Z(dvarName, x, y, z, max, flags, description);
}

/*
==============
Dvar_RegisterStringChecksum
==============
*/

const dvar_t *__fastcall Dvar_RegisterStringChecksum(const char *dvarName, const char *value, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterStringChecksum@@YAPEBUdvar_t@@PEBD0I0@Z(dvarName, value, flags, description);
}

/*
==============
Dvar_GetCurrentValueAsInt64
==============
*/

__int64 __fastcall Dvar_GetCurrentValueAsInt64(const char *dvarname_in)
{
  return ?Dvar_GetCurrentValueAsInt64@@YA_JPEBD@Z(dvarname_in);
}

/*
==============
Dvar_SetFromString
==============
*/

void __fastcall Dvar_SetFromString(const dvar_t *dvar, const char *string)
{
  ?Dvar_SetFromString@@YAXPEBUdvar_t@@PEBD@Z(dvar, string);
}

/*
==============
Dvar_SetVec4FromSource
==============
*/

void __fastcall Dvar_SetVec4FromSource(const dvar_t *dvar, float x, float y, float z, float w, DvarSetSource source)
{
  ?Dvar_SetVec4FromSource@@YAXPEBUdvar_t@@MMMMW4DvarSetSource@@@Z(dvar, x, y, z, w, source);
}

/*
==============
Dvar_DisplayableValue
==============
*/

const char *__fastcall Dvar_DisplayableValue(const dvar_t *dvar)
{
  return ?Dvar_DisplayableValue@@YAPEBDPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_SetFromStringByChecksumFromSource
==============
*/

const dvar_t *__fastcall Dvar_SetFromStringByChecksumFromSource(const char *dvarName, const char *string, DvarSetSource source)
{
  return ?Dvar_SetFromStringByChecksumFromSource@@YAPEBUdvar_t@@PEBD0W4DvarSetSource@@@Z(dvarName, string, source);
}

/*
==============
Dvar_SetFromStringFromSource
==============
*/

void __fastcall Dvar_SetFromStringFromSource(const dvar_t *dvar, const char *string, DvarSetSource source)
{
  ?Dvar_SetFromStringFromSource@@YAXPEBUdvar_t@@PEBDW4DvarSetSource@@@Z(dvar, string, source);
}

/*
==============
Dvar_GetVariantString
==============
*/

const char *__fastcall Dvar_GetVariantString(const char *dvarName)
{
  return ?Dvar_GetVariantString@@YAPEBDPEBD@Z(dvarName);
}

/*
==============
Dvar_IsSystemActive
==============
*/

bool __fastcall Dvar_IsSystemActive()
{
  return ?Dvar_IsSystemActive@@YA_NXZ();
}

/*
==============
Dvar_FindVarByChecksumString
==============
*/

const dvar_t *__fastcall Dvar_FindVarByChecksumString(const char *dvarName)
{
  return ?Dvar_FindVarByChecksumString@@YAPEBUdvar_t@@PEBD@Z(dvarName);
}

/*
==============
Dvar_ErrorCleanup
==============
*/

void Dvar_ErrorCleanup(void)
{
  ?Dvar_ErrorCleanup@@YAXXZ();
}

/*
==============
Dvar_RegisterUInt64
==============
*/

const dvar_t *__fastcall Dvar_RegisterUInt64(const char *dvarName, unsigned __int64 value, unsigned __int64 min, unsigned __int64 max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterUInt64@@YAPEBUdvar_t@@PEBD_K11I0@Z(dvarName, value, min, max, flags, description);
}

/*
==============
Dvar_RegisterColor
==============
*/

const dvar_t *__fastcall Dvar_RegisterColor(const char *dvarName, float r, float g, float b, float a, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterColor@@YAPEBUdvar_t@@PEBDMMMMI0@Z(dvarName, r, g, b, a, flags, description);
}

/*
==============
Dvar_SetFloatByName
==============
*/

void __fastcall Dvar_SetFloatByName(const char *dvarName, float value)
{
  ?Dvar_SetFloatByName@@YAXPEBDM@Z(dvarName, value);
}

/*
==============
Dvar_SetColor_Internal
==============
*/

void __fastcall Dvar_SetColor_Internal(const dvar_t *dvar, float r, float g, float b, float a)
{
  ?Dvar_SetColor_Internal@@YAXPEBUdvar_t@@MMMM@Z(dvar, r, g, b, a);
}

/*
==============
Dvar_SetStringFromSource
==============
*/

void __fastcall Dvar_SetStringFromSource(const dvar_t *dvar, const char *string, DvarSetSource source)
{
  ?Dvar_SetStringFromSource@@YAXPEBUdvar_t@@PEBDW4DvarSetSource@@@Z(dvar, string, source);
}

/*
==============
Dvar_SetUInt64ByName
==============
*/

void __fastcall Dvar_SetUInt64ByName(const char *dvarName, unsigned __int64 value)
{
  ?Dvar_SetUInt64ByName@@YAXPEBD_K@Z(dvarName, value);
}

/*
==============
Dvar_ForEachName_UNSAFE
==============
*/

void __fastcall Dvar_ForEachName_UNSAFE(void (__fastcall *callback)(const char *))
{
  ?Dvar_ForEachName_UNSAFE@@YAXP6AXPEBD@Z@Z(callback);
}

/*
==============
Dvar_ChangeResetValue
==============
*/

void __fastcall Dvar_ChangeResetValue(const dvar_t *dvar, DvarValue *value)
{
  ?Dvar_ChangeResetValue@@YAXPEBUdvar_t@@TDvarValue@@@Z(dvar, value);
}

/*
==============
Dvar_GetUnpackedColorByName
==============
*/

void __fastcall Dvar_GetUnpackedColorByName(const char *dvarName, vec4_t *expandedColor)
{
  ?Dvar_GetUnpackedColorByName@@YAXPEBDAEATvec4_t@@@Z(dvarName, expandedColor);
}

/*
==============
Dvar_SetUInt64_Internal
==============
*/

void __fastcall Dvar_SetUInt64_Internal(const dvar_t *dvar, unsigned __int64 value)
{
  ?Dvar_SetUInt64_Internal@@YAXPEBUdvar_t@@_K@Z(dvar, value);
}

/*
==============
Dvar_RegisterVec4
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec4(const char *dvarName, float x, float y, float z, float w, float min, float max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec4@@YAPEBUdvar_t@@PEBDMMMMMMI0@Z(dvarName, x, y, z, w, min, max, flags, description);
}

/*
==============
Dvar_ReverseForEach
==============
*/

void __fastcall Dvar_ReverseForEach(void (__fastcall *callback)(const dvar_t *, void *), void *userData)
{
  ?Dvar_ReverseForEach@@YAXP6AXPEBUdvar_t@@PEAX@Z1@Z(callback, userData);
}

/*
==============
Dvar_PrintDomain
==============
*/

void __fastcall Dvar_PrintDomain(const dvar_t *dvar)
{
  ?Dvar_PrintDomain@@YAXPEBUdvar_t@@@Z(dvar);
}

/*
==============
Dvar_GetUInt64Safe
==============
*/

unsigned __int64 __fastcall Dvar_GetUInt64Safe(const char *dvarName)
{
  return ?Dvar_GetUInt64Safe@@YA_KPEBD@Z(dvarName);
}

/*
==============
Dvar_SetBoolFromSource
==============
*/

void __fastcall Dvar_SetBoolFromSource(const dvar_t *dvar, bool value, DvarSetSource source)
{
  ?Dvar_SetBoolFromSource@@YAXPEBUdvar_t@@_NW4DvarSetSource@@@Z(dvar, value, source);
}

/*
==============
Dvar_SetFromStringByNameFromSource
==============
*/

const dvar_t *__fastcall Dvar_SetFromStringByNameFromSource(const char *dvarName, const char *string, DvarSetSource source)
{
  return ?Dvar_SetFromStringByNameFromSource@@YAPEBUdvar_t@@PEBD0W4DvarSetSource@@@Z(dvarName, string, source);
}

/*
==============
Dvar_SetFloatFromSource
==============
*/

void __fastcall Dvar_SetFloatFromSource(const dvar_t *dvar, float value, DvarSetSource source)
{
  ?Dvar_SetFloatFromSource@@YAXPEBUdvar_t@@MW4DvarSetSource@@@Z(dvar, value, source);
}

/*
==============
Dvar_FlagsToString
==============
*/

bool __fastcall Dvar_FlagsToString(const dvar_t *dvar, char *outBuffer, unsigned __int64 outBufferLen)
{
  return ?Dvar_FlagsToString@@YA_NPEBUdvar_t@@PEAD_K@Z(dvar, outBuffer, outBufferLen);
}

/*
==============
Dvar_RegisterEnum
==============
*/

const dvar_t *__fastcall Dvar_RegisterEnum(const char *dvarName, const char *const *valueList, int defaultIndex, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterEnum@@YAPEBUdvar_t@@PEBDQEBQEBDHI0@Z(dvarName, valueList, defaultIndex, flags, description);
}

/*
==============
Com_LoadDvarsFromBuffer
==============
*/

bool __fastcall Com_LoadDvarsFromBuffer(const char **dvarnames, unsigned int numDvars, const char *buffer, const char *filename)
{
  return ?Com_LoadDvarsFromBuffer@@YA_NQEAPEBDIPEBD1@Z(dvarnames, numDvars, buffer, filename);
}

/*
==============
Dvar_RegisterVec4
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec4(const char *dvarName, float x, float y, float z, float w, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec4@@YAPEBUdvar_t@@PEBDMMMMMMMI0@Z(dvarName, x, y, z, w, min, max, devguistep, flags, description);
}

/*
==============
Dvar_Deregister
==============
*/

const dvar_t *__fastcall Dvar_Deregister(const dvar_t *dvar)
{
  return ?Dvar_Deregister@@YAPEBUdvar_t@@PEBU1@@Z(dvar);
}

/*
==============
Dvar_ValueInDomain
==============
*/

bool __fastcall Dvar_ValueInDomain(unsigned __int8 type, DvarValue *value, DvarLimits *domain)
{
  return ?Dvar_ValueInDomain@@YA_NETDvarValue@@TDvarLimits@@@Z(type, value, domain);
}

/*
==============
Dvar_GetUnpackedColor
==============
*/

void __fastcall Dvar_GetUnpackedColor(const dvar_t *dvar, vec4_t *expandedColor)
{
  ?Dvar_GetUnpackedColor@@YAXPEBUdvar_t@@AEATvec4_t@@@Z(dvar, expandedColor);
}

/*
==============
Dvar_SetFloat_Internal
==============
*/

void __fastcall Dvar_SetFloat_Internal(const dvar_t *dvar, float value)
{
  ?Dvar_SetFloat_Internal@@YAXPEBUdvar_t@@M@Z(dvar, value);
}

/*
==============
Dvar_ForEach
==============
*/

void __fastcall Dvar_ForEach(void (__fastcall *callback)(const dvar_t *, void *), void *userData)
{
  ?Dvar_ForEach@@YAXP6AXPEBUdvar_t@@PEAX@Z1@Z(callback, userData);
}

/*
==============
Dvar_SetIntByName
==============
*/

void __fastcall Dvar_SetIntByName(const char *dvarName, int value)
{
  ?Dvar_SetIntByName@@YAXPEBDH@Z(dvarName, value);
}

/*
==============
Dvar_GetFloatSafe
==============
*/

double __fastcall Dvar_GetFloatSafe(const char *dvarName)
{
  double result; 

  *(float *)&result = ?Dvar_GetFloatSafe@@YAMPEBD@Z(dvarName);
  return result;
}

/*
==============
Dvar_AnyLatchedValues
==============
*/

bool __fastcall Dvar_AnyLatchedValues()
{
  return ?Dvar_AnyLatchedValues@@YA_NXZ();
}

/*
==============
Dvar_RegisterSuperUserVec3
==============
*/

const dvar_t *__fastcall Dvar_RegisterSuperUserVec3(const char *dvarName, float x, float y, float z, float min, float max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterSuperUserVec3@@YAPEBUdvar_t@@PEBDMMMMMI0@Z(dvarName, x, y, z, min, max, flags, description);
}

/*
==============
Dvar_RegisterVec2
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec2(const char *dvarName, float x, float y, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec2@@YAPEBUdvar_t@@PEBDMMMMMI0@Z(dvarName, x, y, min, max, devguistep, flags, description);
}

/*
==============
Dvar_SetStringByName
==============
*/

void __fastcall Dvar_SetStringByName(const char *dvarName, const char *value)
{
  ?Dvar_SetStringByName@@YAXPEBD0@Z(dvarName, value);
}

/*
==============
Dvar_GetVariantStringWithDefault
==============
*/

const char *__fastcall Dvar_GetVariantStringWithDefault(const char *dvarName, const char *defaultValue)
{
  return ?Dvar_GetVariantStringWithDefault@@YAPEBDPEBD0@Z(dvarName, defaultValue);
}

/*
==============
Dvar_RegisterVec3
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec3(const char *dvarName, float x, float y, float z, float min, float max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec3@@YAPEBUdvar_t@@PEBDMMMMMI0@Z(dvarName, x, y, z, min, max, flags, description);
}

/*
==============
Dvar_RegisterVec4
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec4(const char *dvarName, const vec4_t *value, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec4@@YAPEBUdvar_t@@PEBDAEBTvec4_t@@MMMI0@Z(dvarName, value, min, max, devguistep, flags, description);
}

/*
==============
Dvar_GetVariantStringToBuffer
==============
*/

void __fastcall Dvar_GetVariantStringToBuffer(const char *dvarName, char *outBuffer, unsigned __int64 outBufferLen)
{
  ?Dvar_GetVariantStringToBuffer@@YAXPEBDPEAD_K@Z(dvarName, outBuffer, outBufferLen);
}

/*
==============
Dvar_PrintServerdemoDvars
==============
*/

void Dvar_PrintServerdemoDvars(void)
{
  ?Dvar_PrintServerdemoDvars@@YAXXZ();
}

/*
==============
Dvar_SetIntFromSource
==============
*/

void __fastcall Dvar_SetIntFromSource(const dvar_t *dvar, int value, DvarSetSource source)
{
  ?Dvar_SetIntFromSource@@YAXPEBUdvar_t@@HW4DvarSetSource@@@Z(dvar, value, source);
}

/*
==============
Dvar_EnableReplication
==============
*/

void Dvar_EnableReplication(void)
{
  ?Dvar_EnableReplication@@YAXXZ();
}

/*
==============
Dvar_FindVarByChecksum
==============
*/

const dvar_t *__fastcall Dvar_FindVarByChecksum(unsigned int checksum)
{
  return ?Dvar_FindVarByChecksum@@YAPEBUdvar_t@@I@Z(checksum);
}

/*
==============
Dvar_SetColorByName
==============
*/

void __fastcall Dvar_SetColorByName(const char *dvarName, float r, float g, float b, float a)
{
  ?Dvar_SetColorByName@@YAXPEBDMMMM@Z(dvarName, r, g, b, a);
}

/*
==============
Dvar_SetInt64_Internal
==============
*/

void __fastcall Dvar_SetInt64_Internal(const dvar_t *dvar, __int64 value)
{
  ?Dvar_SetInt64_Internal@@YAXPEBUdvar_t@@_J@Z(dvar, value);
}

/*
==============
Dvar_SetVec4_Internal
==============
*/

void __fastcall Dvar_SetVec4_Internal(const dvar_t *dvar, float x, float y, float z, float w)
{
  ?Dvar_SetVec4_Internal@@YAXPEBUdvar_t@@MMMM@Z(dvar, x, y, z, w);
}

/*
==============
Dvar_ResetDvars
==============
*/

void __fastcall Dvar_ResetDvars(unsigned int filter, DvarSetSource setSource)
{
  ?Dvar_ResetDvars@@YAXIW4DvarSetSource@@@Z(filter, setSource);
}

/*
==============
Dvar_ClearModified
==============
*/

void __fastcall Dvar_ClearModified(const dvar_t *dvar)
{
  ?Dvar_ClearModified@@YAXPEBUdvar_t@@@Z(dvar);
}

/*
==============
Com_SaveDvarsToBuffer
==============
*/

bool __fastcall Com_SaveDvarsToBuffer(const char **dvarnames, unsigned int numDvars, char *buffer, unsigned __int64 bufsize)
{
  return ?Com_SaveDvarsToBuffer@@YA_NQEAPEBDIPEAD_K@Z(dvarnames, numDvars, buffer, bufsize);
}

/*
==============
Dvar_LoadDvars
==============
*/

void __fastcall Dvar_LoadDvars(MemoryFile *memFile)
{
  ?Dvar_LoadDvars@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Dvar_GetVec3Safe
==============
*/

void __fastcall Dvar_GetVec3Safe(const char *dvarName, vec3_t *result)
{
  ?Dvar_GetVec3Safe@@YAXPEBDAEATvec3_t@@@Z(dvarName, result);
}

/*
==============
Dvar_SaveDvars
==============
*/

void __fastcall Dvar_SaveDvars(MemoryFile *memFile, unsigned int filter)
{
  ?Dvar_SaveDvars@@YAXPEAUMemoryFile@@I@Z(memFile, filter);
}

/*
==============
Dvar_RegisterVec3
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec3(const char *dvarName, const vec3_t *value, float min, float max, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec3@@YAPEBUdvar_t@@PEBDAEBTvec3_t@@MMI0@Z(dvarName, value, min, max, flags, description);
}

/*
==============
Dvar_RegisterVec3
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec3(const char *dvarName, const vec3_t *value, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  return ?Dvar_RegisterVec3@@YAPEBUdvar_t@@PEBDAEBTvec3_t@@MMMI0@Z(dvarName, value, min, max, devguistep, flags, description);
}

/*
==============
Dvar_Reset
==============
*/

void __fastcall Dvar_Reset(const dvar_t *dvar, DvarSetSource setSource)
{
  ?Dvar_Reset@@YAXPEBUdvar_t@@W4DvarSetSource@@@Z(dvar, setSource);
}

/*
==============
Dvar_ValueToString
==============
*/

const char *__fastcall Dvar_ValueToString(const dvar_t *dvar, DvarValue *value)
{
  return ?Dvar_ValueToString@@YAPEBDPEBUdvar_t@@TDvarValue@@@Z(dvar, value);
}

/*
==============
Dvar_UpdateEnumDomain
==============
*/

void __fastcall Dvar_UpdateEnumDomain(const dvar_t *dvar, const char **stringTable)
{
  ?Dvar_UpdateEnumDomain@@YAXPEBUdvar_t@@QEAPEBD@Z(dvar, stringTable);
}

/*
==============
Com_LoadDvarsFromBuffer
==============
*/
char Com_LoadDvarsFromBuffer(const char **dvarnames, unsigned int numDvars, const char *buffer, const char *filename)
{
  const char *v4; 
  const char **v5; 
  size_t v6; 
  size_t v7; 
  int v8; 
  const char **v9; 
  size_t v10; 
  const char *v11; 
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  const char *v14; 
  const char *v15; 
  __int64 v16; 
  const char **v17; 
  const char *v18; 
  unsigned int v20; 
  const dvar_t *v21; 
  const char *v22; 
  char *v23; 
  char *data_p; 
  int v25; 
  const char *v26; 
  const char **v27; 
  DvarValue reset; 
  char v29[16384]; 

  v4 = filename;
  v27 = dvarnames;
  v5 = dvarnames;
  v26 = filename;
  v6 = numDvars;
  data_p = (char *)buffer;
  if ( numDvars >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 5019, ASSERT_TYPE_ASSERT, "(numDvars < ( sizeof( *array_counter( wasRead ) ) + 0 ))", (const char *)&queryFormat, "numDvars < ARRAY_COUNT( wasRead )") )
    __debugbreak();
  v7 = v6;
  memset_0(v29, 0, v6);
  v8 = 0;
  v25 = 0;
  if ( (_DWORD)v6 )
  {
    v9 = v5;
    v10 = v6;
    do
    {
      v11 = *v9;
      Checksum = Dvar_GenerateChecksum(*v9);
      MalleableVar = Dvar_FindMalleableVar(Checksum);
      if ( !MalleableVar )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 5027, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tUnable to find dvar '%s'", "dvar", v11) )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4707, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
          __debugbreak();
      }
      reset = MalleableVar->reset;
      Dvar_SetVariant(MalleableVar, &reset, DVAR_SOURCE_INTERNAL);
      ++v9;
      --v10;
    }
    while ( v10 );
    v5 = v27;
    v8 = v25;
    v4 = v26;
  }
  Com_BeginParseSession(v4);
  v14 = Com_Parse((const char **)&data_p);
  if ( *v14 )
  {
    v15 = v26;
    do
    {
      v16 = 0i64;
      if ( (_DWORD)v6 )
      {
        v17 = v5;
        while ( 1 )
        {
          v18 = *v17;
          if ( !I_strnicmp(v14, *v17, 0x7FFFFFFFui64) )
            break;
          v16 = (unsigned int)(v16 + 1);
          ++v17;
          if ( (unsigned int)v16 >= (unsigned int)v6 )
            goto LABEL_19;
        }
        v20 = Dvar_GenerateChecksum(v18);
        v21 = Dvar_FindMalleableVar(v20);
        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 5044, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
          __debugbreak();
        v22 = Com_ParseOnLine((const char **)&data_p);
        Dvar_SetFromStringFromSource(v21, v22, DVAR_SOURCE_INTERNAL);
        if ( !v29[v16] )
        {
          v29[v16] = 1;
          ++v8;
        }
      }
      else
      {
LABEL_19:
        Com_PrintWarning(16, "WARNING: unknown dvar '%s' in file '%s'\n", v14, v15);
      }
      Com_SkipRestOfLine((const char **)&data_p);
      v14 = Com_Parse((const char **)&data_p);
    }
    while ( *v14 );
    v4 = v26;
    v7 = (unsigned int)v6;
  }
  Com_EndParseSession();
  if ( v8 == (_DWORD)v6 )
    return 1;
  Com_PrintError(16, "ERROR: the following dvars were not specified in file '%s'\n", v4);
  if ( (_DWORD)v6 )
  {
    v23 = v29;
    do
    {
      if ( !*v23 )
        Com_PrintError(16, "  %s\n", *v5);
      ++v23;
      ++v5;
      --v7;
    }
    while ( v7 );
  }
  return 0;
}

/*
==============
Com_SaveDvarsToBuffer
==============
*/
char Com_SaveDvarsToBuffer(const char **dvarnames, unsigned int numDvars, char *buffer, unsigned __int64 bufsize)
{
  unsigned int v4; 
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  const char *v11; 
  int v12; 
  DvarValue v14[3]; 

  v4 = 0;
  if ( !numDvars )
    return 1;
  while ( 1 )
  {
    Checksum = Dvar_GenerateChecksum(*dvarnames);
    MalleableVar = Dvar_FindMalleableVar(Checksum);
    if ( !MalleableVar )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4964, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1549, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
        __debugbreak();
    }
    v14[0] = MalleableVar->current;
    v11 = Dvar_ValueToString(MalleableVar, v14);
    v12 = Com_sprintf_truncate(buffer, bufsize, "%d \"%s\"\n", MalleableVar->checksum, v11);
    if ( v12 < 0 )
      break;
    ++v4;
    buffer += v12;
    bufsize -= v12;
    ++dvarnames;
    if ( v4 >= numDvars )
      return 1;
  }
  return 0;
}

/*
==============
Dvar_AddFlags
==============
*/
void Dvar_AddFlags(const dvar_t *dvar, int flags)
{
  __int64 v4; 
  __int64 v5; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4679, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( (flags & 0x291E) != 0 )
  {
    LODWORD(v5) = flags;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4680, ASSERT_TYPE_ASSERT, "( ( (flags & ((1 << 2) | (1 << 11) | (1 << 13) | (1 << 8) | (1 << 1) | (1 << 4) | (1 << 3))) == 0 ) )", "( flags ) = %i", v5) )
      __debugbreak();
  }
  if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & flags) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4689, ASSERT_TYPE_ASSERT, "( ( !(flags & ~dvar_allowedModifiedFlags) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  v4 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  *(_DWORD *)(v4 + 1048) |= flags;
  dvar->flags |= flags;
}

/*
==============
Dvar_AnyLatchedValues
==============
*/
char Dvar_AnyLatchedValues()
{
  unsigned __int64 v0; 
  int v1; 
  dvar_t **v2; 
  DvarValue current; 
  unsigned __int8 type; 
  volatile int readCount; 
  volatile int v7; 
  DvarValue latched; 
  DvarValue v9; 

  if ( g_dvarCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  v0 = (unsigned __int64)&g_dvarCritSect & 3;
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_dvarCritSect);
  while ( g_dvarCritSect.writeCount )
    Sys_Sleep(0);
  v1 = 0;
  if ( dvarCount <= 0 )
  {
LABEL_13:
    if ( g_dvarCritSect.readCount <= 0 )
    {
      readCount = g_dvarCritSect.readCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
        __debugbreak();
    }
    if ( v0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
        __debugbreak();
    }
    _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
    return 0;
  }
  else
  {
    v2 = sortedDvars;
    while ( 1 )
    {
      current = (*v2)->current;
      type = (*v2)->type;
      latched = (*v2)->latched;
      v9 = current;
      if ( !Dvar_ValuesEqual(type, &v9, &latched) )
        break;
      ++v1;
      ++v2;
      if ( v1 >= dvarCount )
        goto LABEL_13;
    }
    if ( g_dvarCritSect.readCount <= 0 )
    {
      v7 = g_dvarCritSect.readCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", v7, 0i64) )
        __debugbreak();
    }
    if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
      __debugbreak();
    _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
    return 1;
  }
}

/*
==============
Dvar_AssignCurrentStringValue
==============
*/
void Dvar_AssignCurrentStringValue(dvar_t *dvar, DvarValue *dest, const char *string)
{
  const char *v6; 

  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1073, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  v6 = dvar->latched.string;
  if ( v6 && (string == v6 || !strcmp(string, v6)) || (v6 = dvar->reset.string) != NULL && (string == v6 || !strcmp(string, v6)) )
    Dvar_WeakCopyString(v6, dest);
  else
    Dvar_CopyString(string, dest);
}

/*
==============
Dvar_AssignResetStringValue
==============
*/
void Dvar_AssignResetStringValue(dvar_t *dvar, DvarValue *dest, const char *string)
{
  const char *v6; 

  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1097, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  v6 = dvar->current.string;
  if ( v6 && (string == v6 || !strcmp(string, v6)) || (v6 = dvar->latched.string) != NULL && (string == v6 || !strcmp(string, v6)) )
    Dvar_WeakCopyString(v6, dest);
  else
    Dvar_CopyString(string, dest);
}

/*
==============
Dvar_BeginPermanentRegistration
==============
*/
void Dvar_BeginPermanentRegistration(void)
{
  __int64 v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 5124, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tCannot register permanent dvars from other threads", "Sys_IsMainThread()") )
    __debugbreak();
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  ++*(_DWORD *)(v0 + 1056);
}

/*
==============
Dvar_ChangeResetValue
==============
*/
void Dvar_ChangeResetValue(const dvar_t *dvar, DvarValue *value)
{
  DvarValue v4; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2881, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2883, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( (dvar->flags & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2885, ASSERT_TYPE_ASSERT, "( ( dvar->flags & (1 << 14) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  v4 = *value;
  Dvar_UpdateResetValue((dvar_t *)dvar, &v4);
}

/*
==============
Dvar_ClampValueToDomain
==============
*/
DvarValue *Dvar_ClampValueToDomain(DvarValue *result, unsigned __int8 type, DvarValue *value, const DvarValue *resetValue, const DvarLimits *domain)
{
  int v7; 
  int stringCount; 
  int integer; 
  const char *const *strings; 
  __int64 v11; 
  __int64 integer64; 
  const char *const *v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  double v16; 
  float min; 
  float max; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  int v31; 
  bool v32; 
  bool v33; 
  DvarValue *v34; 
  int v35; 
  int v36; 

  switch ( type )
  {
    case 0u:
      value->enabled = value->enabled;
      goto $LN17_71;
    case 1u:
      v16 = I_fclamp(value->value, domain->value.min, domain->value.max);
      value->value = *(float *)&v16;
      goto $LN17_71;
    case 2u:
      min = domain->value.min;
      max = domain->value.max;
      if ( value->value >= domain->value.min )
      {
        if ( value->value > max )
          value->value = max;
      }
      else
      {
        value->value = min;
      }
      v19 = value->vector.v[1];
      if ( v19 >= min )
      {
        if ( v19 > max )
          value->vector.v[1] = max;
      }
      else
      {
        value->vector.v[1] = min;
      }
      goto $LN17_71;
    case 3u:
      v20 = domain->value.min;
      v21 = domain->value.max;
      if ( value->value >= domain->value.min )
      {
        if ( value->value > v21 )
          value->value = v21;
      }
      else
      {
        value->value = v20;
      }
      v22 = value->vector.v[1];
      if ( v22 >= v20 )
      {
        if ( v22 > v21 )
          value->vector.v[1] = v21;
      }
      else
      {
        value->vector.v[1] = v20;
      }
      v23 = value->vector.v[2];
      if ( v23 >= v20 )
      {
        if ( v23 > v21 )
          value->vector.v[2] = v21;
      }
      else
      {
        value->vector.v[2] = v20;
      }
      goto $LN17_71;
    case 4u:
      v26 = domain->value.min;
      v27 = domain->value.max;
      if ( value->value >= domain->value.min )
      {
        if ( value->value > v27 )
          value->value = v27;
      }
      else
      {
        value->value = v26;
      }
      v28 = value->vector.v[1];
      if ( v28 >= v26 )
      {
        if ( v28 > v27 )
          value->vector.v[1] = v27;
      }
      else
      {
        value->vector.v[1] = v26;
      }
      v29 = value->vector.v[2];
      if ( v29 >= v26 )
      {
        if ( v29 > v27 )
          value->vector.v[2] = v27;
      }
      else
      {
        value->vector.v[2] = v26;
      }
      v30 = value->vector.v[3];
      if ( v30 >= v26 )
      {
        if ( v30 > v27 )
          value->vector.v[3] = v27;
      }
      else
      {
        value->vector.v[3] = v26;
      }
      goto $LN17_71;
    case 5u:
      v7 = domain->integer.max;
      stringCount = domain->enumeration.stringCount;
      if ( domain->enumeration.stringCount > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1609, ASSERT_TYPE_ASSERT, "(domain.integer.min <= domain.integer.max)", (const char *)&queryFormat, "domain.integer.min <= domain.integer.max") )
        __debugbreak();
      integer = value->integer;
      if ( stringCount > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 773, ASSERT_TYPE_SANITY, "( min <= max )", (const char *)&queryFormat, "min <= max") )
        __debugbreak();
      if ( v7 < integer )
        integer = v7;
      if ( stringCount > integer )
        integer = stringCount;
      value->integer = integer;
      goto $LN17_71;
    case 6u:
      strings = domain->enumeration.strings;
      v11 = domain->integer64.min;
      if ( domain->integer64.min > (__int64)strings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1614, ASSERT_TYPE_ASSERT, "(domain.integer64.min <= domain.integer64.max)", (const char *)&queryFormat, "domain.integer64.min <= domain.integer64.max") )
        __debugbreak();
      integer64 = value->integer64;
      if ( v11 > (__int64)strings && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 773, ASSERT_TYPE_SANITY, "( min <= max )", (const char *)&queryFormat, "min <= max") )
        __debugbreak();
      if ( (__int64)strings < integer64 )
        integer64 = (__int64)strings;
      if ( v11 > integer64 )
        integer64 = v11;
      value->integer64 = integer64;
      goto $LN17_71;
    case 7u:
      v13 = domain->enumeration.strings;
      v14 = domain->integer64.min;
      if ( domain->integer64.min > (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1619, ASSERT_TYPE_ASSERT, "(domain.unsignedInt64.min <= domain.unsignedInt64.max)", (const char *)&queryFormat, "domain.unsignedInt64.min <= domain.unsignedInt64.max") )
        __debugbreak();
      v15 = value->integer64;
      if ( v14 > (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 773, ASSERT_TYPE_SANITY, "( min <= max )", (const char *)&queryFormat, "min <= max") )
        __debugbreak();
      if ( (unsigned __int64)v13 < v15 )
        v15 = (unsigned __int64)v13;
      if ( v14 > v15 )
        v15 = v14;
      value->integer64 = v15;
      goto $LN17_71;
    case 8u:
      if ( value->integer >= 0 && value->integer < domain->enumeration.stringCount )
        goto $LN17_71;
      v31 = resetValue->integer;
      value->integer = resetValue->integer;
      v32 = v31 == 0;
      if ( v31 < 0 )
        goto LABEL_90;
      if ( v31 >= domain->enumeration.stringCount )
      {
        v32 = v31 == 0;
LABEL_90:
        if ( !v32 )
        {
          v35 = v31;
          v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1651, ASSERT_TYPE_ASSERT, "( ( value.integer >= 0 && value.integer < domain.enumeration.stringCount || value.integer == 0 ) )", "( value.integer ) = %i", v35);
          goto LABEL_93;
        }
      }
$LN17_71:
      v34 = result;
      *result = *value;
      return v34;
    case 9u:
    case 0xAu:
      goto $LN17_71;
    case 0xBu:
      if ( value->value >= 0.0 )
      {
        if ( value->value > 1.0 )
          value->integer = 1065353216;
      }
      else
      {
        value->integer = 0;
      }
      v24 = value->vector.v[1];
      if ( v24 >= 0.0 )
      {
        if ( v24 > 1.0 )
          value->vector.v[1] = 1.0;
      }
      else
      {
        value->vector.v[1] = 0.0;
      }
      v25 = value->vector.v[2];
      if ( v25 >= 0.0 )
      {
        if ( v25 > 1.0 )
          value->vector.v[2] = 1.0;
      }
      else
      {
        value->vector.v[2] = 0.0;
      }
      goto $LN17_71;
    default:
      v36 = type;
      v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1661, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v36);
LABEL_93:
      if ( v33 )
        __debugbreak();
      goto $LN17_71;
  }
}

/*
==============
Dvar_ClearLatchedValue
==============
*/
void Dvar_ClearLatchedValue(const dvar_t *dvar)
{
  DvarValue current; 
  unsigned __int8 type; 
  DvarValue latched; 
  DvarValue v5; 

  latched = dvar->latched;
  current = dvar->current;
  type = dvar->type;
  v5 = current;
  if ( !Dvar_ValuesEqual(type, &v5, &latched) )
  {
    v5 = dvar->current;
    Dvar_SetLatchedValue((dvar_t *)dvar, &v5);
  }
}

/*
==============
Dvar_ClearModified
==============
*/
void Dvar_ClearModified(const dvar_t *dvar)
{
  if ( dvar )
  {
    dvar->modified = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2417, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
      __debugbreak();
    MEMORY[0x1E] = 0;
  }
}

/*
==============
Dvar_CompareHash
==============
*/
bool Dvar_CompareHash(const dvar_t *dvar0, const dvar_t *dvar1)
{
  return dvar0->checksum < dvar1->checksum;
}

/*
==============
Dvar_CompareNames
==============
*/
bool Dvar_CompareNames(const dvar_t *dvar0, const dvar_t *dvar1)
{
  const char *UnobfuscatedName; 
  const char *v4; 

  UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar0->name);
  v4 = Dvar_DevGetUnobfuscatedName(dvar1->name);
  return I_strnicmp(UnobfuscatedName, v4, 0x7FFFFFFFui64) < 0;
}

/*
==============
Dvar_ConvertStringToVec3
==============
*/
bool Dvar_ConvertStringToVec3(const char *stringValue, vec3_t *vec3Value)
{
  float *v2; 

  v2 = &vec3Value->v[2];
  return j_sscanf(stringValue, "(%f, %f, %f)", vec3Value, &vec3Value->y, &vec3Value->z) == 3 || j_sscanf(stringValue, "%f %f %f", vec3Value, &vec3Value->y, v2) == 3;
}

/*
==============
Dvar_CopyString
==============
*/
void Dvar_CopyString(const char *string, DvarValue *value)
{
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1034, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  if ( *string )
    value->integer64 = (__int64)SL_AllocString_Copy(string);
  else
    value->integer64 = (__int64)&queryFormat.fmt + 3;
}

/*
==============
Dvar_Deregister
==============
*/
const dvar_t *Dvar_Deregister(const dvar_t *dvar)
{
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3004, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( dvar->level[0] > 2u )
  {
    Sys_LockWrite(&g_dvarCritSect);
    Dvar_Deregister_Internal((dvar_t *const)dvar);
    Sys_UnlockWrite(&g_dvarCritSect);
  }
  return 0i64;
}

/*
==============
Dvar_DeregisterGamemodeDvars
==============
*/
void Dvar_DeregisterGamemodeDvars(void)
{
  unsigned int v0; 
  unsigned int *p_flags; 

  Sys_LockWrite(&g_dvarCritSect);
  v0 = 0;
  p_flags = &dvarPool[0].flags;
  do
  {
    if ( *((_BYTE *)p_flags + 4) >= 3u )
    {
      if ( (*p_flags & 0x100) != 0 )
        Dvar_Deregister_Internal(&dvarPool[(__int64)(int)v0]);
      else
        Com_PrintWarning(16, "Dvar_DeregisterGamemodeDvars error: Dvar '%s' needs to be manually de-registered since it is not permanent.\n", *((const char **)p_flags - 3));
    }
    ++v0;
    p_flags += 32;
  }
  while ( v0 < 0x2EE0 );
  Sys_UnlockWrite(&g_dvarCritSect);
}

/*
==============
Dvar_Deregister_Internal
==============
*/
void Dvar_Deregister_Internal(dvar_t *const dvar)
{
  unsigned int checksum; 
  __int64 v3; 
  unsigned __int16 v4; 
  unsigned __int16 *v5; 
  unsigned __int64 v6; 
  int v7; 
  int v8; 
  dvar_t *const *v9; 
  __int64 v10; 
  bool v11; 
  const char *string; 
  const char *v13; 
  const char *v14; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2906, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( dvar->level[0] <= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2908, ASSERT_TYPE_ASSERT, "(dvar->level > DvarLevel::PERMANENT)", "%s\n\tDe-registering dvar that should be premanent", "dvar->level > DvarLevel::PERMANENT") )
    __debugbreak();
  checksum = dvar->checksum;
  v3 = checksum % 0x1979;
  v4 = dvarHashTable[v3];
  v5 = &dvarHashTable[v3];
  if ( dvarPool[(unsigned __int64)v4].checksum == checksum )
  {
LABEL_12:
    *v5 = dvar->hashNext;
    goto LABEL_13;
  }
  while ( v4 != 0xFFFF )
  {
    v6 = (unsigned __int64)v4 << 7;
    v4 = *(unsigned __int16 *)((char *)&dvarPool[0].hashNext + v6);
    v5 = (unsigned __int16 *)((char *)&dvarPool[0].hashNext + v6);
    if ( dvarPool[(unsigned __int64)v4].checksum == checksum )
      goto LABEL_12;
  }
LABEL_13:
  v7 = dvarCount;
  v8 = 0;
  if ( dvarCount <= 0 )
    goto LABEL_19;
  v9 = sortedDvars;
  while ( *v9 != dvar )
  {
    ++v8;
    ++v9;
    if ( v8 >= dvarCount )
      goto LABEL_19;
  }
  v10 = dvarCount - 1;
  sortedDvars[v8] = sortedDvars[v10];
  sortedDvars[v10] = dvar;
  if ( v8 >= v7 )
  {
LABEL_19:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2961, ASSERT_TYPE_ASSERT, "( dvarIndex ) < ( dvarCount )", "%s < %s\n\t%i, %i", "dvarIndex", "dvarCount", v8, v7) )
      __debugbreak();
    v7 = dvarCount;
  }
  areDvarsSortedName = 0;
  dvarCount = v7 - 1;
  v11 = dvar->type == 9;
  areDvarsSortedChecksum = 0;
  if ( v11 )
  {
    string = dvar->current.string;
    if ( string && string != dvar->latched.string && string != dvar->reset.string && *string )
      SL_AllocString_Free(string);
    v13 = dvar->reset.string;
    dvar->current.integer64 = 0i64;
    if ( v13 && v13 != dvar->latched.string && *v13 )
      SL_AllocString_Free(v13);
    v14 = dvar->latched.string;
    dvar->reset.integer64 = 0i64;
    if ( v14 && v14 != dvar->current.string && *v14 )
      SL_AllocString_Free(v14);
    dvar->latched.integer64 = 0i64;
  }
  if ( (dvar->flags & 0x100) != 0 && *dvar->name )
    SL_AllocString_Free(dvar->name);
  memset_0(dvar, 0, sizeof(dvar_t));
}

/*
==============
Dvar_DevOverrideRegistrationLevel
==============
*/
void Dvar_DevOverrideRegistrationLevel(const dvar_t *dvar)
{
  const char *UnobfuscatedName; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3373, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( dvar->level[0] > 1u )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    Com_Printf(16, "Dvar '%s' is now developer-permanent.\n", UnobfuscatedName);
    dvar->level[0] = 1;
  }
}

/*
==============
Dvar_DisableReplication
==============
*/
void Dvar_DisableReplication(void)
{
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1060i64) = 0;
}

/*
==============
Dvar_DisplayableLatchedValue
==============
*/
const char *Dvar_DisplayableLatchedValue(const dvar_t *dvar)
{
  DvarValue latched; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1565, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  latched = dvar->latched;
  return Dvar_ValueToString(dvar, &latched);
}

/*
==============
Dvar_DisplayableResetValue
==============
*/
const char *Dvar_DisplayableResetValue(const dvar_t *dvar)
{
  DvarValue reset; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1557, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  reset = dvar->reset;
  return Dvar_ValueToString(dvar, &reset);
}

/*
==============
Dvar_DisplayableValue
==============
*/
const char *Dvar_DisplayableValue(const dvar_t *dvar)
{
  DvarValue current; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1549, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  current = dvar->current;
  return Dvar_ValueToString(dvar, &current);
}

/*
==============
Dvar_DomainToString
==============
*/
const char *Dvar_DomainToString(const dvar_t *dvar, char *outBuffer, unsigned __int64 outBufferLen)
{
  return Dvar_DomainToString_Internal(dvar, outBuffer, outBufferLen, NULL);
}

/*
==============
Dvar_DomainToString_GetLines
==============
*/
const char *Dvar_DomainToString_GetLines(const dvar_t *dvar, char *outBuffer, unsigned __int64 outBufferLen, int *outLineCount)
{
  if ( !outLineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1980, ASSERT_TYPE_ASSERT, "(outLineCount)", (const char *)&queryFormat, "outLineCount") )
    __debugbreak();
  return Dvar_DomainToString_Internal(dvar, outBuffer, outBufferLen, outLineCount);
}

/*
==============
Dvar_DomainToString_Internal
==============
*/
char *Dvar_DomainToString_Internal(const dvar_t *dvar, char *outBuffer, unsigned __int64 outBufferLen, int *outLineCount)
{
  DvarLimits domain; 
  int v9; 
  char *v10; 
  unsigned __int64 v11; 
  char *v12; 
  unsigned int checksum; 
  const char *UnobfuscatedName; 
  __int64 v15; 
  int v16; 
  int stringCount; 
  char *v18; 
  const char *const *strings; 
  int v20; 
  char *result; 
  char *fmt; 
  __int64 v23; 
  DvarLimits v24; 

  domain = dvar->domain;
  v24 = domain;
  if ( !outBufferLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1829, ASSERT_TYPE_ASSERT, "(outBufferLen > 0)", (const char *)&queryFormat, "outBufferLen > 0") )
    __debugbreak();
  v9 = 0;
  v10 = &outBuffer[outBufferLen];
  if ( outLineCount )
    *outLineCount = 0;
  switch ( dvar->type )
  {
    case 0u:
      Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is 0 or 1");
      goto LABEL_63;
    case 1u:
      if ( v24.value.min == -3.4028235e38 )
      {
        if ( v24.value.max == 3.4028235e38 )
          Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any number");
        else
          Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any number %g or smaller", v24.value.max);
      }
      else if ( v24.value.max == 3.4028235e38 )
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any number %g or bigger", v24.value.min);
      }
      else
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any number from %g to %g", v24.value.min, v24.value.max);
      }
      goto LABEL_63;
    case 2u:
      v24 = domain;
      Dvar_VectorDomainToString(2, &v24, outBuffer, outBufferLen);
      goto LABEL_63;
    case 3u:
    case 0xBu:
      v24 = domain;
      Dvar_VectorDomainToString(3, &v24, outBuffer, outBufferLen);
      goto LABEL_63;
    case 4u:
      v24 = domain;
      Dvar_VectorDomainToString(4, &v24, outBuffer, outBufferLen);
      goto LABEL_63;
    case 5u:
      v11 = outBufferLen;
      if ( v24.enumeration.stringCount == 0x80000000 )
      {
        v12 = outBuffer;
        if ( v24.integer.max == 0x7FFFFFFF )
          goto LABEL_14;
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer %i or smaller", (unsigned int)v24.integer.max);
      }
      else if ( v24.integer.max == 0x7FFFFFFF )
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer %i or bigger", (unsigned int)v24.enumeration.stringCount);
      }
      else
      {
        LODWORD(fmt) = v24.integer.max;
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer from %i to %i", (unsigned int)v24.enumeration.stringCount, fmt);
      }
      goto LABEL_63;
    case 6u:
      v11 = outBufferLen;
      v12 = outBuffer;
      if ( v24.integer64.min == 0xFFFFFFFF80000000ui64 )
      {
        if ( v24.integer64.max == 0x7FFFFFFFFFFFFFFFi64 )
LABEL_14:
          Com_sprintf_truncate(v12, v11, "Domain is any integer");
        else
          Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer %lli or smaller", v24.integer64.max);
      }
      else if ( v24.integer64.max == 0x7FFFFFFF )
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer %lli or bigger", v24.integer64.min);
      }
      else
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer from %lli to %lli", v24.integer64.min, v24.integer64.max);
      }
      goto LABEL_63;
    case 7u:
      if ( v24.integer64.min == 0xFFFFFFFF80000000ui64 )
      {
        if ( v24.integer64.max == -1 )
          Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any unsigned integer");
        else
          Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any unsigned integer %llu or smaller", v24.integer64.max);
      }
      else if ( v24.integer64.max == 0x7FFFFFFF )
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any unsigned integer %llu or bigger", v24.integer64.min);
      }
      else
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any unsigned integer from %llu to %llu", v24.integer64.min, v24.integer64.max);
      }
      goto LABEL_63;
    case 8u:
      v16 = Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is one of the following:");
      if ( v16 >= 0 )
      {
        stringCount = v24.enumeration.stringCount;
        v18 = &outBuffer[v16];
        if ( v24.enumeration.stringCount > 0 )
        {
          strings = v24.enumeration.strings;
          do
          {
            v20 = Com_sprintf_truncate(v18, v10 - v18, "\n  %2i: %s", (unsigned int)v9, *strings);
            if ( v20 < 0 )
              break;
            if ( outLineCount )
              ++*outLineCount;
            v18 += v20;
            if ( v18 >= v10 )
              break;
            ++v9;
            ++strings;
          }
          while ( v9 < stringCount );
        }
      }
      goto LABEL_63;
    case 9u:
      if ( dvar->type != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1787, ASSERT_TYPE_ASSERT, "(dvar->type == DVAR_TYPE_STRING)", (const char *)&queryFormat, "dvar->type == DVAR_TYPE_STRING") )
        __debugbreak();
      if ( !s_customDvarDomainCallbackTable.m_entryCount )
        goto LABEL_45;
      checksum = dvar->checksum;
      while ( 1 )
      {
        v24 = (DvarLimits)s_customDvarDomainCallbackTable.m_table[v9];
        if ( v24.enumeration.stringCount == checksum )
          break;
        if ( ++v9 >= s_customDvarDomainCallbackTable.m_entryCount )
          goto LABEL_45;
      }
      if ( v24.integer64.max )
      {
        v15 = ((__int64 (__fastcall *)(int *))v24.enumeration.strings)(outLineCount);
        Com_sprintf_truncate(outBuffer, outBufferLen, (const char *)&queryFormat, v15);
      }
      else
      {
        UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1793, ASSERT_TYPE_ASSERT, "(entry.callback)", "%s\n\tDvar %s had an entry in the dvar custom domain callback table, but callback was NULL.", "entry.callback", UnobfuscatedName) )
          __debugbreak();
LABEL_45:
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any text");
      }
LABEL_63:
      result = outBuffer;
      *(v10 - 1) = 0;
      return result;
    case 0xAu:
      Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any 4-component color, in RGBA format");
      goto LABEL_63;
    default:
      LODWORD(v23) = dvar->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1962, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v23) )
        __debugbreak();
      *outBuffer = 0;
      goto LABEL_63;
  }
}

/*
==============
Dvar_EnableReplication
==============
*/
void Dvar_EnableReplication(void)
{
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1060i64) = 1;
}

/*
==============
Dvar_EndPermanentRegistration
==============
*/
void Dvar_EndPermanentRegistration(void)
{
  __int64 v0; 

  if ( !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1056i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 5131, ASSERT_TYPE_ASSERT, "(s_allowPermanentDvars)", "%s\n\tEnd() call with missing Begin()", "s_allowPermanentDvars") )
    __debugbreak();
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  --*(_DWORD *)(v0 + 1056);
}

/*
==============
Dvar_EnumStringToIndex
==============
*/
__int64 Dvar_EnumStringToIndex(const dvar_t *dvar, const char *enumString)
{
  int v4; 
  __int64 v5; 
  const char *v6; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1156, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1158, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( dvar->type != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1160, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_ENUM ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( !dvar->domain.integer64.max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1161, ASSERT_TYPE_ASSERT, "( ( dvar->domain.enumeration.strings ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( !enumString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1162, ASSERT_TYPE_ASSERT, "( ( enumString ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  v4 = 0;
  if ( dvar->domain.enumeration.stringCount > 0 )
  {
    v5 = 0i64;
    do
    {
      v6 = *(const char **)(v5 + dvar->domain.integer64.max);
      if ( !v6 || !*v6 )
        break;
      if ( !I_strnicmp(enumString, v6, 0x7FFFFFFFui64) )
        return (unsigned int)v4;
      ++v4;
      v5 += 8i64;
    }
    while ( v4 < dvar->domain.enumeration.stringCount );
  }
  return 0xFFFFFFFFi64;
}

/*
==============
Dvar_EnumToString
==============
*/
const char *Dvar_EnumToString(const dvar_t *dvar)
{
  int integer; 
  bool v3; 
  __int64 v5; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1109, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1111, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( dvar->type != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1113, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_ENUM ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( !dvar->domain.integer64.max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1114, ASSERT_TYPE_ASSERT, "( ( dvar->domain.enumeration.strings ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  integer = dvar->current.integer;
  v3 = integer == 0;
  if ( integer >= 0 )
  {
    if ( integer < dvar->domain.enumeration.stringCount )
      goto LABEL_19;
    v3 = integer == 0;
  }
  if ( !v3 )
  {
    LODWORD(v5) = dvar->current.integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1115, ASSERT_TYPE_ASSERT, "( ( dvar->current.integer >= 0 && dvar->current.integer < dvar->domain.enumeration.stringCount || dvar->current.integer == 0 ) )", "( dvar->current.integer ) = %i", v5) )
      __debugbreak();
  }
LABEL_19:
  if ( dvar->domain.enumeration.stringCount )
    return *(const char **)(dvar->domain.integer64.max + 8i64 * dvar->current.integer);
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
Dvar_ErrorCleanup
==============
*/
void Dvar_ErrorCleanup(void)
{
  __int64 v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 836, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tCannot register permanent dvars from other threads", "Sys_IsMainThread()") )
    __debugbreak();
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  g_dvarCritSect.writeThreadId = 0;
  *(_DWORD *)(v0 + 1056) = 0;
  while ( g_dvarCritSect.readCount > 0 )
  {
    if ( ((unsigned __int64)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
      __debugbreak();
    _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
  }
  while ( g_dvarCritSect.writeCount > 0 )
  {
    if ( ((unsigned __int64)&g_dvarCritSect.writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect.writeCount) )
      __debugbreak();
    _InterlockedDecrement(&g_dvarCritSect.writeCount);
  }
}

/*
==============
Dvar_FindMalleableVar
==============
*/
dvar_t *Dvar_FindMalleableVar(unsigned int checksum)
{
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  unsigned __int16 hashNext; 
  dvar_t *v4; 
  volatile int readCount; 
  volatile int v7; 

  v1 = checksum;
  if ( g_dvarCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  v2 = (unsigned __int64)&g_dvarCritSect & 3;
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_dvarCritSect);
  while ( g_dvarCritSect.writeCount )
    Sys_Sleep(0);
  hashNext = dvarHashTable[v1 % 0x1979];
  if ( hashNext == 0xFFFF )
  {
LABEL_12:
    if ( g_dvarCritSect.readCount <= 0 )
    {
      readCount = g_dvarCritSect.readCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
        __debugbreak();
    }
    if ( v2 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
        __debugbreak();
    }
    _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
    return 0i64;
  }
  else
  {
    while ( 1 )
    {
      v4 = &dvarPool[(unsigned __int64)hashNext];
      if ( (_DWORD)v1 == v4->checksum )
        break;
      hashNext = v4->hashNext;
      if ( hashNext == 0xFFFF )
        goto LABEL_12;
    }
    if ( g_dvarCritSect.readCount <= 0 )
    {
      v7 = g_dvarCritSect.readCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", v7, 0i64) )
        __debugbreak();
    }
    if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
      __debugbreak();
    _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
    return v4;
  }
}

/*
==============
Dvar_FindVarByChecksum
==============
*/

dvar_t *__fastcall Dvar_FindVarByChecksum(unsigned int checksum)
{
  return Dvar_FindMalleableVar(checksum);
}

/*
==============
Dvar_FindVarByChecksumString
==============
*/
dvar_t *Dvar_FindVarByChecksumString(const char *dvarName)
{
  int v1; 

  v1 = atoi(dvarName);
  return Dvar_FindMalleableVar(v1);
}

/*
==============
Dvar_FindVarByName
==============
*/
dvar_t *Dvar_FindVarByName(const char *dvarName)
{
  unsigned int Checksum; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_FindMalleableVar(Checksum);
}

/*
==============
Dvar_FlagsToString
==============
*/
__int64 Dvar_FlagsToString(const dvar_t *dvar, char *outBuffer, unsigned __int64 outBufferLen)
{
  unsigned int flags; 
  char v7; 
  const char *v8; 
  const char *v9; 
  int destPos; 

  flags = dvar->flags;
  destPos = 0;
  v7 = 1;
  if ( (flags & 0x40) != 0 )
  {
    Com_sprintfPos(outBuffer, outBufferLen, &destPos, "%ssaved", (const char *)&queryFormat.fmt + 3);
    flags = dvar->flags;
    v7 = 0;
  }
  v8 = "|";
  if ( (flags & 4) != 0 )
  {
    v9 = "|";
    if ( v7 )
      v9 = (char *)&queryFormat.fmt + 3;
    Com_sprintfPos(outBuffer, outBufferLen, &destPos, "%scheat", v9);
    flags = dvar->flags;
    v7 = 0;
  }
  if ( (flags & 0x80u) != 0 )
  {
    if ( v7 )
      v8 = (char *)&queryFormat.fmt + 3;
    Com_sprintfPos(outBuffer, outBufferLen, &destPos, "%sdemo", v8);
    v7 = 0;
  }
  return (unsigned __int8)v7 ^ 1u;
}

/*
==============
Dvar_ForEach
==============
*/
void Dvar_ForEach(void (*callback)(const dvar_t *, void *), void *userData)
{
  int v4; 
  const dvar_t **v5; 
  volatile int readCount; 

  if ( g_dvarCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_dvarCritSect);
  while ( g_dvarCritSect.writeCount )
    Sys_Sleep(0);
  if ( !areDvarsSortedChecksum )
    Dvar_SortChecksum();
  v4 = 0;
  if ( dvarCount > 0 )
  {
    v5 = (const dvar_t **)sortedDvars;
    do
    {
      callback(*v5, userData);
      ++v4;
      ++v5;
    }
    while ( v4 < dvarCount );
  }
  if ( g_dvarCritSect.readCount <= 0 )
  {
    readCount = g_dvarCritSect.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
}

/*
==============
Dvar_ForEachName
==============
*/
void Dvar_ForEachName(void (*callback)(const char *))
{
  int v2; 
  const char ***v3; 
  const char *UnobfuscatedName; 
  volatile int readCount; 

  if ( g_dvarCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_dvarCritSect);
  while ( g_dvarCritSect.writeCount )
    Sys_Sleep(0);
  if ( !areDvarsSortedName )
    Dvar_SortByName();
  v2 = 0;
  if ( dvarCount > 0 )
  {
    v3 = (const char ***)sortedDvars;
    do
    {
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(**v3);
      callback(UnobfuscatedName);
      ++v2;
      ++v3;
    }
    while ( v2 < dvarCount );
  }
  if ( g_dvarCritSect.readCount <= 0 )
  {
    readCount = g_dvarCritSect.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
}

/*
==============
Dvar_ForEachNameWithUserData
==============
*/
void Dvar_ForEachNameWithUserData(void (*callback)(const dvar_t *, void *), void *userData)
{
  int v4; 
  const dvar_t **v5; 
  volatile int readCount; 

  if ( g_dvarCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_dvarCritSect);
  while ( g_dvarCritSect.writeCount )
    Sys_Sleep(0);
  if ( !areDvarsSortedName )
    Dvar_SortByName();
  v4 = 0;
  if ( dvarCount > 0 )
  {
    v5 = (const dvar_t **)sortedDvars;
    do
    {
      callback(*v5, userData);
      ++v4;
      ++v5;
    }
    while ( v4 < dvarCount );
  }
  if ( g_dvarCritSect.readCount <= 0 )
  {
    readCount = g_dvarCritSect.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
}

/*
==============
Dvar_ForEachName_UNSAFE
==============
*/
void Dvar_ForEachName_UNSAFE(void (*callback)(const char *))
{
  int v2; 
  const char ***v3; 
  const char *UnobfuscatedName; 

  if ( !areDvarsSortedName )
    Dvar_SortByName();
  v2 = 0;
  if ( dvarCount > 0 )
  {
    v3 = (const char ***)sortedDvars;
    do
    {
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(**v3);
      callback(UnobfuscatedName);
      ++v2;
      ++v3;
    }
    while ( v2 < dvarCount );
  }
}

/*
==============
Dvar_ForEachName_UNSAFE_LockBegin
==============
*/
void Dvar_ForEachName_UNSAFE_LockBegin(void)
{
  if ( g_dvarCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_dvarCritSect);
  while ( g_dvarCritSect.writeCount )
    Sys_Sleep(0);
}

/*
==============
Dvar_ForEachName_UNSAFE_LockEnd
==============
*/
void Dvar_ForEachName_UNSAFE_LockEnd(void)
{
  volatile int readCount; 

  if ( g_dvarCritSect.readCount <= 0 )
  {
    readCount = g_dvarCritSect.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
}

/*
==============
Dvar_GenerateChecksum
==============
*/
__int64 Dvar_GenerateChecksum(const char *dvarName)
{
  const char *ObfuscatedName; 
  __int64 v2; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  signed __int64 v5; 
  char *v6; 
  char v7; 
  unsigned __int8 v8; 
  unsigned __int8 *v9; 
  __int64 result; 
  char v11[1024]; 

  ObfuscatedName = Dvar_DevGetObfuscatedName(dvarName);
  if ( !ObfuscatedName )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441721B0, 1199i64);
  v2 = -1i64;
  do
    ++v2;
  while ( ObfuscatedName[v2] );
  v3 = v2 + 1;
  if ( v3 > 0x400 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441721F0, 1200i64, ObfuscatedName, 1024);
  v4 = 0i64;
  if ( v3 )
  {
    v5 = ObfuscatedName - v11;
    do
    {
      v6 = &v11[v4];
      v7 = v11[v4 + v5] | 0x20;
      if ( (unsigned int)(v11[v4 + v5] - 65) >= 0x1A )
        v7 = v11[v4 + v5];
      ++v4;
      *v6 = v7;
    }
    while ( v4 < v3 );
  }
  v8 = v11[0];
  v9 = (unsigned __int8 *)v11;
  for ( result = 3735936685i64; *v9; v8 = *v9 )
  {
    ++v9;
    result = v8 ^ (unsigned int)(16777619 * result);
  }
  return result;
}

/*
==============
Dvar_GenerateChecksumStringFromChecksum
==============
*/
void Dvar_GenerateChecksumStringFromChecksum(char *dest, int size, unsigned int checksum)
{
  unsigned __int64 v3; 
  int v6; 
  unsigned int v7; 

  v3 = size;
  memset_0(dest, 0, size);
  Com_sprintf(dest, v3, "%d", checksum);
  if ( atoi(dest) != checksum )
  {
    v7 = checksum;
    v6 = atoi(dest);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 919, ASSERT_TYPE_ASSERT, "( static_cast<uint>( atoi( dest ) ) ) == ( checksum )", "%s == %s\n\t%i, %i", "static_cast<uint>( atoi( dest ) )", "checksum", v6, v7) )
      __debugbreak();
  }
}

/*
==============
Dvar_GenerateChecksumStringFromName
==============
*/
void Dvar_GenerateChecksumStringFromName(char *dest, int size, const char *dvarName)
{
  size_t v4; 
  unsigned int Checksum; 
  int v6; 
  unsigned int v7; 

  v4 = size;
  Checksum = Dvar_GenerateChecksum(dvarName);
  memset_0(dest, 0, v4);
  Com_sprintf(dest, v4, "%d", Checksum);
  if ( atoi(dest) != Checksum )
  {
    v7 = Checksum;
    v6 = atoi(dest);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 919, ASSERT_TYPE_ASSERT, "( static_cast<uint>( atoi( dest ) ) ) == ( checksum )", "%s == %s\n\t%i, %i", "static_cast<uint>( atoi( dest ) )", "checksum", v6, v7) )
      __debugbreak();
  }
}

/*
==============
Dvar_GetBoolSafe
==============
*/
bool Dvar_GetBoolSafe(const char *dvarName)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v3; 
  unsigned __int8 type; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v3 = MalleableVar;
  if ( MalleableVar )
  {
    type = MalleableVar->type;
    if ( type && (type != 9 || (v3->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2536, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_BOOL || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->type ) = %i", type) )
      __debugbreak();
    if ( v3->type )
      LOBYTE(MalleableVar) = Dvar_StringToBool(v3->current.string);
    else
      LOBYTE(MalleableVar) = v3->current.enabled;
  }
  return (char)MalleableVar;
}

/*
==============
Dvar_GetCurrentValueAsInt64
==============
*/
dvar_t *Dvar_GetCurrentValueAsInt64(const char *dvarname_in)
{
  unsigned int Checksum; 
  dvar_t *result; 
  dvar_t *v3; 
  unsigned __int8 type; 
  int v5; 
  unsigned __int8 v6; 

  Checksum = Dvar_GenerateChecksum(dvarname_in);
  result = Dvar_FindMalleableVar(Checksum);
  v3 = result;
  if ( result )
  {
    type = result->type;
    if ( type > 8u || (v5 = 291, !_bittest(&v5, type)) )
    {
      if ( (type != 9 || (result->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1190, ASSERT_TYPE_ASSERT, "( ( ( dvar->type == DVAR_TYPE_BOOL ) || ( dvar->type == DVAR_TYPE_INT ) || ( dvar->type == DVAR_TYPE_FLOAT ) || ( dvar->type == DVAR_TYPE_ENUM ) || ( ( dvar->type == DVAR_TYPE_STRING ) && ( dvar->flags & (1 << 8) ) ) ) )", "( dvar->type ) = %i", type) )
        __debugbreak();
    }
    v6 = v3->type;
    if ( v6 == 5 || v6 == 8 )
    {
      return (dvar_t *)v3->current.integer;
    }
    else if ( v6 )
    {
      if ( v6 == 1 )
        return (dvar_t *)(int)v3->current.value;
      else
        return (dvar_t *)I_atoi64(v3->current.string);
    }
    else
    {
      return (dvar_t *)v3->current.enabled;
    }
  }
  return result;
}

/*
==============
Dvar_GetFloatSafe
==============
*/
double Dvar_GetFloatSafe(const char *dvarName)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v3; 
  double result; 
  unsigned __int8 type; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v3 = MalleableVar;
  if ( !MalleableVar )
    return 0.0;
  type = MalleableVar->type;
  if ( type != 1 && (type != 9 || (v3->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2610, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->type ) = %i", type) )
    __debugbreak();
  if ( v3->type == 1 )
    *(_QWORD *)&result = v3->current.unsignedInt;
  else
    *(float *)&result = Dvar_StringToFloat(v3->current.string);
  return result;
}

/*
==============
Dvar_GetInt64Safe
==============
*/
dvar_t *Dvar_GetInt64Safe(const char *dvarName)
{
  unsigned int Checksum; 
  dvar_t *result; 
  dvar_t *v3; 
  unsigned __int8 type; 
  int v5; 
  unsigned __int8 v6; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_FindMalleableVar(Checksum);
  v3 = result;
  if ( result )
  {
    type = result->type;
    if ( type > 8u || (v5 = 353, !_bittest(&v5, type)) )
    {
      if ( (type != 9 || (result->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2570, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_INT64 || dvar->type == DVAR_TYPE_INT || dvar->type == DVAR_TYPE_BOOL || dvar->type == DVAR_TYPE_ENUM || ( dvar->type == DVAR_TYPE_STRING && ( dvar->flags & (1 << 8) ) ) ) )", "( dvar->type ) = %i", type) )
        __debugbreak();
    }
    v6 = v3->type;
    if ( v6 == 6 )
    {
      return (dvar_t *)v3->current.integer64;
    }
    else if ( v6 == 5 || v6 == 8 )
    {
      return (dvar_t *)v3->current.integer;
    }
    else if ( v6 )
    {
      return (dvar_t *)Dvar_StringToInt64(v3->current.string);
    }
    else
    {
      return (dvar_t *)v3->current.color[0];
    }
  }
  return result;
}

/*
==============
Dvar_GetIntSafe
==============
*/
int Dvar_GetIntSafe(const char *dvarName)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v3; 
  unsigned __int8 type; 
  int v5; 
  unsigned __int8 v6; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v3 = MalleableVar;
  if ( MalleableVar )
  {
    type = MalleableVar->type;
    if ( type > 8u || (v5 = 289, !_bittest(&v5, type)) )
    {
      if ( (type != 9 || (MalleableVar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2552, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_INT || dvar->type == DVAR_TYPE_BOOL || dvar->type == DVAR_TYPE_ENUM || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->type ) = %i", type) )
        __debugbreak();
    }
    v6 = v3->type;
    if ( v6 == 5 || v6 == 8 )
    {
      LODWORD(MalleableVar) = v3->current.integer;
    }
    else if ( v6 )
    {
      LODWORD(MalleableVar) = Dvar_StringToInt(v3->current.string);
    }
    else
    {
      LODWORD(MalleableVar) = v3->current.color[0];
    }
  }
  return (int)MalleableVar;
}

/*
==============
Dvar_GetStringSafe
==============
*/
const char *Dvar_GetStringSafe(const char *dvarName)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  const char **p_name; 
  unsigned __int8 type; 
  int v6; 
  bool v7; 
  __int64 v8; 
  int v9; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  p_name = &MalleableVar->name;
  if ( !MalleableVar )
    return (char *)&queryFormat.fmt + 3;
  type = MalleableVar->type;
  if ( (unsigned __int8)(type - 8) > 1u )
  {
    v9 = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2642, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_STRING || dvar->type == DVAR_TYPE_ENUM ) )", "( dvar->type ) = %i", v9) )
      __debugbreak();
  }
  if ( *((_BYTE *)p_name + 29) != 8 )
    return p_name[5];
  if ( !*p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1111, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( *((_BYTE *)p_name + 29) != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1113, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_ENUM ) )", "( dvar->name ) = %s", *p_name) )
    __debugbreak();
  if ( !p_name[12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1114, ASSERT_TYPE_ASSERT, "( ( dvar->domain.enumeration.strings ) )", "( dvar->name ) = %s", *p_name) )
    __debugbreak();
  v6 = *((_DWORD *)p_name + 10);
  v7 = v6 == 0;
  if ( v6 < 0 )
    goto LABEL_19;
  if ( v6 >= *((_DWORD *)p_name + 22) )
  {
    v7 = v6 == 0;
LABEL_19:
    if ( !v7 )
    {
      LODWORD(v8) = *((_DWORD *)p_name + 10);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1115, ASSERT_TYPE_ASSERT, "( ( dvar->current.integer >= 0 && dvar->current.integer < dvar->domain.enumeration.stringCount || dvar->current.integer == 0 ) )", "( dvar->current.integer ) = %i", v8) )
        __debugbreak();
    }
  }
  if ( !*((_DWORD *)p_name + 22) )
    return (char *)&queryFormat.fmt + 3;
  return *(const char **)&p_name[12][8 * *((int *)p_name + 10)];
}

/*
==============
Dvar_GetUInt64Safe
==============
*/
dvar_t *Dvar_GetUInt64Safe(const char *dvarName)
{
  unsigned int Checksum; 
  dvar_t *result; 
  dvar_t *v3; 
  unsigned __int8 type; 
  int v5; 
  unsigned __int8 v6; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_FindMalleableVar(Checksum);
  v3 = result;
  if ( result )
  {
    type = result->type;
    if ( type > 8u || (v5 = 417, !_bittest(&v5, type)) )
    {
      if ( (type != 9 || (result->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2590, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_UINT64 || dvar->type == DVAR_TYPE_INT || dvar->type == DVAR_TYPE_BOOL || dvar->type == DVAR_TYPE_ENUM || ( dvar->type == DVAR_TYPE_STRING && ( dvar->flags & (1 << 8) ) ) ) )", "( dvar->type ) = %i", type) )
        __debugbreak();
    }
    v6 = v3->type;
    if ( v6 == 7 )
    {
      return (dvar_t *)v3->current.integer64;
    }
    else if ( v6 == 5 || v6 == 8 )
    {
      return (dvar_t *)v3->current.integer;
    }
    else if ( v6 )
    {
      return (dvar_t *)Dvar_StringToInt64(v3->current.string);
    }
    else
    {
      return (dvar_t *)v3->current.color[0];
    }
  }
  return result;
}

/*
==============
Dvar_GetUnpackedColor
==============
*/
void Dvar_GetUnpackedColor(const dvar_t *dvar, vec4_t *expandedColor)
{
  unsigned __int8 type; 
  unsigned int unsignedInt; 
  __int64 v8; 
  unsigned int color; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2714, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  type = dvar->type;
  if ( type != 10 && (type != 9 || (dvar->flags & 0x100) == 0) )
  {
    LODWORD(v8) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2715, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_COLOR || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->type ) = %i", v8) )
      __debugbreak();
  }
  if ( dvar->type == 10 )
  {
    unsignedInt = dvar->current.unsignedInt;
  }
  else
  {
    Dvar_StringToColor(dvar->current.string, (unsigned __int8 *)&color);
    unsignedInt = color;
  }
  _XMM0 = unsignedInt;
  __asm { vpmovzxbd xmm1, xmm0 }
  *(__m128 *)expandedColor = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
}

/*
==============
Dvar_GetUnpackedColorByName
==============
*/
void Dvar_GetUnpackedColorByName(const char *dvarName, vec4_t *expandedColor)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v5; 
  unsigned __int8 type; 
  unsigned int unsignedInt; 
  unsigned int color; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v5 = MalleableVar;
  if ( MalleableVar )
  {
    type = MalleableVar->type;
    if ( type != 10 && (type != 9 || (v5->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2715, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_COLOR || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->type ) = %i", type) )
      __debugbreak();
    if ( v5->type == 10 )
    {
      unsignedInt = v5->current.unsignedInt;
    }
    else
    {
      Dvar_StringToColor(v5->current.string, (unsigned __int8 *)&color);
      unsignedInt = color;
    }
    _XMM0 = unsignedInt;
    __asm { vpmovzxbd xmm1, xmm0 }
    *(__m128 *)expandedColor = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
  }
  else
  {
    *expandedColor = colorWhite;
  }
}

/*
==============
Dvar_GetVariantString
==============
*/
const char *Dvar_GetVariantString(const char *dvarName)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  DvarValue current; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  if ( !MalleableVar )
    return (char *)&queryFormat.fmt + 3;
  current = MalleableVar->current;
  return Dvar_ValueToString(MalleableVar, &current);
}

/*
==============
Dvar_GetVariantStringToBuffer
==============
*/
void Dvar_GetVariantStringToBuffer(const char *dvarName, char *outBuffer, unsigned __int64 outBufferLen)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  DvarValue current; 

  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2665, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  if ( !outBufferLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2666, ASSERT_TYPE_ASSERT, "(outBufferLen)", (const char *)&queryFormat, "outBufferLen") )
    __debugbreak();
  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  if ( MalleableVar )
  {
    current = MalleableVar->current;
    Dvar_ValueToStringBuffer(MalleableVar, &current, outBuffer, outBufferLen);
  }
  else
  {
    *outBuffer = 0;
  }
}

/*
==============
Dvar_GetVariantStringWithDefault
==============
*/
const char *Dvar_GetVariantStringWithDefault(const char *dvarName, const char *defaultValue)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  DvarValue current; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  if ( !MalleableVar )
    return defaultValue;
  current = MalleableVar->current;
  return Dvar_ValueToString(MalleableVar, &current);
}

/*
==============
Dvar_GetVec3Safe
==============
*/
void Dvar_GetVec3Safe(const char *dvarName, vec3_t *result)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  float *v5; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v5 = (float *)MalleableVar;
  if ( MalleableVar )
  {
    if ( ((MalleableVar->type - 3) & 0xF7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2629, ASSERT_TYPE_ASSERT, "(dvar->type == DVAR_TYPE_FLOAT_3 || dvar->type == DVAR_TYPE_FLOAT_3_COLOR)", (const char *)&queryFormat, "dvar->type == DVAR_TYPE_FLOAT_3 || dvar->type == DVAR_TYPE_FLOAT_3_COLOR") )
      __debugbreak();
    result->v[0] = v5[10];
    result->v[1] = v5[11];
    result->v[2] = v5[12];
  }
  else
  {
    *result = vec3_origin;
  }
}

/*
==============
Dvar_HasLatchedValue
==============
*/
bool Dvar_HasLatchedValue(const dvar_t *dvar)
{
  DvarValue latched; 
  DvarValue current; 
  unsigned __int8 type; 
  DvarValue v5; 
  DvarValue v6; 

  latched = dvar->latched;
  current = dvar->current;
  type = dvar->type;
  v5 = latched;
  v6 = current;
  return Dvar_ValuesEqual(type, &v6, &v5) == 0;
}

/*
==============
Dvar_IndexStringToEnumString
==============
*/
const char *Dvar_IndexStringToEnumString(const dvar_t *dvar, const char *indexString)
{
  unsigned __int64 v4; 
  __int64 v5; 
  int v6; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1126, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1128, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( dvar->type != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1130, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_ENUM ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( !dvar->domain.integer64.max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1131, ASSERT_TYPE_ASSERT, "( ( dvar->domain.enumeration.strings ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( !indexString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1132, ASSERT_TYPE_ASSERT, "( ( indexString ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->domain.enumeration.stringCount )
  {
    v4 = -1i64;
    do
      ++v4;
    while ( indexString[v4] );
    v5 = 0i64;
    if ( v4 )
    {
      while ( (unsigned __int8)(indexString[v5] - 48) <= 9u )
      {
        if ( ++v5 >= v4 )
          goto LABEL_22;
      }
    }
    else
    {
LABEL_22:
      v6 = atoi(indexString);
      if ( v6 >= 0 && v6 < dvar->domain.enumeration.stringCount )
        return *(const char **)(dvar->domain.integer64.max + 8i64 * v6);
    }
  }
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
Dvar_InfoPrint
==============
*/
void Dvar_InfoPrint(const char *s)
{
  char v1; 
  const char *v2; 
  char *v3; 
  signed __int64 v4; 
  char v5; 
  char *v6; 
  const char *v7; 
  char v8; 
  const char *v9; 
  char v10[512]; 
  char v11[512]; 

  v1 = *s;
  if ( *s == 92 )
    v1 = s[1];
  v2 = s + 1;
  if ( *s != 92 )
    v2 = s;
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = v10;
      do
      {
        if ( v1 == 92 )
          break;
        ++v2;
        *v3++ = v1;
        v1 = *v2;
      }
      while ( *v2 );
      v4 = v3 - v10;
      if ( (unsigned __int64)(v3 - v10 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v4, "signed", v3 - v10) )
        __debugbreak();
      if ( (int)v4 >= 20 )
      {
        *v3 = 0;
      }
      else
      {
        memset_0(v3, 32, 20 - (int)v4);
        v10[20] = 0;
      }
      Com_Printf(15, (const char *)&queryFormat, v10);
      if ( !*v2 )
        break;
      v5 = v2[1];
      v6 = v11;
      v7 = v2 + 1;
      if ( v5 )
      {
        v8 = v5;
        do
        {
          v5 = v8;
          if ( v8 == 92 )
            break;
          v5 = *++v7;
          *v6++ = v8;
          v8 = v5;
        }
        while ( v5 );
      }
      *v6 = 0;
      v9 = v7 + 1;
      if ( !v5 )
        v9 = v7;
      v2 = v9;
      Com_Printf(15, "%s\n", v11);
      v1 = *v2;
      if ( !*v2 )
        return;
    }
    Com_Printf(15, "MISSING VALUE\n");
  }
}

/*
==============
Dvar_InfoValueForKey
==============
*/
const char *Dvar_InfoValueForKey(const char *s, const char *key)
{
  __int64 Checksum; 
  int v5; 
  int v6; 
  char dest[8]; 
  int v8; 

  Checksum = Dvar_GenerateChecksum(key);
  *(_QWORD *)dest = 0i64;
  v8 = 0;
  Com_sprintf(dest, 0xCui64, "%d", Checksum);
  if ( atoi(dest) != (_DWORD)Checksum )
  {
    v6 = Checksum;
    v5 = atoi(dest);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 919, ASSERT_TYPE_ASSERT, "( static_cast<uint>( atoi( dest ) ) ) == ( checksum )", "%s == %s\n\t%i, %i", "static_cast<uint>( atoi( dest ) )", "checksum", v5, v6) )
      __debugbreak();
  }
  return Info_ValueForKey(s, dest);
}

/*
==============
Dvar_Init
==============
*/
void Dvar_Init(void)
{
  _QWORD *v0; 
  dvar_t *v1; 
  __int64 v2; 
  dvar_t **v3; 
  __int64 v4; 
  __int64 v5; 
  DvarValue v6; 
  __int64 v7; 
  unsigned int Checksum; 
  __int64 v9; 
  DvarLimits v10; 
  DvarValue v11; 

  Dvar_DevGetUnobfuscatedName((const char *)&queryFormat.fmt + 3);
  Dvar_DevGetObfuscatedName((const char *)&queryFormat.fmt + 3);
  v0 = NtCurrentTeb()->Reserved1[11];
  isDvarSystemActive = 1;
  *(_DWORD *)(v0[tls_index] + 1052i64) = -1;
  Dvar_AddCommands();
  memset_0(dvarHashTable, 0xFFFF, sizeof(dvarHashTable));
  v1 = dvarPool;
  memset_0(dvarPool, 0, sizeof(dvarPool));
  v2 = 12000i64;
  v3 = sortedDvars;
  v4 = 12000i64;
  do
  {
    *v3++ = v1++;
    --v4;
  }
  while ( v4 );
  do
  {
    I_irand(0, 11999);
    I_irand(0, 11999);
    --v2;
  }
  while ( v2 );
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 5124, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tCannot register permanent dvars from other threads", "Sys_IsMainThread()") )
    __debugbreak();
  v5 = 8i64 * tls_index;
  v11.integer = 1;
  v6 = v11;
  v7 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v5);
  v10 = 0ui64;
  ++*(_DWORD *)(v7 + 1056);
  v10 = 0ui64;
  v11 = v6;
  Checksum = Dvar_GenerateChecksum("MTOQLKRRSN");
  s_writeChangeToLog = Dvar_RegisterVariant("MTOQLKRRSN", Checksum, 0, 0, &v11, &v10, "Dev-only flag to enable/disable writing every dvar change to the log");
  if ( !*(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v5) + 1056i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 5131, ASSERT_TYPE_ASSERT, "(s_allowPermanentDvars)", "%s\n\tEnd() call with missing Begin()", "s_allowPermanentDvars") )
    __debugbreak();
  v9 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  --*(_DWORD *)(v9 + 1056);
}

/*
==============
Dvar_InitNew
==============
*/
void Dvar_InitNew(dvar_t *dvar, const char *dvarName, unsigned int checksum, unsigned __int8 type, unsigned int flags, DvarValue *value, DvarLimits *domain, DvarLevel level, const char *description)
{
  DvarValue v13; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  DvarLimits v25; 

  memset_0(dvar, 0, sizeof(dvar_t));
  dvar->level[0] = level;
  dvar->checksum = checksum;
  dvar->type = type;
  dvar->flags = flags;
  if ( (flags & 0x100) != 0 )
  {
    if ( *dvarName )
      dvarName = SL_AllocString_Copy(dvarName);
    else
      dvarName = (char *)&queryFormat.fmt + 3;
  }
  dvar->name = dvarName;
  switch ( type )
  {
    case 2u:
      v23 = value->value;
      v24 = value->vector.v[1];
      dvar->current.value = value->value;
      dvar->current.vector.v[1] = v24;
      dvar->latched.value = v23;
      dvar->latched.vector.v[1] = v24;
      dvar->reset.value = v23;
      dvar->reset.vector.v[1] = v24;
      goto LABEL_15;
    case 3u:
      goto LABEL_13;
    case 4u:
      v16 = value->value;
      v17 = value->vector.v[1];
      v18 = value->vector.v[2];
      v19 = value->vector.v[3];
      dvar->current.value = value->value;
      dvar->current.vector.v[1] = v17;
      dvar->current.vector.v[2] = v18;
      dvar->current.vector.v[3] = v19;
      dvar->latched.value = v16;
      dvar->latched.vector.v[1] = v17;
      dvar->latched.vector.v[2] = v18;
      dvar->latched.vector.v[3] = v19;
      dvar->reset.value = v16;
      dvar->reset.vector.v[1] = v17;
      dvar->reset.vector.v[2] = v18;
      dvar->reset.vector.v[3] = v19;
      goto LABEL_15;
    case 9u:
      Dvar_CopyString(value->string, &dvar->current);
      Dvar_WeakCopyString(dvar->current.string, &dvar->latched);
      Dvar_WeakCopyString(dvar->current.string, &dvar->reset);
      goto LABEL_15;
    case 0xBu:
LABEL_13:
      v20 = value->value;
      v21 = value->vector.v[1];
      v22 = value->vector.v[2];
      dvar->current.value = value->value;
      dvar->current.vector.v[1] = v21;
      dvar->current.vector.v[2] = v22;
      dvar->latched.value = v20;
      dvar->latched.vector.v[1] = v21;
      dvar->latched.vector.v[2] = v22;
      dvar->reset.value = v20;
      dvar->reset.vector.v[1] = v21;
      dvar->reset.vector.v[2] = v22;
      goto LABEL_15;
  }
  v13 = *value;
  _YMM0 = (__m256i)*(_OWORD *)value;
  __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
  *(__m256i *)&dvar->current.enabled = _YMM0;
  dvar->reset = v13;
LABEL_15:
  dvar->modified = 0;
  v25 = *domain;
  dvar->description = description;
  dvar->domain = v25;
}

/*
==============
Dvar_IsSystemActive
==============
*/
_BOOL8 Dvar_IsSystemActive()
{
  return isDvarSystemActive;
}

/*
==============
Dvar_IsValidName
==============
*/
char Dvar_IsValidName(const char *dvarName)
{
  const char *v1; 
  char v2; 

  v1 = dvarName;
  if ( dvarName )
  {
    v2 = *dvarName;
    if ( !*dvarName )
      return 1;
    while ( (unsigned __int8)(v2 - 97) <= 0x19u || (unsigned __int8)(v2 - 65) <= 0x19u || (unsigned __int8)(v2 - 48) <= 9u || v2 == 95 )
    {
      v2 = *++v1;
      if ( !v2 )
        return 1;
    }
  }
  return 0;
}

/*
==============
Dvar_LoadDvars
==============
*/
void Dvar_LoadDvars(MemoryFile *memFile)
{
  int i; 
  __int64 v3; 
  unsigned __int64 v4; 
  dvar_t *MalleableVar; 
  dvar_t *v6; 
  int type; 
  const char *v8; 
  const char *ObfuscatedName; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int8 color[16]; 
  int p; 
  int v14; 
  unsigned int checksum; 
  DvarLimits domain; 
  __int128 v17; 
  DvarValue v18; 
  DvarValue v19; 
  char string[1024]; 
  char inputName[1024]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4877, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &p);
  for ( i = p; p >= 0; i = p )
  {
    if ( i >= 1024 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144175130, 1204i64);
    MemFile_ReadData(memFile, i, inputName);
    if ( (unsigned __int64)i >= 0x400 )
      goto LABEL_37;
    inputName[i] = 0;
    MemFile_ReadData(memFile, 4ui64, &v14);
    v4 = v14;
    if ( v14 < 0 )
      return;
    if ( v14 >= 1024 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144175180, 1205i64);
    MemFile_ReadData(memFile, v4, string);
    if ( v4 >= 0x400 )
    {
LABEL_37:
      j___report_rangecheckfailure(v3);
      __debugbreak();
    }
    string[v4] = 0;
    MemFile_ReadData(memFile, 4ui64, &checksum);
    MalleableVar = Dvar_FindMalleableVar(checksum);
    v6 = MalleableVar;
    if ( MalleableVar )
    {
      type = MalleableVar->type;
      domain = MalleableVar->domain;
      switch ( type )
      {
        case 0:
          color[0] = Dvar_StringToBool(string);
          break;
        case 1:
          *(float *)color = Dvar_StringToFloat(string);
          break;
        case 2:
          *(float *)color = 0.0;
          *(float *)&color[4] = 0.0;
          j_sscanf(string, "%g %g", color, &color[4]);
          break;
        case 3:
        case 11:
          v8 = "%g %g %g";
          if ( string[0] == 40 )
            v8 = "( %g, %g, %g )";
          *(float *)color = 0.0;
          *(float *)&color[4] = 0.0;
          *(float *)&color[8] = 0.0;
          j_sscanf(string, v8, color, &color[4], &color[8]);
          break;
        case 4:
          *(_OWORD *)color = 0i64;
          j_sscanf(string, "%g %g %g %g", color, &color[4], &color[8], &color[12]);
          break;
        case 5:
          *(_DWORD *)color = Dvar_StringToInt(string);
          break;
        case 6:
          *(_QWORD *)color = Dvar_StringToInt64(string);
          break;
        case 7:
          *(_QWORD *)color = I_atoui64(string);
          break;
        case 8:
          *(_DWORD *)color = Dvar_StringToEnum(&domain, string);
          break;
        case 9:
          *(_QWORD *)color = string;
          break;
        case 10:
          Dvar_StringToColor(string, color);
          break;
        default:
          LODWORD(v11) = type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1538, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v11) )
            __debugbreak();
          *(_DWORD *)color = 0;
          break;
      }
      domain = *(DvarLimits *)color;
      Dvar_SetVariant(v6, (DvarValue *)&domain, DVAR_SOURCE_INTERNAL);
    }
    else
    {
      ObfuscatedName = Dvar_DevGetObfuscatedName(inputName);
      if ( !ObfuscatedName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3916, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
        __debugbreak();
      v18.integer64 = (__int64)string;
      v17 = 0ui64;
      domain = 0ui64;
      v19 = v18;
      v10 = Dvar_GenerateChecksum(ObfuscatedName);
      Dvar_RegisterVariant(ObfuscatedName, v10, 9u, 0x100u, &v19, &domain, "External Dvar");
    }
    MemFile_ReadData(memFile, 4ui64, &p);
  }
}

/*
==============
Dvar_MakeExplicitType
==============
*/
void Dvar_MakeExplicitType(dvar_t *dvar, const char *dvarName, unsigned __int8 type, unsigned int flags, DvarValue *resetValue, DvarLimits *domain)
{
  unsigned __int8 v9; 
  DvarLimits v10; 
  DvarValue v11; 
  const char *string; 
  const char *v13; 
  DvarValue v14; 
  DvarValue v15; 
  DvarValue *v16; 
  const char *integer64; 
  char v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  DvarValue v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int8 color[16]; 
  DvarValue v28; 
  DvarLimits domaina; 
  DvarValue v30; 

  v9 = dvar->type;
  if ( v9 != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3118, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_STRING ) )", "( dvar->type ) = %i", v9) )
    __debugbreak();
  dvar->type = type;
  v10 = *domain;
  dvar->domain = *domain;
  if ( (flags & 0x2000) != 0 )
  {
    v11 = *resetValue;
  }
  else
  {
    string = dvar->current.string;
    domaina = v10;
    if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1487, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
      __debugbreak();
    switch ( type )
    {
      case 0u:
        color[0] = Dvar_StringToBool(string);
        break;
      case 1u:
        *(float *)color = Dvar_StringToFloat(string);
        break;
      case 2u:
        if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1408, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
          __debugbreak();
        *(float *)color = 0.0;
        *(float *)&color[4] = 0.0;
        j_sscanf(string, "%g %g", color, &color[4]);
        break;
      case 3u:
      case 0xBu:
        if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1417, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
          __debugbreak();
        *(float *)color = 0.0;
        *(float *)&color[4] = 0.0;
        *(float *)&color[8] = 0.0;
        v13 = "%g %g %g";
        if ( *string == 40 )
          v13 = "( %g, %g, %g )";
        j_sscanf(string, v13, color, &color[4], &color[8]);
        break;
      case 4u:
        if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1429, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
          __debugbreak();
        *(_OWORD *)color = 0i64;
        j_sscanf(string, "%g %g %g %g", color, &color[4], &color[8], &color[12]);
        break;
      case 5u:
        *(_DWORD *)color = Dvar_StringToInt(string);
        break;
      case 6u:
        *(_QWORD *)color = Dvar_StringToInt64(string);
        break;
      case 7u:
        if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1394, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
          __debugbreak();
        *(_QWORD *)color = I_atoui64(string);
        break;
      case 8u:
        *(_DWORD *)color = Dvar_StringToEnum(&domaina, string);
        break;
      case 9u:
        *(_QWORD *)color = string;
        break;
      case 0xAu:
        Dvar_StringToColor(string, color);
        break;
      default:
        LODWORD(v26) = type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1538, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v26) )
          __debugbreak();
        *(_DWORD *)color = 0;
        break;
    }
    v14 = *(DvarValue *)color;
    v15 = *resetValue;
    domaina = *domain;
    *(DvarValue *)color = v15;
    v28 = v14;
    v16 = Dvar_ClampValueToDomain(&v30, type, &v28, (const DvarValue *)color, &domaina);
    type = dvar->type;
    v11 = *v16;
  }
  *(DvarValue *)color = v11;
  integer64 = (const char *)v11.integer64;
  if ( type == 9 && v11.integer64 )
  {
    v18 = 1;
    if ( !*(_BYTE *)v11.integer64 )
    {
      integer64 = (char *)&queryFormat.fmt + 3;
      *(_QWORD *)color = (char *)&queryFormat.fmt + 3;
      goto LABEL_51;
    }
    v19 = SL_AllocString_Copy(v11.string);
    type = dvar->type;
    integer64 = v19;
    *(_QWORD *)color = v19;
  }
  else
  {
    v18 = 0;
  }
  if ( type != 9 )
  {
    v20 = dvar->current.string;
    if ( v20 )
    {
      if ( v20 != dvar->latched.string && v20 != dvar->reset.string && *v20 )
        SL_AllocString_Free(v20);
    }
  }
LABEL_51:
  v21 = dvar->latched.string;
  dvar->current.integer64 = 0i64;
  if ( v21 && v21 != dvar->reset.string && *v21 )
    SL_AllocString_Free(v21);
  v22 = dvar->reset.string;
  dvar->latched.integer64 = 0i64;
  if ( v22 && v22 != dvar->current.string && *v22 )
    SL_AllocString_Free(v22);
  v23 = *resetValue;
  dvar->reset.integer64 = 0i64;
  v28 = v23;
  Dvar_UpdateResetValue(dvar, &v28);
  v28 = *(DvarValue *)color;
  Dvar_UpdateValue(dvar, &v28);
  v24 = tls_index;
  if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & flags) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3153, ASSERT_TYPE_ASSERT, "(!(flags & ~dvar_allowedModifiedFlags))", (const char *)&queryFormat, "!(flags & ~dvar_allowedModifiedFlags)") )
    __debugbreak();
  v25 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v24);
  *(_DWORD *)(v25 + 1048) |= flags;
  if ( v18 )
  {
    if ( *integer64 )
      SL_AllocString_Free(integer64);
  }
}

/*
==============
Dvar_MakeLatchedValueCurrent
==============
*/
void Dvar_MakeLatchedValueCurrent(const dvar_t *dvar)
{
  DvarValue latched; 

  latched = dvar->latched;
  Dvar_SetVariant((dvar_t *)dvar, &latched, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_OverrideAutoexecSetting
==============
*/
void Dvar_OverrideAutoexecSetting(const dvar_t *dvar)
{
  __int64 v2; 
  __int64 v3; 
  DvarValue current; 
  DvarValue v5; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4527, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( s_isLoadingAutoExecGlobalFlag )
  {
    if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4679, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
      __debugbreak();
    v2 = tls_index;
    if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & 0x8000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4689, ASSERT_TYPE_ASSERT, "( ( !(flags & ~dvar_allowedModifiedFlags) ) )", "( dvar->name ) = %s", dvar->name) )
      __debugbreak();
    v3 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2);
    *(_DWORD *)(v3 + 1048) |= 0x8000u;
    current = dvar->current;
    dvar->flags |= 0x8000u;
    v5 = current;
    Dvar_UpdateResetValue((dvar_t *)dvar, &v5);
  }
}

/*
==============
Dvar_PrintDomain
==============
*/
void Dvar_PrintDomain(const dvar_t *dvar)
{
  char *v1; 
  char outBuffer[1024]; 

  v1 = Dvar_DomainToString_Internal(dvar, outBuffer, 0x400ui64, NULL);
  Com_Printf(16, "  %s\n", v1);
}

/*
==============
Dvar_PrintServerDemoDvars
==============
*/
void Dvar_PrintServerDemoDvars(const dvar_t *dvar, void *userData)
{
  const char *name; 
  const char *UnobfuscatedName; 

  if ( SLOBYTE(dvar->flags) < 0 )
  {
    name = dvar->name;
    ++s_serverDemoCount;
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(name);
    Com_Printf(16, "  %04i. %s\n", (unsigned int)s_serverDemoCount, UnobfuscatedName);
  }
}

/*
==============
Dvar_PrintServerdemoDvars
==============
*/
void Dvar_PrintServerdemoDvars(void)
{
  s_serverDemoCount = 0;
  Com_Printf(16, "List of serverdemo dvars:\n");
  Dvar_ForEach(Dvar_PrintServerDemoDvars, NULL);
}

/*
==============
Dvar_Printf
==============
*/
char Dvar_Printf(const dvar_t *dvar, int channel, const char *fmt, ...)
{
  char dest[4096]; 
  va_list ap; 

  va_start(ap, fmt);
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1991, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  Com_vsprintf_truncate(dest, 0x1000ui64, 0x1000ui64, fmt, ap);
  Com_PrintMessage(channel, dest, 0);
  return 1;
}

/*
==============
Dvar_RegisterBool
==============
*/
const dvar_t *Dvar_RegisterBool(const char *dvarName, bool value, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  DvarLimits v9; 
  DvarValue v10; 

  v9 = 0ui64;
  v10.integer = value;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 0, flags, &v10, &v9, description);
}

/*
==============
Dvar_RegisterColor
==============
*/

const dvar_t *__fastcall Dvar_RegisterColor(const char *dvarName, double r, double g, double b, float a, unsigned int flags, const char *description)
{
  int v21; 
  unsigned int Checksum; 
  DvarValue v27; 
  DvarLimits v28[6]; 

  __asm { vminss  xmm0, xmm1, xmm8 }
  _XMM5 = *(_OWORD *)&b;
  __asm { vmaxss  xmm0, xmm0, xmm9 }
  _XMM4 = *(_OWORD *)&g;
  _XMM10 = 0i64;
  __asm { vroundss xmm2, xmm10, xmm1, 1 }
  v27.enabled = (int)*(float *)&_XMM2;
  __asm
  {
    vminss  xmm0, xmm4, xmm8
    vmaxss  xmm0, xmm0, xmm9
    vroundss xmm1, xmm10, xmm0, 1
  }
  v27.color[1] = (int)*(float *)&_XMM1;
  __asm
  {
    vminss  xmm0, xmm5, xmm8
    vmaxss  xmm0, xmm0, xmm9
    vroundss xmm1, xmm10, xmm0, 1
  }
  _XMM0 = LODWORD(a);
  v21 = (int)*(float *)&_XMM1;
  __asm { vminss  xmm1, xmm0, xmm8 }
  v27.color[2] = v21;
  __asm
  {
    vmaxss  xmm1, xmm1, xmm9
    vroundss xmm0, xmm10, xmm3, 1
  }
  v27.color[3] = (int)*(float *)&_XMM0;
  v28[0] = 0ui64;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 0xAu, flags, &v27, v28, description);
}

/*
==============
Dvar_RegisterCustomDomainCallback
==============
*/
void Dvar_RegisterCustomDomainCallback(const dvar_t *dvar, char *(*callback)(int *))
{
  unsigned int m_entryCount; 
  int v5; 
  __int64 v6; 
  CustomDvarDomainCallbackTable::TableEntry v7; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1816, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1817, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
    __debugbreak();
  if ( dvar->type != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1766, ASSERT_TYPE_ASSERT, "(dvar->type == DVAR_TYPE_STRING)", (const char *)&queryFormat, "dvar->type == DVAR_TYPE_STRING") )
    __debugbreak();
  m_entryCount = s_customDvarDomainCallbackTable.m_entryCount;
  v5 = 0;
  if ( s_customDvarDomainCallbackTable.m_entryCount )
  {
    while ( s_customDvarDomainCallbackTable.m_table[v5].dvarChecksum != dvar->checksum )
    {
      if ( ++v5 >= s_customDvarDomainCallbackTable.m_entryCount )
        goto LABEL_13;
    }
    s_customDvarDomainCallbackTable.m_table[v5].callback = callback;
  }
  else
  {
LABEL_13:
    if ( s_customDvarDomainCallbackTable.m_entryCount >= 0x20 )
    {
      LODWORD(v6) = s_customDvarDomainCallbackTable.m_entryCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1779, ASSERT_TYPE_ASSERT, "(unsigned)( m_entryCount ) < (unsigned)( MAX_CUSTOM_DVAR_DOMAIN_CALLBACKS )", "m_entryCount doesn't index MAX_CUSTOM_DVAR_DOMAIN_CALLBACKS\n\t%i not in [0, %i)", v6, 32) )
        __debugbreak();
      m_entryCount = s_customDvarDomainCallbackTable.m_entryCount;
    }
    v7.dvarChecksum = dvar->checksum;
    v7.callback = callback;
    s_customDvarDomainCallbackTable.m_table[m_entryCount] = v7;
    ++s_customDvarDomainCallbackTable.m_entryCount;
  }
}

/*
==============
Dvar_RegisterEnum
==============
*/
const dvar_t *Dvar_RegisterEnum(const char *dvarName, const char *const *valueList, int defaultIndex, unsigned int flags, const char *description)
{
  int v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  bool v13; 
  unsigned int Checksum; 
  DvarLimits v16; 
  DvarValue v17; 

  if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3954, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
    __debugbreak();
  if ( !valueList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3955, ASSERT_TYPE_ASSERT, "(valueList)", (const char *)&queryFormat, "valueList") )
    __debugbreak();
  v9 = 0;
  v17.integer = defaultIndex;
  v16.integer64.max = (__int64)valueList;
  v16.enumeration.stringCount = 0;
  if ( *valueList )
  {
    v10 = doNotOptimize;
    do
    {
      v11 = v9;
      v12 = -1i64;
      do
        ++v12;
      while ( valueList[v9][v12] );
      ++v9;
      v10 += (unsigned int)v12;
    }
    while ( valueList[v11 + 1] );
    v16.enumeration.stringCount = v9;
    doNotOptimize = v10;
  }
  v13 = defaultIndex == 0;
  if ( defaultIndex >= 0 )
  {
    if ( defaultIndex < v9 )
      goto LABEL_19;
    v13 = defaultIndex == 0;
  }
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3969, ASSERT_TYPE_ASSERT, "( ( defaultIndex >= 0 && defaultIndex < dvarDomain.enumeration.stringCount || defaultIndex == 0 ) )", "( dvarName ) = %s", dvarName) )
    __debugbreak();
LABEL_19:
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 8u, flags, &v17, &v16, description);
}

/*
==============
Dvar_RegisterFloat
==============
*/
const dvar_t *Dvar_RegisterFloat(const char *dvarName, float value, float min, float max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  DvarLimits v9; 
  DvarValue v10; 

  if ( (min > value || value > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3683, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%g not in [%g, %g]", value, min, max) )
    __debugbreak();
  v9.value.devguiStep = 0.0;
  *((float *)&v9.vector + 3) = v10.vector.v[3];
  v9.value.min = min;
  v9.value.max = max;
  v10.value = value;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 1u, flags, &v10, &v9, description);
}

/*
==============
Dvar_RegisterFloat
==============
*/
const dvar_t *Dvar_RegisterFloat(const char *dvarName, float value, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  int v10; 
  int v11; 
  int v12; 
  DvarLimits v13; 
  DvarValue v14; 

  if ( min > value || value > max )
  {
    v12 = (int)max;
    v11 = (int)min;
    v10 = (int)value;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3832, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%i not in [%i, %i]", v10, v11, v12) )
      __debugbreak();
  }
  v13.value.devguiStep = devguistep;
  *((float *)&v13.vector + 3) = v14.vector.v[3];
  v13.value.min = min;
  v13.value.max = max;
  v14.value = value;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 1u, flags, &v14, &v13, description);
}

/*
==============
Dvar_RegisterInt64
==============
*/
const dvar_t *Dvar_RegisterInt64(const char *dvarName, __int64 value, __int64 min, __int64 max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  int v12; 
  int v13; 
  int v14; 
  DvarLimits v15; 
  DvarValue v16; 

  if ( min > value || value > max )
  {
    v14 = max;
    v13 = min;
    v12 = value;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3657, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%i not in [%i, %i]", v12, v13, v14) )
      __debugbreak();
  }
  v16.integer64 = value;
  v15.integer64.min = min;
  v15.integer64.max = max;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 6u, flags, &v16, &v15, description);
}

/*
==============
Dvar_RegisterInt
==============
*/
const dvar_t *Dvar_RegisterInt(const char *dvarName, int value, int min, int max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  DvarLimits v12; 
  DvarValue v13; 

  if ( (min > value || value > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3632, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%i not in [%i, %i]", value, min, max) )
    __debugbreak();
  v13.integer = value;
  v12.integer64.min = __PAIR64__(max, min);
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 5u, flags, &v13, &v12, description);
}

/*
==============
Dvar_RegisterNew
==============
*/
dvar_t *Dvar_RegisterNew(const char *dvarName, unsigned int checksum, unsigned __int8 type, unsigned int flags, DvarValue *value, DvarLimits *domain, DvarLevel level, const char *description)
{
  unsigned __int64 v9; 
  DvarValue v12; 
  int v13; 
  unsigned __int16 v14; 
  __m256i v15; 
  dvar_t *v16; 
  __m256i v17; 
  __m256i v18; 
  unsigned __int16 *v19; 
  __int64 v20; 
  unsigned int v21; 
  char *fmt; 
  __int64 v24; 
  __int64 v25; 
  DvarLevel v26; 
  DvarLimits v27; 
  DvarValue v28; 
  dvar_t v29; 

  v9 = checksum;
  if ( (flags & 0x40) != 0 && !g_canRegisterSavedDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3475, ASSERT_TYPE_ASSERT, "( ( !(flags & (1 << 6)) || g_canRegisterSavedDvars ) )", "( dvarName ) = %s", dvarName) )
    __debugbreak();
  v12 = *value;
  LOBYTE(v26) = level;
  v27 = *domain;
  v28 = v12;
  Dvar_InitNew(&v29, dvarName, v9, type, flags, &v28, &v27, v26, description);
  Sys_LockWrite(&g_dvarCritSect);
  v13 = dvarCount;
  if ( dvarCount >= 12000 )
  {
    Sys_UnlockWrite(&g_dvarCritSect);
    LODWORD(fmt) = 12000;
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144174150, 1203i64, dvarName, fmt);
    v13 = dvarCount;
  }
  v14 = v13;
  if ( v13 < 0 || (unsigned int)v13 > 0xFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v13, "signed", v13) )
      __debugbreak();
    v13 = dvarCount;
  }
  v15 = *(__m256i *)&v29.hashNext;
  areDvarsSortedName = 0;
  dvarCount = v13 + 1;
  areDvarsSortedChecksum = 0;
  v16 = sortedDvars[v14];
  *(__m256i *)&v16->name = *(__m256i *)&v29.name;
  v17 = *(__m256i *)(&v29.latched.string + 1);
  *(__m256i *)&v16->hashNext = v15;
  v18 = *(__m256i *)&v29.domain.vector.devguiStep;
  *(__m256i *)(&v16->latched.string + 1) = v17;
  *(__m256i *)&v16->domain.vector.devguiStep = v18;
  v19 = &dvarHashTable[v9 % 0x1979];
  v16->hashNext = *v19;
  v20 = v16 - dvarPool;
  if ( (v20 < 0 || (unsigned __int64)v20 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,__int64>(__int64)", "unsigned", (unsigned __int16)v20, "signed", v16 - dvarPool) )
    __debugbreak();
  if ( (unsigned __int16)v20 >= 0x2EE0u )
  {
    LODWORD(v25) = 12000;
    LODWORD(v24) = (unsigned __int16)v20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3512, ASSERT_TYPE_ASSERT, "(unsigned)( dvarPoolIndex ) < (unsigned)( (6500 + 0 + 5500) )", "dvarPoolIndex doesn't index DVAR_CAP\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  *v19 = v20;
  if ( !v16->BbConstUsageFlags.initialized )
  {
    v21 = v16->flags;
    if ( (v21 & 0x100) == 0 && (v21 & 0x40000) != 0 )
    {
      v16->BbConstUsageFlags.codeValue = *value;
      v16->BbConstUsageFlags.initialized = 1;
    }
  }
  Sys_UnlockWrite(&g_dvarCritSect);
  return v16;
}

/*
==============
Dvar_RegisterString
==============
*/
const dvar_t *Dvar_RegisterString(const char *dvarName, const char *value, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  DvarLimits v10; 
  DvarValue v11; 

  if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3916, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
    __debugbreak();
  if ( !value )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3919, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Dvar_RegisterString null value for '%s'\n", dvarName) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3921, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
      __debugbreak();
  }
  if ( (flags & 0x100) == 0 && !CanKeepStringPointer(value) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3922, ASSERT_TYPE_ASSERT, "( ( (flags & (1 << 8)) || CanKeepStringPointer( value ) ) )", "( dvarName ) = %s", dvarName) )
    __debugbreak();
  v11.integer64 = (__int64)value;
  v10 = 0ui64;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 9u, flags, &v11, &v10, description);
}

/*
==============
Dvar_RegisterStringChecksum
==============
*/
const dvar_t *Dvar_RegisterStringChecksum(const char *dvarName, const char *value, unsigned int flags, const char *description)
{
  int v8; 
  DvarLimits v10; 
  DvarValue v11; 

  if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3935, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
    __debugbreak();
  if ( !value )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3938, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, " Dvar_RegisterStringChecksum null value for '%s'\n", dvarName) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3940, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
      __debugbreak();
  }
  if ( (flags & 0x100) == 0 && !CanKeepStringPointer(value) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3941, ASSERT_TYPE_ASSERT, "( ( (flags & (1 << 8)) || CanKeepStringPointer( value ) ) )", "( dvarName ) = %s", dvarName) )
    __debugbreak();
  v11.integer64 = (__int64)value;
  v10 = 0ui64;
  v8 = atoi(dvarName);
  return Dvar_RegisterVariant(dvarName, v8, 9u, flags, &v11, &v10, description);
}

/*
==============
Dvar_RegisterSuperUserBool
==============
*/
const dvar_t *Dvar_RegisterSuperUserBool(const char *dvarName, bool value, unsigned int flags, const char *description)
{
  const dvar_t *v4; 

  v4 = Dvar_RegisterBool(dvarName, value, flags, description);
  Dvar_DevOverrideRegistrationLevel(v4);
  return v4;
}

/*
==============
Dvar_RegisterSuperUserFloat
==============
*/
const dvar_t *Dvar_RegisterSuperUserFloat(const char *dvarName, float value, float min, float max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  const dvar_t *v8; 
  DvarLimits v10; 
  DvarValue v11; 

  if ( (min > value || value > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3683, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%g not in [%g, %g]", value, min, max) )
    __debugbreak();
  v10.value.devguiStep = 0.0;
  *((float *)&v10.vector + 3) = v11.vector.v[3];
  v10.value.min = min;
  v10.value.max = max;
  v11.value = value;
  Checksum = Dvar_GenerateChecksum(dvarName);
  v8 = Dvar_RegisterVariant(dvarName, Checksum, 1u, flags, &v11, &v10, description);
  Dvar_DevOverrideRegistrationLevel(v8);
  return v8;
}

/*
==============
Dvar_RegisterSuperUserInt
==============
*/
const dvar_t *Dvar_RegisterSuperUserInt(const char *dvarName, int value, int min, int max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  const dvar_t *v11; 
  DvarLimits v13; 
  DvarValue v14; 

  if ( (min > value || value > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3632, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%i not in [%i, %i]", value, min, max) )
    __debugbreak();
  v14.integer = value;
  v13.integer64.min = __PAIR64__(max, min);
  Checksum = Dvar_GenerateChecksum(dvarName);
  v11 = Dvar_RegisterVariant(dvarName, Checksum, 5u, flags, &v14, &v13, description);
  Dvar_DevOverrideRegistrationLevel(v11);
  return v11;
}

/*
==============
Dvar_RegisterSuperUserVec3
==============
*/
const dvar_t *Dvar_RegisterSuperUserVec3(const char *dvarName, float x, float y, float z, float min, float max, unsigned int flags, const char *description)
{
  const dvar_t *v8; 

  v8 = Dvar_RegisterVec3(dvarName, x, y, z, min, max, flags, description);
  Dvar_DevOverrideRegistrationLevel(v8);
  return v8;
}

/*
==============
Dvar_RegisterSuperUserVec3Color
==============
*/
const dvar_t *Dvar_RegisterSuperUserVec3Color(const char *dvarName, float x, float y, float z, float max, unsigned int flags, const char *description)
{
  float v10; 
  DvarValue v12; 
  unsigned int Checksum; 
  const dvar_t *v16; 
  DvarLimits v18; 
  DvarValue v19; 

  if ( max <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3772, ASSERT_TYPE_ASSERT, "(max > 0.0f)", (const char *)&queryFormat, "max > 0.0f") )
    __debugbreak();
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  if ( (x < 0.0 || x > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3773, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( x ) && ( x ) <= ( max )", "x not in [0.0f, max]\n\t%g not in [%g, %g]", x, *(double *)&_XMM11, max) )
    __debugbreak();
  if ( (y < 0.0 || y > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3774, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( y ) && ( y ) <= ( max )", "y not in [0.0f, max]\n\t%g not in [%g, %g]", y, *(double *)&_XMM11, max) )
    __debugbreak();
  if ( (z < 0.0 || z > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3775, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( z ) && ( z ) <= ( max )", "z not in [0.0f, max]\n\t%g not in [%g, %g]", z, *(double *)&_XMM11, max) )
    __debugbreak();
  v10 = v19.vector.v[3];
  v12 = v19;
  v12.value = x;
  _XMM1 = v12;
  __asm
  {
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
  }
  v19 = _XMM1;
  v18.value.min = 0.0;
  v18.value.max = max;
  v18.value.devguiStep = 0.0;
  *((float *)&v18.vector + 3) = v10;
  Checksum = Dvar_GenerateChecksum(dvarName);
  v16 = Dvar_RegisterVariant(dvarName, Checksum, 0xBu, flags, &v19, &v18, description);
  Dvar_DevOverrideRegistrationLevel(v16);
  return v16;
}

/*
==============
Dvar_RegisterUInt64
==============
*/
const dvar_t *Dvar_RegisterUInt64(const char *dvarName, unsigned __int64 value, unsigned __int64 min, unsigned __int64 max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  int v12; 
  int v13; 
  int v14; 
  DvarLimits v15; 
  DvarValue v16; 

  if ( min > value || value > max )
  {
    v14 = max;
    v13 = min;
    v12 = value;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3670, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%i not in [%i, %i]", v12, v13, v14) )
      __debugbreak();
  }
  v16.integer64 = value;
  v15.integer64.min = min;
  v15.integer64.max = max;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 7u, flags, &v16, &v15, description);
}

/*
==============
Dvar_RegisterVariant
==============
*/
dvar_t *Dvar_RegisterVariant(const char *dvarName, unsigned int checksum, unsigned __int8 type, unsigned int flags, DvarValue *value, DvarLimits *domain, const char *description)
{
  __int64 v11; 
  char v12; 
  dvar_t *MalleableVar; 
  __int64 v14; 
  const char *ObfuscatedName; 
  const char *name; 
  __int64 v18; 
  const char *v19; 
  signed __int64 v20; 
  char v21; 
  __int64 v22; 
  char v23; 
  const char *UnobfuscatedName; 
  const char *v25; 
  DvarLevel v26; 
  DvarValue v27; 
  DvarValue v28; 

  if ( (flags & 0x100) == 0 && !CanKeepStringPointer(dvarName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3539, ASSERT_TYPE_ASSERT, "( ( (flags & (1 << 8)) || CanKeepStringPointer( dvarName ) ) )", "( dvarName ) = %s", dvarName) )
    __debugbreak();
  if ( (flags & 0x3800) == 4096 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3540, ASSERT_TYPE_ASSERT, "( ( !(flags & (1 << 12)) || (flags & ((1 << 11) | (1 << 13))) ) )", "( dvarName ) = %s", dvarName) )
    __debugbreak();
  v11 = tls_index;
  if ( (flags & 0x18) != 0 && !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1060i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3548, ASSERT_TYPE_ASSERT, "( ( !(flags & ((1 << 3) | (1 << 4))) || s_allowReplicationFlags ) )", "( dvarName ) = %s", dvarName) )
    __debugbreak();
  v12 = (*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v11) + 1056i64) == 0) + 2;
  MalleableVar = Dvar_FindMalleableVar(checksum);
  if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v11) + 1052i64) & flags) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3568, ASSERT_TYPE_ASSERT, "( ( !(flags & ~dvar_allowedModifiedFlags) ) )", "( dvarName ) = %s", dvarName) )
    __debugbreak();
  v14 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v11);
  *(_DWORD *)(v14 + 1048) |= flags;
  ObfuscatedName = Dvar_DevGetObfuscatedName(dvarName);
  if ( MalleableVar )
  {
    v28 = *(DvarValue *)domain;
    LOBYTE(v26) = v12;
    v27 = *value;
    Dvar_Reregister(MalleableVar, ObfuscatedName, type, flags, &v27, (DvarLimits *)&v28, v26, description);
    if ( (unsigned __int8)(*dvarName - 97) <= 0x19u || (unsigned __int8)(*dvarName - 65) <= 0x19u )
    {
      name = MalleableVar->name;
      v18 = 0x7FFFFFFFi64;
      v19 = Dvar_DevGetObfuscatedName(dvarName);
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v20 = v19 - name;
      do
      {
        v21 = name[v20];
        v22 = v18;
        v23 = *name++;
        --v18;
        if ( !v22 )
          break;
        if ( v21 != v23 )
        {
          UnobfuscatedName = Dvar_DevGetUnobfuscatedName(MalleableVar->name);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3587, ASSERT_TYPE_ASSERT, "(!I_isalpha(dvarName[0]) || !I_strcmp( Dvar_DevGetObfuscatedName( dvarName ), dvar->name ))", "%s\n\tDvar %s appears to have a checksum collision with dvar %s", "!I_isalpha(dvarName[0]) || !I_strcmp( Dvar_DevGetObfuscatedName( dvarName ), dvar->name )", dvarName, UnobfuscatedName) )
            __debugbreak();
          break;
        }
      }
      while ( v21 );
    }
    v25 = Dvar_DevGetObfuscatedName(dvarName);
    Dvar_SetName(MalleableVar, v25);
    return MalleableVar;
  }
  else
  {
    v27 = *(DvarValue *)domain;
    LOBYTE(v26) = v12;
    v28 = *value;
    return Dvar_RegisterNew(ObfuscatedName, checksum, type, flags, &v28, (DvarLimits *)&v27, v26, description);
  }
}

/*
==============
Dvar_RegisterVec2
==============
*/
dvar_t *Dvar_RegisterVec2(const char *dvarName, const vec2_t *value, float min, float max, unsigned int flags, const char *description)
{
  float v6; 
  float v8; 
  float v9; 
  DvarValue v11; 
  unsigned int Checksum; 
  DvarLimits v15; 
  DvarValue v16; 

  v6 = value->v[0];
  v8 = value->v[1];
  if ( (min > value->v[0] || v6 > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3711, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v6, min, max) )
    __debugbreak();
  if ( (min > v8 || v8 > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3712, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v8, min, max) )
    __debugbreak();
  v9 = v16.vector.v[3];
  v15.value.devguiStep = 0.0;
  v11 = v16;
  v11.value = v6;
  _XMM0 = v11;
  __asm { vinsertps xmm0, xmm0, xmm8, 10h }
  v16 = _XMM0;
  v15.value.min = min;
  v15.value.max = max;
  *((float *)&v15.vector + 3) = v9;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 2u, flags, &v16, &v15, description);
}

/*
==============
Dvar_RegisterVec2
==============
*/
dvar_t *Dvar_RegisterVec2(const char *dvarName, const vec2_t *value, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  float v7; 
  float v9; 
  float v10; 
  DvarValue v12; 
  unsigned int Checksum; 
  DvarLimits v16; 
  DvarValue v17; 

  v7 = value->v[0];
  v9 = value->v[1];
  if ( (min > value->v[0] || v7 > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3846, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v7, min, max) )
    __debugbreak();
  if ( (min > v9 || v9 > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3847, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v9, min, max) )
    __debugbreak();
  v10 = v17.vector.v[3];
  v12 = v17;
  v12.value = v7;
  _XMM1 = v12;
  __asm { vinsertps xmm1, xmm1, xmm8, 10h }
  v17 = _XMM1;
  v16.value.min = min;
  v16.value.max = max;
  v16.value.devguiStep = devguistep;
  *((float *)&v16.vector + 3) = v10;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 2u, flags, &v17, &v16, description);
}

/*
==============
Dvar_RegisterVec2
==============
*/
dvar_t *Dvar_RegisterVec2(const char *dvarName, float x, float y, float min, float max, unsigned int flags, const char *description)
{
  float v9; 
  DvarValue v11; 
  unsigned int Checksum; 
  DvarLimits v15; 
  DvarValue v16; 

  if ( (min > x || x > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3711, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", x, min, max) )
    __debugbreak();
  if ( (min > y || y > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3712, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", y, min, max) )
    __debugbreak();
  v9 = v16.vector.v[3];
  v15.value.devguiStep = 0.0;
  v11 = v16;
  v11.value = x;
  _XMM0 = v11;
  __asm { vinsertps xmm0, xmm0, xmm8, 10h }
  v16 = _XMM0;
  v15.value.min = min;
  v15.value.max = max;
  *((float *)&v15.vector + 3) = v9;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 2u, flags, &v16, &v15, description);
}

/*
==============
Dvar_RegisterVec2
==============
*/
dvar_t *Dvar_RegisterVec2(const char *dvarName, float x, float y, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  float v10; 
  DvarValue v12; 
  unsigned int Checksum; 
  DvarLimits v16; 
  DvarValue v17; 

  if ( (min > x || x > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3846, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", x, min, max) )
    __debugbreak();
  if ( (min > y || y > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3847, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", y, min, max) )
    __debugbreak();
  v10 = v17.vector.v[3];
  v16.value.devguiStep = devguistep;
  v12 = v17;
  v12.value = x;
  _XMM0 = v12;
  __asm { vinsertps xmm0, xmm0, xmm8, 10h }
  v17 = _XMM0;
  v16.value.min = min;
  v16.value.max = max;
  *((float *)&v16.vector + 3) = v10;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 2u, flags, &v17, &v16, description);
}

/*
==============
Dvar_RegisterVec3
==============
*/
const dvar_t *Dvar_RegisterVec3(const char *dvarName, const vec3_t *value, float min, float max, unsigned int flags, const char *description)
{
  return Dvar_RegisterVec3(dvarName, value->v[0], value->v[1], value->v[2], min, max, flags, description);
}

/*
==============
Dvar_RegisterVec3
==============
*/
dvar_t *Dvar_RegisterVec3(const char *dvarName, const vec3_t *value, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  float v7; 
  float v9; 
  float v10; 
  float v11; 
  DvarValue v13; 
  unsigned int Checksum; 
  DvarLimits v18; 
  DvarValue v19; 

  v7 = value->v[0];
  v9 = value->v[2];
  v10 = value->v[1];
  if ( (min > value->v[0] || v7 > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3868, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v7, min, max) )
    __debugbreak();
  if ( (min > v10 || v10 > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3869, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v10, min, max) )
    __debugbreak();
  if ( (min > v9 || v9 > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3870, ASSERT_TYPE_ASSERT, "( min ) <= ( z ) && ( z ) <= ( max )", "z not in [min, max]\n\t%g not in [%g, %g]", v9, min, max) )
    __debugbreak();
  v11 = v19.vector.v[3];
  v13 = v19;
  v13.value = v7;
  _XMM1 = v13;
  __asm
  {
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm8, 20h ; ' '
  }
  v19 = _XMM1;
  v18.value.min = min;
  v18.value.max = max;
  v18.value.devguiStep = devguistep;
  *((float *)&v18.vector + 3) = v11;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 3u, flags, &v19, &v18, description);
}

/*
==============
Dvar_RegisterVec3
==============
*/
dvar_t *Dvar_RegisterVec3(const char *dvarName, float x, float y, float z, float min, float max, unsigned int flags, const char *description)
{
  float v10; 
  DvarValue v12; 
  unsigned int Checksum; 
  DvarLimits v17; 
  DvarValue v18; 

  if ( (min > x || x > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3735, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", x, min, max) )
    __debugbreak();
  if ( (min > y || y > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3736, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", y, min, max) )
    __debugbreak();
  if ( (min > z || z > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3737, ASSERT_TYPE_ASSERT, "( min ) <= ( z ) && ( z ) <= ( max )", "z not in [min, max]\n\t%g not in [%g, %g]", z, min, max) )
    __debugbreak();
  v10 = v18.vector.v[3];
  v17.value.devguiStep = 0.0;
  v12 = v18;
  v12.value = x;
  _XMM0 = v12;
  __asm
  {
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
  }
  v18 = _XMM0;
  v17.value.min = min;
  v17.value.max = max;
  *((float *)&v17.vector + 3) = v10;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 3u, flags, &v18, &v17, description);
}

/*
==============
Dvar_RegisterVec3
==============
*/
dvar_t *Dvar_RegisterVec3(const char *dvarName, float x, float y, float z, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  float v11; 
  DvarValue v13; 
  unsigned int Checksum; 
  DvarLimits v18; 
  DvarValue v19; 

  if ( (min > x || x > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3868, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", x, min, max) )
    __debugbreak();
  if ( (min > y || y > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3869, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", y, min, max) )
    __debugbreak();
  if ( (min > z || z > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3870, ASSERT_TYPE_ASSERT, "( min ) <= ( z ) && ( z ) <= ( max )", "z not in [min, max]\n\t%g not in [%g, %g]", z, min, max) )
    __debugbreak();
  v11 = v19.vector.v[3];
  v18.value.devguiStep = devguistep;
  v13 = v19;
  v13.value = x;
  _XMM0 = v13;
  __asm
  {
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
  }
  v19 = _XMM0;
  v18.value.min = min;
  v18.value.max = max;
  *((float *)&v18.vector + 3) = v11;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 3u, flags, &v19, &v18, description);
}

/*
==============
Dvar_RegisterVec3Color
==============
*/
dvar_t *Dvar_RegisterVec3Color(const char *dvarName, float x, float y, float z, float max, unsigned int flags, const char *description)
{
  float v10; 
  DvarValue v12; 
  unsigned int Checksum; 
  DvarLimits v17; 
  DvarValue v18; 

  if ( max <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3772, ASSERT_TYPE_ASSERT, "(max > 0.0f)", (const char *)&queryFormat, "max > 0.0f") )
    __debugbreak();
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  if ( (x < 0.0 || x > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3773, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( x ) && ( x ) <= ( max )", "x not in [0.0f, max]\n\t%g not in [%g, %g]", x, *(double *)&_XMM11, max) )
    __debugbreak();
  if ( (y < 0.0 || y > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3774, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( y ) && ( y ) <= ( max )", "y not in [0.0f, max]\n\t%g not in [%g, %g]", y, *(double *)&_XMM11, max) )
    __debugbreak();
  if ( (z < 0.0 || z > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3775, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( z ) && ( z ) <= ( max )", "z not in [0.0f, max]\n\t%g not in [%g, %g]", z, *(double *)&_XMM11, max) )
    __debugbreak();
  v10 = v18.vector.v[3];
  v12 = v18;
  v12.value = x;
  _XMM1 = v12;
  __asm
  {
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
  }
  v18 = _XMM1;
  v17.value.min = 0.0;
  v17.value.max = max;
  v17.value.devguiStep = 0.0;
  *((float *)&v17.vector + 3) = v10;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 0xBu, flags, &v18, &v17, description);
}

/*
==============
Dvar_RegisterVec4
==============
*/
const dvar_t *Dvar_RegisterVec4(const char *dvarName, const vec4_t *value, float min, float max, unsigned int flags, const char *description)
{
  return Dvar_RegisterVec4(dvarName, value->v[0], value->v[1], value->v[2], value->v[3], min, max, flags, description);
}

/*
==============
Dvar_RegisterVec4
==============
*/
const dvar_t *Dvar_RegisterVec4(const char *dvarName, const vec4_t *value, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  return Dvar_RegisterVec4(dvarName, value->v[0], value->v[1], value->v[2], value->v[3], min, max, devguistep, flags, description);
}

/*
==============
Dvar_RegisterVec4
==============
*/

dvar_t *__fastcall Dvar_RegisterVec4(const char *dvarName, double x, float y, float z, float w, float min, float max, unsigned int flags, const char *description)
{
  float v11; 
  unsigned int Checksum; 
  DvarLimits v17; 
  DvarValue v18; 

  _XMM8 = *(_OWORD *)&x;
  if ( (min > *(float *)&x || *(float *)&x > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3804, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", *(float *)&x, min, max) )
    __debugbreak();
  if ( (min > y || y > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3805, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", y, min, max) )
    __debugbreak();
  if ( (min > z || z > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3806, ASSERT_TYPE_ASSERT, "( min ) <= ( z ) && ( z ) <= ( max )", "z not in [min, max]\n\t%g not in [%g, %g]", z, min, max) )
    __debugbreak();
  if ( (min > w || w > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3807, ASSERT_TYPE_ASSERT, "( min ) <= ( w ) && ( w ) <= ( max )", "w not in [min, max]\n\t%g not in [%g, %g]", w, min, max) )
    __debugbreak();
  v11 = v18.vector.v[3];
  __asm
  {
    vinsertps xmm8, xmm8, xmm10, 10h
    vinsertps xmm8, xmm8, xmm11, 20h ; ' '
    vinsertps xmm8, xmm8, xmm9, 30h ; '0'
  }
  v18 = _XMM8;
  v17.value.min = min;
  v17.value.max = max;
  v17.value.devguiStep = 0.0;
  *((float *)&v17.vector + 3) = v11;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 4u, flags, &v18, &v17, description);
}

/*
==============
Dvar_RegisterVec4
==============
*/

dvar_t *__fastcall Dvar_RegisterVec4(const char *dvarName, double x, float y, float z, float w, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  float v12; 
  unsigned int Checksum; 
  DvarLimits v18; 
  DvarValue v19; 

  _XMM8 = *(_OWORD *)&x;
  if ( (min > *(float *)&x || *(float *)&x > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3891, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", *(float *)&x, min, max) )
    __debugbreak();
  if ( (min > y || y > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3892, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", y, min, max) )
    __debugbreak();
  if ( (min > z || z > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3893, ASSERT_TYPE_ASSERT, "( min ) <= ( z ) && ( z ) <= ( max )", "z not in [min, max]\n\t%g not in [%g, %g]", z, min, max) )
    __debugbreak();
  if ( (min > w || w > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3894, ASSERT_TYPE_ASSERT, "( min ) <= ( w ) && ( w ) <= ( max )", "w not in [min, max]\n\t%g not in [%g, %g]", w, min, max) )
    __debugbreak();
  v12 = v19.vector.v[3];
  __asm
  {
    vinsertps xmm8, xmm8, xmm10, 10h
    vinsertps xmm8, xmm8, xmm11, 20h ; ' '
    vinsertps xmm8, xmm8, xmm9, 30h ; '0'
  }
  v19 = _XMM8;
  v18.value.min = min;
  v18.value.max = max;
  v18.value.devguiStep = devguistep;
  *((float *)&v18.vector + 3) = v12;
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 4u, flags, &v19, &v18, description);
}

/*
==============
Dvar_ReinterpretDvar
==============
*/
void Dvar_ReinterpretDvar(dvar_t *dvar, const char *dvarName, unsigned __int8 type, unsigned int flags, DvarValue *value, DvarLimits *domain)
{
  unsigned int v8; 
  DvarValue v11; 
  unsigned int v12; 
  const char *string; 
  const char *name; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  DvarValue v21; 
  DvarValue dest; 
  DvarValue v23; 

  v8 = dvar->flags;
  if ( (v8 & 0x100) != 0 && (flags & 0x100) == 0 )
  {
    v11 = *value;
    v12 = v8;
    if ( (v8 & 0x8000) != 0 && (flags & 0x40) != 0 && (v8 & 0x2804) == 0 )
    {
      string = dvar->reset.string;
      dest = *(DvarValue *)domain;
      v11 = *Dvar_StringToValue(&v23, type, (const DvarLimits *)&dest, string);
      v12 = dvar->flags;
    }
    if ( (v12 & 0x100) == 0 )
    {
      name = dvar->name;
      dvar->flags = v12 | 0x100;
      if ( *name )
        v15 = SL_AllocString_Copy(name);
      else
        v15 = (char *)&queryFormat.fmt + 3;
      dvar->name = v15;
    }
    if ( dvar->type != 9 )
    {
      dest = dvar->latched;
      v16 = Dvar_ValueToString(dvar, &dest);
      Dvar_CopyString(v16, &dvar->current);
      v17 = dvar->latched.string;
      if ( v17 && v17 != dvar->current.string && v17 != dvar->reset.string && *v17 )
        SL_AllocString_Free(v17);
      v18 = dvar->current.string;
      dvar->latched.integer64 = 0i64;
      Dvar_WeakCopyString(v18, &dvar->latched);
      v19 = dvar->reset.string;
      if ( v19 && v19 != dvar->current.string && v19 != dvar->latched.string && *v19 )
        SL_AllocString_Free(v19);
      dvar->reset.integer64 = 0i64;
      v20 = Dvar_DisplayableResetValue(dvar);
      Dvar_AssignResetStringValue(dvar, &dest, v20);
      dvar->reset.integer64 = dest.integer64;
      dvar->type = 9;
    }
    if ( *dvar->name )
      SL_AllocString_Free(dvar->name);
    v21 = *(DvarValue *)domain;
    dvar->flags &= 0xFFF7FEFF;
    dvar->name = dvarName;
    dest = v21;
    v23 = v11;
    Dvar_MakeExplicitType(dvar, dvarName, type, flags, &v23, (DvarLimits *)&dest);
  }
}

/*
==============
Dvar_ReportDvarConstUsage_Frame
==============
*/
void Dvar_ReportDvarConstUsage_Frame(void)
{
  unsigned __int64 v0; 
  int v1; 
  BbConstUsageFlags *p_BbConstUsageFlags; 
  unsigned __int8 v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  bool v8; 
  DvarValue codeValue; 
  DvarValue v10; 
  DvarValue v11; 
  DvarValue v12; 
  DLogContext context; 
  char buffer[4096]; 

  if ( g_dvarCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  v0 = (unsigned __int64)&g_dvarCritSect & 3;
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_dvarCritSect);
  while ( g_dvarCritSect.writeCount )
    Sys_Sleep(0);
  Com_Printf(16, "==============================================================\n");
  Com_Printf(16, " Dconst Usage Report\n");
  Com_Printf(16, "==============================================================\n");
  Com_Printf(16, " dconst name -- coded value, override value -- game mode\n");
  Com_Printf(16, "--------------------------------------------------------------\n");
  v1 = 0;
  if ( dvarCount > 0 )
  {
    p_BbConstUsageFlags = &dvarPool[0].BbConstUsageFlags;
    do
    {
      if ( p_BbConstUsageFlags->initialized )
      {
        v3 = p_BbConstUsageFlags[-4].codeValue.color[13];
        codeValue = p_BbConstUsageFlags[-3].codeValue;
        v10 = p_BbConstUsageFlags->codeValue;
        if ( !Dvar_ValuesEqual(v3, &v10, &codeValue) )
        {
          v4 = (const char *)*((_QWORD *)&p_BbConstUsageFlags[-5].codeValue.string + 1);
          v11 = p_BbConstUsageFlags->codeValue;
          v5 = Dvar_ValueToString(&dvarPool[(__int64)v1], &v11);
          if ( p_BbConstUsageFlags == (BbConstUsageFlags *)104 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1549, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
            __debugbreak();
          v12 = p_BbConstUsageFlags[-3].codeValue;
          v6 = Dvar_ValueToString((const dvar_t *)(&p_BbConstUsageFlags[-5].codeValue.string + 1), &v12);
          if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
          {
            v7 = "SP";
          }
          else
          {
            v7 = "MP";
            if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
              v7 = "CP";
          }
          if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) )
          {
            if ( DLog_IsActive() )
            {
              v8 = DLog_BeginEvent(&context, "const_dvar_tracking");
              context.autoEndEvent = 1;
              if ( v8 && DLog_String(&context, "dvar", v4, 0) && DLog_String(&context, "code_value", v5, 0) && DLog_String(&context, "override_value", v6, 0) && DLog_String(&context, "game_mode", v7, 0) )
                DLog_RecordContext(&context);
            }
            else
            {
              context.error = DLOG_ERROR_NOT_ACTIVE;
            }
          }
          Com_Printf(16, " %s -- %s, %s -- %s\n", v4, v5, v6, v7);
        }
      }
      ++v1;
      p_BbConstUsageFlags = (BbConstUsageFlags *)((char *)p_BbConstUsageFlags + 128);
    }
    while ( v1 < dvarCount );
    v0 = (unsigned __int64)&g_dvarCritSect & 3;
  }
  Com_Printf(16, "--------------------------------------------------------------\n");
  Com_Printf(16, " End Dconst Usage Report\n");
  Com_Printf(16, "==============================================================\n");
  if ( g_dvarCritSect.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", g_dvarCritSect.readCount, 0i64) )
    __debugbreak();
  if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
}

/*
==============
Dvar_Reregister
==============
*/
void Dvar_Reregister(dvar_t *dvar, const char *dvarName, unsigned __int8 type, unsigned int flags, DvarValue *resetValue, DvarLimits *domain, DvarLevel level, const char *description)
{
  unsigned __int8 v12; 
  unsigned int v13; 
  DvarValue v14; 
  const char *UnobfuscatedName; 
  unsigned __int8 v16; 
  const char *v17; 
  DvarValue v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  unsigned __int8 v22; 
  DvarValue v23; 
  unsigned __int8 v24; 
  __int64 v25; 
  DvarValue reset; 
  DvarValue current; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3226, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3227, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
    __debugbreak();
  v12 = dvar->type;
  if ( v12 != type && (dvar->flags & 0x100) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3228, ASSERT_TYPE_ASSERT, "(dvar->type == type || (dvar->flags & (1 << 8)))", "%s\n\t%s: %i != %i", "dvar->type == type || (dvar->flags & DVAR_EXTERNAL)", dvarName, v12, type) )
    __debugbreak();
  v13 = dvar->flags;
  if ( ((flags ^ v13) & 0x100) != 0 )
  {
    v14 = *resetValue;
    reset = *(DvarValue *)domain;
    current = v14;
    Dvar_ReinterpretDvar(dvar, dvarName, type, flags, &current, (DvarLimits *)&reset);
    v13 = dvar->flags;
  }
  if ( (((unsigned __int8)flags ^ (unsigned __int8)v13) & 0x10) != 0 )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144173EC0, 1201i64, UnobfuscatedName);
    v13 = dvar->flags;
  }
  if ( (v13 & 0x100) != 0 )
  {
    v16 = dvar->type;
    if ( v16 != type )
    {
      if ( v16 != 9 )
      {
        v17 = Dvar_DevGetUnobfuscatedName(dvar->name);
        LODWORD(v25) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3285, ASSERT_TYPE_ASSERT, "(dvar->type == DVAR_TYPE_STRING)", "%s\n\tdvar %s, type %i", "dvar->type == DVAR_TYPE_STRING", v17, v25) )
          __debugbreak();
      }
      v18 = *resetValue;
      current = *(DvarValue *)domain;
      reset = v18;
      Dvar_MakeExplicitType(dvar, dvarName, type, flags, &reset, (DvarLimits *)&current);
    }
  }
  if ( dvar->type != type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3289, ASSERT_TYPE_ASSERT, "( ( dvar->type == type ) )", "( dvarName ) = %s", dvarName) )
    __debugbreak();
  if ( (dvar->flags & 0xC040) == 0 )
  {
    current = *resetValue;
    reset = dvar->reset;
    if ( !Dvar_ValuesEqual(type, &reset, &current) )
    {
      current = *resetValue;
      v19 = Dvar_ValueToString(dvar, &current);
      current = dvar->reset;
      v20 = v19;
      v21 = Dvar_ValueToString(dvar, &current);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3290, ASSERT_TYPE_ASSERT, "((dvar->flags & ((1 << 14)|(1 << 6)|(1 << 15))) || Dvar_ValuesEqual( type, dvar->reset, resetValue ))", "%s\n\tdvar %s, %s != %s", "(dvar->flags & (DVAR_CHANGEABLE_RESET|DVAR_SAVED|DVAR_AUTOEXEC)) || Dvar_ValuesEqual( type, dvar->reset, resetValue )", dvarName, v21, v20) )
        __debugbreak();
    }
  }
  dvar->flags |= flags;
  v22 = dvar->level[0];
  if ( v22 > (unsigned __int8)level )
    v22 = level;
  dvar->level[0] = v22;
  if ( description )
    dvar->description = description;
  if ( !dvar->BbConstUsageFlags.initialized )
  {
    v23 = *resetValue;
    v24 = dvar->type;
    current = dvar->current;
    reset = v23;
    if ( !Dvar_ValuesEqual(v24, &reset, &current) && (dvar->flags & 0x40000) != 0 )
    {
      dvar->BbConstUsageFlags.codeValue = *resetValue;
      dvar->BbConstUsageFlags.initialized = 1;
    }
  }
  if ( (dvar->flags & 2) != 0 )
  {
    current = dvar->latched;
    Dvar_SetVariant(dvar, &current, DVAR_SOURCE_INTERNAL);
  }
}

/*
==============
Dvar_Reset
==============
*/
void Dvar_Reset(const dvar_t *dvar, DvarSetSource setSource)
{
  DvarValue reset; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4707, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  reset = dvar->reset;
  Dvar_SetVariant((dvar_t *)dvar, &reset, setSource);
}

/*
==============
Dvar_ResetDvars
==============
*/
void Dvar_ResetDvars(unsigned int filter, DvarSetSource setSource)
{
  int v4; 
  int v5; 
  dvar_t **v6; 
  dvar_t *v7; 
  volatile int readCount; 
  DvarValue reset; 

  if ( g_dvarCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_dvarCritSect);
  while ( g_dvarCritSect.writeCount )
    Sys_Sleep(0);
  v4 = dvarCount;
  v5 = 0;
  if ( dvarCount > 0 )
  {
    v6 = sortedDvars;
    do
    {
      v7 = *v6;
      if ( (filter & (*v6)->flags) != 0 )
      {
        reset = v7->reset;
        Dvar_SetVariant(v7, &reset, setSource);
        v4 = dvarCount;
      }
      ++v5;
      ++v6;
    }
    while ( v5 < v4 );
  }
  if ( g_dvarCritSect.readCount <= 0 )
  {
    readCount = g_dvarCritSect.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
}

/*
==============
Dvar_ReverseForEach
==============
*/
void Dvar_ReverseForEach(void (*callback)(const dvar_t *, void *), void *userData)
{
  __int64 i; 
  volatile int readCount; 

  if ( g_dvarCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_dvarCritSect);
  while ( g_dvarCritSect.writeCount )
    Sys_Sleep(0);
  if ( !areDvarsSortedChecksum )
    Dvar_SortChecksum();
  for ( i = dvarCount - 1; i >= 0; callback(sortedDvars[i--], userData) )
    ;
  if ( g_dvarCritSect.readCount <= 0 )
  {
    readCount = g_dvarCritSect.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
}

/*
==============
Dvar_SaveDvars
==============
*/
void Dvar_SaveDvars(MemoryFile *memFile, unsigned int filter)
{
  unsigned __int16 *v4; 
  __int64 v5; 
  unsigned __int16 hashNext; 
  dvar_t *v7; 
  const char *name; 
  __int64 v9; 
  const char *v10; 
  __int64 v11; 
  unsigned int checksum; 
  unsigned __int16 *v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  DvarValue v16[4]; 
  int p; 
  int v18; 

  if ( g_dvarCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  v15 = (unsigned __int64)&g_dvarCritSect & 3;
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_dvarCritSect);
  while ( g_dvarCritSect.writeCount )
    Sys_Sleep(0);
  v4 = dvarHashTable;
  v5 = 6521i64;
  v13 = dvarHashTable;
  v14 = 6521i64;
  do
  {
    hashNext = *v4;
    if ( *v4 != 0xFFFF )
    {
      do
      {
        v7 = &dvarPool[(unsigned __int64)hashNext];
        hashNext = v7->hashNext;
        if ( (filter & v7->flags) != 0 )
        {
          if ( !v7->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4834, ASSERT_TYPE_ASSERT, "(var->name)", (const char *)&queryFormat, "var->name") )
            __debugbreak();
          name = v7->name;
          v9 = -1i64;
          do
            ++v9;
          while ( name[v9] );
          if ( (int)v9 >= 1024 )
          {
            Com_PrintError(16, "ERROR: Truncating dvar name '%s' in save game\n", name);
            LODWORD(v9) = 1023;
          }
          p = v9;
          MemFile_WriteData(memFile, 4ui64, &p);
          MemFile_WriteData(memFile, (int)v9, v7->name);
          v16[0] = v7->current;
          v10 = Dvar_ValueToString(v7, v16);
          if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4845, ASSERT_TYPE_ASSERT, "( ( stringValue ) )", "( var->name ) = %s", v7->name) )
            __debugbreak();
          v11 = -1i64;
          do
            ++v11;
          while ( v10[v11] );
          if ( (int)v11 >= 1024 )
          {
            Com_PrintError(16, "ERROR: Truncating dvar value '%s' for dvar '%s' in save game\n", v10, v7->name);
            LODWORD(v11) = 1023;
          }
          v18 = v11;
          MemFile_WriteData(memFile, 4ui64, &v18);
          MemFile_WriteData(memFile, (int)v11, v10);
          checksum = v7->checksum;
          MemFile_WriteData(memFile, 4ui64, &checksum);
        }
      }
      while ( hashNext != 0xFFFF );
      v4 = v13;
      v5 = v14;
    }
    ++v4;
    --v5;
    v13 = v4;
    v14 = v5;
  }
  while ( v5 );
  LODWORD(v13) = -1;
  MemFile_WriteData(memFile, 4ui64, &v13);
  if ( g_dvarCritSect.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", g_dvarCritSect.readCount, 0i64) )
    __debugbreak();
  if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&g_dvarCritSect);
}

/*
==============
Dvar_SetBoolByName
==============
*/
void Dvar_SetBoolByName(const char *dvarName, bool value)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v6; 
  unsigned __int8 type; 
  const char *v8; 
  const char *v9; 
  DvarValue v10; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v6 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3996, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v6->type;
    if ( type && (type != 9 || (v6->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3998, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_BOOL || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", v6->name) )
      __debugbreak();
    if ( v6->type )
    {
      v8 = "0";
      if ( value )
        v8 = "1";
      v10.integer64 = (__int64)v8;
    }
    else
    {
      v10.enabled = value;
    }
    Dvar_SetVariant(v6, &v10, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    v9 = "0";
    if ( value )
      v9 = "1";
    Dvar_RegisterString(dvarName, v9, 0x100u, "External Dvar");
  }
}

/*
==============
Dvar_SetBoolFromSource
==============
*/
void Dvar_SetBoolFromSource(const dvar_t *dvar, bool value, DvarSetSource source)
{
  unsigned __int8 type; 
  const char *v7; 
  DvarValue v8; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3994, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3996, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3998, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_BOOL || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type )
  {
    v7 = "0";
    if ( value )
      v7 = "1";
    v8.integer64 = (__int64)v7;
  }
  else
  {
    v8.enabled = value;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v8, source);
}

/*
==============
Dvar_SetBool_Internal
==============
*/
void Dvar_SetBool_Internal(const dvar_t *dvar, bool value)
{
  unsigned __int8 type; 
  const char *v5; 
  DvarValue v6; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3994, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3996, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3998, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_BOOL || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type )
  {
    v5 = "0";
    if ( value )
      v5 = "1";
    v6.integer64 = (__int64)v5;
  }
  else
  {
    v6.enabled = value;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v6, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetColorByName
==============
*/
void Dvar_SetColorByName(const char *dvarName, float r, float g, float b, float a)
{
  unsigned int Checksum; 
  const dvar_t *MalleableVar; 
  const char *v8; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  if ( MalleableVar )
  {
    Dvar_SetColorFromSource(MalleableVar, r, g, b, a, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    v8 = j_va("%g %g %g %g", r, g, b, a);
    Dvar_RegisterString(dvarName, v8, 0x100u, "External Dvar");
  }
}

/*
==============
Dvar_SetColorFromSource
==============
*/

void __fastcall Dvar_SetColorFromSource(const dvar_t *dvar, double r, double g, double b, float a, DvarSetSource source)
{
  __int128 v6; 
  unsigned __int8 type; 
  int v19; 
  int v24; 
  DvarValue v28; 
  char dest[128]; 
  __int128 v30; 

  _XMM10 = *(_OWORD *)&b;
  _XMM9 = *(_OWORD *)&g;
  _XMM7 = *(_OWORD *)&r;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4218, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4220, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 10 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4222, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_COLOR || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 10 )
  {
    v30 = v6;
    __asm
    {
      vminss  xmm0, xmm7, xmm6
      vmaxss  xmm0, xmm0, xmm7
      vminss  xmm0, xmm9, xmm6
      vmaxss  xmm0, xmm0, xmm7
    }
    _XMM8 = 0i64;
    __asm { vroundss xmm3, xmm8, xmm1, 1 }
    v28.enabled = (int)*(float *)&_XMM3;
    __asm { vroundss xmm1, xmm8, xmm0, 1 }
    v19 = (int)*(float *)&_XMM1;
    __asm
    {
      vminss  xmm0, xmm10, xmm6
      vmaxss  xmm0, xmm0, xmm7
      vroundss xmm1, xmm8, xmm0, 1
    }
    _XMM0 = LODWORD(a);
    v28.color[1] = v19;
    v24 = (int)*(float *)&_XMM1;
    __asm
    {
      vminss  xmm1, xmm0, xmm6
      vmaxss  xmm1, xmm1, xmm7
      vroundss xmm0, xmm8, xmm3, 1
    }
    v28.color[2] = v24;
    v28.color[3] = (int)*(float *)&_XMM0;
  }
  else
  {
    Com_sprintf(dest, 0x80ui64, "%g %g %g %g", *(float *)&r, *(float *)&g, *(float *)&b, a);
    v28.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v28, source);
}

/*
==============
Dvar_SetColor_Internal
==============
*/
void Dvar_SetColor_Internal(const dvar_t *dvar, float r, float g, float b, float a)
{
  Dvar_SetColorFromSource(dvar, r, g, b, a, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetCommandByChecksum
==============
*/
void Dvar_SetCommandByChecksum(unsigned int checksum, const char *string, bool isSuperUser)
{
  const dvar_t *MalleableVar; 
  dvar_t *v7; 
  const char *v8; 
  int v9; 
  DvarLimits v10; 
  DvarValue v11; 

  MalleableVar = Dvar_FindMalleableVar(checksum);
  v7 = (dvar_t *)MalleableVar;
  if ( MalleableVar )
  {
    Dvar_SetFromStringFromSource(MalleableVar, string, DVAR_SOURCE_EXTERNAL);
  }
  else
  {
    v8 = j_va("%d", checksum);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3935, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
      __debugbreak();
    if ( !string )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3938, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, " Dvar_RegisterStringChecksum null value for '%s'\n", v8) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3940, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
        __debugbreak();
    }
    v11.integer64 = (__int64)string;
    v10 = 0ui64;
    v9 = atoi(v8);
    v7 = Dvar_RegisterVariant(v8, v9, 9u, 0x100u, &v11, &v10, "External Dvar (setChk)");
  }
  if ( v7 )
  {
    if ( isSuperUser )
      Dvar_DevOverrideRegistrationLevel(v7);
    Dvar_OverrideAutoexecSetting(v7);
  }
}

/*
==============
Dvar_SetCommandByName
==============
*/
void Dvar_SetCommandByName(const char *dvarName, const char *string, const bool isSuperUser)
{
  unsigned int Checksum; 
  const dvar_t *MalleableVar; 
  dvar_t *v8; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v8 = (dvar_t *)MalleableVar;
  if ( MalleableVar )
  {
    Dvar_SetFromStringFromSource(MalleableVar, string, DVAR_SOURCE_EXTERNAL);
    Dvar_SetName(v8, dvarName);
  }
  else
  {
    v8 = (dvar_t *)Dvar_RegisterString(dvarName, string, 0x100u, "External Dvar");
  }
  if ( v8 )
  {
    if ( isSuperUser )
      Dvar_DevOverrideRegistrationLevel(v8);
    Dvar_OverrideAutoexecSetting(v8);
  }
}

/*
==============
Dvar_SetFlags
==============
*/
void Dvar_SetFlags(const dvar_t *dvar, unsigned int flags)
{
  dvar->flags = flags;
}

/*
==============
Dvar_SetFloatByName
==============
*/
void Dvar_SetFloatByName(const char *dvarName, float value)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v5; 
  unsigned __int8 type; 
  const char *v7; 
  DvarValue v8; 
  char dest[32]; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v5 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4091, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v5->type;
    if ( type != 1 && (type != 9 || (v5->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4093, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", v5->name) )
      __debugbreak();
    if ( v5->type == 1 )
    {
      v8.value = value;
    }
    else
    {
      Com_sprintf(dest, 0x20ui64, "%g", value);
      v8.integer64 = (__int64)dest;
    }
    Dvar_SetVariant(v5, &v8, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    v7 = j_va("%g", value);
    Dvar_RegisterString(dvarName, v7, 0x100u, "External Dvar");
  }
}

/*
==============
Dvar_SetFloatFromSource
==============
*/
void Dvar_SetFloatFromSource(const dvar_t *dvar, float value, DvarSetSource source)
{
  unsigned __int8 type; 
  DvarValue v6; 
  char dest[32]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4089, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4091, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 1 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4093, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 1 )
  {
    v6.value = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%g", value);
    v6.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v6, source);
}

/*
==============
Dvar_SetFloat_Internal
==============
*/
void Dvar_SetFloat_Internal(const dvar_t *dvar, float value)
{
  unsigned __int8 type; 
  DvarValue v4; 
  char dest[32]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4089, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4091, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 1 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4093, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 1 )
  {
    v4.value = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%g", value);
    v4.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v4, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetFromString
==============
*/
void Dvar_SetFromString(const dvar_t *dvar, const char *string)
{
  Dvar_SetFromStringFromSource(dvar, string, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetFromStringByChecksumFromSource
==============
*/
const dvar_t *Dvar_SetFromStringByChecksumFromSource(const char *dvarName, const char *string, DvarSetSource source)
{
  int v6; 
  const dvar_t *MalleableVar; 
  const dvar_t *v8; 

  v6 = atoi(dvarName);
  MalleableVar = Dvar_FindMalleableVar(v6);
  v8 = MalleableVar;
  if ( !MalleableVar )
    return Dvar_RegisterString(dvarName, string, 0x100u, "External Dvar");
  Dvar_SetFromStringFromSource(MalleableVar, string, source);
  return v8;
}

/*
==============
Dvar_SetFromStringByNameFromScript
==============
*/
const dvar_t *Dvar_SetFromStringByNameFromScript(ScriptInstanceType instanceType, const char *dvarName, const char *string)
{
  const char *UnobfuscatedName; 
  unsigned int Checksum; 
  const dvar_t *MalleableVar; 
  const dvar_t *v8; 

  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1056i64) )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvarName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4473, ASSERT_TYPE_ASSERT, "(!s_allowPermanentDvars)", "%s\n\tShould not register permanent script dvars (%s)", "!s_allowPermanentDvars", UnobfuscatedName) )
      __debugbreak();
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v8 = MalleableVar;
  if ( !MalleableVar )
    return Dvar_RegisterString(dvarName, string, 0x80100u, "External Dvar (Script)");
  Dvar_SetFromStringFromSource(MalleableVar, string, DVAR_SOURCE_SCRIPT);
  return v8;
}

/*
==============
Dvar_SetFromStringByNameFromSource
==============
*/
const dvar_t *Dvar_SetFromStringByNameFromSource(const char *dvarName, const char *string, DvarSetSource source)
{
  unsigned int Checksum; 
  const dvar_t *MalleableVar; 
  const dvar_t *v8; 

  if ( source == DVAR_SOURCE_SCRIPT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4499, ASSERT_TYPE_ASSERT, "(source != DVAR_SOURCE_SCRIPT)", "%s\n\tUse Dvar_SetFromStringByNameFromScript", "source != DVAR_SOURCE_SCRIPT") )
    __debugbreak();
  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v8 = MalleableVar;
  if ( !MalleableVar )
    return Dvar_RegisterString(dvarName, string, 0x100u, "External Dvar");
  Dvar_SetFromStringFromSource(MalleableVar, string, source);
  return v8;
}

/*
==============
Dvar_SetFromStringFromSource
==============
*/
void Dvar_SetFromStringFromSource(const dvar_t *dvar, const char *string, DvarSetSource source)
{
  int type; 
  const char *v7; 
  DvarValue reset; 
  const char *UnobfuscatedName; 
  __int64 v10; 
  unsigned __int8 color[16]; 
  DvarLimits domain; 
  char dest[1024]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4307, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  Core_strcpy(dest, 0x400ui64, string);
  type = dvar->type;
  domain = dvar->domain;
  switch ( type )
  {
    case 0:
      color[0] = Dvar_StringToBool(dest);
      break;
    case 1:
      *(float *)color = Dvar_StringToFloat(dest);
      break;
    case 2:
      *(float *)color = 0.0;
      *(float *)&color[4] = 0.0;
      j_sscanf(dest, "%g %g", color, &color[4]);
      break;
    case 3:
    case 11:
      v7 = "%g %g %g";
      if ( dest[0] == 40 )
        v7 = "( %g, %g, %g )";
      *(float *)color = 0.0;
      *(float *)&color[4] = 0.0;
      *(float *)&color[8] = 0.0;
      j_sscanf(dest, v7, color, &color[4], &color[8]);
      break;
    case 4:
      *(_OWORD *)color = 0i64;
      j_sscanf(dest, "%g %g %g %g", color, &color[4], &color[8], &color[12]);
      break;
    case 5:
      *(_DWORD *)color = Dvar_StringToInt(dest);
      break;
    case 6:
      *(_QWORD *)color = Dvar_StringToInt64(dest);
      break;
    case 7:
      *(_QWORD *)color = I_atoui64(dest);
      break;
    case 8:
      *(_DWORD *)color = Dvar_StringToEnum(&domain, dest);
      break;
    case 9:
      *(_QWORD *)color = dest;
      break;
    case 10:
      Dvar_StringToColor(dest, color);
      break;
    default:
      LODWORD(v10) = type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1538, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v10) )
        __debugbreak();
      *(_DWORD *)color = 0;
      break;
  }
  reset = *(DvarValue *)color;
  if ( dvar->type == 8 && *(_DWORD *)color == -1337 )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    if ( Dvar_Printf(dvar, 16, "'%s' is not a valid value for dvar '%s'\n", dest, UnobfuscatedName) )
      Dvar_PrintDomain(dvar);
    reset = dvar->reset;
  }
  domain = (DvarLimits)reset;
  Dvar_SetVariant((dvar_t *)dvar, (DvarValue *)&domain, source);
}

/*
==============
Dvar_SetInAutoExec
==============
*/
void Dvar_SetInAutoExec(bool inAutoExec)
{
  s_isLoadingAutoExecGlobalFlag = inAutoExec;
}

/*
==============
Dvar_SetInt64ByName
==============
*/
void Dvar_SetInt64ByName(const char *dvarName, __int64 value)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v6; 
  unsigned __int8 type; 
  unsigned int v8; 
  DvarValue v9; 
  DvarValue dest[2]; 
  char v11[32]; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v6 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4041, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v6->type;
    if ( type != 6 && (type != 9 || (v6->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4043, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_INT64 || ( dvar->type == DVAR_TYPE_STRING && ( dvar->flags & (1 << 8) ) ) ) )", "( dvar->name ) = %s", v6->name) )
      __debugbreak();
    if ( v6->type == 6 )
    {
      v9.integer64 = value;
    }
    else
    {
      Com_sprintf((char *)&dest[0].enabled, 0x20ui64, "%lli", value);
      v9.integer64 = (__int64)dest;
    }
    Dvar_SetVariant(v6, &v9, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    Com_sprintf(v11, 0x20ui64, "%lli", value);
    if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3916, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
      __debugbreak();
    dest[0].integer64 = (__int64)v11;
    v9 = 0ui64;
    v8 = Dvar_GenerateChecksum(dvarName);
    Dvar_RegisterVariant(dvarName, v8, 9u, 0x100u, dest, (DvarLimits *)&v9, "External Dvar");
  }
}

/*
==============
Dvar_SetInt64FromSource
==============
*/
void Dvar_SetInt64FromSource(const dvar_t *dvar, __int64 value, DvarSetSource source)
{
  unsigned __int8 type; 
  DvarValue v7; 
  char dest[32]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4039, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4041, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 6 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4043, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_INT64 || ( dvar->type == DVAR_TYPE_STRING && ( dvar->flags & (1 << 8) ) ) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 6 )
  {
    v7.integer64 = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%lli", value);
    v7.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v7, source);
}

/*
==============
Dvar_SetInt64_Internal
==============
*/
void Dvar_SetInt64_Internal(const dvar_t *dvar, __int64 value)
{
  unsigned __int8 type; 
  DvarValue v5; 
  char dest[32]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4039, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4041, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 6 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4043, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_INT64 || ( dvar->type == DVAR_TYPE_STRING && ( dvar->flags & (1 << 8) ) ) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 6 )
  {
    v5.integer64 = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%lli", value);
    v5.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v5, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetIntByName
==============
*/
void Dvar_SetIntByName(const char *dvarName, int value)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v6; 
  unsigned __int8 type; 
  unsigned __int8 v8; 
  unsigned int v9; 
  DvarValue v10; 
  DvarValue dest[2]; 
  char v12[32]; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v6 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4016, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v6->type;
    if ( type != 5 && type != 8 && (type != 9 || (v6->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4018, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_INT || dvar->type == DVAR_TYPE_ENUM || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", v6->name) )
      __debugbreak();
    v8 = v6->type;
    if ( v8 == 5 || v8 == 8 )
    {
      v10.integer = value;
    }
    else
    {
      Com_sprintf((char *)&dest[0].enabled, 0x20ui64, "%i", (unsigned int)value);
      v10.integer64 = (__int64)dest;
    }
    Dvar_SetVariant(v6, &v10, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    Com_sprintf(v12, 0x20ui64, "%i", (unsigned int)value);
    if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3916, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
      __debugbreak();
    dest[0].integer64 = (__int64)v12;
    v10 = 0ui64;
    v9 = Dvar_GenerateChecksum(dvarName);
    Dvar_RegisterVariant(dvarName, v9, 9u, 0x100u, dest, (DvarLimits *)&v10, "External Dvar");
  }
}

/*
==============
Dvar_SetIntFromSource
==============
*/
void Dvar_SetIntFromSource(const dvar_t *dvar, int value, DvarSetSource source)
{
  unsigned __int8 type; 
  unsigned __int8 v7; 
  DvarValue v8; 
  char dest[32]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4014, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4016, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 5 && type != 8 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4018, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_INT || dvar->type == DVAR_TYPE_ENUM || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  v7 = dvar->type;
  if ( v7 == 5 || v7 == 8 )
  {
    v8.integer = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%i", (unsigned int)value);
    v8.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v8, source);
}

/*
==============
Dvar_SetInt_Internal
==============
*/
void Dvar_SetInt_Internal(const dvar_t *dvar, int value)
{
  unsigned __int8 type; 
  unsigned __int8 v5; 
  DvarValue v6; 
  char dest[32]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4014, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4016, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 5 && type != 8 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4018, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_INT || dvar->type == DVAR_TYPE_ENUM || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  v5 = dvar->type;
  if ( v5 == 5 || v5 == 8 )
  {
    v6.integer = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%i", (unsigned int)value);
    v6.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v6, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetLatchedValue
==============
*/
void Dvar_SetLatchedValue(dvar_t *dvar, DvarValue *value)
{
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  const char *string; 
  const char *integer64; 
  bool v9; 
  const char *v10; 

  v3 = dvar->type - 2;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
LABEL_33:
      dvar->latched.integer64 = value->integer64;
      dvar->latched.vector.v[2] = value->vector.v[2];
      return;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      dvar->latched = *value;
      return;
    }
    v6 = v5 - 5;
    if ( v6 )
    {
      if ( v6 != 2 )
      {
        dvar->latched = *value;
        return;
      }
      goto LABEL_33;
    }
    string = dvar->latched.string;
    integer64 = (const char *)value->integer64;
    if ( string != value->string )
    {
      v9 = string && string != dvar->current.string && string != dvar->reset.string;
      if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1085, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      v10 = dvar->current.string;
      if ( !v10 || integer64 != v10 && strcmp(integer64, v10) )
      {
        v10 = dvar->reset.string;
        if ( !v10 || integer64 != v10 && strcmp(integer64, v10) )
        {
          if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1034, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
            __debugbreak();
          if ( *integer64 )
            v10 = SL_AllocString_Copy(integer64);
          else
            v10 = (char *)&queryFormat.fmt + 3;
        }
      }
      dvar->latched.integer64 = (__int64)v10;
      if ( v9 )
      {
        if ( *string )
          SL_AllocString_Free(string);
      }
    }
  }
  else
  {
    dvar->latched.integer64 = value->integer64;
  }
}

/*
==============
Dvar_SetModified
==============
*/
void Dvar_SetModified(const dvar_t *dvar)
{
  if ( dvar )
  {
    dvar->modified = 1;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2435, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
      __debugbreak();
    MEMORY[0x1E] = 1;
  }
}

/*
==============
Dvar_SetName
==============
*/
void Dvar_SetName(dvar_t *dvar, const char *dvarName)
{
  const char *name; 
  char v5; 

  if ( (dvar->flags & 0x100) != 0 )
  {
    name = dvar->name;
    if ( name )
    {
      v5 = *name;
      if ( (unsigned __int8)(*name - 97) > 0x19u && (unsigned __int8)(v5 - 65) > 0x19u )
      {
        if ( v5 )
          SL_AllocString_Free(name);
        if ( *dvarName )
          dvar->name = SL_AllocString_Copy(dvarName);
        else
          dvar->name = (char *)&queryFormat.fmt + 3;
      }
    }
  }
}

/*
==============
Dvar_SetServerThreadCheckEnabled
==============
*/
void Dvar_SetServerThreadCheckEnabled(bool isEnabled)
{
  Com_Printf(16, "Dvar_SetServerThreadCheckEnabled set to %i\n", isEnabled);
  g_checkServerThread = isEnabled;
}

/*
==============
Dvar_SetStringByName
==============
*/
void Dvar_SetStringByName(const char *dvarName, const char *value)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v6; 
  const char *UnobfuscatedName; 
  DvarValue v8; 
  char dest[2032]; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v6 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4190, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    if ( (unsigned __int8)(v6->type - 8) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4192, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_STRING || dvar->type == DVAR_TYPE_ENUM ) )", "( dvar->name ) = %s", v6->name) )
      __debugbreak();
    if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4193, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
      __debugbreak();
    if ( v6->type == 9 )
    {
      Core_strcpy(dest, 0x7E8ui64, value);
      v8.integer64 = (__int64)dest;
      Dvar_SetVariant(v6, &v8, DVAR_SOURCE_INTERNAL);
    }
    else
    {
      v8.integer = Dvar_StringToEnum(&v6->domain, value);
      if ( v8.integer == -1337 )
      {
        UnobfuscatedName = Dvar_DevGetUnobfuscatedName(v6->name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4206, ASSERT_TYPE_ASSERT, "(newValue.integer != (-1337))", "%s\n\t%s doesn't include %s", "newValue.integer != DVAR_INVALID_ENUM_INDEX", UnobfuscatedName, value) )
          __debugbreak();
      }
      Dvar_SetVariant(v6, &v8, DVAR_SOURCE_INTERNAL);
    }
  }
  else
  {
    Dvar_RegisterString(dvarName, value, 0x100u, "External Dvar");
  }
}

/*
==============
Dvar_SetStringFromSource
==============
*/
void Dvar_SetStringFromSource(const dvar_t *dvar, const char *string, DvarSetSource source)
{
  const char *UnobfuscatedName; 
  DvarValue v7; 
  char dest[2032]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4188, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4190, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( (unsigned __int8)(dvar->type - 8) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4192, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_STRING || dvar->type == DVAR_TYPE_ENUM ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4193, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  if ( dvar->type == 9 )
  {
    Core_strcpy(dest, 0x7E8ui64, string);
    v7.integer64 = (__int64)dest;
  }
  else
  {
    v7.integer = Dvar_StringToEnum(&dvar->domain, string);
    if ( v7.integer == -1337 )
    {
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4206, ASSERT_TYPE_ASSERT, "(newValue.integer != (-1337))", "%s\n\t%s doesn't include %s", "newValue.integer != DVAR_INVALID_ENUM_INDEX", UnobfuscatedName, string) )
        __debugbreak();
    }
  }
  Dvar_SetVariant((dvar_t *)dvar, &v7, source);
}

/*
==============
Dvar_SetString_Internal
==============
*/
void Dvar_SetString_Internal(const dvar_t *dvar, const char *value)
{
  const char *UnobfuscatedName; 
  DvarValue v5; 
  char dest[2032]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4188, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4190, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( (unsigned __int8)(dvar->type - 8) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4192, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_STRING || dvar->type == DVAR_TYPE_ENUM ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4193, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  if ( dvar->type == 9 )
  {
    Core_strcpy(dest, 0x7E8ui64, value);
    v5.integer64 = (__int64)dest;
  }
  else
  {
    v5.integer = Dvar_StringToEnum(&dvar->domain, value);
    if ( v5.integer == -1337 )
    {
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4206, ASSERT_TYPE_ASSERT, "(newValue.integer != (-1337))", "%s\n\t%s doesn't include %s", "newValue.integer != DVAR_INVALID_ENUM_INDEX", UnobfuscatedName, value) )
        __debugbreak();
    }
  }
  Dvar_SetVariant((dvar_t *)dvar, &v5, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetUInt64ByName
==============
*/
void Dvar_SetUInt64ByName(const char *dvarName, unsigned __int64 value)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v6; 
  unsigned __int8 type; 
  unsigned int v8; 
  DvarValue v9; 
  DvarValue dest[2]; 
  char v11[32]; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v6 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4066, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v6->type;
    if ( type != 7 && (type != 9 || (v6->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4068, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_UINT64 || ( dvar->type == DVAR_TYPE_STRING && ( dvar->flags & (1 << 8) ) ) ) )", "( dvar->name ) = %s", v6->name) )
      __debugbreak();
    if ( v6->type == 7 )
    {
      v9.integer64 = value;
    }
    else
    {
      Com_sprintf((char *)&dest[0].enabled, 0x20ui64, "%llu", value);
      v9.integer64 = (__int64)dest;
    }
    Dvar_SetVariant(v6, &v9, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    Com_sprintf(v11, 0x20ui64, "%llu", value);
    if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3916, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
      __debugbreak();
    dest[0].integer64 = (__int64)v11;
    v9 = 0ui64;
    v8 = Dvar_GenerateChecksum(dvarName);
    Dvar_RegisterVariant(dvarName, v8, 9u, 0x100u, dest, (DvarLimits *)&v9, "External Dvar");
  }
}

/*
==============
Dvar_SetUInt64FromSource
==============
*/
void Dvar_SetUInt64FromSource(const dvar_t *dvar, unsigned __int64 value, DvarSetSource source)
{
  unsigned __int8 type; 
  DvarValue v7; 
  char dest[32]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4064, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4066, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 7 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4068, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_UINT64 || ( dvar->type == DVAR_TYPE_STRING && ( dvar->flags & (1 << 8) ) ) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 7 )
  {
    v7.integer64 = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%llu", value);
    v7.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v7, source);
}

/*
==============
Dvar_SetUInt64_Internal
==============
*/
void Dvar_SetUInt64_Internal(const dvar_t *dvar, unsigned __int64 value)
{
  unsigned __int8 type; 
  DvarValue v5; 
  char dest[32]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4064, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4066, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 7 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4068, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_UINT64 || ( dvar->type == DVAR_TYPE_STRING && ( dvar->flags & (1 << 8) ) ) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 7 )
  {
    v5.integer64 = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%llu", value);
    v5.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v5, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetVariant
==============
*/
void Dvar_SetVariant(dvar_t *dvar, DvarValue *value, DvarSetSource source)
{
  const char *v6; 
  const char *UnobfuscatedName; 
  DvarValue v8; 
  unsigned __int8 type; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  unsigned int flags; 
  unsigned __int8 v16; 
  const char *v17; 
  unsigned __int8 v18; 
  const char *v19; 
  unsigned __int8 v20; 
  const char *v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  __int64 v29; 
  bool IsMainThread; 
  const char *name; 
  unsigned int v32; 
  const char *v33; 
  const char *v34; 
  unsigned __int8 v35; 
  __int64 integer64; 
  const char *v39; 
  const char *string; 
  bool v41; 
  const char *v42; 
  __int64 v43; 
  const char *v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  char *fmt; 
  __int64 v55; 
  DvarValue v56; 
  DvarLimits domain; 
  DvarValue v58; 
  DvarValue v59; 
  DvarLimits v60; 
  DvarValue reset; 
  DvarValue v62; 
  DvarValue v63; 
  DvarValue current; 
  DvarValue v65; 
  DvarValue v66; 
  DvarValue v67; 
  DvarValue v68; 
  DvarValue latched; 
  DvarValue v70; 
  DvarValue v71; 
  DvarValue v72; 
  DvarValue v73; 
  DvarValue dest; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2138, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2140, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( Com_LogFileOpen() && s_writeChangeToLog->current.enabled && (dvar->flags & 1) == 0 )
  {
    v56 = *value;
    v6 = Dvar_ValueToString(dvar, &v56);
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    Dvar_Printf(dvar, 6, "      dvar set %s %s\n", UnobfuscatedName, v6);
  }
  v8 = *value;
  type = dvar->type;
  domain = dvar->domain;
  v58 = v8;
  if ( Dvar_ValueInDomain(type, &v58, &domain) )
  {
LABEL_19:
    switch ( source )
    {
      case DVAR_SOURCE_SERVERCMD:
        if ( (dvar->flags & 0x18) == 0 )
        {
          v14 = Dvar_DevGetUnobfuscatedName(dvar->name);
          Dvar_Printf(dvar, 16, "%s is not allowed to be set from server command source.\n", v14);
          return;
        }
        break;
      case DVAR_SOURCE_DEVGUI:
        if ( (dvar->flags & 0x20) != 0 )
        {
          v62 = *value;
          Dvar_SetLatchedValue(dvar, &v62);
          return;
        }
        goto LABEL_36;
      case DVAR_SOURCE_INTERNAL:
        goto LABEL_36;
    }
    flags = dvar->flags;
    if ( (flags & 0x2000) != 0 )
    {
      v16 = dvar->type;
      v63 = *value;
      current = dvar->current;
      if ( !Dvar_ValuesEqual(v16, &current, &v63) )
      {
        v17 = Dvar_DevGetUnobfuscatedName(dvar->name);
        Dvar_Printf(dvar, 16, "%s is read only.\n", v17);
      }
      return;
    }
    if ( (flags & 0x800) != 0 )
    {
      v18 = dvar->type;
      v65 = *value;
      v66 = dvar->current;
      if ( !Dvar_ValuesEqual(v18, &v66, &v65) )
      {
        v19 = Dvar_DevGetUnobfuscatedName(dvar->name);
        Dvar_Printf(dvar, 16, "%s is write protected.\n", v19);
      }
      return;
    }
    if ( source != DVAR_SOURCE_UISCRIPT && (flags & 2) != 0 )
    {
      v67 = *value;
      Dvar_SetLatchedValue(dvar, &v67);
      v20 = dvar->type;
      v68 = dvar->current;
      latched = dvar->latched;
      if ( !Dvar_ValuesEqual(v20, &latched, &v68) )
      {
        v21 = Dvar_DevGetUnobfuscatedName(dvar->name);
        Dvar_Printf(dvar, 16, "%s will be changed upon restarting.\n", v21);
      }
      return;
    }
LABEL_36:
    v22 = tls_index;
    v23 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    v24 = dvar->flags;
    if ( (~*(_DWORD *)(v23 + 1052) & v24) != 0 )
    {
      if ( !Sys_IsMainThread() || (dvar->flags & 0x1200) != 0 )
      {
        IsMainThread = Sys_IsMainThread();
        name = dvar->name;
        if ( IsMainThread )
        {
          v32 = dvar->flags;
          v33 = Dvar_DevGetUnobfuscatedName(name);
          LODWORD(fmt) = v32;
          Dvar_Printf(dvar, 16, "Dvar Error: '%s' cannot be changed from the main thread due to its flags (%i).\n", v33, fmt);
        }
        else
        {
          v34 = Dvar_DevGetUnobfuscatedName(name);
          Dvar_Printf(dvar, 16, "Dvar Error: '%s' cannot be changed from the server.\n", v34);
        }
        return;
      }
      SV_WaitServer();
      Com_CheckError();
      if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 0, 1) )
      {
        LODWORD(v55) = g_serverThreadOwnership;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2241, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 0, 1 ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v55) )
          __debugbreak();
      }
      if ( source == DVAR_SOURCE_SCRIPT )
      {
        v25 = Dvar_DevGetUnobfuscatedName(dvar->name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2245, ASSERT_TYPE_ASSERT, "((source != DVAR_SOURCE_SCRIPT))", "%s\n\tdvar %s source %i", "(source != DVAR_SOURCE_SCRIPT)", v25, 2) )
          __debugbreak();
      }
      v26 = Dvar_DevGetUnobfuscatedName(dvar->name);
      Com_PrintWarning(0, "Server dvar '%s' set from main thread.  This causes a hitch and should only be done for development.\n", v26);
      v70 = *value;
      v27 = Dvar_ValueToString(dvar, &v70);
      if ( !SV_Demo_SetDvar(dvar->checksum, v27) )
      {
        v28 = Dvar_DevGetUnobfuscatedName(dvar->name);
        Com_Printf(16, "\"%s\" is read only during demo playback.\n", v28);
        return;
      }
      v29 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v22);
      *(_DWORD *)(v29 + 1048) |= dvar->flags;
    }
    else
    {
      *(_DWORD *)(v23 + 1048) |= v24;
    }
    v35 = dvar->type;
    v71 = *value;
    v72 = dvar->current;
    if ( Dvar_ValuesEqual(v35, &v72, &v71) )
    {
      v73 = dvar->current;
      Dvar_SetLatchedValue(dvar, &v73);
      return;
    }
    if ( dvar->type == 2 )
    {
      v52 = value->value;
      v53 = value->vector.v[1];
      dvar->current.value = value->value;
      dvar->current.vector.v[1] = v53;
      dvar->latched.value = v52;
      dvar->latched.vector.v[1] = v53;
      goto LABEL_87;
    }
    if ( dvar->type != 3 )
    {
      if ( dvar->type == 4 )
      {
        v45 = value->value;
        v46 = value->vector.v[1];
        v47 = value->vector.v[2];
        v48 = value->vector.v[3];
        dvar->current.value = value->value;
        dvar->current.vector.v[1] = v46;
        dvar->current.vector.v[2] = v47;
        dvar->current.vector.v[3] = v48;
        dvar->latched.value = v45;
        dvar->latched.vector.v[1] = v46;
        dvar->latched.vector.v[2] = v47;
        dvar->latched.vector.v[3] = v48;
        goto LABEL_87;
      }
      if ( dvar->type == 9 )
      {
        if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2298, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
          __debugbreak();
        integer64 = value->integer64;
        v39 = (const char *)value->integer64;
        if ( value->integer64 == dvar->current.integer64 && integer64 != dvar->latched.integer64 && integer64 != dvar->reset.integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2300, ASSERT_TYPE_ASSERT, "( ( value.string != dvar->current.string || value.string == dvar->latched.string || value.string == dvar->reset.string ) )", "( dvar->name ) = %s", dvar->name) )
          __debugbreak();
        string = dvar->current.string;
        v41 = string && string != dvar->latched.string && string != dvar->reset.string;
        Dvar_AssignCurrentStringValue(dvar, &dest, v39);
        v42 = dvar->latched.string;
        v43 = dest.integer64;
        dvar->current.integer64 = dest.integer64;
        if ( v42 && v42 != (const char *)v43 && v42 != dvar->reset.string && *v42 )
          SL_AllocString_Free(v42);
        v44 = dvar->current.string;
        dvar->latched.integer64 = 0i64;
        Dvar_WeakCopyString(v44, &dvar->latched);
        if ( v41 && *string )
          SL_AllocString_Free(string);
        goto LABEL_87;
      }
      if ( dvar->type != 11 )
      {
        _YMM0 = (__m256i)*(_OWORD *)value;
        __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
        *(__m256i *)&dvar->current.enabled = _YMM0;
LABEL_87:
        dvar->modified = 1;
        return;
      }
    }
    v49 = value->value;
    v50 = value->vector.v[1];
    v51 = value->vector.v[2];
    dvar->current.value = value->value;
    dvar->current.vector.v[1] = v50;
    dvar->current.vector.v[2] = v51;
    dvar->latched.value = v49;
    dvar->latched.vector.v[1] = v50;
    dvar->latched.vector.v[2] = v51;
    goto LABEL_87;
  }
  v10 = Dvar_DevGetUnobfuscatedName(dvar->name);
  v59 = *value;
  v11 = v10;
  v12 = Dvar_ValueToString(dvar, &v59);
  if ( Dvar_Printf(dvar, 16, "'%s' is not a valid value for dvar '%s'\n", v12, v11) )
    Dvar_PrintDomain(dvar);
  if ( dvar->type == 8 )
  {
    v60 = dvar->domain;
    reset = dvar->reset;
    if ( !Dvar_ValueInDomain(8u, &reset, &v60) )
    {
      v13 = Dvar_DevGetUnobfuscatedName(dvar->name);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2163, ASSERT_TYPE_ASSERT, "( ( Dvar_ValueInDomain( dvar->type, dvar->reset, dvar->domain ) ) )", "( Dvar_DevGetUnobfuscatedName( dvar->name ) ) = %s", v13) )
        __debugbreak();
    }
    *value = dvar->reset;
    goto LABEL_19;
  }
}

/*
==============
Dvar_SetVec2ByName
==============
*/
void Dvar_SetVec2ByName(const char *dvarName, float x, float y)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v6; 
  unsigned __int8 type; 
  const char *v8; 
  DvarValue v9; 
  char dest[64]; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v6 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4116, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v6->type;
    if ( type != 2 && (type != 9 || (v6->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4118, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_2 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", v6->name) )
      __debugbreak();
    if ( v6->type == 2 )
    {
      v9.value = x;
      v9.vector.v[1] = y;
    }
    else
    {
      Com_sprintf(dest, 0x40ui64, "%g %g", x, y);
      v9.integer64 = (__int64)dest;
    }
    Dvar_SetVariant(v6, &v9, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    v8 = j_va("%g %g", x, y);
    Dvar_RegisterString(dvarName, v8, 0x100u, "External Dvar");
  }
}

/*
==============
Dvar_SetVec2FromSource
==============
*/
void Dvar_SetVec2FromSource(const dvar_t *dvar, float x, float y, DvarSetSource source)
{
  unsigned __int8 type; 
  DvarValue v7; 
  char dest[64]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4114, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4116, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 2 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4118, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_2 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 2 )
  {
    v7.value = x;
    v7.vector.v[1] = y;
  }
  else
  {
    Com_sprintf(dest, 0x40ui64, "%g %g", x, y);
    v7.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v7, source);
}

/*
==============
Dvar_SetVec2_Internal
==============
*/
void Dvar_SetVec2_Internal(const dvar_t *dvar, float x, float y)
{
  unsigned __int8 type; 
  DvarValue v5; 
  char dest[64]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4114, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4116, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 2 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4118, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_2 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 2 )
  {
    v5.value = x;
    v5.vector.v[1] = y;
  }
  else
  {
    Com_sprintf(dest, 0x40ui64, "%g %g", x, y);
    v5.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v5, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetVec3ByName
==============
*/
void Dvar_SetVec3ByName(const char *dvarName, float x, float y, float z)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v7; 
  unsigned __int8 type; 
  const char *v9; 
  DvarValue v10; 
  char dest[96]; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v7 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4141, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v7->type;
    if ( ((type - 3) & 0xF7) != 0 && (type != 9 || (v7->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4143, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_3 || dvar->type == DVAR_TYPE_FLOAT_3_COLOR || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", v7->name) )
      __debugbreak();
    if ( ((v7->type - 3) & 0xF7) != 0 )
    {
      Com_sprintf(dest, 0x60ui64, "%g %g %g", x, y, z);
      v10.integer64 = (__int64)dest;
    }
    else
    {
      v10.value = x;
      v10.vector.v[1] = y;
      v10.vector.v[2] = z;
    }
    Dvar_SetVariant(v7, &v10, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    v9 = j_va("%g %g %g", x, y, z);
    Dvar_RegisterString(dvarName, v9, 0x100u, "External Dvar");
  }
}

/*
==============
Dvar_SetVec3FromSource
==============
*/
void Dvar_SetVec3FromSource(const dvar_t *dvar, float x, float y, float z, DvarSetSource source)
{
  unsigned __int8 type; 
  DvarValue v7; 
  char dest[96]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4139, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4141, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( ((type - 3) & 0xF7) != 0 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4143, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_3 || dvar->type == DVAR_TYPE_FLOAT_3_COLOR || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( ((dvar->type - 3) & 0xF7) != 0 )
  {
    Com_sprintf(dest, 0x60ui64, "%g %g %g", x, y, z);
    v7.integer64 = (__int64)dest;
  }
  else
  {
    v7.value = x;
    v7.vector.v[1] = y;
    v7.vector.v[2] = z;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v7, source);
}

/*
==============
Dvar_SetVec3_Internal
==============
*/
void Dvar_SetVec3_Internal(const dvar_t *dvar, float x, float y, float z)
{
  unsigned __int8 type; 
  DvarValue v6; 
  char dest[96]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4139, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4141, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( ((type - 3) & 0xF7) != 0 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4143, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_3 || dvar->type == DVAR_TYPE_FLOAT_3_COLOR || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( ((dvar->type - 3) & 0xF7) != 0 )
  {
    Com_sprintf(dest, 0x60ui64, "%g %g %g", x, y, z);
    v6.integer64 = (__int64)dest;
  }
  else
  {
    v6.value = x;
    v6.vector.v[1] = y;
    v6.vector.v[2] = z;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v6, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetVec4ByName
==============
*/
void Dvar_SetVec4ByName(const char *dvarName, float x, float y, float z, float w)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v8; 
  unsigned __int8 type; 
  const char *v10; 
  DvarValue v11; 
  char dest[128]; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v8 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4166, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v8->type;
    if ( type != 4 && (type != 9 || (v8->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4168, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_4 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", v8->name) )
      __debugbreak();
    if ( v8->type == 4 )
    {
      v11.value = x;
      v11.vector.v[1] = y;
      v11.vector.v[2] = z;
      v11.vector.v[3] = w;
    }
    else
    {
      Com_sprintf(dest, 0x80ui64, "%g %g %g %g", x, y, z, w);
      v11.integer64 = (__int64)dest;
    }
    Dvar_SetVariant(v8, &v11, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    v10 = j_va("%g %g %g %g", x, y, z, w);
    Dvar_RegisterString(dvarName, v10, 0x100u, "External Dvar");
  }
}

/*
==============
Dvar_SetVec4FromSource
==============
*/
void Dvar_SetVec4FromSource(const dvar_t *dvar, float x, float y, float z, float w, DvarSetSource source)
{
  unsigned __int8 type; 
  DvarValue v8; 
  char dest[128]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4164, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4166, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 4 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4168, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_4 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 4 )
  {
    v8.value = x;
    v8.vector.v[1] = y;
    v8.vector.v[2] = z;
    v8.vector.v[3] = w;
  }
  else
  {
    Com_sprintf(dest, 0x80ui64, "%g %g %g %g", x, y, z, w);
    v8.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v8, source);
}

/*
==============
Dvar_SetVec4_Internal
==============
*/
void Dvar_SetVec4_Internal(const dvar_t *dvar, float x, float y, float z, float w)
{
  unsigned __int8 type; 
  DvarValue v7; 
  char dest[128]; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4164, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4166, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 4 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4168, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_4 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 4 )
  {
    v7.value = x;
    v7.vector.v[1] = y;
    v7.vector.v[2] = z;
    v7.vector.v[3] = w;
  }
  else
  {
    Com_sprintf(dest, 0x80ui64, "%g %g %g %g", x, y, z, w);
    v7.integer64 = (__int64)dest;
  }
  Dvar_SetVariant((dvar_t *)dvar, &v7, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_Shutdown
==============
*/
void Dvar_Shutdown(void)
{
  int v0; 
  dvar_t **v1; 
  dvar_t *v2; 
  const char *string; 
  const char *v4; 
  const char *v5; 
  _QWORD *v6; 

  Sys_LockWrite(&g_dvarCritSect);
  Dvar_SortChecksum();
  v0 = 0;
  if ( dvarCount > 0 )
  {
    v1 = sortedDvars;
    do
    {
      v2 = *v1;
      if ( (*v1)->type == 9 )
      {
        string = v2->current.string;
        if ( string && string != v2->latched.string && string != v2->reset.string && *string )
          SL_AllocString_Free(string);
        v4 = v2->reset.string;
        v2->current.integer64 = 0i64;
        if ( v4 && v4 != v2->latched.string && *v4 )
          SL_AllocString_Free(v4);
        v5 = v2->latched.string;
        v2->reset.integer64 = 0i64;
        if ( v5 && v5 != v2->current.string && *v5 )
          SL_AllocString_Free(v5);
        v2->latched.integer64 = 0i64;
      }
      if ( (v2->flags & 0x100) != 0 )
      {
        if ( *v2->name )
          SL_AllocString_Free(v2->name);
        v2->name = NULL;
      }
      ++v0;
      ++v1;
    }
    while ( v0 < dvarCount );
  }
  v6 = NtCurrentTeb()->Reserved1[11];
  dvarCount = 0;
  isDvarSystemActive = 0;
  *(_DWORD *)(v6[tls_index] + 1048i64) = 0;
  memset_0(dvarHashTable, 0xFFFF, sizeof(dvarHashTable));
  Sys_UnlockWrite(&g_dvarCritSect);
}

/*
==============
Dvar_SortByName
==============
*/
void Dvar_SortByName()
{
  if ( ((unsigned __int8)&isSortingDvars & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&isSortingDvars) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&isSortingDvars, 1, 0) )
  {
    while ( isSortingDvars )
      Sys_Sleep(1);
  }
  else
  {
    areDvarsSortedChecksum = 0;
    std::_Sort_unchecked<dvar_t * *,bool (*)(dvar_t const *,dvar_t const *)>(sortedDvars, &sortedDvars[dvarCount], dvarCount, Dvar_CompareNames);
    areDvarsSortedName = 1;
    isSortingDvars = 0;
  }
}

/*
==============
Dvar_SortChecksum
==============
*/
void Dvar_SortChecksum()
{
  if ( ((unsigned __int8)&isSortingDvars & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&isSortingDvars) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&isSortingDvars, 1, 0) )
  {
    while ( isSortingDvars )
      Sys_Sleep(1);
  }
  else
  {
    areDvarsSortedName = 0;
    std::_Sort_unchecked<dvar_t * *,bool (*)(dvar_t const *,dvar_t const *)>(sortedDvars, &sortedDvars[dvarCount], dvarCount, Dvar_CompareHash);
    areDvarsSortedChecksum = 1;
    isSortingDvars = 0;
  }
}

/*
==============
Dvar_StringToBool
==============
*/
bool Dvar_StringToBool(const char *string)
{
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1373, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  return atoi(string) != 0;
}

/*
==============
Dvar_StringToColor
==============
*/
void Dvar_StringToColor(const char *string, unsigned __int8 *color)
{
  int v12; 
  int v17; 
  __int128 v22; 

  v22 = 0i64;
  j_sscanf(string, "%g %g %g %g", &v22, (char *)&v22 + 4, (char *)&v22 + 8, (char *)&v22 + 12);
  _XMM0 = (unsigned int)v22;
  __asm
  {
    vminss  xmm1, xmm0, xmm7
    vmaxss  xmm0, xmm1, xmm6
  }
  _XMM0 = DWORD1(v22);
  __asm
  {
    vminss  xmm1, xmm0, xmm7
    vmaxss  xmm1, xmm1, xmm6
  }
  _XMM8 = 0i64;
  __asm
  {
    vroundss xmm3, xmm8, xmm2, 1
    vroundss xmm0, xmm8, xmm3, 1
  }
  *color = (int)*(float *)&_XMM3;
  v12 = (int)*(float *)&_XMM0;
  _XMM0 = DWORD2(v22);
  __asm
  {
    vminss  xmm1, xmm0, xmm7
    vmaxss  xmm1, xmm1, xmm6
    vroundss xmm0, xmm8, xmm3, 1
  }
  color[1] = v12;
  v17 = (int)*(float *)&_XMM0;
  _XMM0 = HIDWORD(v22);
  __asm
  {
    vminss  xmm1, xmm0, xmm7
    vmaxss  xmm1, xmm1, xmm6
    vroundss xmm0, xmm8, xmm3, 1
  }
  color[2] = v17;
  color[3] = (int)*(float *)&_XMM0;
}

/*
==============
Dvar_StringToEnum
==============
*/
__int64 Dvar_StringToEnum(const DvarLimits *domain, const char *string)
{
  unsigned int v4; 
  int v5; 
  __int64 v6; 
  char v7; 
  int v8; 
  const char *v9; 
  int v10; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  const char *v15; 
  const char *v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 

  if ( !domain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1441, ASSERT_TYPE_ASSERT, "(domain)", (const char *)&queryFormat, "domain") )
    __debugbreak();
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1442, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  v4 = 0;
  v5 = 0;
  if ( domain->enumeration.stringCount <= 0 )
  {
LABEL_11:
    v7 = *string;
    v8 = 0;
    v9 = string;
    if ( *string )
    {
      while ( (unsigned __int8)(v7 - 48) <= 9u )
      {
        ++v9;
        v10 = v7;
        v7 = *v9;
        v8 = v10 + 10 * v8 - 48;
        if ( !*v9 )
        {
          if ( v8 < 0 )
            goto LABEL_18;
          goto LABEL_15;
        }
      }
    }
    else
    {
LABEL_15:
      if ( v8 < domain->enumeration.stringCount )
        return (unsigned int)v8;
LABEL_18:
      v12 = -1i64;
      do
        ++v12;
      while ( string[v12] );
      if ( domain->enumeration.stringCount > 0 )
      {
        v13 = 0i64;
        do
        {
          v14 = v12;
          v15 = *(const char **)(v13 + domain->integer64.max);
          if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v16 = (const char *)(string - v15);
          while ( 1 )
          {
            v17 = (unsigned __int8)v15[(_QWORD)v16];
            v18 = v14;
            v19 = *(unsigned __int8 *)v15++;
            --v14;
            if ( !v18 )
              return v4;
            if ( v17 != v19 )
            {
              v20 = v17 + 32;
              if ( (unsigned int)(v17 - 65) > 0x19 )
                v20 = v17;
              v17 = v20;
              v21 = v19 + 32;
              if ( (unsigned int)(v19 - 65) > 0x19 )
                v21 = v19;
              if ( v17 != v21 )
                break;
            }
            if ( !v17 )
              return v4;
          }
          ++v4;
          v13 += 8i64;
        }
        while ( (signed int)v4 < domain->enumeration.stringCount );
      }
    }
    return 4294965959i64;
  }
  else
  {
    v6 = 0i64;
    while ( I_strnicmp(string, *(const char **)(v6 + domain->integer64.max), 0x7FFFFFFFui64) )
    {
      ++v5;
      v6 += 8i64;
      if ( v5 >= domain->enumeration.stringCount )
        goto LABEL_11;
    }
    return (unsigned int)v5;
  }
}

/*
==============
Dvar_StringToFloat
==============
*/
float Dvar_StringToFloat(const char *string)
{
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1401, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  *(double *)&_XMM0 = atof(string);
  __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
Dvar_StringToInt64
==============
*/
__int64 Dvar_StringToInt64(const char *string)
{
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1387, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  return I_atoi64(string);
}

/*
==============
Dvar_StringToInt
==============
*/
int Dvar_StringToInt(const char *string)
{
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1380, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  return atoi(string);
}

/*
==============
Dvar_StringToValue
==============
*/
DvarValue *Dvar_StringToValue(DvarValue *result, const unsigned __int8 type, const DvarLimits *domain, const char *string)
{
  const char *v8; 
  __int64 v10; 

  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1487, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  switch ( type )
  {
    case 0u:
      result->enabled = Dvar_StringToBool(string);
      break;
    case 1u:
      result->value = Dvar_StringToFloat(string);
      break;
    case 2u:
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1408, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      result->integer = 0;
      result->vector.v[1] = 0.0;
      j_sscanf(string, "%g %g", result, (char *)&result->integer64 + 4);
      break;
    case 3u:
    case 0xBu:
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1417, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      result->integer = 0;
      result->vector.v[1] = 0.0;
      result->vector.v[2] = 0.0;
      v8 = "%g %g %g";
      if ( *string == 40 )
        v8 = "( %g, %g, %g )";
      j_sscanf(string, v8, result);
      break;
    case 4u:
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1429, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      result->integer = 0;
      result->vector.v[1] = 0.0;
      result->vector.v[2] = 0.0;
      result->vector.v[3] = 0.0;
      j_sscanf(string, "%g %g %g %g", result, (char *)&result->integer64 + 4, &result->string + 1, &result->color[12]);
      break;
    case 5u:
      result->integer = Dvar_StringToInt(string);
      break;
    case 6u:
      result->integer64 = Dvar_StringToInt64(string);
      break;
    case 7u:
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1394, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      result->integer64 = I_atoui64(string);
      break;
    case 8u:
      result->integer = Dvar_StringToEnum(domain, string);
      break;
    case 9u:
      result->integer64 = (__int64)string;
      break;
    case 0xAu:
      Dvar_StringToColor(string, (unsigned __int8 *)result);
      break;
    default:
      LODWORD(v10) = type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1538, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v10) )
        __debugbreak();
      result->integer = 0;
      break;
  }
  return result;
}

/*
==============
Dvar_UpdateDevGuiStep
==============
*/
void Dvar_UpdateDevGuiStep(const dvar_t *dvar, float step)
{
  if ( dvar )
  {
    dvar->domain.value.devguiStep = step;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2508, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
      __debugbreak();
    MEMORY[0x60] = step;
  }
}

/*
==============
Dvar_UpdateEnumDomain
==============
*/
void Dvar_UpdateEnumDomain(const dvar_t *dvar, const char **stringTable)
{
  unsigned __int8 type; 
  const char *UnobfuscatedName; 
  int v6; 
  const char **v7; 
  int integer; 
  const char *v9; 
  DvarValue reset; 
  unsigned __int8 v11; 
  __int64 v14; 
  DvarLimits domain; 
  DvarValue v16; 
  DvarValue current; 
  DvarValue v18; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2472, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2474, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( !stringTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2476, ASSERT_TYPE_ASSERT, "( ( stringTable ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  type = dvar->type;
  if ( type != 8 )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2477, ASSERT_TYPE_ASSERT, "(dvar->type == DVAR_TYPE_ENUM)", "%s\n\tdvar %s type %i", "dvar->type == DVAR_TYPE_ENUM", UnobfuscatedName, type) )
      __debugbreak();
  }
  v6 = 0;
  if ( *stringTable )
  {
    v7 = stringTable;
    do
    {
      ++v6;
      ++v7;
    }
    while ( *v7 );
  }
  integer = dvar->reset.integer;
  if ( integer < 0 || integer >= v6 && integer )
  {
    v9 = Dvar_DevGetUnobfuscatedName(dvar->name);
    LODWORD(v14) = integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2487, ASSERT_TYPE_ASSERT, "(dvar->reset.integer >= 0 && (dvar->reset.integer < stringCount || dvar->reset.integer == 0))", "%s\n\tname %s reset %i count %i", "dvar->reset.integer >= 0 && (dvar->reset.integer < stringCount || dvar->reset.integer == 0)", v9, v14, v6) )
      __debugbreak();
  }
  reset = dvar->reset;
  v11 = dvar->type;
  dvar->domain.enumeration.stringCount = v6;
  dvar->domain.integer64.max = (__int64)stringTable;
  domain = dvar->domain;
  current = dvar->current;
  v16 = reset;
  _YMM0 = (__m256i)*(_OWORD *)Dvar_ClampValueToDomain(&v18, v11, &current, &v16, &domain);
  __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
  *(__m256i *)&dvar->current.enabled = _YMM0;
}

/*
==============
Dvar_UpdateResetValue
==============
*/
void Dvar_UpdateResetValue(dvar_t *dvar, DvarValue *value)
{
  const char *integer64; 
  const char *string; 
  bool v6; 
  DvarValue dest; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2840, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  switch ( dvar->type )
  {
    case 2u:
      dvar->reset.integer = value->integer;
      dvar->reset.vector.v[1] = value->vector.v[1];
      break;
    case 3u:
LABEL_21:
      dvar->reset.integer = value->integer;
      dvar->reset.vector.v[1] = value->vector.v[1];
      dvar->reset.vector.v[2] = value->vector.v[2];
      return;
    case 4u:
      dvar->reset.integer = value->integer;
      dvar->reset.vector.v[1] = value->vector.v[1];
      dvar->reset.vector.v[2] = value->vector.v[2];
      dvar->reset.vector.v[3] = value->vector.v[3];
      return;
    case 9u:
      integer64 = (const char *)value->integer64;
      string = dvar->reset.string;
      if ( string != value->string )
      {
        v6 = string && string != dvar->current.string && string != dvar->latched.string;
        Dvar_AssignResetStringValue(dvar, &dest, integer64);
        dvar->reset.integer64 = dest.integer64;
        if ( v6 )
        {
          if ( *string )
            SL_AllocString_Free(string);
        }
      }
      break;
    case 0xBu:
      goto LABEL_21;
    default:
      dvar->reset = *value;
      return;
  }
}

/*
==============
Dvar_UpdateValue
==============
*/
void Dvar_UpdateValue(dvar_t *dvar, DvarValue *value)
{
  const char *integer64; 
  const char *string; 
  bool v8; 
  const char *v9; 
  __int64 v10; 
  const char *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  DvarValue dest; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3064, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  switch ( dvar->type )
  {
    case 2u:
      v19 = value->value;
      v20 = value->vector.v[1];
      dvar->current.value = value->value;
      dvar->current.vector.v[1] = v20;
      dvar->latched.value = v19;
      dvar->latched.vector.v[1] = v20;
      break;
    case 3u:
LABEL_25:
      v16 = value->value;
      v17 = value->vector.v[1];
      v18 = value->vector.v[2];
      dvar->current.value = value->value;
      dvar->current.vector.v[1] = v17;
      dvar->current.vector.v[2] = v18;
      dvar->latched.value = v16;
      dvar->latched.vector.v[1] = v17;
      dvar->latched.vector.v[2] = v18;
      return;
    case 4u:
      v12 = value->value;
      v13 = value->vector.v[1];
      v14 = value->vector.v[2];
      v15 = value->vector.v[3];
      dvar->current.value = value->value;
      dvar->current.vector.v[1] = v13;
      dvar->current.vector.v[2] = v14;
      dvar->current.vector.v[3] = v15;
      dvar->latched.value = v12;
      dvar->latched.vector.v[1] = v13;
      dvar->latched.vector.v[2] = v14;
      dvar->latched.vector.v[3] = v15;
      return;
    case 9u:
      integer64 = (const char *)value->integer64;
      string = dvar->current.string;
      if ( integer64 != string )
      {
        v8 = string && string != dvar->latched.string && string != dvar->reset.string;
        Dvar_AssignCurrentStringValue(dvar, &dest, integer64);
        v9 = dvar->latched.string;
        v10 = dest.integer64;
        dvar->current.integer64 = dest.integer64;
        if ( v9 && v9 != (const char *)v10 && v9 != dvar->reset.string && *v9 )
          SL_AllocString_Free(v9);
        v11 = dvar->current.string;
        dvar->latched.integer64 = 0i64;
        Dvar_WeakCopyString(v11, &dvar->latched);
        if ( v8 )
        {
          if ( *string )
            SL_AllocString_Free(string);
        }
      }
      break;
    case 0xBu:
      goto LABEL_25;
    default:
      _YMM0 = (__m256i)*(_OWORD *)value;
      __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
      *(__m256i *)&dvar->current.enabled = _YMM0;
      return;
  }
}

/*
==============
Dvar_ValidatePermanentDvars
==============
*/
char Dvar_ValidatePermanentDvars()
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v2; 
  unsigned __int8 type; 
  unsigned int userData; 

  Com_Printf(16, "Dvar_ValidatePermanentDvars Starting ....\n");
  userData = 0;
  Dvar_ForEach(Dvar_ValidatePermanentDvars_Callback, &userData);
  Com_Printf(16, "Dvar_ValidatePermanentDvars Ended. Found %i non-permanent dvars\n", userData);
  if ( !userData )
    return 1;
  Checksum = Dvar_GenerateChecksum("LRQQRSOPNL");
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v2 = MalleableVar;
  if ( !MalleableVar )
    return 0;
  type = MalleableVar->type;
  if ( type && (type != 9 || (v2->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2536, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_BOOL || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->type ) = %i", type) )
    __debugbreak();
  if ( v2->type ? Dvar_StringToBool(v2->current.string) : v2->current.enabled )
    return 1;
  else
    return 0;
}

/*
==============
Dvar_ValidatePermanentDvars_Callback
==============
*/
void Dvar_ValidatePermanentDvars_Callback(const dvar_t *dvar, void *userData)
{
  const char *UnobfuscatedName; 

  if ( dvar->level[0] >= 3u )
  {
    ++*(_DWORD *)userData;
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    Com_Printf(16, " '%s'\n", UnobfuscatedName);
  }
}

/*
==============
Dvar_ValueInDomain
==============
*/
bool Dvar_ValueInDomain(unsigned __int8 type, DvarValue *value, DvarLimits *domain)
{
  DvarValue *v3; 
  int stringCount; 
  __int64 min; 
  unsigned __int64 v8; 
  int integer; 
  bool v10; 
  int v11; 
  int v12; 
  float max; 
  int v14; 
  int v15; 
  int v16; 

  v3 = value;
  switch ( type )
  {
    case 0u:
      if ( value->enabled < 2u || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1674, ASSERT_TYPE_ASSERT, "(value.enabled == true || value.enabled == false)", (const char *)&queryFormat, "value.enabled == true || value.enabled == false") )
        return 1;
      __debugbreak();
      return 1;
    case 1u:
      if ( value->value < domain->value.min )
        return 0;
      return value->value <= domain->value.max;
    case 2u:
      v11 = 0;
      while ( v3->value >= domain->value.min && v3->value <= domain->value.max )
      {
        ++v11;
        v3 = (DvarValue *)((char *)v3 + 4);
        if ( v11 >= 2 )
          return 1;
      }
      return 0;
    case 3u:
      v12 = 0;
      while ( v3->value >= domain->value.min && v3->value <= domain->value.max )
      {
        ++v12;
        v3 = (DvarValue *)((char *)v3 + 4);
        if ( v12 >= 3 )
          return 1;
      }
      return 0;
    case 4u:
      v15 = 0;
      while ( v3->value >= domain->value.min && v3->value <= domain->value.max )
      {
        ++v15;
        v3 = (DvarValue *)((char *)v3 + 4);
        if ( v15 >= 4 )
          return 1;
      }
      return 0;
    case 5u:
      stringCount = domain->enumeration.stringCount;
      if ( domain->enumeration.stringCount > domain->integer.max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1678, ASSERT_TYPE_ASSERT, "(domain.integer.min <= domain.integer.max)", (const char *)&queryFormat, "domain.integer.min <= domain.integer.max") )
        __debugbreak();
      if ( v3->integer < stringCount )
        return 0;
      return v3->integer <= domain->integer.max;
    case 6u:
      min = domain->integer64.min;
      if ( domain->integer64.min > domain->integer64.max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1686, ASSERT_TYPE_ASSERT, "(domain.integer64.min <= domain.integer64.max)", (const char *)&queryFormat, "domain.integer64.min <= domain.integer64.max") )
        __debugbreak();
      if ( v3->integer64 < min )
        return 0;
      return v3->integer64 <= domain->integer64.max;
    case 7u:
      v8 = domain->integer64.min;
      if ( domain->integer64.min > (unsigned __int64)domain->integer64.max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1694, ASSERT_TYPE_ASSERT, "(domain.unsignedInt64.min <= domain.unsignedInt64.max)", (const char *)&queryFormat, "domain.unsignedInt64.min <= domain.unsignedInt64.max") )
        __debugbreak();
      if ( v3->integer64 < v8 )
        return 0;
      return v3->integer64 <= (unsigned __int64)domain->integer64.max;
    case 8u:
      integer = value->integer;
      v10 = value->integer == 0;
      if ( value->integer < 0 )
        return v10;
      if ( integer < domain->enumeration.stringCount )
        return 1;
      return integer == 0;
    case 9u:
    case 0xAu:
      return 1;
    case 0xBu:
      if ( domain->value.min != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1718, ASSERT_TYPE_ASSERT, "( ( domain.vector.min == 0.0f ) )", "( domain.vector.min ) = %g", domain->value.min) )
        __debugbreak();
      max = domain->value.max;
      if ( max <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1719, ASSERT_TYPE_ASSERT, "( ( domain.vector.max > 0.0f ) )", "( domain.vector.max ) = %g", max) )
        __debugbreak();
      v14 = 0;
      break;
    default:
      v16 = type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1735, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v16) )
        __debugbreak();
      return 0;
  }
  while ( v3->value >= 0.0 && v3->value <= domain->value.max )
  {
    ++v14;
    v3 = (DvarValue *)((char *)v3 + 4);
    if ( v14 >= 3 )
      return 1;
  }
  return 0;
}

/*
==============
Dvar_ValueToString
==============
*/
const char *Dvar_ValueToString(const dvar_t *dvar, DvarValue *value, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int type; 
  const char *result; 
  int integer; 
  bool v13; 
  __int64 integer64; 

  type = dvar->type;
  switch ( type )
  {
    case 0:
      result = "0";
      if ( value->enabled )
        return "1";
      return result;
    case 1:
      return j_va("%g", value->value);
    case 2:
      return j_va("%g %g", value->value, value->vector.v[1]);
    case 3:
    case 11:
      return j_va("%g %g %g", value->value, value->vector.v[1], value->vector.v[2], a5, a6, a7, a8);
    case 4:
      return j_va("%g %g %g %g", value->value, value->vector.v[1], value->vector.v[2], value->vector.v[3]);
    case 5:
      return j_va("%i", value->unsignedInt);
    case 6:
      return j_va("%lli", value->integer64);
    case 7:
      return j_va("%llu", value->integer64);
    case 8:
      integer = value->integer;
      v13 = value->integer == 0;
      if ( value->integer < 0 )
        goto LABEL_17;
      if ( integer >= dvar->domain.enumeration.stringCount )
      {
        v13 = integer == 0;
LABEL_17:
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1244, ASSERT_TYPE_ASSERT, "( ( value.integer >= 0 && value.integer < dvar->domain.enumeration.stringCount || value.integer == 0 ) )", "( value.integer ) = %i", value->integer) )
          __debugbreak();
      }
      if ( !dvar->domain.enumeration.stringCount )
        return (char *)&queryFormat.fmt + 3;
      return *(const char **)(dvar->domain.integer64.max + 8i64 * value->integer);
    case 9:
      integer64 = value->integer64;
      if ( !value->integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1250, ASSERT_TYPE_ASSERT, "( ( value.string ) )", "( dvar->name ) = %s", dvar->name) )
        __debugbreak();
      return j_va((const char *)&queryFormat, integer64);
    case 10:
      return j_va("%g %g %g %g", (float)((float)value->color[0] * 0.0039215689), (float)((float)value->color[1] * 0.0039215689), (float)((float)value->color[2] * 0.0039215689), (float)((float)value->color[3] * 0.0039215689));
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1255, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", type) )
        __debugbreak();
      return (char *)&queryFormat.fmt + 3;
  }
}

/*
==============
Dvar_ValueToStringBuffer
==============
*/
void Dvar_ValueToStringBuffer(const dvar_t *dvar, DvarValue *value, char *outBuffer, unsigned __int64 outBufferLen)
{
  __int64 unsignedInt; 
  int integer; 
  bool v10; 
  const char *integer64; 
  __int64 v12; 

  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1307, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  if ( !outBufferLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1308, ASSERT_TYPE_ASSERT, "(outBufferLen)", (const char *)&queryFormat, "outBufferLen") )
    __debugbreak();
  switch ( dvar->type )
  {
    case 0u:
      unsignedInt = value->color[0];
      goto LABEL_9;
    case 1u:
      Com_sprintf(outBuffer, outBufferLen, "%g", value->value);
      return;
    case 2u:
      Com_sprintf(outBuffer, outBufferLen, "%g %g", value->value, value->vector.v[1]);
      return;
    case 3u:
    case 0xBu:
      Com_sprintf(outBuffer, outBufferLen, "%g %g %g", value->value, value->vector.v[1], value->vector.v[2]);
      return;
    case 4u:
      Com_sprintf(outBuffer, outBufferLen, "%g %g %g %g", value->value, value->vector.v[1], value->vector.v[2], value->vector.v[3]);
      return;
    case 5u:
      unsignedInt = value->unsignedInt;
LABEL_9:
      Com_sprintf(outBuffer, outBufferLen, "%i", unsignedInt);
      return;
    case 6u:
      Com_sprintf(outBuffer, outBufferLen, "%lli", value->integer64);
      return;
    case 7u:
      Com_sprintf(outBuffer, outBufferLen, "%llu", value->integer64);
      return;
    case 8u:
      integer = value->integer;
      v10 = value->integer == 0;
      if ( value->integer < 0 )
        goto LABEL_22;
      if ( integer >= dvar->domain.enumeration.stringCount )
      {
        v10 = integer == 0;
LABEL_22:
        if ( !v10 )
        {
          LODWORD(v12) = value->integer;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1350, ASSERT_TYPE_ASSERT, "( ( value.integer >= 0 && value.integer < dvar->domain.enumeration.stringCount || value.integer == 0 ) )", "( value.integer ) = %i", v12) )
            __debugbreak();
        }
      }
      if ( dvar->domain.enumeration.stringCount )
        Core_strcpy_truncate(outBuffer, outBufferLen, *(const char **)(dvar->domain.integer64.max + 8i64 * value->integer));
      else
LABEL_33:
        *outBuffer = 0;
      return;
    case 9u:
      integer64 = (const char *)value->integer64;
      if ( !value->integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1358, ASSERT_TYPE_ASSERT, "( ( value.string ) )", "( dvar->name ) = %s", dvar->name) )
        __debugbreak();
      Core_strcpy_truncate(outBuffer, outBufferLen, integer64);
      return;
    case 0xAu:
      Com_sprintf(outBuffer, outBufferLen, "%g %g %g %g", (float)((float)value->color[0] * 0.0039215689), (float)((float)value->color[1] * 0.0039215689), (float)((float)value->color[2] * 0.0039215689), (float)((float)value->color[3] * 0.0039215689));
      return;
    default:
      LODWORD(v12) = dvar->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1364, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v12) )
        __debugbreak();
      goto LABEL_33;
  }
}

/*
==============
Dvar_ValuesEqual
==============
*/
__int64 Dvar_ValuesEqual(unsigned __int8 type, DvarValue *val0, DvarValue *val1)
{
  __int64 result; 
  __int64 integer64; 
  unsigned int v7; 
  unsigned __int8 *v8; 
  __int64 v9; 
  int v10; 
  int v11; 

  switch ( type )
  {
    case 0u:
      result = val0->enabled == val1->enabled;
      break;
    case 1u:
      if ( val1->value != val0->value )
        goto LABEL_6;
      result = 1i64;
      break;
    case 2u:
      if ( val1->value != val0->value || val1->vector.v[1] != val0->vector.v[1] )
        goto LABEL_6;
      result = 1i64;
      break;
    case 3u:
    case 0xBu:
      if ( val1->value != val0->value || val1->vector.v[1] != val0->vector.v[1] || val1->vector.v[2] != val0->vector.v[2] )
        goto LABEL_6;
      result = 1i64;
      break;
    case 4u:
      if ( val1->value == val0->value && val1->vector.v[1] == val0->vector.v[1] && val1->vector.v[2] == val0->vector.v[2] && val1->vector.v[3] == val0->vector.v[3] )
        result = 1i64;
      else
LABEL_6:
        result = 0i64;
      break;
    case 5u:
    case 8u:
    case 0xAu:
      result = val0->integer == val1->integer;
      break;
    case 6u:
    case 7u:
      result = val0->integer64 == val1->integer64;
      break;
    case 9u:
      if ( !val0->integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2055, ASSERT_TYPE_ASSERT, "(val0.string)", (const char *)&queryFormat, "val0.string") )
        __debugbreak();
      integer64 = val1->integer64;
      v7 = 0;
      if ( !val1->integer64 )
      {
        integer64 = 0i64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2056, ASSERT_TYPE_ASSERT, "(val1.string)", (const char *)&queryFormat, "val1.string") )
        {
          __debugbreak();
          integer64 = val1->integer64;
        }
      }
      v8 = (unsigned __int8 *)val0->integer64;
      v9 = integer64 - val0->integer64;
      do
      {
        v10 = v8[v9];
        v11 = *v8 - v10;
        if ( v11 )
          break;
        ++v8;
      }
      while ( v10 );
      LOBYTE(v7) = v11 == 0;
      result = v7;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2061, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", type) )
        __debugbreak();
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
Dvar_VectorDomainToString
==============
*/
void Dvar_VectorDomainToString(int components, DvarLimits *domain, char *outBuffer, unsigned __int64 outBufferLen)
{
  float min; 
  float max; 
  double v6; 
  double v7; 

  min = domain->value.min;
  max = domain->value.max;
  if ( domain->value.min == -3.4028235e38 )
  {
    if ( max == 3.4028235e38 )
      Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any %iD vector", (unsigned int)components);
    else
      Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any %iD vector with components %g or smaller", (unsigned int)components, max);
  }
  else
  {
    v7 = min;
    v6 = min;
    if ( max == 3.4028235e38 )
      Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any %iD vector with components %g or bigger", (unsigned int)components, v7);
    else
      Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any %iD vector with components from %g to %g", (unsigned int)components, v6, max);
  }
}

/*
==============
Dvar_WeakCopyString
==============
*/
void Dvar_WeakCopyString(const char *string, DvarValue *value)
{
  if ( string )
  {
    value->integer64 = (__int64)string;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1041, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
      __debugbreak();
    value->integer64 = 0i64;
  }
}

