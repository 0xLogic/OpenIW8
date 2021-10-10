/*
==============
ScriptableWriteChangeQueue::GetAvailableBuffer
==============
*/

unsigned int __fastcall ScriptableWriteChangeQueue::GetAvailableBuffer(ScriptableWriteChangeQueue *this)
{
  return ?GetAvailableBuffer@ScriptableWriteChangeQueue@@QEBAIXZ(this);
}

/*
==============
ScriptableWriteChangeQueue::SaveChangeMessage
==============
*/

void __fastcall ScriptableWriteChangeQueue::SaveChangeMessage(ScriptableWriteChangeQueue *this, const msg_t *msg)
{
  ?SaveChangeMessage@ScriptableWriteChangeQueue@@QEAAXPEBUmsg_t@@@Z(this, msg);
}

/*
==============
ScriptableMsg_WriteSnapshotNoData
==============
*/

void __fastcall ScriptableMsg_WriteSnapshotNoData(const SnapshotInfo *snapInfo, msg_t *msg)
{
  ?ScriptableMsg_WriteSnapshotNoData@@YAXPEBUSnapshotInfo@@PEAUmsg_t@@@Z(snapInfo, msg);
}

/*
==============
ScriptableMsgWrite_GetChangeStartIndex
==============
*/

unsigned __int64 __fastcall ScriptableMsgWrite_GetChangeStartIndex(const unsigned int clientNum)
{
  return ?ScriptableMsgWrite_GetChangeStartIndex@@YA_KI@Z(clientNum);
}

/*
==============
ScriptableMsgWrite_GetChangeBitsArraySize
==============
*/

unsigned int __fastcall ScriptableMsgWrite_GetChangeBitsArraySize()
{
  return ?ScriptableMsgWrite_GetChangeBitsArraySize@@YAIXZ();
}

/*
==============
ScriptableMsgWrite_GetMessageBufferSizeEstimate
==============
*/

unsigned int __fastcall ScriptableMsgWrite_GetMessageBufferSizeEstimate(const unsigned int clientCount)
{
  return ?ScriptableMsgWrite_GetMessageBufferSizeEstimate@@YAII@Z(clientCount);
}

/*
==============
ScriptableMsgWrite_InitCounts
==============
*/

void __fastcall ScriptableMsgWrite_InitCounts(const unsigned int clientCount, const ScriptableReplicatedLimits *limits)
{
  ?ScriptableMsgWrite_InitCounts@@YAXIAEBUScriptableReplicatedLimits@@@Z(clientCount, limits);
}

/*
==============
ScriptableMsg_WriteArchiveDelta
==============
*/

void __fastcall ScriptableMsg_WriteArchiveDelta(const SnapshotInfo *snapInfo, msg_t *msg, ScriptableChangePartBits *changedPartBits, const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *fromInstances, const unsigned int fromInstanceCount, const ScriptableReplicatedInstance *toInstances, const unsigned int toInstanceCount, const ScriptablePartData *fromParts, const unsigned int fromPartCount, const ScriptablePartData *toParts, const unsigned int toPartCount)
{
  ?ScriptableMsg_WriteArchiveDelta@@YAXPEBUSnapshotInfo@@PEAUmsg_t@@AEAUScriptableChangePartBits@@AEBUScriptableReplicatedLimits@@PEBUScriptableReplicatedInstance@@I4IPEIBUScriptablePartData@@I5I@Z(snapInfo, msg, changedPartBits, limits, fromInstances, fromInstanceCount, toInstances, toInstanceCount, fromParts, fromPartCount, toParts, toPartCount);
}

/*
==============
ScriptableMsg_WriteArchiveNoDelta
==============
*/

void __fastcall ScriptableMsg_WriteArchiveNoDelta(const SnapshotInfo *snapInfo, msg_t *msg, const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *toInstances, const unsigned int toInstanceCount, const ScriptablePartData *toParts, const unsigned int toPartCount)
{
  ?ScriptableMsg_WriteArchiveNoDelta@@YAXPEBUSnapshotInfo@@PEAUmsg_t@@AEBUScriptableReplicatedLimits@@PEBUScriptableReplicatedInstance@@IPEIBUScriptablePartData@@I@Z(snapInfo, msg, limits, toInstances, toInstanceCount, toParts, toPartCount);
}

/*
==============
ScriptableMsgWrite_UpdateClientBuffersMyChanges
==============
*/

void __fastcall ScriptableMsgWrite_UpdateClientBuffersMyChanges(const ScriptableReplicatedInstance *instances, const unsigned int instanceCount, const ScriptablePartWorldState *partWorldState, const ScriptableReplicatedLimits *limits)
{
  ?ScriptableMsgWrite_UpdateClientBuffersMyChanges@@YAXPEBUScriptableReplicatedInstance@@IAEBUScriptablePartWorldState@@AEBUScriptableReplicatedLimits@@@Z(instances, instanceCount, partWorldState, limits);
}

/*
==============
ScriptableMsgWrite_AcknowledgeIndex
==============
*/

void __fastcall ScriptableMsgWrite_AcknowledgeIndex(const unsigned int clientNum, const unsigned __int64 ackChangeIndex)
{
  ?ScriptableMsgWrite_AcknowledgeIndex@@YAXI_K@Z(clientNum, ackChangeIndex);
}

/*
==============
ScriptableMsgWrite_FreeMessageBuffers
==============
*/

void ScriptableMsgWrite_FreeMessageBuffers(void)
{
  ?ScriptableMsgWrite_FreeMessageBuffers@@YAXXZ();
}

/*
==============
ScriptableMsgWrite_GetChangeWriteIndex
==============
*/

unsigned __int64 __fastcall ScriptableMsgWrite_GetChangeWriteIndex(const unsigned int clientNum)
{
  return ?ScriptableMsgWrite_GetChangeWriteIndex@@YA_KI@Z(clientNum);
}

/*
==============
ScriptableMsgWrite_ShutdownCounts
==============
*/

void ScriptableMsgWrite_ShutdownCounts(void)
{
  ?ScriptableMsgWrite_ShutdownCounts@@YAXXZ();
}

/*
==============
ScriptableMsgWrite_ResetClientBuffers
==============
*/

void __fastcall ScriptableMsgWrite_ResetClientBuffers(const unsigned int clientNum, const bool fullInit)
{
  ?ScriptableMsgWrite_ResetClientBuffers@@YAXI_N@Z(clientNum, fullInit);
}

/*
==============
ScriptableMsg_WriteSnapshot
==============
*/

void __fastcall ScriptableMsg_WriteSnapshot(const SnapshotInfo *snapInfo, msg_t *msg, const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *toInstances, const unsigned int toInstanceCount, const ScriptablePartData *toParts, const unsigned int toPartCount, const unsigned __int64 oldChangeSeqIndex)
{
  ?ScriptableMsg_WriteSnapshot@@YAXPEBUSnapshotInfo@@PEAUmsg_t@@AEBUScriptableReplicatedLimits@@PEBUScriptableReplicatedInstance@@IPEIBUScriptablePartData@@I_K@Z(snapInfo, msg, limits, toInstances, toInstanceCount, toParts, toPartCount, oldChangeSeqIndex);
}

/*
==============
ScriptableMsgWrite_InitMessageBuffers
==============
*/

void __fastcall ScriptableMsgWrite_InitMessageBuffers(HunkUser *hunkUser)
{
  ?ScriptableMsgWrite_InitMessageBuffers@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
ScriptableMsgWrite_ClearChangeBuffer
==============
*/

void __fastcall ScriptableMsgWrite_ClearChangeBuffer(ScriptableChangePartBits *changedPartBits)
{
  ?ScriptableMsgWrite_ClearChangeBuffer@@YAXAEAUScriptableChangePartBits@@@Z(changedPartBits);
}

/*
==============
ScriptableWriteChangeQueue::GetAvailableBuffer
==============
*/
__int64 ScriptableWriteChangeQueue::GetAvailableBuffer(ScriptableWriteChangeQueue *this)
{
  unsigned __int64 m_ackIndex; 
  unsigned int v4; 
  CircularEntryBuffer<500,1024,unsigned __int64,1> *buffer; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 

  if ( !this->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 677, ASSERT_TYPE_ASSERT, "( buffer )", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  m_ackIndex = this->m_ackIndex;
  if ( this->m_writeIndex == m_ackIndex )
    return 1024i64;
  v4 = truncate_cast<unsigned int,unsigned __int64>(m_ackIndex % 0x1F4);
  buffer = this->buffer;
  v6 = v4;
  if ( v4 >= 0x1F4 )
  {
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v8, 500) )
      __debugbreak();
  }
  if ( !buffer->m_entries[v6].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 83, ASSERT_TYPE_ASSERT, "(m_entries[entryIndex].size > 0)", "%s\n\tRequesting buffer information about an invalid command", "m_entries[entryIndex].size > 0") )
    __debugbreak();
  if ( CircularEntryBuffer<500,1024,unsigned __int64,1>::IsDataAvailable(buffer, v6) )
  {
    v7 = buffer->m_bufferNextIndex - buffer->m_entries[v6].offset;
    if ( v7 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 103, ASSERT_TYPE_ASSERT, "( usedBuffer ) <= ( static_cast<uint>( sizeof( m_buffer ) ) )", "%s <= %s\n\t%i, %i", "usedBuffer", "static_cast<uint>( sizeof( m_buffer ) )", v7, 1024) )
      __debugbreak();
    return 1024 - v7;
  }
  else
  {
    Com_PrintError(15, "ScriptableWriteChangeQueue::GetAvailableBuffer: Failed to get available buffer for %zu\n", this->m_ackIndex);
    return 0i64;
  }
}

/*
==============
ScriptableWriteChangeQueue::SaveChangeMessage
==============
*/
void ScriptableWriteChangeQueue::SaveChangeMessage(ScriptableWriteChangeQueue *this, const msg_t *msg)
{
  unsigned int v4; 
  CircularEntryBuffer<500,1024,unsigned __int64,1> *buffer; 
  unsigned __int8 *data; 
  size_t cursize; 
  __int64 v8; 
  unsigned __int8 TYPE_NOT_SPECIFIED; 
  __int64 v10; 
  unsigned __int8 *v11; 
  __int64 v12; 
  unsigned __int8 *m_buffer; 
  size_t v14; 
  unsigned __int64 m_writeIndex; 
  unsigned __int64 m_ackIndex; 
  CircularEntryBuffer<500,1024,unsigned __int64,1> *v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  if ( !this->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 657, ASSERT_TYPE_ASSERT, "( buffer )", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  v4 = truncate_cast<unsigned int,unsigned __int64>(this->m_writeIndex % 0x1F4);
  buffer = this->buffer;
  data = msg->data;
  cursize = (unsigned int)msg->cursize;
  v8 = v4;
  TYPE_NOT_SPECIFIED = this->buffer->TYPE_NOT_SPECIFIED;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 122, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !(_DWORD)cursize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 123, ASSERT_TYPE_ASSERT, "(dataSize > 0)", (const char *)&queryFormat, "dataSize > 0") )
    __debugbreak();
  if ( (unsigned int)cursize > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 124, ASSERT_TYPE_ASSERT, "(dataSize <= sizeof( m_buffer ))", (const char *)&queryFormat, "dataSize <= sizeof( m_buffer )") )
    __debugbreak();
  if ( (unsigned int)v8 >= 0x1F4 )
  {
    LODWORD(v20) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 125, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v20, 500) )
      __debugbreak();
  }
  v10 = buffer->m_bufferNextIndex & 0x3FF;
  v11 = data;
  v12 = (unsigned int)(1024 - v10);
  m_buffer = &buffer->m_buffer[v10];
  if ( (unsigned int)v12 >= (unsigned int)cursize )
  {
    v14 = cursize;
  }
  else
  {
    memcpy_0(m_buffer, data, (unsigned int)v12);
    v11 = &data[v12];
    v14 = (unsigned int)(cursize - v12);
    m_buffer = buffer->m_buffer;
  }
  memcpy_0(m_buffer, v11, v14);
  buffer->m_entries[v8].size = truncate_cast<unsigned short,unsigned int>(cursize);
  buffer->m_entries[v8].offset = buffer->m_bufferNextIndex;
  buffer->m_entries[v8].type = TYPE_NOT_SPECIFIED;
  buffer->m_bufferNextIndex += cursize;
  m_writeIndex = this->m_writeIndex;
  m_ackIndex = this->m_ackIndex;
  if ( m_writeIndex <= m_ackIndex )
  {
    this->m_writeIndex = m_writeIndex + 1;
  }
  else
  {
    v17 = this->buffer;
    v18 = truncate_cast<unsigned int,unsigned __int64>(m_ackIndex % 0x1F4);
    v19 = v18;
    if ( v18 >= 0x1F4 )
    {
      LODWORD(v21) = 500;
      LODWORD(v20) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    if ( (v17->m_bufferNextIndex - v17->m_entries[v19].offset > 0x400 || !v17->m_entries[v19].size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 666, ASSERT_TYPE_ASSERT, "( buffer->IsDataAvailable( buffer->GetIndexForSequence( m_ackIndex ) ) )", (const char *)&queryFormat, "buffer->IsDataAvailable( buffer->GetIndexForSequence( m_ackIndex ) )") )
      __debugbreak();
    ++this->m_writeIndex;
  }
}

