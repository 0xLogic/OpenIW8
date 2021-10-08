/*
==============
DDL_GetStateAtOffset
==============
*/

bool __fastcall DDL_GetStateAtOffset(DDLState *resultState, DDLDef *ddl, int offset)
{
  return ?DDL_GetStateAtOffset@@YA_NPEAUDDLState@@PEAUDDLDef@@H@Z(resultState, ddl, offset);
}

/*
==============
DDL_GetUInt64
==============
*/

unsigned __int64 __fastcall DDL_GetUInt64(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetUInt64@@YA_KPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_SetByte
==============
*/

bool __fastcall DDL_SetByte(const DDLState *state, DDLContext *ddlContext, unsigned __int8 val)
{
  return ?DDL_SetByte@@YA_NPEBUDDLState@@PEAUDDLContext@@E@Z(state, ddlContext, val);
}

/*
==============
DDL_StateIsEnumArrayMember
==============
*/

bool __fastcall DDL_StateIsEnumArrayMember(const DDLState *state)
{
  return ?DDL_StateIsEnumArrayMember@@YA_NPEBUDDLState@@@Z(state);
}

/*
==============
DDL_GetShort
==============
*/

unsigned __int16 __fastcall DDL_GetShort(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetShort@@YAGPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_ForceConvert
==============
*/

bool __fastcall DDL_ForceConvert(DDLContext *ddlContext, const DDLDef *toDef, void *scratchBuff, int scratchBuffSize)
{
  return ?DDL_ForceConvert@@YA_NPEAUDDLContext@@PEBUDDLDef@@PEAXH@Z(ddlContext, toDef, scratchBuff, scratchBuffSize);
}

/*
==============
DDL_SetInt
==============
*/

bool __fastcall DDL_SetInt(const DDLState *state, DDLContext *ddlContext, int val)
{
  return ?DDL_SetInt@@YA_NPEBUDDLState@@PEAUDDLContext@@H@Z(state, ddlContext, val);
}

/*
==============
DDL_LocallyObfuscate
==============
*/

void __fastcall DDL_LocallyObfuscate(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned int randomInt)
{
  ?DDL_LocallyObfuscate@@YAXPEAUDDLContext@@PEAEII@Z(ddlContext, start, size, randomInt);
}

/*
==============
DDL_GetString
==============
*/

const char *__fastcall DDL_GetString(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetString@@YAPEBDPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_WriteAsText
==============
*/

int __fastcall DDL_WriteAsText(const DDLContext *ddlContext, void (__fastcall *func_AppendToOutput)(char *, int, void *), bool nonZeroOnly, const char *separator, void *userData)
{
  return ?DDL_WriteAsText@@YAHPEBUDDLContext@@P6AXPEADHPEAX@Z_NPEBD2@Z(ddlContext, func_AppendToOutput, nonZeroOnly, separator, userData);
}

/*
==============
DDL_IsEqual
==============
*/

bool __fastcall DDL_IsEqual(const DDLState *stateA, const DDLContext *ddlContextA, const DDLState *stateB, const DDLContext *ddlContextB)
{
  return ?DDL_IsEqual@@YA_NPEBUDDLState@@PEBUDDLContext@@01@Z(stateA, ddlContextA, stateB, ddlContextB);
}

/*
==============
DDL_LocallyUnObfuscateRangeIntoDest
==============
*/

void __fastcall DDL_LocallyUnObfuscateRangeIntoDest(unsigned __int8 *dest, DDLContext *ddlContext, const unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  ?DDL_LocallyUnObfuscateRangeIntoDest@@YAXPEAEPEAUDDLContext@@PEBEI2I@Z(dest, ddlContext, start, size, rangeStart, rangeSize);
}

/*
==============
DDL_MoveToPath
==============
*/

bool __fastcall DDL_MoveToPath(const DDLState *fromState, DDLState *toState, int depth, const char **path)
{
  return ?DDL_MoveToPath@@YA_NPEBUDDLState@@PEAU1@HQEAPEBD@Z(fromState, toState, depth, path);
}

/*
==============
DDL_SetUInt64
==============
*/

bool __fastcall DDL_SetUInt64(const DDLState *state, DDLContext *ddlContext, unsigned __int64 val)
{
  return ?DDL_SetUInt64@@YA_NPEBUDDLState@@PEAUDDLContext@@_K@Z(state, ddlContext, val);
}

/*
==============
DDL_GetPaths
==============
*/

void __fastcall DDL_GetPaths(const DDLDef *ddlDef, int startByte, int endByte, DDLContext *ddlContext)
{
  ?DDL_GetPaths@@YAXPEBUDDLDef@@HHPEAUDDLContext@@@Z(ddlDef, startByte, endByte, ddlContext);
}

/*
==============
DDL_GetValue
==============
*/

DDLValue __fastcall DDL_GetValue(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetValue@@YA?ATDDLValue@@PEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_StateIsRoot
==============
*/

bool __fastcall DDL_StateIsRoot(const DDLState *state)
{
  return ?DDL_StateIsRoot@@YA_NPEBUDDLState@@@Z(state);
}

/*
==============
DDL_SetBits
==============
*/

bool __fastcall DDL_SetBits(DDLContext *ddlContext, int bitOffset, int bitSize, unsigned int val)
{
  return ?DDL_SetBits@@YA_NPEAUDDLContext@@HHI@Z(ddlContext, bitOffset, bitSize, val);
}

/*
==============
DDL_GetEnum
==============
*/

const char *__fastcall DDL_GetEnum(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetEnum@@YAPEBDPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_SetString
==============
*/

bool __fastcall DDL_SetString(const DDLState *state, DDLContext *ddlContext, const char *val)
{
  return ?DDL_SetString@@YA_NPEBUDDLState@@PEAUDDLContext@@PEBD@Z(state, ddlContext, val);
}

/*
==============
DDL_IsZero
==============
*/

bool __fastcall DDL_IsZero(const DDLState *state, DDLContext *ddlContext)
{
  return ?DDL_IsZero@@YA_NPEBUDDLState@@PEAUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_MoveToPathByHash
==============
*/

bool __fastcall DDL_MoveToPathByHash(const DDLState *fromState, DDLState *toState, int depth, const unsigned int *path)
{
  return ?DDL_MoveToPathByHash@@YA_NPEBUDDLState@@PEAU1@HQEBI@Z(fromState, toState, depth, path);
}

/*
==============
DDL_LocallyUnObfuscateRange
==============
*/

void __fastcall DDL_LocallyUnObfuscateRange(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  ?DDL_LocallyUnObfuscateRange@@YAXPEAUDDLContext@@PEAEIPEBEI@Z(ddlContext, start, size, rangeStart, rangeSize);
}

/*
==============
DDL_GetInt
==============
*/

int __fastcall DDL_GetInt(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetInt@@YAHPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_GetByte
==============
*/

unsigned __int8 __fastcall DDL_GetByte(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetByte@@YAEPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_StateIsArrayMember
==============
*/

bool __fastcall DDL_StateIsArrayMember(const DDLState *state)
{
  return ?DDL_StateIsArrayMember@@YA_NPEBUDDLState@@@Z(state);
}

/*
==============
DDL_GetBytes
==============
*/

bool __fastcall DDL_GetBytes(const DDLContext *ddlContext, int byteOffset, unsigned __int8 *val, int size)
{
  return ?DDL_GetBytes@@YA_NPEBUDDLContext@@HPEAEH@Z(ddlContext, byteOffset, val, size);
}

/*
==============
DDL_Increment
==============
*/

bool __fastcall DDL_Increment(const DDLState *state, DDLContext *ddlContext, int incVal)
{
  return ?DDL_Increment@@YA_NPEBUDDLState@@PEAUDDLContext@@H@Z(state, ddlContext, incVal);
}

/*
==============
DDL_CreateContext
==============
*/

bool __fastcall DDL_CreateContext(void *buff, int len, const DDLDef *ddlDef, DDLContext *const ddlContext, void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  return ?DDL_CreateContext@@YA_NPEAXHPEBUDDLDef@@QEAUDDLContext@@P6AXPEBU2@IIW4DDLAccessOp@@@Z0@Z(buff, len, ddlDef, ddlContext, accessCB, userData);
}

/*
==============
DDL_UpdateChecksum
==============
*/

int __fastcall DDL_UpdateChecksum(DDLContext *ddlContext)
{
  return ?DDL_UpdateChecksum@@YAHPEAUDDLContext@@@Z(ddlContext);
}

/*
==============
DDL_StateGetArraySize
==============
*/

int __fastcall DDL_StateGetArraySize(const DDLState *state)
{
  return ?DDL_StateGetArraySize@@YAHPEBUDDLState@@@Z(state);
}

/*
==============
DDL_IsDirty
==============
*/

bool __fastcall DDL_IsDirty(DDLContext *ddlContext)
{
  return ?DDL_IsDirty@@YA_NPEAUDDLContext@@@Z(ddlContext);
}

/*
==============
DDL_SetFloat
==============
*/

bool __fastcall DDL_SetFloat(const DDLState *state, DDLContext *ddlContext, float val)
{
  return ?DDL_SetFloat@@YA_NPEBUDDLState@@PEAUDDLContext@@M@Z(state, ddlContext, val);
}

/*
==============
DDL_IsEnumValueValid
==============
*/

bool __fastcall DDL_IsEnumValueValid(const DDLDef *def, const char *enumName, const char *val)
{
  return ?DDL_IsEnumValueValid@@YA_NPEBUDDLDef@@PEBD1@Z(def, enumName, val);
}

/*
==============
DDL_SetShort
==============
*/

bool __fastcall DDL_SetShort(const DDLState *state, DDLContext *ddlContext, unsigned __int16 val)
{
  return ?DDL_SetShort@@YA_NPEBUDDLState@@PEAUDDLContext@@G@Z(state, ddlContext, val);
}

/*
==============
DDL_TransferDeserialize
==============
*/

bool __fastcall DDL_TransferDeserialize(const unsigned __int8 *buffer, const unsigned __int64 len, DDLContext *ddlContext, void *outHeader)
{
  return ?DDL_TransferDeserialize@@YA_NPEBE_KPEAUDDLContext@@PEAX@Z(buffer, len, ddlContext, outHeader);
}

/*
==============
DDL_GetEnumHash
==============
*/

unsigned int __fastcall DDL_GetEnumHash(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetEnumHash@@YAIPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_IsChecksumValid
==============
*/

bool __fastcall DDL_IsChecksumValid(const void *buff, const DDLDef *def)
{
  return ?DDL_IsChecksumValid@@YA_NPEBXPEBUDDLDef@@@Z(buff, def);
}

/*
==============
DDL_SetFixedPoint
==============
*/

bool __fastcall DDL_SetFixedPoint(const DDLState *state, DDLContext *ddlContext, const float val)
{
  return ?DDL_SetFixedPoint@@YA_NPEBUDDLState@@PEAUDDLContext@@M@Z(state, ddlContext, val);
}

/*
==============
DDL_GetRootState
==============
*/

DDLState *__fastcall DDL_GetRootState(DDLState *result, const DDLDef *ddlDef)
{
  return ?DDL_GetRootState@@YA?AUDDLState@@PEBUDDLDef@@@Z(result, ddlDef);
}

/*
==============
DDL_Zero
==============
*/

bool __fastcall DDL_Zero(const DDLState *state, DDLContext *ddlContext)
{
  return ?DDL_Zero@@YA_NPEBUDDLState@@PEAUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_IterateArray
==============
*/

bool __fastcall DDL_IterateArray(DDLState *state)
{
  return ?DDL_IterateArray@@YA_NPEAUDDLState@@@Z(state);
}

/*
==============
DDL_GetBufferSize
==============
*/

int __fastcall DDL_GetBufferSize(const DDLDef *ddlDef)
{
  return ?DDL_GetBufferSize@@YAHPEBUDDLDef@@@Z(ddlDef);
}

/*
==============
DDL_TransferClear
==============
*/

void __fastcall DDL_TransferClear(DDLTransferQueue *queue)
{
  ?DDL_TransferClear@@YAXPEAUDDLTransferQueue@@@Z(queue);
}

/*
==============
DDL_MoveToNextMember
==============
*/

bool __fastcall DDL_MoveToNextMember(DDLState *state)
{
  return ?DDL_MoveToNextMember@@YA_NPEAUDDLState@@@Z(state);
}

/*
==============
DDL_StateIsLeaf
==============
*/

bool __fastcall DDL_StateIsLeaf(const DDLState *state)
{
  return ?DDL_StateIsLeaf@@YA_NPEBUDDLState@@@Z(state);
}

/*
==============
DDL_GetValueStr
==============
*/

const char *__fastcall DDL_GetValueStr(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetValueStr@@YAPEBDPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_DirtyReset
==============
*/

void __fastcall DDL_DirtyReset(DDLContext *ddlContext)
{
  ?DDL_DirtyReset@@YAXPEAUDDLContext@@@Z(ddlContext);
}

/*
==============
DDL_ResetContext
==============
*/

bool __fastcall DDL_ResetContext(void *buff, int len, const DDLDef *ddlDef, DDLContext *const ddlContext, void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  return ?DDL_ResetContext@@YA_NPEAXHPEBUDDLDef@@QEAUDDLContext@@P6AXPEBU2@IIW4DDLAccessOp@@@Z0@Z(buff, len, ddlDef, ddlContext, accessCB, userData);
}

/*
==============
DDL_MoveToNameByHash
==============
*/

bool __fastcall DDL_MoveToNameByHash(const DDLState *fromState, DDLState *toState, unsigned int nameHash, const char *name)
{
  return ?DDL_MoveToNameByHash@@YA_NPEBUDDLState@@PEAU1@IPEBD@Z(fromState, toState, nameHash, name);
}

/*
==============
DDL_SetDirtyBit
==============
*/

void __fastcall DDL_SetDirtyBit(DDLContext *ddlContext, bool value)
{
  ?DDL_SetDirtyBit@@YAXPEAUDDLContext@@_N@Z(ddlContext, value);
}

/*
==============
DDL_GetBool
==============
*/

bool __fastcall DDL_GetBool(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetBool@@YA_NPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_ValToStr
==============
*/

const char *__fastcall DDL_ValToStr(const DDLState *state, const DDLValue val)
{
  return ?DDL_ValToStr@@YAPEBDPEBUDDLState@@TDDLValue@@@Z(state, val);
}

/*
==============
DDL_GetDef
==============
*/

DDLDef *__fastcall DDL_GetDef(const char *fileName, int version)
{
  return ?DDL_GetDef@@YAPEAUDDLDef@@PEBDH@Z(fileName, version);
}

/*
==============
DDL_StateIsEnumArrayRoot
==============
*/

bool __fastcall DDL_StateIsEnumArrayRoot(const DDLState *state)
{
  return ?DDL_StateIsEnumArrayRoot@@YA_NPEBUDDLState@@@Z(state);
}

/*
==============
DDL_IsEnumValueHashValid
==============
*/

bool __fastcall DDL_IsEnumValueHashValid(const DDLDef *def, const char *enumName, unsigned int valHash)
{
  return ?DDL_IsEnumValueHashValid@@YA_NPEBUDDLDef@@PEBDI@Z(def, enumName, valHash);
}

/*
==============
DDL_SetEnumByHash
==============
*/

bool __fastcall DDL_SetEnumByHash(const DDLState *state, DDLContext *ddlContext, unsigned int hash)
{
  return ?DDL_SetEnumByHash@@YA_NPEBUDDLState@@PEAUDDLContext@@I@Z(state, ddlContext, hash);
}

/*
==============
DDL_GetBits
==============
*/

unsigned int __fastcall DDL_GetBits(const DDLContext *ddlContext, int bitOffset, int bitSize)
{
  return ?DDL_GetBits@@YAIPEBUDDLContext@@HH@Z(ddlContext, bitOffset, bitSize);
}

/*
==============
DDL_TransferInit
==============
*/

bool __fastcall DDL_TransferInit(DDLTransferQueue *queue, unsigned __int8 *buffer, unsigned int bufferSize, unsigned int userDataSize)
{
  return ?DDL_TransferInit@@YA_NPEAUDDLTransferQueue@@PEAEII@Z(queue, buffer, bufferSize, userDataSize);
}

/*
==============
DDL_TransferEnqueue
==============
*/

bool __fastcall DDL_TransferEnqueue(DDLTransferQueue *queue, const DDLState *state, const DDLContext *context)
{
  return ?DDL_TransferEnqueue@@YA_NPEAUDDLTransferQueue@@PEBUDDLState@@PEBUDDLContext@@@Z(queue, state, context);
}

/*
==============
DDL_SetHash
==============
*/

bool __fastcall DDL_SetHash(const DDLState *state, DDLContext *ddlContext, unsigned __int64 val)
{
  return ?DDL_SetHash@@YA_NPEBUDDLState@@PEAUDDLContext@@_K@Z(state, ddlContext, val);
}

/*
==============
DDL_GetUInt
==============
*/

unsigned int __fastcall DDL_GetUInt(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetUInt@@YAIPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_MoveToNameHash
==============
*/

bool __fastcall DDL_MoveToNameHash(const DDLState *fromState, DDLState *toState, unsigned int nameHash, const char *name)
{
  return ?DDL_MoveToNameHash@@YA_NPEBUDDLState@@PEAU1@IPEBD@Z(fromState, toState, nameHash, name);
}

/*
==============
DDL_MoveToIndex
==============
*/

bool __fastcall DDL_MoveToIndex(const DDLState *fromState, DDLState *toState, int index)
{
  return ?DDL_MoveToIndex@@YA_NPEBUDDLState@@PEAU1@H@Z(fromState, toState, index);
}

/*
==============
DDL_MoveToName
==============
*/

bool __fastcall DDL_MoveToName(const DDLState *fromState, DDLState *toState, const char *name)
{
  return ?DDL_MoveToName@@YA_NPEBUDDLState@@PEAU1@PEBD@Z(fromState, toState, name);
}

/*
==============
DDL_GetType
==============
*/

DDLType __fastcall DDL_GetType(const DDLState *state)
{
  return ?DDL_GetType@@YA?AW4DDLType@@PEBUDDLState@@@Z(state);
}

/*
==============
DDL_SetUInt
==============
*/

bool __fastcall DDL_SetUInt(const DDLState *state, DDLContext *ddlContext, unsigned int val)
{
  return ?DDL_SetUInt@@YA_NPEBUDDLState@@PEAUDDLContext@@I@Z(state, ddlContext, val);
}

/*
==============
DDL_SetValueStr
==============
*/

bool __fastcall DDL_SetValueStr(const DDLState *state, DDLContext *ddlContext, const char *val)
{
  return ?DDL_SetValueStr@@YA_NPEBUDDLState@@PEAUDDLContext@@PEBD@Z(state, ddlContext, val);
}

/*
==============
DDL_TransferShutdown
==============
*/

bool __fastcall DDL_TransferShutdown(DDLTransferQueue *queue)
{
  return ?DDL_TransferShutdown@@YA_NPEAUDDLTransferQueue@@@Z(queue);
}

/*
==============
DDL_SetBytes
==============
*/

bool __fastcall DDL_SetBytes(DDLContext *ddlContext, int byteOffset, const unsigned __int8 *val, int size)
{
  return ?DDL_SetBytes@@YA_NPEAUDDLContext@@HPEBEH@Z(ddlContext, byteOffset, val, size);
}

/*
==============
DDL_SetValue
==============
*/

bool __fastcall DDL_SetValue(const DDLState *state, DDLContext *ddlContext, const DDLValue val)
{
  return ?DDL_SetValue@@YA_NPEBUDDLState@@PEAUDDLContext@@TDDLValue@@@Z(state, ddlContext, val);
}

/*
==============
DDL_StateIsArrayRoot
==============
*/

bool __fastcall DDL_StateIsArrayRoot(const DDLState *state)
{
  return ?DDL_StateIsArrayRoot@@YA_NPEBUDDLState@@@Z(state);
}

/*
==============
DDL_LocallyUnObfuscate
==============
*/

void __fastcall DDL_LocallyUnObfuscate(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size)
{
  ?DDL_LocallyUnObfuscate@@YAXPEAUDDLContext@@PEAEI@Z(ddlContext, start, size);
}

/*
==============
DDL_GetFloat
==============
*/

double __fastcall DDL_GetFloat(const DDLState *state, const DDLContext *ddlContext)
{
  double result; 

  *(float *)&result = ?DDL_GetFloat@@YAMPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
  return result;
}

/*
==============
DDL_StateGetBitSize
==============
*/

int __fastcall DDL_StateGetBitSize(const DDLState *state)
{
  return ?DDL_StateGetBitSize@@YAHPEBUDDLState@@@Z(state);
}

/*
==============
DDL_GetHash
==============
*/

unsigned __int64 __fastcall DDL_GetHash(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_GetHash@@YA_KPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL_Copy
==============
*/

bool __fastcall DDL_Copy(const DDLState *fromState, const DDLContext *fromDDLContext, const DDLState *toState, DDLContext *toDDLContext)
{
  return ?DDL_Copy@@YA_NPEBUDDLState@@PEBUDDLContext@@0PEAU2@@Z(fromState, fromDDLContext, toState, toDDLContext);
}

/*
==============
DDL_GetHeader
==============
*/

DDLHeader *__fastcall DDL_GetHeader(DDLHeader *result, const void *buff, bool isMinimal)
{
  return ?DDL_GetHeader@@YA?AUDDLHeader@@PEBX_N@Z(result, buff, isMinimal);
}

/*
==============
DDL_GetConfig
==============
*/

DDLConfigParams *__fastcall DDL_GetConfig()
{
  return ?DDL_GetConfig@@YAPEAUDDLConfigParams@@XZ();
}

/*
==============
DDL_ValidateHash
==============
*/

bool __fastcall DDL_ValidateHash(const char *str, unsigned int expectedHash)
{
  return ?DDL_ValidateHash@@YA_NPEBDI@Z(str, expectedHash);
}

/*
==============
DDL_StateIsStructRoot
==============
*/

bool __fastcall DDL_StateIsStructRoot(const DDLState *state)
{
  return ?DDL_StateIsStructRoot@@YA_NPEBUDDLState@@@Z(state);
}

/*
==============
DDL_StateCopy
==============
*/

bool __fastcall DDL_StateCopy(const DDLState *fromState, DDLState *toState)
{
  return ?DDL_StateCopy@@YA_NPEBUDDLState@@PEAU1@@Z(fromState, toState);
}

/*
==============
DDL_Init
==============
*/

bool __fastcall DDL_Init(const DDLConfigParams *const appFuncs)
{
  return ?DDL_Init@@YA_NQEBUDDLConfigParams@@@Z(appFuncs);
}

/*
==============
DDL_SetEnum
==============
*/

bool __fastcall DDL_SetEnum(const DDLState *state, DDLContext *ddlContext, const char *val)
{
  return ?DDL_SetEnum@@YA_NPEBUDDLState@@PEAUDDLContext@@PEBD@Z(state, ddlContext, val);
}

/*
==============
DDL_TransferSerialize
==============
*/

unsigned __int8 *__fastcall DDL_TransferSerialize(DDLTransferQueue *queue, void *userData, unsigned int userDataSize, unsigned __int64 *outSize)
{
  return ?DDL_TransferSerialize@@YAPEAEPEAUDDLTransferQueue@@PEAXIPEA_K@Z(queue, userData, userDataSize, outSize);
}

/*
==============
DDL_GetFixedPoint
==============
*/

double __fastcall DDL_GetFixedPoint(const DDLState *state, const DDLContext *ddlContext)
{
  double result; 

  *(float *)&result = ?DDL_GetFixedPoint@@YAMPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
  return result;
}

/*
==============
DDL_MoveToPathHash
==============
*/

bool __fastcall DDL_MoveToPathHash(const DDLState *fromState, DDLState *toState, int depth, DDLPathStep *path)
{
  return ?DDL_MoveToPathHash@@YA_NPEBUDDLState@@PEAU1@HQEAUDDLPathStep@@@Z(fromState, toState, depth, path);
}

/*
==============
DDL_SetBool
==============
*/

bool __fastcall DDL_SetBool(const DDLState *state, DDLContext *ddlContext, bool val)
{
  return ?DDL_SetBool@@YA_NPEBUDDLState@@PEAUDDLContext@@_N@Z(state, ddlContext, val);
}

/*
==============
DDL_StrToVal
==============
*/

DDLValue __fastcall DDL_StrToVal(const DDLState *state, const char *v)
{
  return ?DDL_StrToVal@@YA?ATDDLValue@@PEBUDDLState@@PEBD@Z(state, v);
}

/*
==============
DDL_LocallyObfuscateRange
==============
*/

void __fastcall DDL_LocallyObfuscateRange(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  ?DDL_LocallyObfuscateRange@@YAXPEAUDDLContext@@PEAEIPEBEI@Z(ddlContext, start, size, rangeStart, rangeSize);
}

/*
==============
DDL_MoveToName
==============
*/

bool __fastcall DDL_MoveToName(const DDLState *fromState, DDLState *toState, const char *name, bool suppressPrintErrorOnMissing)
{
  return ?DDL_MoveToName@@YA_NPEBUDDLState@@PEAU1@PEBD_N@Z(fromState, toState, name, suppressPrintErrorOnMissing);
}

/*
==============
DDL_Copy
==============
*/
char DDL_Copy(const DDLState *fromState, const DDLContext *fromDDLContext, const DDLState *toState, DDLContext *toDDLContext)
{
  DDLMember **p_member; 
  bool v9; 
  int bitSize; 
  int v11; 
  int v13; 
  int offset; 
  int v15; 
  int v16; 
  int v17; 
  unsigned int Bits; 
  unsigned int v19; 

  if ( !fromDDLContext->buff || !toDDLContext->buff )
    return 0;
  if ( fromState->arrayIndex != -1 || (p_member = &fromState->member, fromState->member) || fromState->offset || !fromState->isValid )
  {
    p_member = &fromState->member;
  }
  else if ( toState->arrayIndex == -1 && !toState->member && !toState->offset && toState->isValid )
  {
    v9 = fromState->ddlDef == toState->ddlDef;
    goto LABEL_20;
  }
  bitSize = (*p_member)->bitSize;
  if ( !DDL::DDL_Lookup_IsArrayRoot(fromState) && !DDL::DDL_Lookup_IsEnumArrayRoot(fromState) )
    bitSize /= (*p_member)->arraySize;
  v11 = toState->member->bitSize;
  if ( !DDL::DDL_Lookup_IsArrayRoot(toState) && !DDL::DDL_Lookup_IsEnumArrayRoot(toState) )
    v11 /= toState->member->arraySize;
  v9 = bitSize == v11;
LABEL_20:
  if ( !v9 )
    return 0;
  if ( fromState->arrayIndex == -1 && !*p_member && !fromState->offset && fromState->isValid && fromDDLContext->buff && toState->arrayIndex == -1 && !toState->member && !toState->offset && toState->isValid && toDDLContext->buff && fromDDLContext->len == toDDLContext->len )
  {
    memcpy_0(toDDLContext->buff, fromDDLContext->buff, toDDLContext->len);
    return 1;
  }
  else
  {
    v13 = (*p_member)->bitSize;
    if ( !DDL::DDL_Lookup_IsArrayRoot(fromState) && !DDL::DDL_Lookup_IsEnumArrayRoot(fromState) )
      v13 /= (*p_member)->arraySize;
    offset = fromState->offset;
    v15 = toState->offset;
    v9 = v13 / 32 == 0;
    v16 = v13 / 32;
    v17 = v13 % 32;
    if ( !v9 )
    {
      do
      {
        Bits = DDL::DDL_Buffer_ReadBits(fromDDLContext, offset, 32, 0);
        DDL::DDL_Buffer_WriteBits(toDDLContext, v15, Bits, 32, 0);
        offset += 32;
        v15 += 32;
        --v16;
      }
      while ( v16 );
    }
    if ( v17 )
    {
      v19 = DDL::DDL_Buffer_ReadBits(fromDDLContext, offset, v17, 0);
      DDL::DDL_Buffer_WriteBits(toDDLContext, v15, v19, v17, 0);
    }
    return 1;
  }
}

/*
==============
DDL_CreateContext
==============
*/

bool __fastcall DDL_CreateContext(void *buff, int len, const DDLDef *ddlDef, DDLContext *const ddlContext, void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  return DDL::DDL_Buffer_CreateContext(buff, len, ddlDef, ddlContext, accessCB, userData);
}

/*
==============
DDL_DirtyReset
==============
*/
void DDL_DirtyReset(DDLContext *ddlContext)
{
  DDL::DDL_Header_FlagSet(ddlContext, DDL_FLAG_DIRTY, 0);
}

/*
==============
DDL_ForceConvert
==============
*/
_BOOL8 DDL_ForceConvert(DDLContext *ddlContext, const DDLDef *toDef, void *scratchBuff, int scratchBuffSize)
{
  bool obfuscated; 
  bool v9; 

  obfuscated = ddlContext->obfuscated;
  if ( obfuscated )
    DDL::DDL_Buffer_LocallyUnObfuscate(ddlContext, (unsigned __int8 *)ddlContext->buff, ddlContext->len);
  v9 = DDL::DDL_Convert(ddlContext, toDef, scratchBuff, scratchBuffSize);
  if ( obfuscated )
    DDL::DDL_Buffer_LocallyObfuscate(ddlContext, (unsigned __int8 *)ddlContext->buff, ddlContext->len, ddlContext->randomInt);
  return v9;
}

/*
==============
DDL_GetBits
==============
*/
unsigned int DDL_GetBits(const DDLContext *ddlContext, int bitOffset, int bitSize)
{
  return DDL::DDL_Buffer_ReadBits(ddlContext, bitOffset, bitSize, 0);
}

/*
==============
DDL_GetBool
==============
*/
bool DDL_GetBool(const DDLState *state, const DDLContext *ddlContext)
{
  return DDL::DDL_Buffer_ReadBits(ddlContext, state->offset, 1, 0) != 0;
}

/*
==============
DDL_GetBufferSize
==============
*/
__int64 DDL_GetBufferSize(const DDLDef *ddlDef)
{
  return (unsigned int)ddlDef->byteSize;
}

/*
==============
DDL_GetByte
==============
*/
unsigned __int8 DDL_GetByte(const DDLState *state, const DDLContext *ddlContext)
{
  if ( IsBufferValid(state, ddlContext) )
    return DDL::DDL_Buffer_ReadBits8(ddlContext, state->offset);
  else
    return 0;
}

/*
==============
DDL_GetBytes
==============
*/
char DDL_GetBytes(const DDLContext *ddlContext, int byteOffset, unsigned __int8 *val, int size)
{
  int v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !val )
    return 0;
  v7 = 8 * byteOffset;
  v8 = size;
  if ( size > 0 )
  {
    v9 = 0i64;
    do
    {
      val[v9] = DDL::DDL_Buffer_ReadBits8(ddlContext, v7);
      v7 += 8;
      ++v9;
    }
    while ( v9 < v8 );
  }
  return 1;
}

/*
==============
DDL_GetConfig
==============
*/
DDLConfigParams *DDL_GetConfig()
{
  return &s_configParams;
}

/*
==============
DDL_GetDef
==============
*/
DDLFile *DDL_GetDef(const char *fileName, int version)
{
  DDLFile *result; 
  DDLDef *ddlDef; 
  DDLDef *i; 
  DDLDef *v7; 
  bool v8; 
  int v9; 
  int v10; 
  DDLFile *Asset; 
  DDLDef *v12; 
  char dest[256]; 

  result = DDL::DDL_GetAsset(fileName);
  if ( result )
  {
    ddlDef = result->ddlDef;
    if ( version )
    {
      if ( ddlDef )
      {
        while ( ddlDef->version != version )
        {
          ddlDef = ddlDef->next;
          if ( !ddlDef )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        ddlDef = NULL;
        v9 = DDL::DDL_strlen(fileName);
        v10 = DDL::DDL_strlen(".ddl");
        DDL::DDL_strncpy(dest, 0x100ui64, fileName, v9 - v10);
        DDL::DDL_strcat(dest, 0x100ui64, "_archive.ddl");
        if ( DDL::DDL_DoesAssetExist(dest) )
        {
          Asset = DDL::DDL_GetAsset(dest);
          if ( Asset )
          {
            v12 = Asset->ddlDef;
            if ( v12 )
            {
              while ( v12->version != version )
              {
                v12 = v12->next;
                if ( !v12 )
                  return (DDLFile *)ddlDef;
              }
              return (DDLFile *)v12;
            }
          }
        }
      }
    }
    else if ( ddlDef )
    {
      for ( i = ddlDef->next; i; ddlDef = v7 )
      {
        v7 = i;
        v8 = i->version <= ddlDef->version;
        i = i->next;
        if ( v8 )
          v7 = ddlDef;
      }
    }
    return (DDLFile *)ddlDef;
  }
  return result;
}

/*
==============
DDL_GetEnum
==============
*/
const char *DDL_GetEnum(const DDLState *state, const DDLContext *ddlContext)
{
  int Bits; 

  if ( IsBufferValid(state, ddlContext) )
    Bits = DDL::DDL_Buffer_ReadBits(ddlContext, state->offset, state->member->bitSize / state->member->arraySize, state->member->limitSize);
  else
    Bits = 0;
  return DDL::DDL_Lookup_GetEnumString(state, Bits);
}

/*
==============
DDL_GetEnumHash
==============
*/
unsigned int DDL_GetEnumHash(const DDLState *state, const DDLContext *ddlContext)
{
  int Bits; 
  const char *EnumString; 

  if ( IsBufferValid(state, ddlContext) )
    Bits = DDL::DDL_Buffer_ReadBits(ddlContext, state->offset, state->member->bitSize / state->member->arraySize, state->member->limitSize);
  else
    Bits = 0;
  EnumString = DDL::DDL_Lookup_GetEnumString(state, Bits);
  return DDL::DDL_HashString(EnumString, 0);
}

/*
==============
DDL_GetFixedPoint
==============
*/
float DDL_GetFixedPoint(const DDLState *state, const DDLContext *ddlContext)
{
  if ( IsBufferValid(state, ddlContext) )
    DDL::DDL_Buffer_ReadBits(ddlContext, state->offset, state->member->bitSize / state->member->arraySize, state->member->limitSize);
  __asm
  {
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
    vdivsd  xmm1, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vcvtsd2ss xmm2, xmm1, xmm1
    vmulss  xmm0, xmm2, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
DDL_GetFloat
==============
*/
float DDL_GetFloat(const DDLState *state, const DDLContext *ddlContext)
{
  unsigned int Bits; 
  int v7; 

  if ( IsBufferValid(state, ddlContext) )
  {
    Bits = DDL::DDL_Buffer_ReadBits(ddlContext, state->offset, state->member->bitSize / state->member->arraySize, state->member->limitSize);
    __asm { vmovss  xmm0, [rsp+28h+arg_10] }
  }
  else
  {
    v7 = 0;
    __asm { vmovss  xmm0, [rsp+28h+arg_10] }
  }
  return *(float *)&_XMM0;
}

/*
==============
DDL_GetHash
==============
*/
unsigned __int64 DDL_GetHash(const DDLState *state, const DDLContext *ddlContext)
{
  if ( IsBufferValid(state, ddlContext) )
    return DDL::DDL_Buffer_ReadBits64(ddlContext, state->offset);
  else
    return 0i64;
}

/*
==============
DDL_GetHeader
==============
*/
DDLHeader *DDL_GetHeader(DDLHeader *result, const void *buff, bool isMinimal)
{
  DDLHeader resulta; 

  _RBX = result;
  _RAX = DDL::DDL_Header_Get(&resulta, buff, isMinimal);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx], ymm0
  }
  return _RBX;
}

/*
==============
DDL_GetInt
==============
*/
int DDL_GetInt(const DDLState *state, const DDLContext *ddlContext)
{
  int result; 
  DDLMember *member; 
  int limitSize; 

  if ( IsBufferValid(state, ddlContext) )
    result = DDL::DDL_Buffer_ReadBits(ddlContext, state->offset, state->member->bitSize / state->member->arraySize, state->member->limitSize);
  else
    result = 0;
  member = state->member;
  if ( member->type == 3 )
  {
    limitSize = member->limitSize;
    if ( limitSize < 32 )
    {
      if ( _bittest(&result, (unsigned __int8)(limitSize - 1)) )
        return result << (32 - limitSize) >> (32 - limitSize);
    }
  }
  return result;
}

/*
==============
DDL_GetPaths
==============
*/

void __fastcall DDL_GetPaths(const DDLDef *ddlDef, int startByte, int endByte, DDLContext *ddlContext)
{
  DDL::DDL_Convert_GetPaths(ddlDef, startByte, endByte, ddlContext);
}

/*
==============
DDL_GetRootState
==============
*/
DDLState *DDL_GetRootState(DDLState *result, const DDLDef *ddlDef)
{
  DDLState *v2; 

  result->arrayIndex = -1;
  result->member = NULL;
  result->offset = 0;
  v2 = result;
  result->ddlDef = ddlDef;
  result->isValid = 1;
  return v2;
}

/*
==============
DDL_GetShort
==============
*/
unsigned __int16 DDL_GetShort(const DDLState *state, const DDLContext *ddlContext)
{
  if ( IsBufferValid(state, ddlContext) )
    return DDL::DDL_Buffer_ReadBits16(ddlContext, state->offset);
  else
    return 0;
}

/*
==============
DDL_GetStateAtOffset
==============
*/

bool __fastcall DDL_GetStateAtOffset(DDLState *resultState, DDLDef *ddl, int offset)
{
  return DDL::DDL_Lookup_MoveToOffset(resultState, ddl, offset);
}

/*
==============
DDL_GetString
==============
*/
char *DDL_GetString(const DDLState *state, const DDLContext *ddlContext)
{
  char *result; 
  DDLMember *member; 
  char *v6; 
  int arraySize; 
  int bitSize; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  int offset; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int8 Bits8; 

  if ( !IsBufferValid(state, ddlContext) )
    return (char *)&queryFormat.fmt + 3;
  member = state->member;
  v6 = s_stringResult;
  arraySize = member->arraySize;
  bitSize = member->bitSize;
  if ( arraySize <= 1 )
    arraySize = 1;
  v9 = bitSize / arraySize / 8;
  v10 = v9;
  v11 = v9 + 1;
  if ( (int)((_DWORD)s_currentStringResult - (unsigned int)s_stringResult + v9 + 1) <= 4096 )
    v6 = s_currentStringResult;
  s_currentStringResult = v6;
  memset_0(v6, 0, v9 + 1);
  offset = state->offset;
  v13 = v10;
  if ( (int)v10 > 0 )
  {
    v14 = 0i64;
    do
    {
      Bits8 = DDL::DDL_Buffer_ReadBits8(ddlContext, offset);
      v6 = s_currentStringResult;
      offset += 8;
      s_currentStringResult[v14] = Bits8;
      if ( !Bits8 )
        break;
      ++v14;
    }
    while ( v14 < v13 );
  }
  result = v6;
  v6[v13] = 0;
  s_currentStringResult = &v6[v11];
  return result;
}

/*
==============
DDL_GetType
==============
*/
__int64 DDL_GetType(const DDLState *state)
{
  DDLMember *member; 

  if ( state && (member = state->member) != NULL )
    return (unsigned int)member->type;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
DDL_GetUInt64
==============
*/
unsigned __int64 DDL_GetUInt64(const DDLState *state, const DDLContext *ddlContext)
{
  if ( IsBufferValid(state, ddlContext) )
    return DDL::DDL_Buffer_ReadBits64(ddlContext, state->offset);
  else
    return 0i64;
}

/*
==============
DDL_GetUInt
==============
*/
unsigned int DDL_GetUInt(const DDLState *state, const DDLContext *ddlContext)
{
  if ( IsBufferValid(state, ddlContext) )
    return DDL::DDL_Buffer_ReadBits(ddlContext, state->offset, state->member->bitSize / state->member->arraySize, state->member->limitSize);
  else
    return 0;
}

/*
==============
DDL_GetValue
==============
*/
DDLValue DDL_GetValue(const DDLState *state, const DDLContext *ddlContext)
{
  DDLValue result; 
  DDLValue v6; 

  v6.uint64Value = 0i64;
  if ( IsBufferValid(state, ddlContext) )
  {
    switch ( state->member->type )
    {
      case 0:
        v6.intValue = DDL_GetByte(state, ddlContext);
        result = v6;
        break;
      case 1:
        v6.intValue = DDL_GetShort(state, ddlContext);
        result = v6;
        break;
      case 2:
      case 0xA:
        v6.intValue = DDL_GetUInt(state, ddlContext);
        result = v6;
        break;
      case 3:
        v6.intValue = DDL_GetInt(state, ddlContext);
        result = v6;
        break;
      case 4:
        result.uint64Value = DDL_GetUInt64(state, ddlContext);
        break;
      case 5:
        result.uint64Value = DDL_GetHash(state, ddlContext);
        break;
      case 6:
        *(double *)&_XMM0 = DDL_GetFloat(state, ddlContext);
        __asm { vmovss  dword ptr [rsp+28h+arg_10], xmm0 }
        result = v6;
        break;
      case 7:
        *(double *)&_XMM0 = DDL_GetFixedPoint(state, ddlContext);
        __asm { vmovss  dword ptr [rsp+28h+arg_10], xmm0 }
        result = v6;
        break;
      case 8:
        return (DDLValue)DDL_GetString(state, ddlContext);
      default:
        return v6;
    }
  }
  else
  {
    return v6;
  }
  return result;
}

/*
==============
DDL_GetValueStr
==============
*/
char *DDL_GetValueStr(const DDLState *state, const DDLContext *ddlContext)
{
  const char *stringPtr; 
  DDLMember *member; 
  char *result; 
  int v9; 

  stringPtr = DDL_GetValue(state, ddlContext).stringPtr;
  v9 = (int)stringPtr;
  member = state->member;
  if ( !member )
    return 0i64;
  switch ( member->type )
  {
    case 0:
    case 1:
    case 3:
      result = DDL::DDL_va("%d", stringPtr);
      break;
    case 2:
      result = DDL::DDL_va("%u", stringPtr);
      break;
    case 4:
    case 5:
      result = DDL::DDL_va("%llu", stringPtr);
      break;
    case 6:
    case 7:
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+28h+arg_0]; jumptable 0000000143796768 cases 6,7
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      result = DDL::DDL_va("%f", _RDX);
      break;
    case 8:
      goto LABEL_10;
    case 0xA:
      result = (char *)DDL::DDL_Lookup_GetEnumString(state, (int)stringPtr);
      break;
    default:
      stringPtr = (char *)&queryFormat.fmt + 3;
LABEL_10:
      result = (char *)stringPtr;
      break;
  }
  return result;
}

/*
==============
DDL_Increment
==============
*/
bool DDL_Increment(const DDLState *state, DDLContext *ddlContext, int incVal)
{
  char v6; 
  int type; 
  DDLValue Value; 
  DDLMember *member; 
  int v11; 
  int rangeLimit; 
  DDLValue val; 

  if ( !IsBufferValid(state, ddlContext) )
    return 0;
  v6 = 0;
  type = state->member->type;
  if ( type < 0 )
    return 0;
  if ( type <= 2 )
  {
    v6 = 1;
  }
  else if ( type != 3 )
  {
    return 0;
  }
  Value = DDL_GetValue(state, ddlContext);
  member = state->member;
  val = Value;
  if ( v6 )
  {
    v11 = Value.intValue + incVal;
    if ( Value.intValue + incVal > member->rangeLimit )
      return 0;
  }
  else
  {
    rangeLimit = member->rangeLimit;
    v11 = incVal + val.intValue;
    if ( incVal + val.intValue > rangeLimit || v11 < -rangeLimit )
      return 0;
  }
  val.intValue = v11;
  return DDL_SetValue(state, ddlContext, val);
}

/*
==============
DDL_Init
==============
*/

bool __fastcall DDL_Init(const DDLConfigParams *const appFuncs, __int64 a2, double _XMM2_8)
{
  bool result; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr cs:s_configParams.m_scratchBuff, ymm0
    vmovups ymm1, ymmword ptr [rcx+20h]
    vmovups ymmword ptr cs:s_configParams.f_accessCallback, ymm1
    vmovups ymm2, ymmword ptr [rcx+40h]
    vmovups ymmword ptr cs:s_configParams.f_assert, ymm2
    vmovups ymm0, ymmword ptr [rcx+60h]
    vpextrq rax, xmm2, 1
  }
  s_ddlInitialized = 1;
  __asm
  {
    vmovups ymmword ptr cs:s_configParams.f_fileWriteClose, ymm0
    vmovsd  xmm1, qword ptr [rcx+80h]
  }
  if ( !_RAX )
    _RAX = DDL::DDL_HashStringDefault;
  s_configParams.f_stringHash = _RAX;
  result = 1;
  __asm { vmovsd  cs:s_configParams.f_getAsset, xmm1 }
  return result;
}

/*
==============
DDL_IsChecksumValid
==============
*/
bool DDL_IsChecksumValid(const void *buff, const DDLDef *def)
{
  const DDLDef *ddlDef; 
  const char *name; 
  int v9; 
  DDLFile *Asset; 
  DDLDef *i; 
  const DDLDef *v12; 
  bool v13; 
  int v14; 
  int v15; 
  DDLFile *v16; 
  DDLDef *v17; 
  DDLHeader result; 
  char dest[256]; 

  ddlDef = def;
  _RAX = DDL::DDL_Header_Get(&result, buff, def->minimalHeader);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vextractf128 xmm0, ymm0, 1
    vmovd   eax, xmm0
  }
  if ( (_WORD)_EAX == ddlDef->version )
    goto LABEL_20;
  name = ddlDef->name;
  v9 = (unsigned __int16)_EAX;
  Asset = DDL::DDL_GetAsset(ddlDef->name);
  if ( !Asset )
    return 0;
  ddlDef = Asset->ddlDef;
  if ( !v9 )
  {
    if ( ddlDef )
    {
      for ( i = ddlDef->next; i; ddlDef = v12 )
      {
        v12 = i;
        v13 = i->version <= ddlDef->version;
        i = i->next;
        if ( v13 )
          v12 = ddlDef;
      }
      goto LABEL_20;
    }
    return 0;
  }
  if ( ddlDef )
  {
    while ( ddlDef->version != v9 )
    {
      ddlDef = ddlDef->next;
      if ( !ddlDef )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    ddlDef = NULL;
    v14 = DDL::DDL_strlen(name);
    v15 = DDL::DDL_strlen(".ddl");
    DDL::DDL_strncpy(dest, 0x100ui64, name, v14 - v15);
    DDL::DDL_strcat(dest, 0x100ui64, "_archive.ddl");
    if ( DDL::DDL_DoesAssetExist(dest) )
    {
      v16 = DDL::DDL_GetAsset(dest);
      if ( v16 )
      {
        v17 = v16->ddlDef;
        if ( v17 )
        {
          while ( v17->version != v9 )
          {
            v17 = v17->next;
            if ( !v17 )
              goto LABEL_20;
          }
          ddlDef = v17;
        }
      }
    }
  }
LABEL_20:
  if ( !ddlDef )
    return 0;
  return DDL::DDL_Header_IsDataChecksumValid(buff, ddlDef);
}

/*
==============
DDL_IsDirty
==============
*/
bool DDL_IsDirty(DDLContext *ddlContext)
{
  return DDL::DDL_Header_FlagGet(ddlContext, DDL_FLAG_DIRTY);
}

/*
==============
DDL_IsEnumValueHashValid
==============
*/
bool DDL_IsEnumValueHashValid(const DDLDef *def, const char *enumName, unsigned int valHash)
{
  int v3; 
  __int64 v7; 

  v3 = 0;
  if ( def->enumCount > 0 )
  {
    v7 = 0i64;
    do
    {
      if ( !DDL::DDL_strcmp(def->enumList[v7].name, enumName) )
        break;
      ++v3;
      ++v7;
    }
    while ( v3 < def->enumCount );
  }
  return v3 < def->enumCount && DDL::DDL_Lookup_FindEnumIndexByHash(def, v3, valHash) != -1;
}

/*
==============
DDL_IsEnumValueValid
==============
*/
bool DDL_IsEnumValueValid(const DDLDef *def, const char *enumName, const char *val)
{
  int v5; 
  unsigned int v6; 
  __int64 v7; 

  v5 = 0;
  v6 = DDL::DDL_HashString(val, 0);
  if ( def->enumCount > 0 )
  {
    v7 = 0i64;
    do
    {
      if ( !DDL::DDL_strcmp(def->enumList[v7].name, enumName) )
        break;
      ++v5;
      ++v7;
    }
    while ( v5 < def->enumCount );
  }
  return v5 < def->enumCount && DDL::DDL_Lookup_FindEnumIndexByHash(def, v5, v6) != -1;
}

/*
==============
DDL_IsEqual
==============
*/
char DDL_IsEqual(const DDLState *stateA, const DDLContext *ddlContextA, const DDLState *stateB, const DDLContext *ddlContextB)
{
  int BitSize; 
  int offset; 
  int v10; 
  int v11; 
  int i; 
  unsigned int Bits; 
  unsigned int v14; 

  BitSize = DDL_StateGetBitSize(stateA);
  offset = stateA->offset;
  v10 = stateB->offset;
  v11 = BitSize / 32;
  for ( i = BitSize % 32; v11; v10 += 32 )
  {
    --v11;
    Bits = DDL::DDL_Buffer_ReadBits(ddlContextA, offset, 32, 0);
    if ( Bits != DDL::DDL_Buffer_ReadBits(ddlContextB, v10, 32, 0) )
      return 0;
    offset += 32;
  }
  if ( i )
  {
    v14 = DDL::DDL_Buffer_ReadBits(ddlContextA, offset, i, 0);
    if ( v14 != DDL::DDL_Buffer_ReadBits(ddlContextB, v10, i, 0) )
      return 0;
  }
  return 1;
}

/*
==============
DDL_IsZero
==============
*/
bool DDL_IsZero(const DDLState *state, DDLContext *ddlContext)
{
  int BitSize; 
  int offset; 
  int v6; 
  int i; 

  BitSize = DDL_StateGetBitSize(state);
  offset = state->offset;
  v6 = BitSize / 32;
  for ( i = BitSize % 32; v6; offset += 32 )
  {
    --v6;
    if ( DDL::DDL_Buffer_ReadBits(ddlContext, offset, 32, 0) )
      return 0;
  }
  return !i || !DDL::DDL_Buffer_ReadBits(ddlContext, offset, i, 0);
}

/*
==============
DDL_IterateArray
==============
*/

bool __fastcall DDL_IterateArray(DDLState *state)
{
  return DDL::DDL_Lookup_IterateArray(state);
}

/*
==============
DDL_LocallyObfuscate
==============
*/

void __fastcall DDL_LocallyObfuscate(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned int randomInt)
{
  DDL::DDL_Buffer_LocallyObfuscate(ddlContext, start, size, randomInt);
}

/*
==============
DDL_LocallyObfuscateRange
==============
*/

void __fastcall DDL_LocallyObfuscateRange(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  DDL::DDL_Buffer_LocallyObfuscateRange(ddlContext, start, size, rangeStart, rangeSize);
}

/*
==============
DDL_LocallyUnObfuscate
==============
*/

void __fastcall DDL_LocallyUnObfuscate(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size)
{
  DDL::DDL_Buffer_LocallyUnObfuscate(ddlContext, start, size);
}

/*
==============
DDL_LocallyUnObfuscateRange
==============
*/

void __fastcall DDL_LocallyUnObfuscateRange(DDLContext *ddlContext, unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  DDL::DDL_Buffer_LocallyUnObfuscateRange(ddlContext, start, size, rangeStart, rangeSize);
}

/*
==============
DDL_LocallyUnObfuscateRangeIntoDest
==============
*/

void __fastcall DDL_LocallyUnObfuscateRangeIntoDest(unsigned __int8 *dest, DDLContext *ddlContext, const unsigned __int8 *start, const unsigned int size, const unsigned __int8 *rangeStart, const unsigned int rangeSize)
{
  DDL::DDL_Buffer_LocallyUnObfuscateRangeIntoDest(dest, ddlContext, start, size, rangeStart, rangeSize);
}

/*
==============
DDL_MoveToIndex
==============
*/
bool DDL_MoveToIndex(const DDLState *fromState, DDLState *toState, int index)
{
  return DDL::DDL_Lookup_MoveToIndex(fromState, toState, index, 0);
}

/*
==============
DDL_MoveToName
==============
*/
bool DDL_MoveToName(const DDLState *fromState, DDLState *toState, const char *name)
{
  return DDL::DDL_Lookup_MoveToName(fromState, toState, name, 0);
}

/*
==============
DDL_MoveToName
==============
*/

bool __fastcall DDL_MoveToName(const DDLState *fromState, DDLState *toState, const char *name, bool suppressPrintErrorOnMissing)
{
  return DDL::DDL_Lookup_MoveToName(fromState, toState, name, suppressPrintErrorOnMissing);
}

/*
==============
DDL_MoveToNameByHash
==============
*/
bool DDL_MoveToNameByHash(const DDLState *fromState, DDLState *toState, unsigned int nameHash, const char *name)
{
  return DDL::DDL_Lookup_MoveToNameHash(fromState, toState, name, nameHash, 0);
}

/*
==============
DDL_MoveToNameHash
==============
*/
bool DDL_MoveToNameHash(const DDLState *fromState, DDLState *toState, unsigned int nameHash, const char *name)
{
  return DDL::DDL_Lookup_MoveToNameHash(fromState, toState, name, nameHash, 0);
}

/*
==============
DDL_MoveToNextMember
==============
*/
bool DDL_MoveToNextMember(DDLState *state)
{
  return DDL::DDL_Lookup_MoveToNextMember(state, 0, 1);
}

/*
==============
DDL_MoveToPath
==============
*/
char DDL_MoveToPath(const DDLState *fromState, DDLState *toState, int depth, const char **path)
{
  __int64 v6; 
  __int64 v7; 
  int v8; 
  bool v9; 

  if ( fromState && toState )
  {
    toState->member = fromState->member;
    toState->ddlDef = fromState->ddlDef;
    toState->arrayIndex = fromState->arrayIndex;
    toState->offset = fromState->offset;
    toState->isValid = fromState->isValid;
  }
  v6 = depth;
  if ( depth <= 0 )
    return 1;
  v7 = 0i64;
  while ( 1 )
  {
    if ( DDL::DDL_Lookup_IsArrayRoot(toState) )
    {
      v8 = atoi(path[v7]);
      v9 = DDL::DDL_Lookup_MoveToIndex(toState, toState, v8, 0);
    }
    else
    {
      v9 = DDL::DDL_Lookup_MoveToName(toState, toState, path[v7], 0);
    }
    if ( !v9 )
      break;
    if ( ++v7 >= v6 )
      return 1;
  }
  return 0;
}

/*
==============
DDL_MoveToPathByHash
==============
*/
char DDL_MoveToPathByHash(const DDLState *fromState, DDLState *toState, int depth, const unsigned int *path)
{
  __int64 v6; 
  __int64 v7; 

  if ( fromState && toState )
  {
    toState->member = fromState->member;
    toState->ddlDef = fromState->ddlDef;
    toState->arrayIndex = fromState->arrayIndex;
    toState->offset = fromState->offset;
    toState->isValid = fromState->isValid;
  }
  v6 = depth;
  if ( depth <= 0 )
    return 1;
  v7 = 0i64;
  while ( DDL::DDL_Lookup_IsArrayRoot(toState) ? DDL::DDL_Lookup_MoveToIndex(toState, toState, path[v7], 0) : DDL::DDL_Lookup_MoveToNameHash(toState, toState, NULL, path[v7], 0) )
  {
    if ( ++v7 >= v6 )
      return 1;
  }
  return 0;
}

/*
==============
DDL_MoveToPathHash
==============
*/
char DDL_MoveToPathHash(const DDLState *fromState, DDLState *toState, int depth, DDLPathStep *path)
{
  __int64 v6; 
  __int64 v7; 
  int index; 

  if ( fromState && toState )
  {
    toState->member = fromState->member;
    toState->ddlDef = fromState->ddlDef;
    toState->arrayIndex = fromState->arrayIndex;
    toState->offset = fromState->offset;
    toState->isValid = fromState->isValid;
  }
  v6 = depth;
  if ( depth <= 0 )
    return 1;
  v7 = 0i64;
  while ( DDL::DDL_Lookup_MoveToNameHash(toState, toState, NULL, path[v7].hash, 0) )
  {
    if ( DDL::DDL_Lookup_IsArrayRoot(toState) )
    {
      index = path[v7].index;
      if ( index >= 0 && !DDL::DDL_Lookup_MoveToIndex(toState, toState, index, 0) )
        break;
    }
    if ( ++v7 >= v6 )
      return 1;
  }
  return 0;
}

/*
==============
DDL_PopPath
==============
*/
__int64 DDL_PopPath()
{
  __int64 result; 
  char v1; 

  result = (unsigned int)s_pathLength;
  if ( s_pathLength > 0 )
  {
    do
    {
      v1 = s_path[(int)result];
      if ( v1 == 46 )
        break;
      if ( v1 == 91 )
        break;
      result = (unsigned int)(result - 1);
    }
    while ( (int)result > 0 );
    s_pathLength = result;
  }
  if ( (unsigned __int64)(int)result >= 0x400 )
  {
    j___report_rangecheckfailure((int)result);
    JUMPOUT(0x143797379i64);
  }
  s_path[(int)result] = 0;
  return result;
}

/*
==============
DDL_ResetContext
==============
*/

bool __fastcall DDL_ResetContext(void *buff, int len, const DDLDef *ddlDef, DDLContext *const ddlContext, void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  return DDL::DDL_Buffer_ResetContext(buff, len, ddlDef, ddlContext, accessCB, userData);
}

/*
==============
DDL_SetBits
==============
*/
bool DDL_SetBits(DDLContext *ddlContext, int bitOffset, int bitSize, unsigned int val)
{
  return DDL::DDL_Buffer_WriteBits(ddlContext, bitOffset, val, bitSize, 0);
}

/*
==============
DDL_SetBool
==============
*/
bool DDL_SetBool(const DDLState *state, DDLContext *ddlContext, bool val)
{
  return DDL::DDL_Buffer_WriteBits(ddlContext, state->offset, val, 1, 0);
}

/*
==============
DDL_SetByte
==============
*/
bool DDL_SetByte(const DDLState *state, DDLContext *ddlContext, unsigned __int8 val)
{
  return IsBufferValid(state, ddlContext) && DDL::DDL_Buffer_WriteBits8(ddlContext, state->offset, val);
}

/*
==============
DDL_SetBytes
==============
*/
char DDL_SetBytes(DDLContext *ddlContext, int byteOffset, const unsigned __int8 *val, int size)
{
  __int64 v4; 
  int v6; 
  __int64 v8; 

  v4 = size;
  v6 = 8 * byteOffset;
  if ( size <= 0 )
    return 1;
  v8 = 0i64;
  while ( DDL::DDL_Buffer_WriteBits8(ddlContext, v6, val[v8]) )
  {
    v6 += 8;
    if ( ++v8 >= v4 )
      return 1;
  }
  return 0;
}

/*
==============
DDL_SetDirtyBit
==============
*/
void DDL_SetDirtyBit(DDLContext *ddlContext, bool value)
{
  DDL::DDL_Header_FlagSet(ddlContext, DDL_FLAG_DIRTY, value);
}

/*
==============
DDL_SetEnum
==============
*/
bool DDL_SetEnum(const DDLState *state, DDLContext *ddlContext, const char *val)
{
  unsigned int v5; 
  unsigned int EnumIndexByHash; 

  v5 = DDL::DDL_HashString(val, 0);
  EnumIndexByHash = DDL::DDL_Lookup_FindEnumIndexByHash(state->ddlDef, state->member->externalIndex, v5);
  return EnumIndexByHash != -1 && DDL_SetUInt(state, ddlContext, EnumIndexByHash);
}

/*
==============
DDL_SetEnumByHash
==============
*/
bool DDL_SetEnumByHash(const DDLState *state, DDLContext *ddlContext, unsigned int hash)
{
  unsigned int EnumIndexByHash; 

  EnumIndexByHash = DDL::DDL_Lookup_FindEnumIndexByHash(state->ddlDef, state->member->externalIndex, hash);
  return EnumIndexByHash != -1 && DDL_SetUInt(state, ddlContext, EnumIndexByHash);
}

/*
==============
DDL_SetFixedPoint
==============
*/

bool __fastcall DDL_SetFixedPoint(const DDLState *state, DDLContext *ddlContext, double val)
{
  __asm
  {
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
    vdivsd  xmm1, xmm0, xmm1
    vcvtsd2ss xmm3, xmm1, xmm1
    vdivss  xmm2, xmm2, xmm3
    vcvttss2si r8, xmm2; val
  }
  return DDL_SetUInt(state, ddlContext, _R8);
}

/*
==============
DDL_SetFloat
==============
*/

bool __fastcall DDL_SetFloat(const DDLState *state, DDLContext *ddlContext, double val)
{
  unsigned int vala; 

  __asm { vmovss  [rsp+val], xmm2 }
  return DDL_SetUInt(state, ddlContext, vala);
}

/*
==============
DDL_SetHash
==============
*/
bool DDL_SetHash(const DDLState *state, DDLContext *ddlContext, unsigned __int64 val)
{
  return IsBufferValid(state, ddlContext) && DDL::DDL_Buffer_WriteBits64(ddlContext, state->offset, val);
}

/*
==============
DDL_SetInt
==============
*/
bool DDL_SetInt(const DDLState *state, DDLContext *ddlContext, int val)
{
  DDLMember *member; 
  int limitSize; 
  int v6; 

  member = state->member;
  if ( member->type == 3 )
  {
    limitSize = member->limitSize;
    if ( limitSize < 32 )
    {
      v6 = (1 << (limitSize - 1)) - 1;
      if ( val > v6 )
        return DDL_SetUInt(state, ddlContext, v6);
      if ( val < 1 - (1 << (limitSize - 1)) )
        val = 1 - (1 << (limitSize - 1));
    }
  }
  return DDL_SetUInt(state, ddlContext, val);
}

/*
==============
DDL_SetShort
==============
*/
bool DDL_SetShort(const DDLState *state, DDLContext *ddlContext, unsigned __int16 val)
{
  return IsBufferValid(state, ddlContext) && DDL::DDL_Buffer_WriteBits16(ddlContext, state->offset, val);
}

/*
==============
DDL_SetString
==============
*/
char DDL_SetString(const DDLState *state, DDLContext *ddlContext, const char *val)
{
  int v6; 
  int v7; 

  if ( !IsBufferValid(state, ddlContext) || !val )
    return 0;
  v6 = DDL::DDL_strlen(val);
  v7 = state->member->bitSize / state->member->arraySize / 8;
  if ( v6 <= v7 )
  {
    if ( v6 < v7 )
      ++v6;
  }
  else
  {
    v6 = state->member->bitSize / state->member->arraySize / 8;
  }
  if ( v6 <= 0 )
    return 0;
  DDL::DDL_Buffer_WriteBitsRaw(ddlContext, state->offset, (const unsigned __int8 *)val, 8 * v6, 8 * v7);
  return 1;
}

/*
==============
DDL_SetUInt64
==============
*/
bool DDL_SetUInt64(const DDLState *state, DDLContext *ddlContext, unsigned __int64 val)
{
  return IsBufferValid(state, ddlContext) && DDL::DDL_Buffer_WriteBits64(ddlContext, state->offset, val);
}

/*
==============
DDL_SetUInt
==============
*/
bool DDL_SetUInt(const DDLState *state, DDLContext *ddlContext, unsigned int val)
{
  return IsBufferValid(state, ddlContext) && DDL::DDL_Buffer_WriteBits(ddlContext, state->offset, val, state->member->bitSize / state->member->arraySize, state->member->limitSize);
}

/*
==============
DDL_SetValue
==============
*/
bool DDL_SetValue(const DDLState *state, DDLContext *ddlContext, const DDLValue val)
{
  const char *uint64Value; 
  DDLMember *member; 
  bool result; 
  int limitSize; 
  signed int v10; 
  int v20; 
  int v21; 
  int vala; 
  unsigned int valb; 

  uint64Value = (const char *)val.uint64Value;
  vala = val.intValue;
  if ( !IsBufferValid(state, ddlContext) )
    return 0;
  member = state->member;
  switch ( member->type )
  {
    case 0:
      if ( !IsBufferValid(state, ddlContext) )
        return 0;
      return DDL::DDL_Buffer_WriteBits8(ddlContext, state->offset, (unsigned __int8)uint64Value);
    case 1:
      if ( !IsBufferValid(state, ddlContext) )
        return 0;
      return DDL::DDL_Buffer_WriteBits16(ddlContext, state->offset, (unsigned __int16)uint64Value);
    case 2:
    case 0xA:
      goto $LN5_268;
    case 3:
      limitSize = member->limitSize;
      if ( limitSize >= 32 )
        goto $LN5_268;
      v10 = (1 << (limitSize - 1)) - 1;
      if ( (int)uint64Value <= v10 )
      {
        if ( (int)uint64Value < 1 - (1 << (limitSize - 1)) )
          LODWORD(uint64Value) = 1 - (1 << (limitSize - 1));
$LN5_268:
        result = DDL_SetUInt(state, ddlContext, (unsigned int)uint64Value);
      }
      else
      {
        result = DDL_SetUInt(state, ddlContext, v10);
      }
      break;
    case 4:
      return DDL_SetUInt64(state, ddlContext, (unsigned __int64)uint64Value);
    case 5:
      if ( !IsBufferValid(state, ddlContext) )
        return 0;
      return DDL::DDL_Buffer_WriteBits64(ddlContext, state->offset, (unsigned __int64)uint64Value);
    case 6:
      __asm
      {
        vmovss  xmm0, [rsp+58h+val]; jumptable 00000001437979B6 case 6
        vmovss  [rsp+58h+val], xmm0
      }
      return DDL_SetUInt(state, ddlContext, valb);
    case 7:
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovss  xmm2, [rsp+58h+val]
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2sd xmm1, xmm1, rax
        vdivsd  xmm1, xmm0, xmm1
        vcvtsd2ss xmm3, xmm1, xmm1
        vdivss  xmm0, xmm2, xmm3
        vcvttss2si r8, xmm0; val
      }
      return DDL_SetUInt(state, ddlContext, _R8);
    case 8:
      if ( !IsBufferValid(state, ddlContext) || !uint64Value )
        return 0;
      v20 = DDL::DDL_strlen(uint64Value);
      v21 = state->member->bitSize / state->member->arraySize / 8;
      if ( v20 <= v21 )
      {
        if ( v20 < v21 )
          ++v20;
      }
      else
      {
        v20 = state->member->bitSize / state->member->arraySize / 8;
      }
      if ( v20 <= 0 )
        return 0;
      DDL::DDL_Buffer_WriteBitsRaw(ddlContext, state->offset, (const unsigned __int8 *)uint64Value, 8 * v20, 8 * v21);
      return 1;
    default:
      return 0;
  }
  return result;
}

/*
==============
DDL_SetValueStr
==============
*/
bool DDL_SetValueStr(const DDLState *state, DDLContext *ddlContext, const char *val)
{
  unsigned int v6; 
  DDLValue vala; 

  switch ( state->member->type )
  {
    case 0:
    case 1:
    case 3:
      vala.intValue = atoi(val);
      break;
    case 2:
      vala.intValue = DDL::DDL_atoui(val);
      break;
    case 4:
    case 5:
      vala.uint64Value = DDL::DDL_atoui(val);
      break;
    case 6:
    case 7:
      *(double *)&_XMM0 = DDL::DDL_atof(val);
      __asm { vmovss  dword ptr [rsp+28h+val], xmm0 }
      break;
    case 8:
      vala.uint64Value = (unsigned __int64)val;
      break;
    case 0xA:
      v6 = DDL::DDL_HashString(val, 0);
      vala.intValue = DDL::DDL_Lookup_FindEnumIndexByHash(state->ddlDef, state->member->externalIndex, v6);
      break;
    default:
      vala.intValue = 0;
      break;
  }
  return DDL_SetValue(state, ddlContext, vala);
}

/*
==============
DDL_StateCopy
==============
*/
char DDL_StateCopy(const DDLState *fromState, DDLState *toState)
{
  if ( !fromState || !toState )
    return 0;
  toState->member = fromState->member;
  toState->ddlDef = fromState->ddlDef;
  toState->arrayIndex = fromState->arrayIndex;
  toState->offset = fromState->offset;
  toState->isValid = fromState->isValid;
  return 1;
}

/*
==============
DDL_StateGetArraySize
==============
*/
__int64 DDL_StateGetArraySize(const DDLState *state)
{
  if ( DDL::DDL_Lookup_IsArrayRoot(state) || DDL::DDL_Lookup_IsEnumArrayRoot(state) )
    return (unsigned int)state->member->arraySize;
  else
    return 0i64;
}

/*
==============
DDL_StateGetBitSize
==============
*/
__int64 DDL_StateGetBitSize(const DDLState *state)
{
  if ( state->arrayIndex == -1 && !state->member && !state->offset && state->isValid )
    return (unsigned int)state->ddlDef->bitSize;
  if ( DDL::DDL_Lookup_IsArrayRoot(state) || DDL::DDL_Lookup_IsEnumArrayRoot(state) )
    return (unsigned int)state->member->bitSize;
  return (unsigned int)(state->member->bitSize / state->member->arraySize);
}

/*
==============
DDL_StateIsArrayMember
==============
*/

bool __fastcall DDL_StateIsArrayMember(const DDLState *state)
{
  return DDL::DDL_Lookup_IsArrayMember(state);
}

/*
==============
DDL_StateIsArrayRoot
==============
*/

bool __fastcall DDL_StateIsArrayRoot(const DDLState *state)
{
  return DDL::DDL_Lookup_IsArrayRoot(state);
}

/*
==============
DDL_StateIsEnumArrayMember
==============
*/

bool __fastcall DDL_StateIsEnumArrayMember(const DDLState *state)
{
  return DDL::DDL_Lookup_IsEnumArrayMember(state);
}

/*
==============
DDL_StateIsEnumArrayRoot
==============
*/

bool __fastcall DDL_StateIsEnumArrayRoot(const DDLState *state)
{
  return DDL::DDL_Lookup_IsEnumArrayRoot(state);
}

/*
==============
DDL_StateIsLeaf
==============
*/
bool DDL_StateIsLeaf(const DDLState *state)
{
  DDLMember *member; 
  bool result; 

  result = 0;
  if ( state->arrayIndex != -1 || state->member || state->offset || !state->isValid )
  {
    member = state->member;
    if ( (!member || member->type != 9) && !DDL::DDL_Lookup_IsArrayRoot(state) && !DDL::DDL_Lookup_IsEnumArrayRoot(state) )
      return 1;
  }
  return result;
}

/*
==============
DDL_StateIsRoot
==============
*/
bool DDL_StateIsRoot(const DDLState *state)
{
  return state->arrayIndex == -1 && !state->member && !state->offset && state->isValid;
}

/*
==============
DDL_StateIsStructRoot
==============
*/
bool DDL_StateIsStructRoot(const DDLState *state)
{
  DDLMember *member; 

  member = state->member;
  return member && member->type == 9;
}

/*
==============
DDL_StrToVal
==============
*/
DDLValue DDL_StrToVal(const DDLState *state, const char *v)
{
  DDLValue result; 
  unsigned int v5; 
  DDLValue v6; 

  result.uint64Value = (unsigned __int64)v;
  switch ( state->member->type )
  {
    case 0:
    case 1:
    case 3:
      v6.intValue = atoi(v);
      result = v6;
      break;
    case 2:
      v6.intValue = DDL::DDL_atoui(v);
      result = v6;
      break;
    case 4:
    case 5:
      result.uint64Value = DDL::DDL_atoui(v);
      break;
    case 6:
    case 7:
      *(double *)&_XMM0 = DDL::DDL_atof(v);
      __asm { vmovss  dword ptr [rsp+28h+arg_0], xmm0 }
      result = v6;
      break;
    case 8:
      return result;
    case 0xA:
      v5 = DDL::DDL_HashString(v, 0);
      v6.intValue = DDL::DDL_Lookup_FindEnumIndexByHash(state->ddlDef, state->member->externalIndex, v5);
      result = v6;
      break;
    default:
      v6.intValue = 0;
      result = v6;
      break;
  }
  return result;
}

/*
==============
DDL_TransferClear
==============
*/

void __fastcall DDL_TransferClear(DDLTransferQueue *queue)
{
  DDL::DDL_Transfer_Clear(queue);
}

/*
==============
DDL_TransferDeserialize
==============
*/

bool __fastcall DDL_TransferDeserialize(const unsigned __int8 *buffer, const unsigned __int64 len, DDLContext *ddlContext, void *outHeader)
{
  return DDL::DDL_Transfer_Deserialize(buffer, len, ddlContext, outHeader);
}

/*
==============
DDL_TransferEnqueue
==============
*/

bool __fastcall DDL_TransferEnqueue(DDLTransferQueue *queue, const DDLState *state, const DDLContext *context)
{
  return DDL::DDL_Transfer_Enqueue(queue, state, context);
}

/*
==============
DDL_TransferInit
==============
*/

bool __fastcall DDL_TransferInit(DDLTransferQueue *queue, unsigned __int8 *buffer, unsigned int bufferSize, unsigned int userDataSize)
{
  return DDL::DDL_Transfer_InitQueue(queue, buffer, bufferSize, userDataSize);
}

/*
==============
DDL_TransferSerialize
==============
*/

unsigned __int8 *__fastcall DDL_TransferSerialize(DDLTransferQueue *queue, void *userData, unsigned int userDataSize, unsigned __int64 *outSize)
{
  return DDL::DDL_Transfer_Serialize(queue, userData, userDataSize, outSize);
}

/*
==============
DDL_TransferShutdown
==============
*/

bool __fastcall DDL_TransferShutdown(DDLTransferQueue *queue)
{
  return DDL::DDL_Transfer_Shutdown(queue);
}

/*
==============
DDL_UpdateChecksum
==============
*/

int __fastcall DDL_UpdateChecksum(DDLContext *ddlContext)
{
  return DDL::DDL_Header_UpdateDataChecksum(ddlContext);
}

/*
==============
DDL_ValToStr
==============
*/
char *DDL_ValToStr(const DDLState *state, const DDLValue val)
{
  char *result; 
  int intValue; 

  intValue = val.intValue;
  result = (char *)state->member;
  if ( result )
  {
    switch ( *((_DWORD *)result + 6) )
    {
      case 0:
      case 1:
      case 3:
        result = DDL::DDL_va("%d", val.uint64Value);
        break;
      case 2:
        result = DDL::DDL_va("%u", val.uint64Value);
        break;
      case 4:
      case 5:
        result = DDL::DDL_va("%llu", val.uint64Value);
        break;
      case 6:
      case 7:
        __asm
        {
          vmovss  xmm1, dword ptr [rsp+28h+arg_8]; jumptable 0000000143798165 cases 6,7
          vcvtss2sd xmm1, xmm1, xmm1
          vmovq   rdx, xmm1; enumValue
        }
        result = DDL::DDL_va("%f", _RDX, state);
        break;
      case 8:
        result = (char *)val.uint64Value;
        break;
      case 0xA:
        result = (char *)DDL::DDL_Lookup_GetEnumString(state, val.intValue);
        break;
      default:
        result = (char *)&queryFormat.fmt + 3;
        break;
    }
  }
  return result;
}

/*
==============
DDL_ValidateHash
==============
*/
bool DDL_ValidateHash(const char *str, unsigned int expectedHash)
{
  return expectedHash == DDL::DDL_HashString(str, 0);
}

/*
==============
DDL_WriteAsText
==============
*/
__int64 DDL_WriteAsText(const DDLContext *ddlContext, void (*func_AppendToOutput)(char *, int, void *), bool nonZeroOnly, const char *separator, void *userData)
{
  const DDLDef *def; 
  unsigned int v11; 
  int v12; 
  DDLStruct *structList; 
  __int64 v15; 
  const char *name; 
  DDLState toState; 
  DDLState fromState; 

  def = ddlContext->def;
  s_path[0] = 0;
  toState.member = NULL;
  toState.offset = 0;
  toState.arrayIndex = -1;
  v11 = 0;
  toState.ddlDef = def;
  v12 = 0;
  toState.isValid = 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0C8h+toState.isValid]
    vmovups ymmword ptr [rsp+0C8h+fromState.isValid], ymm0
  }
  structList = def->structList;
  s_pathLength = 0;
  if ( structList->memberCount > 0 )
  {
    v15 = 0i64;
    do
    {
      toState.isValid = 0;
      toState.offset = 0;
      toState.arrayIndex = -1;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+0C8h+toState.member], xmm0
      }
      name = structList->members[v15].name;
      if ( *name != 95 )
      {
        DDL::DDL_Lookup_MoveToName(&fromState, &toState, name, 0);
        v11 += DDL_WriteMemberAsText(&toState, ddlContext, func_AppendToOutput, nonZeroOnly, separator, userData);
        structList = def->structList;
      }
      ++v12;
      ++v15;
    }
    while ( v12 < structList->memberCount );
  }
  return v11;
}

/*
==============
DDL_WriteMemberAsText
==============
*/
__int64 DDL_WriteMemberAsText(const DDLState *ddlState, const DDLContext *ddlContext, void (*func_AppendToOutput)(char *, int, void *), bool nonZeroOnly, const char *separator, void *userData)
{
  int v8; 
  bool IsEnumArrayRoot; 
  DDLMember *member; 
  bool IsEnumArrayMember; 
  DDLMember *v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  DDLMember *v20; 
  __int64 v21; 
  DDLStruct *structList; 
  __int64 v23; 
  const char *name; 
  char v25; 
  int UInt; 
  const char *v28; 
  unsigned __int64 UInt64; 
  char *v30; 
  const char *String; 
  const char *Enum; 
  const char *v35; 
  unsigned int v36; 
  int v37; 
  void *userDataa; 
  char v39; 
  bool IsArrayRoot; 
  bool v41; 
  int v42; 
  const DDLDef *ddlDef; 
  __int64 v45; 
  DDLState toState; 
  char dest[64]; 
  char v48[4096]; 

  v8 = 0;
  v42 = 0;
  IsArrayRoot = DDL::DDL_Lookup_IsArrayRoot(ddlState);
  IsEnumArrayRoot = DDL::DDL_Lookup_IsEnumArrayRoot(ddlState);
  member = ddlState->member;
  v41 = IsEnumArrayRoot;
  if ( !member || (v39 = 1, member->type != 9) )
    v39 = 0;
  ddlDef = ddlState->ddlDef;
  if ( DDL::DDL_Lookup_IsArrayMember(ddlState) )
  {
    DDL::DDL_sprintf(dest, 0x40ui64, (const char *)&FindLinksPass::_vftable_[2] + 4, (unsigned int)ddlState->arrayIndex);
  }
  else
  {
    IsEnumArrayMember = DDL::DDL_Lookup_IsEnumArrayMember(ddlState);
    v15 = ddlState->member;
    if ( IsEnumArrayMember )
      DDL::DDL_sprintf(dest, 0x40ui64, "[%s]", ddlState->ddlDef->enumList[v15->enumIndex].members[ddlState->arrayIndex]);
    else
      DDL::DDL_sprintf(dest, 0x40ui64, (const char *)&queryFormat, v15->name);
  }
  v16 = -1i64;
  v17 = -1i64;
  do
    ++v17;
  while ( dest[v17] );
  v18 = s_pathLength;
  if ( (unsigned int)(s_pathLength + v17 + 1) < 0x400 )
  {
    if ( s_pathLength > 0 && dest[0] != 91 )
    {
      s_path[s_pathLength] = 46;
      v19 = (unsigned int)(v18 + 1);
      s_pathLength = v19;
      if ( (unsigned __int64)(int)v19 >= 0x400 )
        goto LABEL_74;
      s_path[(int)v19] = 0;
    }
    DDL::DDL_strcat(s_path, 0x400ui64, dest);
    s_pathLength += v17;
    v19 = (unsigned int)s_pathLength;
    if ( (unsigned __int64)s_pathLength < 0x400 )
    {
      s_path[s_pathLength] = 0;
      if ( IsArrayRoot || v41 )
      {
        v37 = 0;
        if ( ddlState->member->arraySize > 0 )
        {
          do
          {
            __asm { vpxor   xmm0, xmm0, xmm0 }
            toState.isValid = 0;
            toState.offset = 0;
            toState.arrayIndex = -1;
            __asm { vmovdqu xmmword ptr [rsp+1110h+toState.member], xmm0 }
            DDL::DDL_Lookup_MoveToIndex(ddlState, &toState, v37, 0);
            v8 += DDL_WriteMemberAsText(&toState, ddlContext, func_AppendToOutput, nonZeroOnly, separator, userData);
            ++v37;
          }
          while ( v37 < ddlState->member->arraySize );
          v19 = (unsigned int)s_pathLength;
        }
      }
      else
      {
        v20 = ddlState->member;
        if ( !v39 )
        {
          switch ( v20->type )
          {
            case 0:
              LOBYTE(UInt) = DDL_GetByte(ddlState, ddlContext);
              if ( nonZeroOnly && !(_BYTE)UInt )
                goto LABEL_46;
              UInt = (unsigned __int8)UInt;
LABEL_38:
              v28 = "%s%s %d\n";
              goto LABEL_39;
            case 1:
              LOWORD(UInt) = DDL_GetShort(ddlState, ddlContext);
              if ( nonZeroOnly && !(_WORD)UInt )
                goto LABEL_46;
              UInt = (unsigned __int16)UInt;
LABEL_43:
              v28 = "%s%s %u\n";
LABEL_39:
              DDL::DDL_sprintf(v48, 0x1000ui64, v28, s_path, separator, UInt);
              goto LABEL_69;
            case 2:
              UInt = DDL_GetUInt(ddlState, ddlContext);
              if ( nonZeroOnly && !UInt )
                goto LABEL_46;
              goto LABEL_43;
            case 3:
              UInt = DDL_GetInt(ddlState, ddlContext);
              if ( !nonZeroOnly || UInt )
                goto LABEL_38;
              goto LABEL_46;
            case 4:
              UInt64 = DDL_GetUInt64(ddlState, ddlContext);
              goto LABEL_52;
            case 5:
              UInt64 = DDL_GetHash(ddlState, ddlContext);
LABEL_52:
              if ( nonZeroOnly && !UInt64 )
                goto LABEL_46;
              v30 = DDL::DDL_va("%s%s %llu\n", s_path, separator, UInt64);
              DDL::DDL_sprintf(v48, 0x1000ui64, (const char *)&queryFormat, v30);
              goto LABEL_69;
            case 6:
              *(double *)&_XMM0 = DDL_GetFloat(ddlState, ddlContext);
              goto LABEL_57;
            case 7:
              *(double *)&_XMM0 = DDL_GetFixedPoint(ddlState, ddlContext);
LABEL_57:
              if ( nonZeroOnly )
              {
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vucomiss xmm0, xmm1
                }
              }
              __asm
              {
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+1110h+userData], xmm0
              }
              DDL::DDL_sprintf(v48, 0x1000ui64, "%s%s %f\n", s_path, separator, userDataa);
              goto LABEL_69;
            case 8:
              String = DDL_GetString(ddlState, ddlContext);
              if ( nonZeroOnly && !*String )
                goto LABEL_46;
              DDL::DDL_sprintf(v48, 0x1000ui64, "%s%s %s\n", s_path, separator, String);
              goto LABEL_69;
            case 0xA:
              Enum = DDL_GetEnum(ddlState, ddlContext);
              v35 = Enum;
              if ( !Enum )
                goto LABEL_46;
              if ( !*Enum )
                goto LABEL_46;
              v36 = DDL_GetUInt(ddlState, ddlContext);
              if ( nonZeroOnly && !v36 )
                goto LABEL_46;
              DDL::DDL_sprintf(v48, 0x1000ui64, "%s%s %s\n", s_path, separator, v35);
              do
LABEL_69:
                ++v16;
              while ( v48[v16] );
              v8 = v16;
              func_AppendToOutput(v48, v16, userData);
              v19 = (unsigned int)s_pathLength;
              goto LABEL_27;
            default:
LABEL_46:
              DDL_PopPath();
              return 0i64;
          }
        }
        v21 = 56i64 * v20->externalIndex;
        structList = ddlDef->structList;
        v45 = v21;
        if ( *(int *)((char *)&structList->memberCount + v21) > 0 )
        {
          v23 = 0i64;
          do
          {
            toState.isValid = 0;
            toState.offset = 0;
            toState.arrayIndex = -1;
            __asm
            {
              vpxor   xmm0, xmm0, xmm0
              vmovdqu xmmword ptr [rsp+1110h+toState.member], xmm0
            }
            name = (*(DDLMember **)((char *)&structList->members + v21))[v23].name;
            if ( *name != 95 )
            {
              DDL::DDL_Lookup_MoveToName(ddlState, &toState, name, 0);
              v42 += DDL_WriteMemberAsText(&toState, ddlContext, func_AppendToOutput, nonZeroOnly, separator, userData);
              structList = ddlDef->structList;
            }
            v21 = v45;
            ++v8;
            ++v23;
          }
          while ( v8 < *(int *)((char *)&structList->memberCount + v45) );
          v19 = (unsigned int)s_pathLength;
        }
        v8 = v42;
      }
LABEL_27:
      if ( (int)v19 > 0 )
      {
        do
        {
          v25 = s_path[(int)v19];
          if ( v25 == 46 )
            break;
          if ( v25 == 91 )
            break;
          v19 = (unsigned int)(v19 - 1);
        }
        while ( (int)v19 > 0 );
        s_pathLength = v19;
      }
      if ( (unsigned __int64)(int)v19 < 0x400 )
      {
        s_path[(int)v19] = 0;
        return (unsigned int)v8;
      }
    }
LABEL_74:
    j___report_rangecheckfailure(v19);
    __debugbreak();
  }
  return 0i64;
}

/*
==============
DDL_Zero
==============
*/
char DDL_Zero(const DDLState *state, DDLContext *ddlContext)
{
  int BitSize; 
  int offset; 
  int v6; 
  int i; 

  BitSize = DDL_StateGetBitSize(state);
  offset = state->offset;
  v6 = BitSize / 32;
  for ( i = BitSize % 32; v6; --v6 )
  {
    DDL::DDL_Buffer_WriteBits(ddlContext, offset, 0, 32, 0);
    offset += 32;
  }
  if ( i )
    DDL::DDL_Buffer_WriteBits(ddlContext, offset, 0, i, 0);
  return 1;
}

/*
==============
IsBufferValid
==============
*/
bool IsBufferValid(const DDLState *state, const DDLContext *ddlContext)
{
  const DDLDef *def; 
  DDLMember *member; 
  bool result; 

  result = 0;
  if ( ddlContext )
  {
    def = ddlContext->def;
    if ( def )
    {
      if ( def->name )
      {
        if ( ddlContext->buff )
        {
          if ( state )
          {
            member = state->member;
            if ( member )
            {
              if ( state->isValid && state->ddlDef == def && member->type != 9 && !DDL::DDL_Lookup_IsArrayRoot(state) && !DDL::DDL_Lookup_IsEnumArrayRoot(state) && state->offset < state->ddlDef->bitSize && state->member->type != 11 )
                return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

