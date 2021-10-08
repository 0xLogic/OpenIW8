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
  __int64 v16; 
  unsigned int v17; 
  const char *v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  char *fmt; 
  char *fmta; 
  __int64 v32; 

  FS_Printf(f, "%s Fields Skipped Data:\n\n", networkType);
  if ( this->totaTimesSkipped )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, rcx
      vdivss  xmm2, xmm1, xmm0
    }
  }
  else
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
  }
  __asm
  {
    vcvtss2sd xmm3, xmm2, xmm2
    vmovq   r9, xmm3
  }
  FS_Printf(f, "Average number of fields skipped when sending %s delta: %f (%i/%i)\n", networkType, *(double *)&_XMM3, this->totalFieldsSkipped, this->totaTimesSkipped);
  FS_Printf(f, "Breakdown of fields skipped:\n");
  v16 = 0i64;
  v17 = 1;
  do
  {
    if ( this->numFieldsSkipped[v16] )
    {
      v18 = "%i or more fields skipped: %i\n";
      if ( v16 != 574 )
        v18 = "%i fields skipped: %i\n";
      FS_Printf(f, v18, v17, (unsigned int)this->numFieldsSkipped[v16]);
    }
    ++v17;
    ++v16;
  }
  while ( v16 < 575 );
  v19 = 0i64;
  v20 = 2;
  v21 = 0i64;
  v22 = 2;
  do
  {
    if ( this->numFieldsSkipped[v21] )
      v19 = (unsigned int)(v22 * (this->numFieldsSkipped[v21] - 1) + v19);
    ++v22;
    ++v21;
  }
  while ( v21 < 575 );
  FS_Printf(f, "Total overhead if %s used 1 bit skip markers: %i\n", networkType, v19);
  do
  {
    if ( v20 <= 0 )
    {
      LODWORD(v32) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v32) )
        __debugbreak();
    }
    v23 = 0;
    v24 = 0i64;
    v25 = __ROL4__(1, v20);
    v26 = 1;
    do
    {
      if ( this->numFieldsSkipped[v24] )
        v23 += v20 * (this->numFieldsSkipped[v24] - 1) * (v26 / (v25 - 1) + 1);
      ++v26;
      ++v24;
    }
    while ( v24 < 575 );
    LODWORD(fmt) = v23;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers: %i\n", networkType, (unsigned int)v20, fmt);
    if ( v20 <= 0 )
    {
      LODWORD(v32) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v32) )
        __debugbreak();
    }
    v27 = 0;
    v28 = 0i64;
    v29 = 1;
    do
    {
      if ( this->numFieldsSkipped[v28] )
      {
        v27 += this->numFieldsSkipped[v28];
        if ( v28 )
          v27 += v20 * (this->numFieldsSkipped[v28] - 1) * (v29 / (v25 - 1) + 1);
      }
      ++v29;
      ++v28;
    }
    while ( v28 < 575 );
    LODWORD(fmta) = v27;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers with one bit for a single field jump: %i\n\n", networkType, (unsigned int)v20++, fmta);
  }
  while ( v20 < 8 );
}

/*
==============
skippedFieldsTracking<46>::PrintData
==============
*/
void skippedFieldsTracking<46>::PrintData(skippedFieldsTracking<46> *this, fileHandle_t f, const char *networkType)
{
  __int64 v16; 
  unsigned int v17; 
  const char *v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  char *fmt; 
  char *fmta; 
  __int64 v32; 

  FS_Printf(f, "%s Fields Skipped Data:\n\n", networkType);
  if ( this->totaTimesSkipped )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, rcx
      vdivss  xmm2, xmm1, xmm0
    }
  }
  else
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
  }
  __asm
  {
    vcvtss2sd xmm3, xmm2, xmm2
    vmovq   r9, xmm3
  }
  FS_Printf(f, "Average number of fields skipped when sending %s delta: %f (%i/%i)\n", networkType, *(double *)&_XMM3, this->totalFieldsSkipped, this->totaTimesSkipped);
  FS_Printf(f, "Breakdown of fields skipped:\n");
  v16 = 0i64;
  v17 = 1;
  do
  {
    if ( this->numFieldsSkipped[v16] )
    {
      v18 = "%i or more fields skipped: %i\n";
      if ( v16 != 45 )
        v18 = "%i fields skipped: %i\n";
      FS_Printf(f, v18, v17, (unsigned int)this->numFieldsSkipped[v16]);
    }
    ++v17;
    ++v16;
  }
  while ( v16 < 46 );
  v19 = 0i64;
  v20 = 2;
  v21 = 0i64;
  v22 = 2;
  do
  {
    if ( this->numFieldsSkipped[v21] )
      v19 = (unsigned int)(v22 * (this->numFieldsSkipped[v21] - 1) + v19);
    ++v22;
    ++v21;
  }
  while ( v21 < 46 );
  FS_Printf(f, "Total overhead if %s used 1 bit skip markers: %i\n", networkType, v19);
  do
  {
    if ( v20 <= 0 )
    {
      LODWORD(v32) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v32) )
        __debugbreak();
    }
    v23 = 0;
    v24 = 0i64;
    v25 = __ROL4__(1, v20);
    v26 = 1;
    do
    {
      if ( this->numFieldsSkipped[v24] )
        v23 += v20 * (this->numFieldsSkipped[v24] - 1) * (v26 / (v25 - 1) + 1);
      ++v26;
      ++v24;
    }
    while ( v24 < 46 );
    LODWORD(fmt) = v23;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers: %i\n", networkType, (unsigned int)v20, fmt);
    if ( v20 <= 0 )
    {
      LODWORD(v32) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v32) )
        __debugbreak();
    }
    v27 = 0;
    v28 = 0i64;
    v29 = 1;
    do
    {
      if ( this->numFieldsSkipped[v28] )
      {
        v27 += this->numFieldsSkipped[v28];
        if ( v28 )
          v27 += v20 * (this->numFieldsSkipped[v28] - 1) * (v29 / (v25 - 1) + 1);
      }
      ++v29;
      ++v28;
    }
    while ( v28 < 46 );
    LODWORD(fmta) = v27;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers with one bit for a single field jump: %i\n\n", networkType, (unsigned int)v20++, fmta);
  }
  while ( v20 < 8 );
}

/*
==============
skippedFieldsTracking<68>::PrintData
==============
*/
void skippedFieldsTracking<68>::PrintData(skippedFieldsTracking<68> *this, fileHandle_t f, const char *networkType)
{
  __int64 v16; 
  unsigned int v17; 
  const char *v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  char *fmt; 
  char *fmta; 
  __int64 v32; 

  FS_Printf(f, "%s Fields Skipped Data:\n\n", networkType);
  if ( this->totaTimesSkipped )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, rcx
      vdivss  xmm2, xmm1, xmm0
    }
  }
  else
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
  }
  __asm
  {
    vcvtss2sd xmm3, xmm2, xmm2
    vmovq   r9, xmm3
  }
  FS_Printf(f, "Average number of fields skipped when sending %s delta: %f (%i/%i)\n", networkType, *(double *)&_XMM3, this->totalFieldsSkipped, this->totaTimesSkipped);
  FS_Printf(f, "Breakdown of fields skipped:\n");
  v16 = 0i64;
  v17 = 1;
  do
  {
    if ( this->numFieldsSkipped[v16] )
    {
      v18 = "%i or more fields skipped: %i\n";
      if ( v16 != 67 )
        v18 = "%i fields skipped: %i\n";
      FS_Printf(f, v18, v17, (unsigned int)this->numFieldsSkipped[v16]);
    }
    ++v17;
    ++v16;
  }
  while ( v16 < 68 );
  v19 = 0i64;
  v20 = 2;
  v21 = 0i64;
  v22 = 2;
  do
  {
    if ( this->numFieldsSkipped[v21] )
      v19 = (unsigned int)(v22 * (this->numFieldsSkipped[v21] - 1) + v19);
    ++v22;
    ++v21;
  }
  while ( v21 < 68 );
  FS_Printf(f, "Total overhead if %s used 1 bit skip markers: %i\n", networkType, v19);
  do
  {
    if ( v20 <= 0 )
    {
      LODWORD(v32) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v32) )
        __debugbreak();
    }
    v23 = 0;
    v24 = 0i64;
    v25 = __ROL4__(1, v20);
    v26 = 1;
    do
    {
      if ( this->numFieldsSkipped[v24] )
        v23 += v20 * (this->numFieldsSkipped[v24] - 1) * (v26 / (v25 - 1) + 1);
      ++v26;
      ++v24;
    }
    while ( v24 < 68 );
    LODWORD(fmt) = v23;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers: %i\n", networkType, (unsigned int)v20, fmt);
    if ( v20 <= 0 )
    {
      LODWORD(v32) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v32) )
        __debugbreak();
    }
    v27 = 0;
    v28 = 0i64;
    v29 = 1;
    do
    {
      if ( this->numFieldsSkipped[v28] )
      {
        v27 += this->numFieldsSkipped[v28];
        if ( v28 )
          v27 += v20 * (this->numFieldsSkipped[v28] - 1) * (v29 / (v25 - 1) + 1);
      }
      ++v29;
      ++v28;
    }
    while ( v28 < 68 );
    LODWORD(fmta) = v27;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers with one bit for a single field jump: %i\n\n", networkType, (unsigned int)v20++, fmta);
  }
  while ( v20 < 8 );
}

