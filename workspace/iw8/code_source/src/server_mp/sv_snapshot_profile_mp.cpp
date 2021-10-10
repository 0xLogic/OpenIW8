/*
==============
SV_SnapshotProfileMP_KeyEvent
==============
*/

bool __fastcall SV_SnapshotProfileMP_KeyEvent(const int key, bool down)
{
  return ?SV_SnapshotProfileMP_KeyEvent@@YA_NH_N@Z(key, down);
}

/*
==============
SV_SwapClientPacketData
==============
*/

void SV_SwapClientPacketData(void)
{
  ?SV_SwapClientPacketData@@YAXXZ();
}

/*
==============
SV_GetClientSnapshotPing
==============
*/

int __fastcall SV_GetClientSnapshotPing(const int clientNum, const int snapshotNum)
{
  return ?SV_GetClientSnapshotPing@@YAHHH@Z(clientNum, snapshotNum);
}

/*
==============
skippedFieldsTracking<46>::PrintData
==============
*/

void __fastcall skippedFieldsTracking<46>::PrintData(skippedFieldsTracking<46> *this, fileHandle_t f, const char *networkType)
{
  ?PrintData@?$skippedFieldsTracking@$0CO@@@QEAAXUfileHandle_t@@PEBD@Z(this, f, networkType);
}

/*
==============
SV_AggregateServerEntitySkippedFields
==============
*/

void __fastcall SV_AggregateServerEntitySkippedFields(const ServerEntityHeader *const header)
{
  ?SV_AggregateServerEntitySkippedFields@@YAXQEBUServerEntityHeader@@@Z(header);
}

/*
==============
SV_SnapshotProfileMP_ShutdownMemory
==============
*/

void SV_SnapshotProfileMP_ShutdownMemory(void)
{
  ?SV_SnapshotProfileMP_ShutdownMemory@@YAXXZ();
}

/*
==============
SV_GetPacketAnalysisClientNum
==============
*/

int __fastcall SV_GetPacketAnalysisClientNum()
{
  return ?SV_GetPacketAnalysisClientNum@@YAHXZ();
}

/*
==============
SV_TrackPSOriginPredictionSend
==============
*/

void SV_TrackPSOriginPredictionSend(void)
{
  ?SV_TrackPSOriginPredictionSend@@YAXXZ();
}

/*
==============
SV_AnalyzePacketData
==============
*/

void __fastcall SV_AnalyzePacketData(const int clientNum, const unsigned int packetSize)
{
  ?SV_AnalyzePacketData@@YAXHI@Z(clientNum, packetSize);
}

/*
==============
SV_TrackPacketData
==============
*/

int __fastcall SV_TrackPacketData(const int clientNum, const PacketDataType datatype, const int eType, const int entNum, const int bitsUsedPrev, const msg_t *msg)
{
  return ?SV_TrackPacketData@@YAHHW4PacketDataType@@HHHPEBUmsg_t@@@Z(clientNum, datatype, eType, entNum, bitsUsedPrev, msg);
}

/*
==============
SV_SnapshotProfileMP_AllocateMemory
==============
*/

void __fastcall SV_SnapshotProfileMP_AllocateMemory(HunkUser *hunkUser, const int maxClients)
{
  ?SV_SnapshotProfileMP_AllocateMemory@@YAXPEAUHunkUser@@H@Z(hunkUser, maxClients);
}

/*
==============
SV_TrackOriginZDeltaBits
==============
*/

void __fastcall SV_TrackOriginZDeltaBits(int bits)
{
  ?SV_TrackOriginZDeltaBits@@YAXH@Z(bits);
}

/*
==============
SV_Netchan_PrintProfileStats
==============
*/

void __fastcall SV_Netchan_PrintProfileStats(int bPrintToConsole)
{
  ?SV_Netchan_PrintProfileStats@@YAXH@Z(bPrintToConsole);
}

/*
==============
SV_TrackOriginZFullBits
==============
*/

void __fastcall SV_TrackOriginZFullBits(int bits)
{
  ?SV_TrackOriginZFullBits@@YAXH@Z(bits);
}

/*
==============
SV_DisablePacketData
==============
*/

void SV_DisablePacketData(void)
{
  ?SV_DisablePacketData@@YAXXZ();
}

/*
==============
skippedFieldsTracking<575>::PrintData
==============
*/

void __fastcall skippedFieldsTracking<575>::PrintData(skippedFieldsTracking<575> *this, fileHandle_t f, const char *networkType)
{
  ?PrintData@?$skippedFieldsTracking@$0CDP@@@QEAAXUfileHandle_t@@PEBD@Z(this, f, networkType);
}

/*
==============
SV_TrackSnapshotSize
==============
*/

void __fastcall SV_TrackSnapshotSize(const int isLoopback, const int size, const int clientNum)
{
  ?SV_TrackSnapshotSize@@YAXHHH@Z(isLoopback, size, clientNum);
}

/*
==============
SV_TrackOriginFullBits
==============
*/

void __fastcall SV_TrackOriginFullBits(int bits)
{
  ?SV_TrackOriginFullBits@@YAXH@Z(bits);
}

/*
==============
SV_TrackNumFieldsSkipped
==============
*/

void __fastcall SV_TrackNumFieldsSkipped(const PacketEntityType_e packetEntityType, const int numFieldsSkipped, ServerEntityHeader *const outHeader, const NetField *const field)
{
  ?SV_TrackNumFieldsSkipped@@YAXW4PacketEntityType_e@@HQEAUServerEntityHeader@@QEBUNetField@@@Z(packetEntityType, numFieldsSkipped, outHeader, field);
}

/*
==============
SV_TrackAngleFullSend
==============
*/

void SV_TrackAngleFullSend(void)
{
  ?SV_TrackAngleFullSend@@YAXXZ();
}

/*
==============
SV_GetNetfieldListForPacketEntityType
==============
*/

const NetFieldList *__fastcall SV_GetNetfieldListForPacketEntityType(const PacketEntityType_e packetEntityType)
{
  return ?SV_GetNetfieldListForPacketEntityType@@YAPEBUNetFieldList@@W4PacketEntityType_e@@@Z(packetEntityType);
}

/*
==============
skippedFieldsTracking<118>::PrintData
==============
*/

void __fastcall skippedFieldsTracking<118>::PrintData(skippedFieldsTracking<118> *this, fileHandle_t f, const char *networkType)
{
  ?PrintData@?$skippedFieldsTracking@$0HG@@@QEAAXUfileHandle_t@@PEBD@Z(this, f, networkType);
}

/*
==============
SV_PacketIsNetworkBound
==============
*/

void __fastcall SV_PacketIsNetworkBound(const bool networkBound)
{
  ?SV_PacketIsNetworkBound@@YAX_N@Z(networkBound);
}

/*
==============
SV_GetEntityTypeString
==============
*/

const char *__fastcall SV_GetEntityTypeString(const PacketEntityType_e packetEntityType)
{
  return ?SV_GetEntityTypeString@@YAPEBDW4PacketEntityType_e@@@Z(packetEntityType);
}

/*
==============
SV_LogSnapshotContent
==============
*/

void SV_LogSnapshotContent(const int clientNum, const char *formatString, ...)
{
  ?SV_LogSnapshotContent@@YAXHPEBDZZ(clientNum, formatString);
}

/*
==============
SV_GetAvailableClientPacketAnalysis
==============
*/

bool __fastcall SV_GetAvailableClientPacketAnalysis(const ClientSnapshotDetailedData **outDetailedData)
{
  return ?SV_GetAvailableClientPacketAnalysis@@YA_NPEAPEBUClientSnapshotDetailedData@@@Z(outDetailedData);
}

/*
==============
SV_TrackFieldWritten
==============
*/

void __fastcall SV_TrackFieldWritten(const int clientNum, const PacketEntityType_e packetEntityType, const int field, const void *from, const void *to, const int skippedFieldsBits, const int dataBits)
{
  ?SV_TrackFieldWritten@@YAXHW4PacketEntityType_e@@HPEBX1HH@Z(clientNum, packetEntityType, field, from, to, skippedFieldsBits, dataBits);
}

/*
==============
SV_SnapshotProfileMP_GetAllocationSize
==============
*/

unsigned int __fastcall SV_SnapshotProfileMP_GetAllocationSize(const int maxClients)
{
  return ?SV_SnapshotProfileMP_GetAllocationSize@@YAIH@Z(maxClients);
}

/*
==============
SV_TrackPSOriginServerTimeSend
==============
*/

void SV_TrackPSOriginServerTimeSend(void)
{
  ?SV_TrackPSOriginServerTimeSend@@YAXXZ();
}

/*
==============
SV_TrackOriginDeltaBits
==============
*/

void __fastcall SV_TrackOriginDeltaBits(int bits)
{
  ?SV_TrackOriginDeltaBits@@YAXH@Z(bits);
}

/*
==============
SV_TrackMovementDirDelta
==============
*/

void __fastcall SV_TrackMovementDirDelta(int delta)
{
  ?SV_TrackMovementDirDelta@@YAXH@Z(delta);
}

/*
==============
SV_SnapshotProfileMP_Init
==============
*/

void SV_SnapshotProfileMP_Init(void)
{
  ?SV_SnapshotProfileMP_Init@@YAXXZ();
}

/*
==============
SV_TrackOriginExpGolombBits
==============
*/

void __fastcall SV_TrackOriginExpGolombBits(int bits)
{
  ?SV_TrackOriginExpGolombBits@@YAXH@Z(bits);
}

/*
==============
SV_EnablePacketData
==============
*/

void SV_EnablePacketData(void)
{
  ?SV_EnablePacketData@@YAXXZ();
}

/*
==============
SV_TrackAngleDeltaBits
==============
*/

void __fastcall SV_TrackAngleDeltaBits(int value)
{
  ?SV_TrackAngleDeltaBits@@YAXH@Z(value);
}

/*
==============
SV_TrackFieldChange
==============
*/

void __fastcall SV_TrackFieldChange(const int clientNum, const PacketEntityType_e packetEntityType, const int field, const int entityIndex)
{
  ?SV_TrackFieldChange@@YAXHW4PacketEntityType_e@@HH@Z(clientNum, packetEntityType, field, entityIndex);
}

/*
==============
SV_TrackPacketCompression
==============
*/

void __fastcall SV_TrackPacketCompression(const int isLoopback, const int clientNum, const int originalSize, const int compressedSize)
{
  ?SV_TrackPacketCompression@@YAXHHHH@Z(isLoopback, clientNum, originalSize, compressedSize);
}

/*
==============
SV_IsSnapshotNetworkData
==============
*/

bool __fastcall SV_IsSnapshotNetworkData()
{
  return ?SV_IsSnapshotNetworkData@@YA_NXZ();
}

/*
==============
SV_GetPlayerStateSegmentFullName
==============
*/

const char *__fastcall SV_GetPlayerStateSegmentFullName(const int segment)
{
  return ?SV_GetPlayerStateSegmentFullName@@YAPEBDH@Z(segment);
}

/*
==============
SV_ResetSnapshotContent
==============
*/

void __fastcall SV_ResetSnapshotContent(const int clientNum)
{
  ?SV_ResetSnapshotContent@@YAXH@Z(clientNum);
}

/*
==============
SV_TrackETypeBytes
==============
*/

void __fastcall SV_TrackETypeBytes(int eType, int bits)
{
  ?SV_TrackETypeBytes@@YAXHH@Z(eType, bits);
}

/*
==============
SV_SetEntityLimitReached
==============
*/

void __fastcall SV_SetEntityLimitReached(const int clientNum)
{
  ?SV_SetEntityLimitReached@@YAXH@Z(clientNum);
}

/*
==============
SV_TrackEventSeqDeltaSend
==============
*/

void __fastcall SV_TrackEventSeqDeltaSend(int delta)
{
  ?SV_TrackEventSeqDeltaSend@@YAXH@Z(delta);
}

/*
==============
SV_SnapshotProfileMP_Shutdown
==============
*/

void SV_SnapshotProfileMP_Shutdown(void)
{
  ?SV_SnapshotProfileMP_Shutdown@@YAXXZ();
}

/*
==============
SV_ResetCurrentSnapshotChangedFlags
==============
*/

void __fastcall SV_ResetCurrentSnapshotChangedFlags(const int clientNum)
{
  ?SV_ResetCurrentSnapshotChangedFlags@@YAXH@Z(clientNum);
}

/*
==============
SV_DispatchSnapshotProfileData
==============
*/

void SV_DispatchSnapshotProfileData(void)
{
  ?SV_DispatchSnapshotProfileData@@YAXXZ();
}

/*
==============
SV_TrackEventSeqFullSend
==============
*/

void __fastcall SV_TrackEventSeqFullSend(int delta)
{
  ?SV_TrackEventSeqFullSend@@YAXH@Z(delta);
}

/*
==============
SV_GetAnalyzeEntityFields
==============
*/

void __fastcall SV_GetAnalyzeEntityFields(const int analyzeEntityType, const NetField **stateFields, unsigned int *numFields)
{
  ?SV_GetAnalyzeEntityFields@@YAXHPEAPEBUNetField@@PEAI@Z(analyzeEntityType, stateFields, numFields);
}

/*
==============
SV_SnapshotProfileMP_Initialized
==============
*/

bool __fastcall SV_SnapshotProfileMP_Initialized()
{
  return ?SV_SnapshotProfileMP_Initialized@@YA_NXZ();
}

/*
==============
SV_TrackEventSend
==============
*/

void __fastcall SV_TrackEventSend(int typeSent, int parmSent, int eventTypeBits, int eventParmBits, int eventOverheadBits)
{
  ?SV_TrackEventSend@@YAXHHHHH@Z(typeSent, parmSent, eventTypeBits, eventParmBits, eventOverheadBits);
}

/*
==============
SV_GetPlayerStateSegmentShortName
==============
*/

const char *__fastcall SV_GetPlayerStateSegmentShortName(const int segment)
{
  return ?SV_GetPlayerStateSegmentShortName@@YAPEBDH@Z(segment);
}

/*
==============
SV_TrackPacketFragmentation
==============
*/

void __fastcall SV_TrackPacketFragmentation(const int originalSize, const int compressedSize)
{
  ?SV_TrackPacketFragmentation@@YAXHH@Z(originalSize, compressedSize);
}

/*
==============
SV_ClearAvailableClientPacketAnalysis
==============
*/

void SV_ClearAvailableClientPacketAnalysis(void)
{
  ?SV_ClearAvailableClientPacketAnalysis@@YAXXZ();
}

/*
==============
skippedFieldsTracking<68>::PrintData
==============
*/

void __fastcall skippedFieldsTracking<68>::PrintData(skippedFieldsTracking<68> *this, fileHandle_t f, const char *networkType)
{
  ?PrintData@?$skippedFieldsTracking@$0EE@@@QEAAXUfileHandle_t@@PEBD@Z(this, f, networkType);
}

/*
==============
SV_TrackFieldsChanged
==============
*/

void __fastcall SV_TrackFieldsChanged(int lc)
{
  ?SV_TrackFieldsChanged@@YAXH@Z(lc);
}

/*
==============
SV_TrackPSBitsForSegment
==============
*/

void __fastcall SV_TrackPSBitsForSegment(const SnapshotInfo *const snapInfo, const int bits, const PlayerStateSegment segment)
{
  ?SV_TrackPSBitsForSegment@@YAXQEBUSnapshotInfo@@HW4PlayerStateSegment@@@Z(snapInfo, bits, segment);
}

/*
==============
skippedFieldsTracking<575>::PrintData
==============
*/
void skippedFieldsTracking<575>::PrintData(skippedFieldsTracking<575> *this, fileHandle_t f, const char *networkType)
{
  __int64 totaTimesSkipped; 
  float totalFieldsSkipped; 
  float v8; 
  float v9; 
  __int64 v10; 
  unsigned int v11; 
  const char *v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  char *fmt; 
  char *fmta; 
  __int64 v26; 

  FS_Printf(f, "%s Fields Skipped Data:\n\n", networkType);
  totaTimesSkipped = (unsigned int)this->totaTimesSkipped;
  if ( (_DWORD)totaTimesSkipped )
  {
    totalFieldsSkipped = (float)(unsigned int)this->totalFieldsSkipped;
    v8 = (float)totaTimesSkipped;
    v9 = totalFieldsSkipped / v8;
  }
  else
  {
    v9 = 0.0;
  }
  FS_Printf(f, "Average number of fields skipped when sending %s delta: %f (%i/%i)\n", networkType, v9, this->totalFieldsSkipped, this->totaTimesSkipped);
  FS_Printf(f, "Breakdown of fields skipped:\n");
  v10 = 0i64;
  v11 = 1;
  do
  {
    if ( this->numFieldsSkipped[v10] )
    {
      v12 = "%i or more fields skipped: %i\n";
      if ( v10 != 574 )
        v12 = "%i fields skipped: %i\n";
      FS_Printf(f, v12, v11, (unsigned int)this->numFieldsSkipped[v10]);
    }
    ++v11;
    ++v10;
  }
  while ( v10 < 575 );
  v13 = 0i64;
  v14 = 2;
  v15 = 0i64;
  v16 = 2;
  do
  {
    if ( this->numFieldsSkipped[v15] )
      v13 = (unsigned int)(v16 * (this->numFieldsSkipped[v15] - 1) + v13);
    ++v16;
    ++v15;
  }
  while ( v15 < 575 );
  FS_Printf(f, "Total overhead if %s used 1 bit skip markers: %i\n", networkType, v13);
  do
  {
    if ( v14 <= 0 )
    {
      LODWORD(v26) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v26) )
        __debugbreak();
    }
    v17 = 0;
    v18 = 0i64;
    v19 = __ROL4__(1, v14);
    v20 = 1;
    do
    {
      if ( this->numFieldsSkipped[v18] )
        v17 += v14 * (this->numFieldsSkipped[v18] - 1) * (v20 / (v19 - 1) + 1);
      ++v20;
      ++v18;
    }
    while ( v18 < 575 );
    LODWORD(fmt) = v17;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers: %i\n", networkType, (unsigned int)v14, fmt);
    if ( v14 <= 0 )
    {
      LODWORD(v26) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v26) )
        __debugbreak();
    }
    v21 = 0;
    v22 = 0i64;
    v23 = 1;
    do
    {
      if ( this->numFieldsSkipped[v22] )
      {
        v21 += this->numFieldsSkipped[v22];
        if ( v22 )
          v21 += v14 * (this->numFieldsSkipped[v22] - 1) * (v23 / (v19 - 1) + 1);
      }
      ++v23;
      ++v22;
    }
    while ( v22 < 575 );
    LODWORD(fmta) = v21;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers with one bit for a single field jump: %i\n\n", networkType, (unsigned int)v14++, fmta);
  }
  while ( v14 < 8 );
}

