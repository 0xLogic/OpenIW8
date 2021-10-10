/*
==============
SV_MigrationInit
==============
*/

void SV_MigrationInit(void)
{
  ?SV_MigrationInit@@YAXXZ();
}

/*
==============
SV_MigrationUpdateCount
==============
*/

void __fastcall SV_MigrationUpdateCount(const int count)
{
  ?SV_MigrationUpdateCount@@YAXH@Z(count);
}

/*
==============
SV_Migration_DropInvalidClients
==============
*/

void SV_Migration_DropInvalidClients(void)
{
  ?SV_Migration_DropInvalidClients@@YAXXZ();
}

/*
==============
SV_MigrationStart
==============
*/

void __fastcall SV_MigrationStart(const char *reason, const int flags)
{
  ?SV_MigrationStart@@YAXPEBDH@Z(reason, flags);
}

/*
==============
SV_MigrationFrame
==============
*/

void SV_MigrationFrame(void)
{
  ?SV_MigrationFrame@@YAXXZ();
}

/*
==============
SV_MigrationSave
==============
*/

void SV_MigrationSave(void)
{
  ?SV_MigrationSave@@YAXXZ();
}

/*
==============
SV_GetMigrationDefaultFlags
==============
*/

int __fastcall SV_GetMigrationDefaultFlags()
{
  return ?SV_GetMigrationDefaultFlags@@YAHXZ();
}

/*
==============
SV_MigrationEnd
==============
*/

void SV_MigrationEnd(void)
{
  ?SV_MigrationEnd@@YAXXZ();
}

/*
==============
SV_MigrationPacket
==============
*/

bool __fastcall SV_MigrationPacket(const char *cmd, netadr_t *from, msg_t *msg)
{
  return ?SV_MigrationPacket@@YA_NPEBDUnetadr_t@@PEAUmsg_t@@@Z(cmd, from, msg);
}

/*
==============
SV_MigrationLimitReached
==============
*/

bool __fastcall SV_MigrationLimitReached()
{
  return ?SV_MigrationLimitReached@@YA_NXZ();
}

/*
==============
SV_Migration_SetDropReasonForLocalClients
==============
*/

void __fastcall SV_Migration_SetDropReasonForLocalClients(const char *dropReason)
{
  ?SV_Migration_SetDropReasonForLocalClients@@YAXPEBD@Z(dropReason);
}

/*
==============
SV_Migration_UpdateStressTest
==============
*/

void SV_Migration_UpdateStressTest(void)
{
  ?SV_Migration_UpdateStressTest@@YAXXZ();
}

/*
==============
SV_IsMigrating
==============
*/

bool __fastcall SV_IsMigrating()
{
  return ?SV_IsMigrating@@YA_NXZ();
}

/*
==============
SV_GetMigrationFlags
==============
*/

int __fastcall SV_GetMigrationFlags()
{
  return ?SV_GetMigrationFlags@@YAHXZ();
}

/*
==============
SV_Migration_StressTestSaveLoad
==============
*/

void SV_Migration_StressTestSaveLoad(void)
{
  ?SV_Migration_StressTestSaveLoad@@YAXXZ();
}

/*
==============
HandleRatingMsg
==============
*/
void HandleRatingMsg(const int clientNum, msg_t *msg)
{
  __int64 v3; 
  unsigned int v5; 
  int Long; 
  int rating; 
  int v8; 
  const PartyData *PartyData; 
  const char *MemberName; 
  int v11; 
  MigrationClient *clients; 
  __int64 v13; 
  int v14; 
  int v15; 

  v3 = clientNum;
  if ( migGlob.clients[v3].state == CSTATE_WAITFORRATING )
  {
    migGlob.clients[v3].state = CSTATE_MIGRATING;
    v5 = 0;
    migGlob.clients[v3].rating = MSG_ReadLong(msg);
    migGlob.clients[v3].cantTalkToClientCount = 0;
    Long = MSG_ReadLong(msg);
    rating = migGlob.clients[v3].rating;
    v8 = Long;
    PartyData = Lobby_GetPartyData();
    MemberName = Party_GetMemberName(PartyData, clientNum);
    v15 = v8;
    v14 = rating;
    Com_Printf(25, "HandleRatingMsg - Got %s msg from client %i (%s): rating is %i, connectivity is 0x%x.\n", "mrate", (unsigned int)clientNum, MemberName, v14, v15);
    if ( v8 != -1 && (int)SvClient::ms_clientCount > 0 )
    {
      v11 = 1;
      clients = migGlob.clients;
      do
      {
        if ( clients->state && (v11 & v8) == 0 )
        {
          if ( SvClient::GetCommonClient(v5)->state >= CS_ACTIVE )
          {
            Com_Printf(25, "Client %i cannot get packets to client %i, so we will reduce their host rating.\n", (unsigned int)clientNum, v5);
            ++migGlob.clients[v3].cantTalkToClientCount;
          }
          else
          {
            LODWORD(v13) = v5;
            Com_Printf(25, "Client %i cannot get packets to client %i, but that is OK because client %i isn't CS_ACTIVE yet.\n", (unsigned int)clientNum, v5, v13);
          }
        }
        ++v5;
        v11 = __ROL4__(v11, 1);
        ++clients;
      }
      while ( (int)v5 < (int)SvClient::ms_clientCount );
    }
  }
  else
  {
    Com_Printf(25, "Got stray %s msg from client %i\n", "mrate", (unsigned int)clientNum);
  }
}

/*
==============
HandleSaveAckMsg
==============
*/
void HandleSaveAckMsg(const int clientNum, msg_t *msg)
{
  unsigned int Short; 
  Block *window; 

  if ( clientNum == migGlob.newHost && migGlob.clients[clientNum].state == CSTATE_MIGRATING && migGlob.state == MSTATE_SENDING )
  {
    Short = MSG_ReadShort(msg);
    window = migGlob.window;
    while ( window->num != Short )
    {
      if ( (__int64)++window >= (__int64)&migGlob.newHost )
      {
        Com_Printf(25, "got ack from unexpected block %i.  Ignoring.\n", Short);
        return;
      }
    }
    Com_Printf(25, "got ack for block %i.\n", Short);
    if ( 1190 * migGlob.block >= migGlob.totalSize )
    {
      window->num = -1;
    }
    else
    {
      CreateBlock(migGlob.block, window);
      ++migGlob.block;
    }
  }
  else
  {
    Com_Printf(25, "Got stray %s msg from client %i\n", "mack", (unsigned int)clientNum);
  }
}

