/*
==============
CG_EditablePlayerData_Cache
==============
*/

void __fastcall CG_EditablePlayerData_Cache(const LocalClientNum_t localClientNum)
{
  ?CG_EditablePlayerData_Cache@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_EditablePlayerData_GetModifiedFlags
==============
*/

unsigned __int8 *__fastcall CG_EditablePlayerData_GetModifiedFlags(const LocalClientNum_t localClientNum)
{
  return ?CG_EditablePlayerData_GetModifiedFlags@@YAPEAEW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_EditablePlayerdata_GetBuffer
==============
*/

const unsigned __int8 *__fastcall CG_EditablePlayerdata_GetBuffer(const LocalClientNum_t localClientNum)
{
  return ?CG_EditablePlayerdata_GetBuffer@@YAPEBEW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_EditablePlayerData_IsDirty
==============
*/

bool __fastcall CG_EditablePlayerData_IsDirty(const LocalClientNum_t localClientNum)
{
  return ?CG_EditablePlayerData_IsDirty@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_EditablePlayerData_GetDDLContext
==============
*/

DDLContext *__fastcall CG_EditablePlayerData_GetDDLContext(const LocalClientNum_t localClientNum, const StatsGroup statsGroup)
{
  return ?CG_EditablePlayerData_GetDDLContext@@YAPEAUDDLContext@@W4LocalClientNum_t@@W4StatsGroup@@@Z(localClientNum, statsGroup);
}

/*
==============
CG_EditablePlayerData_SendPlayerDataDeltas
==============
*/

void __fastcall CG_EditablePlayerData_SendPlayerDataDeltas(const LocalClientNum_t localClientNum)
{
  ?CG_EditablePlayerData_SendPlayerDataDeltas@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_EditablePlayerData_GetCurrentVersion
==============
*/

unsigned __int8 __fastcall CG_EditablePlayerData_GetCurrentVersion(const LocalClientNum_t localClientNum)
{
  return ?CG_EditablePlayerData_GetCurrentVersion@@YAEW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_EditablePlayerData_Init
==============
*/

void CG_EditablePlayerData_Init(void)
{
  ?CG_EditablePlayerData_Init@@YAXXZ();
}

/*
==============
CG_EditablePlayerData_Cache
==============
*/
void CG_EditablePlayerData_Cache(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int ControllerFromClient; 
  unsigned __int8 *StatsBufferForSource; 
  int v4; 
  DDLContext *v5; 
  StatsGroup *p_statsGroup; 
  EditableDDLCallbackData *userData; 
  unsigned __int8 *v8; 
  const DDLDef *DefForStatsGroup; 
  int PlayerDataBufferSize; 
  bool Context; 
  void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp); 
  StatsSource ActiveStatsSource; 
  unsigned int outRandomInt; 
  unsigned __int64 v15; 
  bool out_statsGroupObfuscated; 

  v1 = localClientNum;
  CG_EditablePlayerData_Reset(localClientNum);
  if ( CL_IsLocalClientActive((LocalClientNum_t)v1) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
    if ( LiveStorage_AreStatsFetched(ControllerFromClient, ActiveStatsSource) )
    {
      StatsBufferForSource = LiveStorage_GetStatsBufferForSource(ControllerFromClient, ActiveStatsSource);
      LiveStorage_LocallyUnObfuscateStats(ControllerFromClient, &out_statsGroupObfuscated);
      v15 = 66672 * v1;
      memcpy_0(s_playerData[v1], StatsBufferForSource, sizeof(unsigned __int8[66672]));
      LiveStorage_LocallyObfuscateStats(ControllerFromClient, &out_statsGroupObfuscated);
      v4 = 0;
      s_dataCached[v1] = 1;
      v5 = s_editableContexts[v1];
      p_statsGroup = &s_callbackData[v1][0].statsGroup;
      userData = s_callbackData[v1];
      do
      {
        v8 = &s_playerData[v15 / 0x10470][Com_PlayerData_GetRawDataOffset((StatsGroup)v4)];
        *((_DWORD *)p_statsGroup - 1) = v1;
        *p_statsGroup = v4;
        DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup((StatsGroup)v4);
        PlayerDataBufferSize = LiveStorage_GetPlayerDataBufferSize((StatsGroup)v4);
        Context = Com_DDL_CreateContext(v8, PlayerDataBufferSize, DefForStatsGroup, v5, EditableDDLCallbackFunc, userData);
        if ( DefForStatsGroup && Context )
        {
          LODWORD(accessCB) = ActiveStatsSource;
          Com_Printf(14, "CG_EditablePlayerData_Cache: Obfuscating stats copy in memory: controller %i, statsGroup %i, statsSource %i\n", ControllerFromClient, (unsigned int)v4, accessCB);
          Com_LocallyObfuscateStatsGroup(v5, v8, (const StatsGroup)v4, &outRandomInt);
        }
        else
        {
          LODWORD(accessCB) = ActiveStatsSource;
          Com_PrintWarning(14, "WARNING: CG_EditablePlayerData_Cache - Could not obfuscate stats in memory: controller %i, statsGroup %i, statsSource %i\n", ControllerFromClient, (unsigned int)v4, accessCB);
        }
        ++v4;
        ++userData;
        ++v5;
        p_statsGroup += 2;
      }
      while ( v4 < 6 );
      *(_WORD *)s_anyDataModified = 0;
    }
    else
    {
      Com_PrintError(14, "Attempting to cache editable player data for client %d before they are fetched", (unsigned int)v1);
    }
  }
  else
  {
    Com_PrintError(14, "Attempting to cache editable player data for inactive client %d", (unsigned int)v1);
  }
}

/*
==============
CG_EditablePlayerData_GetCurrentVersion
==============
*/
__int64 CG_EditablePlayerData_GetCurrentVersion(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  float v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v4 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  if ( !s_dataCached[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 204, ASSERT_TYPE_ASSERT, "(s_dataCached[localClientNum])", (const char *)&queryFormat, "s_dataCached[localClientNum]") )
    __debugbreak();
  return s_editVersion[v1];
}

/*
==============
CG_EditablePlayerData_GetDDLContext
==============
*/
DDLContext *CG_EditablePlayerData_GetDDLContext(const LocalClientNum_t localClientNum, const StatsGroup statsGroup)
{
  __int64 v2; 
  __int64 v3; 
  float v6; 

  v2 = localClientNum;
  v3 = statsGroup;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( !s_dataCached[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 195, ASSERT_TYPE_ASSERT, "(s_dataCached[localClientNum])", (const char *)&queryFormat, "s_dataCached[localClientNum]") )
    __debugbreak();
  return &s_editableContexts[v2][v3];
}

/*
==============
CG_EditablePlayerData_GetModifiedFlags
==============
*/
unsigned __int8 *CG_EditablePlayerData_GetModifiedFlags(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  float v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v4 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 187, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_statsModifiedFlags[v1];
}

/*
==============
CG_EditablePlayerData_Init
==============
*/
void CG_EditablePlayerData_Init(void)
{
  int v0; 
  unsigned __int64 v1; 
  EditableDDLCallbackData *v2; 

  v0 = 0;
  v1 = 0i64;
  do
  {
    memset_0(s_statsModifiedFlags[v0], 0, sizeof(unsigned __int8[8334]));
    memset_0(s_playerData[v0], 0, sizeof(unsigned __int8[66672]));
    memset_0(s_editableContexts[v0], 0, sizeof(DDLContext[6]));
    v2 = s_callbackData[v0];
    *v2 = 0i64;
    v2[1] = 0i64;
    v2[2] = 0i64;
    v2[3] = 0i64;
    v2[4] = 0i64;
    v2[5] = 0i64;
    if ( v1 >= 2 )
    {
      j___report_rangecheckfailure(0i64);
      JUMPOUT(0x141C8D31Bi64);
    }
    s_anyDataModified[v1] = 0;
    ++v0;
    s_dataCached[v1] = 0;
    s_editVersion[v1++] = 0;
  }
  while ( v0 < 2 );
}

/*
==============
CG_EditablePlayerData_IsDirty
==============
*/
bool CG_EditablePlayerData_IsDirty(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  float v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v4 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 168, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_dataCached[v1] && s_anyDataModified[v1];
}

/*
==============
CG_EditablePlayerData_Reset
==============
*/
void CG_EditablePlayerData_Reset(const LocalClientNum_t localClientNum)
{
  unsigned __int64 v1; 
  EditableDDLCallbackData *v2; 

  v1 = localClientNum;
  memset_0(s_statsModifiedFlags[localClientNum], 0, sizeof(unsigned __int8[8334]));
  memset_0(s_playerData[v1], 0, sizeof(unsigned __int8[66672]));
  memset_0(s_editableContexts[v1], 0, sizeof(DDLContext[6]));
  v2 = s_callbackData[v1];
  *v2 = 0i64;
  v2[1] = 0i64;
  v2[2] = 0i64;
  v2[3] = 0i64;
  v2[4] = 0i64;
  v2[5] = 0i64;
  if ( v1 >= 2 )
  {
    j___report_rangecheckfailure(0i64);
    JUMPOUT(0x141C8D4ACi64);
  }
  s_anyDataModified[v1] = 0;
  s_dataCached[v1] = 0;
  s_editVersion[v1] = 0;
}

/*
==============
CG_EditablePlayerData_SendPlayerDataDeltas
==============
*/
void CG_EditablePlayerData_SendPlayerDataDeltas(const LocalClientNum_t localClientNum)
{
  unsigned __int64 v1; 
  char v2; 
  __int64 v3; 
  int v4; 
  int ControllerFromClient; 
  StatsSource statsSource; 
  StatsGroup StatsGroupByByteOffset; 
  unsigned int v8; 
  signed int i; 
  int v10; 
  char v11; 
  int cursize; 
  unsigned __int8 *v13; 
  DDLContext *context; 
  __int64 statsGroup; 
  unsigned int outFirstByte; 
  unsigned int outLastByte; 
  unsigned __int8 *v18; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  v1 = localClientNum;
  if ( Com_FrontEnd_IsInFrontEnd() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 218, ASSERT_TYPE_ASSERT, "(!Com_FrontEnd_IsInFrontEnd())", (const char *)&queryFormat, "!Com_FrontEnd_IsInFrontEnd()") )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(cl_maxLocalClients) )
  {
    LODWORD(context) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 219, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", context, cl_maxLocalClients) )
      __debugbreak();
  }
  if ( !s_dataCached[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 220, ASSERT_TYPE_ASSERT, "(s_dataCached[localClientNum])", (const char *)&queryFormat, "s_dataCached[localClientNum]") )
    __debugbreak();
  MSG_Init(&buf, data, 1020);
  MSG_WriteByte(&buf, 71i64);
  MSG_WriteByte(&buf, s_editVersion[v1]);
  v2 = 0;
  v18 = s_playerData[v1];
  outFirstByte = 0;
  outLastByte = 0;
  if ( Com_PlayerData_GetNextModifiedByte(0, s_statsModifiedFlags[v1], &outFirstByte, &outLastByte) )
  {
    while ( 1 )
    {
      v4 = outLastByte - outFirstByte + 1;
      if ( v4 > 255 )
      {
        LODWORD(context) = outLastByte - outFirstByte + 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 246, ASSERT_TYPE_ASSERT, "( ( byteCount <= 0xff ) )", "( byteCount ) = %i", context) )
          __debugbreak();
      }
      if ( outFirstByte >= 0x1046C )
      {
        LODWORD(context) = outFirstByte;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 247, ASSERT_TYPE_ASSERT, "( ( firstByte < ( ( 66672 ) - (sizeof( int )) ) ) )", "( firstByte ) = %i", context) )
          __debugbreak();
      }
      if ( v4 + outFirstByte >= 0xB0E8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 248, ASSERT_TYPE_ASSERT, "(firstByte + byteCount < ( __builtin_offsetof(StatsBlobs,nonGameData) ))", "%s\n\tDetected modified bytes beyond the editable portion of player data.", "firstByte + byteCount < OFFSETOF( StatsBlobs, nonGameData )") )
        __debugbreak();
      MSG_WriteLong(&buf, outFirstByte);
      MSG_WriteByte(&buf, v4);
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
      statsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
      StatsGroupByByteOffset = Com_PlayerData_FindStatsGroupByByteOffset(outFirstByte);
      Com_LocallyUnObfuscateStatsGroupIntoMessage(&buf, ControllerFromClient, outFirstByte, &v18[outFirstByte], v4, &s_editableContexts[v1][StatsGroupByByteOffset], StatsGroupByByteOffset, statsSource);
      if ( buf.overflowed )
        break;
      v8 = outLastByte;
      if ( outFirstByte > outLastByte )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 273, ASSERT_TYPE_ASSERT, "(firstByte <= lastByte)", (const char *)&queryFormat, "firstByte <= lastByte") )
          __debugbreak();
        v8 = outLastByte;
      }
      for ( i = outFirstByte; i <= v8; s_statsModifiedFlags[v1][v10 >> 3] &= ~(1 << v11) )
      {
        v10 = i;
        v11 = i & 7;
        if ( i < 0 )
        {
          v10 = i + 7;
          v11 -= 8;
        }
        ++i;
      }
      outFirstByte = 0;
      outLastByte = 0;
      v2 = 1;
      if ( !Com_PlayerData_GetNextModifiedByte(v8 + 1, s_statsModifiedFlags[v1], &outFirstByte, &outLastByte) )
        goto LABEL_30;
    }
    Com_PrintError(14, "CG_EditablePlayerData_SendPlayerDataDeltas overflowed msg attempting to write player data deltas\n");
    if ( v1 < 2 )
    {
      s_anyDataModified[v1] = 0;
      return;
    }