/*
==============
skippedFieldsTracking<46>::PrintData
==============
*/
void skippedFieldsTracking<46>::PrintData(skippedFieldsTracking<46> *this, fileHandle_t f, const char *networkType)
{
  __int64 totaTimesSkipped; 
  float totalFieldsSkipped; 
  float v8; 
  float v9; 
  __int64 v10; 
  unsigned int v11; 
  const char *v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  char *fmt; 
  char *fmta; 
  __int64 v26; 

  FS_Printf(f, "%s Fields Skipped Data:\n\n", networkType);
  totaTimesSkipped = (unsigned int)this->totaTimesSkipped;
  if ( (_DWORD)totaTimesSkipped )
  {
    totalFieldsSkipped = (float)(unsigned int)this->totalFieldsSkipped;
    v8 = (float)totaTimesSkipped;
    v9 = totalFieldsSkipped / v8;
  }
  else
  {
    v9 = 0.0;
  }
  FS_Printf(f, "Average number of fields skipped when sending %s delta: %f (%i/%i)\n", networkType, v9, this->totalFieldsSkipped, this->totaTimesSkipped);
  FS_Printf(f, "Breakdown of fields skipped:\n");
  v10 = 0i64;
  v11 = 1;
  do
  {
    if ( this->numFieldsSkipped[v10] )
    {
      v12 = "%i or more fields skipped: %i\n";
      if ( v10 != 45 )
        v12 = "%i fields skipped: %i\n";
      FS_Printf(f, v12, v11, (unsigned int)this->numFieldsSkipped[v10]);
    }
    ++v11;
    ++v10;
  }
  while ( v10 < 46 );
  v13 = 0i64;
  v14 = 2;
  v15 = 0i64;
  v16 = 2;
  do
  {
    if ( this->numFieldsSkipped[v15] )
      v13 = (unsigned int)(v16 * (this->numFieldsSkipped[v15] - 1) + v13);
    ++v16;
    ++v15;
  }
  while ( v15 < 46 );
  FS_Printf(f, "Total overhead if %s used 1 bit skip markers: %i\n", networkType, v13);
  do
  {
    if ( v14 <= 0 )
    {
      LODWORD(v26) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v26) )
        __debugbreak();
    }
    v17 = 0;
    v18 = 0i64;
    v19 = __ROL4__(1, v14);
    v20 = 1;
    do
    {
      if ( this->numFieldsSkipped[v18] )
        v17 += v14 * (this->numFieldsSkipped[v18] - 1) * (v20 / (v19 - 1) + 1);
      ++v20;
      ++v18;
    }
    while ( v18 < 46 );
    LODWORD(fmt) = v17;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers: %i\n", networkType, (unsigned int)v14, fmt);
    if ( v14 <= 0 )
    {
      LODWORD(v26) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v26) )
        __debugbreak();
    }
    v21 = 0;
    v22 = 0i64;
    v23 = 1;
    do
    {
      if ( this->numFieldsSkipped[v22] )
      {
        v21 += this->numFieldsSkipped[v22];
        if ( v22 )
          v21 += v14 * (this->numFieldsSkipped[v22] - 1) * (v23 / (v19 - 1) + 1);
      }
      ++v23;
      ++v22;
    }
    while ( v22 < 46 );
    LODWORD(fmta) = v21;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers with one bit for a single field jump: %i\n\n", networkType, (unsigned int)v14++, fmta);
  }
  while ( v14 < 8 );
}

/*
==============
skippedFieldsTracking<68>::PrintData
==============
*/
void skippedFieldsTracking<68>::PrintData(skippedFieldsTracking<68> *this, fileHandle_t f, const char *networkType)
{
  __int64 totaTimesSkipped; 
  float totalFieldsSkipped; 
  float v8; 
  float v9; 
  __int64 v10; 
  unsigned int v11; 
  const char *v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  char *fmt; 
  char *fmta; 
  __int64 v26; 

  FS_Printf(f, "%s Fields Skipped Data:\n\n", networkType);
  totaTimesSkipped = (unsigned int)this->totaTimesSkipped;
  if ( (_DWORD)totaTimesSkipped )
  {
    totalFieldsSkipped = (float)(unsigned int)this->totalFieldsSkipped;
    v8 = (float)totaTimesSkipped;
    v9 = totalFieldsSkipped / v8;
  }
  else
  {
    v9 = 0.0;
  }
  FS_Printf(f, "Average number of fields skipped when sending %s delta: %f (%i/%i)\n", networkType, v9, this->totalFieldsSkipped, this->totaTimesSkipped);
  FS_Printf(f, "Breakdown of fields skipped:\n");
  v10 = 0i64;
  v11 = 1;
  do
  {
    if ( this->numFieldsSkipped[v10] )
    {
      v12 = "%i or more fields skipped: %i\n";
      if ( v10 != 67 )
        v12 = "%i fields skipped: %i\n";
      FS_Printf(f, v12, v11, (unsigned int)this->numFieldsSkipped[v10]);
    }
    ++v11;
    ++v10;
  }
  while ( v10 < 68 );
  v13 = 0i64;
  v14 = 2;
  v15 = 0i64;
  v16 = 2;
  do
  {
    if ( this->numFieldsSkipped[v15] )
      v13 = (unsigned int)(v16 * (this->numFieldsSkipped[v15] - 1) + v13);
    ++v16;
    ++v15;
  }
  while ( v15 < 68 );
  FS_Printf(f, "Total overhead if %s used 1 bit skip markers: %i\n", networkType, v13);
  do
  {
    if ( v14 <= 0 )
    {
      LODWORD(v26) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v26) )
        __debugbreak();
    }
    v17 = 0;
    v18 = 0i64;
    v19 = __ROL4__(1, v14);
    v20 = 1;
    do
    {
      if ( this->numFieldsSkipped[v18] )
        v17 += v14 * (this->numFieldsSkipped[v18] - 1) * (v20 / (v19 - 1) + 1);
      ++v20;
      ++v18;
    }
    while ( v18 < 68 );
    LODWORD(fmt) = v17;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers: %i\n", networkType, (unsigned int)v14, fmt);
    if ( v14 <= 0 )
    {
      LODWORD(v26) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v26) )
        __debugbreak();
    }
    v21 = 0;
    v22 = 0i64;
    v23 = 1;
    do
    {
      if ( this->numFieldsSkipped[v22] )
      {
        v21 += this->numFieldsSkipped[v22];
        if ( v22 )
          v21 += v14 * (this->numFieldsSkipped[v22] - 1) * (v23 / (v19 - 1) + 1);
      }
      ++v23;
      ++v22;
    }
    while ( v22 < 68 );
    LODWORD(fmta) = v21;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers with one bit for a single field jump: %i\n\n", networkType, (unsigned int)v14++, fmta);
  }
  while ( v14 < 8 );
}

/*
==============
skippedFieldsTracking<118>::PrintData
==============
*/
void skippedFieldsTracking<118>::PrintData(skippedFieldsTracking<118> *this, fileHandle_t f, const char *networkType)
{
  __int64 totaTimesSkipped; 
  float totalFieldsSkipped; 
  float v8; 
  float v9; 
  __int64 v10; 
  unsigned int v11; 
  const char *v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  char *fmt; 
  char *fmta; 
  __int64 v26; 

  FS_Printf(f, "%s Fields Skipped Data:\n\n", networkType);
  totaTimesSkipped = (unsigned int)this->totaTimesSkipped;
  if ( (_DWORD)totaTimesSkipped )
  {
    totalFieldsSkipped = (float)(unsigned int)this->totalFieldsSkipped;
    v8 = (float)totaTimesSkipped;
    v9 = totalFieldsSkipped / v8;
  }
  else
  {
    v9 = 0.0;
  }
  FS_Printf(f, "Average number of fields skipped when sending %s delta: %f (%i/%i)\n", networkType, v9, this->totalFieldsSkipped, this->totaTimesSkipped);
  FS_Printf(f, "Breakdown of fields skipped:\n");
  v10 = 0i64;
  v11 = 1;
  do
  {
    if ( this->numFieldsSkipped[v10] )
    {
      v12 = "%i or more fields skipped: %i\n";
      if ( v10 != 117 )
        v12 = "%i fields skipped: %i\n";
      FS_Printf(f, v12, v11, (unsigned int)this->numFieldsSkipped[v10]);
    }
    ++v11;
    ++v10;
  }
  while ( v10 < 118 );
  v13 = 0i64;
  v14 = 2;
  v15 = 0i64;
  v16 = 2;
  do
  {
    if ( this->numFieldsSkipped[v15] )
      v13 = (unsigned int)(v16 * (this->numFieldsSkipped[v15] - 1) + v13);
    ++v16;
    ++v15;
  }
  while ( v15 < 118 );
  FS_Printf(f, "Total overhead if %s used 1 bit skip markers: %i\n", networkType, v13);
  do
  {
    if ( v14 <= 0 )
    {
      LODWORD(v26) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v26) )
        __debugbreak();
    }
    v17 = 0;
    v18 = 0i64;
    v19 = __ROL4__(1, v14);
    v20 = 1;
    do
    {
      if ( this->numFieldsSkipped[v18] )
        v17 += v14 * (this->numFieldsSkipped[v18] - 1) * (v20 / (v19 - 1) + 1);
      ++v20;
      ++v18;
    }
    while ( v18 < 118 );
    LODWORD(fmt) = v17;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers: %i\n", networkType, (unsigned int)v14, fmt);
    if ( v14 <= 0 )
    {
      LODWORD(v26) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v26) )
        __debugbreak();
    }
    v21 = 0;
    v22 = 0i64;
    v23 = 1;
    do
    {
      if ( this->numFieldsSkipped[v22] )
      {
        v21 += this->numFieldsSkipped[v22];
        if ( v22 )
          v21 += v14 * (this->numFieldsSkipped[v22] - 1) * (v23 / (v19 - 1) + 1);
      }
      ++v23;
      ++v22;
    }
    while ( v22 < 118 );
    LODWORD(fmta) = v21;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers with one bit for a single field jump: %i\n\n", networkType, (unsigned int)v14++, fmta);
  }
  while ( v14 < 8 );
}

/*
==============
SV_AggregateServerEntitySkippedFields
==============
*/
void SV_AggregateServerEntitySkippedFields(const ServerEntityHeader *const header)
{
  unsigned int m_totalFieldsSkipped; 
  unsigned int m_totalTimesSkipped; 
  unsigned int v4; 
  unsigned __int8 *m_numFieldsSkipped; 
  unsigned int v6; 
  volatile signed __int32 *v7; 

  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 617, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  if ( header->m_totalTimesSkipped )
  {
    m_totalFieldsSkipped = header->m_totalFieldsSkipped;
    if ( ((unsigned __int8)&s_skippedFieldsTrackingEntityState.totalFieldsSkipped & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_skippedFieldsTrackingEntityState.totalFieldsSkipped) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_skippedFieldsTrackingEntityState.totalFieldsSkipped, m_totalFieldsSkipped);
    m_totalTimesSkipped = header->m_totalTimesSkipped;
    if ( ((unsigned __int8)&s_skippedFieldsTrackingEntityState.totaTimesSkipped & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_skippedFieldsTrackingEntityState.totaTimesSkipped) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_skippedFieldsTrackingEntityState.totaTimesSkipped, m_totalTimesSkipped);
    v4 = 0;
    m_numFieldsSkipped = header->m_numFieldsSkipped;
    do
    {
      v6 = *m_numFieldsSkipped;
      v7 = &s_skippedFieldsTrackingEntityState.numFieldsSkipped[v4];
      if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_skippedFieldsTrackingEntityState.numFieldsSkipped[v4]) )
        __debugbreak();
      _InterlockedExchangeAdd(v7, v6);
      ++v4;
      ++m_numFieldsSkipped;
    }
    while ( v4 < 0x44 );
  }
}

/*
==============
SV_AnalyzePacketData
==============
*/
void SV_AnalyzePacketData(__int64 clientNum, const unsigned int packetSize)
{
  unsigned __int64 v3; 
  const dvar_t *v4; 
  SvClientMP *MpClient; 
  const dvar_t *v6; 
  SvClientMP *v7; 
  const dvar_t *v8; 
  const char *v9; 
  const char *name; 
  int v11; 
  ClientSnapshotDetailedData *v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  unsigned int offset; 
  unsigned __int16 size; 
  __int64 v20; 
  const char *v21; 
  int v22; 
  const char *UnobfuscatedName; 
  const char **v24; 
  ClientSnapshotDetailedData *v25; 
  __int64 v26; 
  int v27; 
  unsigned __int8 *fieldsSentPerEntity; 
  unsigned int *bitsSentPerEntity; 
  int v30; 
  const char **v31; 
  int v32; 
  char v33; 
  signed int v34; 
  int v35; 
  int v36; 
  __int128 v40; 
  char *fmt; 
  char *fmta; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  int v49; 
  int v50; 
  dvar_t *outDvar; 
  ClientSnapshotDetailedData *v52; 
  unsigned __int64 v53; 
  unsigned __int64 v54; 
  __int64 v55; 
  char stringBuf[128]; 

  v3 = (int)clientNum;
  v49 = clientNum;
  if ( createfx && *(_BYTE *)createfx->current.integer64 )
    goto LABEL_3;
  v4 = DVARINT_sv_debugLargePacketsForcePrintSize;
  if ( !DVARINT_sv_debugLargePacketsForcePrintSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugLargePacketsForcePrintSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer > 0 || SV_ClientMP_IsTestClient(v3) )
    goto LABEL_3;
  MpClient = SV_Client_GetMpClient(v3);
  v6 = DVARINT_sv_debugPacketContents;
  v7 = MpClient;
  if ( !DVARINT_sv_debugPacketContents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugPacketContents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.integer )
  {
    if ( v7->ping >= 999 || SvClient::GetCommonClient(v3)->state != CS_ACTIVE || ((int)SvClient::ms_clientCount <= 20 ? (v8 = DVARINT_sv_debugLargePacketsMinSize, v9 = "sv_debugLargePacketsMinSize") : (v8 = DVARINT_sv_debugLargePacketsMinSizeLargePlayerCount, v9 = "sv_debugLargePacketsMinSizeLargePlayerCount"), packetSize < Dvar_GetInt_Internal_DebugName(v8, v9)) )
    {
LABEL_3:
      if ( v3 < 0xC8 )
      {
        s_entityLimitReached[v3] = 0;
        return;
      }
LABEL_67:
      j___report_rangecheckfailure(clientNum);
      JUMPOUT(0x1416D7A5Ci64);
    }
  }
  if ( (unsigned int)v3 >= s_clientSnapshotDetailedDataCount )
  {
    LODWORD(v46) = s_clientSnapshotDetailedDataCount;
    LODWORD(v44) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1013, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( s_clientSnapshotDetailedDataCount )", "clientNum doesn't index s_clientSnapshotDetailedDataCount\n\t%i not in [0, %i)", v44, v46) )
      __debugbreak();
  }
  name = v7->name;
  v11 = v7->netchan.outgoingSequence - v7->deltaMessage;
  v54 = v3;
  v12 = &s_clientSnapshotDetailedData[v3];
  v52 = v12;
  v13 = v3;
  LODWORD(fmt) = v11;
  Com_Printf(15, "[Snapshot] %s %i byte snapshot (%d) (average snapshot size is %f)\n", v7->name, packetSize, fmt, s_avgSnapshotSize);
  v14 = (unsigned int)s_entityLimitReachedCount[v3];
  if ( (int)v14 > 0 )
  {
    if ( s_entityLimitReached[v3] )
    {
      Com_Printf(15, "[Snapshot] %s This snapshot overflowed client entity limit!\n", v7->name);
      v14 = (unsigned int)s_entityLimitReachedCount[v3];
    }
    Com_Printf(15, "[Snapshot] %s %d snapshots have overflowed client entity count\n", v7->name, v14);
  }
  if ( SV_ShouldTrackPacketContents() )
  {
    v15 = 15;
    if ( !Dvar_GetInt_Internal_DebugName(DVARINT_sv_debugPacketContents, "sv_debugPacketContents") )
      v15 = 6;
    v53 = __rdtsc();
    Com_Printf(15, "[Snapshot] %s Tracking packet contents (See log file for details)\n", v7->name);
    v16 = v7->reliableAcknowledge + 1;
    if ( v16 <= v7->reliableSequence )
    {
      do
      {
        v17 = v16 & 0x1FF;
        offset = v7->netBuf.reliableCommands.m_entries[v17].offset;
        if ( v7->netBuf.reliableCommands.m_bufferNextIndex - offset <= 0x20000 && (size = v7->netBuf.reliableCommands.m_entries[v17].size) != 0 )
        {
          v20 = offset & 0x1FFFF;
          if ( (unsigned int)v20 + size > 0x20000 )
          {
            LODWORD(v48) = 0x20000;
            LODWORD(v47) = v20 + size;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v47, v48) )
              __debugbreak();
          }
          v21 = (const char *)&v7->netBuf.reliableCommands.m_buffer[v20];
          Com_Printf(v15, "[Snapshot] %s Reliable cmd #%i: %s\n", v7->name, v16 & 0x1FF, v21);
          if ( *v21 == 113 )
          {
            v22 = atoi(v21 + 2);
            if ( NetConstStrings_GetNetworkDvarAtIndex(v22, (const dvar_t **)&outDvar) )
            {
              if ( !outDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1056, ASSERT_TYPE_ASSERT, "( dvar )", (const char *)&queryFormat, "dvar") )
                __debugbreak();
              UnobfuscatedName = Dvar_DevGetUnobfuscatedName(outDvar->name);
              Com_Printf(v15, "\t[Snapshot] %s Dvar name: %s\n", v7->name, UnobfuscatedName);
            }
          }
        }
        else
        {
          v55 = 0i64;
          Com_Printf(v15, "[Snapshot] %s Reliable cmd #%i: <empty>\n", v7->name, v16 & 0x1FF);
        }
        ++v16;
      }
      while ( v16 <= v7->reliableSequence );
      LODWORD(v3) = v49;
      v12 = v52;
    }
    v24 = s_packetDataTypeString;
    v25 = v12;
    v26 = 18i64;
    do
    {
      if ( v25->bitsSent[0] )
      {
        LODWORD(v45) = v25->bitsSent[0] >> 3;
        LODWORD(fmta) = v25->bitsSent[0];
        Com_Printf(v15, "[Snapshot] %s %s - %i bits (%i bytes)\n", name, *v24, fmta, v45);
      }
      v25 = (ClientSnapshotDetailedData *)((char *)v25 + 4);
      ++v24;
      --v26;
    }
    while ( v26 );
    Com_Printf(v15, "[Snapshot] %s Playerstate fields sent: %i\n", name, v12->fieldsSentPlayerState);
    v27 = 0;
    fieldsSentPerEntity = v12->fieldsSentPerEntity;
    bitsSentPerEntity = v12->bitsSentPerEntity;
    do
    {
      if ( *fieldsSentPerEntity )
      {
        LODWORD(v46) = *bitsSentPerEntity >> 3;
        LODWORD(v45) = *bitsSentPerEntity;
        LODWORD(fmta) = *fieldsSentPerEntity;
        Com_Printf(v15, "[Snapshot] %s Entity %i (%i fields) - %i bits (%i bytes)\n", name, (unsigned int)v27, fmta, v45, v46);
      }
      ++v27;
      ++bitsSentPerEntity;
      ++fieldsSentPerEntity;
    }
    while ( v27 < 2048 );
    v30 = 0;
    v31 = s_analyzeEntityTypeNames;
    v32 = 34 * v3;
    v50 = 34 * v3;
    do
    {
      v33 = 0;
      v34 = 0;
      v35 = 575 * (v30 + v32);
      do
      {
        v36 = s_currentSnapshotEntityFieldsChanged[v35 + v34];
        if ( v36 > 0 )
        {
          if ( !v33 )
          {
            if ( (unsigned int)v30 >= 0x22 )
            {
              LODWORD(v46) = 34;
              LODWORD(v45) = v30;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 860, ASSERT_TYPE_ASSERT, "(unsigned)( packetEntityType ) < (unsigned)( ANALYZE_DATATYPE_ENTITYTYPE_COUNT )", "packetEntityType doesn't index ANALYZE_DATATYPE_ENTITYTYPE_COUNT\n\t%i not in [0, %i)", v45, v46) )
                __debugbreak();
            }
            Com_Printf(v15, "[Snapshot] %s %s fields changed: (field info: timeschanged)\n", name, *v31);
            v33 = 1;
          }
          SV_GetEntityFieldString((const PacketEntityType_e)v30, v34, stringBuf, 0x80u);
          LODWORD(fmta) = v36;
          Com_Printf(v15, "[Snapshot] %s %s: %u\n", name, stringBuf, fmta);
        }
        ++v34;
      }
      while ( v34 < 575 );
      v32 = v50;
      ++v30;
      ++v31;
    }
    while ( v30 < 34 );
    __rdtsc();
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    *((_QWORD *)&v40 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v40 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM1 = v40;
    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
    Com_Printf(15, "[Snapshot] %s Log print spew took %f ms.\n", name, *(float *)&_XMM2);
    v13 = v54;
  }
  if ( v13 >= 0xC8 )
    goto LABEL_67;
  s_entityLimitReached[v13] = 0;
}

