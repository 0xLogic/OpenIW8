/*
==============
ScriptableCommon_ArchivePartWorldstate
==============
*/

void __fastcall ScriptableCommon_ArchivePartWorldstate(MemoryFile *memFile, const ScriptableReplicatedLimits *inReplicatedLimits, ScriptablePartWorldState *outPartWorldState)
{
  ?ScriptableCommon_ArchivePartWorldstate@@YAXPEAUMemoryFile@@AEBUScriptableReplicatedLimits@@AEAUScriptablePartWorldState@@@Z(memFile, inReplicatedLimits, outPartWorldState);
}

/*
==============
ScriptableCommon_PrintReplicatedInstance
==============
*/

void __fastcall ScriptableCommon_PrintReplicatedInstance(const ScriptableReplicatedInstance *instance)
{
  ?ScriptableCommon_PrintReplicatedInstance@@YAXAEBUScriptableReplicatedInstance@@@Z(instance);
}

/*
==============
ScriptableCommon_GetScriptableParts
==============
*/

const ScriptablePartData *__fastcall ScriptableCommon_GetScriptableParts(const ScriptablePartWorldState *r_partWorldState, const ScriptableReplicatedLimits *replicatedLimits)
{
  return ?ScriptableCommon_GetScriptableParts@@YAPEBUScriptablePartData@@AEBUScriptablePartWorldState@@AEBUScriptableReplicatedLimits@@@Z(r_partWorldState, replicatedLimits);
}

/*
==============
ScriptableCommon_ClearPartWorldState
==============
*/

void __fastcall ScriptableCommon_ClearPartWorldState(const ScriptableReplicatedLimits *limits, ScriptablePartWorldState *outPartWorldState)
{
  ?ScriptableCommon_ClearPartWorldState@@YAXAEBUScriptableReplicatedLimits@@AEAUScriptablePartWorldState@@@Z(limits, outPartWorldState);
}

/*
==============
ScriptableCommon_GetPartFirstUsableState
==============
*/

bool __fastcall ScriptableCommon_GetPartFirstUsableState(const ScriptablePartDef *partDef, const ScriptableStateUsableDef **outUsableDef)
{
  return ?ScriptableCommon_GetPartFirstUsableState@@YA_NAEBUScriptablePartDef@@AEAPEBUScriptableStateUsableDef@@@Z(partDef, outUsableDef);
}

/*
==============
ScriptableCommon_VerifyInstances
==============
*/

void __fastcall ScriptableCommon_VerifyInstances(const ScriptableReplicatedInstance *instances, const unsigned int instanceCount)
{
  ?ScriptableCommon_VerifyInstances@@YAXPEBUScriptableReplicatedInstance@@I@Z(instances, instanceCount);
}

/*
==============
ScriptableCommon_ClearReplicatedInstance
==============
*/

void __fastcall ScriptableCommon_ClearReplicatedInstance(ScriptableReplicatedInstance *instance)
{
  ?ScriptableCommon_ClearReplicatedInstance@@YAXAEAUScriptableReplicatedInstance@@@Z(instance);
}

/*
==============
ScriptableCommon_GetScriptableDefFromDObj
==============
*/

bool __fastcall ScriptableCommon_GetScriptableDefFromDObj(const DObj *dobj, const ScriptableDef **outScriptableDef)
{
  return ?ScriptableCommon_GetScriptableDefFromDObj@@YA_NPEBUDObj@@PEAPEBUScriptableDef@@@Z(dobj, outScriptableDef);
}

/*
==============
ScriptableCommon_ShutdownWorldCounts
==============
*/

void __fastcall ScriptableCommon_ShutdownWorldCounts(const ScriptableContext context, ScriptableReplicatedLimits *outReplicatedLimits)
{
  ?ScriptableCommon_ShutdownWorldCounts@@YAXW4ScriptableContext@@AEAUScriptableReplicatedLimits@@@Z(context, outReplicatedLimits);
}

/*
==============
ScriptableCommon_CopyScriptableParts
==============
*/

void __fastcall ScriptableCommon_CopyScriptableParts(const ScriptablePartWorldState *r_partWorldState, ScriptablePartData *scriptableParts, const ScriptableReplicatedLimits *replicatedLimits)
{
  ?ScriptableCommon_CopyScriptableParts@@YAXAEBUScriptablePartWorldState@@PEAUScriptablePartData@@AEBUScriptableReplicatedLimits@@@Z(r_partWorldState, scriptableParts, replicatedLimits);
}

/*
==============
ScriptableCommon_GetPartHasUsableState
==============
*/

bool __fastcall ScriptableCommon_GetPartHasUsableState(const ScriptablePartDef *partDef)
{
  return ?ScriptableCommon_GetPartHasUsableState@@YA_NAEBUScriptablePartDef@@@Z(partDef);
}

/*
==============
ScriptableCommon_GetPartDefForServerFlatId
==============
*/

const ScriptablePartDef *__fastcall ScriptableCommon_GetPartDefForServerFlatId(const ScriptableDef *scriptableDef, const unsigned int serverFlatPartId)
{
  return ?ScriptableCommon_GetPartDefForServerFlatId@@YAAEBUScriptablePartDef@@PEBUScriptableDef@@I@Z(scriptableDef, serverFlatPartId);
}

/*
==============
ScriptableCommon_ComputeNetChecksum
==============
*/

unsigned int __fastcall ScriptableCommon_ComputeNetChecksum(const ScriptableWorldMap *worldMap, const ScriptableReplicatedLimits *replicatedLimits)
{
  return ?ScriptableCommon_ComputeNetChecksum@@YAIAEBUScriptableWorldMap@@AEBUScriptableReplicatedLimits@@@Z(worldMap, replicatedLimits);
}

/*
==============
ScriptableCommon_ClearReplicatedInstances
==============
*/

void __fastcall ScriptableCommon_ClearReplicatedInstances(ScriptableReplicatedInstance *instances, const unsigned int instanceCount)
{
  ?ScriptableCommon_ClearReplicatedInstances@@YAXPEAUScriptableReplicatedInstance@@I@Z(instances, instanceCount);
}

/*
==============
ScriptableCommon_ArchiveReplicatedInstances
==============
*/

