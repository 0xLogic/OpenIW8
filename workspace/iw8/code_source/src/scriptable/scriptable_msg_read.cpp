/*
==============
ScriptableMsg_ClearInstancePartStates
==============
*/

bool __fastcall ScriptableMsg_ClearInstancePartStates(const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *instance, ScriptableCompleteState *curWorld)
{
  return ?ScriptableMsg_ClearInstancePartStates@@YA_NAEBUScriptableReplicatedLimits@@AEBUScriptableReplicatedInstance@@AEAUScriptableCompleteState@@@Z(limits, instance, curWorld);
}

/*
==============
ScriptableMsg_ReadArchivedStateNoDelta
==============
*/

void __fastcall ScriptableMsg_ReadArchivedStateNoDelta(msg_t *msg, ScriptableReplicatedInstance *toInstances, const unsigned int toInstanceCount, ScriptablePartData *toPartData, const unsigned int toPartCount, char *scratchBuffer, const unsigned int scratchBufferSize)
{
  ?ScriptableMsg_ReadArchivedStateNoDelta@@YAXPEIAUmsg_t@@PEIAUScriptableReplicatedInstance@@IPEIAUScriptablePartData@@IPEIADI@Z(msg, toInstances, toInstanceCount, toPartData, toPartCount, scratchBuffer, scratchBufferSize);
}

/*
==============
ScriptableMsg_ReadBaselineChecksum
==============
*/

void __fastcall ScriptableMsg_ReadBaselineChecksum(msg_t *msg, unsigned int *outPartChecksum, unsigned int *outInstanceChecksum)
{
  ?ScriptableMsg_ReadBaselineChecksum@@YAXPEIAUmsg_t@@AEAI1@Z(msg, outPartChecksum, outInstanceChecksum);
}

/*
==============
ScriptableMsg_ReadDeltaInstancePartChanges
==============
*/

bool __fastcall ScriptableMsg_ReadDeltaInstancePartChanges(msg_t *msg, const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *instance, ScriptableCompleteState *curWorld)
{
  return ?ScriptableMsg_ReadDeltaInstancePartChanges@@YA_NPEAUmsg_t@@AEBUScriptableReplicatedLimits@@AEBUScriptableReplicatedInstance@@AEAUScriptableCompleteState@@@Z(msg, limits, instance, curWorld);
}

/*
==============
ScriptableMsgRead_CheckAvailableBufferSpace
==============
*/

bool __fastcall ScriptableMsgRead_CheckAvailableBufferSpace(const unsigned __int64 readIndex, const unsigned __int64 writeIndex, const CircularEntryBuffer<500,131072,unsigned __int64,1> *buffer, const unsigned int changeByteCount)
{
  return ?ScriptableMsgRead_CheckAvailableBufferSpace@@YA_N_K0PEBV?$CircularEntryBuffer@$0BPE@$0CAAAA@_K$00@@I@Z(readIndex, writeIndex, buffer, changeByteCount);
}

/*
==============
ScriptableMsg_ReadDeltaInstanceFields
==============
*/

bool __fastcall ScriptableMsg_ReadDeltaInstanceFields(msg_t *msg, ScriptableReplicatedInstance *inOutInstance)
{
  return ?ScriptableMsg_ReadDeltaInstanceFields@@YA_NPEAUmsg_t@@AEAUScriptableReplicatedInstance@@@Z(msg, inOutInstance);
}

/*
==============
ScriptableMsg_ReadSnapshotChanges
==============
*/

bool __fastcall ScriptableMsg_ReadSnapshotChanges(msg_t *msg, const ScriptableReplicatedLimits *limits, const unsigned __int64 oldWriteIndex, ScriptableReadChangeQueue *changeQueue)
{
  return ?ScriptableMsg_ReadSnapshotChanges@@YA_NPEIAUmsg_t@@AEBUScriptableReplicatedLimits@@_KAEAUScriptableReadChangeQueue@@@Z(msg, limits, oldWriteIndex, changeQueue);
}

/*
==============
ScriptableMsg_ReadNewInstanceFields
==============
*/

bool __fastcall ScriptableMsg_ReadNewInstanceFields(msg_t *msg, ScriptableReplicatedInstance *inOutInstance)
{
  return ?ScriptableMsg_ReadNewInstanceFields@@YA_NPEAUmsg_t@@AEAUScriptableReplicatedInstance@@@Z(msg, inOutInstance);
}

/*
==============
ScriptableMsg_ReadArchivedState
==============
*/

void __fastcall ScriptableMsg_ReadArchivedState(msg_t *msg, const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *fromInstances, const unsigned int fromInstanceCount, ScriptableReplicatedInstance *toInstances, const unsigned int toInstanceCount, const ScriptablePartData *fromParts, const unsigned int fromPartCount, ScriptablePartData *toPartData, const unsigned int toPartCount)
{
  ?ScriptableMsg_ReadArchivedState@@YAXPEIAUmsg_t@@AEBUScriptableReplicatedLimits@@PEIBUScriptableReplicatedInstance@@IPEIAU3@IPEIBUScriptablePartData@@IPEIAU4@I@Z(msg, limits, fromInstances, fromInstanceCount, toInstances, toInstanceCount, fromParts, fromPartCount, toPartData, toPartCount);
}

/*
==============
ScriptableMsgRead_CheckAvailableBufferSpace
==============
*/
char ScriptableMsgRead_CheckAvailableBufferSpace(const unsigned __int64 readIndex, const unsigned __int64 writeIndex, const CircularEntryBuffer<500,131072,unsigned __int64,1> *buffer, const unsigned int changeByteCount)
{
  unsigned int v8; 
  __int64 v9; 
  char *v10; 
  unsigned int v11; 
  char *fmt; 
  __int64 v14; 

  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 316, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  if ( readIndex != writeIndex )
  {
    v8 = truncate_cast<unsigned int,unsigned __int64>(readIndex % 0x1F4);
    v9 = v8;
    if ( v8 >= 0x1F4 )
    {
      LODWORD(v14) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v14, 500) )
        __debugbreak();
    }
    if ( !buffer->m_entries[v9].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 83, ASSERT_TYPE_ASSERT, "(m_entries[entryIndex].size > 0)", "%s\n\tRequesting buffer information about an invalid command", "m_entries[entryIndex].size > 0") )
      __debugbreak();
    if ( !CircularEntryBuffer<500,131072,unsigned __int64,1>::IsDataAvailable((CircularEntryBuffer<500,131072,unsigned __int64,1> *)buffer, v9) )
    {
      Com_Printf(29, "ScriptableMsgRead_CheckAvailableBufferSpace: Write buffer is at data capacity (failed available buffer fetch), aboring write at %zu\n", writeIndex);
      return 0;
    }
    v10 = (char *)buffer + 8 * v9;
    v11 = buffer->m_bufferNextIndex - *((_DWORD *)v10 + 1);
    if ( v11 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 103, ASSERT_TYPE_ASSERT, "( usedBuffer ) <= ( static_cast<uint>( sizeof( m_buffer ) ) )", "%s <= %s\n\t%i, %i", "usedBuffer", "static_cast<uint>( sizeof( m_buffer ) )", buffer->m_bufferNextIndex - *((_DWORD *)v10 + 1), 0x20000) )
      __debugbreak();
    if ( 0x20000 - v11 < changeByteCount )
    {
      LODWORD(fmt) = changeByteCount;
      Com_Printf(29, "ScriptableMsgRead_CheckAvailableBufferSpace: Write buffer is at data capacity, aboring write at %zu. %u bytes available and %u needed.\n", writeIndex, 0x20000 - v11, fmt);
      return 0;
    }
  }
  return 1;
}

