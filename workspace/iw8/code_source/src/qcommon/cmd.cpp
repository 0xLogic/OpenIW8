/*
==============
Cmd_Argc
==============
*/

int __fastcall Cmd_Argc()
{
  return ?Cmd_Argc@@YAHXZ();
}

/*
==============
Cbuf_AddServerText_f
==============
*/

void __fastcall Cbuf_AddServerText_f()
{
  ?Cbuf_AddServerText_f@@YAXXZ();
}

/*
==============
Cmd_TokenizeString_ErrorCleanup
==============
*/

void Cmd_TokenizeString_ErrorCleanup(void)
{
  ?Cmd_TokenizeString_ErrorCleanup@@YAXXZ();
}

/*
==============
Cmd_LocalControllerIndex
==============
*/

int __fastcall Cmd_LocalControllerIndex()
{
  return ?Cmd_LocalControllerIndex@@YAHXZ();
}

/*
==============
Cmd_AddCommandInternal
==============
*/

void __fastcall Cmd_AddCommandInternal(const char *cmdName, void (__fastcall *function)(), cmd_function_s *allocedCmd)
{
  ?Cmd_AddCommandInternal@@YAXPEBDP6AXXZPEAUcmd_function_s@@@Z(cmdName, function, allocedCmd);
}

/*
==============
Cmd_Init
==============
*/

void Cmd_Init(void)
{
  ?Cmd_Init@@YAXXZ();
}

/*
==============
Cmd_TokenizeStringWithLimit
==============
*/

void __fastcall Cmd_TokenizeStringWithLimit(const char *text_in, int max_tokens)
{
  ?Cmd_TokenizeStringWithLimit@@YAXPEBDH@Z(text_in, max_tokens);
}

/*
==============
Cmd_ArgsBuffer
==============
*/

void __fastcall Cmd_ArgsBuffer(int start, char *buffer, unsigned __int64 bufLength)
{
  ?Cmd_ArgsBuffer@@YAXHQEAD_K@Z(start, buffer, bufLength);
}

/*
==============
Cmd_FindCommand
==============
*/

cmd_function_s *__fastcall Cmd_FindCommand(const char *cmdName)
{
  return ?Cmd_FindCommand@@YAPEAUcmd_function_s@@PEBD@Z(cmdName);
}

/*
==============
SV_Cmd_Argc
==============
*/

int __fastcall SV_Cmd_Argc()
{
  return ?SV_Cmd_Argc@@YAHXZ();
}

/*
==============
Cmd_RemoveServerCommandList
==============
*/

void __fastcall Cmd_RemoveServerCommandList(SvCommandInfo *commandList, unsigned int commandListSize)
{
  ?Cmd_RemoveServerCommandList@@YAXPEAUSvCommandInfo@@I@Z(commandList, commandListSize);
}

/*
==============
Cmd_ForEach
==============
*/

void __fastcall Cmd_ForEach(void (__fastcall *callback)(const char *))
{
  ?Cmd_ForEach@@YAXP6AXPEBD@Z@Z(callback);
}

/*
==============
Cmd_AddClientCommandList
==============
*/

void __fastcall Cmd_AddClientCommandList(ClCommandInfo *commandList, unsigned int commandListSize)
{
  ?Cmd_AddClientCommandList@@YAXPEAUClCommandInfo@@I@Z(commandList, commandListSize);
}

/*
==============
Cmd_Wait_f
==============
*/

void Cmd_Wait_f(void)
{
  ?Cmd_Wait_f@@YAXXZ();
}

/*
==============
Cmd_CheckNetNotify_f
==============
*/

void __fastcall Cmd_CheckNetNotify_f(int clientNum)
{
  ?Cmd_CheckNetNotify_f@@YAXH@Z(clientNum);
}

/*
==============
Cmd_RemoveServerCommandInternal
==============
*/

void __fastcall Cmd_RemoveServerCommandInternal(const char *cmdName)
{
  ?Cmd_RemoveServerCommandInternal@@YAXPEBD@Z(cmdName);
}

/*
==============
SV_Cmd_LocalClientNum
==============
*/

LocalClientNum_t __fastcall SV_Cmd_LocalClientNum()
{
  return ?SV_Cmd_LocalClientNum@@YA?AW4LocalClientNum_t@@XZ();
}

/*
==============
Cmd_SaveNotifications
==============
*/

void __fastcall Cmd_SaveNotifications(MemoryFile *memFile)
{
  ?Cmd_SaveNotifications@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CmdArgs::LocalClientNum
==============
*/

LocalClientNum_t __fastcall CmdArgs::LocalClientNum(CmdArgs *this)
{
  return ?LocalClientNum@CmdArgs@@QEBA?AW4LocalClientNum_t@@XZ(this);
}

/*
==============
Cmd_LocalClientNum
==============
*/

LocalClientNum_t __fastcall Cmd_LocalClientNum()
{
  return ?Cmd_LocalClientNum@@YA?AW4LocalClientNum_t@@XZ();
}

/*
==============
Cmd_Argv
==============
*/

const char *__fastcall Cmd_Argv(int argIndex)
{
  return ?Cmd_Argv@@YAPEBDH@Z(argIndex);
}

/*
==============
Cmd_ArgInt64
==============
*/

__int64 __fastcall Cmd_ArgInt64(int argIndex)
{
  return ?Cmd_ArgInt64@@YA_JH@Z(argIndex);
}

/*
==============
Cmd_UnregisterNotification
==============
*/

void __fastcall Cmd_UnregisterNotification(const int clientNum, const char *commandString, const char *notifyString)
{
  ?Cmd_UnregisterNotification@@YAXHPEBD0@Z(clientNum, commandString, notifyString);
}

/*
==============
Cmd_Shutdown
==============
*/

void Cmd_Shutdown(void)
{
  ?Cmd_Shutdown@@YAXXZ();
}

/*
==============
CmdArgs::ArgV
==============
*/

const char *__fastcall CmdArgs::ArgV(CmdArgs *this, int argIndex)
{
  return ?ArgV@CmdArgs@@QEBAPEBDH@Z(this, argIndex);
}

/*
==============
CmdArgs::AssertCmdArgsConsistency
==============
*/

void __fastcall CmdArgs::AssertCmdArgsConsistency(CmdArgs *this)
{
  ?AssertCmdArgsConsistency@CmdArgs@@AEBAXXZ(this);
}

/*
==============
memcpy_noncrt
==============
*/

void __fastcall memcpy_noncrt(void *dst, const void *src, unsigned __int64 length)
{
  ?memcpy_noncrt@@YAXPEAXPEBX_K@Z(dst, src, length);
}

/*
==============
Cmd_EndTokenizedString
==============
*/

void Cmd_EndTokenizedString(void)
{
  ?Cmd_EndTokenizedString@@YAXXZ();
}

/*
==============
Cmd_UnregisterAllNotifications
==============
*/

void Cmd_UnregisterAllNotifications(void)
{
  ?Cmd_UnregisterAllNotifications@@YAXXZ();
}

/*
==============
Cmd_RemoveClientCommandList
==============
*/

void __fastcall Cmd_RemoveClientCommandList(ClCommandInfo *commandList, unsigned int commandListSize)
{
  ?Cmd_RemoveClientCommandList@@YAXPEAUClCommandInfo@@I@Z(commandList, commandListSize);
}

/*
==============
CmdArgs::TokenizeStringKernel
==============
*/

void __fastcall CmdArgs::TokenizeStringKernel(CmdArgs *this, const char *text_in, int max_tokens)
{
  ?TokenizeStringKernel@CmdArgs@@QEAAXPEBDH@Z(this, text_in, max_tokens);
}

/*
==============
Cmd_ReleaseAutoCompleteParameters
==============
*/

void __fastcall Cmd_ReleaseAutoCompleteParameters(const CmdAutoCompleteResults *r_pastResults)
{
  ?Cmd_ReleaseAutoCompleteParameters@@YAXAEBUCmdAutoCompleteResults@@@Z(r_pastResults);
}

/*
==============
Cmd_SetAutoCompleteList
==============
*/

void __fastcall Cmd_SetAutoCompleteList(const char *cmdName, const char **list, const unsigned int listLineCount)
{
  ?Cmd_SetAutoCompleteList@@YAXPEBDPEAPEBDI@Z(cmdName, list, listLineCount);
}

/*
==============
SV_Cmd_TokenizeString
==============
*/

void __fastcall SV_Cmd_TokenizeString(const char *text_in)
{
  ?SV_Cmd_TokenizeString@@YAXPEBD@Z(text_in);
}

/*
==============
SV_Cmd_ArgInt
==============
*/

int __fastcall SV_Cmd_ArgInt(int argIndex)
{
  return ?SV_Cmd_ArgInt@@YAHH@Z(argIndex);
}

/*
==============
Cmd_RemoveCommand
==============
*/

void __fastcall Cmd_RemoveCommand(const char *cmdName)
{
  ?Cmd_RemoveCommand@@YAXPEBD@Z(cmdName);
}

/*
==============
Cmd_ArgFloat
==============
*/

double __fastcall Cmd_ArgFloat(int argIndex)
{
  double result; 

  *(float *)&result = ?Cmd_ArgFloat@@YAMH@Z(argIndex);
  return result;
}

/*
==============
Cmd_AddServerCommandInternal
==============
*/

void __fastcall Cmd_AddServerCommandInternal(const char *cmdName, void (__fastcall *function)(), cmd_function_s *allocedCmd)
{
  ?Cmd_AddServerCommandInternal@@YAXPEBDP6AXXZPEAUcmd_function_s@@@Z(cmdName, function, allocedCmd);
}

/*
==============
Cmd_ArgInt
==============
*/

int __fastcall Cmd_ArgInt(int argIndex)
{
  return ?Cmd_ArgInt@@YAHH@Z(argIndex);
}

/*
==============
SV_Cmd_ArgUInt64
==============
*/

unsigned __int64 __fastcall SV_Cmd_ArgUInt64(int argIndex)
{
  return ?SV_Cmd_ArgUInt64@@YA_KH@Z(argIndex);
}

/*
==============
SV_Cmd_EndTokenizedString
==============
*/

void SV_Cmd_EndTokenizedString(void)
{
  ?SV_Cmd_EndTokenizedString@@YAXXZ();
}

/*
==============
Cmd_CheckNetNotifyForString
==============
*/

void __fastcall Cmd_CheckNetNotifyForString(int clientNum, const char *clientCommand)
{
  ?Cmd_CheckNetNotifyForString@@YAXHPEBD@Z(clientNum, clientCommand);
}

/*
==============
SV_Cmd_ArgvBuffer
==============
*/

void __fastcall SV_Cmd_ArgvBuffer(int arg, char *buffer, unsigned __int64 bufferLength)
{
  ?SV_Cmd_ArgvBuffer@@YAXHPEAD_K@Z(arg, buffer, bufferLength);
}

/*
==============
Cmd_TokenizeString
==============
*/

void __fastcall Cmd_TokenizeString(const char *text_in)
{
  ?Cmd_TokenizeString@@YAXPEBD@Z(text_in);
}

/*
==============
SV_Cmd_Argv
==============
*/

const char *__fastcall SV_Cmd_Argv(int argIndex)
{
  return ?SV_Cmd_Argv@@YAPEBDH@Z(argIndex);
}

/*
==============
CmdArgs::TokenizeStringInternal
==============
*/

int __fastcall CmdArgs::TokenizeStringInternal(CmdArgs *this, const char *text_in, int max_tokens)
{
  return ?TokenizeStringInternal@CmdArgs@@AEAAHPEBDH@Z(this, text_in, max_tokens);
}

/*
==============
Cmd_ComErrorCleanup
==============
*/

void Cmd_ComErrorCleanup(void)
{
  ?Cmd_ComErrorCleanup@@YAXXZ();
}

/*
==============
Cbuf_Init
==============
*/

void Cbuf_Init(void)
{
  ?Cbuf_Init@@YAXXZ();
}

/*
==============
Cbuf_Execute
==============
*/

void __fastcall Cbuf_Execute(LocalClientNum_t localClientNum, int controllerIndex)
{
  ?Cbuf_Execute@@YAXW4LocalClientNum_t@@H@Z(localClientNum, controllerIndex);
}

/*
==============
SV_Cmd_ArgInt64
==============
*/

__int64 __fastcall SV_Cmd_ArgInt64(int argIndex)
{
  return ?SV_Cmd_ArgInt64@@YA_JH@Z(argIndex);
}

/*
==============
Cmd_ClearAutoComplete
==============
*/

void __fastcall Cmd_ClearAutoComplete(const char *cmdName)
{
  ?Cmd_ClearAutoComplete@@YAXPEBD@Z(cmdName);
}

/*
==============
SV_Cmd_ArgFloat
==============
*/

double __fastcall SV_Cmd_ArgFloat(int argIndex)
{
  double result; 

  *(float *)&result = ?SV_Cmd_ArgFloat@@YAMH@Z(argIndex);
  return result;
}

/*
==============
Cmd_ArgUInt64
==============
*/

unsigned __int64 __fastcall Cmd_ArgUInt64(int argIndex)
{
  return ?Cmd_ArgUInt64@@YA_KH@Z(argIndex);
}

/*
==============
Cmd_GetAutoCompleteParameters
==============
*/

CmdAutoCompleteResults *__fastcall Cmd_GetAutoCompleteParameters(CmdAutoCompleteResults *result, const char *cmdName, const char *allocTrackName)
{
  return ?Cmd_GetAutoCompleteParameters@@YA?AUCmdAutoCompleteResults@@PEBD0@Z(result, cmdName, allocTrackName);
}

/*
==============
SV_Cmd_TokenizeString_ErrorCleanup
==============
*/

void SV_Cmd_TokenizeString_ErrorCleanup(void)
{
  ?SV_Cmd_TokenizeString_ErrorCleanup@@YAXXZ();
}

/*
==============
Cmd_LoadNotifications
==============
*/

void __fastcall Cmd_LoadNotifications(MemoryFile *memFile)
{
  ?Cmd_LoadNotifications@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Cmd_AddServerCommandList
==============
*/

void __fastcall Cmd_AddServerCommandList(SvCommandInfo *commandList, unsigned int commandListSize)
{
  ?Cmd_AddServerCommandList@@YAXPEAUSvCommandInfo@@I@Z(commandList, commandListSize);
}

/*
==============
strlen_noncrt
==============
*/

int __fastcall strlen_noncrt(const char *str)
{
  return ?strlen_noncrt@@YAHPEBD@Z(str);
}

/*
==============
Cmd_AddSuperUserCommandInternal
==============
*/

void __fastcall Cmd_AddSuperUserCommandInternal(const char *cmdName, void (__fastcall *function)(), cmd_function_s *allocedCmd)
{
  ?Cmd_AddSuperUserCommandInternal@@YAXPEBDP6AXXZPEAUcmd_function_s@@@Z(cmdName, function, allocedCmd);
}

/*
==============
Cmd_RegisterNotification
==============
*/

void __fastcall Cmd_RegisterNotification(const int clientNum, const char *commandString, const char *notifyString)
{
  ?Cmd_RegisterNotification@@YAXHPEBD0@Z(clientNum, commandString, notifyString);
}

/*
==============
Cmd_InitNotifications
==============
*/

void __fastcall Cmd_InitNotifications(const unsigned int playercount)
{
  ?Cmd_InitNotifications@@YAXI@Z(playercount);
}

/*
==============
CmdArgs::ArgV
==============
*/
const char *CmdArgs::ArgV(CmdArgs *this, int argIndex)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  int nesting; 
  int v8; 

  v3 = argIndex;
  if ( this->nesting >= 8u )
  {
    v8 = 8;
    nesting = this->nesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", nesting, v8) )
      __debugbreak();
  }
  if ( (int)v3 < 0 )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 768, ASSERT_TYPE_ASSERT, "( ( argIndex >= 0 ) )", "( argIndex ) = %i", v6) )
      __debugbreak();
  }
  v4 = this->nesting;
  if ( (int)v3 >= this->argc[v4] )
    return (char *)&queryFormat.fmt + 3;
  else
    return this->argv[v4][v3];
}

