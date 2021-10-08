/*
==============
SV_BandwidthProfile_AddPlayerStateOmnvarsToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddPlayerStateOmnvarsToSnapshot(const SnapshotInfo *snapInfo, const int numBits, const unsigned int numOmnvars)
{
  ?SV_BandwidthProfile_AddPlayerStateOmnvarsToSnapshot@@YAXPEBUSnapshotInfo@@HI@Z(snapInfo, numBits, numOmnvars);
}

/*
==============
SV_BandwidthProfile_AddGlassToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddGlassToSnapshot(const SnapshotInfo *snapInfo, const int numPieces, const int numBits)
{
  ?SV_BandwidthProfile_AddGlassToSnapshot@@YAXPEBUSnapshotInfo@@HH@Z(snapInfo, numPieces, numBits);
}

/*
==============
SV_BandwidthProfile_AddScoreboardToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddScoreboardToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  ?SV_BandwidthProfile_AddScoreboardToSnapshot@@YAXPEBUSnapshotInfo@@H@Z(snapInfo, numBits);
}

/*
==============
SV_BandwidthProfile_Shutdown
==============
*/

void SV_BandwidthProfile_Shutdown(void)
{
  ?SV_BandwidthProfile_Shutdown@@YAXXZ();
}

/*
==============
SV_BandwidthProfile_AddOmnvarName
==============
*/

void __fastcall SV_BandwidthProfile_AddOmnvarName(const SnapshotInfo *snapInfo, const char *const omnvarName)
{
  ?SV_BandwidthProfile_AddOmnvarName@@YAXPEBUSnapshotInfo@@QEBD@Z(snapInfo, omnvarName);
}

/*
==============
SV_BandwidthProfile_AddWeaponMapEntryToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddWeaponMapEntryToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  ?SV_BandwidthProfile_AddWeaponMapEntryToSnapshot@@YAXPEBUSnapshotInfo@@H@Z(snapInfo, numBits);
}

/*
==============
SV_BandwidthProfile_AddServerCmdToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddServerCmdToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  ?SV_BandwidthProfile_AddServerCmdToSnapshot@@YAXPEBUSnapshotInfo@@H@Z(snapInfo, numBits);
}

/*
==============
SV_BandwidthProfile_AddEntityIndexToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddEntityIndexToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  ?SV_BandwidthProfile_AddEntityIndexToSnapshot@@YAXPEBUSnapshotInfo@@H@Z(snapInfo, numBits);
}

/*
==============
SV_BandwidthProfile_Init
==============
*/

void __fastcall SV_BandwidthProfile_Init(const bool isGameServer)
{
  ?SV_BandwidthProfile_Init@@YAX_N@Z(isGameServer);
}

/*
==============
SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(const SnapshotInfo *snapInfo, const int numBits, const int segment)
{
  ?SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot@@YAXPEBUSnapshotInfo@@HH@Z(snapInfo, numBits, segment);
}

/*
==============
SnapMeasurement_t::getNumChangesArray
==============
*/

unsigned int __fastcall SnapMeasurement_t::getNumChangesArray(SnapMeasurement_t *this, const PacketEntityType_e packetEntityType, unsigned __int16 **outArray)
{
  return ?getNumChangesArray@SnapMeasurement_t@@QEAAIW4PacketEntityType_e@@PEAPEAG@Z(this, packetEntityType, outArray);
}

/*
==============
SV_BandwidthProfile_ExportNetFieldConfig
==============
*/

bool __fastcall SV_BandwidthProfile_ExportNetFieldConfig()
{
  return ?SV_BandwidthProfile_ExportNetFieldConfig@@YA_NXZ();
}

/*
==============
SV_BandwidthProfile_AddNetFieldToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddNetFieldToSnapshot(const SnapshotInfo *snapInfo, const int fieldNum, const int skippedFieldsBits, const int dataBits)
{
  ?SV_BandwidthProfile_AddNetFieldToSnapshot@@YAXPEBUSnapshotInfo@@HHH@Z(snapInfo, fieldNum, skippedFieldsBits, dataBits);
}

/*
==============
SV_BandwidthProfile_AddScriptableChangeToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddScriptableChangeToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  ?SV_BandwidthProfile_AddScriptableChangeToSnapshot@@YAXPEBUSnapshotInfo@@H@Z(snapInfo, numBits);
}

/*
==============
SV_BandwidthProfile_RecordEvent
==============
*/

void SV_BandwidthProfile_RecordEvent(const int clientNum, const char *fmt, ...)
{
  ?SV_BandwidthProfile_RecordEvent@@YAXHPEBDZZ(clientNum, fmt);
}

/*
==============
SV_BandwidthProfile_ReleaseAllServerMessages
==============
*/

void SV_BandwidthProfile_ReleaseAllServerMessages(void)
{
  ?SV_BandwidthProfile_ReleaseAllServerMessages@@YAXXZ();
}

/*
==============
SV_BandwidthProfile_CopyServerMsgEntityToClientSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_CopyServerMsgEntityToClientSnapshot(const SnapshotInfo *snapInfo, const __int16 entityNum, const NetFieldLoD entityLoD)
{
  ?SV_BandwidthProfile_CopyServerMsgEntityToClientSnapshot@@YAXPEBUSnapshotInfo@@FW4NetFieldLoD@@@Z(snapInfo, entityNum, entityLoD);
}

/*
==============
SV_BandwidthProfile_StartSnapshot
==============
*/

int __fastcall SV_BandwidthProfile_StartSnapshot(const int clientNum)
{
  return ?SV_BandwidthProfile_StartSnapshot@@YAHH@Z(clientNum);
}

/*
==============
SV_BandwidthProfile_EndSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_EndSnapshot(const SnapshotInfo *snapInfo, const int numBits, const bool writeFullSnap, const bool isBlindDelta, const bool isInKillcam, const SvWriteSnapshotResult *result)
{
  ?SV_BandwidthProfile_EndSnapshot@@YAXPEBUSnapshotInfo@@H_N11PEBUSvWriteSnapshotResult@@@Z(snapInfo, numBits, writeFullSnap, isBlindDelta, isInKillcam, result);
}

/*
==============
SV_BandwidthProfile_CopyServerMsgClientsToClientSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_CopyServerMsgClientsToClientSnapshot(const SnapshotInfo *snapInfo)
{
  ?SV_BandwidthProfile_CopyServerMsgClientsToClientSnapshot@@YAXPEBUSnapshotInfo@@@Z(snapInfo);
}

/*
==============
SV_BandwidthProfile_AddScriptableHeaderToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddScriptableHeaderToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  ?SV_BandwidthProfile_AddScriptableHeaderToSnapshot@@YAXPEBUSnapshotInfo@@H@Z(snapInfo, numBits);
}

/*
==============
SV_BandwidthProfile_AddSerializedEntityToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddSerializedEntityToSnapshot(const SnapshotInfo *snapInfo, const __int16 entityNum, const bool highPrecisionOrigin)
{
  ?SV_BandwidthProfile_AddSerializedEntityToSnapshot@@YAXPEBUSnapshotInfo@@F_N@Z(snapInfo, entityNum, highPrecisionOrigin);
}

/*
==============
SV_BandwidthProfile_AddUmbraGatesdToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddUmbraGatesdToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  ?SV_BandwidthProfile_AddUmbraGatesdToSnapshot@@YAXPEBUSnapshotInfo@@H@Z(snapInfo, numBits);
}

/*
==============
SV_BandwidthProfile_CopyServerMsgAgentsToClientSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_CopyServerMsgAgentsToClientSnapshot(const SnapshotInfo *snapInfo)
{
  ?SV_BandwidthProfile_CopyServerMsgAgentsToClientSnapshot@@YAXPEBUSnapshotInfo@@@Z(snapInfo);
}

/*
==============
SV_BandwidthProfile_AddWorldOmnvarsToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddWorldOmnvarsToSnapshot(const SnapshotInfo *snapInfo, const int numBits, const unsigned int numOmnvars)
{
  ?SV_BandwidthProfile_AddWorldOmnvarsToSnapshot@@YAXPEBUSnapshotInfo@@HI@Z(snapInfo, numBits, numOmnvars);
}

/*
==============
SV_BandwidthProfile_StartServerMessage
==============
*/

int __fastcall SV_BandwidthProfile_StartServerMessage()
{
  return ?SV_BandwidthProfile_StartServerMessage@@YAHXZ();
}

/*
==============
SnapMeasurement_t::getNumBitsArray
==============
*/

unsigned int __fastcall SnapMeasurement_t::getNumBitsArray(SnapMeasurement_t *this, const PacketEntityType_e packetEntityType, unsigned __int16 **outArray)
{
  return ?getNumBitsArray@SnapMeasurement_t@@QEAAIW4PacketEntityType_e@@PEAPEAG@Z(this, packetEntityType, outArray);
}

/*
==============
SV_BandwidthProfile_AddNetFieldToServerMsg
==============
*/

void __fastcall SV_BandwidthProfile_AddNetFieldToServerMsg(const SnapshotInfo *const snapInfo, const __int16 entityNum, const int fieldNum, const int skippedFieldsBits, const int dataBits)
{
  ?SV_BandwidthProfile_AddNetFieldToServerMsg@@YAXQEBUSnapshotInfo@@FHHH@Z(snapInfo, entityNum, fieldNum, skippedFieldsBits, dataBits);
}

/*
==============
SV_BandwidthProfile_AddLastChangedFieldToSnapshot
==============
*/

void __fastcall SV_BandwidthProfile_AddLastChangedFieldToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  ?SV_BandwidthProfile_AddLastChangedFieldToSnapshot@@YAXPEBUSnapshotInfo@@H@Z(snapInfo, numBits);
}

/*
==============
SV_BandwidthProfile_AddEntityIndexToSnapshot
==============
*/
void SV_BandwidthProfile_AddEntityIndexToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  SnapMeasurement_t *v4; 
  ServerMsgMeasurement_t *v5; 
  PacketEntityType_e packetEntityType; 
  PacketEntityType_e v7; 

  v4 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  if ( v4 )
  {
    v4->snapEntityIndexNumBits[snapInfo->packetEntityType] += truncate_cast<unsigned short,int>(numBits);
  }
  else
  {
    v5 = SV_BandwidthProfile_CanAddSnapDetailToSvMsgMeasurement(snapInfo);
    if ( v5 )
    {
      packetEntityType = snapInfo->packetEntityType;
      if ( packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT )
      {
        v5->clients.snapEntityIndexNumBits += truncate_cast<unsigned short,int>(numBits);
      }
      else if ( packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_AGENTSTATE )
      {
        v5->agents.snapEntityIndexNumBits += truncate_cast<unsigned short,int>(numBits);
      }
      else
      {
        v7 = snapInfo->packetEntityType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported packetEntityType %d for server message\n", v7) )
          __debugbreak();
      }
    }
  }
}

/*
==============
SV_BandwidthProfile_AddEntityNames
==============
*/
void SV_BandwidthProfile_AddEntityNames(SnapMeasurement_t *snapMeasurement, const PacketEntityType_e packetEntityType, const __int16 entityNum)
{
  __int64 v3; 
  gentity_s *v6; 
  scr_string_t targetname; 
  signed int v8; 
  scr_string_t script_classname; 
  scr_string_t classname; 
  scr_string_t script_linkName; 
  unsigned __int16 model; 
  unsigned int v13; 
  __int16 eType; 
  int v15; 
  unsigned __int16 v16; 
  unsigned int *v17; 
  const char **p_script_classname; 
  __int64 v19; 
  EntityNames *v20; 
  __int64 v21; 
  const char *EventTypeName; 
  const char *v23; 
  char *outName; 
  const char *v25; 
  const char *v26; 

  v3 = packetEntityType;
  if ( !snapMeasurement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1166, ASSERT_TYPE_ASSERT, "(snapMeasurement != nullptr)", (const char *)&queryFormat, "snapMeasurement != nullptr") )
    __debugbreak();
  if ( (int)v3 < 30 )
  {
    if ( (unsigned int)entityNum >= 0x800 )
    {
      LODWORD(v21) = entityNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v6 = &g_entities[entityNum];
    if ( v6->s.number == entityNum )
    {
      targetname = v6->targetname;
      v8 = 0;
      EventTypeName = targetname ? SL_ConvertToString(targetname) : 0i64;
      script_classname = v6->script_classname;
      v23 = script_classname ? SL_ConvertToString(script_classname) : 0i64;
      classname = v6->classname;
      outName = classname ? (char *)SL_ConvertToString(classname) : 0i64;
      script_linkName = v6->script_linkName;
      v25 = script_linkName ? SL_ConvertToString(script_linkName) : 0i64;
      model = v6->model;
      if ( model )
      {
        v13 = model;
        if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
          __debugbreak();
        v26 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v13);
      }
      else
      {
        v26 = NULL;
      }
      if ( (_DWORD)v3 == 29 )
      {
        eType = v6->s.eType;
        if ( eType >= 29 )
        {
          v15 = eType - 29;
          EventTypeName = BG_GetEventTypeName(v15);
          if ( v15 == 3 )
          {
            v16 = truncate_cast<unsigned short,unsigned int>(v6->s.eventParm);
            SND_FindPrecachedAliasFromIndex(v16, (const char **)&outName);
          }
          else if ( v15 == 122 )
          {
            NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_VFX, v6->s.eventParm, (const char **)&outName);
          }
        }
      }
      if ( outName || v23 || v25 || EventTypeName || v26 )
      {
        v17 = &snapMeasurement->numEntityNames[v3];
        if ( *v17 > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1132, ASSERT_TYPE_ASSERT, "(snapMeasurement->numEntityNames[packetEntityType] <= ( sizeof( *array_counter( snapMeasurement->snapEntityNames[packetEntityType] ) ) + 0 ))", (const char *)&queryFormat, "snapMeasurement->numEntityNames[packetEntityType] <= ARRAY_COUNT( snapMeasurement->snapEntityNames[packetEntityType] )") )
          __debugbreak();
        if ( (int)*v17 <= 0 )
          goto LABEL_55;
        p_script_classname = &snapMeasurement->snapEntityNames[v3][0].script_classname;
        while ( 1 )
        {
          if ( p_script_classname == (const char **)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1114, ASSERT_TYPE_ASSERT, "(entityNamesA != nullptr)", (const char *)&queryFormat, "entityNamesA != nullptr") )
            __debugbreak();
          if ( p_script_classname[1] == outName && *p_script_classname == v23 && p_script_classname[2] == v25 && *(p_script_classname - 1) == EventTypeName && p_script_classname[3] == v26 )
            break;
          ++v8;
          p_script_classname += 6;
          if ( v8 >= (int)*v17 )
            goto LABEL_55;
        }
        if ( v8 == -1 )
        {
LABEL_55:
          v19 = *v17;
          if ( (unsigned int)v19 < 0x40 )
          {
            v20 = &snapMeasurement->snapEntityNames[v3][v19];
            v20->classname = outName;
            v20->targetname = EventTypeName;
            v20->script_classname = v23;
            v20->script_linkName = v25;
            v20->modelname = v26;
            v20->count = 1;
            ++*v17;
          }
        }
        else
        {
          ++snapMeasurement->snapEntityNames[v3][v8].count;
        }
      }
    }
  }
}