/*
==============
ScriptableMsgRead_CheckExistingBufferData
==============
*/
void ScriptableMsgRead_CheckExistingBufferData(const unsigned __int64 changeSequenceIndex, const ScriptableReadChangeQueue *changeQueue, const unsigned __int8 *receivedData, const unsigned int receivedDataSizee)
{
  unsigned int v7; 
  CircularEntryBuffer<500,131072,unsigned __int64,1> *buffer; 
  __int64 v9; 
  __int64 v10; 
  size_t size; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int8 *v14; 
  int v15; 
  char Buf2[131072]; 

  v7 = truncate_cast<unsigned int,unsigned __int64>(changeSequenceIndex % 0x1F4);
  buffer = changeQueue->buffer;
  v9 = v7;
  if ( v7 >= 0x1F4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v7, 500) )
    __debugbreak();
  v10 = v9;
  if ( CircularEntryBuffer<500,131072,unsigned __int64,1>::IsDataAvailable(buffer, v9) )
  {
    size = buffer->m_entries[v9].size;
    v12 = buffer->m_entries[v10].offset & 0x1FFFF;
    v13 = (unsigned int)(0x20000 - v12);
    v14 = &buffer->m_buffer[v12];
    if ( (unsigned int)v13 >= (unsigned int)size )
    {
      memcpy_0(Buf2, v14, size);
    }
    else
    {
      memcpy_0(Buf2, v14, (unsigned int)v13);
      memcpy_0(&Buf2[v13], buffer->m_buffer, (unsigned int)(size - v13));
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 307, ASSERT_TYPE_ASSERT, "(changeQueue.buffer->GetDataAndSizeCopy( bufferIndex, existingBuf, &existingSize ))", (const char *)&queryFormat, "changeQueue.buffer->GetDataAndSizeCopy( bufferIndex, existingBuf, &existingSize )") )
      __debugbreak();
    LODWORD(size) = v15;
  }
  if ( receivedDataSizee != (_DWORD)size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 308, ASSERT_TYPE_ASSERT, "( receivedDataSizee ) == ( existingSize )", "%s == %s\n\t%i, %i", "receivedDataSizee", "existingSize", receivedDataSizee, size) )
    __debugbreak();
  if ( memcmp_0(receivedData, Buf2, (unsigned int)size) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 309, ASSERT_TYPE_ASSERT, "(memcmp( receivedData, existingBuf, existingSize ) == 0)", (const char *)&queryFormat, "memcmp( receivedData, existingBuf, existingSize ) == 0") )
      __debugbreak();
  }
}

/*
==============
ScriptableMsg_ClearInstancePartStates
==============
*/
char ScriptableMsg_ClearInstancePartStates(const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *instance, ScriptableCompleteState *curWorld)
{
  __int64 v5; 
  __int64 v6; 

  v5 = limits->partWorldLimits[1];
  v6 = instance->partIndex + instance->partCount;
  if ( (unsigned int)v5 < (unsigned int)v6 )
  {
    Com_Printf(29, "ScriptableMsg_ClearInstanceParts: Invalid clear beyond the part limit next index %u > %u\n", v6, v5);
    return 0;
  }
  else
  {
    if ( !curWorld->partWorldState.groups[1].partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 239, ASSERT_TYPE_ASSERT, "(partReservedState.partData != nullptr)", (const char *)&queryFormat, "partReservedState.partData != nullptr") )
      __debugbreak();
    memset_0(&curWorld->partWorldState.groups[1].partData[instance->partIndex], 0, instance->partCount);
    return 1;
  }
}

/*
==============
ScriptableMsg_ReadAngles
==============
*/
void ScriptableMsg_ReadAngles(msg_t *msg, const ScriptableReplicatedAngles *from, ScriptableReplicatedAngles *to)
{
  to->m_pitch = MSG_ReadDeltaAngleShort(msg, from->m_pitch);
  to->m_yaw = MSG_ReadDeltaAngleShort(msg, from->m_yaw);
  to->m_roll = MSG_ReadDeltaAngleShort(msg, from->m_roll);
}

