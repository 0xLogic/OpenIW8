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
  const char *v15; 
  const char *v16; 
  __int64 v17; 
  const char **v18; 
  const char *v19; 
  unsigned int v21; 
  const dvar_t *MalleableVar; 
  const char *v23; 
  char *v24; 
  char *data_p; 
  int v26; 
  const char *v27; 
  const char **v28; 
  DvarValue v29; 
  char v30[16384]; 

  v4 = filename;
  v28 = dvarnames;
  v5 = dvarnames;
  v27 = filename;
  v6 = numDvars;
  data_p = (char *)buffer;
  if ( numDvars >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 5019, ASSERT_TYPE_ASSERT, "(numDvars < ( sizeof( *array_counter( wasRead ) ) + 0 ))", (const char *)&queryFormat, "numDvars < ARRAY_COUNT( wasRead )") )
    __debugbreak();
  v7 = v6;
  memset_0(v30, 0, v6);
  v8 = 0;
  v26 = 0;
  if ( (_DWORD)v6 )
  {
    v9 = v5;
    v10 = v6;
    do
    {
      v11 = *v9;
      Checksum = Dvar_GenerateChecksum(*v9);
      _RBX = Dvar_FindMalleableVar(Checksum);
      if ( !_RBX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 5027, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tUnable to find dvar '%s'", "dvar", v11) )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4707, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+48h]
        vmovups [rsp+40C8h+var_4068], xmm0
      }
      Dvar_SetVariant(_RBX, &v29, DVAR_SOURCE_INTERNAL);
      ++v9;
      --v10;
    }
    while ( v10 );
    v5 = v28;
    v8 = v26;
    v4 = v27;
  }
  Com_BeginParseSession(v4);
  v15 = Com_Parse((const char **)&data_p);
  if ( *v15 )
  {
    v16 = v27;
    do
    {
      v17 = 0i64;
      if ( (_DWORD)v6 )
      {
        v18 = v5;
        while ( 1 )
        {
          v19 = *v18;
          if ( !I_strnicmp(v15, *v18, 0x7FFFFFFFui64) )
            break;
          v17 = (unsigned int)(v17 + 1);
          ++v18;
          if ( (unsigned int)v17 >= (unsigned int)v6 )
            goto LABEL_19;
        }
        v21 = Dvar_GenerateChecksum(v19);
        MalleableVar = Dvar_FindMalleableVar(v21);
        if ( !MalleableVar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 5044, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
          __debugbreak();
        v23 = Com_ParseOnLine((const char **)&data_p);
        Dvar_SetFromStringFromSource(MalleableVar, v23, DVAR_SOURCE_INTERNAL);
        if ( !v30[v17] )
        {
          v30[v17] = 1;
          ++v8;
        }
      }
      else
      {
LABEL_19:
        Com_PrintWarning(16, "WARNING: unknown dvar '%s' in file '%s'\n", v15, v16);
      }
      Com_SkipRestOfLine((const char **)&data_p);
      v15 = Com_Parse((const char **)&data_p);
    }
    while ( *v15 );
    v4 = v27;
    v7 = (unsigned int)v6;
  }
  Com_EndParseSession();
  if ( v8 == (_DWORD)v6 )
    return 1;
  Com_PrintError(16, "ERROR: the following dvars were not specified in file '%s'\n", v4);
  if ( (_DWORD)v6 )
  {
    v24 = v30;
    do
    {
      if ( !*v24 )
        Com_PrintError(16, "  %s\n", *v5);
      ++v24;
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
  const char *v12; 
  int v13; 
  DvarValue v15[3]; 

  v4 = 0;
  if ( !numDvars )
    return 1;
  while ( 1 )
  {
    Checksum = Dvar_GenerateChecksum(*dvarnames);
    _R14 = Dvar_FindMalleableVar(Checksum);
    if ( !_R14 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4964, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1549, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
        __debugbreak();
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r14+28h]
      vmovups xmmword ptr [rsp+68h+var_38], xmm0
    }
    v12 = Dvar_ValueToString(_R14, v15);
    v13 = Com_sprintf_truncate(buffer, bufsize, "%d \"%s\"\n", _R14->checksum, v12);
    if ( v13 < 0 )
      break;
    ++v4;
    buffer += v13;
    bufsize -= v13;
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
  unsigned __int8 type; 
  volatile int readCount; 
  volatile int v9; 
  DvarValue v10; 
  DvarValue v11; 

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
      _RAX = *v2;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax+38h]
        vmovups xmm1, xmmword ptr [rax+28h]
      }
      type = (*v2)->type;
      __asm
      {
        vmovups [rsp+78h+var_28], xmm0
        vmovups [rsp+78h+var_18], xmm1
      }
      if ( !Dvar_ValuesEqual(type, &v11, &v10) )
        break;
      ++v1;
      ++v2;
      if ( v1 >= dvarCount )
        goto LABEL_13;
    }
    if ( g_dvarCritSect.readCount <= 0 )
    {
      v9 = g_dvarCritSect.readCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", v9, 0i64) )
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
  DvarValue v5; 

  _RDI = value;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2881, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2883, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( (dvar->flags & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2885, ASSERT_TYPE_ASSERT, "( ( dvar->flags & (1 << 14) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+48h+var_18], xmm0
  }
  Dvar_UpdateResetValue((dvar_t *)dvar, &v5);
}

/*
==============
Dvar_ClampValueToDomain
==============
*/
DvarValue *Dvar_ClampValueToDomain(DvarValue *result, unsigned __int8 type, DvarValue *value, const DvarValue *resetValue, const DvarLimits *domain)
{
  int max; 
  int stringCount; 
  int integer; 
  const char *const *strings; 
  __int64 min; 
  __int64 integer64; 
  const char *const *v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  int v41; 
  bool v42; 
  bool v43; 
  DvarValue *v45; 
  int v46; 
  int v47; 

  _RDI = domain;
  _RBX = value;
  _R15 = result;
  switch ( type )
  {
    case 0u:
      value->enabled = value->enabled;
      goto $LN17_71;
    case 1u:
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+4]; jumptable 00000001418674FE case 1
        vmovss  xmm1, dword ptr [rdi]; min
        vmovss  xmm0, dword ptr [rbx]; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rbx], xmm0 }
      goto $LN17_71;
    case 2u:
      __asm
      {
        vmovss  xmm1, dword ptr [rdi]; jumptable 00000001418674FE case 2
        vmovss  xmm2, dword ptr [rbx]
        vcomiss xmm2, xmm1
        vmovss  xmm0, dword ptr [rdi+4]
        vcomiss xmm2, xmm0
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm2, dword ptr [rbx+4]
        vcomiss xmm2, xmm1
        vcomiss xmm2, xmm0
        vmovss  dword ptr [rbx+4], xmm0
      }
      goto $LN17_71;
    case 3u:
      __asm
      {
        vmovss  xmm1, dword ptr [rdi]; jumptable 00000001418674FE case 3
        vmovss  xmm2, dword ptr [rbx]
        vcomiss xmm2, xmm1
        vmovss  xmm0, dword ptr [rdi+4]
        vcomiss xmm2, xmm0
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm2, dword ptr [rbx+4]
        vcomiss xmm2, xmm1
        vcomiss xmm2, xmm0
        vmovss  dword ptr [rbx+4], xmm0
        vmovss  xmm2, dword ptr [rbx+8]
        vcomiss xmm2, xmm1
        vcomiss xmm2, xmm0
        vmovss  dword ptr [rbx+8], xmm0
      }
      goto $LN17_71;
    case 4u:
      __asm
      {
        vmovss  xmm1, dword ptr [rdi]; jumptable 00000001418674FE case 4
        vmovss  xmm2, dword ptr [rbx]
        vcomiss xmm2, xmm1
        vmovss  xmm0, dword ptr [rdi+4]
        vcomiss xmm2, xmm0
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm2, dword ptr [rbx+4]
        vcomiss xmm2, xmm1
        vcomiss xmm2, xmm0
        vmovss  dword ptr [rbx+4], xmm0
        vmovss  xmm2, dword ptr [rbx+8]
        vcomiss xmm2, xmm1
        vcomiss xmm2, xmm0
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  xmm2, dword ptr [rbx+0Ch]
        vcomiss xmm2, xmm1
        vcomiss xmm2, xmm0
        vmovss  dword ptr [rbx+0Ch], xmm0
      }
      goto $LN17_71;
    case 5u:
      max = domain->integer.max;
      stringCount = domain->enumeration.stringCount;
      if ( domain->enumeration.stringCount > max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1609, ASSERT_TYPE_ASSERT, "(domain.integer.min <= domain.integer.max)", (const char *)&queryFormat, "domain.integer.min <= domain.integer.max") )
        __debugbreak();
      integer = _RBX->integer;
      if ( stringCount > max && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 773, ASSERT_TYPE_SANITY, "( min <= max )", (const char *)&queryFormat, "min <= max") )
        __debugbreak();
      if ( max < integer )
        integer = max;
      if ( stringCount > integer )
        integer = stringCount;
      _RBX->integer = integer;
      goto $LN17_71;
    case 6u:
      strings = domain->enumeration.strings;
      min = domain->integer64.min;
      if ( domain->integer64.min > (__int64)strings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1614, ASSERT_TYPE_ASSERT, "(domain.integer64.min <= domain.integer64.max)", (const char *)&queryFormat, "domain.integer64.min <= domain.integer64.max") )
        __debugbreak();
      integer64 = _RBX->integer64;
      if ( min > (__int64)strings && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 773, ASSERT_TYPE_SANITY, "( min <= max )", (const char *)&queryFormat, "min <= max") )
        __debugbreak();
      if ( (__int64)strings < integer64 )
        integer64 = (__int64)strings;
      if ( min > integer64 )
        integer64 = min;
      _RBX->integer64 = integer64;
      goto $LN17_71;
    case 7u:
      v15 = domain->enumeration.strings;
      v16 = domain->integer64.min;
      if ( domain->integer64.min > (unsigned __int64)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1619, ASSERT_TYPE_ASSERT, "(domain.unsignedInt64.min <= domain.unsignedInt64.max)", (const char *)&queryFormat, "domain.unsignedInt64.min <= domain.unsignedInt64.max") )
        __debugbreak();
      v17 = _RBX->integer64;
      if ( v16 > (unsigned __int64)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 773, ASSERT_TYPE_SANITY, "( min <= max )", (const char *)&queryFormat, "min <= max") )
        __debugbreak();
      if ( (unsigned __int64)v15 < v17 )
        v17 = (unsigned __int64)v15;
      if ( v16 > v17 )
        v17 = v16;
      _RBX->integer64 = v17;
      goto $LN17_71;
    case 8u:
      if ( value->integer >= 0 && value->integer < domain->enumeration.stringCount )
        goto $LN17_71;
      v41 = resetValue->integer;
      value->integer = resetValue->integer;
      v42 = v41 == 0;
      if ( v41 < 0 )
        goto LABEL_46;
      if ( v41 >= domain->enumeration.stringCount )
      {
        v42 = v41 == 0;
LABEL_46:
        if ( !v42 )
        {
          v46 = v41;
          v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1651, ASSERT_TYPE_ASSERT, "( ( value.integer >= 0 && value.integer < domain.enumeration.stringCount || value.integer == 0 ) )", "( value.integer ) = %i", v46);
          goto LABEL_49;
        }
      }
$LN17_71:
      __asm { vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001418674FE cases 9,10 }
      v45 = _R15;
      __asm { vmovups xmmword ptr [r15], xmm0 }
      return v45;
    case 9u:
    case 0xAu:
      goto $LN17_71;
    case 0xBu:
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; jumptable 00000001418674FE case 11
        vmovss  xmm0, cs:__real@3f800000
        vxorps  xmm1, xmm1, xmm1
        vcomiss xmm2, xmm1
        vcomiss xmm2, xmm0
        vmovss  xmm2, dword ptr [rbx+4]
        vcomiss xmm2, xmm1
        vcomiss xmm2, xmm0
        vmovss  xmm2, dword ptr [rbx+8]
        vcomiss xmm2, xmm1
        vcomiss xmm2, xmm0
      }
      goto $LN17_71;
    default:
      v47 = type;
      v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1661, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v47);
LABEL_49:
      if ( v43 )
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
  unsigned __int8 type; 
  DvarValue v6; 
  DvarValue v7; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+38h]
    vmovups [rsp+48h+var_28], xmm0
    vmovups xmm0, xmmword ptr [rcx+28h]
  }
  _RBX = (dvar_t *)dvar;
  type = dvar->type;
  __asm { vmovups xmmword ptr [rsp+48h+var_18], xmm0 }
  if ( !Dvar_ValuesEqual(type, &v7, &v6) )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx+28h]
      vmovups xmmword ptr [rsp+48h+var_18], xmm0
    }
    Dvar_SetLatchedValue(_RBX, &v7);
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
  DvarValue v4; 

  _RBX = dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1565, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+38h]
    vmovups xmmword ptr [rsp+48h+var_18], xmm0
  }
  return Dvar_ValueToString(_RBX, &v4);
}

/*
==============
Dvar_DisplayableResetValue
==============
*/
const char *Dvar_DisplayableResetValue(const dvar_t *dvar)
{
  DvarValue v4; 

  _RBX = dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1557, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+48h]
    vmovups xmmword ptr [rsp+48h+var_18], xmm0
  }
  return Dvar_ValueToString(_RBX, &v4);
}

/*
==============
Dvar_DisplayableValue
==============
*/
const char *Dvar_DisplayableValue(const dvar_t *dvar)
{
  DvarValue v4; 

  _RBX = dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1549, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+28h]
    vmovups xmmword ptr [rsp+48h+var_18], xmm0
  }
  return Dvar_ValueToString(_RBX, &v4);
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
  const dvar_t *v8; 
  unsigned int v10; 
  char *v11; 
  unsigned __int64 v13; 
  char *v14; 
  unsigned int checksum; 
  const char *UnobfuscatedName; 
  __int64 v24; 
  int v25; 
  int stringCount; 
  char *v27; 
  const char *const *strings; 
  int v29; 
  char *result; 
  char *fmt; 
  char *fmta; 
  __int64 v34; 
  DvarLimits v35; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  v8 = dvar;
  __asm
  {
    vmovups xmm6, xmmword ptr [rcx+58h]
    vmovups [rsp+88h+var_48], xmm6
  }
  if ( !outBufferLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1829, ASSERT_TYPE_ASSERT, "(outBufferLen > 0)", (const char *)&queryFormat, "outBufferLen > 0") )
    __debugbreak();
  v10 = 0;
  v11 = &outBuffer[outBufferLen];
  if ( outLineCount )
    *outLineCount = 0;
  _RBP = 0x140000000ui64;
  switch ( v8->type )
  {
    case 0u:
      Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is 0 or 1");
      goto LABEL_59;
    case 1u:
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+88h+var_48]; jumptable 0000000141868503 case 1
        vucomiss xmm1, cs:__real@ff7fffff
        vmovss  xmm0, dword ptr [rsp+88h+var_48+4]
      }
      if ( outLineCount )
      {
        __asm
        {
          vucomiss xmm0, cs:__real@7f7fffff
          vcvtss2sd xmm3, xmm1, xmm1
          vmovq   r9, xmm3
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+88h+fmt], xmm0
        }
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any number from %g to %g", *(double *)&_XMM3, *(double *)&fmta);
      }
      else
      {
        __asm { vucomiss xmm0, cs:__real@7f7fffff }
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any number");
      }
      goto LABEL_59;
    case 2u:
      __asm { vmovdqa [rsp+88h+var_48], xmm6 }
      Dvar_VectorDomainToString(2, &v35, outBuffer, outBufferLen);
      goto LABEL_59;
    case 3u:
    case 0xBu:
      __asm { vmovdqa [rsp+88h+var_48], xmm6 }
      Dvar_VectorDomainToString(3, &v35, outBuffer, outBufferLen);
      goto LABEL_59;
    case 4u:
      __asm { vmovdqa [rsp+88h+var_48], xmm6 }
      Dvar_VectorDomainToString(4, &v35, outBuffer, outBufferLen);
      goto LABEL_59;
    case 5u:
      v13 = outBufferLen;
      if ( v35.enumeration.stringCount == 0x80000000 )
      {
        v14 = outBuffer;
        if ( v35.integer.max == 0x7FFFFFFF )
          goto LABEL_14;
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer %i or smaller", (unsigned int)v35.integer.max);
      }
      else if ( v35.integer.max == 0x7FFFFFFF )
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer %i or bigger", (unsigned int)v35.enumeration.stringCount);
      }
      else
      {
        LODWORD(fmt) = v35.integer.max;
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer from %i to %i", (unsigned int)v35.enumeration.stringCount, fmt);
      }
      goto LABEL_59;
    case 6u:
      v13 = outBufferLen;
      v14 = outBuffer;
      if ( v35.integer64.min == 0xFFFFFFFF80000000ui64 )
      {
        if ( v35.integer64.max == 0x7FFFFFFFFFFFFFFFi64 )
LABEL_14:
          Com_sprintf_truncate(v14, v13, "Domain is any integer");
        else
          Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer %lli or smaller", v35.integer64.max);
      }
      else if ( v35.integer64.max == 0x7FFFFFFF )
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer %lli or bigger", v35.integer64.min);
      }
      else
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any integer from %lli to %lli", v35.integer64.min, v35.integer64.max);
      }
      goto LABEL_59;
    case 7u:
      if ( v35.integer64.min == 0xFFFFFFFF80000000ui64 )
      {
        if ( v35.integer64.max == -1 )
          Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any unsigned integer");
        else
          Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any unsigned integer %llu or smaller", v35.integer64.max);
      }
      else if ( v35.integer64.max == 0x7FFFFFFF )
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any unsigned integer %llu or bigger", v35.integer64.min);
      }
      else
      {
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any unsigned integer from %llu to %llu", v35.integer64.min, v35.integer64.max);
      }
      goto LABEL_59;
    case 8u:
      v25 = Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is one of the following:");
      if ( v25 >= 0 )
      {
        stringCount = v35.enumeration.stringCount;
        v27 = &outBuffer[v25];
        if ( v35.enumeration.stringCount > 0 )
        {
          strings = v35.enumeration.strings;
          do
          {
            v29 = Com_sprintf_truncate(v27, v11 - v27, "\n  %2i: %s", v10, *strings);
            if ( v29 < 0 )
              break;
            if ( outLineCount )
              ++*outLineCount;
            v27 += v29;
            if ( v27 >= v11 )
              break;
            ++v10;
            ++strings;
          }
          while ( (int)v10 < stringCount );
        }
      }
      goto LABEL_59;
    case 9u:
      if ( v8->type != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1787, ASSERT_TYPE_ASSERT, "(dvar->type == DVAR_TYPE_STRING)", (const char *)&queryFormat, "dvar->type == DVAR_TYPE_STRING") )
        __debugbreak();
      if ( !s_customDvarDomainCallbackTable.m_entryCount )
        goto LABEL_41;
      checksum = v8->checksum;
      while ( 1 )
      {
        _RAX = 2i64 * v10;
        __asm
        {
          vmovups xmm0, xmmword ptr ss:rva s_customDvarDomainCallbackTable.m_table.dvarChecksum[rbp+rax*8]
          vmovd   eax, xmm0
          vmovups [rsp+88h+var_48], xmm0
        }
        if ( (_DWORD)_RAX == checksum )
          break;
        if ( ++v10 >= s_customDvarDomainCallbackTable.m_entryCount )
          goto LABEL_41;
      }
      if ( v35.integer64.max )
      {
        v24 = ((__int64 (__fastcall *)(int *))v35.enumeration.strings)(outLineCount);
        Com_sprintf_truncate(outBuffer, outBufferLen, (const char *)&queryFormat, v24);
      }
      else
      {
        UnobfuscatedName = Dvar_DevGetUnobfuscatedName(v8->name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1793, ASSERT_TYPE_ASSERT, "(entry.callback)", "%s\n\tDvar %s had an entry in the dvar custom domain callback table, but callback was NULL.", "entry.callback", UnobfuscatedName) )
          __debugbreak();
LABEL_41:
        Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any text");
      }