void __fastcall ScriptableCommon_ArchiveReplicatedInstances(MemoryFile *memFile, const ScriptableReplicatedLimits *inReplicatedLimits, ScriptableReplicatedInstance *replicatedInstances)
{
  ?ScriptableCommon_ArchiveReplicatedInstances@@YAXPEAUMemoryFile@@AEBUScriptableReplicatedLimits@@PEAUScriptableReplicatedInstance@@@Z(memFile, inReplicatedLimits, replicatedInstances);
}

/*
==============
ScriptableCommon_ArchiveReplicatedLimits
==============
*/

void __fastcall ScriptableCommon_ArchiveReplicatedLimits(MemoryFile *memFile, const ScriptableReplicatedLimits *inReplicatedLimits)
{
  ?ScriptableCommon_ArchiveReplicatedLimits@@YAXPEAUMemoryFile@@AEBUScriptableReplicatedLimits@@@Z(memFile, inReplicatedLimits);
}

/*
==============
ScriptableCommon_InitWorldCounts
==============
*/

void __fastcall ScriptableCommon_InitWorldCounts(const ScriptableContext context, const unsigned int clientCount, const unsigned int agentCount, ScriptableReplicatedLimits *outReplicatedLimits)
{
  ?ScriptableCommon_InitWorldCounts@@YAXW4ScriptableContext@@IIAEAUScriptableReplicatedLimits@@@Z(context, clientCount, agentCount, outReplicatedLimits);
}

/*
==============
ScriptableCommon_ArchiveWorldMap
==============
*/

void __fastcall ScriptableCommon_ArchiveWorldMap(MemoryFile *memFile, ScriptableWorldMap *outWorldMap)
{
  ?ScriptableCommon_ArchiveWorldMap@@YAXPEAUMemoryFile@@AEAUScriptableWorldMap@@@Z(memFile, outWorldMap);
}

/*
==============
ScriptableCommon_SetupPartWorldState
==============
*/

void __fastcall ScriptableCommon_SetupPartWorldState(const ScriptableReplicatedLimits *limits, ScriptablePartData *partData, const unsigned int partDataSize, ScriptablePartWorldState *outPartWorldState)
{
  ?ScriptableCommon_SetupPartWorldState@@YAXAEBUScriptableReplicatedLimits@@PEAUScriptablePartData@@IAEAUScriptablePartWorldState@@@Z(limits, partData, partDataSize, outPartWorldState);
}

/*
==============
ScriptableCommon_UpdatePartsChangeBits
==============
*/

void __fastcall ScriptableCommon_UpdatePartsChangeBits(ScriptableChangePartBits *changedPartBits, const unsigned int changedPartBitsArraySize, const ScriptablePartData *fromParts, const ScriptablePartData *toParts, const unsigned int partCount)
{
  ?ScriptableCommon_UpdatePartsChangeBits@@YAXAEAUScriptableChangePartBits@@IPEIBUScriptablePartData@@1I@Z(changedPartBits, changedPartBitsArraySize, fromParts, toParts, partCount);
}

