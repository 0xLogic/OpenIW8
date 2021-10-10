/*
==============
Com_PlayerData_GetNextModifiedByte
==============
*/

bool __fastcall Com_PlayerData_GetNextModifiedByte(const unsigned int startIndex, unsigned __int8 *modifiedFlags, unsigned int *outFirstByte, unsigned int *outLastByte)
{
  return ?Com_PlayerData_GetNextModifiedByte@@YA_NIPEAEPEAI1@Z(startIndex, modifiedFlags, outFirstByte, outLastByte);
}

/*
==============
Com_PlayerData_GetDefForStatsGroup
==============
*/

const DDLDef *__fastcall Com_PlayerData_GetDefForStatsGroup(StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetDefForStatsGroup@@YAPEBUDDLDef@@W4StatsGroup@@@Z(statsGroup);
}

/*
==============
Com_PlayerData_GetStatsBlobMaxPackets
==============
*/

unsigned int __fastcall Com_PlayerData_GetStatsBlobMaxPackets(StatsBlobId statsBlob)
{
  return ?Com_PlayerData_GetStatsBlobMaxPackets@@YAIW4StatsBlobId@@@Z(statsBlob);
}

/*
==============
Com_PlayerData_GetStatsGroupBitmask
==============
*/

unsigned __int64 __fastcall Com_PlayerData_GetStatsGroupBitmask(StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetStatsGroupBitmask@@YA_KW4StatsGroup@@@Z(statsGroup);
}

/*
==============
Com_PlayerData_FindStatsGroupByHash
==============
*/

StatsGroup __fastcall Com_PlayerData_FindStatsGroupByHash(unsigned int hashName)
{
  return ?Com_PlayerData_FindStatsGroupByHash@@YA?AW4StatsGroup@@I@Z(hashName);
}

/*
==============
Com_PlayerData_SetArrayIntByIndex
==============
*/

void __fastcall Com_PlayerData_SetArrayIntByIndex(DDLContext *buffer, const scr_string_t arrayName, const int itemIndex, int value, const StatsGroup statsGroup)
{
  ?Com_PlayerData_SetArrayIntByIndex@@YAXPEAUDDLContext@@W4scr_string_t@@HHW4StatsGroup@@@Z(buffer, arrayName, itemIndex, value, statsGroup);
}

/*
==============
Com_PlayerData_GetStatsBlobBitOffset
==============
*/

unsigned int __fastcall Com_PlayerData_GetStatsBlobBitOffset(StatsBlobId statsBlob)
{
  return ?Com_PlayerData_GetStatsBlobBitOffset@@YAIW4StatsBlobId@@@Z(statsBlob);
}

/*
==============
Com_PlayerData_GetLoadoutStatsGroupForGameMode
==============
*/

StatsGroup __fastcall Com_PlayerData_GetLoadoutStatsGroupForGameMode()
{
  return ?Com_PlayerData_GetLoadoutStatsGroupForGameMode@@YA?AW4StatsGroup@@XZ();
}

/*
==============
Com_PlayerData_GetDefSizeForStatsGroup
==============
*/

unsigned int __fastcall Com_PlayerData_GetDefSizeForStatsGroup(StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetDefSizeForStatsGroup@@YAIW4StatsGroup@@@Z(statsGroup);
}

/*
==============
Com_PlayerData_SetArrayBoolByIndex
==============
*/

void __fastcall Com_PlayerData_SetArrayBoolByIndex(DDLContext *buffer, const scr_string_t arrayName, const int itemIndex, bool value, const StatsGroup statsGroup)
{
  ?Com_PlayerData_SetArrayBoolByIndex@@YAXPEAUDDLContext@@W4scr_string_t@@H_NW4StatsGroup@@@Z(buffer, arrayName, itemIndex, value, statsGroup);
}

/*
==============
Com_PlayerData_GetServerWriteableGroupBitmask
==============
*/

char __fastcall Com_PlayerData_GetServerWriteableGroupBitmask()
{
  return ?Com_PlayerData_GetServerWriteableGroupBitmask@@YADXZ();
}

/*
==============
statPacketHeader_t::DeserializeFromMsg
==============
*/

bool __fastcall statPacketHeader_t::DeserializeFromMsg(statPacketHeader_t *this, msg_t *msg)
{
  return ?DeserializeFromMsg@statPacketHeader_t@@QEAA_NPEAUmsg_t@@@Z(this, msg);
}

/*
==============
Com_PlayerData_GetCamoNameFromIndex
==============
*/

const char *__fastcall Com_PlayerData_GetCamoNameFromIndex(const int camoIndex)
{
  return ?Com_PlayerData_GetCamoNameFromIndex@@YAPEBDH@Z(camoIndex);
}

/*
==============
Com_PlayerData_GetStatsBlob
==============
*/

StatsBlobId __fastcall Com_PlayerData_GetStatsBlob(StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetStatsBlob@@YA?AW4StatsBlobId@@W4StatsGroup@@@Z(statsGroup);
}

/*
==============
Com_PlayerData_RegisterDvars
==============
*/

void Com_PlayerData_RegisterDvars(void)
{
  ?Com_PlayerData_RegisterDvars@@YAXXZ();
}

/*
==============
Com_PlayerData_GetStatsGroupPropertyName
==============
*/

const char *__fastcall Com_PlayerData_GetStatsGroupPropertyName(StatsGroup group)
{
  return ?Com_PlayerData_GetStatsGroupPropertyName@@YAPEBDW4StatsGroup@@@Z(group);
}

/*
==============
Com_PlayerData_GetStatsGroupOffset
==============
*/

unsigned int __fastcall Com_PlayerData_GetStatsGroupOffset(StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetStatsGroupOffset@@YAIW4StatsGroup@@@Z(statsGroup);
}

/*
==============
statPacketHeader_t::SerializeToMsg
==============
*/

void __fastcall statPacketHeader_t::SerializeToMsg(statPacketHeader_t *this, msg_t *msg)
{
  ?SerializeToMsg@statPacketHeader_t@@QEAAXPEAUmsg_t@@@Z(this, msg);
}

/*
==============
Com_PlayerData_GetArrayBoolByName
==============
*/

bool __fastcall Com_PlayerData_GetArrayBoolByName(const DDLContext *buffer, const scr_string_t arrayName, const scr_string_t itemName, const StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetArrayBoolByName@@YA_NPEBUDDLContext@@W4scr_string_t@@1W4StatsGroup@@@Z(buffer, arrayName, itemName, statsGroup);
}

/*
==============
Com_PlayerData_GetArrayBoolByIndex
==============
*/

bool __fastcall Com_PlayerData_GetArrayBoolByIndex(const DDLContext *buffer, const scr_string_t arrayName, const int itemIndex, const StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetArrayBoolByIndex@@YA_NPEBUDDLContext@@W4scr_string_t@@HW4StatsGroup@@@Z(buffer, arrayName, itemIndex, statsGroup);
}

/*
==============
Com_PlayerData_GetPrimaryStatsGroup
==============
*/

StatsGroup __fastcall Com_PlayerData_GetPrimaryStatsGroup(StatsBlobId statsBlob)
{
  return ?Com_PlayerData_GetPrimaryStatsGroup@@YA?AW4StatsGroup@@W4StatsBlobId@@@Z(statsBlob);
}

/*
==============
Com_PlayerData_GetWeaponNameFromIndex
==============
*/

const char *__fastcall Com_PlayerData_GetWeaponNameFromIndex(const int weaponIndex)
{
  return ?Com_PlayerData_GetWeaponNameFromIndex@@YAPEBDH@Z(weaponIndex);
}

/*
==============
Com_PlayerData_GetPrestigeLevel
==============
*/

int __fastcall Com_PlayerData_GetPrestigeLevel(const DDLContext *buffer)
{
  return ?Com_PlayerData_GetPrestigeLevel@@YAHPEBUDDLContext@@@Z(buffer);
}

/*
==============
Com_PlayerData_SetInternalIntByName
==============
*/

void __fastcall Com_PlayerData_SetInternalIntByName(unsigned int hash, int value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup)
{
  ?Com_PlayerData_SetInternalIntByName@@YAXIHPEAUDDLContext@@PEAEW4StatsGroup@@@Z(hash, value, buffer, modifiedFlags, statsGroup);
}

/*
==============
Com_PlayerData_GetStatsGroupDataSize
==============
*/

unsigned int __fastcall Com_PlayerData_GetStatsGroupDataSize(StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetStatsGroupDataSize@@YAIW4StatsGroup@@@Z(statsGroup);
}

/*
==============
Com_PlayerData_GetRawDataOffset
==============
*/

unsigned int __fastcall Com_PlayerData_GetRawDataOffset(StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetRawDataOffset@@YAIW4StatsGroup@@@Z(statsGroup);
}

/*
==============
Com_PlayerData_UnregisterCommands
==============
*/

void Com_PlayerData_UnregisterCommands(void)
{
  ?Com_PlayerData_UnregisterCommands@@YAXXZ();
}

/*
==============
Com_PlayerData_GetStatsBlobDataSize
==============
*/

unsigned int __fastcall Com_PlayerData_GetStatsBlobDataSize(StatsBlobId statsBlob)
{
  return ?Com_PlayerData_GetStatsBlobDataSize@@YAIW4StatsBlobId@@@Z(statsBlob);
}

