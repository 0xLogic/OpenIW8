/*
==============
BB_GetClientGameTime
==============
*/

int __fastcall BB_GetClientGameTime()
{
  return ?BB_GetClientGameTime@@YAHXZ();
}

/*
==============
BB_SetupMsg
==============
*/

void BB_SetupMsg(void)
{
  ?BB_SetupMsg@@YAXXZ();
}

/*
==============
BB_AttachmentSend
==============
*/

void __fastcall BB_AttachmentSend(int attachmentNum, const void *data, int size)
{
  ?BB_AttachmentSend@@YAXHPEBXH@Z(attachmentNum, data, size);
}

/*
==============
BB_Lock
==============
*/

void BB_Lock(void)
{
  ?BB_Lock@@YAXXZ();
}

/*
==============
BB_GetServerGameTime
==============
*/

int __fastcall BB_GetServerGameTime()
{
  return ?BB_GetServerGameTime@@YAHXZ();
}

/*
==============
GetMACAddress
==============
*/

bool __fastcall GetMACAddress(unsigned __int8 *dest_mac_addr)
{
  return ?GetMACAddress@@YA_NQEAE@Z(dest_mac_addr);
}

/*
==============
BB_ResetHighWaterMark
==============
*/

void __fastcall BB_ResetHighWaterMark(const char *name)
{
  ?BB_ResetHighWaterMark@@YAXPEBD@Z(name);
}

/*
==============
BB_NetworkFlush
==============
*/

void BB_NetworkFlush(void)
{
  ?BB_NetworkFlush@@YAXXZ();
}

/*
==============
BBConsolePrinter::ForceFlush
==============
*/

bool __fastcall BBConsolePrinter::ForceFlush(BBConsolePrinter *this, bool SyncAndFlush)
{
  return ?ForceFlush@BBConsolePrinter@@QEAA_N_N@Z(this, SyncAndFlush);
}

/*
==============
BBConsolePrinter::AddLine
==============
*/

bool __fastcall BBConsolePrinter::AddLine(BBConsolePrinter *this, const char *line)
{
  return ?AddLine@BBConsolePrinter@@QEAA_NPEBD@Z(this, line);
}

/*
==============
LUI_CoD_LuaCall_BBPrint
==============
*/

int __fastcall LUI_CoD_LuaCall_BBPrint(lua_State *luaVM)
{
  return ?LUI_CoD_LuaCall_BBPrint@@YAHPEAUlua_State@@@Z(luaVM);
}

/*
==============
BuildBBGUID
==============
*/

unsigned __int64 __fastcall BuildBBGUID()
{
  return ?BuildBBGUID@@YA_KXZ();
}

/*
==============
BB_AddConsoleLine
==============
*/

void __fastcall BB_AddConsoleLine(const char *p_msg)
{
  ?BB_AddConsoleLine@@YAXPEBD@Z(p_msg);
}

/*
==============
BB_Print
==============
*/

BB_PRINT_REASON BB_Print(int controller, const char *name, const char *fmt, ...)
{
  return ?BB_Print@@YA?AW4BB_PRINT_REASON@@HPEBD0ZZ(controller, name, fmt);
}

/*
==============
GScr_BBReportSpawnFactors
==============
*/