/*
==============
CmdArgs::AssertCmdArgsConsistency
==============
*/
void CmdArgs::AssertCmdArgsConsistency(CmdArgs *this)
{
  int v1; 
  __int64 nesting; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  __int64 v9; 
  int *usedTextPool; 
  unsigned __int64 v11; 
  int v12; 
  int *argc; 
  const char ***argv; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  int totalUsedArgvPool; 
  __int64 v19; 

  v1 = 0;
  nesting = this->nesting;
  v3 = 0i64;
  v4 = 0i64;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( nesting >= 0 )
  {
    v9 = 0i64;
    if ( nesting >= 1 )
    {
      usedTextPool = this->usedTextPool;
      v11 = (unsigned __int64)(nesting + 1) >> 1;
      v9 = 2 * v11;
      do
      {
        v1 += *(usedTextPool - 5145);
        v4 = (unsigned int)(*usedTextPool + v4);
        v3 = (unsigned int)(*(usedTextPool - 5144) + v3);
        v6 += usedTextPool[1];
        usedTextPool += 2;
        --v11;
      }
      while ( v11 );
    }
    if ( v9 <= nesting )
    {
      v5 = this->argc[v9];
      v7 = this->usedTextPool[v9];
    }
    v5 += v3 + v1;
    v7 += v6 + v4;
  }
  if ( v5 != this->totalUsedArgvPool )
  {
    Com_Printf(16, "About to assert totalUsedArgvPool\n", v3, v4);
    v12 = 0;
    if ( this->nesting >= 0 )
    {
      argc = this->argc;
      argv = this->argv;
      do
      {
        v15 = 0;
        if ( *argc > 0 )
        {
          v16 = 0i64;
          do
            Com_Printf(16, "nesting %i, arg %i: '%s'\n", (unsigned int)v12, (unsigned int)v15++, (*argv)[v16++]);
          while ( v15 < *argc );
        }
        ++v12;
        ++argv;
        ++argc;
      }
      while ( v12 <= this->nesting );
    }
  }
  if ( v5 != this->totalUsedArgvPool )
  {
    totalUsedArgvPool = this->totalUsedArgvPool;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1078, ASSERT_TYPE_ASSERT, "(totalUsedArgvPoolCount == totalUsedArgvPool)", "%s\n\ttotalUsedArgvPool is %i, totalUsedArgvPool is %i, nesting is %i, argc[0] is %i, argc[1] is %i, argc[2] is %i, argc[3] is %i", "totalUsedArgvPoolCount == totalUsedArgvPool", totalUsedArgvPool, totalUsedArgvPool, this->nesting, this->argc[0], this->argc[1], this->argc[2], this->argc[3]) )
      __debugbreak();
  }
  if ( v7 != this->totalUsedTextPool )
  {
    LODWORD(v19) = this->totalUsedTextPool;
    LODWORD(v17) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1079, ASSERT_TYPE_ASSERT, "( totalUsedTextPoolCount ) == ( totalUsedTextPool )", "%s == %s\n\t%i, %i", "totalUsedTextPoolCount", "totalUsedTextPool", v17, v19) )
      __debugbreak();
  }
}

/*
==============
Cbuf_AddServerText_f
==============
*/
void Cbuf_AddServerText_f(void)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 211, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Cbuf_AddServerText_f was called.") )
    __debugbreak();
}