/*
==============
ScriptableMsgWrite_AcknowledgeIndex
==============
*/
void ScriptableMsgWrite_AcknowledgeIndex(const unsigned int clientNum, const unsigned __int64 ackChangeIndex)
{
  ScriptableWriteChangeQueue *v4; 
  ScriptableWriteChangeQueue *v5; 

  v4 = ScriptableMsg_GetChangeQueueForClient(clientNum);
  v5 = v4;
  if ( ackChangeIndex == -1i64 )
  {
    Com_PrintError(29, "Scriptable: Invalid AcknowledgeIndex for client=%u. Ack= %zu\n", clientNum, 0xFFFFFFFFFFFFFFFFui64);
  }
  else if ( v4->m_ackIndex < ackChangeIndex )
  {
    if ( ScriptableMsg_ShouldPrintDebugInfoForClient(clientNum) )
      Com_Printf(6, "[%i] Ack Sequence %zu\n", clientNum, ackChangeIndex);
    v5->m_ackIndex = ackChangeIndex;
  }
}

/*
==============
ScriptableMsgWrite_ClearChangeBuffer
==============
*/
void ScriptableMsgWrite_ClearChangeBuffer(ScriptableChangePartBits *changedPartBits)
{
  if ( !changedPartBits->partBitsArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 301, ASSERT_TYPE_ASSERT, "( changedPartBits.partBitsArray )", (const char *)&queryFormat, "changedPartBits.partBitsArray") )
    __debugbreak();
  memset_0(changedPartBits->partBitsArray, 0, 4i64 * s_scriptableMsgWrite.changeBitsetArraySize);
}

/*
==============
ScriptableMsgWrite_FreeMessageBuffers
==============
*/
void ScriptableMsgWrite_FreeMessageBuffers(void)
{
  memset_0(&s_scriptableMsgWrite, 0, 0x640ui64);
  memset_0(s_scriptableMsgWrite.clientChangeQueue, 0, 0x2580ui64);
}

/*
==============
ScriptableMsgWrite_GetChangeBitsArraySize
==============
*/
__int64 ScriptableMsgWrite_GetChangeBitsArraySize()
{
  return s_scriptableMsgWrite.changeBitsetArraySize;
}

/*
==============
ScriptableMsgWrite_GetChangeStartIndex
==============
*/
unsigned __int64 ScriptableMsgWrite_GetChangeStartIndex(const unsigned int clientNum)
{
  return ScriptableMsg_GetChangeQueueForClient(clientNum)->m_startIndex;
}

/*
==============
ScriptableMsgWrite_GetChangeWriteIndex
==============
*/
unsigned __int64 ScriptableMsgWrite_GetChangeWriteIndex(const unsigned int clientNum)
{
  return ScriptableMsg_GetChangeQueueForClient(clientNum)->m_writeIndex;
}

/*
==============
ScriptableMsgWrite_GetMessageBufferSizeEstimate
==============
*/
unsigned int ScriptableMsgWrite_GetMessageBufferSizeEstimate(const unsigned int clientCount)
{
  unsigned __int64 v1; 
  unsigned int v3; 

  v1 = 0i64;
  if ( s_scriptableMsgWrite.clientCount != clientCount )
  {
    v3 = s_scriptableMsgWrite.clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 206, ASSERT_TYPE_ASSERT, "( s_scriptableMsgWrite.clientCount ) == ( clientCount )", "s_scriptableMsgWrite.clientCount == clientCount\n\t%i, %i", v3, clientCount) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
    v1 = s_scriptableMsgWrite.clientCount * (32i64 * s_scriptableMsgWrite.baselineInstanceCount + ((4i64 * s_scriptableMsgWrite.changeBitsetArraySize + 15) & 0xFFFFFFFFFFFFFFF0ui64) + ((s_scriptableMsgWrite.baselinePartCount + 15i64) & 0xFFFFFFFFFFFFFFF0ui64) + 5040);
  return truncate_cast<unsigned int,unsigned __int64>(v1);
}

/*
==============
ScriptableMsgWrite_InitCounts
==============
*/
void ScriptableMsgWrite_InitCounts(const unsigned int clientCount, const ScriptableReplicatedLimits *limits)
{
  s_scriptableMsgWrite.clientCount = clientCount;
  *(_QWORD *)&s_scriptableMsgWrite.baselinePartCount = *(_QWORD *)&limits->partTotalLimit;
  s_scriptableMsgWrite.changeBitsetArraySize = (limits->partTotalLimit + 31) >> 5;
}

/*
==============
ScriptableMsgWrite_InitMessageBuffers
==============
*/
void ScriptableMsgWrite_InitMessageBuffers(HunkUser *hunkUser)
{
  unsigned __int64 baselinePartCount; 
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 i; 
  __int64 v6; 

  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 162, ASSERT_TYPE_ASSERT, "( hunkUser )", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  if ( s_scriptableMsgWrite.clientBaseline[0].partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 164, ASSERT_TYPE_ASSERT, "( s_scriptableMsgWrite.clientBaseline[0].partData == nullptr )", (const char *)&queryFormat, "s_scriptableMsgWrite.clientBaseline[0].partData == nullptr") )
    __debugbreak();
  if ( s_scriptableMsgWrite.clientBaseline[0].instanceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 165, ASSERT_TYPE_ASSERT, "( s_scriptableMsgWrite.clientBaseline[0].instanceData == nullptr )", (const char *)&queryFormat, "s_scriptableMsgWrite.clientBaseline[0].instanceData == nullptr") )
    __debugbreak();
  if ( s_scriptableMsgWrite.clientChangePartBits[0].partBitsArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 166, ASSERT_TYPE_ASSERT, "( s_scriptableMsgWrite.clientChangePartBits[0].partBitsArray == nullptr )", (const char *)&queryFormat, "s_scriptableMsgWrite.clientChangePartBits[0].partBitsArray == nullptr") )
    __debugbreak();
  if ( s_scriptableMsgWrite.clientChangeQueue[0].buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 167, ASSERT_TYPE_ASSERT, "( s_scriptableMsgWrite.clientChangeQueue[0].buffer == nullptr )", (const char *)&queryFormat, "s_scriptableMsgWrite.clientChangeQueue[0].buffer == nullptr") )
    __debugbreak();
  memset_0(&s_scriptableMsgWrite, 0, 0x640ui64);
  memset_0(s_scriptableMsgWrite.clientChangeQueue, 0, 0x2580ui64);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
  {
    baselinePartCount = s_scriptableMsgWrite.baselinePartCount;
    v3 = 0i64;
    v4 = 4i64 * s_scriptableMsgWrite.changeBitsetArraySize;
    for ( i = 32i64 * s_scriptableMsgWrite.baselineInstanceCount; (unsigned int)v3 < s_scriptableMsgWrite.clientCount; s_scriptableMsgWrite.clientChangeQueue[v6].buffer = (CircularEntryBuffer<500,1024,unsigned __int64,1> *)Mem_HunkUser_AllocInternal(hunkUser, 0x13A8ui64, 0x10ui64, "ScriptableMsgWrite_InitMessageBuffers") )
    {
      s_scriptableMsgWrite.clientBaseline[(unsigned int)v3].partData = (ScriptablePartData *)Mem_HunkUser_AllocInternal(hunkUser, baselinePartCount, 0x10ui64, "ScriptableMsgWrite_InitMessageBuffers");
      s_scriptableMsgWrite.clientBaseline[(unsigned int)v3].instanceData = (ScriptableReplicatedInstance *)Mem_HunkUser_AllocInternal(hunkUser, i, 0x10ui64, "ScriptableMsgWrite_InitMessageBuffers");
      s_scriptableMsgWrite.clientChangePartBits[v3].partBitsArray = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, v4, 0x10ui64, "ScriptableMsgWrite_InitMessageBuffers");
      v6 = (unsigned int)v3;
      v3 = (unsigned int)(v3 + 1);
    }
  }
}

/*
==============
ScriptableMsgWrite_ResetClientBuffers
==============
*/
void ScriptableMsgWrite_ResetClientBuffers(const unsigned int clientNum, const bool fullInit)
{
  ScriptableWriteBaseline *ClientBaseline; 
  ScriptableChangePartBits *ClientChangedBitsBuffer; 
  ScriptableWriteChangeQueue *v6; 
  CircularEntryBuffer<500,1024,unsigned __int64,1> *buffer; 
  unsigned __int8 *m_buffer; 
  unsigned __int64 m_writeIndex; 

  ClientBaseline = ScriptableMsg_GetClientBaseline(clientNum);
  memset_0(ClientBaseline->partData, 0, s_scriptableMsgWrite.baselinePartCount);
  ScriptableCommon_ClearReplicatedInstances(ClientBaseline->instanceData, s_scriptableMsgWrite.baselineInstanceCount);
  ClientChangedBitsBuffer = ScriptableMsg_GetClientChangedBitsBuffer(clientNum);
  memset_0(ClientChangedBitsBuffer->partBitsArray, 0, 4i64 * s_scriptableMsgWrite.changeBitsetArraySize);
  v6 = ScriptableMsg_GetChangeQueueForClient(clientNum);
  if ( !v6->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 259, ASSERT_TYPE_ASSERT, "( changeQueue.buffer )", (const char *)&queryFormat, "changeQueue.buffer") )
    __debugbreak();
  buffer = v6->buffer;
  m_buffer = v6->buffer->m_buffer;
  v6->buffer->m_bufferNextIndex = 0;
  DebugWipe(m_buffer, 0x400ui64);
  DebugWipe(buffer->m_entries, 0xFA0ui64);
  if ( fullInit )
  {
    v6->m_writeIndex = 0i64;
    v6->m_startIndex = 0i64;
    v6->m_ackIndex = 0i64;
  }
  else
  {
    m_writeIndex = v6->m_writeIndex;
    v6->m_startIndex = m_writeIndex;
    v6->m_ackIndex = m_writeIndex;
  }
}

/*
==============
ScriptableMsgWrite_ShutdownCounts
==============
*/
void ScriptableMsgWrite_ShutdownCounts(void)
{
  *(_QWORD *)&s_scriptableMsgWrite.baselineInstanceCount = 0i64;
  s_scriptableMsgWrite.baselinePartCount = 0;
  s_scriptableMsgWrite.changeBitsetArraySize = 0;
}

/*
==============
ScriptableMsgWrite_UpdateClientBuffersMyChanges
==============
*/
void ScriptableMsgWrite_UpdateClientBuffersMyChanges(const ScriptableReplicatedInstance *instances, const unsigned int instanceCount, const ScriptablePartWorldState *partWorldState, const ScriptableReplicatedLimits *limits)
{
  __int64 v5; 
  unsigned int v8; 
  size_t v9; 
  ScriptableWriteBaseline *ClientBaseline; 
  ScriptableChangePartBits *ClientChangedBitsBuffer; 
  ScriptableWriteChangeQueue *v12; 
  CircularEntryBuffer<500,1024,unsigned __int64,1> *buffer; 
  unsigned __int8 *m_buffer; 
  unsigned __int64 m_writeIndex; 
  ScriptableWriteBaseline *v16; 
  __int64 v17; 
  __int64 v19; 
  unsigned int baselineInstanceCount; 

  v5 = instanceCount;
  if ( instanceCount != s_scriptableMsgWrite.baselineInstanceCount )
  {
    baselineInstanceCount = s_scriptableMsgWrite.baselineInstanceCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 277, ASSERT_TYPE_ASSERT, "( instanceCount ) == ( s_scriptableMsgWrite.baselineInstanceCount )", "instanceCount == s_scriptableMsgWrite.baselineInstanceCount\n\t%i, %i", instanceCount, baselineInstanceCount) )
      __debugbreak();
  }
  if ( limits->partTotalLimit != s_scriptableMsgWrite.baselinePartCount )
  {
    LODWORD(v19) = s_scriptableMsgWrite.baselinePartCount;
    LODWORD(v17) = limits->partTotalLimit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 278, ASSERT_TYPE_ASSERT, "( limits.partTotalLimit ) == ( s_scriptableMsgWrite.baselinePartCount )", "limits.partTotalLimit == s_scriptableMsgWrite.baselinePartCount\n\t%i, %i", v17, v19) )
      __debugbreak();
  }
  v8 = 0;
  if ( s_scriptableMsgWrite.clientCount )
  {
    v9 = 32 * v5;
    do
    {
      ClientBaseline = ScriptableMsg_GetClientBaseline(v8);
      memset_0(ClientBaseline->partData, 0, s_scriptableMsgWrite.baselinePartCount);
      ScriptableCommon_ClearReplicatedInstances(ClientBaseline->instanceData, s_scriptableMsgWrite.baselineInstanceCount);
      ClientChangedBitsBuffer = ScriptableMsg_GetClientChangedBitsBuffer(v8);
      memset_0(ClientChangedBitsBuffer->partBitsArray, 0, 4i64 * s_scriptableMsgWrite.changeBitsetArraySize);
      v12 = ScriptableMsg_GetChangeQueueForClient(v8);
      if ( !v12->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 259, ASSERT_TYPE_ASSERT, "( changeQueue.buffer )", (const char *)&queryFormat, "changeQueue.buffer") )
        __debugbreak();
      buffer = v12->buffer;
      m_buffer = v12->buffer->m_buffer;
      v12->buffer->m_bufferNextIndex = 0;
      DebugWipe(m_buffer, 0x400ui64);
      DebugWipe(buffer->m_entries, 0xFA0ui64);
      m_writeIndex = v12->m_writeIndex;
      v12->m_startIndex = m_writeIndex;
      v12->m_ackIndex = m_writeIndex;
      v16 = ScriptableMsg_GetClientBaseline(v8);
      memcpy_0(v16->instanceData, instances, v9);
      ScriptableCommon_CopyScriptableParts(partWorldState, v16->partData, limits);
      ++v8;
    }
    while ( v8 < s_scriptableMsgWrite.clientCount );
  }
}

