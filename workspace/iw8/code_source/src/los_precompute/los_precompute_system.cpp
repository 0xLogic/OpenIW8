/*
==============
LOSPrecomputeSystem::SpawnDynamicNodes
==============
*/

void __fastcall LOSPrecomputeSystem::SpawnDynamicNodes(LOSPrecomputeSystem *this)
{
  ?SpawnDynamicNodes@LOSPrecomputeSystem@@QEAAXXZ(this);
}

/*
==============
LOSPrecomputeSystem::LoadDynamicPathNodeDeclarationFile
==============
*/

void __fastcall LOSPrecomputeSystem::LoadDynamicPathNodeDeclarationFile(LOSPrecomputeSystem *this)
{
  ?LoadDynamicPathNodeDeclarationFile@LOSPrecomputeSystem@@QEAAXXZ(this);
}

/*
==============
LOSPrecomputeSystem::AllocateTimingDataTable
==============
*/

void __fastcall LOSPrecomputeSystem::AllocateTimingDataTable(LOSPrecomputeSystem *this, HunkUser *hunkUser)
{
  ?AllocateTimingDataTable@LOSPrecomputeSystem@@QEAAXPEAUHunkUser@@@Z(this, hunkUser);
}

/*
==============
LOSPrecomputeSystem::GetAllocationSize
==============
*/

unsigned int __fastcall LOSPrecomputeSystem::GetAllocationSize(LOSPrecomputeSystem *this)
{
  return ?GetAllocationSize@LOSPrecomputeSystem@@QEBAIXZ(this);
}

/*
==============
LOSPrecomputeSystem::ReleaseTimingDataTable
==============
*/

void __fastcall LOSPrecomputeSystem::ReleaseTimingDataTable(LOSPrecomputeSystem *this)
{
  ?ReleaseTimingDataTable@LOSPrecomputeSystem@@QEAAXXZ(this);
}

/*
==============
LOSPrecomputeSystem::LoadTimingDataFromFile
==============
*/

bool __fastcall LOSPrecomputeSystem::LoadTimingDataFromFile(LOSPrecomputeSystem *this, const char *mapname)
{
  return ?LoadTimingDataFromFile@LOSPrecomputeSystem@@QEAA_NPEBD@Z(this, mapname);
}

/*
==============
LOSPrecomputeSystem::IsSystemEnabled
==============
*/

bool __fastcall LOSPrecomputeSystem::IsSystemEnabled(LOSPrecomputeSystem *this)
{
  return ?IsSystemEnabled@LOSPrecomputeSystem@@QEBA_NXZ(this);
}

/*
==============
LOSPrecomputeSystem::IsDataLoaded
==============
*/

bool __fastcall LOSPrecomputeSystem::IsDataLoaded(LOSPrecomputeSystem *this)
{
  return ?IsDataLoaded@LOSPrecomputeSystem@@QEBA_NXZ(this);
}

/*
==============
LOSPrecomputeSystem::CacheSpawnNodeList
==============
*/

void __fastcall LOSPrecomputeSystem::CacheSpawnNodeList(LOSPrecomputeSystem *this, unsigned __int16 *pathNodeIndexList, unsigned int pathNodeListCount)
{
  ?CacheSpawnNodeList@LOSPrecomputeSystem@@QEAAXPEAGI@Z(this, pathNodeIndexList, pathNodeListCount);
}