/*
==============
SV_ClearAvailableClientPacketAnalysis
==============
*/
void SV_ClearAvailableClientPacketAnalysis(void)
{
  if ( !s_clientDisplaySwapReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 571, ASSERT_TYPE_ASSERT, "(s_clientDisplaySwapReady)", (const char *)&queryFormat, "s_clientDisplaySwapReady") )
    __debugbreak();
  s_clientDisplaySwapReady = 0;
}

/*
==============
SV_DisablePacketData
==============
*/
void SV_DisablePacketData(void)
{
  *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1041i64) = 0;
}

/*
==============
SV_DispatchSnapshotProfileData
==============
*/
void SV_DispatchSnapshotProfileData(void)
{
  SV_WriteEntityFieldNumbers();
  SV_WriteEntityFieldNumbersToBlackbox();
  SV_ResetSnapshotProfileCounters();
}

/*
==============
SV_EnablePacketData
==============
*/
void SV_EnablePacketData(void)
{
  *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1041i64) = SV_ShouldTrackPacketContents();
}

/*
==============
SV_GetAnalyzeEntityFields
==============
*/
void SV_GetAnalyzeEntityFields(const int analyzeEntityType, const NetField **stateFields, unsigned int *numFields)
{
  __int64 v3; 
  const NetFieldList *v6; 
  unsigned int count; 

  v3 = analyzeEntityType;
  if ( !stateFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 908, ASSERT_TYPE_ASSERT, "(stateFields != nullptr)", (const char *)&queryFormat, "stateFields != nullptr") )
    __debugbreak();
  if ( !numFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 909, ASSERT_TYPE_ASSERT, "(numFields != nullptr)", (const char *)&queryFormat, "numFields != nullptr") )
    __debugbreak();
  v6 = s_netFieldListsForPacketEntityType[v3];
  *stateFields = v6->array;
  if ( (int)v3 >= 30 )
  {
    count = v6->count;
  }
  else
  {
    if ( (unsigned int)(v3 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v3, "signed", v3) )
      __debugbreak();
    count = MSG_GetNetFieldsCountForEntityType((const entityType_s)v3);
  }
  *numFields = count;
}

/*
==============
SV_GetAvailableClientPacketAnalysis
==============
*/
char SV_GetAvailableClientPacketAnalysis(const ClientSnapshotDetailedData **outDetailedData)
{
  if ( !outDetailedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 556, ASSERT_TYPE_ASSERT, "(outDetailedData)", (const char *)&queryFormat, "outDetailedData") )
    __debugbreak();
  if ( !s_clientDisplaySwapReady )
    return 0;
  *outDetailedData = &s_clientDisplaySwapBuffer;
  return 1;
}

/*
==============
SV_GetClientSnapshotPing
==============
*/
__int64 SV_GetClientSnapshotPing(const int clientNum, const int snapshotNum)
{
  SvClientMP *CommonClient; 
  __int64 result; 
  int outPing; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(clientNum);
  if ( CommonClient->netchan.outgoingSequence - snapshotNum <= 0 )
    return 0xFFFFFFFFi64;
  if ( !SvClientMP::GetFramePingHistory(CommonClient, CommonClient->netchan.outgoingSequence - snapshotNum, &outPing) )
    return 0xFFFFFFFFi64;
  result = (unsigned int)outPing;
  if ( outPing <= 0 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
SV_GetEntityFieldString
==============
*/
void SV_GetEntityFieldString(const PacketEntityType_e packetEntityType, const unsigned int fieldIndex, char *stringBuf, const unsigned int stringBufLen)
{
  entityType_s v4; 
  unsigned __int64 v5; 
  __int64 v7; 
  const NetFieldList *v8; 
  const NetField *array; 
  unsigned int count; 
  __int64 v11; 

  v4 = (__int16)packetEntityType;
  v5 = stringBufLen;
  v7 = fieldIndex;
  v8 = s_netFieldListsForPacketEntityType[packetEntityType];
  array = v8->array;
  if ( packetEntityType >= ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT )
  {
    count = v8->count;
  }
  else
  {
    if ( (unsigned int)(packetEntityType + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)packetEntityType, "signed", packetEntityType) )
      __debugbreak();
    count = MSG_GetNetFieldsCountForEntityType(v4);
  }
  if ( (unsigned int)v7 >= count )
  {
    Com_sprintf(stringBuf, v5, "%i", (unsigned int)v7);
  }
  else
  {
    LODWORD(v11) = array[v7].bits;
    Com_sprintf(stringBuf, v5, "%i (%s, %i bits)", (unsigned int)v7, array[v7].name, v11);
  }
}

/*
==============
SV_GetEntityTypeString
==============
*/
const char *SV_GetEntityTypeString(const PacketEntityType_e packetEntityType)
{
  __int64 v1; 
  int v4; 

  v1 = packetEntityType;
  if ( (unsigned int)packetEntityType >= ANALYZE_DATATYPE_ENTITYTYPE_COUNT )
  {
    v4 = 34;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 860, ASSERT_TYPE_ASSERT, "(unsigned)( packetEntityType ) < (unsigned)( ANALYZE_DATATYPE_ENTITYTYPE_COUNT )", "packetEntityType doesn't index ANALYZE_DATATYPE_ENTITYTYPE_COUNT\n\t%i not in [0, %i)", packetEntityType, v4) )
      __debugbreak();
  }
  return s_analyzeEntityTypeNames[v1];
}

/*
==============
SV_GetNetfieldListForPacketEntityType
==============
*/
const NetFieldList *SV_GetNetfieldListForPacketEntityType(const PacketEntityType_e packetEntityType)
{
  return s_netFieldListsForPacketEntityType[packetEntityType];
}

/*
==============
SV_GetPacketAnalysisClientNum
==============
*/
__int64 SV_GetPacketAnalysisClientNum()
{
  return (unsigned int)s_clientDisplayClientNum;
}

/*
==============
SV_GetPlayerStateSegmentFullName
==============
*/
const char *SV_GetPlayerStateSegmentFullName(const int segment)
{
  __int64 v1; 

  v1 = segment;
  if ( segment < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 2051, ASSERT_TYPE_ASSERT, "(segment >= PLAYERSTATE_SEGMENT_FIRST)", (const char *)&queryFormat, "segment >= PLAYERSTATE_SEGMENT_FIRST") )
    __debugbreak();
  if ( (int)v1 >= 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 2052, ASSERT_TYPE_ASSERT, "(segment < PLAYERSTATE_SEGMENT_COUNT)", (const char *)&queryFormat, "segment < PLAYERSTATE_SEGMENT_COUNT") )
    __debugbreak();
  return s_psSegmentFullNames[v1];
}

/*
==============
SV_GetPlayerStateSegmentShortName
==============
*/
const char *SV_GetPlayerStateSegmentShortName(const int segment)
{
  __int64 v1; 

  v1 = segment;
  if ( segment < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 2071, ASSERT_TYPE_ASSERT, "(segment >= PLAYERSTATE_SEGMENT_FIRST)", (const char *)&queryFormat, "segment >= PLAYERSTATE_SEGMENT_FIRST") )
    __debugbreak();
  if ( (int)v1 >= 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 2072, ASSERT_TYPE_ASSERT, "(segment < PLAYERSTATE_SEGMENT_COUNT)", (const char *)&queryFormat, "segment < PLAYERSTATE_SEGMENT_COUNT") )
    __debugbreak();
  return s_psSegmentShortNames[v1];
}

/*
==============
SV_Int32Add
==============
*/
void SV_Int32Add(volatile int *addend, const int increment)
{
  if ( ((unsigned __int8)addend & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)addend) )
    __debugbreak();
  _InterlockedExchangeAdd(addend, increment);
}

/*
==============
SV_Int32Inc
==============
*/
void SV_Int32Inc(volatile int *addend)
{
  if ( ((unsigned __int8)addend & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)addend) )
    __debugbreak();
  _InterlockedExchangeAdd(addend, 1u);
}

/*
==============
SV_IsSnapshotNetworkData
==============
*/
bool SV_IsSnapshotNetworkData()
{
  __int64 v0; 

  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  return *(_BYTE *)(v0 + 1041) && *(_BYTE *)(v0 + 1042);
}