void __fastcall GScr_BBReportSpawnFactors(scrContext_t *scrContext)
{
  ?GScr_BBReportSpawnFactors@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
BB_RegisterHighWaterMark
==============
*/

int __fastcall BB_RegisterHighWaterMark(const char *name)
{
  return ?BB_RegisterHighWaterMark@@YAHPEBD@Z(name);
}

/*
==============
BB_SetThrottle
==============
*/

void __fastcall BB_SetThrottle(const char *name, int throttle)
{
  ?BB_SetThrottle@@YAXPEBDH@Z(name, throttle);
}

/*
==============
BB_ResetHighWaterMark
==============
*/

void __fastcall BB_ResetHighWaterMark(int idx)
{
  ?BB_ResetHighWaterMark@@YAXH@Z(idx);
}

/*
==============
BB_Unlock
==============
*/

void BB_Unlock(void)
{
  ?BB_Unlock@@YAXXZ();
}

/*
==============
BBConsolePrinter::ShouldFlush
==============
*/

bool __fastcall BBConsolePrinter::ShouldFlush(BBConsolePrinter *this)
{
  return ?ShouldFlush@BBConsolePrinter@@QEAA_NXZ(this);
}

/*
==============
BBConsolePrinter::Pump
==============
*/

void __fastcall BBConsolePrinter::Pump(BBConsolePrinter *this)
{
  ?Pump@BBConsolePrinter@@QEAAXXZ(this);
}

/*
==============
BB_AttachmentEnd
==============
*/

void __fastcall BB_AttachmentEnd(int attachmentNum, bool overflow)
{
  ?BB_AttachmentEnd@@YAXH_N@Z(attachmentNum, overflow);
}

/*
==============
BB_StreamMem
==============
*/

void __fastcall BB_StreamMem(const vec3_t *viewPos, unsigned int bytesWanted)
{
  ?BB_StreamMem@@YAXAEBTvec3_t@@I@Z(viewPos, bytesWanted);
}

/*
==============
BBConsolePrinter::Flush
==============
*/

bool __fastcall BBConsolePrinter::Flush(BBConsolePrinter *this)
{
  return ?Flush@BBConsolePrinter@@QEAA_NXZ(this);
}

/*
==============
BBConsolePrinter::GetCurrentLen
==============
*/

unsigned int __fastcall BBConsolePrinter::GetCurrentLen(BBConsolePrinter *this)
{
  return ?GetCurrentLen@BBConsolePrinter@@QEAAIXZ(this);
}

/*
==============
BB_IsInitializedAndActive
==============
*/

bool __fastcall BB_IsInitializedAndActive()
{
  return ?BB_IsInitializedAndActive@@YA_NXZ();
}

/*
==============
BB_SendProfileData
==============
*/

void __fastcall BB_SendProfileData(int __formal)
{
  ?BB_SendProfileData@@YAXH@Z(__formal);
}

/*
==============
BB_RecordSystemMemoryFootprint
==============
*/

void __fastcall BB_RecordSystemMemoryFootprint(const char *mapName, int onExit)
{
  ?BB_RecordSystemMemoryFootprint@@YAXPEBDH@Z(mapName, onExit);
}

/*
==============
BB_Init
==============
*/

void BB_Init(void)
{
  ?BB_Init@@YAXXZ();
}

/*
==============
BBConsolePrinter::GetBufferPtr
==============
*/

char *__fastcall BBConsolePrinter::GetBufferPtr(BBConsolePrinter *this)
{
  return ?GetBufferPtr@BBConsolePrinter@@QEAAPEADXZ(this);
}

/*
==============
BB_AttachFile
==============
*/

void __fastcall BB_AttachFile(const char *filename, const char *attachname, int group)
{
  ?BB_AttachFile@@YAXPEBD0H@Z(filename, attachname, group);
}

/*
==============
BB_SendHighWaterMarks
==============
*/

void BB_SendHighWaterMarks(void)
{
  ?BB_SendHighWaterMarks@@YAXXZ();
}

/*
==============
BB_Alert
==============
*/

void __fastcall BB_Alert(const char *filename, const int line, const char *type, const unsigned int checksum, const char *msg, int attachment_group, char *ret_web_link, unsigned int web_link_size, void *p_exceptionData)
{
  ?BB_Alert@@YAXPEBDH0I0HPEADIPEAX@Z(filename, line, type, checksum, msg, attachment_group, ret_web_link, web_link_size, p_exceptionData);
}

/*
==============
BB_GetDeltaTime
==============
*/

unsigned int __fastcall BB_GetDeltaTime()
{
  return ?BB_GetDeltaTime@@YAIXZ();
}

/*
==============
fixUpCmdLine
==============
*/

void __fastcall fixUpCmdLine(const char *cmdline, char *newCmdLine, int len)
{
  ?fixUpCmdLine@@YAXPEBDPEADH@Z(cmdline, newCmdLine, len);
}

/*
==============
GScr_BBPrint
==============
*/

void __fastcall GScr_BBPrint(scrContext_t *scrContext)
{
  ?GScr_BBPrint@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GScr_BBReportSpawnTypes
==============
*/

void __fastcall GScr_BBReportSpawnTypes(scrContext_t *scrContext)
{
  ?GScr_BBReportSpawnTypes@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
BB_Print_internal
==============
*/

void __fastcall BB_Print_internal(bb_msg_t *msg, const int parameter_count, const unsigned __int8 *parameters, char *args)
{
  ?BB_Print_internal@@YAXPEAUbb_msg_t@@HPEBEPEAD@Z(msg, parameter_count, parameters, args);
}

/*
==============
BB_WriteInstanceData
==============
*/

void __fastcall BB_WriteInstanceData(int controllerIndex)
{
  ?BB_WriteInstanceData@@YAXH@Z(controllerIndex);
}

/*
==============
BB_PrintConsoleLine
==============
*/

void __fastcall BB_PrintConsoleLine(const char *line)
{
  ?BB_PrintConsoleLine@@YAXPEBD@Z(line);
}

/*
==============
sendTestData
==============
*/

void sendTestData(void)
{
  ?sendTestData@@YAXXZ();
}

/*
==============
GScr_BBReportSpawnPlayerDetails
==============
*/

void __fastcall GScr_BBReportSpawnPlayerDetails(scrContext_t *scrContext)
{
  ?GScr_BBReportSpawnPlayerDetails@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Blackbox_SendSession
==============
*/

void __fastcall Blackbox_SendSession(int controllerIndex, bool isserver, const char *mapname, const char *gametype)
{
  ?Blackbox_SendSession@@YAXH_NPEBD1@Z(controllerIndex, isserver, mapname, gametype);
}

/*
==============
BBConsolePrinter::Init
==============
*/

void __fastcall BBConsolePrinter::Init(BBConsolePrinter *this)
{
  ?Init@BBConsolePrinter@@QEAAXXZ(this);
}

/*
==============
BB_AttachMemory
==============
*/

void __fastcall BB_AttachMemory(const char *name, const void *data, int size, int group)
{
  ?BB_AttachMemory@@YAXPEBDPEBXHH@Z(name, data, size, group);
}

/*
==============
BB_PumpTasks
==============
*/

void BB_PumpTasks(void)
{
  ?BB_PumpTasks@@YAXXZ();
}

/*
==============
BB_CheckThrottle
==============
*/

bool __fastcall BB_CheckThrottle(const char *name)
{
  return ?BB_CheckThrottle@@YA_NPEBD@Z(name);
}

/*
==============
Blackbox_ScriptUnlockOnError
==============
*/

void Blackbox_ScriptUnlockOnError(void)
{
  ?Blackbox_ScriptUnlockOnError@@YAXXZ();
}

/*
==============
BB_CheckOngoingTasks
==============
*/

void BB_CheckOngoingTasks(void)
{
  ?BB_CheckOngoingTasks@@YAXXZ();
}

/*
==============
BB_SetHighWaterMark
==============
*/

void __fastcall BB_SetHighWaterMark(int idx, unsigned int value)
{
  ?BB_SetHighWaterMark@@YAXHI@Z(idx, value);
}

/*
==============
BB_Start
==============
*/

void BB_Start(void)
{
  ?BB_Start@@YAXXZ();
}

/*
==============
publisherVariablesRetrieved
==============
*/

void __fastcall publisherVariablesRetrieved()
{
  ?publisherVariablesRetrieved@@YAXXZ();
}

/*
==============
BB_Send
==============
*/

void __fastcall BB_Send(int controllerIndex, bool force, bool bandwidthLimited)
{
  ?BB_Send@@YAXH_N0@Z(controllerIndex, force, bandwidthLimited);
}

/*
==============
BB_Update
==============
*/

void BB_Update(void)
{
  ?BB_Update@@YAXXZ();
}

/*
==============
BB_ProfileLog_Init
==============
*/

void BB_ProfileLog_Init(void)
{
  ?BB_ProfileLog_Init@@YAXXZ();
}

/*
==============
BBConsolePrinter::GetLenRemaining
==============
*/

unsigned int __fastcall BBConsolePrinter::GetLenRemaining(BBConsolePrinter *this)
{
  return ?GetLenRemaining@BBConsolePrinter@@QEAAIXZ(this);
}

/*
==============
BB_IsReady
==============
*/

bool __fastcall BB_IsReady()
{
  return ?BB_IsReady@@YA_NXZ();
}

/*
==============
BBConsolePrinter::ResetFlush
==============
*/

void __fastcall BBConsolePrinter::ResetFlush(BBConsolePrinter *this)
{
  ?ResetFlush@BBConsolePrinter@@QEAAXXZ(this);
}

/*
==============
BB_AttachmentBegin
==============
*/

int __fastcall BB_AttachmentBegin(const char *name, int group)
{
  return ?BB_AttachmentBegin@@YAHPEBDH@Z(name, group);
}

/*
==============
BB_ResetHighWaterMarks
==============
*/

void BB_ResetHighWaterMarks(void)
{
  ?BB_ResetHighWaterMarks@@YAXXZ();
}

/*
==============
BB_CanSendPackets
==============
*/

bool __fastcall BB_CanSendPackets(const int controllerIndex)
{
  return ?BB_CanSendPackets@@YA_NH@Z(controllerIndex);
}

/*
==============
BBConsolePrinter::StartFlush
==============
*/

void __fastcall BBConsolePrinter::StartFlush(BBConsolePrinter *this)
{
  ?StartFlush@BBConsolePrinter@@AEAAXXZ(this);
}

/*
==============
BB_LoadWhitelists
==============
*/

void BB_LoadWhitelists(void)
{
  ?BB_LoadWhitelists@@YAXXZ();
}

/*
==============
BB_GetDemonwareActiveController
==============
*/

int __fastcall BB_GetDemonwareActiveController()
{
  return ?BB_GetDemonwareActiveController@@YAHXZ();
}

/*
==============
BB_Start_f
==============
*/

void __fastcall BB_Start_f()
{
  ?BB_Start_f@@YAXXZ();
}

/*
==============
BB_GetMsg
==============
*/

bb_msg_t *__fastcall BB_GetMsg()
{
  return ?BB_GetMsg@@YAPEAUbb_msg_t@@XZ();
}

/*
==============
BB_GetNewGroupID
==============
*/

int __fastcall BB_GetNewGroupID()
{
  return ?BB_GetNewGroupID@@YAHXZ();
}

/*
==============
BB_UserSignedIn
==============
*/

void __fastcall BB_UserSignedIn(int controllerIndex)
{
  ?BB_UserSignedIn@@YAXH@Z(controllerIndex);
}

/*
==============
BBConsolePrinter::AddLine
==============
*/
__int64 BBConsolePrinter::AddLine(BBConsolePrinter *this, const char *line)
{
  unsigned __int8 v2; 
  const dvar_t *v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned int v9; 

  v2 = 0;
  if ( !line )
    return 0i64;
  v5 = DVARBOOL_online_bb_console_logging;
  if ( DVARBOOL_online_bb_console_logging )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_online_bb_console_logging);
    if ( v5->current.enabled )
    {
      Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
      if ( !this->m_currentBuffer )
        BBConsolePrinter::Init(this);
      v6 = -1i64;
      v7 = -1i64;
      do
        ++v7;
      while ( line[v7] );
      v8 = v7 + 13;
      if ( v8 )
      {
        if ( v8 >= 66560 - this->m_currentBufferOffset )
          BBConsolePrinter::ForceFlush(this, 0);
        v9 = Sys_Milliseconds();
        Com_sprintf(&this->m_currentBuffer[this->m_currentBufferOffset], 66560 - this->m_currentBufferOffset, "[%10i] ", v9);
        this->m_currentBufferOffset += 13;
        Core_strcpy(&this->m_currentBuffer[this->m_currentBufferOffset], 66560 - this->m_currentBufferOffset, line);
        do
          ++v6;
        while ( line[v6] );
        this->m_currentBufferOffset += truncate_cast<unsigned int,unsigned __int64>(v6);
        v2 = 1;
      }
      Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
    }
  }
  return v2;
}

/*
==============
BB_AddConsoleLine
==============
*/
void BB_AddConsoleLine(const char *p_msg)
{
  size_t v1; 
  char *v2; 
  __int64 v3; 
  unsigned __int64 v4; 
  bool v5; 
  unsigned int v6; 
  int v7; 
  char *v8; 
  __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  int v13; 
  char _Buffer[8]; 
  int v15; 
  __int16 v16; 
  char v17; 

  v1 = -1i64;
  v2 = (char *)p_msg;
  v3 = -1i64;
  do
    ++v3;
  while ( p_msg[v3] );
  v4 = v3 + 1;
  *(_QWORD *)_Buffer = 0i64;
  v15 = 0;
  v16 = 0;
  v5 = p_msg[v4 - 2] == 10;
  v17 = 0;
  if ( v5 && *p_msg != 32 && (unsigned __int8)(*p_msg - 9) > 1u )
  {
    v6 = Sys_Milliseconds();
    j_sprintf(_Buffer, "[%d] ", v6);
  }
  do
    ++v1;
  while ( _Buffer[v1] );
  if ( v4 <= 256 - v1 )
  {
    v7 = s_com_consoleBufferCurLine;
    v8 = _Buffer;
    v9 = (__int64)s_com_consoleBufferCurLine << 8;
    do
    {
      v10 = *v8;
      v8[(_QWORD)s_com_consoleBuffer + v9 - (_QWORD)_Buffer] = *v8;
      ++v8;
    }
    while ( v10 );
    v11 = v9 - (_QWORD)v2;
    do
    {
      v12 = *v2;
      v2[(_QWORD)s_com_consoleBuffer + v1 + v11] = *v2;
      ++v2;
    }
    while ( v12 );
  }
  else
  {
    strncpy(s_com_consoleBuffer[(__int64)s_com_consoleBufferCurLine], _Buffer, v1);
    strncpy(&s_com_consoleBuffer[(__int64)s_com_consoleBufferCurLine][v1], v2, 255 - v1);
    v7 = s_com_consoleBufferCurLine;
    s_com_consoleBuffer[(__int64)s_com_consoleBufferCurLine][255] = 0;
  }
  v13 = v7 + 1;
  if ( v13 >= 100 )
    v13 = 0;
  s_com_consoleBufferCurLine = v13;
}

/*
==============
BB_Alert
==============
*/
void BB_Alert(const char *filename, const int line, const char *type, const unsigned int checksum)
{
  ;
}

/*
==============
BB_AttachFile
==============
*/
void BB_AttachFile(const char *filename, const char *attachname, int group)
{
  sysFileHandle_t *Binary; 
  sysFileHandle_t *v6; 
  unsigned __int64 FileSize; 
  int i; 
  unsigned __int64 v9; 

  if ( bb_msg.data )
  {
    Binary = FS_FileOpenReadBinary((sysFileHandle_t *)filename, attachname);
    v6 = Binary;
    if ( Binary != (sysFileHandle_t *)-1i64 )
    {
      FileSize = FS_FileGetFileSize((sysFileHandle_t)Binary);
      for ( i = BB_AttachmentBegin(attachname, group); FileSize; FileSize -= v9 )
      {
        v9 = FileSize;
        if ( FileSize > 0x2000 )
          v9 = 0x2000i64;
        FS_FileRead(attachmentBuffer, v9, (sysFileHandle_t)v6);
        BB_AttachmentSend(i, attachmentBuffer, v9);
      }
      BB_AttachmentEnd(i, 0);
      FS_FileClose(v6);
    }
  }
}

/*
==============
BB_AttachMemory
==============
*/
void BB_AttachMemory(const char *name, const void *data, int size, int group)
{
  int v6; 

  v6 = BB_AttachmentBegin(name, group);
  BB_AttachmentSend(v6, data, size);
  BB_AttachmentEnd(v6, 0);
}

/*
==============
BB_AttachmentBegin
==============
*/
__int64 BB_AttachmentBegin(const char *name, int group)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned __int8 *v6; 
  int v7; 
  unsigned __int8 v8; 
  __int64 v9; 
  unsigned int v10; 
  int v11; 
  unsigned __int64 v12; 
  char v14; 

  Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
  s_blackboxIsInteresting = 1;
  v4 = ++s_attachmentNum;
  BB_WriteVarUInt32_0(&bb_msg, (16 * s_attachmentNum) | 2);
  v14 = 1;
  if ( !bb_msg.pppHashTable )
  {
    if ( bb_msg.overflow || bb_msg.cursize + 1 > bb_msg.maxsize )
    {
      bb_msg.overflow = 1;
    }
    else
    {
      v5 = truncate_cast<unsigned int,unsigned __int64>(bb_msg.cursize);
      v6 = (unsigned __int8 *)&v14;
      v7 = 0;
      do
      {
        v8 = *v6;
        v9 = v7 + v5;
        ++v6;
        ++v7;
        bb_msg.data[v9] = v8;
      }
      while ( !v7 );
      ++bb_msg.cursize;
    }
  }
  v10 = s_sessionStartTime;
  v11 = Sys_Milliseconds();
  BB_WriteVarUInt32_0(&bb_msg, v11 - v10);
  BB_WriteInt32(&bb_msg, group);
  v12 = -1i64;
  do
    ++v12;
  while ( name[v12] );
  BB_WriteString(&bb_msg, name, v12);
  Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
  return v4;
}

/*
==============
BB_AttachmentEnd
==============
*/
void BB_AttachmentEnd(int attachmentNum, bool overflow)
{
  unsigned __int8 *pppHashTable; 
  int v5; 
  unsigned __int64 cursize; 
  unsigned int v7; 
  int v8; 
  unsigned __int8 *v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  unsigned __int8 v14; 
  __int64 v15; 
  char v16; 

  Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
  BB_WriteVarUInt32_0(&bb_msg, (16 * attachmentNum) | 2);
  pppHashTable = bb_msg.pppHashTable;
  v5 = 0;
  cursize = bb_msg.cursize;
  v16 = 4;
  if ( !bb_msg.pppHashTable )
  {
    if ( bb_msg.overflow || bb_msg.cursize + 1 > bb_msg.maxsize )
    {
      bb_msg.overflow = 1;
    }
    else
    {
      v7 = truncate_cast<unsigned int,unsigned __int64>(bb_msg.cursize);
      v8 = 0;
      v9 = (unsigned __int8 *)&v16;
      do
      {
        v10 = *v9;
        v11 = v8 + v7;
        ++v9;
        ++v8;
        bb_msg.data[v11] = v10;
      }
      while ( !v8 );
      pppHashTable = bb_msg.pppHashTable;
      cursize = ++bb_msg.cursize;
    }
  }
  v16 = overflow;
  if ( !pppHashTable )
  {
    if ( bb_msg.overflow || cursize + 1 > bb_msg.maxsize )
    {
      bb_msg.overflow = 1;
    }
    else
    {
      v12 = truncate_cast<unsigned int,unsigned __int64>(cursize);
      v13 = (unsigned __int8 *)&v16;
      do
      {
        v14 = *v13;
        v15 = v5 + v12;
        ++v13;
        ++v5;
        bb_msg.data[v15] = v14;
      }
      while ( !v5 );
      ++bb_msg.cursize;
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
}

/*
==============
BB_AttachmentSend
==============
*/
void BB_AttachmentSend(int attachmentNum, const void *data, int size)
{
  unsigned __int64 v4; 
  int maxsize; 
  unsigned __int64 cursize; 
  int v8; 
  int i; 
  unsigned int v10; 
  int v11; 
  unsigned __int8 *v12; 
  unsigned __int8 v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned __int8 v16; 
  __int64 v17; 
  char v18; 

  v4 = size;
  maxsize = bb_msg.maxsize;
  cursize = bb_msg.cursize;
  v8 = 0;
  if ( size > bb_msg.maxsize - bb_msg.cursize )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( dwGetLogOnStatus(i) == DW_LIVE_CONNECTED )
        break;
    }
    if ( i == 8 )
      i = -1;
    BB_Send(i, 1, 0);
    cursize = bb_msg.cursize;
    maxsize = bb_msg.maxsize;
  }
  s_blackboxIsInteresting = 1;
  if ( v4 >= maxsize - cursize )
  {
    BB_AttachmentEnd(attachmentNum, 1);
  }
  else
  {
    BB_WriteVarUInt32_0(&bb_msg, (16 * attachmentNum) | 2);
    v18 = 2;
    if ( !bb_msg.pppHashTable )
    {
      if ( bb_msg.overflow || bb_msg.cursize + 1 > bb_msg.maxsize )
      {
        bb_msg.overflow = 1;
      }
      else
      {
        v10 = truncate_cast<unsigned int,unsigned __int64>(bb_msg.cursize);
        v11 = 0;
        v12 = (unsigned __int8 *)&v18;
        do
        {
          v13 = *v12;
          v14 = v11 + v10;
          ++v12;
          ++v11;
          bb_msg.data[v14] = v13;
        }
        while ( !v11 );
        ++bb_msg.cursize;
      }
    }
    BB_WriteVarUInt32_0(&bb_msg, (2 * v4) ^ ((int)v4 >> 31));
    if ( !bb_msg.pppHashTable )
    {
      if ( bb_msg.overflow || bb_msg.cursize + v4 > bb_msg.maxsize )
      {
        bb_msg.overflow = 1;
      }
      else
      {
        v15 = truncate_cast<unsigned int,unsigned __int64>(bb_msg.cursize);
        if ( (_DWORD)v4 )
        {
          do
          {
            v16 = *(_BYTE *)data;
            v17 = v8 + v15;
            data = (char *)data + 1;
            ++v8;
            bb_msg.data[v17] = v16;
          }
          while ( v8 < v4 );
        }
        bb_msg.cursize += v4;
      }
    }
  }
}

/*
==============
BB_CanSendPackets
==============
*/
bool BB_CanSendPackets(const int controllerIndex)
{
  DWServicesAccess *Instance; 

  Instance = DWServicesAccess::GetInstance();
  return DWServicesAccess::isReady(Instance, controllerIndex);
}

/*
==============
BB_CheckOngoingTasks
==============
*/
void BB_CheckOngoingTasks(void)
{
  overlappedTask::taskShim *p_u; 
  __int64 v1; 
  overlappedTask *tasks; 

  p_u = &s_overlappedLogTasks.tasks[0].u;
  v1 = 32i64;
  tasks = s_overlappedLogTasks.tasks;
  do
  {
    if ( BYTE4(p_u[1].remoteTask.m_ptr) && (!p_u->remoteTask.m_ptr || dwRecordEventComplete(tasks)) )
      TaskManager_ClearTask(tasks);
    ++tasks;
    p_u = (overlappedTask::taskShim *)((char *)p_u + 40);
    --v1;
  }
  while ( v1 );
}

/*
==============
BB_CheckThrottle
==============
*/
bool BB_CheckThrottle(const char *name)
{
  int v2; 
  unsigned __int64 v3; 
  unsigned int v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  int v8; 
  int throttleMS; 
  int *p_lastMS; 

  v2 = Sys_Milliseconds();
  v3 = -1i64;
  do
    ++v3;
  while ( name[v3] );
  v4 = BB_HashString(name, v3);
  v5 = 0;
  v6 = s_throttledTypeCount - 1;
  v7 = v4;
  if ( s_throttledTypeCount - 1 < 0 )
    return !s_throttleByDefault;
  while ( 1 )
  {
    v8 = (v6 + v5) / 2;
    if ( s_throttledTypes[v8].name >= v7 )
      break;
    v5 = v8 + 1;
LABEL_8:
    if ( v5 > v6 )
      return !s_throttleByDefault;
  }
  if ( s_throttledTypes[v8].name > v7 )
  {
    v6 = v8 - 1;
    goto LABEL_8;
  }
  throttleMS = s_throttledTypes[v8].throttleMS;
  if ( !throttleMS )
    return 1;
  if ( throttleMS < 0 )
    return 0;
  p_lastMS = &s_throttledTypes[v8].lastMS;
  if ( v2 - *p_lastMS <= throttleMS )
    return 0;
  *p_lastMS = v2;
  return 1;
}

/*
==============
BB_Disable_f
==============
*/
void BB_Disable_f()
{
  const char *v0; 
  const char *v1; 

  if ( Cmd_Argc() >= 2 )
  {
    v0 = Cmd_Argv(1);
    if ( I_stricmp(v0, "all") )
    {
      v1 = Cmd_Argv(1);
      BB_SetThrottle(v1, -1);
    }
    else
    {
      s_throttledTypeCount = 0;
      s_throttleByDefault = 1;
    }
  }
}

/*
==============
BB_Enable_f
==============
*/
void BB_Enable_f()
{
  const char *v0; 
  const char *v1; 

  if ( Cmd_Argc() >= 2 )
  {
    v0 = Cmd_Argv(1);
    if ( I_stricmp(v0, "all") )
    {
      v1 = Cmd_Argv(1);
      BB_SetThrottle(v1, 0);
    }
    else
    {
      s_throttledTypeCount = 0;
      s_throttleByDefault = 0;
    }
  }
}

/*
==============
BB_GetClientGameTime
==============
*/
__int64 BB_GetClientGameTime()
{
  int v1; 
  __int64 v2; 
  int v3; 

  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    return 0i64;
  if ( !cg_t::ms_allocatedCount )
  {
    v3 = cg_t::ms_allocatedCount;
    v1 = cg_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v1, v3) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[0] )
  {
    LODWORD(v2) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v2) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v2) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v2) )
      __debugbreak();
  }
  return (unsigned int)cg_t::ms_cgArray[0]->time;
}

/*
==============
BB_GetDeltaTime
==============
*/
__int64 BB_GetDeltaTime()
{
  unsigned int v0; 

  v0 = s_sessionStartTime;
  return Sys_Milliseconds() - v0;
}

/*
==============
BB_GetDemonwareActiveController
==============
*/
__int64 BB_GetDemonwareActiveController()
{
  int i; 

  for ( i = 0; i < 8; ++i )
  {
    if ( dwGetLogOnStatus(i) == DW_LIVE_CONNECTED )
      break;
  }
  if ( i == 8 )
    return (unsigned int)-1;
  return (unsigned int)i;
}

/*
==============
BB_GetMsg
==============
*/
bb_msg_t *BB_GetMsg()
{
  return &bb_msg;
}

/*
==============
BB_GetNewGroupID
==============
*/
__int64 BB_GetNewGroupID()
{
  if ( ((unsigned __int8)&group_id & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&group_id) )
    __debugbreak();
  return (unsigned int)_InterlockedIncrement(&group_id);
}

/*
==============
BB_GetServerGameTime
==============
*/

int __fastcall BB_GetServerGameTime()
{
  return G_Main_GetTime();
}