/*
==============
HandleHeaderAckMsg
==============
*/
void HandleHeaderAckMsg(const int clientNum, msg_t *msg)
{
  SaveGame *SaveHandle; 
  SaveGame *v3; 
  MemoryFile *MemoryFile; 
  unsigned __int64 UsedSize; 
  int v6; 
  MigrationClientState fmt; 
  MigrationState state; 

  if ( clientNum == migGlob.newHost && migGlob.clients[clientNum].state == CSTATE_MIGRATING && migGlob.state == MSTATE_HEADER )
  {
    SaveHandle = G_SaveMemoryMP_GetSaveHandle(SAVE_MIGRATION_HANDLE);
    migGlob.state = MSTATE_SENDING;
    v3 = SaveHandle;
    MemoryFile = SaveMemory_GetMemoryFile(SaveHandle);
    UsedSize = MemFile_GetUsedSize(MemoryFile);
    migGlob.totalSize = truncate_cast<int,unsigned __int64>(UsedSize);
    if ( migGlob.totalSize != v3->header.bodySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 479, ASSERT_TYPE_ASSERT, "(migGlob.totalSize == save->header.bodySize)", (const char *)&queryFormat, "migGlob.totalSize == save->header.bodySize") )
      __debugbreak();
    v6 = 0;
    *(_QWORD *)&migGlob.block = 0i64;
    do
    {
      CreateBlock(v6, &migGlob.window[v6]);
      v6 = migGlob.block + 1;
      migGlob.block = v6;
    }
    while ( v6 < 32 );
  }
  else
  {
    state = migGlob.state;
    fmt = migGlob.clients[clientNum].state;
    Com_Printf(25, "Got stray %s msg from client %i (client state = %i, migration state = %i)\n", "mhack", clientNum, fmt, state);
  }
}

/*
==============
HandleMigrateToAckMsg
==============
*/
void HandleMigrateToAckMsg(const int clientNum, msg_t *msg)
{
  __int64 v2; 
  MigrationClientState v3; 
  MigrationState state; 

  v2 = clientNum;
  if ( migGlob.clients[v2].state == CSTATE_MIGRATING && migGlob.state == MSTATE_FINALIZING )
  {
    Com_Printf(25, "Got %s msg from client %i\n", "mtoack", (unsigned int)clientNum);
    migGlob.clients[v2].state = CSTATE_INACTIVE;
    migGlob.clients[v2].complete = 1;
  }
  else
  {
    state = migGlob.state;
    v3 = migGlob.clients[v2].state;
    Com_Printf(25, "Got stray %s msg from client %i (client state = %i, migration state = %i)\n", "mtoack", (unsigned int)clientNum, v3, state);
  }
}

/*
==============
CreateBlock
==============
*/
void CreateBlock(const int blockNum, Block *block)
{
  int v4; 
  int v5; 

  if ( !block && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 422, ASSERT_TYPE_ASSERT, "(block)", (const char *)&queryFormat, "block") )
    __debugbreak();
  if ( blockNum < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 423, ASSERT_TYPE_ASSERT, "(blockNum >= 0)", (const char *)&queryFormat, "blockNum >= 0") )
    __debugbreak();
  block->num = blockNum;
  if ( 1190 * (blockNum + 1) <= migGlob.totalSize )
    v4 = 1190;
  else
    v4 = migGlob.totalSize % 1190;
  block->size = v4;
  v5 = blockNum;
  block->timeout = 0;
  if ( !v4 )
    v5 = -1;
  block->num = v5;
}