/*
==============
LOSPrecomputeSystem::AllocateTimingDataTable
==============
*/
void LOSPrecomputeSystem::AllocateTimingDataTable(LOSPrecomputeSystem *this, HunkUser *hunkUser)
{
  const dvar_t *VarByName; 
  const dvar_t *v5; 
  unsigned int v6; 
  int visDistDataSize; 
  unsigned int v8; 
  char v9; 
  unsigned int v10; 
  unsigned __int8 *v11; 
  __int64 m_nodeCount; 
  unsigned __int8 *m_allocatedStorageBuffer; 
  size_t m_allocatedNodesStorageSizeInBytes; 
  char *fmt; 

  VarByName = Dvar_FindVarByName("LSQOPROPRS");
  if ( VarByName && VarByName->current.enabled && pathData.visDistDataSize || (v5 = DVARBOOL_dev_verifyLOSDataFile) != NULL && (Dvar_CheckFrontendServerThread(DVARBOOL_dev_verifyLOSDataFile), v5->current.enabled) )
  {
    if ( this->m_timingData.m_allocatedDataBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 245, ASSERT_TYPE_ASSERT, "(!m_timingData.m_allocatedDataBuffer)", (const char *)&queryFormat, "!m_timingData.m_allocatedDataBuffer") )
      __debugbreak();
    v6 = pathData.fixedNodeCount + this->m_timingData.m_dynamicNodeCountFromFile;
    if ( !pathData.visDistDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 265, ASSERT_TYPE_ASSERT, "(pathData.visDistDataSize)", (const char *)&queryFormat, "pathData.visDistDataSize") )
      __debugbreak();
    visDistDataSize = pathData.visDistDataSize;
    v8 = pathData.visDistDataSize;
    v9 = LOBYTE(pathData.visDistDataSize) - 6;
    this->m_timingData.m_allocatedNodesStorageSizeInBytes = pathData.visDistDataSize - 6;
    if ( (v9 & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 269, ASSERT_TYPE_ASSERT, "(IsAligned( m_timingData.m_allocatedNodesStorageSizeInBytes, (2) ))", (const char *)&queryFormat, "IsAligned( m_timingData.m_allocatedNodesStorageSizeInBytes, LOS_SIZEOF_BYTES_NEEDED_FOR_DATA_TIMING_ITEM )") )
      __debugbreak();
    v10 = visDistDataSize + 1;
    LOSPrecomputeSystem::LoadDynamicPathNodeDeclarationFile(this);
    this->m_timingData.m_nodeCount = truncate_cast<unsigned short,unsigned int>(v6);
    v11 = (unsigned __int8 *)Mem_HunkUser_AllocInternal(hunkUser, v10, 4ui64, "LOSPrecomputeSystem::AllocateTimingDataTable");
    m_nodeCount = this->m_timingData.m_nodeCount;
    this->m_timingData.m_allocatedStorageBuffer = v11;
    LODWORD(fmt) = this->m_timingData.m_dynamicNodeCountFromFile;
    Com_Printf(16, "\n==== Allocation ====: Line Of Sight system allocated %d bytes to store path node data for %d nodes (%d dynamically defined nodes), verify this is the size of the visData file.\n\n", v8, m_nodeCount, fmt);
    m_allocatedStorageBuffer = this->m_timingData.m_allocatedStorageBuffer;
    m_allocatedNodesStorageSizeInBytes = this->m_timingData.m_allocatedNodesStorageSizeInBytes;
    this->m_timingData.m_pFileDataHeader = (visDistanceDataFileHeader *)m_allocatedStorageBuffer;
    this->m_timingData.m_allocatedStorageSizeInBytes = v10;
    *(_WORD *)&this->m_timingData.m_allocatedDataBuffer = 1;
    this->m_timingData.m_pathTimingStorage = (unsigned __int16 *)(m_allocatedStorageBuffer + 6);
    this->m_timingData.m_pathQuantizationAmount = 10;
    memset_0(m_allocatedStorageBuffer + 6, 255, m_allocatedNodesStorageSizeInBytes);
  }
}