/*
==============
ScriptableMsg_CheckEntityConstantData
==============
*/
void ScriptableMsg_CheckEntityConstantData(const ScriptableReplicatedInstance *instance)
{
  signed __int64 m_data; 
  __int128 v4; 
  double v5; 
  __int16 m_pitch; 
  __int16 m_yaw; 
  __int16 m_roll; 
  unsigned __int16 defIndex; 
  unsigned __int16 extraPayload; 
  __int64 v12; 

  m_data = instance->origin.m_data;
  if ( m_data )
  {
    v4 = 0i64;
    *(float *)&v4 = (float)m_data;
    _XMM0 = v4;
    if ( m_data < 0 )
    {
      *(float *)&v4 = *(float *)&v4 + 1.8446744e19;
      _XMM0 = v4;
    }
    v5 = *(float *)&_XMM0;
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 544, ASSERT_TYPE_ASSERT, "( instance.origin.m_data ) == ( 0u )", "instance.origin.m_data == 0u\n\t%g, %g", v5, *(double *)&_XMM0) )
      __debugbreak();
  }
  m_pitch = instance->angles.m_pitch;
  if ( m_pitch )
  {
    LODWORD(v12) = m_pitch;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 545, ASSERT_TYPE_ASSERT, "( instance.angles.m_pitch ) == ( 0u )", "instance.angles.m_pitch == 0u\n\t%i, %i", v12, 0i64) )
      __debugbreak();
  }
  m_yaw = instance->angles.m_yaw;
  if ( m_yaw )
  {
    LODWORD(v12) = m_yaw;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 546, ASSERT_TYPE_ASSERT, "( instance.angles.m_yaw ) == ( 0u )", "instance.angles.m_yaw == 0u\n\t%i, %i", v12, 0i64) )
      __debugbreak();
  }
  m_roll = instance->angles.m_roll;
  if ( m_roll )
  {
    LODWORD(v12) = m_roll;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 547, ASSERT_TYPE_ASSERT, "( instance.angles.m_roll ) == ( 0u )", "instance.angles.m_roll == 0u\n\t%i, %i", v12, 0i64) )
      __debugbreak();
  }
  if ( instance->parent.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 548, ASSERT_TYPE_ASSERT, "( !instance.parent.HasEntity() )", (const char *)&queryFormat, "!instance.parent.HasEntity()") )
    __debugbreak();
  defIndex = instance->defIndex;
  if ( defIndex )
  {
    LODWORD(v12) = defIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 549, ASSERT_TYPE_ASSERT, "( instance.defIndex ) == ( SCRIPTABLE_ENTITY_DEF_INDEX )", "instance.defIndex == SCRIPTABLE_ENTITY_DEF_INDEX\n\t%i, %i", v12, 0i64) )
      __debugbreak();
  }
  extraPayload = instance->extraPayload;
  if ( extraPayload )
  {
    LODWORD(v12) = extraPayload;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 550, ASSERT_TYPE_ASSERT, "( instance.extraPayload ) == ( SCRIPTABLE_STANDALONE_DEFAULT_EXTRA_PAYLOAD )", "instance.extraPayload == SCRIPTABLE_STANDALONE_DEFAULT_EXTRA_PAYLOAD\n\t%i, %i", v12, 0i64) )
      __debugbreak();
  }
}

/*
==============
ScriptableMsg_EmitChangeQueue
==============
*/
void ScriptableMsg_EmitChangeQueue(const SnapshotInfo *snapInfo, msg_t *msg, const ScriptableWriteChangeQueue *changeQueue, const unsigned __int64 oldChangeSeqIndex)
{
  unsigned __int64 m_writeIndex; 
  unsigned int v9; 
  __int64 v10; 
  unsigned __int64 m_startIndex; 
  unsigned __int64 m_ackIndex; 
  unsigned __int64 v13; 
  unsigned __int64 i; 
  unsigned int v15; 
  __int64 v16; 
  CircularEntryBuffer<500,1024,unsigned __int64,1> *buffer; 
  char *v18; 
  unsigned __int16 v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned __int8 *m_buffer; 
  char *v24; 
  size_t v25; 
  unsigned __int64 v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  int UsedBitCount; 
  char data[1032]; 

  if ( !changeQueue->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1200, ASSERT_TYPE_ASSERT, "( changeQueue.buffer != nullptr )", (const char *)&queryFormat, "changeQueue.buffer != nullptr") )
    __debugbreak();
  m_writeIndex = changeQueue->m_writeIndex;
  if ( oldChangeSeqIndex > m_writeIndex )
  {
    LODWORD(v28) = oldChangeSeqIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1201, ASSERT_TYPE_ASSERT, "( oldChangeSeqIndex ) <= ( changeQueue.m_writeIndex )", "oldChangeSeqIndex <= changeQueue.m_writeIndex\n\t%i, %i", v28, m_writeIndex) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF0000FF, "ScriptableMsg_EmitChangeQueue");
  UsedBitCount = MSG_GetUsedBitCount(msg);
  v9 = truncate_cast<unsigned int,unsigned __int64>(changeQueue->m_writeIndex - changeQueue->m_ackIndex);
  v10 = v9;
  if ( v9 > 0x1F4 )
  {
    LODWORD(v29) = 500;
    LODWORD(v28) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1210, ASSERT_TYPE_ASSERT, "( changeCount ) <= ( SCRIPTABLE_MAX_REPLICATED_CHANGES )", "changeCount <= SCRIPTABLE_MAX_REPLICATED_CHANGES\n\t%i, %i", v28, v29) )
      __debugbreak();
  }
  if ( (unsigned int)v10 >= 0x200 )
  {
    LODWORD(v29) = 512;
    LODWORD(v28) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1211, ASSERT_TYPE_ASSERT, "( changeCount ) < ( ( 1 << SCRIPTABLE_REPLICATED_CHANGE_BITS ) )", "changeCount < ( 1 << SCRIPTABLE_REPLICATED_CHANGE_BITS )\n\t%i, %i", v28, v29) )
      __debugbreak();
  }
  MSG_WriteBits(msg, v10, 9u);
  if ( (_DWORD)v10 )
  {
    MSG_WriteByte(msg, 198i64);
    if ( ScriptableMsg_ShouldPrintDebugInfoForClient(snapInfo->clientNum) )
      Com_Printf(6, "[%i] [%i] Emit Change %zu (Ack %zu First %zu Old %zu).\n", (unsigned int)snapInfo->clientNum, (unsigned int)snapInfo->serverTime, changeQueue->m_writeIndex, changeQueue->m_ackIndex, changeQueue->m_startIndex, oldChangeSeqIndex);
    m_startIndex = changeQueue->m_startIndex;
    m_ackIndex = changeQueue->m_ackIndex;
    MSG_WriteBool(msg, m_startIndex >= m_ackIndex);
    if ( m_startIndex >= m_ackIndex )
    {
      if ( ScriptableMsg_ShouldPrintDebugInfoForClient(snapInfo->clientNum) )
        Com_Printf(6, "[%i] [%i] Emit New Sequence %zu (Ack %zu First %zu Old %zu).\n", (unsigned int)snapInfo->clientNum, (unsigned int)snapInfo->serverTime, changeQueue->m_startIndex, changeQueue->m_ackIndex, changeQueue->m_startIndex, oldChangeSeqIndex);
      MSG_WriteInt64(msg, changeQueue->m_startIndex);
    }
    v13 = changeQueue->m_writeIndex;
    if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 406, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
      __debugbreak();
    MSG_WriteInt64(msg, oldChangeSeqIndex);
    if ( v13 - oldChangeSeqIndex <= 0xFF )
    {
      MSG_WriteBit0(msg);
      MSG_WriteByte(msg, (unsigned __int8)(v13 - oldChangeSeqIndex));
    }
    else
    {
      MSG_WriteBit1(msg);
    }
    MSG_WriteInt64(msg, v13);
    MSG_WriteAlign(msg);
    for ( i = changeQueue->m_ackIndex; i != changeQueue->m_writeIndex; ++i )
    {
      v15 = truncate_cast<unsigned int,unsigned __int64>(i % 0x1F4);
      v16 = v15;
      buffer = changeQueue->buffer;
      if ( v15 >= 0x1F4 )
      {
        LODWORD(v29) = 500;
        LODWORD(v28) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      v18 = (char *)buffer + 8 * v16;
      v19 = *((_WORD *)v18 + 4);
      if ( v19 > 0x400u )
      {
        LODWORD(v31) = v19;
        LODWORD(v30) = 1024;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 246, ASSERT_TYPE_ASSERT, "( BUF_CAPACITY ) >= ( m_entries[entryIndex].size )", "%s >= %s\n\t%i, %i", "BUF_CAPACITY", "m_entries[entryIndex].size", v30, v31) )
          __debugbreak();
      }
      if ( CircularEntryBuffer<500,1024,unsigned __int64,1>::IsDataAvailable(buffer, v16) )
      {
        v20 = *((unsigned __int16 *)v18 + 4);
        v21 = *((_DWORD *)v18 + 1) & 0x3FF;
        v22 = (unsigned int)(1024 - v21);
        m_buffer = &buffer->m_buffer[v21];
        v24 = data;
        if ( (unsigned int)v22 >= v20 )
        {
          v25 = *((unsigned __int16 *)v18 + 4);
        }
        else
        {
          memcpy_0(data, m_buffer, (unsigned int)v22);
          v25 = v20 - (unsigned int)v22;
          m_buffer = buffer->m_buffer;
          v24 = &data[v22];
        }
        memcpy_0(v24, m_buffer, v25);
        if ( v20 > 0x400 )
        {
          LODWORD(v29) = 1024;
          LODWORD(v28) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1248, ASSERT_TYPE_ASSERT, "( dataSize ) <= ( sizeof( dataBuf ) )", "dataSize <= sizeof( dataBuf )\n\t%i, %i", v28, v29) )
            __debugbreak();
        }
        MSG_WriteShort(msg, v20);
        MSG_WriteData(msg, data, v20);
        SV_BandwidthProfile_AddScriptableChangeToSnapshot(snapInfo, 8 * v20);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1256, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Change Buffer Overflow") )
      {
        __debugbreak();
      }
      v26 = i - changeQueue->m_ackIndex;
      if ( v26 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned __int16)v26, "unsigned", i - changeQueue->m_ackIndex) )
        __debugbreak();
      MSG_WriteShort(msg, (unsigned __int16)v26);
    }
  }
  else
  {
    MSG_WriteByte(msg, 199i64);
  }
  v27 = MSG_GetUsedBitCount(msg);
  SV_BandwidthProfile_AddScriptableHeaderToSnapshot(snapInfo, v27 - UsedBitCount);
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableMsg_GetChangeQueueForClient
==============
*/
ScriptableWriteBaseline *ScriptableMsg_GetChangeQueueForClient(const unsigned int clientIndex)
{
  __int64 v1; 
  ScriptableWriteBaseline *v2; 
  int v5; 

  v1 = clientIndex;
  if ( clientIndex >= 0xC8 )
  {
    v5 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 226, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_scriptableMsgWrite.clientChangeQueue ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_scriptableMsgWrite.clientChangeQueue )\n\t%i not in [0, %i)", clientIndex, v5) )
      __debugbreak();
  }
  v2 = &s_scriptableMsgWrite.clientBaseline[2 * v1 - 400];
  if ( !v2->partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 227, ASSERT_TYPE_ASSERT, "( s_scriptableMsgWrite.clientChangeQueue[clientIndex].buffer != nullptr )", (const char *)&queryFormat, "s_scriptableMsgWrite.clientChangeQueue[clientIndex].buffer != nullptr") )
    __debugbreak();
  return v2;
}

/*
==============
ScriptableMsg_GetClientBaseline
==============
*/
ScriptableWriteBaseline *ScriptableMsg_GetClientBaseline(const unsigned int clientIndex)
{
  __int64 v1; 
  ScriptableWriteBaseline *v2; 
  int v5; 

  v1 = clientIndex;
  if ( clientIndex >= 0xC8 )
  {
    v5 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 242, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_scriptableMsgWrite.clientBaseline ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_scriptableMsgWrite.clientBaseline )\n\t%i not in [0, %i)", clientIndex, v5) )
      __debugbreak();
  }
  v2 = &s_scriptableMsgWrite.clientBaseline[v1];
  if ( !v2->partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 243, ASSERT_TYPE_ASSERT, "( s_scriptableMsgWrite.clientBaseline[clientIndex].partData != nullptr )", (const char *)&queryFormat, "s_scriptableMsgWrite.clientBaseline[clientIndex].partData != nullptr") )
    __debugbreak();
  return v2;
}

/*
==============
ScriptableMsg_GetClientChangedBitsBuffer
==============
*/
ScriptableChangePartBits *ScriptableMsg_GetClientChangedBitsBuffer(const unsigned int clientIndex)
{
  __int64 v1; 
  bool v2; 
  ScriptableChangePartBits *v3; 
  int v6; 

  v1 = clientIndex;
  if ( clientIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 234, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_scriptableMsgWrite.clientChangePartBits ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_scriptableMsgWrite.clientChangePartBits )\n\t%i not in [0, %i)", clientIndex, v6) )
      __debugbreak();
  }
  v2 = s_scriptableMsgWrite.clientChangePartBits[v1].partBitsArray == NULL;
  v3 = &s_scriptableMsgWrite.clientChangePartBits[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 235, ASSERT_TYPE_ASSERT, "( s_scriptableMsgWrite.clientChangePartBits[clientIndex].partBitsArray != nullptr )", (const char *)&queryFormat, "s_scriptableMsgWrite.clientChangePartBits[clientIndex].partBitsArray != nullptr") )
    __debugbreak();
  return v3;
}