LABEL_59:
      result = outBuffer;
      __asm { vmovaps xmm6, [rsp+88h+var_38] }
      *(v11 - 1) = 0;
      return result;
    case 0xAu:
      Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any 4-component color, in RGBA format");
      goto LABEL_59;
    default:
      LODWORD(v34) = v8->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1962, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v34) )
        __debugbreak();
      *outBuffer = 0;
      goto LABEL_59;
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
  unsigned __int8 type; 
  int v5; 
  unsigned __int8 v6; 

  Checksum = Dvar_GenerateChecksum(dvarname_in);
  result = Dvar_FindMalleableVar(Checksum);
  _RBX = result;
  if ( result )
  {
    type = result->type;
    if ( type > 8u || (v5 = 291, !_bittest(&v5, type)) )
    {
      if ( (type != 9 || (result->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1190, ASSERT_TYPE_ASSERT, "( ( ( dvar->type == DVAR_TYPE_BOOL ) || ( dvar->type == DVAR_TYPE_INT ) || ( dvar->type == DVAR_TYPE_FLOAT ) || ( dvar->type == DVAR_TYPE_ENUM ) || ( ( dvar->type == DVAR_TYPE_STRING ) && ( dvar->flags & (1 << 8) ) ) ) )", "( dvar->type ) = %i", type) )
        __debugbreak();
    }
    v6 = _RBX->type;
    if ( v6 == 5 || v6 == 8 )
    {
      return (dvar_t *)_RBX->current.integer;
    }
    else if ( v6 )
    {
      if ( v6 == 1 )
      {
        __asm { vcvttss2si eax, dword ptr [rbx+28h] }
        return (dvar_t *)(int)result;
      }
      else
      {
        return (dvar_t *)I_atoi64(_RBX->current.string);
      }
    }
    else
    {
      return (dvar_t *)_RBX->current.enabled;
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
  unsigned __int8 type; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  _RBX = MalleableVar;
  if ( MalleableVar )
  {
    type = MalleableVar->type;
    if ( type != 1 && (type != 9 || (_RBX->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2610, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->type ) = %i", type) )
      __debugbreak();
    if ( _RBX->type == 1 )
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    else
      *(float *)&_XMM0 = Dvar_StringToFloat(_RBX->current.string);
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(double *)&_XMM0;
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
  __int64 v10; 
  int color; 

  _RDI = expandedColor;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2714, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  type = dvar->type;
  if ( type != 10 && (type != 9 || (dvar->flags & 0x100) == 0) )
  {
    LODWORD(v10) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2715, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_COLOR || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->type ) = %i", v10) )
      __debugbreak();
  }
  if ( dvar->type == 10 )
  {
    _EAX = dvar->current.integer;
  }
  else
  {
    Dvar_StringToColor(dvar->current.string, (unsigned __int8 *)&color);
    _EAX = color;
  }
  __asm
  {
    vmovd   xmm0, eax
    vpmovzxbd xmm1, xmm0
    vcvtdq2ps xmm3, xmm1
    vmulps  xmm0, xmm3, cs:__xmm@3b8080813b8080813b8080813b808081
    vmovups xmmword ptr [rdi], xmm0
  }
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
  int color; 

  _RDI = expandedColor;
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
      _EAX = v5->current.integer;
    }
    else
    {
      Dvar_StringToColor(v5->current.string, (unsigned __int8 *)&color);
      _EAX = color;
    }
    __asm
    {
      vmovd   xmm0, eax
      vpmovzxbd xmm1, xmm0
      vcvtdq2ps xmm3, xmm1
      vmulps  xmm0, xmm3, cs:__xmm@3b8080813b8080813b8080813b808081
      vmovups xmmword ptr [rdi], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  dword ptr [rdi+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
      vmovss  dword ptr [rdi+0Ch], xmm1
    }
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
  DvarValue v5; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  _RAX = Dvar_FindMalleableVar(Checksum);
  if ( !_RAX )
    return (char *)&queryFormat.fmt + 3;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+28h]
    vmovups xmmword ptr [rsp+38h+var_18], xmm0
  }
  return Dvar_ValueToString(_RAX, &v5);
}

/*
==============
Dvar_GetVariantStringToBuffer
==============
*/
void Dvar_GetVariantStringToBuffer(const char *dvarName, char *outBuffer, unsigned __int64 outBufferLen)
{
  unsigned int Checksum; 
  DvarValue v9; 

  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2665, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  if ( !outBufferLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2666, ASSERT_TYPE_ASSERT, "(outBufferLen)", (const char *)&queryFormat, "outBufferLen") )
    __debugbreak();
  Checksum = Dvar_GenerateChecksum(dvarName);
  _RAX = Dvar_FindMalleableVar(Checksum);
  if ( _RAX )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+28h]
      vmovups xmmword ptr [rsp+48h+var_18], xmm0
    }
    Dvar_ValueToStringBuffer(_RAX, &v9, outBuffer, outBufferLen);
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
  DvarValue v7; 

  Checksum = Dvar_GenerateChecksum(dvarName);
  _RAX = Dvar_FindMalleableVar(Checksum);
  if ( !_RAX )
    return defaultValue;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+28h]
    vmovups xmmword ptr [rsp+38h+var_18], xmm0
  }
  return Dvar_ValueToString(_RAX, &v7);
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
  dvar_t *v5; 

  _RBX = result;
  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v5 = MalleableVar;
  if ( MalleableVar )
  {
    if ( ((MalleableVar->type - 3) & 0xF7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2629, ASSERT_TYPE_ASSERT, "(dvar->type == DVAR_TYPE_FLOAT_3 || dvar->type == DVAR_TYPE_FLOAT_3_COLOR)", (const char *)&queryFormat, "dvar->type == DVAR_TYPE_FLOAT_3 || dvar->type == DVAR_TYPE_FLOAT_3_COLOR") )
      __debugbreak();
    LODWORD(_RBX->v[0]) = v5->current.integer;
    _RBX->v[1] = v5->current.vector.v[1];
    _RBX->v[2] = v5->current.vector.v[2];
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
}

/*
==============
Dvar_HasLatchedValue
==============
*/
bool Dvar_HasLatchedValue(const dvar_t *dvar)
{
  unsigned __int8 type; 
  DvarValue v5; 
  DvarValue v6; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+38h]
    vmovups xmm1, xmmword ptr [rcx+28h]
  }
  type = dvar->type;
  __asm
  {
    vmovups [rsp+48h+var_28], xmm0
    vmovups xmmword ptr [rsp+48h+var_18], xmm1
  }
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
  __int64 v7; 
  unsigned int Checksum; 
  __int64 v10; 
  DvarLimits v11; 
  DvarValue v12; 

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
  v12.integer = 1;
  __asm { vmovups xmm1, xmmword ptr [rsp+68h+var_18] }
  v7 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v5);
  v11 = 0ui64;
  __asm { vmovups xmm0, [rsp+68h+var_28] }
  ++*(_DWORD *)(v7 + 1056);
  __asm
  {
    vmovdqa [rsp+68h+var_28], xmm0
    vmovdqa xmmword ptr [rsp+68h+var_18], xmm1
  }
  Checksum = Dvar_GenerateChecksum("MTOQLKRRSN");
  s_writeChangeToLog = Dvar_RegisterVariant("MTOQLKRRSN", Checksum, 0, 0, &v12, &v11, "Dev-only flag to enable/disable writing every dvar change to the log");
  if ( !*(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v5) + 1056i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 5131, ASSERT_TYPE_ASSERT, "(s_allowPermanentDvars)", "%s\n\tEnd() call with missing Begin()", "s_allowPermanentDvars") )
    __debugbreak();
  v10 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  --*(_DWORD *)(v10 + 1056);
}

/*
==============
Dvar_InitNew
==============
*/
void Dvar_InitNew(dvar_t *dvar, const char *dvarName, unsigned int checksum, unsigned __int8 type, unsigned int flags, DvarValue *value, DvarLimits *domain, DvarLevel level, const char *description)
{
  _RSI = value;
  _RDI = dvar;
  memset_0(dvar, 0, sizeof(dvar_t));
  _RDI->level[0] = level;
  _RDI->checksum = checksum;
  _RDI->type = type;
  _RDI->flags = flags;
  if ( (flags & 0x100) != 0 )
  {
    if ( *dvarName )
      dvarName = SL_AllocString_Copy(dvarName);
    else
      dvarName = (char *)&queryFormat.fmt + 3;
  }
  _RDI->name = dvarName;
  switch ( type )
  {
    case 2u:
      __asm
      {
        vmovss  xmm1, dword ptr [rsi]
        vmovss  xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rdi+28h], xmm1
        vmovss  dword ptr [rdi+2Ch], xmm0
        vmovss  dword ptr [rdi+38h], xmm1
        vmovss  dword ptr [rdi+3Ch], xmm0
        vmovss  dword ptr [rdi+48h], xmm1
        vmovss  dword ptr [rdi+4Ch], xmm0
      }
      goto LABEL_15;
    case 3u:
      goto LABEL_13;
    case 4u:
      __asm
      {
        vmovss  xmm3, dword ptr [rsi]
        vmovss  xmm2, dword ptr [rsi+4]
        vmovss  xmm1, dword ptr [rsi+8]
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmovss  dword ptr [rdi+28h], xmm3
        vmovss  dword ptr [rdi+2Ch], xmm2
        vmovss  dword ptr [rdi+30h], xmm1
        vmovss  dword ptr [rdi+34h], xmm0
        vmovss  dword ptr [rdi+38h], xmm3
        vmovss  dword ptr [rdi+3Ch], xmm2
        vmovss  dword ptr [rdi+40h], xmm1
        vmovss  dword ptr [rdi+44h], xmm0
        vmovss  dword ptr [rdi+48h], xmm3
        vmovss  dword ptr [rdi+4Ch], xmm2
        vmovss  dword ptr [rdi+50h], xmm1
        vmovss  dword ptr [rdi+54h], xmm0
      }
      goto LABEL_15;
    case 9u:
      Dvar_CopyString(value->string, &_RDI->current);
      Dvar_WeakCopyString(_RDI->current.string, &_RDI->latched);
      Dvar_WeakCopyString(_RDI->current.string, &_RDI->reset);
      goto LABEL_15;
    case 0xBu:
LABEL_13:
      __asm
      {
        vmovss  xmm2, dword ptr [rsi]
        vmovss  xmm1, dword ptr [rsi+4]
        vmovss  xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rdi+28h], xmm2
        vmovss  dword ptr [rdi+2Ch], xmm1
        vmovss  dword ptr [rdi+30h], xmm0
        vmovss  dword ptr [rdi+38h], xmm2
        vmovss  dword ptr [rdi+3Ch], xmm1
        vmovss  dword ptr [rdi+40h], xmm0
        vmovss  dword ptr [rdi+48h], xmm2
        vmovss  dword ptr [rdi+4Ch], xmm1
        vmovss  dword ptr [rdi+50h], xmm0
      }
      goto LABEL_15;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vinsertf128 ymm0, ymm0, xmm0, 1
    vmovups ymmword ptr [rdi+28h], ymm0
    vmovups xmmword ptr [rdi+48h], xmm0
  }
LABEL_15:
  _RAX = domain;
  _RDI->modified = 0;
  __asm { vmovups xmm0, xmmword ptr [rax] }
  _RDI->description = description;
  __asm { vmovups xmmword ptr [rdi+58h], xmm0 }
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
  int v3; 
  __int64 v5; 
  unsigned __int64 v6; 
  dvar_t *v8; 
  int type; 
  const char *v11; 
  const char *ObfuscatedName; 
  unsigned int v17; 
  __int64 v19; 
  unsigned __int8 color[16]; 
  int p; 
  int v22; 
  unsigned int checksum; 
  DvarLimits domain; 
  __int128 v25; 
  __int128 v26; 
  DvarValue v27; 
  char string[1024]; 
  char inputName[1024]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4877, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &p);
  v3 = p;
  if ( p >= 0 )
  {
    __asm
    {
      vmovaps [rsp+8E0h+var_30], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      if ( v3 >= 1024 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144175130, 1204i64);
      MemFile_ReadData(memFile, v3, inputName);
      if ( (unsigned __int64)v3 >= 0x400 )
        goto LABEL_39;
      inputName[v3] = 0;
      MemFile_ReadData(memFile, 4ui64, &v22);
      v6 = v22;
      if ( v22 < 0 )
        break;
      if ( v22 >= 1024 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144175180, 1205i64);
      MemFile_ReadData(memFile, v6, string);
      if ( v6 >= 0x400 )
      {
LABEL_39:
        j___report_rangecheckfailure(v5);
        __debugbreak();
      }
      string[v6] = 0;
      MemFile_ReadData(memFile, 4ui64, &checksum);
      _RAX = Dvar_FindMalleableVar(checksum);
      v8 = _RAX;
      if ( _RAX )
      {
        type = _RAX->type;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax+58h]
          vmovups xmmword ptr [rsp+8E0h+domain], xmm0
        }
        switch ( type )
        {
          case 0:
            color[0] = Dvar_StringToBool(string);
            break;
          case 1:
            *(float *)&_XMM0 = Dvar_StringToFloat(string);
            __asm { vmovss  dword ptr [rsp+8E0h+color], xmm0 }
            break;
          case 2:
            __asm
            {
              vmovss  dword ptr [rsp+8E0h+color], xmm6
              vmovss  dword ptr [rsp+8E0h+color+4], xmm6
            }
            j_sscanf(string, "%g %g", color, &color[4]);
            break;
          case 3:
          case 11:
            v11 = "%g %g %g";
            if ( string[0] == 40 )
              v11 = "( %g, %g, %g )";
            __asm
            {
              vmovss  dword ptr [rsp+8E0h+color], xmm6
              vmovss  dword ptr [rsp+8E0h+color+4], xmm6
              vmovss  dword ptr [rsp+8E0h+color+8], xmm6
            }
            j_sscanf(string, v11, color, &color[4], &color[8]);
            break;
          case 4:
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vmovups xmmword ptr [rsp+8E0h+color], xmm0
            }
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
            LODWORD(v19) = type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1538, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v19) )
              __debugbreak();
            *(_DWORD *)color = 0;
            break;
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+8E0h+color]
          vmovdqa xmmword ptr [rsp+8E0h+domain], xmm0
        }
        Dvar_SetVariant(v8, (DvarValue *)&domain, DVAR_SOURCE_INTERNAL);
      }
      else
      {
        ObfuscatedName = Dvar_DevGetObfuscatedName(inputName);
        if ( !ObfuscatedName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3916, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
          __debugbreak();
        *(_QWORD *)&v26 = string;
        __asm { vmovups xmm1, [rbp+7E0h+var_860] }
        v25 = 0ui64;
        __asm
        {
          vmovups xmm0, [rsp+8E0h+var_870]
          vmovdqa xmmword ptr [rsp+8E0h+domain], xmm0
          vmovdqa [rbp+7E0h+var_850], xmm1
        }
        v17 = Dvar_GenerateChecksum(ObfuscatedName);
        Dvar_RegisterVariant(ObfuscatedName, v17, 9u, 0x100u, &v27, &domain, "External Dvar");
      }
      MemFile_ReadData(memFile, 4ui64, &p);
      v3 = p;
    }
    while ( p >= 0 );
    __asm { vmovaps xmm6, [rsp+8E0h+var_30] }
  }
}

/*
==============
Dvar_MakeExplicitType
==============
*/
void Dvar_MakeExplicitType(dvar_t *dvar, const char *dvarName, unsigned __int8 type, unsigned int flags, DvarValue *resetValue, DvarLimits *domain)
{
  unsigned __int8 v11; 
  const char *string; 
  const char *v17; 
  const char *v23; 
  char v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned __int8 color[16]; 
  DvarValue v35; 
  DvarLimits domaina; 
  DvarValue v37; 

  _RDI = dvar;
  _R12 = resetValue;
  _R14 = domain;
  v11 = dvar->type;
  if ( v11 != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3118, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_STRING ) )", "( dvar->type ) = %i", v11) )
    __debugbreak();
  _RDI->type = type;
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rdi+58h], xmm0
  }
  if ( (flags & 0x2000) != 0 )
  {
    __asm { vmovups xmm0, xmmword ptr [r12] }
  }
  else
  {
    string = _RDI->current.string;
    __asm { vmovups xmmword ptr [rbp+47h+domain], xmm0 }
    if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1487, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
      __debugbreak();
    switch ( type )
    {
      case 0u:
        color[0] = Dvar_StringToBool(string);
        break;
      case 1u:
        *(float *)&_XMM0 = Dvar_StringToFloat(string);
        __asm { vmovss  dword ptr [rbp+47h+color], xmm0 }
        break;
      case 2u:
        if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1408, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
          __debugbreak();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rbp+47h+color], xmm0
          vmovss  dword ptr [rbp+47h+color+4], xmm0
        }
        j_sscanf(string, "%g %g", color, &color[4]);
        break;
      case 3u:
      case 0xBu:
        if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1417, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
          __debugbreak();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rbp+47h+color], xmm0
          vmovss  dword ptr [rbp+47h+color+4], xmm0
          vmovss  dword ptr [rbp+47h+color+8], xmm0
        }
        v17 = "%g %g %g";
        if ( *string == 40 )
          v17 = "( %g, %g, %g )";
        j_sscanf(string, v17, color, &color[4], &color[8]);
        break;
      case 4u:
        if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1429, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
          __debugbreak();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovups xmmword ptr [rbp+47h+color], xmm0
        }
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
        LODWORD(v33) = type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1538, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v33) )
          __debugbreak();
        *(_DWORD *)color = 0;
        break;
    }
    __asm
    {
      vmovups xmm2, xmmword ptr [rbp+47h+color]
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmm1, xmmword ptr [r12]
      vmovups xmmword ptr [rbp+47h+domain], xmm0
      vmovups xmmword ptr [rbp+47h+color], xmm1
      vmovdqa [rbp+47h+var_60], xmm2
    }
    _RAX = Dvar_ClampValueToDomain(&v37, type, &v35, (const DvarValue *)color, &domaina);
    type = _RDI->type;
    __asm { vmovups xmm0, xmmword ptr [rax] }
  }
  __asm { vmovups xmmword ptr [rbp+47h+color], xmm0 }
  v23 = *(const char **)color;
  if ( type == 9 && *(_QWORD *)color )
  {
    v24 = 1;
    if ( !**(_BYTE **)color )
    {
      v23 = (char *)&queryFormat.fmt + 3;
      *(_QWORD *)color = (char *)&queryFormat.fmt + 3;
      goto LABEL_51;
    }
    v25 = SL_AllocString_Copy(*(const char **)color);
    type = _RDI->type;
    v23 = v25;
    *(_QWORD *)color = v25;
  }
  else
  {
    v24 = 0;
  }
  if ( type != 9 )
  {
    v26 = _RDI->current.string;
    if ( v26 )
    {
      if ( v26 != _RDI->latched.string && v26 != _RDI->reset.string && *v26 )
        SL_AllocString_Free(v26);
    }
  }
LABEL_51:
  v27 = _RDI->latched.string;
  _RDI->current.integer64 = 0i64;
  if ( v27 && v27 != _RDI->reset.string && *v27 )
    SL_AllocString_Free(v27);
  v28 = _RDI->reset.string;
  _RDI->latched.integer64 = 0i64;
  if ( v28 && v28 != _RDI->current.string && *v28 )
    SL_AllocString_Free(v28);
  __asm { vmovups xmm0, xmmword ptr [r12] }
  _RDI->reset.integer64 = 0i64;
  __asm { vmovups [rbp+47h+var_60], xmm0 }
  Dvar_UpdateResetValue(_RDI, &v35);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+47h+color]
    vmovdqa [rbp+47h+var_60], xmm0
  }
  Dvar_UpdateValue(_RDI, &v35);
  v31 = tls_index;
  if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & flags) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3153, ASSERT_TYPE_ASSERT, "(!(flags & ~dvar_allowedModifiedFlags))", (const char *)&queryFormat, "!(flags & ~dvar_allowedModifiedFlags)") )
    __debugbreak();
  v32 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v31);
  *(_DWORD *)(v32 + 1048) |= flags;
  if ( v24 )
  {
    if ( *v23 )
      SL_AllocString_Free(v23);
  }
}

/*
==============
Dvar_MakeLatchedValueCurrent
==============
*/
void Dvar_MakeLatchedValueCurrent(const dvar_t *dvar)
{
  DvarValue v2; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+38h]
    vmovups xmmword ptr [rsp+38h+var_18], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v2, DVAR_SOURCE_INTERNAL);
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
  DvarValue v5; 

  _RBX = (dvar_t *)dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4527, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( s_isLoadingAutoExecGlobalFlag )
  {
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4679, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
      __debugbreak();
    v2 = tls_index;
    if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & 0x8000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4689, ASSERT_TYPE_ASSERT, "( ( !(flags & ~dvar_allowedModifiedFlags) ) )", "( dvar->name ) = %s", _RBX->name) )
      __debugbreak();
    v3 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2);
    *(_DWORD *)(v3 + 1048) |= 0x8000u;
    __asm { vmovups xmm0, xmmword ptr [rbx+28h] }
    _RBX->flags |= 0x8000u;
    __asm { vmovups xmmword ptr [rsp+48h+var_18], xmm0 }
    Dvar_UpdateResetValue(_RBX, &v5);
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
  DvarLimits v11; 
  DvarValue v12; 

  v11 = 0ui64;
  __asm { vmovups xmm0, [rsp+68h+var_28] }
  v12.integer = value;
  __asm
  {
    vmovups xmm1, xmmword ptr [rsp+68h+var_18]
    vmovdqa [rsp+68h+var_28], xmm0
    vmovdqa xmmword ptr [rsp+68h+var_18], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 0, flags, &v12, &v11, description);
}

/*
==============
Dvar_RegisterColor
==============
*/

const dvar_t *__fastcall Dvar_RegisterColor(const char *dvarName, double r, double g, double b, float a, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  const dvar_t *result; 
  DvarValue v57; 
  DvarLimits v58[6]; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, cs:__real@3f004189
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, cs:__real@437f0000
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vminss  xmm0, xmm1, xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm5, xmm3
    vxorps  xmm9, xmm9, xmm9
    vmaxss  xmm0, xmm0, xmm9
    vmulss  xmm1, xmm0, xmm7
    vxorps  xmm0, xmm0, xmm0
    vaddss  xmm3, xmm1, xmm6
    vmovss  xmm1, xmm0, xmm3
    vmovaps xmm4, xmm2
    vxorps  xmm10, xmm10, xmm10
    vroundss xmm2, xmm10, xmm1, 1
    vcvttss2si eax, xmm2
  }
  v57.enabled = (char)_RAX;
  __asm
  {
    vminss  xmm0, xmm4, xmm8
    vmaxss  xmm0, xmm0, xmm9
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm3, xmm1, xmm6
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm0, xmm2, xmm3
    vroundss xmm1, xmm10, xmm0, 1
    vcvttss2si eax, xmm1
  }
  v57.color[1] = (unsigned __int8)_RAX;
  __asm
  {
    vminss  xmm0, xmm5, xmm8
    vmaxss  xmm0, xmm0, xmm9
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm3, xmm1, xmm6
    vmovss  xmm0, xmm2, xmm3
    vroundss xmm1, xmm10, xmm0, 1
    vmovss  xmm0, [rsp+0B8h+a]
    vcvttss2si eax, xmm1
    vminss  xmm1, xmm0, xmm8
  }
  v57.color[2] = (unsigned __int8)_RAX;
  __asm
  {
    vmaxss  xmm1, xmm1, xmm9
    vmulss  xmm0, xmm1, xmm7
    vaddss  xmm3, xmm0, xmm6
    vroundss xmm0, xmm10, xmm3, 1
    vcvttss2si eax, xmm0
  }
  v57.color[3] = (unsigned __int8)_RAX;
  __asm { vmovups xmm1, [rsp+0B8h+var_78] }
  v58[0] = 0ui64;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0B8h+var_68]
    vmovdqa xmmword ptr [rsp+0B8h+var_68], xmm0
    vmovdqa [rsp+0B8h+var_78], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 0xAu, flags, &v57, v58, description);
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
Dvar_RegisterCustomDomainCallback
==============
*/
void Dvar_RegisterCustomDomainCallback(const dvar_t *dvar, char *(*callback)(int *))
{
  unsigned int m_entryCount; 
  int v6; 
  __int64 v9; 
  __int128 v10; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1816, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1817, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
    __debugbreak();
  if ( dvar->type != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1766, ASSERT_TYPE_ASSERT, "(dvar->type == DVAR_TYPE_STRING)", (const char *)&queryFormat, "dvar->type == DVAR_TYPE_STRING") )
    __debugbreak();
  m_entryCount = s_customDvarDomainCallbackTable.m_entryCount;
  _RSI = s_customDvarDomainCallbackTable.m_table;
  v6 = 0;
  if ( s_customDvarDomainCallbackTable.m_entryCount )
  {
    while ( s_customDvarDomainCallbackTable.m_table[v6].dvarChecksum != dvar->checksum )
    {
      if ( ++v6 >= s_customDvarDomainCallbackTable.m_entryCount )
        goto LABEL_13;
    }
    s_customDvarDomainCallbackTable.m_table[v6].callback = callback;
  }
  else
  {
LABEL_13:
    if ( s_customDvarDomainCallbackTable.m_entryCount >= 0x20 )
    {
      LODWORD(v9) = s_customDvarDomainCallbackTable.m_entryCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1779, ASSERT_TYPE_ASSERT, "(unsigned)( m_entryCount ) < (unsigned)( MAX_CUSTOM_DVAR_DOMAIN_CALLBACKS )", "m_entryCount doesn't index MAX_CUSTOM_DVAR_DOMAIN_CALLBACKS\n\t%i not in [0, %i)", v9, 32) )
        __debugbreak();
      m_entryCount = s_customDvarDomainCallbackTable.m_entryCount;
    }
    LODWORD(v10) = dvar->checksum;
    _RAX = 2i64 * m_entryCount;
    *((_QWORD *)&v10 + 1) = callback;
    __asm
    {
      vmovups xmm0, [rsp+58h+var_18]
      vmovups xmmword ptr [rsi+rax*8], xmm0
    }
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
  DvarLimits v18; 
  DvarValue v19; 

  if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3954, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
    __debugbreak();
  if ( !valueList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3955, ASSERT_TYPE_ASSERT, "(valueList)", (const char *)&queryFormat, "valueList") )
    __debugbreak();
  v9 = 0;
  v19.integer = defaultIndex;
  v18.integer64.max = (__int64)valueList;
  v18.enumeration.stringCount = 0;
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
    v18.enumeration.stringCount = v9;
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
  __asm
  {
    vmovups xmm0, [rsp+68h+var_28]
    vmovups xmm1, [rsp+68h+var_18]
    vmovdqa [rsp+68h+var_28], xmm0
    vmovdqa [rsp+68h+var_18], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 8u, flags, &v19, &v18, description);
}