/*
==============
Cbuf_Execute
==============
*/
void Cbuf_Execute(LocalClientNum_t localClientNum, int controllerIndex)
{
  unsigned __int64 v2; 
  char *Value; 
  int *v5; 
  _QWORD *v6; 
  char *v7; 
  int *v8; 
  unsigned __int64 v9; 
  ThreadContext CurrentThreadContext; 
  void (__fastcall *v11)(LocalClientNum_t); 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 

  v2 = localClientNum;
  Value = (char *)Sys_GetValue(0);
  v5 = (int *)(Value + 2616);
  if ( (unsigned int)(*((_DWORD *)Value + 654) + 1) >= 3 )
  {
    v16 = 3;
    v14 = *((_DWORD *)Value + 654) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  if ( (unsigned int)++*v5 >= 3 )
  {
    LODWORD(v15) = 3;
    LODWORD(v13) = *v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  v6 = Value + 2088;
  v7 = Value + 40;
  if ( *v6 < (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v6 += 8i64;
  if ( *v6 >= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v6 = v5;
  if ( *v6 <= (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v8 = &v5[*v5 + 2];
  v9 = __rdtsc();
  *v8 = v9;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 13, NULL, 0);
  if ( cmd_insideCBufExecute[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 419, ASSERT_TYPE_ASSERT, "(!cmd_insideCBufExecute[localClientNum])", "%s\n\tNesting Cbuf_Execute() is not allowed.", "!cmd_insideCBufExecute[localClientNum]") )
    __debugbreak();
  cmd_insideCBufExecute[v2] = 1;
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  while ( cmd_funcCount[v2] )
  {
    --cmd_funcCount[v2];
    v11 = cmd_funcArray[v2][0];
    memcpy_0(cmd_funcArray[v2], &cmd_funcArray[v2][1], 8i64 * cmd_funcCount[v2]);
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
    SV_WaitServer();
    v11((LocalClientNum_t)v2);
    Sys_EnterCriticalSection(CRITSECT_CBUF);
  }
  Cbuf_ExecuteInternal((const LocalClientNum_t)v2, controllerIndex, &s_cmd_superUser_textArray[v2], 1);
  Cbuf_ExecuteInternal((const LocalClientNum_t)v2, controllerIndex, &s_cmd_textArray[v2], 0);
  SV_Migration_StressTestSaveLoad();
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
  if ( v2 >= 2 )
  {
    j___report_rangecheckfailure(v12);
    JUMPOUT(0x141391CFAi64);
  }
  cmd_insideCBufExecute[v2] = 0;
  Profile_EndInternal(NULL);
}

/*
==============
Cbuf_ExecuteInternal
==============
*/
void Cbuf_ExecuteInternal(const LocalClientNum_t localClientNum, const int controllerIndex, CmdText *cmd_text, const bool isSuperUser)
{
  int cmdsize; 
  unsigned __int8 *data; 
  int v10; 
  int v11; 
  unsigned __int64 i; 
  unsigned __int8 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  char text[4096]; 

  if ( !cmd_text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 344, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
    __debugbreak();
  cmdsize = cmd_text->cmdsize;
  if ( cmdsize )
  {
    while ( !cmd_wait )
    {
      data = cmd_text->data;
      v10 = 0;
      v11 = 0;
      for ( i = 0i64; v11 < cmdsize; ++i )
      {
        v13 = data[i];
        v14 = v10 + 1;
        if ( v13 != 34 )
          v14 = v10;
        v10 = v14;
        if ( (v14 & 1) == 0 && v13 == 59 )
          break;
        if ( v13 == 10 )
          break;
        if ( v13 == 13 )
          break;
        cmdsize = cmd_text->cmdsize;
        ++v11;
      }
      if ( v11 >= 4095 )
      {
        v11 = 4095;
        i = 4095i64;
      }
      memcpy_0(text, cmd_text->data, v11);
      if ( i >= 0x1000 )
      {
        j___report_rangecheckfailure(v15);
        JUMPOUT(0x141391F72i64);
      }
      text[i] = 0;
      if ( v11 == cmdsize )
      {
        cmd_text->cmdsize = 0;
      }
      else
      {
        v16 = v11 + 1;
        v17 = cmdsize - v16;
        cmd_text->cmdsize = v17;
        memmove_0(data, &data[v16], v17);
      }
      Sys_LeaveCriticalSection(CRITSECT_CBUF);
      Cmd_ExecuteSingleCommand_Internal(localClientNum, controllerIndex, text, isSuperUser);
      Sys_EnterCriticalSection(CRITSECT_CBUF);
      cmdsize = cmd_text->cmdsize;
      if ( !cmdsize )
        return;
    }
    --cmd_wait;
  }
}

/*
==============
Cbuf_Init
==============
*/
void Cbuf_Init(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  unsigned __int64 v3; 
  __int64 v4; 

  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v0 = 0;
  v1 = 0i64;
  v2 = 0i64;
  v3 = 0i64;
  do
  {
    v4 = (__int64)v0 << 16;
    *(_QWORD *)&s_cmd_textArray[v2].maxsize = 0x10000i64;
    *(_QWORD *)&s_cmd_superUser_textArray[v2].maxsize = 0x10000i64;
    cmd_funcCount[v3] = 0;
    s_cmd_textArray[v2].data = &s_cmd_text_buf[0][v4];
    s_cmd_superUser_textArray[v2].data = &s_cmd_superUser_textBuf[0][v4];
    if ( v3 >= 2 )
    {
      j___report_rangecheckfailure((char *)s_cmd_superUser_textBuf + v4);
      JUMPOUT(0x14139207Fi64);
    }
    cmd_insideCBufExecute[v1] = 0;
    ++v0;
    ++v1;
    ++v3;
    ++v2;
  }
  while ( v0 < 2 );
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
}

/*
==============
Cmd_AddClientCommandList
==============
*/
void Cmd_AddClientCommandList(ClCommandInfo *commandList, unsigned int commandListSize)
{
  __int64 v2; 
  void (__fastcall **p_func)(); 

  v2 = commandListSize;
  if ( !commandList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1272, ASSERT_TYPE_ASSERT, "(commandList)", (const char *)&queryFormat, "commandList") )
    __debugbreak();
  if ( (_DWORD)v2 )
  {
    p_func = &commandList->func;
    do
    {
      Cmd_AddCommandToFunctions((const char *)*(p_func - 1), *p_func, (cmd_function_s *)(p_func + 1), &s_cmd_functions);
      p_func += 7;
      --v2;
    }
    while ( v2 );
  }
}

/*
==============
Cmd_AddCommandInternal
==============
*/
void Cmd_AddCommandInternal(const char *cmdName, void (*function)(), cmd_function_s *allocedCmd)
{
  Cmd_AddCommandToFunctions(cmdName, function, allocedCmd, &s_cmd_functions);
}

/*
==============
Cmd_AddCommandToFunctions
==============
*/
void Cmd_AddCommandToFunctions(const char *cmdName, void (*function)(), cmd_function_s *allocedCmd, cmd_function_s **functions)
{
  cmd_function_s *CommandInFunctions; 

  if ( !cmdName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 249, ASSERT_TYPE_ASSERT, "(cmdName)", (const char *)&queryFormat, "cmdName") )
    __debugbreak();
  if ( !functions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 250, ASSERT_TYPE_ASSERT, "(functions)", (const char *)&queryFormat, "functions") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 251, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThe CMD system is not thread safe, this needs to be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  CommandInFunctions = Cmd_FindCommandInFunctions(cmdName, functions);
  if ( CommandInFunctions )
  {
    if ( CommandInFunctions != allocedCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 257, ASSERT_TYPE_ASSERT, "(cmd == allocedCmd)", (const char *)&queryFormat, "cmd == allocedCmd") )
      __debugbreak();
    if ( function )
      Com_Printf(16, "Cmd_AddCommand: %s already defined\n", cmdName);
  }
  else
  {
    allocedCmd->name = cmdName;
    allocedCmd->function = function;
    allocedCmd->next = *functions;
    Cmd_ClearAutoCompleteInternal(allocedCmd);
    *functions = allocedCmd;
  }
}

/*
==============
Cmd_AddServerCommandInternal
==============
*/
void Cmd_AddServerCommandInternal(const char *cmdName, void (*function)(), cmd_function_s *allocedCmd)
{
  Cmd_AddCommandToFunctions(cmdName, function, allocedCmd, &s_sv_cmd_functions);
}

/*
==============
Cmd_AddServerCommandList
==============
*/
void Cmd_AddServerCommandList(SvCommandInfo *commandList, unsigned int commandListSize)
{
  __int64 v2; 
  cmd_function_s *p_svvar; 

  v2 = commandListSize;
  if ( !commandList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1296, ASSERT_TYPE_ASSERT, "(commandList)", (const char *)&queryFormat, "commandList") )
    __debugbreak();
  if ( (_DWORD)v2 )
  {
    p_svvar = &commandList->svvar;
    do
    {
      Cmd_AddCommandToFunctions(*(const char **)&p_svvar[-2].autoCompleteListCount, Cbuf_AddServerText_f, p_svvar - 1, &s_cmd_functions);
      Cmd_AddCommandToFunctions(*(const char **)&p_svvar[-2].autoCompleteListCount, p_svvar[-2].function, p_svvar, &s_sv_cmd_functions);
      p_svvar = (cmd_function_s *)((char *)p_svvar + 96);
      --v2;
    }
    while ( v2 );
  }
}

/*
==============
Cmd_AddSuperUserCommandInternal
==============
*/
void Cmd_AddSuperUserCommandInternal(const char *cmdName, void (*function)(), cmd_function_s *allocedCmd)
{
  Cmd_AddCommandToFunctions(cmdName, function, allocedCmd, &s_cmd_superuser_functions);
}

/*
==============
Cmd_ArgFloat
==============
*/
float Cmd_ArgFloat(int argIndex)
{
  const char *v2; 

  v2 = CmdArgs::ArgV(&cmd_args, argIndex);
  *(double *)&_XMM0 = atof(v2);
  __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
Cmd_ArgInt64
==============
*/
__int64 Cmd_ArgInt64(int argIndex)
{
  const char *v1; 

  v1 = CmdArgs::ArgV(&cmd_args, argIndex);
  return I_atoi64(v1);
}

/*
==============
Cmd_ArgInt
==============
*/
int Cmd_ArgInt(int argIndex)
{
  const char *v1; 

  v1 = CmdArgs::ArgV(&cmd_args, argIndex);
  return atoi(v1);
}

/*
==============
Cmd_ArgUInt64
==============
*/
unsigned __int64 Cmd_ArgUInt64(int argIndex)
{
  const char *v1; 

  v1 = CmdArgs::ArgV(&cmd_args, argIndex);
  return I_atoui64(v1);
}

/*
==============
Cmd_Argc
==============
*/
__int64 Cmd_Argc()
{
  int nesting; 
  __int64 v2; 
  int v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 854, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  nesting = cmd_args.nesting;
  if ( cmd_args.nesting >= 8u )
  {
    v3 = 8;
    LODWORD(v2) = cmd_args.nesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 760, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    nesting = cmd_args.nesting;
  }
  return (unsigned int)cmd_args.argc[nesting];
}

/*
==============
Cmd_ArgsBuffer
==============
*/
void Cmd_ArgsBuffer(int start, char *buffer, unsigned __int64 bufLength)
{
  __int64 v4; 
  unsigned __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  const char **v9; 
  char *v10; 
  char v11; 
  __int64 v12; 

  v4 = start;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 698, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (int)v4 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 699, ASSERT_TYPE_ASSERT, "(start >= 0)", (const char *)&queryFormat, "start >= 0") )
    __debugbreak();
  if ( cmd_args.nesting >= 8u )
  {
    LODWORD(v12) = cmd_args.nesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 700, ASSERT_TYPE_ASSERT, "(unsigned)( cmd_args.nesting ) < (unsigned)( 8 )", "cmd_args.nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v12, 8) )
      __debugbreak();
  }
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 701, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( bufLength < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 702, ASSERT_TYPE_ASSERT, "(bufLength >= 2)", (const char *)&queryFormat, "bufLength >= 2") )
    __debugbreak();
  v6 = bufLength - 1;
  v7 = v4;
  v8 = cmd_args.argc[cmd_args.nesting];
  v9 = cmd_args.argv[cmd_args.nesting];
  if ( v4 < v8 )
  {
    while ( 1 )
    {
      v10 = (char *)v9[v7];
      v11 = *v10;
      if ( *v10 )
        break;
LABEL_20:
      if ( v6 != 1 )
      {
        if ( (_DWORD)v4 != (_DWORD)v8 - 1 )
        {
          *buffer++ = 32;
          --v6;
        }
        LODWORD(v4) = v4 + 1;
        if ( ++v7 < v8 )
          continue;
      }
      goto LABEL_24;
    }
    while ( 1 )
    {
      *buffer = v11;
      ++v10;
      ++buffer;
      if ( !--v6 )
        break;
      v11 = *v10;
      if ( !*v10 )
        goto LABEL_20;
    }
  }
LABEL_24:
  *buffer = 0;
}

/*
==============
Cmd_Argv
==============
*/
const char *Cmd_Argv(int argIndex)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 867, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  return CmdArgs::ArgV(&cmd_args, argIndex);
}