/*
==============
SV_LogSnapshotContent
==============
*/
void SV_LogSnapshotContent(const int clientNum, const char *formatString, ...)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  char dest[1024]; 
  va_list ap; 

  va_start(ap, formatString);
  if ( clientNum != -1 )
  {
    v3 = DVARINT_sv_debugPacketContents;
    if ( !DVARINT_sv_debugPacketContents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugPacketContents") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.integer >= 1 )
    {
      v4 = DVARINT_sv_debugPacketContents;
      if ( !DVARINT_sv_debugPacketContents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugPacketContents") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.integer > 2 )
      {
        memset_0(dest, 0, sizeof(dest));
        Com_vsprintf(dest, 0x400ui64, formatString, ap);
        Com_Printf(15, "SNAPSHOT [%d] %s", (unsigned int)clientNum, dest);
      }
    }
  }
}

/*
==============
SV_Netchan_PrintProfileStats
==============
*/
void SV_Netchan_PrintProfileStats(int bPrintToConsole)
{
  __int128 v1; 
  __int128 v2; 
  int gunZOfs_low; 
  const dvar_t *v5; 
  int integer; 
  unsigned int v7; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int iSmallestPacket; 
  int v12; 
  signed int v13; 
  int iLargestPacket; 
  int v15; 
  __int64 iBytesPerSecond; 
  int iCountedFragments; 
  int v18; 
  int iCountedPackets; 
  int v20; 
  SvClient *CommonClient; 
  int v22; 
  int v23; 
  float gunYOfs; 
  int v25; 
  int v26; 
  int v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  __int64 v32; 
  unsigned int *v34; 
  __int64 v38; 
  const dvar_t *v64; 
  const dvar_t *v65; 
  signed int v66; 
  int *v67; 
  SvClient *v68; 
  int v69; 
  int i; 
  int v71; 
  __int64 v72; 
  char v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  __int64 v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  char *fmt; 
  char *fmta; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  __int64 v92; 
  __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  __int64 v97; 
  __int64 v98; 
  __int64 v99; 
  int y; 
  int v101; 
  int v102; 
  unsigned int clientNum; 
  unsigned int clientNuma; 
  int v105; 
  unsigned int *v107; 
  int *v108; 
  unsigned int v109; 
  __int64 v110; 
  char Destination[32]; 
  char dest[1024]; 
  __int128 v113; 
  __int128 v114; 

  gunZOfs_low = 9999;
  if ( !net_profile->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 2179, ASSERT_TYPE_ASSERT, "(net_profile->current.integer)", (const char *)&queryFormat, "net_profile->current.integer") )
    __debugbreak();
  SV_Netchan_UpdateProfileStats();
  if ( Com_IsAnyLocalServerRunning() )
  {
    v5 = DVARINT_cl_profileTextY;
    v113 = v2;
    if ( !DVARINT_cl_profileTextY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    integer = v5->current.integer;
    y = integer;
    if ( bPrintToConsole )
      Com_Printf(15, "\n\n====================\nServer Network Profile\n\n");
    Com_sprintf(dest, 0x400ui64, "                    | Sent To                                                 | From |");
    if ( bPrintToConsole )
    {
      Com_Printf(15, "%s\n", dest);
    }
    else
    {
      integer += SV_ProfDraw(integer, dest, -1);
      y = integer;
    }
    Com_sprintf(dest, 0x400ui64, "              Source|   bps|  max|  min|frag%%|drop%%|ak|huff%%|p/s| bk|tra|   bps|");
    if ( bPrintToConsole )
      Com_Printf(15, "%s\n", dest);
    else
      y = SV_ProfDraw(integer, dest, -1) + integer;
    v7 = Sys_Milliseconds();
    _XMM8 = v7;
    __asm { vpshufd xmm8, xmm8, 0 }
    v109 = v7;
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    v107 = (unsigned int *)PersistentGlobalsMP;
    iSmallestPacket = 9999;
    v12 = 0;
    v13 = 0;
    iLargestPacket = PersistentGlobalsMP->OOBProf.send.iLargestPacket;
    v15 = PersistentGlobalsMP->OOBProf.recieve.iLargestPacket;
    if ( iLargestPacket <= 0 )
      iLargestPacket = 0;
    iBytesPerSecond = (unsigned int)PersistentGlobalsMP->OOBProf.send.iBytesPerSecond;
    iCountedFragments = PersistentGlobalsMP->OOBProf.send.iCountedFragments;
    v18 = PersistentGlobalsMP->OOBProf.recieve.iBytesPerSecond;
    if ( PersistentGlobalsMP->OOBProf.send.iSmallestPacket < 9999 )
      iSmallestPacket = PersistentGlobalsMP->OOBProf.send.iSmallestPacket;
    iCountedPackets = PersistentGlobalsMP->OOBProf.send.iCountedPackets;
    v20 = PersistentGlobalsMP->OOBProf.recieve.iSmallestPacket;
    if ( v15 <= 0 )
      v15 = 0;
    clientNum = iBytesPerSecond;
    v105 = iCountedFragments;
    v101 = v18;
    if ( v20 < 9999 )
      gunZOfs_low = v20;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      do
      {
        if ( SvClient::GetCommonClient(v13)->state )
        {
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          CommonClient = SvClient::GetCommonClient(v13);
          if ( !NetConnection::IsLoopback((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) )
          {
            iCountedPackets += *(_DWORD *)&CommonClient[774].lastUsercmd.weapon.attachmentVariationIndices[13];
            v22 = *(_DWORD *)&CommonClient[774].lastUsercmd.weapon.attachmentVariationIndices[25];
            clientNum += *(_DWORD *)&CommonClient[774].lastUsercmd.weapon.attachmentVariationIndices[5];
            v105 += *(_DWORD *)&CommonClient[774].lastUsercmd.weapon.attachmentVariationIndices[17];
            v101 += LODWORD(CommonClient[782].lastUsercmd.vehOrgY);
            v23 = *(_DWORD *)&CommonClient[774].lastUsercmd.weapon.weaponCamo;
            if ( v22 <= iLargestPacket )
              v22 = iLargestPacket;
            iLargestPacket = v22;
            if ( v23 >= iSmallestPacket )
              v23 = iSmallestPacket;
            iSmallestPacket = v23;
            gunYOfs = CommonClient[782].lastUsercmd.gunYOfs;
            if ( SLODWORD(gunYOfs) <= v15 )
              gunYOfs = *(float *)&v15;
            v15 = LODWORD(gunYOfs);
            if ( SLODWORD(CommonClient[782].lastUsercmd.gunZOfs) < gunZOfs_low )
              gunZOfs_low = LODWORD(CommonClient[782].lastUsercmd.gunZOfs);
          }
          v12 += LODWORD(CommonClient[643].lastUsercmd.buttons) - *(_DWORD *)&CommonClient[602].lastUsercmd.weapon.attachmentVariationIndices[5];
        }
        ++v13;
      }
      while ( v13 < (int)SvClient::ms_clientCount );
      iCountedFragments = v105;
      iBytesPerSecond = clientNum;
      v18 = v101;
    }
    if ( iCountedPackets )
      v25 = 100 * iCountedFragments / iCountedPackets;
    else
      v25 = 0;
    LODWORD(v89) = v25;
    LODWORD(v87) = iSmallestPacket;
    LODWORD(fmt) = iLargestPacket;
    Com_sprintf(dest, 0x400ui64, "              Totals:%6i|%5i|%5i| %3i%%| %3i%%|%2i|%4i%%|%3i|%3i|%3i|%6i|", iBytesPerSecond, fmt, v87, v89, 0, 0, 0, 0, v12, 0, v18);
    v26 = bPrintToConsole;
    if ( bPrintToConsole )
    {
      Com_Printf(15, "%s\n", dest);
      v29 = y;
    }
    else
    {
      v30 = DVARINT_cl_profileTextHeight;
      if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      CL_DrawString(12, y, dest, 0, v30->current.integer);
      v31 = DVARINT_cl_profileTextHeight;
      if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      v29 = v31->current.integer + y;
      v26 = 0;
      y = v29;
    }
    v32 = v107[14984];
    if ( (int)v32 > 0 || (int)v107[15592] > 0 )
    {
      _XMM6 = _xmm;
      v114 = v1;
      v34 = v107 + 14389;
      _XMM7 = _xmm;
      __asm
      {
        vpxor   xmm4, xmm4, xmm4
        vpxor   xmm5, xmm5, xmm5
      }
      v38 = 25i64;
      do
      {
        _XMM0 = *(v34 - 6);
        __asm
        {
          vpinsrd xmm0, xmm0, dword ptr [rax-0Ch], 1
          vpinsrd xmm0, xmm0, dword ptr [rax], 2
          vpinsrd xmm0, xmm0, dword ptr [rax+0Ch], 3
        }
        v34 += 24;
        __asm
        {
          vpsubd  xmm0, xmm8, xmm0
          vpcmpgtd xmm3, xmm6, xmm0
          vpaddd  xmm1, xmm7, xmm4
          vpand   xmm2, xmm1, xmm3
          vpandn  xmm0, xmm3, xmm4
          vpor    xmm4, xmm2, xmm0
        }
        _XMM0 = *(v34 - 18);
        __asm
        {
          vpinsrd xmm0, xmm0, dword ptr [rax-3Ch], 1
          vpinsrd xmm0, xmm0, dword ptr [rax-30h], 2
          vpinsrd xmm0, xmm0, dword ptr [rax-24h], 3
          vpsubd  xmm0, xmm8, xmm0
          vpcmpgtd xmm3, xmm6, xmm0
          vpaddd  xmm1, xmm7, xmm5
          vpand   xmm2, xmm1, xmm3
          vpandn  xmm0, xmm3, xmm5
          vpor    xmm5, xmm2, xmm0
        }
        --v38;
      }
      while ( v38 );
      LODWORD(v97) = v107[15592];
      __asm
      {
        vpaddd  xmm1, xmm5, xmm4
        vpsrldq xmm0, xmm1, 8
        vpaddd  xmm2, xmm1, xmm0
        vpsrldq xmm0, xmm2, 4
        vpaddd  xmm0, xmm2, xmm0
      }
      LODWORD(v94) = _XMM0;
      LODWORD(v93) = 0;
      LODWORD(v92) = 0;
      LODWORD(v91) = 0;
      LODWORD(v90) = v107[14988];
      LODWORD(v88) = v107[14990];
      LODWORD(fmta) = v107[14989];
      Com_sprintf(dest, 0x400ui64, "  OutOfBand Messages: %5i|%5i|%5i| %3i%%| %3i%%|%2i|%4i%%|%3i|%3i|%3i %5i|", v32, fmta, v88, v90, v91, v92, v93, v94, 0i64, 0i64, v97);
      if ( v26 )
      {
        Com_Printf(15, "%s\n", dest);
      }
      else
      {
        v64 = DVARINT_cl_profileTextHeight;
        if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v64);
        CL_DrawString(12, v29, dest, 0, v64->current.integer);
        v65 = DVARINT_cl_profileTextHeight;
        if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v65);
        y = v65->current.integer + v29;
      }
    }
    v66 = 0;
    clientNuma = 0;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      v67 = &s_clientSnapshotSizeData[0].snapshotSize[6];
      v108 = &s_clientSnapshotSizeData[0].snapshotSize[6];
      do
      {
        if ( SvClient::GetCommonClient(v66)->state )
        {
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          v68 = SvClient::GetCommonClient(v66);
          strncpy(Destination, &v68[4].lastUsercmd.selectedLoc[1], 0x11ui64);
          Destination[16] = 0;
          v69 = 0;
          for ( i = 0; i < 64; ++i )
          {
            if ( i < 0 )
            {
              LODWORD(v88) = i;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1054, ASSERT_TYPE_ASSERT, "( sequence ) >= ( 0 )", "sequence >= 0\n\t%i, %i", v88, 0i64) )
                __debugbreak();
            }
            v71 = *((_DWORD *)&v68[1293].lastUsercmd.avoidForward + 18 * (i & 0x3F));
            if ( v71 <= v69 )
              break;
            v69 = v71;
          }
          v72 = 64i64;
          v102 = 0;
          v73 = i;
          v74 = 0;
          v110 = 64i64;
          v75 = 0;
          v76 = 0;
          v77 = 0;
          v78 = 0;
          do
          {
            if ( i < 0 )
            {
              LODWORD(v88) = i;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1054, ASSERT_TYPE_ASSERT, "( sequence ) >= ( 0 )", "sequence >= 0\n\t%i, %i", v88, 0i64) )
                __debugbreak();
              v72 = v110;
              v76 = v102;
            }
            v79 = v73 & 0x3F;
            if ( *((_DWORD *)&v68[1293].lastUsercmd.avoidForward + 18 * v79) > (signed int)(v109 - 1000) )
            {
              ++v77;
              if ( v68[1293].lastUsercmd.remoteControlAngles[72 * v79] == 1 )
                ++v78;
            }
            v80 = *((_DWORD *)&v68[1293].lastUsercmd.gunYaw + 18 * v79);
            if ( v80 > 0 )
              v75 += v76;
            if ( v80 > 0 )
              ++v74;
            ++v76;
            if ( v80 > 0 )
              v76 = 0;
            ++i;
            ++v73;
            v102 = v76;
            v110 = --v72;
          }
          while ( v72 );
          if ( v77 <= 0 )
            v81 = 0;
          else
            v81 = (int)(float)((float)(100.0 / (float)v77) * (float)v78);
          if ( LODWORD(v68[855].__vftable) )
          {
            v82 = 0;
          }
          else if ( v74 )
          {
            v82 = 100 * v75 / (v75 + v74);
          }
          else
          {
            v82 = 100;
          }
          v67 = v108;
          v83 = *v108 + v108[1] + *(v108 - 1) + *(v108 - 2) + *(v108 - 3) + *(v108 - 4) + *(v108 - 5) + *(v108 - 6);
          if ( v83 )
            v84 = 100 - 100 * (v108[2] + v108[3] + v108[4] + v108[5] + v108[6] + v108[7] + v108[8] + v108[9]) / v83;
          else
            v84 = 0;
          v66 = clientNuma;
          *(float *)&v99 = v68[782].lastUsercmd.vehOrgY;
          LODWORD(v98) = v81;
          LODWORD(v97) = LODWORD(v68[643].lastUsercmd.buttons) - *(_DWORD *)&v68[602].lastUsercmd.weapon.attachmentVariationIndices[5];
          LODWORD(v96) = v77;
          LODWORD(v95) = v84;
          LODWORD(v94) = v76;
          LODWORD(v93) = v82;
          LODWORD(v92) = *(_DWORD *)&v68[774].lastUsercmd.weapon.attachmentVariationIndices[21];
          LODWORD(v91) = *(_DWORD *)&v68[774].lastUsercmd.weapon.weaponCamo;
          LODWORD(v90) = *(_DWORD *)&v68[774].lastUsercmd.weapon.attachmentVariationIndices[25];
          LODWORD(v88) = *(_DWORD *)&v68[774].lastUsercmd.weapon.attachmentVariationIndices[5];
          Com_sprintf(dest, 0x400ui64, "#%2i-%16s: %5i|%5i|%5i| %3i%%| %3i%%|%2i|%4i%%|%3i|%3i|%3i| %5i|", clientNuma, Destination, v88, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99);
          if ( bPrintToConsole )
            Com_Printf(15, "%s\n", dest);
          else
            y += SV_ProfDraw(y, dest, clientNuma);
        }
        ++v66;
        v67 += 17;
        clientNuma = v66;
        v108 = v67;
      }
      while ( v66 < (int)SvClient::ms_clientCount );
    }
  }
}

/*
==============
SV_PacketIsNetworkBound
==============
*/
void SV_PacketIsNetworkBound(const bool networkBound)
{
  *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1042i64) = networkBound;
}

/*
==============
SV_ProfDraw
==============
*/
__int64 SV_ProfDraw(int y, const char *string, int clientNum)
{
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  vec4_t color; 

  if ( clientNum >= 0 && (clientNum == s_clientDisplayClientNum || s_clientDisplayClientNum < 0) )
  {
    v5 = DVARINT_cl_profileTextHeight;
    color = (vec4_t)_xmm;
    if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    CL_DrawRect(12, y, 1024, v5->current.integer, &color);
  }
  v6 = DVARINT_cl_profileTextHeight;
  if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  CL_DrawString(12, y, string, 0, v6->current.integer);
  v7 = DVARINT_cl_profileTextHeight;
  if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return v7->current.unsignedInt;
}

/*
==============
SV_ResetCurrentSnapshotChangedFlags
==============
*/
void SV_ResetCurrentSnapshotChangedFlags(const int clientNum)
{
  memset_0(&s_currentSnapshotEntityFieldsChanged[19550 * clientNum], 0, 0x13178ui64);
}

/*
==============
SV_ResetSnapshotContent
==============
*/
void SV_ResetSnapshotContent(const int clientNum)
{
  ;
}

/*
==============
SV_ResetSnapshotProfileCounters
==============
*/
void *SV_ResetSnapshotProfileCounters()
{
  void *result; 

  memset_0(s_clientSnapshotSizeData, 0, sizeof(s_clientSnapshotSizeData));
  s_maxSnapshotSize = 0;
  s_numSnapshotSamples = 0;
  s_avgSnapshotSize = 0.0;
  s_stdSnapshotDeviation = 0.0;
  memset_0((void *)s_networkEntityFieldsChanged, 0, sizeof(s_networkEntityFieldsChanged));
  memset_0((void *)s_bitsUsedPerEType, 0, sizeof(s_bitsUsedPerEType));
  *(_QWORD *)s_bitsUsedForPlayerstates = 0i64;
  *(_QWORD *)&s_bitsUsedForPlayerstates[2] = 0i64;
  *(_QWORD *)&s_bitsUsedForPlayerstates[4] = 0i64;
  *(_QWORD *)&s_bitsUsedForPlayerstates[6] = 0i64;
  *(_QWORD *)&s_bitsUsedForPlayerstates[8] = 0i64;
  memset_0((void *)s_playerStateFieldsChanged, 0, sizeof(s_playerStateFieldsChanged));
  s_totalBitsUsedForServerCommands = 0;
  *(_QWORD *)s_originDeltaBits = 0i64;
  *(_QWORD *)&s_originDeltaBits[2] = 0i64;
  *(_QWORD *)&s_originDeltaBits[4] = 0i64;
  *(_QWORD *)&s_originDeltaBits[6] = 0i64;
  *(_QWORD *)s_originZDeltaBits = 0i64;
  *(_QWORD *)&s_originZDeltaBits[2] = 0i64;
  *(_QWORD *)&s_originZDeltaBits[4] = 0i64;
  *(_QWORD *)&s_originZDeltaBits[6] = 0i64;
  *(_QWORD *)s_originZFullBits = 0i64;
  *(_QWORD *)&s_originZFullBits[2] = 0i64;
  *(_QWORD *)&s_originZFullBits[4] = 0i64;
  *(_QWORD *)&s_originZFullBits[6] = 0i64;
  *(_QWORD *)&s_originZFullBits[8] = 0i64;
  *(_QWORD *)&s_originZFullBits[10] = 0i64;
  *(_QWORD *)&s_originZFullBits[12] = 0i64;
  *(_QWORD *)&s_originZFullBits[14] = 0i64;
  s_originZFullBits[16] = 0;
  *(_QWORD *)s_originFullBits = 0i64;
  *(_QWORD *)&s_originFullBits[2] = 0i64;
  *(_QWORD *)&s_originFullBits[4] = 0i64;
  *(_QWORD *)&s_originFullBits[6] = 0i64;
  *(_QWORD *)&s_originFullBits[8] = 0i64;
  *(_QWORD *)&s_originFullBits[10] = 0i64;
  *(_QWORD *)&s_originFullBits[12] = 0i64;
  *(_QWORD *)&s_originFullBits[14] = 0i64;
  *(_QWORD *)&s_originFullBits[16] = 0i64;
  s_originFullBits[18] = 0;
  memset_0((void *)s_originExpGolombBits, 0, sizeof(s_originExpGolombBits));
  memset_0((void *)s_movementDirDelta, 0, sizeof(s_movementDirDelta));
  *(_QWORD *)s_angleDeltaBits = 0i64;
  *(_QWORD *)&s_angleDeltaBits[2] = 0i64;
  *(_QWORD *)&s_angleDeltaBits[4] = 0i64;
  *(_QWORD *)&s_angleDeltaBits[6] = 0i64;
  *(_QWORD *)&s_angleDeltaBits[8] = 0i64;
  *(_QWORD *)&s_angleDeltaBits[10] = 0i64;
  s_angleDeltaBits[12] = 0;
  s_viewDirFullSends = 0;
  *(_QWORD *)s_eventSeqFull = 0i64;
  *(_QWORD *)&s_eventSeqFull[2] = 0i64;
  *(_QWORD *)&s_eventSeqFull[4] = 0i64;
  *(_QWORD *)&s_eventSeqFull[6] = 0i64;
  s_eventSeqFull[8] = 0;
  *(_QWORD *)s_eventSeqDelta = 0i64;
  *(_QWORD *)&s_eventSeqDelta[2] = 0i64;
  *(_QWORD *)&s_eventSeqDelta[4] = 0i64;
  *(_QWORD *)&s_eventSeqDelta[6] = 0i64;
  s_eventSeqDelta[8] = 0;
  s_eventsSent = 0;
  s_eventTypesSent = 0;
  s_eventParmsSent = 0;
  s_bitsUsedForEventOverhead = 0;
  s_bitsUsedForEventTypes = 0;
  s_bitsUsedForEventParms = 0;
  s_bitsUsedForEvents = 0;
  s_originsSentDueToPredicitonError = 0;
  s_originsSentDueToServerTimeMismatch = 0;
  memset_0(&s_skippedFieldsTrackingPlayerState, 0, 0x8FCui64);
  s_skippedFieldsTrackingPlayerState.totaTimesSkipped = 0;
  s_skippedFieldsTrackingPlayerState.totalFieldsSkipped = 0;
  memset_0(&s_skippedFieldsTrackingClientState, 0, 0x1D8ui64);
  s_skippedFieldsTrackingClientState.totaTimesSkipped = 0;
  s_skippedFieldsTrackingClientState.totalFieldsSkipped = 0;
  memset_0(&s_skippedFieldsTrackingEntityState, 0, 0x110ui64);
  s_skippedFieldsTrackingEntityState.totaTimesSkipped = 0;
  s_skippedFieldsTrackingEntityState.totalFieldsSkipped = 0;
  result = memset_0(&s_skippedFieldsTrackingHudElem, 0, 0xB8ui64);
  s_skippedFieldsTrackingHudElem.totaTimesSkipped = 0;
  s_skippedFieldsTrackingHudElem.totalFieldsSkipped = 0;
  s_numPacketsFragmented = 0i64;
  s_totalFragmentedPacketsOriginalSize = 0i64;
  s_totalFragmentedPacketsCompressedSize = 0i64;
  return result;
}

/*
==============
SV_SetEntityLimitReached
==============
*/
void SV_SetEntityLimitReached(const int clientNum)
{
  ++s_entityLimitReachedCount[clientNum];
  s_entityLimitReached[clientNum] = 1;
}