/*
==============
LOSPrecomputeSystem::CacheSpawnNodeList
==============
*/
void LOSPrecomputeSystem::CacheSpawnNodeList(LOSPrecomputeSystem *this, unsigned __int16 *pathNodeIndexList, unsigned int pathNodeListCount)
{
  __int64 v4; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  char *v13; 
  char *v14; 
  char v15; 
  unsigned __int16 v16; 
  double parentname; 
  double calledFromScript; 
  double v26; 
  vec3_t origin; 
  vec3_t angles; 
  char _Buffer[32]; 

  v4 = pathNodeListCount;
  if ( pathNodeListCount > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 704, ASSERT_TYPE_ASSERT, "(pathNodeListCount <= 2048)", (const char *)&queryFormat, "pathNodeListCount <= MAX_SPAWN_PATHNODE_LIST") )
    __debugbreak();
  v7 = 0i64;
  if ( (_DWORD)v4 )
  {
    v8 = v4;
    do
    {
      v9 = 0;
      if ( (_DWORD)v7 )
      {
        while ( *pathNodeIndexList != this->m_timingData.m_spawnPathNodeIndexList[v9] )
        {
          if ( ++v9 >= (unsigned int)v7 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        v10 = (unsigned int)v7;
        v7 = (unsigned int)(v7 + 1);
        this->m_timingData.m_spawnPathNodeIndexList[v10] = *pathNodeIndexList;
      }
      ++pathNodeIndexList;
      --v8;
    }
    while ( v8 );
  }
  this->m_timingData.m_spawnPathNodeListCount = v7;
  Com_Printf(16, "CacheSpawnNodeList - caching off %d nodes of data for spawn points from script.\n", v7);
  memset_0(this->m_timingData.m_dynamicPathNodeIndexList, 0xFFFF, sizeof(this->m_timingData.m_dynamicPathNodeIndexList));
  v11 = 0;
  this->m_timingData.m_dynamicPathNodesSpawnedCount = 0;
  if ( this->m_timingData.m_dynamicNodeCountFromFile )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_28], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      __asm
      {
        vmovss  dword ptr [rsp+0B8h+origin], xmm6
        vmovss  dword ptr [rsp+0B8h+origin+4], xmm6
        vmovss  dword ptr [rsp+0B8h+origin+8], xmm6
      }
      v13 = this->m_timingData.m_dynamicPathNodeLocations[v11];
      v14 = (char *)(_Buffer - v13);
      __asm
      {
        vmovss  dword ptr [rsp+0B8h+angles], xmm6
        vmovss  dword ptr [rsp+0B8h+angles+4], xmm6
        vmovss  dword ptr [rsp+0B8h+angles+8], xmm6
      }
      do
      {
        v15 = *v13;
        v14[(_QWORD)v13] = *v13;
        ++v13;
      }
      while ( v15 );
      if ( j_sscanf(_Buffer, "(%f, %f, %f)", &origin, &origin.y, &origin.z) == 3 || j_sscanf(_Buffer, "%f, %f, %f", &origin, &origin.y, &origin.z) == 3 )
      {
        v16 = G_SpawnCoverNode(&origin, &angles, 20, 0, (scr_string_t)0, (scr_string_t)0, 0);
        if ( v16 == 0xFFFF )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0B8h+origin+8]
            vmovss  xmm1, dword ptr [rsp+0B8h+origin+4]
            vmovss  xmm2, dword ptr [rsp+0B8h+origin]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+0B8h+var_80], xmm0
            vcvtss2sd xmm1, xmm1, xmm1
            vmovsd  qword ptr [rsp+0B8h+calledFromScript], xmm1
            vcvtss2sd xmm2, xmm2, xmm2
            vmovsd  qword ptr [rsp+0B8h+parentname], xmm2
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 689, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ERROR: coordinate (%f, %f, %f) could not be used to spawn a dynamic pathnode, likely due to being inside a solid!\n", parentname, calledFromScript, v26) )
            __debugbreak();
        }
        else
        {
          this->m_timingData.m_dynamicPathNodeIndexList[this->m_timingData.m_dynamicPathNodesSpawnedCount++] = v16;
        }
      }
      else
      {
        Com_PrintWarning(16, "Can't convert node position %s to a vector!\n", _Buffer);
      }
      ++v11;
    }
    while ( v11 < this->m_timingData.m_dynamicNodeCountFromFile );
    __asm { vmovaps xmm6, [rsp+0B8h+var_28] }
  }
}

/*
==============
LOSPrecomputeSystem::GetAllocationSize
==============
*/
__int64 LOSPrecomputeSystem::GetAllocationSize(LOSPrecomputeSystem *this)
{
  const dvar_t *VarByName; 
  const dvar_t *v2; 

  VarByName = Dvar_FindVarByName("LSQOPROPRS");
  if ( VarByName && VarByName->current.enabled && pathData.visDistDataSize )
    return (pathData.visDistDataSize + 128) & 0xFFFFFF80;
  v2 = DVARBOOL_dev_verifyLOSDataFile;
  if ( DVARBOOL_dev_verifyLOSDataFile )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_dev_verifyLOSDataFile);
    if ( v2->current.enabled )
    {
      if ( !pathData.visDistDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 217, ASSERT_TYPE_ASSERT, "(pathData.visDistDataSize)", (const char *)&queryFormat, "pathData.visDistDataSize") )
        __debugbreak();
      return (pathData.visDistDataSize + 128) & 0xFFFFFF80;
    }
  }
  return 0i64;
}