/*
==============
Dvar_RegisterFloat
==============
*/

const dvar_t *__fastcall Dvar_RegisterFloat(const char *dvarName, double value, double min, double max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  const dvar_t *result; 
  double v26; 
  double v27; 
  double v28; 
  DvarLimits v29; 
  DvarValue v30; 

  __asm
  {
    vcomiss xmm2, xmm1
    vmovaps [rsp+98h+var_18], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps [rsp+98h+var_38], xmm8
    vmovaps xmm8, xmm2
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm1
    vcvtss2sd xmm0, xmm7, xmm7
    vmovsd  [rsp+98h+var_60], xmm0
    vcvtss2sd xmm4, xmm8, xmm8
    vmovsd  [rsp+98h+var_68], xmm4
    vcvtss2sd xmm5, xmm6, xmm6
    vmovsd  [rsp+98h+var_70], xmm5
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3683, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%g not in [%g, %g]", v26, v27, v28) )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, [rsp+98h+var_3C]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  xmm0, [rsp+98h+var_44]
    vmovss  [rsp+98h+var_44], xmm0
    vmovss  xmm0, [rsp+98h+var_3C]
    vmovss  [rsp+98h+var_4C], xmm1
    vmovss  xmm1, [rsp+98h+var_40]
    vmovss  [rsp+98h+var_3C], xmm0
    vmovss  [rsp+98h+var_58], xmm8
    vmovss  [rsp+98h+var_54], xmm7
    vmovss  [rsp+98h+var_48], xmm6
    vmovss  [rsp+98h+var_40], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 1u, flags, &v30, &v29, description);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
  }
  return result;
}

/*
==============
Dvar_RegisterFloat
==============
*/

const dvar_t *__fastcall Dvar_RegisterFloat(const char *dvarName, double value, double min, double max, float devguistep, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  const dvar_t *result; 
  int v27; 
  int v28; 
  int v29; 
  DvarLimits v30; 
  DvarValue v31; 

  __asm
  {
    vcomiss xmm2, xmm1
    vmovaps [rsp+98h+var_18], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps [rsp+98h+var_38], xmm8
    vmovaps xmm8, xmm2
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm1
    vcvttss2si edx, xmm8
    vcvttss2si eax, xmm7
  }
  v29 = _EAX;
  v28 = _EDX;
  __asm { vcvttss2si r8d, xmm6 }
  v27 = _ER8;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3832, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%i not in [%i, %i]", v27, v28, v29) )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, [rsp+98h+var_3C]
    vmovss  xmm0, [rsp+98h+devguistep]
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  xmm0, [rsp+98h+var_44]
    vmovss  [rsp+98h+var_44], xmm0
    vmovss  xmm0, [rsp+98h+var_3C]
    vmovss  [rsp+98h+var_4C], xmm1
    vmovss  xmm1, [rsp+98h+var_40]
    vmovss  [rsp+98h+var_3C], xmm0
    vmovss  [rsp+98h+var_58], xmm8
    vmovss  [rsp+98h+var_54], xmm7
    vmovss  [rsp+98h+var_48], xmm6
    vmovss  [rsp+98h+var_40], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 1u, flags, &v31, &v30, description);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
  }
  return result;
}

/*
==============
Dvar_RegisterInt64
==============
*/
const dvar_t *Dvar_RegisterInt64(const char *dvarName, __int64 value, __int64 min, __int64 max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  int v14; 
  int v15; 
  int v16; 
  DvarLimits v17; 
  DvarValue v18; 

  if ( min > value || value > max )
  {
    v16 = max;
    v15 = min;
    v14 = value;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3657, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%i not in [%i, %i]", v14, v15, v16) )
      __debugbreak();
  }
  v18.integer64 = value;
  __asm { vmovups xmm1, xmmword ptr [rsp+68h+var_18] }
  v17.integer64.min = min;
  v17.integer64.max = max;
  __asm
  {
    vmovups xmm0, [rsp+68h+var_28]
    vmovdqa [rsp+68h+var_28], xmm0
    vmovdqa xmmword ptr [rsp+68h+var_18], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 6u, flags, &v18, &v17, description);
}

/*
==============
Dvar_RegisterInt
==============
*/
const dvar_t *Dvar_RegisterInt(const char *dvarName, int value, int min, int max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  DvarLimits v14; 
  DvarValue v15; 

  if ( (min > value || value > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3632, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%i not in [%i, %i]", value, min, max) )
    __debugbreak();
  v15.integer = value;
  __asm { vmovups xmm1, xmmword ptr [rsp+68h+var_18] }
  v14.integer64.min = __PAIR64__(max, min);
  __asm
  {
    vmovups xmm0, [rsp+68h+var_28]
    vmovdqa [rsp+68h+var_28], xmm0
    vmovdqa xmmword ptr [rsp+68h+var_18], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 5u, flags, &v15, &v14, description);
}

/*
==============
Dvar_RegisterNew
==============
*/
dvar_t *Dvar_RegisterNew(const char *dvarName, unsigned int checksum, unsigned __int8 type, unsigned int flags, DvarValue *value, DvarLimits *domain, DvarLevel level, const char *description)
{
  unsigned __int64 v10; 
  int v16; 
  unsigned __int16 v17; 
  unsigned __int16 *v23; 
  __int64 v24; 
  unsigned int v25; 
  char *fmt; 
  __int64 v29; 
  __int64 v30; 
  DvarLevel v31; 
  DvarLimits v32; 
  DvarValue v33; 
  dvar_t v34; 

  _RSI = value;
  v10 = checksum;
  if ( (flags & 0x40) != 0 && !g_canRegisterSavedDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3475, ASSERT_TYPE_ASSERT, "( ( !(flags & (1 << 6)) || g_canRegisterSavedDvars ) )", "( dvarName ) = %s", dvarName) )
    __debugbreak();
  _RAX = domain;
  __asm
  {
    vmovups xmm1, xmmword ptr [rsi]
    vmovups xmm0, xmmword ptr [rax]
  }
  LOBYTE(v31) = level;
  __asm
  {
    vmovups [rsp+138h+var_E8], xmm0
    vmovups [rsp+138h+var_D8], xmm1
  }
  Dvar_InitNew(&v34, dvarName, v10, type, flags, &v33, &v32, v31, description);
  Sys_LockWrite(&g_dvarCritSect);
  v16 = dvarCount;
  if ( dvarCount >= 12000 )
  {
    Sys_UnlockWrite(&g_dvarCritSect);
    LODWORD(fmt) = 12000;
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144174150, 1203i64, dvarName, fmt);
    v16 = dvarCount;
  }
  v17 = v16;
  if ( v16 < 0 || (unsigned int)v16 > 0xFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v16, "signed", v16) )
      __debugbreak();
    v16 = dvarCount;
  }
  __asm
  {
    vmovups ymm0, [rsp+138h+var_C8]
    vmovups ymm1, [rsp+138h+var_A8]
  }
  areDvarsSortedName = 0;
  dvarCount = v16 + 1;
  areDvarsSortedChecksum = 0;
  _RBX = sortedDvars[v17];
  __asm
  {
    vmovups ymmword ptr [rbx], ymm0
    vmovups ymm0, [rsp+138h+var_88]
    vmovups ymmword ptr [rbx+20h], ymm1
    vmovups ymm1, [rsp+138h+var_68]
    vmovups ymmword ptr [rbx+40h], ymm0
    vmovups ymmword ptr [rbx+60h], ymm1
  }
  v23 = &dvarHashTable[v10 % 0x1979];
  _RBX->hashNext = *v23;
  v24 = _RBX - dvarPool;
  if ( (v24 < 0 || (unsigned __int64)v24 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,__int64>(__int64)", "unsigned", (unsigned __int16)v24, "signed", _RBX - dvarPool) )
    __debugbreak();
  if ( (unsigned __int16)v24 >= 0x2EE0u )
  {
    LODWORD(v30) = 12000;
    LODWORD(v29) = (unsigned __int16)v24;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3512, ASSERT_TYPE_ASSERT, "(unsigned)( dvarPoolIndex ) < (unsigned)( (6500 + 0 + 5500) )", "dvarPoolIndex doesn't index DVAR_CAP\n\t%i not in [0, %i)", v29, v30) )
      __debugbreak();
  }
  *v23 = v24;
  if ( !_RBX->BbConstUsageFlags.initialized )
  {
    v25 = _RBX->flags;
    if ( (v25 & 0x100) == 0 && (v25 & 0x40000) != 0 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rbx+70h], xmm0
      }
      _RBX->BbConstUsageFlags.initialized = 1;
    }
  }
  Sys_UnlockWrite(&g_dvarCritSect);
  return _RBX;
}

/*
==============
Dvar_RegisterString
==============
*/
const dvar_t *Dvar_RegisterString(const char *dvarName, const char *value, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  DvarLimits v12; 
  DvarValue v13; 

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
  v13.integer64 = (__int64)value;
  __asm { vmovups xmm1, [rsp+68h+var_18] }
  v12 = 0ui64;
  __asm
  {
    vmovups xmm0, [rsp+68h+var_28]
    vmovdqa [rsp+68h+var_28], xmm0
    vmovdqa [rsp+68h+var_18], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 9u, flags, &v13, &v12, description);
}

/*
==============
Dvar_RegisterStringChecksum
==============
*/
const dvar_t *Dvar_RegisterStringChecksum(const char *dvarName, const char *value, unsigned int flags, const char *description)
{
  int v10; 
  DvarLimits v12; 
  DvarValue v13; 

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
  v13.integer64 = (__int64)value;
  __asm { vmovups xmm1, [rsp+68h+var_18] }
  v12 = 0ui64;
  __asm
  {
    vmovups xmm0, [rsp+68h+var_28]
    vmovdqa [rsp+68h+var_28], xmm0
    vmovdqa [rsp+68h+var_18], xmm1
  }
  v10 = atoi(dvarName);
  return Dvar_RegisterVariant(dvarName, v10, 9u, flags, &v13, &v12, description);
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

const dvar_t *__fastcall Dvar_RegisterSuperUserFloat(const char *dvarName, double value, double min, double max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  const dvar_t *v22; 
  const dvar_t *result; 
  double v27; 
  double v28; 
  double v29; 
  DvarLimits v30; 
  DvarValue v31; 

  __asm
  {
    vcomiss xmm2, xmm1
    vmovaps [rsp+98h+var_18], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps [rsp+98h+var_38], xmm8
    vmovaps xmm8, xmm2
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm1
    vcvtss2sd xmm0, xmm7, xmm7
    vmovsd  [rsp+98h+var_60], xmm0
    vcvtss2sd xmm4, xmm8, xmm8
    vmovsd  [rsp+98h+var_68], xmm4
    vcvtss2sd xmm5, xmm6, xmm6
    vmovsd  [rsp+98h+var_70], xmm5
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3683, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%g not in [%g, %g]", v27, v28, v29) )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, [rsp+98h+var_3C]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  xmm0, [rsp+98h+var_44]
    vmovss  [rsp+98h+var_44], xmm0
    vmovss  xmm0, [rsp+98h+var_3C]
    vmovss  [rsp+98h+var_4C], xmm1
    vmovss  xmm1, [rsp+98h+var_40]
    vmovss  [rsp+98h+var_3C], xmm0
    vmovss  [rsp+98h+var_58], xmm8
    vmovss  [rsp+98h+var_54], xmm7
    vmovss  [rsp+98h+var_48], xmm6
    vmovss  [rsp+98h+var_40], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  v22 = Dvar_RegisterVariant(dvarName, Checksum, 1u, flags, &v31, &v30, description);
  Dvar_DevOverrideRegistrationLevel(v22);
  __asm { vmovaps xmm6, [rsp+98h+var_18] }
  result = v22;
  __asm
  {
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
  }
  return result;
}

/*
==============
Dvar_RegisterSuperUserInt
==============
*/
const dvar_t *Dvar_RegisterSuperUserInt(const char *dvarName, int value, int min, int max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  const dvar_t *v13; 
  DvarLimits v15; 
  DvarValue v16; 

  if ( (min > value || value > max) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3632, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%i not in [%i, %i]", value, min, max) )
    __debugbreak();
  v16.integer = value;
  __asm { vmovups xmm1, xmmword ptr [rsp+68h+var_18] }
  v15.integer64.min = __PAIR64__(max, min);
  __asm
  {
    vmovups xmm0, [rsp+68h+var_28]
    vmovdqa [rsp+68h+var_28], xmm0
    vmovdqa xmmword ptr [rsp+68h+var_18], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  v13 = Dvar_RegisterVariant(dvarName, Checksum, 5u, flags, &v16, &v15, description);
  Dvar_DevOverrideRegistrationLevel(v13);
  return v13;
}

/*
==============
Dvar_RegisterSuperUserVec3
==============
*/
const dvar_t *Dvar_RegisterSuperUserVec3(const char *dvarName, float x, float y, float z, float min, float max, unsigned int flags, const char *description)
{
  const dvar_t *v10; 
  float v12; 
  float v13; 

  __asm
  {
    vmovss  xmm0, [rsp+48h+max]
    vmovss  xmm4, [rsp+48h+min]
    vmovss  [rsp+48h+var_20], xmm0
    vmovss  [rsp+48h+var_28], xmm4
  }
  v10 = Dvar_RegisterVec3(dvarName, x, y, z, v12, v13, flags, description);
  Dvar_DevOverrideRegistrationLevel(v10);
  return v10;
}

/*
==============
Dvar_RegisterSuperUserVec3Color
==============
*/

const dvar_t *__fastcall Dvar_RegisterSuperUserVec3Color(const char *dvarName, double x, double y, double z, float max, unsigned int flags, const char *description)
{
  bool v14; 
  bool v21; 
  bool v25; 
  bool v28; 
  unsigned int Checksum; 
  const dvar_t *v38; 
  const dvar_t *result; 
  _BYTE v47[32]; 
  double v48; 
  double v49; 
  double v50; 
  DvarLimits v51; 
  DvarValue v52; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  v14 = (unsigned __int64)v47 == _security_cookie;
  __asm
  {
    vmovss  xmm6, [rsp+0E8h+max]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
    vmovaps xmm10, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm8, xmm1
  }
  if ( (unsigned __int64)v47 == _security_cookie )
  {
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3772, ASSERT_TYPE_ASSERT, "(max > 0.0f)", (const char *)&queryFormat, "max > 0.0f");
    v14 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm8, xmm7
    vxorpd  xmm11, xmm11, xmm11
    vcomiss xmm8, xmm6
  }
  if ( !v14 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+0E8h+var_B8], xmm11
      vmovsd  [rsp+0E8h+var_C0], xmm1
    }
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3773, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( x ) && ( x ) <= ( max )", "x not in [0.0f, max]\n\t%g not in [%g, %g]", v48, v49, v50);
    v14 = !v25;
    if ( v25 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm9, xmm7
    vcomiss xmm9, xmm6
  }
  if ( !v14 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm9, xmm9
      vmovsd  [rsp+0E8h+var_B8], xmm11
      vmovsd  [rsp+0E8h+var_C0], xmm1
    }
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3774, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( y ) && ( y ) <= ( max )", "y not in [0.0f, max]\n\t%g not in [%g, %g]", v48, v49, v50);
    v14 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm10, xmm7
    vcomiss xmm10, xmm6
  }
  if ( !v14 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm10, xmm10
      vmovsd  [rsp+0E8h+var_B8], xmm11
      vmovsd  [rsp+0E8h+var_C0], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3775, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( z ) && ( z ) <= ( max )", "z not in [0.0f, max]\n\t%g not in [%g, %g]", v48, v49, v50) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm1, [rsp+0E8h+var_98]
    vmovss  xmm0, dword ptr [rsp+0E8h+var_98+0Ch]
    vmovss  xmm1, xmm1, xmm8
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
    vmovups [rsp+0E8h+var_98], xmm1
    vmovdqa [rsp+0E8h+var_98], xmm1
    vmovss  [rsp+0E8h+var_A8], xmm7
    vmovss  [rsp+0E8h+var_A4], xmm6
    vmovss  [rsp+0E8h+var_A0], xmm7
    vmovss  [rsp+0E8h+var_9C], xmm0
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  v38 = Dvar_RegisterVariant(dvarName, Checksum, 0xBu, flags, &v52, &v51, description);
  Dvar_DevOverrideRegistrationLevel(v38);
  result = v38;
  _R11 = &v53;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
Dvar_RegisterUInt64
==============
*/
const dvar_t *Dvar_RegisterUInt64(const char *dvarName, unsigned __int64 value, unsigned __int64 min, unsigned __int64 max, unsigned int flags, const char *description)
{
  unsigned int Checksum; 
  int v14; 
  int v15; 
  int v16; 
  DvarLimits v17; 
  DvarValue v18; 

  if ( min > value || value > max )
  {
    v16 = max;
    v15 = min;
    v14 = value;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3670, ASSERT_TYPE_ASSERT, "( min ) <= ( value ) && ( value ) <= ( max )", "value not in [min, max]\n\t%i not in [%i, %i]", v14, v15, v16) )
      __debugbreak();
  }
  v18.integer64 = value;
  __asm { vmovups xmm1, xmmword ptr [rsp+68h+var_18] }
  v17.integer64.min = min;
  v17.integer64.max = max;
  __asm
  {
    vmovups xmm0, [rsp+68h+var_28]
    vmovdqa [rsp+68h+var_28], xmm0
    vmovdqa xmmword ptr [rsp+68h+var_18], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  return Dvar_RegisterVariant(dvarName, Checksum, 7u, flags, &v18, &v17, description);
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
  const char *v16; 
  const char *name; 
  __int64 v27; 
  const char *v28; 
  signed __int64 v29; 
  char v30; 
  __int64 v31; 
  char v32; 
  const char *UnobfuscatedName; 
  const char *v34; 
  DvarLevel v35; 
  DvarValue v36; 
  DvarValue v37; 

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
  v16 = ObfuscatedName;
  if ( MalleableVar )
  {
    _RAX = domain;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = value;
    __asm
    {
      vmovups [rsp+88h+var_38], xmm0
      vmovups xmm1, xmmword ptr [rax]
    }
    LOBYTE(v35) = v12;
    __asm { vmovups [rsp+88h+var_48], xmm1 }
    Dvar_Reregister(MalleableVar, v16, type, flags, &v36, (DvarLimits *)&v37, v35, description);
    if ( (unsigned __int8)(*dvarName - 97) <= 0x19u || (unsigned __int8)(*dvarName - 65) <= 0x19u )
    {
      name = MalleableVar->name;
      v27 = 0x7FFFFFFFi64;
      v28 = Dvar_DevGetObfuscatedName(dvarName);
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v29 = v28 - name;
      do
      {
        v30 = name[v29];
        v31 = v27;
        v32 = *name++;
        --v27;
        if ( !v31 )
          break;
        if ( v30 != v32 )
        {
          UnobfuscatedName = Dvar_DevGetUnobfuscatedName(MalleableVar->name);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3587, ASSERT_TYPE_ASSERT, "(!I_isalpha(dvarName[0]) || !I_strcmp( Dvar_DevGetObfuscatedName( dvarName ), dvar->name ))", "%s\n\tDvar %s appears to have a checksum collision with dvar %s", "!I_isalpha(dvarName[0]) || !I_strcmp( Dvar_DevGetObfuscatedName( dvarName ), dvar->name )", dvarName, UnobfuscatedName) )
            __debugbreak();
          break;
        }
      }
      while ( v30 );
    }
    v34 = Dvar_DevGetObfuscatedName(dvarName);
    Dvar_SetName(MalleableVar, v34);
    return MalleableVar;
  }
  else
  {
    _RCX = domain;
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _RCX = value;
    __asm
    {
      vmovups [rsp+88h+var_48], xmm0
      vmovups xmm1, xmmword ptr [rcx]
    }
    LOBYTE(v35) = v12;
    __asm { vmovups [rsp+88h+var_38], xmm1 }
    return Dvar_RegisterNew(ObfuscatedName, checksum, type, flags, &v37, (DvarLimits *)&v36, v35, description);
  }
}

