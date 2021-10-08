/*
==============
ScriptableMsg_ParseFixedPartChanges<ScriptableClFixedPartChangedFunctor>
==============
*/

void __fastcall ScriptableMsg_ParseFixedPartChanges<ScriptableClFixedPartChangedFunctor>(msg_t *msg, const ScriptableReplicatedLimits *limits, const unsigned int partReadBits, ScriptableCompleteState *curWorld, const ScriptableClFixedPartChangedFunctor *partChangedFunc)
{
  ??$ScriptableMsg_ParseFixedPartChanges@UScriptableClFixedPartChangedFunctor@@@@YAXPEAUmsg_t@@AEBUScriptableReplicatedLimits@@IAEAUScriptableCompleteState@@AEBUScriptableClFixedPartChangedFunctor@@@Z(msg, limits, partReadBits, curWorld, partChangedFunc);
}

/*
==============
ScriptableMsg_ReadError
==============
*/

void __fastcall ScriptableMsg_ReadError(msg_t *msg)
{
  ?ScriptableMsg_ReadError@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
ScriptableMsg_ParseInstanceChanges<ScriptableMsgInstanceFunctor,ScriptableMsgInstanceFunctor>
==============
*/

void __fastcall ScriptableMsg_ParseInstanceChanges<ScriptableMsgInstanceFunctor,ScriptableMsgInstanceFunctor>(msg_t *msg, const ScriptableReplicatedLimits *limits, ScriptableCompleteState *curWorld, const ScriptableMsgInstanceFunctor *fieldsChangedFunc, const ScriptableMsgInstanceFunctor *partsChangedFunc)
{
  ??$ScriptableMsg_ParseInstanceChanges@UScriptableMsgInstanceFunctor@@U1@@@YAXPEAUmsg_t@@AEBUScriptableReplicatedLimits@@AEAUScriptableCompleteState@@AEBUScriptableMsgInstanceFunctor@@3@Z(msg, limits, curWorld, fieldsChangedFunc, partsChangedFunc);
}

/*
==============
ScriptableMsg_ParseInstanceAdded<ScriptableMsgInstanceFunctor>
==============
*/

void __fastcall ScriptableMsg_ParseInstanceAdded<ScriptableMsgInstanceFunctor>(msg_t *msg, const ScriptableReplicatedLimits *limits, ScriptableCompleteState *curWorld, const ScriptableMsgInstanceFunctor *addedInstanceFunc)
{
  ??$ScriptableMsg_ParseInstanceAdded@UScriptableMsgInstanceFunctor@@@@YAXPEAUmsg_t@@AEBUScriptableReplicatedLimits@@AEAUScriptableCompleteState@@AEBUScriptableMsgInstanceFunctor@@@Z(msg, limits, curWorld, addedInstanceFunc);
}

/*
==============
ScriptableMsgRead_ShouldPrintMessageDebugInfo
==============
*/

bool __fastcall ScriptableMsgRead_ShouldPrintMessageDebugInfo()
{
  return ?ScriptableMsgRead_ShouldPrintMessageDebugInfo@@YA_NXZ();
}

/*
==============
ScriptableMsg_ReadDeltaIndex
==============
*/

unsigned int __fastcall ScriptableMsg_ReadDeltaIndex(msg_t *msg, const unsigned int fullBits, const unsigned int deltaBits, int *inOutLastIndex)
{
  return ?ScriptableMsg_ReadDeltaIndex@@YAIPEAUmsg_t@@IIAEAH@Z(msg, fullBits, deltaBits, inOutLastIndex);
}

/*
==============
ScriptableMsg_ParseFixedPartChanges<ScriptableClFixedPartChangedFunctor>
==============
*/
void ScriptableMsg_ParseFixedPartChanges<ScriptableClFixedPartChangedFunctor>(msg_t *msg, const ScriptableReplicatedLimits *limits, const unsigned int partReadBits, ScriptableCompleteState *curWorld, const ScriptableClFixedPartChangedFunctor *partChangedFunc)
{
  ScriptableCompleteState *v6; 
  unsigned int Bits; 
  unsigned int v9; 
  int MinBitCountForNum; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int8 Byte; 
  __int64 m_localClientNum; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  int inOutLastIndex; 
  unsigned int i; 

  v6 = curWorld;
  Bits = MSG_ReadBits(msg, partReadBits);
  if ( Bits )
  {
    v9 = limits->partWorldLimits[0];
    MinBitCountForNum = GetMinBitCountForNum(limits->partWorldLimits[0] - 1);
    v11 = 1;
    v20 = 0;
    v12 = -1;
    inOutLastIndex = -1;
    if ( MinBitCountForNum > 1 )
      v11 = MinBitCountForNum;
    v13 = v11 >> 1;
    for ( i = v11 >> 1; ; v13 = i )
    {
      if ( v12 != -1 && v12 >= 1 << v11 )
      {
        LODWORD(v18) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 104, ASSERT_TYPE_ASSERT, "( ( ( inOutLastIndex == -1 ) || ( static_cast<uint>( inOutLastIndex ) < ( 1u << fullBits ) ) ) )", "( inOutLastIndex ) = %i", v18) )
          __debugbreak();
      }
      v14 = ScriptableMsg_ReadDeltaIndex(msg, v11, v13, &inOutLastIndex);
      Byte = MSG_ReadByte(msg);
      if ( msg->overflowed || (unsigned int)v14 >= v9 )
        break;
      if ( (unsigned int)v14 >= limits->partWorldLimits[0] )
      {
        LODWORD(v19) = limits->partWorldLimits[0];
        LODWORD(v18) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 154, ASSERT_TYPE_ASSERT, "(unsigned)( partFixedIndex ) < (unsigned)( limits.partWorldLimits[worldTypeIndex] )", "partFixedIndex doesn't index limits.partWorldLimits[worldTypeIndex]\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v6->partWorldState.groups[0].partData[v14].data = Byte;
      if ( ScriptableMsgRead_ShouldPrintMessageDebugInfo() )
        Com_Printf(6, "[Scriptable CL] Changed Part %i\n", (unsigned int)v14);
      m_localClientNum = partChangedFunc->m_localClientNum;
      if ( !s_scriptableCl_serverFixedPartsChangedBits[m_localClientNum].partBitsArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3769, ASSERT_TYPE_ASSERT, "(s_scriptableCl_serverFixedPartsChangedBits[localClientNum].partBitsArray)", (const char *)&queryFormat, "s_scriptableCl_serverFixedPartsChangedBits[localClientNum].partBitsArray") )
        __debugbreak();
      v17 = (unsigned int)v14 >> 5;
      if ( (unsigned int)v17 >= s_scriptableCl_serverFixedPartsChangedArraySize )
      {
        LODWORD(v19) = s_scriptableCl_serverFixedPartsChangedArraySize;
        LODWORD(v18) = (unsigned int)v14 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3772, ASSERT_TYPE_ASSERT, "(unsigned)( partArrayIndex ) < (unsigned)( s_scriptableCl_serverFixedPartsChangedArraySize )", "partArrayIndex doesn't index s_scriptableCl_serverFixedPartsChangedArraySize\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      s_scriptableCl_serverFixedPartsChangedBits[m_localClientNum].partBitsArray[v17] |= 1 << (v14 & 0x1F);
      if ( ++v20 >= Bits )
        return;
      v12 = inOutLastIndex;
      v6 = curWorld;
    }
    Com_PrintError(29, "ScriptableMsg_ParseFixedPartChanges: Invalid partFixedIndex %u >= %u\n", (unsigned int)v14, v9);
    ScriptableMsg_ReadError(msg);
  }
}