/*
==============
LOSPrecomputeSystem::IsDataLoaded
==============
*/
_BOOL8 LOSPrecomputeSystem::IsDataLoaded(LOSPrecomputeSystem *this)
{
  return this->m_timingData.m_initializedData;
}

/*
==============
LOSPrecomputeSystem::IsSystemEnabled
==============
*/
bool LOSPrecomputeSystem::IsSystemEnabled(LOSPrecomputeSystem *this)
{
  const dvar_t *VarByName; 

  VarByName = Dvar_FindVarByName("LSQOPROPRS");
  return VarByName && VarByName->current.enabled && pathData.visDistDataSize;
}

/*
==============
LOSPrecomputeSystem::LoadDynamicPathNodeDeclarationFile
==============
*/
void LOSPrecomputeSystem::LoadDynamicPathNodeDeclarationFile(LOSPrecomputeSystem *this)
{
  const dvar_t *v1; 
  unsigned __int64 v3; 
  const dvar_t *v4; 
  int v5; 
  int RowCount; 
  const char *ColumnValueForRow; 
  const char *v8; 
  char *v9; 
  __int64 v10; 
  char v11; 
  __int64 v12; 
  char v13; 
  int v14; 
  const char *i; 
  StringTable *tablePtr; 
  char v17[64]; 

  v1 = DVARSTR_ui_mapname;
  if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v3 = -1i64;
  do
    ++v3;
  while ( *(_BYTE *)(v1->current.integer64 + v3) );
  if ( v3 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 103, ASSERT_TYPE_ASSERT, "(strlen( Dvar_GetString_Internal_DebugName( DVARSTR_ui_mapname, \"ui_mapname\" ) ) < MAX_MAPNAME_LEN)", (const char *)&queryFormat, "strlen( Dvar_GetString( ui_mapname ) ) < MAX_MAPNAME_LEN") )
    __debugbreak();
  v4 = DVARSTR_ui_mapname;
  if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  strcpy(v17, v4->current.string);
  memset_0(this->m_timingData.m_dynamicPathNodeLocations, 0, sizeof(this->m_timingData.m_dynamicPathNodeLocations));
  memset_0(this->m_timingData.m_dynamicPathNodeIndexList, 0xFFFF, sizeof(this->m_timingData.m_dynamicPathNodeIndexList));
  v5 = 0;
  this->m_timingData.m_dynamicNodeCountFromFile = 0;
  this->m_timingData.m_dynamicPathNodesSpawnedCount = 0;
  StringTable_GetAsset("mp/dynamicPathNodes.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 129, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  RowCount = StringTable_GetRowCount(tablePtr);
  if ( RowCount <= 0 )
  {
LABEL_27:
    Com_Printf(16, "No dynamic nodes specified in %s for map %s.\n", "mp/dynamicPathNodes.csv", v17);
  }
  else
  {
    while ( 1 )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v5, 0);
      v8 = ColumnValueForRow;
      if ( *ColumnValueForRow )
      {
        if ( strncmp(ColumnValueForRow, "
          break;
      }
LABEL_26:
      if ( ++v5 >= RowCount )
        goto LABEL_27;
    }
    v9 = v17;
    v10 = 0x7FFFFFFFi64;
    do
    {
      v11 = v9[v8 - v17];
      v12 = v10;
      v13 = *v9++;
      --v10;
      if ( !v12 )
        break;
      if ( v11 != v13 )
        goto LABEL_26;
    }
    while ( v11 );
    v14 = 1;
    for ( i = StringTable_GetColumnValueForRow(tablePtr, v5, 1); *i; i = StringTable_GetColumnValueForRow(tablePtr, v5, v14) )
    {
      while ( *i >= 9u && *i <= 0x20u )
        ++i;
      if ( this->m_timingData.m_dynamicNodeCountFromFile >= 0x40u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 159, ASSERT_TYPE_ASSERT, "(m_timingData.m_dynamicNodeCountFromFile < 64)", (const char *)&queryFormat, "m_timingData.m_dynamicNodeCountFromFile < MAX_DYNAMIC_SPAWNED_NODES") )
        __debugbreak();
      strncpy(this->m_timingData.m_dynamicPathNodeLocations[this->m_timingData.m_dynamicNodeCountFromFile], i, 0x20ui64);
      this->m_timingData.m_dynamicPathNodeLocations[this->m_timingData.m_dynamicNodeCountFromFile++][31] = 0;
      Com_Printf(16, "Loading dynamic node (current dynamic count %d) at [%s] for map [%s]\n", this->m_timingData.m_dynamicNodeCountFromFile, i, v8);
      ++v14;
    }
    Com_Printf(16, "%d dynamic nodes specified in %s for map %s.\n", this->m_timingData.m_dynamicNodeCountFromFile, "mp/dynamicPathNodes.csv", v17);
  }
}