/*
==============
ScriptableCommon_ArchivePartWorldstate
==============
*/
void ScriptableCommon_ArchivePartWorldstate(MemoryFile *memFile, const ScriptableReplicatedLimits *inReplicatedLimits, ScriptablePartWorldState *outPartWorldState)
{
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  char *fmt; 
  unsigned int p; 

  v6 = 2i64;
  if ( MemFile_IsWriting(memFile) )
  {
    do
    {
      if ( !outPartWorldState->groups[0].partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 615, ASSERT_TYPE_ASSERT, "(r_partGroupState.partData)", (const char *)&queryFormat, "r_partGroupState.partData") )
        __debugbreak();
      p = inReplicatedLimits->partWorldLimits[0];
      v7 = p;
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, v7, outPartWorldState->groups[0].partData);
      outPartWorldState = (ScriptablePartWorldState *)((char *)outPartWorldState + 8);
      inReplicatedLimits = (const ScriptableReplicatedLimits *)((char *)inReplicatedLimits + 4);
      --v6;
    }
    while ( v6 );
  }
  else
  {
    do
    {
      if ( !outPartWorldState->groups[0].partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 631, ASSERT_TYPE_ASSERT, "(r_partGroupState.partData)", (const char *)&queryFormat, "r_partGroupState.partData") )
        __debugbreak();
      v8 = inReplicatedLimits->partWorldLimits[0];
      MemFile_ReadData(memFile, 4ui64, &p);
      v9 = p;
      if ( v8 < p )
      {
        LODWORD(fmt) = p;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14403FD30, 440i64, v8, fmt);
      }
      MemFile_ReadData(memFile, v9, outPartWorldState->groups[0].partData);
      outPartWorldState = (ScriptablePartWorldState *)((char *)outPartWorldState + 8);
      inReplicatedLimits = (const ScriptableReplicatedLimits *)((char *)inReplicatedLimits + 4);
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
ScriptableCommon_ArchiveReplicatedInstances
==============
*/
void ScriptableCommon_ArchiveReplicatedInstances(MemoryFile *memFile, const ScriptableReplicatedLimits *inReplicatedLimits, ScriptableReplicatedInstance *replicatedInstances)
{
  unsigned int i; 
  ScriptableReplicatedInstance *v7; 
  unsigned int *p_p; 
  unsigned __int64 v9; 
  unsigned int *v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  unsigned int instanceLimit; 
  ScriptableReplicatedInstance *v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned __int8 *p_partCount; 
  int v18; 
  __int16 v19; 
  __int16 v20; 
  char *fmt; 
  __int64 v22; 
  __int64 v23; 
  char v24[4]; 
  __int16 v25; 
  __int16 v26[2]; 
  __int16 v27; 
  int v28; 
  int v29[3]; 
  unsigned int p; 
  unsigned __int8 v31; 
  unsigned __int8 v32; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 454, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !replicatedInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 455, ASSERT_TYPE_ASSERT, "( replicatedInstances )", (const char *)&queryFormat, "replicatedInstances") )
    __debugbreak();
  if ( MemFile_IsWriting(memFile) )
  {
    Sys_ProfBeginNamedEvent(0xFF0000FF, "ScriptableCommon_ArchiveReplicatedInstances (Save)");
    p = inReplicatedLimits->instanceLimit;
    MemFile_WriteData(memFile, 4ui64, &p);
    for ( i = 0; i < inReplicatedLimits->instanceLimit; ++i )
    {
      v7 = &replicatedInstances[i];
      p = v7->instanceIndex;
      MemFile_WriteData(memFile, 4ui64, &p);
      if ( v7->instanceIndex != -1 )
      {
        if ( v7->instanceIndex != i )
        {
          LODWORD(v23) = i;
          LODWORD(v22) = v7->instanceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 475, ASSERT_TYPE_ASSERT, "( instance.instanceIndex ) == ( index )", "%s == %s\n\t%i, %i", "instance.instanceIndex", "index", v22, v23) )
            __debugbreak();
        }
        p = v7->partIndex;
        MemFile_WriteData(memFile, 4ui64, &p);
        LOBYTE(p) = v7->partCount;
        MemFile_WriteData(memFile, 1ui64, &p);
        LOBYTE(p) = v7->replicatedType[0];
        MemFile_WriteData(memFile, 1ui64, &p);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
        {
          LOWORD(p) = v7->defIndex;
          p_p = &p;
          v9 = 2i64;
        }
        else
        {
          v31 = truncate_cast<unsigned char,unsigned short>(v7->defIndex);
          p_p = (unsigned int *)&v31;
          v9 = 1i64;
        }
        MemFile_WriteData(memFile, v9, p_p);
        LOWORD(p) = v7->payload;
        MemFile_WriteData(memFile, 2ui64, &p);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
        {
          LOWORD(p) = v7->extraPayload;
          v10 = &p;
          v11 = 2i64;
        }
        else
        {
          v32 = truncate_cast<unsigned char,unsigned short>(v7->extraPayload);
          v10 = (unsigned int *)&v32;
          v11 = 1i64;
        }
        MemFile_WriteData(memFile, v11, v10);
        MemFile_WriteData(memFile, 2ui64, &v7->parent);
        MemFile_WriteData(memFile, 6ui64, &v7->angles);
        MemFile_WriteData(memFile, 8ui64, &v7->origin);
      }
    }
    Sys_ProfEndNamedEvent();
  }
  else
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    v12 = p;
    instanceLimit = inReplicatedLimits->instanceLimit;
    if ( instanceLimit < p )
    {
      LODWORD(fmt) = inReplicatedLimits->instanceLimit;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14403FC50, 439i64, p, fmt);
      instanceLimit = inReplicatedLimits->instanceLimit;
    }
    if ( !replicatedInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 85, ASSERT_TYPE_ASSERT, "(instances)", (const char *)&queryFormat, "instances") )
      __debugbreak();
    if ( instanceLimit )
    {
      v14 = replicatedInstances;
      v15 = instanceLimit;
      do
      {
        *(_QWORD *)&v14->instanceIndex = -1i64;
        *(_QWORD *)&v14->partCount = -1i64;
        *(_QWORD *)&v14->angles.m_pitch = -1i64;
        v14->origin.m_data = -1i64;
        v14->instanceIndex = -1;
        ++v14;
        --v15;
      }
      while ( v15 );
    }
    v16 = 0;
    if ( v12 )
    {
      p_partCount = &replicatedInstances->partCount;
      do
      {
        MemFile_ReadData(memFile, 4ui64, &v28);
        v18 = v28;
        *((_DWORD *)p_partCount - 2) = v28;
        if ( v18 != -1 )
        {
          if ( v18 != v16 )
          {
            LODWORD(v23) = v16;
            LODWORD(v22) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 548, ASSERT_TYPE_ASSERT, "( instance.instanceIndex ) == ( index )", "%s == %s\n\t%i, %i", "instance.instanceIndex", "index", v22, v23) )
              __debugbreak();
          }
          MemFile_ReadData(memFile, 4ui64, v29);
          *((_DWORD *)p_partCount - 1) = v29[0];
          MemFile_ReadData(memFile, 1ui64, &p);
          *p_partCount = p;
          MemFile_ReadData(memFile, 1ui64, &v31);
          p_partCount[1] = v31;
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
          {
            MemFile_ReadData(memFile, 2ui64, &v25);
            v19 = v25;
          }
          else
          {
            MemFile_ReadData(memFile, 1ui64, &v32);
            v19 = v32;
          }
          *((_WORD *)p_partCount + 1) = v19;
          MemFile_ReadData(memFile, 2ui64, v26);
          *((_WORD *)p_partCount + 3) = v26[0];
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
          {
            MemFile_ReadData(memFile, 2ui64, &v27);
            v20 = v27;
          }
          else
          {
            MemFile_ReadData(memFile, 1ui64, v24);
            v20 = (unsigned __int8)v24[0];
          }
          *((_WORD *)p_partCount + 2) = v20;
          MemFile_ReadData(memFile, 2ui64, p_partCount + 14);
          MemFile_ReadData(memFile, 6ui64, p_partCount + 8);
          MemFile_ReadData(memFile, 8ui64, p_partCount + 16);
        }
        ++v16;
        p_partCount += 32;
      }
      while ( v16 < v12 );
    }
  }
}

/*
==============
ScriptableCommon_ArchiveReplicatedLimits
==============
*/
void ScriptableCommon_ArchiveReplicatedLimits(MemoryFile *memFile, const ScriptableReplicatedLimits *inReplicatedLimits)
{
  unsigned int v4; 
  signed __int64 v5; 
  char *v6; 
  __int64 v7; 
  __int64 v8; 
  char p[8]; 
  unsigned int v10; 
  unsigned int v11; 

  if ( MemFile_IsWriting(memFile) )
  {
    MemFile_WriteData(memFile, 0x10ui64, inReplicatedLimits);
  }
  else
  {
    MemFile_ReadData(memFile, 0x10ui64, p);
    if ( inReplicatedLimits->instanceLimit < v11 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14403F9C0, 436i64);
    if ( inReplicatedLimits->partTotalLimit < v10 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14403FA60, 437i64);
    v4 = 0;
    v5 = (char *)inReplicatedLimits - p;
    v6 = p;
    do
    {
      if ( *(_DWORD *)&v6[v5] < *(_DWORD *)v6 )
      {
        LODWORD(v8) = *(_DWORD *)&v6[v5];
        LODWORD(v7) = *(_DWORD *)v6;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14403FAF0, 438i64, v4, v7, v8);
      }
      ++v4;
      v6 += 4;
    }
    while ( v4 < 2 );
  }
}