/*
==============
SV_BandwidthProfile_AddGlassToSnapshot
==============
*/
void SV_BandwidthProfile_AddGlassToSnapshot(const SnapshotInfo *snapInfo, const int numPieces, const int numBits)
{
  SnapMeasurement_t *v5; 

  if ( snapInfo )
  {
    v5 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
    if ( v5 )
    {
      v5->snapGlassPieces += truncate_cast<unsigned short,int>(numPieces);
      v5->snapGlassBits += truncate_cast<unsigned short,int>(numBits);
    }
  }
}

/*
==============
SV_BandwidthProfile_AddLastChangedFieldToSnapshot
==============
*/
void SV_BandwidthProfile_AddLastChangedFieldToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  SnapMeasurement_t *v4; 
  ServerMsgMeasurement_t *v5; 
  PacketEntityType_e packetEntityType; 
  PacketEntityType_e v7; 

  v4 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  if ( v4 )
  {
    v4->snapLastChangedFieldNumBits[snapInfo->packetEntityType] += truncate_cast<unsigned short,int>(numBits);
  }
  else
  {
    v5 = SV_BandwidthProfile_CanAddSnapDetailToSvMsgMeasurement(snapInfo);
    if ( v5 )
    {
      packetEntityType = snapInfo->packetEntityType;
      if ( packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT )
      {
        v5->clients.snapLastChangedFieldNumBits += truncate_cast<unsigned short,int>(numBits);
      }
      else if ( packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_AGENTSTATE )
      {
        v5->agents.snapLastChangedFieldNumBits += truncate_cast<unsigned short,int>(numBits);
      }
      else
      {
        v7 = snapInfo->packetEntityType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1073, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported packetEntityType %d for server message\n", v7) )
          __debugbreak();
      }
    }
  }
}

/*
==============
SV_BandwidthProfile_AddNetFieldToServerMsg
==============
*/
void SV_BandwidthProfile_AddNetFieldToServerMsg(const SnapshotInfo *const snapInfo, const __int16 entityNum, const int fieldNum, const int skippedFieldsBits, const int dataBits)
{
  __int64 v5; 
  __int16 v9; 
  unsigned int serverMsgMeasurementIndex; 
  PacketEntityType_e packetEntityType; 
  ServerMsgMeasurement_t *v12; 
  __int64 lastEntityNumIndex; 
  __int64 numEntities; 
  __int16 *entitieNums; 
  volatile bool *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  v5 = fieldNum;
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1408, ASSERT_TYPE_ASSERT, "(snapInfo != nullptr)", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( snapInfo->clientNum != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1409, ASSERT_TYPE_ASSERT, "(snapInfo->clientNum == -1)", (const char *)&queryFormat, "snapInfo->clientNum == INVALID_CLIENTNUM") )
    __debugbreak();
  v9 = 2047;
  if ( entityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1410, ASSERT_TYPE_ASSERT, "(entityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
    __debugbreak();
  serverMsgMeasurementIndex = snapInfo->serverMsgMeasurementIndex;
  if ( serverMsgMeasurementIndex != -1 )
  {
    packetEntityType = snapInfo->packetEntityType;
    if ( ((packetEntityType - 30) & 0xFFFFFFFD) == 0 )
    {
      SV_BandwidthProfile_AddNetFieldToSnapshot(snapInfo, v5, skippedFieldsBits, dataBits);
      return;
    }
    if ( packetEntityType >= ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT )
    {
      LODWORD(v17) = snapInfo->packetEntityType;
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1484, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported packetEntityType %d for server message\n", v17) )
        return;
    }
    else
    {
      if ( serverMsgMeasurementIndex >= 0xA )
      {
        LODWORD(v17) = snapInfo->serverMsgMeasurementIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1420, ASSERT_TYPE_ASSERT, "(unsigned)( snapInfo->serverMsgMeasurementIndex ) < (unsigned)( ( sizeof( *array_counter( s_svMsgMeasurements ) ) + 0 ) )", "snapInfo->serverMsgMeasurementIndex doesn't index ARRAY_COUNT( s_svMsgMeasurements )\n\t%i not in [0, %i)", v17, 10) )
          __debugbreak();
      }
      v12 = &s_svMsgMeasurements[snapInfo->serverMsgMeasurementIndex];
      LODWORD(lastEntityNumIndex) = v12->lastEntityNumIndex;
      if ( (_DWORD)lastEntityNumIndex != -1 )
      {
        if ( (unsigned int)lastEntityNumIndex >= 0x300 )
        {
          LODWORD(v19) = 768;
          LODWORD(v17) = v12->lastEntityNumIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1427, ASSERT_TYPE_ASSERT, "(unsigned)( svMsgMeasurement->lastEntityNumIndex ) < (unsigned)( ( sizeof( *array_counter( svMsgMeasurement->entitieNums ) ) + 0 ) )", "svMsgMeasurement->lastEntityNumIndex doesn't index ARRAY_COUNT( svMsgMeasurement->entitieNums )\n\t%i not in [0, %i)", v17, v19) )
            __debugbreak();
        }
        lastEntityNumIndex = v12->lastEntityNumIndex;
        v9 = v12->entitieNums[lastEntityNumIndex];
      }
      if ( v9 == entityNum )
      {
LABEL_32:
        if ( (_DWORD)lastEntityNumIndex == -1 )
          return;
        goto LABEL_33;
      }
      numEntities = v12->numEntities;
      LODWORD(lastEntityNumIndex) = 0;
      if ( (int)numEntities > 0 )
      {
        entitieNums = v12->entitieNums;
        while ( *entitieNums != entityNum )
        {
          LODWORD(lastEntityNumIndex) = lastEntityNumIndex + 1;
          ++entitieNums;
          if ( (int)lastEntityNumIndex >= (int)numEntities )
            goto LABEL_28;
        }
        if ( (_DWORD)lastEntityNumIndex != -1 )
        {
LABEL_33:
          if ( entityNum != v12->entitieNums[(int)lastEntityNumIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1470, ASSERT_TYPE_ASSERT, "(entityNum == svMsgMeasurement->entitieNums[entityNumIndex])", (const char *)&queryFormat, "entityNum == svMsgMeasurement->entitieNums[entityNumIndex]") )
            __debugbreak();
          if ( (unsigned int)lastEntityNumIndex >= 0x300 )
          {
            LODWORD(v19) = 768;
            LODWORD(v17) = lastEntityNumIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1471, ASSERT_TYPE_ASSERT, "(unsigned)( entityNumIndex ) < (unsigned)( ( sizeof( *array_counter( svMsgMeasurement->entities ) ) + 0 ) )", "entityNumIndex doesn't index ARRAY_COUNT( svMsgMeasurement->entities )\n\t%i not in [0, %i)", v17, v19) )
              __debugbreak();
          }
          v16 = &v12->inUse + 136 * (int)lastEntityNumIndex;
          if ( (unsigned int)v5 >= 0x44 )
          {
            LODWORD(v19) = 68;
            LODWORD(v17) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1474, ASSERT_TYPE_ASSERT, "(unsigned)( fieldNum ) < (unsigned)( ( sizeof( *array_counter( entityMeasurement->dataBits ) ) + 0 ) )", "fieldNum doesn't index ARRAY_COUNT( entityMeasurement->dataBits )\n\t%i not in [0, %i)", v17, v19) )
              __debugbreak();
            LODWORD(v20) = 68;
            LODWORD(v18) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1475, ASSERT_TYPE_ASSERT, "(unsigned)( fieldNum ) < (unsigned)( ( sizeof( *array_counter( entityMeasurement->skippedBits ) ) + 0 ) )", "fieldNum doesn't index ARRAY_COUNT( entityMeasurement->skippedBits )\n\t%i not in [0, %i)", v18, v20) )
              __debugbreak();
          }
          v16[v5 + 1616] = truncate_cast<unsigned char,int>(dataBits);
          v16[v5 + 1548] = truncate_cast<unsigned char,int>(skippedFieldsBits);
          v12->lastEntityNumIndex = lastEntityNumIndex;
          return;
        }
      }
LABEL_28:
      if ( (unsigned int)numEntities < 0x300 )
      {
        v12->entitieNums[numEntities] = entityNum;
        LODWORD(lastEntityNumIndex) = numEntities;
        if ( snapInfo->highPrecisionOrigin )
          v12->highPrecisionOriginEntities[numEntities] = 1;
        ++v12->numEntities;
        goto LABEL_32;
      }
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1463, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "svMsgMeasurement->entitieNums is full, increase SHIP_MAX_SNAPSHOT_ENTITIES_FOR_CLIENT?\n") )
        return;
    }
    __debugbreak();
  }
}