/*
==============
Dvar_RegisterVec2
==============
*/

dvar_t *__fastcall Dvar_RegisterVec2(const char *dvarName, const vec2_t *value, double min, double max, unsigned int flags, const char *description)
{
  bool v12; 
  bool v20; 
  unsigned int Checksum; 
  dvar_t *result; 
  _BYTE v36[32]; 
  double v37; 
  double v38; 
  double v39; 
  DvarLimits v40; 
  DvarValue v41; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  v12 = (unsigned __int64)v36 == _security_cookie;
  __asm
  {
    vmovss  xmm9, dword ptr [rdx]
    vcomiss xmm2, xmm9
    vmovss  xmm8, dword ptr [rdx+4]
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( (unsigned __int64)v36 != _security_cookie )
    goto LABEL_12;
  __asm { vcomiss xmm9, xmm3 }
  if ( (unsigned __int64)v36 != _security_cookie )
  {
LABEL_12:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+var_90], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_98], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0C8h+var_A0], xmm2
    }
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3711, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v37, v38, v39);
    v12 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm8 }
  if ( !v12 )
    goto LABEL_7;
  __asm { vcomiss xmm8, xmm6 }
  if ( !v12 )
  {
LABEL_7:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+var_90], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_98], xmm1
      vcvtss2sd xmm2, xmm8, xmm8
      vmovsd  [rsp+0C8h+var_A0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3712, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v37, v38, v39) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0C8h+var_78+0Ch]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0C8h+var_80], xmm0
    vmovups xmm0, [rsp+0C8h+var_78]
    vmovss  xmm0, xmm0, xmm9
    vinsertps xmm0, xmm0, xmm8, 10h
    vmovups [rsp+0C8h+var_78], xmm0
    vmovdqa [rsp+0C8h+var_78], xmm0
    vmovss  [rsp+0C8h+var_88], xmm7
    vmovss  [rsp+0C8h+var_84], xmm6
    vmovss  [rsp+0C8h+var_7C], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 2u, flags, &v41, &v40, description);
  _R11 = &v42;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
Dvar_RegisterVec2
==============
*/

dvar_t *__fastcall Dvar_RegisterVec2(const char *dvarName, const vec2_t *value, double min, double max, float devguistep, unsigned int flags, const char *description)
{
  bool v13; 
  bool v23; 
  unsigned int Checksum; 
  dvar_t *result; 
  _BYTE v40[32]; 
  double v41; 
  double v42; 
  double v43; 
  DvarLimits v44; 
  DvarValue v45; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  v13 = (unsigned __int64)v40 == _security_cookie;
  __asm
  {
    vmovss  xmm9, dword ptr [rdx]
    vcomiss xmm2, xmm9
    vmovss  xmm10, [rsp+0D8h+devguistep]
    vmovss  xmm8, dword ptr [rdx+4]
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( (unsigned __int64)v40 != _security_cookie )
    goto LABEL_12;
  __asm { vcomiss xmm9, xmm3 }
  if ( (unsigned __int64)v40 != _security_cookie )
  {
LABEL_12:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3846, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v41, v42, v43);
    v13 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm8 }
  if ( !v13 )
    goto LABEL_7;
  __asm { vcomiss xmm8, xmm6 }
  if ( !v13 )
  {
LABEL_7:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vcvtss2sd xmm2, xmm8, xmm8
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3847, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v41, v42, v43) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm1, [rsp+0D8h+var_88]
    vmovss  xmm0, dword ptr [rsp+0D8h+var_88+0Ch]
    vmovss  xmm1, xmm1, xmm9
    vinsertps xmm1, xmm1, xmm8, 10h
    vmovups [rsp+0D8h+var_88], xmm1
    vmovdqa [rsp+0D8h+var_88], xmm1
    vmovss  [rsp+0D8h+var_98], xmm7
    vmovss  [rsp+0D8h+var_94], xmm6
    vmovss  [rsp+0D8h+var_90], xmm10
    vmovss  [rsp+0D8h+var_8C], xmm0
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 2u, flags, &v45, &v44, description);
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
Dvar_RegisterVec2
==============
*/

dvar_t *__fastcall Dvar_RegisterVec2(const char *dvarName, double x, double y, double min, float max, unsigned int flags, const char *description)
{
  bool v13; 
  bool v21; 
  unsigned int Checksum; 
  dvar_t *result; 
  _BYTE v37[32]; 
  double v38; 
  double v39; 
  double v40; 
  DvarLimits v41; 
  DvarValue v42; 
  char v43; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  v13 = (unsigned __int64)v37 == _security_cookie;
  __asm
  {
    vcomiss xmm3, xmm1
    vmovss  xmm6, [rsp+0C8h+max]
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm9, xmm1
  }
  if ( (unsigned __int64)v37 != _security_cookie )
    goto LABEL_12;
  __asm { vcomiss xmm1, xmm6 }
  if ( (unsigned __int64)v37 != _security_cookie )
  {
LABEL_12:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+var_90], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_98], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0C8h+var_A0], xmm2
    }
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3711, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v38, v39, v40);
    v13 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm8 }
  if ( !v13 )
    goto LABEL_7;
  __asm { vcomiss xmm8, xmm6 }
  if ( !v13 )
  {
LABEL_7:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+var_90], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_98], xmm1
      vcvtss2sd xmm2, xmm8, xmm8
      vmovsd  [rsp+0C8h+var_A0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3712, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v38, v39, v40) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0C8h+var_78+0Ch]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0C8h+var_80], xmm0
    vmovups xmm0, [rsp+0C8h+var_78]
    vmovss  xmm0, xmm0, xmm9
    vinsertps xmm0, xmm0, xmm8, 10h
    vmovups [rsp+0C8h+var_78], xmm0
    vmovdqa [rsp+0C8h+var_78], xmm0
    vmovss  [rsp+0C8h+var_88], xmm7
    vmovss  [rsp+0C8h+var_84], xmm6
    vmovss  [rsp+0C8h+var_7C], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 2u, flags, &v42, &v41, description);
  _R11 = &v43;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
Dvar_RegisterVec2
==============
*/

dvar_t *__fastcall Dvar_RegisterVec2(const char *dvarName, double x, double y, double min, float max, float devguistep, unsigned int flags, const char *description)
{
  bool v13; 
  bool v22; 
  unsigned int Checksum; 
  dvar_t *result; 
  _BYTE v39[32]; 
  double v40; 
  double v41; 
  double v42; 
  DvarLimits v43; 
  DvarValue v44; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  v13 = (unsigned __int64)v39 == _security_cookie;
  __asm
  {
    vcomiss xmm3, xmm1
    vmovss  xmm6, [rsp+0C8h+max]
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm9, xmm1
  }
  if ( (unsigned __int64)v39 != _security_cookie )
    goto LABEL_12;
  __asm { vcomiss xmm1, xmm6 }
  if ( (unsigned __int64)v39 != _security_cookie )
  {
LABEL_12:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+var_90], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_98], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0C8h+var_A0], xmm2
    }
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3846, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v40, v41, v42);
    v13 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm8 }
  if ( !v13 )
    goto LABEL_7;
  __asm { vcomiss xmm8, xmm6 }
  if ( !v13 )
  {
LABEL_7:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+var_90], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_98], xmm1
      vcvtss2sd xmm2, xmm8, xmm8
      vmovsd  [rsp+0C8h+var_A0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3847, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v40, v41, v42) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0C8h+var_78+0Ch]
    vmovss  xmm0, [rsp+0C8h+devguistep]
    vmovss  [rsp+0C8h+var_80], xmm0
    vmovups xmm0, [rsp+0C8h+var_78]
    vmovss  xmm0, xmm0, xmm9
    vinsertps xmm0, xmm0, xmm8, 10h
    vmovups [rsp+0C8h+var_78], xmm0
    vmovdqa [rsp+0C8h+var_78], xmm0
    vmovss  [rsp+0C8h+var_88], xmm7
    vmovss  [rsp+0C8h+var_84], xmm6
    vmovss  [rsp+0C8h+var_7C], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 2u, flags, &v44, &v43, description);
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
Dvar_RegisterVec3
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec3(const char *dvarName, const vec3_t *value, double min, double max, unsigned int flags, const char *description)
{
  float v10; 
  float v11; 

  __asm
  {
    vmovss  xmm1, dword ptr [rdx]; x
    vmovss  [rsp+48h+var_20], xmm3
    vmovss  xmm3, dword ptr [rdx+8]; z
    vmovss  [rsp+48h+var_28], xmm2
    vmovss  xmm2, dword ptr [rdx+4]; y
  }
  return Dvar_RegisterVec3(dvarName, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v10, v11, flags, description);
}

/*
==============
Dvar_RegisterVec3
==============
*/

dvar_t *__fastcall Dvar_RegisterVec3(const char *dvarName, const vec3_t *value, double min, double max, float devguistep, unsigned int flags, const char *description)
{
  bool v14; 
  bool v25; 
  bool v29; 
  unsigned int Checksum; 
  dvar_t *result; 
  _BYTE v48[32]; 
  double v49; 
  double v50; 
  double v51; 
  DvarLimits v52; 
  DvarValue v53; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  v14 = (unsigned __int64)v48 == _security_cookie;
  __asm
  {
    vmovss  xmm10, dword ptr [rdx]
    vcomiss xmm2, xmm10
    vmovss  xmm11, [rsp+0E8h+devguistep]
    vmovss  xmm8, dword ptr [rdx+8]
    vmovss  xmm9, dword ptr [rdx+4]
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( (unsigned __int64)v48 != _security_cookie )
    goto LABEL_16;
  __asm { vcomiss xmm10, xmm3 }
  if ( (unsigned __int64)v48 != _security_cookie )
  {
LABEL_16:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm10, xmm10
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3868, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v49, v50, v51);
    v14 = !v25;
    if ( v25 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm9 }
  if ( !v14 )
    goto LABEL_17;
  __asm { vcomiss xmm9, xmm6 }
  if ( !v14 )
  {
LABEL_17:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3869, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v49, v50, v51);
    v14 = !v29;
    if ( v29 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm8 }
  if ( !v14 )
    goto LABEL_11;
  __asm { vcomiss xmm8, xmm6 }
  if ( !v14 )
  {
LABEL_11:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm8, xmm8
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3870, ASSERT_TYPE_ASSERT, "( min ) <= ( z ) && ( z ) <= ( max )", "z not in [min, max]\n\t%g not in [%g, %g]", v49, v50, v51) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm1, [rsp+0E8h+var_98]
    vmovss  xmm0, dword ptr [rsp+0E8h+var_98+0Ch]
    vmovss  xmm1, xmm1, xmm10
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm8, 20h ; ' '
    vmovups [rsp+0E8h+var_98], xmm1
    vmovdqa [rsp+0E8h+var_98], xmm1
    vmovss  [rsp+0E8h+var_A8], xmm7
    vmovss  [rsp+0E8h+var_A4], xmm6
    vmovss  [rsp+0E8h+var_A0], xmm11
    vmovss  [rsp+0E8h+var_9C], xmm0
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 3u, flags, &v53, &v52, description);
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
Dvar_RegisterVec3
==============
*/

dvar_t *__fastcall Dvar_RegisterVec3(const char *dvarName, double x, double y, double z, float min, float max, unsigned int flags, const char *description)
{
  bool v15; 
  bool v24; 
  bool v27; 
  unsigned int Checksum; 
  dvar_t *result; 
  _BYTE v45[32]; 
  double v46; 
  double v47; 
  double v48; 
  DvarLimits v49; 
  DvarValue v50; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  v15 = (unsigned __int64)v45 == _security_cookie;
  __asm
  {
    vmovss  xmm7, [rsp+0D8h+min]
    vcomiss xmm7, xmm1
    vmovss  xmm6, [rsp+0D8h+max]
    vmovaps xmm9, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm10, xmm1
  }
  if ( (unsigned __int64)v45 != _security_cookie )
    goto LABEL_16;
  __asm { vcomiss xmm1, xmm6 }
  if ( (unsigned __int64)v45 != _security_cookie )
  {
LABEL_16:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vcvtss2sd xmm2, xmm10, xmm10
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3735, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v46, v47, v48);
    v15 = !v24;
    if ( v24 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm8 }
  if ( !v15 )
    goto LABEL_17;
  __asm { vcomiss xmm8, xmm6 }
  if ( !v15 )
  {
LABEL_17:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vcvtss2sd xmm2, xmm8, xmm8
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3736, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v46, v47, v48);
    v15 = !v27;
    if ( v27 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm9 }
  if ( !v15 )
    goto LABEL_11;
  __asm { vcomiss xmm9, xmm6 }
  if ( !v15 )
  {
LABEL_11:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3737, ASSERT_TYPE_ASSERT, "( min ) <= ( z ) && ( z ) <= ( max )", "z not in [min, max]\n\t%g not in [%g, %g]", v46, v47, v48) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0D8h+var_88+0Ch]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0D8h+var_90], xmm0
    vmovups xmm0, [rsp+0D8h+var_88]
    vmovss  xmm0, xmm0, xmm10
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
    vmovups [rsp+0D8h+var_88], xmm0
    vmovdqa [rsp+0D8h+var_88], xmm0
    vmovss  [rsp+0D8h+var_98], xmm7
    vmovss  [rsp+0D8h+var_94], xmm6
    vmovss  [rsp+0D8h+var_8C], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 3u, flags, &v50, &v49, description);
  _R11 = &v51;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
Dvar_RegisterVec3
==============
*/

dvar_t *__fastcall Dvar_RegisterVec3(const char *dvarName, double x, double y, double z, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  bool v15; 
  bool v25; 
  bool v29; 
  unsigned int Checksum; 
  dvar_t *result; 
  _BYTE v48[32]; 
  double v49; 
  double v50; 
  double v51; 
  DvarLimits v52; 
  DvarValue v53; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  v15 = (unsigned __int64)v48 == _security_cookie;
  __asm
  {
    vmovss  xmm7, [rsp+0D8h+min]
    vcomiss xmm7, xmm1
    vmovss  xmm6, [rsp+0D8h+max]
    vmovaps xmm9, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm10, xmm1
  }
  if ( (unsigned __int64)v48 != _security_cookie )
    goto LABEL_16;
  __asm { vcomiss xmm1, xmm6 }
  if ( (unsigned __int64)v48 != _security_cookie )
  {
LABEL_16:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vcvtss2sd xmm2, xmm10, xmm10
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3868, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v49, v50, v51);
    v15 = !v25;
    if ( v25 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm8 }
  if ( !v15 )
    goto LABEL_17;
  __asm { vcomiss xmm8, xmm6 }
  if ( !v15 )
  {
LABEL_17:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vcvtss2sd xmm2, xmm8, xmm8
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3869, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v49, v50, v51);
    v15 = !v29;
    if ( v29 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm9 }
  if ( !v15 )
    goto LABEL_11;
  __asm { vcomiss xmm9, xmm6 }
  if ( !v15 )
  {
LABEL_11:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3870, ASSERT_TYPE_ASSERT, "( min ) <= ( z ) && ( z ) <= ( max )", "z not in [min, max]\n\t%g not in [%g, %g]", v49, v50, v51) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0D8h+var_88+0Ch]
    vmovss  xmm0, [rsp+0D8h+devguistep]
    vmovss  [rsp+0D8h+var_90], xmm0
    vmovups xmm0, [rsp+0D8h+var_88]
    vmovss  xmm0, xmm0, xmm10
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
    vmovups [rsp+0D8h+var_88], xmm0
    vmovdqa [rsp+0D8h+var_88], xmm0
    vmovss  [rsp+0D8h+var_98], xmm7
    vmovss  [rsp+0D8h+var_94], xmm6
    vmovss  [rsp+0D8h+var_8C], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 3u, flags, &v53, &v52, description);
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
Dvar_RegisterVec3Color
==============
*/

dvar_t *__fastcall Dvar_RegisterVec3Color(const char *dvarName, double x, double y, double z, float max, unsigned int flags, const char *description)
{
  bool v14; 
  bool v21; 
  bool v25; 
  bool v28; 
  unsigned int Checksum; 
  dvar_t *result; 
  _BYTE v46[32]; 
  double v47; 
  double v48; 
  double v49; 
  DvarLimits v50; 
  DvarValue v51; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  v14 = (unsigned __int64)v46 == _security_cookie;
  __asm
  {
    vmovss  xmm6, [rsp+0E8h+max]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
    vmovaps xmm10, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm8, xmm1
  }
  if ( (unsigned __int64)v46 == _security_cookie )
  {
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3772, ASSERT_TYPE_ASSERT, "(max > 0.0f)", (const char *)&queryFormat, "max > 0.0f");
    v14 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm8, xmm7
    vxorpd  xmm11, xmm11, xmm11
    vcomiss xmm8, xmm6
  }
  if ( !v14 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+0E8h+var_B8], xmm11
      vmovsd  [rsp+0E8h+var_C0], xmm1
    }
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3773, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( x ) && ( x ) <= ( max )", "x not in [0.0f, max]\n\t%g not in [%g, %g]", v47, v48, v49);
    v14 = !v25;
    if ( v25 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm9, xmm7
    vcomiss xmm9, xmm6
  }
  if ( !v14 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm9, xmm9
      vmovsd  [rsp+0E8h+var_B8], xmm11
      vmovsd  [rsp+0E8h+var_C0], xmm1
    }
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3774, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( y ) && ( y ) <= ( max )", "y not in [0.0f, max]\n\t%g not in [%g, %g]", v47, v48, v49);
    v14 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm10, xmm7
    vcomiss xmm10, xmm6
  }
  if ( !v14 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm10, xmm10
      vmovsd  [rsp+0E8h+var_B8], xmm11
      vmovsd  [rsp+0E8h+var_C0], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3775, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( z ) && ( z ) <= ( max )", "z not in [0.0f, max]\n\t%g not in [%g, %g]", v47, v48, v49) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm1, [rsp+0E8h+var_98]
    vmovss  xmm0, dword ptr [rsp+0E8h+var_98+0Ch]
    vmovss  xmm1, xmm1, xmm8
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
    vmovups [rsp+0E8h+var_98], xmm1
    vmovdqa [rsp+0E8h+var_98], xmm1
    vmovss  [rsp+0E8h+var_A8], xmm7
    vmovss  [rsp+0E8h+var_A4], xmm6
    vmovss  [rsp+0E8h+var_A0], xmm7
    vmovss  [rsp+0E8h+var_9C], xmm0
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 0xBu, flags, &v51, &v50, description);
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
Dvar_RegisterVec4
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec4(const char *dvarName, const vec4_t *value, double min, double max, unsigned int flags, const char *description)
{
  float v11; 
  float v12; 
  float v13; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vmovss  xmm1, dword ptr [rdx]; x
    vmovss  [rsp+58h+var_28], xmm3
    vmovss  xmm3, dword ptr [rdx+8]; z
    vmovss  [rsp+58h+var_30], xmm2
    vmovss  xmm2, dword ptr [rdx+4]; y
    vmovss  [rsp+58h+var_38], xmm0
  }
  return Dvar_RegisterVec4(dvarName, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v11, v12, v13, flags, description);
}

/*
==============
Dvar_RegisterVec4
==============
*/

const dvar_t *__fastcall Dvar_RegisterVec4(const char *dvarName, const vec4_t *value, double min, double max, float devguistep, unsigned int flags, const char *description)
{
  float v13; 
  float v14; 
  float v15; 
  float v16; 

  __asm
  {
    vmovss  xmm0, [rsp+58h+devguistep]
    vmovss  xmm4, dword ptr [rdx+0Ch]
    vmovss  xmm1, dword ptr [rdx]; x
    vmovss  [rsp+58h+var_20], xmm0
    vmovss  [rsp+58h+var_28], xmm3
    vmovss  xmm3, dword ptr [rdx+8]; z
    vmovss  [rsp+58h+var_30], xmm2
    vmovss  xmm2, dword ptr [rdx+4]; y
    vmovss  [rsp+58h+var_38], xmm4
  }
  return Dvar_RegisterVec4(dvarName, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v13, v14, v15, v16, flags, description);
}

/*
==============
Dvar_RegisterVec4
==============
*/

dvar_t *__fastcall Dvar_RegisterVec4(const char *dvarName, double x, double y, double z, float w, float min, float max, unsigned int flags, const char *description)
{
  bool v17; 
  bool v26; 
  bool v29; 
  bool v32; 
  unsigned int Checksum; 
  dvar_t *result; 
  _BYTE v51[32]; 
  double v52; 
  double v53; 
  double v54; 
  DvarLimits v55; 
  DvarValue v56; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  v17 = (unsigned __int64)v51 == _security_cookie;
  __asm
  {
    vmovss  xmm7, [rsp+0E8h+min]
    vcomiss xmm7, xmm1
    vmovss  xmm6, [rsp+0E8h+max]
    vmovaps xmm11, xmm3
    vmovaps xmm10, xmm2
    vmovaps xmm8, xmm1
  }
  if ( (unsigned __int64)v51 != _security_cookie )
    goto LABEL_20;
  __asm { vcomiss xmm1, xmm6 }
  if ( (unsigned __int64)v51 != _security_cookie )
  {
LABEL_20:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm8, xmm8
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3804, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v52, v53, v54);
    v17 = !v26;
    if ( v26 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm10 }
  if ( !v17 )
    goto LABEL_21;
  __asm { vcomiss xmm10, xmm6 }
  if ( !v17 )
  {
LABEL_21:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm10, xmm10
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3805, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v52, v53, v54);
    v17 = !v29;
    if ( v29 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm11 }
  if ( !v17 )
    goto LABEL_22;
  __asm { vcomiss xmm11, xmm6 }
  if ( !v17 )
  {
LABEL_22:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm11, xmm11
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3806, ASSERT_TYPE_ASSERT, "( min ) <= ( z ) && ( z ) <= ( max )", "z not in [min, max]\n\t%g not in [%g, %g]", v52, v53, v54);
    v17 = !v32;
    if ( v32 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, [rsp+0E8h+w]
    vcomiss xmm7, xmm9
  }
  if ( !v17 )
    goto LABEL_15;
  __asm { vcomiss xmm9, xmm6 }
  if ( !v17 )
  {
LABEL_15:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3807, ASSERT_TYPE_ASSERT, "( min ) <= ( w ) && ( w ) <= ( max )", "w not in [min, max]\n\t%g not in [%g, %g]", v52, v53, v54) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0E8h+var_98+0Ch]
    vinsertps xmm8, xmm8, xmm10, 10h
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm8, xmm8, xmm11, 20h ; ' '
    vinsertps xmm8, xmm8, xmm9, 30h ; '0'
    vmovups [rsp+0E8h+var_98], xmm8
    vmovdqa [rsp+0E8h+var_98], xmm8
    vmovss  [rsp+0E8h+var_A8], xmm7
    vmovss  [rsp+0E8h+var_A4], xmm6
    vmovss  [rsp+0E8h+var_A0], xmm0
    vmovss  [rsp+0E8h+var_9C], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 4u, flags, &v56, &v55, description);
  _R11 = &v57;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