/*
==============
SV_GetMigrationDefaultFlags
==============
*/
_BOOL8 SV_GetMigrationDefaultFlags()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_migration_kickoldhost;
  if ( !DVARBOOL_migration_kickoldhost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migration_kickoldhost") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
SV_GetMigrationFlags
==============
*/
__int64 SV_GetMigrationFlags()
{
  return (unsigned int)migGlob.flags;
}

/*
==============
SV_IsMigrating
==============
*/
_BOOL8 SV_IsMigrating()
{
  return migGlob.active;
}

/*
==============
SV_MigrationEnd
==============
*/
void SV_MigrationEnd(void)
{
  if ( !migGlob.active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 1373, ASSERT_TYPE_ASSERT, "(SV_IsMigrating())", (const char *)&queryFormat, "SV_IsMigrating()") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 1374, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  *(_QWORD *)&migGlob.broadcastTime = 0i64;
  migGlob.state = MSTATE_INACTIVE;
  migGlob.active = 0;
  migGlob.reason[0] = 0;
  migGlob.flags = 0;
  migGlob.eventLogged = 0;
  Migration_Shutdown();
}

/*
==============
SV_MigrationFrame
==============
*/
void SV_MigrationFrame()
{
  __int128 v0; 
  const dvar_t *v1; 
  int integer; 
  int v3; 
  int migrationCount; 
  int v5; 
  const dvar_t *v6; 
  float value; 
  const dvar_t *v8; 
  float v9; 
  SvGameModeApplication *ActiveServerApplication; 
  int FrameDuration; 
  int v12; 
  double Float_Internal_DebugName; 
  const dvar_t *v14; 
  int v15; 
  MigrationClient *clients; 
  signed int v17; 
  MigrationClient *v18; 
  char v19; 
  unsigned int i; 
  int v21; 
  float totalSize; 
  double v23; 
  msg_t buf; 
  unsigned __int8 data[1248]; 
  __int128 v26; 

  v1 = DCONST_DVARINT_migration_timeBetween;
  if ( !DCONST_DVARINT_migration_timeBetween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migration_timeBetween") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v3 = Sys_Milliseconds();
  migrationCount = migGlob.migrationCount;
  v5 = 0;
  if ( v3 - migGlob.migrationTime >= integer )
    migrationCount = 0;
  migGlob.migrationCount = migrationCount;
  if ( !SvPersistentGlobalsMP::IsFrontEndServer() )
  {
    v6 = DCONST_DVARFLT_migrationStressRandTime;
    if ( !DCONST_DVARFLT_migrationStressRandTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migrationStressRandTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    value = v6->current.value;
    if ( value >= 0.001 )
    {
      v8 = DCONST_DVARFLT_migrationStressMinTime;
      v26 = v0;
      v9 = (float)(level.time - g_migrationStressStartTime) * 0.001;
      if ( !DCONST_DVARFLT_migrationStressMinTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migrationStressMinTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v9 >= v8->current.value )
      {
        ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
        FrameDuration = SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
        v12 = (int)(float)(value * 1000.0);
        if ( !G_irand(0, v12 / FrameDuration) )
        {
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_migrationStressSaveLoadOnly, "migrationStressSaveLoadOnly") )
          {
            SV_HostMigrationSave_f();
            s_migrationStressTestSaveLoad = 1;
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_migrationStressMinTime, "migrationStressMinTime");
            g_migrationStressStartTime = level.time - (int)(float)(*(float *)&Float_Internal_DebugName * 1000.0) + 1000;
          }
          else
          {
            SV_HostMigrationStart_Internal(0);
          }
        }
      }
    }
  }
  if ( migGlob.active )
  {
    if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 1145, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
      __debugbreak();
    v14 = DCONST_DVARINT_migration_verboseBroadcastTime;
    if ( !DCONST_DVARINT_migration_verboseBroadcastTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migration_verboseBroadcastTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = v14->current.integer;
    clients = migGlob.clients;
    if ( Sys_Milliseconds() - migGlob.broadcastTime >= v15 )
    {
      MSG_Init(&buf, data, 1237);
      MSG_WriteString(&buf, "mstate");
      MSG_WriteByte(&buf, migGlob.verboseState);
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 85, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( !ComCharacterLimits::ms_gameData.m_clientBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 86, ASSERT_TYPE_ASSERT, "(ms_gameData.m_clientBits > 0)", (const char *)&queryFormat, "ms_gameData.m_clientBits > 0") )
        __debugbreak();
      MSG_WriteBits(&buf, migGlob.verboseNewHost, ComCharacterLimits::ms_gameData.m_clientBits);
      MSG_WriteLong(&buf, migGlob.verboseData);
      v17 = 0;
      migGlob.broadcastTime = Sys_Milliseconds();
      if ( (int)SvClient::ms_clientCount > 0 )
      {
        v18 = migGlob.clients;
        do
        {
          if ( SvClient::GetCommonClient(v17)->state >= CS_CONNECTED && v18->state )
            SendUnreliable(v17, buf.data, buf.cursize);
          ++v17;
          ++v18;
        }
        while ( v17 < (int)SvClient::ms_clientCount );
      }
    }
    SV_Migration_CheckTimeouts();
    switch ( migGlob.state )
    {
      case MSTATE_STARTING:
        if ( (int)SvClient::ms_clientCount <= 0 )
        {
LABEL_58:
          SV_Migration_PickNewHost((unsigned int)(migGlob.state - 1));
        }
        else
        {
          while ( clients->state != CSTATE_WAITFORRATING )
          {
            ++v5;
            ++clients;
            if ( v5 >= (int)SvClient::ms_clientCount )
              goto LABEL_58;
          }
        }
        break;
      case MSTATE_SENDING:
        v19 = 1;
        if ( migGlob.blocksPerFrame <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 1056, ASSERT_TYPE_ASSERT, "(migGlob.blocksPerFrame > 0)", (const char *)&queryFormat, "migGlob.blocksPerFrame > 0") )
          __debugbreak();
        for ( i = migGlob.windowIndex; i < migGlob.windowIndex + 32; ++i )
        {
          if ( v5 >= migGlob.blocksPerFrame )
            break;
          if ( migGlob.window[i & 0x1F].num >= 0 )
          {
            v19 = 0;
            if ( migGlob.window[i & 0x1F].timeout - Sys_Milliseconds() <= 0 )
            {
              if ( !SendBlock(migGlob.newHost, &migGlob.window[i & 0x1F]) )
                break;
              ++v5;
            }
          }
        }
        ++migGlob.windowIndex;
        migGlob.verboseNewHost = migGlob.newHost;
        migGlob.verboseState = MVSTATE_SENDING;
        migGlob.verboseData = 100 * migGlob.block / ((migGlob.totalSize + 1189) / 1190);
        if ( v19 )
        {
          v21 = Sys_Milliseconds();
          totalSize = (float)migGlob.totalSize;
          migGlob.sendDuration = v21 - migGlob.startTime;
          v23 = (float)((float)(999.99994 / (float)(Sys_Milliseconds() - migGlob.startTime)) * totalSize);
          Com_Printf(25, "done sending migration save %i / %i = %.2f bps\n", (unsigned int)migGlob.totalSize, (unsigned int)migGlob.sendDuration, v23);
          migGlob.state = MSTATE_FINALIZING;
          migGlob.giveUpTime = Sys_Milliseconds() + 2000;
          SendMigrateToMessages();
        }
        break;
      case MSTATE_FINALIZING:
        SendMigrateToMessages();
        break;
    }
  }
}

/*
==============
SV_MigrationInit
==============
*/
void SV_MigrationInit(void)
{
  memset_0(&migGlob, 0, sizeof(migGlob));
  migGlob.newHost = -1;
}

/*
==============
SV_MigrationLimitReached
==============
*/
bool SV_MigrationLimitReached()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARINT_migration_limit;
  if ( !DCONST_DVARINT_migration_limit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migration_limit") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return migGlob.migrationCount >= v0->current.integer;
}