/*
==============
SV_BandwidthProfile_AddNetFieldToSnapshot
==============
*/
void SV_BandwidthProfile_AddNetFieldToSnapshot(const SnapshotInfo *snapInfo, const int fieldNum, const int skippedFieldsBits, const int dataBits)
{
  __int64 v5; 
  SnapMeasurement_t *v8; 
  SnapMeasurement_t *v9; 
  unsigned int NumChangesArray; 
  unsigned int NumBitsArray; 
  unsigned __int16 *v12; 
  unsigned int v13; 
  unsigned __int16 *v14; 
  ServerMsgMeasurement_t *v15; 
  PacketEntityType_e packetEntityType; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int16 *outArray; 
  unsigned __int16 *v20; 

  v5 = fieldNum;
  v8 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  v9 = v8;
  if ( v8 )
  {
    NumChangesArray = SnapMeasurement_t::getNumChangesArray(v8, (const PacketEntityType_e)snapInfo->packetEntityType, &outArray);
    NumBitsArray = SnapMeasurement_t::getNumBitsArray(v9, (const PacketEntityType_e)snapInfo->packetEntityType, &v20);
    v12 = outArray;
    v13 = NumBitsArray;
    if ( outArray )
    {
      v14 = v20;
      if ( v20 )
      {
        if ( (unsigned int)v5 >= NumChangesArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1015, ASSERT_TYPE_ASSERT, "(unsigned)( fieldNum ) < (unsigned)( numChangesArrayCount )", "fieldNum doesn't index numChangesArrayCount\n\t%i not in [0, %i)", v5, NumChangesArray) )
          __debugbreak();
        ++v12[v5];
        ++v9->snapNetfieldsTotalChanges[snapInfo->packetEntityType];
        if ( (unsigned int)v5 >= v13 )
        {
          LODWORD(v18) = v13;
          LODWORD(v17) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1019, ASSERT_TYPE_ASSERT, "(unsigned)( fieldNum ) < (unsigned)( numBitsArrayCount )", "fieldNum doesn't index numBitsArrayCount\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v14[v5] += truncate_cast<unsigned short,int>(dataBits);
        v9->snapNetfieldsTotalBits[snapInfo->packetEntityType] += dataBits;
        v9->snapSkippedNetfieldsNumBits[snapInfo->packetEntityType] += truncate_cast<unsigned short,int>(skippedFieldsBits);
      }
    }
  }
  else
  {
    v15 = SV_BandwidthProfile_CanAddSnapDetailToSvMsgMeasurement(snapInfo);
    if ( v15 )
    {
      packetEntityType = snapInfo->packetEntityType;
      if ( packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT )
      {
        if ( (unsigned int)v5 >= 0x76 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( fieldNum ) < (unsigned)( ( sizeof( *array_counter( snapNetfieldsNumChanges ) ) + 0 ) )", "fieldNum doesn't index ARRAY_COUNT( snapNetfieldsNumChanges )\n\t%i not in [0, %i)", v5, 118) )
          __debugbreak();
        ++v15->clients.snapNetfieldsNumChanges[v5];
        ++v15->clients.snapNetfieldsTotalChanges;
        if ( (unsigned int)v5 >= 0x76 )
        {
          LODWORD(v18) = 118;
          LODWORD(v17) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( fieldNum ) < (unsigned)( ( sizeof( *array_counter( snapNetfieldsNumBits ) ) + 0 ) )", "fieldNum doesn't index ARRAY_COUNT( snapNetfieldsNumBits )\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v15->clients.snapNetfieldsNumBits[v5] += truncate_cast<unsigned short,int>(dataBits);
        v15->clients.snapNetfieldsTotalBits += dataBits;
        v15->clients.snapSkippedNetfieldsNumBits += truncate_cast<unsigned short,int>(skippedFieldsBits);
      }
      else if ( packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_AGENTSTATE )
      {
        if ( (unsigned int)v5 >= 0x5A && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( fieldNum ) < (unsigned)( ( sizeof( *array_counter( snapNetfieldsNumChanges ) ) + 0 ) )", "fieldNum doesn't index ARRAY_COUNT( snapNetfieldsNumChanges )\n\t%i not in [0, %i)", v5, 90) )
          __debugbreak();
        ++v15->agents.snapNetfieldsNumChanges[v5];
        ++v15->agents.snapNetfieldsTotalChanges;
        if ( (unsigned int)v5 >= 0x5A )
        {
          LODWORD(v18) = 90;
          LODWORD(v17) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( fieldNum ) < (unsigned)( ( sizeof( *array_counter( snapNetfieldsNumBits ) ) + 0 ) )", "fieldNum doesn't index ARRAY_COUNT( snapNetfieldsNumBits )\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v15->agents.snapNetfieldsNumBits[v5] += truncate_cast<unsigned short,int>(dataBits);
        v15->agents.snapNetfieldsTotalBits += dataBits;
        v15->agents.snapSkippedNetfieldsNumBits += truncate_cast<unsigned short,int>(skippedFieldsBits);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1042, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported packetEntityType %d for server message\n", snapInfo->packetEntityType) )
      {
        __debugbreak();
      }
    }
  }
}

/*
==============
SV_BandwidthProfile_AddOmnvarName
==============
*/
void SV_BandwidthProfile_AddOmnvarName(const SnapshotInfo *snapInfo, const char *const omnvarName)
{
  SnapMeasurement_t *v3; 
  SnapMeasurement_t *v4; 
  __int64 omnvarNameIndex; 
  int v6; 

  v3 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  v4 = v3;
  if ( v3 )
  {
    omnvarNameIndex = v3->omnvarNameIndex;
    if ( 2048 - (int)omnvarNameIndex > 0 )
    {
      v6 = Com_sprintf_truncate(&v4->omnvarNames[omnvarNameIndex], 2048i64 - (int)omnvarNameIndex, ";%s", omnvarName);
      if ( v6 <= 0 )
        v4->omnvarNameIndex = 2048;
      else
        v4->omnvarNameIndex += truncate_cast<unsigned short,int>(v6);
    }
  }
}

/*
==============
SV_BandwidthProfile_AddPlayerStateOmnvarsToSnapshot
==============
*/
void SV_BandwidthProfile_AddPlayerStateOmnvarsToSnapshot(const SnapshotInfo *snapInfo, const int numBits, const unsigned int numOmnvars)
{
  SnapMeasurement_t *v5; 

  v5 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  if ( v5 )
  {
    v5->snapPlayerStateOmnvarNumBits += truncate_cast<unsigned short,int>(numBits);
    v5->snapPlayerStateOmnvarNumChanges += truncate_cast<unsigned short,unsigned int>(numOmnvars);
  }
}

/*
==============
SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot
==============
*/
void SV_BandwidthProfile_AddPlayerStateSegmentToSnapshot(const SnapshotInfo *snapInfo, const int numBits, const int segment)
{
  __int64 v3; 
  SnapMeasurement_t *v5; 

  v3 = segment;
  v5 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  if ( v5 )
  {
    if ( (int)v3 >= 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1271, ASSERT_TYPE_ASSERT, "(segment < PLAYERSTATE_SEGMENT_LAST)", (const char *)&queryFormat, "segment < PLAYERSTATE_SEGMENT_LAST") )
      __debugbreak();
    if ( (int)v3 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1272, ASSERT_TYPE_ASSERT, "(segment >= PLAYERSTATE_SEGMENT_FIRST)", (const char *)&queryFormat, "segment >= PLAYERSTATE_SEGMENT_FIRST") )
      __debugbreak();
    v5->snapPlayerStateSegmentBits[v3] += truncate_cast<unsigned short,int>(numBits);
  }
}

/*
==============
SV_BandwidthProfile_AddScoreboardToSnapshot
==============
*/
void SV_BandwidthProfile_AddScoreboardToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  SnapMeasurement_t *v3; 

  v3 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  if ( v3 )
  {
    ++v3->snapScoreBoardCount;
    v3->snapScoreBoardBits += truncate_cast<unsigned short,int>(numBits);
  }
}

/*
==============
SV_BandwidthProfile_AddScriptableChangeToSnapshot
==============
*/
void SV_BandwidthProfile_AddScriptableChangeToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  SnapMeasurement_t *v3; 

  v3 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  if ( v3 )
  {
    ++v3->snapScriptableChangeCount;
    v3->snapScriptableChangeBits += truncate_cast<unsigned short,int>(numBits);
  }
}

/*
==============
SV_BandwidthProfile_AddScriptableHeaderToSnapshot
==============
*/
void SV_BandwidthProfile_AddScriptableHeaderToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  SnapMeasurement_t *v3; 
  SnapMeasurement_t *v4; 
  int snapScriptableChangeBits; 
  int v6; 
  int v7; 

  v3 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  v4 = v3;
  if ( v3 )
  {
    snapScriptableChangeBits = v3->snapScriptableChangeBits;
    if ( numBits < snapScriptableChangeBits )
    {
      v7 = snapScriptableChangeBits;
      v6 = numBits;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1340, ASSERT_TYPE_ASSERT, "(numBits >= snapMeasurement->snapScriptableChangeBits)", "%s\n\tnumBits: %d, snapScriptableChangeBits: %d\n", "numBits >= snapMeasurement->snapScriptableChangeBits", v6, v7) )
        __debugbreak();
    }
    v4->snapScriptableHeaderBits += truncate_cast<unsigned short,int>(numBits - v4->snapScriptableChangeBits);
  }
}

/*
==============
SV_BandwidthProfile_AddSerializedEntityToSnapshot
==============
*/
void SV_BandwidthProfile_AddSerializedEntityToSnapshot(const SnapshotInfo *snapInfo, const __int16 entityNum, const bool highPrecisionOrigin)
{
  SnapMeasurement_t *v6; 
  SnapMeasurement_t *v7; 
  __int64 v8; 
  ServerMsgMeasurement_t *v9; 
  PacketEntityType_e packetEntityType; 

  v6 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  v7 = v6;
  if ( v6 )
  {
    ++v6->snapNumEntities[snapInfo->packetEntityType];
    if ( highPrecisionOrigin )
      ++v6->numHighPrecisionOriginEntities;
    SV_BandwidthProfile_AddEntityNames(v6, (const PacketEntityType_e)snapInfo->packetEntityType, entityNum);
    if ( snapInfo->packetEntityType < ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT )
    {
      v8 = (int)SV_SnapshotMP_GetNewEntityLoD(snapInfo, entityNum) + 2i64 * (int)snapInfo->packetEntityType + 5984;
      ++*((_WORD *)&v7->inUse + v8);
    }
  }
  else
  {
    v9 = SV_BandwidthProfile_CanAddSnapDetailToSvMsgMeasurement(snapInfo);
    if ( v9 )
    {
      packetEntityType = snapInfo->packetEntityType;
      if ( packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT )
      {
        ++v9->clients.snapNumEntities;
      }
      else if ( packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_AGENTSTATE )
      {
        ++v9->agents.snapNumEntities;
      }
    }
  }
}

/*
==============
SV_BandwidthProfile_AddServerCmdToSnapshot
==============
*/
void SV_BandwidthProfile_AddServerCmdToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  __int64 v2; 
  SnapMeasurement_t *v3; 

  v2 = (unsigned int)numBits;
  v3 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  if ( v3 )
  {
    if ( (int)v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", v2, "signed", (int)v2) )
      __debugbreak();
    v3->snapServerCmdBits += v2;
  }
}

/*
==============
SV_BandwidthProfile_AddUmbraGatesdToSnapshot
==============
*/
void SV_BandwidthProfile_AddUmbraGatesdToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  SnapMeasurement_t *v3; 

  v3 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  if ( v3 )
    v3->snapUmbraGatesBits += truncate_cast<unsigned short,int>(numBits);
}

/*
==============
SV_BandwidthProfile_AddWeaponMapEntryToSnapshot
==============
*/
void SV_BandwidthProfile_AddWeaponMapEntryToSnapshot(const SnapshotInfo *snapInfo, const int numBits)
{
  SnapMeasurement_t *v3; 

  v3 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  if ( v3 )
  {
    ++v3->snapWeaponMapNumEntries;
    v3->snapWeaponMapBits += truncate_cast<unsigned short,int>(numBits);
  }
}

/*
==============
SV_BandwidthProfile_AddWorldOmnvarsToSnapshot
==============
*/
void SV_BandwidthProfile_AddWorldOmnvarsToSnapshot(const SnapshotInfo *snapInfo, const int numBits, const unsigned int numOmnvars)
{
  SnapMeasurement_t *v5; 

  v5 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
  if ( v5 )
  {
    v5->snapWorldOmnvarNumBits += truncate_cast<unsigned short,int>(numBits);
    v5->snapWorldOmnvarNumChanges += truncate_cast<unsigned short,unsigned int>(numOmnvars);
  }
}

/*
==============
SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement
==============
*/
SnapMeasurement_t *SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(const SnapshotInfo *snapInfo)
{
  unsigned int snapMeasurementIndex; 
  SnapMeasurement_t *v3; 
  __int64 v5; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 956, ASSERT_TYPE_ASSERT, "(snapInfo != nullptr)", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( !s_svSnapDetailsEnabled )
    return 0i64;
  snapMeasurementIndex = snapInfo->snapMeasurementIndex;
  if ( snapMeasurementIndex == -1 || snapInfo->clientNum == -1 || snapInfo->archived )
    return 0i64;
  if ( snapMeasurementIndex >= 6 )
  {
    LODWORD(v5) = snapInfo->snapMeasurementIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 961, ASSERT_TYPE_ASSERT, "(unsigned)( snapInfo->snapMeasurementIndex ) < (unsigned)( ( sizeof( *array_counter( s_snapMeasurements ) ) + 0 ) )", "snapInfo->snapMeasurementIndex doesn't index ARRAY_COUNT( s_snapMeasurements )\n\t%i not in [0, %i)", v5, 6) )
      __debugbreak();
  }
  v3 = &s_snapMeasurements[snapInfo->snapMeasurementIndex];
  if ( !v3->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 965, ASSERT_TYPE_ASSERT, "(snapMeasurement->inUse)", (const char *)&queryFormat, "snapMeasurement->inUse") )
    __debugbreak();
  if ( v3->measurementHandle == 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 966, ASSERT_TYPE_ASSERT, "(snapMeasurement->measurementHandle != (0xffffffff))", (const char *)&queryFormat, "snapMeasurement->measurementHandle != INVALID_MEASUREMENT_HANDLE") )
    __debugbreak();
  return v3;
}

/*
==============
SV_BandwidthProfile_CanAddSnapDetailToSvMsgMeasurement
==============
*/
ServerMsgMeasurement_t *SV_BandwidthProfile_CanAddSnapDetailToSvMsgMeasurement(const SnapshotInfo *snapInfo)
{
  unsigned int serverMsgMeasurementIndex; 
  ServerMsgMeasurement_t *v3; 
  __int64 v5; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 976, ASSERT_TYPE_ASSERT, "(snapInfo != nullptr)", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( !s_svSnapDetailsEnabled )
    return 0i64;
  serverMsgMeasurementIndex = snapInfo->serverMsgMeasurementIndex;
  if ( serverMsgMeasurementIndex == -1 || snapInfo->clientNum != -1 || snapInfo->archived )
    return 0i64;
  if ( serverMsgMeasurementIndex >= 0xA )
  {
    LODWORD(v5) = snapInfo->serverMsgMeasurementIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 981, ASSERT_TYPE_ASSERT, "(unsigned)( snapInfo->serverMsgMeasurementIndex ) < (unsigned)( ( sizeof( *array_counter( s_svMsgMeasurements ) ) + 0 ) )", "snapInfo->serverMsgMeasurementIndex doesn't index ARRAY_COUNT( s_svMsgMeasurements )\n\t%i not in [0, %i)", v5, 10) )
      __debugbreak();
  }
  v3 = &s_svMsgMeasurements[snapInfo->serverMsgMeasurementIndex];
  if ( !v3->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 985, ASSERT_TYPE_ASSERT, "(snapMeasurement->inUse)", (const char *)&queryFormat, "snapMeasurement->inUse") )
    __debugbreak();
  return v3;
}