/*
==============
Com_PlayerData_FindStatsGroupByByteOffset
==============
*/

StatsGroup __fastcall Com_PlayerData_FindStatsGroupByByteOffset(unsigned int byteOffset)
{
  return ?Com_PlayerData_FindStatsGroupByByteOffset@@YA?AW4StatsGroup@@I@Z(byteOffset);
}

/*
==============
Com_PlayerData_GetInternalInt
==============
*/

int __fastcall Com_PlayerData_GetInternalInt(const unsigned int *navHashes, int navHashCount, const DDLContext *buffer, const StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetInternalInt@@YAHQEBIHPEBUDDLContext@@W4StatsGroup@@@Z(navHashes, navHashCount, buffer, statsGroup);
}

/*
==============
Com_PlayerData_GetStatsGroupSize
==============
*/

unsigned int __fastcall Com_PlayerData_GetStatsGroupSize(StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetStatsGroupSize@@YAIW4StatsGroup@@@Z(statsGroup);
}

/*
==============
Com_PlayerData_GetArrayStringByIndex
==============
*/

const char *__fastcall Com_PlayerData_GetArrayStringByIndex(const DDLContext *buffer, const scr_string_t arrayName, const int itemIndex, const StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetArrayStringByIndex@@YAPEBDPEBUDDLContext@@W4scr_string_t@@HW4StatsGroup@@@Z(buffer, arrayName, itemIndex, statsGroup);
}

/*
==============
LiveStorage_InitializeDDLStateForStatsGroup
==============
*/

void __fastcall LiveStorage_InitializeDDLStateForStatsGroup(const DDLDef *def, DDLState *state, const StatsGroup statsGroup)
{
  ?LiveStorage_InitializeDDLStateForStatsGroup@@YAXPEBUDDLDef@@PEAUDDLState@@W4StatsGroup@@@Z(def, state, statsGroup);
}

/*
==============
Com_PlayerData_GetClientWriteableGroupBitmask
==============
*/

char __fastcall Com_PlayerData_GetClientWriteableGroupBitmask()
{
  return ?Com_PlayerData_GetClientWriteableGroupBitmask@@YADXZ();
}

/*
==============
Com_PlayerData_CacheStatsGroupData
==============
*/

void Com_PlayerData_CacheStatsGroupData(void)
{
  ?Com_PlayerData_CacheStatsGroupData@@YAXXZ();
}

/*
==============
Com_PlayerData_SetArrayBoolByName
==============
*/

void __fastcall Com_PlayerData_SetArrayBoolByName(DDLContext *buffer, const scr_string_t arrayName, const scr_string_t itemName, bool value, const StatsGroup statsGroup)
{
  ?Com_PlayerData_SetArrayBoolByName@@YAXPEAUDDLContext@@W4scr_string_t@@1_NW4StatsGroup@@@Z(buffer, arrayName, itemName, value, statsGroup);
}

/*
==============
Com_PlayerData_GetArrayIntByName
==============
*/

int __fastcall Com_PlayerData_GetArrayIntByName(const DDLContext *buffer, const scr_string_t arrayName, const scr_string_t itemName, const StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetArrayIntByName@@YAHPEBUDDLContext@@W4scr_string_t@@1W4StatsGroup@@@Z(buffer, arrayName, itemName, statsGroup);
}

/*
==============
Com_PlayerData_SetInternalString
==============
*/

void __fastcall Com_PlayerData_SetInternalString(const unsigned int *navHashes, int navHashCount, const char *value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup)
{
  ?Com_PlayerData_SetInternalString@@YAXQEBIHPEBDPEAUDDLContext@@PEAEW4StatsGroup@@@Z(navHashes, navHashCount, value, buffer, modifiedFlags, statsGroup);
}

/*
==============
Com_PlayerData_GetArrayIntByIndex
==============
*/

int __fastcall Com_PlayerData_GetArrayIntByIndex(const DDLContext *buffer, const scr_string_t arrayName, const int itemIndex, const StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetArrayIntByIndex@@YAHPEBUDDLContext@@W4scr_string_t@@HW4StatsGroup@@@Z(buffer, arrayName, itemIndex, statsGroup);
}

/*
==============
Com_PlayerData_GetStatsBlobBitmask
==============
*/

unsigned __int64 __fastcall Com_PlayerData_GetStatsBlobBitmask(StatsBlobId statsBlob)
{
  return ?Com_PlayerData_GetStatsBlobBitmask@@YA_KW4StatsBlobId@@@Z(statsBlob);
}

/*
==============
Com_PlayerData_GetRequiredStatPacketBitmask
==============
*/

unsigned __int64 __fastcall Com_PlayerData_GetRequiredStatPacketBitmask()
{
  return ?Com_PlayerData_GetRequiredStatPacketBitmask@@YA_KXZ();
}

/*
==============
Com_PlayerData_GetStatsGroupMaxPackets
==============
*/

unsigned int __fastcall Com_PlayerData_GetStatsGroupMaxPackets(StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetStatsGroupMaxPackets@@YAIW4StatsGroup@@@Z(statsGroup);
}

/*
==============
Com_PlayerData_GetStatsGroupForGameMode
==============
*/

StatsGroup __fastcall Com_PlayerData_GetStatsGroupForGameMode()
{
  return ?Com_PlayerData_GetStatsGroupForGameMode@@YA?AW4StatsGroup@@XZ();
}

/*
==============
Com_PlayerData_GetInternalIntByName
==============
*/

int __fastcall Com_PlayerData_GetInternalIntByName(unsigned int hash, const DDLContext *buffer, const StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetInternalIntByName@@YAHIPEBUDDLContext@@W4StatsGroup@@@Z(hash, buffer, statsGroup);
}

/*
==============
Com_PlayerData_GetInternalString
==============
*/

const char *__fastcall Com_PlayerData_GetInternalString(const unsigned int *navHashes, int navHashCount, const DDLContext *buffer, const StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetInternalString@@YAPEBDQEBIHPEBUDDLContext@@W4StatsGroup@@@Z(navHashes, navHashCount, buffer, statsGroup);
}

/*
==============
Com_PlayerData_SetInternalStringByName
==============
*/

void __fastcall Com_PlayerData_SetInternalStringByName(unsigned int hash, const char *value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup)
{
  ?Com_PlayerData_SetInternalStringByName@@YAXIPEBDPEAUDDLContext@@PEAEW4StatsGroup@@@Z(hash, value, buffer, modifiedFlags, statsGroup);
}

/*
==============
Com_PlayerData_SetInternalInt
==============
*/

void __fastcall Com_PlayerData_SetInternalInt(const unsigned int *navHashes, int navHashCount, int value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup)
{
  ?Com_PlayerData_SetInternalInt@@YAXQEBIHHPEAUDDLContext@@PEAEW4StatsGroup@@@Z(navHashes, navHashCount, value, buffer, modifiedFlags, statsGroup);
}

/*
==============
Com_PlayerData_GetStatsBlobSize
==============
*/

unsigned int __fastcall Com_PlayerData_GetStatsBlobSize(StatsBlobId statsBlob)
{
  return ?Com_PlayerData_GetStatsBlobSize@@YAIW4StatsBlobId@@@Z(statsBlob);
}

/*
==============
Com_PlayerData_RegisterCommands
==============
*/

void Com_PlayerData_RegisterCommands(void)
{
  ?Com_PlayerData_RegisterCommands@@YAXXZ();
}

/*
==============
Com_PlayerData_GetInternalStringByName
==============
*/

const char *__fastcall Com_PlayerData_GetInternalStringByName(unsigned int hash, const DDLContext *buffer, const StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetInternalStringByName@@YAPEBDIPEBUDDLContext@@W4StatsGroup@@@Z(hash, buffer, statsGroup);
}

/*
==============
Com_PlayerData_GetStatsBlobOffset
==============
*/

unsigned int __fastcall Com_PlayerData_GetStatsBlobOffset(StatsBlobId statsBlob)
{
  return ?Com_PlayerData_GetStatsBlobOffset@@YAIW4StatsBlobId@@@Z(statsBlob);
}

/*
==============
Com_PlayerData_SetArrayIntByName
==============
*/

void __fastcall Com_PlayerData_SetArrayIntByName(DDLContext *buffer, const scr_string_t arrayName, const scr_string_t itemName, int value, const StatsGroup statsGroup)
{
  ?Com_PlayerData_SetArrayIntByName@@YAXPEAUDDLContext@@W4scr_string_t@@1HW4StatsGroup@@@Z(buffer, arrayName, itemName, value, statsGroup);
}

/*
==============
Com_PlayerData_GetStatsGroupBitOffset
==============
*/

unsigned int __fastcall Com_PlayerData_GetStatsGroupBitOffset(StatsGroup statsGroup)
{
  return ?Com_PlayerData_GetStatsGroupBitOffset@@YAIW4StatsGroup@@@Z(statsGroup);
}

/*
==============
Com_PlayerData_CacheStatsGroupData
==============
*/