/*
==============
SV_MigrationPacket
==============
*/
char SV_MigrationPacket(const char *cmd, netadr_t *from, msg_t *msg)
{
  const char *string; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  const char *v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  SvClientMP *ClientAtAddress; 
  void (__fastcall *func)(const LocalClientNum_t, netadr_t, msg_t *); 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  char *fmt; 
  __int64 v22; 
  __int64 v23; 

  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 1342, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  string = messageHandlers_2[0].string;
  v7 = 0;
  if ( *messageHandlers_2[0].string )
  {
    v8 = 0i64;
    while ( 2 )
    {
      v9 = 0x7FFFFFFFi64;
      if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v10 = (const char *)(cmd - string);
      while ( 1 )
      {
        v11 = (unsigned __int8)string[(_QWORD)v10];
        v12 = v9;
        v13 = *(unsigned __int8 *)string++;
        --v9;
        if ( !v12 )
        {
LABEL_21:
          if ( BYTE1(SvGameGlobals::ms_allocatedType) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_persistent_globals_mp.h", 166, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
            __debugbreak();
          if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
            __debugbreak();
          if ( BYTE2(SvPersistentGlobals::ms_svPersistent[4].m_skelMemSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 1350, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tReceived migration command '%s' for front-end server", "!SvPersistentGlobalsMP::IsFrontEndServer()", cmd) )
            __debugbreak();
          if ( !messageHandlers_2[v7].func && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 1352, ASSERT_TYPE_ASSERT, "(messageHandlers[handler].func)", (const char *)&queryFormat, "messageHandlers[handler].func") )
            __debugbreak();
          ClientAtAddress = SvClientMP::FindClientAtAddress(from);
          if ( ClientAtAddress )
          {
            func = messageHandlers_2[v7].func;
            if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
              __debugbreak();
            v19 = (__int64)((unsigned __int128)(((char *)ClientAtAddress - (char *)SvClient::GetCommonClient(0)) * (__int128)0x586B96EA21E43D39i64) >> 64) >> 17;
            v20 = (v19 >> 63) + v19;
            if ( (unsigned int)v20 >= 0xC8 )
            {
              LODWORD(v23) = 200;
              LODWORD(v22) = v20;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1072, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 200 )", "index doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", v22, v23) )
                __debugbreak();
            }
            ((void (__fastcall *)(_QWORD, msg_t *))func)((unsigned int)v20, msg);
            return 1;
          }
          else
          {
            LODWORD(v23) = from->ip[3];
            LODWORD(v22) = from->ip[2];
            LODWORD(fmt) = from->ip[1];
            Com_Printf(25, "got %s msg from unknown client %u.%u.%u.%u\n", cmd, from->ip[0], fmt, v22, v23);
            return 1;
          }
        }
        if ( v11 != v13 )
        {
          v14 = v11 + 32;
          if ( (unsigned int)(v11 - 65) > 0x19 )
            v14 = v11;
          v11 = v14;
          v15 = v13 + 32;
          if ( (unsigned int)(v13 - 65) > 0x19 )
            v15 = v13;
          if ( v11 != v15 )
            break;
        }
        if ( !v11 )
          goto LABEL_21;
      }
      ++v8;
      ++v7;
      string = messageHandlers_2[v8].string;
      if ( *string )
        continue;
      break;
    }
  }
  return 0;
}

/*
==============
SV_MigrationSave
==============
*/
void SV_MigrationSave(void)
{
  SaveGame *save; 
  MemoryFile *MemoryFile; 
  unsigned __int8 *Buffer; 
  int BufferSize; 
  char v4; 
  unsigned int saveCheckSum; 
  unsigned __int64 UsedSize; 
  int saveId; 

  save = G_SaveMemoryMP_GetSaveHandle(SAVE_MIGRATION_HANDLE);
  MemoryFile = SaveMemory_GetMemoryFile(save);
  Buffer = Migration_GetBuffer();
  BufferSize = Migration_GetBufferSize();
  MemFile_InitForWriting(MemoryFile, BufferSize, Buffer, 0, 1, StreamModeSource_MigrationSave);
  G_SaveMP_SaveState(MemoryFile, 0, 0, 1);
  MemFile_StartSegment(MemoryFile, -1, StreamModeSource_MigrationSave);
  v4 = SvGameGlobals::ms_allocatedType;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    saveId = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", saveId) )
      __debugbreak();
    v4 = SvGameGlobals::ms_allocatedType;
  }
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
    __debugbreak();
  G_SaveMemoryMP_CreateHeader("migration", "migration", (const char *)&queryFormat.fmt + 3, SvGameGlobals::ms_svGameGlobals->mapcrc, 0, SAVE_TYPE_INTERNAL, migGlob.migrationCount, save);
  saveCheckSum = save->header.saveCheckSum;
  UsedSize = MemFile_GetUsedSize(MemoryFile);
  Com_Printf(15, "^6[MIGRATION PROFILE] %zu bytes, checksum: %i\n", UsedSize, saveCheckSum);
}

/*
==============
SV_MigrationStart
==============
*/

void __fastcall SV_MigrationStart(const char *reason, const int flags, __int64 a3, double _XMM3_8)
{
  int v6; 
  int ShouldAskPartyMembersToFollowUs; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  signed int i; 
  SvClient *CommonClient; 
  PartyData *GameParty; 
  unsigned __int8 *ArchiveBuffer; 
  SaveGame *save; 
  MemoryFile *MemoryFile; 
  unsigned __int8 *Buffer; 
  int BufferSize; 
  char v18; 
  unsigned int saveCheckSum; 
  unsigned __int64 UsedSize; 
  signed int v21; 
  int *p_attempts; 
  const dvar_t *v23; 
  int integer; 
  int v25; 
  SvGameModeApplication *ActiveServerApplication; 
  unsigned int v27; 
  const char *v29; 
  __int64 saveId; 
  unsigned int outSize; 

  if ( migGlob.active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 731, ASSERT_TYPE_ASSERT, "(!SV_IsMigrating())", (const char *)&queryFormat, "!SV_IsMigrating()") )
    __debugbreak();
  if ( !Com_IsGameLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 732, ASSERT_TYPE_ASSERT, "(Com_IsGameLocalServerRunning())", (const char *)&queryFormat, "Com_IsGameLocalServerRunning()") )
    __debugbreak();
  v6 = flags & 1;
  Lobby_GetPartyData()->stopAfterRound = v6;
  if ( (flags & 1) != 0 && g_partyData.inParty )
  {
    ShouldAskPartyMembersToFollowUs = SV_ShouldAskPartyMembersToFollowUs(flags);
    g_partyData.stopAfterRound = ShouldAskPartyMembersToFollowUs == 0;
    g_partyData.backingOut = ShouldAskPartyMembersToFollowUs != 0;
  }
  v8 = DCONST_DVARINT_migration_limit;
  if ( !DCONST_DVARINT_migration_limit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migration_limit") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( migGlob.migrationCount >= v8->current.integer )
  {
    v9 = DCONST_DVARINT_migration_limit;
    if ( !DCONST_DVARINT_migration_limit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migration_limit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    Com_Printf(15, "Migration limit (%i) reached.  Ending match instead.\n", v9->current.unsignedInt);
    goto LABEL_18;
  }
  if ( SV_CountRealClients() <= 1 )
  {
    Com_Printf(15, "No client to migrate to.  Ending match instead.\n");
LABEL_18:
    Cbuf_AddCall(LOCAL_CLIENT_0, SV_CmdsMP_SendMatchData);
    SV_MainMP_MatchEnd();
    return;
  }
  if ( reason )
    Core_strcpy(migGlob.reason, 0x40ui64, reason);
  else
    migGlob.reason[0] = 0;
  ++migGlob.migrationCount;
  migGlob.flags = flags;
  migGlob.active = 1;
  SV_SnapWorkersMP_WaitSnapshotWorkers();
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i);
    if ( SvClient::GetCommonClient(i)->state == CS_ACTIVE )
    {
      if ( !SV_HasAllClientStatPackets((const SvClientMP *)CommonClient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 689, ASSERT_TYPE_ASSERT, "(SV_HasAllClientStatPackets( cl ))", "%s\n\tClient migrating without having all of its stats set", "SV_HasAllClientStatPackets( cl )") )
        __debugbreak();
    }
    else
    {
      if ( SvClient::GetCommonClient(i)->state > CS_ZOMBIE )
        SV_ClientMP_DropClient((SvClientMP *)CommonClient, "EXE/MIGRATION_IN_PROGRESS", 1);
      CommonClient->state = CS_FREE;
      SV_Live_RemoveClient(i, "EXE/MIGRATION_IN_PROGRESS", 0, NET_CLOSE_DTLS);
    }
  }
  GameParty = Live_GetGameParty();
  Party_WaitAsyncRequests(GameParty);
  if ( v6 )
    SV_Migration_SetDropReasonForLocalClients("EXE/PLAYERKICKED");
  SV_SnapWorkersMP_WaitSnapshotArchiveAddWorkers();
  ArchiveBuffer = SV_SnapshotMP_GetArchiveBuffer(&outSize);
  Migration_Init(ArchiveBuffer, outSize);
  G_ActiveMP_PrepareMigration();
  save = G_SaveMemoryMP_GetSaveHandle(SAVE_MIGRATION_HANDLE);
  MemoryFile = SaveMemory_GetMemoryFile(save);
  Buffer = Migration_GetBuffer();
  BufferSize = Migration_GetBufferSize();
  MemFile_InitForWriting(MemoryFile, BufferSize, Buffer, 0, 1, StreamModeSource_MigrationSave);
  G_SaveMP_SaveState(MemoryFile, 0, 0, 1);
  MemFile_StartSegment(MemoryFile, -1, StreamModeSource_MigrationSave);
  v18 = SvGameGlobals::ms_allocatedType;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    LODWORD(saveId) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", saveId) )
      __debugbreak();
    v18 = SvGameGlobals::ms_allocatedType;
  }
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
    __debugbreak();
  G_SaveMemoryMP_CreateHeader("migration", "migration", (const char *)&queryFormat.fmt + 3, SvGameGlobals::ms_svGameGlobals->mapcrc, 0, SAVE_TYPE_INTERNAL, migGlob.migrationCount, save);
  saveCheckSum = save->header.saveCheckSum;
  UsedSize = MemFile_GetUsedSize(MemoryFile);
  Com_Printf(15, "^6[MIGRATION PROFILE] %zu bytes, checksum: %i\n", UsedSize, saveCheckSum);
  if ( v6 )
    SV_Migration_SetDropReasonForLocalClients(NULL);
  v21 = 0;
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    p_attempts = &migGlob.clients[0].attempts;
    do
    {
      if ( SvClient::GetCommonClient(v21)->state >= CS_CONNECTED )
      {
        *p_attempts = 0;
        p_attempts[4] = Sys_Milliseconds();
        SendStartMessage(v21);
      }
      else
      {
        *(p_attempts - 1) = 0;
      }
      ++v21;
      p_attempts += 7;
    }
    while ( v21 < (int)SvClient::ms_clientCount );
  }
  v23 = DCONST_DVARINT_migration_blocksperframe;
  migGlob.state = MSTATE_STARTING;
  migGlob.newHost = -1;
  if ( !DCONST_DVARINT_migration_blocksperframe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migration_blocksperframe") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  integer = v23->current.integer;
  if ( !integer )
  {
    v25 = Online_GetUploadSpeed() / 8;
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
      __debugbreak();
    v27 = (int)((unsigned __int64)(1892268751i64 * ActiveServerApplication->m_frameDuration * v25) >> 32) >> 19;
    integer = (v27 >> 31) + v27;
    if ( integer > 32 )
      integer = 32;
    if ( integer < 1 )
      integer = 1;
    Com_Printf(15, "Blocks per frame: %i\n", (unsigned int)integer);
  }
  migGlob.blocksPerFrame = integer;
  SV_GameMP_SetGameEndTime(0);
  __asm { vxorpd  xmm3, xmm3, xmm3 }
  v29 = j_va("%i %i %g %g", 0i64, 0i64, (_QWORD)_XMM3, DOUBLE_1_0);
  SV_SetConfigstring(0x217u, v29);
  OnlineMatchmakerOmniscient::PostMigrationNoLongerHost(&OnlineMatchmakerOmniscient::ms_instance);
  migGlob.broadcastTime = 0;
  migGlob.verboseState = MVSTATE_WAITING;
}