/*
==============
SV_ShouldTrackPacketContents
==============
*/
bool SV_ShouldTrackPacketContents()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 

  v0 = DVARBOOL_sv_debugTrackPacketContents;
  if ( !DVARBOOL_sv_debugTrackPacketContents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackPacketContents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    return 1;
  v1 = DVARINT_sv_debugPacketContents;
  if ( !DVARINT_sv_debugPacketContents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugPacketContents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer )
    return 1;
  v2 = DVARBOOL_online_blackbox_send_snapshot_bw_data;
  if ( !DVARBOOL_online_blackbox_send_snapshot_bw_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_blackbox_send_snapshot_bw_data") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled || net_showprofile->current.integer;
}

/*
==============
SV_SnapshotProfileMP_AllocateMemory
==============
*/
void SV_SnapshotProfileMP_AllocateMemory(HunkUser *hunkUser, const int maxClients)
{
  if ( s_currentSnapshotEntityFieldsChanged && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 446, ASSERT_TYPE_ASSERT, "( s_currentSnapshotEntityFieldsChanged == nullptr )", (const char *)&queryFormat, "s_currentSnapshotEntityFieldsChanged == nullptr") )
    __debugbreak();
  s_currentSnapshotEntityFieldsChanged = (int *)Mem_HunkUser_AllocInternal(hunkUser, (unsigned int)(78200 * maxClients), 4ui64, "SV_SnapshotProfileMP_AllocateMemory");
  memset_0(s_currentSnapshotEntityFieldsChanged, 0, (unsigned int)(78200 * maxClients));
  s_clientSnapshotDetailedData = (ClientSnapshotDetailedData *)Mem_HunkUser_AllocInternal(hunkUser, (unsigned int)(10316 * maxClients), 4ui64, "SV_SnapshotProfileMP_AllocateMemory");
  s_clientSnapshotDetailedDataCount = maxClients;
}

/*
==============
SV_SnapshotProfileMP_GetAllocationSize
==============
*/
__int64 SV_SnapshotProfileMP_GetAllocationSize(const int maxClients)
{
  return (88516 * maxClients + 127) & 0xFFFFFF80;
}

/*
==============
SV_SnapshotProfileMP_Init
==============
*/
void SV_SnapshotProfileMP_Init(void)
{
  s_clientDisplayClientNum = -1;
  s_clientDisplaySwapReady = 0;
  memset_0(s_entityLimitReached, 0, sizeof(s_entityLimitReached));
  memset_0(s_entityLimitReachedCount, 0, sizeof(s_entityLimitReachedCount));
  s_netFieldListsForPacketEntityType[0] = MSG_GetStateFieldListForEntityType(ET_FIRST);
  s_netFieldListsForPacketEntityType[1] = MSG_GetStateFieldListForEntityType(ET_PLAYER);
  s_netFieldListsForPacketEntityType[2] = MSG_GetStateFieldListForEntityType(ET_PLAYER_CORPSE);
  s_netFieldListsForPacketEntityType[3] = MSG_GetStateFieldListForEntityType(ET_ITEM);
  s_netFieldListsForPacketEntityType[4] = MSG_GetStateFieldListForEntityType(ET_MISSILE);
  s_netFieldListsForPacketEntityType[5] = MSG_GetStateFieldListForEntityType(ET_INVISIBLE);
  s_netFieldListsForPacketEntityType[6] = MSG_GetStateFieldListForEntityType(ET_SCRIPTMOVER);
  s_netFieldListsForPacketEntityType[7] = MSG_GetStateFieldListForEntityType(ET_SOUND);
  s_netFieldListsForPacketEntityType[8] = MSG_GetStateFieldListForEntityType(ET_FX);
  s_netFieldListsForPacketEntityType[9] = MSG_GetStateFieldListForEntityType(ET_LOOP_FX);
  s_netFieldListsForPacketEntityType[10] = MSG_GetStateFieldListForEntityType(ET_PRIMARY_LIGHT);
  s_netFieldListsForPacketEntityType[11] = MSG_GetStateFieldListForEntityType(ET_TURRET);
  s_netFieldListsForPacketEntityType[12] = MSG_GetStateFieldListForEntityType(ET_HELICOPTER);
  s_netFieldListsForPacketEntityType[13] = MSG_GetStateFieldListForEntityType(ET_PLANE);
  s_netFieldListsForPacketEntityType[14] = MSG_GetStateFieldListForEntityType(ET_VEHICLE);
  s_netFieldListsForPacketEntityType[15] = MSG_GetStateFieldListForEntityType(ET_VEHICLE_CORPSE);
  s_netFieldListsForPacketEntityType[16] = MSG_GetStateFieldListForEntityType(ET_VEHICLE_SPAWNER);
  s_netFieldListsForPacketEntityType[17] = MSG_GetStateFieldListForEntityType(ET_AGENT);
  s_netFieldListsForPacketEntityType[18] = MSG_GetStateFieldListForEntityType(ET_AGENT_CORPSE);
  s_netFieldListsForPacketEntityType[19] = MSG_GetStateFieldListForEntityType(ET_ACTOR);
  s_netFieldListsForPacketEntityType[20] = MSG_GetStateFieldListForEntityType(ET_ACTOR_SPAWNER);
  s_netFieldListsForPacketEntityType[21] = MSG_GetStateFieldListForEntityType(ET_ACTOR_CORPSE);
  s_netFieldListsForPacketEntityType[22] = MSG_GetStateFieldListForEntityType(ET_PHYSICS_CHILD);
  s_netFieldListsForPacketEntityType[23] = MSG_GetStateFieldListForEntityType(ET_BEAM);
  s_netFieldListsForPacketEntityType[24] = MSG_GetStateFieldListForEntityType(ET_CLIENT_CHARACTER);
  s_netFieldListsForPacketEntityType[25] = MSG_GetStateFieldListForEntityType(ET_RAGDOLL_CONSTRAINT);
  s_netFieldListsForPacketEntityType[26] = MSG_GetStateFieldListForEntityType(ET_PHYSICS_VOLUME);
  s_netFieldListsForPacketEntityType[27] = MSG_GetStateFieldListForEntityType(ET_COVERWALL);
  s_netFieldListsForPacketEntityType[28] = MSG_GetStateFieldListForEntityType(ET_INFO_VOLUME_GRAPPLE);
  s_netFieldListsForPacketEntityType[29] = MSG_GetStateFieldListForEntityType(ET_EVENTS);
  s_netFieldListsForPacketEntityType[30] = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_FIRST);
  s_netFieldListsForPacketEntityType[31] = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_PLAYERSTATE);
  s_netFieldListsForPacketEntityType[32] = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_AGENT_STATE);
  s_netFieldListsForPacketEntityType[33] = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_HUDELEMS);
  s_snapshotProfileInitialized = 1;
}

/*
==============
SV_SnapshotProfileMP_Initialized
==============
*/
_BOOL8 SV_SnapshotProfileMP_Initialized()
{
  return s_snapshotProfileInitialized;
}

/*
==============
SV_SnapshotProfileMP_KeyEvent
==============
*/
bool SV_SnapshotProfileMP_KeyEvent(const int key, bool down)
{
  bool result; 
  int i; 

  if ( !down )
    return 0;
  switch ( key )
  {
    case 1:
    case 13:
      Dvar_SetBool_Internal(DVARBOOL_sv_debugPacketContentsForClientThisFrame, 1);
      return 0;
    case 20:
    case 132:
    case 170:
      i = (int)(SvClient::ms_clientCount + s_clientDisplayClientNum - 1) % (int)SvClient::ms_clientCount;
      if ( SvClient::GetCommonClient(i)->state >= CS_CONNECTED )
        goto LABEL_6;
      do
        i = (int)(SvClient::ms_clientCount + i - 1) % (int)SvClient::ms_clientCount;
      while ( SvClient::GetCommonClient(i)->state < CS_CONNECTED );
      s_clientDisplayClientNum = i;
      result = 1;
      break;
    case 21:
    case 133:
    case 176:
      for ( i = (s_clientDisplayClientNum + 1) % (int)SvClient::ms_clientCount; SvClient::GetCommonClient(i)->state < CS_CONNECTED; i = (i + 1) % (int)SvClient::ms_clientCount )
        ;
LABEL_6:
      s_clientDisplayClientNum = i;
      result = 1;
      break;
    case 23:
    case 135:
    case 174:
      s_clientDisplayClientNum = -1;
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}

/*
==============
SV_SnapshotProfileMP_Shutdown
==============
*/
void SV_SnapshotProfileMP_Shutdown(void)
{
  s_snapshotProfileInitialized = 0;
}

/*
==============
SV_SnapshotProfileMP_ShutdownMemory
==============
*/
void SV_SnapshotProfileMP_ShutdownMemory(void)
{
  s_currentSnapshotEntityFieldsChanged = NULL;
  s_clientSnapshotDetailedData = NULL;
  s_clientSnapshotDetailedDataCount = 0;
}

/*
==============
SV_SwapClientPacketData
==============
*/
void SV_SwapClientPacketData(void)
{
  int v0; 
  ClientSnapshotDetailedData *v1; 
  signed int v2; 
  __int64 v3; 
  __int64 v4; 
  ClientSnapshotDetailedData *v5; 
  __int64 v6; 
  SvClient *CommonClient; 
  unsigned int *v8; 
  __int64 v9; 
  unsigned __int8 *fieldsSentPerEntity; 
  __int64 v11; 

  if ( !net_showprofile->current.integer || s_clientDisplaySwapReady )
  {
    v1 = s_clientSnapshotDetailedData;
  }
  else
  {
    v0 = s_clientDisplayClientNum;
    if ( s_clientDisplayClientNum < 0 )
    {
      if ( s_clientSnapshotDetailedDataCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 520, ASSERT_TYPE_ASSERT, "(s_clientSnapshotDetailedDataCount > 0)", (const char *)&queryFormat, "s_clientSnapshotDetailedDataCount > 0") )
        __debugbreak();
      v1 = s_clientSnapshotDetailedData;
      memcpy_0(&s_clientDisplaySwapBuffer, s_clientSnapshotDetailedData, sizeof(s_clientDisplaySwapBuffer));
      v2 = 1;
      if ( (int)SvClient::ms_clientCount > 1 )
      {
        v3 = 1i64;
        v4 = 10316i64 - (_QWORD)s_clientDisplaySwapBuffer.fieldsSentPerEntity;
        v5 = &s_clientDisplaySwapBuffer - 1;
        v6 = 2581i64;
        do
        {
          CommonClient = SvClient::GetCommonClient(v2);
          v1 = s_clientSnapshotDetailedData;
          if ( CommonClient->state >= CS_CONNECTED )
          {
            v8 = &s_clientSnapshotDetailedData[v3].bitsSentPerEntity[1];
            s_clientDisplaySwapBuffer.bitsSent[0] += s_clientSnapshotDetailedData->bitsSent[v6 - 2];
            s_clientDisplaySwapBuffer.bitsSent[1] += s_clientSnapshotDetailedData->bitsSent[v6 - 1];
            s_clientDisplaySwapBuffer.bitsSent[2] += s_clientSnapshotDetailedData->bitsSent[v6];
            s_clientDisplaySwapBuffer.bitsSent[3] += s_clientSnapshotDetailedData->bitsSent[v6 + 1];
            v9 = 512i64;
            s_clientDisplaySwapBuffer.bitsSent[4] += s_clientSnapshotDetailedData->bitsSent[v6 + 2];
            s_clientDisplaySwapBuffer.bitsSent[5] += s_clientSnapshotDetailedData->bitsSent[v6 + 3];
            s_clientDisplaySwapBuffer.bitsSent[6] += s_clientSnapshotDetailedData->bitsSent[v6 + 4];
            s_clientDisplaySwapBuffer.bitsSent[7] += s_clientSnapshotDetailedData->bitsSent[v6 + 5];
            s_clientDisplaySwapBuffer.bitsSent[8] += s_clientSnapshotDetailedData->bitsSent[v6 + 6];
            s_clientDisplaySwapBuffer.bitsSent[9] += s_clientSnapshotDetailedData->bitsSent[v6 + 7];
            s_clientDisplaySwapBuffer.bitsSent[10] += s_clientSnapshotDetailedData->bitsSent[v6 + 8];
            s_clientDisplaySwapBuffer.bitsSent[11] += s_clientSnapshotDetailedData->bitsSent[v6 + 9];
            s_clientDisplaySwapBuffer.bitsSent[12] += s_clientSnapshotDetailedData->bitsSent[v6 + 10];
            s_clientDisplaySwapBuffer.bitsSent[13] += s_clientSnapshotDetailedData->bitsSent[v6 + 11];
            s_clientDisplaySwapBuffer.bitsSent[14] += s_clientSnapshotDetailedData->bitsSent[v6 + 12];
            s_clientDisplaySwapBuffer.bitsSent[15] += s_clientSnapshotDetailedData->bitsSent[v6 + 13];
            s_clientDisplaySwapBuffer.bitsSent[16] += s_clientSnapshotDetailedData->bitsSent[v6 + 14];
            s_clientDisplaySwapBuffer.bitsSent[17] += s_clientSnapshotDetailedData->bitsSent[v6 + 15];
            do
            {
              *(unsigned int *)((char *)v8 + (char *)v5 - (char *)v1 - 4) += *(v8 - 1);
              *(unsigned int *)((char *)v8 + (char *)v5 - (char *)v1) += *v8;
              *(unsigned int *)((char *)v8 + (char *)v5 - (char *)v1 + 4) += v8[1];
              *(unsigned int *)((char *)v8 + (char *)v5 - (char *)v1 + 8) += v8[2];
              v8 += 4;
              --v9;
            }
            while ( v9 );
            fieldsSentPerEntity = s_clientDisplaySwapBuffer.fieldsSentPerEntity;
            v11 = 512i64;
            do
            {
              *fieldsSentPerEntity += v1->fieldsSentPerEntity[v4 + (_QWORD)fieldsSentPerEntity];
              fieldsSentPerEntity[1] += v1->fieldsSentPerEntity[v4 + 1 + (_QWORD)fieldsSentPerEntity];
              fieldsSentPerEntity[2] += v1->fieldsSentPerEntity[v4 + 2 + (_QWORD)fieldsSentPerEntity];
              fieldsSentPerEntity[3] += v1->fieldsSentPerEntity[v4 + 3 + (_QWORD)fieldsSentPerEntity];
              fieldsSentPerEntity += 4;
              --v11;
            }
            while ( v11 );
            s_clientDisplaySwapBuffer.fieldsSentPlayerState += v1[v3].fieldsSentPlayerState;
          }
          ++v2;
          v6 += 2579i64;
          ++v3;
          --v5;
          v4 += 10316i64;
        }
        while ( v2 < (int)SvClient::ms_clientCount );
      }
      s_clientDisplaySwapReady = 1;
    }
    else
    {
      if ( s_clientDisplayClientNum >= (unsigned int)s_clientSnapshotDetailedDataCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 508, ASSERT_TYPE_ASSERT, "(unsigned)( s_clientDisplayClientNum ) < (unsigned)( s_clientSnapshotDetailedDataCount )", "s_clientDisplayClientNum doesn't index s_clientSnapshotDetailedDataCount\n\t%i not in [0, %i)", s_clientDisplayClientNum, s_clientSnapshotDetailedDataCount) )
          __debugbreak();
        v0 = s_clientDisplayClientNum;
      }
      v1 = s_clientSnapshotDetailedData;
      memcpy_0(&s_clientDisplaySwapBuffer, &s_clientSnapshotDetailedData[v0], sizeof(s_clientDisplaySwapBuffer));
      s_clientDisplaySwapReady = 1;
    }
  }
  if ( !v1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 494, ASSERT_TYPE_ASSERT, "( s_clientSnapshotDetailedData )", (const char *)&queryFormat, "s_clientSnapshotDetailedData") )
      __debugbreak();
    v1 = s_clientSnapshotDetailedData;
  }
  memset_0(v1, 0, 10316i64 * s_clientSnapshotDetailedDataCount);
}

/*
==============
SV_TrackAngleDeltaBits
==============
*/
void SV_TrackAngleDeltaBits(int value)
{
  __int64 v2; 
  int MinBitCountForNum; 
  __int64 v4; 
  volatile int *v5; 
  __int64 v6; 

  if ( (unsigned int)(value + 0x8000) > 0xFFFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 785, ASSERT_TYPE_ASSERT, "( ( value >= -32768 && value < 32767 ) )", "%s\n\t( value ) = %i", "( value >= -32768 && value < 32767 )", value) )
    __debugbreak();
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v2 + 1041) && *(_BYTE *)(v2 + 1042) )
  {
    MinBitCountForNum = GetMinBitCountForNum(abs32(value));
    v4 = MinBitCountForNum;
    if ( MinBitCountForNum > 12 )
    {
      LODWORD(v6) = MinBitCountForNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 790, ASSERT_TYPE_ASSERT, "( ( bits <= 12 ) )", "%s\n\t( bits ) = %i", "( bits <= 12 )", v6) )
        __debugbreak();
    }
    v5 = &s_angleDeltaBits[v4];
    if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v5) )
      __debugbreak();
    _InterlockedExchangeAdd(v5, 1u);
  }
}

/*
==============
SV_TrackAngleFullSend
==============
*/
void SV_TrackAngleFullSend(void)
{
  __int64 v0; 

  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v0 + 1041) && *(_BYTE *)(v0 + 1042) )
  {
    if ( ((unsigned __int8)&s_viewDirFullSends & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_viewDirFullSends) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_viewDirFullSends, 1u);
  }
}

/*
==============
SV_TrackETypeBytes
==============
*/
void SV_TrackETypeBytes(int eType, int bits)
{
  __int64 v2; 
  __int64 v4; 
  volatile int *v5; 

  v2 = eType;
  if ( (unsigned int)eType > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 669, ASSERT_TYPE_ASSERT, "( ( eType >= 0 && eType < ET_EVENTS + EV_MAX_EVENTS ) )", "%s\n\t( eType ) = %i", "( eType >= 0 && eType < ET_EVENTS + EV_MAX_EVENTS )", eType) )
    __debugbreak();
  v4 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v4 + 1041) && *(_BYTE *)(v4 + 1042) )
  {
    v5 = &s_bitsUsedPerEType[v2];
    if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v5) )
      __debugbreak();
    _InterlockedExchangeAdd(v5, bits);
  }
}