/*
==============
ScriptableMsg_InitWriteInfo
==============
*/
void ScriptableMsg_InitWriteInfo(ScriptableMsgWriteInfo *writeInfo, const SnapshotInfo *snapInfo, const ScriptableReplicatedLimits *limits, msg_t *msg)
{
  int MinBitCountForNum; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1280, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  writeInfo->snapInfo = snapInfo;
  writeInfo->msg = msg;
  MinBitCountForNum = GetMinBitCountForNum(limits->partWorldLimits[0] - 1);
  v9 = 1;
  if ( MinBitCountForNum > 1 )
    v9 = MinBitCountForNum;
  writeInfo->fixedPartBitCount = v9;
  v10 = v9 >> 1;
  writeInfo->fixedPartDeltaBitCount = v10;
  writeInfo->fixedPartDdeltaThreshold = 1 << v10;
  v11 = GetMinBitCountForNum(limits->instanceLimit - 1);
  writeInfo->lastPartIndex = 0x7FFFFFFF;
  v12 = 1;
  writeInfo->lastInstanceIndex = 0x7FFFFFFF;
  if ( v11 > 1 )
    v12 = v11;
  *(_WORD *)&writeInfo->outAnyChanges = 0;
  writeInfo->instanceBitCount = v12;
  v13 = v12 >> 1;
  writeInfo->instanceDeltaThreshold = 1 << v13;
  writeInfo->instanceDeltaBitCount = v13;
  writeInfo->printDebug = !snapInfo->archived && ScriptableMsg_ShouldPrintDebugInfoForClient(snapInfo->clientNum);
}

/*
==============
ScriptableMsg_IsWriteLimitReached
==============
*/
bool ScriptableMsg_IsWriteLimitReached(msg_t *msg, const unsigned int writtenChanges)
{
  const dvar_t *v2; 
  unsigned int unsignedInt; 
  bool result; 

  v2 = DCONST_DVARINT_scriptable_debug_message_throttle;
  if ( !DCONST_DVARINT_scriptable_debug_message_throttle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_message_throttle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  unsignedInt = v2->current.unsignedInt;
  if ( unsignedInt && writtenChanges >= unsignedInt )
    return 1;
  if ( msg->overflowed )
    return 1;
  result = MSG_WouldWriteOverflow(msg, 0x40u);
  if ( result )
    return 1;
  return result;
}

/*
==============
ScriptableMsg_ShouldPrintDebugInfoForClient
==============
*/
bool ScriptableMsg_ShouldPrintDebugInfoForClient(const unsigned int clientNum)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARINT_scriptable_debug_message_client;
  if ( !DCONST_DVARINT_scriptable_debug_message_client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_message_client") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return clientNum == v1->current.integer;
}

/*
==============
ScriptableMsg_UpdateInstancePartsBaseline
==============
*/
void ScriptableMsg_UpdateInstancePartsBaseline(ScriptableWriteBaseline *baseline, const ScriptableReplicatedInstance *instance, const unsigned int reserveOffset, const ScriptablePartData *partData, const unsigned int partDataCount)
{
  unsigned int baselinePartCount; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !baseline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 779, ASSERT_TYPE_ASSERT, "( baseline )", (const char *)&queryFormat, "baseline") )
    __debugbreak();
  baselinePartCount = s_scriptableMsgWrite.baselinePartCount;
  if ( s_scriptableMsgWrite.baselinePartCount != partDataCount )
  {
    LODWORD(v12) = s_scriptableMsgWrite.baselinePartCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 780, ASSERT_TYPE_ASSERT, "( s_scriptableMsgWrite.baselinePartCount ) == ( partDataCount )", "s_scriptableMsgWrite.baselinePartCount == partDataCount\n\t%i, %i", v12, partDataCount) )
      __debugbreak();
    baselinePartCount = s_scriptableMsgWrite.baselinePartCount;
  }
  v10 = 0;
  if ( instance->partCount )
  {
    while ( 1 )
    {
      v11 = instance->partIndex + v10 + reserveOffset;
      if ( (unsigned int)v11 >= baselinePartCount )
      {
        LODWORD(v13) = baselinePartCount;
        LODWORD(v12) = instance->partIndex + v10 + reserveOffset;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 785, ASSERT_TYPE_ASSERT, "(unsigned)( worldPartIndex ) < (unsigned)( s_scriptableMsgWrite.baselinePartCount )", "worldPartIndex doesn't index s_scriptableMsgWrite.baselinePartCount\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      ++v10;
      baseline->partData[v11] = partData[v11];
      if ( v10 >= instance->partCount )
        break;
      baselinePartCount = s_scriptableMsgWrite.baselinePartCount;
    }
  }
}

/*
==============
ScriptableMsg_WriteAddedInstance
==============
*/
void ScriptableMsg_WriteAddedInstance(ScriptableMsgWriteInfo *writeInfo, const ScriptableReplicatedInstance *instance, const unsigned int reservedPartOffset, const ScriptablePartData *partWorldData, const unsigned int partWorldDataCount)
{
  int MinBitCountForNum; 
  unsigned int v10; 
  int v11; 
  const ScriptablePartData *v12; 
  __int64 v13; 
  unsigned __int8 data; 
  msg_t *msg; 
  int v16; 
  __int64 v17; 
  const ScriptablePartData *i; 

  if ( instance->instanceIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 714, ASSERT_TYPE_ASSERT, "( instance.instanceIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX )", (const char *)&queryFormat, "instance.instanceIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
    __debugbreak();
  MSG_WriteBit1(writeInfo->msg);
  MSG_WriteByte(writeInfo->msg, 19i64);
  ScriptableMsg_WriteInstanceHeader(writeInfo, instance->instanceIndex);
  ScriptableMsg_WriteNewInstanceFields(writeInfo, instance);
  MinBitCountForNum = GetMinBitCountForNum(instance->partCount - 1);
  v10 = 1;
  if ( MinBitCountForNum > 1 )
    v10 = MinBitCountForNum;
  v11 = -1;
  v12 = ScriptableMsg_Write_GetPartDataForInstance(instance, reservedPartOffset, partWorldData, partWorldDataCount);
  v13 = 0i64;
  for ( i = v12; (unsigned int)v13 < instance->partCount; v12 = i )
  {
    data = v12[v13].data;
    if ( data )
    {
      MSG_WriteBit1(writeInfo->msg);
      msg = writeInfo->msg;
      if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 346, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
        __debugbreak();
      if ( v11 != -1 && v11 >= 1 << v10 )
      {
        LODWORD(v17) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 347, ASSERT_TYPE_ASSERT, "( ( (inOutLastIndex == -1) || (inOutLastIndex < ( 1 << fullBits) ) ) )", "%s\n\t( inOutLastIndex ) = %i", "( (inOutLastIndex == -1) || (inOutLastIndex < ( 1 << fullBits) ) )", v17) )
          __debugbreak();
      }
      v16 = v13 - v11;
      v11 = v13;
      if ( v16 == 1 )
      {
        MSG_WriteBit1(msg);
      }
      else
      {
        MSG_WriteBit0(msg);
        MSG_WriteBits(msg, (unsigned int)v13, v10);
      }
      MSG_WriteByte(writeInfo->msg, data);
    }
    v13 = (unsigned int)(v13 + 1);
  }
  MSG_WriteBit0(writeInfo->msg);
}

/*
==============
ScriptableMsg_WriteArchiveDelta
==============
*/
void ScriptableMsg_WriteArchiveDelta(const SnapshotInfo *snapInfo, msg_t *msg, ScriptableChangePartBits *changedPartBits, const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *fromInstances, const unsigned int fromInstanceCount, const ScriptableReplicatedInstance *toInstances, const unsigned int toInstanceCount, const ScriptablePartData *fromParts, const unsigned int fromPartCount, const ScriptablePartData *toParts, const unsigned int toPartCount)
{
  unsigned int v16; 
  ScriptableMsgWriteInfo writeInfo; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1423, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1424, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( !fromInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1425, ASSERT_TYPE_ASSERT, "( fromInstances != nullptr )", (const char *)&queryFormat, "fromInstances != nullptr") )
    __debugbreak();
  if ( !fromParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1426, ASSERT_TYPE_ASSERT, "( fromParts != nullptr )", (const char *)&queryFormat, "fromParts != nullptr") )
    __debugbreak();
  if ( !toInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1427, ASSERT_TYPE_ASSERT, "( toInstances != nullptr )", (const char *)&queryFormat, "toInstances != nullptr") )
    __debugbreak();
  if ( !toParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1428, ASSERT_TYPE_ASSERT, "( toParts != nullptr )", (const char *)&queryFormat, "toParts != nullptr") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1429, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableMsg_Write");
  MSG_WriteByte(msg, 233i64);
  ScriptableMsg_InitWriteInfo(&writeInfo, snapInfo, limits, msg);
  v16 = limits->partWorldLimits[0];
  ScriptableMsg_WriteInstancesDelta(&writeInfo, NULL, fromInstances, fromInstanceCount, toInstances, toInstanceCount, fromParts, fromPartCount, toParts, toPartCount, limits->partWorldLimits[0]);
  ScriptableCommon_UpdatePartsChangeBits(changedPartBits, s_scriptableMsgWrite.changeBitsetArraySize, fromParts, toParts, v16);
  ScriptableMsg_WriteChangedParts(&writeInfo, changedPartBits, NULL, toParts, toPartCount, 0x13u);
  MSG_WriteByte(msg, 234i64);
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableMsg_WriteArchiveNoDelta
==============
*/
void ScriptableMsg_WriteArchiveNoDelta(const SnapshotInfo *snapInfo, msg_t *msg, const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *toInstances, const unsigned int toInstanceCount, const ScriptablePartData *toParts, const unsigned int toPartCount)
{
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1464, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1465, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1466, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableMsg_WriteWorldSnapshotNoDelta");
  MSG_WriteByte(msg, 223i64);
  MSG_WriteAlign(msg);
  MSG_WriteData_Compress(msg, toInstances, 32 * toInstanceCount);
  MSG_WriteData_Compress(msg, toParts, toPartCount);
  MSG_WriteByte(msg, 224i64);
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableMsg_WriteBaselineChecksum
==============
*/
void ScriptableMsg_WriteBaselineChecksum(msg_t *msg, const unsigned int clientNum)
{
  ScriptableWriteBaseline *ClientBaseline; 
  __int64 baselinePartCount; 
  ScriptablePartData *partData; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 data; 
  int v10; 
  __int64 v11; 
  ScriptableReplicatedInstance *i; 
  __int64 instanceIndex_low; 

  MSG_WriteByte(msg, 201i64);
  ClientBaseline = ScriptableMsg_GetClientBaseline(clientNum);
  if ( !ClientBaseline->partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1161, ASSERT_TYPE_ASSERT, "( baseline.partData )", (const char *)&queryFormat, "baseline.partData") )
    __debugbreak();
  if ( !ClientBaseline->instanceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1162, ASSERT_TYPE_ASSERT, "( baseline.instanceData )", (const char *)&queryFormat, "baseline.instanceData") )
    __debugbreak();
  baselinePartCount = s_scriptableMsgWrite.baselinePartCount;
  partData = ClientBaseline->partData;
  v7 = -1;
  v8 = -1;
  if ( s_scriptableMsgWrite.baselinePartCount )
  {
    do
    {
      data = (partData++)->data;
      v8 = (v8 >> 8) ^ g_crc32Table[data ^ (unsigned __int8)v8];
      --baselinePartCount;
    }
    while ( baselinePartCount );
  }
  v10 = ~v8;
  v11 = 32i64 * s_scriptableMsgWrite.baselineInstanceCount;
  for ( i = ClientBaseline->instanceData; v11; --v11 )
  {
    instanceIndex_low = LOBYTE(i->instanceIndex);
    i = (ScriptableReplicatedInstance *)((char *)i + 1);
    v7 = (v7 >> 8) ^ g_crc32Table[instanceIndex_low ^ (unsigned __int8)v7];
  }
  MSG_WriteLong(msg, v10);
  MSG_WriteLong(msg, ~v7);
  MSG_WriteByte(msg, 202i64);
}