Dvar_RegisterVec4
==============
*/

dvar_t *__fastcall Dvar_RegisterVec4(const char *dvarName, double x, double y, double z, float w, float min, float max, float devguistep, unsigned int flags, const char *description)
{
  bool v17; 
  bool v27; 
  bool v31; 
  bool v35; 
  unsigned int Checksum; 
  dvar_t *result; 
  _BYTE v55[32]; 
  double v56; 
  double v57; 
  double v58; 
  DvarLimits v59; 
  DvarValue v60; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  v17 = (unsigned __int64)v55 == _security_cookie;
  __asm
  {
    vmovss  xmm7, [rsp+0E8h+min]
    vcomiss xmm7, xmm1
    vmovss  xmm6, [rsp+0E8h+max]
    vmovaps xmm11, xmm3
    vmovaps xmm10, xmm2
    vmovaps xmm8, xmm1
  }
  if ( (unsigned __int64)v55 != _security_cookie )
    goto LABEL_20;
  __asm { vcomiss xmm1, xmm6 }
  if ( (unsigned __int64)v55 != _security_cookie )
  {
LABEL_20:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm8, xmm8
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3891, ASSERT_TYPE_ASSERT, "( min ) <= ( x ) && ( x ) <= ( max )", "x not in [min, max]\n\t%g not in [%g, %g]", v56, v57, v58);
    v17 = !v27;
    if ( v27 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm10 }
  if ( !v17 )
    goto LABEL_21;
  __asm { vcomiss xmm10, xmm6 }
  if ( !v17 )
  {
LABEL_21:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm10, xmm10
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3892, ASSERT_TYPE_ASSERT, "( min ) <= ( y ) && ( y ) <= ( max )", "y not in [min, max]\n\t%g not in [%g, %g]", v56, v57, v58);
    v17 = !v31;
    if ( v31 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm11 }
  if ( !v17 )
    goto LABEL_22;
  __asm { vcomiss xmm11, xmm6 }
  if ( !v17 )
  {
LABEL_22:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm11, xmm11
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3893, ASSERT_TYPE_ASSERT, "( min ) <= ( z ) && ( z ) <= ( max )", "z not in [min, max]\n\t%g not in [%g, %g]", v56, v57, v58);
    v17 = !v35;
    if ( v35 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, [rsp+0E8h+w]
    vcomiss xmm7, xmm9
  }
  if ( !v17 )
    goto LABEL_15;
  __asm { vcomiss xmm9, xmm6 }
  if ( !v17 )
  {
LABEL_15:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3894, ASSERT_TYPE_ASSERT, "( min ) <= ( w ) && ( w ) <= ( max )", "w not in [min, max]\n\t%g not in [%g, %g]", v56, v57, v58) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0E8h+var_98+0Ch]
    vmovss  xmm0, [rsp+0E8h+devguistep]
    vinsertps xmm8, xmm8, xmm10, 10h
    vinsertps xmm8, xmm8, xmm11, 20h ; ' '
    vinsertps xmm8, xmm8, xmm9, 30h ; '0'
    vmovups [rsp+0E8h+var_98], xmm8
    vmovdqa [rsp+0E8h+var_98], xmm8
    vmovss  [rsp+0E8h+var_A8], xmm7
    vmovss  [rsp+0E8h+var_A4], xmm6
    vmovss  [rsp+0E8h+var_A0], xmm0
    vmovss  [rsp+0E8h+var_9C], xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  result = Dvar_RegisterVariant(dvarName, Checksum, 4u, flags, &v60, &v59, description);
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
Dvar_ReinterpretDvar
==============
*/
void Dvar_ReinterpretDvar(dvar_t *dvar, const char *dvarName, unsigned __int8 type, unsigned int flags, DvarValue *value, DvarLimits *domain)
{
  unsigned int v9; 
  unsigned int v15; 
  const char *string; 
  const char *name; 
  const char *v20; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  DvarValue dest; 
  DvarValue v30; 

  _RBX = dvar;
  v9 = dvar->flags;
  if ( (v9 & 0x100) != 0 && (flags & 0x100) == 0 )
  {
    _RAX = value;
    _R14 = domain;
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm6
      vmovups xmm6, xmmword ptr [rax]
    }
    v15 = v9;
    if ( (v9 & 0x8000) != 0 && (flags & 0x40) != 0 && (v9 & 0x2804) == 0 )
    {
      __asm { vmovups xmm0, xmmword ptr [r14] }
      string = _RBX->reset.string;
      __asm { vmovups xmmword ptr [rsp+78h+dest], xmm0 }
      _RAX = Dvar_StringToValue(&v30, type, (const DvarLimits *)&dest, string);
      __asm { vmovups xmm6, xmmword ptr [rax] }
      v15 = _RBX->flags;
    }
    if ( (v15 & 0x100) == 0 )
    {
      name = _RBX->name;
      _RBX->flags = v15 | 0x100;
      if ( *name )
        v20 = SL_AllocString_Copy(name);
      else
        v20 = (char *)&queryFormat.fmt + 3;
      _RBX->name = v20;
    }
    if ( _RBX->type != 9 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+38h]
        vmovups xmmword ptr [rsp+78h+dest], xmm0
      }
      v22 = Dvar_ValueToString(_RBX, &dest);
      Dvar_CopyString(v22, &_RBX->current);
      v23 = _RBX->latched.string;
      if ( v23 && v23 != _RBX->current.string && v23 != _RBX->reset.string && *v23 )
        SL_AllocString_Free(v23);
      v24 = _RBX->current.string;
      _RBX->latched.integer64 = 0i64;
      Dvar_WeakCopyString(v24, &_RBX->latched);
      v25 = _RBX->reset.string;
      if ( v25 && v25 != _RBX->current.string && v25 != _RBX->latched.string && *v25 )
        SL_AllocString_Free(v25);
      _RBX->reset.integer64 = 0i64;
      v26 = Dvar_DisplayableResetValue(_RBX);
      Dvar_AssignResetStringValue(_RBX, &dest, v26);
      _RBX->reset.integer64 = dest.integer64;
      _RBX->type = 9;
    }
    if ( *_RBX->name )
      SL_AllocString_Free(_RBX->name);
    __asm { vmovups xmm0, xmmword ptr [r14] }
    _RBX->flags &= 0xFFF7FEFF;
    _RBX->name = dvarName;
    __asm
    {
      vmovups xmmword ptr [rsp+78h+dest], xmm0
      vmovdqa [rsp+78h+var_38], xmm6
    }
    Dvar_MakeExplicitType(_RBX, dvarName, type, flags, &v30, (DvarLimits *)&dest);
    __asm { vmovaps xmm6, [rsp+78h+var_28] }
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
  unsigned __int8 v4; 
  const char *v7; 
  const char *v8; 
  const char *v10; 
  const char *v11; 
  bool v12; 
  DvarValue v13; 
  DvarValue v14; 
  DvarValue v15; 
  DvarValue v16; 
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
    _RBX = &dvarPool[0].BbConstUsageFlags;
    do
    {
      if ( _RBX->initialized )
      {
        __asm { vmovups xmm0, xmmword ptr [rbx-40h] }
        v4 = _RBX[-4].codeValue.color[13];
        __asm
        {
          vmovups [rsp+1238h+var_11D8], xmm0
          vmovups xmm0, xmmword ptr [rbx+8]
          vmovups [rsp+1238h+var_11C8], xmm0
        }
        if ( !Dvar_ValuesEqual(v4, &v14, &v13) )
        {
          __asm { vmovups xmm0, xmmword ptr [rbx+8] }
          v7 = (const char *)*((_QWORD *)&_RBX[-5].codeValue.string + 1);
          __asm { vmovups [rsp+1238h+var_11B8], xmm0 }
          v8 = Dvar_ValueToString(&dvarPool[(__int64)v1], &v15);
          if ( _RBX == (BbConstUsageFlags *)104 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1549, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
            __debugbreak();
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx-40h]
            vmovups [rsp+1238h+var_11A8], xmm0
          }
          v10 = Dvar_ValueToString((const dvar_t *)(&_RBX[-5].codeValue.string + 1), &v16);
          if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
          {
            v11 = "SP";
          }
          else
          {
            v11 = "MP";
            if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
              v11 = "CP";
          }
          if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) )
          {
            if ( DLog_IsActive() )
            {
              v12 = DLog_BeginEvent(&context, "const_dvar_tracking");
              context.autoEndEvent = 1;
              if ( v12 && DLog_String(&context, "dvar", v7, 0) && DLog_String(&context, "code_value", v8, 0) && DLog_String(&context, "override_value", v10, 0) && DLog_String(&context, "game_mode", v11, 0) )
                DLog_RecordContext(&context);
            }
            else
            {
              context.error = DLOG_ERROR_NOT_ACTIVE;
            }
          }
          Com_Printf(16, " %s -- %s, %s -- %s\n", v7, v8, v10, v11);
        }
      }
      ++v1;
      _RBX = (BbConstUsageFlags *)((char *)_RBX + 128);
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
  const char *UnobfuscatedName; 
  unsigned __int8 v19; 
  const char *v20; 
  const char *v26; 
  const char *v28; 
  const char *v29; 
  unsigned __int8 v30; 
  unsigned __int8 v33; 
  __int64 v36; 
  DvarValue v37; 
  DvarValue v38; 

  _RDI = dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3226, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3227, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
    __debugbreak();
  v12 = _RDI->type;
  if ( v12 != type && (_RDI->flags & 0x100) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3228, ASSERT_TYPE_ASSERT, "(dvar->type == type || (dvar->flags & (1 << 8)))", "%s\n\t%s: %i != %i", "dvar->type == type || (dvar->flags & DVAR_EXTERNAL)", dvarName, v12, type) )
    __debugbreak();
  v13 = _RDI->flags;
  _R12 = domain;
  _RSI = resetValue;
  if ( ((flags ^ v13) & 0x100) != 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmm1, xmmword ptr [rsi]
      vmovups [rsp+88h+var_38], xmm0
      vmovups [rsp+88h+var_28], xmm1
    }
    Dvar_ReinterpretDvar(_RDI, dvarName, type, flags, &v38, (DvarLimits *)&v37);
    v13 = _RDI->flags;
  }
  if ( (((unsigned __int8)flags ^ (unsigned __int8)v13) & 0x10) != 0 )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(_RDI->name);
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144173EC0, 1201i64, UnobfuscatedName);
    v13 = _RDI->flags;
  }
  if ( (v13 & 0x100) != 0 )
  {
    v19 = _RDI->type;
    if ( v19 != type )
    {
      if ( v19 != 9 )
      {
        v20 = Dvar_DevGetUnobfuscatedName(_RDI->name);
        LODWORD(v36) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3285, ASSERT_TYPE_ASSERT, "(dvar->type == DVAR_TYPE_STRING)", "%s\n\tdvar %s, type %i", "dvar->type == DVAR_TYPE_STRING", v20, v36) )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovups xmm1, xmmword ptr [rsi]
        vmovups [rsp+88h+var_28], xmm0
        vmovups [rsp+88h+var_38], xmm1
      }
      Dvar_MakeExplicitType(_RDI, dvarName, type, flags, &v37, (DvarLimits *)&v38);
    }
  }
  if ( _RDI->type != type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3289, ASSERT_TYPE_ASSERT, "( ( dvar->type == type ) )", "( dvarName ) = %s", dvarName) )
    __debugbreak();
  if ( (_RDI->flags & 0xC040) == 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+88h+var_28], xmm0
      vmovups xmm0, xmmword ptr [rdi+48h]
      vmovups [rsp+88h+var_38], xmm0
    }
    if ( !Dvar_ValuesEqual(type, &v37, &v38) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+88h+var_28], xmm0
      }
      v26 = Dvar_ValueToString(_RDI, &v38);
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi+48h]
        vmovups [rsp+88h+var_28], xmm0
      }
      v28 = v26;
      v29 = Dvar_ValueToString(_RDI, &v38);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3290, ASSERT_TYPE_ASSERT, "((dvar->flags & ((1 << 14)|(1 << 6)|(1 << 15))) || Dvar_ValuesEqual( type, dvar->reset, resetValue ))", "%s\n\tdvar %s, %s != %s", "(dvar->flags & (DVAR_CHANGEABLE_RESET|DVAR_SAVED|DVAR_AUTOEXEC)) || Dvar_ValuesEqual( type, dvar->reset, resetValue )", dvarName, v29, v28) )
        __debugbreak();
    }
  }
  _RDI->flags |= flags;
  v30 = _RDI->level[0];
  if ( v30 > (unsigned __int8)level )
    v30 = level;
  _RDI->level[0] = v30;
  if ( description )
    _RDI->description = description;
  if ( !_RDI->BbConstUsageFlags.initialized )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+28h]
      vmovups xmm1, xmmword ptr [rsi]
    }
    v33 = _RDI->type;
    __asm
    {
      vmovups [rsp+88h+var_28], xmm0
      vmovups [rsp+88h+var_38], xmm1
    }
    if ( !Dvar_ValuesEqual(v33, &v37, &v38) && (_RDI->flags & 0x40000) != 0 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rdi+70h], xmm0
      }
      _RDI->BbConstUsageFlags.initialized = 1;
    }
  }
  if ( (_RDI->flags & 2) != 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+38h]
      vmovups [rsp+88h+var_28], xmm0
    }
    Dvar_SetVariant(_RDI, &v38, DVAR_SOURCE_INTERNAL);
  }
}

/*
==============
Dvar_Reset
==============
*/
void Dvar_Reset(const dvar_t *dvar, DvarSetSource setSource)
{
  DvarValue v5; 

  _RBX = (dvar_t *)dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4707, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+48h]
    vmovups xmmword ptr [rsp+48h+var_18], xmm0
  }
  Dvar_SetVariant(_RBX, &v5, setSource);
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
  volatile int readCount; 
  DvarValue v10; 

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
      _RCX = *v6;
      if ( (filter & (*v6)->flags) != 0 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx+48h]
          vmovups [rsp+78h+var_28], xmm0
        }
        Dvar_SetVariant(_RCX, &v10, setSource);
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
  const char *name; 
  __int64 v9; 
  const char *v11; 
  __int64 v12; 
  unsigned int checksum; 
  unsigned __int16 *v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  DvarValue v17[4]; 
  int p; 
  int v19; 

  if ( g_dvarCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  v16 = (unsigned __int64)&g_dvarCritSect & 3;
  if ( ((unsigned __int8)&g_dvarCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_dvarCritSect);
  while ( g_dvarCritSect.writeCount )
    Sys_Sleep(0);
  v4 = dvarHashTable;
  v5 = 6521i64;
  v14 = dvarHashTable;
  v15 = 6521i64;
  do
  {
    hashNext = *v4;
    if ( *v4 != 0xFFFF )
    {
      do
      {
        _RDI = &dvarPool[(unsigned __int64)hashNext];
        hashNext = _RDI->hashNext;
        if ( (filter & _RDI->flags) != 0 )
        {
          if ( !_RDI->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4834, ASSERT_TYPE_ASSERT, "(var->name)", (const char *)&queryFormat, "var->name") )
            __debugbreak();
          name = _RDI->name;
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
          MemFile_WriteData(memFile, (int)v9, _RDI->name);
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi+28h]
            vmovups xmmword ptr [rsp+0B8h+var_48], xmm0
          }
          v11 = Dvar_ValueToString(_RDI, v17);
          if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4845, ASSERT_TYPE_ASSERT, "( ( stringValue ) )", "( var->name ) = %s", _RDI->name) )
            __debugbreak();
          v12 = -1i64;
          do
            ++v12;
          while ( v11[v12] );
          if ( (int)v12 >= 1024 )
          {
            Com_PrintError(16, "ERROR: Truncating dvar value '%s' for dvar '%s' in save game\n", v11, _RDI->name);
            LODWORD(v12) = 1023;
          }
          v19 = v12;
          MemFile_WriteData(memFile, 4ui64, &v19);
          MemFile_WriteData(memFile, (int)v12, v11);
          checksum = _RDI->checksum;
          MemFile_WriteData(memFile, 4ui64, &checksum);
        }
      }
      while ( hashNext != 0xFFFF );
      v4 = v14;
      v5 = v15;
    }
    ++v4;
    --v5;
    v14 = v4;
    v15 = v5;
  }
  while ( v5 );
  LODWORD(v14) = -1;
  MemFile_WriteData(memFile, 4ui64, &v14);
  if ( g_dvarCritSect.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", g_dvarCritSect.readCount, 0i64) )
    __debugbreak();
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_dvarCritSect) )
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
  const char *v10; 
  DvarValue v11; 

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
      v11.integer64 = (__int64)v8;
    }
    else
    {
      v11.enabled = value;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+48h+var_18]
      vmovdqa xmmword ptr [rsp+48h+var_18], xmm0
    }
    Dvar_SetVariant(v6, &v11, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    v10 = "0";
    if ( value )
      v10 = "1";
    Dvar_RegisterString(dvarName, v10, 0x100u, "External Dvar");
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
  DvarValue v9; 

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
    v9.integer64 = (__int64)v7;
  }
  else
  {
    v9.enabled = value;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+48h+var_18]
    vmovdqa xmmword ptr [rsp+48h+var_18], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v9, source);
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
  DvarValue v7; 

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
    v7.integer64 = (__int64)v5;
  }
  else
  {
    v7.enabled = value;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+48h+var_18]
    vmovdqa xmmword ptr [rsp+48h+var_18], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v7, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetColorByName
==============
*/

void __fastcall Dvar_SetColorByName(const char *dvarName, double r, double g, double b, float a)
{
  unsigned int Checksum; 
  const dvar_t *MalleableVar; 
  const char *v25; 
  float v29; 
  __int64 v30; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  __asm { vmovss  xmm0, [rsp+68h+a] }
  if ( MalleableVar )
  {
    __asm
    {
      vmovaps xmm3, xmm6; b
      vmovaps xmm2, xmm7; g
      vmovaps xmm1, xmm8; r
      vmovss  dword ptr [rsp+68h+var_48], xmm0
    }
    Dvar_SetColorFromSource(MalleableVar, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v29, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm3, xmm6, xmm6
      vcvtss2sd xmm2, xmm7, xmm7
      vcvtss2sd xmm1, xmm8, xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
      vmovsd  [rsp+68h+var_48], xmm0
    }
    v25 = j_va("%g %g %g %g", _RDX, _R8, _R9, v30);
    Dvar_RegisterString(dvarName, v25, 0x100u, "External Dvar");
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
}

/*
==============
Dvar_SetColorFromSource
==============
*/

void __fastcall Dvar_SetColorFromSource(const dvar_t *dvar, double r, double g, double b, float a, DvarSetSource source)
{
  unsigned __int8 type; 
  char *fmt; 
  double v66; 
  double v67; 
  DvarValue v68; 
  char dest[128]; 
  char v72; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovaps xmm10, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm7, xmm1
  }
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4218, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4220, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 10 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4222, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_COLOR || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 10 )
  {
    __asm
    {
      vmovss  xmm5, cs:__real@437f0000
      vmovss  xmm4, cs:__real@3f000000
      vmovaps [rsp+148h+var_28], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vminss  xmm0, xmm7, xmm6
      vxorps  xmm7, xmm7, xmm7
      vmaxss  xmm0, xmm0, xmm7
      vmulss  xmm1, xmm0, xmm5
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm1, xmm4
      vmovss  xmm1, xmm0, xmm2
      vminss  xmm0, xmm9, xmm6
      vmaxss  xmm0, xmm0, xmm7
      vmovaps [rsp+148h+var_48], xmm8
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm3, xmm8, xmm1, 1
      vmulss  xmm1, xmm0, xmm5
      vcvttss2si eax, xmm3
      vaddss  xmm3, xmm1, xmm4
    }
    v68.enabled = _EAX;
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vmovss  xmm0, xmm2, xmm3
      vroundss xmm1, xmm8, xmm0, 1
      vcvttss2si eax, xmm1
      vminss  xmm0, xmm10, xmm6
      vmaxss  xmm0, xmm0, xmm7
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm3, xmm1, xmm4
      vmovss  xmm0, xmm2, xmm3
      vroundss xmm1, xmm8, xmm0, 1
      vmovss  xmm0, [rsp+148h+a]
    }
    v68.color[1] = _EAX;
    __asm
    {
      vcvttss2si eax, xmm1
      vminss  xmm1, xmm0, xmm6
      vmovaps xmm6, [rsp+148h+var_28]
      vmaxss  xmm1, xmm1, xmm7
      vmulss  xmm0, xmm1, xmm5
      vaddss  xmm3, xmm0, xmm4
      vroundss xmm0, xmm8, xmm3, 1
      vmovaps xmm8, [rsp+148h+var_48]
    }
    v68.color[2] = _EAX;
    __asm { vcvttss2si eax, xmm0 }
    v68.color[3] = _EAX;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+148h+a]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+148h+var_118], xmm0
      vcvtss2sd xmm1, xmm10, xmm10
      vcvtss2sd xmm3, xmm7, xmm7
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+148h+var_120], xmm1
      vmovq   r9, xmm3
      vmovsd  [rsp+148h+fmt], xmm2
    }
    Com_sprintf(dest, 0x80ui64, "%g %g %g %g", *(double *)&_XMM3, *(double *)&fmt, v66, v67);
    v68.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+148h+var_108]
    vmovdqa [rsp+148h+var_108], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v68, source);
  _R11 = &v72;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
  }
}