/*
==============
ScriptableMsgRead_ShouldPrintMessageDebugInfo
==============
*/
bool ScriptableMsgRead_ShouldPrintMessageDebugInfo()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARINT_scriptable_debug_message_client;
  if ( !DCONST_DVARINT_scriptable_debug_message_client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_message_client") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.integer >= 0;
}

/*
==============
ScriptableMsg_ReadDeltaIndex
==============
*/
__int64 ScriptableMsg_ReadDeltaIndex(msg_t *msg, const unsigned int fullBits, const unsigned int deltaBits, int *inOutLastIndex)
{
  unsigned int Bits; 
  __int64 v10; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 54, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( MSG_ReadBit(msg) )
  {
    Bits = *inOutLastIndex + 1;
  }
  else if ( MSG_ReadBit(msg) )
  {
    Bits = MSG_ReadBits(msg, deltaBits) + *inOutLastIndex;
  }
  else
  {
    Bits = MSG_ReadBits(msg, fullBits);
  }
  *inOutLastIndex = Bits;
  if ( Bits >= 1 << fullBits && !msg->overflowed )
  {
    LODWORD(v10) = Bits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 79, ASSERT_TYPE_ASSERT, "( ( readIndex < ( 1u << fullBits ) || MSG_IsOverflowed( msg ) ) )", "( readIndex ) = %i", v10) )
      __debugbreak();
  }
  return Bits;
}

/*
==============
ScriptableMsg_ReadError
==============
*/
void ScriptableMsg_ReadError(msg_t *msg)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARBOOL_scriptable_debug_msg_error_dump;
  if ( !DCONST_DVARBOOL_scriptable_debug_msg_error_dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_msg_error_dump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    RaiseException(0xC0000005, 0, 0, NULL);
  MSG_Discard(msg);
}