/*
==============
Cmd_CheckNetNotifyForString
==============
*/
void Cmd_CheckNetNotifyForString(int clientNum, const char *clientCommand)
{
  __int64 v3; 
  unsigned int BindingForCommand; 

  v3 = clientNum;
  if ( clientNum >= s_svCmdNotifyPlayerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1510, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( s_svCmdNotifyPlayerCount )", "clientNum doesn't index s_svCmdNotifyPlayerCount\n\t%i not in [0, %i)", clientNum, s_svCmdNotifyPlayerCount) )
    __debugbreak();
  if ( s_svCmdNotifyGlobal.entryCount + s_svCmdNotifyPlayers[v3].entryCount )
  {
    BindingForCommand = Com_Keys_GetBindingForCommand(clientCommand);
    if ( !BindingForCommand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1701, ASSERT_TYPE_ASSERT, "( cmdIndex != BIND_VOID )", (const char *)&queryFormat, "cmdIndex != BIND_VOID") )
      __debugbreak();
    Cmd_CheckNetNotify_ForList(v3, &s_svCmdNotifyGlobal, BindingForCommand);
    Cmd_CheckNetNotify_ForList(v3, &s_svCmdNotifyPlayers[v3], BindingForCommand);
  }
}

/*
==============
Cmd_CheckNetNotify_ForList
==============
*/
void Cmd_CheckNetNotify_ForList(const int clientNum, const CmdScriptNotifyList *notifyList, const unsigned int cmdIndex)
{
  __int64 i; 

  if ( !notifyList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1651, ASSERT_TYPE_ASSERT, "( notifyList )", (const char *)&queryFormat, "notifyList") )
    __debugbreak();
  for ( i = 0i64; (unsigned int)i < notifyList->entryCount; i = (unsigned int)(i + 1) )
  {
    if ( cmdIndex == notifyList->entries[i].cmdIndex )
      G_AddCommandNotify(clientNum, notifyList->entries[i].notify);
  }
}

/*
==============
Cmd_CheckNetNotify_f
==============
*/
void Cmd_CheckNetNotify_f(int clientNum)
{
  __int64 v1; 
  int nesting; 
  const char *v3; 
  int v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v8; 
  unsigned int v9; 

  v1 = clientNum;
  if ( clientNum >= s_svCmdNotifyPlayerCount )
  {
    v9 = s_svCmdNotifyPlayerCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1510, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( s_svCmdNotifyPlayerCount )", "clientNum doesn't index s_svCmdNotifyPlayerCount\n\t%i not in [0, %i)", clientNum, v9) )
      __debugbreak();
  }
  if ( s_svCmdNotifyPlayers[v1].entryCount + s_svCmdNotifyGlobal.entryCount )
  {
    nesting = sv_cmd_args.nesting;
    if ( sv_cmd_args.nesting >= 8u )
    {
      LODWORD(v8) = 8;
      LODWORD(v6) = sv_cmd_args.nesting;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
      nesting = sv_cmd_args.nesting;
    }
    if ( sv_cmd_args.argc[nesting] <= 1 )
      v3 = (char *)&queryFormat.fmt + 3;
    else
      v3 = (const char *)*((_QWORD *)sv_cmd_args.argv[nesting] + 1);
    v4 = atoi(v3);
    v5 = v4;
    if ( v4 )
    {
      Cmd_CheckNetNotify_ForList(v1, &s_svCmdNotifyGlobal, v4);
      Cmd_CheckNetNotify_ForList(v1, &s_svCmdNotifyPlayers[v1], v5);
      G_CheckShipHackCommandNotify(v1, v5);
    }
  }
}

/*
==============
Cmd_ClearAutoComplete
==============
*/
void Cmd_ClearAutoComplete(const char *cmdName)
{
  cmd_function_s *CommandInFunctions; 

  if ( !cmdName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1258, ASSERT_TYPE_ASSERT, "(cmdName)", (const char *)&queryFormat, "cmdName") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1259, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThe CMD system is not thread safe, this needs to be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  CommandInFunctions = Cmd_FindCommandInFunctions(cmdName, &s_cmd_functions);
  if ( CommandInFunctions )
    Cmd_ClearAutoCompleteInternal(CommandInFunctions);
}

/*
==============
Cmd_ClearAutoCompleteInternal
==============
*/
void Cmd_ClearAutoCompleteInternal(cmd_function_s *cmd)
{
  if ( cmd )
  {
    cmd->autoCompleteList = NULL;
    cmd->autoCompleteListCount = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 233, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    MEMORY[0x10] = 0i64;
    MEMORY[0x18] = 0;
  }
}

/*
==============
Cmd_ComErrorCleanup
==============
*/
void Cmd_ComErrorCleanup(void)
{
  __int64 v0; 
  __int64 v1; 
  unsigned int i; 
  unsigned int v3; 
  bool v4; 

  if ( !Sys_IsMainThread() && !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1636, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsServerThread()") )
    __debugbreak();
  v1 = 0i64;
  for ( i = 0; i < s_svCmdNotifyGlobal.entryCount; ++i )
    SL_RemoveRefToString(s_svCmdNotifyGlobal.entries[i].notify);
  v3 = 0;
  for ( s_svCmdNotifyGlobal.entryCount = 0; v3 < s_svCmdNotifyPlayerCount; ++v3 )
    Cmd_UnregisterAllNotificationsForList(&s_svCmdNotifyPlayers[v3]);
  v4 = 1;
  s_svCmdNotifyPlayerCount = 0;
  cmd_args.nesting = -1;
  *(_QWORD *)&cmd_args.totalUsedArgvPool = 0i64;
  sv_cmd_args.nesting = -1;
  *(_QWORD *)&sv_cmd_args.totalUsedArgvPool = 0i64;
  do
  {
    if ( !v4 )
    {
      j___report_rangecheckfailure(v0);
      JUMPOUT(0x141392E54i64);
    }
    cmd_insideCBufExecute[v1] = 0;
    v4 = (unsigned __int64)++v1 < 2;
  }
  while ( v1 < 2 );
}

/*
==============
Cmd_EndTokenizedString
==============
*/
void Cmd_EndTokenizedString(void)
{
  int nesting; 
  __int64 v1; 
  int v2; 
  int v3; 

  CmdArgs::AssertCmdArgsConsistency(&cmd_args);
  nesting = cmd_args.nesting;
  if ( cmd_args.nesting >= 8u )
  {
    v3 = 8;
    v2 = cmd_args.nesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1111, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    nesting = cmd_args.nesting;
  }
  v1 = nesting;
  cmd_args.totalUsedArgvPool -= cmd_args.argc[v1];
  cmd_args.totalUsedTextPool -= cmd_args.usedTextPool[v1];
  cmd_args.nesting = nesting - 1;
  CmdArgs::AssertCmdArgsConsistency(&cmd_args);
}

/*
==============
Cmd_Exec_Internal
==============
*/
void Cmd_Exec_Internal(bool isSuperUser)
{
  int nesting; 
  const char *v3; 
  LocalClientNum_t v4; 
  int v5; 
  const char *RawFile; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  Mem_LargeLocal v10; 
  __int64 v11; 
  char dest[64]; 

  v11 = -2i64;
  if ( Cmd_Argc() == 2 )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 867, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    nesting = cmd_args.nesting;
    if ( cmd_args.nesting >= 8u )
    {
      LODWORD(v8) = cmd_args.nesting;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v8, 8) )
        __debugbreak();
      nesting = cmd_args.nesting;
    }
    if ( cmd_args.argc[nesting] <= 1 )
      v3 = (char *)&queryFormat.fmt + 3;
    else
      v3 = (const char *)*((_QWORD *)cmd_args.argv[nesting] + 1);
    Core_strcpy_truncate(dest, 0x40ui64, v3);
    Com_DefaultExtension(dest, 64, ".cfg");
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 928, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    v4 = CmdArgs::LocalClientNum(&cmd_args);
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 941, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( cmd_args.nesting >= 8u )
    {
      LODWORD(v9) = 8;
      LODWORD(v8) = cmd_args.nesting;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 812, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( cmd_args.controllerIndex[cmd_args.nesting] >= 8u )
    {
      LODWORD(v9) = 8;
      LODWORD(v8) = cmd_args.controllerIndex[cmd_args.nesting];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 815, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex[nesting] ) < (unsigned)( 8 )", "controllerIndex[nesting] doesn't index 8\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v5 = cmd_args.controllerIndex[cmd_args.nesting];
    Mem_LargeLocal::Mem_LargeLocal(&v10, 0x18000ui64, "max_cmdff_buf buf");
    RawFile = DB_ReadRawFile(dest, (char *)v10.m_ptr, 98304);
    if ( RawFile )
    {
      Com_Printf(16, "execing %s from fastfile\n", dest);
      Cbuf_ExecuteBufferInternal(v4, v5, RawFile, isSuperUser, 0);
      Mem_LargeLocal::~Mem_LargeLocal(&v10);
    }
    else
    {
      Mem_LargeLocal::~Mem_LargeLocal(&v10);
      v7 = Cmd_Argv(1);
      Com_PrintError(1, "couldn't exec %s\n", v7);
    }
  }
  else
  {
    Com_Printf(0, "exec <filename> : execute a script file\n");
  }
}

/*
==============
Cmd_Exec_SuperUser_f
==============
*/
void Cmd_Exec_SuperUser_f()
{
  Cmd_Exec_Internal(1);
}

/*
==============
Cmd_Exec_f
==============
*/
void Cmd_Exec_f()
{
  Cmd_Exec_Internal(0);
}

/*
==============
Cmd_FindCommand
==============
*/
cmd_function_s *Cmd_FindCommand(const char *cmdName)
{
  return Cmd_FindCommandInFunctions(cmdName, &s_cmd_functions);
}