/*
==============
SV_BandwidthProfile_CopyServerMsgAgentsToClientSnapshot
==============
*/
void SV_BandwidthProfile_CopyServerMsgAgentsToClientSnapshot(const SnapshotInfo *snapInfo)
{
  SnapMeasurement_t *v2; 
  unsigned __int16 *snapNetfieldsNumChangesAgentState; 
  unsigned int v4; 
  ServerMsgMeasurement_t *v5; 
  unsigned int v6; 
  signed __int64 v7; 
  unsigned __int16 *v8; 
  unsigned __int16 *snapNetfieldsNumBitsAgentState; 
  unsigned int *v10; 
  unsigned __int16 *v11; 
  unsigned __int16 *v12; 
  unsigned __int16 *v13; 
  unsigned __int16 *v14; 
  __int64 v15; 

  if ( snapInfo->packetEntityType != ANALYZE_DATATYPE_ENTITYTYPE_AGENTSTATE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1586, ASSERT_TYPE_ASSERT, "(snapInfo->packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_AGENTSTATE)", (const char *)&queryFormat, "snapInfo->packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_AGENTSTATE") )
    __debugbreak();
  if ( snapInfo->serverMsgMeasurementIndex != -1 )
  {
    v2 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
    if ( v2 )
    {
      if ( snapInfo->serverMsgMeasurementIndex >= 0xAu )
      {
        LODWORD(v15) = snapInfo->serverMsgMeasurementIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1593, ASSERT_TYPE_ASSERT, "(unsigned)( snapInfo->serverMsgMeasurementIndex ) < (unsigned)( ( sizeof( *array_counter( s_svMsgMeasurements ) ) + 0 ) )", "snapInfo->serverMsgMeasurementIndex doesn't index ARRAY_COUNT( s_svMsgMeasurements )\n\t%i not in [0, %i)", v15, 10) )
          __debugbreak();
      }
      snapNetfieldsNumChangesAgentState = v2->snapNetfieldsNumChangesAgentState;
      v4 = 0;
      v5 = &s_svMsgMeasurements[snapInfo->serverMsgMeasurementIndex];
      v6 = 0;
      v7 = (char *)v5 - (char *)v2;
      do
      {
        *snapNetfieldsNumChangesAgentState += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101770);
        snapNetfieldsNumChangesAgentState[1] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101772);
        snapNetfieldsNumChangesAgentState[2] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101774);
        snapNetfieldsNumChangesAgentState[3] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101776);
        snapNetfieldsNumChangesAgentState[4] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101778);
        snapNetfieldsNumChangesAgentState[5] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101780);
        snapNetfieldsNumChangesAgentState[6] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101782);
        snapNetfieldsNumChangesAgentState[7] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101784);
        snapNetfieldsNumChangesAgentState[8] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101786);
        snapNetfieldsNumChangesAgentState[9] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101788);
        snapNetfieldsNumChangesAgentState[10] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101790);
        snapNetfieldsNumChangesAgentState[11] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101792);
        snapNetfieldsNumChangesAgentState[12] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101794);
        snapNetfieldsNumChangesAgentState[13] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101796);
        snapNetfieldsNumChangesAgentState[14] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101798);
        snapNetfieldsNumChangesAgentState[15] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101800);
        snapNetfieldsNumChangesAgentState[16] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101802);
        snapNetfieldsNumChangesAgentState[17] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101804);
        snapNetfieldsNumChangesAgentState[18] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101806);
        snapNetfieldsNumChangesAgentState[19] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101808);
        snapNetfieldsNumChangesAgentState[20] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101810);
        snapNetfieldsNumChangesAgentState[21] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101812);
        snapNetfieldsNumChangesAgentState[22] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101814);
        snapNetfieldsNumChangesAgentState[23] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101816);
        snapNetfieldsNumChangesAgentState[24] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101818);
        snapNetfieldsNumChangesAgentState[25] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101820);
        snapNetfieldsNumChangesAgentState[26] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101822);
        snapNetfieldsNumChangesAgentState[27] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101824);
        snapNetfieldsNumChangesAgentState[28] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101826);
        snapNetfieldsNumChangesAgentState[29] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101828);
        snapNetfieldsNumChangesAgentState[30] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101830);
        snapNetfieldsNumChangesAgentState[31] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101832);
        snapNetfieldsNumChangesAgentState[32] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101834);
        snapNetfieldsNumChangesAgentState[33] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101836);
        snapNetfieldsNumChangesAgentState[34] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101838);
        snapNetfieldsNumChangesAgentState[35] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101840);
        snapNetfieldsNumChangesAgentState[36] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101842);
        snapNetfieldsNumChangesAgentState[37] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101844);
        snapNetfieldsNumChangesAgentState[38] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101846);
        snapNetfieldsNumChangesAgentState[39] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101848);
        snapNetfieldsNumChangesAgentState[40] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101850);
        v6 += 45;
        snapNetfieldsNumChangesAgentState[41] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101852);
        snapNetfieldsNumChangesAgentState[42] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101854);
        snapNetfieldsNumChangesAgentState[43] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101856);
        snapNetfieldsNumChangesAgentState[44] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesAgentState + v7 + 101858);
        snapNetfieldsNumChangesAgentState += 45;
      }
      while ( v6 < 0x5A );
      v8 = &v2->snapNetfieldsTotalChanges[snapInfo->packetEntityType];
      *v8 += v5->agents.snapNetfieldsTotalChanges;
      snapNetfieldsNumBitsAgentState = v2->snapNetfieldsNumBitsAgentState;
      do
      {
        *snapNetfieldsNumBitsAgentState += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96146);
        snapNetfieldsNumBitsAgentState[1] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96148);
        snapNetfieldsNumBitsAgentState[2] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96150);
        snapNetfieldsNumBitsAgentState[3] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96152);
        snapNetfieldsNumBitsAgentState[4] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96154);
        snapNetfieldsNumBitsAgentState[5] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96156);
        snapNetfieldsNumBitsAgentState[6] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96158);
        snapNetfieldsNumBitsAgentState[7] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96160);
        snapNetfieldsNumBitsAgentState[8] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96162);
        snapNetfieldsNumBitsAgentState[9] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96164);
        snapNetfieldsNumBitsAgentState[10] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96166);
        snapNetfieldsNumBitsAgentState[11] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96168);
        snapNetfieldsNumBitsAgentState[12] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96170);
        snapNetfieldsNumBitsAgentState[13] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96172);
        snapNetfieldsNumBitsAgentState[14] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96174);
        snapNetfieldsNumBitsAgentState[15] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96176);
        snapNetfieldsNumBitsAgentState[16] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96178);
        snapNetfieldsNumBitsAgentState[17] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96180);
        snapNetfieldsNumBitsAgentState[18] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96182);
        snapNetfieldsNumBitsAgentState[19] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96184);
        snapNetfieldsNumBitsAgentState[20] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96186);
        snapNetfieldsNumBitsAgentState[21] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96188);
        snapNetfieldsNumBitsAgentState[22] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96190);
        snapNetfieldsNumBitsAgentState[23] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96192);
        snapNetfieldsNumBitsAgentState[24] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96194);
        snapNetfieldsNumBitsAgentState[25] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96196);
        snapNetfieldsNumBitsAgentState[26] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96198);
        snapNetfieldsNumBitsAgentState[27] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96200);
        snapNetfieldsNumBitsAgentState[28] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96202);
        snapNetfieldsNumBitsAgentState[29] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96204);
        snapNetfieldsNumBitsAgentState[30] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96206);
        snapNetfieldsNumBitsAgentState[31] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96208);
        snapNetfieldsNumBitsAgentState[32] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96210);
        snapNetfieldsNumBitsAgentState[33] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96212);
        snapNetfieldsNumBitsAgentState[34] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96214);
        snapNetfieldsNumBitsAgentState[35] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96216);
        snapNetfieldsNumBitsAgentState[36] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96218);
        snapNetfieldsNumBitsAgentState[37] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96220);
        snapNetfieldsNumBitsAgentState[38] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96222);
        snapNetfieldsNumBitsAgentState[39] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96224);
        snapNetfieldsNumBitsAgentState[40] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96226);
        v4 += 45;
        snapNetfieldsNumBitsAgentState[41] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96228);
        snapNetfieldsNumBitsAgentState[42] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96230);
        snapNetfieldsNumBitsAgentState[43] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96232);
        snapNetfieldsNumBitsAgentState[44] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsAgentState + v7 + 96234);
        snapNetfieldsNumBitsAgentState += 45;
      }
      while ( v4 < 0x5A );
      v10 = &v2->snapNetfieldsTotalBits[snapInfo->packetEntityType];
      *v10 += v5->agents.snapNetfieldsTotalBits;
      v11 = &v2->snapSkippedNetfieldsNumBits[snapInfo->packetEntityType];
      *v11 += v5->agents.snapSkippedNetfieldsNumBits;
      v12 = &v2->snapLastChangedFieldNumBits[snapInfo->packetEntityType];
      *v12 += v5->agents.snapLastChangedFieldNumBits;
      v13 = &v2->snapEntityIndexNumBits[snapInfo->packetEntityType];
      *v13 += v5->agents.snapEntityIndexNumBits;
      v14 = &v2->snapNumEntities[snapInfo->packetEntityType];
      *v14 += v5->agents.snapNumEntities;
    }
  }
}

/*
==============
SV_BandwidthProfile_CopyServerMsgClientsToClientSnapshot
==============
*/
void SV_BandwidthProfile_CopyServerMsgClientsToClientSnapshot(const SnapshotInfo *snapInfo)
{
  SnapMeasurement_t *v2; 
  unsigned __int16 *snapNetfieldsNumChangesClientState; 
  unsigned int v4; 
  ServerMsgMeasurement_t *v5; 
  unsigned int v6; 
  signed __int64 v7; 
  unsigned __int16 *v8; 
  unsigned __int16 *snapNetfieldsNumBitsClientState; 
  unsigned int *v10; 
  unsigned __int16 *v11; 
  unsigned __int16 *v12; 
  unsigned __int16 *v13; 
  unsigned __int16 *v14; 
  __int64 v15; 

  if ( snapInfo->packetEntityType != ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1551, ASSERT_TYPE_ASSERT, "(snapInfo->packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_CLIENTSTATE)", (const char *)&queryFormat, "snapInfo->packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_CLIENTSTATE") )
    __debugbreak();
  if ( snapInfo->serverMsgMeasurementIndex != -1 )
  {
    v2 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
    if ( v2 )
    {
      if ( snapInfo->serverMsgMeasurementIndex >= 0xAu )
      {
        LODWORD(v15) = snapInfo->serverMsgMeasurementIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1558, ASSERT_TYPE_ASSERT, "(unsigned)( snapInfo->serverMsgMeasurementIndex ) < (unsigned)( ( sizeof( *array_counter( s_svMsgMeasurements ) ) + 0 ) )", "snapInfo->serverMsgMeasurementIndex doesn't index ARRAY_COUNT( s_svMsgMeasurements )\n\t%i not in [0, %i)", v15, 10) )
          __debugbreak();
      }
      snapNetfieldsNumChangesClientState = v2->snapNetfieldsNumChangesClientState;
      v4 = 0;
      v5 = &s_svMsgMeasurements[snapInfo->serverMsgMeasurementIndex];
      v6 = 0;
      v7 = (char *)v5 - (char *)v2;
      do
      {
        v6 += 2;
        *snapNetfieldsNumChangesClientState += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesClientState + v7 + 102668);
        snapNetfieldsNumChangesClientState[1] += *(unsigned __int16 *)((char *)snapNetfieldsNumChangesClientState + v7 + 102670);
        snapNetfieldsNumChangesClientState += 2;
      }
      while ( v6 < 0x76 );
      v8 = &v2->snapNetfieldsTotalChanges[snapInfo->packetEntityType];
      *v8 += v5->clients.snapNetfieldsTotalChanges;
      snapNetfieldsNumBitsClientState = v2->snapNetfieldsNumBitsClientState;
      do
      {
        v4 += 2;
        *snapNetfieldsNumBitsClientState += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsClientState + v7 + 97100);
        snapNetfieldsNumBitsClientState[1] += *(unsigned __int16 *)((char *)snapNetfieldsNumBitsClientState + v7 + 97102);
        snapNetfieldsNumBitsClientState += 2;
      }
      while ( v4 < 0x76 );
      v10 = &v2->snapNetfieldsTotalBits[snapInfo->packetEntityType];
      *v10 += v5->clients.snapNetfieldsTotalBits;
      v11 = &v2->snapSkippedNetfieldsNumBits[snapInfo->packetEntityType];
      *v11 += v5->clients.snapSkippedNetfieldsNumBits;
      v12 = &v2->snapLastChangedFieldNumBits[snapInfo->packetEntityType];
      *v12 += v5->clients.snapLastChangedFieldNumBits;
      v13 = &v2->snapEntityIndexNumBits[snapInfo->packetEntityType];
      *v13 += v5->clients.snapEntityIndexNumBits;
      v14 = &v2->snapNumEntities[snapInfo->packetEntityType];
      *v14 += v5->clients.snapNumEntities;
    }
  }
}