/*
==============
ScriptableCommon_ArchiveWorldMap
==============
*/
void ScriptableCommon_ArchiveWorldMap(MemoryFile *memFile, ScriptableWorldMap *outWorldMap)
{
  bool IsWriting; 
  unsigned int *indices; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  unsigned int *v10; 
  unsigned int p; 

  IsWriting = MemFile_IsWriting(memFile);
  indices = outWorldMap->indices;
  if ( IsWriting )
  {
    if ( !indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 657, ASSERT_TYPE_ASSERT, "(outWorldMap.indices)", (const char *)&queryFormat, "outWorldMap.indices") )
      __debugbreak();
    v6 = 4 * outWorldMap->indicesCount;
    p = outWorldMap->partCount;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = outWorldMap->indicesCount;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v6;
    MemFile_WriteData(memFile, 4ui64, &p);
    MemFile_WriteData(memFile, v6, outWorldMap->indices);
  }
  else
  {
    if ( !indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 667, ASSERT_TYPE_ASSERT, "(outWorldMap.indices)", (const char *)&queryFormat, "outWorldMap.indices") )
      __debugbreak();
    MemFile_ReadData(memFile, 4ui64, &p);
    v7 = p;
    MemFile_ReadData(memFile, 4ui64, &p);
    v8 = p;
    MemFile_ReadData(memFile, 4ui64, &p);
    v9 = p;
    if ( p > 4 * v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 678, ASSERT_TYPE_ASSERT, "( indicesDataSize ) <= ( indicesCapacity )", "%s <= %s\n\t%i, %i", "indicesDataSize", "indicesCapacity", p, 4 * v8) )
      __debugbreak();
    v10 = outWorldMap->indices;
    outWorldMap->partCount = v7;
    outWorldMap->indicesCount = v8;
    MemFile_ReadData(memFile, v9, v10);
  }
}

/*
==============
ScriptableCommon_ClearPartWorldState
==============
*/
void ScriptableCommon_ClearPartWorldState(const ScriptableReplicatedLimits *limits, ScriptablePartWorldState *outPartWorldState)
{
  __int64 v4; 

  v4 = 2i64;
  do
  {
    if ( !outPartWorldState->groups[0].partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 145, ASSERT_TYPE_ASSERT, "(r_partGroupState.partData != nullptr)", (const char *)&queryFormat, "r_partGroupState.partData != nullptr") )
      __debugbreak();
    memset_0(outPartWorldState->groups[0].partData, 0, limits->partWorldLimits[0]);
    outPartWorldState = (ScriptablePartWorldState *)((char *)outPartWorldState + 8);
    limits = (const ScriptableReplicatedLimits *)((char *)limits + 4);
    --v4;
  }
  while ( v4 );
}

/*
==============
ScriptableCommon_ClearReplicatedInstance
==============
*/
void ScriptableCommon_ClearReplicatedInstance(ScriptableReplicatedInstance *instance)
{
  *(_QWORD *)&instance->instanceIndex = -1i64;
  *(_QWORD *)&instance->partCount = -1i64;
  *(_QWORD *)&instance->angles.m_pitch = -1i64;
  instance->origin.m_data = -1i64;
  instance->instanceIndex = -1;
}

/*
==============
ScriptableCommon_ClearReplicatedInstances
==============
*/
void ScriptableCommon_ClearReplicatedInstances(ScriptableReplicatedInstance *instances, const unsigned int instanceCount)
{
  __int64 v2; 
  ScriptableReplicatedInstance *v3; 
  __int64 v4; 

  v2 = instanceCount;
  v3 = instances;
  if ( !instances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 85, ASSERT_TYPE_ASSERT, "(instances)", (const char *)&queryFormat, "instances") )
    __debugbreak();
  if ( (_DWORD)v2 )
  {
    v4 = v2;
    do
    {
      *(_QWORD *)&v3->instanceIndex = -1i64;
      *(_QWORD *)&v3->partCount = -1i64;
      *(_QWORD *)&v3->angles.m_pitch = -1i64;
      v3->origin.m_data = -1i64;
      v3->instanceIndex = -1;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
ScriptableCommon_ComputeNetChecksum
==============
*/
__int64 ScriptableCommon_ComputeNetChecksum(const ScriptableWorldMap *worldMap, const ScriptableReplicatedLimits *replicatedLimits)
{
  unsigned int partTotalLimit; 
  unsigned int instanceLimit; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int *indices; 
  __int64 i; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v24; 
  unsigned int indicesCount; 
  unsigned int v26; 

  ScriptableCommon_AssertCountsInitialized();
  partTotalLimit = replicatedLimits->partTotalLimit;
  instanceLimit = replicatedLimits->instanceLimit;
  v6 = ((g_crc32Table[(unsigned __int8)~LOBYTE(g_scriptableWorldCounts.serverInstanceCount)] ^ 0xFFFFFF) >> 8) ^ g_crc32Table[BYTE1(g_scriptableWorldCounts.serverInstanceCount) ^ (unsigned __int64)(unsigned __int8)~LOBYTE(g_crc32Table[(unsigned __int8)~LOBYTE(g_scriptableWorldCounts.serverInstanceCount)])];
  v7 = (v6 >> 8) ^ g_crc32Table[BYTE2(g_scriptableWorldCounts.serverInstanceCount) ^ (unsigned __int64)(unsigned __int8)v6];
  v8 = (v7 >> 8) ^ g_crc32Table[HIBYTE(g_scriptableWorldCounts.serverInstanceCount) ^ (unsigned __int64)(unsigned __int8)v7];
  v9 = (v8 >> 8) ^ g_crc32Table[(unsigned __int8)partTotalLimit ^ (unsigned __int64)(unsigned __int8)v8];
  v10 = (v9 >> 8) ^ g_crc32Table[(unsigned __int8)v9 ^ (unsigned __int64)BYTE1(partTotalLimit)];
  v11 = (((v10 >> 8) ^ g_crc32Table[(unsigned __int8)v10 ^ (unsigned __int64)BYTE2(partTotalLimit)]) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v10) ^ g_crc32Table[(unsigned __int8)v10 ^ (unsigned __int64)BYTE2(partTotalLimit)]) ^ ((unsigned __int64)partTotalLimit >> 24)];
  v12 = (v11 >> 8) ^ g_crc32Table[(unsigned __int8)instanceLimit ^ (unsigned __int64)(unsigned __int8)v11];
  v13 = (v12 >> 8) ^ g_crc32Table[(unsigned __int8)v12 ^ (unsigned __int64)BYTE1(instanceLimit)];
  v14 = (v13 >> 8) ^ g_crc32Table[(unsigned __int8)v13 ^ (unsigned __int64)BYTE2(instanceLimit)];
  v15 = (((v14 >> 8) ^ g_crc32Table[(unsigned __int8)v14 ^ ((unsigned __int64)instanceLimit >> 24)]) >> 8) ^ g_crc32Table[LOBYTE(worldMap->indicesCount) ^ (unsigned __int64)(unsigned __int8)(BYTE1(v14) ^ LOBYTE(g_crc32Table[(unsigned __int8)v14 ^ ((unsigned __int64)instanceLimit >> 24)]))];
  v16 = (v15 >> 8) ^ g_crc32Table[BYTE1(worldMap->indicesCount) ^ (unsigned __int64)(unsigned __int8)v15];
  v17 = (v16 >> 8) ^ g_crc32Table[BYTE2(worldMap->indicesCount) ^ (unsigned __int64)(unsigned __int8)v16];
  v18 = (v17 >> 8) ^ g_crc32Table[HIBYTE(worldMap->indicesCount) ^ (unsigned __int64)(unsigned __int8)v17];
  indices = worldMap->indices;
  for ( i = 4i64 * worldMap->indicesCount; i; --i )
  {
    v21 = *(unsigned __int8 *)indices;
    indices = (unsigned int *)((char *)indices + 1);
    v18 = (v18 >> 8) ^ g_crc32Table[v21 ^ (unsigned __int8)v18];
  }
  v22 = ~v18;
  v26 = v22;
  indicesCount = worldMap->indicesCount;
  v24 = instanceLimit;
  Com_Printf(29, "Scriptable Checksum: %d, %d, %d, %d, result %x\n", g_scriptableWorldCounts.serverInstanceCount, partTotalLimit, v24, indicesCount, v26);
  return v22;
}