/*
==============
SV_MigrationUpdateCount
==============
*/
void SV_MigrationUpdateCount(const int count)
{
  migGlob.migrationCount = count;
  migGlob.migrationTime = Sys_Milliseconds();
}

/*
==============
SV_Migration_CheckTimeouts
==============
*/
void SV_Migration_CheckTimeouts()
{
  unsigned int v0; 
  MigrationClient *clients; 
  unsigned int v2; 
  int attempts; 
  unsigned int v4; 
  __int64 newHost; 
  char *fmt; 
  __int64 v7; 
  __int64 v8; 

  v0 = 0;
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    clients = migGlob.clients;
    do
    {
      if ( clients->state )
      {
        if ( v0 >= SvClient::ms_clientCount )
        {
          LODWORD(v8) = SvClient::ms_clientCount;
          LODWORD(v7) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 838, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        if ( SvClient::GetCommonClient(v0)->state >= CS_CONNECTED )
        {
          if ( !SV_BotIsBot(v0) )
          {
            if ( (unsigned int)(migGlob.state - 3) <= 1 || migGlob.state == MSTATE_HEADER && migGlob.newHost != v0 )
              goto LABEL_38;
            if ( clients->msgTimeout - Sys_Milliseconds() < 0 )
            {
              attempts = clients->attempts;
              v4 = Sys_Milliseconds();
              LODWORD(v7) = 60;
              LODWORD(fmt) = attempts;
              Com_Printf(25, "SV_Migration: [%i] clientNum %i msg timed out.  attempt %i of %i\n", v4, v0, fmt, v7);
            }
            if ( clients->msgTimeout - Sys_Milliseconds() >= 0 )
              goto LABEL_38;
          }
        }
        else
        {
          v2 = Sys_Milliseconds();
          Com_Printf(25, "[%i] clientNum %i no longer connected\n", v2, v0);
        }
        if ( v0 >= SvClient::ms_clientCount )
        {
          LODWORD(v8) = SvClient::ms_clientCount;
          LODWORD(v7) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 875, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        if ( clients->state == CSTATE_INACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 878, ASSERT_TYPE_ASSERT, "(SV_Migration_IsClientActive( clientNum ))", (const char *)&queryFormat, "SV_Migration_IsClientActive( clientNum )") )
          __debugbreak();
        if ( clients->attempts >= 60 )
        {
          clients->timedOut = 1;
          clients->state = CSTATE_INACTIVE;
        }
        if ( migGlob.state == MSTATE_STARTING )
        {
          if ( clients->state == CSTATE_WAITFORRATING )
            SendStartMessage(v0);
          goto LABEL_38;
        }
        if ( migGlob.state == MSTATE_HEADER )
        {
          newHost = (unsigned int)migGlob.newHost;
          if ( v0 != migGlob.newHost )
            goto LABEL_38;
          if ( clients->state )
          {
            SendHeader(migGlob.newHost);
            goto LABEL_38;
          }
          goto LABEL_32;
        }
        newHost = (unsigned int)(migGlob.state - 3);
        if ( migGlob.state != MSTATE_SENDING )
        {
          if ( migGlob.state != MSTATE_FINALIZING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 926, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "should not be checking migration timeouts if migration is inactive") )
            __debugbreak();
          goto LABEL_38;
        }
        if ( v0 == migGlob.newHost )
        {
          clients->state = CSTATE_INACTIVE;
LABEL_32:
          migGlob.state = MSTATE_STARTING;
          SV_Migration_PickNewHost(newHost);
        }
      }
LABEL_38:
      ++v0;
      ++clients;
    }
    while ( (int)v0 < (int)SvClient::ms_clientCount );
  }
}