/*
==============
SV_TrackEventSend
==============
*/
void SV_TrackEventSend(int typeSent, int parmSent, int eventTypeBits, int eventParmBits, int eventOverheadBits)
{
  __int64 v9; 

  v9 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v9 + 1041) && *(_BYTE *)(v9 + 1042) )
  {
    if ( ((unsigned __int8)&s_eventsSent & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_eventsSent) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_eventsSent, 1u);
    if ( typeSent )
    {
      if ( ((unsigned __int8)&s_eventTypesSent & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_eventTypesSent) )
        __debugbreak();
      _InterlockedExchangeAdd(&s_eventTypesSent, 1u);
    }
    if ( parmSent )
    {
      if ( ((unsigned __int8)&s_eventParmsSent & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_eventParmsSent) )
        __debugbreak();
      _InterlockedExchangeAdd(&s_eventParmsSent, 1u);
    }
    if ( ((unsigned __int8)&s_bitsUsedForEventOverhead & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_bitsUsedForEventOverhead) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_bitsUsedForEventOverhead, eventOverheadBits);
    if ( ((unsigned __int8)&s_bitsUsedForEventTypes & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_bitsUsedForEventTypes) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_bitsUsedForEventTypes, eventTypeBits);
    if ( ((unsigned __int8)&s_bitsUsedForEventParms & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_bitsUsedForEventParms) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_bitsUsedForEventParms, eventParmBits);
    if ( ((unsigned __int8)&s_bitsUsedForEvents & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_bitsUsedForEvents) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_bitsUsedForEvents, eventOverheadBits + eventTypeBits + eventParmBits);
  }
}

/*
==============
SV_TrackEventSeqDeltaSend
==============
*/
void SV_TrackEventSeqDeltaSend(int delta)
{
  __int64 v1; 
  int MinBitCountForNum; 
  int v3; 
  volatile int *v4; 
  int v5; 

  v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v1 + 1041) && *(_BYTE *)(v1 + 1042) )
  {
    MinBitCountForNum = GetMinBitCountForNum(delta);
    v3 = 8;
    if ( MinBitCountForNum < 8 )
      v3 = MinBitCountForNum;
    if ( v3 < 0 )
    {
      v5 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 827, ASSERT_TYPE_ASSERT, "( ( bits >= 0 ) )", "%s\n\t( bits ) = %i", "( bits >= 0 )", v5) )
        __debugbreak();
    }
    v4 = &s_eventSeqDelta[v3];
    if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v4) )
      __debugbreak();
    _InterlockedExchangeAdd(v4, 1u);
  }
}

/*
==============
SV_TrackEventSeqFullSend
==============
*/
void SV_TrackEventSeqFullSend(int delta)
{
  __int64 v1; 
  int MinBitCountForNum; 
  int v3; 
  volatile int *v4; 
  int v5; 

  v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v1 + 1041) && *(_BYTE *)(v1 + 1042) )
  {
    MinBitCountForNum = GetMinBitCountForNum(delta);
    v3 = 8;
    if ( MinBitCountForNum < 8 )
      v3 = MinBitCountForNum;
    if ( v3 < 0 )
    {
      v5 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 816, ASSERT_TYPE_ASSERT, "( ( bits >= 0 ) )", "%s\n\t( bits ) = %i", "( bits >= 0 )", v5) )
        __debugbreak();
    }
    v4 = &s_eventSeqFull[v3];
    if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v4) )
      __debugbreak();
    _InterlockedExchangeAdd(v4, 1u);
  }
}

/*
==============
SV_TrackFieldChange
==============
*/
void SV_TrackFieldChange(const int clientNum, const PacketEntityType_e packetEntityType, const int field, const int entityIndex)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v4 = clientNum;
  v5 = entityIndex;
  v6 = field;
  v7 = packetEntityType;
  if ( clientNum != -1 && *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1041i64) )
  {
    if ( (unsigned int)field > 0x23E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1217, ASSERT_TYPE_ASSERT, "( ( field >= 0 && field < 575 ) )", "%s\n\t( field ) = %i", "( field >= 0 && field < 575 )", field) )
      __debugbreak();
    if ( (unsigned int)v7 > 0x21 )
    {
      LODWORD(v11) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1218, ASSERT_TYPE_ASSERT, "( ( packetEntityType >= 0 && packetEntityType < ANALYZE_DATATYPE_ENTITYTYPE_COUNT ) )", "%s\n\t( packetEntityType ) = %i", "( packetEntityType >= 0 && packetEntityType < ANALYZE_DATATYPE_ENTITYTYPE_COUNT )", v11) )
        __debugbreak();
    }
    v8 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    if ( *(_BYTE *)(v8 + 1041) && *(_BYTE *)(v8 + 1042) )
      SV_Int32Inc(&s_networkEntityFieldsChanged[v7][v6]);
    v9 = (unsigned int)(v6 + 575 * (v7 + 34 * v4));
    ++s_currentSnapshotEntityFieldsChanged[v9];
    if ( (unsigned int)v4 >= s_clientSnapshotDetailedDataCount )
    {
      LODWORD(v11) = s_clientSnapshotDetailedDataCount;
      LODWORD(v10) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1228, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( s_clientSnapshotDetailedDataCount )", "clientNum doesn't index s_clientSnapshotDetailedDataCount\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( (int)v7 >= 30 )
    {
      if ( (_DWORD)v7 == 31 )
        ++s_clientSnapshotDetailedData[v4].fieldsSentPlayerState;
    }
    else
    {
      ++s_clientSnapshotDetailedData[v4].fieldsSentPerEntity[v5];
    }
  }
}

/*
==============
SV_TrackFieldWritten
==============
*/
void SV_TrackFieldWritten(const int clientNum, const PacketEntityType_e packetEntityType, const int field, const void *from, const void *to, const int skippedFieldsBits, const int dataBits)
{
  __int64 v9; 
  __int64 v10; 
  const dvar_t *v11; 
  const char *EntityTypeString; 
  const NetField *array; 
  __int64 offset; 
  const NetField *v15; 
  char *v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  char v21[32]; 
  char string[40]; 
  char stringBuf[128]; 

  if ( clientNum != -1 )
  {
    v9 = packetEntityType;
    v10 = field;
    if ( *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1041i64) )
    {
      v11 = DVARINT_sv_debugPacketContents;
      if ( !DVARINT_sv_debugPacketContents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugPacketContents") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.integer > 0 )
      {
        EntityTypeString = SV_GetEntityTypeString((const PacketEntityType_e)v9);
        if ( !*EntityTypeString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1187, ASSERT_TYPE_ASSERT, "( typeString[0] )", (const char *)&queryFormat, "typeString[0]") )
          __debugbreak();
        SV_GetEntityFieldString((const PacketEntityType_e)v9, v10, stringBuf, 0x80u);
        if ( !stringBuf[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1190, ASSERT_TYPE_ASSERT, "( fieldString[0] )", (const char *)&queryFormat, "fieldString[0]") )
          __debugbreak();
        array = s_netFieldListsForPacketEntityType[v9]->array;
        if ( (int)v9 < 30 )
        {
          if ( (unsigned int)(v9 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v9, "signed", v9) )
            __debugbreak();
          MSG_GetNetFieldsCountForEntityType((const entityType_s)v9);
        }
        offset = array[v10].offset;
        v15 = &array[v10];
        v16 = (char *)to + offset;
        MSG_PrintNetFieldValue((char *)from + offset, v15, string, 0x20ui64);
        MSG_PrintNetFieldValue(v16, v15, v21, 0x20ui64);
        if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1146, ASSERT_TYPE_ASSERT, "(data != 0)", (const char *)&queryFormat, "data != NULL") )
          __debugbreak();
        v17 = 0;
        if ( (int)v9 >= 30 )
        {
          if ( (_DWORD)v9 == 30 )
          {
            v17 = *(_DWORD *)to;
LABEL_32:
            LODWORD(v20) = dataBits;
            LODWORD(v19) = skippedFieldsBits;
            SV_LogSnapshotContent(clientNum, "%s %d - field %s changed from %s to %s - skippedFieldsBits %d, dataBits %d\n", EntityTypeString, v17, stringBuf, string, v21, v19, v20);
            return;
          }
          if ( (_DWORD)v9 == 31 )
          {
            v17 = *((_DWORD *)to + 115);
            goto LABEL_32;
          }
          if ( (_DWORD)v9 != 32 )
          {
            if ( (_DWORD)v9 == 33 )
            {
              v17 = *((_DWORD *)to + 4);
            }
            else
            {
              LODWORD(v18) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1171, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown packetEntityType %d\n", v18) )
                __debugbreak();
            }
            goto LABEL_32;
          }
        }
        v17 = *(__int16 *)to;
        goto LABEL_32;
      }
    }
  }
}

/*
==============
SV_TrackFieldsChanged
==============
*/
void SV_TrackFieldsChanged(int lc)
{
  __int64 v1; 
  volatile signed __int32 *v2; 

  v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v1 + 1041) && *(_BYTE *)(v1 + 1042) )
  {
    v2 = &s_playerStateFieldsChanged[lc];
    if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_playerStateFieldsChanged[lc]) )
      __debugbreak();
    _InterlockedExchangeAdd(v2, 1u);
  }
}

/*
==============
SV_TrackMovementDirDelta
==============
*/
void SV_TrackMovementDirDelta(int delta)
{
  __int64 v2; 
  __int64 v3; 
  volatile signed __int32 *v4; 
  int v5; 

  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v2 + 1041) && *(_BYTE *)(v2 + 1042) )
  {
    if ( (unsigned int)(delta + 256) > 0x200 )
    {
      v5 = delta;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 775, ASSERT_TYPE_ASSERT, "( ( delta >= -(1 << 8) && delta <= (1 << 8) ) )", "%s\n\t( delta ) = %i", "( delta >= -(1 << 8) && delta <= (1 << 8) )", v5) )
        __debugbreak();
    }
    v3 = delta + 256;
    v4 = &s_movementDirDelta[v3];
    if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_movementDirDelta[v3]) )
      __debugbreak();
    _InterlockedExchangeAdd(v4, 1u);
  }
}

/*
==============
SV_TrackNumFieldsSkipped
==============
*/
void SV_TrackNumFieldsSkipped(const PacketEntityType_e packetEntityType, const int numFieldsSkipped, ServerEntityHeader *const outHeader, const NetField *const field)
{
  _QWORD *v5; 
  signed int v6; 
  __int64 v7; 
  volatile int *v8; 

  v5 = NtCurrentTeb()->Reserved1[11];
  v6 = numFieldsSkipped;
  if ( outHeader )
  {
    if ( *(_BYTE *)(v5[tls_index] + 1041i64) )
      ServerEntityHeader::TrackNumFieldsSkipped(outHeader, numFieldsSkipped);
  }
  else
  {
    v7 = v5[tls_index];
    if ( *(_BYTE *)(v7 + 1041) && *(_BYTE *)(v7 + 1042) )
    {
      if ( v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 647, ASSERT_TYPE_ASSERT, "( ( numFieldsSkipped > 0 ) )", "%s\n\t( numFieldsSkipped ) = %i", "( numFieldsSkipped > 0 )", v6) )
        __debugbreak();
      switch ( packetEntityType )
      {
        case ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT:
          if ( ((unsigned __int8)&s_skippedFieldsTrackingClientState.totalFieldsSkipped & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_skippedFieldsTrackingClientState.totalFieldsSkipped) )
            __debugbreak();
          _InterlockedExchangeAdd(&s_skippedFieldsTrackingClientState.totalFieldsSkipped, v6);
          if ( ((unsigned __int8)&s_skippedFieldsTrackingClientState.totaTimesSkipped & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_skippedFieldsTrackingClientState.totaTimesSkipped) )
            __debugbreak();
          _InterlockedExchangeAdd(&s_skippedFieldsTrackingClientState.totaTimesSkipped, 1u);
          if ( v6 > 118 )
            v6 = 118;
          v8 = &s_skippedFieldsTrackingClientState.numFieldsSkipped[v6 - 1];
          break;
        case ANALYZE_DATATYPE_ENTITYTYPE_PLAYERSTATE:
          if ( ((unsigned __int8)&s_skippedFieldsTrackingPlayerState.totalFieldsSkipped & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_skippedFieldsTrackingPlayerState.totalFieldsSkipped) )
            __debugbreak();
          _InterlockedExchangeAdd(&s_skippedFieldsTrackingPlayerState.totalFieldsSkipped, v6);
          if ( ((unsigned __int8)&s_skippedFieldsTrackingPlayerState.totaTimesSkipped & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_skippedFieldsTrackingPlayerState.totaTimesSkipped) )
            __debugbreak();
          _InterlockedExchangeAdd(&s_skippedFieldsTrackingPlayerState.totaTimesSkipped, 1u);
          if ( v6 > 575 )
            v6 = 575;
          v8 = &s_skippedFieldsTrackingPlayerState.numFieldsSkipped[v6 - 1];
          break;
        case ANALYZE_DATATYPE_ENTITYTYPE_HUDELEM:
          if ( ((unsigned __int8)&s_skippedFieldsTrackingHudElem.totalFieldsSkipped & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_skippedFieldsTrackingHudElem.totalFieldsSkipped) )
            __debugbreak();
          _InterlockedExchangeAdd(&s_skippedFieldsTrackingHudElem.totalFieldsSkipped, v6);
          if ( ((unsigned __int8)&s_skippedFieldsTrackingHudElem.totaTimesSkipped & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_skippedFieldsTrackingHudElem.totaTimesSkipped) )
            __debugbreak();
          _InterlockedExchangeAdd(&s_skippedFieldsTrackingHudElem.totaTimesSkipped, 1u);
          if ( v6 > 46 )
            v6 = 46;
          v8 = &s_skippedFieldsTrackingHudElem.numFieldsSkipped[v6 - 1];
          break;
        default:
          if ( (unsigned int)packetEntityType > ANALYZE_DATATYPE_ENTITYTYPE_TEMPENTITY )
            return;
          if ( ((unsigned __int8)&s_skippedFieldsTrackingEntityState.totalFieldsSkipped & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_skippedFieldsTrackingEntityState.totalFieldsSkipped) )
            __debugbreak();
          _InterlockedExchangeAdd(&s_skippedFieldsTrackingEntityState.totalFieldsSkipped, v6);
          if ( ((unsigned __int8)&s_skippedFieldsTrackingEntityState.totaTimesSkipped & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_skippedFieldsTrackingEntityState.totaTimesSkipped) )
            __debugbreak();
          _InterlockedExchangeAdd(&s_skippedFieldsTrackingEntityState.totaTimesSkipped, 1u);
          if ( v6 > 68 )
            v6 = 68;
          v8 = &s_skippedFieldsTrackingEntityState.numFieldsSkipped[v6 - 1];
          break;
      }
      if ( ((unsigned __int8)v8 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v8) )
        __debugbreak();
      _InterlockedExchangeAdd(v8, 1u);
    }
  }
}

/*
==============
SV_TrackOriginDeltaBits
==============
*/
void SV_TrackOriginDeltaBits(int bits)
{
  __int64 v1; 
  __int64 v2; 
  volatile int *v3; 
  int v4; 

  v1 = bits;
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v2 + 1041) && *(_BYTE *)(v2 + 1042) )
  {
    if ( (int)v1 > 7 )
    {
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 724, ASSERT_TYPE_ASSERT, "( ( bits <= 7 ) )", "%s\n\t( bits ) = %i", "( bits <= 7 )", v4) )
        __debugbreak();
    }
    v3 = &s_originDeltaBits[v1];
    if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v3) )
      __debugbreak();
    _InterlockedExchangeAdd(v3, 1u);
  }
}

/*
==============
SV_TrackOriginExpGolombBits
==============
*/
void SV_TrackOriginExpGolombBits(int bits)
{
  __int64 v1; 
  __int64 v2; 
  volatile __int64 *v3; 
  int v4; 
  int v5; 

  v1 = bits;
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v2 + 1041) && *(_BYTE *)(v2 + 1042) )
  {
    if ( (unsigned int)v1 >= 0x48 )
    {
      v5 = 72;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 764, ASSERT_TYPE_ASSERT, "(unsigned)( bits ) < (unsigned)( ( sizeof( *array_counter( s_originExpGolombBits ) ) + 0 ) )", "bits doesn't index ARRAY_COUNT( s_originExpGolombBits )\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = &s_originExpGolombBits[v1];
    if ( ((unsigned __int8)v3 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", (const void *)v3) )
      __debugbreak();
    _InterlockedExchangeAdd64(v3, 1ui64);
  }
}

/*
==============
SV_TrackOriginFullBits
==============
*/
void SV_TrackOriginFullBits(int bits)
{
  __int64 v1; 
  __int64 v2; 
  volatile int *v3; 
  int v4; 

  v1 = bits;
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v2 + 1041) && *(_BYTE *)(v2 + 1042) )
  {
    if ( (int)v1 > 18 )
    {
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 754, ASSERT_TYPE_ASSERT, "( ( bits <= 18 ) )", "%s\n\t( bits ) = %i", "( bits <= 18 )", v4) )
        __debugbreak();
    }
    v3 = &s_originFullBits[v1];
    if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v3) )
      __debugbreak();
    _InterlockedExchangeAdd(v3, 1u);
  }
}

/*
==============
SV_TrackOriginZDeltaBits
==============
*/
void SV_TrackOriginZDeltaBits(int bits)
{
  __int64 v1; 
  __int64 v2; 
  volatile int *v3; 
  int v4; 

  v1 = bits;
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v2 + 1041) && *(_BYTE *)(v2 + 1042) )
  {
    if ( (int)v1 > 7 )
    {
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 734, ASSERT_TYPE_ASSERT, "( ( bits <= 7 ) )", "%s\n\t( bits ) = %i", "( bits <= 7 )", v4) )
        __debugbreak();
    }
    v3 = &s_originZDeltaBits[v1];
    if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v3) )
      __debugbreak();
    _InterlockedExchangeAdd(v3, 1u);
  }
}

/*
==============
SV_TrackOriginZFullBits
==============
*/
void SV_TrackOriginZFullBits(int bits)
{
  __int64 v1; 
  __int64 v2; 
  volatile int *v3; 
  int v4; 

  v1 = bits;
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v2 + 1041) && *(_BYTE *)(v2 + 1042) )
  {
    if ( (int)v1 > 16 )
    {
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 744, ASSERT_TYPE_ASSERT, "( ( bits <= 16 ) )", "%s\n\t( bits ) = %i", "( bits <= 16 )", v4) )
        __debugbreak();
    }
    v3 = &s_originZFullBits[v1];
    if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v3) )
      __debugbreak();
    _InterlockedExchangeAdd(v3, 1u);
  }
}