/*
==============
BB_Init
==============
*/
void BB_Init(void)
{
  PublisherVariableManager *Instance; 
  PublisherVariableManager *v1; 

  if ( s_blackboxInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 612, ASSERT_TYPE_ASSERT, "(s_blackboxInitialized == false)", (const char *)&queryFormat, "s_blackboxInitialized == false") )
    __debugbreak();
  Cmd_AddCommandInternal("bbstart", BB_Start_f, &BB_Start_f_VAR);
  Cmd_AddCommandInternal("bbsend", BB_Send_f, &BB_Send_f_VAR);
  Cmd_AddCommandInternal("bbenable", BB_Enable_f, &BB_Enable_f_VAR);
  Cmd_AddCommandInternal("bbdisable", BB_Disable_f, &BB_Disable_f_VAR);
  Cmd_AddCommandInternal("bbthrottle", BB_Throttle_f, &BB_Throttle_f_VAR);
  Dvar_BeginPermanentRegistration();
  blackboxBandwidthLimited = Dvar_RegisterBool("NLRMORNTQS", 0, 4u, "When true, limits blackbox sending so that it only occurs when not in game");
  blackboxHighVolumeProbability = Dvar_RegisterFloat("LNRNKLKMK", 0.0, 0.0, 1.0, 4u, "Probability of sending high volume blackbox data");
  blackboxUseBlackbox = Dvar_RegisterBool("PMLMKLKPO", 1, 4u, "When true turns on blackbox");
  blackbox_dumpSystemMemoryFootprint = Dvar_RegisterBool("LRQNQONKSR", 0, 4u, "When true turns on blackbox system memory footprint logging");
  Dvar_EndPermanentRegistration();
  BB_LoadWhitelists();
  Instance = PublisherVariableManager::GetInstance();
  if ( PublisherVariableManager::HasRetrievedVariables(Instance) )
  {
    if ( !s_blackboxInitialized )
      BB_Start();
  }
  else
  {
    v1 = PublisherVariableManager::GetInstance();
    PublisherVariableManager::AddRetrievedCallback(v1, publisherVariablesRetrieved);
  }
  s_connectionsHash = BB_HashString("connections", 0xBui64);
  s_sessionsHash = BB_HashString("sessions", 8ui64);
}

/*
==============
BB_IsInitializedAndActive
==============
*/
bool BB_IsInitializedAndActive()
{
  if ( !blackboxUseBlackbox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 325, ASSERT_TYPE_ASSERT, "(blackboxUseBlackbox)", (const char *)&queryFormat, "blackboxUseBlackbox") )
    __debugbreak();
  return s_blackboxInitialized && blackboxUseBlackbox->current.enabled;
}

/*
==============
BB_IsReady
==============
*/
bool BB_IsReady()
{
  return s_blackboxInitialized && !bb_msg.overflow;
}

/*
==============
BB_LoadWhitelists
==============
*/
void BB_LoadWhitelists(void)
{
  bool v0; 
  char v1; 
  bool v2; 
  char v3; 
  bool v4; 
  char v5; 

  if ( !bProtoWhitelistLoaded )
  {
    v0 = OnlineDataWhitelisting::InitFromFastFile(&s_bbprotoWhitelist, "whitelists/blackbox_to_aws.json");
    v1 = bProtoWhitelistLoaded;
    if ( v0 )
      v1 = 1;
    bProtoWhitelistLoaded = v1;
  }
  if ( !bBBWhitelistLoaded )
  {
    v2 = OnlineDataWhitelisting::InitFromFastFile(&s_bbBlackboxWhitelist, "whitelists/blackbox_to_blackbox.json");
    v3 = bBBWhitelistLoaded;
    if ( v2 )
      v3 = 1;
    bBBWhitelistLoaded = v3;
  }
  if ( !bDediWhitelistLoaded )
  {
    v4 = OnlineDataWhitelisting::Init(&s_bbDediWhitelist, "{ \"whitelist\": [\"online_error_reports_detailed\"] }", 1);
    v5 = bDediWhitelistLoaded;
    if ( v4 )
      v5 = 1;
    bDediWhitelistLoaded = v5;
  }
}

/*
==============
BB_Lock
==============
*/
void BB_Lock(void)
{
  Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
}

/*
==============
BB_NetworkFlush
==============
*/
void BB_NetworkFlush(void)
{
  int i; 

  for ( i = 0; i < 8; ++i )
  {
    if ( dwGetLogOnStatus(i) == DW_LIVE_CONNECTED )
      break;
  }
  if ( i == 8 )
    i = -1;
  BB_Send(i, 1, 0);
}

/*
==============
BB_Print
==============
*/
__int64 BB_Print(int controller, const char *name, const char *fmt, ...)
{
  int v3; 
  unsigned __int64 v7; 
  unsigned int v8; 
  char v9; 
  DWServicesAccess *Instance; 
  int v11; 
  unsigned int v12; 
  int v13; 
  int parameterCount; 
  unsigned __int8 *parameters; 
  va_list args; 

  va_start(args, fmt);
  v3 = 0;
  parameterCount = 0;
  if ( !s_blackboxInitialized )
    return 2i64;
  if ( !BB_CheckThrottle(name) )
    return 3i64;
  if ( !s_blackboxIsInteresting )
  {
    v7 = -1i64;
    do
      ++v7;
    while ( name[v7] );
    v8 = BB_HashString(name, v7);
    if ( v8 != s_connectionsHash )
    {
      v9 = s_blackboxIsInteresting;
      if ( v8 != s_sessionsHash )
        v9 = 1;
      s_blackboxIsInteresting = v9;
    }
  }
  if ( controller == -1 )
  {
    controller = 0;
    do
    {
      if ( dwGetLogOnStatus(controller) == DW_LIVE_CONNECTED )
        break;
      ++controller;
    }
    while ( controller < 8 );
    if ( controller == 8 )
      controller = -1;
    if ( controller == -1 )
      return 5i64;
  }
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controller) )
    return 6i64;
  if ( controller <= -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 989, ASSERT_TYPE_ASSERT, "( controller ) > ( -1 )", "%s > %s\n\t%i, %i", "controller", "-1", controller, -1) )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
  v11 = BB_ParseAndCacheFormatString(&bb_msg, name, fmt, &parameterCount, (const unsigned __int8 **)&parameters, 1);
  BB_WriteVarUInt32_0(&bb_msg, 4 * (controller & 3 | (4 * v11)));
  v12 = s_sessionStartTime;
  v13 = Sys_Milliseconds();
  BB_WriteVarUInt32_0(&bb_msg, v13 - v12);
  if ( parameterCount > 0 )
    BB_WriteFormatParameters(&bb_msg, 0, 1, parameterCount, parameters, args);
  Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
  if ( !bb_msg.overflow )
    return 0i64;
  if ( Sys_IsMainThread() )
  {
    do
    {
      if ( dwGetLogOnStatus(v3) == DW_LIVE_CONNECTED )
        break;
      ++v3;
    }
    while ( v3 < 8 );
    if ( v3 == 8 )
      v3 = -1;
    BB_Send(v3, 1, 0);
  }
  return 1i64;
}

/*
==============
BB_PrintConsoleLine
==============
*/
void BB_PrintConsoleLine(const char *line)
{
  const dvar_t *v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  unsigned __int64 v5; 
  unsigned int v6; 
  char *v7; 
  unsigned __int64 v8; 

  if ( line )
  {
    v2 = DVARBOOL_online_bb_console_logging;
    if ( DVARBOOL_online_bb_console_logging )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_online_bb_console_logging);
      if ( v2->current.enabled )
      {
        Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
        if ( !s_bbConsolePrinter.m_currentBuffer )
        {
          s_bbConsolePrinter.m_currentBufferOffset = 0;
          s_bbConsolePrinter.m_currentBuffer = (char *)&s_bbConsolePrinter;
          memset_0(&s_bbConsolePrinter, 0, 0x10400ui64);
        }
        v3 = -1i64;
        v4 = -1i64;
        do
          ++v4;
        while ( line[v4] );
        v5 = v4 + 13;
        if ( v5 )
        {
          if ( v5 >= 66560 - s_bbConsolePrinter.m_currentBufferOffset )
            BBConsolePrinter::ForceFlush(&s_bbConsolePrinter, 0);
          v6 = Sys_Milliseconds();
          Com_sprintf(&s_bbConsolePrinter.m_currentBuffer[s_bbConsolePrinter.m_currentBufferOffset], 66560 - s_bbConsolePrinter.m_currentBufferOffset, "[%10i] ", v6);
          v7 = &s_bbConsolePrinter.m_currentBuffer[s_bbConsolePrinter.m_currentBufferOffset + 13];
          v8 = 66560 - (s_bbConsolePrinter.m_currentBufferOffset + 13);
          s_bbConsolePrinter.m_currentBufferOffset += 13;
          Core_strcpy(v7, v8, line);
          do
            ++v3;
          while ( line[v3] );
          s_bbConsolePrinter.m_currentBufferOffset += truncate_cast<unsigned int,unsigned __int64>(v3);
        }
        Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
      }
    }
  }
}

/*
==============
BB_Print_internal
==============
*/
void BB_Print_internal(bb_msg_t *msg, const int parameter_count, const unsigned __int8 *parameters, char *args)
{
  BB_WriteFormatParameters(msg, 0, 1, parameter_count, parameters, args);
}

/*
==============
BB_ProfileLog_Init
==============
*/
void BB_ProfileLog_Init(void)
{
  ;
}

/*
==============
BB_PumpTasks
==============
*/
void BB_PumpTasks(void)
{
  DWServicesAccess *Instance; 
  int ControllerFromClient; 

  if ( BB_IsInitializedAndActive() )
  {
    Instance = DWServicesAccess::GetInstance();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    DWServicesAccess::pump(Instance, ControllerFromClient);
  }
}

/*
==============
BB_RecordSystemMemoryFootprint
==============
*/
void BB_RecordSystemMemoryFootprint(const char *mapName, int onExit)
{
  const char *v3; 
  float ullAvailVirtual; 
  float v5; 
  float v6; 
  float ullTotalVirtual; 
  float v8; 
  float v9; 
  float ullAvailPhys; 
  float v11; 
  float ullTotalPhys; 
  float v13; 
  unsigned int dwMemoryLoad; 
  bool v15; 
  float ullAvailExtendedVirtual; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float ullAvailPageFile; 
  float v26; 
  float v27; 
  float ullTotalPageFile; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  int v35; 
  int NumXMemHeaps; 
  float v37; 
  float v38; 
  float v39; 
  const char *XMemHeapName; 
  unsigned int ullTotalPageFile_high; 
  unsigned int v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  bool v47; 
  unsigned __int64 heapHysteresis; 
  _MEMORYSTATUSEX Buffer; 
  DLogContext context; 
  char buffer[4096]; 

  if ( blackbox_dumpSystemMemoryFootprint && blackbox_dumpSystemMemoryFootprint->current.enabled )
  {
    v3 = "enter";
    if ( onExit )
      v3 = "exit";
    Buffer.dwLength = 64;
    if ( GlobalMemoryStatusEx(&Buffer) )
    {
      ullAvailVirtual = (float)(__int64)Buffer.ullAvailVirtual;
      if ( (Buffer.ullAvailVirtual & 0x8000000000000000ui64) != 0i64 )
      {
        v5 = (float)(__int64)Buffer.ullAvailVirtual;
        ullAvailVirtual = v5 + 1.8446744e19;
      }
      v6 = ullAvailVirtual * 9.3132257e-10;
      ullTotalVirtual = (float)(__int64)Buffer.ullTotalVirtual;
      if ( (Buffer.ullTotalVirtual & 0x8000000000000000ui64) != 0i64 )
      {
        v8 = (float)(__int64)Buffer.ullTotalVirtual;
        ullTotalVirtual = v8 + 1.8446744e19;
      }
      v9 = ullTotalVirtual * 9.3132257e-10;
      ullAvailPhys = (float)(__int64)Buffer.ullAvailPhys;
      if ( (Buffer.ullAvailPhys & 0x8000000000000000ui64) != 0i64 )
      {
        v11 = (float)(__int64)Buffer.ullAvailPhys;
        ullAvailPhys = v11 + 1.8446744e19;
      }
      ullTotalPhys = (float)(__int64)Buffer.ullTotalPhys;
      if ( (Buffer.ullTotalPhys & 0x8000000000000000ui64) != 0i64 )
      {
        v13 = (float)(__int64)Buffer.ullTotalPhys;
        ullTotalPhys = v13 + 1.8446744e19;
      }
      dwMemoryLoad = Buffer.dwMemoryLoad;
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
      {
        v15 = DLog_BeginEvent(&context, "system_mem_global");
        context.autoEndEvent = 1;
        if ( v15 && DLog_String(&context, "map", mapName, 0) && DLog_String(&context, "status", v3, 0) && DLog_UInt32(&context, "in_use", dwMemoryLoad) && DLog_Float32(&context, "total_phys_mb", ullTotalPhys * 0.00000095367432) && DLog_Float32(&context, "free_phys_mb", ullAvailPhys * 0.00000095367432) && DLog_Float32(&context, "total_virtual_gb", v9) && DLog_Float32(&context, "free_virtual_gb", v6) )
          DLog_RecordContext(&context);
      }
    }
    Buffer.dwLength = 80;
    if ( (unsigned int)TitleMemoryStatus(&Buffer) )
    {
      ullAvailExtendedVirtual = (float)(__int64)Buffer.ullAvailExtendedVirtual;
      if ( (Buffer.ullAvailExtendedVirtual & 0x8000000000000000ui64) != 0i64 )
      {
        v17 = (float)(__int64)Buffer.ullAvailExtendedVirtual;
        ullAvailExtendedVirtual = v17 + 1.8446744e19;
      }
      v18 = ullAvailExtendedVirtual * 0.00000095367432;
      v19 = (float)(__int64)Buffer.ullAvailVirtual;
      if ( (Buffer.ullAvailVirtual & 0x8000000000000000ui64) != 0i64 )
      {
        v20 = (float)(__int64)Buffer.ullAvailVirtual;
        v19 = v20 + 1.8446744e19;
      }
      v21 = v19 * 0.00000095367432;
      v22 = (float)(__int64)Buffer.ullTotalVirtual;
      if ( (Buffer.ullTotalVirtual & 0x8000000000000000ui64) != 0i64 )
      {
        v23 = (float)(__int64)Buffer.ullTotalVirtual;
        v22 = v23 + 1.8446744e19;
      }
      v24 = v22 * 0.00000095367432;
      ullAvailPageFile = (float)(__int64)Buffer.ullAvailPageFile;
      if ( (Buffer.ullAvailPageFile & 0x8000000000000000ui64) != 0i64 )
      {
        v26 = (float)(__int64)Buffer.ullAvailPageFile;
        ullAvailPageFile = v26 + 1.8446744e19;
      }
      v27 = ullAvailPageFile * 0.00000095367432;
      ullTotalPageFile = (float)(__int64)Buffer.ullTotalPageFile;
      if ( (Buffer.ullTotalPageFile & 0x8000000000000000ui64) != 0i64 )
      {
        v29 = (float)(__int64)Buffer.ullTotalPageFile;
        ullTotalPageFile = v29 + 1.8446744e19;
      }
      v30 = ullTotalPageFile * 0.00000095367432;
      v31 = (float)(__int64)Buffer.ullAvailPhys;
      if ( (Buffer.ullAvailPhys & 0x8000000000000000ui64) != 0i64 )
      {
        v32 = (float)(__int64)Buffer.ullAvailPhys;
        v31 = v32 + 1.8446744e19;
      }
      v33 = (float)(__int64)Buffer.ullTotalPhys;
      if ( (Buffer.ullTotalPhys & 0x8000000000000000ui64) != 0i64 )
      {
        v34 = (float)(__int64)Buffer.ullTotalPhys;
        v33 = v34 + 1.8446744e19;
      }
      DLog_RecordEvent<char const *,char const *,char const *,char const *,char const *,float,char const *,float,char const *,float,char const *,float,char const *,float,char const *,float,char const *,float>(0i64, "system_mem_title", "map", mapName, "status", v3, "total_mem_mb", v33 * 0.00000095367432, "available_mem_mb", v31 * 0.00000095367432, "legacy_use_mb", v30, "legacy_peak_mb", v27, "legacy_avail_mb", v24, "title_used_mb", v21, "title_avail_mb", v18);
    }
    Buffer.dwLength = 32;
    v35 = 0;
    NumXMemHeaps = XB3GetNumXMemHeaps();
    if ( NumXMemHeaps > 0 )
    {
      do
      {
        if ( XB3GetXMemHeapStats(v35, (_XMEM_HEAP_STATISTICS *)&Buffer, &heapHysteresis) )
        {
          v37 = (float)(__int64)heapHysteresis;
          if ( (heapHysteresis & 0x8000000000000000ui64) != 0i64 )
          {
            v38 = (float)(__int64)heapHysteresis;
            v37 = v38 + 1.8446744e19;
          }
          v39 = v37 * 0.00000095367432;
          XMemHeapName = XB3GetXMemHeapName(v35);
          ullTotalPageFile_high = HIDWORD(Buffer.ullTotalPageFile);
          v42 = Buffer.ullTotalPageFile;
          v43 = (float)(__int64)Buffer.ullAvailPhys;
          if ( (Buffer.ullAvailPhys & 0x8000000000000000ui64) != 0i64 )
          {
            v44 = (float)(__int64)Buffer.ullAvailPhys;
            v43 = v44 + 1.8446744e19;
          }
          v45 = (float)(__int64)Buffer.ullTotalPhys;
          if ( (Buffer.ullTotalPhys & 0x8000000000000000ui64) != 0i64 )
          {
            v46 = (float)(__int64)Buffer.ullTotalPhys;
            v45 = v46 + 1.8446744e19;
          }
          if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
          {
            v47 = DLog_BeginEvent(&context, "system_mem_xmem");
            context.autoEndEvent = 1;
            if ( v47 && DLog_String(&context, "map", mapName, 0) && DLog_String(&context, "status", v3, 0) && DLog_String(&context, "heap", XMemHeapName, 0) && DLog_Float32(&context, "max_size_mb", v45 * 0.00000095367432) && DLog_Float32(&context, "min_size_mb", v43 * 0.00000095367432) && DLog_Float32(&context, "hysteresis_mb", v39) && DLog_UInt32(&context, "alloc_count", v42) && DLog_UInt32(&context, "free_count", ullTotalPageFile_high) )
              DLog_RecordContext(&context);
          }
        }
        ++v35;
      }
      while ( v35 < NumXMemHeaps );
    }
  }
}