/*
==============
ScriptableMsg_ReadArchivedState
==============
*/
void ScriptableMsg_ReadArchivedState(msg_t *msg, const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *fromInstances, const unsigned int fromInstanceCount, ScriptableReplicatedInstance *toInstances, const unsigned int toInstanceCount, const ScriptablePartData *fromParts, const unsigned int fromPartCount, ScriptablePartData *toPartData, const unsigned int toPartCount)
{
  int Byte; 
  ScriptableReplicatedInstance *replicatedInstances; 
  unsigned int replicatedInstanceCount; 
  int MinBitCountForNum; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  ScriptableReplicatedInstance *v21; 
  unsigned int Bits; 
  unsigned int v23; 
  int v24; 
  unsigned int v25; 
  unsigned int v26; 
  __int64 v27; 
  unsigned __int8 v28; 
  int v29; 
  __int64 v30; 
  __int64 v31; 
  ScriptableMsgInstanceFunctor v32[4]; 
  int inOutLastIndex; 
  const ScriptableReplicatedLimits *v34; 
  ScriptableCompleteState curWorld; 

  v34 = limits;
  if ( toInstanceCount != fromInstanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 551, ASSERT_TYPE_ASSERT, "( toInstanceCount ) == ( fromInstanceCount )", "toInstanceCount == fromInstanceCount\n\t%i, %i", toInstanceCount, fromInstanceCount) )
    __debugbreak();
  memcpy_0(toInstances, fromInstances, 32i64 * toInstanceCount);
  if ( toPartCount != fromPartCount )
  {
    LODWORD(v31) = fromPartCount;
    LODWORD(v30) = toPartCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 554, ASSERT_TYPE_ASSERT, "( toPartCount ) == ( fromPartCount )", "toPartCount == fromPartCount\n\t%i, %i", v30, v31) )
      __debugbreak();
  }
  memcpy_0(toPartData, fromParts, toPartCount);
  memset(&curWorld.replicatedInstanceCount + 1, 0, 20);
  ScriptableCommon_SetupPartWorldState(limits, toPartData, toPartCount, &curWorld.partWorldState);
  curWorld.replicatedInstances = toInstances;
  curWorld.replicatedInstanceCount = toInstanceCount;
  Byte = MSG_ReadByte(msg);
  if ( Byte != 233 && !msg->overflowed )
  {
    LODWORD(v30) = Byte;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 564, ASSERT_TYPE_ASSERT, "( ( readFirstByte == 233 || MSG_IsOverflowed( msg ) ) )", "( readFirstByte ) = %i", v30) )
      __debugbreak();
  }
  ScriptableMsg_ParseInstanceChanges<ScriptableMsgInstanceFunctor,ScriptableMsgInstanceFunctor>(msg, limits, &curWorld, v32, v32);
  replicatedInstances = curWorld.replicatedInstances;
  replicatedInstanceCount = curWorld.replicatedInstanceCount;
  MinBitCountForNum = GetMinBitCountForNum(limits->instanceLimit - 1);
  v17 = 1;
  v18 = -1;
  inOutLastIndex = -1;
  v19 = -1;
  if ( MinBitCountForNum > 1 )
    v17 = MinBitCountForNum;
  if ( !msg->overflowed )
  {
    while ( 1 )
    {
      if ( !MSG_ReadBit(msg) )
        goto LABEL_30;
      if ( MSG_ReadByte(msg) != 17 && !msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 246, ASSERT_TYPE_ASSERT, "(sentinel == 17 || MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "sentinel == 17 || MSG_IsOverflowed( msg )") )
        __debugbreak();
      if ( v19 != -1 && v19 >= 1 << v17 )
      {
        LODWORD(v30) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 86, ASSERT_TYPE_ASSERT, "( ( ( inOutLastIndex == -1 ) || ( static_cast<uint>( inOutLastIndex ) < (1u<< instanceBitCount) ) ) )", "( inOutLastIndex ) = %i", v30) )
          __debugbreak();
      }
      v20 = ScriptableMsg_ReadDeltaIndex(msg, v17, v17 >> 1, &inOutLastIndex);
      if ( msg->overflowed || v20 >= replicatedInstanceCount )
        break;
      v21 = &replicatedInstances[v20];
      if ( v21->instanceIndex == -1 )
      {
        Com_PrintError(29, "ScriptableMsg_ParseInstanceRemoved: Received Remove for an non-existant scriptable at index %u\n", v20);
LABEL_29:
        ScriptableMsg_ReadError(msg);
        goto LABEL_30;
      }
      ScriptableCommon_ClearReplicatedInstance(v21);
      v19 = inOutLastIndex;
    }
    Com_PrintError(29, "ScriptableMsg_ParseInstanceRemoved: Received Remove for an out-of-range scriptable at index %u\n", v20);
    goto LABEL_29;
  }
LABEL_30:
  ScriptableMsg_ParseInstanceAdded<ScriptableMsgInstanceFunctor>(msg, limits, &curWorld, v32);
  Bits = MSG_ReadBits(msg, 0x13u);
  if ( Bits )
  {
    v23 = limits->partWorldLimits[0];
    v24 = GetMinBitCountForNum(limits->partWorldLimits[0] - 1);
    v25 = 1;
    inOutLastIndex = -1;
    if ( v24 > 1 )
      v25 = v24;
    v26 = 0;
    while ( 1 )
    {
      if ( v18 != -1 && v18 >= 1 << v25 )
      {
        LODWORD(v30) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 104, ASSERT_TYPE_ASSERT, "( ( ( inOutLastIndex == -1 ) || ( static_cast<uint>( inOutLastIndex ) < ( 1u << fullBits ) ) ) )", "( inOutLastIndex ) = %i", v30) )
          __debugbreak();
      }
      v27 = ScriptableMsg_ReadDeltaIndex(msg, v25, v25 >> 1, &inOutLastIndex);
      v28 = MSG_ReadByte(msg);
      if ( msg->overflowed || (unsigned int)v27 >= v23 )
        break;
      if ( (unsigned int)v27 >= v34->partWorldLimits[0] )
      {
        LODWORD(v31) = v34->partWorldLimits[0];
        LODWORD(v30) = v27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 154, ASSERT_TYPE_ASSERT, "(unsigned)( partFixedIndex ) < (unsigned)( limits.partWorldLimits[worldTypeIndex] )", "partFixedIndex doesn't index limits.partWorldLimits[worldTypeIndex]\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      ++v26;
      curWorld.partWorldState.groups[0].partData[v27].data = v28;
      if ( v26 >= Bits )
        goto LABEL_46;
      v18 = inOutLastIndex;
    }
    Com_PrintError(29, "ScriptableMsg_ParseFixedPartChanges: Invalid partFixedIndex %u >= %u\n", (unsigned int)v27, v23);
    ScriptableMsg_ReadError(msg);
  }
LABEL_46:
  v29 = MSG_ReadByte(msg);
  if ( v29 != 234 && !msg->overflowed )
  {
    LODWORD(v30) = v29;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 574, ASSERT_TYPE_ASSERT, "( ( readLastByte == 234 || MSG_IsOverflowed( msg ) ) )", "( readLastByte ) = %i", v30) )
      __debugbreak();
  }
}