void __fastcall Com_PlayerData_CacheStatsGroupData(double _XMM0_8)
{
  unsigned int v1; 
  DDLFile *Asset; 
  DDLFile *v4; 
  DDLFile *v5; 
  DDLFile *v6; 
  DDLFile *v7; 
  DDLFile *v8; 
  const DDLDef *ddlDef; 
  const DDLDef *v10; 
  const DDLDef *v11; 
  const DDLDef *v12; 
  const DDLDef *v13; 
  const DDLDef *v14; 
  signed int v15; 
  unsigned int v16; 
  const char *v17; 
  char v18; 
  signed int v19; 
  unsigned int v20; 
  const char *v21; 
  char v22; 
  __int64 v23; 
  signed int v24; 
  unsigned int v25; 
  const char *v26; 
  char v27; 
  signed int v28; 
  unsigned int v29; 
  const char *v30; 
  char v31; 
  signed int v32; 
  unsigned int v33; 
  const char *v34; 
  char v35; 
  int byteSize; 
  unsigned int v37; 
  const char *v38; 
  char v39; 
  __int64 v40; 
  __int64 v41; 
  DDLState toState; 
  DDLState result; 
  DDLState fromState; 
  DDLState v45; 
  DDLState v46; 
  DDLState v47; 
  DDLState v48; 
  DDLState v49; 
  unsigned int offsetValue; 
  const DDLDef *v51; 
  DDLDef *v52; 

  v1 = 0;
  toState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  offsetValue = 0;
  toState.arrayIndex = -1;
  Asset = DDL::DDL_GetAsset("ddl/mp/commondata.ddl");
  v4 = DDL::DDL_GetAsset("ddl/mp/playerdata.ddl");
  v5 = DDL::DDL_GetAsset("ddl/mp/cpdata.ddl");
  v6 = DDL::DDL_GetAsset("ddl/mp/rankedloadouts.ddl");
  v7 = DDL::DDL_GetAsset("ddl/mp/privateloadouts.ddl");
  v8 = DDL::DDL_GetAsset("ddl/mp/nongamedata.ddl");
  if ( Asset && v4 && v5 && v6 && v7 && v8 )
  {
    ddlDef = Asset->ddlDef;
    v10 = v6->ddlDef;
    v11 = v7->ddlDef;
    v12 = v4->ddlDef;
    v13 = v5->ddlDef;
    v52 = v8->ddlDef;
    v14 = v52;
    v51 = v13;
    fromState = *DDL_GetRootState(&result, ddlDef);
    v45 = *DDL_GetRootState(&result, v12);
    v46 = *DDL_GetRootState(&result, v13);
    v47 = *DDL_GetRootState(&result, v10);
    result = *DDL_GetRootState(&result, v11);
    v48 = *DDL_GetRootState(&v49, v14);
    v15 = ddlDef->byteSize + 4;
    if ( v15 >= 14000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 719, ASSERT_TYPE_ASSERT, "(dataSize < ( 14000 ))", "%s\n\tMAX_STATSGROUP_DATASIZE (%d) <= commonData dataSize (%d). Please increase MAX_STATSGROUP_DATASIZE\n", "dataSize < MAX_STATSGROUP_DATASIZE", 14000, ddlDef->byteSize + 4) )
      __debugbreak();
    if ( v15 - 1 > 4896 )
    {
      LODWORD(v41) = ddlDef->byteSize;
      LODWORD(v40) = 4896;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 722, ASSERT_TYPE_ASSERT, "(( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize ))", "%s\n\tcommonData blob size %d < commonDataDef size %d. Please increase COMMONDATA_SIZE\n", "( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize )", v40, v41) )
        __debugbreak();
    }
    s_statsBlobData[0].statsOffset = 0;
    s_statsBlobData[0].statsSize = 4896;
    s_statsBlobData[0].dataSize = v15;
    Com_PlayerData_SetupPacketValuesForStatsGroup(STATS_BLOB_COMMON, 4, &offsetValue);
    if ( !DDL_MoveToName(&fromState, &toState, "commonData") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 730, ASSERT_TYPE_ASSERT, "(DDL_MoveToName( &commonDataRootState, &currentState, \"commonData\" ))", (const char *)&queryFormat, "DDL_MoveToName( &commonDataRootState, &currentState, \"commonData\" )") )
      __debugbreak();
    s_statsGroupData[2].ddlState = toState;
    v16 = 0;
    v17 = "common";
    v18 = 99;
    do
    {
      ++v17;
      v16 = v18 + 31 * v16;
      v18 = *v17;
    }
    while ( *v17 );
    s_statsGroupData[2].hashName = v16;
    v19 = v12->byteSize + 4;
    if ( v19 >= 14000 )
    {
      LODWORD(v41) = v12->byteSize + 4;
      LODWORD(v40) = 14000;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 745, ASSERT_TYPE_ASSERT, "(dataSize < ( 14000 ))", "%s\n\tMAX_STATSGROUP_DATASIZE (%d) <= mpData dataSize (%d). Please increase MAX_STATSGROUP_DATASIZE\n", "dataSize < MAX_STATSGROUP_DATASIZE", v40, v41) )
        __debugbreak();
    }
    if ( v19 + 4895 > 20808 )
    {
      LODWORD(v41) = v12->byteSize;
      LODWORD(v40) = 15912;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 748, ASSERT_TYPE_ASSERT, "(( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize ))", "%s\n\tmpData blob size %d < mpDataDef size %d. Please increase MPDATA_SIZE\n", "( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize )", v40, v41) )
        __debugbreak();
    }
    s_statsBlobData[1].statsOffset = 4896;
    s_statsBlobData[1].statsSize = 15912;
    s_statsBlobData[1].dataSize = v19;
    Com_PlayerData_SetupPacketValuesForStatsGroup(STATS_BLOB_MP, 13, &offsetValue);
    if ( !DDL_MoveToName(&v45, &toState, "rankedMatchData") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 756, ASSERT_TYPE_ASSERT, "(DDL_MoveToName( &mpDataRootState, &currentState, \"rankedMatchData\" ))", (const char *)&queryFormat, "DDL_MoveToName( &mpDataRootState, &currentState, \"rankedMatchData\" )") )
      __debugbreak();
    s_statsGroupData[0].ddlState = toState;
    v20 = 0;
    v21 = "mp";
    v22 = 109;
    do
    {
      ++v21;
      v20 = v22 + 31 * v20;
      v22 = *v21;
    }
    while ( *v21 );
    v23 = (__int64)v51;
    s_statsGroupData[0].hashName = v20;
    v24 = v51->byteSize + 4;
    if ( v24 >= 14000 )
    {
      LODWORD(v41) = v51->byteSize + 4;
      LODWORD(v40) = 14000;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 772, ASSERT_TYPE_ASSERT, "(dataSize < ( 14000 ))", "%s\n\tMAX_STATSGROUP_DATASIZE (%d) <= cpData dataSize (%d). Please increase MAX_STATSGROUP_DATASIZE\n", "dataSize < MAX_STATSGROUP_DATASIZE", v40, v41) )
        __debugbreak();
    }
    if ( v24 + 30599 > 45288 )
    {
      LODWORD(v41) = *(_DWORD *)(v23 + 36);
      LODWORD(v40) = 14688;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 775, ASSERT_TYPE_ASSERT, "(( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize ))", "%s\n\tcpData blob size %d < cpDataDef size %d. Please increase CPDATA_SIZE\n", "( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize )", v40, v41) )
        __debugbreak();
    }
    s_statsBlobData[2].statsOffset = 30600;
    s_statsBlobData[2].statsSize = 14688;
    s_statsBlobData[2].dataSize = v24;
    Com_PlayerData_SetupPacketValuesForStatsGroup(STATS_BLOB_CP, 12, &offsetValue);
    if ( !DDL_MoveToName(&v46, &toState, "coopMatchData") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 783, ASSERT_TYPE_ASSERT, "(DDL_MoveToName( &cpDataRootState, &currentState, \"coopMatchData\" ))", (const char *)&queryFormat, "DDL_MoveToName( &cpDataRootState, &currentState, \"coopMatchData\" )") )
      __debugbreak();
    s_statsGroupData[1].ddlState = toState;
    v25 = 0;
    v26 = "cp";
    v27 = 99;
    do
    {
      ++v26;
      v25 = v27 + 31 * v25;
      v27 = *v26;
    }
    while ( *v26 );
    s_statsGroupData[1].hashName = v25;
    v28 = v10->byteSize + 4;
    if ( v28 >= 14000 )
    {
      LODWORD(v41) = v10->byteSize + 4;
      LODWORD(v40) = 14000;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 798, ASSERT_TYPE_ASSERT, "(dataSize < ( 14000 ))", "%s\n\tMAX_STATSGROUP_DATASIZE (%d) <= rankedLoadoutsData dataSize (%d). Please increase MAX_STATSGROUP_DATASIZE\n", "dataSize < MAX_STATSGROUP_DATASIZE", v40, v41) )
        __debugbreak();
    }
    if ( v28 + 20807 > 25704 )
    {
      LODWORD(v41) = v10->byteSize;
      LODWORD(v40) = 4896;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 801, ASSERT_TYPE_ASSERT, "(( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize ))", "%s\n\trankedLoadoutsData blob size %d < rankedLoadoutsDef size %d. Please increase RANKEDLOADOUTS_SIZE\n", "( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize )", v40, v41) )
        __debugbreak();
    }
    s_statsBlobData[3].statsOffset = 20808;
    s_statsBlobData[3].statsSize = 4896;
    s_statsBlobData[3].dataSize = v28;
    Com_PlayerData_SetupPacketValuesForStatsGroup(STATS_BLOB_RANKEDLOADOUTS, 4, &offsetValue);
    s_statsGroupData[3].ddlState = v47;
    v29 = 0;
    v30 = "rankedloadouts";
    v31 = 114;
    do
    {
      ++v30;
      v29 = v31 + 31 * v29;
      v31 = *v30;
    }
    while ( *v30 );
    s_statsGroupData[3].hashName = v29;
    v32 = v11->byteSize + 4;
    if ( v32 >= 14000 )
    {
      LODWORD(v41) = v11->byteSize + 4;
      LODWORD(v40) = 14000;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 824, ASSERT_TYPE_ASSERT, "(dataSize < ( 14000 ))", "%s\n\tMAX_STATSGROUP_DATASIZE (%d) <= privateLoadoutsData dataSize (%d). Please increase MAX_STATSGROUP_DATASIZE\n", "dataSize < MAX_STATSGROUP_DATASIZE", v40, v41) )
        __debugbreak();
    }
    if ( v32 + 25703 > 30600 )
    {
      LODWORD(v41) = v11->byteSize;
      LODWORD(v40) = 4896;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 827, ASSERT_TYPE_ASSERT, "(( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize ))", "%s\n\tprivateLoadoutsData blob size %d < privateLoadoutsDef size %d. Please increase PRIVATELOADOUTS_SIZE\n", "( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize )", v40, v41) )
        __debugbreak();
    }
    s_statsBlobData[4].statsOffset = 25704;
    s_statsBlobData[4].statsSize = 4896;
    s_statsBlobData[4].dataSize = v32;
    Com_PlayerData_SetupPacketValuesForStatsGroup(STATS_BLOB_PRIVATELOADOUTS, 4, &offsetValue);
    s_statsGroupData[4].ddlState = result;
    v33 = 0;
    v34 = "privateloadouts";
    v35 = 112;
    do
    {
      ++v34;
      v33 = v35 + 31 * v33;
      v35 = *v34;
    }
    while ( *v34 );
    s_statsGroupData[4].hashName = v33;
    byteSize = v52->byteSize;
    v37 = byteSize + 4;
    if ( byteSize + 45291 > 66096 )
    {
      LODWORD(v41) = v52->byteSize;
      LODWORD(v40) = 20808;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 854, ASSERT_TYPE_ASSERT, "(( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize ))", "%s\n\tnonGameData blob size %d < nonGameDataDef size %d. Please increase NONGAMEDATA_SIZE\n", "( rangeStart + dataSize - 1 ) <= ( rangeStart + rangeSize )", v40, v41) )
        __debugbreak();
    }
    s_statsBlobData[5].statsOffset = 45288;
    s_statsBlobData[5].statsSize = 20808;
    s_statsBlobData[5].dataSize = v37;
    Com_PlayerData_SetupPacketValuesForStatsGroup(STATS_BLOB_NONGAME, 17, &offsetValue);
    v38 = "nonGameData";
    if ( !DDL_MoveToName(&v48, &toState, "nonGameData") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 862, ASSERT_TYPE_ASSERT, "(DDL_MoveToName( &nonGameDataRootState, &currentState, \"nonGameData\" ))", (const char *)&queryFormat, "DDL_MoveToName( &nonGameDataRootState, &currentState, \"nonGameData\" )") )
      __debugbreak();
    s_statsGroupData[5].ddlState = toState;
    v39 = 110;
    do
    {
      ++v38;
      v1 = v39 + 31 * v1;
      v39 = *v38;
    }
    while ( *v38 );
    s_statsGroupData[5].hashName = v1;
  }
}