/*
==============
Dvar_SetColor_Internal
==============
*/
void Dvar_SetColor_Internal(const dvar_t *dvar, float r, float g, float b, float a)
{
  float v6; 

  __asm
  {
    vmovss  xmm0, [rsp+38h+a]
    vmovss  [rsp+38h+var_18], xmm0
  }
  Dvar_SetColorFromSource(dvar, r, g, b, v6, DVAR_SOURCE_INTERNAL);
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
  int v11; 
  DvarLimits v12; 
  DvarValue v13; 

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
    v13.integer64 = (__int64)string;
    __asm { vmovups xmm1, xmmword ptr [rsp+68h+var_18] }
    v12 = 0ui64;
    __asm
    {
      vmovups xmm0, [rsp+68h+var_28]
      vmovdqa [rsp+68h+var_28], xmm0
      vmovdqa xmmword ptr [rsp+68h+var_18], xmm1
    }
    v11 = atoi(v8);
    v7 = Dvar_RegisterVariant(v8, v11, 9u, 0x100u, &v13, &v12, "External Dvar (setChk)");
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

void __fastcall Dvar_SetFloatByName(const char *dvarName, double value)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v7; 
  unsigned __int8 type; 
  const char *v14; 
  DvarValue v16; 
  char dest[32]; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v7 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4091, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v7->type;
    if ( type != 1 && (type != 9 || (v7->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4093, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", v7->name) )
      __debugbreak();
    if ( v7->type == 1 )
    {
      __asm { vmovss  dword ptr [rsp+88h+var_58], xmm6 }
    }
    else
    {
      __asm
      {
        vcvtss2sd xmm3, xmm6, xmm6
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x20ui64, "%g", *(double *)&_XMM3);
      v16.integer64 = (__int64)dest;
    }
    __asm
    {
      vmovups xmm0, [rsp+88h+var_58]
      vmovdqa [rsp+88h+var_58], xmm0
    }
    Dvar_SetVariant(v7, &v16, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v14 = j_va("%g", _RDX);
    Dvar_RegisterString(dvarName, v14, 0x100u, "External Dvar");
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
}

/*
==============
Dvar_SetFloatFromSource
==============
*/

void __fastcall Dvar_SetFloatFromSource(const dvar_t *dvar, double value, DvarSetSource source)
{
  unsigned __int8 type; 
  DvarValue v12; 
  char dest[32]; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4089, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4091, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 1 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4093, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 1 )
  {
    __asm { vmovss  dword ptr [rsp+88h+var_58], xmm6 }
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm3, xmm6, xmm6
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x20ui64, "%g", *(double *)&_XMM3);
    v12.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+88h+var_58]
    vmovdqa [rsp+88h+var_58], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v12, source);
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
}

/*
==============
Dvar_SetFloat_Internal
==============
*/

void __fastcall Dvar_SetFloat_Internal(const dvar_t *dvar, double value)
{
  unsigned __int8 type; 
  DvarValue v10; 
  char dest[32]; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4089, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4091, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 1 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4093, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 1 )
  {
    __asm { vmovss  dword ptr [rsp+88h+var_58], xmm6 }
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm3, xmm6, xmm6
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x20ui64, "%g", *(double *)&_XMM3);
    v10.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+88h+var_58]
    vmovdqa [rsp+88h+var_58], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v10, DVAR_SOURCE_INTERNAL);
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
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
  const char *v10; 
  const char *UnobfuscatedName; 
  __int64 v15; 
  unsigned __int8 color[16]; 
  DvarLimits domain; 
  char dest[1024]; 

  _RBX = (dvar_t *)dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4307, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  Core_strcpy(dest, 0x400ui64, string);
  type = _RBX->type;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+58h]
    vmovups xmmword ptr [rsp+470h+domain], xmm0
  }
  switch ( type )
  {
    case 0:
      color[0] = Dvar_StringToBool(dest);
      break;
    case 1:
      *(float *)&_XMM0 = Dvar_StringToFloat(dest);
      __asm { vmovss  dword ptr [rsp+470h+color], xmm0 }
      break;
    case 2:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0; jumptable 0000000141872D4A case 2
        vmovss  dword ptr [rsp+470h+color], xmm0
        vmovss  dword ptr [rsp+470h+color+4], xmm0
      }
      j_sscanf(dest, "%g %g", color, &color[4]);
      break;
    case 3:
    case 11:
      __asm { vxorps  xmm0, xmm0, xmm0 }
      v10 = "%g %g %g";
      if ( dest[0] == 40 )
        v10 = "( %g, %g, %g )";
      __asm
      {
        vmovss  dword ptr [rsp+470h+color], xmm0
        vmovss  dword ptr [rsp+470h+color+4], xmm0
        vmovss  dword ptr [rsp+470h+color+8], xmm0
      }
      j_sscanf(dest, v10, color, &color[4], &color[8]);
      break;
    case 4:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovups xmmword ptr [rsp+470h+color], xmm0
      }
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
      LODWORD(v15) = type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1538, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v15) )
        __debugbreak();
      *(_DWORD *)color = 0;
      break;
  }
  __asm { vmovups xmm0, xmmword ptr [rsp+470h+color] }
  if ( _RBX->type == 8 )
  {
    __asm { vmovd   eax, xmm0 }
    if ( _EAX == -1337 )
    {
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(_RBX->name);
      if ( Dvar_Printf(_RBX, 16, "'%s' is not a valid value for dvar '%s'\n", dest, UnobfuscatedName) )
        Dvar_PrintDomain(_RBX);
      __asm { vmovups xmm0, xmmword ptr [rbx+48h] }
    }
  }
  __asm { vmovdqa xmmword ptr [rsp+470h+domain], xmm0 }
  Dvar_SetVariant(_RBX, (DvarValue *)&domain, source);
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
  unsigned int v11; 
  DvarValue v12; 
  DvarValue dest[2]; 
  char v14[32]; 

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
      v12.integer64 = value;
    }
    else
    {
      Com_sprintf((char *)&dest[0].enabled, 0x20ui64, "%lli", value);
      v12.integer64 = (__int64)dest;
    }
    __asm
    {
      vmovups xmm0, [rsp+0A8h+var_68]
      vmovdqa [rsp+0A8h+var_68], xmm0
    }
    Dvar_SetVariant(v6, &v12, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    Com_sprintf(v14, 0x20ui64, "%lli", value);
    if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3916, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
      __debugbreak();
    dest[0].integer64 = (__int64)v14;
    __asm { vmovups xmm1, xmmword ptr [rsp+0A8h+dest] }
    v12 = 0ui64;
    __asm
    {
      vmovups xmm0, [rsp+0A8h+var_68]
      vmovdqa [rsp+0A8h+var_68], xmm0
      vmovdqa xmmword ptr [rsp+0A8h+dest], xmm1
    }
    v11 = Dvar_GenerateChecksum(dvarName);
    Dvar_RegisterVariant(dvarName, v11, 9u, 0x100u, dest, (DvarLimits *)&v12, "External Dvar");
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
  DvarValue v8; 
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
    v8.integer64 = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%lli", value);
    v8.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+88h+var_58]
    vmovdqa [rsp+88h+var_58], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v8, source);
}

/*
==============
Dvar_SetInt64_Internal
==============
*/
void Dvar_SetInt64_Internal(const dvar_t *dvar, __int64 value)
{
  unsigned __int8 type; 
  DvarValue v6; 
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
    v6.integer64 = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%lli", value);
    v6.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+78h+var_48]
    vmovdqa [rsp+78h+var_48], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v6, DVAR_SOURCE_INTERNAL);
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
  unsigned int v12; 
  DvarValue v13; 
  DvarValue dest[2]; 
  char v15[32]; 

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
      v13.integer = value;
    }
    else
    {
      Com_sprintf((char *)&dest[0].enabled, 0x20ui64, "%i", (unsigned int)value);
      v13.integer64 = (__int64)dest;
    }
    __asm
    {
      vmovups xmm0, [rsp+0A8h+var_68]
      vmovdqa [rsp+0A8h+var_68], xmm0
    }
    Dvar_SetVariant(v6, &v13, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    Com_sprintf(v15, 0x20ui64, "%i", (unsigned int)value);
    if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3916, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
      __debugbreak();
    dest[0].integer64 = (__int64)v15;
    __asm { vmovups xmm1, xmmword ptr [rsp+0A8h+dest] }
    v13 = 0ui64;
    __asm
    {
      vmovups xmm0, [rsp+0A8h+var_68]
      vmovdqa [rsp+0A8h+var_68], xmm0
      vmovdqa xmmword ptr [rsp+0A8h+dest], xmm1
    }
    v12 = Dvar_GenerateChecksum(dvarName);
    Dvar_RegisterVariant(dvarName, v12, 9u, 0x100u, dest, (DvarLimits *)&v13, "External Dvar");
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
  DvarValue v9; 
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
    v9.integer = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%i", (unsigned int)value);
    v9.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+88h+var_58]
    vmovdqa [rsp+88h+var_58], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v9, source);
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
  DvarValue v7; 
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
    v7.integer = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%i", (unsigned int)value);
    v7.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+78h+var_48]
    vmovdqa [rsp+78h+var_48], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v7, DVAR_SOURCE_INTERNAL);
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
  bool v10; 
  const char *v11; 

  _RBX = dvar;
  v3 = dvar->type - 2;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
LABEL_33:
      _RBX->latched.integer64 = value->integer64;
      _RBX->latched.vector.v[2] = value->vector.v[2];
      return;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      _RBX->latched = *value;
      return;
    }
    v6 = v5 - 5;
    if ( v6 )
    {
      if ( v6 != 2 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rdx]
          vmovups xmmword ptr [rbx+38h], xmm0
        }
        return;
      }
      goto LABEL_33;
    }
    string = _RBX->latched.string;
    integer64 = (const char *)value->integer64;
    if ( string != value->string )
    {
      v10 = string && string != _RBX->current.string && string != _RBX->reset.string;
      if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1085, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      v11 = _RBX->current.string;
      if ( !v11 || integer64 != v11 && strcmp(integer64, v11) )
      {
        v11 = _RBX->reset.string;
        if ( !v11 || integer64 != v11 && strcmp(integer64, v11) )
        {
          if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1034, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
            __debugbreak();
          if ( *integer64 )
            v11 = SL_AllocString_Copy(integer64);
          else
            v11 = (char *)&queryFormat.fmt + 3;
        }
      }
      _RBX->latched.integer64 = (__int64)v11;
      if ( v10 )
      {
        if ( *string )
          SL_AllocString_Free(string);
      }
    }
  }
  else
  {
    _RBX->latched.integer64 = value->integer64;
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
  DvarValue v10; 
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
      v10.integer64 = (__int64)dest;
      __asm
      {
        vmovups xmm0, [rsp+858h+var_818]
        vmovdqa [rsp+858h+var_818], xmm0
      }
      Dvar_SetVariant(v6, &v10, DVAR_SOURCE_INTERNAL);
    }
    else
    {
      v10.integer = Dvar_StringToEnum(&v6->domain, value);
      if ( v10.integer == -1337 )
      {
        UnobfuscatedName = Dvar_DevGetUnobfuscatedName(v6->name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4206, ASSERT_TYPE_ASSERT, "(newValue.integer != (-1337))", "%s\n\t%s doesn't include %s", "newValue.integer != DVAR_INVALID_ENUM_INDEX", UnobfuscatedName, value) )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm0, [rsp+858h+var_818]
        vmovdqa [rsp+858h+var_818], xmm0
      }
      Dvar_SetVariant(v6, &v10, DVAR_SOURCE_INTERNAL);
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
  DvarValue v8; 
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
    v8.integer64 = (__int64)dest;
  }
  else
  {
    v8.integer = Dvar_StringToEnum(&dvar->domain, string);
    if ( v8.integer == -1337 )
    {
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4206, ASSERT_TYPE_ASSERT, "(newValue.integer != (-1337))", "%s\n\t%s doesn't include %s", "newValue.integer != DVAR_INVALID_ENUM_INDEX", UnobfuscatedName, string) )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups xmm0, [rsp+868h+var_828]
    vmovdqa [rsp+868h+var_828], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v8, source);
}

/*
==============
Dvar_SetString_Internal
==============
*/
void Dvar_SetString_Internal(const dvar_t *dvar, const char *value)
{
  const char *UnobfuscatedName; 
  DvarValue v6; 
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
    v6.integer64 = (__int64)dest;
  }
  else
  {
    v6.integer = Dvar_StringToEnum(&dvar->domain, value);
    if ( v6.integer == -1337 )
    {
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4206, ASSERT_TYPE_ASSERT, "(newValue.integer != (-1337))", "%s\n\t%s doesn't include %s", "newValue.integer != DVAR_INVALID_ENUM_INDEX", UnobfuscatedName, value) )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups xmm0, [rsp+858h+var_818]
    vmovdqa [rsp+858h+var_818], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v6, DVAR_SOURCE_INTERNAL);
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
  unsigned int v11; 
  DvarValue v12; 
  DvarValue dest[2]; 
  char v14[32]; 

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
      v12.integer64 = value;
    }
    else
    {
      Com_sprintf((char *)&dest[0].enabled, 0x20ui64, "%llu", value);
      v12.integer64 = (__int64)dest;
    }
    __asm
    {
      vmovups xmm0, [rsp+0A8h+var_68]
      vmovdqa [rsp+0A8h+var_68], xmm0
    }
    Dvar_SetVariant(v6, &v12, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    Com_sprintf(v14, 0x20ui64, "%llu", value);
    if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3916, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
      __debugbreak();
    dest[0].integer64 = (__int64)v14;
    __asm { vmovups xmm1, xmmword ptr [rsp+0A8h+dest] }
    v12 = 0ui64;
    __asm
    {
      vmovups xmm0, [rsp+0A8h+var_68]
      vmovdqa [rsp+0A8h+var_68], xmm0
      vmovdqa xmmword ptr [rsp+0A8h+dest], xmm1
    }
    v11 = Dvar_GenerateChecksum(dvarName);
    Dvar_RegisterVariant(dvarName, v11, 9u, 0x100u, dest, (DvarLimits *)&v12, "External Dvar");
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
  DvarValue v8; 
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
    v8.integer64 = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%llu", value);
    v8.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+88h+var_58]
    vmovdqa [rsp+88h+var_58], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v8, source);
}

/*
==============
Dvar_SetUInt64_Internal
==============
*/
void Dvar_SetUInt64_Internal(const dvar_t *dvar, unsigned __int64 value)
{
  unsigned __int8 type; 
  DvarValue v6; 
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
    v6.integer64 = value;
  }
  else
  {
    Com_sprintf(dest, 0x20ui64, "%llu", value);
    v6.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+78h+var_48]
    vmovdqa [rsp+78h+var_48], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v6, DVAR_SOURCE_INTERNAL);
}

/*
==============
Dvar_SetVariant
==============
*/
void Dvar_SetVariant(dvar_t *dvar, DvarValue *value, DvarSetSource source)
{
  const char *v8; 
  const char *UnobfuscatedName; 
  unsigned __int8 type; 
  const char *v13; 
  const char *v15; 
  const char *v16; 
  const char *v19; 
  const char *v21; 
  unsigned int flags; 
  unsigned __int8 v25; 
  const char *v27; 
  unsigned __int8 v29; 
  const char *v31; 
  unsigned __int8 v34; 
  const char *v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned int v39; 
  const char *v40; 
  const char *v41; 
  const char *v43; 
  const char *v44; 
  __int64 v45; 
  bool IsMainThread; 
  const char *name; 
  unsigned int v48; 
  const char *v49; 
  const char *v50; 
  unsigned __int8 v52; 
  __int64 integer64; 
  const char *v58; 
  const char *string; 
  bool v60; 
  const char *v61; 
  __int64 v62; 
  const char *v63; 
  char *fmt; 
  __int64 v74; 
  DvarValue v75; 
  DvarLimits v76; 
  DvarValue v77; 
  DvarValue v78; 
  DvarLimits v79; 
  DvarValue v80; 
  DvarValue v81; 
  DvarValue v82; 
  DvarValue v83; 
  DvarValue v84; 
  DvarValue v85; 
  DvarValue v86; 
  DvarValue v87; 
  DvarValue v88; 
  DvarValue v89; 
  DvarValue v90; 
  DvarValue v91; 
  DvarValue v92; 
  DvarValue dest; 

  _RSI = value;
  _RDI = dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2138, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !_RDI->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2140, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( Com_LogFileOpen() && s_writeChangeToLog->current.enabled && (_RDI->flags & 1) == 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+1A0h+var_160], xmm0
    }
    v8 = Dvar_ValueToString(_RDI, &v75);
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(_RDI->name);
    Dvar_Printf(_RDI, 6, "      dvar set %s %s\n", UnobfuscatedName, v8);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+58h]
    vmovups xmm1, xmmword ptr [rsi]
  }
  type = _RDI->type;
  __asm
  {
    vmovups [rsp+1A0h+var_150], xmm0
    vmovups [rsp+1A0h+var_140], xmm1
  }
  if ( Dvar_ValueInDomain(type, &v77, &v76) )
  {
LABEL_19:
    switch ( source )
    {
      case DVAR_SOURCE_SERVERCMD:
        if ( (_RDI->flags & 0x18) == 0 )
        {
          v21 = Dvar_DevGetUnobfuscatedName(_RDI->name);
          Dvar_Printf(_RDI, 16, "%s is not allowed to be set from server command source.\n", v21);
          return;
        }
        break;
      case DVAR_SOURCE_DEVGUI:
        if ( (_RDI->flags & 0x20) != 0 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups [rbp+0A0h+var_100], xmm0
          }
          Dvar_SetLatchedValue(_RDI, &v81);
          return;
        }
        goto LABEL_36;
      case DVAR_SOURCE_INTERNAL:
        goto LABEL_36;
    }
    flags = _RDI->flags;
    if ( (flags & 0x2000) != 0 )
    {
      __asm { vmovups xmm0, xmmword ptr [rsi] }
      v25 = _RDI->type;
      __asm
      {
        vmovups [rbp+0A0h+var_F0], xmm0
        vmovups xmm0, xmmword ptr [rdi+28h]
        vmovups [rbp+0A0h+var_E0], xmm0
      }
      if ( !Dvar_ValuesEqual(v25, &v83, &v82) )
      {
        v27 = Dvar_DevGetUnobfuscatedName(_RDI->name);
        Dvar_Printf(_RDI, 16, "%s is read only.\n", v27);
      }
      return;
    }
    if ( (flags & 0x800) != 0 )
    {
      __asm { vmovups xmm0, xmmword ptr [rsi] }
      v29 = _RDI->type;
      __asm
      {
        vmovups [rbp+0A0h+var_D0], xmm0
        vmovups xmm0, xmmword ptr [rdi+28h]
        vmovups [rbp+0A0h+var_C0], xmm0
      }
      if ( !Dvar_ValuesEqual(v29, &v85, &v84) )
      {
        v31 = Dvar_DevGetUnobfuscatedName(_RDI->name);
        Dvar_Printf(_RDI, 16, "%s is write protected.\n", v31);
      }
      return;
    }
    if ( source != DVAR_SOURCE_UISCRIPT && (flags & 2) != 0 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rbp+0A0h+var_B0], xmm0
      }
      Dvar_SetLatchedValue(_RDI, &v86);
      __asm { vmovups xmm0, xmmword ptr [rdi+28h] }
      v34 = _RDI->type;
      __asm
      {
        vmovups [rbp+0A0h+var_A0], xmm0
        vmovups xmm0, xmmword ptr [rdi+38h]
        vmovups [rbp+0A0h+var_90], xmm0
      }
      if ( !Dvar_ValuesEqual(v34, &v88, &v87) )
      {
        v36 = Dvar_DevGetUnobfuscatedName(_RDI->name);
        Dvar_Printf(_RDI, 16, "%s will be changed upon restarting.\n", v36);
      }
      return;
    }