/*
==============
ScriptableMsg_ReadArchivedStateNoDelta
==============
*/
void ScriptableMsg_ReadArchivedStateNoDelta(msg_t *msg, ScriptableReplicatedInstance *toInstances, const unsigned int toInstanceCount, ScriptablePartData *toPartData, const unsigned int toPartCount, char *scratchBuffer, const unsigned int scratchBufferSize)
{
  __int64 v8; 
  int Byte; 
  int Data_Decompress; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v8 = toInstanceCount;
  Sys_ProfBeginNamedEvent(0xFF008008, "ScriptableMsg_ReadArchivedStateNoDelta");
  Byte = MSG_ReadByte(msg);
  if ( Byte != 223 && !msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 585, ASSERT_TYPE_ASSERT, "( ( readFirstByte == 223 || MSG_IsOverflowed( msg ) ) )", "( readFirstByte ) = %i", Byte) )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 245, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  msg->bit = 8 * msg->readcount;
  Data_Decompress = MSG_ReadData_Decompress(msg, toInstances, 32 * v8, scratchBuffer, scratchBufferSize);
  if ( Data_Decompress != 32 * v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 590, ASSERT_TYPE_ASSERT, "( instReadSize ) == ( toInstanceCount * sizeof( *toInstances ) )", "%s == %s\n\t%i, %i", "instReadSize", "toInstanceCount * sizeof( *toInstances )", Data_Decompress, 32 * v8) )
    __debugbreak();
  v13 = MSG_ReadData_Decompress(msg, toPartData, toPartCount, scratchBuffer, scratchBufferSize);
  if ( v13 != (unsigned __int64)toPartCount )
  {
    LODWORD(v17) = toPartCount;
    LODWORD(v16) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 593, ASSERT_TYPE_ASSERT, "( partReadSize ) == ( toPartCount * sizeof( *toPartData ) )", "%s == %s\n\t%i, %i", "partReadSize", "toPartCount * sizeof( *toPartData )", v16, v17) )
      __debugbreak();
  }
  v14 = MSG_ReadByte(msg);
  if ( v14 != 224 && !msg->overflowed )
  {
    LODWORD(v15) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 597, ASSERT_TYPE_ASSERT, "( ( readLastByte == 224 || MSG_IsOverflowed( msg ) ) )", "( readLastByte ) = %i", v15) )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableMsg_ReadBaselineChecksum
==============
*/
void ScriptableMsg_ReadBaselineChecksum(msg_t *msg, unsigned int *outPartChecksum, unsigned int *outInstanceChecksum)
{
  int Byte; 
  int v7; 
  __int64 v8; 
  int v9; 

  Byte = MSG_ReadByte(msg);
  if ( Byte != 201 && !msg->overflowed )
  {
    v9 = Byte;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 48, ASSERT_TYPE_ASSERT, "( ( sentinel == sentinelValue || MSG_IsOverflowed( msg ) ) )", "( sentinel ) = %i", v9) )
      __debugbreak();
  }
  *outPartChecksum = MSG_ReadLong(msg);
  *outInstanceChecksum = MSG_ReadLong(msg);
  v7 = MSG_ReadByte(msg);
  if ( v7 != 202 && !msg->overflowed )
  {
    LODWORD(v8) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 48, ASSERT_TYPE_ASSERT, "( ( sentinel == sentinelValue || MSG_IsOverflowed( msg ) ) )", "( sentinel ) = %i", v8) )
      __debugbreak();
  }
}