/*
==============
ScriptableMsg_ParseInstanceAdded<ScriptableMsgInstanceFunctor>
==============
*/
void ScriptableMsg_ParseInstanceAdded<ScriptableMsgInstanceFunctor>(msg_t *msg, const ScriptableReplicatedLimits *limits, ScriptableCompleteState *curWorld, const ScriptableMsgInstanceFunctor *addedInstanceFunc)
{
  ScriptableReplicatedInstance *replicatedInstances; 
  unsigned int replicatedInstanceCount; 
  int MinBitCountForNum; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  ScriptableReplicatedInstance *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int inOutLastIndex; 

  replicatedInstances = curWorld->replicatedInstances;
  replicatedInstanceCount = curWorld->replicatedInstanceCount;
  MinBitCountForNum = GetMinBitCountForNum(limits->instanceLimit - 1);
  v10 = 1;
  v11 = -1;
  inOutLastIndex = -1;
  if ( MinBitCountForNum > 1 )
    v10 = MinBitCountForNum;
  if ( !msg->overflowed )
  {
    while ( 1 )
    {
      if ( !MSG_ReadBit(msg) )
        return;
      if ( MSG_ReadByte(msg) != 19 && !msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 289, ASSERT_TYPE_ASSERT, "(sentinel == 19 || MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "sentinel == 19 || MSG_IsOverflowed( msg )") )
        __debugbreak();
      if ( v11 != -1 && v11 >= 1 << v10 )
      {
        LODWORD(v16) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 86, ASSERT_TYPE_ASSERT, "( ( ( inOutLastIndex == -1 ) || ( static_cast<uint>( inOutLastIndex ) < (1u<< instanceBitCount) ) ) )", "( inOutLastIndex ) = %i", v16) )
          __debugbreak();
      }
      v12 = ScriptableMsg_ReadDeltaIndex(msg, v10, v10 >> 1, &inOutLastIndex);
      if ( msg->overflowed || v12 >= replicatedInstanceCount )
      {
        Com_PrintError(29, "ScriptableMsg_ParseInstanceAdded: Received Add for an out-of-range scriptable at index %u\n", v12);
        goto LABEL_27;
      }
      v13 = &replicatedInstances[v12];
      if ( v13->instanceIndex != -1 )
        break;
      v13->instanceIndex = v12;
      if ( !ScriptableMsg_ReadNewInstanceFields(msg, &replicatedInstances[v12]) )
        goto LABEL_27;
      v14 = v13->partIndex + v13->partCount;
      v15 = limits->partWorldLimits[1];
      if ( (unsigned int)v15 < (unsigned int)v14 )
      {
        Com_Printf(29, "ScriptableMsg_ClearInstanceParts: Invalid clear beyond the part limit next index %u > %u\n", v14, v15);
LABEL_27:
        ScriptableMsg_ReadError(msg);
        return;
      }
      if ( !curWorld->partWorldState.groups[1].partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 239, ASSERT_TYPE_ASSERT, "(partReservedState.partData != nullptr)", (const char *)&queryFormat, "partReservedState.partData != nullptr") )
        __debugbreak();
      memset_0(&curWorld->partWorldState.groups[1].partData[v13->partIndex], 0, v13->partCount);
      if ( !ScriptableMsg_ReadDeltaInstancePartChanges(msg, limits, v13, curWorld) )
        goto LABEL_27;
      if ( msg->overflowed )
        return;
      v11 = inOutLastIndex;
    }
    Com_PrintError(29, "ScriptableMsg_ParseInstanceAdded: Received Add for an already-existing scriptable at index %u\n", v12);
    goto LABEL_27;
  }
}