LABEL_36:
    v37 = tls_index;
    v38 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    v39 = _RDI->flags;
    if ( (~*(_DWORD *)(v38 + 1052) & v39) != 0 )
    {
      if ( !Sys_IsMainThread() || (_RDI->flags & 0x1200) != 0 )
      {
        IsMainThread = Sys_IsMainThread();
        name = _RDI->name;
        if ( IsMainThread )
        {
          v48 = _RDI->flags;
          v49 = Dvar_DevGetUnobfuscatedName(name);
          LODWORD(fmt) = v48;
          Dvar_Printf(_RDI, 16, "Dvar Error: '%s' cannot be changed from the main thread due to its flags (%i).\n", v49, fmt);
        }
        else
        {
          v50 = Dvar_DevGetUnobfuscatedName(name);
          Dvar_Printf(_RDI, 16, "Dvar Error: '%s' cannot be changed from the server.\n", v50);
        }
        return;
      }
      SV_WaitServer();
      Com_CheckError();
      if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 0, 1) )
      {
        LODWORD(v74) = g_serverThreadOwnership;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2241, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 0, 1 ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v74) )
          __debugbreak();
      }
      if ( source == DVAR_SOURCE_SCRIPT )
      {
        v40 = Dvar_DevGetUnobfuscatedName(_RDI->name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2245, ASSERT_TYPE_ASSERT, "((source != DVAR_SOURCE_SCRIPT))", "%s\n\tdvar %s source %i", "(source != DVAR_SOURCE_SCRIPT)", v40, 2) )
          __debugbreak();
      }
      v41 = Dvar_DevGetUnobfuscatedName(_RDI->name);
      Com_PrintWarning(0, "Server dvar '%s' set from main thread.  This causes a hitch and should only be done for development.\n", v41);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rbp+0A0h+var_80], xmm0
      }
      v43 = Dvar_ValueToString(_RDI, &v89);
      if ( !SV_Demo_SetDvar(_RDI->checksum, v43) )
      {
        v44 = Dvar_DevGetUnobfuscatedName(_RDI->name);
        Com_Printf(16, "\"%s\" is read only during demo playback.\n", v44);
        return;
      }
      v45 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v37);
      *(_DWORD *)(v45 + 1048) |= _RDI->flags;
    }
    else
    {
      *(_DWORD *)(v38 + 1048) |= v39;
    }
    __asm { vmovups xmm0, xmmword ptr [rsi] }
    v52 = _RDI->type;
    __asm
    {
      vmovups [rbp+0A0h+var_70], xmm0
      vmovups xmm0, xmmword ptr [rdi+28h]
      vmovups [rbp+0A0h+var_60], xmm0
    }
    if ( Dvar_ValuesEqual(v52, &v91, &v90) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi+28h]
        vmovups [rbp+0A0h+var_50], xmm0
      }
      Dvar_SetLatchedValue(_RDI, &v92);
      return;
    }
    if ( _RDI->type == 2 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi]
        vmovss  xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rdi+28h], xmm1
        vmovss  dword ptr [rdi+2Ch], xmm0
        vmovss  dword ptr [rdi+38h], xmm1
        vmovss  dword ptr [rdi+3Ch], xmm0
      }
      goto LABEL_87;
    }
    if ( _RDI->type != 3 )
    {
      if ( _RDI->type == 4 )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rsi]
          vmovss  xmm2, dword ptr [rsi+4]
          vmovss  xmm1, dword ptr [rsi+8]
          vmovss  xmm0, dword ptr [rsi+0Ch]
          vmovss  dword ptr [rdi+28h], xmm3
          vmovss  dword ptr [rdi+2Ch], xmm2
          vmovss  dword ptr [rdi+30h], xmm1
          vmovss  dword ptr [rdi+34h], xmm0
          vmovss  dword ptr [rdi+38h], xmm3
          vmovss  dword ptr [rdi+3Ch], xmm2
          vmovss  dword ptr [rdi+40h], xmm1
          vmovss  dword ptr [rdi+44h], xmm0
        }
        goto LABEL_87;
      }
      if ( _RDI->type == 9 )
      {
        if ( !_RDI->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2298, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
          __debugbreak();
        integer64 = _RSI->integer64;
        v58 = (const char *)_RSI->integer64;
        if ( _RSI->integer64 == _RDI->current.integer64 && integer64 != _RDI->latched.integer64 && integer64 != _RDI->reset.integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2300, ASSERT_TYPE_ASSERT, "( ( value.string != dvar->current.string || value.string == dvar->latched.string || value.string == dvar->reset.string ) )", "( dvar->name ) = %s", _RDI->name) )
          __debugbreak();
        string = _RDI->current.string;
        v60 = string && string != _RDI->latched.string && string != _RDI->reset.string;
        Dvar_AssignCurrentStringValue(_RDI, &dest, v58);
        v61 = _RDI->latched.string;
        v62 = dest.integer64;
        _RDI->current.integer64 = dest.integer64;
        if ( v61 && v61 != (const char *)v62 && v61 != _RDI->reset.string && *v61 )
          SL_AllocString_Free(v61);
        v63 = _RDI->current.string;
        _RDI->latched.integer64 = 0i64;
        Dvar_WeakCopyString(v63, &_RDI->latched);
        if ( v60 && *string )
          SL_AllocString_Free(string);
        goto LABEL_87;
      }
      if ( _RDI->type != 11 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vinsertf128 ymm0, ymm0, xmm0, 1
          vmovups ymmword ptr [rdi+28h], ymm0
        }
LABEL_87:
        _RDI->modified = 1;
        return;
      }
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  dword ptr [rdi+28h], xmm2
      vmovss  dword ptr [rdi+2Ch], xmm1
      vmovss  dword ptr [rdi+30h], xmm0
      vmovss  dword ptr [rdi+38h], xmm2
      vmovss  dword ptr [rdi+3Ch], xmm1
      vmovss  dword ptr [rdi+40h], xmm0
    }
    goto LABEL_87;
  }
  v13 = Dvar_DevGetUnobfuscatedName(_RDI->name);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+1A0h+var_130], xmm0
  }
  v15 = v13;
  v16 = Dvar_ValueToString(_RDI, &v78);
  if ( Dvar_Printf(_RDI, 16, "'%s' is not a valid value for dvar '%s'\n", v16, v15) )
    Dvar_PrintDomain(_RDI);
  if ( _RDI->type == 8 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+58h]
      vmovups [rbp+0A0h+var_120], xmm0
      vmovups xmm0, xmmword ptr [rdi+48h]
      vmovups [rbp+0A0h+var_110], xmm0
    }
    if ( !Dvar_ValueInDomain(8u, &v80, &v79) )
    {
      v19 = Dvar_DevGetUnobfuscatedName(_RDI->name);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2163, ASSERT_TYPE_ASSERT, "( ( Dvar_ValueInDomain( dvar->type, dvar->reset, dvar->domain ) ) )", "( Dvar_DevGetUnobfuscatedName( dvar->name ) ) = %s", v19) )
        __debugbreak();
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+48h]
      vmovups xmmword ptr [rsi], xmm0
    }
    goto LABEL_19;
  }
}

/*
==============
Dvar_SetVec2ByName
==============
*/

void __fastcall Dvar_SetVec2ByName(const char *dvarName, double x, double y)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v11; 
  unsigned __int8 type; 
  const char *v21; 
  char *fmt; 
  DvarValue v26; 
  char dest[64]; 
  char v28; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v11 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4116, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v11->type;
    if ( type != 2 && (type != 9 || (v11->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4118, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_2 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", v11->name) )
      __debugbreak();
    if ( v11->type == 2 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+0B8h+var_88], xmm6
        vmovss  dword ptr [rsp+0B8h+var_88+4], xmm7
      }
    }
    else
    {
      __asm
      {
        vcvtss2sd xmm3, xmm6, xmm6
        vcvtss2sd xmm0, xmm7, xmm7
        vmovq   r9, xmm3
        vmovsd  [rsp+0B8h+fmt], xmm0
      }
      Com_sprintf(dest, 0x40ui64, "%g %g", *(double *)&_XMM3, *(double *)&fmt);
      v26.integer64 = (__int64)dest;
    }
    __asm
    {
      vmovups xmm0, [rsp+0B8h+var_88]
      vmovdqa [rsp+0B8h+var_88], xmm0
    }
    Dvar_SetVariant(v11, &v26, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm2, xmm7, xmm7
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    v21 = j_va("%g %g", _RDX, _R8);
    Dvar_RegisterString(dvarName, v21, 0x100u, "External Dvar");
  }
  _R11 = &v28;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Dvar_SetVec2FromSource
==============
*/

void __fastcall Dvar_SetVec2FromSource(const dvar_t *dvar, double x, double y, DvarSetSource source)
{
  unsigned __int8 type; 
  char *fmt; 
  DvarValue v19; 
  char dest[64]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4114, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4116, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 2 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4118, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_2 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 2 )
  {
    __asm
    {
      vmovss  dword ptr [rsp+0C8h+var_98], xmm6
      vmovss  dword ptr [rsp+0C8h+var_98+4], xmm7
    }
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm3, xmm6, xmm6
      vcvtss2sd xmm0, xmm7, xmm7
      vmovq   r9, xmm3
      vmovsd  [rsp+0C8h+fmt], xmm0
    }
    Com_sprintf(dest, 0x40ui64, "%g %g", *(double *)&_XMM3, *(double *)&fmt);
    v19.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+0C8h+var_98]
    vmovdqa [rsp+0C8h+var_98], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v19, source);
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_28]
    vmovaps xmm7, [rsp+0C8h+var_38]
  }
}

/*
==============
Dvar_SetVec2_Internal
==============
*/

void __fastcall Dvar_SetVec2_Internal(const dvar_t *dvar, double x, double y)
{
  unsigned __int8 type; 
  char *fmt; 
  DvarValue v18; 
  char dest[64]; 
  char v20; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4114, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4116, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 2 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4118, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_2 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( dvar->type == 2 )
  {
    __asm
    {
      vmovss  dword ptr [rsp+0B8h+var_88], xmm6
      vmovss  dword ptr [rsp+0B8h+var_88+4], xmm7
    }
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm3, xmm6, xmm6
      vcvtss2sd xmm0, xmm7, xmm7
      vmovq   r9, xmm3
      vmovsd  [rsp+0B8h+fmt], xmm0
    }
    Com_sprintf(dest, 0x40ui64, "%g %g", *(double *)&_XMM3, *(double *)&fmt);
    v18.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+0B8h+var_88]
    vmovdqa [rsp+0B8h+var_88], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v18, DVAR_SOURCE_INTERNAL);
  _R11 = &v20;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Dvar_SetVec3ByName
==============
*/

void __fastcall Dvar_SetVec3ByName(const char *dvarName, double x, double y, double z)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v14; 
  unsigned __int8 type; 
  const char *v27; 
  char *fmt; 
  double v33; 
  DvarValue v34; 
  char dest[96]; 
  char v36; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v14 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4141, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v14->type;
    if ( ((type - 3) & 0xF7) != 0 && (type != 9 || (v14->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4143, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_3 || dvar->type == DVAR_TYPE_FLOAT_3_COLOR || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", v14->name) )
      __debugbreak();
    if ( ((v14->type - 3) & 0xF7) != 0 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm8, xmm8
        vcvtss2sd xmm3, xmm6, xmm6
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+0F8h+var_D0], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+0F8h+fmt], xmm1
      }
      Com_sprintf(dest, 0x60ui64, "%g %g %g", *(double *)&_XMM3, *(double *)&fmt, v33);
      v34.integer64 = (__int64)dest;
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rsp+0F8h+var_C8], xmm6
        vmovss  dword ptr [rsp+0F8h+var_C8+4], xmm7
        vmovss  dword ptr [rsp+0F8h+var_C8+8], xmm8
      }
    }
    __asm
    {
      vmovups xmm0, [rsp+0F8h+var_C8]
      vmovdqa [rsp+0F8h+var_C8], xmm0
    }
    Dvar_SetVariant(v14, &v34, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm3, xmm8, xmm8
      vcvtss2sd xmm2, xmm7, xmm7
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    v27 = j_va("%g %g %g", _RDX, _R8, _R9);
    Dvar_RegisterString(dvarName, v27, 0x100u, "External Dvar");
  }
  _R11 = &v36;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
Dvar_SetVec3FromSource
==============
*/

void __fastcall Dvar_SetVec3FromSource(const dvar_t *dvar, double x, double y, double z, DvarSetSource source)
{
  unsigned __int8 type; 
  char *fmt; 
  double v24; 
  DvarValue v25; 
  char dest[96]; 
  char v27; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4139, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4141, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( ((type - 3) & 0xF7) != 0 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4143, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_3 || dvar->type == DVAR_TYPE_FLOAT_3_COLOR || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( ((dvar->type - 3) & 0xF7) != 0 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm8, xmm8
      vcvtss2sd xmm3, xmm6, xmm6
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0F8h+var_D0], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+0F8h+fmt], xmm1
    }
    Com_sprintf(dest, 0x60ui64, "%g %g %g", *(double *)&_XMM3, *(double *)&fmt, v24);
    v25.integer64 = (__int64)dest;
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rsp+0F8h+var_C8], xmm6
      vmovss  dword ptr [rsp+0F8h+var_C8+4], xmm7
      vmovss  dword ptr [rsp+0F8h+var_C8+8], xmm8
    }
  }
  __asm
  {
    vmovups xmm0, [rsp+0F8h+var_C8]
    vmovdqa [rsp+0F8h+var_C8], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v25, source);
  _R11 = &v27;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
Dvar_SetVec3_Internal
==============
*/

void __fastcall Dvar_SetVec3_Internal(const dvar_t *dvar, double x, double y, double z)
{
  unsigned __int8 type; 
  char *fmt; 
  double v23; 
  DvarValue v24; 
  char dest[96]; 
  char v26; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4139, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4141, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( ((type - 3) & 0xF7) != 0 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4143, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_3 || dvar->type == DVAR_TYPE_FLOAT_3_COLOR || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  if ( ((dvar->type - 3) & 0xF7) != 0 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm8, xmm8
      vcvtss2sd xmm3, xmm6, xmm6
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0F8h+var_D0], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+0F8h+fmt], xmm1
    }
    Com_sprintf(dest, 0x60ui64, "%g %g %g", *(double *)&_XMM3, *(double *)&fmt, v23);
    v24.integer64 = (__int64)dest;
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rsp+0F8h+var_C8], xmm6
      vmovss  dword ptr [rsp+0F8h+var_C8+4], xmm7
      vmovss  dword ptr [rsp+0F8h+var_C8+8], xmm8
    }
  }
  __asm
  {
    vmovups xmm0, [rsp+0F8h+var_C8]
    vmovdqa [rsp+0F8h+var_C8], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v24, DVAR_SOURCE_INTERNAL);
  _R11 = &v26;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
Dvar_SetVec4ByName
==============
*/

void __fastcall Dvar_SetVec4ByName(const char *dvarName, double x, double y, double z, float w)
{
  unsigned int Checksum; 
  dvar_t *MalleableVar; 
  dvar_t *v17; 
  unsigned __int8 type; 
  const char *v32; 
  char *fmt; 
  char *fmta; 
  double v40; 
  double v41; 
  DvarValue v42; 
  char dest[128]; 
  char v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovss  xmm9, [rsp+138h+w]
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  Checksum = Dvar_GenerateChecksum(dvarName);
  MalleableVar = Dvar_FindMalleableVar(Checksum);
  v17 = MalleableVar;
  if ( MalleableVar )
  {
    if ( !MalleableVar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4166, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
      __debugbreak();
    type = v17->type;
    if ( type != 4 && (type != 9 || (v17->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4168, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_4 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", v17->name) )
      __debugbreak();
    if ( v17->type == 4 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+138h+var_F8], xmm6
        vmovss  dword ptr [rsp+138h+var_F8+4], xmm7
        vmovss  dword ptr [rsp+138h+var_F8+8], xmm8
        vmovss  dword ptr [rsp+138h+var_F8+0Ch], xmm9
      }
    }
    else
    {
      __asm
      {
        vcvtss2sd xmm0, xmm9, xmm9
        vmovsd  [rsp+138h+var_108], xmm0
        vcvtss2sd xmm1, xmm8, xmm8
        vcvtss2sd xmm3, xmm6, xmm6
        vcvtss2sd xmm2, xmm7, xmm7
        vmovsd  [rsp+138h+var_110], xmm1
        vmovq   r9, xmm3
        vmovsd  [rsp+138h+fmt], xmm2
      }
      Com_sprintf(dest, 0x80ui64, "%g %g %g %g", *(double *)&_XMM3, *(double *)&fmt, v40, v41);
      v42.integer64 = (__int64)dest;
    }
    __asm
    {
      vmovups xmm0, [rsp+138h+var_F8]
      vmovdqa [rsp+138h+var_F8], xmm0
    }
    Dvar_SetVariant(v17, &v42, DVAR_SOURCE_INTERNAL);
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm3, xmm8, xmm8
      vcvtss2sd xmm2, xmm7, xmm7
      vcvtss2sd xmm1, xmm6, xmm6
      vcvtss2sd xmm0, xmm9, xmm9
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
      vmovsd  [rsp+138h+fmt], xmm0
    }
    v32 = j_va("%g %g %g %g", _RDX, _R8, _R9, fmta);
    Dvar_RegisterString(dvarName, v32, 0x100u, "External Dvar");
  }
  _R11 = &v44;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
Dvar_SetVec4FromSource
==============
*/

void __fastcall Dvar_SetVec4FromSource(const dvar_t *dvar, double x, double y, double z, float w, DvarSetSource source)
{
  unsigned __int8 type; 
  char *fmt; 
  double v27; 
  double v28; 
  DvarValue v29; 
  char dest[128]; 
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4164, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4166, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 4 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4168, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_4 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  __asm { vmovss  xmm0, [rsp+128h+w] }
  if ( dvar->type == 4 )
  {
    __asm
    {
      vmovss  dword ptr [rsp+128h+var_E8], xmm6
      vmovss  dword ptr [rsp+128h+var_E8+4], xmm7
      vmovss  dword ptr [rsp+128h+var_E8+8], xmm8
      vmovss  dword ptr [rsp+128h+var_E8+0Ch], xmm0
    }
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+128h+var_F8], xmm0
      vcvtss2sd xmm1, xmm8, xmm8
      vcvtss2sd xmm3, xmm6, xmm6
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+128h+var_100], xmm1
      vmovq   r9, xmm3
      vmovsd  [rsp+128h+fmt], xmm2
    }
    Com_sprintf(dest, 0x80ui64, "%g %g %g %g", *(double *)&_XMM3, *(double *)&fmt, v27, v28);
    v29.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+128h+var_E8]
    vmovdqa [rsp+128h+var_E8], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v29, source);
  _R11 = &v31;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
Dvar_SetVec4_Internal
==============
*/

void __fastcall Dvar_SetVec4_Internal(const dvar_t *dvar, double x, double y, double z, float w)
{
  unsigned __int8 type; 
  char *fmt; 
  double v26; 
  double v27; 
  DvarValue v28; 
  char dest[128]; 
  char v30; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4164, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !dvar->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4166, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  type = dvar->type;
  if ( type != 4 && (type != 9 || (dvar->flags & 0x100) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 4168, ASSERT_TYPE_ASSERT, "( ( dvar->type == DVAR_TYPE_FLOAT_4 || (dvar->type == DVAR_TYPE_STRING && (dvar->flags & (1 << 8))) ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  __asm { vmovss  xmm0, [rsp+128h+w] }
  if ( dvar->type == 4 )
  {
    __asm
    {
      vmovss  dword ptr [rsp+128h+var_E8], xmm6
      vmovss  dword ptr [rsp+128h+var_E8+4], xmm7
      vmovss  dword ptr [rsp+128h+var_E8+8], xmm8
      vmovss  dword ptr [rsp+128h+var_E8+0Ch], xmm0
    }
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+128h+var_F8], xmm0
      vcvtss2sd xmm1, xmm8, xmm8
      vcvtss2sd xmm3, xmm6, xmm6
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+128h+var_100], xmm1
      vmovq   r9, xmm3
      vmovsd  [rsp+128h+fmt], xmm2
    }
    Com_sprintf(dest, 0x80ui64, "%g %g %g %g", *(double *)&_XMM3, *(double *)&fmt, v26, v27);
    v28.integer64 = (__int64)dest;
  }
  __asm
  {
    vmovups xmm0, [rsp+128h+var_E8]
    vmovdqa [rsp+128h+var_E8], xmm0
  }
  Dvar_SetVariant((dvar_t *)dvar, &v28, DVAR_SOURCE_INTERNAL);
  _R11 = &v30;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
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
  __int128 v45; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vxorps  xmm0, xmm0, xmm0
    vmovups [rsp+88h+var_58], xmm0
  }
  j_sscanf(string, "%g %g %g %g", &v45, (char *)&v45 + 4, (char *)&v45 + 8, (char *)&v45 + 12);
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm5, cs:__real@437f0000
    vmovss  xmm4, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rsp+88h+var_58]
    vminss  xmm1, xmm0, xmm7
    vxorps  xmm6, xmm6, xmm6
    vmaxss  xmm0, xmm1, xmm6
    vmulss  xmm1, xmm0, xmm5
    vmovss  xmm0, dword ptr [rsp+88h+var_58+4]
    vaddss  xmm2, xmm1, xmm4
    vminss  xmm1, xmm0, xmm7
    vmaxss  xmm1, xmm1, xmm6
    vmulss  xmm0, xmm1, xmm5
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm3, xmm8, xmm2, 1
    vcvttss2si eax, xmm3
    vaddss  xmm3, xmm0, xmm4
    vroundss xmm0, xmm8, xmm3, 1
  }
  *color = _EAX;
  __asm
  {
    vcvttss2si eax, xmm0
    vmovss  xmm0, dword ptr [rsp+88h+var_58+8]
    vminss  xmm1, xmm0, xmm7
    vmaxss  xmm1, xmm1, xmm6
    vmulss  xmm0, xmm1, xmm5
    vaddss  xmm3, xmm0, xmm4
    vroundss xmm0, xmm8, xmm3, 1
  }
  color[1] = _EAX;
  __asm
  {
    vcvttss2si eax, xmm0
    vmovss  xmm0, dword ptr [rsp+88h+var_58+0Ch]
    vminss  xmm1, xmm0, xmm7
    vmaxss  xmm1, xmm1, xmm6
    vmulss  xmm0, xmm1, xmm5
    vaddss  xmm3, xmm0, xmm4
    vroundss xmm0, xmm8, xmm3, 1
  }
  color[2] = _EAX;
  __asm { vcvttss2si eax, xmm0 }
  color[3] = _EAX;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
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
  const char *v9; 
  __int64 v11; 

  _RBX = result;
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1487, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  switch ( type )
  {
    case 0u:
      _RBX->enabled = Dvar_StringToBool(string);
      break;
    case 1u:
      *(float *)&_XMM0 = Dvar_StringToFloat(string);
      __asm { vmovss  dword ptr [rbx], xmm0 }
      break;
    case 2u:
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1408, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      _RBX->integer = 0;
      _RBX->vector.v[1] = 0.0;
      j_sscanf(string, "%g %g", _RBX, (char *)&_RBX->integer64 + 4);
      break;
    case 3u:
    case 0xBu:
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1417, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      _RBX->integer = 0;
      _RBX->vector.v[1] = 0.0;
      _RBX->vector.v[2] = 0.0;
      v9 = "%g %g %g";
      if ( *string == 40 )
        v9 = "( %g, %g, %g )";
      j_sscanf(string, v9, _RBX);
      break;
    case 4u:
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1429, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      _RBX->integer = 0;
      _RBX->vector.v[1] = 0.0;
      _RBX->vector.v[2] = 0.0;
      _RBX->vector.v[3] = 0.0;
      j_sscanf(string, "%g %g %g %g", _RBX, (char *)&_RBX->integer64 + 4, &_RBX->string + 1, &_RBX->color[12]);
      break;
    case 5u:
      _RBX->integer = Dvar_StringToInt(string);
      break;
    case 6u:
      _RBX->integer64 = Dvar_StringToInt64(string);
      break;
    case 7u:
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1394, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      _RBX->integer64 = I_atoui64(string);
      break;
    case 8u:
      _RBX->integer = Dvar_StringToEnum(domain, string);
      break;
    case 9u:
      _RBX->integer64 = (__int64)string;
      break;
    case 0xAu:
      Dvar_StringToColor(string, (unsigned __int8 *)_RBX);
      break;
    default:
      LODWORD(v11) = type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1538, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v11) )
        __debugbreak();
      _RBX->integer = 0;
      break;
  }
  return _RBX;
}

/*
==============
Dvar_UpdateDevGuiStep
==============
*/