/*
==============
ScriptableMsg_WriteChangedInstance
==============
*/
void ScriptableMsg_WriteChangedInstance(ScriptableMsgWriteInfo *writeInfo, const bool fieldsChanged, const ScriptableReplicatedInstance *prevInstance, const ScriptableReplicatedInstance *nextInstance, const ScriptablePartData *fromInstPartData, const ScriptablePartData *toInstPartData)
{
  const ScriptablePartData *v10; 
  unsigned __int8 partCount; 
  unsigned __int8 v12; 
  unsigned __int8 v13; 
  msg_t *msg; 
  unsigned __int16 m_data; 
  int MinBitCountForNum; 
  unsigned int v17; 
  __int64 v18; 
  int i; 
  unsigned __int8 data; 
  msg_t *v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 

  if ( !fromInstPartData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 796, ASSERT_TYPE_ASSERT, "( fromInstPartData )", (const char *)&queryFormat, "fromInstPartData") )
    __debugbreak();
  v10 = toInstPartData;
  if ( !toInstPartData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 797, ASSERT_TYPE_ASSERT, "( toInstPartData )", (const char *)&queryFormat, "toInstPartData") )
    __debugbreak();
  if ( prevInstance->instanceIndex != nextInstance->instanceIndex )
  {
    LODWORD(v23) = prevInstance->instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 798, ASSERT_TYPE_ASSERT, "( prevInstance.instanceIndex ) == ( nextInstance.instanceIndex )", "prevInstance.instanceIndex == nextInstance.instanceIndex\n\t%i, %i", v23, nextInstance->instanceIndex) )
      __debugbreak();
  }
  partCount = prevInstance->partCount;
  v12 = nextInstance->partCount;
  if ( partCount != v12 )
  {
    LODWORD(v24) = v12;
    LODWORD(v23) = partCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 799, ASSERT_TYPE_ASSERT, "( prevInstance.partCount ) == ( nextInstance.partCount )", "prevInstance.partCount == nextInstance.partCount\n\t%i, %i", v23, v24) )
      __debugbreak();
  }
  if ( prevInstance->partIndex != nextInstance->partIndex )
  {
    LODWORD(v24) = nextInstance->partIndex;
    LODWORD(v23) = prevInstance->partIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 800, ASSERT_TYPE_ASSERT, "( prevInstance.partIndex ) == ( nextInstance.partIndex )", "prevInstance.partIndex == nextInstance.partIndex\n\t%i, %i", v23, v24) )
      __debugbreak();
  }
  if ( nextInstance->instanceIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 801, ASSERT_TYPE_ASSERT, "( nextInstance.instanceIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX )", (const char *)&queryFormat, "nextInstance.instanceIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
    __debugbreak();
  MSG_WriteBit1(writeInfo->msg);
  MSG_WriteByte(writeInfo->msg, 15i64);
  ScriptableMsg_WriteInstanceHeader(writeInfo, nextInstance->instanceIndex);
  MSG_WriteBool(writeInfo->msg, fieldsChanged);
  if ( fieldsChanged )
  {
    v13 = nextInstance->replicatedType[0];
    if ( v13 >= 2u )
    {
      LODWORD(v24) = 2;
      LODWORD(v23) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 592, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( toInstance.replicatedType ) ) < (unsigned)( static_cast<int>( ScriptableReplicatedType::COUNT ) )", "static_cast<int>( toInstance.replicatedType ) doesn't index static_cast<int>( ScriptableReplicatedType::COUNT )\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    if ( !nextInstance->replicatedType[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 593, ASSERT_TYPE_ASSERT, "( toInstance.replicatedType != ScriptableReplicatedType::ENTITY )", (const char *)&queryFormat, "toInstance.replicatedType != ScriptableReplicatedType::ENTITY") )
      __debugbreak();
    msg = writeInfo->msg;
    ScriptableMsg_WritePayload(msg, prevInstance->payload, nextInstance->payload, prevInstance->extraPayload, nextInstance->extraPayload);
    m_data = nextInstance->parent.m_data;
    if ( prevInstance->parent.m_data == m_data )
    {
      MSG_WriteBit0(msg);
    }
    else
    {
      MSG_WriteBit1(msg);
      MSG_WriteShort(msg, m_data);
    }
    if ( prevInstance->origin.m_data == nextInstance->origin.m_data )
    {
      MSG_WriteBit0(msg);
    }
    else
    {
      MSG_WriteBit1(msg);
      ScriptableMsg_WriteDeltaOrigin(writeInfo, msg, &prevInstance->origin, &nextInstance->origin);
    }
    if ( prevInstance->angles.m_pitch == nextInstance->angles.m_pitch && prevInstance->angles.m_yaw == nextInstance->angles.m_yaw && prevInstance->angles.m_roll == nextInstance->angles.m_roll )
    {
      MSG_WriteBit0(msg);
    }
    else
    {
      MSG_WriteBit1(msg);
      MSG_WriteDeltaAngleShort(msg, prevInstance->angles.m_pitch, nextInstance->angles.m_pitch);
      MSG_WriteDeltaAngleShort(msg, prevInstance->angles.m_yaw, nextInstance->angles.m_yaw);
      MSG_WriteDeltaAngleShort(msg, prevInstance->angles.m_roll, nextInstance->angles.m_roll);
    }
    ScriptableMsg_WriteInstanceChecksum(writeInfo, nextInstance);
    MSG_WriteByte(msg, 223i64);
  }
  MinBitCountForNum = GetMinBitCountForNum(nextInstance->partCount - 1);
  v17 = 1;
  if ( MinBitCountForNum > 1 )
    v17 = MinBitCountForNum;
  v18 = 0i64;
  for ( i = -1; (unsigned int)v18 < nextInstance->partCount; v18 = (unsigned int)(v18 + 1) )
  {
    data = v10[v18].data;
    if ( fromInstPartData[v18].data != data )
    {
      MSG_WriteBit1(writeInfo->msg);
      v21 = writeInfo->msg;
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 346, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
        __debugbreak();
      if ( i != -1 && i >= 1 << v17 )
      {
        LODWORD(v24) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 347, ASSERT_TYPE_ASSERT, "( ( (inOutLastIndex == -1) || (inOutLastIndex < ( 1 << fullBits) ) ) )", "%s\n\t( inOutLastIndex ) = %i", "( (inOutLastIndex == -1) || (inOutLastIndex < ( 1 << fullBits) ) )", v24) )
          __debugbreak();
      }
      v22 = v18 - i;
      i = v18;
      if ( v22 == 1 )
      {
        MSG_WriteBit1(v21);
      }
      else
      {
        MSG_WriteBit0(v21);
        MSG_WriteBits(v21, (unsigned int)v18, v17);
      }
      MSG_WriteByte(writeInfo->msg, data);
      v10 = toInstPartData;
    }
  }
  MSG_WriteBit0(writeInfo->msg);
}

/*
==============
ScriptableMsg_WriteChangedParts
==============
*/
void ScriptableMsg_WriteChangedParts(ScriptableMsgWriteInfo *writeInfo, ScriptableChangePartBits *changedPartBits, ScriptableWriteBaseline *baseline, const ScriptablePartData *toParts, const unsigned int toPartCount, const unsigned int partChangeBits)
{
  unsigned int v9; 
  unsigned int v10; 
  char v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  int *v15; 
  int v17; 
  __int64 v19; 
  unsigned __int8 data; 
  char *fmt; 
  int *inOutLastIndex; 
  __int64 v23; 
  unsigned int v24; 
  int v25; 
  unsigned int bitOffset; 
  __int64 v27; 
  MSG_Mark mark; 
  MSG_Mark result; 
  unsigned int v30; 
  char toPartCounta; 

  if ( !changedPartBits->partBitsArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1073, ASSERT_TYPE_ASSERT, "( changedPartBits.partBitsArray )", (const char *)&queryFormat, "changedPartBits.partBitsArray") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFC0CB, "ScriptableMsg_WriteChangedParts");
  v9 = (toPartCount + 31) >> 5;
  v30 = v9;
  if ( v9 > s_scriptableMsgWrite.changeBitsetArraySize )
  {
    LODWORD(inOutLastIndex) = (toPartCount + 31) >> 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1078, ASSERT_TYPE_ASSERT, "( partBlockCount ) <= ( s_scriptableMsgWrite.changeBitsetArraySize )", "partBlockCount <= s_scriptableMsgWrite.changeBitsetArraySize\n\t%i, %i", inOutLastIndex, s_scriptableMsgWrite.changeBitsetArraySize) )
      __debugbreak();
  }
  v10 = 0;
  v11 = 0;
  toPartCounta = 0;
  bitOffset = MSG_GetUsedBitCount(writeInfo->msg);
  MSG_WriteBits(writeInfo->msg, 0i64, partChangeBits);
  writeInfo->lastPartIndex = -1;
  v12 = 0;
  v24 = 0;
  if ( v9 )
  {
    v13 = 0i64;
    v27 = 0i64;
    v14 = v9;
    do
    {
      if ( v11 )
        break;
      v15 = (int *)((char *)changedPartBits->partBitsArray + v13);
      _EAX = *v15;
      if ( *v15 )
      {
        v17 = 32 * v12;
        v25 = v17;
        while ( 1 )
        {
          __asm { tzcnt   edi, eax }
          if ( _EDI >= 0x20 )
          {
            LODWORD(v23) = _EDI;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1099, ASSERT_TYPE_ASSERT, "( ( indexLow < 32 ) )", "%s\n\t( indexLow ) = %i", "( indexLow < 32 )", v23) )
              __debugbreak();
          }
          if ( ((1 << _EDI) & *v15) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1103, ASSERT_TYPE_ASSERT, "( bits & bit )", (const char *)&queryFormat, "bits & bit") )
            __debugbreak();
          *v15 &= ~(1 << _EDI);
          v19 = v17 + _EDI;
          if ( (unsigned int)v19 >= toPartCount )
          {
            LODWORD(v23) = toPartCount;
            LODWORD(inOutLastIndex) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1107, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( toPartCount )", "partWorldIndex doesn't index toPartCount\n\t%i not in [0, %i)", inOutLastIndex, v23) )
              __debugbreak();
          }
          data = toParts[v19].data;
          if ( writeInfo->printDebug )
          {
            LODWORD(v23) = data >> 7;
            LODWORD(inOutLastIndex) = data & 0x7F;
            LODWORD(fmt) = v19;
            Com_Printf(6, "[%i] [%i] Queuing part %i (value %i event %i).\n", (unsigned int)writeInfo->snapInfo->clientNum, (unsigned int)writeInfo->snapInfo->serverTime, fmt, inOutLastIndex, v23);
          }
          mark = *MSG_MarkWrite(&result, writeInfo->msg);
          ScriptableMsg_WriteDeltaIndex(writeInfo->msg, v19, writeInfo->fixedPartBitCount, writeInfo->fixedPartDeltaBitCount, writeInfo->fixedPartDdeltaThreshold, &writeInfo->lastPartIndex);
          MSG_WriteByte(writeInfo->msg, data);
          if ( ScriptableMsg_IsWriteLimitReached(writeInfo->msg, v10) )
            break;
          if ( baseline )
          {
            if ( (unsigned int)v19 >= s_scriptableMsgWrite.baselinePartCount )
            {
              LODWORD(v23) = s_scriptableMsgWrite.baselinePartCount;
              LODWORD(inOutLastIndex) = v19;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1129, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( s_scriptableMsgWrite.baselinePartCount )", "partWorldIndex doesn't index s_scriptableMsgWrite.baselinePartCount\n\t%i not in [0, %i)", inOutLastIndex, v23) )
                __debugbreak();
            }
            baseline->partData[v19].data = data;
          }
          ++v10;
          _EAX = *v15;
          v17 = v25;
          if ( !*v15 )
          {
            v11 = toPartCounta;
            goto LABEL_32;
          }
        }
        MSG_RollbackWrite(writeInfo->msg, &mark);
        v11 = 1;
        toPartCounta = 1;
LABEL_32:
        v14 = v30;
      }
      ++v24;
      v13 = v27 + 4;
      v27 += 4i64;
      v12 = v24;
    }
    while ( v24 < v14 );
    if ( v10 )
    {
      if ( v10 >= 1 << partChangeBits )
      {
        LODWORD(v23) = 1 << partChangeBits;
        LODWORD(inOutLastIndex) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1139, ASSERT_TYPE_ASSERT, "( writtenChangeCount ) < ( ( 1u << partChangeBits ) )", "writtenChangeCount < ( 1u << partChangeBits )\n\t%i, %i", inOutLastIndex, v23) )
          __debugbreak();
      }
      MSG_WriteBitsAtOffset(writeInfo->msg, bitOffset, v10, partChangeBits);
      writeInfo->outAnyChanges = 1;
    }
    if ( v11 )
      writeInfo->outTruncated = 1;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableMsg_WriteDeltaIndex
==============
*/
void ScriptableMsg_WriteDeltaIndex(msg_t *msg, const unsigned int index, const unsigned int fullBits, const unsigned int deltaBits, const unsigned int deltaThreshold, int *inOutLastIndex)
{
  __int64 v6; 
  signed int v10; 
  __int64 v11; 
  unsigned int v12; 

  v6 = index;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 371, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( *inOutLastIndex != -1 && *inOutLastIndex >= 1 << fullBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 372, ASSERT_TYPE_ASSERT, "( ( (inOutLastIndex == -1) || (inOutLastIndex < ( 1 << fullBits )) ) )", "%s\n\t( inOutLastIndex ) = %i", "( (inOutLastIndex == -1) || (inOutLastIndex < ( 1 << fullBits )) )", *inOutLastIndex) )
    __debugbreak();
  v10 = v6 - *inOutLastIndex;
  *inOutLastIndex = v6;
  if ( v10 == 1 )
  {
    MSG_WriteBit1(msg);
  }
  else
  {
    MSG_WriteBit0(msg);
    if ( v10 < 0 || v10 >= deltaThreshold )
    {
      MSG_WriteBit0(msg);
      v11 = v6;
      v12 = fullBits;
    }
    else
    {
      MSG_WriteBit1(msg);
      v11 = v10;
      v12 = deltaBits;
    }
    MSG_WriteBits(msg, v11, v12);
  }
}

/*
==============
ScriptableMsg_WriteDeltaOrigin
==============
*/
void ScriptableMsg_WriteDeltaOrigin(ScriptableMsgWriteInfo *writeInfo, msg_t *msg, const ScriptableReplicatedOrigin *from, const ScriptableReplicatedOrigin *to)
{
  MSG_WriteSignedExpGolomb(msg, ((int)(*(_DWORD *)&to->0 << 10) >> 10) - ((int)((unsigned int)from->m_data << 10) >> 10), 4);
  MSG_WriteSignedExpGolomb(msg, ((int)(to->m_data >> 12) >> 10) - ((int)(from->m_data >> 12) >> 10), 4);
  MSG_WriteSignedExpGolomb(msg, ((__int64)to->m_data >> 44) - ((__int64)from->m_data >> 44), 2);
}