/*
==============
Com_PlayerData_FindStatsGroupByByteOffset
==============
*/
__int64 Com_PlayerData_FindStatsGroupByByteOffset(unsigned int byteOffset)
{
  unsigned int v1; 
  unsigned int *p_statsSize; 
  int v3; 
  unsigned int v4; 
  __int64 result; 

  v1 = 0;
  p_statsSize = &s_statsBlobData[0].statsSize;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(p_statsSize - 1);
    if ( byteOffset >= v4 && byteOffset < *p_statsSize + v4 )
      break;
    ++v3;
    p_statsSize += 8;
    if ( v3 >= 6 )
      return 7i64;
  }
  switch ( v3 )
  {
    case 0:
      result = 2i64;
      break;
    case 1:
      goto LABEL_15;
    case 2:
      result = 1i64;
      break;
    case 3:
      result = 3i64;
      break;
    case 4:
      result = 4i64;
      break;
    case 5:
      result = 5i64;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 969, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid statsBlob specified") )
        __debugbreak();
      v1 = 7;
LABEL_15:
      result = v1;
      break;
  }
  return result;
}

/*
==============
Com_PlayerData_FindStatsGroupByHash
==============
*/
__int64 Com_PlayerData_FindStatsGroupByHash(unsigned int hashName)
{
  unsigned int v1; 
  unsigned int *p_hashName; 

  v1 = 0;
  p_hashName = &s_statsGroupData[0].hashName;
  while ( *p_hashName != hashName )
  {
    ++v1;
    p_hashName += 10;
    if ( (__int64)p_hashName >= (__int64)&s_statsBlobData[1] )
      return 7i64;
  }
  return v1;
}