LABEL_53:
    j___report_rangecheckfailure(v3);
    JUMPOUT(0x141C8DABCi64);
  }
LABEL_30:
  if ( v1 >= 2 )
    goto LABEL_53;
  s_anyDataModified[v1] = 0;
  if ( v2 )
  {
    Com_Printf(14, "CG_EditablePlayerData_SendPlayerDataDeltas: Sending playerdata deltas of size %d to server\n", (unsigned int)buf.cursize);
    cursize = buf.cursize;
    v13 = buf.data;
    if ( !ClConnection::ms_connections[v1] )
    {
      if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
        __debugbreak();
      if ( !ClConnection::ms_connections[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api_inline.h", 31, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to send a reliable binary command but we are not connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
        __debugbreak();
    }
    if ( !CL_Demo_IsPlayingServer((LocalClientNum_t)v1) )
    {
      if ( (unsigned int)v1 >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&statsGroup = cl_maxLocalClients;
        LODWORD(context) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", context, statsGroup) )
          __debugbreak();
      }
      if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
        __debugbreak();
      if ( !ClConnection::ms_connections[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
        __debugbreak();
      ClConnection::ms_connections[v1]->AddReliableBinaryCommand(ClConnection::ms_connections[v1], v13, cursize);
    }
  }
}

/*
==============
CG_EditablePlayerdata_GetBuffer
==============
*/
unsigned __int8 *CG_EditablePlayerdata_GetBuffer(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  float v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v4 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_playerData[v1];
}

/*
==============
EditableDDLCallbackFunc
==============
*/
void EditableDDLCallbackFunc(const DDLContext *ddlContext, unsigned int bitStart, unsigned int bitSize, DDLAccessOp accessOp)
{
  int *userData; 
  unsigned int RawDataOffset; 
  __int64 v9; 
  bool v10; 

  if ( accessOp == DDL_ACCESS_WRITE )
  {
    if ( !ddlContext->userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_editableplayerdata.cpp", 49, ASSERT_TYPE_ASSERT, "(ddlContext->userData)", (const char *)&queryFormat, "ddlContext->userData") )
      __debugbreak();
    userData = (int *)ddlContext->userData;
    RawDataOffset = Com_PlayerData_GetRawDataOffset((StatsGroup)userData[1]);
    LiveStorage_FlagModifiedByteRange(RawDataOffset + (bitStart >> 3), RawDataOffset + ((bitStart + bitSize) >> 3), s_statsModifiedFlags[*userData]);
    v9 = *userData;
    v10 = s_anyDataModified[v9];
    s_anyDataModified[v9] = 1;
    if ( !v10 )
      ++s_editVersion[*userData];
    LUI_CoD_PlayerData_TriggerCallbackOnContextWrite(ddlContext, bitStart, bitSize);
  }
}