/*
==============
ScriptableMsg_WriteInstanceChecksum
==============
*/
void ScriptableMsg_WriteInstanceChecksum(ScriptableMsgWriteInfo *writeInfo, const ScriptableReplicatedInstance *instance)
{
  __int64 v4; 
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
  unsigned int v34; 
  unsigned __int16 v35; 

  v4 = BYTE2(instance->instanceIndex);
  v5 = ((g_crc32Table[(unsigned __int8)~LOBYTE(instance->instanceIndex)] ^ 0xFFFFFF) >> 8) ^ g_crc32Table[BYTE1(instance->instanceIndex) ^ (unsigned __int64)(unsigned __int8)~LOBYTE(g_crc32Table[(unsigned __int8)~LOBYTE(instance->instanceIndex)])];
  v6 = (v5 >> 8) ^ g_crc32Table[v4 ^ (unsigned __int8)v5];
  v7 = (v6 >> 8) ^ g_crc32Table[HIBYTE(instance->instanceIndex) ^ (unsigned __int64)(unsigned __int8)v6];
  v8 = (v7 >> 8) ^ g_crc32Table[LOBYTE(instance->partIndex) ^ (unsigned __int64)(unsigned __int8)v7];
  v9 = (v8 >> 8) ^ g_crc32Table[BYTE1(instance->partIndex) ^ (unsigned __int64)(unsigned __int8)v8];
  v10 = (v9 >> 8) ^ g_crc32Table[BYTE2(instance->partIndex) ^ (unsigned __int64)(unsigned __int8)v9];
  v11 = (v10 >> 8) ^ g_crc32Table[HIBYTE(instance->partIndex) ^ (unsigned __int64)(unsigned __int8)v10];
  v12 = (v11 >> 8) ^ g_crc32Table[instance->partCount ^ (unsigned __int64)(unsigned __int8)v11];
  v13 = (v12 >> 8) ^ g_crc32Table[(unsigned __int8)instance->replicatedType[0] ^ (unsigned __int64)(unsigned __int8)v12];
  v14 = (v13 >> 8) ^ g_crc32Table[LOBYTE(instance->defIndex) ^ (unsigned __int64)(unsigned __int8)v13];
  v15 = (v14 >> 8) ^ g_crc32Table[HIBYTE(instance->defIndex) ^ (unsigned __int64)(unsigned __int8)v14];
  v16 = (v15 >> 8) ^ g_crc32Table[LOBYTE(instance->extraPayload) ^ (unsigned __int64)(unsigned __int8)v15];
  v17 = (v16 >> 8) ^ g_crc32Table[HIBYTE(instance->extraPayload) ^ (unsigned __int64)(unsigned __int8)v16];
  v18 = (v17 >> 8) ^ g_crc32Table[LOBYTE(instance->payload) ^ (unsigned __int64)(unsigned __int8)v17];
  v19 = (v18 >> 8) ^ g_crc32Table[HIBYTE(instance->payload) ^ (unsigned __int64)(unsigned __int8)v18];
  v20 = (v19 >> 8) ^ g_crc32Table[LOBYTE(instance->angles.m_pitch) ^ (unsigned __int64)(unsigned __int8)v19];
  v21 = (v20 >> 8) ^ g_crc32Table[HIBYTE(instance->angles.m_pitch) ^ (unsigned __int64)(unsigned __int8)v20];
  v22 = (v21 >> 8) ^ g_crc32Table[LOBYTE(instance->angles.m_yaw) ^ (unsigned __int64)(unsigned __int8)v21];
  v23 = (v22 >> 8) ^ g_crc32Table[HIBYTE(instance->angles.m_yaw) ^ (unsigned __int64)(unsigned __int8)v22];
  v24 = (v23 >> 8) ^ g_crc32Table[LOBYTE(instance->angles.m_roll) ^ (unsigned __int64)(unsigned __int8)v23];
  v25 = (v24 >> 8) ^ g_crc32Table[HIBYTE(instance->angles.m_roll) ^ (unsigned __int64)(unsigned __int8)v24];
  v26 = (v25 >> 8) ^ g_crc32Table[LOBYTE(instance->parent.m_data) ^ (unsigned __int64)(unsigned __int8)v25];
  v27 = (v26 >> 8) ^ g_crc32Table[HIBYTE(instance->parent.m_data) ^ (unsigned __int64)(unsigned __int8)v26];
  v28 = (v27 >> 8) ^ g_crc32Table[LOBYTE(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v27];
  v29 = (v28 >> 8) ^ g_crc32Table[*((unsigned __int8 *)&instance->origin.0 + 1) ^ (unsigned __int64)(unsigned __int8)v28];
  v30 = (v29 >> 8) ^ g_crc32Table[BYTE2(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v29];
  v31 = (v30 >> 8) ^ g_crc32Table[BYTE3(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v30];
  v32 = (v31 >> 8) ^ g_crc32Table[BYTE4(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v31];
  v33 = (v32 >> 8) ^ g_crc32Table[BYTE5(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v32];
  v34 = (v33 >> 8) ^ g_crc32Table[BYTE6(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v33];
  v35 = truncate_cast<unsigned short,unsigned int>((unsigned __int16)~((v34 >> 8) ^ LOWORD(g_crc32Table[HIBYTE(instance->origin.m_data) ^ (unsigned __int64)(unsigned __int8)v34])));
  MSG_WriteShort(writeInfo->msg, v35);
}

/*
==============
ScriptableMsg_WriteInstanceHeader
==============
*/
void ScriptableMsg_WriteInstanceHeader(ScriptableMsgWriteInfo *writeInfo, const unsigned int instanceIndex)
{
  if ( instanceIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 631, ASSERT_TYPE_ASSERT, "( instanceIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX )", (const char *)&queryFormat, "instanceIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
    __debugbreak();
  ScriptableMsg_WriteDeltaIndex(writeInfo->msg, instanceIndex, writeInfo->instanceBitCount, writeInfo->instanceDeltaBitCount, writeInfo->instanceDeltaThreshold, &writeInfo->lastInstanceIndex);
}

/*
==============
ScriptableMsg_WriteInstancePartIndex
==============
*/
void ScriptableMsg_WriteInstancePartIndex(msg_t *msg, const unsigned int partIndex)
{
  __int64 v2; 
  int v5; 

  v2 = partIndex;
  if ( partIndex >= 0x4000 )
  {
    v5 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 444, ASSERT_TYPE_ASSERT, "(unsigned)( partIndex ) < (unsigned)( SCRIPTABLE_RESERVED_PARTS_STATIC_MAX )", "partIndex doesn't index SCRIPTABLE_RESERVED_PARTS_STATIC_MAX\n\t%i not in [0, %i)", partIndex, v5) )
      __debugbreak();
  }
  MSG_WriteBits(msg, v2, 0xEu);
}

/*
==============
ScriptableMsg_WriteInstancesDelta
==============
*/
void ScriptableMsg_WriteInstancesDelta(ScriptableMsgWriteInfo *writeInfo, ScriptableWriteBaseline *baseline, const ScriptableReplicatedInstance *fromInstances, const unsigned int fromInstanceCount, const ScriptableReplicatedInstance *toInstances, const unsigned int toInstanceCount, const ScriptablePartData *fromWorldParts, const unsigned int fromWorldPartCount, const ScriptablePartData *toWorldParts, const unsigned int toWorldPartCount, const unsigned int reservedPartOffset)
{
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  const ScriptableReplicatedInstance *v14; 
  unsigned int v16; 
  int *p_lastInstanceIndex; 
  unsigned __int64 v18; 
  unsigned int instanceIndex; 
  const ScriptableReplicatedInstance *v20; 
  const ScriptableReplicatedInstance *v21; 
  unsigned int v22; 
  char v23; 
  unsigned int partIndex; 
  unsigned int v25; 
  unsigned __int16 defIndex; 
  unsigned __int16 v27; 
  unsigned __int8 partCount; 
  unsigned __int8 v29; 
  const ScriptablePartData *v30; 
  const ScriptablePartData *v31; 
  bool HaveInstanceFieldsChanged; 
  MSG_Mark *v33; 
  bool v34; 
  const char *v35; 
  unsigned __int16 v36; 
  unsigned __int16 v37; 
  unsigned int v38; 
  unsigned int v39; 
  int v40; 
  __int64 v41; 
  __int64 v42; 
  unsigned int v43; 
  ScriptableReplicatedInstance *v44; 
  unsigned int v45; 
  unsigned int v46; 
  __int64 v47; 
  __int64 v48; 
  const ScriptableReplicatedInstance *v49; 
  int v50; 
  char v51; 
  char *fmt; 
  ScriptablePartData *toInstPartData; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  char v57; 
  unsigned int writtenChanges; 
  int v60; 
  MSG_Mark mark; 
  ScriptablePartData *v64; 
  unsigned __int64 v65; 
  MSG_Mark result; 
  __int16 v67[2048]; 
  unsigned int v68; 
  __int16 v69[2048]; 
  unsigned int v70; 

  v11 = 0;
  v12 = 0;
  v13 = fromInstanceCount;
  v64 = (ScriptablePartData *)fromWorldParts;
  v14 = fromInstances;
  v16 = 0;
  v60 = 0;
  v68 = 0;
  v70 = 0;
  writtenChanges = 0;
  v57 = 0;
  if ( fromInstanceCount != toInstanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 875, ASSERT_TYPE_ASSERT, "( fromInstanceCount ) == ( toInstanceCount )", "fromInstanceCount == toInstanceCount\n\t%i, %i", fromInstanceCount, toInstanceCount) )
    __debugbreak();
  if ( v13 > 0xFFFF )
  {
    LODWORD(v54) = 0xFFFF;
    LODWORD(toInstPartData) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 876, ASSERT_TYPE_ASSERT, "( fromInstanceCount ) <= ( 0xffff )", "fromInstanceCount <= USHRT_MAX\n\t%i, %i", toInstPartData, v54) )
      __debugbreak();
  }
  writeInfo->lastInstanceIndex = -1;
  p_lastInstanceIndex = &writeInfo->lastInstanceIndex;
  if ( !v13 )
    goto LABEL_87;
  while ( 1 )
  {
    v18 = v11;
    instanceIndex = v14[v18].instanceIndex;
    v20 = &v14[v18];
    v21 = &toInstances[v18];
    v65 = v18 * 32;
    v22 = toInstances[v18].instanceIndex;
    if ( instanceIndex != v22 )
    {
      if ( instanceIndex == -1 )
      {
        if ( v22 != v11 )
        {
          LODWORD(v54) = v11;
          LODWORD(toInstPartData) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 891, ASSERT_TYPE_ASSERT, "( newInstance.instanceIndex ) == ( instanceIndex )", "newInstance.instanceIndex == instanceIndex\n\t%i, %i", toInstPartData, v54) )
            __debugbreak();
        }
        if ( v11 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v11, "unsigned", v11) )
          __debugbreak();
        if ( v12 >= 0x800 )
        {
          LODWORD(v54) = 2048;
          LODWORD(toInstPartData) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( m_count ) < (unsigned)( ARRAY_SIZE )", "m_count doesn't index ARRAY_SIZE\n\t%i not in [0, %i)", toInstPartData, v54) )
            __debugbreak();
        }
        v69[v12] = v11;
        v12 = ++v70;
      }
      else
      {
        if ( v22 != -1 )
        {
          LODWORD(v54) = -1;
          LODWORD(toInstPartData) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 896, ASSERT_TYPE_ASSERT, "( newInstance.instanceIndex ) == ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "newInstance.instanceIndex == SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", toInstPartData, v54) )
            __debugbreak();
        }
        if ( v20->instanceIndex != v11 )
        {
          LODWORD(v54) = v11;
          LODWORD(toInstPartData) = v20->instanceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 897, ASSERT_TYPE_ASSERT, "( oldInstance.instanceIndex ) == ( instanceIndex )", "oldInstance.instanceIndex == instanceIndex\n\t%i, %i", toInstPartData, v54) )
            __debugbreak();
        }
        if ( v11 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v11, "unsigned", v11) )
          __debugbreak();
        if ( v16 >= 0x800 )
        {
          LODWORD(v54) = 2048;
          LODWORD(toInstPartData) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( m_count ) < (unsigned)( ARRAY_SIZE )", "m_count doesn't index ARRAY_SIZE\n\t%i not in [0, %i)", toInstPartData, v54) )
            __debugbreak();
        }
        v67[v16] = v11;
        v16 = ++v68;
      }
      goto LABEL_73;
    }
    if ( instanceIndex != -1 )
      break;
    if ( v22 != -1 )
    {
      LODWORD(v54) = -1;
      LODWORD(toInstPartData) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 962, ASSERT_TYPE_ASSERT, "( newInstance.instanceIndex ) == ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "newInstance.instanceIndex == SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", toInstPartData, v54) )
        __debugbreak();
    }