/*
==============
SV_Migration_DropInvalidClients
==============
*/
void SV_Migration_DropInvalidClients(void)
{
  signed int i; 
  SvClient *CommonClient; 

  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i);
    if ( SvClient::GetCommonClient(i)->state == CS_ACTIVE )
    {
      if ( !SV_HasAllClientStatPackets((const SvClientMP *)CommonClient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 689, ASSERT_TYPE_ASSERT, "(SV_HasAllClientStatPackets( cl ))", "%s\n\tClient migrating without having all of its stats set", "SV_HasAllClientStatPackets( cl )") )
        __debugbreak();
    }
    else
    {
      if ( SvClient::GetCommonClient(i)->state > CS_ZOMBIE )
        SV_ClientMP_DropClient((SvClientMP *)CommonClient, "EXE/MIGRATION_IN_PROGRESS", 1);
      CommonClient->state = CS_FREE;
      SV_Live_RemoveClient(i, "EXE/MIGRATION_IN_PROGRESS", 0, NET_CLOSE_DTLS);
    }
  }
}

/*
==============
SV_Migration_PickNewHost
==============
*/
void SV_Migration_PickNewHost()
{
  signed int v0; 
  int v1; 
  unsigned int v2; 
  PartyData *PartyData; 
  const dvar_t *v4; 
  const PartyData *v5; 
  ClientPlatform v6; 
  bool v7; 
  unsigned int v8; 
  int *p_cantTalkToClientCount; 
  const char *MemberName; 
  int v11; 
  int v12; 
  int v13; 
  const PartyData *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  SvClient *CommonClient; 
  SvClient *v19; 
  SvClientMP *v20; 
  __int64 newHost; 
  char *fmt; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  bool v27; 
  unsigned int v28; 

  if ( !migGlob.active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 559, ASSERT_TYPE_ASSERT, "(SV_IsMigrating())", (const char *)&queryFormat, "SV_IsMigrating()") )
    __debugbreak();
  v0 = 0;
  migGlob.newHost = -1;
  v1 = 0;
  v2 = 0;
  PartyData = Lobby_GetPartyData();
  v4 = DVARBOOL_migration_crossplay_allow_pc_host;
  v5 = PartyData;
  if ( !DVARBOOL_migration_crossplay_allow_pc_host && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migration_crossplay_allow_pc_host") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v7 = 0;
  if ( !v4->current.enabled && Party_IsCrossplayParty(v5) )
  {
    LOBYTE(v6) = 2;
    if ( Party_AnyMemberOnPlatform(v5, v6) )
      v7 = 1;
  }
  v27 = v7;
  v8 = 0;
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    p_cantTalkToClientCount = &migGlob.clients[0].cantTalkToClientCount;
    do
    {
      if ( *(p_cantTalkToClientCount - 4) && !Party_IsServer(v5, v8) )
      {
        if ( v7 && (unsigned __int8)Party_GetMemberPlatform(v5, v8) == PLATFORM_BATTLENET )
        {
          MemberName = Party_GetMemberName(v5, v8);
          Com_Printf(25, "Migration - skipping %i (%s) due to cross play game not allowing PC listen hosts\n", v8, MemberName);
        }
        else
        {
          v28 = v2 + 1;
          if ( *(p_cantTalkToClientCount - 4) != 2 )
          {
            LODWORD(v26) = 2;
            LODWORD(v25) = *(p_cantTalkToClientCount - 4);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 592, ASSERT_TYPE_ASSERT, "( client->state ) == ( CSTATE_MIGRATING )", "%s == %s\n\t%i, %i", "client->state", "CSTATE_MIGRATING", v25, v26) )
              __debugbreak();
          }
          if ( *p_cantTalkToClientCount < 0 )
          {
            LODWORD(v25) = *p_cantTalkToClientCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 593, ASSERT_TYPE_ASSERT, "( client->cantTalkToClientCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "client->cantTalkToClientCount", "0", v25, 0i64) )
              __debugbreak();
          }
          v11 = *(p_cantTalkToClientCount - 1);
          v12 = *p_cantTalkToClientCount;
          v13 = v11 >> *p_cantTalkToClientCount;
          v14 = Lobby_GetPartyData();
          v15 = Party_GetMemberName(v14, v8);
          LODWORD(v24) = v12;
          LODWORD(v23) = v13;
          LODWORD(fmt) = v11;
          Com_Printf(25, "Migration rating for %i (%s) - %i (adjusted to %i from %i unreachable)\n", v8, v15, fmt, v23, v24);
          if ( v13 > v1 )
          {
            if ( v13 < 1 )
            {
              LODWORD(v26) = 1;
              LODWORD(v25) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 601, ASSERT_TYPE_ASSERT, "( adjustedRating ) >= ( 1 )", "%s >= %s\n\t%i, %i", "adjustedRating", "MIGRATION_LOWEST_RATING", v25, v26) )
                __debugbreak();
            }
            migGlob.newHost = v8;
            v1 = v13;
          }
          v2 = v28;
        }
      }
      v7 = v27;
      ++v8;
      p_cantTalkToClientCount += 7;
    }
    while ( (int)v8 < (int)SvClient::ms_clientCount );
  }
  if ( migGlob.newHost == -1 )
  {
    v16 = "disconnect EXE/MIGRATIONABORTED_BACKOUT";
    v17 = "EXE/MIGRATIONABORTED_BACKOUT";
    if ( (migGlob.flags & 2) == 0 )
      v16 = "disconnect EXE/MIGRATIONABORTED";
    if ( (migGlob.flags & 2) == 0 )
      v17 = "EXE/MIGRATIONABORTED";
    Com_Printf(25, "No acceptable new host available for migration. We received %i ratings, none of them acceptable. Sending '%s' command.\n", v2, v17);
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      do
      {
        if ( SvClient::GetCommonClient(v0)->state >= CS_CONNECTED && !Party_IsServer(v5, v0) )
        {
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          CommonClient = SvClient::GetCommonClient(v0);
          NetConnection::SendUnreliable((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6], v16);
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          v19 = SvClient::GetCommonClient(v0);
          NetConnection::SendUnreliable((NetConnection *)&v19[642].lastUsercmd.sightedClientsMask.data[6], v16);
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          v20 = (SvClientMP *)SvClient::GetCommonClient(v0);
          SV_ClientMP_DropClient(v20, v17, 0);
        }
        ++v0;
      }
      while ( v0 < (int)SvClient::ms_clientCount );
    }
    migGlob.flags |= 1u;
    SV_MainMP_MatchEnd();
  }
  else
  {
    if ( v1 < 1 )
    {
      LODWORD(v26) = 1;
      LODWORD(v25) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 640, ASSERT_TYPE_ASSERT, "( bestRating ) >= ( 1 )", "%s >= %s\n\t%i, %i", "bestRating", "MIGRATION_LOWEST_RATING", v25, v26) )
        __debugbreak();
    }
    newHost = migGlob.newHost;
    migGlob.verboseState = MVSTATE_RATING;
    migGlob.verboseNewHost = migGlob.newHost;
    migGlob.verboseData = migGlob.clients[newHost].rating;
    migGlob.clients[newHost].attempts = 0;
    SendHeader(migGlob.newHost);
  }
}