void __fastcall Dvar_UpdateDevGuiStep(const dvar_t *dvar, double step)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = dvar;
  __asm { vmovaps xmm6, xmm1 }
  if ( dvar )
  {
    __asm
    {
      vmovss  dword ptr [rcx+60h], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2508, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
      __debugbreak();
    __asm
    {
      vmovss  dword ptr [rbx+60h], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
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
  int v7; 
  const char **v8; 
  int integer; 
  const char *v10; 
  unsigned __int8 v12; 
  __int64 v18; 
  DvarLimits v19; 
  DvarValue v20; 
  DvarValue v21; 
  DvarValue v22; 

  _RDI = dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2472, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !_RDI->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2474, ASSERT_TYPE_ASSERT, "(dvar->name)", (const char *)&queryFormat, "dvar->name") )
    __debugbreak();
  if ( !stringTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2476, ASSERT_TYPE_ASSERT, "( ( stringTable ) )", "( dvar->name ) = %s", _RDI->name) )
    __debugbreak();
  type = _RDI->type;
  if ( type != 8 )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(_RDI->name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2477, ASSERT_TYPE_ASSERT, "(dvar->type == DVAR_TYPE_ENUM)", "%s\n\tdvar %s type %i", "dvar->type == DVAR_TYPE_ENUM", UnobfuscatedName, type) )
      __debugbreak();
  }
  v7 = 0;
  if ( *stringTable )
  {
    v8 = stringTable;
    do
    {
      ++v7;
      ++v8;
    }
    while ( *v8 );
  }
  integer = _RDI->reset.integer;
  if ( integer < 0 || integer >= v7 && integer )
  {
    v10 = Dvar_DevGetUnobfuscatedName(_RDI->name);
    LODWORD(v18) = integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2487, ASSERT_TYPE_ASSERT, "(dvar->reset.integer >= 0 && (dvar->reset.integer < stringCount || dvar->reset.integer == 0))", "%s\n\tname %s reset %i count %i", "dvar->reset.integer >= 0 && (dvar->reset.integer < stringCount || dvar->reset.integer == 0)", v10, v18, v7) )
      __debugbreak();
  }
  __asm { vmovups xmm1, xmmword ptr [rdi+48h] }
  v12 = _RDI->type;
  _RDI->domain.enumeration.stringCount = v7;
  _RDI->domain.integer64.max = (__int64)stringTable;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+58h]
    vmovups [rsp+98h+var_48], xmm0
    vmovups xmm0, xmmword ptr [rdi+28h]
    vmovups [rsp+98h+var_28], xmm0
    vmovups [rsp+98h+var_38], xmm1
  }
  _RAX = Dvar_ClampValueToDomain(&v22, v12, &v21, &v20, &v19);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vinsertf128 ymm0, ymm0, xmm0, 1
    vmovups ymmword ptr [rdi+28h], ymm0
  }
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
  bool v7; 
  DvarValue dest; 

  _RDI = value;
  _RBX = dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2840, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  switch ( _RBX->type )
  {
    case 2u:
      _RBX->reset.integer = _RDI->integer;
      _RBX->reset.vector.v[1] = _RDI->vector.v[1];
      break;
    case 3u:
LABEL_21:
      _RBX->reset.integer = _RDI->integer;
      _RBX->reset.vector.v[1] = _RDI->vector.v[1];
      _RBX->reset.vector.v[2] = _RDI->vector.v[2];
      return;
    case 4u:
      _RBX->reset.integer = _RDI->integer;
      _RBX->reset.vector.v[1] = _RDI->vector.v[1];
      _RBX->reset.vector.v[2] = _RDI->vector.v[2];
      _RBX->reset.vector.v[3] = _RDI->vector.v[3];
      return;
    case 9u:
      integer64 = (const char *)_RDI->integer64;
      string = _RBX->reset.string;
      if ( string != _RDI->string )
      {
        v7 = string && string != _RBX->current.string && string != _RBX->latched.string;
        Dvar_AssignResetStringValue(_RBX, &dest, integer64);
        _RBX->reset.integer64 = dest.integer64;
        if ( v7 )
        {
          if ( *string )
            SL_AllocString_Free(string);
        }
      }
      break;
    case 0xBu:
      goto LABEL_21;
    default:
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rbx+48h], xmm0
      }
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
  bool v9; 
  const char *v10; 
  __int64 v11; 
  const char *v12; 
  DvarValue dest; 

  _RDI = value;
  _RBX = dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 3064, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  switch ( _RBX->type )
  {
    case 2u:
      __asm
      {
        vmovss  xmm1, dword ptr [rdi]
        vmovss  xmm0, dword ptr [rdi+4]
        vmovss  dword ptr [rbx+28h], xmm1
        vmovss  dword ptr [rbx+2Ch], xmm0
        vmovss  dword ptr [rbx+38h], xmm1
        vmovss  dword ptr [rbx+3Ch], xmm0
      }
      break;
    case 3u:
LABEL_25:
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]
        vmovss  xmm1, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rbx+28h], xmm2
        vmovss  dword ptr [rbx+2Ch], xmm1
        vmovss  dword ptr [rbx+30h], xmm0
        vmovss  dword ptr [rbx+38h], xmm2
        vmovss  dword ptr [rbx+3Ch], xmm1
        vmovss  dword ptr [rbx+40h], xmm0
      }
      return;
    case 4u:
      __asm
      {
        vmovss  xmm3, dword ptr [rdi]
        vmovss  xmm2, dword ptr [rdi+4]
        vmovss  xmm1, dword ptr [rdi+8]
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vmovss  dword ptr [rbx+28h], xmm3
        vmovss  dword ptr [rbx+2Ch], xmm2
        vmovss  dword ptr [rbx+30h], xmm1
        vmovss  dword ptr [rbx+34h], xmm0
        vmovss  dword ptr [rbx+38h], xmm3
        vmovss  dword ptr [rbx+3Ch], xmm2
        vmovss  dword ptr [rbx+40h], xmm1
        vmovss  dword ptr [rbx+44h], xmm0
      }
      return;
    case 9u:
      integer64 = (const char *)_RDI->integer64;
      string = _RBX->current.string;
      if ( integer64 != string )
      {
        v9 = string && string != _RBX->latched.string && string != _RBX->reset.string;
        Dvar_AssignCurrentStringValue(_RBX, &dest, integer64);
        v10 = _RBX->latched.string;
        v11 = dest.integer64;
        _RBX->current.integer64 = dest.integer64;
        if ( v10 && v10 != (const char *)v11 && v10 != _RBX->reset.string && *v10 )
          SL_AllocString_Free(v10);
        v12 = _RBX->current.string;
        _RBX->latched.integer64 = 0i64;
        Dvar_WeakCopyString(v12, &_RBX->latched);
        if ( v9 )
        {
          if ( *string )
            SL_AllocString_Free(string);
        }
      }
      break;
    case 0xBu:
      goto LABEL_25;
    default:
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vinsertf128 ymm0, ymm0, xmm0, 1
        vmovups ymmword ptr [rbx+28h], ymm0
      }
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
  int stringCount; 
  __int64 min; 
  unsigned __int64 v9; 
  int integer; 
  bool v12; 
  bool v14; 
  bool v15; 
  int v16; 
  bool v19; 
  bool v20; 
  int v21; 
  bool v26; 
  bool v29; 
  bool v30; 
  int v31; 
  bool v36; 
  bool v37; 
  int v38; 
  double v40; 
  double v41; 
  int v42; 

  _RBX = value;
  _RDI = domain;
  switch ( type )
  {
    case 0u:
      if ( value->enabled < 2u || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1674, ASSERT_TYPE_ASSERT, "(value.enabled == true || value.enabled == false)", (const char *)&queryFormat, "value.enabled == true || value.enabled == false") )
        return 1;
      __debugbreak();
      return 1;
    case 1u:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]; jumptable 0000000141877EB5 case 1
        vcomiss xmm0, dword ptr [rdi]
        vcomiss xmm0, dword ptr [rdi+4]
      }
      return 0;
    case 2u:
      __asm { vmovss  xmm1, dword ptr [rdi]; jumptable 0000000141877EB5 case 2 }
      v14 = 0;
      v15 = 1;
      v16 = 0;
      while ( 1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vcomiss xmm0, xmm1
        }
        if ( v14 )
          break;
        __asm { vcomiss xmm0, dword ptr [rdi+4] }
        if ( !v15 )
          break;
        ++v16;
        _RBX = (DvarValue *)((char *)_RBX + 4);
        v14 = (unsigned int)v16 < 2;
        v15 = (unsigned int)v16 <= 2;
        if ( v16 >= 2 )
          return 1;
      }
      return 0;
    case 3u:
      __asm { vmovss  xmm1, dword ptr [rdi]; jumptable 0000000141877EB5 case 3 }
      v19 = 0;
      v20 = 1;
      v21 = 0;
      while ( 1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vcomiss xmm0, xmm1
        }
        if ( v19 )
          break;
        __asm { vcomiss xmm0, dword ptr [rdi+4] }
        if ( !v20 )
          break;
        ++v21;
        _RBX = (DvarValue *)((char *)_RBX + 4);
        v19 = (unsigned int)v21 < 3;
        v20 = (unsigned int)v21 <= 3;
        if ( v21 >= 3 )
          return 1;
      }
      return 0;
    case 4u:
      __asm { vmovss  xmm1, dword ptr [rdi]; jumptable 0000000141877EB5 case 4 }
      v36 = 0;
      v37 = 1;
      v38 = 0;
      while ( 1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vcomiss xmm0, xmm1
        }
        if ( v36 )
          break;
        __asm { vcomiss xmm0, dword ptr [rdi+4] }
        if ( !v37 )
          break;
        ++v38;
        _RBX = (DvarValue *)((char *)_RBX + 4);
        v36 = (unsigned int)v38 < 4;
        v37 = (unsigned int)v38 <= 4;
        if ( v38 >= 4 )
          return 1;
      }
      return 0;
    case 5u:
      stringCount = domain->enumeration.stringCount;
      if ( domain->enumeration.stringCount > domain->integer.max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1678, ASSERT_TYPE_ASSERT, "(domain.integer.min <= domain.integer.max)", (const char *)&queryFormat, "domain.integer.min <= domain.integer.max") )
        __debugbreak();
      if ( _RBX->integer < stringCount )
        return 0;
      return _RBX->integer <= _RDI->integer.max;
    case 6u:
      min = domain->integer64.min;
      if ( domain->integer64.min > domain->integer64.max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1686, ASSERT_TYPE_ASSERT, "(domain.integer64.min <= domain.integer64.max)", (const char *)&queryFormat, "domain.integer64.min <= domain.integer64.max") )
        __debugbreak();
      if ( _RBX->integer64 < min )
        return 0;
      return _RBX->integer64 <= _RDI->integer64.max;
    case 7u:
      v9 = domain->integer64.min;
      if ( domain->integer64.min > (unsigned __int64)domain->integer64.max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1694, ASSERT_TYPE_ASSERT, "(domain.unsignedInt64.min <= domain.unsignedInt64.max)", (const char *)&queryFormat, "domain.unsignedInt64.min <= domain.unsignedInt64.max") )
        __debugbreak();
      if ( _RBX->integer64 < v9 )
        return 0;
      return _RBX->integer64 <= (unsigned __int64)_RDI->integer64.max;
    case 8u:
      integer = value->integer;
      v12 = value->integer == 0;
      if ( value->integer < 0 )
        return v12;
      if ( integer < domain->enumeration.stringCount )
        return 1;
      return integer == 0;
    case 9u:
    case 0xAu:
      return 1;
    case 0xBu:
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]; jumptable 0000000141877EB5 case 11
        vmovaps [rsp+48h+var_18], xmm6
        vxorps  xmm6, xmm6, xmm6
        vucomiss xmm0, xmm6
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+48h+var_20], xmm0
      }
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1718, ASSERT_TYPE_ASSERT, "( ( domain.vector.min == 0.0f ) )", "( domain.vector.min ) = %g", v40);
      if ( v26 )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vcomiss xmm0, xmm6
      }
      if ( !v26 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+48h+var_20], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1719, ASSERT_TYPE_ASSERT, "( ( domain.vector.max > 0.0f ) )", "( domain.vector.max ) = %g", v41) )
          __debugbreak();
      }
      v29 = 0;
      v30 = 1;
      v31 = 0;
      break;
    default:
      v42 = type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1735, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v42) )
        __debugbreak();
      return 0;
  }
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vcomiss xmm0, xmm6
    }
    if ( v29 )
      break;
    __asm { vcomiss xmm0, dword ptr [rdi+4] }
    if ( !v30 )
      break;
    ++v31;
    _RBX = (DvarValue *)((char *)_RBX + 4);
    v29 = (unsigned int)v31 < 3;
    v30 = (unsigned int)v31 <= 3;
    if ( v31 >= 3 )
    {
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
      return 1;
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  bool v58; 
  __int64 integer64; 
  char *fmt; 

  _RBX = value;
  type = dvar->type;
  switch ( type )
  {
    case 0:
      result = "0";
      if ( value->enabled )
        return "1";
      return result;
    case 1:
      __asm
      {
        vmovss  xmm1, dword ptr [rbx]; jumptable 00000001418783BF case 1
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      return j_va("%g", _RDX);
    case 2:
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+4]; jumptable 00000001418783BF case 2
        vmovss  xmm1, dword ptr [rbx]
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      return j_va("%g %g", _RDX, _R8);
    case 3:
    case 11:
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+8]; jumptable 00000001418783BF cases 3,11
        vmovss  xmm2, dword ptr [rbx+4]
        vmovss  xmm1, dword ptr [rbx]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      return j_va("%g %g %g", _RDX, _R8, _R9, a5, a6, a7, a8);
    case 4:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]; jumptable 00000001418783BF case 4
        vmovss  xmm3, dword ptr [rbx+8]
        vmovss  xmm2, dword ptr [rbx+4]
        vmovss  xmm1, dword ptr [rbx]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+38h+fmt], xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
      }
      goto LABEL_12;
    case 5:
      return j_va("%i", value->unsignedInt);
    case 6:
      return j_va("%lli", value->integer64);
    case 7:
      return j_va("%llu", value->integer64);
    case 8:
      integer = value->integer;
      v58 = value->integer == 0;
      if ( value->integer < 0 )
        goto LABEL_17;
      if ( integer >= dvar->domain.enumeration.stringCount )
      {
        v58 = integer == 0;
LABEL_17:
        if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1244, ASSERT_TYPE_ASSERT, "( ( value.integer >= 0 && value.integer < dvar->domain.enumeration.stringCount || value.integer == 0 ) )", "( value.integer ) = %i", value->integer) )
          __debugbreak();
      }
      if ( dvar->domain.enumeration.stringCount )
        return *(const char **)(dvar->domain.integer64.max + 8i64 * _RBX->integer);
      else
        return (char *)&queryFormat.fmt + 3;
    case 9:
      integer64 = value->integer64;
      if ( !value->integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1250, ASSERT_TYPE_ASSERT, "( ( value.string ) )", "( dvar->name ) = %s", dvar->name) )
        __debugbreak();
      return j_va((const char *)&queryFormat, integer64);
    case 10:
      __asm
      {
        vmovss  xmm4, cs:__real@3b808081; jumptable 00000001418783BF case 10
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm0, xmm4
        vcvtss2sd xmm5, xmm0, xmm0
        vmulss  xmm0, xmm1, xmm4
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vcvtss2sd xmm3, xmm0, xmm0
        vmulss  xmm0, xmm1, xmm4
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vcvtss2sd xmm2, xmm0, xmm0
        vmulss  xmm0, xmm1, xmm4
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+38h+fmt], xmm5
      }
LABEL_12:
      __asm
      {
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      return j_va("%g %g %g %g", *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt);
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
  bool v51; 
  const char *integer64; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  __int64 v56; 
  double v57; 
  double v58; 
  double v59; 

  _RBX = value;
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1307, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  if ( !outBufferLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1308, ASSERT_TYPE_ASSERT, "(outBufferLen)", (const char *)&queryFormat, "outBufferLen") )
    __debugbreak();
  switch ( dvar->type )
  {
    case 0u:
      unsignedInt = _RBX->color[0];
      goto LABEL_9;
    case 1u:
      __asm
      {
        vmovss  xmm3, dword ptr [rbx]; jumptable 0000000141878817 case 1
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(outBuffer, outBufferLen, "%g", *(double *)&_XMM3);
      return;
    case 2u:
      __asm
      {
        vmovss  xmm3, dword ptr [rbx]; jumptable 0000000141878817 case 2
        vmovss  xmm0, dword ptr [rbx+4]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+68h+fmt], xmm0
      }
      Com_sprintf(outBuffer, outBufferLen, "%g %g", *(double *)&_XMM3, *(double *)&fmt);
      return;
    case 3u:
    case 0xBu:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+8]; jumptable 0000000141878817 cases 3,11
        vmovss  xmm3, dword ptr [rbx]
        vmovss  xmm1, dword ptr [rbx+4]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+68h+var_40], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+68h+fmt], xmm1
      }
      Com_sprintf(outBuffer, outBufferLen, "%g %g %g", *(double *)&_XMM3, *(double *)&fmta, v57);
      return;
    case 4u:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]; jumptable 0000000141878817 case 4
        vmovss  xmm1, dword ptr [rbx+8]
        vmovss  xmm2, dword ptr [rbx+4]
        vmovss  xmm3, dword ptr [rbx]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+68h+var_38], xmm0
        vmovsd  [rsp+68h+var_40], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm3, xmm3, xmm3
      }
      goto LABEL_17;
    case 5u:
      unsignedInt = _RBX->unsignedInt;
LABEL_9:
      Com_sprintf(outBuffer, outBufferLen, "%i", unsignedInt);
      return;
    case 6u:
      Com_sprintf(outBuffer, outBufferLen, "%lli", _RBX->integer64);
      return;
    case 7u:
      Com_sprintf(outBuffer, outBufferLen, "%llu", _RBX->integer64);
      return;
    case 8u:
      integer = _RBX->integer;
      v51 = _RBX->integer == 0;
      if ( _RBX->integer < 0 )
        goto LABEL_22;
      if ( integer >= dvar->domain.enumeration.stringCount )
      {
        v51 = integer == 0;
LABEL_22:
        if ( !v51 )
        {
          LODWORD(v56) = _RBX->integer;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1350, ASSERT_TYPE_ASSERT, "( ( value.integer >= 0 && value.integer < dvar->domain.enumeration.stringCount || value.integer == 0 ) )", "( value.integer ) = %i", v56) )
            __debugbreak();
        }
      }
      if ( !dvar->domain.enumeration.stringCount )
        goto LABEL_33;
      Core_strcpy_truncate(outBuffer, outBufferLen, *(const char **)(dvar->domain.integer64.max + 8i64 * _RBX->integer));
      break;
    case 9u:
      integer64 = (const char *)_RBX->integer64;
      if ( !_RBX->integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1358, ASSERT_TYPE_ASSERT, "( ( value.string ) )", "( dvar->name ) = %s", dvar->name) )
        __debugbreak();
      Core_strcpy_truncate(outBuffer, outBufferLen, integer64);
      return;
    case 0xAu:
      __asm
      {
        vmovss  xmm3, cs:__real@3b808081; jumptable 0000000141878817 case 10
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm0, xmm3
        vcvtss2sd xmm5, xmm0, xmm0
        vmulss  xmm0, xmm1, xmm3
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vcvtss2sd xmm4, xmm0, xmm0
        vmulss  xmm0, xmm1, xmm3
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vcvtss2sd xmm2, xmm0, xmm0
        vmulss  xmm0, xmm1, xmm3
        vmovsd  [rsp+68h+var_38], xmm5
        vcvtss2sd xmm3, xmm0, xmm0
        vmovsd  [rsp+68h+var_40], xmm4
      }
LABEL_17:
      __asm
      {
        vmovq   r9, xmm3
        vmovsd  [rsp+68h+fmt], xmm2
      }
      Com_sprintf(outBuffer, outBufferLen, "%g %g %g %g", *(double *)&_XMM3, *(double *)&fmtb, v58, v59);
      return;
    default:
      LODWORD(v56) = dvar->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 1364, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type '%i'", v56) )
        __debugbreak();
LABEL_33:
      *outBuffer = 0;
      break;
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
  unsigned int v11; 
  unsigned __int8 *v12; 
  __int64 v13; 
  int v14; 
  int v15; 

  _RDI = val0;
  _RSI = val1;
  switch ( type )
  {
    case 0u:
      return val0->enabled == val1->enabled;
    case 1u:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141878C4C case 1
        vucomiss xmm0, dword ptr [rdi]
      }
      goto LABEL_5;
    case 2u:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141878C4C case 2
        vucomiss xmm0, dword ptr [rdi]
      }
      goto LABEL_5;
    case 3u:
    case 0xBu:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141878C4C cases 3,11
        vucomiss xmm0, dword ptr [rdi]
      }
      goto LABEL_5;
    case 4u:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141878C4C case 4
        vucomiss xmm0, dword ptr [rdi]
      }
LABEL_5:
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
      integer64 = _RSI->integer64;
      v11 = 0;
      if ( !_RSI->integer64 )
      {
        integer64 = 0i64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.cpp", 2056, ASSERT_TYPE_ASSERT, "(val1.string)", (const char *)&queryFormat, "val1.string") )
        {
          __debugbreak();
          integer64 = _RSI->integer64;
        }
      }
      v12 = (unsigned __int8 *)_RDI->integer64;
      v13 = integer64 - _RDI->integer64;
      do
      {
        v14 = v12[v13];
        v15 = *v12 - v14;
        if ( v15 )
          break;
        ++v12;
      }
      while ( v14 );
      LOBYTE(v11) = v15 == 0;
      result = v11;
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
  double v8; 
  double v9; 

  __asm
  {
    vmovss  xmm1, dword ptr [rdx]
    vucomiss xmm1, cs:__real@ff7fffff
    vmovss  xmm0, dword ptr [rdx+4]
    vucomiss xmm0, cs:__real@7f7fffff
    vcvtss2sd xmm1, xmm1, xmm1
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+38h+var_10], xmm0
    vmovsd  [rsp+38h+var_18], xmm1
  }
  Com_sprintf_truncate(outBuffer, outBufferLen, "Domain is any %iD vector with components from %g to %g", (unsigned int)components, v8, v9);
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