/*
==============
BB_RegisterHighWaterMark
==============
*/
__int64 BB_RegisterHighWaterMark(const char *name)
{
  int v2; 
  bb_highwater_t *v3; 
  const char *v4; 
  int v5; 
  int v6; 
  __int64 v7; 

  Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
  v2 = 0;
  if ( highwater_count <= 0 )
  {
LABEL_8:
    v7 = highwater_count++;
    highwater[v7].name = name;
    *(_QWORD *)&highwater[v7].current_value = 0i64;
    Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
    return (unsigned int)(highwater_count - 1);
  }
  else
  {
    v3 = highwater;
    while ( 1 )
    {
      v4 = v3->name;
      do
      {
        v5 = (unsigned __int8)v4[name - v3->name];
        v6 = *(unsigned __int8 *)v4 - v5;
        if ( v6 )
          break;
        ++v4;
      }
      while ( v5 );
      if ( !v6 )
        break;
      ++v2;
      ++v3;
      if ( v2 >= highwater_count )
        goto LABEL_8;
    }
    Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
    return (unsigned int)v2;
  }
}

/*
==============
BB_ResetHighWaterMark
==============
*/
void BB_ResetHighWaterMark(int idx)
{
  if ( idx >= 0 && idx < highwater_count )
    highwater[idx].current_value = 0;
}

/*
==============
BB_ResetHighWaterMark
==============
*/
void BB_ResetHighWaterMark(const char *name)
{
  int v2; 
  bb_highwater_t *v3; 
  const char *v4; 
  int v5; 
  int v6; 
  __int64 v7; 
  int v8; 

  Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
  v2 = 0;
  if ( highwater_count <= 0 )
  {
LABEL_8:
    v7 = highwater_count++;
    highwater[v7].name = name;
    *(_QWORD *)&highwater[v7].current_value = 0i64;
    Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
    v8 = highwater_count;
    v2 = highwater_count - 1;
  }
  else
  {
    v3 = highwater;
    while ( 1 )
    {
      v4 = v3->name;
      do
      {
        v5 = (unsigned __int8)v4[name - v3->name];
        v6 = *(unsigned __int8 *)v4 - v5;
        if ( v6 )
          break;
        ++v4;
      }
      while ( v5 );
      if ( !v6 )
        break;
      ++v2;
      ++v3;
      if ( v2 >= highwater_count )
        goto LABEL_8;
    }
    Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
    v8 = highwater_count;
  }
  if ( v2 >= 0 && v2 < v8 )
    highwater[v2].current_value = 0;
}

/*
==============
BB_ResetHighWaterMarks
==============
*/
void BB_ResetHighWaterMarks(void)
{
  __int64 v0; 
  unsigned int *p_current_value; 

  v0 = (unsigned int)highwater_count;
  if ( highwater_count > 0 )
  {
    p_current_value = &highwater[0].current_value;
    do
    {
      *p_current_value = 0;
      p_current_value += 4;
      --v0;
    }
    while ( v0 );
  }
}

/*
==============
BB_Send
==============
*/
void BB_Send(int controllerIndex, bool force, bool bandwidthLimited)
{
  bool v4; 
  const dvar_t *v5; 
  int v6; 
  int v7; 
  bool m_readyToFlush; 
  const dvar_t *v9; 
  unsigned int m_sequenceid; 
  const char *MatchIdString; 
  const char *BootIdString; 
  unsigned __int64 EpochTimeFromAuth_ms; 
  bool v14; 
  BBMsgHeader *v15; 
  int i; 
  overlappedTask *OpenTaskSlot; 
  int v18; 
  DLogContext context; 
  char buffer[4096]; 

  if ( s_blackboxInitialized && (!bandwidthLimited || !blackboxBandwidthLimited || !blackboxBandwidthLimited->current.enabled) )
  {
    s_shouldForceWhenReady |= force;
    if ( !TaskManager_AnyTaskInProgress(&s_overlappedLogTasks) )
    {
      v4 = force;
      if ( s_shouldForceWhenReady )
        v4 = 1;
      Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
      if ( s_bbConsolePrinter.m_shouldFlush && !s_bbConsolePrinter.m_readyToFlush )
      {
        v5 = DVARBOOL_online_bb_console_logging;
        if ( DVARBOOL_online_bb_console_logging )
        {
          Dvar_CheckFrontendServerThread(DVARBOOL_online_bb_console_logging);
          if ( v5->current.enabled )
          {
            v6 = j_deflate(&s_bb_stream, s_bbConsolePrinter.m_flushState);
            if ( v6 || s_bb_stream.avail_out )
            {
              if ( !s_bbConsolePrinter.m_flushState || s_bbConsolePrinter.m_flushState == 2 )
              {
                memcpy_0(s_currentPtrInOutputBuffer, s_tempDeflateOutputBuffer, s_bb_stream.next_out - s_tempDeflateOutputBuffer);
                s_bbConsolePrinter.m_flushState = 4;
              }
              else if ( v6 == 1 )
              {
                memcpy_0(s_currentPtrInOutputBuffer, s_tempDeflateOutputBuffer, s_bb_stream.next_out - s_tempDeflateOutputBuffer);
                s_bbConsolePrinter.m_flushState = 0;
                v7 = j_deflateEnd(&s_bb_stream);
                j_Zip_ShutdownThreadMemory(&s_bb_stream);
                bdBase64::encode((const char *)s_finalOutputBuffer, s_bb_stream.total_out, s_finalOutputBufferB64, 0xAD59u);
                m_readyToFlush = s_bbConsolePrinter.m_readyToFlush;
                if ( !v7 )
                  m_readyToFlush = 1;
                s_bbConsolePrinter.m_readyToFlush = m_readyToFlush;
              }
            }
            else
            {
              memcpy_0(s_currentPtrInOutputBuffer, s_tempDeflateOutputBuffer, s_bb_stream.next_out - s_tempDeflateOutputBuffer);
              s_bb_stream.avail_out = 8320;
              s_currentPtrInOutputBuffer = &s_finalOutputBuffer[s_bb_stream.total_out];
              s_bb_stream.next_out = s_tempDeflateOutputBuffer;
            }
          }
        }
      }
      if ( v4 )
        BBConsolePrinter::ForceFlush(&s_bbConsolePrinter, 1);
      if ( s_bbConsolePrinter.m_shouldFlush && s_bbConsolePrinter.m_readyToFlush )
      {
        v9 = DVARBOOL_online_bb_console_logging;
        if ( DVARBOOL_online_bb_console_logging )
        {
          Dvar_CheckFrontendServerThread(DVARBOOL_online_bb_console_logging);
          if ( v9->current.enabled )
          {
            m_sequenceid = s_bbConsolePrinter.m_sequenceid;
            MatchIdString = OnlineMatchId::GetMatchIdString();
            BootIdString = OnlineBootId::GetBootIdString();
            EpochTimeFromAuth_ms = Online_GetEpochTimeFromAuth_ms();
            if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) )
            {
              if ( DLog_IsActive() )
              {
                v14 = DLog_BeginEvent(&context, "online_console_logging");
                context.autoEndEvent = 1;
                if ( v14 && DLog_UInt64(&context, "timestamp", EpochTimeFromAuth_ms) && DLog_String(&context, "bootguid", BootIdString, 0) && DLog_String(&context, "matchguid", MatchIdString, 0) && DLog_UInt32(&context, "sequenceid", m_sequenceid) && DLog_String(&context, "console_log", s_finalOutputBufferB64, 0) )
                  DLog_RecordContext(&context);
              }
              else
              {
                context.error = DLOG_ERROR_NOT_ACTIVE;
              }
            }
            if ( bb_msg.overflow )
              Com_Printf(25, "BBConsolePrinter::Flush() - overflowed so will attempt to upload again next frame!\n");
            ++s_bbConsolePrinter.m_sequenceid;
            v4 = 1;
            *(_WORD *)&s_bbConsolePrinter.m_shouldFlush = 0;
          }
        }
      }
      Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
      if ( lastSend >= Sys_Milliseconds() )
      {
        if ( !v4 && bb_msg.cursize < 0xF000 )
          return;
      }
      else
      {
        lastSend = Sys_Milliseconds() + 60000;
      }
      DLog_EnterCriticalSection(DLOG_CRITSECT_BLACKBOX);
      Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
      if ( s_blackboxIsInteresting )
      {
        v15 = bb_msg_header;
        bb_msg_header->sendTime = s_sessionStartTime;
        if ( bb_msg.overflow )
          v15->flags |= 1u;
        if ( bb_msg.pppHashTable )
        {
          bb_msg.data[bb_msg.pppBitOffset] = bb_msg.pppBits << (8 - LOBYTE(bb_msg.pppBitCount));
          v15->flags |= 2u;
        }
        if ( Sys_IsMainThread() )
        {
          for ( i = 0; i < 8; ++i )
          {
            if ( dwGetLogOnStatus(i) == DW_LIVE_CONNECTED )
              break;
          }
          if ( i >= 0 && i != 8 )
          {
            OpenTaskSlot = TaskManager_GetOpenTaskSlot(&s_overlappedLogTasks, i, 4);
            if ( OpenTaskSlot )
            {
              v18 = truncate_cast<int,unsigned __int64>(bb_msg.cursize);
              if ( dwRecordEvent(OpenTaskSlot, bb_msg.data, v18, DW_EVENT_BLACKBOX, NULL) == 1 )
              {
                BB_SetupMsg();
                s_blackboxIsInteresting = 0;
                s_shouldForceWhenReady = 0;
              }
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 3338, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
            {
              __debugbreak();
            }
          }
        }
      }
      else
      {
        BB_SetupMsg();
      }
      Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
      DLog_LeaveCriticalSection(DLOG_CRITSECT_BLACKBOX);
    }
  }
}

/*
==============
BB_SendHighWaterMarks
==============
*/
void BB_SendHighWaterMarks(void)
{
  ;
}

/*
==============
BB_SendProfileData
==============
*/
void BB_SendProfileData(int __formal)
{
  ;
}

/*
==============
BB_Send_f
==============
*/
void BB_Send_f()
{
  int v0; 

  v0 = Cmd_LocalControllerIndex();
  BB_Send(v0, 1, 0);
}

/*
==============
BB_SetHighWaterMark
==============
*/
void BB_SetHighWaterMark(int idx, unsigned int value)
{
  if ( idx >= 0 && idx < highwater_count && highwater[idx].current_value < value )
    highwater[idx].current_value = value;
}

/*
==============
BB_SetThrottle
==============
*/
void BB_SetThrottle(const char *name, int throttle)
{
  int throttleMS; 
  unsigned __int64 v4; 
  int v5; 
  unsigned int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  BBThrottle *v11; 

  throttleMS = -1;
  v4 = -1i64;
  do
    ++v4;
  while ( name[v4] );
  v5 = 0;
  v6 = BB_HashString(name, v4);
  v7 = s_throttledTypeCount - 1;
  while ( v5 <= v7 )
  {
    v8 = (v7 + v5) / 2;
    v9 = v8;
    if ( s_throttledTypes[v8].name >= v6 )
    {
      if ( s_throttledTypes[v8].name <= v6 )
      {
        v5 = (v7 + v5) / 2;
        throttleMS = s_throttledTypes[v8].throttleMS;
        goto LABEL_11;
      }
      v7 = v8 - 1;
    }
    else
    {
      v5 = v8 + 1;
    }
  }
  v9 = v5;
  if ( !s_throttleByDefault )
    throttleMS = 0;
LABEL_11:
  if ( throttleMS != throttle )
  {
    Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
    v10 = s_throttledTypeCount;
    if ( s_throttledTypeCount > 0 && s_throttledTypes[v5].name == v6 )
    {
      s_throttledTypes[v5].throttleMS = throttle;
    }
    else
    {
      if ( s_throttledTypeCount >= 128 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 843, ASSERT_TYPE_ASSERT, "(s_throttledTypeCount < 128)", (const char *)&queryFormat, "s_throttledTypeCount < BB_MAX_TYPES") )
          __debugbreak();
        v10 = s_throttledTypeCount;
      }
      v11 = &s_throttledTypes[v9];
      memmove_0(&s_throttledTypes[v9 + 1], v11, 12i64 * (v10 - v9));
      v11->name = v6;
      v11->lastMS = 0;
      s_throttledTypeCount = v10 + 1;
      v11->throttleMS = throttle;
    }
    Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
  }
}

/*
==============
BB_SetupMsg
==============
*/
void BB_SetupMsg(void)
{
  unsigned __int8 *data; 
  int v1; 

  BB_MsgInit(&bb_msg, bb_msg_data, 64512);
  data = bb_msg.data;
  v1 = 0;
  bb_msg.cursize += 24i64;
  bb_msg_header = (BBMsgHeader *)bb_msg.data;
  *(_QWORD *)bb_msg.data = *(_QWORD *)BB_IDENT;
  *((_DWORD *)data + 3) = s_sessionStartTime;
  *((_DWORD *)data + 2) = -1151289680;
  *((_QWORD *)data + 2) = 0i64;
  Sys_Milliseconds();
  BB_ClearStringCache();
  BB_RewriteDefinitions(&bb_msg);
  do
    BB_WriteInstanceData(v1++);
  while ( v1 < 8 );
}