/*
==============
SV_BandwidthProfile_CopyServerMsgEntityToClientSnapshot
==============
*/
void SV_BandwidthProfile_CopyServerMsgEntityToClientSnapshot(const SnapshotInfo *snapInfo, const __int16 entityNum, const NetFieldLoD entityLoD)
{
  bool v5; 
  ServerMsgMeasurement_t *v6; 
  entityType_s v7; 
  entityType_s v8; 
  unsigned int NetFieldsCountForEntityType; 
  __int64 numEntities; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  unsigned int v14; 
  __int64 v15; 
  __int16 *entitieNums; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  NetFieldLoD v20; 
  NetFieldLoD *p_netfieldLoD; 
  unsigned __int8 v22; 
  SnapMeasurement_t *v23; 
  SnapMeasurement_t *v24; 
  __int64 v25; 
  ServerMsgMeasurement_t *v26; 
  PacketEntityType_e packetEntityType; 
  __int64 v28; 
  __int64 v29; 
  const NetField *array; 
  ServerMsgMeasurement_t *v32; 

  if ( snapInfo->packetEntityType >= ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1492, ASSERT_TYPE_ASSERT, "(snapInfo->packetEntityType < ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT)", (const char *)&queryFormat, "snapInfo->packetEntityType < ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT") )
    __debugbreak();
  if ( snapInfo->serverMsgMeasurementIndex != -1 && SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo) )
  {
    v5 = 0;
    if ( snapInfo->serverMsgMeasurementIndex >= 0xAu )
    {
      LODWORD(v28) = snapInfo->serverMsgMeasurementIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1499, ASSERT_TYPE_ASSERT, "(unsigned)( snapInfo->serverMsgMeasurementIndex ) < (unsigned)( ( sizeof( *array_counter( s_svMsgMeasurements ) ) + 0 ) )", "snapInfo->serverMsgMeasurementIndex doesn't index ARRAY_COUNT( s_svMsgMeasurements )\n\t%i not in [0, %i)", v28, 10) )
        __debugbreak();
    }
    v6 = &s_svMsgMeasurements[snapInfo->serverMsgMeasurementIndex];
    v32 = v6;
    v7 = truncate_cast<enum entityType_s,enum PacketEntityType_e>(snapInfo->packetEntityType);
    array = MSG_GetStateFieldListForEntityType(v7)->array;
    v8 = truncate_cast<enum entityType_s,enum PacketEntityType_e>(snapInfo->packetEntityType);
    NetFieldsCountForEntityType = MSG_GetNetFieldsCountForEntityType(v8);
    numEntities = v6->numEntities;
    v11 = 0;
    v12 = NetFieldsCountForEntityType;
    v13 = -1;
    v14 = 0;
    if ( numEntities <= 0 )
      goto LABEL_13;
    v15 = 0i64;
    entitieNums = v6->entitieNums;
    while ( *entitieNums != entityNum )
    {
      ++v14;
      ++v15;
      ++entitieNums;
      if ( v15 >= numEntities )
        goto LABEL_13;
    }
    v13 = v14;
    if ( v14 == -1 )
    {
LABEL_13:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1517, ASSERT_TYPE_ASSERT, "(entityNumIndex != -1)", (const char *)&queryFormat, "entityNumIndex != -1") )
        __debugbreak();
    }
    else if ( v14 < 0x300 )
    {
LABEL_17:
      if ( v13 != -1 )
      {
        v17 = v13;
        if ( entityNum != v6->entitieNums[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1522, ASSERT_TYPE_ASSERT, "(entityNum == svMsgMeasurement->entitieNums[entityNumIndex])", (const char *)&queryFormat, "entityNum == svMsgMeasurement->entitieNums[entityNumIndex]") )
          __debugbreak();
        v18 = (__int64)&v6->entities[v13];
        if ( v12 > 0x44 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1524, ASSERT_TYPE_ASSERT, "(netFieldsCount <= ( sizeof( *array_counter( entityMeasurements->dataBits ) ) + 0 ))", (const char *)&queryFormat, "netFieldsCount <= ARRAY_COUNT( entityMeasurements->dataBits )") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1525, ASSERT_TYPE_ASSERT, "(netFieldsCount <= ( sizeof( *array_counter( entityMeasurements->skippedBits ) ) + 0 ))", (const char *)&queryFormat, "netFieldsCount <= ARRAY_COUNT( entityMeasurements->skippedBits )") )
            __debugbreak();
        }
        if ( v12 )
        {
          v19 = 0i64;
          v20 = entityLoD;
          p_netfieldLoD = &array->netfieldLoD;
          do
          {
            if ( v20 == NetFieldLoD_High || *p_netfieldLoD == NetFieldLoD_Low )
            {
              v22 = *(_BYTE *)(v19 + v18 + 68);
              if ( v22 )
                SV_BandwidthProfile_AddNetFieldToSnapshot(snapInfo, v11, *(unsigned __int8 *)(v19 + v18), v22);
              v20 = entityLoD;
            }
            ++v11;
            ++v19;
            p_netfieldLoD += 6;
          }
          while ( v11 < v12 );
        }
        v5 = v32->highPrecisionOriginEntities[v17];
      }
      v23 = SV_BandwidthProfile_CanAddSnapDetailToSnapMeasurement(snapInfo);
      v24 = v23;
      if ( v23 )
      {
        ++v23->snapNumEntities[snapInfo->packetEntityType];
        if ( v5 )
          ++v23->numHighPrecisionOriginEntities;
        SV_BandwidthProfile_AddEntityNames(v23, (const PacketEntityType_e)snapInfo->packetEntityType, entityNum);
        if ( snapInfo->packetEntityType < ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT )
        {
          v25 = (int)SV_SnapshotMP_GetNewEntityLoD(snapInfo, entityNum) + 2i64 * (int)snapInfo->packetEntityType + 5984;
          ++*((_WORD *)&v24->inUse + v25);
        }
      }
      else
      {
        v26 = SV_BandwidthProfile_CanAddSnapDetailToSvMsgMeasurement(snapInfo);
        if ( v26 )
        {
          packetEntityType = snapInfo->packetEntityType;
          if ( packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT )
          {
            ++v26->clients.snapNumEntities;
          }
          else if ( packetEntityType == ANALYZE_DATATYPE_ENTITYTYPE_AGENTSTATE )
          {
            ++v26->agents.snapNumEntities;
          }
        }
      }
      return;
    }
    LODWORD(v29) = 768;
    LODWORD(v28) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 1518, ASSERT_TYPE_ASSERT, "(unsigned)( entityNumIndex ) < (unsigned)( ( sizeof( *array_counter( svMsgMeasurement->entities ) ) + 0 ) )", "entityNumIndex doesn't index ARRAY_COUNT( svMsgMeasurement->entities )\n\t%i not in [0, %i)", v28, v29) )
      __debugbreak();
    goto LABEL_17;
  }
}

/*
==============
SV_BandwidthProfile_EndSnapshot
==============
*/
void SV_BandwidthProfile_EndSnapshot(const SnapshotInfo *snapInfo, const int numBits, const bool writeFullSnap, const bool isBlindDelta, const bool isInKillcam, const SvWriteSnapshotResult *result)
{
  SnapMeasurement_t *v7; 
  unsigned int v8; 
  OnlineTimeSeriesLog *v9; 
  __int64 v10; 
  const unsigned __int16 *snapSkippedNetfieldsNumBits; 
  unsigned int *numEntityNames; 
  unsigned int v13; 
  unsigned int count; 
  unsigned __int64 v15; 
  const char *v16; 
  unsigned __int8 v17; 
  bool v18; 
  unsigned int NumBitsArray; 
  unsigned int v20; 
  unsigned __int16 *v21; 
  signed __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  char *v27; 
  unsigned int i; 
  unsigned __int64 v29; 
  const char *v30; 
  unsigned __int16 snapUmbraGatesBits; 
  unsigned int snapServerCmdBits; 
  unsigned __int16 *snapPlayerStateSegmentBits; 
  unsigned __int16 v34; 
  const char *PlayerStateSegmentShortName; 
  const char *v36; 
  unsigned __int16 snapScriptableHeaderBits; 
  unsigned __int8 v38; 
  int currentPacketBuiltEvent; 
  unsigned __int8 v40; 
  unsigned __int8 numHighPrecisionOriginEntities; 
  __int64 snapMeasurementIndex; 
  char *fmt; 
  __int64 v44; 
  __int64 v45; 
  bool BaselineValidState; 
  unsigned __int16 v49; 
  int v50; 
  unsigned int value; 
  unsigned __int64 v53; 
  const unsigned __int16 *v54; 
  __int64 v55; 
  unsigned int *v56; 
  unsigned __int64 v57; 
  unsigned __int64 v58; 
  unsigned __int64 v59; 
  unsigned __int64 v60; 
  char *valueName; 
  char *GameType; 
  unsigned __int16 *v64; 
  unsigned __int16 *outArray; 
  const SvWriteSnapshotResult *v66; 
  char v67[512]; 
  char dest[128]; 

  v66 = result;
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 650, ASSERT_TYPE_ASSERT, "(snapInfo != nullptr)", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( s_svSnapDetailsEnabled && snapInfo->snapMeasurementIndex != -1 )
  {
    memset_0(v67, 0, sizeof(v67));
    if ( snapInfo->clientNum == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 655, ASSERT_TYPE_ASSERT, "(snapInfo->clientNum != -1)", (const char *)&queryFormat, "snapInfo->clientNum != INVALID_CLIENTNUM") )
      __debugbreak();
    if ( snapInfo->snapMeasurementIndex >= 6u )
    {
      LODWORD(v44) = snapInfo->snapMeasurementIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 656, ASSERT_TYPE_ASSERT, "(unsigned)( snapInfo->snapMeasurementIndex ) < (unsigned)( ( sizeof( *array_counter( s_snapMeasurements ) ) + 0 ) )", "snapInfo->snapMeasurementIndex doesn't index ARRAY_COUNT( s_snapMeasurements )\n\t%i not in [0, %i)", v44, 6) )
        __debugbreak();
    }
    v7 = &s_snapMeasurements[snapInfo->snapMeasurementIndex];
    if ( !v7->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 658, ASSERT_TYPE_ASSERT, "(snapMeasurement->inUse)", (const char *)&queryFormat, "snapMeasurement->inUse") )
      __debugbreak();
    if ( v7->measurementHandle == 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 659, ASSERT_TYPE_ASSERT, "(snapMeasurement->measurementHandle != (0xffffffff))", (const char *)&queryFormat, "snapMeasurement->measurementHandle != INVALID_MEASUREMENT_HANDLE") )
      __debugbreak();
    v8 = 0;
    v9 = OnlineTimeSeriesLog::Get();
    v53 = 0i64;
    v57 = 0i64;
    v58 = 0i64;
    v59 = 0i64;
    v60 = 0i64;
    valueName = (char *)SV_Game_GetMapName();
    GameType = (char *)SV_GameMP_GetGameType();
    v10 = 0i64;
    BaselineValidState = SV_NetConstBaselines_GetBaselineValidState();
    snapSkippedNetfieldsNumBits = v7->snapSkippedNetfieldsNumBits;
    v55 = 0i64;
    numEntityNames = v7->numEntityNames;
    v54 = v7->snapSkippedNetfieldsNumBits;
    v56 = v7->numEntityNames;
    v13 = 0;
    v50 = 0;
    do
    {
      v49 = *(snapSkippedNetfieldsNumBits - 2971);
      value = *(numEntityNames - 23188);
      if ( v49 || *(numEntityNames - 23188) )
      {
        count = SV_GetNetfieldListForPacketEntityType((const PacketEntityType_e)v13)->count;
        memset_0(dest, 0, sizeof(dest));
        LODWORD(fmt) = v13;
        Com_sprintf<128>((char (*)[128])dest, "%s_%s%d", "sv_snapdetails5", "@e", fmt);
        v15 = OnlineTimeSeriesLog::BeginMeasurement(v9, dest);
        if ( v15 == 0xFFFFFFFF )
        {
          numEntityNames = v56;
        }
        else
        {
          OnlineTimeSeriesLog::AddMetaTag(v9, v15, "mapName", valueName);
          OnlineTimeSeriesLog::AddMetaTag(v9, v15, "gameType", GameType);
          if ( !s_netFieldConfigHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 346, ASSERT_TYPE_ASSERT, "(s_netFieldConfigHash != 0)", (const char *)&queryFormat, "s_netFieldConfigHash != 0") )
            __debugbreak();
          OnlineTimeSeriesLog::AddMetaTag(v9, v15, "netFieldConfigHash", s_netFieldConfigHashString);
          v16 = "false";
          if ( BaselineValidState )
            v16 = "true";
          OnlineTimeSeriesLog::AddMetaTag(v9, v15, "validConstBaseline", v16);
          v17 = truncate_cast<unsigned char,int>(snapInfo->clientNum);
          OnlineTimeSeriesLog::AddFieldValue(v9, v15, "cl", v17);
          OnlineTimeSeriesLog::AddFieldValue(v9, v15, "writeFullSnap", writeFullSnap);
          OnlineTimeSeriesLog::AddFieldValue(v9, v15, "isBlindDelta", isBlindDelta);
          OnlineTimeSeriesLog::AddFieldValue(v9, v15, "packetIsDelta", snapInfo->packetIsDelta);
          OnlineTimeSeriesLog::AddFieldValue(v9, v15, "isInKillcam", isInKillcam);
          v18 = count <= SnapMeasurement_t::getNumChangesArray(v7, (const PacketEntityType_e)v13, &outArray);
          NumBitsArray = SnapMeasurement_t::getNumBitsArray(v7, (const PacketEntityType_e)v13, &v64);
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 720, ASSERT_TYPE_ASSERT, "(numFields <= numChangesArrayCount)", (const char *)&queryFormat, "numFields <= numChangesArrayCount") )
            __debugbreak();
          if ( count > NumBitsArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 721, ASSERT_TYPE_ASSERT, "(numFields <= numBitsArrayCount)", (const char *)&queryFormat, "numFields <= numBitsArrayCount") )
            __debugbreak();
          v20 = 0;
          if ( count )
          {
            v21 = v64;
            v22 = (char *)outArray - (char *)v64;
            do
            {
              if ( *(unsigned __int16 *)((char *)v21 + v22) )
              {
                Com_sprintf_truncate<512>((char (*)[512])v67, "c_%s%d", "@n", v20);
                OnlineTimeSeriesLog::AddFieldValue(v9, v15, v67, *(unsigned __int16 *)((char *)v21 + v22));
              }
              if ( *v21 )
              {
                Com_sprintf_truncate<512>((char (*)[512])v67, "b_%s%d", "@n", v20);
                OnlineTimeSeriesLog::AddFieldValue(v9, v15, v67, *v21);
              }
              ++v20;
              ++v21;
            }
            while ( v20 < count );
            v8 = 0;
          }
          OnlineTimeSeriesLog::AddFieldValue(v9, v15, "c", v49);
          OnlineTimeSeriesLog::AddFieldValue(v9, v15, "b", value);
          OnlineTimeSeriesLog::AddFieldValue(v9, v15, "s", *v54);
          OnlineTimeSeriesLog::AddFieldValue(v9, v15, "e", v54[102]);
          numEntityNames = v56;
          OnlineTimeSeriesLog::AddFieldValue(v9, v15, "l", *((_WORD *)v56 - 46172));
          OnlineTimeSeriesLog::AddFieldValue(v9, v15, "h", *((_WORD *)v56 - 46171));
          v13 = v50;
          if ( v50 < 30 )
          {
            v23 = 0;
            if ( *v56 )
            {
              do
              {
                v24 = v55 + v23;
                v25 = v24;
                if ( v7->snapEntityNames[0][v24].classname )
                {
                  Com_sprintf_truncate<512>((char (*)[512])v67, "cn_%d", v23);
                  OnlineTimeSeriesLog::AddFieldValue(v9, v15, v67, v7->snapEntityNames[0][v25].classname);
                }
                if ( v7->snapEntityNames[0][v25].script_classname )
                {
                  Com_sprintf_truncate<512>((char (*)[512])v67, "scn_%d", v23);
                  OnlineTimeSeriesLog::AddFieldValue(v9, v15, v67, v7->snapEntityNames[0][v25].script_classname);
                }
                if ( v7->snapEntityNames[0][v25].script_linkName )
                {
                  Com_sprintf_truncate<512>((char (*)[512])v67, "sln_%d", v23);
                  OnlineTimeSeriesLog::AddFieldValue(v9, v15, v67, v7->snapEntityNames[0][v25].script_linkName);
                }
                if ( v7->snapEntityNames[0][v25].targetname )
                {
                  Com_sprintf_truncate<512>((char (*)[512])v67, "tn_%d", v23);
                  OnlineTimeSeriesLog::AddFieldValue(v9, v15, v67, v7->snapEntityNames[0][v25].targetname);
                }
                if ( v7->snapEntityNames[0][v25].modelname )
                {
                  Com_sprintf_truncate<512>((char (*)[512])v67, "mn_%d", v23);
                  OnlineTimeSeriesLog::AddFieldValue(v9, v15, v67, v7->snapEntityNames[0][v25].modelname);
                }
                if ( !v7->snapEntityNames[0][v25].count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 787, ASSERT_TYPE_ASSERT, "(entityNames->count > 0)", (const char *)&queryFormat, "entityNames->count > 0") )
                  __debugbreak();
                Com_sprintf_truncate<512>((char (*)[512])v67, "nn_%d", v23);
                OnlineTimeSeriesLog::AddFieldValue(v9, v15, v67, v7->snapEntityNames[0][v25].count);
                ++v23;
              }
              while ( v23 < *v56 );
              v8 = 0;
            }
            v13 = v50;
          }
          OnlineTimeSeriesLog::EndMeasurement(v9, v15);
          v10 = v55;
        }
        Com_sprintf_truncate<512>((char (*)[512])v67, "changes_%s%d", "@e", v13);
        OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, v67, v49);
        Com_sprintf_truncate<512>((char (*)[512])v67, "bits_%s%d", "@e", v13);
        OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, v67, value);
        Com_sprintf_truncate<512>((char (*)[512])v67, "skippedBits_%s%d", "@e", v13);
        snapSkippedNetfieldsNumBits = v54;
        OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, v67, *v54);
        Com_sprintf_truncate<512>((char (*)[512])v67, "lastChangedFieldBits_%s%d", "@e", v13);
        OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, v67, v54[34]);
        Com_sprintf_truncate<512>((char (*)[512])v67, "entityIndexBits_%s%d", "@e", v13);
        OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, v67, v54[68]);
        Com_sprintf_truncate<512>((char (*)[512])v67, "count_%s%d", "@e", v13);
        OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, v67, v54[102]);
        Com_sprintf_truncate<512>((char (*)[512])v67, "lowLoD_%s%d", "@e", v13);
        OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, v67, *((_WORD *)numEntityNames - 46172));
        Com_sprintf_truncate<512>((char (*)[512])v67, "highLoD_%s%d", "@e", v13);
        OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, v67, *((_WORD *)numEntityNames - 46171));
        v26 = v49 + v53;
        v57 += value;
        v58 += *v54;
        v59 += v54[34];
        v60 += v54[68];
        v53 = v26;
      }
      else
      {
        v26 = v53;
      }
      ++v13;
      ++snapSkippedNetfieldsNumBits;
      v10 += 64i64;
      v50 = v13;
      ++numEntityNames;
      v54 = snapSkippedNetfieldsNumBits;
      v55 = v10;
      v56 = numEntityNames;
    }
    while ( (int)v13 < 34 );
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "NFTotalChanges", v26);
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "NFTotalBits", v57);
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "NFTotalSkippedBits", v58);
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "totalLastChangedFieldBits", v59);
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "totalEntityIndexBits", v60);
    if ( v7->snapWorldOmnvarNumBits )
    {
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "count_WorldOmnvar", v7->snapWorldOmnvarNumChanges);
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "bits_WorldOmnvar", v7->snapWorldOmnvarNumBits);
    }
    if ( v7->snapPlayerStateOmnvarNumBits )
    {
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "count_PlayerOmnvar", v7->snapPlayerStateOmnvarNumChanges);
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "bits_PlayerOmnvar", v7->snapPlayerStateOmnvarNumBits);
    }
    if ( v7->omnvarNameIndex )
    {
      v27 = strtok(v7->omnvarNames, ";");
      for ( i = 0; v27; v27 = strtok(NULL, ";") )
      {
        v29 = -1i64;
        do
          ++v29;
        while ( v27[v29] );
        if ( v29 > 1 )
        {
          v30 = j_va("o_%d", i);
          OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, v30, v27);
          ++i;
        }
      }
    }
    if ( v7->snapWeaponMapBits )
    {
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "count_WeaponMap", v7->snapWeaponMapNumEntries);
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "bits_WeaponMap", v7->snapWeaponMapBits);
    }
    if ( v7->snapScoreBoardBits )
    {
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "count_ScoreBoard", v7->snapScoreBoardCount);
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "bits_ScoreBoard", v7->snapScoreBoardBits);
    }
    snapUmbraGatesBits = v7->snapUmbraGatesBits;
    if ( snapUmbraGatesBits )
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "bits_UmbraGate", snapUmbraGatesBits);
    snapServerCmdBits = v7->snapServerCmdBits;
    if ( snapServerCmdBits )
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "bits_ServerCmds", snapServerCmdBits);
    snapPlayerStateSegmentBits = v7->snapPlayerStateSegmentBits;
    do
    {
      v34 = *snapPlayerStateSegmentBits;
      if ( *snapPlayerStateSegmentBits )
      {
        PlayerStateSegmentShortName = SV_GetPlayerStateSegmentShortName(v8);
        v36 = j_va("bits_PlayerState_%s", PlayerStateSegmentShortName);
        OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, v36, v34);
      }
      ++v8;
      ++snapPlayerStateSegmentBits;
    }
    while ( v8 < 0xA );
    if ( v7->snapGlassBits )
    {
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "count_Glass", v7->snapGlassPieces);
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "bits_Glass", v7->snapGlassBits);
    }
    if ( v7->snapScriptableChangeBits )
    {
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "count_ScriptableChanges", v7->snapScriptableChangeCount);
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "bits_ScriptableChanges", v7->snapScriptableChangeBits);
    }
    snapScriptableHeaderBits = v7->snapScriptableHeaderBits;
    if ( snapScriptableHeaderBits )
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "bits_ScriptableHeader", snapScriptableHeaderBits);
    v38 = truncate_cast<unsigned char,int>(snapInfo->clientNum);
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "cl", v38);
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "fromBaseline", snapInfo->fromBaseline);
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "packetIsDelta", snapInfo->packetIsDelta);
    currentPacketBuiltEvent = v66->currentPacketBuiltEvent;
    if ( currentPacketBuiltEvent )
    {
      v40 = truncate_cast<unsigned char,int>(currentPacketBuiltEvent);
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "event", v40);
    }
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "writeFullSnap", writeFullSnap);
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "isBlindDelta", isBlindDelta);
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "isInKillcam", isInKillcam);
    OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "snapBits", numBits);
    numHighPrecisionOriginEntities = v7->numHighPrecisionOriginEntities;
    if ( numHighPrecisionOriginEntities )
      OnlineTimeSeriesLog::AddFieldValue(v9, v7->measurementHandle, "highPrecisionOriginEntities", numHighPrecisionOriginEntities);
    OnlineTimeSeriesLog::EndMeasurement(v9, v7->measurementHandle);
    snapMeasurementIndex = snapInfo->snapMeasurementIndex;
    if ( (unsigned int)snapMeasurementIndex >= 6 )
    {
      LODWORD(v45) = 6;
      LODWORD(v44) = snapInfo->snapMeasurementIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 529, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_snapMeasurements ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_snapMeasurements )\n\t%i not in [0, %i)", v44, v45) )
        __debugbreak();
    }
    Sys_EnterCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
    s_snapMeasurements[snapMeasurementIndex].inUse = 0;
    Sys_LeaveCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
  }
}