/*
==============
ScriptableMsg_ParseInstanceChanges<ScriptableMsgInstanceFunctor,ScriptableMsgInstanceFunctor>
==============
*/
void ScriptableMsg_ParseInstanceChanges<ScriptableMsgInstanceFunctor,ScriptableMsgInstanceFunctor>(msg_t *msg, const ScriptableReplicatedLimits *limits, ScriptableCompleteState *curWorld, const ScriptableMsgInstanceFunctor *fieldsChangedFunc)
{
  ScriptableReplicatedInstance *replicatedInstances; 
  unsigned int replicatedInstanceCount; 
  unsigned int v8; 
  int MinBitCountForNum; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  const ScriptableReplicatedInstance *v14; 
  unsigned __int16 m_data; 
  unsigned __int16 UnsignedShort; 
  bool InstanceChecksum; 
  int Byte; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  int inOutLastIndex; 
  ScriptableReplicatedLimits *limitsa; 
  ScriptableReplicatedInstance *v24; 

  limitsa = (ScriptableReplicatedLimits *)limits;
  replicatedInstances = curWorld->replicatedInstances;
  replicatedInstanceCount = curWorld->replicatedInstanceCount;
  v8 = limits->instanceLimit - 1;
  v24 = curWorld->replicatedInstances;
  MinBitCountForNum = GetMinBitCountForNum(v8);
  v10 = 1;
  v11 = -1;
  inOutLastIndex = -1;
  if ( MinBitCountForNum > 1 )
    v10 = MinBitCountForNum;
  if ( !msg->overflowed )
  {
    while ( 1 )
    {
      if ( !MSG_ReadBit(msg) )
        return;
      if ( MSG_ReadByte(msg) != 15 && !msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 180, ASSERT_TYPE_ASSERT, "(sentinel == 15 || MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "sentinel == 15 || MSG_IsOverflowed( msg )") )
        __debugbreak();
      if ( v11 != -1 && v11 >= 1 << v10 )
      {
        LODWORD(v19) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 86, ASSERT_TYPE_ASSERT, "( ( ( inOutLastIndex == -1 ) || ( static_cast<uint>( inOutLastIndex ) < (1u<< instanceBitCount) ) ) )", "( inOutLastIndex ) = %i", v19) )
          __debugbreak();
      }
      v12 = ScriptableMsg_ReadDeltaIndex(msg, v10, v10 >> 1, &inOutLastIndex);
      v13 = v12;
      if ( msg->overflowed || v12 >= replicatedInstanceCount )
      {
        Com_PrintError(29, "ScriptableMsg_ParseInstanceChanges: Received a change for an invalid index %u > %u\n", v12, replicatedInstanceCount);
        goto LABEL_47;
      }
      v14 = &replicatedInstances[v12];
      if ( v14->instanceIndex == -1 )
      {
        Com_PrintError(29, "ScriptableMsg_ParseInstanceChanges: Received a change for a non-existing scriptable at index %u\n", v12);
        goto LABEL_47;
      }
      if ( v14->instanceIndex != v12 )
      {
        LODWORD(v21) = v12;
        LODWORD(v20) = v14->instanceIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 199, ASSERT_TYPE_ASSERT, "( instance.instanceIndex ) == ( instanceIndex )", "%s == %s\n\t%i, %i", "instance.instanceIndex", "instanceIndex", v20, v21) )
          __debugbreak();
      }
      if ( MSG_ReadBit(msg) )
      {
        if ( !v14->replicatedType[0] )
        {
          Com_PrintError(29, "ScriptableMsg_ReadDeltaInstanceFields: Not supported for ENTITY type.\n");
LABEL_43:
          Com_PrintError(29, "ScriptableMsg_ParseInstanceChanges: Error reading delta-instance fields for instance %u\n", v13);
LABEL_47:
          ScriptableMsg_ReadError(msg);
          return;
        }
        if ( MSG_ReadBit(msg) )
          v14->payload = MSG_ReadUnsignedShort(msg);
        if ( MSG_ReadBit(msg) )
          v14->extraPayload = MSG_ReadUnsignedShort(msg);
        m_data = v14->parent.m_data;
        if ( MSG_ReadBit(msg) )
          UnsignedShort = MSG_ReadUnsignedShort(msg);
        else
          UnsignedShort = m_data;
        v14->parent.m_data = UnsignedShort;
        if ( MSG_ReadBit(msg) )
          ScriptableMsg_ReadDeltaOrigin(msg, &v14->origin, &v14->origin);
        if ( MSG_ReadBit(msg) )
        {
          v14->angles.m_pitch = MSG_ReadDeltaAngleShort(msg, v14->angles.m_pitch);
          v14->angles.m_yaw = MSG_ReadDeltaAngleShort(msg, v14->angles.m_yaw);
          v14->angles.m_roll = MSG_ReadDeltaAngleShort(msg, v14->angles.m_roll);
        }
        InstanceChecksum = ScriptableMsg_ReadInstanceChecksum(msg, v14);
        Byte = MSG_ReadByte(msg);
        if ( Byte != 223 && !msg->overflowed )
        {
          LODWORD(v19) = Byte;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.cpp", 48, ASSERT_TYPE_ASSERT, "( ( sentinel == sentinelValue || MSG_IsOverflowed( msg ) ) )", "( sentinel ) = %i", v19) )
            __debugbreak();
        }
        if ( !InstanceChecksum || msg->overflowed )
          goto LABEL_43;
        replicatedInstances = v24;
      }
      if ( !ScriptableMsg_ReadDeltaInstancePartChanges(msg, limitsa, v14, curWorld) )
      {
        Com_PrintError(29, "ScriptableMsg_ParseInstanceChanges: Error reading delta-parts for instance %u\n", v13);
        goto LABEL_47;
      }
      if ( msg->overflowed )
        return;
      v11 = inOutLastIndex;
    }
  }
}