/*
==============
ScriptableCommon_CopyScriptableParts
==============
*/
void ScriptableCommon_CopyScriptableParts(const ScriptablePartWorldState *r_partWorldState, ScriptablePartData *scriptableParts, const ScriptableReplicatedLimits *replicatedLimits)
{
  ScriptablePartData *partData; 
  unsigned int v6; 
  const ScriptableReplicatedLimits *v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !scriptableParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 177, ASSERT_TYPE_ASSERT, "(scriptableParts != nullptr)", (const char *)&queryFormat, "scriptableParts != nullptr") )
    __debugbreak();
  partData = r_partWorldState->groups[0].partData;
  if ( !r_partWorldState->groups[0].partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 154, ASSERT_TYPE_ASSERT, "(basePartData != nullptr)", (const char *)&queryFormat, "basePartData != nullptr") )
    __debugbreak();
  v6 = 0;
  v7 = replicatedLimits;
  v8 = 2i64;
  do
  {
    v9 = v7->partWorldLimits[0];
    if ( &partData[v6] != r_partWorldState->groups[0].partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 164, ASSERT_TYPE_ASSERT, "( basePartData + scriptablePartsNextOffset ) == ( r_partGroupState.partData )", "%s == %s\n\t%p, %p", "basePartData + scriptablePartsNextOffset", "r_partGroupState.partData", &partData[v6], r_partWorldState->groups[0].partData) )
      __debugbreak();
    v6 += v9;
    v7 = (const ScriptableReplicatedLimits *)((char *)v7 + 4);
    r_partWorldState = (const ScriptablePartWorldState *)((char *)r_partWorldState + 8);
    --v8;
  }
  while ( v8 );
  if ( v6 > replicatedLimits->partTotalLimit )
  {
    LODWORD(v11) = replicatedLimits->partTotalLimit;
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 168, ASSERT_TYPE_ASSERT, "( scriptablePartsNextOffset ) <= ( replicatedLimits.partTotalLimit )", "%s <= %s\n\t%i, %i", "scriptablePartsNextOffset", "replicatedLimits.partTotalLimit", v10, v11) )
      __debugbreak();
  }
  memcpy_0(scriptableParts, partData, replicatedLimits->partTotalLimit);
}

/*
==============
ScriptableCommon_FindPartDefForServerFlatId_r
==============
*/
char ScriptableCommon_FindPartDefForServerFlatId_r(const ScriptablePartDef *partDef, const unsigned int serverFlatPartId, const ScriptablePartDef **outPartDef)
{
  int v6; 
  ScriptablePartDef *v7; 
  unsigned int serverInstanceFlatId; 

  if ( partDef->serverInstanceFlatId == serverFlatPartId )
  {
    serverInstanceFlatId = partDef->serverInstanceFlatId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 272, ASSERT_TYPE_ASSERT, "( partDef.serverInstanceFlatId ) != ( serverFlatPartId )", "%s != %s\n\t%i, %i", "partDef.serverInstanceFlatId", "serverFlatPartId", serverInstanceFlatId, serverFlatPartId) )
      __debugbreak();
  }
  v6 = 0;
  if ( !partDef->numChildParts )
    return 0;
  while ( 1 )
  {
    v7 = &partDef->childParts[v6];
    if ( v7->serverInstanceFlatId == serverFlatPartId )
      break;
    if ( ScriptableCommon_FindPartDefForServerFlatId_r(v7, serverFlatPartId, outPartDef) )
      return 1;
    if ( ++v6 >= partDef->numChildParts )
      return 0;
  }
  *outPartDef = v7;
  return 1;
}