/*
==============
BB_Start
==============
*/
void BB_Start(void)
{
  __time64_t v0; 
  int i; 
  char v2; 
  __time64_t v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  unsigned int AdvertisedPatchVersion; 
  unsigned int DataBuildNumber; 
  char *fmt; 
  unsigned __int64 macAddr; 

  if ( s_blackboxInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 2511, ASSERT_TYPE_ASSERT, "(s_blackboxInitialized == false)", (const char *)&queryFormat, "s_blackboxInitialized == false") )
    __debugbreak();
  v0 = _time64(NULL);
  if ( blackboxUseBlackbox->current.enabled )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( dwGetLogOnStatus(i) == DW_LIVE_CONNECTED )
        break;
    }
    if ( i != 8 && i != -1 )
    {
      Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
      BB_InitDefinitions();
      BB_InitStringCache();
      TaskManager_ConstructTaskSet(&s_overlappedLogTasks, "BLACKBOX");
      v2 = 0;
      if ( Live_GetMACAddressAsUint64(&macAddr) )
      {
        v2 = 1;
        LOWORD(s_bbmac) = macAddr;
        *(_DWORD *)((char *)&s_bbmac + 2) = *(_DWORD *)((char *)&macAddr + 2);
      }
      v3 = v0 << 34;
      if ( v2 )
      {
        v6 = s_bbmac ^ v3;
      }
      else
      {
        v4 = rand();
        v5 = (unsigned int)rand();
        Com_PrintWarning(16, "Could not determine MAC address, using random default\n");
        v6 = v3 ^ (v5 | (v4 << 32));
      }
      s_bbid = v6;
      s_blackboxInitialized = 1;
      BB_SetupMsg();
      Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
      AdvertisedPatchVersion = GetAdvertisedPatchVersion();
      DataBuildNumber = DS_GetDataBuildNumber();
      LODWORD(fmt) = AdvertisedPatchVersion;
      Com_sprintf(s_buildVersionString, 0x80ui64, "%d@%u", DataBuildNumber, fmt);
    }
  }
}

/*
==============
BB_Start_f
==============
*/
void BB_Start_f(void)
{
  if ( !s_blackboxInitialized )
    BB_Start();
}

/*
==============
BB_StreamMem
==============
*/
void BB_StreamMem(const vec3_t *viewPos, unsigned int bytesWanted)
{
  unsigned int v4; 
  unsigned int v5; 
  float v6; 
  unsigned __int64 UserId; 
  int v8; 
  float v9; 
  float v10; 
  float v11; 
  bool v12; 
  DLogContext context; 
  char buffer[4096]; 

  v4 = s_sessionStartTime;
  if ( dword_14F8E2D00 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14F8E2D00);
    if ( dword_14F8E2D00 == -1 )
    {
      previous_time = s_sessionStartTime;
      j__Init_thread_footer(&dword_14F8E2D00);
    }
  }
  v5 = 1;
  if ( (float)((float)((float)((float)(previous_viewPos.v[1] - viewPos->v[1]) * (float)(previous_viewPos.v[1] - viewPos->v[1])) + (float)((float)(previous_viewPos.v[0] - viewPos->v[0]) * (float)(previous_viewPos.v[0] - viewPos->v[0]))) + (float)((float)(previous_viewPos.v[2] - viewPos->v[2]) * (float)(previous_viewPos.v[2] - viewPos->v[2]))) <= 1296.0 )
    v5 = 60;
  if ( v4 - previous_time >= v5 )
  {
    *(_QWORD *)previous_viewPos.v = *(_QWORD *)viewPos->v;
    v6 = viewPos->v[2];
    previous_time = v4;
    UserId = 0i64;
    v8 = 0;
    previous_viewPos.v[2] = v6;
    do
    {
      if ( dwGetLogOnStatus(v8) == DW_LIVE_CONNECTED )
        break;
      ++v8;
    }
    while ( v8 < 8 );
    if ( v8 >= 0 && v8 != 8 )
    {
      do
      {
        if ( dwGetLogOnStatus(UserId) == DW_LIVE_CONNECTED )
          break;
        LODWORD(UserId) = UserId + 1;
      }
      while ( (int)UserId < 8 );
      if ( (_DWORD)UserId == 8 )
        LODWORD(UserId) = -1;
      UserId = DLog_GetUserId(UserId);
    }
    v9 = viewPos->v[2];
    v10 = viewPos->v[1];
    v11 = viewPos->v[0];
    if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
    {
      v12 = DLog_BeginEvent(&context, "streammem");
      context.autoEndEvent = 1;
      if ( v12 && DLog_Float32(&context, "x", v11) && DLog_Float32(&context, "y", v10) && DLog_Float32(&context, "z", v9) && DLog_UInt32(&context, "wanted", bytesWanted) )
        DLog_RecordContext(&context);
    }
  }
}

/*
==============
BB_Throttle_f
==============
*/
void BB_Throttle_f()
{
  int v0; 
  const char *v1; 

  if ( Cmd_Argc() >= 3 )
  {
    v0 = Cmd_ArgInt(2);
    v1 = Cmd_Argv(1);
    BB_SetThrottle(v1, v0);
  }
}

/*
==============
BB_Unlock
==============
*/
void BB_Unlock(void)
{
  Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
}

/*
==============
BB_Update
==============
*/
void BB_Update(void)
{
  bool v0; 
  Online_HardwareSurvey *Instance; 
  Online_HardwareSurvey *v2; 
  int i; 
  overlappedTask::taskShim *p_u; 
  __int64 v5; 
  overlappedTask *tasks; 

  if ( BB_IsInitializedAndActive() )
  {
    BB_LoadWhitelists();
    v0 = 0;
    Instance = Online_HardwareSurvey::GetInstance();
    if ( Online_HardwareSurvey::IsReportGenerated(Instance) )
    {
      v2 = Online_HardwareSurvey::GetInstance();
      Online_HardwareSurvey::Capture(v2);
      v0 = 1;
    }
    for ( i = 0; i < 8; ++i )
    {
      if ( dwGetLogOnStatus(i) == DW_LIVE_CONNECTED )
        break;
    }
    if ( i == 8 )
      i = -1;
    BB_Send(i, v0, 1);
    p_u = &s_overlappedLogTasks.tasks[0].u;
    v5 = 32i64;
    tasks = s_overlappedLogTasks.tasks;
    do
    {
      if ( BYTE4(p_u[1].remoteTask.m_ptr) && (!p_u->remoteTask.m_ptr || dwRecordEventComplete(tasks)) )
        TaskManager_ClearTask(tasks);
      ++tasks;
      p_u = (overlappedTask::taskShim *)((char *)p_u + 40);
      --v5;
    }
    while ( v5 );
  }
  else if ( blackboxUseBlackbox->current.enabled )
  {
    BB_Start();
  }
}

/*
==============
BB_UserSignedIn
==============
*/

void __fastcall BB_UserSignedIn(int controllerIndex)
{
  BB_WriteInstanceData(controllerIndex);
}

/*
==============
BB_WriteInstanceData
==============
*/
void BB_WriteInstanceData(int controllerIndex)
{
  __int64 v2; 
  DWServicesAccess *Instance; 
  bool IsGuest; 
  LPSTR CommandLineA; 
  const char *v6; 
  LPSTR v7; 
  char v8; 
  char *BootIdString; 
  unsigned int BuildNumberAsInt; 
  unsigned __int64 v11; 
  unsigned int v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  bool v15; 
  bool v16; 
  unsigned __int64 v17; 
  const char *v18; 
  unsigned int v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  bool v27; 
  unsigned __int64 userId; 
  unsigned __int64 connectionID; 
  char value[64]; 
  char nameBufferIn[128]; 
  DLogContext context; 
  char buffer[4096]; 

  if ( !s_blackboxInitialized )
    return;
  memset_0(nameBufferIn, 0, sizeof(nameBufferIn));
  v2 = 0i64;
  connectionID = 0i64;
  if ( !Live_IsUserSignedIn(controllerIndex) )
    return;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::GetConnectionID(Instance, controllerIndex, &connectionID) || !Live_GetOnlineUserName(controllerIndex, nameBufferIn, 128) )
    return;
  userId = DLog_GetUserId(controllerIndex);
  IsGuest = Live_UserIsGuest(controllerIndex);
  v27 = IsGuest;
  CommandLineA = GetCommandLineA();
  value[0] = 0;
  v6 = CommandLineA;
  if ( *CommandLineA )
  {
    v7 = CommandLineA;
    do
    {
      if ( v2 >= 2048 )
        break;
      v8 = *v7;
      *((_BYTE *)&context.position + v2) = *v7;
      if ( v8 == 92 )
      {
        ++v2;
        *((_BYTE *)&context.position + v2) = 92;
      }
      ++v7;
      ++v2;
    }
    while ( *v7 );
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_blackbox_send_bootguid_in_connect, "online_blackbox_send_bootguid_in_connect") )
  {
    BootIdString = OnlineBootId::GetBootIdString();
    BuildNumberAsInt = j_getBuildNumberAsInt();
    v11 = connectionID;
    v12 = BuildNumberAsInt;
    v13 = s_bbmac;
    v14 = s_bbid;
    if ( DLog_IsActive() && DLog_CreateContext(&context, userId, buffer, 4096) && DLog_IsActive() )
    {
      v15 = DLog_BeginEvent(&context, "connections");
      context.autoEndEvent = 1;
      if ( v15 )
      {
        v16 = DLog_Int32(&context, "controller", controllerIndex);
        v17 = userId;
        if ( v16 && DLog_UInt64(&context, "xuid", userId) && DLog_String(&context, "username", nameBufferIn, 0) && DLog_Bool(&context, "guest", v27) && DLog_UInt64(&context, "bbid", v14) && DLog_UInt64(&context, "macaddress", v13) && DLog_UInt64(&context, "dwconnectionid", v11) && DLog_String(&context, "platform", "xb3", 0) && DLog_String(&context, "platform_sdk", "0x42EE13D4", 0) && DLog_UInt32(&context, "version", v12) && DLog_String(&context, "builder", "UNKNOWN", 0) && DLog_String(&context, "hostname", value, 0) && DLog_String(&context, "cmdline", v6, 0) && DLog_String(&context, "buildname", s_buildVersionString, 0) )
        {
          v18 = BootIdString;
LABEL_31:
          if ( DLog_String(&context, "bootguid", v18, 0) && DLog_Bool(&context, "is_dedicated", 0) )
            DLog_RecordContext(&context);
          goto LABEL_54;
        }
        goto LABEL_54;
      }
    }
LABEL_53:
    v17 = userId;
    goto LABEL_54;
  }
  v19 = j_getBuildNumberAsInt();
  v20 = connectionID;
  v21 = v19;
  v22 = s_bbmac;
  v23 = s_bbid;
  if ( !DLog_IsActive() )
    goto LABEL_53;
  if ( !DLog_CreateContext(&context, userId, buffer, 4096) )
    goto LABEL_53;
  if ( !DLog_IsActive() )
    goto LABEL_53;
  v24 = DLog_BeginEvent(&context, "connections");
  context.autoEndEvent = 1;
  if ( !v24 )
    goto LABEL_53;
  v25 = DLog_Int32(&context, "controller", controllerIndex);
  v17 = userId;
  if ( v25 && DLog_UInt64(&context, "xuid", userId) && DLog_String(&context, "username", nameBufferIn, 0) && DLog_Bool(&context, "guest", IsGuest) && DLog_UInt64(&context, "bbid", v23) && DLog_UInt64(&context, "macaddress", v22) && DLog_UInt64(&context, "dwconnectionid", v20) && DLog_String(&context, "platform", "xb3", 0) && DLog_String(&context, "platform_sdk", "0x42EE13D4", 0) && DLog_UInt32(&context, "version", v21) && DLog_String(&context, "builder", "UNKNOWN", 0) && DLog_String(&context, "hostname", value, 0) && DLog_String(&context, "cmdline", v6, 0) && DLog_String(&context, "buildname", s_buildVersionString, 0) )
  {
    v18 = (char *)&queryFormat.fmt + 3;
    goto LABEL_31;
  }
LABEL_54:
  if ( only_send_default_session_once )
  {
    s_sessionStartTime = Sys_Milliseconds();
    s_blackboxIsInteresting = 1;
    if ( DLog_IsActive() && DLog_CreateContext(&context, v17, buffer, 4096) && DLog_IsActive() )
    {
      v26 = DLog_BeginEvent(&context, "sessions");
      context.autoEndEvent = 1;
      if ( v26 )
        DLog_RecordContext(&context);
    }
    only_send_default_session_once = 0;
  }
}

/*
==============
Blackbox_ScriptUnlockOnError
==============
*/
void Blackbox_ScriptUnlockOnError(void)
{
  if ( s_script_locked && Sys_IsServerThread() )
  {
    Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
    s_script_locked = 0;
  }
}

/*
==============
Blackbox_SendSession
==============
*/
void Blackbox_SendSession(int controllerIndex, bool isserver, const char *mapname, const char *gametype)
{
  int v5; 
  unsigned __int64 UserId; 
  unsigned __int64 v7; 
  int v8; 
  int PersistentDataDefVersion; 
  const dvar_t *v10; 
  int PlaylistIdForNum; 
  const char *StringSafe; 
  char *MatchIdString; 

  v5 = 0;
  UserId = DLog_GetUserId(controllerIndex);
  v7 = 0i64;
  v8 = 0;
  PersistentDataDefVersion = -1;
  if ( Session_IsValid(&g_serverSession) )
    v7 = (unsigned __int64)*XSESSION_INFO::GetSecurityId(&g_serverSession.dyn.sessionInfo);
  v10 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v10->current.integer);
  StringSafe = Dvar_GetStringSafe("NOQRRQMOON");
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING) )
    PersistentDataDefVersion = LiveStorage_GetPersistentDataDefVersion();
  s_blackboxIsInteresting = 1;
  if ( enable_analytics_log->current.enabled )
    v8 = analytics_log_type->current.color[0];
  s_sessionStartTime = Sys_Milliseconds();
  do
  {
    if ( dwGetLogOnStatus(v5) == DW_LIVE_CONNECTED )
      break;
    ++v5;
  }
  while ( v5 < 8 );
  if ( v5 == 8 )
    v5 = -1;
  BB_Send(v5, 1, 0);
  MatchIdString = OnlineMatchId::GetMatchIdString();
  DLog_RecordEvent<4096,char const *,char const *,char const *,char const *,char const *,signed char,char const *,bool,char const *,int,char const *,char const *,char const *,unsigned __int64,char const *,unsigned __int64,char const *,int,char const *,int,char const *,char *>(UserId, "sessions", "mapname", mapname, "gametype", gametype, "isserver", isserver, "ranked", 0, "playlist", PlaylistIdForNum, "playlist_name", StringSafe, "xuid", UserId, "xsessionid", v7, "persistentdatadefversion", PersistentDataDefVersion, "session_type", v8, "matchguid", MatchIdString);
}

/*
==============
BuildBBGUID
==============
*/
unsigned __int64 BuildBBGUID()
{
  unsigned __int64 v0; 
  bdTrulyRandomImpl *Instance; 
  bdTrulyRandomImpl *v2; 
  unsigned __int8 v4[8]; 
  unsigned __int64 macAddr; 
  unsigned __int8 in[4]; 
  __int16 v7; 

  *(_WORD *)&v4[6] = 0;
  v0 = Sys_Microseconds();
  if ( Live_GetMACAddressAsUint64(&macAddr) )
  {
    *(_DWORD *)in = macAddr;
    v7 = WORD2(macAddr);
  }
  else
  {
    Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
    bdTrulyRandomImpl::getRandomUByte8(Instance, in, 6u);
  }
  *(_DWORD *)v4 = *(_DWORD *)in;
  *(_WORD *)&v4[4] = v7;
  v2 = bdSingleton<bdTrulyRandomImpl>::getInstance();
  bdTrulyRandomImpl::getRandomUByte8(v2, &v4[6], 2u);
  return v0 ^ *(_QWORD *)v4;
}