/*
==============
LOSPrecomputeSystem::LoadTimingDataFromFile
==============
*/
bool LOSPrecomputeSystem::LoadTimingDataFromFile(LOSPrecomputeSystem *this, const char *mapname)
{
  bool v2; 
  unsigned __int8 ActiveGameMode; 
  const RawFile *rawfile; 
  unsigned int m_allocatedStorageSizeInBytes; 
  visDistanceDataFileHeader *m_pFileDataHeader; 
  unsigned __int16 nodeCount; 
  char quantizationAmount; 
  visDistanceDataFileHeader *v11; 
  bool result; 
  char *fmt; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  int version; 
  int v19; 
  int v20; 
  unsigned int m_allocatedNodesStorageSizeInBytes; 
  unsigned int v22; 
  char dest[64]; 

  v2 = this->m_timingData.m_allocatedStorageSizeInBytes == 0;
  this->m_timingData.m_initializedData = 0;
  if ( v2 )
    return 0;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode) )
  {
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143E5B170, 0i64, mapname);
    return 0;
  }
  Com_sprintf<64>((char (*)[64])dest, "maps/%s%s.%s", "mp/", mapname, "visDistData");
  rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, dest, 1).rawfile;
  if ( !rawfile || DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, dest) )
  {
    this->m_timingData.m_initializedData = 0;
    Com_PrintError(16, ">>>>> !!!! Missing precomputed los data file [%s] for map [%s] !!!! <<<<<\n", dest, mapname);
    if ( DVARBOOL_dev_verifyLOSDataFile && Dvar_GetBool_Internal_DebugName(DVARBOOL_dev_verifyLOSDataFile, "dev_verifyLOSDataFile") )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E5B270, 642i64, dest, mapname);
    return 0;
  }
  Com_Printf(16, "LoadTimingDataFromFile: reading file %s\n", dest);
  if ( !this->m_timingData.m_allocatedDataBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 447, ASSERT_TYPE_ASSERT, "(m_timingData.m_allocatedDataBuffer)", (const char *)&queryFormat, "m_timingData.m_allocatedDataBuffer") )
    __debugbreak();
  m_allocatedStorageSizeInBytes = this->m_timingData.m_allocatedStorageSizeInBytes;
  if ( rawfile->len > m_allocatedStorageSizeInBytes )
  {
    LODWORD(v14) = this->m_timingData.m_allocatedStorageSizeInBytes;
    LODWORD(fmt) = rawfile->len;
    Com_PrintError(16, ">>>>> !!!! LoadTimingDataFromFile - precomputed los data file [%s] for map [%s] is larger than our buffer size for this map (%d > %d)! Rebuild the visdata for this map. !!!! <<<<<\n", dest, mapname, fmt, v14);
    if ( DVARBOOL_dev_verifyLOSDataFile )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dev_verifyLOSDataFile, "dev_verifyLOSDataFile") )
      {
        v17 = this->m_timingData.m_allocatedStorageSizeInBytes;
        LODWORD(v15) = rawfile->len;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E5B4A0, 643i64, dest, mapname, v15, v17);
      }
    }
    return 0;
  }
  DB_GetRawBuffer(rawfile, (char *)this->m_timingData.m_allocatedStorageBuffer, m_allocatedStorageSizeInBytes);
  m_pFileDataHeader = this->m_timingData.m_pFileDataHeader;
  if ( m_pFileDataHeader->version != 4 )
  {
    LODWORD(fmt) = m_pFileDataHeader->version;
    Com_PrintError(16, ">>>>> !!!! LoadTimingDataFromFile_LooseFile - Reading failed due to version mismatch for %s local = version %d, file = version %d. !!!! <<<<<\n", dest, 4i64, fmt);
    if ( DVARBOOL_dev_verifyLOSDataFile && Dvar_GetBool_Internal_DebugName(DVARBOOL_dev_verifyLOSDataFile, "dev_verifyLOSDataFile") )
    {
      version = this->m_timingData.m_pFileDataHeader->version;
      LODWORD(v14) = 4;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E5B640, 644i64, dest, mapname, v14, version);
    }
    return 0;
  }
  nodeCount = m_pFileDataHeader->nodeCount;
  if ( nodeCount != this->m_timingData.m_nodeCount )
  {
    Com_PrintError(16, ">>>>> !!!! LoadTimingDataFromFile_LooseFile - failed! node count mismatch between local map (%d nodes) and generated file (%d nodes). !!!! <<<<<\n", this->m_timingData.m_nodeCount, nodeCount);
    if ( DVARBOOL_dev_verifyLOSDataFile && Dvar_GetBool_Internal_DebugName(DVARBOOL_dev_verifyLOSDataFile, "dev_verifyLOSDataFile") )
    {
      v19 = this->m_timingData.m_pFileDataHeader->nodeCount;
      LODWORD(v14) = this->m_timingData.m_nodeCount;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E5B7D0, 645i64, dest, mapname, v14, v19);
    }
    return 0;
  }
  quantizationAmount = m_pFileDataHeader->quantizationAmount;
  if ( quantizationAmount != 10 )
  {
    Com_PrintError(16, "LoadTimingDataFromFile_LooseFile - failed! quantization mismatch between local map %d and generated file %d.\n", 10i64, (unsigned int)quantizationAmount);
    if ( DVARBOOL_dev_verifyLOSDataFile && Dvar_GetBool_Internal_DebugName(DVARBOOL_dev_verifyLOSDataFile, "dev_verifyLOSDataFile") )
    {
      v20 = this->m_timingData.m_pFileDataHeader->quantizationAmount;
      LODWORD(v14) = 10;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E5B940, 646i64, dest, mapname, v14, v20);
    }
    return 0;
  }
  if ( this->m_timingData.m_allocatedNodesStorageSizeInBytes != ((nodeCount * (nodeCount + 1)) & 0xFFFFFFFE) )
  {
    v22 = (nodeCount * (nodeCount + 1)) & 0xFFFFFFFE;
    m_allocatedNodesStorageSizeInBytes = this->m_timingData.m_allocatedNodesStorageSizeInBytes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 508, ASSERT_TYPE_ASSERT, "( m_timingData.m_allocatedNodesStorageSizeInBytes ) == ( LOSPrecomputeSystem_GetStorageInBytesForNodes( m_timingData.m_pFileDataHeader->nodeCount ) )", "%s == %s\n\t%u, %u", "m_timingData.m_allocatedNodesStorageSizeInBytes", "LOSPrecomputeSystem_GetStorageInBytesForNodes( m_timingData.m_pFileDataHeader->nodeCount )", m_allocatedNodesStorageSizeInBytes, v22) )
      __debugbreak();
  }
  v11 = this->m_timingData.m_pFileDataHeader;
  LODWORD(v16) = v11->buildFlags;
  LODWORD(v14) = v11->version;
  LODWORD(fmt) = v11->quantizationAmount;
  Com_Printf(16, "Reading %s completed: %d nodes, %d quantization, %d version, 0x%x buildflags.\n", dest, this->m_timingData.m_nodeCount, fmt, v14, v16);
  result = 1;
  this->m_timingData.m_initializedData = 1;
  return result;
}