/*
==============
Cmd_FindCommandInFunctions
==============
*/
cmd_function_s *Cmd_FindCommandInFunctions(const char *cmdName, cmd_function_s **functions)
{
  cmd_function_s *i; 
  const char *name; 
  __int64 v6; 
  const char *v7; 
  char v8; 
  __int64 v9; 
  char v10; 

  if ( !functions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 219, ASSERT_TYPE_ASSERT, "(functions)", (const char *)&queryFormat, "functions") )
    __debugbreak();
  for ( i = *functions; i; i = i->next )
  {
    name = i->name;
    v6 = 0x7FFFFFFFi64;
    if ( !cmdName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v7 = (const char *)(cmdName - name);
    while ( 1 )
    {
      v8 = name[(_QWORD)v7];
      v9 = v6;
      v10 = *name++;
      --v6;
      if ( !v9 )
        return i;
      if ( v8 != v10 )
        break;
      if ( !v8 )
        return i;
    }
  }
  return 0i64;
}

/*
==============
Cmd_ForEach
==============
*/
void Cmd_ForEach(void (*callback)(const char *))
{
  cmd_function_s *i; 

  for ( i = s_cmd_functions; i; i = i->next )
    callback(i->name);
}

/*
==============
Cmd_GetAutoCompleteParameters
==============
*/
CmdAutoCompleteResults *Cmd_GetAutoCompleteParameters(CmdAutoCompleteResults *result, const char *cmdName, const char *allocTrackName)
{
  cmd_function_s *CommandInFunctions; 
  const char **autoCompleteList; 
  int autoCompleteListCount; 
  CmdAutoCompleteResults *v8; 

  if ( !cmdName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1351, ASSERT_TYPE_ASSERT, "(cmdName)", (const char *)&queryFormat, "cmdName") )
    __debugbreak();
  CommandInFunctions = Cmd_FindCommandInFunctions(cmdName, &s_cmd_functions);
  if ( CommandInFunctions && (autoCompleteList = CommandInFunctions->autoCompleteList) != NULL && (autoCompleteListCount = CommandInFunctions->autoCompleteListCount) != 0 )
  {
    result->stringCount = autoCompleteListCount;
    v8 = result;
    result->stringList = autoCompleteList;
  }
  else
  {
    result->stringList = NULL;
    result->stringCount = 0;
    return result;
  }
  return v8;
}

/*
==============
Cmd_GetNotificationListForClient
==============
*/
CmdScriptNotifyList *Cmd_GetNotificationListForClient(const int clientNum)
{
  __int64 v1; 
  unsigned int v4; 

  v1 = clientNum;
  if ( clientNum >= s_svCmdNotifyPlayerCount )
  {
    v4 = s_svCmdNotifyPlayerCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1510, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( s_svCmdNotifyPlayerCount )", "clientNum doesn't index s_svCmdNotifyPlayerCount\n\t%i not in [0, %i)", clientNum, v4) )
      __debugbreak();
  }
  return &s_svCmdNotifyPlayers[v1];
}

/*
==============
Cmd_Init
==============
*/
void Cmd_Init(void)
{
  cmd_function_s *CommandInFunctions; 
  cmd_function_s *v1; 
  cmd_function_s *v2; 
  cmd_function_s *v3; 
  cmd_function_s *v4; 

  *(_QWORD *)&cmd_args.totalUsedArgvPool = 0i64;
  *(_QWORD *)&sv_cmd_args.totalUsedArgvPool = 0i64;
  cmd_args.nesting = -1;
  sv_cmd_args.nesting = -1;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 251, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThe CMD system is not thread safe, this needs to be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  CommandInFunctions = Cmd_FindCommandInFunctions("cmdlist", &s_cmd_functions);
  if ( CommandInFunctions )
  {
    if ( CommandInFunctions != &Cmd_List_f_VAR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 257, ASSERT_TYPE_ASSERT, "(cmd == allocedCmd)", (const char *)&queryFormat, "cmd == allocedCmd") )
      __debugbreak();
    Com_Printf(16, "Cmd_AddCommand: %s already defined\n", "cmdlist");
  }
  else
  {
    Cmd_List_f_VAR.name = "cmdlist";
    Cmd_List_f_VAR.function = (void (__fastcall *)())Cmd_List_f;
    Cmd_List_f_VAR.next = s_cmd_functions;
    Cmd_ClearAutoCompleteInternal(&Cmd_List_f_VAR);
    s_cmd_functions = &Cmd_List_f_VAR;
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 251, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThe CMD system is not thread safe, this needs to be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  v1 = Cmd_FindCommandInFunctions("exec", &s_cmd_functions);
  if ( v1 )
  {
    if ( v1 != &Cmd_Exec_f_VAR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 257, ASSERT_TYPE_ASSERT, "(cmd == allocedCmd)", (const char *)&queryFormat, "cmd == allocedCmd") )
      __debugbreak();
    Com_Printf(16, "Cmd_AddCommand: %s already defined\n", "exec");
  }
  else
  {
    Cmd_Exec_f_VAR.name = "exec";
    Cmd_Exec_f_VAR.function = Cmd_Exec_f;
    Cmd_Exec_f_VAR.next = s_cmd_functions;
    Cmd_ClearAutoCompleteInternal(&Cmd_Exec_f_VAR);
    s_cmd_functions = &Cmd_Exec_f_VAR;
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 251, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThe CMD system is not thread safe, this needs to be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  v2 = Cmd_FindCommandInFunctions("exec", &s_cmd_superuser_functions);
  if ( v2 )
  {
    if ( v2 != &Cmd_Exec_SuperUser_f_VAR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 257, ASSERT_TYPE_ASSERT, "(cmd == allocedCmd)", (const char *)&queryFormat, "cmd == allocedCmd") )
      __debugbreak();
    Com_Printf(16, "Cmd_AddCommand: %s already defined\n", "exec");
  }
  else
  {
    Cmd_Exec_SuperUser_f_VAR.name = "exec";
    Cmd_Exec_SuperUser_f_VAR.function = Cmd_Exec_SuperUser_f;
    Cmd_Exec_SuperUser_f_VAR.next = s_cmd_superuser_functions;
    Cmd_ClearAutoCompleteInternal(&Cmd_Exec_SuperUser_f_VAR);
    s_cmd_superuser_functions = &Cmd_Exec_SuperUser_f_VAR;
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 251, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThe CMD system is not thread safe, this needs to be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  v3 = Cmd_FindCommandInFunctions("vstr", &s_cmd_functions);
  if ( v3 )
  {
    if ( v3 != &Cmd_Vstr_f_VAR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 257, ASSERT_TYPE_ASSERT, "(cmd == allocedCmd)", (const char *)&queryFormat, "cmd == allocedCmd") )
      __debugbreak();
    Com_Printf(16, "Cmd_AddCommand: %s already defined\n", "vstr");
  }
  else
  {
    Cmd_Vstr_f_VAR.name = "vstr";
    Cmd_Vstr_f_VAR.function = (void (__fastcall *)())Cmd_Vstr_f;
    Cmd_Vstr_f_VAR.next = s_cmd_functions;
    Cmd_ClearAutoCompleteInternal(&Cmd_Vstr_f_VAR);
    s_cmd_functions = &Cmd_Vstr_f_VAR;
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 251, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThe CMD system is not thread safe, this needs to be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  v4 = Cmd_FindCommandInFunctions("wait", &s_cmd_functions);
  if ( v4 )
  {
    if ( v4 != &Cmd_Wait_f_VAR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 257, ASSERT_TYPE_ASSERT, "(cmd == allocedCmd)", (const char *)&queryFormat, "cmd == allocedCmd") )
      __debugbreak();
    Com_Printf(16, "Cmd_AddCommand: %s already defined\n", "wait");
  }
  else
  {
    Cmd_Wait_f_VAR.name = "wait";
    Cmd_Wait_f_VAR.function = Cmd_Wait_f;
    Cmd_Wait_f_VAR.next = s_cmd_functions;
    Cmd_ClearAutoCompleteInternal(&Cmd_Wait_f_VAR);
    s_cmd_functions = &Cmd_Wait_f_VAR;
  }
}

/*
==============
Cmd_InitNotifications
==============
*/
void Cmd_InitNotifications(const unsigned int playercount)
{
  s_svCmdNotifyPlayerCount = playercount;
}

/*
==============
Cmd_List_f
==============
*/
void Cmd_List_f()
{
  unsigned int v0; 
  int nesting; 
  const char *v2; 
  cmd_function_s *i; 
  __int64 v4; 
  int v5; 

  v0 = 0;
  if ( Cmd_Argc() <= 1 )
  {
    v2 = NULL;
  }
  else
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 867, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    nesting = cmd_args.nesting;
    if ( cmd_args.nesting >= 8u )
    {
      v5 = 8;
      LODWORD(v4) = cmd_args.nesting;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
      nesting = cmd_args.nesting;
    }
    if ( cmd_args.argc[nesting] <= 1 )
      v2 = (char *)&queryFormat.fmt + 3;
    else
      v2 = (const char *)*((_QWORD *)cmd_args.argv[nesting] + 1);
  }
  for ( i = s_cmd_functions; i; i = i->next )
  {
    if ( !v2 || Com_Filter(v2, i->name, 0) )
    {
      Com_Printf(0, "%s\n", i->name);
      ++v0;
    }
  }
  Com_Printf(0, "%i commands\n", v0);
}

/*
==============
Cmd_LoadNotificationList
==============
*/
void Cmd_LoadNotificationList(MemoryFile *memFile, CmdScriptNotifyList *cmdScriptNotifyList)
{
  __int64 v4; 
  CmdScriptNotifyList *v5; 
  __int64 v6; 
  const char *CString; 
  unsigned int p; 

  if ( !cmdScriptNotifyList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1439, ASSERT_TYPE_ASSERT, "( cmdScriptNotifyList )", (const char *)&queryFormat, "cmdScriptNotifyList") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &p);
  v4 = p;
  if ( p > 0x38 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FFE210, 5i64, p);
  if ( (_DWORD)v4 )
  {
    v5 = cmdScriptNotifyList;
    v6 = v4;
    do
    {
      MemFile_ReadData(memFile, 2ui64, &p);
      v5->entries[0].cmdIndex = p;
      CString = MemFile_ReadCString(memFile);
      v5->entries[0].notify = SL_GetString(CString, 0);
      v5 = (CmdScriptNotifyList *)((char *)v5 + 8);
      --v6;
    }
    while ( v6 );
  }
  cmdScriptNotifyList->entryCount = v4;
}