/*
==============
ScriptableCommon_GetPartDefForServerFlatId
==============
*/
ScriptablePartDef *ScriptableCommon_GetPartDefForServerFlatId(const ScriptableDef *scriptableDef, const unsigned int serverFlatPartId)
{
  __int64 v2; 
  unsigned int numParts; 
  ScriptablePartDef *result; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  ScriptablePartDef *outPartDef; 

  v2 = serverFlatPartId;
  if ( !scriptableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 295, ASSERT_TYPE_ASSERT, "(scriptableDef)", (const char *)&queryFormat, "scriptableDef") )
    __debugbreak();
  if ( (unsigned int)v2 >= scriptableDef->serverInstancedPartCount )
  {
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 296, ASSERT_TYPE_ASSERT, "(unsigned)( serverFlatPartId ) < (unsigned)( scriptableDef->serverInstancedPartCount )", "serverFlatPartId doesn't index scriptableDef->serverInstancedPartCount\n\t%i not in [0, %i)", v8, scriptableDef->serverInstancedPartCount) )
      __debugbreak();
  }
  numParts = scriptableDef->numParts;
  if ( scriptableDef->partCount == numParts )
  {
    if ( (unsigned int)v2 >= numParts )
    {
      LODWORD(v9) = scriptableDef->numParts;
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 300, ASSERT_TYPE_ASSERT, "(unsigned)( serverFlatPartId ) < (unsigned)( scriptableDef->numParts )", "serverFlatPartId doesn't index scriptableDef->numParts\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( scriptableDef->parts[v2].serverInstanceFlatId != (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 301, ASSERT_TYPE_ASSERT, "( scriptableDef->parts[serverFlatPartId].serverInstanceFlatId ) == ( serverFlatPartId )", "%s == %s\n\t%i, %i", "scriptableDef->parts[serverFlatPartId].serverInstanceFlatId", "serverFlatPartId", scriptableDef->parts[v2].serverInstanceFlatId, v2) )
      __debugbreak();
    return &scriptableDef->parts[v2];
  }
  else
  {
    v6 = 0;
    if ( numParts )
    {
      while ( 1 )
      {
        v7 = v6;
        result = &scriptableDef->parts[v7];
        if ( result->serverInstanceFlatId == (_DWORD)v2 )
          break;
        if ( ScriptableCommon_FindPartDefForServerFlatId_r(&scriptableDef->parts[v7], v2, (const ScriptablePartDef **)&outPartDef) )
        {
          if ( !outPartDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 318, ASSERT_TYPE_ASSERT, "(partDef != nullptr)", (const char *)&queryFormat, "partDef != nullptr") )
            __debugbreak();
          return outPartDef;
        }
        if ( ++v6 >= scriptableDef->numParts )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 323, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Could not find part %i in scriptable %s.", v8, scriptableDef->name) )
        __debugbreak();
      return scriptableDef->parts;
    }
  }
  return result;
}

/*
==============
ScriptableCommon_GetPartFirstUsableState
==============
*/
char ScriptableCommon_GetPartFirstUsableState(const ScriptablePartDef *partDef, const ScriptableStateUsableDef **outUsableDef)
{
  unsigned int numStates; 
  __int64 v3; 
  ScriptableStateDef *states; 

  numStates = partDef->numStates;
  v3 = 0i64;
  if ( numStates )
  {
    states = partDef->states;
    while ( states[v3].type != Scriptable_StateType_Usable )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= numStates )
        goto LABEL_5;
    }
    *outUsableDef = (const ScriptableStateUsableDef *)&states[v3].data;
    return 1;
  }
  else
  {
LABEL_5:
    *outUsableDef = NULL;
    return 0;
  }
}

/*
==============
ScriptableCommon_GetPartHasUsableState
==============
*/
char ScriptableCommon_GetPartHasUsableState(const ScriptablePartDef *partDef)
{
  unsigned int numStates; 
  __int64 v2; 

  numStates = partDef->numStates;
  v2 = 0i64;
  if ( !numStates )
    return 0;
  while ( partDef->states[v2].type != Scriptable_StateType_Usable )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= numStates )
      return 0;
  }
  return 1;
}

/*
==============
ScriptableCommon_GetScriptableDefFromDObj
==============
*/
char ScriptableCommon_GetScriptableDefFromDObj(const DObj *dobj, const ScriptableDef **outScriptableDef)
{
  const XModel *v4; 
  const ScriptableDef *scriptableMoverDef; 

  if ( !dobj )
    return 0;
  if ( !dobj->numModels )
    return 0;
  v4 = *dobj->models;
  if ( !v4 )
    return 0;
  scriptableMoverDef = v4->scriptableMoverDef;
  if ( !scriptableMoverDef )
    return 0;
  if ( DB_IsXAssetTransient(ASSET_TYPE_XMODEL, v4->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 230, ASSERT_TYPE_ASSERT, "( ( !DB_IsXAssetTransient( ASSET_TYPE_XMODEL, dobj->models[0]->name ) ) )", "( dobj->models[0]->name ) = %s", **(const char ***)dobj->models) )
    __debugbreak();
  *outScriptableDef = scriptableMoverDef;
  return 1;
}

/*
==============
ScriptableCommon_GetScriptableParts
==============
*/
ScriptablePartData *ScriptableCommon_GetScriptableParts(const ScriptablePartWorldState *r_partWorldState, const ScriptableReplicatedLimits *replicatedLimits)
{
  ScriptablePartData *partData; 
  const ScriptablePartWorldState *v4; 
  unsigned int v5; 
  const ScriptableReplicatedLimits *v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v10; 
  __int64 v11; 

  partData = r_partWorldState->groups[0].partData;
  v4 = r_partWorldState;
  if ( !r_partWorldState->groups[0].partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 154, ASSERT_TYPE_ASSERT, "(basePartData != nullptr)", (const char *)&queryFormat, "basePartData != nullptr") )
    __debugbreak();
  v5 = 0;
  v6 = replicatedLimits;
  v7 = 2i64;
  do
  {
    v8 = v6->partWorldLimits[0];
    if ( &partData[v5] != v4->groups[0].partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 164, ASSERT_TYPE_ASSERT, "( basePartData + scriptablePartsNextOffset ) == ( r_partGroupState.partData )", "%s == %s\n\t%p, %p", "basePartData + scriptablePartsNextOffset", "r_partGroupState.partData", &partData[v5], v4->groups[0].partData) )
      __debugbreak();
    v5 += v8;
    v6 = (const ScriptableReplicatedLimits *)((char *)v6 + 4);
    v4 = (const ScriptablePartWorldState *)((char *)v4 + 8);
    --v7;
  }
  while ( v7 );
  if ( v5 > replicatedLimits->partTotalLimit )
  {
    LODWORD(v11) = replicatedLimits->partTotalLimit;
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 168, ASSERT_TYPE_ASSERT, "( scriptablePartsNextOffset ) <= ( replicatedLimits.partTotalLimit )", "%s <= %s\n\t%i, %i", "scriptablePartsNextOffset", "replicatedLimits.partTotalLimit", v10, v11) )
      __debugbreak();
  }
  return partData;
}