/*
==============
SV_Migration_SendMigrateTo
==============
*/
void SV_Migration_SendMigrateTo(const int clientNum)
{
  PartyData *ServerLobby; 
  const char *v3; 
  PartyData *PartyData; 
  unsigned int partyMembersBits; 
  int v6; 
  __int64 v7; 
  unsigned int v9; 
  XUID result; 
  msg_t buf; 
  unsigned __int8 data[256]; 

  if ( clientNum >= SvClient::ms_clientCount )
  {
    v9 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 492, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v9) )
      __debugbreak();
  }
  ServerLobby = SV_MainMP_GetServerLobby();
  Party_GetXuid(&result, ServerLobby, migGlob.newHost);
  if ( ServerLobby->partyMembersBits <= 0 )
  {
    LODWORD(v7) = ServerLobby->partyMembersBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 497, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", v7) )
      __debugbreak();
  }
  MSG_Init(&buf, data, 256);
  v3 = j_va("%imigrateto", 0i64);
  MSG_WriteString(&buf, v3);
  PartyData = Lobby_GetPartyData();
  MSG_WriteBits(&buf, PartyData->migrateData.indexBits, 2u);
  partyMembersBits = ServerLobby->partyMembersBits;
  v6 = Party_HostNum(ServerLobby);
  MSG_WriteBits(&buf, v6, partyMembersBits);
  MSG_WriteBits(&buf, migGlob.newHost, ServerLobby->partyMembersBits);
  MSG_WriteBits(&buf, migGlob.flags, 2u);
  MSG_WriteBits(&buf, 1i64, 1u);
  XUID::Serialize(&result, &buf);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 507, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
    __debugbreak();
  SendUnreliable(clientNum, buf.data, buf.cursize);
}

/*
==============
SV_Migration_SetDropReasonForLocalClients
==============
*/
void SV_Migration_SetDropReasonForLocalClients(const char *dropReason)
{
  signed int i; 
  SvClient *CommonClient; 

  if ( !migGlob.active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 706, ASSERT_TYPE_ASSERT, "(SV_IsMigrating())", (const char *)&queryFormat, "SV_IsMigrating()") )
    __debugbreak();
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i);
    if ( CommonClient->state && SV_ClientMP_IsLocalClient(i) )
    {
      if ( CommonClient->state != CS_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 712, ASSERT_TYPE_ASSERT, "(cl->state == SvClientConnectionState::CS_ACTIVE)", "%s\n\tThis function is specifically used for setting the drop reason on the old host during a migration", "cl->state == SvClientConnectionState::CS_ACTIVE") )
        __debugbreak();
      if ( dropReason )
        SV_ClientMP_DelayDropClient((SvClientMP *)CommonClient, dropReason);
      else
        *(_QWORD *)&CommonClient[1].state = 0i64;
    }
  }
}

/*
==============
SV_Migration_StressTestSaveLoad
==============
*/
void SV_Migration_StressTestSaveLoad(void)
{
  if ( s_migrationStressTestSaveLoad )
  {
    SV_HostMigrationLoad_f();
    s_migrationStressTestSaveLoad = 0;
  }
}

/*
==============
SV_Migration_UpdateStressTest
==============
*/
void SV_Migration_UpdateStressTest(void)
{
  const dvar_t *v0; 
  float value; 
  const dvar_t *v2; 
  float v3; 
  SvGameModeApplication *ActiveServerApplication; 
  int FrameDuration; 
  int v6; 
  double Float_Internal_DebugName; 

  if ( !SvPersistentGlobalsMP::IsFrontEndServer() )
  {
    v0 = DCONST_DVARFLT_migrationStressRandTime;
    if ( !DCONST_DVARFLT_migrationStressRandTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migrationStressRandTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    value = v0->current.value;
    if ( value >= 0.001 )
    {
      v2 = DCONST_DVARFLT_migrationStressMinTime;
      v3 = (float)(level.time - g_migrationStressStartTime) * 0.001;
      if ( !DCONST_DVARFLT_migrationStressMinTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migrationStressMinTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( v3 >= v2->current.value )
      {
        ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
        FrameDuration = SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
        v6 = (int)(float)(value * 1000.0);
        if ( !G_irand(0, v6 / FrameDuration) )
        {
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_migrationStressSaveLoadOnly, "migrationStressSaveLoadOnly") )
          {
            SV_HostMigrationSave_f();
            s_migrationStressTestSaveLoad = 1;
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_migrationStressMinTime, "migrationStressMinTime");
            g_migrationStressStartTime = level.time - (int)(float)(*(float *)&Float_Internal_DebugName * 1000.0) + 1000;
          }
          else
          {
            SV_HostMigrationStart_Internal(0);
          }
        }
      }
    }
  }
}

/*
==============
SV_ShouldAskPartyMembersToFollowUs
==============
*/
__int64 SV_ShouldAskPartyMembersToFollowUs(const int flags)
{
  if ( (flags & 2) == 0 )
    return 0i64;
  if ( (flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 395, ASSERT_TYPE_ASSERT, "(flags & MFLAG_KICKOLDHOST)", (const char *)&queryFormat, "flags & MFLAG_KICKOLDHOST") )
    __debugbreak();
  return 1i64;
}