/*
==============
SV_BandwidthProfile_ExportNetFieldConfig
==============
*/
char SV_BandwidthProfile_ExportNetFieldConfig()
{
  DWServicesAccess *Instance; 
  int FirstAvailableIndex; 
  DWServicesAccess *v3; 
  DWServicesAccess *v4; 
  DWDataChannelManagerStandard *DataChannelManagerStandard; 
  char *m_ptr; 
  int v7; 
  int v8; 
  int v9; 
  char *v10; 
  int v11; 
  unsigned int v12; 
  int i; 
  const NetFieldList *NetfieldListForPacketEntityType; 
  const char *v15; 
  int v16; 
  int v17; 
  char *v18; 
  int v19; 
  int j; 
  const char *EntityTypeString; 
  const char *v22; 
  int v23; 
  _BYTE *v24; 
  int v25; 
  int v26; 
  __int64 v27; 
  const NetFieldList *v28; 
  const NetFieldList *v29; 
  __int64 v30; 
  int v31; 
  __int64 listId; 
  int v33; 
  unsigned int v34; 
  const char *v35; 
  int v36; 
  _BYTE *v37; 
  int v38; 
  __int64 serializationFormat; 
  __int64 serializationFormata; 
  int v41; 
  _BYTE *bytes; 
  Mem_LargeLocal v43; 
  int v44[36]; 

  if ( !s_netFieldConfigGenerated )
  {
    Instance = DWServicesAccess::GetInstance();
    FirstAvailableIndex = DWServicesAccess::getFirstAvailableIndex(Instance);
    if ( FirstAvailableIndex == -1 )
      return 0;
    v3 = DWServicesAccess::GetInstance();
    if ( !DWServicesAccess::isReady(v3, FirstAvailableIndex) )
      return 0;
    v4 = DWServicesAccess::GetInstance();
    DataChannelManagerStandard = DWServicesAccess::GetDataChannelManagerStandard(v4);
    if ( !DWDataChannelManagerStandard::initialized(DataChannelManagerStandard) || !SV_SnapshotProfileMP_Initialized() )
      return 0;
    Mem_LargeLocal::Mem_LargeLocal(&v43, 0x186A0ui64, "NetFieldConfigRaw_t jsonString");
    m_ptr = (char *)v43.m_ptr;
    bytes = v43.m_ptr;
    v7 = Com_sprintf((char *)v43.m_ptr, 0x186A0ui64, "{\"version\":%d,\"config\":{", 1i64);
    v8 = Com_sprintf(&m_ptr[v7], 100000 - v7, "\"networkProtocolVersion\":%d,", 1065i64) + v7;
    v9 = 100000 - v8;
    v10 = &m_ptr[v8];
    v11 = Com_sprintf(v10, 100000 - v8, "\"netFieldsMapping\":[");
    v12 = 0;
    for ( i = 0; i < 34; ++i )
    {
      NetfieldListForPacketEntityType = SV_GetNetfieldListForPacketEntityType((const PacketEntityType_e)i);
      v15 = ",";
      if ( !i )
        v15 = (char *)&queryFormat.fmt + 3;
      LODWORD(serializationFormat) = NetfieldListForPacketEntityType->listId;
      v11 += Com_sprintf(&v10[v11], v9 - v11, "%s\"%d\"", v15, serializationFormat);
    }
    v16 = Com_sprintf(&v10[v11], v9 - v11, "]") + v11 + v8;
    v17 = 100000 - v16;
    v18 = &bytes[v16];
    v19 = Com_sprintf(v18, 100000 - v16, ",\"packetEntityTypeNames\":[");
    for ( j = 0; j < 34; ++j )
    {
      EntityTypeString = SV_GetEntityTypeString((const PacketEntityType_e)j);
      v22 = ",";
      if ( !j )
        v22 = (char *)&queryFormat.fmt + 3;
      v19 += Com_sprintf(&v18[v19], v17 - v19, "%s\"%s\"", v22, EntityTypeString);
    }
    v41 = Com_sprintf(&v18[v19], v17 - v19, "]") + v19 + v16;
    v23 = 100000 - v41;
    v24 = &bytes[v41];
    v25 = 0;
    memset_0(v44, 0, 0x88ui64);
    v26 = 0;
    v27 = 0i64;
    do
    {
      v28 = SV_GetNetfieldListForPacketEntityType((const PacketEntityType_e)v26);
      v29 = v28;
      v30 = 0i64;
      if ( v27 <= 0 )
      {
LABEL_20:
        listId = (unsigned int)v29->listId;
        v44[v27] = listId;
        v33 = Com_sprintf(&v24[v25], v23 - v25, ",\"%d\":{", listId) + v25;
        v34 = 0;
        if ( v29->count )
        {
          do
          {
            v35 = ",";
            if ( !v34 )
              v35 = (char *)&queryFormat.fmt + 3;
            LODWORD(serializationFormata) = v34;
            v33 += Com_sprintf(&v24[v33], v23 - v33, "%s\"%d\":\"%s\"", v35, serializationFormata, v29->array[v34++].name);
          }
          while ( v34 < v29->count );
          v12 = 0;
        }
        v25 = Com_sprintf(&v24[v33], v23 - v33, "}") + v33;
      }
      else
      {
        v31 = v28->listId;
        while ( v44[v30] != v31 )
        {
          if ( ++v30 >= v27 )
            goto LABEL_20;
        }
      }
      ++v26;
      ++v27;
    }
    while ( v26 < 34 );
    v36 = Com_sprintf(&bytes[v25 + v41], 100000 - (v25 + v41), "}") + v25 + v41;
    if ( bytes && *bytes )
    {
      v37 = bytes;
      do
      {
        if ( v36 && v37 - bytes >= v36 )
          break;
        v12 = (char)*v37++ + 31 * v12;
      }
      while ( *v37 );
    }
    s_netFieldConfigHash = v12;
    v38 = Com_sprintf(&bytes[v36], 100000 - v36, ",\"hash\": %u}", v12) + v36;
    Com_sprintf<16>(s_netFieldConfigHashString, "%u", s_netFieldConfigHash);
    Com_Printf(25, "netFieldConfigHash: %s\n", s_netFieldConfigHashString[0]);
    DLog_RecordBinary(0i64, "netfieldconfig", bytes, v38, DLOG_SERIALIZATION_FORMAT_BINARY);
    DLog_Send(0);
    s_netFieldConfigGenerated = 1;
    Mem_LargeLocal::~Mem_LargeLocal(&v43);
  }
  return 1;
}

/*
==============
SV_BandwidthProfile_GetNetFieldConfigHash
==============
*/
char *SV_BandwidthProfile_GetNetFieldConfigHash()
{
  if ( !s_netFieldConfigHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 346, ASSERT_TYPE_ASSERT, "(s_netFieldConfigHash != 0)", (const char *)&queryFormat, "s_netFieldConfigHash != 0") )
    __debugbreak();
  return s_netFieldConfigHashString[0];
}