/*
==============
ScriptableCommon_InitWorldCounts
==============
*/
void ScriptableCommon_InitWorldCounts(const ScriptableContext context, const unsigned int clientCount, const unsigned int agentCount, ScriptableReplicatedLimits *outReplicatedLimits)
{
  int v9; 

  if ( (unsigned int)context >= SBL_CONTEXT_COUNT )
  {
    v9 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 36, ASSERT_TYPE_ASSERT, "(unsigned)( context ) < (unsigned)( SBL_CONTEXT_COUNT )", "context doesn't index SBL_CONTEXT_COUNT\n\t%i not in [0, %i)", context, v9) )
      __debugbreak();
  }
  Com_Printf(29, "ScriptableCommon_InitWorldCounts for context %d (%x)\n", (unsigned int)context, g_scriptableWorldCountsInitialized);
  if ( g_scriptableWorldCountsInitialized )
    Scriptable_Limits_VerifyWorldCounts(clientCount, agentCount, &g_scriptableWorldCounts);
  else
    Scriptable_Limits_SetupWorldCounts(clientCount, agentCount, &g_scriptableWorldCounts);
  Scriptable_Limits_SetupReplicatedLimits(&g_scriptableWorldCounts, outReplicatedLimits);
  g_scriptableWorldCountsInitialized |= 1 << context;
}

/*
==============
ScriptableCommon_PrintReplicatedInstance
==============
*/
void ScriptableCommon_PrintReplicatedInstance(const ScriptableReplicatedInstance *instance)
{
  signed __int64 m_data; 

  m_data = instance->origin.m_data;
  Com_Printf(29, "[SCRIPTABLE] ID%u T%u PID%u DEF%u PL%u EXPL%u PAR%u ORG%i_%i_%i ANG%i_%i_%i\n", instance->instanceIndex, (unsigned __int8)instance->replicatedType[0], instance->partIndex, instance->defIndex, instance->payload, instance->extraPayload, instance->parent.m_data, (int)((_DWORD)m_data << 10) >> 10, (int)((unsigned __int64)m_data >> 12) >> 10, m_data >> 44, instance->angles.m_pitch, instance->angles.m_yaw, instance->angles.m_roll);
}

/*
==============
ScriptableCommon_SetupPartWorldState
==============
*/
void ScriptableCommon_SetupPartWorldState(const ScriptableReplicatedLimits *limits, ScriptablePartData *partData, const unsigned int partDataSize, ScriptablePartWorldState *outPartWorldState)
{
  int v7; 
  const ScriptableReplicatedLimits *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 119, ASSERT_TYPE_ASSERT, "(partData)", (const char *)&queryFormat, "partData") )
    __debugbreak();
  if ( ((unsigned __int8)partData & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 120, ASSERT_TYPE_ASSERT, "(IsAligned( partData, SCRIPTABLE_PART_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( partData, SCRIPTABLE_PART_ALIGNMENT )") )
    __debugbreak();
  v7 = 0;
  v8 = limits;
  v9 = 2i64;
  do
  {
    outPartWorldState->groups[0].partData = &partData[v7];
    v7 += v8->partWorldLimits[0];
    if ( (v7 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 131, ASSERT_TYPE_ASSERT, "(IsAligned( partDataOffset, SCRIPTABLE_PART_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( partDataOffset, SCRIPTABLE_PART_ALIGNMENT )") )
      __debugbreak();
    outPartWorldState = (ScriptablePartWorldState *)((char *)outPartWorldState + 8);
    v8 = (const ScriptableReplicatedLimits *)((char *)v8 + 4);
    --v9;
  }
  while ( v9 );
  if ( v7 != partDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 134, ASSERT_TYPE_ASSERT, "( partDataOffset ) == ( partDataSize )", "%s == %s\n\t%i, %i", "partDataOffset", "partDataSize", v7, partDataSize) )
    __debugbreak();
  if ( v7 != limits->partTotalLimit )
  {
    LODWORD(v11) = limits->partTotalLimit;
    LODWORD(v10) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 135, ASSERT_TYPE_ASSERT, "( partDataOffset ) == ( limits.partTotalLimit * sizeof( ScriptablePartData ) )", "%s == %s\n\t%i, %i", "partDataOffset", "limits.partTotalLimit * sizeof( ScriptablePartData )", v10, v11) )
      __debugbreak();
  }
}

/*
==============
ScriptableCommon_ShutdownWorldCounts
==============
*/
void ScriptableCommon_ShutdownWorldCounts(const ScriptableContext context, ScriptableReplicatedLimits *outReplicatedLimits)
{
  __int64 v4; 
  int v6; 

  if ( (unsigned int)context >= SBL_CONTEXT_COUNT )
  {
    v6 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 57, ASSERT_TYPE_ASSERT, "(unsigned)( context ) < (unsigned)( SBL_CONTEXT_COUNT )", "context doesn't index SBL_CONTEXT_COUNT\n\t%i not in [0, %i)", context, v6) )
      __debugbreak();
  }
  v4 = g_scriptableWorldCountsInitialized;
  g_scriptableWorldCountsInitialized &= ~(1 << context);
  LODWORD(v4) = g_scriptableWorldCountsInitialized;
  Com_Printf(29, "ScriptableCommon_ShutdownWorldCounts for context %d (%x)\n", (unsigned int)context, v4);
  if ( !g_scriptableWorldCountsInitialized )
  {
    *(_QWORD *)&g_scriptableWorldCounts.totalInstanceCount = 0i64;
    *(_QWORD *)&g_scriptableWorldCounts.runtimeInstanceCount = 0i64;
  }
  *(_QWORD *)outReplicatedLimits->partWorldLimits = 0i64;
  *(_QWORD *)&outReplicatedLimits->partTotalLimit = 0i64;
}