/*
==============
Cmd_LoadNotifications
==============
*/
void Cmd_LoadNotifications(MemoryFile *memFile)
{
  __int64 v2; 
  __int64 v3; 
  scr_string_t *p_notify; 
  __int64 v5; 
  const char *CString; 
  CmdScriptNotifyList *v7; 
  __int64 v8; 
  unsigned int p; 

  MemFile_ReadData(memFile, 4ui64, &p);
  v2 = p;
  if ( p > 0xC8 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FFE270, 6i64, p);
  MemFile_ReadData(memFile, 4ui64, &p);
  v3 = p;
  if ( p > 0x38 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FFE210, 5i64, p);
  if ( (_DWORD)v3 )
  {
    p_notify = &s_svCmdNotifyGlobal.entries[0].notify;
    v5 = v3;
    do
    {
      MemFile_ReadData(memFile, 2ui64, &p);
      *((_WORD *)p_notify - 2) = p;
      CString = MemFile_ReadCString(memFile);
      *p_notify = SL_GetString(CString, 0);
      p_notify += 2;
      --v5;
    }
    while ( v5 );
  }
  s_svCmdNotifyGlobal.entryCount = v3;
  if ( (_DWORD)v2 )
  {
    v7 = s_svCmdNotifyPlayers;
    v8 = v2;
    do
    {
      Cmd_LoadNotificationList(memFile, v7++);
      --v8;
    }
    while ( v8 );
  }
  s_svCmdNotifyPlayerCount = v2;
}

/*
==============
Cmd_LocalClientNum
==============
*/
LocalClientNum_t Cmd_LocalClientNum()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 928, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  return CmdArgs::LocalClientNum(&cmd_args);
}

/*
==============
Cmd_LocalControllerIndex
==============
*/
__int64 Cmd_LocalControllerIndex()
{
  __int64 v1; 
  __int64 v2; 
  int v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 941, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( cmd_args.nesting >= 8u )
  {
    v3 = 8;
    LODWORD(v1) = cmd_args.nesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 812, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v1, v3) )
      __debugbreak();
  }
  if ( cmd_args.controllerIndex[cmd_args.nesting] >= 8u )
  {
    LODWORD(v2) = 8;
    LODWORD(v1) = cmd_args.controllerIndex[cmd_args.nesting];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 815, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex[nesting] ) < (unsigned)( 8 )", "controllerIndex[nesting] doesn't index 8\n\t%i not in [0, %i)", v1, v2) )
      __debugbreak();
  }
  return (unsigned int)cmd_args.controllerIndex[cmd_args.nesting];
}

/*
==============
Cmd_RegisterNotification
==============
*/
void Cmd_RegisterNotification(const int clientNum, const char *commandString, const char *notifyString)
{
  unsigned int BindingForCommand; 
  scr_string_t String; 
  CmdScriptNotifyList *NotificationListForClient; 
  __int64 entryCount; 
  unsigned int v9; 
  CmdScriptNotifyList *v10; 
  scrContext_t *v11; 
  const char *v12; 

  BindingForCommand = Com_Keys_GetBindingForCommand(commandString);
  if ( BindingForCommand )
  {
    String = SL_GetString(notifyString, 0);
    if ( clientNum < 0 )
      NotificationListForClient = &s_svCmdNotifyGlobal;
    else
      NotificationListForClient = Cmd_GetNotificationListForClient(clientNum);
    entryCount = NotificationListForClient->entryCount;
    v9 = 0;
    if ( (_DWORD)entryCount )
    {
      v10 = NotificationListForClient;
      while ( v10->entries[0].cmdIndex != BindingForCommand || v10->entries[0].notify != String )
      {
        ++v9;
        v10 = (CmdScriptNotifyList *)((char *)v10 + 8);
        if ( v9 >= (unsigned int)entryCount )
          goto LABEL_10;
      }
      SL_RemoveRefToString(String);
    }
    else
    {
LABEL_10:
      if ( (_DWORD)entryCount == 56 )
      {
        v11 = ScriptContext_Server();
        SL_RemoveRefToString(String);
        v12 = j_va("Cannot currently register more than %i commands per player/global\n", 56i64);
        Scr_Error(COM_ERR_1355, v11, v12);
      }
      NotificationListForClient->entries[entryCount].cmdIndex = truncate_cast<unsigned short,unsigned int>(BindingForCommand);
      NotificationListForClient->entries[entryCount].notify = String;
      ++NotificationListForClient->entryCount;
    }
  }
}

/*
==============
Cmd_ReleaseAutoCompleteParameters
==============
*/
void Cmd_ReleaseAutoCompleteParameters(const CmdAutoCompleteResults *r_pastResults)
{
  ;
}

/*
==============
Cmd_RemoveClientCommandList
==============
*/
void Cmd_RemoveClientCommandList(ClCommandInfo *commandList, unsigned int commandListSize)
{
  __int64 v4; 
  ClCommandInfo *v5; 
  const char *name; 
  cmd_function_s *v7; 
  cmd_function_s **i; 
  const char *v9; 
  __int64 v10; 
  signed __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 

  if ( !commandList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1284, ASSERT_TYPE_ASSERT, "(commandList)", (const char *)&queryFormat, "commandList") )
    __debugbreak();
  v4 = (int)(commandListSize - 1);
  if ( (int)(commandListSize - 1) >= 0 )
  {
    v5 = &commandList[commandListSize - 1];
    do
    {
      name = v5->name;
      if ( !v5->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1188, ASSERT_TYPE_ASSERT, "(cmdName)", (const char *)&queryFormat, "cmdName") )
        __debugbreak();
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1189, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThe CMD system is not thread safe, this needs to be done from the main thread", "Sys_IsMainThread()") )
        __debugbreak();
      v7 = s_cmd_functions;
      for ( i = &s_cmd_functions; v7; v7 = v7->next )
      {
        v9 = v7->name;
        v10 = 0x7FFFFFFFi64;
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v11 = name - v9;
        while ( 1 )
        {
          v12 = v9[v11];
          v13 = v10;
          v14 = *v9++;
          --v10;
          if ( !v13 )
          {
LABEL_23:
            *i = v7->next;
            goto LABEL_24;
          }
          if ( v12 != v14 )
            break;
          if ( !v12 )
            goto LABEL_23;
        }
        i = &v7->next;
      }
LABEL_24:
      --v5;
      --v4;
    }
    while ( v4 >= 0 );
  }
}

/*
==============
Cmd_RemoveCommand
==============
*/
void Cmd_RemoveCommand(const char *cmdName)
{
  cmd_function_s *v2; 
  cmd_function_s **i; 
  const char *name; 
  __int64 v5; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 

  if ( !cmdName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1188, ASSERT_TYPE_ASSERT, "(cmdName)", (const char *)&queryFormat, "cmdName") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1189, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThe CMD system is not thread safe, this needs to be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  v2 = s_cmd_functions;
  for ( i = &s_cmd_functions; v2; v2 = v2->next )
  {
    name = v2->name;
    v5 = 0x7FFFFFFFi64;
    if ( !cmdName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(cmdName - name);
    while ( 1 )
    {
      v7 = name[(_QWORD)v6];
      v8 = v5;
      v9 = *name++;
      --v5;
      if ( !v8 )
      {
LABEL_18:
        *i = v2->next;
        return;
      }
      if ( v7 != v9 )
        break;
      if ( !v7 )
        goto LABEL_18;
    }
    i = &v2->next;
  }
}

/*
==============
Cmd_RemoveServerCommandInternal
==============
*/
void Cmd_RemoveServerCommandInternal(const char *cmdName)
{
  cmd_function_s *v1; 
  cmd_function_s **i; 
  const char *name; 
  __int64 v5; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 

  v1 = s_sv_cmd_functions;
  for ( i = &s_sv_cmd_functions; v1; v1 = v1->next )
  {
    name = v1->name;
    v5 = 0x7FFFFFFFi64;
    if ( !cmdName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(cmdName - name);
    while ( 1 )
    {
      v7 = name[(_QWORD)v6];
      v8 = v5;
      v9 = *name++;
      --v5;
      if ( !v8 )
      {
LABEL_12:
        *i = v1->next;
        return;
      }
      if ( v7 != v9 )
        break;
      if ( !v7 )
        goto LABEL_12;
    }
    i = &v1->next;
  }
}

/*
==============
Cmd_RemoveServerCommandList
==============
*/
void Cmd_RemoveServerCommandList(SvCommandInfo *commandList, unsigned int commandListSize)
{
  __int64 v4; 
  SvCommandInfo *v5; 
  cmd_function_s *v6; 
  cmd_function_s **p_next; 
  const char *i; 
  const char *name; 
  __int64 v10; 
  signed __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 

  if ( !commandList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1309, ASSERT_TYPE_ASSERT, "(commandList)", (const char *)&queryFormat, "commandList") )
    __debugbreak();
  v4 = (int)(commandListSize - 1);
  if ( (int)(commandListSize - 1) >= 0 )
  {
    v5 = &commandList[v4];
    do
    {
      v6 = s_sv_cmd_functions;
      p_next = &s_sv_cmd_functions;
      for ( i = v5->name; v6; v6 = v6->next )
      {
        name = v6->name;
        v10 = 0x7FFFFFFFi64;
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v11 = i - name;
        while ( 1 )
        {
          v12 = name[v11];
          v13 = v10;
          v14 = *name++;
          --v10;
          if ( !v13 )
          {
LABEL_17:
            *p_next = v6->next;
            goto LABEL_18;
          }
          if ( v12 != v14 )
            break;
          if ( !v12 )
            goto LABEL_17;
        }
        p_next = &v6->next;
      }
LABEL_18:
      Cmd_RemoveCommand(v5->name);
      --v5;
      --v4;
    }
    while ( v4 >= 0 );
  }
}

/*
==============
Cmd_SaveNotificationList
==============
*/
void Cmd_SaveNotificationList(MemoryFile *memFile, const CmdScriptNotifyList *cmdScriptNotifyList)
{
  const CmdScriptNotifyList *v2; 
  __int64 v4; 
  const char *v5; 
  unsigned int p; 

  v2 = cmdScriptNotifyList;
  if ( !cmdScriptNotifyList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1422, ASSERT_TYPE_ASSERT, "( cmdScriptNotifyList )", (const char *)&queryFormat, "cmdScriptNotifyList") )
    __debugbreak();
  p = v2->entryCount;
  v4 = p;
  MemFile_WriteData(memFile, 4ui64, &p);
  if ( (_DWORD)v4 )
  {
    do
    {
      LOWORD(p) = v2->entries[0].cmdIndex;
      MemFile_WriteData(memFile, 2ui64, &p);
      v5 = SL_ConvertToString(v2->entries[0].notify);
      MemFile_WriteCString(memFile, v5);
      v2 = (const CmdScriptNotifyList *)((char *)v2 + 8);
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
Cmd_SaveNotifications
==============
*/
void Cmd_SaveNotifications(MemoryFile *memFile)
{
  __int64 entryCount; 
  scr_string_t *p_notify; 
  const char *v4; 
  unsigned int i; 
  unsigned int p; 

  p = s_svCmdNotifyPlayerCount;
  MemFile_WriteData(memFile, 4ui64, &p);
  entryCount = s_svCmdNotifyGlobal.entryCount;
  p = s_svCmdNotifyGlobal.entryCount;
  MemFile_WriteData(memFile, 4ui64, &p);
  if ( (_DWORD)entryCount )
  {
    p_notify = &s_svCmdNotifyGlobal.entries[0].notify;
    do
    {
      LOWORD(p) = *((_WORD *)p_notify - 2);
      MemFile_WriteData(memFile, 2ui64, &p);
      v4 = SL_ConvertToString(*p_notify);
      MemFile_WriteCString(memFile, v4);
      p_notify += 2;
      --entryCount;
    }
    while ( entryCount );
  }
  for ( i = 0; i < s_svCmdNotifyPlayerCount; ++i )
    Cmd_SaveNotificationList(memFile, &s_svCmdNotifyPlayers[i]);
}

/*
==============
Cmd_SetAutoCompleteList
==============
*/
void Cmd_SetAutoCompleteList(const char *cmdName, const char **list, const unsigned int listLineCount)
{
  cmd_function_s *CommandInFunctions; 

  if ( !cmdName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1240, ASSERT_TYPE_ASSERT, "(cmdName)", (const char *)&queryFormat, "cmdName") )
    __debugbreak();
  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1241, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1242, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThe CMD system is not thread safe, this needs to be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  CommandInFunctions = Cmd_FindCommandInFunctions(cmdName, &s_cmd_functions);
  if ( CommandInFunctions )
  {
    CommandInFunctions->autoCompleteList = list;
    CommandInFunctions->autoCompleteListCount = listLineCount;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1246, ASSERT_TYPE_ASSERT, "(cmd)", "%s\n\tCouldn't find command %s", "cmd", cmdName) )
      __debugbreak();
    MEMORY[0x10] = list;
    MEMORY[0x18] = listLineCount;
  }
}