/*
==============
SV_BandwidthProfile_Init
==============
*/
void SV_BandwidthProfile_Init(const bool isGameServer)
{
  char v1; 
  int v2; 
  bool v4; 
  const dvar_t *v5; 
  bool v6; 
  const dvar_t *v7; 
  bool v8; 
  __int64 v9; 
  __int64 v10; 
  const char *v11; 
  char v12; 
  __int64 v13; 
  const char *v14; 
  char v15; 
  __int64 v16; 
  __int64 ticks_0; 
  const dvar_t *v18; 
  __int64 v19; 
  unsigned int unsignedInt; 
  const char *MatchIdString; 
  bool v22; 
  DLogContext context; 
  char buffer[4096]; 

  v1 = 0;
  v2 = 0;
  while ( !Live_IsConnectedToDemonware(v2) )
  {
    if ( ++v2 >= 8 )
      goto LABEL_6;
  }
  v1 = 1;
LABEL_6:
  v4 = g_svSnapshotData.maxSnapshotEntitiesPerClient != 768;
  if ( !v1 || !isGameServer )
    goto LABEL_14;
  v5 = DVARBOOL_server_bandwidth_profile_log_enabled;
  if ( !DVARBOOL_server_bandwidth_profile_log_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "server_bandwidth_profile_log_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled && !v4 )
    v6 = 1;
  else
LABEL_14:
    v6 = 0;
  s_svBandwidthProfileEnabled = v6;
  if ( !v1 || !isGameServer )
    goto LABEL_23;
  v7 = DVARBOOL_server_snap_details_log_enabled;
  if ( !DVARBOOL_server_snap_details_log_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "server_snap_details_log_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled && !v4 )
    v8 = 1;
  else
LABEL_23:
    v8 = 0;
  v9 = 0x7FFFFFFFi64;
  s_svSnapDetailsEnabled = v8;
  v10 = 0x7FFFFFFFi64;
  v11 = "sv_bandwidthprofile2";
  do
  {
    v12 = *v11;
    v13 = v10;
    ++v11;
    --v10;
  }
  while ( v13 && v12 );
  v14 = "sv_snapdetails5";
  do
  {
    v15 = *v14++;
    v16 = v9--;
  }
  while ( v16 && v15 );
  if ( s_svBandwidthProfileEnabled || v8 )
  {
    ticks_0 = Xtime_get_ticks_0();
    v18 = DVARINT_ui_serverFrameDuration;
    v19 = ticks_0 / 10000000;
    if ( !DVARINT_ui_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_serverFrameDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    unsignedInt = v18->current.unsignedInt;
    MatchIdString = OnlineMatchId::GetMatchIdString();
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
    {
      v22 = DLog_BeginEvent(&context, "sv_bandwidthprofile_session");
      context.autoEndEvent = 1;
      if ( v22 && DLog_String(&context, "status", "begin", 0) && DLog_String(&context, "match_guid", MatchIdString, 0) && DLog_UInt64(&context, "timestamp", v19) && DLog_UInt32(&context, "expected_frame_time", unsignedInt) )
        DLog_RecordContext(&context);
    }
  }
}

/*
==============
SV_BandwidthProfile_RecordEvent
==============
*/
void SV_BandwidthProfile_RecordEvent(const int clientNum, const char *fmt, ...)
{
  __int64 v2; 
  __int64 v3; 
  bool v4; 
  const dvar_t *v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  char *v9; 
  OnlineTimeSeriesLog *v10; 
  unsigned __int64 v11; 
  const char *MapName; 
  const char *GameType; 
  bool BaselineValidState; 
  const char *v15; 
  const char *NetFieldConfigHash; 
  char *v18; 
  char *v19; 
  const char *v20; 
  char *v21; 
  char *v22; 
  __int64 v23; 
  char v24; 
  __int64 v25; 
  char v26; 
  int v27; 
  unsigned int v30; 
  const char *v31; 
  char *saveptrctx[2]; 
  char v33[128]; 
  char dest[1024]; 
  va_list va; 

  va_start(va, fmt);
  v2 = clientNum;
  if ( s_svBandwidthProfileEnabled )
  {
    if ( clientNum == -1 )
      goto LABEL_13;
    if ( (unsigned int)clientNum >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 421, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_clientsProfiled ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_clientsProfiled )\n\t%i not in [0, %i)", clientNum, 200) )
      __debugbreak();
    v3 = v2;
    v4 = s_clientsProfiled[v2];
    if ( v4 )
      goto LABEL_13;
    Sys_EnterCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
    v5 = DVARINT_server_max_bandwidth_profiles_per_frame;
    if ( !DVARINT_server_max_bandwidth_profiles_per_frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "server_max_bandwidth_profiles_per_frame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = s_numClientsProfiled;
    if ( s_numClientsProfiled < v5->current.integer )
    {
      s_clientsProfiled[v3] = 1;
      s_numClientsProfiled = v6 + 1;
      v4 = 1;
    }
    Sys_LeaveCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
    if ( v4 )
    {
LABEL_13:
      memset_0(dest, 0, sizeof(dest));
      v7 = -1i64;
      v8 = -1i64;
      do
        ++v8;
      while ( fmt[v8] );
      if ( (unsigned int)v8 >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 444, ASSERT_TYPE_ASSERT, "(I_strlen( fmt ) < 1024)", (const char *)&queryFormat, "I_strlen( fmt ) < 1024") )
        __debugbreak();
      Core_strcpy(dest, 0x400ui64, fmt);
      memset_0(v33, 0, sizeof(v33));
      v9 = strtok(dest, ":");
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 449, ASSERT_TYPE_ASSERT, "(eventType != nullptr)", (const char *)&queryFormat, "eventType != nullptr") )
        __debugbreak();
      do
        ++v7;
      while ( v9[v7] );
      if ( (unsigned int)v7 > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 450, ASSERT_TYPE_ASSERT, "(I_strlen( eventType ) <= 100)", (const char *)&queryFormat, "I_strlen( eventType ) <= 100") )
        __debugbreak();
      Com_sprintf<128>((char (*)[128])v33, "%s_%s", "sv_bandwidthprofile2", v9);
      v10 = OnlineTimeSeriesLog::Get();
      v11 = OnlineTimeSeriesLog::BeginMeasurement(v10, v33);
      if ( v11 != 0xFFFFFFFF )
      {
        MapName = SV_Game_GetMapName();
        OnlineTimeSeriesLog::AddMetaTag(v10, v11, "mapName", MapName);
        GameType = SV_GameMP_GetGameType();
        OnlineTimeSeriesLog::AddMetaTag(v10, v11, "gameType", GameType);
        BaselineValidState = SV_NetConstBaselines_GetBaselineValidState();
        v15 = "false";
        if ( BaselineValidState )
          v15 = "true";
        OnlineTimeSeriesLog::AddMetaTag(v10, v11, "validConstBaseline", v15);
        NetFieldConfigHash = SV_BandwidthProfile_GetNetFieldConfigHash();
        OnlineTimeSeriesLog::AddMetaTag(v10, v11, "netFieldConfigHash", NetFieldConfigHash);
        saveptrctx[0] = NULL;
        va_copy((va_list)_RDI, va);
        v18 = strtok(NULL, ":");
        v19 = I_strtok_r(v18, ",", saveptrctx);
        if ( v19 )
        {
          v20 = "%d";
          do
          {
            v21 = strtok(v19, " ");
            v22 = strtok(NULL, " ");
            v23 = 0x7FFFFFFFi64;
            if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v24 = v20[v22 - "%d"];
              v25 = v23;
              v26 = *v20++;
              --v23;
              if ( !v25 )
              {
LABEL_36:
                v27 = *_RDI;
                _RDI += 2;
                OnlineTimeSeriesLog::AddFieldValue(v10, v11, v21, v27);
                goto LABEL_37;
              }
              if ( v24 != v26 )
                break;
              if ( !v24 )
                goto LABEL_36;
            }
            if ( I_strcmp(v22, "%f") )
            {
              if ( I_strcmp(v22, "%b") )
              {
                if ( I_strcmp(v22, "%u") )
                {
                  if ( !I_strcmp(v22, (const char *)&queryFormat) )
                  {
                    v31 = *(const char **)_RDI;
                    _RDI += 2;
                    OnlineTimeSeriesLog::AddFieldValue(v10, v11, v21, v31);
                  }
                }
                else
                {
                  v30 = *_RDI;
                  _RDI += 2;
                  OnlineTimeSeriesLog::AddFieldValue(v10, v11, v21, v30);
                }
              }
              else
              {
                _RDI += 2;
                OnlineTimeSeriesLog::AddFieldValue(v10, v11, v21, *(_RDI - 2) != 0);
              }
            }
            else
            {
              __asm { vmovsd  xmm3, qword ptr [rdi] }
              _RDI += 2;
              __asm { vcvtpd2ps xmm3, xmm3; value }
              OnlineTimeSeriesLog::AddFieldValue(v10, v11, v21, *(const float *)&_XMM3);
            }
LABEL_37:
            v19 = I_strtok_r(NULL, ",", saveptrctx);
            v20 = "%d";
          }
          while ( v19 );
        }
        OnlineTimeSeriesLog::EndMeasurement(v10, v11);
      }
    }
  }
}

/*
==============
SV_BandwidthProfile_ReleaseAllServerMessages
==============
*/
void SV_BandwidthProfile_ReleaseAllServerMessages(void)
{
  unsigned int i; 
  __int64 v1; 

  if ( s_svSnapDetailsEnabled )
  {
    Sys_EnterCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
    for ( i = 0; i < 0xA; ++i )
    {
      v1 = (int)i;
      s_svMsgMeasurements[v1].inUse = 0;
    }
    Sys_LeaveCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
  }
}

/*
==============
SV_BandwidthProfile_ReleaseSnapMeasurement
==============
*/
void SV_BandwidthProfile_ReleaseSnapMeasurement(const int index)
{
  __int64 v1; 
  int v3; 

  v1 = index;
  if ( (unsigned int)index >= 6 )
  {
    v3 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 529, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_snapMeasurements ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_snapMeasurements )\n\t%i not in [0, %i)", index, v3) )
      __debugbreak();
  }
  Sys_EnterCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
  s_snapMeasurements[v1].inUse = 0;
  Sys_LeaveCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
}