LABEL_73:
    v13 = fromInstanceCount;
    if ( ++v11 >= fromInstanceCount )
      goto LABEL_86;
    v14 = fromInstances;
  }
  if ( v22 != v11 )
  {
    LODWORD(v54) = v11;
    LODWORD(toInstPartData) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 903, ASSERT_TYPE_ASSERT, "( newInstance.instanceIndex ) == ( instanceIndex )", "newInstance.instanceIndex == instanceIndex\n\t%i, %i", toInstPartData, v54) )
      __debugbreak();
  }
  if ( v20->instanceIndex != v11 )
  {
    LODWORD(v54) = v11;
    LODWORD(toInstPartData) = v20->instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 904, ASSERT_TYPE_ASSERT, "( oldInstance.instanceIndex ) == ( instanceIndex )", "oldInstance.instanceIndex == instanceIndex\n\t%i, %i", toInstPartData, v54) )
      __debugbreak();
  }
  if ( v20->instanceIndex != v21->instanceIndex )
  {
    LODWORD(v56) = v21->instanceIndex;
    LODWORD(v55) = v20->instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 151, ASSERT_TYPE_ASSERT, "( fromInstance.instanceIndex ) == ( toInstance.instanceIndex )", "%s == %s\n\t%i, %i", "fromInstance.instanceIndex", "toInstance.instanceIndex", v55, v56) )
      __debugbreak();
  }
  v23 = v20->replicatedType[0];
  if ( v23 != v21->replicatedType[0] )
    goto LABEL_75;
  if ( v20->partCount != v21->partCount )
    goto LABEL_75;
  partIndex = v20->partIndex;
  v25 = v21->partIndex;
  if ( partIndex != v25 )
    goto LABEL_75;
  defIndex = v20->defIndex;
  v27 = v21->defIndex;
  if ( v23 )
  {
    if ( defIndex == v27 )
      goto LABEL_53;
    goto LABEL_75;
  }
  if ( defIndex != v27 )
  {
    LODWORD(v56) = v27;
    LODWORD(v55) = defIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 171, ASSERT_TYPE_ASSERT, "( fromInstance.defIndex ) == ( toInstance.defIndex )", "%s == %s\n\t%i, %i", "fromInstance.defIndex", "toInstance.defIndex", v55, v56) )
      __debugbreak();
  }
  if ( v20->payload != v21->payload )
  {
LABEL_75:
    v36 = truncate_cast<unsigned short,unsigned int>(v11);
    if ( v16 >= 0x800 )
    {
      LODWORD(v54) = 2048;
      LODWORD(toInstPartData) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( m_count ) < (unsigned)( ARRAY_SIZE )", "m_count doesn't index ARRAY_SIZE\n\t%i not in [0, %i)", toInstPartData, v54) )
        __debugbreak();
    }
    v67[v16] = v36;
    v16 = ++v68;
    v37 = truncate_cast<unsigned short,unsigned int>(v11);
    if ( v12 >= 0x800 )
    {
      LODWORD(v54) = 2048;
      LODWORD(toInstPartData) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( m_count ) < (unsigned)( ARRAY_SIZE )", "m_count doesn't index ARRAY_SIZE\n\t%i not in [0, %i)", toInstPartData, v54) )
        __debugbreak();
    }
    v69[v12] = v37;
    v12 = ++v70;
    goto LABEL_73;
  }
  partIndex = v20->partIndex;
  v25 = v21->partIndex;
LABEL_53:
  if ( partIndex != v25 )
  {
    LODWORD(v54) = v25;
    LODWORD(toInstPartData) = partIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 918, ASSERT_TYPE_ASSERT, "( oldInstance.partIndex ) == ( newInstance.partIndex )", "oldInstance.partIndex == newInstance.partIndex\n\t%i, %i", toInstPartData, v54) )
      __debugbreak();
  }
  partCount = v20->partCount;
  v29 = v21->partCount;
  if ( partCount != v29 )
  {
    LODWORD(v54) = v29;
    LODWORD(toInstPartData) = partCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 919, ASSERT_TYPE_ASSERT, "( oldInstance.partCount ) == ( newInstance.partCount )", "oldInstance.partCount == newInstance.partCount\n\t%i, %i", toInstPartData, v54) )
      __debugbreak();
  }
  v30 = ScriptableMsg_Write_GetPartDataForInstance(v21, reservedPartOffset, toWorldParts, toWorldPartCount);
  v31 = ScriptableMsg_Write_GetPartDataForInstance(v20, reservedPartOffset, v64, fromWorldPartCount);
  HaveInstanceFieldsChanged = ScriptableCommon_HaveInstanceFieldsChanged(v20, v21);
  if ( !HaveInstanceFieldsChanged && !memcmp_0(v31, v30, v21->partCount) )
  {
LABEL_72:
    v12 = v70;
    v16 = v68;
    goto LABEL_73;
  }
  v33 = MSG_MarkWrite(&result, writeInfo->msg);
  v34 = !writeInfo->printDebug;
  mark = *v33;
  if ( !v34 )
  {
    v35 = "Parts";
    if ( HaveInstanceFieldsChanged )
      v35 = "Fields";
    LODWORD(fmt) = v11;
    Com_Printf(6, "[%i] [%i] Queuing Instance %i (%s).\n", (unsigned int)writeInfo->snapInfo->clientNum, (unsigned int)writeInfo->snapInfo->serverTime, fmt, v35);
  }
  ScriptableMsg_WriteChangedInstance(writeInfo, HaveInstanceFieldsChanged, v20, v21, v31, v30);
  if ( !ScriptableMsg_IsWriteLimitReached(writeInfo->msg, writtenChanges) )
  {
    if ( baseline )
    {
      if ( *(unsigned int *)((char *)&baseline->instanceData->instanceIndex + v65) != v11 )
      {
        LODWORD(v54) = v11;
        LODWORD(toInstPartData) = *(unsigned int *)((char *)&baseline->instanceData->instanceIndex + v65);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 949, ASSERT_TYPE_ASSERT, "( baseline->instanceData[instanceIndex].instanceIndex ) == ( instanceIndex )", "baseline->instanceData[instanceIndex].instanceIndex == instanceIndex\n\t%i, %i", toInstPartData, v54) )
          __debugbreak();
      }
      *(ScriptableReplicatedInstance *)((char *)baseline->instanceData + v65) = *v21;
      ScriptableMsg_UpdateInstancePartsBaseline(baseline, v21, reservedPartOffset, toWorldParts, toWorldPartCount);
    }
    ++writtenChanges;
    goto LABEL_72;
  }
  MSG_RollbackWrite(writeInfo->msg, &mark);
  v13 = fromInstanceCount;
  v57 = 1;
LABEL_86:
  p_lastInstanceIndex = &writeInfo->lastInstanceIndex;
LABEL_87:
  MSG_WriteBit0(writeInfo->msg);
  v38 = writtenChanges;
  if ( !v57 )
  {
    v39 = v68;
    v40 = 0;
    *p_lastInstanceIndex = -1;
    if ( v39 )
    {
      while ( 1 )
      {
        v41 = (unsigned __int16)v67[v40];
        if ( (unsigned int)v41 >= v13 )
        {
          LODWORD(v54) = v13;
          LODWORD(toInstPartData) = (unsigned __int16)v67[v40];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 978, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( fromInstanceCount )", "instanceIndex doesn't index fromInstanceCount\n\t%i not in [0, %i)", toInstPartData, v54) )
            __debugbreak();
        }
        if ( writeInfo->printDebug )
        {
          LODWORD(fmt) = v41;
          Com_Printf(6, "[%i] [%i] Queuing Instance %i (Removed).\n", (unsigned int)writeInfo->snapInfo->clientNum, (unsigned int)writeInfo->snapInfo->serverTime, fmt);
        }
        v42 = v41;
        mark = *MSG_MarkWrite(&result, writeInfo->msg);
        if ( fromInstances[v41].instanceIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 825, ASSERT_TYPE_ASSERT, "( instance.instanceIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX )", (const char *)&queryFormat, "instance.instanceIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
          __debugbreak();
        MSG_WriteBit1(writeInfo->msg);
        MSG_WriteByte(writeInfo->msg, 17i64);
        v43 = fromInstances[v42].instanceIndex;
        if ( v43 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 631, ASSERT_TYPE_ASSERT, "( instanceIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX )", (const char *)&queryFormat, "instanceIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
          __debugbreak();
        ScriptableMsg_WriteDeltaIndex(writeInfo->msg, v43, writeInfo->instanceBitCount, writeInfo->instanceDeltaBitCount, writeInfo->instanceDeltaThreshold, &writeInfo->lastInstanceIndex);
        if ( ScriptableMsg_IsWriteLimitReached(writeInfo->msg, v38) )
          break;
        if ( baseline )
        {
          v44 = &baseline->instanceData[v42];
          if ( v44->instanceIndex != (_DWORD)v41 )
          {
            LODWORD(v54) = v41;
            LODWORD(toInstPartData) = v44->instanceIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1001, ASSERT_TYPE_ASSERT, "( baseInstance.instanceIndex ) == ( instanceIndex )", "baseInstance.instanceIndex == instanceIndex\n\t%i, %i", toInstPartData, v54) )
              __debugbreak();
          }
          ScriptableCommon_ClearReplicatedInstance(v44);
        }
        v13 = fromInstanceCount;
        ++v38;
        if ( ++v40 >= v39 )
          goto LABEL_109;
      }
      MSG_RollbackWrite(writeInfo->msg, &mark);
      v57 = 1;
    }
  }
LABEL_109:
  MSG_WriteBit0(writeInfo->msg);
  if ( v57 || (v45 = v70, writeInfo->lastInstanceIndex = -1, !v45) )
  {
LABEL_127:
    v51 = v57;
  }
  else
  {
    v46 = 0;
    while ( 1 )
    {
      v47 = (unsigned __int16)v69[v46];
      if ( (unsigned int)v47 >= toInstanceCount )
      {
        LODWORD(v54) = toInstanceCount;
        LODWORD(toInstPartData) = v47;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1019, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( toInstanceCount )", "instanceIndex doesn't index toInstanceCount\n\t%i not in [0, %i)", toInstPartData, v54) )
          __debugbreak();
      }
      if ( writeInfo->printDebug )
      {
        LODWORD(fmt) = v47;
        Com_Printf(6, "[%i] [%i] Queuing Instance %i (Added).\n", (unsigned int)writeInfo->snapInfo->clientNum, (unsigned int)writeInfo->snapInfo->serverTime, fmt);
      }
      v48 = v47;
      v49 = &toInstances[v47];
      mark = *MSG_MarkWrite(&result, writeInfo->msg);
      ScriptableMsg_WriteAddedInstance(writeInfo, v49, reservedPartOffset, toWorldParts, toWorldPartCount);
      if ( ScriptableMsg_IsWriteLimitReached(writeInfo->msg, v38) )
        break;
      if ( baseline )
      {
        if ( baseline->instanceData[v48].instanceIndex != -1 )
        {
          LODWORD(v54) = -1;
          LODWORD(toInstPartData) = baseline->instanceData[v48].instanceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1041, ASSERT_TYPE_ASSERT, "( baseline->instanceData[instanceIndex].instanceIndex ) == ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "baseline->instanceData[instanceIndex].instanceIndex == SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", toInstPartData, v54) )
            __debugbreak();
        }
        if ( v49->instanceIndex != (_DWORD)v47 )
        {
          LODWORD(v54) = v47;
          LODWORD(toInstPartData) = v49->instanceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1042, ASSERT_TYPE_ASSERT, "( newInstance.instanceIndex ) == ( instanceIndex )", "newInstance.instanceIndex == instanceIndex\n\t%i, %i", toInstPartData, v54) )
            __debugbreak();
        }
        baseline->instanceData[v48] = *v49;
        ScriptableMsg_UpdateInstancePartsBaseline(baseline, v49, reservedPartOffset, toWorldParts, toWorldPartCount);
      }
      HIWORD(v50) = HIWORD(v60);
      LOWORD(v50) = v60 + 1;
      ++v38;
      v46 = (unsigned __int16)(v60 + 1);
      v60 = v50;
      if ( v46 >= v45 )
        goto LABEL_127;
    }
    MSG_RollbackWrite(writeInfo->msg, &mark);
    v51 = 1;
  }
  MSG_WriteBit0(writeInfo->msg);
  if ( v38 )
    writeInfo->outAnyChanges = 1;
  if ( v51 )
    writeInfo->outTruncated = 1;
}

/*
==============
ScriptableMsg_WriteNewInstanceFields
==============
*/
void ScriptableMsg_WriteNewInstanceFields(ScriptableMsgWriteInfo *writeInfo, const ScriptableReplicatedInstance *instance)
{
  unsigned __int8 v2; 
  msg_t *msg; 
  unsigned __int16 defIndex; 
  unsigned __int16 payload; 
  unsigned __int16 extraPayload; 
  unsigned __int16 m_data; 
  __int64 v10; 
  __int64 v11; 

  v2 = instance->replicatedType[0];
  msg = writeInfo->msg;
  if ( v2 >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 558, ASSERT_TYPE_ASSERT, "( static_cast<uint>( instance.replicatedType ) ) < ( ( 1 << SCRIPTABLE_RP_TYPE_BITS ) )", "static_cast<uint>( instance.replicatedType ) < ( 1 << SCRIPTABLE_RP_TYPE_BITS )\n\t%i, %i", v2, 2) )
    __debugbreak();
  MSG_WriteBits(msg, (unsigned __int8)instance->replicatedType[0], 1u);
  if ( instance->replicatedType[0] )
  {
    MSG_WriteByte(msg, instance->partCount);
    ScriptableMsg_WriteInstancePartIndex(msg, instance->partIndex);
    defIndex = instance->defIndex;
    if ( defIndex >= 0x200u )
    {
      LODWORD(v11) = 512;
      LODWORD(v10) = defIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 452, ASSERT_TYPE_ASSERT, "(unsigned)( defIndex ) < (unsigned)( SCRIPTABLE_NCS_DEF_LIMIT )", "defIndex doesn't index SCRIPTABLE_NCS_DEF_LIMIT\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    MSG_WriteBits(msg, defIndex, 9u);
    payload = instance->payload;
    extraPayload = instance->extraPayload;
    if ( payload )
    {
      MSG_WriteBit1(msg);
      MSG_WriteShort(msg, payload);
    }
    else
    {
      MSG_WriteBit0(msg);
    }
    if ( extraPayload )
    {
      MSG_WriteBit1(msg);
      MSG_WriteShort(msg, extraPayload);
    }
    else
    {
      MSG_WriteBit0(msg);
    }
    m_data = instance->parent.m_data;
    if ( g_scriptableZeroParent.m_data == m_data )
    {
      MSG_WriteBit0(msg);
    }
    else
    {
      MSG_WriteBit1(msg);
      MSG_WriteShort(msg, m_data);
    }
    ScriptableMsg_WriteDeltaOrigin(writeInfo, msg, &g_scriptableZeroOrigin, &instance->origin);
    MSG_WriteDeltaAngleShort(msg, g_scriptableZeroAngles.m_pitch, instance->angles.m_pitch);
    MSG_WriteDeltaAngleShort(msg, g_scriptableZeroAngles.m_yaw, instance->angles.m_yaw);
    MSG_WriteDeltaAngleShort(msg, g_scriptableZeroAngles.m_roll, instance->angles.m_roll);
  }
  else
  {
    ScriptableMsg_CheckEntityConstantData(instance);
    MSG_WriteByte(msg, instance->partCount);
    ScriptableMsg_WriteInstancePartIndex(msg, instance->partIndex);
    MSG_WriteBits(msg, instance->payload, 0xBu);
  }
  ScriptableMsg_WriteInstanceChecksum(writeInfo, instance);
  MSG_WriteByte(msg, 222i64);
}