/*
==============
Cmd_Shutdown
==============
*/
void Cmd_Shutdown(void)
{
  s_cmd_functions = NULL;
  s_sv_cmd_functions = NULL;
  s_cmd_superuser_functions = NULL;
}

/*
==============
Cmd_TokenizeString
==============
*/
void Cmd_TokenizeString(const char *text_in)
{
  CmdArgs::TokenizeStringKernel(&cmd_args, text_in, 512 - cmd_args.totalUsedArgvPool);
}

/*
==============
Cmd_TokenizeStringWithLimit
==============
*/
void Cmd_TokenizeStringWithLimit(const char *text_in, int max_tokens)
{
  CmdArgs::TokenizeStringKernel(&cmd_args, text_in, max_tokens);
}

/*
==============
Cmd_TokenizeString_ErrorCleanup
==============
*/
void Cmd_TokenizeString_ErrorCleanup(void)
{
  cmd_args.nesting = -1;
  *(_QWORD *)&cmd_args.totalUsedArgvPool = 0i64;
}

/*
==============
Cmd_UnregisterAllNotifications
==============
*/
void Cmd_UnregisterAllNotifications(void)
{
  unsigned int i; 
  unsigned int v1; 
  CmdScriptNotifyList *v2; 
  unsigned int j; 

  if ( !Sys_IsMainThread() && !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1636, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsServerThread()") )
    __debugbreak();
  for ( i = 0; i < s_svCmdNotifyGlobal.entryCount; ++i )
    SL_RemoveRefToString(s_svCmdNotifyGlobal.entries[i].notify);
  v1 = 0;
  for ( s_svCmdNotifyGlobal.entryCount = 0; v1 < s_svCmdNotifyPlayerCount; v2->entryCount = 0 )
  {
    v2 = &s_svCmdNotifyPlayers[v1];
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1621, ASSERT_TYPE_ASSERT, "(notifyList)", (const char *)&queryFormat, "notifyList") )
      __debugbreak();
    for ( j = 0; j < v2->entryCount; ++j )
      SL_RemoveRefToString(v2->entries[j].notify);
    ++v1;
  }
  s_svCmdNotifyPlayerCount = 0;
}

/*
==============
Cmd_UnregisterAllNotificationsForList
==============
*/
void Cmd_UnregisterAllNotificationsForList(CmdScriptNotifyList *notifyList)
{
  __int64 v2; 

  if ( !notifyList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1621, ASSERT_TYPE_ASSERT, "(notifyList)", (const char *)&queryFormat, "notifyList") )
    __debugbreak();
  v2 = 0i64;
  if ( notifyList->entryCount )
  {
    do
    {
      SL_RemoveRefToString(notifyList->entries[v2].notify);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < notifyList->entryCount );
    notifyList->entryCount = 0;
  }
  else
  {
    notifyList->entryCount = 0;
  }
}

/*
==============
Cmd_UnregisterNotification
==============
*/
void Cmd_UnregisterNotification(const int clientNum, const char *commandString, const char *notifyString)
{
  int BindingForCommand; 
  scr_string_t String; 
  CmdScriptNotifyList *NotificationListForClient; 
  unsigned int entryCount; 
  unsigned int v9; 
  CmdScriptNotifyList *v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  CmdScriptNotify *v14; 
  __int64 v15; 
  CmdScriptNotify *v16; 
  unsigned __int16 cmdIndex; 

  BindingForCommand = Com_Keys_GetBindingForCommand(commandString);
  if ( BindingForCommand )
  {
    String = SL_GetString(notifyString, 0);
    if ( clientNum < 0 )
      NotificationListForClient = &s_svCmdNotifyGlobal;
    else
      NotificationListForClient = Cmd_GetNotificationListForClient(clientNum);
    entryCount = NotificationListForClient->entryCount;
    v9 = 0;
    if ( entryCount )
    {
      v10 = NotificationListForClient;
      while ( v10->entries[0].cmdIndex != BindingForCommand || v10->entries[0].notify != String )
      {
        ++v9;
        v10 = (CmdScriptNotifyList *)((char *)v10 + 8);
        if ( v9 >= entryCount )
          goto LABEL_16;
      }
      SL_RemoveRefToString(String);
      if ( v9 < entryCount )
      {
        v11 = entryCount - 1;
        if ( v9 < v11 )
        {
          v12 = v11 - v9;
          v13 = v12;
          v14 = &NotificationListForClient->entries[v9];
          v15 = v9 + 1;
          v9 += v12;
          v16 = &NotificationListForClient->entries[v15];
          do
          {
            cmdIndex = v16->cmdIndex;
            ++v16;
            v14->cmdIndex = cmdIndex;
            ++v14;
            v14[-1].notify = v16[-1].notify;
            --v13;
          }
          while ( v13 );
        }
        NotificationListForClient->entries[v9].cmdIndex = 0;
        NotificationListForClient->entries[v9].notify = 0;
        --NotificationListForClient->entryCount;
      }
    }
LABEL_16:
    SL_RemoveRefToString(String);
  }
}

/*
==============
Cmd_Vstr_f
==============
*/
void Cmd_Vstr_f()
{
  int nesting; 
  const char *v1; 
  const dvar_t *VarByName; 
  const char *UnobfuscatedName; 
  char *v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  int v7; 
  int cmdsize; 
  int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  if ( Cmd_Argc() == 2 )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 867, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    nesting = cmd_args.nesting;
    if ( cmd_args.nesting >= 8u )
    {
      v13 = 8;
      LODWORD(v12) = cmd_args.nesting;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
      nesting = cmd_args.nesting;
    }
    if ( cmd_args.argc[nesting] <= 1 )
      v1 = (char *)&queryFormat.fmt + 3;
    else
      v1 = *(const char **)(*(_QWORD *)&cmd_args.textPool[8 * nesting - 64] + 8i64);
    VarByName = Dvar_FindVarByName(v1);
    if ( VarByName )
    {
      if ( (unsigned __int8)(VarByName->type - 8) <= 1u )
      {
        v4 = j_va("%s\n", VarByName->current.string);
        v5 = Cmd_LocalClientNum();
        Sys_EnterCriticalSection(CRITSECT_CBUF);
        v6 = -1i64;
        do
          ++v6;
        while ( v4[v6] );
        v7 = truncate_cast<int,unsigned __int64>(v6);
        cmdsize = s_cmd_textArray[v5].cmdsize;
        v9 = v7 + 1;
        if ( cmdsize + v7 + 1 <= s_cmd_textArray[v5].maxsize )
        {
          v10 = cmdsize - 1;
          v11 = cmdsize - 1;
          if ( v10 >= 0 )
          {
            do
            {
              s_cmd_textArray[v5].data[v9 + v11] = s_cmd_textArray[v5].data[v11];
              --v11;
            }
            while ( v11 >= 0 );
          }
          memcpy_0(s_cmd_textArray[v5].data, v4, v9 - 1);
          s_cmd_textArray[v5].data[v9 - 1] = 10;
          s_cmd_textArray[v5].cmdsize += v9;
        }
        else
        {
          Com_PrintError(1, "Cbuf_InsertText overflowed\n");
        }
        Sys_LeaveCriticalSection(CRITSECT_CBUF);
      }
      else
      {
        UnobfuscatedName = Dvar_DevGetUnobfuscatedName(VarByName->name);
        Com_Printf(0, "%s is not a string-based dvar\n", UnobfuscatedName);
      }
    }
    else
    {
      Com_Printf(0, "%s doesn't exist\n", v1);
    }
  }
  else
  {
    Com_Printf(0, "vstr <variablename> : execute a variable command\n");
  }
}

/*
==============
Cmd_Wait_f
==============
*/
void Cmd_Wait_f(void)
{
  int nesting; 
  int v1; 
  int v2; 

  if ( Cmd_Argc() == 2 )
  {
    nesting = cmd_args.nesting;
    if ( cmd_args.nesting >= 8u )
    {
      v2 = 8;
      v1 = cmd_args.nesting;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v1, v2) )
        __debugbreak();
      nesting = cmd_args.nesting;
    }
    if ( cmd_args.argc[nesting] <= 1 )
      cmd_wait = atoi((const char *)&queryFormat.fmt + 3);
    else
      cmd_wait = atoi(cmd_args.argv[nesting][1]);
  }
  else
  {
    cmd_wait = 1;
  }
}

/*
==============
CmdArgs::LocalClientNum
==============
*/
__int64 CmdArgs::LocalClientNum(CmdArgs *this)
{
  __int64 v3; 
  int nesting; 
  __int64 v5; 
  int v6; 

  if ( this->nesting >= 8u )
  {
    v6 = 8;
    nesting = this->nesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 799, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", nesting, v6) )
      __debugbreak();
  }
  if ( this->localClientNum[this->nesting] >= (unsigned int)LOCAL_CLIENT_COUNT )
  {
    LODWORD(v5) = 2;
    LODWORD(v3) = this->localClientNum[this->nesting];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 801, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum[nesting] ) < (unsigned)( 2 )", "localClientNum[nesting] doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  return (unsigned int)this->localClientNum[this->nesting];
}