/*
==============
ScriptableMsg_ReadChanges
==============
*/
char ScriptableMsg_ReadChanges(msg_t *msg, const unsigned __int64 oldWriteIndex, ScriptableReadChangeQueue *changeQueue)
{
  unsigned __int64 v6; 
  unsigned int capacity; 
  unsigned __int64 v8; 
  unsigned int Bits; 
  unsigned int v10; 
  int Byte; 
  bool v13; 
  int Bit; 
  unsigned __int64 Int64; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 writeIndex; 
  unsigned __int64 v21; 
  unsigned __int64 readIndex; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  unsigned int Short; 
  size_t v27; 
  CircularEntryBuffer<500,131072,unsigned __int64,1> *v28; 
  unsigned int v29; 
  __int64 v30; 
  char *v31; 
  unsigned int v32; 
  __int64 v33; 
  unsigned int IndexForSequence; 
  CircularEntryBuffer<500,131072,unsigned __int64,1> *v35; 
  __int64 v36; 
  unsigned __int8 *v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned __int8 *m_buffer; 
  size_t v41; 
  unsigned int v42; 
  int UnsignedShort; 
  const dvar_t *v44; 
  unsigned __int64 v45; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  CircularEntryBuffer<500,131072,unsigned __int64,1> *v48; 
  unsigned int v49; 
  unsigned int v50; 
  char *fmt; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  unsigned __int8 TYPE_NOT_SPECIFIED; 
  bool v57; 
  unsigned __int64 v58; 
  unsigned __int64 v59; 
  unsigned __int64 v60; 
  unsigned __int64 v61; 
  unsigned int v62; 
  unsigned __int64 v63; 
  unsigned __int8 buffer[1024]; 

  if ( !changeQueue->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 349, ASSERT_TYPE_ASSERT, "(changeQueue.buffer != nullptr)", (const char *)&queryFormat, "changeQueue.buffer != nullptr") )
    __debugbreak();
  v6 = changeQueue->writeIndex - changeQueue->readIndex;
  if ( v6 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v6, "unsigned", changeQueue->writeIndex - changeQueue->readIndex) )
    __debugbreak();
  capacity = changeQueue->capacity;
  if ( (unsigned int)v6 > capacity )
  {
    v8 = changeQueue->writeIndex - changeQueue->readIndex;
    if ( v8 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v8, "unsigned", changeQueue->writeIndex - changeQueue->readIndex) )
      __debugbreak();
    LODWORD(v55) = capacity;
    LODWORD(v54) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 350, ASSERT_TYPE_ASSERT, "( truncate_cast<uint>( changeQueue.writeIndex - changeQueue.readIndex ) ) <= ( changeQueue.capacity )", "%s <= %s\n\t%i, %i", "truncate_cast<uint>( changeQueue.writeIndex - changeQueue.readIndex )", "changeQueue.capacity", v54, v55) )
      __debugbreak();
  }
  Bits = MSG_ReadBits(msg, 9u);
  v10 = Bits;
  v62 = Bits;
  if ( msg->overflowed )
  {
    Com_PrintError(25, "ScriptableMsg_ReadChanges: Message overflowed (change count)\n");
LABEL_15:
    ScriptableMsg_ReadError(msg);
    return 0;
  }
  if ( Bits > 0x1F4 )
  {
    Com_PrintError(29, "ScriptableMsg_ReadChanges: Invalid change count received (%u)", Bits);
    ScriptableMsg_ReadError(msg);
    return 0;
  }
  Byte = MSG_ReadByte(msg);
  if ( !v10 )
  {
    if ( Byte == 199 || msg->overflowed )
      return 1;
    LODWORD(v52) = Byte;
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 48, ASSERT_TYPE_ASSERT, "( ( sentinel == sentinelValue || MSG_IsOverflowed( msg ) ) )", "( sentinel ) = %i", v52);
    goto LABEL_120;
  }
  if ( Byte != 198 && !msg->overflowed )
  {
    LODWORD(v52) = Byte;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 48, ASSERT_TYPE_ASSERT, "( ( sentinel == sentinelValue || MSG_IsOverflowed( msg ) ) )", "( sentinel ) = %i", v52) )
      __debugbreak();
  }
  Bit = MSG_ReadBit(msg);
  v57 = Bit != 0;
  if ( Bit )
    Int64 = MSG_ReadInt64(msg);
  else
    Int64 = changeQueue->startIndex;
  v63 = Int64;
  v16 = MSG_ReadInt64(msg);
  if ( v16 != oldWriteIndex && !msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 61, ASSERT_TYPE_ASSERT, "( (debugChangeIndex == oldChangeIndex) || MSG_IsOverflowed( msg ) )", "%zu == %zu", v16, oldWriteIndex) )
    __debugbreak();
  if ( MSG_ReadBit(msg) )
  {
    v17 = MSG_ReadInt64(msg);
  }
  else
  {
    v17 = oldWriteIndex + (unsigned __int8)MSG_ReadByte(msg);
    v18 = MSG_ReadInt64(msg);
    if ( v18 != v17 && !msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 76, ASSERT_TYPE_ASSERT, "( (readChangeIndex == changeIndex) || MSG_IsOverflowed( msg ) )", "%zu == %zu", v18, v17) )
      __debugbreak();
  }
  v19 = v17 - v10;
  v61 = v19;
  if ( msg->overflowed )
  {
    Com_PrintError(29, "ScriptableMsg_ReadChanges: Message overflowed (sequence)\n");
    ScriptableMsg_ReadError(msg);
    return 0;
  }
  if ( v17 < Int64 )
  {
    LODWORD(v55) = Int64;
    LODWORD(v54) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 395, ASSERT_TYPE_ASSERT, "( changeWriteSequenceIndex ) >= ( startSequenceIndex )", "%s >= %s\n\t%i, %i", "changeWriteSequenceIndex", "startSequenceIndex", v54, v55) )
      __debugbreak();
  }
  if ( v19 < Int64 )
  {
    LODWORD(v55) = Int64;
    LODWORD(v54) = v17 - v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 396, ASSERT_TYPE_ASSERT, "( changeStartSequenceIndex ) >= ( startSequenceIndex )", "%s >= %s\n\t%i, %i", "changeStartSequenceIndex", "startSequenceIndex", v54, v55) )
      __debugbreak();
  }
  writeIndex = changeQueue->writeIndex;
  v21 = Int64;
  readIndex = changeQueue->readIndex;
  v23 = Int64;
  if ( writeIndex > Int64 )
    v21 = changeQueue->writeIndex;
  v58 = v21;
  if ( readIndex > Int64 )
    v23 = changeQueue->readIndex;
  v59 = v23;
  if ( v17 - v21 > v10 )
  {
    LODWORD(v52) = v62;
    Com_PrintError(29, "ScriptableMsg_ReadChanges: Sequence outside of expected bounds. Maay have skipped a change. ( writeIndex %zu, Start %zu, Target %zu, Count %d )\n", writeIndex, v17 - v10, v17, v52);
    ScriptableMsg_ReadError(msg);
    return 0;
  }
  v24 = v23;
  if ( v17 - v23 > changeQueue->capacity )
  {
    LODWORD(v52) = changeQueue->capacity;
    Com_PrintError(29, "ScriptableMsg_ReadChanges: Out of sequence space for changes ( readIndex %zu, Start %zu, Target %zu, Capacity %d )\n", readIndex, v19, v17, v52);
    ScriptableMsg_ReadError(msg);
    return 0;
  }
  MSG_ReadAlign(msg);
  v60 = v19;
  v25 = v19;
  if ( v19 != v17 )
  {
    while ( 1 )
    {
      Short = MSG_ReadShort(msg);
      v27 = Short;
      if ( Short > 0x400 )
      {
        Com_PrintError(25, "ScriptableMsg_ReadChanges: Message Is Invalid, changeByteCount too large (%i)\n", Short);
        return 0;
      }
      MSG_ReadData(msg, Short, buffer, 1024);
      if ( msg->overflowed )
      {
        Com_PrintError(29, "ScriptableMsg_ReadChanges: Overflowed reading parts (%u changes, start at %zu until %zu).\n", v62, v19, v25);
        ScriptableMsg_ReadError(msg);
        return 0;
      }
      if ( v21 == v25 )
      {
        v28 = changeQueue->buffer;
        if ( !changeQueue->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 316, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
          __debugbreak();
        if ( v24 != v21 )
        {
          v29 = truncate_cast<unsigned int,unsigned __int64>(v24 % 0x1F4);
          v30 = v29;
          if ( v29 >= 0x1F4 )
          {
            LODWORD(v53) = 500;
            LODWORD(v52) = v29;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v52, v53) )
              __debugbreak();
          }
          if ( !v28->m_entries[v30].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 83, ASSERT_TYPE_ASSERT, "(m_entries[entryIndex].size > 0)", "%s\n\tRequesting buffer information about an invalid command", "m_entries[entryIndex].size > 0") )
            __debugbreak();
          if ( !CircularEntryBuffer<500,131072,unsigned __int64,1>::IsDataAvailable(v28, v30) )
          {
            Com_Printf(29, "ScriptableMsgRead_CheckAvailableBufferSpace: Write buffer is at data capacity (failed available buffer fetch), aboring write at %zu\n", v58);
            goto LABEL_96;
          }
          v31 = (char *)v28 + 8 * v30;
          v32 = v28->m_bufferNextIndex - *((_DWORD *)v31 + 1);
          if ( v32 > 0x20000 )
          {
            LODWORD(v55) = 0x20000;
            LODWORD(v54) = v28->m_bufferNextIndex - *((_DWORD *)v31 + 1);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 103, ASSERT_TYPE_ASSERT, "( usedBuffer ) <= ( static_cast<uint>( sizeof( m_buffer ) ) )", "%s <= %s\n\t%i, %i", "usedBuffer", "static_cast<uint>( sizeof( m_buffer ) )", v54, v55) )
              __debugbreak();
          }
          v33 = 0x20000 - v32;
          if ( (unsigned int)v33 < (unsigned int)v27 )
          {
            LODWORD(fmt) = v27;
            Com_Printf(29, "ScriptableMsgRead_CheckAvailableBufferSpace: Write buffer is at data capacity, aboring write at %zu. %u bytes available and %u needed.\n", v58, v33, fmt);
LABEL_96:
            Com_PrintError(29, "ScriptableMsg_ReadChanges: Out of buffer space for changes ( Read %zu, Written %zu, Received %zu, Current %zu )", changeQueue->readIndex, changeQueue->writeIndex, v17, v61);
            ScriptableMsg_ReadError(msg);
            return 0;
          }
        }
        IndexForSequence = CircularEntryBuffer<500,131072,unsigned __int64,1>::GetIndexForSequence(changeQueue->buffer, v25);
        v35 = changeQueue->buffer;
        v36 = IndexForSequence;
        TYPE_NOT_SPECIFIED = changeQueue->buffer->TYPE_NOT_SPECIFIED;
        if ( !(_DWORD)v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 123, ASSERT_TYPE_ASSERT, "(dataSize > 0)", (const char *)&queryFormat, "dataSize > 0") )
          __debugbreak();
        if ( (unsigned int)v27 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 124, ASSERT_TYPE_ASSERT, "(dataSize <= sizeof( m_buffer ))", (const char *)&queryFormat, "dataSize <= sizeof( m_buffer )") )
          __debugbreak();
        if ( (unsigned int)v36 >= 0x1F4 )
        {
          LODWORD(v53) = 500;
          LODWORD(v52) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 125, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        v37 = buffer;
        v38 = v35->m_bufferNextIndex & 0x1FFFF;
        v39 = (unsigned int)(0x20000 - v38);
        m_buffer = &v35->m_buffer[v38];
        if ( (unsigned int)v39 >= (unsigned int)v27 )
        {
          v41 = v27;
        }
        else
        {
          memcpy_0(m_buffer, buffer, (unsigned int)v39);
          v37 = &buffer[v39];
          v41 = (unsigned int)(v27 - v39);
          m_buffer = v35->m_buffer;
        }
        memcpy_0(m_buffer, v37, v41);
        v35->m_entries[v36].size = truncate_cast<unsigned short,unsigned int>(v27);
        v35->m_entries[v36].offset = v35->m_bufferNextIndex;
        v35->m_entries[v36].type = TYPE_NOT_SPECIFIED;
        v35->m_bufferNextIndex += v27;
        v25 = v60;
        v21 = v58 + 1;
        v19 = v61;
        ++v58;
      }
      else
      {
        ScriptableMsgRead_CheckExistingBufferData(v25, changeQueue, buffer, v27);
      }
      v42 = truncate_cast<unsigned int,unsigned __int64>(v25 - v19);
      UnsignedShort = MSG_ReadUnsignedShort(msg);
      if ( UnsignedShort != v42 && !msg->overflowed )
      {
        LODWORD(v53) = v42;
        LODWORD(v52) = UnsignedShort;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 459, ASSERT_TYPE_ASSERT, "( readChangeNum == changeNum || MSG_IsOverflowed( msg ) )", "%i == %i", v52, v53) )
          __debugbreak();
      }
      v60 = ++v25;
      if ( v25 == v17 )
        break;
      v24 = v59;
    }
    Int64 = v63;
  }
  if ( msg->overflowed )
    goto LABEL_15;
  v44 = DCONST_DVARINT_scriptable_debug_message_client;
  if ( !DCONST_DVARINT_scriptable_debug_message_client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_message_client") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  if ( v44->current.integer < 0 )
  {
    v46 = v59;
  }
  else
  {
    if ( v57 )
      Com_Printf(6, "[Scriptable CL] Receiving New Start Sequence %zu\n", Int64);
    v45 = changeQueue->readIndex;
    v46 = v59;
    if ( v45 != v59 )
      Com_Printf(6, "[Scriptable CL] Shifting ReadIndex from %zu to %zu\n", v45, v59);
    Com_Printf(6, "[Scriptable CL] Received Sequence %zu -> %zu\n", v19, v17);
  }
  changeQueue->writeIndex = v21;
  changeQueue->readIndex = v46;
  changeQueue->startIndex = Int64;
  if ( v21 != v17 )
  {
    LODWORD(v55) = v17;
    LODWORD(v54) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 489, ASSERT_TYPE_ASSERT, "( changeQueue.writeIndex ) == ( changeWriteSequenceIndex )", "%s == %s\n\t%i, %i", "changeQueue.writeIndex", "changeWriteSequenceIndex", v54, v55) )
      __debugbreak();
  }
  v47 = changeQueue->readIndex;
  if ( changeQueue->writeIndex != v47 )
  {
    v48 = changeQueue->buffer;
    v49 = truncate_cast<unsigned int,unsigned __int64>(v47 % 0x1F4);
    if ( !CircularEntryBuffer<500,131072,unsigned __int64,1>::IsDataAvailable(v48, v49) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 492, ASSERT_TYPE_ASSERT, "( ( changeQueue.writeIndex == changeQueue.readIndex ) || changeQueue.buffer->IsDataAvailable( changeQueue.buffer->GetIndexForSequence( changeQueue.readIndex ) ) )", "Overwrote data at read index %zu while writing up to %zu", changeQueue->readIndex, changeQueue->writeIndex) )
      __debugbreak();
  }
  v50 = changeQueue->capacity;
  if ( truncate_cast<unsigned int,unsigned __int64>(changeQueue->writeIndex - changeQueue->readIndex) > v50 )
  {
    LODWORD(v55) = v50;
    LODWORD(v54) = truncate_cast<unsigned int,unsigned __int64>(changeQueue->writeIndex - changeQueue->readIndex);
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 493, ASSERT_TYPE_ASSERT, "( truncate_cast<uint>( static_cast<ScriptableChangeIndex>( changeQueue.writeIndex - changeQueue.readIndex ) ) ) <= ( changeQueue.capacity )", "%s <= %s\n\t%i, %i", "truncate_cast<uint>( static_cast<ScriptableChangeIndex>( changeQueue.writeIndex - changeQueue.readIndex ) )", "changeQueue.capacity", v54, v55);
LABEL_120:
    if ( v13 )
      __debugbreak();
  }
  return 1;
}