/*
==============
LOSPrecomputeSystem::ReleaseTimingDataTable
==============
*/
void LOSPrecomputeSystem::ReleaseTimingDataTable(LOSPrecomputeSystem *this)
{
  unsigned __int8 *m_allocatedStorageBuffer; 
  unsigned int m_allocatedStorageSizeInBytes; 

  m_allocatedStorageBuffer = this->m_timingData.m_allocatedStorageBuffer;
  if ( m_allocatedStorageBuffer )
  {
    m_allocatedStorageSizeInBytes = this->m_timingData.m_allocatedStorageSizeInBytes;
    if ( m_allocatedStorageSizeInBytes )
      memset_0(m_allocatedStorageBuffer, 0, m_allocatedStorageSizeInBytes);
  }
  *(_DWORD *)&this->m_timingData.m_dynamicNodeCountFromFile = 655360;
  this->m_timingData.m_nodeCount = 0;
  this->m_timingData.m_buildFlags = 0;
  this->m_timingData.m_dynamicPathNodesSpawnedCount = 0;
  this->m_timingData.m_allocatedStorageBuffer = NULL;
  this->m_timingData.m_pathTimingStorage = NULL;
  this->m_timingData.m_pFileDataHeader = NULL;
  *(_QWORD *)&this->m_timingData.m_allocatedStorageSizeInBytes = 0i64;
  *(_WORD *)&this->m_timingData.m_allocatedDataBuffer = 0;
  memset_0(this->m_timingData.m_dynamicPathNodeLocations, 0, sizeof(this->m_timingData.m_dynamicPathNodeLocations));
  memset_0(this->m_timingData.m_dynamicPathNodeIndexList, 0xFFFF, sizeof(this->m_timingData.m_dynamicPathNodeIndexList));
  this->m_state = STATE_NOT_INITIALIZED;
}