/*
==============
skippedFieldsTracking<118>::PrintData
==============
*/
void skippedFieldsTracking<118>::PrintData(skippedFieldsTracking<118> *this, fileHandle_t f, const char *networkType)
{
  __int64 v16; 
  unsigned int v17; 
  const char *v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  char *fmt; 
  char *fmta; 
  __int64 v32; 

  FS_Printf(f, "%s Fields Skipped Data:\n\n", networkType);
  if ( this->totaTimesSkipped )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, rcx
      vdivss  xmm2, xmm1, xmm0
    }
  }
  else
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
  }
  __asm
  {
    vcvtss2sd xmm3, xmm2, xmm2
    vmovq   r9, xmm3
  }
  FS_Printf(f, "Average number of fields skipped when sending %s delta: %f (%i/%i)\n", networkType, *(double *)&_XMM3, this->totalFieldsSkipped, this->totaTimesSkipped);
  FS_Printf(f, "Breakdown of fields skipped:\n");
  v16 = 0i64;
  v17 = 1;
  do
  {
    if ( this->numFieldsSkipped[v16] )
    {
      v18 = "%i or more fields skipped: %i\n";
      if ( v16 != 117 )
        v18 = "%i fields skipped: %i\n";
      FS_Printf(f, v18, v17, (unsigned int)this->numFieldsSkipped[v16]);
    }
    ++v17;
    ++v16;
  }
  while ( v16 < 118 );
  v19 = 0i64;
  v20 = 2;
  v21 = 0i64;
  v22 = 2;
  do
  {
    if ( this->numFieldsSkipped[v21] )
      v19 = (unsigned int)(v22 * (this->numFieldsSkipped[v21] - 1) + v19);
    ++v22;
    ++v21;
  }
  while ( v21 < 118 );
  FS_Printf(f, "Total overhead if %s used 1 bit skip markers: %i\n", networkType, v19);
  do
  {
    if ( v20 <= 0 )
    {
      LODWORD(v32) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v32) )
        __debugbreak();
    }
    v23 = 0;
    v24 = 0i64;
    v25 = __ROL4__(1, v20);
    v26 = 1;
    do
    {
      if ( this->numFieldsSkipped[v24] )
        v23 += v20 * (this->numFieldsSkipped[v24] - 1) * (v26 / (v25 - 1) + 1);
      ++v26;
      ++v24;
    }
    while ( v24 < 118 );
    LODWORD(fmt) = v23;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers: %i\n", networkType, (unsigned int)v20, fmt);
    if ( v20 <= 0 )
    {
      LODWORD(v32) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( ( bits > 0 ) )", "( bits ) = %i", v32) )
        __debugbreak();
    }
    v27 = 0;
    v28 = 0i64;
    v29 = 1;
    do
    {
      if ( this->numFieldsSkipped[v28] )
      {
        v27 += this->numFieldsSkipped[v28];
        if ( v28 )
          v27 += v20 * (this->numFieldsSkipped[v28] - 1) * (v29 / (v25 - 1) + 1);
      }
      ++v29;
      ++v28;
    }
    while ( v28 < 118 );
    LODWORD(fmta) = v27;
    FS_Printf(f, "Total overhead if %s used %i bit skip markers with one bit for a single field jump: %i\n\n", networkType, (unsigned int)v20++, fmta);
  }
  while ( v20 < 8 );
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
  int v12; 
  ClientSnapshotDetailedData *v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  unsigned int offset; 
  unsigned __int16 size; 
  __int64 v22; 
  const char *v23; 
  int v24; 
  const char *UnobfuscatedName; 
  const char **v26; 
  ClientSnapshotDetailedData *v27; 
  __int64 v28; 
  int v29; 
  unsigned __int8 *fieldsSentPerEntity; 
  unsigned int *bitsSentPerEntity; 
  int v32; 
  const char **v33; 
  int v34; 
  char v35; 
  signed int v36; 
  int v37; 
  int v38; 
  char *fmt; 
  char *fmta; 
  __int64 v47; 
  double v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  int v53; 
  int v54; 
  dvar_t *outDvar; 
  ClientSnapshotDetailedData *v56; 
  unsigned __int64 v57; 
  unsigned __int64 v58; 
  __int64 v59; 
  char stringBuf[128]; 

  v3 = (int)clientNum;
  v53 = clientNum;
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
    LODWORD(v50) = s_clientSnapshotDetailedDataCount;
    LODWORD(v47) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1013, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( s_clientSnapshotDetailedDataCount )", "clientNum doesn't index s_clientSnapshotDetailedDataCount\n\t%i not in [0, %i)", v47, v50) )
      __debugbreak();
  }
  __asm { vmovss  xmm0, cs:s_avgSnapshotSize }
  name = v7->name;
  v12 = v7->netchan.outgoingSequence - v7->deltaMessage;
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+148h+var_120], xmm0
  }
  v58 = v3;
  v14 = &s_clientSnapshotDetailedData[v3];
  v56 = v14;
  v15 = v3;
  LODWORD(fmt) = v12;
  Com_Printf(15, "[Snapshot] %s %i byte snapshot (%d) (average snapshot size is %f)\n", v7->name, packetSize, fmt, v48);
  v16 = (unsigned int)s_entityLimitReachedCount[v3];
  if ( (int)v16 > 0 )
  {
    if ( s_entityLimitReached[v3] )
    {
      Com_Printf(15, "[Snapshot] %s This snapshot overflowed client entity limit!\n", v7->name);
      v16 = (unsigned int)s_entityLimitReachedCount[v3];
    }
    Com_Printf(15, "[Snapshot] %s %d snapshots have overflowed client entity count\n", v7->name, v16);
  }
  if ( SV_ShouldTrackPacketContents() )
  {
    v17 = 15;
    if ( !Dvar_GetInt_Internal_DebugName(DVARINT_sv_debugPacketContents, "sv_debugPacketContents") )
      v17 = 6;
    v57 = __rdtsc();
    Com_Printf(15, "[Snapshot] %s Tracking packet contents (See log file for details)\n", v7->name);
    v18 = v7->reliableAcknowledge + 1;
    if ( v18 <= v7->reliableSequence )
    {
      do
      {
        v19 = v18 & 0x1FF;
        offset = v7->netBuf.reliableCommands.m_entries[v19].offset;
        if ( v7->netBuf.reliableCommands.m_bufferNextIndex - offset <= 0x20000 && (size = v7->netBuf.reliableCommands.m_entries[v19].size) != 0 )
        {
          v22 = offset & 0x1FFFF;
          if ( (unsigned int)v22 + size > 0x20000 )
          {
            LODWORD(v52) = 0x20000;
            LODWORD(v51) = v22 + size;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v51, v52) )
              __debugbreak();
          }
          v23 = (const char *)&v7->netBuf.reliableCommands.m_buffer[v22];
          Com_Printf(v17, "[Snapshot] %s Reliable cmd #%i: %s\n", v7->name, v18 & 0x1FF, v23);
          if ( *v23 == 113 )
          {
            v24 = atoi(v23 + 2);
            if ( NetConstStrings_GetNetworkDvarAtIndex(v24, (const dvar_t **)&outDvar) )
            {
              if ( !outDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1056, ASSERT_TYPE_ASSERT, "( dvar )", (const char *)&queryFormat, "dvar") )
                __debugbreak();
              UnobfuscatedName = Dvar_DevGetUnobfuscatedName(outDvar->name);
              Com_Printf(v17, "\t[Snapshot] %s Dvar name: %s\n", v7->name, UnobfuscatedName);
            }
          }
        }
        else
        {
          v59 = 0i64;
          Com_Printf(v17, "[Snapshot] %s Reliable cmd #%i: <empty>\n", v7->name, v18 & 0x1FF);
        }
        ++v18;
      }
      while ( v18 <= v7->reliableSequence );
      LODWORD(v3) = v53;
      v14 = v56;
    }
    v26 = s_packetDataTypeString;
    v27 = v14;
    v28 = 18i64;
    do
    {
      if ( v27->bitsSent[0] )
      {
        LODWORD(v49) = v27->bitsSent[0] >> 3;
        LODWORD(fmta) = v27->bitsSent[0];
        Com_Printf(v17, "[Snapshot] %s %s - %i bits (%i bytes)\n", name, *v26, fmta, v49);
      }
      v27 = (ClientSnapshotDetailedData *)((char *)v27 + 4);
      ++v26;
      --v28;
    }
    while ( v28 );
    Com_Printf(v17, "[Snapshot] %s Playerstate fields sent: %i\n", name, v14->fieldsSentPlayerState);
    v29 = 0;
    fieldsSentPerEntity = v14->fieldsSentPerEntity;
    bitsSentPerEntity = v14->bitsSentPerEntity;
    do
    {
      if ( *fieldsSentPerEntity )
      {
        LODWORD(v50) = *bitsSentPerEntity >> 3;
        LODWORD(v49) = *bitsSentPerEntity;
        LODWORD(fmta) = *fieldsSentPerEntity;
        Com_Printf(v17, "[Snapshot] %s Entity %i (%i fields) - %i bits (%i bytes)\n", name, (unsigned int)v29, fmta, v49, v50);
      }
      ++v29;
      ++bitsSentPerEntity;
      ++fieldsSentPerEntity;
    }
    while ( v29 < 2048 );
    v32 = 0;
    v33 = s_analyzeEntityTypeNames;
    v34 = 34 * v3;
    v54 = 34 * v3;
    do
    {
      v35 = 0;
      v36 = 0;
      v37 = 575 * (v32 + v34);
      do
      {
        v38 = s_currentSnapshotEntityFieldsChanged[v37 + v36];
        if ( v38 > 0 )
        {
          if ( !v35 )
          {
            if ( (unsigned int)v32 >= 0x22 )
            {
              LODWORD(v50) = 34;
              LODWORD(v49) = v32;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 860, ASSERT_TYPE_ASSERT, "(unsigned)( packetEntityType ) < (unsigned)( ANALYZE_DATATYPE_ENTITYTYPE_COUNT )", "packetEntityType doesn't index ANALYZE_DATATYPE_ENTITYTYPE_COUNT\n\t%i not in [0, %i)", v49, v50) )
                __debugbreak();
            }
            Com_Printf(v17, "[Snapshot] %s %s fields changed: (field info: timeschanged)\n", name, *v33);
            v35 = 1;
          }
          SV_GetEntityFieldString((const PacketEntityType_e)v32, v36, stringBuf, 0x80u);
          LODWORD(fmta) = v38;
          Com_Printf(v17, "[Snapshot] %s %s: %u\n", name, stringBuf, fmta);
        }
        ++v36;
      }
      while ( v36 < 575 );
      v34 = v54;
      ++v32;
      ++v33;
    }
    while ( v32 < 34 );
    __rdtsc();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
      vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vcvtsd2ss xmm2, xmm1, xmm1
      vcvtss2sd xmm3, xmm2, xmm2
      vmovq   r9, xmm3
    }
    Com_Printf(15, "[Snapshot] %s Log print spew took %f ms.\n", name, *(double *)&_XMM3);
    v15 = v58;
  }
  if ( v15 >= 0xC8 )
    goto LABEL_67;
  s_entityLimitReached[v15] = 0;
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
  int gunZOfs_low; 
  const dvar_t *v7; 
  int integer; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int iSmallestPacket; 
  int v14; 
  signed int v15; 
  int iLargestPacket; 
  int v17; 
  __int64 iBytesPerSecond; 
  int iCountedFragments; 
  int v20; 
  int iCountedPackets; 
  int v22; 
  SvClient *CommonClient; 
  int v24; 
  int v25; 
  float gunYOfs; 
  int v27; 
  int v28; 
  int v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  __int64 v34; 
  __int64 v40; 
  const dvar_t *v66; 
  const dvar_t *v67; 
  signed int v68; 
  int *v71; 
  SvClient *v72; 
  int v73; 
  int i; 
  int v75; 
  __int64 v76; 
  char v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  __int64 v83; 
  int v84; 
  int v91; 
  int v92; 
  int v93; 
  char *fmt; 
  char *fmta; 
  __int64 v97; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  __int64 v101; 
  __int64 v102; 
  __int64 v103; 
  __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  __int64 v107; 
  __int64 v108; 
  __int64 v109; 
  int y; 
  int v111; 
  int v112; 
  unsigned int clientNum; 
  unsigned int clientNuma; 
  int v115; 
  unsigned int *v117; 
  int *v118; 
  int v119; 
  __int64 v120; 
  char Destination[32]; 
  char dest[1024]; 

  gunZOfs_low = 9999;
  if ( !net_profile->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 2179, ASSERT_TYPE_ASSERT, "(net_profile->current.integer)", (const char *)&queryFormat, "net_profile->current.integer") )
    __debugbreak();
  SV_Netchan_UpdateProfileStats();
  if ( Com_IsAnyLocalServerRunning() )
  {
    v7 = DVARINT_cl_profileTextY;
    __asm { vmovaps [rsp+538h+var_58], xmm8 }
    if ( !DVARINT_cl_profileTextY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    integer = v7->current.integer;
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
    _EAX = Sys_Milliseconds();
    __asm
    {
      vmovd   xmm8, eax
      vpshufd xmm8, xmm8, 0
    }
    v119 = _EAX;
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    v117 = (unsigned int *)PersistentGlobalsMP;
    iSmallestPacket = 9999;
    v14 = 0;
    v15 = 0;
    iLargestPacket = PersistentGlobalsMP->OOBProf.send.iLargestPacket;
    v17 = PersistentGlobalsMP->OOBProf.recieve.iLargestPacket;
    if ( iLargestPacket <= 0 )
      iLargestPacket = 0;
    iBytesPerSecond = (unsigned int)PersistentGlobalsMP->OOBProf.send.iBytesPerSecond;
    iCountedFragments = PersistentGlobalsMP->OOBProf.send.iCountedFragments;
    v20 = PersistentGlobalsMP->OOBProf.recieve.iBytesPerSecond;
    if ( PersistentGlobalsMP->OOBProf.send.iSmallestPacket < 9999 )
      iSmallestPacket = PersistentGlobalsMP->OOBProf.send.iSmallestPacket;
    iCountedPackets = PersistentGlobalsMP->OOBProf.send.iCountedPackets;
    v22 = PersistentGlobalsMP->OOBProf.recieve.iSmallestPacket;
    if ( v17 <= 0 )
      v17 = 0;
    clientNum = iBytesPerSecond;
    v115 = iCountedFragments;
    v111 = v20;
    if ( v22 < 9999 )
      gunZOfs_low = v22;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      do
      {
        if ( SvClient::GetCommonClient(v15)->state )
        {
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          CommonClient = SvClient::GetCommonClient(v15);
          if ( !NetConnection::IsLoopback((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) )
          {
            iCountedPackets += *(_DWORD *)&CommonClient[774].lastUsercmd.weapon.attachmentVariationIndices[13];
            v24 = *(_DWORD *)&CommonClient[774].lastUsercmd.weapon.attachmentVariationIndices[25];
            clientNum += *(_DWORD *)&CommonClient[774].lastUsercmd.weapon.attachmentVariationIndices[5];
            v115 += *(_DWORD *)&CommonClient[774].lastUsercmd.weapon.attachmentVariationIndices[17];
            v111 += LODWORD(CommonClient[782].lastUsercmd.vehOrgY);
            v25 = *(_DWORD *)&CommonClient[774].lastUsercmd.weapon.weaponCamo;
            if ( v24 <= iLargestPacket )
              v24 = iLargestPacket;
            iLargestPacket = v24;
            if ( v25 >= iSmallestPacket )
              v25 = iSmallestPacket;
            iSmallestPacket = v25;
            gunYOfs = CommonClient[782].lastUsercmd.gunYOfs;
            if ( SLODWORD(gunYOfs) <= v17 )
              gunYOfs = *(float *)&v17;
            v17 = LODWORD(gunYOfs);
            if ( SLODWORD(CommonClient[782].lastUsercmd.gunZOfs) < gunZOfs_low )
              gunZOfs_low = LODWORD(CommonClient[782].lastUsercmd.gunZOfs);
          }
          v14 += LODWORD(CommonClient[643].lastUsercmd.buttons) - *(_DWORD *)&CommonClient[602].lastUsercmd.weapon.attachmentVariationIndices[5];
        }
        ++v15;
      }
      while ( v15 < (int)SvClient::ms_clientCount );
      iCountedFragments = v115;
      iBytesPerSecond = clientNum;
      v20 = v111;
    }
    if ( iCountedPackets )
      v27 = 100 * iCountedFragments / iCountedPackets;
    else
      v27 = 0;
    LODWORD(v99) = v27;
    LODWORD(v97) = iSmallestPacket;
    LODWORD(fmt) = iLargestPacket;
    Com_sprintf(dest, 0x400ui64, "              Totals:%6i|%5i|%5i| %3i%%| %3i%%|%2i|%4i%%|%3i|%3i|%3i|%6i|", iBytesPerSecond, fmt, v97, v99, 0, 0, 0, 0, v14, 0, v20);
    v28 = bPrintToConsole;
    if ( bPrintToConsole )
    {
      Com_Printf(15, "%s\n", dest);
      v31 = y;
    }
    else
    {
      v32 = DVARINT_cl_profileTextHeight;
      if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      CL_DrawString(12, y, dest, 0, v32->current.integer);
      v33 = DVARINT_cl_profileTextHeight;
      if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      v31 = v33->current.integer + y;
      v28 = 0;
      y = v31;
    }
    __asm { vmovaps [rsp+538h+var_38], xmm6 }
    v34 = v117[14984];
    if ( (int)v34 > 0 || (int)v117[15592] > 0 )
    {
      __asm
      {
        vmovdqu xmm6, cs:__xmm@000003e8000003e8000003e8000003e8
        vmovaps [rsp+538h+var_48], xmm7
      }
      _RAX = v117 + 14389;
      __asm
      {
        vmovdqu xmm7, cs:__xmm@00000001000000010000000100000001
        vpxor   xmm4, xmm4, xmm4
        vpxor   xmm5, xmm5, xmm5
      }
      v40 = 25i64;
      do
      {
        __asm
        {
          vmovd   xmm0, dword ptr [rax-18h]
          vpinsrd xmm0, xmm0, dword ptr [rax-0Ch], 1
          vpinsrd xmm0, xmm0, dword ptr [rax], 2
          vpinsrd xmm0, xmm0, dword ptr [rax+0Ch], 3
        }
        _RAX += 24;
        __asm
        {
          vpsubd  xmm0, xmm8, xmm0
          vpcmpgtd xmm3, xmm6, xmm0
          vpaddd  xmm1, xmm7, xmm4
          vpand   xmm2, xmm1, xmm3
          vpandn  xmm0, xmm3, xmm4
          vpor    xmm4, xmm2, xmm0
          vmovd   xmm0, dword ptr [rax-48h]
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
        --v40;
      }
      while ( v40 );
      LODWORD(v107) = v117[15592];
      __asm
      {
        vpaddd  xmm1, xmm5, xmm4
        vpsrldq xmm0, xmm1, 8
        vpaddd  xmm2, xmm1, xmm0
        vpsrldq xmm0, xmm2, 4
        vpaddd  xmm0, xmm2, xmm0
        vmovd   dword ptr [rsp+538h+var_4E8], xmm0
      }
      LODWORD(v103) = 0;
      LODWORD(v102) = 0;
      LODWORD(v101) = 0;
      LODWORD(v100) = v117[14988];
      LODWORD(v98) = v117[14990];
      LODWORD(fmta) = v117[14989];
      Com_sprintf(dest, 0x400ui64, "  OutOfBand Messages: %5i|%5i|%5i| %3i%%| %3i%%|%2i|%4i%%|%3i|%3i|%3i %5i|", v34, fmta, v98, v100, v101, v102, v103, v104, 0i64, 0i64, v107);
      __asm { vmovaps xmm7, [rsp+538h+var_48] }
      if ( v28 )
      {
        Com_Printf(15, "%s\n", dest);
      }
      else
      {
        v66 = DVARINT_cl_profileTextHeight;
        if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v66);
        CL_DrawString(12, v31, dest, 0, v66->current.integer);
        v67 = DVARINT_cl_profileTextHeight;
        if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v67);
        y = v67->current.integer + v31;
      }
    }
    v68 = 0;
    __asm { vmovaps xmm8, [rsp+538h+var_58] }
    clientNuma = 0;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      __asm { vmovss  xmm6, cs:__real@42c80000 }
      v71 = &s_clientSnapshotSizeData[0].snapshotSize[6];
      v118 = &s_clientSnapshotSizeData[0].snapshotSize[6];
      do
      {
        if ( SvClient::GetCommonClient(v68)->state )
        {
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          v72 = SvClient::GetCommonClient(v68);
          strncpy(Destination, &v72[4].lastUsercmd.selectedLoc[1], 0x11ui64);
          Destination[16] = 0;
          v73 = 0;
          for ( i = 0; i < 64; ++i )
          {
            if ( i < 0 )
            {
              LODWORD(v98) = i;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1054, ASSERT_TYPE_ASSERT, "( sequence ) >= ( 0 )", "sequence >= 0\n\t%i, %i", v98, 0i64) )
                __debugbreak();
            }
            v75 = *((_DWORD *)&v72[1293].lastUsercmd.avoidForward + 18 * (i & 0x3F));
            if ( v75 <= v73 )
              break;
            v73 = v75;
          }
          v76 = 64i64;
          v112 = 0;
          v77 = i;
          v78 = 0;
          v120 = 64i64;
          v79 = 0;
          v80 = 0;
          v81 = 0;
          v82 = 0;
          do
          {
            if ( i < 0 )
            {
              LODWORD(v98) = i;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1054, ASSERT_TYPE_ASSERT, "( sequence ) >= ( 0 )", "sequence >= 0\n\t%i, %i", v98, 0i64) )
                __debugbreak();
              v76 = v120;
              v80 = v112;
            }
            v83 = v77 & 0x3F;
            if ( *((_DWORD *)&v72[1293].lastUsercmd.avoidForward + 18 * v83) > v119 - 1000 )
            {
              ++v81;
              if ( v72[1293].lastUsercmd.remoteControlAngles[72 * v83] == 1 )
                ++v82;
            }
            v84 = *((_DWORD *)&v72[1293].lastUsercmd.gunYaw + 18 * v83);
            if ( v84 > 0 )
              v79 += v80;
            if ( v84 > 0 )
              ++v78;
            ++v80;
            if ( v84 > 0 )
              v80 = 0;
            ++i;
            ++v77;
            v112 = v80;
            v120 = --v76;
          }
          while ( v76 );
          if ( v81 <= 0 )
          {
            _ER9 = 0;
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, esi
              vdivss  xmm1, xmm6, xmm0
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, ebp
              vmulss  xmm1, xmm1, xmm0
              vcvttss2si r9d, xmm1
            }
          }
          if ( LODWORD(v72[855].__vftable) )
          {
            v91 = 0;
          }
          else if ( v78 )
          {
            v91 = 100 * v79 / (v79 + v78);
          }
          else
          {
            v91 = 100;
          }
          v71 = v118;
          v92 = *v118 + v118[1] + *(v118 - 1) + *(v118 - 2) + *(v118 - 3) + *(v118 - 4) + *(v118 - 5) + *(v118 - 6);
          if ( v92 )
            v93 = 100 - 100 * (v118[2] + v118[3] + v118[4] + v118[5] + v118[6] + v118[7] + v118[8] + v118[9]) / v92;
          else
            v93 = 0;
          v68 = clientNuma;
          *(float *)&v109 = v72[782].lastUsercmd.vehOrgY;
          LODWORD(v108) = _ER9;
          LODWORD(v107) = LODWORD(v72[643].lastUsercmd.buttons) - *(_DWORD *)&v72[602].lastUsercmd.weapon.attachmentVariationIndices[5];
          LODWORD(v106) = v81;
          LODWORD(v105) = v93;
          LODWORD(v104) = v80;
          LODWORD(v103) = v91;
          LODWORD(v102) = *(_DWORD *)&v72[774].lastUsercmd.weapon.attachmentVariationIndices[21];
          LODWORD(v101) = *(_DWORD *)&v72[774].lastUsercmd.weapon.weaponCamo;
          LODWORD(v100) = *(_DWORD *)&v72[774].lastUsercmd.weapon.attachmentVariationIndices[25];
          LODWORD(v98) = *(_DWORD *)&v72[774].lastUsercmd.weapon.attachmentVariationIndices[5];
          Com_sprintf(dest, 0x400ui64, "#%2i-%16s: %5i|%5i|%5i| %3i%%| %3i%%|%2i|%4i%%|%3i|%3i|%3i| %5i|", clientNuma, Destination, v98, v100, v101, v102, v103, v104, v105, v106, v107, v108, v109);
          if ( bPrintToConsole )
            Com_Printf(15, "%s\n", dest);
          else
            y += SV_ProfDraw(y, dest, clientNuma);
        }
        ++v68;
        v71 += 17;
        clientNuma = v68;
        v118 = v71;
      }
      while ( v68 < (int)SvClient::ms_clientCount );
    }
    __asm { vmovaps xmm6, [rsp+538h+var_38] }
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
  const dvar_t *v7; 
  const dvar_t *v8; 
  vec4_t color; 

  if ( clientNum >= 0 && (clientNum == s_clientDisplayClientNum || s_clientDisplayClientNum < 0) )
  {
    v5 = DVARINT_cl_profileTextHeight;
    __asm
    {
      vmovups xmm0, cs:__xmm@3e4ccccd3f8000003f8000003f800000
      vmovups xmmword ptr [rsp+88h+color], xmm0
    }
    if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    CL_DrawRect(12, y, 1024, v5->current.integer, &color);
  }
  v7 = DVARINT_cl_profileTextHeight;
  if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  CL_DrawString(12, y, string, 0, v7->current.integer);
  v8 = DVARINT_cl_profileTextHeight;
  if ( !DVARINT_cl_profileTextHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_profileTextHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  return v8->current.unsignedInt;
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

void *__fastcall SV_ResetSnapshotProfileCounters(double _XMM0_8)
{
  void *result; 

  memset_0(s_clientSnapshotSizeData, 0, sizeof(s_clientSnapshotSizeData));
  __asm { vxorps  xmm0, xmm0, xmm0 }
  s_maxSnapshotSize = 0;
  s_numSnapshotSamples = 0;
  __asm
  {
    vmovss  cs:s_avgSnapshotSize, xmm0
    vmovss  cs:s_stdSnapshotDeviation, xmm0
  }
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
  unsigned __int64 v6; 
  int v8; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  v6 = (unsigned __int64)&s_snapshotSizeLock & 3;
  while ( 1 )
  {
    if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_snapshotSizeLock) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_snapshotSizeLock, 1, 0) )
      break;
    Sys_Sleep(0);
  }
  v8 = s_maxSnapshotSize;
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  if ( size > s_maxSnapshotSize )
    v8 = size;
  __asm { vxorps  xmm1, xmm1, xmm1 }
  s_maxSnapshotSize = v8;
  __asm
  {
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, eax
  }
  ++s_numSnapshotSamples;
  __asm
  {
    vcvtsi2ss xmm1, xmm1, eax
    vdivss  xmm4, xmm0, xmm1
    vmulss  xmm0, xmm5, cs:s_stdSnapshotDeviation
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, edi
    vsubss  xmm2, xmm6, cs:s_avgSnapshotSize
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm0, xmm5, cs:s_avgSnapshotSize
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm1, xmm0, xmm6
    vmovss  cs:s_stdSnapshotDeviation, xmm2
    vmulss  xmm2, xmm1, xmm4
    vmovss  cs:s_avgSnapshotSize, xmm2
  }
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_snapshotSizeLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_snapshotSizeLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 1890, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_snapshotSizeLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_snapshotSizeLock, 0, 1 ) == 1") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
SV_WriteEntityFieldNumbers
==============
*/