/*
==============
ScriptableMsg_ReadDeltaInstanceFields
==============
*/
bool ScriptableMsg_ReadDeltaInstanceFields(msg_t *msg, ScriptableReplicatedInstance *inOutInstance)
{
  unsigned __int16 m_data; 
  unsigned __int16 UnsignedShort; 
  bool InstanceChecksum; 
  int Byte; 
  int v9; 

  if ( !inOutInstance->replicatedType[0] )
  {
    Com_PrintError(29, "ScriptableMsg_ReadDeltaInstanceFields: Not supported for ENTITY type.\n");
    return 0;
  }
  if ( MSG_ReadBit(msg) )
    inOutInstance->payload = MSG_ReadUnsignedShort(msg);
  if ( MSG_ReadBit(msg) )
    inOutInstance->extraPayload = MSG_ReadUnsignedShort(msg);
  m_data = inOutInstance->parent.m_data;
  if ( MSG_ReadBit(msg) )
    UnsignedShort = MSG_ReadUnsignedShort(msg);
  else
    UnsignedShort = m_data;
  inOutInstance->parent.m_data = UnsignedShort;
  if ( MSG_ReadBit(msg) )
    ScriptableMsg_ReadDeltaOrigin(msg, &inOutInstance->origin, &inOutInstance->origin);
  if ( MSG_ReadBit(msg) )
    ScriptableMsg_ReadAngles(msg, &inOutInstance->angles, &inOutInstance->angles);
  InstanceChecksum = ScriptableMsg_ReadInstanceChecksum(msg, inOutInstance);
  Byte = MSG_ReadByte(msg);
  if ( Byte != 223 && !msg->overflowed )
  {
    v9 = Byte;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 48, ASSERT_TYPE_ASSERT, "( ( sentinel == sentinelValue || MSG_IsOverflowed( msg ) ) )", "( sentinel ) = %i", v9) )
      __debugbreak();
  }
  return InstanceChecksum && !msg->overflowed;
}