/*
==============
Com_PlayerData_GetArrayBoolByIndex
==============
*/
bool Com_PlayerData_GetArrayBoolByIndex(const DDLContext *buffer, const scr_string_t arrayName, const int itemIndex, const StatsGroup statsGroup)
{
  const DDLDef *def; 
  unsigned int RawHash; 
  const char *v12; 
  const char *v14; 
  DDLState state; 

  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  if ( !arrayName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 144, ASSERT_TYPE_ASSERT, "(arrayName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "arrayName != NULL_SCR_STRING", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
    __debugbreak();
  def = buffer->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 147, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
  RawHash = j_SL_GetRawHash(arrayName);
  if ( DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
  {
    if ( DDL_MoveToIndex(&state, &state, itemIndex) )
    {
      return DDL_GetBool(&state, buffer);
    }
    else
    {
      v14 = SL_ConvertToString(arrayName);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE68A0, 861i64, (unsigned int)itemIndex, v14);
      return 0;
    }
  }
  else
  {
    v12 = SL_ConvertToString(arrayName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE6850, 860i64, v12);
    return 0;
  }
}

/*
==============
Com_PlayerData_GetArrayBoolByName
==============
*/
bool Com_PlayerData_GetArrayBoolByName(const DDLContext *buffer, const scr_string_t arrayName, const scr_string_t itemName, const StatsGroup statsGroup)
{
  const DDLDef *def; 
  unsigned int RawHash; 
  const char *v12; 
  unsigned int v14; 
  const char *v15; 
  const char *v16; 
  DDLState state; 

  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  if ( !arrayName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 112, ASSERT_TYPE_ASSERT, "(arrayName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "arrayName != NULL_SCR_STRING", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
    __debugbreak();
  if ( !itemName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 113, ASSERT_TYPE_ASSERT, "(itemName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "itemName != NULL_SCR_STRING") )
    __debugbreak();
  def = buffer->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 116, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
  RawHash = j_SL_GetRawHash(arrayName);
  if ( DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
  {
    v14 = j_SL_GetRawHash(itemName);
    if ( DDL_MoveToNameByHash(&state, &state, v14, NULL) )
    {
      return DDL_GetBool(&state, buffer);
    }
    else
    {
      v15 = SL_ConvertToString(arrayName);
      v16 = SL_ConvertToString(itemName);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE67F0, 859i64, v16, v15);
      return 0;
    }
  }
  else
  {
    v12 = SL_ConvertToString(arrayName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE67A8, 858i64, v12);
    return 0;
  }
}

/*
==============
Com_PlayerData_GetArrayIntByIndex
==============
*/
int Com_PlayerData_GetArrayIntByIndex(const DDLContext *buffer, const scr_string_t arrayName, const int itemIndex, const StatsGroup statsGroup)
{
  const DDLDef *def; 
  unsigned int RawHash; 
  const char *v12; 
  const char *v14; 
  DDLState state; 

  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  if ( !arrayName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 259, ASSERT_TYPE_ASSERT, "(arrayName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "arrayName != NULL_SCR_STRING", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
    __debugbreak();
  def = buffer->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 262, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
  RawHash = j_SL_GetRawHash(arrayName);
  if ( DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
  {
    if ( DDL_MoveToIndex(&state, &state, itemIndex) )
    {
      return DDL_GetInt(&state, buffer);
    }
    else
    {
      v14 = SL_ConvertToString(arrayName);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE68A0, 869i64, (unsigned int)itemIndex, v14);
      return 0;
    }
  }
  else
  {
    v12 = SL_ConvertToString(arrayName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE6A70, 868i64, v12);
    return 0;
  }
}

/*
==============
Com_PlayerData_GetArrayIntByName
==============
*/
int Com_PlayerData_GetArrayIntByName(const DDLContext *buffer, const scr_string_t arrayName, const scr_string_t itemName, const StatsGroup statsGroup)
{
  const DDLDef *def; 
  unsigned int RawHash; 
  const char *v12; 
  unsigned int v14; 
  const char *v15; 
  const char *v16; 
  DDLState state; 

  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  if ( !arrayName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 226, ASSERT_TYPE_ASSERT, "(arrayName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "arrayName != NULL_SCR_STRING", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
    __debugbreak();
  if ( !itemName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 227, ASSERT_TYPE_ASSERT, "(itemName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "itemName != NULL_SCR_STRING") )
    __debugbreak();
  def = buffer->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 230, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
  RawHash = j_SL_GetRawHash(arrayName);
  if ( DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
  {
    v14 = j_SL_GetRawHash(itemName);
    if ( DDL_MoveToNameByHash(&state, &state, v14, NULL) )
    {
      return DDL_GetInt(&state, buffer);
    }
    else
    {
      v15 = SL_ConvertToString(arrayName);
      v16 = SL_ConvertToString(itemName);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE6A10, 867i64, v16, v15);
      return 0;
    }
  }
  else
  {
    v12 = SL_ConvertToString(arrayName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE69C0, 866i64, v12);
    return 0;
  }
}

/*
==============
Com_PlayerData_GetArrayStringByIndex
==============
*/
const char *Com_PlayerData_GetArrayStringByIndex(const DDLContext *buffer, const scr_string_t arrayName, const int itemIndex, const StatsGroup statsGroup)
{
  const DDLDef *def; 
  unsigned int RawHash; 
  const char *v12; 
  const char *v14; 
  DDLState state; 

  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  if ( !arrayName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 339, ASSERT_TYPE_ASSERT, "(arrayName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "arrayName != NULL_SCR_STRING", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
    __debugbreak();
  def = buffer->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 342, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
  RawHash = j_SL_GetRawHash(arrayName);
  if ( DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
  {
    if ( DDL_MoveToIndex(&state, &state, itemIndex) )
    {
      return DDL_GetString(&state, buffer);
    }
    else
    {
      v14 = SL_ConvertToString(arrayName);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE68A0, 5889i64, (unsigned int)itemIndex, v14);
      return 0i64;
    }
  }
  else
  {
    v12 = SL_ConvertToString(arrayName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE6A70, 5888i64, v12);
    return 0i64;
  }
}

/*
==============
Com_PlayerData_GetCamoNameFromIndex
==============
*/
const char *Com_PlayerData_GetCamoNameFromIndex(const int camoIndex)
{
  __int64 v3; 
  char *v4; 
  StatsGroup LoadoutStatsGroupForGameMode; 
  StatsGroup v6; 
  const char *v7; 
  const DDLDef *Asset; 
  DDLState state; 
  unsigned int path[6]; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  v3 = camoIndex;
  v4 = (char *)&queryFormat.fmt + 3;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode();
  v6 = LoadoutStatsGroupForGameMode;
  if ( LoadoutStatsGroupForGameMode == STATSGROUP_RANKEDLOADOUTS )
  {
    v7 = "ddl/mp/rankedloadouts.ddl";
  }
  else
  {
    if ( LoadoutStatsGroupForGameMode != STATSGROUP_PRIVATELOADOUTS )
      return v4;
    v7 = "ddl/mp/privateloadouts.ddl";
  }
  Asset = Com_DDL_LoadAsset(v7);
  LiveStorage_InitializeDDLStateForStatsGroup(Asset, &state, v6);
  path[0] = j_SL_GetRawHash(scr_const.squadMembers);
  path[1] = j_SL_GetRawHash(scr_const.loadouts);
  path[2] = 0;
  path[3] = j_SL_GetRawHash(scr_const.weaponSetups);
  path[4] = 0;
  path[5] = j_SL_GetRawHash(scr_const.camo);
  if ( DDL_MoveToPathByHash(&state, &state, 6, path) && DDL_GetType(&state) )
  {
    if ( state.member->externalIndex >= (unsigned int)Asset->enumCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 510, ASSERT_TYPE_ASSERT, "(unsigned)( state.member->externalIndex ) < (unsigned)( def->enumCount )", "state.member->externalIndex doesn't index def->enumCount\n\t%i not in [0, %i)", state.member->externalIndex, Asset->enumCount) )
      __debugbreak();
    return Asset->enumList[state.member->externalIndex].members[v3];
  }
  return v4;
}

/*
==============
Com_PlayerData_GetClientWriteableGroupBitmask
==============
*/
char Com_PlayerData_GetClientWriteableGroupBitmask()
{
  StatsGroup LoadoutStatsGroupForGameMode; 
  int v1; 

  if ( Com_FrontEndScene_IsActive() || (LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode(), LoadoutStatsGroupForGameMode == STATSGROUP_IGNORE) )
    LOBYTE(v1) = 0;
  else
    return 1 << LoadoutStatsGroupForGameMode;
  return v1;
}

/*
==============
Com_PlayerData_GetDefForStatsGroup
==============
*/
const DDLDef *Com_PlayerData_GetDefForStatsGroup(StatsGroup statsGroup)
{
  __int64 v1; 
  int v4; 

  v1 = statsGroup;
  if ( (unsigned int)statsGroup >= STATSGROUP_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 911, ASSERT_TYPE_ASSERT, "(unsigned)( statsGroup ) < (unsigned)( STATSGROUP_COUNT )", "statsGroup doesn't index STATSGROUP_COUNT\n\t%i not in [0, %i)", statsGroup, v4) )
      __debugbreak();
  }
  return s_statsGroupData[v1].ddlState.ddlDef;
}

/*
==============
Com_PlayerData_GetDefSizeForStatsGroup
==============
*/
__int64 Com_PlayerData_GetDefSizeForStatsGroup(StatsGroup statsGroup)
{
  __int64 v1; 
  int v4; 

  v1 = statsGroup;
  if ( (unsigned int)statsGroup >= STATSGROUP_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 911, ASSERT_TYPE_ASSERT, "(unsigned)( statsGroup ) < (unsigned)( STATSGROUP_COUNT )", "statsGroup doesn't index STATSGROUP_COUNT\n\t%i not in [0, %i)", statsGroup, v4) )
      __debugbreak();
  }
  return (unsigned int)s_statsGroupData[v1].ddlState.ddlDef->byteSize;
}

/*
==============
Com_PlayerData_GetInternalInt
==============
*/
int Com_PlayerData_GetInternalInt(const unsigned int *navHashes, int navHashCount, const DDLContext *buffer, const StatsGroup statsGroup)
{
  return Com_DDL_GetInt(navHashes, navHashCount, buffer, statsGroup, 0x1046Cu);
}

/*
==============
Com_PlayerData_GetInternalIntByName
==============
*/
int Com_PlayerData_GetInternalIntByName(unsigned int hash, const DDLContext *buffer, const StatsGroup statsGroup)
{
  unsigned int navHashes; 

  navHashes = hash;
  return Com_DDL_GetInt(&navHashes, 1, buffer, statsGroup, 0x1046Cu);
}

/*
==============
Com_PlayerData_GetInternalString
==============
*/
const char *Com_PlayerData_GetInternalString(const unsigned int *navHashes, int navHashCount, const DDLContext *buffer, const StatsGroup statsGroup)
{
  return Com_DDL_GetString(navHashes, navHashCount, buffer, statsGroup, 0x1046Cu);
}

/*
==============
Com_PlayerData_GetInternalStringByName
==============
*/
const char *Com_PlayerData_GetInternalStringByName(unsigned int hash, const DDLContext *buffer, const StatsGroup statsGroup)
{
  unsigned int navHashes; 

  navHashes = hash;
  return Com_DDL_GetString(&navHashes, 1, buffer, statsGroup, 0x1046Cu);
}

/*
==============
Com_PlayerData_GetLoadoutStatsGroupForGameMode
==============
*/
__int64 Com_PlayerData_GetLoadoutStatsGroupForGameMode()
{
  const dvar_t *v0; 
  bool v1; 
  char v2; 
  const dvar_t *v3; 
  const dvar_t *v5; 

  v0 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  v1 = v0->current.enabled && Live_IsInRestrictedMatchmakingGame();
  v2 = v1;
  if ( force_ranking->current.enabled )
    v2 = 1;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
  {
    v3 = DVARBOOL_systemlink;
    if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
      return 4i64;
  }
  else
  {
    if ( !v2 )
      return 4i64;
    v5 = DVARBOOL_xblive_competitionmatch;
    if ( !DVARBOOL_xblive_competitionmatch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_competitionmatch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled || GameBattles_IsGameBattleActive() )
      return 4i64;
  }
  return 3i64;
}

/*
==============
Com_PlayerData_GetNextModifiedByte
==============
*/
__int64 Com_PlayerData_GetNextModifiedByte(const unsigned int startIndex, unsigned __int8 *modifiedFlags, unsigned int *outFirstByte, unsigned int *outLastByte)
{
  unsigned __int8 v4; 
  unsigned int v5; 
  unsigned int v6; 
  int v7; 
  unsigned int i; 
  unsigned __int8 v11; 
  char v12; 
  int v13; 
  char v14; 
  unsigned int v15; 
  unsigned int j; 
  __int64 result; 

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  for ( i = startIndex; i < 0x1046C; ++i )
  {
    v11 = v4;
    v12 = i & 7;
    v13 = i;
    if ( (i & 0x80000000) != 0 )
    {
      v13 = i + 7;
      v12 -= 8;
    }
    if ( (modifiedFlags[v13 >> 3] & (unsigned __int8)(1 << v12)) != 0 )
    {
      v14 = v4;
      if ( !v4 )
        v14 = 1;
      v4 = v14;
      v15 = i;
      if ( v11 )
        v15 = v5;
      v5 = v15;
      if ( i - v15 >= 0xFF )
        break;
      v6 = i;
      v7 = 0;
    }
    else if ( v4 )
    {
      if ( ++v7 == 3 )
        break;
    }
    else if ( !modifiedFlags[(unsigned __int64)i >> 3] )
    {
      for ( j = i & 0xFFFFFFF8; j < 0x1046C; j += 8 )
      {
        if ( modifiedFlags[(unsigned __int64)j >> 3] )
          break;
      }
      i = j - 1;
    }
  }
  *outFirstByte = v5;
  result = v4;
  *outLastByte = v6;
  return result;
}

/*
==============
Com_PlayerData_GetPrestigeLevel
==============
*/
__int64 Com_PlayerData_GetPrestigeLevel(const DDLContext *buffer)
{
  const DDLDef *def; 
  unsigned int RawHash; 
  unsigned int v8; 
  unsigned int v9; 
  DDLState toState; 
  DDLState fromState; 
  DDLState result; 

  def = buffer->def;
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&toState.member = _XMM0;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 591, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def", *(_QWORD *)&toState.isValid, *(_QWORD *)&toState.arrayIndex, toState.member, toState.ddlDef) )
    __debugbreak();
  if ( g_useStatsGroups->current.enabled )
  {
    fromState = s_statsGroupData[0].ddlState;
    __asm
    {
      vextractf128 xmm0, ymm0, 1
      vpextrq rax, xmm0, 1
    }
    if ( _RAX != def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 602, ASSERT_TYPE_ASSERT, "(state->ddlDef == def)", "%s\n\tplayerdata.ddl has moved locations in memory.", "state->ddlDef == def") )
      __debugbreak();
    fromState.ddlDef = def;
  }
  else
  {
    fromState = *DDL_GetRootState(&result, def);
  }
  RawHash = j_SL_GetRawHash(scr_const.progression);
  DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL);
  v8 = j_SL_GetRawHash(scr_const.playerLevel);
  DDL_MoveToNameByHash(&toState, &toState, v8, NULL);
  v9 = j_SL_GetRawHash(scr_const.prestige);
  DDL_MoveToNameByHash(&toState, &toState, v9, NULL);
  return DDL_GetShort(&toState, buffer);
}