/*
==============
BBConsolePrinter::Flush
==============
*/
char BBConsolePrinter::Flush(BBConsolePrinter *this)
{
  const dvar_t *v2; 
  unsigned int m_sequenceid; 
  const char *MatchIdString; 
  const char *BootIdString; 
  unsigned __int64 EpochTimeFromAuth_ms; 
  bool v7; 
  DLogContext context; 
  char buffer[4096]; 

  if ( !this->m_shouldFlush || !this->m_readyToFlush )
    return 0;
  v2 = DVARBOOL_online_bb_console_logging;
  if ( !DVARBOOL_online_bb_console_logging )
    return 0;
  Dvar_CheckFrontendServerThread(DVARBOOL_online_bb_console_logging);
  if ( !v2->current.enabled )
    return 0;
  m_sequenceid = this->m_sequenceid;
  MatchIdString = OnlineMatchId::GetMatchIdString();
  BootIdString = OnlineBootId::GetBootIdString();
  EpochTimeFromAuth_ms = Online_GetEpochTimeFromAuth_ms();
  if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
  {
    v7 = DLog_BeginEvent(&context, "online_console_logging");
    context.autoEndEvent = 1;
    if ( v7 && DLog_UInt64(&context, "timestamp", EpochTimeFromAuth_ms) && DLog_String(&context, "bootguid", BootIdString, 0) && DLog_String(&context, "matchguid", MatchIdString, 0) && DLog_UInt32(&context, "sequenceid", m_sequenceid) && DLog_String(&context, "console_log", s_finalOutputBufferB64, 0) )
      DLog_RecordContext(&context);
  }
  if ( bb_msg.overflow )
    Com_Printf(25, "BBConsolePrinter::Flush() - overflowed so will attempt to upload again next frame!\n");
  return 1;
}

/*
==============
BBConsolePrinter::ForceFlush
==============
*/
bool BBConsolePrinter::ForceFlush(BBConsolePrinter *this, bool SyncAndFlush)
{
  BBConsolePrinter *v3; 
  BBConsolePrinter *m_currentBuffer; 
  unsigned int v5; 
  const dvar_t *v6; 
  unsigned int m_sequenceid; 
  bool v8; 
  BBConsolePrinter *v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  bool result; 

  v3 = this;
  if ( this->m_shouldFlush )
    return 0;
  m_currentBuffer = (BBConsolePrinter *)this->m_currentBuffer;
  v5 = 0;
  this->m_currentBufferOffset = 0;
  if ( m_currentBuffer && m_currentBuffer == this )
    this = (BBConsolePrinter *)((char *)this + 66560);
  v3->m_currentBuffer = (char *)this;
  memset_0(this, 0, 0x10400ui64);
  if ( !s_blackboxInitialized )
    return 0;
  if ( SyncAndFlush )
    v3->m_flushState = 2;
  v6 = DVARBOOL_online_bb_console_logging;
  if ( !DVARBOOL_online_bb_console_logging )
    return 1;
  Dvar_CheckFrontendServerThread(DVARBOOL_online_bb_console_logging);
  if ( !v6->current.enabled )
    return 1;
  m_sequenceid = v3->m_sequenceid;
  if ( v3->m_shouldFlush )
  {
    Com_Printf(25, "BBConsolePrinter::StartFlush() - dropping buffer for sequence id: %d.\n", m_sequenceid);
    ++v3->m_sequenceid;
    return 1;
  }
  v8 = v3->m_currentBuffer == (char *)v3;
  v9 = (BBConsolePrinter *)v3->m_buffer[1];
  v3->m_shouldFlush = 1;
  if ( !v8 )
    v9 = v3;
  LOBYTE(v5) = v8;
  j_printf("%d - bufferToCompress = %p (%d)\n", m_sequenceid, v9, v5);
  Core_strcpy(s_tmpInflightBuffer, 0x10400ui64, (const char *)v9);
  memset_0(&s_bb_stream, 0, sizeof(s_bb_stream));
  j_Zip_InitThreadMemory(&s_bb_stream, s_zip_buffer, 393216);
  v10 = j_deflateInit_(&s_bb_stream, 1, "1.2.8", 88);
  if ( v10 )
  {
    Com_Printf(25, "BBConsolePrinter::StartFlush() - zip error %i for sequence id: %d.\n", v10, v3->m_sequenceid);
    j_Zip_ShutdownThreadMemory(&s_bb_stream);
    result = 1;
    v3->m_shouldFlush = 0;
  }
  else
  {
    v11 = -1i64;
    do
      ++v11;
    while ( s_tmpInflightBuffer[v11] );
    s_bb_stream.data_type = 1;
    s_bb_stream.next_in = (unsigned __int8 *)s_tmpInflightBuffer;
    s_bb_stream.avail_in = truncate_cast<unsigned int,unsigned __int64>(v11);
    s_bb_stream.next_out = s_tempDeflateOutputBuffer;
    s_currentPtrInOutputBuffer = s_finalOutputBuffer;
    result = 1;
    s_bb_stream.avail_out = 8320;
  }
  return result;
}

/*
==============
GScr_BBPrint
==============
*/
void GScr_BBPrint(scrContext_t *scrContext)
{
  __int128 v1; 
  scrContext_t *v3; 
  int NumParam; 
  int v5; 
  int v6; 
  int v7; 
  signed int v8; 
  unsigned int ArrayObject; 
  const char *String; 
  const char *v11; 
  int v12; 
  char DemonwareActiveController; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int8 v19; 
  __int64 intValue; 
  __int64 v21; 
  char v22; 
  float floatValue; 
  __int128 v24; 
  __int128 v25; 
  unsigned int v26; 
  unsigned int v27; 
  VariableUnion *v28; 
  VariableType ValueType; 
  __int128 v30; 
  const char *v31; 
  char v32; 
  int v33; 
  const char *IString; 
  unsigned __int64 v35; 
  unsigned int v36; 
  unsigned int ArrayVariable; 
  scr_string_t *VariableValueAddress; 
  const char *v39; 
  unsigned __int64 v40; 
  const char *v41; 
  unsigned __int64 v42; 
  char v43; 
  unsigned int v44; 
  char *v45; 
  unsigned int i; 
  unsigned __int8 v47; 
  __int64 v48; 
  char v49; 
  unsigned int v50; 
  int v51; 
  unsigned __int8 *p_Type; 
  unsigned __int8 v53; 
  __int64 v54; 
  unsigned int v55; 
  char *v56; 
  unsigned int j; 
  unsigned __int8 v58; 
  __int64 v59; 
  unsigned int v60; 
  int v61; 
  unsigned int v62; 
  unsigned int v63; 
  __int64 isBlackboxWhitelisted; 
  __int64 v65; 
  VariableType Type; 
  __int64 v67; 
  __int64 v68; 
  int parameterCount; 
  scrContext_t *v70; 
  __int64 v71; 
  unsigned __int8 *parameters; 
  __int64 v73; 
  vec3_t vectorValue; 
  __int128 v75; 

  v3 = scrContext;
  v70 = scrContext;
  parameterCount = 0;
  NumParam = Scr_GetNumParam(scrContext);
  v5 = 0;
  v6 = NumParam;
  if ( s_blackboxInitialized && NumParam )
  {
    v7 = 2;
    v8 = 2;
    if ( NumParam > 2 )
    {
      do
      {
        switch ( Scr_GetType(v3, v8) )
        {
          case VAR_POINTER:
            if ( Scr_GetPointerType(v3, v8) == VAR_ARRAY )
            {
              ArrayObject = BGScr_Main_GetArrayObject(v3, v8);
              v5 += GetArraySize(v3, ArrayObject);
            }
            break;
          case VAR_VECTOR:
            v5 += 3;
            break;
          default:
            ++v5;
            break;
        }
        ++v8;
      }
      while ( v8 < v6 );
    }
    String = Scr_GetString(v3, 0);
    v11 = Scr_GetString(v3, 1u);
    if ( BB_CheckThrottle(String) )
    {
      if ( Sys_IsServerThread() )
      {
        Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
        s_script_locked = 1;
      }
      v12 = BB_ParseAndCacheFormatString(&bb_msg, String, v11, &parameterCount, (const unsigned __int8 **)&parameters, 1);
      if ( parameterCount == v5 )
      {
        DemonwareActiveController = BB_GetDemonwareActiveController();
        BB_WriteVarUInt32_0(&bb_msg, 4 * ((4 * v12) | DemonwareActiveController & 3));
        v14 = s_sessionStartTime;
        v15 = Sys_Milliseconds();
        BB_WriteVarUInt32_0(&bb_msg, v15 - v14);
        v16 = 0;
        v73 = v5;
        s_blackboxIsInteresting = 1;
        if ( v5 > 0 )
        {
          v17 = 0i64;
          v18 = 0i64;
          v71 = 0i64;
          v75 = _XMM7;
          v68 = 0i64;
          while ( 1 )
          {
            v19 = parameters[v18];
            LODWORD(intValue) = 0;
            Type = Scr_GetType(v3, v7);
            v21 = 0i64;
            v22 = Type;
            floatValue = 0.0;
            __asm { vxorpd  xmm7, xmm7, xmm7 }
            if ( Type == VAR_FLOAT )
            {
              *(double *)&v1 = Scr_GetFloat(v3, v7);
              floatValue = *(float *)&v1;
              LODWORD(intValue) = (int)*(float *)&v1;
              *((_QWORD *)&v24 + 1) = *((_QWORD *)&v1 + 1);
              *(double *)&v24 = *(float *)&v1;
              _XMM7 = v24;
              v21 = (int)*(float *)&v1;
              goto LABEL_55;
            }
            if ( Type == VAR_INTEGER )
            {
              LODWORD(intValue) = Scr_GetInt(v3, v7);
              v25 = 0i64;
              floatValue = (float)(int)intValue;
              *(double *)&v25 = (float)(int)intValue;
              _XMM7 = v25;
              v21 = (int)intValue;
              goto LABEL_55;
            }
            if ( Type != VAR_VECTOR )
              break;
            Scr_GetVector(v3, v7, &vectorValue);
            if ( v16 >= 3 )
            {
              LODWORD(v65) = 3;
              LODWORD(isBlackboxWhitelisted) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", isBlackboxWhitelisted, v65) )
                __debugbreak();
            }
            LODWORD(intValue) = (int)vectorValue.v[v17];
            v21 = (int)intValue;
            if ( v16 >= 3 )
            {
              LODWORD(v65) = 3;
              LODWORD(isBlackboxWhitelisted) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", isBlackboxWhitelisted, v65) )
                __debugbreak();
            }
            floatValue = vectorValue.v[v17];
            _XMM7 = COERCE_UNSIGNED_INT64(floatValue);
LABEL_55:
            if ( (v19 & 3) != 0 )
            {
              if ( (v19 & 3) != 1 )
              {
                if ( (v19 & 3) != 2 )
                {
                  if ( (v19 & 3) == 3 )
                  {
                    if ( v22 == 3 )
                    {
                      IString = Scr_GetIString(v3, v7);
                      v35 = -1i64;
                      do
                        ++v35;
                      while ( IString[v35] );
LABEL_62:
                      BB_WriteString(&bb_msg, IString, v35);
                      goto LABEL_121;
                    }
                    if ( v22 == 2 )
                    {
                      IString = Scr_GetDebugString(v3, v7);
                      v35 = -1i64;
                      do
                        ++v35;
                      while ( IString[v35] );
                      goto LABEL_62;
                    }
                    if ( v22 == 1 && Scr_GetPointerType(v3, v7) == VAR_ARRAY )
                    {
                      v36 = BGScr_Main_GetArrayObject(v3, v7);
                      ArrayVariable = GetArrayVariable(v3, v36, v16);
                      VariableValueAddress = (scr_string_t *)GetVariableValueAddress(v3, ArrayVariable);
                      v39 = SL_ConvertToString(*VariableValueAddress);
                      v40 = -1i64;
                      do
                        ++v40;
                      while ( v39[v40] );
                      BB_WriteString(&bb_msg, v39, v40);
LABEL_119:
                      if ( Scr_GetPointerType(v3, v7) == VAR_ARRAY )
                      {
                        v17 = ++v68;
                        ++v16;
                        v63 = BGScr_Main_GetArrayObject(v3, v7);
                        if ( v16 != GetArraySize(v3, v63) )
                          goto LABEL_123;
                      }
                      goto LABEL_121;
                    }
                    v41 = j_va("%f", floatValue);
                    v42 = -1i64;
                    do
                      ++v42;
                    while ( v41[v42] );
                    BB_WriteString(&bb_msg, v41, v42);
                  }
                  goto LABEL_110;
                }
                v43 = v19 & 0x1C;
                if ( v43 == 4 )
                {
                  *(float *)&v67 = floatValue;
                  if ( (LODWORD(floatValue) & 0x7F800000) != 2139095040 )
                    BB_WriteFloat16(&bb_msg, floatValue);
                  goto LABEL_110;
                }
                if ( v43 != 12 )
                {
                  *(float *)&v67 = floatValue;
                  if ( (LODWORD(floatValue) & 0x7F800000) != 2139095040 )
                    BB_WriteFloat32(&bb_msg, floatValue);
                  goto LABEL_110;
                }
                v67 = *(__int64 *)&_XMM7;
                if ( bb_msg.pppHashTable )
                  goto LABEL_110;
                if ( !bb_msg.overflow && bb_msg.cursize + 8 <= bb_msg.maxsize )
                {
                  v44 = truncate_cast<unsigned int,unsigned __int64>(bb_msg.cursize);
                  v45 = (char *)&v67 + 1;
                  for ( i = 0; i < 8; i += 8 )
                  {
                    v47 = *(v45 - 1);
                    v45 += 8;
                    bb_msg.data[i + v44] = v47;
                    bb_msg.data[i + 1 + v44] = *(v45 - 8);
                    bb_msg.data[i + 2 + v44] = *(v45 - 7);
                    bb_msg.data[i + 3 + v44] = *(v45 - 6);
                    bb_msg.data[i + 4 + v44] = *(v45 - 5);
                    bb_msg.data[i + 5 + v44] = *(v45 - 4);
                    bb_msg.data[v44 + 6 + i] = *(v45 - 3);
                    v48 = v44 + i + 7;
                    bb_msg.data[v48] = *(v45 - 2);
                  }
                  v22 = Type;
                  v3 = v70;
                  bb_msg.cursize += 8i64;
                  goto LABEL_110;
                }
LABEL_109:
                bb_msg.overflow = 1;
                goto LABEL_110;
              }
              if ( (v19 & 0x10) != 0 )
              {
                BB_WriteVarUInt32_0(&bb_msg, intValue);
                goto LABEL_110;
              }
            }
            else if ( (v19 & 0x10) != 0 )
            {
              BB_WriteVarUInt32_0(&bb_msg, (2 * intValue) ^ ((int)intValue >> 31));
              goto LABEL_110;
            }
            v49 = v19 & 0x1C;
            switch ( v49 )
            {
              case 0:
                Type = (char)intValue;
                if ( bb_msg.pppHashTable )
                  break;
                if ( !bb_msg.overflow && bb_msg.cursize + 1 <= bb_msg.maxsize )
                {
                  v50 = truncate_cast<unsigned int,unsigned __int64>(bb_msg.cursize);
                  v51 = 0;
                  p_Type = (unsigned __int8 *)&Type;
                  do
                  {
                    v53 = *p_Type;
                    v54 = v51 + v50;
                    ++p_Type;
                    ++v51;
                    bb_msg.data[v54] = v53;
                  }
                  while ( !v51 );
                  ++bb_msg.cursize;
                  break;
                }
                goto LABEL_109;
              case 4:
                BB_WriteInt16(&bb_msg, intValue);
                break;
              case 8:
                BB_WriteInt32(&bb_msg, intValue);
                break;
              case 12:
                v67 = v21;
                if ( !bb_msg.pppHashTable )
                {
                  if ( bb_msg.overflow || bb_msg.cursize + 8 > bb_msg.maxsize )
                    goto LABEL_109;
                  v55 = truncate_cast<unsigned int,unsigned __int64>(bb_msg.cursize);
                  v56 = (char *)&v67 + 1;
                  for ( j = 0; j < 8; j += 8 )
                  {
                    v58 = *(v56 - 1);
                    v56 += 8;
                    bb_msg.data[j + v55] = v58;
                    bb_msg.data[v55 + 1 + j] = *(v56 - 8);
                    bb_msg.data[v55 + 2 + j] = *(v56 - 7);
                    bb_msg.data[v55 + 3 + j] = *(v56 - 6);
                    bb_msg.data[v55 + 4 + j] = *(v56 - 5);
                    bb_msg.data[v55 + 5 + j] = *(v56 - 4);
                    bb_msg.data[v55 + 6 + j] = *(v56 - 3);
                    v59 = v55 + 7 + j;
                    bb_msg.data[v59] = *(v56 - 2);
                  }
                  v22 = Type;
                  v3 = v70;
                  bb_msg.cursize += 8i64;
                }
                break;
            }
LABEL_110:
            if ( v22 == 4 )
            {
              v60 = v16 + 1;
              v17 = 0i64;
              if ( v16 != 2 )
                v17 = v68 + 1;
              v61 = v7 + 1;
              if ( v16 != 2 )
                v61 = v7;
              v7 = v61;
              v62 = v16;
              v16 = 0;
              if ( v62 != 2 )
                v16 = v60;
              goto LABEL_122;
            }
            if ( v22 == 1 )
              goto LABEL_119;
LABEL_121:
            v16 = 0;
            v17 = 0i64;
            ++v7;
LABEL_122:
            v68 = v17;
LABEL_123:
            v18 = v71 + 1;
            v71 = v18;
            if ( v18 >= v73 )
              goto LABEL_124;
          }
          if ( Type == VAR_POINTER && Scr_GetPointerType(v3, v7) == VAR_ARRAY )
          {
            v26 = BGScr_Main_GetArrayObject(v3, v7);
            v27 = GetArrayVariable(v3, v26, v16);
            v28 = GetVariableValueAddress(v3, v27);
            ValueType = GetValueType(v3, v27);
            if ( (unsigned __int8)ValueType >= VAR_STRING )
            {
              if ( (unsigned __int8)ValueType <= VAR_ISTRING )
              {
LABEL_37:
                v22 = Type;
                goto LABEL_55;
              }
              if ( ValueType == VAR_FLOAT )
              {
                floatValue = v28->floatValue;
                v22 = Type;
                LODWORD(intValue) = (int)v28->floatValue;
                v21 = (int)intValue;
                _XMM7 = COERCE_UNSIGNED_INT64(v28->floatValue);
                goto LABEL_55;
              }
              if ( ValueType == VAR_INTEGER )
              {
                intValue = v28->intValue;
                v22 = Type;
                v21 = intValue;
                v30 = 0i64;
                floatValue = (float)(int)intValue;
                *(double *)&v30 = (float)(int)intValue;
                _XMM7 = v30;
                goto LABEL_55;
              }
            }
            Scr_Error(COM_ERR_3436, v3, "All elements need to be ints or floats or strings, for now...");
            goto LABEL_37;
          }
          if ( (unsigned __int8)(v22 - 2) > 1u || (v19 & 3u) > 1 || (v19 & 0x1C) != 12 )
            goto LABEL_55;
          if ( v22 == 3 )
            v31 = Scr_GetIString(v3, v7);
          else
            v31 = v22 == 2 ? Scr_GetString(v3, v7) : (char *)&queryFormat.fmt + 3;
          v32 = *v31;
          if ( !*v31 )
            goto LABEL_55;
          while ( (unsigned __int8)(v32 - 48) > 9u )
          {
            if ( (unsigned __int8)(v32 - 97) <= 5u )
            {
              v33 = v32 - 87;
              goto LABEL_53;
            }
            if ( (unsigned __int8)(v32 - 65) <= 5u )
            {
              v33 = v32 - 55;
              goto LABEL_53;
            }
LABEL_54:
            v32 = *++v31;
            if ( !v32 )
              goto LABEL_55;
          }
          v33 = v32 - 48;
LABEL_53:
          v21 = (16 * v21) | v33;
          goto LABEL_54;
        }
      }
LABEL_124:
      if ( s_script_locked && Sys_IsServerThread() )
      {
        Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
        s_script_locked = 0;
      }
    }
  }
}