/*
==============
ScriptableMsg_WritePayload
==============
*/
void ScriptableMsg_WritePayload(msg_t *const msg, const unsigned __int16 oldPayload, const unsigned __int16 newPayload, const unsigned __int16 oldextraPayload, const unsigned __int16 newExtraPayload)
{
  if ( oldPayload == newPayload )
  {
    MSG_WriteBit0(msg);
  }
  else
  {
    MSG_WriteBit1(msg);
    MSG_WriteShort(msg, newPayload);
  }
  if ( oldextraPayload == newExtraPayload )
  {
    MSG_WriteBit0(msg);
  }
  else
  {
    MSG_WriteBit1(msg);
    MSG_WriteShort(msg, newExtraPayload);
  }
}

/*
==============
ScriptableMsg_WriteSnapshot
==============
*/
void ScriptableMsg_WriteSnapshot(const SnapshotInfo *snapInfo, msg_t *msg, const ScriptableReplicatedLimits *limits, const ScriptableReplicatedInstance *toInstances, const unsigned int toInstanceCount, const ScriptablePartData *toParts, const unsigned int toPartCount, const unsigned __int64 oldChangeSeqIndex)
{
  ScriptableWriteBaseline *v12; 
  const dvar_t *v13; 
  ScriptableWriteChangeQueue *v14; 
  unsigned __int64 m_ackIndex; 
  unsigned int v16; 
  unsigned int v17; 
  CircularEntryBuffer<500,1024,unsigned __int64,1> *buffer; 
  __int64 v19; 
  char *v20; 
  unsigned int v21; 
  unsigned int v22; 
  int MinBitCountForNum; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  int v28; 
  unsigned int v29; 
  bool v30; 
  bool ShouldPrintDebugInfoForClient; 
  unsigned int reservedPartOffset; 
  ScriptableChangePartBits *ClientChangedBitsBuffer; 
  ScriptableWriteBaseline *ClientBaseline; 
  msg_t *v35; 
  __int64 partChangeBits; 
  __int64 partChangeBitsa; 
  __int64 partChangeBitsb; 
  ScriptablePartData *fromWorldParts; 
  ScriptablePartData *fromWorldPartsa; 
  ScriptableMsgWriteInfo writeInfo; 
  ScriptableReplicatedInstance *toInstancesa; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  toInstancesa = (ScriptableReplicatedInstance *)toInstances;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1325, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1326, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( !toInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1327, ASSERT_TYPE_ASSERT, "( toInstances )", (const char *)&queryFormat, "toInstances") )
    __debugbreak();
  if ( !toParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1328, ASSERT_TYPE_ASSERT, "( toParts )", (const char *)&queryFormat, "toParts") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1329, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableMsg_Write");
  MSG_WriteBit1(msg);
  MSG_WriteByte(msg, 233i64);
  v12 = ScriptableMsg_GetChangeQueueForClient(snapInfo->clientNum);
  v13 = DVARBOOL_mp_paused;
  v14 = (ScriptableWriteChangeQueue *)v12;
  if ( !DVARBOOL_mp_paused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mp_paused") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( !v13->current.enabled )
  {
    if ( !v14->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 677, ASSERT_TYPE_ASSERT, "( buffer )", (const char *)&queryFormat, "buffer") )
      __debugbreak();
    m_ackIndex = v14->m_ackIndex;
    if ( v14->m_writeIndex == m_ackIndex )
    {
      v16 = 1024;
LABEL_42:
      MSG_Init(&buf, data, v16);
      v22 = limits->partWorldLimits[0] - 1;
      writeInfo.snapInfo = snapInfo;
      writeInfo.msg = &buf;
      MinBitCountForNum = GetMinBitCountForNum(v22);
      v24 = 1;
      if ( MinBitCountForNum > 1 )
        v24 = MinBitCountForNum;
      writeInfo.fixedPartBitCount = v24;
      v25 = v24 >> 1;
      v26 = 1 << v25;
      writeInfo.fixedPartDeltaBitCount = v25;
      v27 = limits->instanceLimit - 1;
      writeInfo.fixedPartDdeltaThreshold = v26;
      v28 = GetMinBitCountForNum(v27);
      writeInfo.lastPartIndex = 0x7FFFFFFF;
      v29 = 1;
      writeInfo.lastInstanceIndex = 0x7FFFFFFF;
      if ( v28 > 1 )
        v29 = v28;
      *(_WORD *)&writeInfo.outAnyChanges = 0;
      writeInfo.instanceBitCount = v29;
      v30 = !snapInfo->archived;
      writeInfo.instanceDeltaBitCount = v29 >> 1;
      writeInfo.instanceDeltaThreshold = 1 << (v29 >> 1);
      if ( !v30 || (ShouldPrintDebugInfoForClient = ScriptableMsg_ShouldPrintDebugInfoForClient(snapInfo->clientNum), writeInfo.printDebug = 1, !ShouldPrintDebugInfoForClient) )
        writeInfo.printDebug = 0;
      reservedPartOffset = limits->partWorldLimits[0];
      ClientChangedBitsBuffer = ScriptableMsg_GetClientChangedBitsBuffer(snapInfo->clientNum);
      if ( !ClientChangedBitsBuffer->partBitsArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 301, ASSERT_TYPE_ASSERT, "( changedPartBits.partBitsArray )", (const char *)&queryFormat, "changedPartBits.partBitsArray") )
        __debugbreak();
      memset_0(ClientChangedBitsBuffer->partBitsArray, 0, 4i64 * s_scriptableMsgWrite.changeBitsetArraySize);
      ClientBaseline = ScriptableMsg_GetClientBaseline(snapInfo->clientNum);
      ScriptableMsg_WriteInstancesDelta(&writeInfo, ClientBaseline, ClientBaseline->instanceData, s_scriptableMsgWrite.baselineInstanceCount, toInstancesa, toInstanceCount, ClientBaseline->partData, s_scriptableMsgWrite.baselinePartCount, toParts, toPartCount, reservedPartOffset);
      if ( reservedPartOffset > s_scriptableMsgWrite.baselinePartCount )
      {
        LODWORD(fromWorldPartsa) = s_scriptableMsgWrite.baselinePartCount;
        LODWORD(partChangeBitsa) = reservedPartOffset;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1375, ASSERT_TYPE_ASSERT, "( fixedPartCount ) <= ( s_scriptableMsgWrite.baselinePartCount )", "fixedPartCount <= s_scriptableMsgWrite.baselinePartCount\n\t%i, %i", partChangeBitsa, fromWorldPartsa) )
          __debugbreak();
      }
      ScriptableCommon_UpdatePartsChangeBits(ClientChangedBitsBuffer, s_scriptableMsgWrite.changeBitsetArraySize, ClientBaseline->partData, toParts, reservedPartOffset);
      ScriptableMsg_WriteChangedParts(&writeInfo, ClientChangedBitsBuffer, ClientBaseline, toParts, toPartCount, 0xAu);
      v35 = writeInfo.msg;
      if ( writeInfo.msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1380, ASSERT_TYPE_ASSERT, "( !MSG_IsOverflowed( writeInfo.msg ) )", "Message generation should not overflow, otherwise changes will be lost") )
        __debugbreak();
      if ( v35->cursize > v16 )
      {
        LODWORD(fromWorldPartsa) = v16;
        LODWORD(partChangeBitsb) = v35->cursize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1381, ASSERT_TYPE_ASSERT, "( static_cast<uint>( writeInfo.msg->cursize ) ) <= ( availableBufferSpace )", "static_cast<uint>( writeInfo.msg->cursize ) <= availableBufferSpace\n\t%i, %i", partChangeBitsb, fromWorldPartsa) )
          __debugbreak();
      }
      if ( writeInfo.outAnyChanges )
      {
        ScriptableWriteChangeQueue::SaveChangeMessage(v14, v35);
      }
      else if ( (unsigned int)MSG_GetUsedBitCount(v35) > 0x40 )
      {
        LODWORD(fromWorldPartsa) = 64;
        LODWORD(partChangeBitsb) = MSG_GetUsedBitCount(v35);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1389, ASSERT_TYPE_ASSERT, "( MSG_GetUsedBitCount( writeInfo.msg ) ) <= ( SCRIPTABLE_OVERFLOW_GUARD_BITS )", "MSG_GetUsedBitCount( writeInfo.msg ) <= SCRIPTABLE_OVERFLOW_GUARD_BITS\n\t%i, %i", partChangeBitsb, fromWorldPartsa) )
          __debugbreak();
      }
      goto LABEL_67;
    }
    v17 = truncate_cast<unsigned int,unsigned __int64>(m_ackIndex % 0x1F4);
    buffer = v14->buffer;
    v19 = v17;
    if ( v17 >= 0x1F4 )
    {
      LODWORD(fromWorldParts) = 500;
      LODWORD(partChangeBits) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", partChangeBits, fromWorldParts) )
        __debugbreak();
    }
    if ( !buffer->m_entries[v19].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 83, ASSERT_TYPE_ASSERT, "(m_entries[entryIndex].size > 0)", "%s\n\tRequesting buffer information about an invalid command", "m_entries[entryIndex].size > 0") )
      __debugbreak();
    if ( !CircularEntryBuffer<500,1024,unsigned __int64,1>::IsDataAvailable(buffer, v19) )
    {
      Com_PrintError(15, "ScriptableWriteChangeQueue::GetAvailableBuffer: Failed to get available buffer for %zu\n", v14->m_ackIndex);
      goto LABEL_67;
    }
    v20 = (char *)buffer + 8 * v19;
    v21 = buffer->m_bufferNextIndex - *((_DWORD *)v20 + 1);
    if ( v21 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 103, ASSERT_TYPE_ASSERT, "( usedBuffer ) <= ( static_cast<uint>( sizeof( m_buffer ) ) )", "%s <= %s\n\t%i, %i", "usedBuffer", "static_cast<uint>( sizeof( m_buffer ) )", buffer->m_bufferNextIndex - *((_DWORD *)v20 + 1), 1024) )
      __debugbreak();
    v16 = 1024 - v21;
    if ( 1024 - v21 > 0x400 )
    {
      LODWORD(fromWorldParts) = 1024;
      LODWORD(partChangeBits) = 1024 - v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1346, ASSERT_TYPE_ASSERT, "( availableBufferSpace ) <= ( changeQueue.buffer->GetBufferSize() )", "availableBufferSpace <= changeQueue.buffer->GetBufferSize()\n\t%i, %i", partChangeBits, fromWorldParts) )
        __debugbreak();
    }
    if ( v16 > 0x20 )
    {
      if ( v16 > 0x400 )
      {
        LODWORD(fromWorldParts) = 1024;
        LODWORD(partChangeBits) = 1024 - v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1354, ASSERT_TYPE_ASSERT, "( availableBufferSpace ) <= ( sizeof( msgBuf ) )", "availableBufferSpace <= sizeof( msgBuf )\n\t%i, %i", partChangeBits, fromWorldParts) )
          __debugbreak();
      }
      goto LABEL_42;
    }
  }
LABEL_67:
  ScriptableMsg_EmitChangeQueue(snapInfo, msg, v14, oldChangeSeqIndex);
  MSG_WriteByte(msg, 234i64);
  ScriptableMsg_WriteBaselineChecksum(msg, snapInfo->clientNum);
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableMsg_WriteSnapshotNoData
==============
*/
void ScriptableMsg_WriteSnapshotNoData(const SnapshotInfo *snapInfo, msg_t *msg)
{
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 1409, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  MSG_WriteBit0(msg);
  ScriptableMsg_WriteBaselineChecksum(msg, snapInfo->clientNum);
}

/*
==============
ScriptableMsg_Write_GetPartDataForInstance
==============
*/
const ScriptablePartData *ScriptableMsg_Write_GetPartDataForInstance(const ScriptableReplicatedInstance *instance, const unsigned int reservedPartOffset, const ScriptablePartData *partWorldData, const unsigned int partWorldCount)
{
  unsigned int v5; 
  __int64 v9; 
  __int64 v10; 

  v5 = reservedPartOffset + instance->partIndex;
  if ( !partWorldData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 702, ASSERT_TYPE_ASSERT, "( partWorldData )", (const char *)&queryFormat, "partWorldData") )
    __debugbreak();
  if ( v5 >= partWorldCount )
  {
    LODWORD(v9) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 703, ASSERT_TYPE_ASSERT, "(unsigned)( partDataInstOffset ) < (unsigned)( partWorldCount )", "partDataInstOffset doesn't index partWorldCount\n\t%i not in [0, %i)", v9, partWorldCount) )
      __debugbreak();
  }
  if ( v5 + instance->partCount > partWorldCount )
  {
    LODWORD(v10) = partWorldCount;
    LODWORD(v9) = v5 + instance->partCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_write.cpp", 704, ASSERT_TYPE_ASSERT, "( partDataInstOffset + instance.partCount ) <= ( partWorldCount )", "partDataInstOffset + instance.partCount <= partWorldCount\n\t%i, %i", v9, v10) )
      __debugbreak();
  }
  return &partWorldData[v5];
}