/*
==============
Com_PlayerData_GetPrimaryStatsGroup
==============
*/
__int64 Com_PlayerData_GetPrimaryStatsGroup(StatsBlobId statsBlob)
{
  __int64 result; 

  switch ( statsBlob )
  {
    case STATS_BLOB_COMMON:
      result = 2i64;
      break;
    case STATS_BLOB_MP:
      result = 0i64;
      break;
    case STATS_BLOB_CP:
      result = 1i64;
      break;
    case STATS_BLOB_RANKEDLOADOUTS:
      result = 3i64;
      break;
    case STATS_BLOB_PRIVATELOADOUTS:
      result = 4i64;
      break;
    case STATS_BLOB_NONGAME:
      result = 5i64;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 969, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid statsBlob specified") )
        __debugbreak();
      result = 7i64;
      break;
  }
  return result;
}

/*
==============
Com_PlayerData_GetRawDataOffset
==============
*/
__int64 Com_PlayerData_GetRawDataOffset(StatsGroup statsGroup)
{
  StatsBlobId StatsBlob; 
  __int64 v2; 

  StatsBlob = Com_PlayerData_GetStatsBlob(statsGroup);
  v2 = StatsBlob;
  if ( (unsigned int)StatsBlob >= STATS_BLOB_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1008, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", StatsBlob, 6) )
    __debugbreak();
  return s_statsBlobData[v2].statsOffset + 4;
}

/*
==============
Com_PlayerData_GetRequiredStatPacketBitmask
==============
*/
unsigned __int64 Com_PlayerData_GetRequiredStatPacketBitmask()
{
  unsigned __int64 bitmask; 
  StatsGroup StatsGroupForGameMode; 
  StatsGroup LoadoutStatsGroupForGameMode; 

  if ( Com_FrontEndScene_IsActive() )
    return 0i64;
  bitmask = s_statsBlobData[0].bitmask;
  StatsGroupForGameMode = Com_PlayerData_GetStatsGroupForGameMode();
  if ( StatsGroupForGameMode != STATSGROUP_IGNORE )
    bitmask |= s_statsBlobData[Com_PlayerData_GetStatsBlob(StatsGroupForGameMode)].bitmask;
  LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode();
  return s_statsBlobData[Com_PlayerData_GetStatsBlob(LoadoutStatsGroupForGameMode)].bitmask | bitmask;
}

/*
==============
Com_PlayerData_GetServerWriteableGroupBitmask
==============
*/
char Com_PlayerData_GetServerWriteableGroupBitmask()
{
  int v0; 
  StatsGroup StatsGroupForGameMode; 
  StatsGroup LoadoutStatsGroupForGameMode; 
  int v3; 

  if ( Com_FrontEndScene_IsActive() )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(v0) = 4;
    StatsGroupForGameMode = Com_PlayerData_GetStatsGroupForGameMode();
    if ( StatsGroupForGameMode != STATSGROUP_IGNORE )
      v0 = (1 << StatsGroupForGameMode) | 4;
    LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode();
    if ( LoadoutStatsGroupForGameMode == STATSGROUP_IGNORE )
      LOBYTE(v3) = v0;
    else
      return v0 | (1 << LoadoutStatsGroupForGameMode);
  }
  return v3;
}

/*
==============
Com_PlayerData_GetStatsBlob
==============
*/
__int64 Com_PlayerData_GetStatsBlob(StatsGroup statsGroup)
{
  __int64 result; 

  switch ( statsGroup )
  {
    case STATSGROUP_RANKED:
      result = 1i64;
      break;
    case STATSGROUP_COOP:
      result = 2i64;
      break;
    case STATSGROUP_COMMON:
      result = 0i64;
      break;
    case STATSGROUP_RANKEDLOADOUTS:
      result = 3i64;
      break;
    case STATSGROUP_PRIVATELOADOUTS:
      result = 4i64;
      break;
    case STATSGROUP_NONGAME:
      result = 5i64;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 943, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid statsGroup specified") )
        __debugbreak();
      result = 6i64;
      break;
  }
  return result;
}

/*
==============
Com_PlayerData_GetStatsBlobBitOffset
==============
*/
__int64 Com_PlayerData_GetStatsBlobBitOffset(StatsBlobId statsBlob)
{
  __int64 v1; 
  int v4; 

  v1 = statsBlob;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1030, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v4) )
      __debugbreak();
  }
  return s_statsBlobData[v1].bitoffset;
}

/*
==============
Com_PlayerData_GetStatsBlobBitmask
==============
*/
unsigned __int64 Com_PlayerData_GetStatsBlobBitmask(StatsBlobId statsBlob)
{
  __int64 v1; 
  int v4; 

  v1 = statsBlob;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1037, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v4) )
      __debugbreak();
  }
  return s_statsBlobData[v1].bitmask;
}

/*
==============
Com_PlayerData_GetStatsBlobDataSize
==============
*/
__int64 Com_PlayerData_GetStatsBlobDataSize(StatsBlobId statsBlob)
{
  __int64 v1; 
  int v4; 

  v1 = statsBlob;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1045, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v4) )
      __debugbreak();
  }
  return s_statsBlobData[v1].dataSize;
}

/*
==============
Com_PlayerData_GetStatsBlobMaxPackets
==============
*/
__int64 Com_PlayerData_GetStatsBlobMaxPackets(StatsBlobId statsBlob)
{
  __int64 v1; 
  int v4; 

  v1 = statsBlob;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v4) )
      __debugbreak();
  }
  return s_statsBlobData[v1].maxStatPackets;
}

/*
==============
Com_PlayerData_GetStatsBlobOffset
==============
*/
__int64 Com_PlayerData_GetStatsBlobOffset(StatsBlobId statsBlob)
{
  __int64 v1; 
  int v4; 

  v1 = statsBlob;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1008, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v4) )
      __debugbreak();
  }
  return s_statsBlobData[v1].statsOffset;
}

/*
==============
Com_PlayerData_GetStatsBlobSize
==============
*/
__int64 Com_PlayerData_GetStatsBlobSize(StatsBlobId statsBlob)
{
  __int64 v1; 
  int v4; 

  v1 = statsBlob;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1016, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v4) )
      __debugbreak();
  }
  return s_statsBlobData[v1].statsSize;
}