/*
==============
GScr_BBReportSpawnFactors
==============
*/
void GScr_BBReportSpawnFactors(scrContext_t *scrContext)
{
  signed __int64 v1; 
  void *v2; 
  double Float; 
  float v5; 
  unsigned __int64 v8; 
  __int64 v10; 
  int Int; 
  unsigned int v12; 
  int v13; 
  unsigned __int8 v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  int v18; 
  unsigned __int8 v19; 
  int v20; 
  unsigned __int64 v21; 
  int v23; 
  double v25; 
  unsigned __int64 v26; 
  float v27; 
  double v28; 
  unsigned __int64 v29; 
  int v30; 
  unsigned __int8 v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  unsigned int v38; 
  unsigned int v41; 
  unsigned int v42; 
  char v43; 
  unsigned __int8 v44; 
  unsigned int v45; 
  bool v46; 
  unsigned int v47; 
  DLogContext context; 
  char buffer[4096]; 

  v2 = alloca(v1);
  Float = Scr_GetFloat(scrContext, 1u);
  v47 = LODWORD(Float);
  v5 = *(float *)&Float;
  Scr_GetFloat(scrContext, 2u);
  _XMM8 = 0i64;
  __asm { vroundss xmm3, xmm8, xmm2, 1 }
  v8 = (unsigned __int64)truncate_cast<unsigned char,int>((int)*(float *)&_XMM3) << 24;
  Scr_GetFloat(scrContext, 3u);
  __asm { vroundss xmm1, xmm8, xmm0, 1 }
  v10 = truncate_cast<unsigned char,int>((int)*(float *)&_XMM1);
  Int = Scr_GetInt(scrContext, 8u);
  v12 = truncate_cast<unsigned char,int>(Int);
  v13 = Scr_GetInt(scrContext, 9u);
  v14 = truncate_cast<unsigned char,int>(v13);
  v15 = v14;
  v16 = v12;
  v17 = v8 | ((v10 & 0x3F | ((v12 & 1 | (2 * (v14 & 1 | ((unsigned __int64)v47 << 9)))) << 6)) << 16);
  v18 = Scr_GetInt(scrContext, 4u);
  v19 = truncate_cast<unsigned char,int>(v18);
  if ( v19 > 0x7Fu )
  {
    v19 = 127;
    Com_PrintWarning(25, "random score above bounds");
  }
  v20 = Scr_GetInt(scrContext, 5u);
  if ( v20 <= 511 )
  {
    v21 = ((unsigned __int64)(v19 & 0x7F) << 9) | v20 & 0x1FF | v17;
    if ( *((float *)&v21 + 1) != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1401, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "totalscores encoded incorrectly") )
      __debugbreak();
    __asm { vroundss xmm0, xmm8, xmm2, 1 }
    v23 = (int)*(float *)&_XMM0;
    __asm { vroundss xmm0, xmm8, xmm2, 1 }
    if ( v23 != (int)*(float *)&_XMM0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1407, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "maxEnemySightFraction encoded incorrectly") )
      __debugbreak();
    if ( ((v21 >> 16) & 0x3F) != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1413, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "maxJumpenemySightFraction encoded incorrectly") )
      __debugbreak();
    if ( ((v21 >> 22) & 1) != v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1419, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "chosenFlag encoded incorrectly") )
      __debugbreak();
    if ( ((v21 >> 23) & 1) != v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1425, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "isLastSpawnPoint encoded incorrectly") )
      __debugbreak();
    if ( (unsigned __int16)v21 >> 9 != v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1431, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "randomEnemyScore encoded incorrectly") )
      __debugbreak();
    if ( truncate_cast<int,unsigned __int64>(v21 & 0x1FF) != v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "spawnID encoded incorrectly") )
      __debugbreak();
    v25 = Scr_GetFloat(scrContext, 6u);
    v26 = (unsigned __int64)LODWORD(v25) << 32;
    v27 = *(float *)&v25;
    v28 = Scr_GetFloat(scrContext, 7u);
    v29 = v26 | LODWORD(v28);
    if ( COERCE_FLOAT(truncate_cast<unsigned int,unsigned __int64>(HIDWORD(v29))) != v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1460, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "allyDistance encoded incorrectly") )
      __debugbreak();
    if ( COERCE_FLOAT(truncate_cast<unsigned int,unsigned __int64>((unsigned int)v29)) != *(float *)&v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1468, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "enemyDistance encoded incorrectly") )
      __debugbreak();
    v30 = Scr_GetInt(scrContext, 0xAu);
    v31 = truncate_cast<unsigned char,int>(v30);
    v32 = v31;
    v33 = v31 & 3;
    v34 = Scr_GetInt(scrContext, 0xBu);
    v35 = truncate_cast<unsigned int,int>(v34);
    if ( v35 > 1023 )
      v35 = 0;
    v36 = (4 * (v35 & 0x3FF)) | v33;
    Scr_GetFloat(scrContext, 0xCu);
    __asm { vroundss xmm0, xmm8, xmm2, 1 }
    v38 = truncate_cast<unsigned int,int>((int)*(float *)&_XMM0);
    if ( v38 > 0x3FF )
      v38 = 1023;
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0xDu);
    __asm
    {
      vminss  xmm1, xmm0, cs:__real@447fc000
      vroundss xmm1, xmm8, xmm0, 1
    }
    v41 = truncate_cast<unsigned int,int>((int)*(float *)&_XMM1);
    v42 = ((v38 & 0x3FF | (v41 << 10)) << 12) | v36;
    if ( (v42 & 3) != v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1511, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "teamLastSpawnedHere encoded incorrectly") )
      __debugbreak();
    if ( ((v42 >> 2) & 0x3FF) != v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1517, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "spawnPointId encoded incorrectly") )
      __debugbreak();
    if ( ((v42 >> 12) & 0x3FF) != v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1525, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "spawnsHighUsedByEnemies encoded incorrectly") )
      __debugbreak();
    if ( v42 >> 22 != v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1533, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "timeSinceLastSpawn encoded incorrectly") )
      __debugbreak();
    v43 = Scr_GetInt(scrContext, 0xEu) & 0xF;
    v44 = Scr_GetInt(scrContext, 0xFu) & 0xF;
    v45 = (unsigned __int8)(v43 | (16 * v44));
    if ( (v43 & 0xF) != v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1551, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "spawnType encoded incorrectly") )
      __debugbreak();
    if ( v45 >> 4 != v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1557, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "badSpawnReason encoded incorrectly") )
      __debugbreak();
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
    {
      v46 = DLog_BeginEvent(&context, "analytics_spawn_factors_raw_data");
      context.autoEndEvent = 1;
      if ( v46 && DLog_UInt64(&context, "datafield1", v21) && DLog_UInt64(&context, "datafield2", v29) && DLog_UInt32(&context, "datafield3", v42) && DLog_UInt32(&context, "datafield4", v45) )
        DLog_RecordContext(&context);
    }
  }
  else
  {
    Com_PrintWarning(25, "spawn id above bounds");
  }
}

/*
==============
GScr_BBReportSpawnPlayerDetails
==============
*/
void GScr_BBReportSpawnPlayerDetails(scrContext_t *scrContext)
{
  double Float; 
  unsigned __int16 v4; 
  double v5; 
  unsigned __int16 v6; 
  double v7; 
  unsigned __int16 v8; 
  int Int; 
  unsigned __int16 v10; 
  __int64 v13; 
  unsigned __int64 v14; 
  int v15; 
  unsigned __int8 v16; 
  int v17; 
  char v18; 
  int v19; 
  char v20; 
  int v21; 
  char v22; 
  unsigned __int16 v23; 

  Float = Scr_GetFloat(scrContext, 2u);
  v4 = truncate_cast<short,int>((int)*(float *)&Float / 2);
  v5 = Scr_GetFloat(scrContext, 3u);
  v6 = truncate_cast<short,int>((int)*(float *)&v5 / 2);
  v7 = Scr_GetFloat(scrContext, 4u);
  v8 = truncate_cast<short,int>((int)*(float *)&v7 / 2);
  Int = Scr_GetInt(scrContext, 0);
  v10 = truncate_cast<unsigned short,int>(Int);
  if ( v10 <= 0x1FFu )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, 360.0);
    __asm
    {
      vcmpltss xmm2, xmm0, xmm1
      vblendvps xmm0, xmm0, xmm3, xmm2
    }
    v13 = float_to_integral_cast<unsigned char,float>(*(float *)&_XMM0 * 0.35277778);
    v14 = v4 | ((v6 | ((v8 | (((v13 << 9) | v10 & 0x1FF) << 16)) << 16)) << 16);
    if ( WORD2(v14) != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1796, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "player_position_z encoded incorrectly") )
      __debugbreak();
    if ( truncate_cast<int,unsigned __int64>(HIWORD(v14) & 0x1FF) != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1802, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "spawnId encoded incorrectly") )
      __debugbreak();
    if ( truncate_cast<signed char,unsigned __int64>(v14 >> 57) != (_BYTE)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1808, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "playerAngle encoded incorrectly") )
      __debugbreak();
    v15 = Scr_GetInt(scrContext, 5u);
    v16 = truncate_cast<signed char,int>(v15);
    v17 = Scr_GetInt(scrContext, 6u);
    v18 = truncate_cast<signed char,int>(v17);
    v19 = Scr_GetInt(scrContext, 7u);
    v20 = truncate_cast<signed char,int>(v19);
    v21 = Scr_GetInt(scrContext, 8u);
    v22 = truncate_cast<signed char,int>(v21);
    v23 = v16 | (unsigned __int16)((v18 & 3 | (unsigned __int16)(4 * (v20 & 1 | (2 * (v22 & 1))))) << 8);
    if ( (v18 & 3) != v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1839, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "playerTeam encoded incorrectly") )
      __debugbreak();
    if ( ((((v18 & 3 | (unsigned __int16)(4 * (v20 & 1 | (2 * (v22 & 1))))) << 8) & 0x400) != 0) != v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1845, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "spawnerFlag encoded incorrectly") )
      __debugbreak();
    if ( v23 >> 11 != v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1851, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "isLastAttacker encoded incorrectly") )
      __debugbreak();
    DLog_RecordEvent<char const *,unsigned __int64,char const *,unsigned int>(0i64, "analytics_spawn_player_details_raw_data", "datafield1", v14, "datafield2", v23);
  }
  else
  {
    Com_PrintWarning(25, "spawn id above bounds");
  }
}