/*
==============
SendBlock
==============
*/
char SendBlock(const int clientNum, Block *block)
{
  unsigned __int8 *Buffer; 
  unsigned __int8 *v5; 
  int v6; 
  const dvar_t *v7; 
  int integer; 
  __int64 v10; 
  msg_t buf; 
  unsigned __int8 data[1248]; 

  if ( !block && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 443, ASSERT_TYPE_ASSERT, "(block)", (const char *)&queryFormat, "block") )
    __debugbreak();
  if ( block->num < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 444, ASSERT_TYPE_ASSERT, "(block->num >= 0)", (const char *)&queryFormat, "block->num >= 0") )
    __debugbreak();
  if ( (unsigned int)(block->size - 1) > 0x4A5 )
  {
    LODWORD(v10) = block->size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 445, ASSERT_TYPE_ASSERT, "( ( block->size > 0 && block->size <= (( 1270 - 16 - 2 ) - 62) ) )", "( block->size ) = %i", v10) )
      __debugbreak();
  }
  if ( 1190 * block->num >= migGlob.totalSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 446, ASSERT_TYPE_ASSERT, "(block->num * (( 1270 - 16 - 2 ) - 62) < migGlob.totalSize)", (const char *)&queryFormat, "block->num * MIGRATION_BLOCK_SIZE < migGlob.totalSize") )
    __debugbreak();
  Buffer = Migration_GetBuffer();
  MSG_Init(&buf, data, 1237);
  MSG_WriteString(&buf, "mdata");
  MSG_WriteShort(&buf, block->num);
  MSG_WriteShort(&buf, block->size);
  v5 = &Buffer[1190 * block->num];
  MSG_WriteData(&buf, v5, block->size);
  v6 = SaveMemory_ComputeChecksum(v5, block->size);
  MSG_WriteLong(&buf, v6);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 459, ASSERT_TYPE_ASSERT, "(!msg.overflowed)", (const char *)&queryFormat, "!msg.overflowed") )
    __debugbreak();
  if ( !SendToClient(clientNum, buf.data, buf.cursize) )
    return 0;
  Com_Printf(25, "sending block %i to %i\n", (unsigned int)block->num, (unsigned int)clientNum);
  v7 = DCONST_DVARINT_migration_msgtimeout;
  if ( !DCONST_DVARINT_migration_msgtimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migration_msgtimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  block->timeout = integer + Sys_Milliseconds();
  return 1;
}

/*
==============
SendHeader
==============
*/
void SendHeader(const int clientNum)
{
  SaveGame *SaveHandle; 
  msg_t buf; 
  unsigned __int8 data[1248]; 

  migGlob.startTime = Sys_Milliseconds();
  migGlob.state = MSTATE_HEADER;
  SaveHandle = G_SaveMemoryMP_GetSaveHandle(SAVE_MIGRATION_HANDLE);
  MSG_Init(&buf, data, 1237);
  MSG_WriteString(&buf, "mhead");
  MSG_WriteData(&buf, SaveHandle, 896);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 528, ASSERT_TYPE_ASSERT, "(!msg.overflowed)", (const char *)&queryFormat, "!msg.overflowed") )
    __debugbreak();
  SendToClient(clientNum, buf.data, buf.cursize);
}

/*
==============
SendMigrateToMessages
==============
*/
void SendMigrateToMessages()
{
  char v0; 
  const PartyData *PartyData; 
  signed int v2; 
  int *p_nextSendTime; 
  __int64 v4; 
  __int64 v5; 

  v0 = 1;
  PartyData = Lobby_GetPartyData();
  if ( migGlob.giveUpTime - Sys_Milliseconds() <= 0 )
  {
    Com_Printf(25, "Giving up on sending migrateto messages (time's up).\n");
LABEL_17:
    if ( migGlob.reason[0] )
      Com_Error_impl(ERR_SERVERDISCONNECT, (const ObfuscateErrorText)&queryFormat, migGlob.reason);
    else
      SV_MainMP_MatchEnd();
    return;
  }
  v2 = 0;
  if ( (int)SvClient::ms_clientCount <= 0 )
    goto LABEL_15;
  p_nextSendTime = &migGlob.clients[0].nextSendTime;
  do
  {
    if ( SvClient::GetCommonClient(v2)->state >= CS_CONNECTED && *(p_nextSendTime - 5) && ((migGlob.flags & 1) == 0 || !Party_IsServer(PartyData, v2)) )
    {
      if ( *(p_nextSendTime - 5) != 2 )
      {
        LODWORD(v5) = 2;
        LODWORD(v4) = *(p_nextSendTime - 5);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 986, ASSERT_TYPE_ASSERT, "( migGlob.clients[clientNum].state ) == ( CSTATE_MIGRATING )", "%s == %s\n\t%i, %i", "migGlob.clients[clientNum].state", "CSTATE_MIGRATING", v4, v5) )
          __debugbreak();
      }
      v0 = 0;
      if ( *p_nextSendTime - Sys_Milliseconds() <= 0 )
      {
        Com_Printf(25, "Sending migrateto to client %i.\n", (unsigned int)v2);
        SV_Migration_SendMigrateTo(v2);
        SV_Migration_SendMigrateTo(v2);
        *p_nextSendTime = Sys_Milliseconds() + 200;
      }
    }
    ++v2;
    p_nextSendTime += 7;
  }
  while ( v2 < (int)SvClient::ms_clientCount );
  if ( v0 )
  {
LABEL_15:
    Com_Printf(25, "All migrateto messages acked.\n");
    goto LABEL_17;
  }
}

/*
==============
SendStartMessage
==============
*/
void SendStartMessage(const int clientNum)
{
  __int64 v1; 
  bool v2; 
  unsigned int v4; 
  msg_t buf; 
  unsigned __int8 data[1248]; 

  v1 = clientNum;
  if ( clientNum >= SvClient::ms_clientCount )
  {
    v4 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 408, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v4) )
      __debugbreak();
  }
  MSG_Init(&buf, data, 1237);
  MSG_WriteString(&buf, "mstart");
  if ( (migGlob.flags & 2) != 0 )
  {
    if ( (migGlob.flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 395, ASSERT_TYPE_ASSERT, "(flags & MFLAG_KICKOLDHOST)", (const char *)&queryFormat, "flags & MFLAG_KICKOLDHOST") )
      __debugbreak();
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  MSG_WriteBool(&buf, v2);
  SendToClient(v1, buf.data, buf.cursize);
  migGlob.clients[v1].state = CSTATE_WAITFORRATING;
}

/*
==============
SendToClient
==============
*/
bool SendToClient(const int clientNum, const unsigned __int8 *data, int len)
{
  __int64 v4; 
  const dvar_t *v6; 
  int integer; 

  v4 = clientNum;
  if ( clientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_migration.cpp", 313, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, SvClient::ms_clientCount) )
    __debugbreak();
  v6 = DCONST_DVARINT_migration_msgtimeout;
  ++migGlob.clients[v4].attempts;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "migration_msgtimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  migGlob.clients[v4].msgTimeout = integer + Sys_Milliseconds();
  return SvClient::GetCommonClient(v4)->state >= CS_CONNECTED && SendUnreliable(v4, data, len);
}