/*
==============
Com_PlayerData_GetStatsGroupBitOffset
==============
*/
__int64 Com_PlayerData_GetStatsGroupBitOffset(StatsGroup statsGroup)
{
  StatsBlobId StatsBlob; 
  __int64 v2; 

  StatsBlob = Com_PlayerData_GetStatsBlob(statsGroup);
  v2 = StatsBlob;
  if ( (unsigned int)StatsBlob >= STATS_BLOB_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1030, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", StatsBlob, 6) )
    __debugbreak();
  return s_statsBlobData[v2].bitoffset;
}

/*
==============
Com_PlayerData_GetStatsGroupBitmask
==============
*/
unsigned __int64 Com_PlayerData_GetStatsGroupBitmask(StatsGroup statsGroup)
{
  StatsBlobId StatsBlob; 
  __int64 v2; 

  StatsBlob = Com_PlayerData_GetStatsBlob(statsGroup);
  v2 = StatsBlob;
  if ( (unsigned int)StatsBlob >= STATS_BLOB_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1037, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", StatsBlob, 6) )
    __debugbreak();
  return s_statsBlobData[v2].bitmask;
}

/*
==============
Com_PlayerData_GetStatsGroupDataSize
==============
*/
__int64 Com_PlayerData_GetStatsGroupDataSize(StatsGroup statsGroup)
{
  StatsBlobId StatsBlob; 
  __int64 v2; 

  StatsBlob = Com_PlayerData_GetStatsBlob(statsGroup);
  v2 = StatsBlob;
  if ( (unsigned int)StatsBlob >= STATS_BLOB_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1045, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", StatsBlob, 6) )
    __debugbreak();
  return s_statsBlobData[v2].dataSize;
}

/*
==============
Com_PlayerData_GetStatsGroupForGameMode
==============
*/
__int64 Com_PlayerData_GetStatsGroupForGameMode()
{
  const dvar_t *v1; 
  bool v2; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    return 1i64;
  v1 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v2 = v1->current.enabled && Live_IsInRestrictedMatchmakingGame();
  if ( force_ranking->current.enabled || v2 )
    return 0i64;
  else
    return 7i64;
}

/*
==============
Com_PlayerData_GetStatsGroupMaxPackets
==============
*/
__int64 Com_PlayerData_GetStatsGroupMaxPackets(StatsGroup statsGroup)
{
  StatsBlobId StatsBlob; 
  __int64 v2; 

  StatsBlob = Com_PlayerData_GetStatsBlob(statsGroup);
  v2 = StatsBlob;
  if ( (unsigned int)StatsBlob >= STATS_BLOB_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", StatsBlob, 6) )
    __debugbreak();
  return s_statsBlobData[v2].maxStatPackets;
}

/*
==============
Com_PlayerData_GetStatsGroupOffset
==============
*/
__int64 Com_PlayerData_GetStatsGroupOffset(StatsGroup statsGroup)
{
  StatsBlobId StatsBlob; 
  __int64 v2; 

  StatsBlob = Com_PlayerData_GetStatsBlob(statsGroup);
  v2 = StatsBlob;
  if ( (unsigned int)StatsBlob >= STATS_BLOB_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1008, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", StatsBlob, 6) )
    __debugbreak();
  return s_statsBlobData[v2].statsOffset;
}

/*
==============
Com_PlayerData_GetStatsGroupPropertyName
==============
*/
const char *Com_PlayerData_GetStatsGroupPropertyName(StatsGroup group)
{
  __int64 v1; 
  int v4; 

  v1 = group;
  if ( (unsigned int)group >= STATSGROUP_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 436, ASSERT_TYPE_ASSERT, "(unsigned)( group ) < (unsigned)( STATSGROUP_COUNT )", "group doesn't index STATSGROUP_COUNT\n\t%i not in [0, %i)", group, v4) )
      __debugbreak();
  }
  return s_statsGroupData[v1].ddlState.member->name;
}

/*
==============
Com_PlayerData_GetStatsGroupSize
==============
*/
__int64 Com_PlayerData_GetStatsGroupSize(StatsGroup statsGroup)
{
  StatsBlobId StatsBlob; 
  __int64 v2; 

  StatsBlob = Com_PlayerData_GetStatsBlob(statsGroup);
  v2 = StatsBlob;
  if ( (unsigned int)StatsBlob >= STATS_BLOB_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1016, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", StatsBlob, 6) )
    __debugbreak();
  return s_statsBlobData[v2].statsSize;
}

/*
==============
Com_PlayerData_GetWeaponNameFromIndex
==============
*/
const char *Com_PlayerData_GetWeaponNameFromIndex(const int weaponIndex)
{
  __int64 v3; 
  char *v4; 
  StatsGroup LoadoutStatsGroupForGameMode; 
  StatsGroup v6; 
  const char *v7; 
  const DDLDef *Asset; 
  DDLState state; 
  unsigned int path[6]; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  v3 = weaponIndex;
  v4 = (char *)&queryFormat.fmt + 3;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode();
  v6 = LoadoutStatsGroupForGameMode;
  if ( LoadoutStatsGroupForGameMode == STATSGROUP_RANKEDLOADOUTS )
  {
    v7 = "ddl/mp/rankedloadouts.ddl";
  }
  else
  {
    if ( LoadoutStatsGroupForGameMode != STATSGROUP_PRIVATELOADOUTS )
      return v4;
    v7 = "ddl/mp/privateloadouts.ddl";
  }
  Asset = Com_DDL_LoadAsset(v7);
  LiveStorage_InitializeDDLStateForStatsGroup(Asset, &state, v6);
  path[0] = j_SL_GetRawHash(scr_const.squadMembers);
  path[1] = j_SL_GetRawHash(scr_const.loadouts);
  path[2] = 0;
  path[3] = j_SL_GetRawHash(scr_const.weaponSetups);
  path[4] = 0;
  path[5] = j_SL_GetRawHash(scr_const.weapon);
  if ( DDL_MoveToPathByHash(&state, &state, 6, path) && DDL_GetType(&state) )
  {
    if ( state.member->externalIndex >= (unsigned int)Asset->enumCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 471, ASSERT_TYPE_ASSERT, "(unsigned)( state.member->externalIndex ) < (unsigned)( def->enumCount )", "state.member->externalIndex doesn't index def->enumCount\n\t%i not in [0, %i)", state.member->externalIndex, Asset->enumCount) )
      __debugbreak();
    return Asset->enumList[state.member->externalIndex].members[v3];
  }
  return v4;
}

/*
==============
Com_PlayerData_RegisterCommands
==============
*/
void Com_PlayerData_RegisterCommands(void)
{
  ;
}

/*
==============
Com_PlayerData_RegisterDvars
==============
*/
void Com_PlayerData_RegisterDvars(void)
{
  Dvar_BeginPermanentRegistration();
  g_useStatsGroups = Dvar_RegisterBool("LOLTQSNSKN", 1, 0, "If true then StatsGroups are in use for all playerdata.def accessing.");
  Dvar_EndPermanentRegistration();
}

/*
==============
Com_PlayerData_SetArrayBoolByIndex
==============
*/
void Com_PlayerData_SetArrayBoolByIndex(DDLContext *buffer, const scr_string_t arrayName, const int itemIndex, bool value, const StatsGroup statsGroup)
{
  const DDLDef *def; 
  unsigned int RawHash; 
  const char *v13; 
  const char *v14; 
  DDLState state; 

  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  if ( !arrayName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 200, ASSERT_TYPE_ASSERT, "(arrayName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "arrayName != NULL_SCR_STRING", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
    __debugbreak();
  def = buffer->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 203, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
  RawHash = j_SL_GetRawHash(arrayName);
  if ( !DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
  {
    v13 = SL_ConvertToString(arrayName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE6850, 864i64, v13);
  }
  if ( !DDL_MoveToIndex(&state, &state, itemIndex) )
  {
    v14 = SL_ConvertToString(arrayName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE68A0, 865i64, (unsigned int)itemIndex, v14);
  }
  DDL_SetBool(&state, buffer, value);
}

/*
==============
Com_PlayerData_SetArrayBoolByName
==============
*/
void Com_PlayerData_SetArrayBoolByName(DDLContext *buffer, const scr_string_t arrayName, const scr_string_t itemName, bool value, const StatsGroup statsGroup)
{
  const DDLDef *def; 
  unsigned int RawHash; 
  const char *v13; 
  unsigned int v14; 
  const char *v15; 
  const char *v16; 
  DDLState state; 

  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  if ( !arrayName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 175, ASSERT_TYPE_ASSERT, "(arrayName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "arrayName != NULL_SCR_STRING", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
    __debugbreak();
  def = buffer->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 178, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
  RawHash = j_SL_GetRawHash(arrayName);
  if ( !DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
  {
    v13 = SL_ConvertToString(arrayName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE6900, 862i64, v13);
  }
  v14 = j_SL_GetRawHash(itemName);
  if ( !DDL_MoveToNameByHash(&state, &state, v14, NULL) )
  {
    v15 = SL_ConvertToString(arrayName);
    v16 = SL_ConvertToString(itemName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE6960, 863i64, v16, v15);
  }
  DDL_SetBool(&state, buffer, value);
}

/*
==============
Com_PlayerData_SetArrayIntByIndex
==============
*/
void Com_PlayerData_SetArrayIntByIndex(DDLContext *buffer, const scr_string_t arrayName, const int itemIndex, int value, const StatsGroup statsGroup)
{
  const DDLDef *def; 
  unsigned int RawHash; 
  const char *v13; 
  const char *v14; 
  DDLState state; 

  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  if ( !arrayName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 314, ASSERT_TYPE_ASSERT, "(arrayName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "arrayName != NULL_SCR_STRING", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
    __debugbreak();
  def = buffer->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 317, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
  RawHash = j_SL_GetRawHash(arrayName);
  if ( !DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
  {
    v13 = SL_ConvertToString(arrayName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE6850, 872i64, v13);
  }
  if ( !DDL_MoveToIndex(&state, &state, itemIndex) )
  {
    v14 = SL_ConvertToString(arrayName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE6AC0, 873i64, (unsigned int)itemIndex, v14);
  }
  DDL_SetInt(&state, buffer, value);
}

/*
==============
Com_PlayerData_SetArrayIntByName
==============
*/
void Com_PlayerData_SetArrayIntByName(DDLContext *buffer, const scr_string_t arrayName, const scr_string_t itemName, int value, const StatsGroup statsGroup)
{
  const DDLDef *def; 
  unsigned int RawHash; 
  const char *v13; 
  unsigned int v14; 
  const char *v15; 
  const char *v16; 
  DDLState state; 

  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  if ( !arrayName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 289, ASSERT_TYPE_ASSERT, "(arrayName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "arrayName != NULL_SCR_STRING", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
    __debugbreak();
  def = buffer->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 292, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
  RawHash = j_SL_GetRawHash(arrayName);
  if ( !DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
  {
    v13 = SL_ConvertToString(arrayName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE6850, 870i64, v13);
  }
  v14 = j_SL_GetRawHash(itemName);
  if ( !DDL_MoveToNameByHash(&state, &state, v14, NULL) )
  {
    v15 = SL_ConvertToString(arrayName);
    v16 = SL_ConvertToString(itemName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE6960, 871i64, v16, v15);
  }
  DDL_SetInt(&state, buffer, value);
}

/*
==============
Com_PlayerData_SetInternalInt
==============
*/
void Com_PlayerData_SetInternalInt(const unsigned int *navHashes, int navHashCount, int value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup)
{
  Com_DDL_SetInt(navHashes, navHashCount, value, buffer, modifiedFlags, statsGroup, 0x1046Cu);
}

/*
==============
Com_PlayerData_SetInternalIntByName
==============
*/
void Com_PlayerData_SetInternalIntByName(unsigned int hash, int value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup)
{
  unsigned int navHashes; 

  navHashes = hash;
  Com_DDL_SetInt(&navHashes, 1, value, buffer, modifiedFlags, statsGroup, 0x1046Cu);
}

/*
==============
Com_PlayerData_SetInternalString
==============
*/
void Com_PlayerData_SetInternalString(const unsigned int *navHashes, int navHashCount, const char *value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup)
{
  Com_DDL_SetString(navHashes, navHashCount, value, buffer, modifiedFlags, statsGroup, 0x1046Cu);
}

/*
==============
Com_PlayerData_SetInternalStringByName
==============
*/
void Com_PlayerData_SetInternalStringByName(unsigned int hash, const char *value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup)
{
  unsigned int navHashes; 

  navHashes = hash;
  Com_DDL_SetString(&navHashes, 1, value, buffer, modifiedFlags, statsGroup, 0x1046Cu);
}

/*
==============
Com_PlayerData_SetupPacketValuesForStatsGroup
==============
*/
void Com_PlayerData_SetupPacketValuesForStatsGroup(StatsBlobId statsBlobId, const int maxPackets, unsigned int *offsetValue)
{
  __int64 v3; 
  __int64 v6; 
  __int64 v9; 
  __int64 v10; 

  v3 = statsBlobId;
  if ( (unsigned int)statsBlobId >= STATS_BLOB_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 624, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlobId ) < (unsigned)( ( sizeof( *array_counter( s_statsBlobData ) ) + 0 ) )", "statsBlobId doesn't index ARRAY_COUNT( s_statsBlobData )\n\t%i not in [0, %i)", statsBlobId, 6) )
    __debugbreak();
  v6 = v3;
  s_statsBlobData[v6].bitmask = 0i64;
  s_statsBlobData[v6].maxStatPackets = maxPackets;
  s_statsBlobData[v6].bitoffset = *offsetValue;
  if ( maxPackets + *offsetValue > 0x36 )
  {
    LODWORD(v9) = maxPackets + *offsetValue;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 632, ASSERT_TYPE_ASSERT, "(( offsetValue + maxPackets ) <= 54u)", "%s\n\toffsetValue (%u) is larger than the given bitmask (%d), increase the type size of MAX_STATPACKETS", "( offsetValue + maxPackets ) <= MAX_STATPACKETS", v9, 54) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 2 }
  if ( (int)*(float *)&_XMM4 > maxPackets )
  {
    LODWORD(v10) = v3;
    LODWORD(v9) = maxPackets;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 633, ASSERT_TYPE_ASSERT, "(FastCeil( static_cast< float >( statsGroupBlob->dataSize ) / static_cast< float >( ( 1270 - 16 - 2 ) - ( 8 ) ) ) <= maxPackets)", "%s\n\tStats data did not fit into %d fragmented packets. Increase the stat packet data for blob %d", "FastCeil( static_cast< float >( statsGroupBlob->dataSize ) / static_cast< float >( MAX_NETWORK_PACKETLEN - STATPACKET_HEADERSIZE ) ) <= maxPackets", v9, v10) )
      __debugbreak();
  }
  s_statsBlobData[v6].bitmask = ((1i64 << *offsetValue) - 1) ^ ((1i64 << ((unsigned __int8)*offsetValue + (unsigned __int8)maxPackets)) - 1);
  *offsetValue += maxPackets;
}

/*
==============
Com_PlayerData_UnregisterCommands
==============
*/
void Com_PlayerData_UnregisterCommands(void)
{
  ;
}

/*
==============
statPacketHeader_t::DeserializeFromMsg
==============
*/
char statPacketHeader_t::DeserializeFromMsg(statPacketHeader_t *this, msg_t *msg)
{
  unsigned __int64 Bits; 
  StatsGroup v5; 
  int Byte; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1173, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  Bits = MSG_ReadBits(msg, 3u);
  v5 = (int)Bits;
  if ( Bits > 5 )
  {
    Com_PrintWarning(16, "statPacketHeader_t::DeserializeFromMsg - Invalid stat header with group %ld\n", Bits);
    return 0;
  }
  if ( Bits + 0x80000000 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum StatsGroup __cdecl truncate_cast_impl<enum StatsGroup,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
    __debugbreak();
  this->statsGroup = v5;
  Byte = MSG_ReadByte(msg);
  this->packetNum = Byte;
  if ( Byte < 0 || (unsigned int)Byte >= 0x36 )
  {
    Com_PrintWarning(16, "statPacketHeader_t::DeserializeFromMsg - Invalid stat packet %i of stats data\n", (unsigned int)Byte);
    return 0;
  }
  this->moreFragments = MSG_ReadBit(msg) != 0;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 245, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  msg->bit = 8 * msg->readcount;
  return 1;
}

/*
==============
LiveStorage_InitializeDDLStateForStatsGroup
==============
*/
void LiveStorage_InitializeDDLStateForStatsGroup(const DDLDef *def, DDLState *state, const StatsGroup statsGroup)
{
  __int64 v3; 
  DDLState result; 

  v3 = statsGroup;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 591, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 592, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( (_DWORD)v3 == 7 || !g_useStatsGroups->current.enabled )
  {
    *state = *DDL_GetRootState(&result, def);
  }
  else
  {
    *state = s_statsGroupData[v3].ddlState;
    if ( state->ddlDef != def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 602, ASSERT_TYPE_ASSERT, "(state->ddlDef == def)", "%s\n\tplayerdata.ddl has moved locations in memory.", "state->ddlDef == def") )
      __debugbreak();
    state->ddlDef = def;
  }
}

/*
==============
statPacketHeader_t::SerializeToMsg
==============
*/
void statPacketHeader_t::SerializeToMsg(statPacketHeader_t *this, msg_t *msg)
{
  int cursize; 
  int v5; 
  int v6; 
  int v7; 
  __int64 v8; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1150, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  cursize = msg->cursize;
  MSG_WriteString(msg, "stats");
  MSG_WriteBits(msg, this->statsGroup, 3u);
  MSG_WriteByte(msg, this->packetNum);
  MSG_WriteBool(msg, this->moreFragments);
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 239, ASSERT_TYPE_ASSERT, "(!msg->readOnly)", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  v5 = msg->cursize;
  v6 = 8 * v5;
  v7 = v5 - cursize;
  msg->bit = v6;
  if ( v7 != 8 )
  {
    LODWORD(v8) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_data.cpp", 1166, ASSERT_TYPE_ASSERT, "( ( ( msg->cursize - originalSize ) == ( 8 ) ) )", "( ( msg->cursize - originalSize ) ) = %i", v8) )
      __debugbreak();
  }
}