void __fastcall SV_WriteEntityFieldNumbers(double _XMM0_8, double _XMM1_8, double _XMM2_8)
{
  const char *v3; 
  __int64 v4; 
  signed int v5; 
  unsigned int *v6; 
  volatile int *v7; 
  int v8; 
  const dvar_t *v9; 
  int v10; 
  __int64 v11; 
  __int64 handle; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  const char *EntityTypeName; 
  __int64 i; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  volatile int (*v27)[575]; 
  int v28; 
  __int64 v29; 
  bool v30; 
  const NetFieldList *v31; 
  NetField *array; 
  unsigned int count; 
  int v34; 
  volatile int (*v35)[575]; 
  __int64 v36; 
  int BitCount; 
  int v38; 
  unsigned int v39; 
  volatile int *v40; 
  int v41; 
  int v42; 
  const char *v43; 
  int v44; 
  unsigned int v45; 
  unsigned int *v46; 
  unsigned int v47; 
  unsigned int *v48; 
  unsigned int *v49; 
  unsigned int v50; 
  volatile int *v51; 
  __int64 v52; 
  int v53; 
  __int64 v54; 
  unsigned int v55; 
  unsigned int *v56; 
  __int64 v57; 
  unsigned int j; 
  __int64 v59; 
  __int64 v60; 
  unsigned int *v61; 
  __int64 v62; 
  unsigned int k; 
  unsigned int v64; 
  volatile int *v65; 
  unsigned int v66; 
  unsigned int *v67; 
  unsigned int v68; 
  volatile int *v69; 
  unsigned int v70; 
  volatile __int64 *v71; 
  __int64 v72; 
  __int64 v73; 
  const NetFieldList *NetFieldListForNetFieldType; 
  unsigned int *v82; 
  unsigned int v83; 
  __int64 v84; 
  __int64 v85; 
  unsigned int *v86; 
  char *fmtc; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  __int64 v91; 
  __int64 v92; 
  __int64 v93; 
  volatile int (*v94)[575]; 
  bool estimate; 
  unsigned int v96; 
  fileHandle_t h; 
  NetField *field; 

  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    h.handle.handle = (__int64)FS_FOpenFileWrite((fileHandle_t *)&stru_1441052F8, v3);
    if ( h.handle.handle != -1 )
    {
      v4 = 255i64;
      v5 = s_totalBitsUsedForServerCommands + s_bitsUsedForPlayerstates[9];
      v6 = (unsigned int *)s_bitsUsedPerEType;
      v7 = s_bitsUsedPerEType;
      do
      {
        v8 = *v7++;
        v5 += v8;
        --v4;
      }
      while ( v4 );
      v9 = DVARBOOL_sv_sendSnapshotsToBots;
      v10 = 1;
      if ( v5 > 1 )
        v10 = v5;
      if ( !DVARBOOL_sv_sendSnapshotsToBots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_sendSnapshotsToBots") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      v11 = v9->current.color[0];
      handle = h.handle.handle;
      FS_Printf(h, "Bots simulation: %d\n", v11);
      FS_Printf((fileHandle_t)handle, "Total data sent: %i\n", (unsigned int)v10);
      FS_Printf((fileHandle_t)handle, "Bits used per entity type: (format: bitsUsed - entityType)\n");
      v13 = 0;
      v14 = 0i64;
      do
      {
        if ( *v6 )
        {
          v15 = 100i64 * (int)*v6 / v10;
          if ( v13 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,unsigned int>(unsigned int)", "signed", (__int16)v13, "unsigned", v14) )
            __debugbreak();
          EntityTypeName = BG_GetEntityTypeName((const entityType_s)v13);
          FS_Printf(h, "%18u - %s (%zi%%)\n", *v6, EntityTypeName, v15);
        }
        ++v13;
        ++v14;
        ++v6;
      }
      while ( v13 < 0xFF );
      FS_Printf(h, "%18u - Server commands (%zi%%)\n", s_totalBitsUsedForServerCommands, 100i64 * (int)s_totalBitsUsedForServerCommands / v10);
      FS_Printf(h, "%18u - Player states (%zi%%)\n", (unsigned int)s_bitsUsedForPlayerstates[9], 100i64 * (int)s_bitsUsedForPlayerstates[9] / v10);
      for ( i = 0i64; i < 9; ++i )
      {
        v18 = 100i64 * (int)s_bitsUsedForPlayerstates[i] / v10;
        if ( i < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 2071, ASSERT_TYPE_ASSERT, "(segment >= PLAYERSTATE_SEGMENT_FIRST)", (const char *)&queryFormat, "segment >= PLAYERSTATE_SEGMENT_FIRST") )
          __debugbreak();
        fmtc = (char *)v18;
        v19 = h.handle.handle;
        FS_Printf(h, "  * %18u - Player state %s (%zi%%)\n", (unsigned int)s_bitsUsedForPlayerstates[i], s_psSegmentShortNames[i], (size_t)fmtc);
      }
      FS_Printf((fileHandle_t)v19, "\n\n");
      FS_Printf(h, "PS origin and velocity sent due to client prediction error: %i\n", (unsigned int)s_originsSentDueToPredicitonError);
      v20 = h.handle.handle;
      FS_Printf(h, "PS origin and velocity sent due to server time mismatch: %i\n", (unsigned int)s_originsSentDueToServerTimeMismatch);
      FS_Printf((fileHandle_t)v20, "\n\n");
      __asm
      {
        vcvttss2si r9d, cs:s_stdSnapshotDeviation
        vcvttss2si r8d, cs:s_avgSnapshotSize
      }
      LODWORD(fmt) = s_maxSnapshotSize;
      FS_Printf((fileHandle_t)v20, "Avg Snapshot size: %i bytes, std deviation: %i bytes, max snapshot size: %i bytes\n", _R8, _R9, fmt);
      v23 = 0;
      if ( s_numPacketsFragmented )
        v24 = s_totalFragmentedPacketsCompressedSize / s_numPacketsFragmented;
      else
        LODWORD(v24) = 0;
      if ( s_numPacketsFragmented )
        v25 = s_totalFragmentedPacketsOriginalSize / s_numPacketsFragmented;
      else
        LODWORD(v25) = 0;
      LODWORD(fmta) = v24;
      v26 = h.handle.handle;
      FS_Printf(h, "Num Packets Fragmented: %lld, avg original size %d, avg compressed size %d\n", s_numPacketsFragmented, (unsigned int)v25, fmta);
      v93 = 0i64;
      v27 = s_networkEntityFieldsChanged;
      v94 = s_networkEntityFieldsChanged;
      v28 = 0;
      v29 = 0i64;
      v30 = 1;
      do
      {
        if ( !v30 )
        {
          LODWORD(v92) = 34;
          LODWORD(v91) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 860, ASSERT_TYPE_ASSERT, "(unsigned)( packetEntityType ) < (unsigned)( ANALYZE_DATATYPE_ENTITYTYPE_COUNT )", "packetEntityType doesn't index ANALYZE_DATATYPE_ENTITYTYPE_COUNT\n\t%i not in [0, %i)", v91, v92) )
            __debugbreak();
        }
        FS_Printf((fileHandle_t)v26, "%s fields changed: (format fieldnum: timeschanged)\n", s_analyzeEntityTypeNames[v29]);
        v31 = s_netFieldListsForPacketEntityType[v29];
        array = (NetField *)v31->array;
        field = (NetField *)v31->array;
        if ( v28 >= 30 )
        {
          count = v31->count;
        }
        else
        {
          if ( (unsigned int)(v28 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v28, "signed", v29) )
            __debugbreak();
          count = MSG_GetNetFieldsCountForEntityType((const entityType_s)v28);
        }
        v96 = count;
        v34 = 0;
        if ( !count )
          goto LABEL_42;
        v35 = v27;
        v36 = count;
        do
        {
          BitCount = MSG_GetBitCount(&estimate, NULL, NULL, array);
          v38 = *(_DWORD *)v35;
          v35 = (volatile int (*)[575])((char *)v35 + 4);
          ++array;
          v34 += BitCount * v38;
          --v36;
        }
        while ( v36 );
        v26 = h.handle.handle;
        count = v96;
        array = field;
        if ( !v34 )
LABEL_42:
          v34 = 1;
        v39 = 0;
        if ( count )
        {
          v40 = s_networkEntityFieldsChanged[v29];
          do
          {
            v41 = MSG_GetBitCount(&estimate, NULL, NULL, array);
            LODWORD(fmtb) = *v40;
            v42 = v41;
            FS_Printf(h, "%i (%s): %u", v39, array->name, fmtb);
            if ( *v40 )
            {
              v43 = (char *)&queryFormat.fmt + 3;
              if ( estimate )
                v43 = " [estimated]";
              v44 = v42 * *v40;
              v26 = h.handle.handle;
              FS_Printf(h, " (%i%%%s)", (unsigned int)(100 * v44 / v34), v43);
              if ( array->changeHints == 1 && v39 )
                FS_Printf((fileHandle_t)v26, " (marked as NEVER_CHANGES and it changed!)");
            }
            else
            {
              v26 = h.handle.handle;
            }
            FS_Printf((fileHandle_t)v26, "\n");
            ++v39;
            ++v40;
            ++array;
          }
          while ( v39 < v96 );
          v29 = v93;
          v23 = 0;
        }
        FS_Printf((fileHandle_t)v26, "\n\n");
        v27 = v94 + 1;
        ++v29;
        ++v94;
        ++v28;
        v93 = v29;
        v30 = (unsigned int)v28 < 0x22;
      }
      while ( v28 < 34 );
      FS_Printf((fileHandle_t)v26, "\n\nUsercmd deltas: (format fieldnum: timeschanged)\n");
      MSG_UserCmd_PrintCommandReadCounts((const fileHandle_t)v26);
      FS_Printf((fileHandle_t)v26, "\n\nCommand Predict deltas: (format fieldnum: timeschanged)\n");
      MSG_UserCmd_PrintPredictReadCounts((const fileHandle_t)v26);
      FS_Printf((fileHandle_t)v26, "\n\nMovement Dir deltas: (delta: times)\n");
      v45 = 0;
      v46 = (unsigned int *)s_movementDirDelta;
      do
      {
        if ( *v46 )
          FS_Printf(h, "%i: %i times\n", v45 - 256, *v46);
        ++v45;
        ++v46;
      }
      while ( v45 < 0x201 );
      FS_Printf(h, "\n\nAngle deltas:\n");
      v47 = 0;
      v48 = (unsigned int *)s_angleDeltaBits;
      do
      {
        if ( *v48 )
          FS_Printf(h, "%i bits: %i times\n", v47, *v48);
        ++v47;
        ++v48;
      }
      while ( v47 < 0xD );
      FS_Printf(h, "Angle full sends: %i\n", (unsigned int)s_viewDirFullSends);
      v49 = (unsigned int *)s_eventSeqFull;
      v50 = 0;
      v51 = s_eventSeqFull;
      v52 = 9i64;
      do
      {
        v53 = *v51++;
        v50 += v53;
        --v52;
      }
      while ( v52 );
      v54 = h.handle.handle;
      FS_Printf(h, "\n\nEvent sequence delta sends: [0]=%i count: %zu\n", (unsigned int)s_eventSeqDelta[0], 9ui64);
      FS_Printf((fileHandle_t)v54, "Event sequence full sends: %i\n", v50);
      FS_Printf((fileHandle_t)v54, "Event sequence delta send breakdown:\n");
      v55 = 0;
      v56 = (unsigned int *)s_eventSeqDelta;
      do
      {
        v57 = h.handle.handle;
        FS_Printf(h, "Event sequence delta sends - %i bits needed: %i\n", v55++, *v56++);
      }
      while ( v55 < 9 );
      FS_Printf((fileHandle_t)v57, "Event sequence full send breakdown:\n");
      for ( j = 0; j < 9; ++j )
      {
        v59 = h.handle.handle;
        FS_Printf(h, "Event sequence full sends - %i bits needed: %i\n", j, *v49++);
      }
      FS_Printf((fileHandle_t)v59, "\n\nEvent data sends\n");
      FS_Printf(h, "Events sent total: %d\n", (unsigned int)s_eventsSent);
      FS_Printf(h, "Event types sent: %d\n", (unsigned int)s_eventTypesSent);
      FS_Printf(h, "Event parms sent: %d\n", (unsigned int)s_eventParmsSent);
      FS_Printf(h, "Event type bits used: %d\n", (unsigned int)s_bitsUsedForEventTypes);
      FS_Printf(h, "Event parm bits used: %d\n", (unsigned int)s_bitsUsedForEventParms);
      FS_Printf(h, "Event overhead bits used: %d\n", (unsigned int)s_bitsUsedForEventOverhead);
      FS_Printf(h, "Event bits used total: %d\n", (unsigned int)s_bitsUsedForEvents);
      FS_Printf(h, "\n\nX/Y Origin Deltas:\n");
      v60 = 0i64;
      v61 = (unsigned int *)s_originDeltaBits;
      v62 = 0i64;
      for ( k = 0; k < 8; ++k )
      {
        if ( *v61 )
        {
          v60 += (int)(8 * *v61);
          v62 += (int)*v61;
          FS_Printf(h, "%i bits: %i times\n", k, *v61);
        }
        ++v61;
      }
      FS_Printf(h, "\n\nX/Y Origin Full Sends:\n");
      v64 = 0;
      v65 = s_originFullBits;
      do
      {
        if ( *v65 )
        {
          v60 += 19 * *v65;
          v62 += *(int *)v65;
          LODWORD(fmtb) = *v65;
          FS_Printf(h, "sent as full %i bits, but number only needed %i bits: %i times\n", 18i64, v64, fmtb);
        }
        ++v64;
        ++v65;
      }
      while ( v64 < 0x13 );
      FS_Printf(h, "\n\nZ Origin Deltas:\n");
      v66 = 0;
      v67 = (unsigned int *)s_originZDeltaBits;
      do
      {
        if ( *v67 )
        {
          v60 += (int)(8 * *v67);
          v62 += (int)*v67;
          FS_Printf(h, "%i bits: %i times\n", v66, *v67);
        }
        ++v66;
        ++v67;
      }
      while ( v66 < 8 );
      FS_Printf(h, "\n\nZ Origin Full Sends:\n");
      v68 = 0;
      v69 = s_originZFullBits;
      do
      {
        if ( *v69 )
        {
          v60 += 17 * *v69;
          v62 += *(int *)v69;
          LODWORD(fmtb) = *v69;
          FS_Printf(h, "sent as full %i bits, but number only needed %i bits: %i times\n", 16i64, v68, fmtb);
        }
        ++v68;
        ++v69;
      }
      while ( v68 < 0x11 );
      FS_Printf(h, "\n\nOrigin Exp Golomb Sends:\n");
      v70 = 0;
      v71 = s_originExpGolombBits;
      v72 = 0i64;
      do
      {
        if ( *v71 )
        {
          v60 += v72 * *v71;
          v62 += *v71;
          v73 = h.handle.handle;
          FS_Printf(h, "%i bits: %lld times\n", v70, *v71);
        }
        else
        {
          v73 = h.handle.handle;
        }
        ++v70;
        ++v72;
        ++v71;
      }
      while ( v70 < 0x48 );
      FS_Printf((fileHandle_t)v73, "\nOrigin Extra Precision Bits: %d\n", 0i64);
      FS_Printf((fileHandle_t)v73, "Origin Total Sends: %lld\n", v62);
      FS_Printf((fileHandle_t)v73, "Origin Total Bits: %lld\n", v60);
      if ( v62 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, rsi
          vcvtsi2ss xmm0, xmm0, rdi
          vdivss  xmm2, xmm1, xmm0
        }
      }
      else
      {
        __asm { vxorps  xmm2, xmm2, xmm2 }
      }
      __asm
      {
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r8, xmm2
      }
      FS_Printf((fileHandle_t)v73, "Origin Average Bits: %f\n", *(double *)&_XMM2);
      FS_Printf((fileHandle_t)v73, "\nLast PS field changed in snapshot:\n");
      NetFieldListForNetFieldType = MSG_GetNetFieldListForNetFieldType(NET_FIELD_TYPE_PLAYERSTATE);
      v82 = (unsigned int *)s_playerStateFieldsChanged;
      v83 = 0;
      v84 = 0i64;
      do
      {
        v85 = h.handle.handle;
        if ( *v82 )
          FS_Printf(h, "%10i times - field %i [%s]\n", *v82, v83, NetFieldListForNetFieldType->array[v84].name);
        ++v83;
        ++v84;
        ++v82;
      }
      while ( v83 < 0x23F );
      FS_Printf((fileHandle_t)v85, "\n\n");
      skippedFieldsTracking<575>::PrintData(&s_skippedFieldsTrackingPlayerState, (fileHandle_t)v85, "PlayerState");
      FS_Printf((fileHandle_t)v85, "\n\n");
      skippedFieldsTracking<118>::PrintData(&s_skippedFieldsTrackingClientState, (fileHandle_t)v85, "ClientState");
      FS_Printf((fileHandle_t)v85, "\n\n");
      skippedFieldsTracking<68>::PrintData(&s_skippedFieldsTrackingEntityState, (fileHandle_t)v85, "EntityState");
      FS_Printf((fileHandle_t)v85, "\n\n");
      skippedFieldsTracking<46>::PrintData(&s_skippedFieldsTrackingHudElem, (fileHandle_t)v85, "Hud Elem");
      FS_Printf((fileHandle_t)v85, "\n\n");
      FS_Printf((fileHandle_t)v85, "\n\nHuffman data:\n");
      v86 = huffBytesSeen;
      do
        FS_Printf((fileHandle_t)v85, "\t%i,\t\t
      while ( v23 < 0x100 );
      FS_FCloseFile((fileHandle_t)v85);
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
  const dvar_t *v2; 
  int *v3; 
  signed int v4; 
  unsigned int v5; 
  int v6; 
  entityType_s v7; 
  const char *EntityTypeName; 
  int v9; 
  __int64 v10; 
  int v11; 
  const char *v12; 
  bool v13; 
  __int64 v14; 
  int v15; 
  bool v16; 
  __int64 v17; 
  volatile int (*v18)[575]; 
  const NetFieldList *v19; 
  NetField *array; 
  unsigned int count; 
  int v22; 
  volatile int (*v23)[575]; 
  __int64 v24; 
  int BitCount; 
  int v26; 
  unsigned int v27; 
  int *v28; 
  int v29; 
  int v30; 
  bool v31; 
  const char *name; 
  bool v33; 
  __int64 v34; 
  volatile int *v35; 
  __int64 v36; 
  int v37; 
  int v38; 
  volatile int *v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  bool v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  unsigned int v52; 
  unsigned int v53; 
  int v54; 
  bool v57; 
  __int64 v62; 
  __int64 v63; 
  bool estimate; 
  bool v65; 
  int v66; 
  int v67; 
  unsigned int v68; 
  int v69[2]; 
  int v70[2]; 
  int v71; 
  int totalFieldsSkipped; 
  int totaTimesSkipped; 
  char *value; 
  NetField *field; 
  DLogContext v76; 
  DLogContext v77; 
  DLogContext v78; 
  DLogContext context; 
  char buffer[4096]; 
  char v81[4096]; 
  char v82[4096]; 
  char v83[4096]; 

  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    v2 = DVARBOOL_online_blackbox_send_snapshot_bw_data;
    if ( !DVARBOOL_online_blackbox_send_snapshot_bw_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_blackbox_send_snapshot_bw_data") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      v3 = (int *)s_bitsUsedPerEType;
      v4 = s_totalBitsUsedForServerCommands + s_bitsUsedForPlayerstates[9];
      __asm { vmovaps [rsp+4660h+var_30], xmm6 }
      v5 = 0;
      __asm { vmovaps [rsp+4660h+var_40], xmm7 }
      do
      {
        if ( *v3 )
        {
          v6 = *v3;
          v7 = truncate_cast<enum entityType_s,unsigned int>(v5);
          EntityTypeName = BG_GetEntityTypeName(v7);
          DLog_RecordEvent<char const *,char const *,char const *,long>(0i64, "online_bandwidth_sv_entity_bits", "entity_type", EntityTypeName, "bits_used", v6);
          v4 += *v3;
        }
        ++v5;
        ++v3;
      }
      while ( v5 < 0xFF );
      v9 = 1;
      v10 = 1i64;
      if ( v4 > 1 )
        v9 = v4;
      v71 = v9;
      do
      {
        v11 = s_bitsUsedForPlayerstates[v10];
        if ( v10 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 2051, ASSERT_TYPE_ASSERT, "(segment >= PLAYERSTATE_SEGMENT_FIRST)", (const char *)&queryFormat, "segment >= PLAYERSTATE_SEGMENT_FIRST") )
          __debugbreak();
        v12 = s_psSegmentFullNames[v10];
        if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) )
        {
          if ( DLog_IsActive() )
          {
            v13 = DLog_BeginEvent(&context, "online_bandwidth_sv_ps_breakdown");
            context.autoEndEvent = 1;
            if ( v13 && DLog_String(&context, "type", v12, 0) && DLog_Int32(&context, "bits_used", v11) )
              DLog_RecordContext(&context);
          }
          else
          {
            context.error = DLOG_ERROR_NOT_ACTIVE;
          }
        }
        v10 += 2i64;
      }
      while ( v10 < 9 );
      LODWORD(v14) = 0;
      v15 = 0;
      *(_QWORD *)v69 = 0i64;
      v66 = 0;
      v16 = 1;
      *(_QWORD *)v70 = s_networkEntityFieldsChanged;
      v17 = 0i64;
      v18 = s_networkEntityFieldsChanged;
      do
      {
        if ( !v16 )
        {
          LODWORD(v63) = 34;
          LODWORD(v62) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_profile_mp.cpp", 860, ASSERT_TYPE_ASSERT, "(unsigned)( packetEntityType ) < (unsigned)( ANALYZE_DATATYPE_ENTITYTYPE_COUNT )", "packetEntityType doesn't index ANALYZE_DATATYPE_ENTITYTYPE_COUNT\n\t%i not in [0, %i)", v62, v63) )
            __debugbreak();
        }
        value = (char *)s_analyzeEntityTypeNames[v17];
        v19 = s_netFieldListsForPacketEntityType[v17];
        array = (NetField *)v19->array;
        field = (NetField *)v19->array;
        if ( v15 >= 30 )
        {
          count = v19->count;
        }
        else
        {
          if ( (unsigned int)(v15 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v15, "signed", v17) )
            __debugbreak();
          count = MSG_GetNetFieldsCountForEntityType((const entityType_s)v15);
        }
        v68 = count;
        v22 = 0;
        if ( !count )
          goto LABEL_39;
        v23 = v18;
        v24 = count;
        do
        {
          BitCount = MSG_GetBitCount(&estimate, NULL, NULL, array);
          v26 = *(_DWORD *)v23;
          v23 = (volatile int (*)[575])((char *)v23 + 4);
          ++array;
          v22 += BitCount * v26;
          --v24;
        }
        while ( v24 );
        count = v68;
        array = field;
        v67 = v22;
        if ( !v22 )
LABEL_39:
          v67 = 1;
        v27 = 0;
        if ( count )
        {
          v28 = (int *)s_networkEntityFieldsChanged[v17];
          do
          {
            v29 = MSG_GetBitCount(&estimate, NULL, NULL, array);
            v30 = *v28;
            v31 = estimate;
            v65 = array->changeHints == 1;
            name = array->name;
            if ( DLog_IsActive() && DLog_CreateContext(&v77, 0i64, v81, 4096) )
            {
              if ( DLog_IsActive() )
              {
                v33 = DLog_BeginEvent(&v77, "online_bandwidth_sv_ent_fields");
                v77.autoEndEvent = 1;
                if ( v33 && DLog_UInt32(&v77, "index", v27) && DLog_String(&v77, "entity_name", value, 0) && DLog_String(&v77, "field_name", name, 0) && DLog_Int32(&v77, "times_changed", v30) && DLog_Int32(&v77, "bits", v29) && DLog_Int32(&v77, "total_data", v67) && DLog_Bool(&v77, "estimate", v31) && DLog_Bool(&v77, "never_changes", v65) )
                  DLog_RecordContext(&v77);
              }
              else
              {
                v77.error = DLOG_ERROR_NOT_ACTIVE;
              }
            }
            ++v27;
            ++v28;
            ++array;
          }
          while ( v27 < v68 );
          v17 = *(_QWORD *)v69;
          LODWORD(v14) = 0;
        }
        v15 = v66 + 1;
        v18 = (volatile int (*)[575])(*(_QWORD *)v70 + 2300i64);
        v66 = v15;
        ++v17;
        *(_QWORD *)v70 += 2300i64;
        *(_QWORD *)v69 = v17;
        v16 = (unsigned int)v15 < 0x22;
      }
      while ( v15 < 34 );
      v34 = 9i64;
      v35 = s_eventSeqFull;
      v36 = 9i64;
      v37 = 0;
      do
      {
        v38 = *v35++;
        v37 += v38;
        --v36;
      }
      while ( v36 );
      v39 = s_eventSeqDelta;
      do
      {
        v40 = *v39++;
        v14 = (unsigned int)(v40 + v14);
        --v34;
      }
      while ( v34 );
      v41 = s_bitsUsedForEventOverhead;
      v42 = s_bitsUsedForEventParms;
      *(_QWORD *)v69 = v14;
      v43 = s_bitsUsedForEventTypes;
      v44 = s_eventParmsSent;
      v45 = s_eventTypesSent;
      v46 = s_eventsSent;
      v66 = s_bitsUsedForEvents;
      if ( DLog_IsActive() && DLog_CreateContext(&v78, 0i64, v82, 4096) && DLog_IsActive() )
      {
        v47 = DLog_BeginEvent(&v78, "online_bandwidth_sv_entity_details");
        v78.autoEndEvent = 1;
        if ( v47 && DLog_Int32(&v78, "seq_delta_sends", v69[0]) && DLog_Int32(&v78, "seq_full_sends", v37) && DLog_Int32(&v78, "sent_total", v46) && DLog_Int32(&v78, "types_sent", v45) && DLog_Int32(&v78, "parms_sent", v44) && DLog_Int32(&v78, "type_bits_used", v43) && DLog_Int32(&v78, "parm_bits_used", v42) && DLog_Int32(&v78, "overhead_bits_used", v41) && DLog_Int32(&v78, "bits_used_total", v66) )
          DLog_RecordContext(&v78);
      }
      v69[0] = s_viewDirFullSends;
      v70[0] = s_skippedFieldsTrackingHudElem.totaTimesSkipped;
      LODWORD(value) = s_skippedFieldsTrackingHudElem.totalFieldsSkipped;
      totaTimesSkipped = s_skippedFieldsTrackingEntityState.totaTimesSkipped;
      totalFieldsSkipped = s_skippedFieldsTrackingEntityState.totalFieldsSkipped;
      v67 = s_skippedFieldsTrackingClientState.totaTimesSkipped;
      v48 = s_skippedFieldsTrackingPlayerState.totaTimesSkipped;
      v49 = s_skippedFieldsTrackingPlayerState.totalFieldsSkipped;
      v50 = s_originsSentDueToServerTimeMismatch;
      v51 = s_originsSentDueToPredicitonError;
      v52 = s_bitsUsedForPlayerstates[9];
      v53 = s_totalBitsUsedForServerCommands;
      v54 = s_maxSnapshotSize;
      __asm
      {
        vmovss  xmm7, cs:s_stdSnapshotDeviation
        vmovss  xmm6, cs:s_avgSnapshotSize
      }
      v66 = s_skippedFieldsTrackingClientState.totalFieldsSkipped;
      if ( DLog_IsActive() && DLog_CreateContext(&v76, 0i64, v83, 4096) && DLog_IsActive() )
      {
        v57 = DLog_BeginEvent(&v76, "online_bandwidth_sv_overall");
        v76.autoEndEvent = 1;
        if ( v57 && DLog_Int32(&v76, "total_bits", v71) && DLog_UInt32(&v76, "server_cmd_bits", v53) && DLog_UInt32(&v76, "player_state_bits", v52) && DLog_Int32(&v76, "origins_sent_prediction_error", v51) && DLog_Int32(&v76, "origins_sent_server_time_mismatch", v50) )
        {
          __asm { vmovaps xmm2, xmm6; value }
          if ( DLog_Float32(&v76, "avg_snapshot_size_bytes", *(float *)&_XMM2) )
          {
            __asm { vmovaps xmm2, xmm7; value }
            if ( DLog_Float32(&v76, "std_dev_snapshot_size_bytes", *(float *)&_XMM2) && DLog_Int32(&v76, "max_snapshot_size_bytes", v54) && DLog_Int32(&v76, "player_state_fields_skipped", v49) && DLog_Int32(&v76, "player_state_times_skipped", v48) && DLog_Int32(&v76, "client_state_fields_skipped", v66) && DLog_Int32(&v76, "client_state_times_skipped", v67) && DLog_Int32(&v76, "entity_fields_skipped", totalFieldsSkipped) && DLog_Int32(&v76, "entity_fields_times_skipped", totaTimesSkipped) && DLog_Int32(&v76, "hudelem_fields_skipped", (int)value) && DLog_Int32(&v76, "hudelem_fields_times_skipped", v70[0]) && DLog_Int32(&v76, "angle_full_sends", v69[0]) )
              DLog_RecordContext(&v76);
          }
        }
      }
      __asm
      {
        vmovaps xmm6, [rsp+4660h+var_30]
        vmovaps xmm7, [rsp+4660h+var_40]
      }
    }
  }
}