/*
==============
SV_TrackPSBitsForSegment
==============
*/
void SV_TrackPSBitsForSegment(const SnapshotInfo *const snapInfo, const int bits, const PlayerStateSegment segment)
{
  __int64 v3; 
  __int64 v6; 

  v3 = segment;
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 697, ASSERT_TYPE_ASSERT, "(snapInfo != nullptr)", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( bits > 0 )
  {
    v6 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    if ( *(_BYTE *)(v6 + 1041) )
    {
      if ( *(_BYTE *)(v6 + 1042) && !snapInfo->archived && !snapInfo->fromBaseline )
        SV_Int32Add(&s_bitsUsedForPlayerstates[v3], bits);
    }
  }
}

/*
==============
SV_TrackPSOriginPredictionSend
==============
*/
void SV_TrackPSOriginPredictionSend(void)
{
  __int64 v0; 

  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v0 + 1041) && *(_BYTE *)(v0 + 1042) )
  {
    if ( ((unsigned __int8)&s_originsSentDueToPredicitonError & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_originsSentDueToPredicitonError) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_originsSentDueToPredicitonError, 1u);
  }
}

/*
==============
SV_TrackPSOriginServerTimeSend
==============
*/
void SV_TrackPSOriginServerTimeSend(void)
{
  __int64 v0; 

  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_BYTE *)(v0 + 1041) && *(_BYTE *)(v0 + 1042) )
  {
    if ( ((unsigned __int8)&s_originsSentDueToServerTimeMismatch & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_originsSentDueToServerTimeMismatch) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_originsSentDueToServerTimeMismatch, 1u);
  }
}

/*
==============
SV_TrackPacketCompression
==============
*/
void SV_TrackPacketCompression(const int isLoopback, const int clientNum, const int originalSize, const int compressedSize)
{
  __int64 v4; 
  __int64 v7; 
  const char *Name; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const char *v11; 
  char *fmt; 
  char *fmta; 

  v4 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1899, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_clientSnapshotSizeData ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_clientSnapshotSizeData )\n\t%i not in [0, %i)", clientNum, 200) )
    __debugbreak();
  v7 = (s_clientSnapshotSizeData[v4].index & 7) + 17 * v4;
  s_clientSnapshotSizeData[0].compressedSize[v7] = compressedSize;
  s_clientSnapshotSizeData[0].snapshotSize[v7] = originalSize;
  ++s_clientSnapshotSizeData[v4].index;
  Name = SV_ClientMP_GetName(v4);
  LODWORD(fmt) = compressedSize;
  SV_LogSnapshotContent(v4, "%s: Compressed snapshot packet from %i to %i bytes\n", Name, (unsigned int)originalSize, fmt);
  v9 = DVARBOOL_sv_snapshotDebugVerbose;
  if ( !DVARBOOL_sv_snapshotDebugVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshotDebugVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
  {
    v10 = DVARINT_sv_snapshot_size_huge;
    if ( !DVARINT_sv_snapshot_size_huge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshot_size_huge") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( originalSize > v10->current.integer )
    {
      v11 = SV_ClientMP_GetName(v4);
      LODWORD(fmta) = compressedSize;
      Com_Printf(15, "%s: Compressed snapshot packet from %i to %i bytes\n", v11, (unsigned int)originalSize, fmta);
    }
  }
}

/*
==============
SV_TrackPacketData
==============
*/
int SV_TrackPacketData(const int clientNum, const PacketDataType datatype, const int eType, const int entNum, const int bitsUsedPrev, const msg_t *msg)
{
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  int result; 
  int v10; 
  ClientSnapshotDetailedData *v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 

  v6 = datatype;
  v7 = entNum;
  v8 = clientNum;
  if ( (unsigned int)datatype > ANALYZE_SNAPSHOT_GENERIC_DATA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1113, ASSERT_TYPE_ASSERT, "( ( datatype >= 0 && datatype < ANALYZE_SNAPSHOT_DATATYPE_COUNT ) )", "%s\n\t( datatype ) = %i", "( datatype >= 0 && datatype < ANALYZE_SNAPSHOT_DATATYPE_COUNT )", datatype) )
    __debugbreak();
  result = MSG_GetUsedBitCount(msg);
  v10 = result;
  if ( (_DWORD)v8 != -1 )
  {
    if ( *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1041i64) )
    {
      if ( (unsigned int)v8 >= s_clientSnapshotDetailedDataCount )
      {
        LODWORD(v14) = s_clientSnapshotDetailedDataCount;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1120, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( s_clientSnapshotDetailedDataCount )", "clientNum doesn't index s_clientSnapshotDetailedDataCount\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v11 = &s_clientSnapshotDetailedData[v8];
      v12 = v10 - bitsUsedPrev;
      v11->bitsSent[v6] += v10 - bitsUsedPrev;
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 == 12 )
        {
          if ( ((unsigned __int8)&s_totalBitsUsedForServerCommands & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_totalBitsUsedForServerCommands) )
            __debugbreak();
          _InterlockedExchangeAdd((volatile signed __int32 *)&s_totalBitsUsedForServerCommands, v12);
        }
      }
      else
      {
        v11->bitsSentPerEntity[v7] += v12;
      }
    }
    return v10;
  }
  return result;
}

/*
==============
SV_TrackPacketFragmentation
==============
*/
void SV_TrackPacketFragmentation(const int originalSize, const int compressedSize)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 

  v2 = compressedSize;
  v3 = originalSize;
  if ( ((unsigned __int8)&s_numPacketsFragmented & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", (const void *)&s_numPacketsFragmented) )
    __debugbreak();
  _InterlockedExchangeAdd64(&s_numPacketsFragmented, 1ui64);
  if ( ((unsigned __int8)&s_totalFragmentedPacketsOriginalSize & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", (const void *)&s_totalFragmentedPacketsOriginalSize) )
    __debugbreak();
  _InterlockedExchangeAdd64(&s_totalFragmentedPacketsOriginalSize, v3);
  if ( ((unsigned __int8)&s_totalFragmentedPacketsCompressedSize & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", (const void *)&s_totalFragmentedPacketsCompressedSize) )
    __debugbreak();
  _InterlockedExchangeAdd64(&s_totalFragmentedPacketsCompressedSize, v2);
}

/*
==============
SV_TrackSnapshotSize
==============
*/
void SV_TrackSnapshotSize(const int isLoopback, const int size, const int clientNum)
{
  unsigned __int64 v3; 
  int v5; 
  float v6; 
  float v7; 

  v3 = (unsigned __int64)&s_snapshotSizeLock & 3;
  while ( 1 )
  {
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_snapshotSizeLock) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_snapshotSizeLock, 1, 0) )
      break;
    Sys_Sleep(0);
  }
  v5 = s_maxSnapshotSize;
  if ( size > s_maxSnapshotSize )
    v5 = size;
  s_maxSnapshotSize = v5;
  v6 = (float)s_numSnapshotSamples++;
  v7 = 1.0 / (float)s_numSnapshotSamples;
  s_stdSnapshotDeviation = (float)((float)((float)size - s_avgSnapshotSize) + (float)(v6 * s_stdSnapshotDeviation)) * v7;
  s_avgSnapshotSize = (float)((float)(v6 * s_avgSnapshotSize) + (float)size) * v7;
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_snapshotSizeLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_snapshotSizeLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1890, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_snapshotSizeLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_snapshotSizeLock, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
SV_WriteEntityFieldNumbers
==============
*/
void SV_WriteEntityFieldNumbers()
{
  const char *v0; 
  __int64 v1; 
  signed int v2; 
  unsigned int *v3; 
  volatile int *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  __int64 v8; 
  __int64 handle; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  const char *EntityTypeName; 
  __int64 i; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  volatile int (*v22)[575]; 
  int v23; 
  __int64 v24; 
  bool v25; 
  const NetFieldList *v26; 
  NetField *array; 
  unsigned int count; 
  int v29; 
  volatile int (*v30)[575]; 
  __int64 v31; 
  int BitCount; 
  int v33; 
  unsigned int v34; 
  volatile int *v35; 
  int v36; 
  int v37; 
  const char *v38; 
  int v39; 
  unsigned int v40; 
  unsigned int *v41; 
  unsigned int v42; 
  unsigned int *v43; 
  unsigned int *v44; 
  unsigned int v45; 
  volatile int *v46; 
  __int64 v47; 
  int v48; 
  __int64 v49; 
  unsigned int v50; 
  unsigned int *v51; 
  __int64 v52; 
  unsigned int j; 
  __int64 v54; 
  __int64 v55; 
  unsigned int *v56; 
  __int64 v57; 
  unsigned int k; 
  unsigned int v59; 
  volatile int *v60; 
  unsigned int v61; 
  unsigned int *v62; 
  unsigned int v63; 
  volatile int *v64; 
  unsigned int v65; 
  volatile __int64 *v66; 
  __int64 v67; 
  __int64 v68; 
  float v69; 
  float v70; 
  float v71; 
  const NetFieldList *NetFieldListForNetFieldType; 
  unsigned int *v73; 
  unsigned int v74; 
  __int64 v75; 
  __int64 v76; 
  unsigned int *v77; 
  char *fmtc; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  __int64 v82; 
  __int64 v83; 
  __int64 v84; 
  volatile int (*v85)[575]; 
  bool estimate; 
  unsigned int v87; 
  fileHandle_t h; 
  NetField *field; 

  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    h.handle.handle = (__int64)FS_FOpenFileWrite((fileHandle_t *)&stru_1441052F8, v0);
    if ( h.handle.handle != -1 )
    {
      v1 = 255i64;
      v2 = s_totalBitsUsedForServerCommands + s_bitsUsedForPlayerstates[9];
      v3 = (unsigned int *)s_bitsUsedPerEType;
      v4 = s_bitsUsedPerEType;
      do
      {
        v5 = *v4++;
        v2 += v5;
        --v1;
      }
      while ( v1 );
      v6 = DVARBOOL_sv_sendSnapshotsToBots;
      v7 = 1;
      if ( v2 > 1 )
        v7 = v2;
      if ( !DVARBOOL_sv_sendSnapshotsToBots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_sendSnapshotsToBots") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      v8 = v6->current.color[0];
      handle = h.handle.handle;
      FS_Printf(h, "Bots simulation: %d\n", v8);
      FS_Printf((fileHandle_t)handle, "Total data sent: %i\n", (unsigned int)v7);
      FS_Printf((fileHandle_t)handle, "Bits used per entity type: (format: bitsUsed - entityType)\n");
      v10 = 0;
      v11 = 0i64;
      do
      {
        if ( *v3 )
        {
          v12 = 100i64 * (int)*v3 / v7;
          if ( v10 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,unsigned int>(unsigned int)", "signed", (__int16)v10, "unsigned", v11) )
            __debugbreak();
          EntityTypeName = BG_GetEntityTypeName((const entityType_s)v10);
          FS_Printf(h, "%18u - %s (%zi%%)\n", *v3, EntityTypeName, v12);
        }
        ++v10;
        ++v11;
        ++v3;
      }
      while ( v10 < 0xFF );
      FS_Printf(h, "%18u - Server commands (%zi%%)\n", s_totalBitsUsedForServerCommands, 100i64 * (int)s_totalBitsUsedForServerCommands / v7);
      FS_Printf(h, "%18u - Player states (%zi%%)\n", (unsigned int)s_bitsUsedForPlayerstates[9], 100i64 * (int)s_bitsUsedForPlayerstates[9] / v7);
      for ( i = 0i64; i < 9; ++i )
      {
        v15 = 100i64 * (int)s_bitsUsedForPlayerstates[i] / v7;
        if ( i < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 2071, ASSERT_TYPE_ASSERT, "(segment >= PLAYERSTATE_SEGMENT_FIRST)", (const char *)&queryFormat, "segment >= PLAYERSTATE_SEGMENT_FIRST") )
          __debugbreak();
        fmtc = (char *)v15;
        v16 = h.handle.handle;
        FS_Printf(h, "  * %18u - Player state %s (%zi%%)\n", (unsigned int)s_bitsUsedForPlayerstates[i], s_psSegmentShortNames[i], (size_t)fmtc);
      }
      FS_Printf((fileHandle_t)v16, "\n\n");
      FS_Printf(h, "PS origin and velocity sent due to client prediction error: %i\n", (unsigned int)s_originsSentDueToPredicitonError);
      v17 = h.handle.handle;
      FS_Printf(h, "PS origin and velocity sent due to server time mismatch: %i\n", (unsigned int)s_originsSentDueToServerTimeMismatch);
      FS_Printf((fileHandle_t)v17, "\n\n");
      LODWORD(fmt) = s_maxSnapshotSize;
      FS_Printf((fileHandle_t)v17, "Avg Snapshot size: %i bytes, std deviation: %i bytes, max snapshot size: %i bytes\n", (unsigned int)(int)s_avgSnapshotSize, (unsigned int)(int)s_stdSnapshotDeviation, fmt);
      v18 = 0;
      if ( s_numPacketsFragmented )
        v19 = s_totalFragmentedPacketsCompressedSize / s_numPacketsFragmented;
      else
        LODWORD(v19) = 0;
      if ( s_numPacketsFragmented )
        v20 = s_totalFragmentedPacketsOriginalSize / s_numPacketsFragmented;
      else
        LODWORD(v20) = 0;
      LODWORD(fmta) = v19;
      v21 = h.handle.handle;
      FS_Printf(h, "Num Packets Fragmented: %lld, avg original size %d, avg compressed size %d\n", s_numPacketsFragmented, (unsigned int)v20, fmta);
      v84 = 0i64;
      v22 = s_networkEntityFieldsChanged;
      v85 = s_networkEntityFieldsChanged;
      v23 = 0;
      v24 = 0i64;
      v25 = 1;
      do
      {
        if ( !v25 )
        {
          LODWORD(v83) = 34;
          LODWORD(v82) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 860, ASSERT_TYPE_ASSERT, "(unsigned)( packetEntityType ) < (unsigned)( ANALYZE_DATATYPE_ENTITYTYPE_COUNT )", "packetEntityType doesn't index ANALYZE_DATATYPE_ENTITYTYPE_COUNT\n\t%i not in [0, %i)", v82, v83) )
            __debugbreak();
        }
        FS_Printf((fileHandle_t)v21, "%s fields changed: (format fieldnum: timeschanged)\n", s_analyzeEntityTypeNames[v24]);
        v26 = s_netFieldListsForPacketEntityType[v24];
        array = (NetField *)v26->array;
        field = (NetField *)v26->array;
        if ( v23 >= 30 )
        {
          count = v26->count;
        }
        else
        {
          if ( (unsigned int)(v23 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v23, "signed", v24) )
            __debugbreak();
          count = MSG_GetNetFieldsCountForEntityType((const entityType_s)v23);
        }
        v87 = count;
        v29 = 0;
        if ( !count )
          goto LABEL_42;
        v30 = v22;
        v31 = count;
        do
        {
          BitCount = MSG_GetBitCount(&estimate, NULL, NULL, array);
          v33 = *(_DWORD *)v30;
          v30 = (volatile int (*)[575])((char *)v30 + 4);
          ++array;
          v29 += BitCount * v33;
          --v31;
        }
        while ( v31 );
        v21 = h.handle.handle;
        count = v87;
        array = field;
        if ( !v29 )
LABEL_42:
          v29 = 1;
        v34 = 0;
        if ( count )
        {
          v35 = s_networkEntityFieldsChanged[v24];
          do
          {
            v36 = MSG_GetBitCount(&estimate, NULL, NULL, array);
            LODWORD(fmtb) = *v35;
            v37 = v36;
            FS_Printf(h, "%i (%s): %u", v34, array->name, fmtb);
            if ( *v35 )
            {
              v38 = (char *)&queryFormat.fmt + 3;
              if ( estimate )
                v38 = " [estimated]";
              v39 = v37 * *v35;
              v21 = h.handle.handle;
              FS_Printf(h, " (%i%%%s)", (unsigned int)(100 * v39 / v29), v38);
              if ( array->changeHints == 1 && v34 )
                FS_Printf((fileHandle_t)v21, " (marked as NEVER_CHANGES and it changed!)");
            }
            else
            {
              v21 = h.handle.handle;
            }
            FS_Printf((fileHandle_t)v21, "\n");
            ++v34;
            ++v35;
            ++array;
          }
          while ( v34 < v87 );
          v24 = v84;
          v18 = 0;
        }
        FS_Printf((fileHandle_t)v21, "\n\n");
        v22 = v85 + 1;
        ++v24;
        ++v85;
        ++v23;
        v84 = v24;
        v25 = (unsigned int)v23 < 0x22;
      }
      while ( v23 < 34 );
      FS_Printf((fileHandle_t)v21, "\n\nUsercmd deltas: (format fieldnum: timeschanged)\n");
      MSG_UserCmd_PrintCommandReadCounts((const fileHandle_t)v21);
      FS_Printf((fileHandle_t)v21, "\n\nCommand Predict deltas: (format fieldnum: timeschanged)\n");
      MSG_UserCmd_PrintPredictReadCounts((const fileHandle_t)v21);
      FS_Printf((fileHandle_t)v21, "\n\nMovement Dir deltas: (delta: times)\n");
      v40 = 0;
      v41 = (unsigned int *)s_movementDirDelta;
      do
      {
        if ( *v41 )
          FS_Printf(h, "%i: %i times\n", v40 - 256, *v41);
        ++v40;
        ++v41;
      }
      while ( v40 < 0x201 );
      FS_Printf(h, "\n\nAngle deltas:\n");
      v42 = 0;
      v43 = (unsigned int *)s_angleDeltaBits;
      do
      {
        if ( *v43 )
          FS_Printf(h, "%i bits: %i times\n", v42, *v43);
        ++v42;
        ++v43;
      }
      while ( v42 < 0xD );
      FS_Printf(h, "Angle full sends: %i\n", (unsigned int)s_viewDirFullSends);
      v44 = (unsigned int *)s_eventSeqFull;
      v45 = 0;
      v46 = s_eventSeqFull;
      v47 = 9i64;
      do
      {
        v48 = *v46++;
        v45 += v48;
        --v47;
      }
      while ( v47 );
      v49 = h.handle.handle;
      FS_Printf(h, "\n\nEvent sequence delta sends: [0]=%i count: %zu\n", (unsigned int)s_eventSeqDelta[0], 9ui64);
      FS_Printf((fileHandle_t)v49, "Event sequence full sends: %i\n", v45);
      FS_Printf((fileHandle_t)v49, "Event sequence delta send breakdown:\n");
      v50 = 0;
      v51 = (unsigned int *)s_eventSeqDelta;
      do
      {
        v52 = h.handle.handle;
        FS_Printf(h, "Event sequence delta sends - %i bits needed: %i\n", v50++, *v51++);
      }
      while ( v50 < 9 );
      FS_Printf((fileHandle_t)v52, "Event sequence full send breakdown:\n");
      for ( j = 0; j < 9; ++j )
      {
        v54 = h.handle.handle;
        FS_Printf(h, "Event sequence full sends - %i bits needed: %i\n", j, *v44++);
      }
      FS_Printf((fileHandle_t)v54, "\n\nEvent data sends\n");
      FS_Printf(h, "Events sent total: %d\n", (unsigned int)s_eventsSent);
      FS_Printf(h, "Event types sent: %d\n", (unsigned int)s_eventTypesSent);
      FS_Printf(h, "Event parms sent: %d\n", (unsigned int)s_eventParmsSent);
      FS_Printf(h, "Event type bits used: %d\n", (unsigned int)s_bitsUsedForEventTypes);
      FS_Printf(h, "Event parm bits used: %d\n", (unsigned int)s_bitsUsedForEventParms);
      FS_Printf(h, "Event overhead bits used: %d\n", (unsigned int)s_bitsUsedForEventOverhead);
      FS_Printf(h, "Event bits used total: %d\n", (unsigned int)s_bitsUsedForEvents);
      FS_Printf(h, "\n\nX/Y Origin Deltas:\n");
      v55 = 0i64;
      v56 = (unsigned int *)s_originDeltaBits;
      v57 = 0i64;
      for ( k = 0; k < 8; ++k )
      {
        if ( *v56 )
        {
          v55 += (int)(8 * *v56);
          v57 += (int)*v56;
          FS_Printf(h, "%i bits: %i times\n", k, *v56);
        }
        ++v56;
      }
      FS_Printf(h, "\n\nX/Y Origin Full Sends:\n");
      v59 = 0;
      v60 = s_originFullBits;
      do
      {
        if ( *v60 )
        {
          v55 += 19 * *v60;
          v57 += *(int *)v60;
          LODWORD(fmtb) = *v60;
          FS_Printf(h, "sent as full %i bits, but number only needed %i bits: %i times\n", 18i64, v59, fmtb);
        }
        ++v59;
        ++v60;
      }
      while ( v59 < 0x13 );
      FS_Printf(h, "\n\nZ Origin Deltas:\n");
      v61 = 0;
      v62 = (unsigned int *)s_originZDeltaBits;
      do
      {
        if ( *v62 )
        {
          v55 += (int)(8 * *v62);
          v57 += (int)*v62;
          FS_Printf(h, "%i bits: %i times\n", v61, *v62);
        }
        ++v61;
        ++v62;
      }
      while ( v61 < 8 );
      FS_Printf(h, "\n\nZ Origin Full Sends:\n");
      v63 = 0;
      v64 = s_originZFullBits;
      do
      {
        if ( *v64 )
        {
          v55 += 17 * *v64;
          v57 += *(int *)v64;
          LODWORD(fmtb) = *v64;
          FS_Printf(h, "sent as full %i bits, but number only needed %i bits: %i times\n", 16i64, v63, fmtb);
        }
        ++v63;
        ++v64;
      }
      while ( v63 < 0x11 );
      FS_Printf(h, "\n\nOrigin Exp Golomb Sends:\n");
      v65 = 0;
      v66 = s_originExpGolombBits;
      v67 = 0i64;
      do
      {
        if ( *v66 )
        {
          v55 += v67 * *v66;
          v57 += *v66;
          v68 = h.handle.handle;
          FS_Printf(h, "%i bits: %lld times\n", v65, *v66);
        }
        else
        {
          v68 = h.handle.handle;
        }
        ++v65;
        ++v67;
        ++v66;
      }
      while ( v65 < 0x48 );
      FS_Printf((fileHandle_t)v68, "\nOrigin Extra Precision Bits: %d\n", 0i64);
      FS_Printf((fileHandle_t)v68, "Origin Total Sends: %lld\n", v57);
      FS_Printf((fileHandle_t)v68, "Origin Total Bits: %lld\n", v55);
      if ( v57 )
      {
        v69 = (float)v55;
        v70 = (float)v57;
        v71 = v69 / v70;
      }
      else
      {
        v71 = 0.0;
      }
      FS_Printf((fileHandle_t)v68, "Origin Average Bits: %f\n", v71);
      FS_Printf((fileHandle_t)v68, "\nLast PS field changed in snapshot:\n");
      NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_PLAYERSTATE);
      v73 = (unsigned int *)s_playerStateFieldsChanged;
      v74 = 0;
      v75 = 0i64;
      do
      {
        v76 = h.handle.handle;
        if ( *v73 )
          FS_Printf(h, "%10i times - field %i [%s]\n", *v73, v74, NetFieldListForNetFieldType->array[v75].name);
        ++v74;
        ++v75;
        ++v73;
      }
      while ( v74 < 0x23F );
      FS_Printf((fileHandle_t)v76, "\n\n");
      skippedFieldsTracking<575>::PrintData(&s_skippedFieldsTrackingPlayerState, (fileHandle_t)v76, "PlayerState");
      FS_Printf((fileHandle_t)v76, "\n\n");
      skippedFieldsTracking<118>::PrintData(&s_skippedFieldsTrackingClientState, (fileHandle_t)v76, "ClientState");
      FS_Printf((fileHandle_t)v76, "\n\n");
      skippedFieldsTracking<68>::PrintData(&s_skippedFieldsTrackingEntityState, (fileHandle_t)v76, "EntityState");
      FS_Printf((fileHandle_t)v76, "\n\n");
      skippedFieldsTracking<46>::PrintData(&s_skippedFieldsTrackingHudElem, (fileHandle_t)v76, "Hud Elem");
      FS_Printf((fileHandle_t)v76, "\n\n");
      FS_Printf((fileHandle_t)v76, "\n\nHuffman data:\n");
      v77 = huffBytesSeen;
      do
        FS_Printf((fileHandle_t)v76, "\t%i,\t\t
      while ( v18 < 0x100 );
      FS_FCloseFile((fileHandle_t)v76);
    }
  }
}

/*
==============
SV_WriteEntityFieldNumbersToBlackbox
==============
*/
void SV_WriteEntityFieldNumbersToBlackbox()
{
  const dvar_t *v0; 
  int *v1; 
  signed int v2; 
  unsigned int i; 
  int v4; 
  entityType_s v5; 
  const char *EntityTypeName; 
  int v7; 
  __int64 v8; 
  int v9; 
  const char *v10; 
  bool v11; 
  __int64 v12; 
  int v13; 
  bool v14; 
  __int64 v15; 
  volatile int (*v16)[575]; 
  const NetFieldList *v17; 
  NetField *array; 
  unsigned int count; 
  int v20; 
  volatile int (*v21)[575]; 
  __int64 v22; 
  int BitCount; 
  int v24; 
  unsigned int v25; 
  int *v26; 
  int v27; 
  int v28; 
  bool v29; 
  const char *name; 
  bool v31; 
  __int64 v32; 
  volatile int *v33; 
  __int64 v34; 
  int v35; 
  int v36; 
  volatile int *v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  bool v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  unsigned int v50; 
  unsigned int v51; 
  int v52; 
  float v53; 
  float v54; 
  bool v55; 
  __int64 v56; 
  __int64 v57; 
  bool estimate; 
  bool v59; 
  int v60; 
  int v61; 
  unsigned int v62; 
  int v63[2]; 
  int v64[2]; 
  int v65; 
  int totalFieldsSkipped; 
  int totaTimesSkipped; 
  char *value; 
  NetField *field; 
  DLogContext v70; 
  DLogContext v71; 
  DLogContext v72; 
  DLogContext context; 
  char buffer[4096]; 
  char v75[4096]; 
  char v76[4096]; 
  char v77[4096]; 

  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    v0 = DVARBOOL_online_blackbox_send_snapshot_bw_data;
    if ( !DVARBOOL_online_blackbox_send_snapshot_bw_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_blackbox_send_snapshot_bw_data") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.enabled )
    {
      v1 = (int *)s_bitsUsedPerEType;
      v2 = s_totalBitsUsedForServerCommands + s_bitsUsedForPlayerstates[9];
      for ( i = 0; i < 0xFF; ++i )
      {
        if ( *v1 )
        {
          v4 = *v1;
          v5 = truncate_cast<enum entityType_s,unsigned int>(i);
          EntityTypeName = BG_GetEntityTypeName(v5);
          DLog_RecordEvent<char const *,char const *,char const *,long>(0i64, "online_bandwidth_sv_entity_bits", "entity_type", EntityTypeName, "bits_used", v4);
          v2 += *v1;
        }
        ++v1;
      }
      v7 = 1;
      v8 = 1i64;
      if ( v2 > 1 )
        v7 = v2;
      v65 = v7;
      do
      {
        v9 = s_bitsUsedForPlayerstates[v8];
        if ( v8 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 2051, ASSERT_TYPE_ASSERT, "(segment >= PLAYERSTATE_SEGMENT_FIRST)", (const char *)&queryFormat, "segment >= PLAYERSTATE_SEGMENT_FIRST") )
          __debugbreak();
        v10 = s_psSegmentFullNames[v8];
        if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) )
        {
          if ( DLog_IsActive() )
          {
            v11 = DLog_BeginEvent(&context, "online_bandwidth_sv_ps_breakdown");
            context.autoEndEvent = 1;
            if ( v11 && DLog_String(&context, "type", v10, 0) && DLog_Int32(&context, "bits_used", v9) )
              DLog_RecordContext(&context);
          }
          else
          {
            context.error = DLOG_ERROR_NOT_ACTIVE;
          }
        }
        v8 += 2i64;
      }
      while ( v8 < 9 );
      LODWORD(v12) = 0;
      v13 = 0;
      *(_QWORD *)v63 = 0i64;
      v60 = 0;
      v14 = 1;
      *(_QWORD *)v64 = s_networkEntityFieldsChanged;
      v15 = 0i64;
      v16 = s_networkEntityFieldsChanged;
      do
      {
        if ( !v14 )
        {
          LODWORD(v57) = 34;
          LODWORD(v56) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 860, ASSERT_TYPE_ASSERT, "(unsigned)( packetEntityType ) < (unsigned)( ANALYZE_DATATYPE_ENTITYTYPE_COUNT )", "packetEntityType doesn't index ANALYZE_DATATYPE_ENTITYTYPE_COUNT\n\t%i not in [0, %i)", v56, v57) )
            __debugbreak();
        }
        value = (char *)s_analyzeEntityTypeNames[v15];
        v17 = s_netFieldListsForPacketEntityType[v15];
        array = (NetField *)v17->array;
        field = (NetField *)v17->array;
        if ( v13 >= 30 )
        {
          count = v17->count;
        }
        else
        {
          if ( (unsigned int)(v13 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v13, "signed", v15) )
            __debugbreak();
          count = MSG_GetNetFieldsCountForEntityType((const entityType_s)v13);
        }
        v62 = count;
        v20 = 0;
        if ( !count )
          goto LABEL_39;
        v21 = v16;
        v22 = count;
        do
        {
          BitCount = MSG_GetBitCount(&estimate, NULL, NULL, array);
          v24 = *(_DWORD *)v21;
          v21 = (volatile int (*)[575])((char *)v21 + 4);
          ++array;
          v20 += BitCount * v24;
          --v22;
        }
        while ( v22 );
        count = v62;
        array = field;
        v61 = v20;
        if ( !v20 )