/*
==============
SV_Cmd_ArgFloat
==============
*/
float SV_Cmd_ArgFloat(int argIndex)
{
  const char *v2; 

  v2 = CmdArgs::ArgV(&sv_cmd_args, argIndex);
  *(double *)&_XMM0 = atof(v2);
  __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
SV_Cmd_ArgInt64
==============
*/
__int64 SV_Cmd_ArgInt64(int argIndex)
{
  const char *v1; 

  v1 = CmdArgs::ArgV(&sv_cmd_args, argIndex);
  return I_atoi64(v1);
}

/*
==============
SV_Cmd_ArgInt
==============
*/
int SV_Cmd_ArgInt(int argIndex)
{
  const char *v1; 

  v1 = CmdArgs::ArgV(&sv_cmd_args, argIndex);
  return atoi(v1);
}

/*
==============
SV_Cmd_ArgUInt64
==============
*/
unsigned __int64 SV_Cmd_ArgUInt64(int argIndex)
{
  const char *v1; 

  v1 = CmdArgs::ArgV(&sv_cmd_args, argIndex);
  return I_atoui64(v1);
}

/*
==============
SV_Cmd_Argc
==============
*/
__int64 SV_Cmd_Argc()
{
  int nesting; 
  int v2; 
  int v3; 

  nesting = sv_cmd_args.nesting;
  if ( sv_cmd_args.nesting >= 8u )
  {
    v3 = 8;
    v2 = sv_cmd_args.nesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 760, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    nesting = sv_cmd_args.nesting;
  }
  return (unsigned int)sv_cmd_args.argc[nesting];
}

/*
==============
SV_Cmd_Argv
==============
*/
const char *SV_Cmd_Argv(int argIndex)
{
  return CmdArgs::ArgV(&sv_cmd_args, argIndex);
}

/*
==============
SV_Cmd_ArgvBuffer
==============
*/
void SV_Cmd_ArgvBuffer(int arg, char *buffer, unsigned __int64 bufferLength)
{
  const char *v5; 

  v5 = CmdArgs::ArgV(&sv_cmd_args, arg);
  Core_strcpy_truncate_or_fill_zero(buffer, bufferLength, v5);
}

/*
==============
SV_Cmd_EndTokenizedString
==============
*/
void SV_Cmd_EndTokenizedString(void)
{
  int nesting; 
  __int64 v1; 
  int v2; 
  int v3; 

  CmdArgs::AssertCmdArgsConsistency(&sv_cmd_args);
  nesting = sv_cmd_args.nesting;
  if ( sv_cmd_args.nesting >= 8u )
  {
    v3 = 8;
    v2 = sv_cmd_args.nesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1111, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    nesting = sv_cmd_args.nesting;
  }
  v1 = nesting;
  sv_cmd_args.totalUsedArgvPool -= sv_cmd_args.argc[v1];
  sv_cmd_args.totalUsedTextPool -= sv_cmd_args.usedTextPool[v1];
  sv_cmd_args.nesting = nesting - 1;
  CmdArgs::AssertCmdArgsConsistency(&sv_cmd_args);
}

/*
==============
SV_Cmd_LocalClientNum
==============
*/
LocalClientNum_t SV_Cmd_LocalClientNum()
{
  return CmdArgs::LocalClientNum(&sv_cmd_args);
}

/*
==============
SV_Cmd_TokenizeString
==============
*/
void SV_Cmd_TokenizeString(const char *text_in)
{
  CmdArgs::TokenizeStringKernel(&sv_cmd_args, text_in, 512 - sv_cmd_args.totalUsedArgvPool);
}

/*
==============
SV_Cmd_TokenizeString_ErrorCleanup
==============
*/
void SV_Cmd_TokenizeString_ErrorCleanup(void)
{
  sv_cmd_args.nesting = -1;
  *(_QWORD *)&sv_cmd_args.totalUsedArgvPool = 0i64;
}

/*
==============
CmdArgs::TokenizeStringInternal
==============
*/
__int64 CmdArgs::TokenizeStringInternal(CmdArgs *this, const char *text_in, int max_tokens)
{
  const char *v4; 
  unsigned int v6; 
  __int64 v7; 
  char v8; 
  char v9; 
  char v10; 
  const char *v11; 
  char v12; 
  char v13; 
  _BYTE *v14; 
  char v15; 
  int v16; 
  int v17; 
  int v18; 
  char v19; 
  char v20; 
  int v21; 
  int v22; 
  int v23; 
  char v24; 
  int v25; 

  v4 = text_in;
  if ( !text_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 961, ASSERT_TYPE_ASSERT, "(text_in)", (const char *)&queryFormat, "text_in") )
    __debugbreak();
  v6 = 0;
  v7 = 0i64;
LABEL_5:
  while ( 1 )
  {
    v8 = *v4;
    if ( !*v4 )
      return v6;
    if ( (((v8 - 22) & 0xF6) != 0 || v8 == 23) && (unsigned __int8)v8 <= 0x20u && !Com_Keys_IsValidGamePadChar(v8) )
    {
      ++v4;
    }
    else
    {
      if ( *v4 != 47 )
        goto LABEL_20;
      v9 = v4[1];
      if ( v9 == 47 )
        return v6;
      if ( v9 == 42 )
      {
        v10 = v4[2];
        v11 = v4 + 2;
        if ( !v10 )
          return v6;
        while ( v10 != 42 || v11[1] != 47 )
        {
          v10 = *++v11;
          if ( !v10 )
            return v6;
        }
        v4 = v11 + 2;
      }
      else
      {
LABEL_20:
        ++v6;
        this->argv[this->nesting][v7++] = &this->textPool[this->totalUsedTextPool];
        v12 = *v4;
        if ( !--max_tokens )
        {
          this->textPool[this->totalUsedTextPool] = v12;
          v23 = this->totalUsedTextPool + 1;
          if ( v23 > 16382 )
            v23 = 16382;
          for ( this->totalUsedTextPool = v23; *v4; this->totalUsedTextPool = v25 )
          {
            v24 = *++v4;
            this->textPool[this->totalUsedTextPool] = v24;
            v25 = this->totalUsedTextPool + 1;
            if ( v25 > 16382 )
              v25 = 16382;
          }
          return v6;
        }
        if ( v12 != 34 )
        {
          while ( 1 )
          {
            this->textPool[this->totalUsedTextPool] = v12;
            v18 = this->totalUsedTextPool + 1;
            if ( v18 > 16382 )
              v18 = 16382;
            ++v4;
            this->totalUsedTextPool = v18;
            v19 = *v4;
            if ( !*v4 )
              break;
            if ( ((v19 - 22) & 0xF6) == 0 && v19 != 23 || (unsigned __int8)v19 > 0x20u || Com_Keys_IsValidGamePadChar(v19) )
            {
              v12 = *v4;
              if ( *v4 != 47 )
                continue;
              v20 = v4[1];
              if ( v20 != 47 && v20 != 42 )
                continue;
            }
            this->textPool[this->totalUsedTextPool] = 0;
            v21 = this->totalUsedTextPool + 1;
            if ( v21 > 16382 )
              v21 = 16382;
            this->totalUsedTextPool = v21;
            goto LABEL_5;
          }
          this->textPool[v18] = 0;
          v22 = this->totalUsedTextPool + 1;
          if ( v22 > 16382 )
            v22 = 16382;
          this->totalUsedTextPool = v22;
          return v6;
        }
        v13 = v4[1];
        v14 = v4 + 1;
        if ( v13 )
        {
          v15 = v13;
          do
          {
            if ( v15 == 34 )
              break;
            if ( v15 == 92 )
            {
              v15 = v13;
              if ( v14[1] == 34 )
              {
                ++v14;
                v15 = 34;
              }
            }
            this->textPool[this->totalUsedTextPool] = v15;
            v16 = this->totalUsedTextPool + 1;
            if ( v16 > 16382 )
              v16 = 16382;
            ++v14;
            this->totalUsedTextPool = v16;
            v13 = *v14;
            v15 = *v14;
          }
          while ( *v14 );
        }
        this->textPool[this->totalUsedTextPool] = 0;
        v17 = this->totalUsedTextPool + 1;
        if ( v17 > 16382 )
          v17 = 16382;
        this->totalUsedTextPool = v17;
        if ( !*v14 )
          return v6;
        v4 = v14 + 1;
        if ( !*v4 )
          return v6;
      }
    }
  }
}

/*
==============
CmdArgs::TokenizeStringKernel
==============
*/
void CmdArgs::TokenizeStringKernel(CmdArgs *this, const char *text_in, int max_tokens)
{
  __int64 nesting; 
  __int64 v7; 
  __int64 v8; 
  int v10; 

  if ( max_tokens > 512 - this->totalUsedArgvPool )
  {
    v10 = 512 - this->totalUsedArgvPool;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1086, ASSERT_TYPE_ASSERT, "( max_tokens ) <= ( 512 - totalUsedArgvPool )", "%s <= %s\n\t%i, %i", "max_tokens", "MAX_TOKENS_SIZE - totalUsedArgvPool", max_tokens, v10) )
      __debugbreak();
  }
  CmdArgs::AssertCmdArgsConsistency(this);
  if ( ++this->nesting >= 8u )
  {
    LODWORD(v8) = 8;
    LODWORD(v7) = this->nesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1091, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  this->usedTextPool[this->nesting] = -this->totalUsedTextPool;
  this->localClientNum[this->nesting] = LOCAL_CLIENT_INVALID;
  this->controllerIndex[this->nesting] = 0;
  this->argv[this->nesting] = &this->argvPool[this->totalUsedArgvPool];
  this->argc[this->nesting] = CmdArgs::TokenizeStringInternal(this, text_in, max_tokens);
  nesting = this->nesting;
  this->totalUsedArgvPool += this->argc[nesting];
  this->usedTextPool[nesting] += this->totalUsedTextPool;
  CmdArgs::AssertCmdArgsConsistency(this);
}

/*
==============
memcpy_noncrt
==============
*/
void memcpy_noncrt(void *dst, const void *src, unsigned __int64 length)
{
  signed __int64 v3; 

  if ( length )
  {
    v3 = (_BYTE *)src - (_BYTE *)dst;
    do
    {
      *(_BYTE *)dst = *((_BYTE *)dst + v3);
      dst = (char *)dst + 1;
      --length;
    }
    while ( length );
  }
}

/*
==============
strlen_noncrt
==============
*/
__int64 strlen_noncrt(const char *str)
{
  __int64 result; 

  for ( result = 0i64; *str; ++str )
    result = (unsigned int)(result + 1);
  return result;
}