/*
==============
LOSPrecomputeSystem::SpawnDynamicNodes
==============
*/
void LOSPrecomputeSystem::SpawnDynamicNodes(LOSPrecomputeSystem *this)
{
  int v3; 
  char *v5; 
  char *v6; 
  char v7; 
  unsigned __int16 v8; 
  double parentname; 
  double calledFromScript; 
  double v18; 
  vec3_t origin; 
  vec3_t angles; 
  char _Buffer[32]; 

  memset_0(this->m_timingData.m_dynamicPathNodeIndexList, 0xFFFF, sizeof(this->m_timingData.m_dynamicPathNodeIndexList));
  v3 = 0;
  this->m_timingData.m_dynamicPathNodesSpawnedCount = 0;
  if ( this->m_timingData.m_dynamicNodeCountFromFile )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_28], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      __asm
      {
        vmovss  dword ptr [rsp+0B8h+origin], xmm6
        vmovss  dword ptr [rsp+0B8h+origin+4], xmm6
        vmovss  dword ptr [rsp+0B8h+origin+8], xmm6
      }
      v5 = this->m_timingData.m_dynamicPathNodeLocations[v3];
      v6 = (char *)(_Buffer - v5);
      __asm
      {
        vmovss  dword ptr [rsp+0B8h+angles], xmm6
        vmovss  dword ptr [rsp+0B8h+angles+4], xmm6
        vmovss  dword ptr [rsp+0B8h+angles+8], xmm6
      }
      do
      {
        v7 = *v5;
        v5[(_QWORD)v6] = *v5;
        ++v5;
      }
      while ( v7 );
      if ( j_sscanf(_Buffer, "(%f, %f, %f)", &origin, &origin.y, &origin.z) == 3 || j_sscanf(_Buffer, "%f, %f, %f", &origin, &origin.y, &origin.z) == 3 )
      {
        v8 = G_SpawnCoverNode(&origin, &angles, 20, 0, (scr_string_t)0, (scr_string_t)0, 0);
        if ( v8 == 0xFFFF )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0B8h+origin+8]
            vmovss  xmm1, dword ptr [rsp+0B8h+origin+4]
            vmovss  xmm2, dword ptr [rsp+0B8h+origin]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+0B8h+var_80], xmm0
            vcvtss2sd xmm1, xmm1, xmm1
            vmovsd  qword ptr [rsp+0B8h+calledFromScript], xmm1
            vcvtss2sd xmm2, xmm2, xmm2
            vmovsd  qword ptr [rsp+0B8h+parentname], xmm2
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.cpp", 689, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ERROR: coordinate (%f, %f, %f) could not be used to spawn a dynamic pathnode, likely due to being inside a solid!\n", parentname, calledFromScript, v18) )
            __debugbreak();
        }
        else
        {
          this->m_timingData.m_dynamicPathNodeIndexList[this->m_timingData.m_dynamicPathNodesSpawnedCount++] = v8;
        }
      }
      else
      {
        Com_PrintWarning(16, "Can't convert node position %s to a vector!\n", _Buffer);
      }
      ++v3;
    }
    while ( v3 < this->m_timingData.m_dynamicNodeCountFromFile );
    __asm { vmovaps xmm6, [rsp+0B8h+var_28] }
  }
}