LABEL_39:
          v61 = 1;
        v25 = 0;
        if ( count )
        {
          v26 = (int *)s_networkEntityFieldsChanged[v15];
          do
          {
            v27 = MSG_GetBitCount(&estimate, NULL, NULL, array);
            v28 = *v26;
            v29 = estimate;
            v59 = array->changeHints == 1;
            name = array->name;
            if ( DLog_IsActive() && DLog_CreateContext(&v71, 0i64, v75, 4096) )
            {
              if ( DLog_IsActive() )
              {
                v31 = DLog_BeginEvent(&v71, "online_bandwidth_sv_ent_fields");
                v71.autoEndEvent = 1;
                if ( v31 && DLog_UInt32(&v71, "index", v25) && DLog_String(&v71, "entity_name", value, 0) && DLog_String(&v71, "field_name", name, 0) && DLog_Int32(&v71, "times_changed", v28) && DLog_Int32(&v71, "bits", v27) && DLog_Int32(&v71, "total_data", v61) && DLog_Bool(&v71, "estimate", v29) && DLog_Bool(&v71, "never_changes", v59) )
                  DLog_RecordContext(&v71);
              }
              else
              {
                v71.error = DLOG_ERROR_NOT_ACTIVE;
              }
            }
            ++v25;
            ++v26;
            ++array;
          }
          while ( v25 < v62 );
          v15 = *(_QWORD *)v63;
          LODWORD(v12) = 0;
        }
        v13 = v60 + 1;
        v16 = (volatile int (*)[575])(*(_QWORD *)v64 + 2300i64);
        v60 = v13;
        ++v15;
        *(_QWORD *)v64 += 2300i64;
        *(_QWORD *)v63 = v15;
        v14 = (unsigned int)v13 < 0x22;
      }
      while ( v13 < 34 );
      v32 = 9i64;
      v33 = s_eventSeqFull;
      v34 = 9i64;
      v35 = 0;
      do
      {
        v36 = *v33++;
        v35 += v36;
        --v34;
      }
      while ( v34 );
      v37 = s_eventSeqDelta;
      do
      {
        v38 = *v37++;
        v12 = (unsigned int)(v38 + v12);
        --v32;
      }
      while ( v32 );
      v39 = s_bitsUsedForEventOverhead;
      v40 = s_bitsUsedForEventParms;
      *(_QWORD *)v63 = v12;
      v41 = s_bitsUsedForEventTypes;
      v42 = s_eventParmsSent;
      v43 = s_eventTypesSent;
      v44 = s_eventsSent;
      v60 = s_bitsUsedForEvents;
      if ( DLog_IsActive() && DLog_CreateContext(&v72, 0i64, v76, 4096) && DLog_IsActive() )
      {
        v45 = DLog_BeginEvent(&v72, "online_bandwidth_sv_entity_details");
        v72.autoEndEvent = 1;
        if ( v45 && DLog_Int32(&v72, "seq_delta_sends", v63[0]) && DLog_Int32(&v72, "seq_full_sends", v35) && DLog_Int32(&v72, "sent_total", v44) && DLog_Int32(&v72, "types_sent", v43) && DLog_Int32(&v72, "parms_sent", v42) && DLog_Int32(&v72, "type_bits_used", v41) && DLog_Int32(&v72, "parm_bits_used", v40) && DLog_Int32(&v72, "overhead_bits_used", v39) && DLog_Int32(&v72, "bits_used_total", v60) )
          DLog_RecordContext(&v72);
      }
      v63[0] = s_viewDirFullSends;
      v64[0] = s_skippedFieldsTrackingHudElem.totaTimesSkipped;
      LODWORD(value) = s_skippedFieldsTrackingHudElem.totalFieldsSkipped;
      totaTimesSkipped = s_skippedFieldsTrackingEntityState.totaTimesSkipped;
      totalFieldsSkipped = s_skippedFieldsTrackingEntityState.totalFieldsSkipped;
      v61 = s_skippedFieldsTrackingClientState.totaTimesSkipped;
      v46 = s_skippedFieldsTrackingPlayerState.totaTimesSkipped;
      v47 = s_skippedFieldsTrackingPlayerState.totalFieldsSkipped;
      v48 = s_originsSentDueToServerTimeMismatch;
      v49 = s_originsSentDueToPredicitonError;
      v50 = s_bitsUsedForPlayerstates[9];
      v51 = s_totalBitsUsedForServerCommands;
      v52 = s_maxSnapshotSize;
      v53 = s_stdSnapshotDeviation;
      v54 = s_avgSnapshotSize;
      v60 = s_skippedFieldsTrackingClientState.totalFieldsSkipped;
      if ( DLog_IsActive() && DLog_CreateContext(&v70, 0i64, v77, 4096) && DLog_IsActive() )
      {
        v55 = DLog_BeginEvent(&v70, "online_bandwidth_sv_overall");
        v70.autoEndEvent = 1;
        if ( v55 && DLog_Int32(&v70, "total_bits", v65) && DLog_UInt32(&v70, "server_cmd_bits", v51) && DLog_UInt32(&v70, "player_state_bits", v50) && DLog_Int32(&v70, "origins_sent_prediction_error", v49) && DLog_Int32(&v70, "origins_sent_server_time_mismatch", v48) && DLog_Float32(&v70, "avg_snapshot_size_bytes", v54) && DLog_Float32(&v70, "std_dev_snapshot_size_bytes", v53) && DLog_Int32(&v70, "max_snapshot_size_bytes", v52) && DLog_Int32(&v70, "player_state_fields_skipped", v47) && DLog_Int32(&v70, "player_state_times_skipped", v46) && DLog_Int32(&v70, "client_state_fields_skipped", v60) && DLog_Int32(&v70, "client_state_times_skipped", v61) && DLog_Int32(&v70, "entity_fields_skipped", totalFieldsSkipped) && DLog_Int32(&v70, "entity_fields_times_skipped", totaTimesSkipped) && DLog_Int32(&v70, "hudelem_fields_skipped", (int)value) && DLog_Int32(&v70, "hudelem_fields_times_skipped", v64[0]) && DLog_Int32(&v70, "angle_full_sends", v63[0]) )
          DLog_RecordContext(&v70);
      }
    }
  }
}