/*
==============
ScriptableMsg_ReadDeltaInstancePartChanges
==============
*/
bool ScriptableMsg_ReadDeltaInstancePartChanges(msg_t *msg, const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *instance, ScriptableCompleteState *curWorld)
{
  int MinBitCountForNum; 
  unsigned int v9; 
  unsigned int Bits; 
  unsigned __int8 Byte; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 

  MinBitCountForNum = GetMinBitCountForNum(instance->partCount - 1);
  v9 = 1;
  Bits = -1;
  if ( MinBitCountForNum > 1 )
    v9 = MinBitCountForNum;
  if ( !MSG_ReadBit(msg) )
    return msg->overflowed == 0;
  while ( 1 )
  {
    if ( MSG_ReadBit(msg) )
      ++Bits;
    else
      Bits = MSG_ReadBits(msg, v9);
    Byte = MSG_ReadByte(msg);
    if ( msg->overflowed || Bits >= instance->partCount )
      break;
    v12 = Bits + instance->partIndex;
    if ( (unsigned int)v12 >= limits->partWorldLimits[1] )
    {
      LODWORD(v15) = limits->partWorldLimits[1];
      LODWORD(v14) = Bits + instance->partIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( reservedPartIndex ) < (unsigned)( limits.partWorldLimits[worldTypeIndex] )", "reservedPartIndex doesn't index limits.partWorldLimits[worldTypeIndex]\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    curWorld->partWorldState.groups[1].partData[v12].data = Byte;
    if ( !MSG_ReadBit(msg) )
      return msg->overflowed == 0;
  }
  Com_Printf(29, "ScriptableMsg_ReadDeltaInstancePartChanges: Invalid part index %u >= %u\n", Bits, instance->partCount);
  return 0;
}

/*
==============
ScriptableMsg_ReadDeltaOrigin
==============
*/
void ScriptableMsg_ReadDeltaOrigin(msg_t *msg, const ScriptableReplicatedOrigin *from, ScriptableReplicatedOrigin *to)
{
  to->m_data ^= (*(_DWORD *)&to->0 ^ (*(_DWORD *)&from->0 + MSG_ReadSignedExpGolomb(msg, 4))) & 0x3FFFFF;
  to->m_data ^= (to->m_data ^ (from->m_data + ((__int64)MSG_ReadSignedExpGolomb(msg, 4) << 22))) & 0xFFFFFC00000i64;
  to->m_data = (to->m_data ^ from->m_data) & 0xFFFFFFFFFFFi64 ^ (from->m_data + ((__int64)MSG_ReadSignedExpGolomb(msg, 2) << 44));
}

/*
==============
ScriptableMsg_ReadInstanceChecksum
==============
*/
char ScriptableMsg_ReadInstanceChecksum(msg_t *msg, const ScriptableReplicatedInstance *instance)
{
  unsigned __int16 Short; 
  unsigned int v4; 
  unsigned int v5; 
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
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned __int16 v34; 

  Short = MSG_ReadShort(msg);
  v4 = ((g_crc32Table[(unsigned __int8)~LOBYTE(instance->instanceIndex)] ^ 0xFFFFFF) >> 8) ^ g_crc32Table[BYTE1(instance->instanceIndex) ^ (unsigned __int64)(unsigned __int8)~LOBYTE(g_crc32Table[(unsigned __int8)~LOBYTE(instance->instanceIndex)])];
  v5 = (v4 >> 8) ^ g_crc32Table[BYTE2(instance->instanceIndex) ^ (unsigned __int64)(unsigned __int8)v4];
  v6 = (v5 >> 8) ^ g_crc32Table[HIBYTE(instance->instanceIndex) ^ (unsigned __int64)(unsigned __int8)v5];
  v7 = (v6 >> 8) ^ g_crc32Table[LOBYTE(instance->partIndex) ^ (unsigned __int64)(unsigned __int8)v6];
  v8 = (v7 >> 8) ^ g_crc32Table[BYTE1(instance->partIndex) ^ (unsigned __int64)(unsigned __int8)v7];
  v9 = (v8 >> 8) ^ g_crc32Table[BYTE2(instance->partIndex) ^ (unsigned __int64)(unsigned __int8)v8];
  v10 = (v9 >> 8) ^ g_crc32Table[HIBYTE(instance->partIndex) ^ (unsigned __int64)(unsigned __int8)v9];
  v11 = (v10 >> 8) ^ g_crc32Table[instance->partCount ^ (unsigned __int64)(unsigned __int8)v10];
  v12 = (v11 >> 8) ^ g_crc32Table[(unsigned __int8)instance->replicatedType[0] ^ (unsigned __int64)(unsigned __int8)v11];
  v13 = (v12 >> 8) ^ g_crc32Table[LOBYTE(instance->defIndex) ^ (unsigned __int64)(unsigned __int8)v12];
  v14 = (v13 >> 8) ^ g_crc32Table[HIBYTE(instance->defIndex) ^ (unsigned __int64)(unsigned __int8)v13];
  v15 = (v14 >> 8) ^ g_crc32Table[LOBYTE(instance->extraPayload) ^ (unsigned __int64)(unsigned __int8)v14];
  v16 = (v15 >> 8) ^ g_crc32Table[HIBYTE(instance->extraPayload) ^ (unsigned __int64)(unsigned __int8)v15];
  v17 = (v16 >> 8) ^ g_crc32Table[LOBYTE(instance->payload) ^ (unsigned __int64)(unsigned __int8)v16];
  v18 = (v17 >> 8) ^ g_crc32Table[HIBYTE(instance->payload) ^ (unsigned __int64)(unsigned __int8)v17];
  v19 = (v18 >> 8) ^ g_crc32Table[LOBYTE(instance->angles.m_pitch) ^ (unsigned __int64)(unsigned __int8)v18];
  v20 = (v19 >> 8) ^ g_crc32Table[HIBYTE(instance->angles.m_pitch) ^ (unsigned __int64)(unsigned __int8)v19];
  v21 = (v20 >> 8) ^ g_crc32Table[LOBYTE(instance->angles.m_yaw) ^ (unsigned __int64)(unsigned __int8)v20];
  v22 = (v21 >> 8) ^ g_crc32Table[HIBYTE(instance->angles.m_yaw) ^ (unsigned __int64)(unsigned __int8)v21];
  v23 = (v22 >> 8) ^ g_crc32Table[LOBYTE(instance->angles.m_roll) ^ (unsigned __int64)(unsigned __int8)v22];
  v24 = (v23 >> 8) ^ g_crc32Table[HIBYTE(instance->angles.m_roll) ^ (unsigned __int64)(unsigned __int8)v23];
  v25 = (v24 >> 8) ^ g_crc32Table[LOBYTE(instance->parent.m_data) ^ (unsigned __int64)(unsigned __int8)v24];
  v26 = (v25 >> 8) ^ g_crc32Table[HIBYTE(instance->parent.m_data) ^ (unsigned __int64)(unsigned __int8)v25];
  v27 = (v26 >> 8) ^ g_crc32Table[LOBYTE(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v26];
  v28 = (v27 >> 8) ^ g_crc32Table[*((unsigned __int8 *)&instance->origin.0 + 1) ^ (unsigned __int64)(unsigned __int8)v27];
  v29 = (v28 >> 8) ^ g_crc32Table[BYTE2(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v28];
  v30 = (v29 >> 8) ^ g_crc32Table[BYTE3(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v29];
  v31 = (v30 >> 8) ^ g_crc32Table[BYTE4(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v30];
  v32 = (v31 >> 8) ^ g_crc32Table[BYTE5(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v31];
  v33 = (v32 >> 8) ^ g_crc32Table[BYTE6(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v32];
  v34 = truncate_cast<unsigned short,unsigned int>((unsigned __int16)~((v33 >> 8) ^ LOWORD(g_crc32Table[HIBYTE(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v33])));
  if ( v34 == Short )
    return 1;
  Com_PrintError(29, "[ScriptableMsg_ReadInstanceChecksum FAILURE] %x != %x\n", v34, Short);
  ScriptableCommon_PrintReplicatedInstance(instance);
  return 0;
}

/*
==============
ScriptableMsg_ReadNewInstanceFields
==============
*/
bool ScriptableMsg_ReadNewInstanceFields(msg_t *msg, ScriptableReplicatedInstance *inOutInstance)
{
  char Bits; 
  __int16 DeltaAngleShort; 
  unsigned __int16 UnsignedShort; 
  char InstanceChecksum; 
  int Byte; 

  Bits = MSG_ReadBits(msg, 1u);
  inOutInstance->replicatedType[0] = Bits;
  inOutInstance->partCount = MSG_ReadByte(msg);
  inOutInstance->partIndex = (unsigned __int16)MSG_ReadBits(msg, 0xEu);
  if ( Bits )
  {
    inOutInstance->defIndex = MSG_ReadBits(msg, 9u);
    *(_DWORD *)&inOutInstance->extraPayload = 0;
    if ( MSG_ReadBit(msg) )
      inOutInstance->payload = MSG_ReadUnsignedShort(msg);
    if ( MSG_ReadBit(msg) )
      inOutInstance->extraPayload = MSG_ReadUnsignedShort(msg);
    if ( MSG_ReadBit(msg) )
      UnsignedShort = MSG_ReadUnsignedShort(msg);
    else
      UnsignedShort = g_scriptableZeroParent.m_data;
    inOutInstance->parent.m_data = UnsignedShort;
    ScriptableMsg_ReadDeltaOrigin(msg, &g_scriptableZeroOrigin, &inOutInstance->origin);
    inOutInstance->angles.m_pitch = MSG_ReadDeltaAngleShort(msg, g_scriptableZeroAngles.m_pitch);
    inOutInstance->angles.m_yaw = MSG_ReadDeltaAngleShort(msg, g_scriptableZeroAngles.m_yaw);
    DeltaAngleShort = MSG_ReadDeltaAngleShort(msg, g_scriptableZeroAngles.m_roll);
  }
  else
  {
    inOutInstance->payload = MSG_ReadBits(msg, 0xBu);
    DeltaAngleShort = 0;
    *(_DWORD *)&inOutInstance->defIndex = 0;
    inOutInstance->parent.m_data = 0;
    inOutInstance->origin.m_data = 0i64;
    *(_DWORD *)&inOutInstance->angles.m_pitch = 0;
  }
  inOutInstance->angles.m_roll = DeltaAngleShort;
  InstanceChecksum = ScriptableMsg_ReadInstanceChecksum(msg, inOutInstance);
  Byte = MSG_ReadByte(msg);
  if ( Byte != 222 && !msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 48, ASSERT_TYPE_ASSERT, "( ( sentinel == sentinelValue || MSG_IsOverflowed( msg ) ) )", "( sentinel ) = %i", Byte) )
    __debugbreak();
  return InstanceChecksum && !msg->overflowed;
}

/*
==============
ScriptableMsg_ReadSnapshotChanges
==============
*/
__int64 ScriptableMsg_ReadSnapshotChanges(msg_t *msg, const ScriptableReplicatedLimits *limits, const unsigned __int64 oldWriteIndex, ScriptableReadChangeQueue *changeQueue)
{
  int Byte; 
  unsigned __int8 Changes; 
  int v9; 
  __int64 v11; 
  int v12; 

  Byte = MSG_ReadByte(msg);
  if ( Byte != 233 && !msg->overflowed )
  {
    v12 = Byte;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 503, ASSERT_TYPE_ASSERT, "( ( readFirstByte == 233 || MSG_IsOverflowed( msg ) ) )", "( readFirstByte ) = %i", v12) )
      __debugbreak();
  }
  Changes = ScriptableMsg_ReadChanges(msg, oldWriteIndex, changeQueue);
  if ( Changes )
  {
    v9 = MSG_ReadByte(msg);
    if ( v9 != 234 && !msg->overflowed )
    {
      LODWORD(v11) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 512, ASSERT_TYPE_ASSERT, "( ( readLastByte == 234 || MSG_IsOverflowed( msg ) ) )", "( readLastByte ) = %i", v11) )
        __debugbreak();
    }
  }
  return Changes;
}