/*
==============
ScriptableCommon_UpdatePartsChangeBits
==============
*/
void ScriptableCommon_UpdatePartsChangeBits(ScriptableChangePartBits *changedPartBits, const unsigned int changedPartBitsArraySize, const ScriptablePartData *fromParts, const ScriptablePartData *toParts, const unsigned int partCount)
{
  const ScriptablePartData *v6; 
  unsigned int v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  unsigned int *v14; 
  __int64 v25; 

  v6 = fromParts;
  if ( !fromParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 348, ASSERT_TYPE_ASSERT, "(fromParts != nullptr)", (const char *)&queryFormat, "fromParts != nullptr") )
    __debugbreak();
  if ( !toParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 349, ASSERT_TYPE_ASSERT, "(toParts != nullptr)", (const char *)&queryFormat, "toParts != nullptr") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "ScriptableCommon_UpdatePartsChangeBits");
  if ( ((unsigned __int8)v6 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 356, ASSERT_TYPE_ASSERT, "(IsAligned( fromData, SCRIPTABLE_PART_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( fromData, SCRIPTABLE_PART_ALIGNMENT )") )
    __debugbreak();
  if ( ((unsigned __int8)toParts & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 357, ASSERT_TYPE_ASSERT, "(IsAligned( toData, SCRIPTABLE_PART_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( toData, SCRIPTABLE_PART_ALIGNMENT )") )
    __debugbreak();
  v9 = partCount;
  v10 = 0i64;
  if ( partCount >= 0x20 )
  {
    v11 = (unsigned __int64)partCount >> 5;
    do
    {
      v9 -= 32;
      _XMM0 = *(_OWORD *)&v6[16].0;
      _XMM2 = *(_OWORD *)&v6->0;
      v14 = &changedPartBits->partBitsArray[v10];
      toParts += 32;
      __asm
      {
        vpcmpeqb xmm0, xmm0, xmm1
        vpmovmskb ecx, xmm0
      }
      v6 += 32;
      __asm
      {
        vpcmpeqb xmm1, xmm2, xmm3
        vpmovmskb eax, xmm1
      }
      v10 = (unsigned int)(v10 + 1);
      *v14 |= ~(_EAX | (_ECX << 16));
      --v11;
    }
    while ( v11 );
  }
  if ( v9 )
  {
    _XMM0 = *(_OWORD *)&toParts->0;
    __asm { vpcmpeqb xmm6, xmm0, xmmword ptr [rsi] }
    _XMM0 = *(_OWORD *)&toParts[16].0;
    __asm { vpcmpeqb xmm7, xmm0, xmmword ptr [rsi+10h] }
    if ( v9 > 0x1F )
    {
      LODWORD(v25) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 387, ASSERT_TYPE_ASSERT, "( bytesRemaining ) <= ( 31 )", "bytesRemaining not in [0, 31]\n\t%u not in [0, %u]", v25, 31) )
        __debugbreak();
    }
    __asm
    {
      vpmovmskb edx, xmm7
      vpmovmskb eax, xmm6
    }
    changedPartBits->partBitsArray[v10] |= ((1 << v9) - 1) & ~(_EAX | (_EDX << 16));
    LODWORD(v10) = v10 + 1;
  }
  if ( (unsigned int)v10 > changedPartBitsArraySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 395, ASSERT_TYPE_ASSERT, "( partBitsIndex ) <= ( changedPartBitsArraySize )", "%s <= %s\n\t%i, %i", "partBitsIndex", "changedPartBitsArraySize", v10, changedPartBitsArraySize) )
    __debugbreak();
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCommon_VerifyInstances
==============
*/
void ScriptableCommon_VerifyInstances(const ScriptableReplicatedInstance *instances, const unsigned int instanceCount)
{
  __int64 v2; 
  unsigned __int8 *p_partCount; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v2 = instanceCount;
  if ( !instances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 97, ASSERT_TYPE_ASSERT, "(instances)", (const char *)&queryFormat, "instances") )
    __debugbreak();
  if ( (_DWORD)v2 )
  {
    p_partCount = &instances->partCount;
    do
    {
      v5 = *((_DWORD *)p_partCount - 2);
      if ( v5 != -1 )
      {
        if ( v5 >= 0x800 )
        {
          LODWORD(v7) = 2048;
          LODWORD(v6) = *((_DWORD *)p_partCount - 2);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 106, ASSERT_TYPE_ASSERT, "(unsigned)( instance.instanceIndex ) < (unsigned)( SCRIPTABLE_MAX_RESERVED_INSTANCES )", "instance.instanceIndex doesn't index SCRIPTABLE_MAX_RESERVED_INSTANCES\n\t%i not in [0, %i)", v6, v7) )
            __debugbreak();
        }
        if ( !*p_partCount )
        {
          LODWORD(v8) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 107, ASSERT_TYPE_ASSERT, "( instance.partCount ) > ( 0 )", "%s > %s\n\t%i, %i", "instance.partCount", "0", v8, 0i64) )
            __debugbreak();
        }
        if ( (unsigned int)*p_partCount + *((_DWORD *)p_partCount - 1) > 0x4000 )
        {
          LODWORD(v9) = 0x4000;
          LODWORD(v8) = *p_partCount + *((_DWORD *)p_partCount - 1);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common.cpp", 108, ASSERT_TYPE_ASSERT, "( instance.partIndex + instance.partCount ) <= ( SCRIPTABLE_RESERVED_PARTS_STATIC_MAX )", "%s <= %s\n\t%i, %i", "instance.partIndex + instance.partCount", "SCRIPTABLE_RESERVED_PARTS_STATIC_MAX", v8, v9) )
            __debugbreak();
        }
      }
      p_partCount += 32;
      --v2;
    }
    while ( v2 );
  }
}