/*
==============
SV_BandwidthProfile_Shutdown
==============
*/
void SV_BandwidthProfile_Shutdown(void)
{
  __int64 ticks_0; 
  const dvar_t *v1; 
  __int64 v2; 
  unsigned int unsignedInt; 
  const char *MatchIdString; 
  bool v5; 
  DLogContext context; 
  char buffer[4096]; 

  if ( s_svBandwidthProfileEnabled || s_svSnapDetailsEnabled )
  {
    ticks_0 = Xtime_get_ticks_0();
    v1 = DVARINT_ui_serverFrameDuration;
    v2 = ticks_0 / 10000000;
    if ( !DVARINT_ui_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_serverFrameDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    unsignedInt = v1->current.unsignedInt;
    MatchIdString = OnlineMatchId::GetMatchIdString();
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
    {
      v5 = DLog_BeginEvent(&context, "sv_bandwidthprofile_session");
      context.autoEndEvent = 1;
      if ( v5 && DLog_String(&context, "status", "end", 0) && DLog_String(&context, "match_guid", MatchIdString, 0) && DLog_UInt64(&context, "timestamp", v2) && DLog_UInt32(&context, "expected_frame_time", unsignedInt) )
        DLog_RecordContext(&context);
    }
  }
  s_svBandwidthProfileEnabled = 0;
  s_svSnapDetailsEnabled = 0;
  s_numClientsProfiled = 0;
  memset_0(s_clientsProfiled, 0, sizeof(s_clientsProfiled));
  s_netFieldConfigGenerated = 0;
}

/*
==============
SV_BandwidthProfile_StartServerMessage
==============
*/
__int64 SV_BandwidthProfile_StartServerMessage()
{
  unsigned int v0; 
  ServerMsgMeasurement_t *v1; 
  __int64 v3; 

  if ( !s_svSnapDetailsEnabled )
    return 0xFFFFFFFFi64;
  Sys_EnterCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
  v0 = 0;
  v1 = s_svMsgMeasurements;
  while ( v1->inUse )
  {
    ++v0;
    if ( (__int64)++v1 >= (__int64)&unk_14D5231E8 )
    {
      Sys_LeaveCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 610, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Running out of svMsgMeasurement, may need to increase MAX_SV_MSG_MEASUREMENTS\n") )
        __debugbreak();
      return 0xFFFFFFFFi64;
    }
  }
  v3 = (int)v0;
  s_svMsgMeasurements[v3].inUse = 1;
  Sys_LeaveCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
  if ( v0 != -1 )
  {
    s_svMsgMeasurements[v3].numEntities = 0;
    s_svMsgMeasurements[v3].lastEntityNumIndex = -1;
    memset_0(s_svMsgMeasurements[v3].entitieNums, 0, sizeof(s_svMsgMeasurements[v3].entitieNums));
    memset_0(s_svMsgMeasurements[v3].entities, 0, sizeof(s_svMsgMeasurements[v3].entities));
    memset_0(s_svMsgMeasurements[v3].highPrecisionOriginEntities, 0, sizeof(s_svMsgMeasurements[v3].highPrecisionOriginEntities));
    memset_0(&s_svMsgMeasurements[v3].clients, 0, sizeof(s_svMsgMeasurements[v3].clients));
    memset_0(&s_svMsgMeasurements[v3].agents, 0, sizeof(s_svMsgMeasurements[v3].agents));
  }
  return v0;
}

/*
==============
SV_BandwidthProfile_StartSnapshot
==============
*/
__int64 SV_BandwidthProfile_StartSnapshot(const int clientNum)
{
  __int64 v1; 
  bool *v2; 
  bool v3; 
  const dvar_t *v4; 
  int v5; 
  int v7; 
  SnapMeasurement_t *v8; 
  __int64 v9; 
  OnlineTimeSeriesLog *v10; 
  unsigned __int64 v11; 
  const char *MapName; 
  const char *GameType; 
  bool BaselineValidState; 
  const char *v15; 
  const char *NetFieldConfigHash; 
  __int64 v17; 
  char dest[128]; 

  v1 = clientNum;
  if ( !s_svSnapDetailsEnabled )
    return 0xFFFFFFFFi64;
  if ( !s_netFieldConfigGenerated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 544, ASSERT_TYPE_ASSERT, "(s_netFieldConfigGenerated)", (const char *)&queryFormat, "s_netFieldConfigGenerated") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0xC8 )
  {
    LODWORD(v17) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 546, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_clientsProfiled ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_clientsProfiled )\n\t%i not in [0, %i)", v17, 200) )
      __debugbreak();
  }
  v2 = &s_clientsProfiled[v1];
  v3 = s_clientsProfiled[v1];
  if ( v3 )
    goto LABEL_16;
  Sys_EnterCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
  v4 = DVARINT_server_max_bandwidth_profiles_per_frame;
  if ( !DVARINT_server_max_bandwidth_profiles_per_frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "server_max_bandwidth_profiles_per_frame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = s_numClientsProfiled;
  if ( s_numClientsProfiled < v4->current.integer )
  {
    *v2 = 1;
    s_numClientsProfiled = v5 + 1;
    v3 = 1;
  }
  Sys_LeaveCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
  if ( !v3 )
    return 0xFFFFFFFFi64;
LABEL_16:
  Sys_EnterCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
  v7 = 0;
  v8 = s_snapMeasurements;
  while ( v8->inUse )
  {
    ++v7;
    if ( (__int64)++v8 >= (__int64)s_netFieldConfigHashString )
    {
      Sys_LeaveCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 522, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Running out of snapMeasurement, may need to increase MAX_SNAP_MEASUREMENTS\n") )
        __debugbreak();
      return 0xFFFFFFFFi64;
    }
  }
  v9 = v7;
  s_snapMeasurements[v9].inUse = 1;
  Sys_LeaveCriticalSection(CRITSECT_SNAP_MEASUREMENTS);
  if ( v7 == -1 )
    return 0xFFFFFFFFi64;
  v10 = OnlineTimeSeriesLog::Get();
  memset_0(dest, 0, sizeof(dest));
  Com_sprintf<128>((char (*)[128])dest, (const char *)&queryFormat, "sv_snapdetails5");
  v11 = OnlineTimeSeriesLog::BeginMeasurement(v10, dest);
  if ( v11 == 0xFFFFFFFF )
  {
    SV_BandwidthProfile_ReleaseSnapMeasurement(v7);
    return 0xFFFFFFFFi64;
  }
  else
  {
    memset_0(s_snapMeasurements[v9].snapNetfieldsNumChangesEntityState, 0, sizeof(s_snapMeasurements[v9].snapNetfieldsNumChangesEntityState));
    memset_0(s_snapMeasurements[v9].snapNetfieldsNumChangesClientState, 0, sizeof(s_snapMeasurements[v9].snapNetfieldsNumChangesClientState));
    memset_0(s_snapMeasurements[v9].snapNetfieldsNumChangesPlayerState, 0, sizeof(s_snapMeasurements[v9].snapNetfieldsNumChangesPlayerState));
    memset_0(s_snapMeasurements[v9].snapNetfieldsNumChangesAgentState, 0, sizeof(s_snapMeasurements[v9].snapNetfieldsNumChangesAgentState));
    memset_0(s_snapMeasurements[v9].snapNetfieldsNumChangesHudElem, 0, sizeof(s_snapMeasurements[v9].snapNetfieldsNumChangesHudElem));
    *(_QWORD *)s_snapMeasurements[v9].snapNetfieldsTotalChanges = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNetfieldsTotalChanges[4] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNetfieldsTotalChanges[8] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNetfieldsTotalChanges[12] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNetfieldsTotalChanges[16] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNetfieldsTotalChanges[20] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNetfieldsTotalChanges[24] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNetfieldsTotalChanges[28] = 0i64;
    *(_DWORD *)&s_snapMeasurements[v9].snapNetfieldsTotalChanges[32] = 0;
    memset_0(s_snapMeasurements[v9].snapNetfieldsNumBitsEntityState, 0, sizeof(s_snapMeasurements[v9].snapNetfieldsNumBitsEntityState));
    memset_0(s_snapMeasurements[v9].snapNetfieldsNumBitsClientState, 0, sizeof(s_snapMeasurements[v9].snapNetfieldsNumBitsClientState));
    memset_0(s_snapMeasurements[v9].snapNetfieldsNumBitsPlayerState, 0, sizeof(s_snapMeasurements[v9].snapNetfieldsNumBitsPlayerState));
    memset_0(s_snapMeasurements[v9].snapNetfieldsNumBitsAgentState, 0, sizeof(s_snapMeasurements[v9].snapNetfieldsNumBitsAgentState));
    memset_0(s_snapMeasurements[v9].snapNetfieldsNumBitsHudElem, 0, sizeof(s_snapMeasurements[v9].snapNetfieldsNumBitsHudElem));
    memset_0(s_snapMeasurements[v9].snapNetfieldsTotalBits, 0, sizeof(s_snapMeasurements[v9].snapNetfieldsTotalBits));
    *(_QWORD *)s_snapMeasurements[v9].snapSkippedNetfieldsNumBits = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapSkippedNetfieldsNumBits[4] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapSkippedNetfieldsNumBits[8] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapSkippedNetfieldsNumBits[12] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapSkippedNetfieldsNumBits[16] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapSkippedNetfieldsNumBits[20] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapSkippedNetfieldsNumBits[24] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapSkippedNetfieldsNumBits[28] = 0i64;
    *(_DWORD *)&s_snapMeasurements[v9].snapSkippedNetfieldsNumBits[32] = 0;
    *(_QWORD *)s_snapMeasurements[v9].snapLastChangedFieldNumBits = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapLastChangedFieldNumBits[4] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapLastChangedFieldNumBits[8] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapLastChangedFieldNumBits[12] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapLastChangedFieldNumBits[16] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapLastChangedFieldNumBits[20] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapLastChangedFieldNumBits[24] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapLastChangedFieldNumBits[28] = 0i64;
    *(_DWORD *)&s_snapMeasurements[v9].snapLastChangedFieldNumBits[32] = 0;
    *(_QWORD *)s_snapMeasurements[v9].snapEntityIndexNumBits = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapEntityIndexNumBits[4] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapEntityIndexNumBits[8] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapEntityIndexNumBits[12] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapEntityIndexNumBits[16] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapEntityIndexNumBits[20] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapEntityIndexNumBits[24] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapEntityIndexNumBits[28] = 0i64;
    *(_DWORD *)&s_snapMeasurements[v9].snapEntityIndexNumBits[32] = 0;
    *(_QWORD *)s_snapMeasurements[v9].snapNumEntities = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNumEntities[4] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNumEntities[8] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNumEntities[12] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNumEntities[16] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNumEntities[20] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNumEntities[24] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapNumEntities[28] = 0i64;
    *(_DWORD *)&s_snapMeasurements[v9].snapNumEntities[32] = 0;
    memset_0(s_snapMeasurements[v9].snapNumEntitiesByLoD, 0, sizeof(s_snapMeasurements[v9].snapNumEntitiesByLoD));
    s_snapMeasurements[v9].snapServerCmdBits = 0;
    *(_QWORD *)s_snapMeasurements[v9].snapPlayerStateSegmentBits = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapPlayerStateSegmentBits[4] = 0i64;
    *(_QWORD *)&s_snapMeasurements[v9].snapPlayerStateSegmentBits[8] = 0i64;
    s_snapMeasurements[v9].snapScoreBoardCount = 0;
    *(_QWORD *)&s_snapMeasurements[v9].snapScoreBoardBits = 0i64;
    *(_DWORD *)&s_snapMeasurements[v9].snapScriptableChangeCount = 0;
    s_snapMeasurements[v9].snapScriptableHeaderBits = 0;
    memset_0(s_snapMeasurements[v9].numEntityNames, 0, sizeof(s_snapMeasurements[v9].numEntityNames));
    memset_0(s_snapMeasurements[v9].snapEntityNames, 0, sizeof(s_snapMeasurements[v9].snapEntityNames));
    *(_QWORD *)&s_snapMeasurements[v9].snapWorldOmnvarNumBits = 0i64;
    memset_0(s_snapMeasurements[v9].omnvarNames, 0, sizeof(s_snapMeasurements[v9].omnvarNames));
    s_snapMeasurements[v9].omnvarNameIndex = 0;
    s_snapMeasurements[v9].numHighPrecisionOriginEntities = 0;
    s_snapMeasurements[v9].measurementHandle = v11;
    MapName = SV_Game_GetMapName();
    OnlineTimeSeriesLog::AddMetaTag(v10, v11, "mapName", MapName);
    GameType = SV_GameMP_GetGameType();
    OnlineTimeSeriesLog::AddMetaTag(v10, v11, "gameType", GameType);
    BaselineValidState = SV_NetConstBaselines_GetBaselineValidState();
    v15 = "false";
    if ( BaselineValidState )
      v15 = "true";
    OnlineTimeSeriesLog::AddMetaTag(v10, v11, "validConstBaseline", v15);
    NetFieldConfigHash = SV_BandwidthProfile_GetNetFieldConfigHash();
    OnlineTimeSeriesLog::AddMetaTag(v10, v11, "netFieldConfigHash", NetFieldConfigHash);
    return (unsigned int)v7;
  }
}

/*
==============
SnapMeasurement_t::getNumBitsArray
==============
*/
__int64 SnapMeasurement_t::getNumBitsArray(SnapMeasurement_t *this, const PacketEntityType_e packetEntityType, unsigned __int16 **outArray)
{
  __int64 v3; 
  unsigned int v6; 
  unsigned __int16 *snapNetfieldsNumBitsPlayerState; 
  __int64 v9; 

  v3 = packetEntityType;
  if ( !outArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 301, ASSERT_TYPE_ASSERT, "(outArray != nullptr)", (const char *)&queryFormat, "outArray != nullptr") )
    __debugbreak();
  v6 = 0;
  if ( (unsigned int)v3 > 0x1D )
  {
    switch ( (_DWORD)v3 )
    {
      case 0x1F:
        v6 = 575;
        snapNetfieldsNumBitsPlayerState = this->snapNetfieldsNumBitsPlayerState;
        break;
      case 0x1E:
        v6 = 118;
        snapNetfieldsNumBitsPlayerState = this->snapNetfieldsNumBitsClientState;
        break;
      case 0x21:
        v6 = 46;
        snapNetfieldsNumBitsPlayerState = this->snapNetfieldsNumBitsHudElem;
        break;
      case 0x20:
        v6 = 90;
        snapNetfieldsNumBitsPlayerState = this->snapNetfieldsNumBitsAgentState;
        break;
      default:
        LODWORD(v9) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 332, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown packetEntityType %d\n", v9) )
          __debugbreak();
        snapNetfieldsNumBitsPlayerState = NULL;
        break;
    }
  }
  else
  {
    if ( (unsigned int)v3 >= 0x1E )
    {
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 306, ASSERT_TYPE_ASSERT, "(unsigned)( packetEntityType ) < (unsigned)( ( sizeof( *array_counter( snapNetfieldsNumBitsEntityState ) ) + 0 ) )", "packetEntityType doesn't index ARRAY_COUNT( snapNetfieldsNumBitsEntityState )\n\t%i not in [0, %i)", v9, 30) )
        __debugbreak();
    }
    v6 = 68;
    snapNetfieldsNumBitsPlayerState = this->snapNetfieldsNumBitsEntityState[v3];
  }
  *outArray = snapNetfieldsNumBitsPlayerState;
  return v6;
}

/*
==============
SnapMeasurement_t::getNumChangesArray
==============
*/
__int64 SnapMeasurement_t::getNumChangesArray(SnapMeasurement_t *this, const PacketEntityType_e packetEntityType, unsigned __int16 **outArray)
{
  __int64 v3; 
  unsigned int v6; 
  unsigned __int16 *snapNetfieldsNumChangesPlayerState; 
  __int64 v9; 

  v3 = packetEntityType;
  if ( !outArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 261, ASSERT_TYPE_ASSERT, "(outArray != nullptr)", (const char *)&queryFormat, "outArray != nullptr") )
    __debugbreak();
  v6 = 0;
  if ( (unsigned int)v3 > 0x1D )
  {
    switch ( (_DWORD)v3 )
    {
      case 0x1F:
        v6 = 575;
        snapNetfieldsNumChangesPlayerState = this->snapNetfieldsNumChangesPlayerState;
        break;
      case 0x1E:
        v6 = 118;
        snapNetfieldsNumChangesPlayerState = this->snapNetfieldsNumChangesClientState;
        break;
      case 0x21:
        v6 = 46;
        snapNetfieldsNumChangesPlayerState = this->snapNetfieldsNumChangesHudElem;
        break;
      case 0x20:
        v6 = 90;
        snapNetfieldsNumChangesPlayerState = this->snapNetfieldsNumChangesAgentState;
        break;
      default:
        LODWORD(v9) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 292, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown packetEntityType %d\n", v9) )
          __debugbreak();
        snapNetfieldsNumChangesPlayerState = NULL;
        break;
    }
  }
  else
  {
    if ( (unsigned int)v3 >= 0x1E )
    {
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_bandwidth_profile.cpp", 266, ASSERT_TYPE_ASSERT, "(unsigned)( packetEntityType ) < (unsigned)( ( sizeof( *array_counter( snapNetfieldsNumChangesEntityState ) ) + 0 ) )", "packetEntityType doesn't index ARRAY_COUNT( snapNetfieldsNumChangesEntityState )\n\t%i not in [0, %i)", v9, 30) )
        __debugbreak();
    }
    v6 = 68;
    snapNetfieldsNumChangesPlayerState = this->snapNetfieldsNumChangesEntityState[v3];
  }
  *outArray = snapNetfieldsNumChangesPlayerState;
  return v6;
}