/*
==============
GScr_BBReportSpawnTypes
==============
*/
void GScr_BBReportSpawnTypes(scrContext_t *scrContext)
{
  __int16 v3; 
  __int64 v4; 
  unsigned __int16 v5; 
  unsigned __int8 v8; 
  int Int; 
  unsigned __int16 v10; 
  unsigned __int8 v11; 
  unsigned __int8 v12; 
  int v13; 
  char v14; 
  int v15; 
  unsigned __int64 v16; 
  int v17; 
  char v18; 
  char v19; 
  __int16 v20; 

  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  v3 = truncate_cast<short,int>((int)*(float *)&_XMM0 / 2);
  v4 = (__int64)v3 << 48;
  v20 = v3;
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  v5 = truncate_cast<short,int>((int)*(float *)&_XMM0 / 2);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, 360.0);
  __asm
  {
    vcmpltss xmm2, xmm0, xmm1
    vblendvps xmm0, xmm0, xmm3, xmm2
  }
  v8 = float_to_integral_cast<unsigned char,float>(*(float *)&_XMM0 * 0.35277778);
  Int = Scr_GetInt(scrContext, 4u);
  v10 = truncate_cast<unsigned short,int>(Int);
  if ( v10 <= 0x1FFu )
  {
    v11 = Scr_GetInt(scrContext, 5u) != 0;
    v12 = Scr_GetInt(scrContext, 6u) != 0;
    v13 = Scr_GetInt(scrContext, 7u);
    v14 = truncate_cast<signed char,int>(v13);
    v15 = Scr_GetInt(scrContext, 9u);
    v19 = truncate_cast<signed char,int>(v15);
    v16 = v19 & 0x7F | ((unsigned __int64)(v14 & 0x7F) << 7) | ((v12 | (2 * (v11 | (2 * (v10 & 0x1FF | ((v8 & 0x7F | ((unsigned __int64)v5 << 7)) << 9)))))) << 14) | v4;
    if ( HIWORD(v16) != v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1660, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "frontline_midpoint_x encoded incorrectly") )
      __debugbreak();
    if ( WORD2(v16) != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1666, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "frontline_midpoint_y encoded incorrectly") )
      __debugbreak();
    if ( truncate_cast<signed char,unsigned __int64>((unsigned int)v16 >> 25) != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1672, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "frontline_angle encoded incorrectly") )
      __debugbreak();
    if ( (WORD1(v16) & 0x1FF) != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1678, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "spawnId encoded incorrectly") )
      __debugbreak();
    if ( truncate_cast<signed char,unsigned __int64>((v16 >> 15) & 1) != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1684, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "isFrontlineActive encoded incorrectly") )
      __debugbreak();
    if ( truncate_cast<signed char,unsigned __int64>((v16 >> 14) & 1) != v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1690, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "frontlineDisabledReason encoded incorrectly") )
      __debugbreak();
    if ( truncate_cast<signed char,unsigned __int64>((v16 >> 7) & 0x7F) != v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1696, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "lifeIndex encoded incorrectly") )
      __debugbreak();
    if ( truncate_cast<signed char,unsigned __int64>(v16 & 0x7F) != v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 1702, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "buddySpawnId encoded incorrectly") )
      __debugbreak();
    v17 = Scr_GetInt(scrContext, 8u);
    v18 = truncate_cast<signed char,int>(v17);
    DLog_RecordEvent<char const *,unsigned __int64,char const *,unsigned int>(0i64, "analytics_spawn_types_raw_data", "datafield1", v16, "datafield2", v18);
  }
  else
  {
    Com_PrintWarning(25, "spawn id above bounds");
  }
}

/*
==============
BBConsolePrinter::GetBufferPtr
==============
*/
char *BBConsolePrinter::GetBufferPtr(BBConsolePrinter *this)
{
  return this->m_currentBuffer;
}

/*
==============
BBConsolePrinter::GetCurrentLen
==============
*/
__int64 BBConsolePrinter::GetCurrentLen(BBConsolePrinter *this)
{
  return this->m_currentBufferOffset;
}

/*
==============
BBConsolePrinter::GetLenRemaining
==============
*/
__int64 BBConsolePrinter::GetLenRemaining(BBConsolePrinter *this)
{
  return 66560 - this->m_currentBufferOffset;
}

/*
==============
GetMACAddress
==============
*/
bool GetMACAddress(unsigned __int8 *dest_mac_addr)
{
  unsigned __int64 v2; 
  unsigned __int8 v3; 
  bool result; 
  unsigned __int64 macAddr; 

  if ( !dest_mac_addr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\blackbox\\blackbox.cpp", 3225, ASSERT_TYPE_ASSERT, "(dest_mac_addr)", (const char *)&queryFormat, "dest_mac_addr") )
    __debugbreak();
  if ( !Live_GetMACAddressAsUint64(&macAddr) )
    return 0;
  v2 = macAddr;
  v3 = BYTE1(macAddr);
  *dest_mac_addr = macAddr;
  dest_mac_addr[1] = v3;
  dest_mac_addr[2] = BYTE2(v2);
  dest_mac_addr[3] = BYTE3(v2);
  dest_mac_addr[4] = BYTE4(v2);
  result = 1;
  dest_mac_addr[5] = BYTE5(v2);
  return result;
}

/*
==============
BBConsolePrinter::Init
==============
*/
void BBConsolePrinter::Init(BBConsolePrinter *this)
{
  char **p_m_currentBuffer; 
  BBConsolePrinter *m_currentBuffer; 

  p_m_currentBuffer = &this->m_currentBuffer;
  this->m_currentBufferOffset = 0;
  m_currentBuffer = (BBConsolePrinter *)this->m_currentBuffer;
  if ( m_currentBuffer && m_currentBuffer == this )
    this = (BBConsolePrinter *)((char *)this + 66560);
  *p_m_currentBuffer = (char *)this;
  memset_0(this, 0, 0x10400ui64);
}

/*
==============
LUI_CoD_LuaCall_BBPrint
==============
*/
__int64 LUI_CoD_LuaCall_BBPrint(lua_State *luaVM)
{
  char v2; 
  int v3; 
  const char *v4; 
  const char *v5; 
  int v6; 
  char DemonwareActiveController; 
  unsigned int v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  unsigned __int8 v12; 
  const char *v13; 
  unsigned __int64 v14; 
  double v15; 
  char v16; 
  unsigned int v17; 
  int v18; 
  char v19; 
  unsigned int v20; 
  int v21; 
  unsigned __int8 *v22; 
  unsigned __int8 v23; 
  __int64 v24; 
  char v26; 
  int parameterCount; 
  unsigned __int8 *parameters; 

  v2 = 0;
  v3 = 0;
  if ( j_lua_gettop(luaVM) >= 2 && j_lua_isstring(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    parameterCount = j_lua_gettop(luaVM) - 2;
    if ( !s_blackboxInitialized || (v4 = j_lua_tolstring(luaVM, 1, NULL), v5 = j_lua_tolstring(luaVM, 2, NULL), !BB_CheckThrottle(v4)) )
    {
      j_lua_pushboolean(luaVM, 1);
      return 1i64;
    }
    Sys_EnterCriticalSection(CRITSECT_BLACKBOX);
    v6 = BB_ParseAndCacheFormatString(&bb_msg, v4, v5, &parameterCount, (const unsigned __int8 **)&parameters, 1);
    DemonwareActiveController = BB_GetDemonwareActiveController();
    BB_WriteVarUInt32_0(&bb_msg, 4 * ((4 * v6) | DemonwareActiveController & 3));
    v8 = s_sessionStartTime;
    v9 = Sys_Milliseconds();
    BB_WriteVarUInt32_0(&bb_msg, v9 - v8);
    s_blackboxIsInteresting = 1;
    if ( parameterCount > 0 )
    {
      v10 = 3;
      v11 = 0i64;
      while ( 1 )
      {
        v12 = parameters[v11];
        if ( (v12 & 3) == 0 )
          break;
        switch ( parameters[v11] & 3 )
        {
          case 1:
            if ( (v12 & 0x10) == 0 )
              goto LABEL_25;
            if ( !j_lua_isnumber(luaVM, v10) )
              goto LABEL_27;
            v17 = lui_tointeger32(luaVM, v10);
            BB_WriteVarUInt32_0(&bb_msg, v17);
            break;
          case 2:
            if ( j_lua_isnumber(luaVM, v10) )
            {
              v15 = lui_tonumber32(luaVM, v10);
              v16 = v12 & 0x1C;
              if ( v16 == 4 )
              {
                BB_WriteFloat16(&bb_msg, *(float *)&v15);
              }
              else if ( v16 == 12 )
              {
                v2 = 1;
              }
              else
              {
                BB_WriteFloat32(&bb_msg, *(float *)&v15);
              }
              break;
            }
            goto LABEL_27;
          case 3:
            if ( j_lua_isstring(luaVM, v10) )
            {
              v13 = j_lua_tolstring(luaVM, v10, NULL);
              v14 = -1i64;
              do
                ++v14;
              while ( v13[v14] );
              BB_WriteString(&bb_msg, v13, v14);
              break;
            }
            goto LABEL_27;
        }
LABEL_44:
        ++v10;
        ++v11;
        if ( v10 - 3 >= parameterCount )
          goto LABEL_48;
      }
LABEL_25:
      if ( j_lua_isnumber(luaVM, v10) || j_lua_type(luaVM, v10) == 1 )
      {
        v18 = lui_tointeger32(luaVM, v10);
        if ( (v12 & 0x10) != 0 )
        {
          BB_WriteVarUInt32_0(&bb_msg, (2 * v18) ^ ((unsigned __int64)v18 >> 31));
        }
        else
        {
          v19 = v12 & 0x1C;
          if ( v19 )
          {
            switch ( v19 )
            {
              case 4:
                BB_WriteInt16(&bb_msg, v18);
                break;
              case 8:
                BB_WriteInt32(&bb_msg, v18);
                break;
              case 12:
                v2 = 1;
                break;
            }
          }
          else
          {
            v26 = v18;
            if ( !bb_msg.pppHashTable )
            {
              if ( bb_msg.overflow || bb_msg.cursize + 1 > bb_msg.maxsize )
              {
                bb_msg.overflow = 1;
              }
              else
              {
                v20 = truncate_cast<unsigned int,unsigned __int64>(bb_msg.cursize);
                v21 = 0;
                v22 = (unsigned __int8 *)&v26;
                do
                {
                  v23 = *v22;
                  v24 = v21 + v20;
                  ++v22;
                  ++v21;
                  bb_msg.data[v24] = v23;
                }
                while ( !v21 );
                ++bb_msg.cursize;
              }
            }
          }
        }
        goto LABEL_44;
      }
LABEL_27:
      v2 = 1;
      goto LABEL_44;
    }
  }
  else
  {
    v2 = 1;
  }
LABEL_48:
  LOBYTE(v3) = v2 == 0;
  j_lua_pushboolean(luaVM, v3);
  Sys_LeaveCriticalSection(CRITSECT_BLACKBOX);
  return 1i64;
}

/*
==============
BBConsolePrinter::Pump
==============
*/
void BBConsolePrinter::Pump(BBConsolePrinter *this)
{
  const dvar_t *v2; 
  int v3; 
  int m_flushState; 
  int v5; 

  if ( this->m_shouldFlush && !this->m_readyToFlush )
  {
    v2 = DVARBOOL_online_bb_console_logging;
    if ( DVARBOOL_online_bb_console_logging )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_online_bb_console_logging);
      if ( v2->current.enabled )
      {
        v3 = j_deflate(&s_bb_stream, this->m_flushState);
        if ( v3 || s_bb_stream.avail_out )
        {
          m_flushState = this->m_flushState;
          if ( m_flushState && m_flushState != 2 )
          {
            if ( v3 == 1 )
            {
              memcpy_0(s_currentPtrInOutputBuffer, s_tempDeflateOutputBuffer, s_bb_stream.next_out - s_tempDeflateOutputBuffer);
              this->m_flushState = 0;
              v5 = j_deflateEnd(&s_bb_stream);
              j_Zip_ShutdownThreadMemory(&s_bb_stream);
              bdBase64::encode((const char *)s_finalOutputBuffer, s_bb_stream.total_out, s_finalOutputBufferB64, 0xAD59u);
              if ( !v5 )
                this->m_readyToFlush = 1;
            }
          }
          else
          {
            memcpy_0(s_currentPtrInOutputBuffer, s_tempDeflateOutputBuffer, s_bb_stream.next_out - s_tempDeflateOutputBuffer);
            this->m_flushState = 4;
          }
        }
        else
        {
          memcpy_0(s_currentPtrInOutputBuffer, s_tempDeflateOutputBuffer, s_bb_stream.next_out - s_tempDeflateOutputBuffer);
          s_bb_stream.next_out = s_tempDeflateOutputBuffer;
          s_currentPtrInOutputBuffer = &s_finalOutputBuffer[s_bb_stream.total_out];
          s_bb_stream.avail_out = 8320;
        }
      }
    }
  }
}

/*
==============
BBConsolePrinter::ResetFlush
==============
*/
void BBConsolePrinter::ResetFlush(BBConsolePrinter *this)
{
  ++this->m_sequenceid;
  *(_WORD *)&this->m_shouldFlush = 0;
}

/*
==============
BBConsolePrinter::ShouldFlush
==============
*/
_BOOL8 BBConsolePrinter::ShouldFlush(BBConsolePrinter *this)
{
  return this->m_shouldFlush;
}

/*
==============
BBConsolePrinter::StartFlush
==============
*/
void BBConsolePrinter::StartFlush(BBConsolePrinter *this)
{
  const dvar_t *v1; 
  unsigned int m_sequenceid; 
  BBConsolePrinter *m_currentBuffer; 
  BBConsolePrinter *v5; 
  unsigned int v6; 
  unsigned __int64 v7; 

  v1 = DVARBOOL_online_bb_console_logging;
  if ( DVARBOOL_online_bb_console_logging )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_online_bb_console_logging);
    if ( v1->current.enabled )
    {
      m_sequenceid = this->m_sequenceid;
      if ( this->m_shouldFlush )
      {
        Com_Printf(25, "BBConsolePrinter::StartFlush() - dropping buffer for sequence id: %d.\n", m_sequenceid);
        ++this->m_sequenceid;
      }
      else
      {
        m_currentBuffer = (BBConsolePrinter *)this->m_currentBuffer;
        v5 = (BBConsolePrinter *)this->m_buffer[1];
        this->m_shouldFlush = 1;
        if ( m_currentBuffer != this )
          v5 = this;
        j_printf("%d - bufferToCompress = %p (%d)\n", m_sequenceid, v5, m_currentBuffer == this);
        Core_strcpy(s_tmpInflightBuffer, 0x10400ui64, (const char *)v5);
        memset_0(&s_bb_stream, 0, sizeof(s_bb_stream));
        j_Zip_InitThreadMemory(&s_bb_stream, s_zip_buffer, 393216);
        v6 = j_deflateInit_(&s_bb_stream, 1, "1.2.8", 88);
        if ( v6 )
        {
          Com_Printf(25, "BBConsolePrinter::StartFlush() - zip error %i for sequence id: %d.\n", v6, this->m_sequenceid);
          j_Zip_ShutdownThreadMemory(&s_bb_stream);
          this->m_shouldFlush = 0;
        }
        else
        {
          v7 = -1i64;
          do
            ++v7;
          while ( s_tmpInflightBuffer[v7] );
          s_bb_stream.data_type = 1;
          s_bb_stream.next_in = (unsigned __int8 *)s_tmpInflightBuffer;
          s_bb_stream.avail_in = truncate_cast<unsigned int,unsigned __int64>(v7);
          s_bb_stream.next_out = s_tempDeflateOutputBuffer;
          s_currentPtrInOutputBuffer = s_finalOutputBuffer;
          s_bb_stream.avail_out = 8320;
        }
      }
    }
  }
}

/*
==============
fixUpCmdLine
==============
*/
void fixUpCmdLine(const char *cmdline, char *newCmdLine, int len)
{
  __int64 v4; 
  char v5; 

  if ( *cmdline )
  {
    v4 = 0i64;
    do
    {
      if ( v4 >= len )
        break;
      v5 = *cmdline;
      newCmdLine[v4] = *cmdline;
      if ( v5 == 92 )
        newCmdLine[++v4] = 92;
      ++cmdline;
      ++v4;
    }
    while ( *cmdline );
    newCmdLine[len - 1] = 0;
  }
  else
  {
    newCmdLine[len - 1] = 0;
  }
}

/*
==============
publisherVariablesRetrieved
==============
*/
void publisherVariablesRetrieved(void)
{
  if ( !s_blackboxInitialized )
    BB_Start();
}

/*
==============
sendTestData
==============
*/
void sendTestData(void)
{
  bool v0; 
  DLogContext context; 
  char buffer[4096]; 

  if ( s_blackboxInitialized && next_time < Sys_Milliseconds() )
  {
    next_time = Sys_Milliseconds() + 60;
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
    {
      v0 = DLog_BeginEvent(&context, "test_table_int");
      context.autoEndEvent = 1;
      if ( v0 && DLog_Int32(&context, "test_value_i32", 500) && DLog_Int64(&context, "test_value_i64", 1000i64) && DLog_Int32(&context, "test_value_i32_", -2) && DLog_Int64(&context, "test_value_i64_", -100i64) )
        DLog_RecordContext(&context);
    }
  }
}

