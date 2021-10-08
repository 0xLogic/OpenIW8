/*
==============
Com_SetErrorMessage
==============
*/

void __fastcall Com_SetErrorMessage(const char *errorMessage)
{
  ?Com_SetErrorMessage@@YAXPEBD@Z(errorMessage);
}

/*
==============
Com_AreConnectedPacketsAllowed
==============
*/

bool __fastcall Com_AreConnectedPacketsAllowed()
{
  return ?Com_AreConnectedPacketsAllowed@@YA_NXZ();
}

/*
==============
Com_ResetFrametime
==============
*/

void Com_ResetFrametime(void)
{
  ?Com_ResetFrametime@@YAXXZ();
}

/*
==============
Com_ViewScaleMsec
==============
*/

double __fastcall Com_ViewScaleMsec(float sec)
{
  double result; 

  *(float *)&result = ?Com_ViewScaleMsec@@YAMM@Z(sec);
  return result;
}

/*
==============
Com_DoMaxFPSWait
==============
*/

void Com_DoMaxFPSWait(void)
{
  ?Com_DoMaxFPSWait@@YAXXZ();
}

/*
==============
Com_FreeEvent
==============
*/

void __fastcall Com_FreeEvent(void *ptr)
{
  ?Com_FreeEvent@@YAXPEAX@Z(ptr);
}

/*
==============
Com_LogFileFlush
==============
*/

void Com_LogFileFlush(void)
{
  ?Com_LogFileFlush@@YAXXZ();
}

/*
==============
Com_WarnUnimplemented
==============
*/

int __fastcall Com_WarnUnimplemented(const char *file, const int line, const char *func, const char *comment)
{
  return ?Com_WarnUnimplemented@@YAHPEBDH00@Z(file, line, func, comment);
}

/*
==============
Com_Frame_Try_Block_Function
==============
*/

void __fastcall Com_Frame_Try_Block_Function(double _XMM0_8, double _XMM1_8)
{
  ?Com_Frame_Try_Block_Function@@YAXXZ(_XMM0_8, _XMM1_8);
}

/*
==============
Com_IsAnyLocalServerStarting
==============
*/

bool __fastcall Com_IsAnyLocalServerStarting()
{
  return ?Com_IsAnyLocalServerStarting@@YA_NXZ();
}

/*
==============
NetAdr_SetType
==============
*/

void __fastcall NetAdr_SetType(netadr_t *addr, netadrtype_t type)
{
  ?NetAdr_SetType@@YAXPEAUnetadr_t@@W4netadrtype_t@@@Z(addr, type);
}

/*
==============
Com_GetLocalClientNumForEventOnPort
==============
*/

LocalClientNum_t __fastcall Com_GetLocalClientNumForEventOnPort(int portIndex)
{
  return ?Com_GetLocalClientNumForEventOnPort@@YA?AW4LocalClientNum_t@@H@Z(portIndex);
}

/*
==============
Com_FWTValidate
==============
*/

int __fastcall Com_FWTValidate()
{
  return ?Com_FWTValidate@@YAHXZ();
}

/*
==============
Com_PrintWarning
==============
*/

void Com_PrintWarning(int channel, const char *fmt, ...)
{
  ?Com_PrintWarning@@YAXHPEBDZZ(channel, fmt);
}

/*
==============
Com_FreeXAnimNodeMemory
==============
*/

void Com_FreeXAnimNodeMemory(void)
{
  ?Com_FreeXAnimNodeMemory@@YAXXZ();
}

/*
==============
Com_MP_Resume
==============
*/

void Com_MP_Resume(void)
{
  ?Com_MP_Resume@@YAXXZ();
}

/*
==============
Com_LeaveError
==============
*/

void Com_LeaveError(void)
{
  ?Com_LeaveError@@YAXXZ();
}

/*
==============
Com_GetBuildVersion
==============
*/

const char *__fastcall Com_GetBuildVersion()
{
  return ?Com_GetBuildVersion@@YAPEBDXZ();
}

/*
==============
Com_LogException
==============
*/

void __fastcall Com_LogException(const _EXCEPTION_POINTERS *context)
{
  ?Com_LogException@@YAXPEBU_EXCEPTION_POINTERS@@@Z(context);
}

/*
==============
Com_IsGameLocalServerRunning
==============
*/

bool __fastcall Com_IsGameLocalServerRunning()
{
  return ?Com_IsGameLocalServerRunning@@YA_NXZ();
}

/*
==============
Com_GetCompileBSPFilename
==============
*/

const char *__fastcall Com_GetCompileBSPFilename(const char *inFilename)
{
  return ?Com_GetCompileBSPFilename@@YAPEBDPEBD@Z(inFilename);
}

/*
==============
Com_ErrorAbort
==============
*/

void Com_ErrorAbort(void)
{
  ?Com_ErrorAbort@@YAXXZ();
}

/*
==============
Com_PrintHexDump
==============
*/

void __fastcall Com_PrintHexDump(int channel, const void *data, unsigned int dataSize)
{
  ?Com_PrintHexDump@@YAXHPEBXI@Z(channel, data, dataSize);
}

/*
==============
Com_Quit_f
==============
*/

void __fastcall Com_Quit_f()
{
  ?Com_Quit_f@@YAXXZ();
}

/*
==============
Com_FWTWatermark
==============
*/

const char *__fastcall Com_FWTWatermark()
{
  return ?Com_FWTWatermark@@YAPEBDXZ();
}

/*
==============
Com_PrintError
==============
*/

void Com_PrintError(int channel, const char *fmt, ...)
{
  ?Com_PrintError@@YAXHPEBDZZ(channel, fmt);
}

/*
==============
Com_XAnimFreeSmallTree
==============
*/

void __fastcall Com_XAnimFreeSmallTree(XAnimTree *animtree)
{
  ?Com_XAnimFreeSmallTree@@YAXPEAUXAnimTree@@@Z(animtree);
}

/*
==============
Com_GetTimescaleForSv
==============
*/

double __fastcall Com_GetTimescaleForSv()
{
  double result; 

  *(float *)&result = ?Com_GetTimescaleForSv@@YAMXZ();
  return result;
}

/*
==============
Com_WriteDefaults_f
==============
*/

void __fastcall Com_WriteDefaults_f()
{
  ?Com_WriteDefaults_f@@YAXXZ();
}

/*
==============
Com_ShutdownEvents
==============
*/

void Com_ShutdownEvents(void)
{
  ?Com_ShutdownEvents@@YAXXZ();
}

/*
==============
Com_ErrorEntered
==============
*/

bool __fastcall Com_ErrorEntered()
{
  return ?Com_ErrorEntered@@YA_NXZ();
}

/*
==============
Com_WriteDefaultsToFile
==============
*/

void __fastcall Com_WriteDefaultsToFile(const char *filename)
{
  ?Com_WriteDefaultsToFile@@YAXPEBD@Z(filename);
}

/*
==============
Com_GetXAnimNodeMemorySize
==============
*/

int __fastcall Com_GetXAnimNodeMemorySize(int maxLocalClients, int maxClients, int maxAgents)
{
  return ?Com_GetXAnimNodeMemorySize@@YAHHHH@Z(maxLocalClients, maxClients, maxAgents);
}

/*
==============
Com_FreeWeaponInfoMemory
==============
*/

void __fastcall Com_FreeWeaponInfoMemory(int source)
{
  ?Com_FreeWeaponInfoMemory@@YAXH@Z(source);
}

/*
==============
Com_EventLoop
==============
*/

void Com_EventLoop(void)
{
  ?Com_EventLoop@@YAXXZ();
}

/*
==============
Com_Init
==============
*/

void __fastcall Com_Init(char *commandLine)
{
  ?Com_Init@@YAXPEAD@Z(commandLine);
}

/*
==============
Com_InitSecureValues
==============
*/

void Com_InitSecureValues(void)
{
  ?Com_InitSecureValues@@YAXXZ();
}

/*
==============
Com_Restart
==============
*/

void Com_Restart(void)
{
  ?Com_Restart@@YAXXZ();
}

/*
==============
Com_GetTimeScale
==============
*/

double __fastcall Com_GetTimeScale()
{
  double result; 

  *(float *)&result = ?Com_GetTimeScale@@YAMXZ();
  return result;
}

/*
==============
Com_ResetSlowMotion
==============
*/

void Com_ResetSlowMotion(void)
{
  ?Com_ResetSlowMotion@@YAXXZ();
}

/*
==============
Com_Close
==============
*/

void Com_Close(void)
{
  ?Com_Close@@YAXXZ();
}

/*
==============
Com_CheckError
==============
*/

void Com_CheckError(void)
{
  ?Com_CheckError@@YAXXZ();
}

/*
==============
Com_PrintNoFormat
==============
*/

void __fastcall Com_PrintNoFormat(int channel, const char *msg)
{
  ?Com_PrintNoFormat@@YAXHPEBD@Z(channel, msg);
}

/*
==============
Com_GetUserCommandConstantMsec
==============
*/

int __fastcall Com_GetUserCommandConstantMsec()
{
  return ?Com_GetUserCommandConstantMsec@@YAHXZ();
}

/*
==============
Com_Printf_NoFilter
==============
*/

void Com_Printf_NoFilter(const char *fmt, ...)
{
  ?Com_Printf_NoFilter@@YAXPEBDZZ(fmt);
}

/*
==============
Com_SetLocalServerRestarting
==============
*/

void __fastcall Com_SetLocalServerRestarting(const bool restarting)
{
  ?Com_SetLocalServerRestarting@@YAX_N@Z(restarting);
}

/*
==============
Com_LocalizedFloatToString
==============
*/

void __fastcall Com_LocalizedFloatToString(float f, char *buffer, unsigned int maxlen, unsigned int numDecimalPlaces)
{
  ?Com_LocalizedFloatToString@@YAXMPEADII@Z(f, buffer, maxlen, numDecimalPlaces);
}

/*
==============
Com_PrintStackTrace
==============
*/

void Com_PrintStackTrace(void)
{
  ?Com_PrintStackTrace@@YAXXZ();
}

/*
==============
Com_AssetLoadUI
==============
*/

void Com_AssetLoadUI(void)
{
  ?Com_AssetLoadUI@@YAXXZ();
}

/*
==============
Com_SetSlowMotion
==============
*/

void __fastcall Com_SetSlowMotion(const float startTimescale, const float endTimescale, const int deltaMsec)
{
  ?Com_SetSlowMotion@@YAXMMH@Z(startTimescale, endTimescale, deltaMsec);
}

/*
==============
Com_Shutdown
==============
*/

void __fastcall Com_Shutdown(const char *finalmsg)
{
  ?Com_Shutdown@@YAXPEBD@Z(finalmsg);
}

/*
==============
Com_XAnimCreateSmallTree
==============
*/

XAnimTree *__fastcall Com_XAnimCreateSmallTree(XAnim_s *anims, XAnimOwner owner)
{
  return ?Com_XAnimCreateSmallTree@@YAPEAUXAnimTree@@PEAUXAnim_s@@W4XAnimOwner@@@Z(anims, owner);
}

/*
==============
Com_OpenUserFileCon
==============
*/

void __fastcall Com_OpenUserFileCon(const char *filename)
{
  ?Com_OpenUserFileCon@@YAXPEBD@Z(filename);
}

/*
==============
Com_AllocateXAnimNodeMemory
==============
*/

void __fastcall Com_AllocateXAnimNodeMemory(HunkUser *hunkUser, int maxLocalClients, int maxClients, int maxAgents)
{
  ?Com_AllocateXAnimNodeMemory@@YAXPEAUHunkUser@@HHH@Z(hunkUser, maxLocalClients, maxClients, maxAgents);
}

/*
==============
Com_CheckSyncFrame
==============
*/

void Com_CheckSyncFrame(void)
{
  ?Com_CheckSyncFrame@@YAXXZ();
}

/*
==============
Com_GameIsPaused
==============
*/

int __fastcall Com_GameIsPaused()
{
  return ?Com_GameIsPaused@@YAHXZ();
}

/*
==============
Com_Frame
==============
*/

void Com_Frame(void)
{
  ?Com_Frame@@YAXXZ();
}

/*
==============
Com_IsAnyLocalServerStartingAsync
==============
*/

bool __fastcall Com_IsAnyLocalServerStartingAsync()
{
  return ?Com_IsAnyLocalServerStartingAsync@@YA_NXZ();
}

/*
==============
Com_StartupVariable
==============
*/

void __fastcall Com_StartupVariable(const char *match)
{
  ?Com_StartupVariable@@YAXPEBD@Z(match);
}

/*
==============
Com_LogPrintMessage
==============
*/

void __fastcall Com_LogPrintMessage(int channel, const char *msg)
{
  ?Com_LogPrintMessage@@YAXHPEBD@Z(channel, msg);
}

/*
==============
Com_Printf
==============
*/

void Com_Printf(int channel, const char *fmt, ...)
{
  ?Com_Printf@@YAXHPEBDZZ(channel, fmt);
}

/*
==============
Com_SyncThreads
==============
*/

void Com_SyncThreads(void)
{
  ?Com_SyncThreads@@YAXXZ();
}

/*
==============
Com_CloseUserFileCon
==============
*/

void Com_CloseUserFileCon(void)
{
  ?Com_CloseUserFileCon@@YAXXZ();
}

/*
==============
Com_SetLocalServerStarting
==============
*/

void __fastcall Com_SetLocalServerStarting(ComServerStartingMode startingMode)
{
  ?Com_SetLocalServerStarting@@YAXW4ComServerStartingMode@@@Z(startingMode);
}

/*
==============
Com_MP_Suspend
==============
*/

void Com_MP_Suspend(void)
{
  ?Com_MP_Suspend@@YAXXZ();
}

/*
==============
Com_Error_impl
==============
*/

void Com_Error_impl(errorParm_t code, const ObfuscateErrorText fmt, ...)
{
  ?Com_Error_impl@@YAXW4errorParm_t@@UObfuscateErrorText@@ZZ(code, fmt);
}

/*
==============
Com_Frame_Check_System_Restart
==============
*/

void Com_Frame_Check_System_Restart(void)
{
  ?Com_Frame_Check_System_Restart@@YAXXZ();
}

/*
==============
Com_ErrorPrintLastErrorMsg
==============
*/

void __fastcall Com_ErrorPrintLastErrorMsg(const char *msg)
{
  ?Com_ErrorPrintLastErrorMsg@@YAXPEBD@Z(msg);
}

/*
==============
Com_RestartForFrontend
==============
*/

void Com_RestartForFrontend(void)
{
  ?Com_RestartForFrontend@@YAXXZ();
}

/*
==============
Com_LogFileOpen
==============
*/

bool __fastcall Com_LogFileOpen()
{
  return ?Com_LogFileOpen@@YA_NXZ();
}

/*
==============
Com_IsContentMemRun
==============
*/

bool __fastcall Com_IsContentMemRun()
{
  return ?Com_IsContentMemRun@@YA_NXZ();
}

/*
==============
Com_GetMaxFPS
==============
*/

int __fastcall Com_GetMaxFPS()
{
  return ?Com_GetMaxFPS@@YAHXZ();
}

/*
==============
Com_IsAnyLocalServerRunning
==============
*/

bool __fastcall Com_IsAnyLocalServerRunning()
{
  return ?Com_IsAnyLocalServerRunning@@YA_NXZ();
}

/*
==============
Com_GeneratingConstBaselines
==============
*/

bool __fastcall Com_GeneratingConstBaselines()
{
  return ?Com_GeneratingConstBaselines@@YA_NXZ();
}

/*
==============
Com_AdjustMaxFPS
==============
*/

void __fastcall Com_AdjustMaxFPS(int *maxFPS)
{
  ?Com_AdjustMaxFPS@@YAXPEAH@Z(maxFPS);
}

/*
==============
Com_SetWeaponInfoMemory
==============
*/

void __fastcall Com_SetWeaponInfoMemory(int source)
{
  ?Com_SetWeaponInfoMemory@@YAXH@Z(source);
}

/*
==============
Com_ErrorEntering
==============
*/

bool __fastcall Com_ErrorEntering()
{
  return ?Com_ErrorEntering@@YA_NXZ();
}

/*
==============
Com_IsLocalServerRestarting
==============
*/

bool __fastcall Com_IsLocalServerRestarting()
{
  return ?Com_IsLocalServerRestarting@@YA_NXZ();
}

/*
==============
CL_Keys_ClearField
==============
*/

void __fastcall CL_Keys_ClearField(field_t *edit)
{
  ?CL_Keys_ClearField@@YAXPEAUfield_t@@@Z(edit);
}

/*
==============
Com_GetLastStackTraceBuffer
==============
*/

const char *__fastcall Com_GetLastStackTraceBuffer()
{
  return ?Com_GetLastStackTraceBuffer@@YAPEBDXZ();
}

/*
==============
Com_SetScriptSettings
==============
*/

void __fastcall Com_SetScriptSettings(scrContext_t *scrContext)
{
  ?Com_SetScriptSettings@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Com_SetLocalizedErrorMessage
==============
*/

void __fastcall Com_SetLocalizedErrorMessage(const char *localizedMessage, const char *localizedTitle)
{
  ?Com_SetLocalizedErrorMessage@@YAXPEBD0@Z(localizedMessage, localizedTitle);
}

/*
==============
Com_GetCommandLine
==============
*/

const char *__fastcall Com_GetCommandLine()
{
  return ?Com_GetCommandLine@@YAPEBDXZ();
}

/*
==============
Com_LogFileClose
==============
*/

void Com_LogFileClose(void)
{
  ?Com_LogFileClose@@YAXXZ();
}

/*
==============
Com_EventLoop_ProcessPacketEvent
==============
*/

void Com_EventLoop_ProcessPacketEvent(void)
{
  ?Com_EventLoop_ProcessPacketEvent@@YAXXZ();
}

/*
==============
Com_ClearErrorMessage
==============
*/

void Com_ClearErrorMessage(void)
{
  ?Com_ClearErrorMessage@@YAXXZ();
}

/*
==============
Sys_Printf
==============
*/

void Sys_Printf(const char *msg, ...)
{
  ?Sys_Printf@@YAXPEBDZZ(msg);
}

/*
==============
Com_IsRunningTestmonkey
==============
*/

int __fastcall Com_IsRunningTestmonkey()
{
  return ?Com_IsRunningTestmonkey@@YAHXZ();
}

/*
==============
Com_PrintMessage
==============
*/

void __fastcall Com_PrintMessage(int channel, const char *msg, int error)
{
  ?Com_PrintMessage@@YAXHPEBDH@Z(channel, msg, error);
}

/*
==============
Com_AllocEvent
==============
*/

void *__fastcall Com_AllocEvent(int size)
{
  return ?Com_AllocEvent@@YAPEAXH@Z(size);
}

/*
==============
Com_UseConstantUserCommandTime
==============
*/

bool __fastcall Com_UseConstantUserCommandTime()
{
  return ?Com_UseConstantUserCommandTime@@YA_NXZ();
}

/*
==============
Com_SendSysErrorToDLog
==============
*/

void __fastcall Com_SendSysErrorToDLog(const char *text)
{
  ?Com_SendSysErrorToDLog@@YAXPEBD@Z(text);
}

/*
==============
Com_EnterError
==============
*/

void Com_EnterError(void)
{
  ?Com_EnterError@@YAXXZ();
}

/*
==============
Com_ParseCommandLine
==============
*/

int __fastcall Com_ParseCommandLine(char *commandLine, char **outLines)
{
  return ?Com_ParseCommandLine@@YAHPEADQEAPEAD@Z(commandLine, outLines);
}

/*
==============
Com_DPrintf
==============
*/

void Com_DPrintf(int channel, const char *fmt, ...)
{
  ?Com_DPrintf@@YAXHPEBDZZ(channel, fmt);
}

/*
==============
Com_AddToString
==============
*/

int __fastcall Com_AddToString(const char *add, char *msg, int len, int maxlen, int mayAddQuotes)
{
  return ?Com_AddToString@@YAHPEBDPEADHHH@Z(add, msg, len, maxlen, mayAddQuotes);
}

/*
==============
Com_WriteConfig_f
==============
*/

void __fastcall Com_WriteConfig_f()
{
  ?Com_WriteConfig_f@@YAXXZ();
}

/*
==============
Com_InitCommandLine
==============
*/

void __fastcall Com_InitCommandLine(const char *commandLine)
{
  ?Com_InitCommandLine@@YAXPEBD@Z(commandLine);
}

/*
==============
Com_GetDecimalDelimiter
==============
*/

char __fastcall Com_GetDecimalDelimiter()
{
  return ?Com_GetDecimalDelimiter@@YADXZ();
}

/*
==============
Com_SetConnectedPacketsAllowed
==============
*/

void __fastcall Com_SetConnectedPacketsAllowed(bool allowed)
{
  ?Com_SetConnectedPacketsAllowed@@YAX_N@Z(allowed);
}

/*
==============
Com_GetTimescaleForSnd
==============
*/

double __fastcall Com_GetTimescaleForSnd()
{
  double result; 

  *(float *)&result = ?Com_GetTimescaleForSnd@@YAMXZ();
  return result;
}

/*
==============
Com_ShutdownFrontEnd
==============
*/

void Com_ShutdownFrontEnd(void)
{
  ?Com_ShutdownFrontEnd@@YAXXZ();
}

/*
==============
Com_IsGameLocalServerRunningOrLoading
==============
*/

bool __fastcall Com_IsGameLocalServerRunningOrLoading()
{
  return ?Com_IsGameLocalServerRunningOrLoading@@YA_NXZ();
}

/*
==============
Com_EnableMissionUnlockCheat
==============
*/
void Com_EnableMissionUnlockCheat()
{
  const dvar_t *v0; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 

  v0 = DVARBOOL_mis_cheat_enabled;
  if ( !DVARBOOL_mis_cheat_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mis_cheat_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    Dvar_SetBool_Internal(DVARBOOL_mis_cheat, 1);
    GlobalModel = LUI_Model_GetGlobalModel();
    ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "frontend.sp.missionsCheat");
    LUI_Model_SetBool(ModelFromPath, 1);
  }
}

/*
==============
CL_Keys_ClearField
==============
*/
void CL_Keys_ClearField(field_t *edit)
{
  memset_0(edit->buffer, 0, sizeof(edit->buffer));
  edit->drawWidth = 256;
  *(_QWORD *)&edit->cursor = 0i64;
}

/*
==============
Com_AddStartupCommands
==============
*/
void Com_AddStartupCommands()
{
  _JBTYPE *Value; 
  int v1; 
  const char **v2; 
  int ControllerFromClient; 
  char dest[1040]; 

  Value = (_JBTYPE *)Sys_GetValue(2);
  if ( setjmp(Value) )
  {
    if ( !com_errorEnteredCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4466, ASSERT_TYPE_ASSERT, "(com_errorEnteredCount)", (const char *)&queryFormat, "com_errorEnteredCount") )
      __debugbreak();
    Com_ErrorCleanup();
  }
  else
  {
    v1 = 0;
    if ( com_numConsoleLines > 0 )
    {
      v2 = (const char **)com_consoleLines;
      do
      {
        if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4474, ASSERT_TYPE_ASSERT, "(com_consoleLines[i])", (const char *)&queryFormat, "com_consoleLines[i]") )
          __debugbreak();
        if ( **v2 )
        {
          Com_sprintf(dest, 0x401ui64, "%s\n", *v2);
          ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
          Cbuf_ExecuteBufferInternal(LOCAL_CLIENT_0, ControllerFromClient, dest, 1, 0);
        }
        ++v1;
        ++v2;
      }
      while ( v1 < com_numConsoleLines );
    }
  }
}

/*
==============
Com_AddToString
==============
*/
__int64 Com_AddToString(const char *add, char *msg, int len, int maxlen, int mayAddQuotes)
{
  int v5; 
  __int64 v7; 
  char v8; 
  __int64 v9; 
  __int64 v10; 

  v5 = 0;
  if ( mayAddQuotes )
  {
    if ( *add )
    {
      if ( maxlen - len > 0 )
      {
        v7 = 0i64;
        do
        {
          v8 = add[v7];
          if ( !v8 )
            break;
          if ( v8 <= 32 )
            goto LABEL_9;
          ++v7;
        }
        while ( v7 < maxlen - len );
      }
    }
    else
    {
LABEL_9:
      v5 = 1;
      if ( len < maxlen )
      {
        v9 = len++;
        msg[v9] = 34;
      }
    }
  }
  v10 = len;
  if ( len < (__int64)maxlen )
  {
    do
    {
      if ( !*add )
        break;
      msg[v10] = *add;
      ++len;
      ++v10;
      ++add;
    }
    while ( v10 < maxlen );
  }
  if ( !v5 || len >= maxlen )
    return (unsigned int)len;
  msg[len] = 34;
  return (unsigned int)(len + 1);
}

/*
==============
Com_AdjustMaxFPS
==============
*/

void __fastcall Com_AdjustMaxFPS(int *maxFPS, double _XMM1_8)
{
  const dvar_t *v2; 

  if ( !maxFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8847, ASSERT_TYPE_ASSERT, "(maxFPS)", (const char *)&queryFormat, "maxFPS") )
    __debugbreak();
  if ( !CL_AllLocalClientsDisconnected() )
  {
    v2 = DVARBOOL_com_userCmdEnableConstantTime;
    if ( !DVARBOOL_com_userCmdEnableConstantTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdEnableConstantTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( !v2->current.enabled )
    {
      __asm
      {
        vmovss  xmm0, cs:?com_timescaleValue@@3MA; float com_timescaleValue
        vxorps  xmm1, xmm1, xmm1
        vucomiss xmm0, xmm1
      }
      if ( !v2->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8863, ASSERT_TYPE_ASSERT, "(com_timescaleValue)", (const char *)&queryFormat, "com_timescaleValue") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, cs:?com_timescaleValue@@3MA; float com_timescaleValue
        vcomiss xmm0, cs:__real@3dcccccd
      }
    }
  }
}

/*
==============
Com_AllocEvent
==============
*/
void *Com_AllocEvent(int size)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4530, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Com_AllocEvent not implemented") )
    __debugbreak();
  return 0i64;
}

/*
==============
Com_AllocateXAnimNodeMemory
==============
*/
void Com_AllocateXAnimNodeMemory(HunkUser *hunkUser, int maxLocalClients, int maxClients, int maxAgents)
{
  int v5; 
  int NodeMemoryAllocationSize; 
  unsigned __int64 FreeReserveAmount; 

  v5 = maxClients + maxAgents - 34;
  if ( v5 < 0 )
    v5 = 0;
  NodeMemoryAllocationSize = XAnimGetNodeMemoryAllocationSize((maxLocalClients + 1) * (58 * v5 + 2860));
  XAnimAllocateAndInitMemory(hunkUser, NodeMemoryAllocationSize);
  FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(hunkUser);
  Com_Printf(10, "GameAllocate: Free hunk memory (Post-XAnim): %zu kb\n", FreeReserveAmount >> 10);
}

/*
==============
Com_AreConnectedPacketsAllowed
==============
*/
bool Com_AreConnectedPacketsAllowed()
{
  return s_allowConnectedPackets != 0;
}

/*
==============
Com_Assert_f
==============
*/
void Com_Assert_f()
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4940, ASSERT_TYPE_ASSERT, "(a)", (const char *)&queryFormat, "a") )
    __debugbreak();
}

/*
==============
Com_AssetLoadUI
==============
*/
void Com_AssetLoadUI(void)
{
  if ( !Com_GameStart_IsRestarting() )
  {
    Com_FrontEnd_UnloadLevelFastFiles();
    Com_FrontEnd_EnterFrontEnd();
    UI_SetMap((const char *)&queryFormat.fmt + 3, (const char *)&queryFormat.fmt + 3);
  }
  CL_Main_StartHunkUsers();
}

/*
==============
Com_CheckError
==============
*/
void Com_CheckError(void)
{
  _JBTYPE *Value; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 3591, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( com_errorEnteredCount )
  {
    Com_EnterError();
    if ( !com_errorEnteredCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 3598, ASSERT_TYPE_ASSERT, "(com_errorEnteredCount)", (const char *)&queryFormat, "com_errorEnteredCount") )
      __debugbreak();
    Com_LeaveError();
    Com_CleanupBeforeLongJump();
    Value = (_JBTYPE *)Sys_GetValue(2);
    longjmp_0(Value, -1);
  }
}

/*
==============
Com_CheckSyncFrame
==============
*/
void Com_CheckSyncFrame(void)
{
  scrContext_t *i; 

  Sys_ProfBeginNamedEvent(0xFF44CCFF, "Com_CheckSyncFrame");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9680, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
    Scr_UpdateRemoteDebugger(i);
  DB_Update();
  Sys_ProfEndNamedEvent();
}

/*
==============
Com_CleanupBeforeLongJump
==============
*/
void Com_CleanupBeforeLongJump()
{
  if ( Sys_IsUpdateScreenThread() )
    Sys_ClearUpdateScreenThread();
  Stream_HandleComError();
  DB_StopSPHotLoadBink();
  if ( DB_IsDoingSPHotLoad() )
    DB_EndSPHotLoad();
  DB_AssetQuery_HandleComError();
  DB_DevFastBoot_Disable();
  DLog_ErrorCleanup();
}

/*
==============
Com_ClearErrorMessage
==============
*/
void Com_ClearErrorMessage(void)
{
  Sys_EnterCriticalSection(CRITSECT_COM_SET_ERROR_MSG);
  Dvar_SetString_Internal(ui_errorMessage, (const char *)&queryFormat.fmt + 3);
  com_errorMessage[0] = 0;
  Sys_LeaveCriticalSection(CRITSECT_COM_SET_ERROR_MSG);
}

/*
==============
Com_ClearGamePadCheat
==============
*/
void Com_ClearGamePadCheat(GamePadCheat *cheat)
{
  if ( cheat )
  {
    *(_QWORD *)&cheat->buttonTimer = 0i64;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 3914, ASSERT_TYPE_ASSERT, "(cheat)", (const char *)&queryFormat, "cheat") )
      __debugbreak();
    MEMORY[0x50] = 0i64;
  }
}

/*
==============
Com_Close
==============
*/
void Com_Close(void)
{
  SvGameModeApplication *ActiveServerApplication; 
  scrContext_t *i; 
  StreamerMemLoan result; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 10072, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_Main_ShutdownClientMemory();
  Com_FrontEnd_ExitFrontEnd();
  Com_FrontEnd_OnComClose();
  Mayhem_Shutdown();
  Com_ShutdownDObj();
  DObjShutdown();
  XAnimShutdown();
  SND_StopSounds(SND_STOP_ALL);
  Mem_LargeLocal_Shutdown();
  Profile_Shutdown();
  Mem_HunkDebug_Reset();
  if ( SvGameModeApplication::HasActiveServerApplication() )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    ActiveServerApplication->FreeServerMemory(ActiveServerApplication);
  }
  PlayercardCache_ShutdownAssetCache();
  DB_ShutdownXAssets();
  DB_MemoryShutdown();
  DB_ShutdownHashLookupMem();
  DB_FreeXAssetPoolMem();
  Stream_Shutdown();
  GameDVR_Shutdown();
  DB_BackendCallbacks_Shutdown();
  CG_Wind_FreeGridMem();
  CL_Transients_OnClosePostUnload();
  PMem_Free(&result, "disk_cache", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
  PatchCollision_Shutdown();
  StaticModels_Shutdown();
  WorldCollision_Shutdown();
  DynEnt_Shutdown();
  Cloth_Shutdown();
  Physics_Shutdown();
  for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
  {
    Scr_Shutdown(i);
    Scr_ShutdownAllocNodeUser(i);
    Scr_ShutdownProgramHunkUser(i);
    NET_ShutdownDebug(i);
  }
  Mem_HunkDebug_Shutdown();
}

/*
==============
Com_CloseUserFileCon
==============
*/
void Com_CloseUserFileCon(void)
{
  if ( s_userFileHandle.handle.handle == -1 )
  {
    Com_PrintError(0, "Com_CloseUserFileCon: Trying to close user file when not open.\n");
  }
  else
  {
    FS_FCloseFile(s_userFileHandle);
    s_userFileHandle.handle.handle = -1i64;
  }
}

/*
==============
Com_CodeTimescale_f
==============
*/

void __fastcall Com_CodeTimescale_f(double _XMM0_8, double _XMM1_8)
{
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND) )
  {
    Com_Printf(0, "This function should not be used in this game mode, use the 'timescale' or 'com_timescale' dvars instead.\n");
  }
  else if ( Cmd_Argc() == 2 )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    _XMM0_8 = Cmd_ArgFloat(1);
    __asm
    {
      vmovaps xmm6, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vcvtss2sd xmm2, xmm6, xmm0
      vmovq   r8, xmm2
      vmovaps xmm6, [rsp+38h+var_18]
    }
    Com_Printf(0, "(DEV-only) timescale rate must be greater than 0 (%f)\n", *(double *)&_XMM2);
  }
  else
  {
    Com_Printf(0, "(DEV-only) timescale <rate>\n");
  }
}

/*
==============
Com_Crash_f
==============
*/
void Com_Crash_f()
{
  MEMORY[0] = 305419896;
}

/*
==============
Com_DPrintf
==============
*/
void Com_DPrintf(int channel, const char *fmt, ...)
{
  char *ThreadPrintBuffer; 
  const dvar_t *v4; 
  char *v5; 
  va_list va; 

  va_start(va, fmt);
  ThreadPrintBuffer = Com_GetThreadPrintBuffer();
  v4 = DCONST_DVARINT_developer;
  v5 = ThreadPrintBuffer;
  if ( !DCONST_DVARINT_developer || (Dvar_CheckFrontendServerThread(DCONST_DVARINT_developer), v4->current.integer) )
  {
    Com_vsprintf_truncate(v5, 0x4000ui64, 0x4000ui64, fmt, va);
    Com_PrintMessageInternal(channel, v5, 0);
  }
}

/*
==============
Com_DoMaxFPSWait
==============
*/

void __fastcall Com_DoMaxFPSWait(double _XMM0_8)
{
  unsigned __int64 v6; 
  unsigned __int64 v9; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "max fps spin");
  __asm
  {
    vmovsd  xmm6, cs:__real@43e0000000000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, cs:?g_maxFpsWaitTime@@3HA; int g_maxFpsWaitTime
    vdivsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcomisd xmm1, xmm6
  }
  v6 = __rdtsc();
  __asm
  {
    vsubsd  xmm1, xmm1, xmm6
    vcomisd xmm1, xmm6
    vcvttsd2si rbx, xmm1
  }
  v9 = v6 + _RBX;
  while ( __rdtsc() < v9 )
    Sys_Sleep(1);
  g_maxFpsWaitTime = 0;
  Sys_ProfEndNamedEvent();
  if ( Sys_IsMainThread() )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(__rdtsc() - v6) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
      vcomisd xmm0, xmm6
      vsubsd  xmm0, xmm0, xmm6
      vcomisd xmm0, xmm6
      vcvttsd2si rcx, xmm0
    }
    CG_Draw_AddFrontendSyncFrameTimeUSec(_RCX);
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
Com_EnterError
==============
*/
void Com_EnterError(void)
{
  ++com_errorEnteringCount;
  if ( Sys_IsMainThread() )
  {
    LUI_CoD_ForceReleaseLock();
    Sys_WaitFrontendWorkerCmds();
    Com_ClientDObjClearSubmitted();
    LUI_CoD_ForceReleaseLockCleanup();
    R_AbortCommandBuffers();
    while ( R_IsLockedGfxImmediateContext() )
      R_UnlockGfxImmediateContext();
    r_glob.allowAddDrawCall = 0;
    g_comErrorRemoteScreenUpdateNesting = R_PopRemoteScreenUpdate();
    R_ClearRemoteScreenUpdateNoClScreenUpdateFlag();
    R_ClearRemoteScreenUpdateAnimatedTextureFlag();
    R_DisableRemoteScreenUpdate(0);
    R_PreAbortRenderCommands();
  }
  Sys_EnterCriticalSection(CRITSECT_COM_ERROR);
  if ( Sys_IsMainThread() )
    R_ReleaseThreadOwnership();
}

/*
==============
Com_ErrorAbort
==============
*/
void Com_ErrorAbort(void)
{
  Sys_Error((const ObfuscateErrorText)&queryFormat, com_errorMessage);
}

/*
==============
Com_ErrorCleanup
==============
*/
void Com_ErrorCleanup()
{
  SvGameModeApplication *ActiveServerApplication; 
  unsigned int v1; 
  unsigned int v2; 
  scrContext_t *i; 
  TaskManager *Instance; 
  __int64 v5; 
  char v6; 
  const char *v7; 
  int v9; 
  errorParm_t v10; 
  errorParm_t v11; 
  GSaveMemory *v12; 
  _QWORD *v13; 
  scrContext_t *j; 
  ClGameModeApplication *ActiveClientApplication; 
  PrivatePartySessionHSM *v16; 
  GameLobbySessionHSM *v17; 
  OnlineChatManager *v18; 
  Online_BandwidthTest *v19; 
  __int64 v20; 
  char finalmsg[16384]; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2835, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  R_PopRemoteScreenUpdate();
  R_ClearRemoteScreenUpdateNoClScreenUpdateFlag();
  R_ClearRemoteScreenUpdateAnimatedTextureFlag();
  R_PreAbortRenderCommands();
  if ( SvGameModeApplication::HasActiveServerApplication() )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    ActiveServerApplication->MainThreadPreSyncErrorCleanup(ActiveServerApplication);
  }
  SND_ResetCanDoPhysicsQuery();
  Com_SyncThreads();
  if ( !com_errorMessage_internal[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2870, ASSERT_TYPE_ASSERT, "(com_errorMessage_internal[0])", (const char *)&queryFormat, "com_errorMessage_internal[0]") )
    __debugbreak();
  Core_strcpy(com_errorMessage, 0x4000ui64, com_errorMessage_internal);
  if ( !com_errorMessage[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2872, ASSERT_TYPE_ASSERT, "(com_errorMessage[0])", (const char *)&queryFormat, "com_errorMessage[0]") )
    __debugbreak();
  g_serverThreadOwnership = 0;
  Mem_Ownership_Reset();
  Mem_LargeLocal_Clear();
  XAnimResetCheckFatalErrorFlag();
  Profile2_Recover();
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = -1;
  R_ComErrorCleanup(1);
  Cmd_ComErrorCleanup();
  Dvar_SetInAutoExec(0);
  v1 = Sys_Milliseconds();
  Com_Printf(16, "BLOCKING ALERT: DB_Cleanup starting at time %d\n", v1);
  SV_GameSP_CancelAndSyncTransients(0);
  CL_PreloadSP_ErrorCleanup();
  DB_ErrorCleanup();
  v2 = Sys_Milliseconds();
  Com_Printf(16, "BLOCKING ALERT: DB_Cleanup complete at time %d\n", v2);
  for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
  {
    Scr_VM_ComErrorCleanup(i);
    Scr_Mem_ErrorCleanup(i);
  }
  Com_GameStart_ClearState();
  Com_FrontEndScene_OnErrorCleanup();
  Com_ScreenShotSaveGame_ComErrorCleanUp();
  if ( s_userFileHandle.handle.handle != -1 )
  {
    FS_Flush(s_userFileHandle);
    if ( s_userFileHandle.handle.handle == -1 )
    {
      Com_PrintError(0, "Com_CloseUserFileCon: Trying to close user file when not open.\n");
    }
    else
    {
      FS_FCloseFile(s_userFileHandle);
      s_userFileHandle.handle.handle = -1i64;
    }
  }
  if ( ProfLoad_IsActive() )
    ProfLoad_Deactivate();
  if ( cl_paused )
    CL_Pause_UnpauseGame();
  Dvar_SetBool_Internal(DVARBOOL_ui_onlineRequired, 0);
  Dvar_SetBool_Internal(DVARBOOL_online_is_devmapping, 0);
  Dvar_ErrorCleanup();
  FX_ErrorCleanup();
  Instance = TaskManager::GetInstance();
  TaskManager::OnComError_ErrorCleanup(Instance);
  TaskBreaker_ErrorCleanup();
  LiveStorage_ErrorCleanup();
  AnalyticsStreamer_MarkCurrentBufferToBeFlushedIfStreamActive(ANALYTICS_STREAMER_LOG_FILE);
  LUI_CoD_ErrorCleanup();
  CL_Screen_ClearFrontendCinematic();
  g_serverThreadOwnership = 1;
  MemFile_Cleanup();
  v5 = 0i64;
  g_serverThreadOwnership = 0;
  do
  {
    v6 = com_errorMessage[v5];
    finalmsg[v5++] = v6;
  }
  while ( v6 );
  if ( errorcode == ERR_DISCONNECT )
  {
    if ( com_errorMessage[0] )
    {
      v7 = SEH_LocalizeTextMessage(com_errorMessage, "error message", LOCMSG_NOERR);
      if ( v7 )
        Core_strcpy_truncate(com_errorMessage, 0x4000ui64, v7);
    }
  }
  else
  {
    SV_Demo_AutoSave(MOVEMENT, com_errorMessage, 0, 1);
    Com_SetErrorMessage(com_errorMessage);
  }
  SV_TransientsSP_ErrorCleanup();
  SV_PreloadSP_ClearZones();
  CL_TransientsWorldMP_ErrorCleanup();
  CL_TransientsInfilMP_ErrorCleanup();
  Com_Fastfile_ErrorCleanup();
  SND_ErrorCleanup();
  __asm { vmovss  xmm0, cs:__real@3f800000; volume }
  SND_SetLevelFadeIn(*(float *)&_XMM0, 0);
  Physics_ResetWorkerError();
  CgSimBulletFirePellet_Reset();
  PhysPerfTrack_ErrorCleanup();
  Cloth_ClearErrorFlag();
  ScriptableSv_DisableLinking(0);
  ScriptableCl_ClearError();
  Com_ResetParseSessions();
  CL_FlushDebugServerData();
  CL_UpdateDebugServerData();
  Com_DObjErrorCleanup();
  if ( errorcode == ERR_DROP )
    Cbuf_Init();
  v9 = Sys_Milliseconds();
  if ( v9 - lastErrorTime >= 100 )
  {
    errorCount = 0;
  }
  else if ( ++errorCount > 3 )
  {
    errorcode = ERR_FATAL;
  }
  lastErrorTime = v9;
  if ( (unsigned int)(errorcode - 1) > 2 )
  {
    if ( com_errorMessage_dlog[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2812, ASSERT_TYPE_ASSERT, "(com_errorMessage_dlog[0] == '\\0')", (const char *)&queryFormat, "com_errorMessage_dlog[0] == '\\0'") )
      __debugbreak();
    Core_strcpy(com_errorMessage_dlog, 0x4000ui64, com_errorMessage_internal);
    Sys_Error((const ObfuscateErrorText)&queryFormat, com_errorMessage);
  }
  CL_Screen_SetInUpdate(0);
  v10 = errorcode;
  if ( errorcode == ERR_SERVERDISCONNECT )
  {
    Com_ShutdownInternal("EXE/DISCONNECTEDFROMOWNLISTENSERVER");
    if ( Live_IsInSystemlinkLobby() )
    {
      Com_Printf(14, "ERR_SERVERDISCONNECT occured in a sytemlink game, cleaning up the private party!\n");
      Party_StopParty(&g_partyData);
    }
    goto LABEL_64;
  }
  if ( errorcode == ERR_DROP )
    goto LABEL_55;
  if ( errorcode != ERR_DISCONNECT )
  {
    LODWORD(v20) = errorcode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 3152, ASSERT_TYPE_ASSERT, "( ( errorcode == ERR_DROP || errorcode == ERR_DISCONNECT ) )", "( errorcode ) = %i", v20) )
      __debugbreak();
    v10 = errorcode;
  }
  if ( v10 == ERR_DROP )
  {
LABEL_55:
    Com_PrintError(16, "********************\nERROR: %s\n********************\n", com_errorMessage);
    if ( cls.uiStarted && !com_fixedConsolePosition )
      CL_ConsoleFixPosition();
  }
  else if ( com_unattendedMode && com_unattendedMode->current.enabled && com_unattendedAllowDropErrors && com_unattendedAllowDropErrors->current.enabled )
  {
    Com_Printf(16, "*^*^*^*^*^*^*^*^*^*^\nDisconnecting: %s\n*^*^*^*^*^*^*^*^*^*^\n", com_errorMessage);
  }
  else
  {
    Com_Printf(16, "********************\nDisconnecting: %s\n********************\n", com_errorMessage);
  }
  Com_ShutdownInternal(finalmsg);
  v11 = errorcode;
  if ( errorcode == ERR_DROP )
  {
    if ( QuitOnError() )
      Com_Quit_f();
    v11 = errorcode;
    if ( errorcode == ERR_DROP )
      goto LABEL_63;
  }
  if ( v11 == ERR_DISCONNECT )
  {
LABEL_63:
    Party_HandleComError(v11, finalmsg);
LABEL_64:
    v11 = errorcode;
  }
  ATClient_ErrorCleanup(v11);
  Migration_Shutdown();
  if ( (_BYTE)GSaveMemory::ms_allocatedType )
  {
    if ( !GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 199, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory )", (const char *)&queryFormat, "ms_gSaveMemory") )
      __debugbreak();
    v12 = GSaveMemory::ms_gSaveMemory;
    GSaveMemory::ms_gSaveMemory->CleanupSaveMemory(GSaveMemory::ms_gSaveMemory);
    v12->ShutdownSaveSystem(v12);
  }
  v13 = NtCurrentTeb()->Reserved1[11];
  com_fixedConsolePosition = 0;
  *(_QWORD *)(v13[tls_index] + 272i64) = 0i64;
  for ( j = ScriptContext_GetFirst(); j; j = ScriptContext_GetNext(j) )
    NET_RestartDebug(j);
  if ( ClGameModeApplication::HasActiveApplicationGameMode() )
  {
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    ActiveClientApplication->ClearWaitingForServer(ActiveClientApplication);
    ActiveClientApplication->ShutdownClientMemory(ActiveClientApplication);
  }
  Com_GameMode_ErrorCleanup();
  v16 = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::ComErrorCleanup(v16);
  v17 = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::ComErrorCleanup(v17);
  OnlineTournament_OnComErrorCleanup(errorcode);
  InviteJoinHSM::HandleComError(&g_invitationHSM);
  v18 = OnlineChatManager::GetInstance();
  OnlineChatManager::ComErrorCleanup(v18, errorcode);
  CL_PlayAgain_ErrorCleanup();
  v19 = Online_BandwidthTest::GetInstance();
  Online_BandwidthTest::ComErrorCleanup(v19);
  if ( --com_errorEnteredCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 3277, ASSERT_TYPE_ASSERT, "(com_errorEnteredCount >= 0)", (const char *)&queryFormat, "com_errorEnteredCount >= 0") )
    __debugbreak();
}

/*
==============
Com_ErrorEntered
==============
*/
bool Com_ErrorEntered()
{
  return com_errorEnteredCount > 0;
}

/*
==============
Com_ErrorEntering
==============
*/
bool Com_ErrorEntering()
{
  return com_errorEnteringCount > 0;
}

/*
==============
Com_ErrorPrintLastErrorMsg
==============
*/
void Com_ErrorPrintLastErrorMsg(const char *msg)
{
  Com_Printf(16, "%s.  LastComError: %s \n", msg, com_errorMessage);
}

/*
==============
Com_Error_Internal
==============
*/
void Com_Error_Internal(errorParm_t code, const char *fmt, char *vargs)
{
  int v4; 
  scrContext_t *i; 
  DLogErrorCode v6; 
  scrContext_t *First; 
  int v8; 
  _JBTYPE *Value; 
  __int64 v10; 

  Com_vsprintf_truncate(com_errorMessage_internal, 0x4000ui64, 0x4000ui64, fmt, vargs);
  if ( !com_errorMessage_internal[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 3357, ASSERT_TYPE_ASSERT, "(com_errorMessage_internal[0])", (const char *)&queryFormat, "com_errorMessage_internal[0]") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_COM_SET_ERROR_MSG);
  Core_strcpy(com_errorMessage, 0x4000ui64, com_errorMessage_internal);
  Sys_LeaveCriticalSection(CRITSECT_COM_SET_ERROR_MSG);
  Sys_Printf("Com_Error(%d): %s\n", (unsigned int)code, com_errorMessage_internal);
  Com_Printf(131088, "Com_Error(%d): %s\n", (unsigned int)code, com_errorMessage_internal);
  CrashReport_AddKVP("LastComError", com_errorMessage_internal);
  if ( com_unattendedMode && com_unattendedMode->current.enabled && (!com_unattendedAllowDropErrors->current.enabled || code != ERR_DISCONNECT) )
  {
    Com_SetErrorMessage(com_errorMessage_internal);
    Sys_Error((const ObfuscateErrorText)&queryFormat, com_errorMessage_internal);
  }
  if ( Sys_IsAnyWorkerContext() )
  {
    Com_SetErrorMessage(com_errorMessage_internal);
    if ( com_errorMessage_dlog[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2812, ASSERT_TYPE_ASSERT, "(com_errorMessage_dlog[0] == '\\0')", (const char *)&queryFormat, "com_errorMessage_dlog[0] == '\\0'") )
      __debugbreak();
    Core_strcpy(com_errorMessage_dlog, 0x4000ui64, com_errorMessage_internal);
    Sys_Error((const ObfuscateErrorText)&queryFormat, ui_errorMessage->current.integer64);
  }
  if ( com_errorEnteringCount > 0 )
  {
    Com_SetErrorMessage(com_errorMessage_internal);
    if ( com_errorMessage_dlog[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2812, ASSERT_TYPE_ASSERT, "(com_errorMessage_dlog[0] == '\\0')", (const char *)&queryFormat, "com_errorMessage_dlog[0] == '\\0'") )
      __debugbreak();
    Core_strcpy(com_errorMessage_dlog, 0x4000ui64, com_errorMessage_internal);
    if ( !ui_errorMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 3400, ASSERT_TYPE_ASSERT, "(ui_errorMessage)", (const char *)&queryFormat, "ui_errorMessage") )
      __debugbreak();
    Sys_Error((const ObfuscateErrorText)&queryFormat, ui_errorMessage->current.integer64);
  }
  Com_EnterError();
  if ( (unsigned int)code <= ERR_DROP )
  {
    if ( IsDebuggerConnected() )
    {
      if ( strcmp_0(com_errorMessage_internal, (const char *)&stru_144001268) )
        __debugbreak();
    }
    else
    {
      Callstack_StackTraceToString(1u, g_stackTrace, 0x8000ui64);
      Sys_Print("STACKBEGIN -------------------------------------------------------------------\n");
      Sys_Print(g_stackTrace);
      Sys_Print("STACKEND ---------------------------------------------------------------------\n");
      Com_LogPrintMessage(1, "STACKBEGIN -------------------------------------------------------------------\n");
      Com_LogPrintMessage(1, g_stackTrace);
      Com_LogPrintMessage(1, "STACKEND ---------------------------------------------------------------------\n");
      FS_FlushLogFile(s_logFileHandle, 0);
      Sys_XB3OutputDebugStringFlush();
    }
  }
  v4 = com_errorEnteredCount;
  if ( com_errorEnteredCount > 0 )
  {
    Com_SetErrorMessage(com_errorMessage_internal);
    if ( com_errorMessage_dlog[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2812, ASSERT_TYPE_ASSERT, "(com_errorMessage_dlog[0] == '\\0')", (const char *)&queryFormat, "com_errorMessage_dlog[0] == '\\0'") )
      __debugbreak();
    Core_strcpy(com_errorMessage_dlog, 0x4000ui64, com_errorMessage_internal);
    if ( !ui_errorMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 3434, ASSERT_TYPE_ASSERT, "(ui_errorMessage)", (const char *)&queryFormat, "ui_errorMessage") )
      __debugbreak();
    Sys_Error((const ObfuscateErrorText)&queryFormat, ui_errorMessage->current.integer64);
    v4 = com_errorEnteredCount;
  }
  if ( v4 > 1 )
    Sys_Error((const ObfuscateErrorText)&stru_14400A698, com_errorMessage_internal);
  if ( code == ERR_SCRIPT )
    StatMon_Warning(STATMON_CLASS_WARNING, STATMON_TYPE_SCRIPTERROR, 3000, "Script Error", 0);
  if ( DB_ShouldComErrorSysError() )
    Sys_Error((const ObfuscateErrorText)&queryFormat, com_errorMessage_internal);
  for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
    Scr_VM_PrintCallstack(i);
  if ( code != ERR_SCRIPT )
  {
    if ( code != ERR_SCRIPT_DROP )
    {
      v6 = DLog_ErrorCode(code);
      DLog_RecordErrorEvent(v6, com_errorMessage_internal, NULL);
    }
    if ( code != ERR_LOCALIZATION )
    {
      if ( code != ERR_SCRIPT_DROP )
      {
        com_fixedConsolePosition = 0;
        goto LABEL_67;
      }
      CL_ConsoleFixPosition();
      SV_Demo_AutoSave(DODGE, com_errorMessage_internal, 0, 1);
LABEL_66:
      code = ERR_DROP;
LABEL_67:
      if ( !++com_errorEnteredCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 3535, ASSERT_TYPE_ASSERT, "(com_errorEnteredCount)", (const char *)&queryFormat, "com_errorEnteredCount") )
        __debugbreak();
      errorcode = code;
      Com_LeaveError();
      Com_CleanupBeforeLongJump();
      Value = (_JBTYPE *)Sys_GetValue(2);
      longjmp_0(Value, -1);
    }
  }
  if ( !com_fixedConsolePosition )
  {
    CL_ConsoleFixPosition();
    if ( code == ERR_SCRIPT )
      SV_Demo_AutoSave(DODGE, com_errorMessage_internal, 0, 1);
  }
  if ( cls.uiStarted )
  {
    Com_SetErrorMessage(com_errorMessage_internal);
    Com_LeaveError();
  }
  else
  {
    First = ScriptContext_GetFirst();
    if ( !First )
      goto LABEL_66;
    while ( !Sys_IsRemoteDebugServer(First) )
    {
      First = ScriptContext_GetNext(First);
      if ( !First )
        goto LABEL_66;
    }
    Sys_LeaveCriticalSection(CRITSECT_COM_ERROR);
    if ( Sys_IsMainThread() )
    {
      R_ComErrorCleanup(0);
      R_PushRemoteScreenUpdate(g_comErrorRemoteScreenUpdateNesting);
    }
    v8 = com_errorEnteringCount;
    if ( com_errorEnteringCount <= 0 )
    {
      LODWORD(v10) = com_errorEnteringCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9776, ASSERT_TYPE_ASSERT, "( ( com_errorEnteringCount > 0 ) )", "( com_errorEnteringCount ) = %i", v10) )
        __debugbreak();
      v8 = com_errorEnteringCount;
    }
    com_errorEnteringCount = v8 - 1;
  }
}

/*
==============
Com_Error_f
==============
*/
void Com_Error_f()
{
  if ( Cmd_Argc() <= 1 )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14400AB20, 163i64);
  else
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14400AAF0, 162i64);
}

/*
==============
Com_Error_impl
==============
*/
void Com_Error_impl(errorParm_t code, const ObfuscateErrorText fmt, ...)
{
  va_list vargs; 

  va_start(vargs, fmt);
  Com_Error_Internal(code, fmt.fmt, vargs);
}

/*
==============
Com_EventLoop
==============
*/

void __fastcall Com_EventLoop(double _XMM0_8)
{
  int v4; 
  int v5; 
  scrContext_t *v6; 
  int v7; 
  int v8; 
  scrContext_t *v9; 
  LocalClientNum_t ClientFromController; 
  LocalClientNum_t Mode; 
  SvGameModeApplication *ActiveServerApplication; 
  __m256i str; 
  sysEvent_t result; 

  Sys_ProfBeginNamedEvent(0xFF44CCFF, "Com_EventLoop");
  while ( 1 )
  {
    _RAX = Sys_GetEvent(&result);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vpextrd rbx, xmm0, 2
      vmovups ymmword ptr [rsp+88h+str], ymm0
    }
    if ( !(_DWORD)_RBX )
      break;
    switch ( (_DWORD)_RBX )
    {
      case 1:
        if ( str.m256i_i64[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4675, ASSERT_TYPE_ASSERT, "(!ev.evPtr)", (const char *)&queryFormat, "!ev.evPtr") )
          __debugbreak();
        Mode = CL_Mgr_GetMode();
        if ( Mode )
          Mode = CL_Mgr_GetClientFromController(str.m256i_i32[0]);
        CL_Keys_Event(Mode, str.m256i_i32[3], str.m256i_i8[16] != 0, str.m256i_u32[1], str.m256i_u8[18], str.m256i_i32[0]);
        break;
      case 2:
        if ( str.m256i_i64[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4690, ASSERT_TYPE_ASSERT, "( !ev.evPtr )", (const char *)&queryFormat, "!ev.evPtr") )
          __debugbreak();
        if ( CL_Mgr_GetMode() )
        {
          ClientFromController = CL_Mgr_GetClientFromController(str.m256i_i32[0]);
          CL_Keys_CharEvent(ClientFromController);
        }
        else
        {
          CL_Keys_CharEvent(LOCAL_CLIENT_0);
        }
        break;
      case 3:
        if ( !str.m256i_i64[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4713, ASSERT_TYPE_ASSERT, "(ev.evPtr)", (const char *)&queryFormat, "ev.evPtr") )
          __debugbreak();
        Sys_EnterCriticalSection(CRITSECT_CBUF);
        v4 = strlen_noncrt((const char *)str.m256i_i64[3]);
        v5 = v4;
        if ( s_cmd_textArray[0].cmdsize + v4 < s_cmd_textArray[0].maxsize )
        {
          memcpy_noncrt(&s_cmd_textArray[0].data[s_cmd_textArray[0].cmdsize], (const void *)str.m256i_i64[3], v4 + 1);
          s_cmd_textArray[0].cmdsize += v5;
          v6 = ScriptContext_Server();
          Scr_MonitorCommand(v6, (const char *)str.m256i_i64[3]);
        }
        else
        {
          Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", (const char *)str.m256i_i64[3]);
        }
        Sys_LeaveCriticalSection(CRITSECT_CBUF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4541, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Com_FreeEvent not implemented") )
          __debugbreak();
        Sys_EnterCriticalSection(CRITSECT_CBUF);
        v7 = strlen_noncrt("\n");
        v8 = v7;
        if ( s_cmd_textArray[0].cmdsize + v7 < s_cmd_textArray[0].maxsize )
        {
          memcpy_noncrt(&s_cmd_textArray[0].data[s_cmd_textArray[0].cmdsize], "\n", v7 + 1);
          s_cmd_textArray[0].cmdsize += v8;
          v9 = ScriptContext_Server();
          Scr_MonitorCommand(v9, "\n");
        }
        else
        {
          Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", "\n");
        }
        Sys_LeaveCriticalSection(CRITSECT_CBUF);
        break;
      default:
        if ( str.m256i_i64[3] )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4734, ASSERT_TYPE_ASSERT, "( !ev.evPtr )", (const char *)&queryFormat, "!ev.evPtr") )
            __debugbreak();
        }
        Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14400AAB0, 160i64, (unsigned int)_RBX);
        break;
    }
  }
  if ( str.m256i_i64[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4667, ASSERT_TYPE_ASSERT, "( !ev.evPtr )", (const char *)&queryFormat, "!ev.evPtr") )
    __debugbreak();
  CL_PacketEvents_Receive();
  if ( SvGameModeApplication::HasActiveServerApplication() )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    ActiveServerApplication->PacketEvent(ActiveServerApplication);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Com_EventLoop_ProcessPacketEvent
==============
*/
void Com_EventLoop_ProcessPacketEvent(void)
{
  SvGameModeApplication *ActiveServerApplication; 

  CL_PacketEvents_Receive();
  if ( SvGameModeApplication::HasActiveServerApplication() )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    ActiveServerApplication->PacketEvent(ActiveServerApplication);
  }
}

/*
==============
Com_ExpandResponseFiles
==============
*/
char Com_ExpandResponseFiles(char *dst, char *dstEnd, const char *commandLine)
{
  const char *i; 
  unsigned int v6; 
  const char *v7; 
  const char *v8; 
  __int64 v9; 
  __int64 v11; 
  signed __int64 v12; 
  int v13; 
  const char *v14; 
  bool v15; 
  const char *v16; 
  bool v17; 
  unsigned __int8 v18; 
  const char *v19; 
  size_t v20; 
  signed __int64 v21; 
  __int64 handle; 
  __int64 v23; 
  char *v24; 
  bool v25; 
  unsigned __int8 v26; 
  char *v27; 
  char *v28; 
  char v29; 
  int v30; 
  unsigned int v31; 
  const char *v32; 
  __int64 v33; 
  __int64 v34; 
  fileHandle_t file; 
  char filename[272]; 

  i = commandLine;
  if ( !commandLine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 6442, ASSERT_TYPE_ASSERT, "(commandLine)", (const char *)&queryFormat, "commandLine") )
    __debugbreak();
  if ( !dst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 6443, ASSERT_TYPE_ASSERT, "(dst)", (const char *)&queryFormat, "dst") )
    __debugbreak();
  if ( dst >= dstEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 6444, ASSERT_TYPE_ASSERT, "(dst < dstEnd)", (const char *)&queryFormat, "dst < dstEnd") )
    __debugbreak();
  v6 = *i;
  v7 = i;
  v8 = i;
  v9 = 0x100002200i64;
  if ( *i )
  {
    do
    {
      if ( v6 == 43 || v6 == 10 )
      {
        v7 = v8;
      }
      else
      {
        if ( v7 && v6 == 64 )
          break;
        if ( v6 > 0x20 || !_bittest64(&v9, (int)v6) )
          v7 = NULL;
      }
      v6 = *++v8;
    }
    while ( v6 );
  }
  if ( !*v8 )
    return 0;
  v11 = 0x100002600i64;
  while ( 1 )
  {
LABEL_23:
    v12 = v8 - i;
    if ( v8 - i + 1 > (unsigned __int64)(dstEnd - dst) )
    {
      LODWORD(v34) = (_DWORD)dstEnd - (_DWORD)dst;
      LODWORD(v33) = v12 + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 19, ASSERT_TYPE_ASSERT, "( textLen+1 ) <= ( outTextSize )", "textLen+1 not in [0, outTextSize]\n\t%u not in [0, %u]", v33, v34) )
        __debugbreak();
    }
    memcpy_0(dst, i, v8 - i);
    dst += v12;
    *dst = 0;
    if ( !*v8 )
      break;
    v13 = v8[1];
    v14 = v8 + 1;
    for ( i = v14; v13; v13 = *++i )
    {
      if ( v13 == 43 )
        break;
      if ( v13 == 10 )
        break;
    }
    v15 = v14 == i;
    if ( v14 > i )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 299, ASSERT_TYPE_ASSERT, "(begin <= end)", (const char *)&queryFormat, "begin <= end") )
        __debugbreak();
      v15 = v14 == i;
    }
    if ( !v15 )
    {
      do
      {
        if ( *v14 > 0x20u )
          break;
        if ( !_bittest64(&v11, *v14) )
          break;
        ++v14;
      }
      while ( v14 != i );
    }
    v16 = i;
    v17 = v14 == i;
    if ( v14 > i )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 314, ASSERT_TYPE_ASSERT, "(begin <= end)", (const char *)&queryFormat, "begin <= end") )
        __debugbreak();
      v17 = v14 == i;
    }
    if ( !v17 )
    {
      do
      {
        v18 = *(v16 - 1);
        v19 = v16 - 1;
        if ( v18 > 0x20u )
          break;
        if ( !_bittest64(&v11, (char)v18) )
          break;
        --v16;
      }
      while ( v14 != v19 );
    }
    v20 = v16 - v14;
    if ( v20 + 1 > 0x104 )
    {
      LODWORD(v34) = 260;
      LODWORD(v33) = v20 + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 19, ASSERT_TYPE_ASSERT, "( textLen+1 ) <= ( outTextSize )", "textLen+1 not in [0, outTextSize]\n\t%u not in [0, %u]", v33, v34) )
        __debugbreak();
    }
    memcpy_0(filename, v14, v20);
    filename[v20] = 0;
    v21 = dstEnd - dst;
    FS_FOpenFileRead(filename, &file);
    handle = file.handle.handle;
    if ( file.handle.handle == -1 )
    {
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144010DA0, 183i64, filename);
      handle = file.handle.handle;
    }
    v23 = FS_Read(dst, dstEnd - dst, (fileHandle_t)handle);
    if ( v23 == v21 )
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144010DD8, 184i64, filename, v21 - 1);
    FS_FCloseFile(file);
    v24 = &dst[v23];
    v25 = dst == &dst[v23];
    if ( dst > &dst[v23] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 314, ASSERT_TYPE_ASSERT, "(begin <= end)", (const char *)&queryFormat, "begin <= end") )
        __debugbreak();
      v25 = dst == v24;
    }
    if ( !v25 )
    {
      do
      {
        v26 = *(v24 - 1);
        v27 = v24 - 1;
        if ( v26 > 0x20u )
          break;
        if ( !_bittest64(&v11, (char)v26) )
          break;
        --v24;
      }
      while ( dst != v27 );
    }
    *v24 = 0;
    v28 = dst;
    while ( v28 != v24 )
    {
      v29 = *v28;
      if ( v28 + 1 == v24 )
        v30 = 0;
      else
        v30 = v28[1];
      if ( v29 == 47 && v30 == 47 )
      {
        while ( v29 != 10 )
        {
          if ( ++v28 == v24 )
            goto LABEL_73;
          v29 = *v28;
        }
      }
      else
      {
        *dst = v29;
        ++v28;
        ++dst;
      }
    }
LABEL_73:
    v31 = *i;
    v32 = i;
    v8 = i;
    if ( *i )
    {
      while ( 1 )
      {
        if ( v31 == 43 || v31 == 10 )
        {
          v32 = v8;
        }
        else
        {
          if ( v32 && v31 == 64 )
            goto LABEL_23;
          if ( v31 > 0x20 || !_bittest64(&v9, (int)v31) )
            v32 = NULL;
        }
        v31 = *++v8;
        if ( !v31 )
          goto LABEL_23;
      }
    }
  }
  if ( dst >= dstEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 6488, ASSERT_TYPE_ASSERT, "(dst < dstEnd)", (const char *)&queryFormat, "dst < dstEnd") )
    __debugbreak();
  *dst = 0;
  return 1;
}

/*
==============
Com_FWTValidate
==============
*/
__int64 Com_FWTValidate()
{
  return 0i64;
}

/*
==============
Com_FWTWatermark
==============
*/
const char *Com_FWTWatermark()
{
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
Com_Frame
==============
*/
void Com_Frame(double a1, double a2)
{
  _JBTYPE *Value; 
  int *v3; 
  __int64 v4; 
  int v5; 
  _DWORD *v6; 
  scrContext_t *i; 
  unsigned __int64 v8; 
  __int64 v9; 
  int v10; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9863, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfSetMarker(0xFF44CCFF, "Com_Frame - Begin");
  Value = (_JBTYPE *)Sys_GetValue(2);
  if ( setjmp(Value) )
  {
    Profile_Recover(1);
    if ( !com_errorEnteredCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9895, ASSERT_TYPE_ASSERT, "(com_errorEnteredCount)", (const char *)&queryFormat, "com_errorEnteredCount") )
      __debugbreak();
  }
  else
  {
    v3 = (int *)Sys_GetValue(0);
    v4 = v3[8914];
    if ( (_DWORD)v4 && *(_QWORD *)&v3[4 * v4 + 8784] > *((_QWORD *)v3 + 261) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 189, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack)", (const char *)&queryFormat, "prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack") )
      __debugbreak();
    if ( (unsigned int)v3[8914] >= 0x20 )
    {
      v10 = 32;
      LODWORD(v9) = v3[8914];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( prof_stack->prof_guardpos ) < (unsigned)( ( sizeof( *array_counter( prof_stack->prof_guardstack ) ) + 0 ) )", "prof_stack->prof_guardpos doesn't index ARRAY_COUNT( prof_stack->prof_guardstack )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v5 = 0;
    if ( v3[8914] > 0 )
    {
      v6 = v3 + 8786;
      do
      {
        if ( *v6 == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 195, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardstack[i].id != id)", (const char *)&queryFormat, "prof_stack->prof_guardstack[i].id != id") )
          __debugbreak();
        ++v5;
        v6 += 4;
      }
      while ( v5 < v3[8914] );
    }
    if ( *((_QWORD *)v3 + 261) < (unsigned __int64)(v3 + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 199, ASSERT_TYPE_ASSERT, "(prof_stack->prof_ppStack >= prof_stack->prof_pStack)", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    v3[4 * v3[8914] + 8786] = 1;
    *(_QWORD *)&v3[4 * v3[8914]++ + 8788] = *((_QWORD *)v3 + 261);
    Sys_ProfBeginNamedEvent(0xFF44CCFF, "Com_CheckSyncFrame");
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9680, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
      Scr_UpdateRemoteDebugger(i);
    DB_Update();
    Sys_ProfEndNamedEvent();
    Com_Frame_Try_Block_Function(a1, a2);
    ++com_frameNumber;
    Profile_Unguard(1);
  }
  CPUTimelineProfiler::MarkFrame(&g_cpuProfiler);
  v8 = Sys_Microseconds();
  CG_Draw_SetFullFrontendFrametimeUSec(v8 - previousFrameTimeUs);
  previousFrameTimeUs = v8;
  if ( com_errorEnteredCount )
  {
    Com_EnterError();
    if ( !com_errorEnteredCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9925, ASSERT_TYPE_ASSERT, "(com_errorEnteredCount)", (const char *)&queryFormat, "com_errorEnteredCount") )
      __debugbreak();
    Com_LeaveError();
    Com_ErrorCleanup();
    if ( s_serverStarting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9931, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerStarting())", (const char *)&queryFormat, "!Com_IsAnyLocalServerStarting()") )
      __debugbreak();
    if ( Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9932, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "!Com_IsAnyLocalServerRunning()") )
      __debugbreak();
    if ( cls.rendererStarted )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9935, ASSERT_TYPE_ASSERT, "(!cls.rendererStarted)", (const char *)&queryFormat, "!cls.rendererStarted") )
        __debugbreak();
    }
    Com_StartHunkUsers();
  }
}

/*
==============
Com_Frame_Check_System_Restart
==============
*/
void Com_Frame_Check_System_Restart(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  char dest[1024]; 

  v0 = DVARBOOL_lui_system_restart_required;
  if ( !DVARBOOL_lui_system_restart_required && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_system_restart_required") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    Dvar_SetBool_Internal(DVARBOOL_lui_system_restart_required, 0);
    memset_0(dest, 0, sizeof(dest));
    v1 = DVARSTR_lui_system_restart_message;
    if ( DVARSTR_lui_system_restart_message )
    {
      Dvar_CheckFrontendServerThread(DVARSTR_lui_system_restart_message);
      Core_strcpy(dest, 0x400ui64, v1->current.string);
      v1 = DVARSTR_lui_system_restart_message;
    }
    Dvar_SetString_Internal(v1, (const char *)&queryFormat.fmt + 3);
    Sys_Restart(dest);
  }
}

/*
==============
Com_Frame_Try_Block_Function
==============
*/

void __fastcall Com_Frame_Try_Block_Function(double _XMM0_8, double _XMM1_8)
{
  const dvar_t *v6; 
  const dvar_t *v7; 
  int i; 
  scrContext_t *j; 
  int v10; 
  ClGameModeApplication *ActiveClientApplication; 
  int v12; 
  const dvar_t *v14; 
  int ControllerFromClient; 
  const dvar_t *v17; 
  int v18; 
  unsigned int v24; 
  int v25; 
  int v26; 
  int v27; 
  unsigned int v28; 
  int v29; 
  __int64 v30; 
  const char *v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  unsigned __int64 v35; 
  int integer; 
  const dvar_t *v42; 
  int v43; 
  int v44; 
  int v45; 
  bool v46; 
  bool v47; 
  SvGameModeApplication *ActiveServerApplication; 
  ComGameModeApplication *ActiveApplication; 
  int k; 
  Online_Commerce *v52; 
  Online_Commerce *Instance; 
  Online_Commerce *v54; 
  const dvar_t *v55; 
  const char *v58; 
  const char *v59; 
  const char *v60; 
  const char *v61; 
  int m; 
  int v63; 
  int n; 
  __int64 v65; 
  __int64 v66; 
  HANDLE CurrentProcess; 
  scrContext_t *ii; 
  unsigned int MaxDevParentScriptVars; 
  unsigned int HWMParentScriptVars; 
  unsigned int NumParentScriptVars; 
  const char *InstanceName; 
  const char *v74; 
  unsigned int MaxDevChildScriptVars; 
  unsigned int HWMChildScriptVars; 
  unsigned int NumChildScriptVars; 
  const char *v78; 
  const char *v79; 
  char *fmt; 
  int msec; 
  unsigned int pdwHandleCount; 
  float sec[2]; 
  char dest[1024]; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  v6 = DVARBOOL_lui_system_restart_required;
  if ( !DVARBOOL_lui_system_restart_required && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_system_restart_required") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    Dvar_SetBool_Internal(DVARBOOL_lui_system_restart_required, 0);
    memset_0(dest, 0, sizeof(dest));
    v7 = DVARSTR_lui_system_restart_message;
    if ( DVARSTR_lui_system_restart_message )
    {
      Dvar_CheckFrontendServerThread(DVARSTR_lui_system_restart_message);
      Core_strcpy(dest, 0x400ui64, v7->current.string);
      v7 = DVARSTR_lui_system_restart_message;
    }
    Dvar_SetString_Internal(v7, (const char *)&queryFormat.fmt + 3);
    Sys_Restart(dest);
  }
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "Com_Frame");
  Profile2_UpdateEntry(25);
  if ( ((unsigned __int8)&dword_14FDE8034 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8034) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8034);
  if ( cmd_args.nesting != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9072, ASSERT_TYPE_ASSERT, "( cmd_args.nesting ) == ( -1 )", "%s == %s\n\t%i, %i", "cmd_args.nesting", "-1", cmd_args.nesting, -1) )
    __debugbreak();
  Profile_ResetThread(1);
  Profile_BeginCSV(0);
  if ( com_fullyInitialized )
  {
    for ( i = 0; i < 2; ++i )
    {
      if ( CL_Mgr_IsClientActive((LocalClientNum_t)i) )
        CL_Keys_UpdateBindingsFile((LocalClientNum_t)i);
    }
  }
  for ( j = ScriptContext_GetFirst(); j; j = ScriptContext_GetNext(j) )
    SetAnimCheck(j, com_animCheck->current.color[0]);
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "Throttle fps");
  v10 = 1;
  if ( ClGameModeApplication::HasActiveApplicationGameMode() )
  {
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    v12 = ActiveClientApplication->GetMaxFPS(ActiveClientApplication);
  }
  else
  {
    v12 = 60;
  }
  LODWORD(sec[1]) = v12;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( !CL_AllLocalClientsDisconnected() )
  {
    v14 = DVARBOOL_com_userCmdEnableConstantTime;
    if ( !DVARBOOL_com_userCmdEnableConstantTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdEnableConstantTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( !v14->current.enabled )
    {
      __asm
      {
        vmovss  xmm0, cs:?com_timescaleValue@@3MA; float com_timescaleValue
        vucomiss xmm0, xmm7
      }
      if ( !v14->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8863, ASSERT_TYPE_ASSERT, "(com_timescaleValue)", (const char *)&queryFormat, "com_timescaleValue") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, cs:?com_timescaleValue@@3MA; float com_timescaleValue
        vcomiss xmm0, cs:__real@3dcccccd
      }
    }
  }
  if ( v12 > 0 )
  {
    v10 = 1000 / v12;
    if ( 1000 / v12 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9134, ASSERT_TYPE_ASSERT, "(minMsec >= 0)", (const char *)&queryFormat, "minMsec >= 0") )
      __debugbreak();
    if ( !v10 )
      v10 = 1;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v17 = DVARBOOL_force_overindulgence_message;
  v18 = ControllerFromClient;
  if ( !DVARBOOL_force_overindulgence_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "force_overindulgence_message") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    LUI_Social_SendKoreaOverIndulgenceMessageEvent(v18, com_overIndulgenceNextWarningHour);
    LUI_CoD_SendOverIndulgenceNotification(LOCAL_CLIENT_0, com_overIndulgenceNextWarningHour);
    Dvar_SetBool_Internal(DVARBOOL_force_overindulgence_message, 0);
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, cs:__real@3495217d
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, cs:com_overIndulgenceNextWarningHour
    vcomiss xmm2, xmm1
  }
  if ( Sys_Milliseconds() >= (unsigned int)com_overIndulengeStartTime )
  {
    if ( Live_IsKoreanAccount(v18) )
    {
      LUI_Social_SendKoreaOverIndulgenceMessageEvent(v18, com_overIndulgenceNextWarningHour);
      LUI_CoD_SendOverIndulgenceNotification(LOCAL_CLIENT_0, com_overIndulgenceNextWarningHour);
    }
    ++com_overIndulgenceNextWarningHour;
  }
  if ( v10 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9147, ASSERT_TYPE_ASSERT, "(minMsec > 0)", (const char *)&queryFormat, "minMsec > 0") )
    __debugbreak();
  v24 = (unsigned __int64)(1431655766i64 * com_lastFrameIndex) >> 32;
  v25 = com_lastFrameIndex++;
  v26 = v25 - 3 * ((v24 >> 31) + v24);
  Profile_Begin(492);
  Com_EventLoop();
  v27 = Sys_Milliseconds();
  v28 = v27;
  v29 = v27 - com_frameTime;
  if ( (int)(v27 - com_frameTime) < 0 )
  {
    com_frameTime = v27;
    v29 = 0;
  }
  v30 = (unsigned int)(v10 - v29);
  g_maxFpsWaitTime = v10 - v29;
  if ( v10 - v29 > 0 )
  {
    v28 = v30 + v27;
    v31 = j_va("max fps spin: %d", v30);
    Sys_ProfSetMarker(0xFF44CCFF, v31);
    v29 = v10;
  }
  else
  {
    g_maxFpsWaitTime = 0;
  }
  v32 = Sys_Microseconds();
  v33 = com_frameTimeMicroSeconds;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( !com_frameTimeMicroSeconds )
    v33 = v32;
  v35 = v32 - v33;
  __asm { vcvtsi2ss xmm0, xmm0, rdi }
  if ( (__int64)(v32 - v33) < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
  __asm { vmulss  xmm8, xmm0, cs:__real@358637bd }
  com_frameTimeMicroSeconds = v32;
  Profile_EndInternal(0i64);
  com_frameTime = v28;
  if ( !Com_FrontEndScene_IsActive() && com_sv_running && com_sv_running->current.enabled && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|WEAPON_LADDER_AIM|0x80) )
  {
    integer = com_maxFrameTime->current.integer;
    if ( v29 < integer )
      integer = v29;
  }
  else
  {
    integer = v29;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm1, xmm0, cs:__real@3a83126f
  }
  msec = integer;
  __asm { vmovss  [rsp+4C8h+sec], xmm1 }
  Com_SmoothFrameTime(v26, v10, &msec, sec);
  Sys_ProfEndNamedEvent();
  v42 = DVARBOOL_com_userCmdEnableSmoothTime;
  if ( !DVARBOOL_com_userCmdEnableSmoothTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdEnableSmoothTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  v43 = msec;
  if ( v42->current.enabled )
    v35 = 1000i64 * msec;
  CL_Input_UpdateCmdTime(v35);
  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    Com_GameMode_UpdateGameMode();
    Com_FastFile_Frame_FrontEnd();
    Com_FrontEndScene_Frame(v43);
  }
  else
  {
    Com_FastFile_Frame_InGame();
  }
  msec = Com_TimeScaleMsec(v43);
  v44 = msec;
  Com_GameStart_LoadFrame(msec);
  v45 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  Cbuf_Execute(LOCAL_CLIENT_0, v45);
  GamerProfile_UpdateSystemDvars();
  v46 = v44 == 0;
  if ( v44 <= 0 )
  {
    v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9304, ASSERT_TYPE_ASSERT, "(msec > 0)", (const char *)&queryFormat, "msec > 0");
    v46 = !v47;
    if ( v47 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+4C8h+sec]
    vcomiss xmm6, xmm7
  }
  if ( v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9305, ASSERT_TYPE_ASSERT, "(sec_base > 0)", (const char *)&queryFormat, "sec_base > 0") )
    __debugbreak();
  RESTRequest_UpdateAll();
  if ( SvGameModeApplication::HasActiveServerApplication() )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    ActiveServerApplication->RunFrame(ActiveServerApplication, v44);
  }
  if ( (_BYTE)ComGameModeApplication::ms_allocType )
  {
    if ( !ComGameModeApplication::ms_gameModeCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_app.h", 48, ASSERT_TYPE_ASSERT, "(ms_gameModeCommon)", (const char *)&queryFormat, "ms_gameModeCommon") )
      __debugbreak();
    ActiveApplication = ComGameModeApplication::GetActiveApplication();
    ActiveApplication->RunFrameHeadless(ActiveApplication, v44);
  }
  AnalyticsStreamer_Frame();
  for ( k = 0; k < 8; ++k )
  {
    if ( Live_IsUserSignedInToLive(k) )
    {
      if ( Live_IsUserSignedInToLive(k) )
      {
        Instance = Online_Commerce::GetInstance();
        if ( Online_Commerce::GetPaidEntitlementTaskState(Instance, k) == ENTITLEMENT_STATE_IDLE )
        {
          v54 = Online_Commerce::GetInstance();
          Online_Commerce::GetPaidEntitlement(v54, k);
        }
      }
    }
    else
    {
      v52 = Online_Commerce::GetInstance();
      Online_Commerce::SetPaidEntitlementTaskState(v52, k, ENTITLEMENT_STATE_IDLE);
    }
  }
  DLog_UpdateSessions();
  DLog_Frame();
  v55 = DVARBOOL_dlog_curl_verbose;
  if ( !DVARBOOL_dlog_curl_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_curl_verbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v55);
  Http_SetVerbose(v55->current.enabled);
  DLog_SocketFrame();
  DLog_Send(0);
  Compass_PrintFrame();
  __asm
  {
    vmovaps xmm2, xmm8; rawSeconds
    vmovaps xmm1, xmm6; sec_base
  }
  CL_Main_RunOncePerClientFrame(v44, *(float *)&_XMM1, *(float *)&_XMM2);
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "pre frame");
  if ( g_launchData.startupText[0] )
  {
    v58 = &g_launchData.startupText[1];
    g_launchData.startupText[255] = 0;
    v59 = SEH_LocalizeTextMessage(&g_launchData.startupText[1], "error message", LOCMSG_NOERR);
    v60 = "MENU/ERROR";
    if ( v59 )
      v58 = v59;
    if ( g_launchData.startupText[0] == 110 )
      v60 = "MENU/NOTICE";
    v61 = SEH_LocalizeTextMessage(v60, "error message", LOCMSG_NOERR);
    Com_SetLocalizedErrorMessage(v58, v61);
    memset_0(g_launchData.startupText, 0, sizeof(g_launchData.startupText));
    XB3SetLaunchData(&g_launchData, 0x998u);
  }
  OnlineError_ReportSystemStartupError();
  Com_EventLoop();
  NetStats_Frame();
  for ( m = 0; m < 2; ++m )
  {
    if ( CL_Mgr_IsClientActive((LocalClientNum_t)m) )
    {
      v63 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)m);
      Cbuf_Execute((LocalClientNum_t)m, v63);
    }
  }
  Sys_WorkerCmds_UpdateClientFrame();
  Com_UpdateAllGamePadCheats(LOCAL_CLIENT_0);
  Sys_ProfEndNamedEvent();
  Profile_Begin(5);
  for ( n = 0; n < 2; ++n )
    CL_Main_ClientFrame((LocalClientNum_t)n);
  Profile_EndInternal(0i64);
  v65 = tls_index;
  if ( (*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & 0x200) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9419, ASSERT_TYPE_ASSERT, "(dvar_allowedModifiedFlags & (1 << 9))", (const char *)&queryFormat, "dvar_allowedModifiedFlags & DVAR_USERINFO") )
    __debugbreak();
  v66 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v65);
  *(_DWORD *)(v66 + 1048) &= ~0x200u;
  if ( SND_ExistsPendingRestore() )
    CL_Main_UpdateSound(0);
  CL_Screen_Update();
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "post screen");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9471, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_Screen_UpdateRumble();
  Stream_UpdateClientFrame();
  Com_EmergencyMemory_Update();
  MemBudget_BudgetFile_UpdateForHUD();
  MemBudget_Poll_Update();
  Com_BootCheck_Update();
  UI_BrowserUpdate((LocalClientNum_t)n);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  DevGui_Update(LOCAL_CLIENT_0, *(float *)&_XMM1);
  BB_Update();
  NET_RemoteDbgHostFrame();
  if ( com_statmon->current.enabled )
  {
    if ( com_fileAccessed )
    {
      StatMon_Warning(STATMON_CLASS_WARNING, STATMON_TYPE_FILEACCESS, 3000, "File Accessed", 0);
      com_fileAccessed = 0;
    }
    dword_14CE8F480 = Sys_Milliseconds();
    pdwHandleCount = 0;
    CurrentProcess = GetCurrentProcess();
    GetProcessHandleCount(CurrentProcess, &pdwHandleCount);
    if ( pdwHandleCount > 0x320 )
    {
      StatMon_Warning(STATMON_CLASS_WARNING, STATMON_TYPE_PROCESS_HANDLES, 3000, "Excessive Process Handle Usage", 0);
      if ( pdwHandleCount > 0x5DC )
        Sys_Error((const ObfuscateErrorText)&stru_1440115A4, "Too many system file handles (>%d)!  Please check for possible leaks", 1500i64);
    }
    for ( ii = ScriptContext_GetFirst(); ii; ii = ScriptContext_GetNext(ii) )
    {
      if ( Scr_WarnParentScriptVarsLimit(ii) )
      {
        MaxDevParentScriptVars = Scr_GetMaxDevParentScriptVars(ii);
        HWMParentScriptVars = Scr_GetHWMParentScriptVars(ii);
        NumParentScriptVars = Scr_GetNumParentScriptVars(ii);
        InstanceName = ScriptContext_GetInstanceName(ii);
        LODWORD(fmt) = MaxDevParentScriptVars;
        v74 = j_va((const char *)&stru_1440115A4.fmt + 4, InstanceName, NumParentScriptVars, HWMParentScriptVars, fmt);
        StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_SCRIPTOBJECTS, 3000, v74, 0);
      }
      if ( Scr_WarnChildScriptVarsLimit(ii) )
      {
        MaxDevChildScriptVars = Scr_GetMaxDevChildScriptVars(ii);
        HWMChildScriptVars = Scr_GetHWMChildScriptVars(ii);
        NumChildScriptVars = Scr_GetNumChildScriptVars(ii);
        v78 = ScriptContext_GetInstanceName(ii);
        LODWORD(fmt) = MaxDevChildScriptVars;
        v79 = j_va("Script Var Usage High (%s): %u in-use, %u HWM, %u limit", v78, NumChildScriptVars, HWMChildScriptVars, fmt);
        StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_SCRIPTVARIABLES, 3000, v79, 0);
      }
    }
  }
  DevMouse::Update(&g_devMouse);
  DLogEvent_ClientPerfSample::Update(&s_clientPerfSampleEvent);
  Profile_EndCSV(0);
  if ( Com_CSVWriting() )
  {
    R_GPU_LogTimers();
    Profile_WriteCSV();
    R_LogGpuPipelineStats();
    Com_CSVEndFrame();
  }
  R_GPU_WriteTimerCounters();
  XB3MemAlloc_VerifyReserveHysteresis();
  Sys_ProfEndNamedEvent();
  NET_Frame();
  SND_EndFrame();
  Profile2_UpdateEntry(25);
  if ( ((unsigned __int64)&dword_14FDE8034 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8034) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8034);
  Sys_ProfEndNamedEvent();
  _R11 = &v89;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
Com_FreeEvent
==============
*/
void Com_FreeEvent(void *ptr)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4541, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Com_FreeEvent not implemented") )
    __debugbreak();
}

/*
==============
Com_FreeWeaponInfoMemory
==============
*/
void Com_FreeWeaponInfoMemory(int source)
{
  if ( (unsigned int)(source - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 10430, ASSERT_TYPE_ASSERT, "((source == 1) || (source == 2))", (const char *)&queryFormat, "(source == WEAPMEMSOURCE_SERVER) || (source == WEAPMEMSOURCE_CLIENT)") )
    __debugbreak();
  if ( source == s_weaponInfoSource )
  {
    s_weaponInfoSource = 0;
    BG_ShutdownWeaponDefFiles();
  }
}

/*
==============
Com_FreeXAnimNodeMemory
==============
*/

void Com_FreeXAnimNodeMemory(void)
{
  XAnimShutdownMemory();
}

/*
==============
Com_Freeze_f
==============
*/

void __fastcall Com_Freeze_f(double _XMM0_8, double _XMM1_8)
{
  unsigned int v6; 

  if ( Cmd_Argc() == 2 )
  {
    __asm
    {
      vmovaps [rsp+48h+var_18], xmm6
      vmovaps [rsp+48h+var_28], xmm7
    }
    _XMM0_8 = Cmd_ArgFloat(1);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovsd  xmm7, cs:__real@3f50624dd2f1a9fc
    }
    v6 = Sys_Milliseconds();
    do
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2sd xmm1, xmm1, eax
        vmulsd  xmm3, xmm1, xmm7
        vcvtss2sd xmm2, xmm6, xmm6
        vcomisd xmm3, xmm2
      }
    }
    while ( Sys_Milliseconds() <= v6 );
    __asm
    {
      vmovaps xmm7, [rsp+48h+var_28]
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    Com_Printf(0, "freeze <seconds>\n");
  }
}

/*
==============
Com_GameIsPaused
==============
*/
_BOOL8 Com_GameIsPaused()
{
  int integer; 

  integer = cl_force_paused->current.integer;
  return CL_Pause_IsGamePaused() || integer;
}

/*
==============
Com_GameMode_DevStartGameMode_f
==============
*/
void Com_GameMode_DevStartGameMode_f()
{
  const char *v0; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    Com_GameMode_DevSetDesiredGameModeStr(v0);
  }
  else
  {
    Com_PrintError(16, "startgamemode failed, missing game mode argument 'SP' 'MP' or 'CP'.\n");
  }
}

/*
==============
Com_GameMode_DevStopGameMode_f
==============
*/
void Com_GameMode_DevStopGameMode_f()
{
  Com_GameMode_SetDesiredGameMode(NONE, 1);
}

/*
==============
Com_GeneratingConstBaselines
==============
*/
bool Com_GeneratingConstBaselines()
{
  const dvar_t *v0; 
  bool result; 

  v0 = DVARBOOL_sv_generateConstBaselines;
  result = 0;
  if ( DVARBOOL_sv_generateConstBaselines )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_sv_generateConstBaselines);
    if ( v0->current.enabled )
      return 1;
  }
  return result;
}

/*
==============
Com_GetBuildVersion
==============
*/
char *Com_GetBuildVersion()
{
  return com_buildVersion;
}

/*
==============
Com_GetCommandLine
==============
*/
char *Com_GetCommandLine()
{
  return g_cmdlineCopy;
}

/*
==============
Com_GetCompileBSPFilename
==============
*/
char *Com_GetCompileBSPFilename(const char *inFilename)
{
  Com_GetBspFilename(filename, 64, inFilename);
  return filename;
}

/*
==============
Com_GetDecimalDelimiter
==============
*/
char Com_GetDecimalDelimiter()
{
  unsigned int unsignedInt; 
  int v1; 
  unsigned __int8 v2; 
  char result; 

  unsignedInt = loc_language->current.unsignedInt;
  if ( unsignedInt > 0x14 )
    return 46;
  v1 = 1311740;
  v2 = _bittest(&v1, unsignedInt);
  result = 44;
  if ( !v2 )
    return 46;
  return result;
}

/*
==============
Com_GetLastStackTraceBuffer
==============
*/
char *Com_GetLastStackTraceBuffer()
{
  return g_stackTrace;
}

/*
==============
Com_GetLocalClientNumForEventOnPort
==============
*/
LocalClientNum_t Com_GetLocalClientNumForEventOnPort(int portIndex)
{
  LocalClientNum_t result; 

  result = CL_Mgr_GetMode();
  if ( result )
    return CL_Mgr_GetClientFromController(portIndex);
  return result;
}

/*
==============
Com_GetMaxFPS
==============
*/
__int64 Com_GetMaxFPS()
{
  ClGameModeApplication *ActiveClientApplication; 

  if ( !ClGameModeApplication::HasActiveApplicationGameMode() )
    return 60i64;
  ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
  return ((__int64 (__fastcall *)(ClGameModeApplication *))ActiveClientApplication->GetMaxFPS)(ActiveClientApplication);
}

/*
==============
Com_GetThreadPrintBuffer
==============
*/
char *Com_GetThreadPrintBuffer()
{
  ThreadContext CurrentThreadContext; 
  __int64 v1; 

  if ( !Sys_HasValidCurrentThreadContext() )
    return com_printMsgBufferUnsafe;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2020, ASSERT_TYPE_ASSERT, "(unsigned)( context ) < (unsigned)( ( sizeof( *array_counter( com_printMsgBuffer ) ) + 0 ) )", "context doesn't index com_printMsgBuffer\n\t%i not in [0, %i)", CurrentThreadContext, 28) )
    __debugbreak();
  return com_printMsgBuffer[v1];
}

/*
==============
Com_GetTimeScale
==============
*/
double Com_GetTimeScale()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND) )
    return Com_GetCodeTimeScale();
  if ( !dev_timescale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2643, ASSERT_TYPE_ASSERT, "(dev_timescale)", (const char *)&queryFormat, "dev_timescale") )
    __debugbreak();
  if ( !com_timescale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2644, ASSERT_TYPE_ASSERT, "(com_timescale)", (const char *)&queryFormat, "com_timescale") )
    __debugbreak();
  _RAX = com_timescale;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmulss  xmm0, xmm0, dword ptr [rax+28h]
  }
  return *(double *)&_XMM0;
}

/*
==============
Com_GetTimescaleForSnd
==============
*/

double __fastcall Com_GetTimescaleForSnd(double _XMM0_8)
{
  if ( com_fixedtime->current.integer )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
    }
  }
  else if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND) )
  {
    if ( !dev_timescale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8430, ASSERT_TYPE_ASSERT, "(dev_timescale)", (const char *)&queryFormat, "dev_timescale") )
      __debugbreak();
    if ( !com_timescale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8431, ASSERT_TYPE_ASSERT, "(com_timescale)", (const char *)&queryFormat, "com_timescale") )
      __debugbreak();
    _RAX = com_timescale;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmulss  xmm0, xmm0, dword ptr [rax+28h]
    }
  }
  else
  {
    *(double *)&_XMM0 = Com_GetCodeTimeScale();
  }
  return *(double *)&_XMM0;
}

/*
==============
Com_GetTimescaleForSv
==============
*/

float __fastcall Com_GetTimescaleForSv(double _XMM0_8)
{
  bool v5; 
  bool v6; 
  bool v7; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  _XMM0_8 = SV_Demo_GetTimeScale();
  __asm { vmovaps xmm6, xmm0 }
  _XMM0_8 = Com_GetCodeTimeScale();
  __asm { vmovaps xmm7, xmm0 }
  v5 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND);
  v6 = !v5;
  if ( v5 )
  {
    if ( !com_timescale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8583, ASSERT_TYPE_ASSERT, "(com_timescale)", (const char *)&queryFormat, "com_timescale") )
      __debugbreak();
    v6 = dev_timescale == NULL;
    if ( !dev_timescale )
    {
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8584, ASSERT_TYPE_ASSERT, "(dev_timescale)", (const char *)&queryFormat, "dev_timescale");
      v6 = !v7;
      if ( v7 )
        __debugbreak();
    }
    _RAX = com_timescale;
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  xmm2, dword ptr [rax+28h]
      vucomiss xmm2, xmm0
    }
    _RAX = dev_timescale;
    __asm { vmovss  xmm1, dword ptr [rax+28h] }
    if ( !v6 )
      goto LABEL_14;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovaps xmm2, xmm0
      vmovaps xmm1, xmm0
    }
  }
  __asm { vucomiss xmm7, xmm0 }
  if ( !v6 )
    goto LABEL_14;
  __asm { vucomiss xmm1, xmm0 }
  if ( !v6 )
    goto LABEL_14;
  __asm { vucomiss xmm6, xmm0 }
  if ( !v6 )
  {
LABEL_14:
    __asm
    {
      vmulss  xmm0, xmm2, xmm7
      vmulss  xmm1, xmm0, xmm1
      vmulss  xmm0, xmm1, xmm6
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
Com_GetUserCommandConstantMsec
==============
*/
__int64 Com_GetUserCommandConstantMsec()
{
  const dvar_t *v0; 

  v0 = DVARINT_com_userCmdConstantMsec;
  if ( !DVARINT_com_userCmdConstantMsec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdConstantMsec") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.unsignedInt;
}

/*
==============
Com_GetXAnimNodeMemorySize
==============
*/
int Com_GetXAnimNodeMemorySize(int maxLocalClients, int maxClients, int maxAgents)
{
  int v3; 

  v3 = maxClients + maxAgents - 34;
  if ( v3 < 0 )
    v3 = 0;
  return XAnimGetNodeMemoryAllocationSize((maxLocalClients + 1) * (58 * v3 + 2860));
}

/*
==============
Com_Init
==============
*/
void Com_Init(char *commandLine)
{
  unsigned int v1; 
  _JBTYPE *Value; 
  unsigned int v3; 
  unsigned __int8 ActiveGameMode; 
  unsigned __int8 pbBuffer[8]; 
  bdRandom v6; 
  bdRandom v7; 
  NTSTATUS v9; 
  int v10; 
  char *commandLinea; 
  __int64 v12; 
  unsigned __int8 *v13; 
  RWLock *v14; 
  unsigned __int8 in[80]; 

  v12 = -2i64;
  commandLinea = commandLine;
  if ( !randomNumGenInit )
  {
    if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
      OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
    randomNumGenInit = 1;
  }
  v9 = BCryptGenRandom_0(s_provider, pbBuffer, 8u, 0);
  if ( !v9 || (v1 = *(_DWORD *)pbBuffer) == 0 && !*(_DWORD *)&pbBuffer[4] )
  {
    bdRandom::bdRandom(&v6);
    bdRandom::nextUBytes(&v6, pbBuffer, 8);
    bdRandom::~bdRandom(&v6);
    v1 = *(_DWORD *)pbBuffer;
  }
  s_timescale_aab = v1;
  s_timescale_set_aab = *(_DWORD *)&pbBuffer[4];
  v10 = 2;
  v13 = pbBuffer;
  memset(pbBuffer, 0, sizeof(pbBuffer));
  v14 = &s_timescaleRWLock;
  InitializeSRWLock((PSRWLOCK)&s_timescaleRWLock);
  s_timescaleRWLock.initialized = -1412623820;
  s_timescaleRWLock.acquireLock = 0;
  s_timescaleRWLock.writeThreadId = 0;
  Value = (_JBTYPE *)Sys_GetValue(2);
  if ( setjmp(Value) )
    Sys_Error((const ObfuscateErrorText)&queryFormat, com_errorMessage);
  else
    Com_Init_Try_Block_Function(commandLinea);
  Com_Init_GameMode_FromCommandLine();
  Com_GameMode_UpdateGameMode();
  if ( !randomNumGenInit )
  {
    if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
      OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
    randomNumGenInit = 1;
  }
  if ( !BCryptGenRandom_0(s_provider, in, 0x4Cu, 0) || (v3 = *(_DWORD *)in) == 0 && !*(_DWORD *)&in[4] )
  {
    bdRandom::bdRandom(&v7);
    bdRandom::nextUBytes(&v7, in, 76);
    bdRandom::~bdRandom(&v7);
    v3 = *(_DWORD *)in;
  }
  s_aab_set_pointer_origin = v3;
  s_aab_get_pointer_origin = *(_DWORD *)&in[4];
  s_aab_set_pointer_prevorigin = *(_DWORD *)&in[8];
  s_aab_get_pointer_prevorigin = *(_DWORD *)&in[12];
  s_aab_set_pointer_iconpos = *(_DWORD *)&in[16];
  s_aab_get_pointer_iconpos = *(_DWORD *)&in[20];
  s_aab_set_pointer_lastpos = *(_DWORD *)&in[24];
  s_aab_get_pointer_lastpos = *(_DWORD *)&in[28];
  s_aab_set_pointer_lastenemypos = *(_DWORD *)&in[32];
  s_aab_get_pointer_lastenemypos = *(_DWORD *)&in[36];
  s_soundorg_aab_X = *(_DWORD *)&in[40];
  s_soundorg_aab_Y = *(_DWORD *)&in[44];
  s_soundorg_aab_Z = *(_DWORD *)&in[48];
  s_soundvoiceorg_aab_X = *(_DWORD *)&in[52];
  s_soundvoiceorg_aab_Y = *(_DWORD *)&in[56];
  s_soundvoiceorg_aab_Z = *(_DWORD *)&in[60];
  s_weaponsoundorg_aab_X = *(_DWORD *)&in[64];
  s_weaponsoundorg_aab_Y = *(_DWORD *)&in[68];
  s_weaponsoundorg_aab_Z = *(_DWORD *)&in[72];
  memset(in, 0, 0x4Cui64);
  InitObfuscationFunctions();
  Com_Init_SetupOnlineDvars();
  CL_Mgr_InitialiseClients();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode )
    CL_Mgr_InitialiseDevClients((GameModeType)ActiveGameMode);
  Com_AddStartupCommands();
  Sys_CheckResumeFromTerminated();
  Com_StartHunkUsers();
  DCache_ResetStartupCount(0);
}

/*
==============
Com_InitCommandLine
==============
*/
void Com_InitCommandLine(const char *commandLine)
{
  if ( !commandLine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 7999, ASSERT_TYPE_ASSERT, "(commandLine)", (const char *)&queryFormat, "commandLine") )
    __debugbreak();
  if ( !Com_ExpandResponseFiles(g_cmdlineCopy, (char *)&com_recommendedSet, commandLine) )
    Core_strcpy(g_cmdlineCopy, 0x8000ui64, commandLine);
}

/*
==============
Com_InitSecureValues
==============
*/
void Com_InitSecureValues(void)
{
  unsigned int v0; 
  bdRandom v1; 
  __int64 pbBuffer; 

  if ( !randomNumGenInit )
  {
    if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
      OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
    randomNumGenInit = 1;
  }
  if ( !BCryptGenRandom_0(s_provider, (PUCHAR)&pbBuffer, 8u, 0) || (v0 = pbBuffer, !pbBuffer) )
  {
    bdRandom::bdRandom(&v1);
    bdRandom::nextUBytes(&v1, (unsigned __int8 *)&pbBuffer, 8);
    bdRandom::~bdRandom(&v1);
    v0 = pbBuffer;
  }
  s_timescale_aab = v0;
  s_timescale_set_aab = HIDWORD(pbBuffer);
  memset(&pbBuffer, 0, sizeof(pbBuffer));
  InitializeSRWLock((PSRWLOCK)&s_timescaleRWLock);
  s_timescaleRWLock.initialized = -1412623820;
  s_timescaleRWLock.acquireLock = 0;
  s_timescaleRWLock.writeThreadId = 0;
}

/*
==============
Com_Init_GameMode_FromCommandLine
==============
*/
void Com_Init_GameMode_FromCommandLine()
{
  int v0; 
  const char **v1; 
  __int64 v2; 
  const char *v3; 
  const char *v4; 
  signed __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  const char *v11; 
  __int64 v12; 
  const char *v13; 
  signed __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  GameModeType v20; 
  const char *v21; 
  __int64 v22; 
  const char *v23; 
  signed __int64 v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  int v29; 
  const char *v30; 
  GameModeType v31; 
  const char *v32; 
  const char *v33; 
  const char *v34; 
  const char *v35; 
  char dest[64]; 

  v0 = 0;
  if ( com_numConsoleLines > 0 )
  {
    v1 = (const char **)com_consoleLines;
    do
    {
      Cmd_TokenizeString(*v1);
      if ( Cmd_Argc() > 1 )
      {
        v2 = 0x7FFFFFFFi64;
        v3 = "coreMode";
        v4 = Cmd_Argv(0);
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v5 = v4 - "coreMode";
        do
        {
          v6 = (unsigned __int8)v3[v5];
          v7 = v2;
          v8 = *(unsigned __int8 *)v3++;
          --v2;
          if ( !v7 )
            break;
          if ( v6 != v8 )
          {
            v9 = v6 + 32;
            if ( (unsigned int)(v6 - 65) > 0x19 )
              v9 = v6;
            v6 = v9;
            v10 = v8 + 32;
            if ( (unsigned int)(v8 - 65) > 0x19 )
              v10 = v8;
            if ( v6 != v10 )
            {
              v11 = "mpMode";
              v12 = 0x7FFFFFFFi64;
              v13 = Cmd_Argv(0);
              if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                __debugbreak();
              v14 = v13 - "mpMode";
              while ( 1 )
              {
                v15 = (unsigned __int8)v11[v14];
                v16 = v12;
                v17 = *(unsigned __int8 *)v11++;
                --v12;
                if ( !v16 )
                  goto LABEL_29;
                if ( v15 != v17 )
                {
                  v18 = v15 + 32;
                  if ( (unsigned int)(v15 - 65) > 0x19 )
                    v18 = v15;
                  v15 = v18;
                  v19 = v17 + 32;
                  if ( (unsigned int)(v17 - 65) > 0x19 )
                    v19 = v17;
                  if ( v15 != v19 )
                    goto LABEL_31;
                }
                if ( !v15 )
                  goto LABEL_29;
              }
            }
          }
        }
        while ( v6 );
LABEL_29:
        if ( Cmd_ArgInt(1) )
        {
          LOBYTE(v20) = 2;
          Com_GameMode_SetDesiredGameMode(v20, 1);
        }
        else
        {
LABEL_31:
          v21 = "aliensMode";
          v22 = 0x7FFFFFFFi64;
          v23 = Cmd_Argv(0);
          if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v24 = v23 - "aliensMode";
          do
          {
            v25 = (unsigned __int8)v21[v24];
            v26 = v22;
            v27 = *(unsigned __int8 *)v21++;
            --v22;
            if ( !v26 )
              break;
            if ( v25 != v27 )
            {
              v28 = v25 + 32;
              if ( (unsigned int)(v25 - 65) > 0x19 )
                v28 = v25;
              v25 = v28;
              v29 = v27 + 32;
              if ( (unsigned int)(v27 - 65) > 0x19 )
                v29 = v27;
              if ( v25 != v29 )
              {
                v30 = Cmd_Argv(0);
                if ( I_stricmp(v30, "cpMode") )
                  goto LABEL_47;
                break;
              }
            }
          }
          while ( v25 );
          if ( Cmd_ArgInt(1) )
          {
            LOBYTE(v31) = 3;
            Com_GameMode_SetDesiredGameMode(v31, 1);
            goto LABEL_55;
          }
LABEL_47:
          v32 = Cmd_Argv(0);
          if ( I_stricmp(v32, "spMode") || !Cmd_ArgInt(1) )
          {
            v33 = Cmd_Argv(0);
            if ( I_stricmp(v33, "noMode") || !Cmd_ArgInt(1) )
            {
              v34 = Cmd_Argv(0);
              if ( !I_stricmp(v34, "devmap") )
              {
                v35 = Cmd_Argv(1);
                Core_strcpy(dest, 0x40ui64, v35);
                I_strlwr(dest);
                Com_GameMode_DevHandleDevMap(dest);
              }
            }
            else
            {
              Com_GameMode_SetDesiredGameMode(NONE, 1);
            }
          }
          else
          {
            Com_GameMode_SetDesiredGameMode(HALF, 1);
          }
        }
      }
LABEL_55:
      Cmd_EndTokenizedString();
      ++v0;
      ++v1;
    }
    while ( v0 < com_numConsoleLines );
  }
}

/*
==============
Com_Init_SetupOnlineDvars
==============
*/
void Com_Init_SetupOnlineDvars()
{
  unsigned __int8 ActiveGameMode; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode) )
  {
    v1 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled )
    {
      v2 = DVARBOOL_systemlink;
      if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( v2->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8095, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DVARBOOL_onlinegame, \"onlinegame\" ) || !Dvar_GetBool_Internal_DebugName( DVARBOOL_systemlink, \"systemlink\" ))", (const char *)&queryFormat, "!Dvar_GetBool( onlinegame ) || !Dvar_GetBool( systemlink )") )
        __debugbreak();
    }
    v3 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled )
    {
      v4 = DVARBOOL_systemlink;
      if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( !v4->current.enabled )
        Dvar_SetBool_Internal(DVARBOOL_onlinegame, 1);
    }
    v5 = DVARBOOL_force_offline_menus;
    if ( !DVARBOOL_force_offline_menus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "force_offline_menus") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
      Dvar_SetBool_Internal(DVARBOOL_systemlink, 1);
    }
  }
  else
  {
    Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
    Dvar_SetBool_Internal(DVARBOOL_systemlink, 0);
    Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
  }
}

/*
==============
Com_Init_Try_Block_Function
==============
*/
void Com_Init_Try_Block_Function(char *commandLine)
{
  char *v4; 
  int v5; 
  const char **v6; 
  int v7; 
  __int64 v8; 
  char *v9; 
  __int64 v10; 
  __int64 v11; 
  char v12; 
  char *i; 
  char *v14; 
  unsigned __int8 v15; 
  char *v16; 
  int j; 
  scrContext_t *k; 
  int v19; 
  int v20; 
  const dvar_t *v21; 
  DB_FileSysInterface *v22; 
  Online_PatchStreamer *Instance; 
  Online_PatchStreamer *v24; 
  const char *CurrentRegionCode; 
  const char *CurrentLanguageCode; 
  unsigned int v27; 
  __int64 v28; 
  int ControllerFromClient; 
  const dvar_t *v32; 
  const char *BuildNumber; 
  scrContext_t *v34; 
  const dvar_t *v35; 
  const char *v36; 
  fileHandle_t file; 
  DDLConfigParams appFuncs; 
  __int64 buffer[4]; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v4 = s_Com_expandedCommandLine;
  if ( !Com_ExpandResponseFiles(s_Com_expandedCommandLine, (char *)s_ddlScratchBuf, commandLine) )
    v4 = commandLine;
  NET_RemoteDbgHostInitLogBuffer();
  Com_Printf(16, "%s %s build %s %s\n", "IW8_DEV", "8.24", "xb3", "Aug  9 2020");
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4093, ASSERT_TYPE_ASSERT, "(commandLine)", (const char *)&queryFormat, "commandLine") )
    __debugbreak();
  v5 = 0;
  v6 = (const char **)com_consoleLines;
  v7 = 0;
  v8 = 0i64;
  v9 = v4;
  v10 = 0x80000000401i64;
  v11 = 0x100002200i64;
  while ( 1 )
  {
    v12 = *v9;
    if ( (unsigned __int8)*v9 <= 0x2Bu )
    {
      if ( _bittest64(&v10, v12) )
        break;
    }
LABEL_23:
    ++v9;
  }
  for ( i = v4; i != v9; ++i )
  {
    if ( (unsigned __int8)*i > 0x20u )
      break;
    if ( !_bittest64(&v11, *i) )
      break;
  }
  if ( i < v9 )
  {
    v14 = v9;
    do
    {
      v15 = *(v14 - 1);
      v16 = v14 - 1;
      if ( v15 > 0x20u )
        break;
      if ( !_bittest64(&v11, (char)v15) )
        break;
      --v14;
    }
    while ( i != v16 );
    *v14 = 0;
    if ( v8 == 128 )
    {
      Com_PrintWarning(16, "Warning: Discarding excess command-line argument (limit=%d): %s\n", 128i64, v4);
      v11 = 0x100002200i64;
    }
    else
    {
      ++v7;
      com_consoleLines[v8++] = i;
    }
  }
  if ( v12 )
  {
    v4 = v9 + 1;
    v10 = 0x80000000401i64;
    goto LABEL_23;
  }
  com_numConsoleLines = v7;
  qsort(com_consoleLines, v7, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)Com_SortStartupCommands);
  SL_Init();
  Swap_Init();
  Cbuf_Init();
  Cmd_Init();
  DLog_InitHookup();
  Com_StartupVariable(NULL);
  Com_StartupDevFastBoot();
  Com_RegisterCommonDvars();
  Com_Devhost_RegisterDvars();
  Com_CSVInit();
  Mem_Virtual_Init();
  Com_Printf(0, "Boot arguments: '");
  for ( j = 0; j < com_numConsoleLines; ++v6 )
  {
    if ( !*v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 7167, ASSERT_TYPE_ASSERT, "(com_consoleLines[i])", (const char *)&queryFormat, "com_consoleLines[i]") )
      __debugbreak();
    if ( **v6 )
      Com_Printf(0, "+%s ", *v6);
    ++j;
  }
  Com_Printf(0, "'\n");
  Com_MemDumpInit();
  Com_FrontEnd_Init();
  ScriptContext_Initialize(SCRIPTINSTANCE_SERVER);
  for ( k = ScriptContext_GetFirst(); k; k = ScriptContext_GetNext(k) )
  {
    Scr_InitProgramHunkUser(k);
    Scr_InitAllocNodeUser(k);
  }
  Mem_LargeLocal_Init();
  Mem_HunkDebug_Init();
  SD_Bootstrap();
  bdRegisterCustomAssertHandler(dwAssertHandler);
  bdCore::init(0);
  DW_InitMemoryFuncs();
  Con_OneTimeInit();
  FS_InitLogThread();
  Sys_InitCmdEvents();
  Float4UnitTest();
  Float8UnitTest();
  SpatialPartition_Tree_Test();
  SpatialPartition_Population_Test();
  BitArrayUnitTest();
  Com_CircularBuffer_UnitTests();
  Com_Printf(7, "begin $init\n");
  v19 = Sys_Milliseconds();
  PMem_BeginAlloc("$init", PMEM_STACK_GAME);
  R_InitBackEndData();
  HttpHeapInit();
  LuaShared_Init();
  CL_Main_InitRef();
  R_InitDevice();
  LUI_CoD_InitMemory();
  LUI_CoD_RegisterRemoteCommands();
  LUI_CoD_RegisterWithExternalSystems();
  Users_Initialize();
  CPUTimelineProfilerView_InitMem();
  PMem_EndAlloc("$init", PMEM_STACK_GAME);
  v20 = Sys_Milliseconds();
  Com_Printf(16, "end $init %d ms\n", (unsigned int)(v20 - v19));
  Com_EmergencyMemory_Init();
  SND_InitMemory();
  Con_InitChannels();
  if ( !g_fileSystem )
    g_fileSystem = DB_DiskFSInitialize();
  Dvar_BeginPermanentRegistration();
  v21 = Dvar_RegisterBool("TQMQKRQPO", 0, 0, "Use IndyFs to stream data from an Indy Image");
  Dvar_EndPermanentRegistration();
  if ( v21->current.enabled )
  {
    v22 = DB_IndyFsInitialize(g_fileSystem);
    if ( v22 )
      g_fileSystem = v22;
    else
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144010F88, 185i64);
  }
  FileStream_Init();
  Com_GameMode_Init();
  Physics_Init();
  Cloth_Init(2u);
  DynEnt_Init();
  WorldCollision_Init();
  StaticModels_Init();
  PatchCollision_Init();
  Sys_InitWorkerThreads();
  CL_Keys_Init();
  CL_InitGamepadCommands();
  CL_InitGamepadAxisBindings();
  PMem_BeginAlloc("disk_cache", PMEM_STACK_GAME);
  Com_DCache_Allocate();
  PMem_EndAlloc("disk_cache", PMEM_STACK_GAME);
  DCache_IncStartupCount();
  FS_InitFilesystem(0, 0);
  NetConstStrings_Init();
  memset_0(&appFuncs, 0, sizeof(appFuncs));
  appFuncs.m_scratchBuffSize = 66668;
  appFuncs.f_assert = DDLAssert;
  appFuncs.m_guidSeed = (char *)&queryFormat.fmt + 3;
  appFuncs.f_print = (void (__fastcall *)(const char *))DDLPrint;
  appFuncs.f_warn = (void (__fastcall *)(const char *))DDLWarn;
  appFuncs.f_err = (void (__fastcall *)(const char *))DDLErr;
  appFuncs.f_doesAssetExist = DDLDoesAssetExist;
  appFuncs.f_getAsset = DDLGetAsset;
  appFuncs.m_scratchBuff = s_ddlScratchBuf;
  if ( !DDL_Init(&appFuncs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 6564, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to init DDL\n") )
    __debugbreak();
  LiveAntiCheat_Init();
  dwMail_Init();
  if ( dwMail_GetHandlerCount() > 0 )
    dwMail_Enable(1);
  MemCard_InitializeSystem();
  Instance = Online_PatchStreamer::GetInstance();
  Online_PatchStreamer::PerformStartupPatchManifestProcessing(Instance);
  v24 = Online_PatchStreamer::GetInstance();
  Online_PatchStreamer::ResetAll(v24, 1);
  CG_VisionSet_ResetAssets();
  CG_Wind_InitGridMem();
  TaskBreaker_Init();
  FenceManager_Init();
  DB_BackendCallbacks_Init();
  OnlineMgr::Init(&g_onlineMgr);
  GameDVR_Init();
  Stream_Init();
  DB_DynamicHeap_OneTimeInit();
  CL_TransientsMP_Init();
  DB_InitThread();
  CurrentRegionCode = RG_GetCurrentRegionCode();
  CrashReport_AddKVP("RegionCode", CurrentRegionCode);
  CurrentLanguageCode = SEH_GetCurrentLanguageCode();
  CrashReport_AddKVP("LanguageCode", CurrentLanguageCode);
  Com_LevelList_StartEnumeration();
  *(_QWORD *)&appFuncs.m_scratchBuffSize = 1i64;
  appFuncs.m_scratchBuff = (void *)"code_post_gfx";
  v27 = 1;
  LODWORD(appFuncs.m_descriptorPath) = 0xFFFF;
  if ( fastfile_loadDevelopment->current.enabled )
  {
    appFuncs.f_accessCallback = (void (__fastcall *)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp))1;
    appFuncs.m_guidSeed = "development";
    v27 = 2;
    LODWORD(appFuncs.f_print) = 0xFFFF;
  }
  v28 = 3i64 * v27;
  *((_QWORD *)&appFuncs.m_scratchBuffSize + v28) = 1i64;
  *((_QWORD *)&appFuncs.m_scratchBuff + v28) = "comms_mp";
  *((_DWORD *)&appFuncs.m_descriptorPath + 2 * v28) = 0xFFFF;
  DB_LoadFastfiles((const DB_FastfileInfo *)&appFuncs, v27 + 1, 1u, 0);
  MemBudget_ContentMemRead_Init();
  MemBudget_BudgetFile_Init();
  MemCard_LargeFileBuffer_Init();
  Stream_ImageRecord_InitConfiguration();
  Com_FastFile_Init();
  Com_FrontEnd_EnterFrontEnd();
  Com_ExecStartupConfigs();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  Cbuf_Execute(LOCAL_CLIENT_0, ControllerFromClient);
  if ( (*(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1048i64) & 2) != 0 )
    Com_RegisterCommonDvars();
  Dvar_BeginPermanentRegistration();
  com_hasHardwareSurveyRun = Dvar_RegisterBool("TPQLNKQRQ", 0, 0, "Run the hardware survey at least once.");
  Dvar_EndPermanentRegistration();
  Com_StartupVariable(NULL);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm0, xmm6; timescale
  }
  Com_SetCodeTimeScale(*(const float *)&_XMM0);
  Live_Init();
  Content_Init();
  LUI_Model_Init();
  BB_Init();
  DLog_Init();
  ProfLoad_Init();
  Cmd_AddCommandInternal("iwmem", IWMem_DumpMem_f, &stru_14CE8F210);
  v32 = DCONST_DVARINT_developer;
  if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( v32->current.integer )
  {
    Cmd_AddCommandInternal("error", Com_Error_f, &stru_14CE8F240);
    Cmd_AddCommandInternal("crash", Com_Crash_f, &stru_14CE8F270);
    Cmd_AddCommandInternal("syserror", Com_SysError_f, &stru_14CE8F2A0);
    Cmd_AddCommandInternal("freeze", (void (__fastcall *)())Com_Freeze_f, &stru_14CE8F2D0);
    Cmd_AddCommandInternal("timescalecode", (void (__fastcall *)())Com_CodeTimescale_f, &stru_14CE8F300);
    Cmd_AddCommandInternal("assert", Com_Assert_f, &stru_14CE8F330);
  }
  Cmd_AddCommandInternal("quit", Com_Quit_f, &stru_14CE8F360);
  Cmd_AddCommandInternal("writeconfig", Com_WriteConfig_f, &stru_14CE8F390);
  Cmd_AddCommandInternal("writedefaults", Com_WriteDefaults_f, &stru_14CE8F3C0);
  Cmd_AddCommandInternal("devstartgamemode", Com_GameMode_DevStartGameMode_f, &stru_14CE8F3F0);
  Cmd_AddCommandInternal("devstopgamemode", Com_GameMode_DevStopGameMode_f, &stru_14CE8F420);
  Cmd_AddCommandInternal("openbrowser", UI_ShowBrowser_f, &stru_14CE8F450);
  CL_Cameraman_RegisterCommands();
  BuildNumber = j_getBuildNumber();
  Com_sprintf(com_buildVersion, 0x100ui64, "%s %s build %s %s %s", "IW8_DEV", "8.24", BuildNumber, "xb3", (const char *)&queryFormat.fmt + 3);
  memset(buffer, 0, sizeof(buffer));
  if ( FS_FOpenFileRead("packageinfo.txt", &file) > 0 )
    FS_Read(buffer, 0x20ui64, file);
  Dvar_SetString_Internal(DVARSTR_package_type, (const char *)buffer);
  FS_FCloseFile(file);
  AnalyticsStreamer_Init();
  Sys_Init();
  Com_Keys_InitLocalizedKeyNames();
  Netchan_Init();
  Com_Devhost_Init_App();
  v34 = ScriptContext_Server();
  Scr_Init(v34);
  Com_SetScriptSettings(v34);
  GScr_Consts_LoadStrings();
  XAnimRegisterDvars();
  XAnimInit();
  XAnimNode_MayhemLink_Init();
  Cloth_XAnimNode_Link_Init();
  MocapStreaming_XAnimNode_Link_Init();
  XAnimMount_Register();
  XAnimAnalogClock_Register();
  XAnimBlendSpace1D_Register();
  XAnimBlendSpace2D_Register();
  XAnim4PtBlend_Register();
  XAnim9PtBlend_Register();
  XAnimToggle_Register();
  XAnimToggleAll_Register();
  XAnimRandom_Register();
  XAnimRandomLoop_Register();
  XAnimLookAt_Register();
  XAnimWobble_Register();
  XAnimScrub1D_Register();
  XAnimTurret_Register();
  XAnimLookAtPlayer_Register();
  XAnimIK_Register();
  XAnimProc_Register();
  XAnimLadderClimb_Register();
  XAnimNode_IKLadder_Register();
  XAnimNode_IKLadderWM_Register();
  Ragdoll_XAnimNode_Register();
  XAnimNode_IKAntiSlide_Register();
  XAnimNullNode_Register();
  DObjInit();
  NET_Init();
  DW_Init();
  RMsg_Init();
  ScrPlace_Init();
  CL_Main_InitOnceForAllClients();
  do
    CL_Main_InitClient((LocalClientNum_t)v5++);
  while ( v5 < 2 );
  com_frameTime = Sys_Milliseconds();
  __asm { vmovss  cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewTimescale, xmm6; SlowMotionCommon g_slowmoCommon }
  g_slowmoCommon.enable = 0;
  g_slowmoCommon.viewEnable = 0;
  Com_StartupVariable(NULL);
  R_InitOnce();
  CL_Main_InitRenderer();
  R_BeginRemoteScreenUpdate();
  if ( cls.soundStarted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 7846, ASSERT_TYPE_ASSERT, "(!cls.soundStarted)", (const char *)&queryFormat, "!cls.soundStarted") )
    __debugbreak();
  SND_Init();
  cls.soundStarted = 1;
  Voice_Init();
  v35 = DVARBOOL_sv_generateConstBaselines;
  if ( !DVARBOOL_sv_generateConstBaselines || (Dvar_CheckFrontendServerThread(DVARBOOL_sv_generateConstBaselines), !v35->current.enabled) )
  {
    if ( !com_hasHardwareSurveyRun->current.enabled )
    {
      s_isFromFirstBootForCallback = 1;
      DLog_RegisterCallbackForSessionUpdate(Com_RunHardwareSurvey);
      Dvar_SetBool_Internal(com_hasHardwareSurveyRun, 1);
    }
  }
  NetConstBaselines_InitDvars();
  Com_GameInfo_Clear();
  LUIBinding::Init();
  NetStats_Init();
  Com_PlayerData_RegisterDvars();
  Com_PlayerData_CacheStatsGroupData();
  PlayercardCache_InitAssetCache();
  Live_InitSigninState();
  Com_DediMapCheck_Init();
  SV_Cmds_RegisterCommonCommands();
  SV_Main_InitServerThread();
  SV_Demo_InitHistorySaveThread();
  G_SaveMemory_InitTaskThread();
  DevMouse::Init(&g_devMouse);
  R_EndRemoteScreenUpdate();
  com_fullyInitialized = 1;
  Com_Printf(16, "--- Common Initialization Complete ---\n");
  Dvar_BeginPermanentRegistration();
  v36 = SEH_SafeTranslateString("PLATFORM/NOMOTD");
  Dvar_SetStringByName("NONSLROPSR", v36);
  Dvar_EndPermanentRegistration();
  Com_DvarDump(6, NULL);
  if ( !Dvar_ValidatePermanentDvars() )
    Sys_Error((const ObfuscateErrorText)&stru_144011130);
  com_overIndulengeStartTime = Sys_Milliseconds();
  com_overIndulgenceNextWarningHour = 1;
  _R11 = &v42;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
Com_IsAnyLocalServerRunning
==============
*/
bool Com_IsAnyLocalServerRunning()
{
  return com_sv_running && com_sv_running->current.enabled;
}

/*
==============
Com_IsAnyLocalServerStarting
==============
*/
bool Com_IsAnyLocalServerStarting()
{
  return s_serverStarting != 0;
}

/*
==============
Com_IsAnyLocalServerStartingAsync
==============
*/
bool Com_IsAnyLocalServerStartingAsync()
{
  return s_serverStarting == 2;
}

/*
==============
Com_IsContentMemRun
==============
*/
char Com_IsContentMemRun()
{
  int v0; 
  const char **i; 
  __int64 v2; 
  const char *v3; 
  const char *v4; 
  signed __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 

  v0 = 0;
  if ( com_numConsoleLines <= 0 )
    return 0;
  for ( i = (const char **)com_consoleLines; ; ++i )
  {
    Cmd_TokenizeString(*i);
    if ( Cmd_Argc() >= 1 )
      break;
LABEL_17:
    Cmd_EndTokenizedString();
    if ( ++v0 >= com_numConsoleLines )
      return 0;
  }
  v2 = 0x7FFFFFFFi64;
  v3 = "contentmem";
  v4 = Cmd_Argv(0);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = v4 - "contentmem";
  do
  {
    v6 = (unsigned __int8)v3[v5];
    v7 = v2;
    v8 = *(unsigned __int8 *)v3++;
    --v2;
    if ( !v7 )
      break;
    if ( v6 != v8 )
    {
      v9 = v6 + 32;
      if ( (unsigned int)(v6 - 65) > 0x19 )
        v9 = v6;
      v6 = v9;
      v10 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v10 = v8;
      if ( v6 != v10 )
        goto LABEL_17;
    }
  }
  while ( v6 );
  Cmd_EndTokenizedString();
  return 1;
}

/*
==============
Com_IsGameLocalServerRunning
==============
*/
bool Com_IsGameLocalServerRunning()
{
  return !Com_FrontEndScene_IsActive() && com_sv_running && com_sv_running->current.enabled;
}

/*
==============
Com_IsGameLocalServerRunningOrLoading
==============
*/
bool Com_IsGameLocalServerRunningOrLoading()
{
  const PartyData *v0; 
  bool result; 

  result = 0;
  if ( !Com_FrontEndScene_IsActive() )
  {
    if ( com_sv_running && com_sv_running->current.enabled )
      return 1;
    v0 = Live_IsInSystemlinkLobby() ? &g_partyData : Lobby_GetPartyData();
    if ( Party_IsLoadingServer(v0) || s_serverStarting )
      return 1;
  }
  return result;
}

/*
==============
Com_IsLocalServerRestarting
==============
*/
bool Com_IsLocalServerRestarting()
{
  return s_serverRestarting != 0;
}

/*
==============
Com_IsRunningTestmonkey
==============
*/
_BOOL8 Com_IsRunningTestmonkey()
{
  return com_testmonkey && com_testmonkey->current.integer;
}

/*
==============
Com_LeaveError
==============
*/
void Com_LeaveError(void)
{
  int v0; 

  Sys_LeaveCriticalSection(CRITSECT_COM_ERROR);
  if ( Sys_IsMainThread() )
  {
    R_ComErrorCleanup(0);
    R_PushRemoteScreenUpdate(g_comErrorRemoteScreenUpdateNesting);
  }
  if ( com_errorEnteringCount > 0 )
  {
    --com_errorEnteringCount;
  }
  else
  {
    v0 = com_errorEnteringCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 9776, ASSERT_TYPE_ASSERT, "( ( com_errorEnteringCount > 0 ) )", "( com_errorEnteringCount ) = %i", v0) )
      __debugbreak();
    --com_errorEnteringCount;
  }
}

/*
==============
Com_LocalizedFloatToString
==============
*/

void __fastcall Com_LocalizedFloatToString(double f, char *buffer, unsigned int maxlen, unsigned int numDecimalPlaces)
{
  unsigned __int64 v7; 
  unsigned int unsignedInt; 
  int v9; 
  __int64 v10; 
  char *i; 
  double v12; 

  __asm { vcvtss2sd xmm0, xmm0, xmm0 }
  v7 = maxlen - 1;
  __asm { vmovsd  [rsp+38h+var_18], xmm0 }
  Com_sprintf(buffer, v7, "%.*f", numDecimalPlaces, v12);
  buffer[v7] = 0;
  unsignedInt = loc_language->current.unsignedInt;
  if ( unsignedInt <= 0x14 )
  {
    v9 = 1311740;
    if ( _bittest(&v9, unsignedInt) )
    {
      v10 = 0i64;
      if ( maxlen )
      {
        for ( i = buffer; *i != 46; ++i )
        {
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= maxlen )
            return;
        }
        buffer[v10] = 44;
      }
    }
  }
}

/*
==============
Com_LogException
==============
*/
void Com_LogException(const _EXCEPTION_POINTERS *context)
{
  const void **ContextRecord; 
  unsigned int ExceptionCode; 
  const char *v4; 
  unsigned __int64 v5; 
  void *ExceptionAddress; 
  unsigned int v7; 
  __int64 v8; 
  unsigned __int64 *v9; 
  unsigned __int64 dest[32]; 

  if ( ((unsigned __int8)&s_handlingException & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_handlingException) )
    __debugbreak();
  if ( !_InterlockedCompareExchange(&s_handlingException, 1, 0) )
  {
    FS_FlushLogFile(s_logFileHandle, 0x3E8u);
    ExceptionCode = context->ExceptionRecord->ExceptionCode;
    if ( ExceptionCode > 0xC0000005 )
    {
      if ( ExceptionCode <= 0xE06D7363 )
      {
        if ( ExceptionCode == -529697949 )
        {
          v4 = "C++ exception (using throw)";
        }
        else
        {
          switch ( ExceptionCode )
          {
            case 0xC0000006:
              v4 = "EXCEPTION_IN_PAGE_ERROR";
              break;
            case 0xC0000008:
              v4 = "EXCEPTION_INVALID_HANDLE";
              break;
            case 0xC000001D:
              v4 = "EXCEPTION_ILLEGAL_INSTRUCTION";
              break;
            case 0xC0000025:
              v4 = "EXCEPTION_NONCONTINUABLE_EXCEPTION";
              break;
            case 0xC0000026:
              v4 = "EXCEPTION_INVALID_DISPOSITION";
              break;
            case 0xC000008C:
              v4 = "EXCEPTION_ARRAY_BOUNDS_EXCEEDED";
              break;
            case 0xC000008D:
              v4 = "EXCEPTION_FLT_DENORMAL_OPERAND";
              break;
            case 0xC000008E:
              v4 = "EXCEPTION_FLT_DIVIDE_BY_ZERO";
              break;
            case 0xC000008F:
              v4 = "EXCEPTION_FLT_INEXACT_RESULT";
              break;
            case 0xC0000090:
              v4 = "EXCEPTION_FLT_INVALID_OPERATION";
              break;
            case 0xC0000091:
              v4 = "EXCEPTION_FLT_OVERFLOW";
              break;
            case 0xC0000092:
              v4 = "EXCEPTION_FLT_STACK_CHECK";
              break;
            case 0xC0000093:
              v4 = "EXCEPTION_FLT_UNDERFLOW";
              break;
            case 0xC0000094:
              v4 = "EXCEPTION_INT_DIVIDE_BY_ZERO";
              break;
            case 0xC0000095:
              v4 = "EXCEPTION_INT_OVERFLOW";
              break;
            case 0xC0000096:
              v4 = "EXCEPTION_PRIV_INSTRUCTION";
              break;
            case 0xC00000FD:
              v4 = "EXCEPTION_STACK_OVERFLOW";
              break;
            default:
              goto LABEL_37;
          }
        }
        goto LABEL_38;
      }
    }
    else
    {
      switch ( ExceptionCode )
      {
        case 0xC0000005:
          v4 = "EXCEPTION_ACCESS_VIOLATION";
          goto LABEL_38;
        case 0x80000001:
          v4 = "EXCEPTION_GUARD_PAGE";
          goto LABEL_38;
        case 0x80000002:
          v4 = "EXCEPTION_DATATYPE_MISALIGNMENT";
          goto LABEL_38;
        case 0x80000003:
          v4 = "EXCEPTION_BREAKPOINT";
          goto LABEL_38;
        case 0x80000004:
          v4 = "EXCEPTION_SINGLE_STEP";
LABEL_38:
          ContextRecord = (const void **)context->ContextRecord;
          v5 = Com_sprintf_truncate(buf_0, 0x2000ui64, "%s at 0x%016p\nRAX 0x%016p\tRCX 0x%016p\tRDX 0x%016p\nRBX 0x%016p\tRSP 0x%016p\tRBP 0x%016p\nRSI 0x%016p\tRDI 0x%016p\tR8  0x%016p\nR9  0x%016p\tR10 0x%016p\tR11 0x%016p\nR12 0x%016p\tR13 0x%016p\tR14 0x%016p\nR15 0x%016p\tIP  0x%016p\n", v4, context->ExceptionRecord->ExceptionAddress, ContextRecord[15], ContextRecord[16], ContextRecord[17], ContextRecord[18], ContextRecord[19], ContextRecord[20], ContextRecord[21], ContextRecord[22], ContextRecord[23], ContextRecord[24], ContextRecord[25], ContextRecord[26], ContextRecord[27], ContextRecord[28], ContextRecord[29], ContextRecord[30], ContextRecord[31]);
          Sys_Print(buf_0);
          if ( s_logFileHandle.handle.handle != -1 )
            FS_Write(buf_0, v5, s_logFileHandle);
          ExceptionAddress = context->ExceptionRecord->ExceptionAddress;
          v7 = Callstack_StackTrace(dest, 0x20u, 1u);
          v8 = 0i64;
          if ( ExceptionAddress && v7 )
          {
            v9 = dest;
            do
            {
              if ( (void *)*v9 == ExceptionAddress )
                break;
              v8 = (unsigned int)(v8 + 1);
              ++v9;
            }
            while ( (unsigned int)v8 < v7 );
          }
          Callstack_ResolveToString(&dest[v8], v7 - v8, buf_0, v5);
          Sys_Print(buf_0);
          if ( s_logFileHandle.handle.handle != -1 )
          {
            FS_Write(buf_0, v5, s_logFileHandle);
            if ( s_logFileHandle.handle.handle != -1 )
            {
              FS_FCloseLogFile(s_logFileHandle);
              s_logFileHandle.handle.handle = -1i64;
            }
          }
          s_handlingException = 0;
          return;
      }
    }
LABEL_37:
    v4 = "Unknown exception";
    goto LABEL_38;
  }
}

/*
==============
Com_LogFileClose
==============
*/
void Com_LogFileClose(void)
{
  if ( s_logFileHandle.handle.handle != -1 )
  {
    FS_FCloseLogFile(s_logFileHandle);
    s_logFileHandle.handle.handle = -1i64;
  }
}

/*
==============
Com_LogFileFlush
==============
*/
void Com_LogFileFlush(void)
{
  FS_FlushLogFile(s_logFileHandle, 0);
  Sys_XB3OutputDebugStringFlush();
}

/*
==============
Com_LogFileOpen
==============
*/
bool Com_LogFileOpen()
{
  return s_logFileHandle.handle.handle != -1;
}

/*
==============
Com_LogPrintMessage
==============
*/
void Com_LogPrintMessage(int channel, const char *msg)
{
  const dvar_t *v3; 
  struct tm *v4; 
  const char *v5; 
  fileHandle_t *v6; 
  const char *v7; 
  char *v8; 
  const char *BuildNumber; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  bool v13; 
  __int64 v14; 
  __time64_t Time[2]; 
  char dest[64]; 
  fileHandle_t filename[32]; 

  if ( channel != 7 )
  {
    v3 = DCONST_DVARINT_logfile;
    if ( DCONST_DVARINT_logfile )
    {
      Dvar_CheckFrontendServerThread(DCONST_DVARINT_logfile);
      if ( v3->current.integer )
      {
        Sys_EnterCriticalSection(CRITSECT_CONSOLE);
        if ( s_logFileHandle.handle.handle != -1 )
          goto LABEL_14;
        if ( Sys_IsMainThread() && !dword_14CE8CB90 )
        {
          dword_14CE8CB90 = 1;
          _time64(Time);
          v4 = _localtime64(Time);
          FS_GetConsoleLogFilename((char *)filename);
          if ( g_launchData.startupText[0] )
          {
            v6 = FS_FOpenFileAppend(filename, v5);
          }
          else
          {
            FS_FRotate((const char *)filename);
            v6 = FS_FOpenTextFileWrite(filename, v7);
          }
          s_logFileHandle.handle.handle = (__int64)v6;
          com_consoleLogOpenFailed = (__int64 *)((char *)&v6->handle.handle + 1) == NULL;
          if ( v6 != (fileHandle_t *)-1i64 )
          {
            Com_Printf(131088, "log_start_time = %d\n", LODWORD(Time[0]));
            Com_Printf(131088, "'%s'\n", g_cmdlineCopy);
            v8 = asctime(v4);
            BuildNumber = j_getBuildNumber();
            Com_Printf(16, "Build %s. Logfile '%s' opened on %s\n", BuildNumber, (const char *)filename, v8);
          }
          dword_14CE8CB90 = 0;
        }
        if ( s_logFileHandle.handle.handle != -1 )
        {
LABEL_14:
          v10 = 8i64 * tls_index;
          if ( *(_BYTE *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v10) + 725i64) )
          {
            v11 = Sys_Milliseconds();
            v12 = Com_sprintf<64>((char (*)[64])dest, "[%10i] ", v11);
            FS_WriteLog(dest, v12, s_logFileHandle);
          }
          v13 = strchr_0(msg, 10) != NULL;
          v14 = -1i64;
          *(_BYTE *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v10) + 725i64) = v13;
          do
            ++v14;
          while ( msg[v14] );
          FS_WriteLog(msg, (unsigned int)v14, s_logFileHandle);
          Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_logfile, "logfile");
        }
        Sys_LeaveCriticalSection(CRITSECT_CONSOLE);
      }
    }
  }
}

/*
==============
Com_MP_Resume
==============
*/
void Com_MP_Resume(void)
{
  if ( !Live_StayInGameOnSuspend() )
  {
    Com_Restart_Internal(0);
    CL_Main_InitRenderer();
    if ( !Com_GameStart_IsRestarting() )
    {
      Com_FrontEnd_UnloadLevelFastFiles();
      Com_FrontEnd_EnterFrontEnd();
      UI_SetMap((const char *)&queryFormat.fmt + 3, (const char *)&queryFormat.fmt + 3);
    }
    CL_Main_StartHunkUsers();
    if ( !Com_FrontEnd_IsInFrontEnd() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2603, ASSERT_TYPE_ASSERT, "(Com_FrontEnd_IsInFrontEnd())", (const char *)&queryFormat, "Com_FrontEnd_IsInFrontEnd()") )
      __debugbreak();
    Com_FrontEndScene_OnProcessResume();
  }
}

/*
==============
Com_MP_Suspend
==============
*/
void Com_MP_Suspend(void)
{
  int i; 
  SvGameModeApplication *ActiveServerApplication; 
  PartyData *PartyData; 

  if ( !Live_StayInGameOnSuspend() )
  {
    Com_SyncThreads();
    Com_FrontEndScene_ShutdownAndDisable();
    for ( i = 0; i < 2; ++i )
      CL_Main_Disconnect((LocalClientNum_t)i);
    if ( SvGameModeApplication::HasActiveServerApplication() )
    {
      ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
      ActiveServerApplication->AllowNetPackets(ActiveServerApplication, 0);
    }
    CL_Main_ShutdownAll(0, 1);
    SV_ServerShutdownCommon("EXE/SERVERKILLED");
    CL_Main_ShutdownClientMemory();
    if ( Com_FrontEnd_IsInFrontEnd() )
    {
      PartyData = Lobby_GetPartyData();
      Party_StopParty(PartyData);
      Party_StopParty(&g_partyData);
    }
  }
}

/*
==============
Com_OpenUserFileCon
==============
*/
void Com_OpenUserFileCon(const char *filename, const char *a2)
{
  if ( s_userFileHandle.handle.handle != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 1843, ASSERT_TYPE_ASSERT, "(!s_userFileHandle)", (const char *)&queryFormat, "!s_userFileHandle") )
    __debugbreak();
  s_userFileHandle.handle.handle = (__int64)FS_FOpenTextFileWrite((fileHandle_t *)filename, a2);
  if ( s_userFileHandle.handle.handle == -1 )
    Com_PrintError(0, "Com_OpenUserFileCon: Couldn't open user file \"%s\" for writing.\n", filename);
}

/*
==============
Com_ParseCommandLine
==============
*/
__int64 Com_ParseCommandLine(char *commandLine, char **outLines)
{
  char *v3; 
  unsigned int v4; 
  char *v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  char *i; 
  char *v11; 
  unsigned __int8 v12; 
  char *v13; 

  v3 = commandLine;
  if ( !commandLine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 4093, ASSERT_TYPE_ASSERT, "(commandLine)", (const char *)&queryFormat, "commandLine") )
    __debugbreak();
  v4 = 0;
  v5 = v3;
  v6 = 0i64;
  v7 = 0x80000000401i64;
  v8 = 0x100002200i64;
  while ( 1 )
  {
    v9 = (unsigned __int8)*v5;
    if ( (unsigned __int8)v9 <= 0x2Bu )
    {
      if ( _bittest64(&v7, v9) )
        break;
    }
LABEL_21:
    ++v5;
  }
  for ( i = v3; i != v5; ++i )
  {
    if ( (unsigned __int8)*i > 0x20u )
      break;
    if ( !_bittest64(&v8, *i) )
      break;
  }
  if ( i < v5 )
  {
    v11 = v5;
    do
    {
      v12 = *(v11 - 1);
      v13 = v11 - 1;
      if ( v12 > 0x20u )
        break;
      if ( !_bittest64(&v8, (char)v12) )
        break;
      --v11;
    }
    while ( i != v13 );
    *v11 = 0;
    if ( v6 == 128 )
    {
      Com_PrintWarning(16, "Warning: Discarding excess command-line argument (limit=%d): %s\n", 128i64, v3);
    }
    else
    {
      ++v4;
      outLines[v6++] = i;
    }
  }
  if ( (_BYTE)v9 )
  {
    v3 = v5 + 1;
    goto LABEL_21;
  }
  return v4;
}

/*
==============
Com_PrintError
==============
*/
void Com_PrintError(int channel, const char *fmt, ...)
{
  char *ThreadPrintBuffer; 
  const char *v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 
  const char *v8; 
  int v9; 
  bool v10; 
  va_list va; 

  va_start(va, fmt);
  ThreadPrintBuffer = Com_GetThreadPrintBuffer();
  v4 = I_stristr(fmt, "error");
  v5 = "^1Error: ";
  if ( v4 )
    v5 = "^1";
  Core_strcpy(ThreadPrintBuffer, 0x4000ui64, v5);
  v6 = -1i64;
  v7 = -1i64;
  do
    ++v7;
  while ( ThreadPrintBuffer[v7] );
  v8 = &ThreadPrintBuffer[v7];
  v9 = Com_vsprintf_truncate(&ThreadPrintBuffer[v7], 0x4000 - v7, 0x4000 - v7, fmt, va);
  v10 = v9 <= 0;
  if ( v9 < 0 )
  {
    do
      ++v6;
    while ( v8[v6] );
    v9 = v6;
    v10 = (int)v6 <= 0;
  }
  if ( !v10 )
    Com_MapLoadErrors_AddMapLoadError(v8, v9);
  Com_PrintMessageInternal(channel, ThreadPrintBuffer, 3);
  if ( cls.uiStarted )
  {
    if ( !com_fixedConsolePosition )
      CL_ConsoleFixPosition();
  }
}

/*
==============
Com_PrintHexDump
==============
*/
void Com_PrintHexDump(int channel, const void *data, unsigned int dataSize)
{
  char *v3; 
  unsigned int v6; 
  unsigned __int64 v8; 
  __int64 v9; 
  __int64 v11; 
  unsigned __int64 v12; 
  __int128 v13; 
  char v14; 
  char v15[2]; 
  char v16; 

  v3 = &v16;
  __asm { vmovups xmm0, xmmword ptr cs:a0123456789abcd_6; "0123456789ABCDEF" }
  v14 = a0123456789abcd_6[16];
  v6 = 1;
  v8 = (unsigned __int64)*(unsigned __int8 *)data >> 4;
  v9 = *(_BYTE *)data & 0xF;
  __asm { vmovups [rsp+468h+var_448], xmm0 }
  v15[0] = *((_BYTE *)&v13 + v8);
  v15[1] = *((_BYTE *)&v13 + v9);
  if ( dataSize != 1 )
  {
    do
    {
      if ( (v6 & 0x1F) != 0 )
      {
        if ( (v6 & 0xF) == 0 )
          *v3++ = 32;
        if ( (v6 & 3) == 0 )
          *v3++ = 32;
      }
      else
      {
        *(_WORD *)v3 = 10;
        Com_Printf(channel, (const char *)&queryFormat, v15);
        v3 = v15;
        if ( !(_BYTE)v6 )
          Com_Printf(channel, "\n");
        if ( (v6 & 0x3FF) == 0 )
          Com_Printf(channel, "\n");
      }
      v11 = v6++;
      v12 = *((unsigned __int8 *)data + v11);
      *v3 = *((_BYTE *)&v13 + (v12 >> 4));
      v3[1] = *((_BYTE *)&v13 + (v12 & 0xF));
      v3 += 2;
    }
    while ( v6 != dataSize );
  }
  *(_WORD *)v3 = 10;
  Com_Printf(channel, (const char *)&queryFormat, v15);
}

/*
==============
Com_PrintMessage
==============
*/

void __fastcall Com_PrintMessage(int channel, const char *msg, int error)
{
  Com_PrintMessageInternal(channel, msg, error);
}

/*
==============
Com_PrintMessageInternal
==============
*/
void Com_PrintMessageInternal(const int channelAndFlags, const char *msg, const int error)
{
  int v3; 
  const char *v4; 
  int flags; 
  unsigned __int64 v6; 
  scrContext_t *v7; 
  bool IsUTF8String; 
  const char *v9; 
  bool v10; 
  bool IsChannelVisible; 
  bool v12; 
  _DebugMessage message; 
  _PrintMessage v14; 

  v3 = (unsigned __int16)channelAndFlags;
  v4 = msg;
  flags = channelAndFlags & 0xFFFF0000 | ((error & 3) << 6);
  if ( (channelAndFlags & 0x10000) == 0 || s_userFileHandle.handle.handle == -1 )
  {
    BB_PrintConsoleLine(msg);
    if ( v3 != 6 )
    {
      v7 = ScriptContext_Server();
      if ( Sys_IsRemoteDebugServer(v7) )
      {
        if ( (unsigned int)(v3 - 2) <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 1930, ASSERT_TYPE_ASSERT, "(!Con_IsNotifyChannel( channel ))", (const char *)&queryFormat, "!Con_IsNotifyChannel( channel )") )
          __debugbreak();
        if ( Sys_DebugSocketReady(v7) )
        {
          _DebugMessage::_DebugMessage(&message);
          _PrintMessage::_PrintMessage(&v14);
          message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_PRINT_MESSAGE;
          message.scrreadfile = (const _ScrReadFile *)&v14;
          v14.msg = v4;
          Sys_WriteDebugSocketMessage(v7, &message);
        }
      }
      Com_DevhostWriteToLog(v3, v4);
      if ( (unsigned int)(v3 - 2) <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 1944, ASSERT_TYPE_ASSERT, "(!Con_IsNotifyChannel( channel ))", (const char *)&queryFormat, "!Con_IsNotifyChannel( channel )") )
        __debugbreak();
      IsUTF8String = UI_IsUTF8String(v4);
      v9 = "(print message is not utf-8)";
      if ( IsUTF8String )
        v9 = v4;
      CL_ConsolePrint(LOCAL_CLIENT_0, v3, v9, 0, 0, flags);
      if ( Con_IsChannelVisible(CON_DEST_CONSOLE, v3, flags) && (!com_unattendedMode || !com_unattendedMode->current.enabled) )
        NET_RemoteDbgHostWriteToLog(v3, v4);
    }
    if ( *v4 == 94 && v4[1] )
      v4 += 2;
    v10 = com_filter_output && com_filter_output->current.enabled;
    if ( v3 != 6 )
    {
      IsChannelVisible = Con_IsChannelVisible(CON_DEST_CONSOLE, v3, flags);
      if ( !v10 || IsChannelVisible )
        Sys_Print(v4);
    }
    v12 = Con_IsChannelVisible(CON_DEST_FILE, v3, flags);
    if ( !v10 || v12 )
      Com_LogPrintMessage(v3, v4);
  }
  else
  {
    v6 = -1i64;
    do
      ++v6;
    while ( v4[v6] );
    FS_Write(v4, v6, s_userFileHandle);
  }
}

/*
==============
Com_PrintNoFormat
==============
*/
void Com_PrintNoFormat(int channel, const char *msg)
{
  Com_PrintMessageInternal(channel, msg, 0);
}

/*
==============
Com_PrintStackTrace
==============
*/
void Com_PrintStackTrace(void)
{
  Callstack_StackTraceToString(1u, g_stackTrace, 0x8000ui64);
  Sys_Print("STACKBEGIN -------------------------------------------------------------------\n");
  Sys_Print(g_stackTrace);
  Sys_Print("STACKEND ---------------------------------------------------------------------\n");
  Com_LogPrintMessage(1, "STACKBEGIN -------------------------------------------------------------------\n");
  Com_LogPrintMessage(1, g_stackTrace);
  Com_LogPrintMessage(1, "STACKEND ---------------------------------------------------------------------\n");
  FS_FlushLogFile(s_logFileHandle, 0);
  Sys_XB3OutputDebugStringFlush();
}

/*
==============
Com_PrintWarning
==============
*/
void Com_PrintWarning(int channel, const char *fmt, ...)
{
  char *ThreadPrintBuffer; 
  __int64 v4; 
  va_list va; 

  va_start(va, fmt);
  ThreadPrintBuffer = Com_GetThreadPrintBuffer();
  Core_strcpy(ThreadPrintBuffer, 0x4000ui64, "^3");
  v4 = -1i64;
  do
    ++v4;
  while ( ThreadPrintBuffer[v4] );
  Com_vsprintf_truncate(&ThreadPrintBuffer[v4], 0x4000 - v4, 0x4000 - v4, fmt, va);
  Com_PrintMessageInternal(channel, ThreadPrintBuffer, 2);
}

/*
==============
Com_Printf
==============
*/
void Com_Printf(int channel, const char *fmt, ...)
{
  char *ThreadPrintBuffer; 
  va_list va; 

  va_start(va, fmt);
  ThreadPrintBuffer = Com_GetThreadPrintBuffer();
  Com_vsprintf_truncate(ThreadPrintBuffer, 0x4000ui64, 0x4000ui64, fmt, va);
  Com_PrintMessageInternal(channel, ThreadPrintBuffer, 0);
}

/*
==============
Com_Printf_NoFilter
==============
*/
void Com_Printf_NoFilter(const char *fmt, ...)
{
  char *ThreadPrintBuffer; 
  va_list va; 

  va_start(va, fmt);
  ThreadPrintBuffer = Com_GetThreadPrintBuffer();
  Com_vsprintf_truncate(ThreadPrintBuffer, 0x4000ui64, 0x4000ui64, fmt, va);
  Com_PrintMessageInternal(0, ThreadPrintBuffer, 0);
}

/*
==============
Com_Quit_f
==============
*/
void Com_Quit_f(void)
{
  scrContext_t *i; 
  scrContext_t *j; 
  PartyData *PartyData; 
  TaskManager *Instance; 
  int k; 
  int ControllerFromClient; 
  SvGameModeApplication *ActiveServerApplication; 
  scrContext_t *m; 
  _DebugMessage message; 
  _ScrQuit v9; 
  StreamerMemLoan result; 

  com_isQuitting = 1;
  Com_Printf(0, "quitting...\n");
  for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
  {
    if ( Sys_IsRemoteDebugServer(i) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ScrQuit::_ScrQuit(&v9);
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_SCR_QUIT;
      message.scrreadfile = (const _ScrReadFile *)&v9;
      Sys_WriteDebugSocketMessage(i, &message);
      Scr_UpdateDebugger(i);
    }
  }
  if ( Sys_IsMainThread() )
  {
    Sys_WaitFrontendWorkerCmds();
    Com_ClientDObjClearSubmitted();
    R_AbortCommandBuffers();
    while ( R_IsLockedGfxImmediateContext() )
      R_UnlockGfxImmediateContext();
    r_glob.allowAddDrawCall = 0;
    R_PopRemoteScreenUpdate();
    R_PreAbortRenderCommands();
    R_ReleaseThreadOwnership();
  }
  Com_SyncThreads();
  for ( j = ScriptContext_GetFirst(); j; j = ScriptContext_GetNext(j) )
    Scr_Cleanup(j);
  Com_FrontEndScene_ShutdownAndDisable();
  if ( !g_serverThreadOwnership )
  {
    GScr_Shutdown();
    if ( !com_errorEnteredCount )
    {
      PartyData = Lobby_GetPartyData();
      Voice_ClearRemoteTalkers(PartyData);
      Voice_ClearRemoteTalkers(&g_partyData);
      RESTRequest_CancelAll_MainThreadTasks();
      DB_CancelLoadFastfilesByZoneFlags(0x3F00000u);
      Instance = TaskManager::GetInstance();
      TaskManager::CancelAll(Instance, 0);
      for ( k = 0; k < 2; ++k )
      {
        if ( CL_Mgr_IsClientActive((LocalClientNum_t)k) )
        {
          ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)k);
          Live_DisconnectFromWebServices(ControllerFromClient);
          CL_Main_ShutdownClient((LocalClientNum_t)k);
        }
      }
      CL_Main_ShutdownOnceForAllClients();
      FakeLag_Shutdown();
      SV_ServerShutdownCommon("EXE/SERVERKILLED");
      DLog_Shutdown();
      CL_Main_ShutdownClientMemory();
      Nav_FreeNavPower();
      LiveAntiCheat_Shutdown();
      dwMail_EmptyHandlerList();
      dwMail_Shutdown();
      LiveCommon_Shutdown();
      CL_Transients_OnClosePreUnload();
      StaticModels_RemoveClipMap(&cm);
      CL_Main_ShutdownRef();
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 10072, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      CL_Main_ShutdownClientMemory();
      Com_FrontEnd_ExitFrontEnd();
      Com_FrontEnd_OnComClose();
      Mayhem_Shutdown();
      Com_ShutdownDObj();
      DObjShutdown();
      XAnimShutdown();
      SND_StopSounds(SND_STOP_ALL);
      Mem_LargeLocal_Shutdown();
      Profile_Shutdown();
      Mem_HunkDebug_Reset();
      if ( SvGameModeApplication::HasActiveServerApplication() )
      {
        ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
        ActiveServerApplication->FreeServerMemory(ActiveServerApplication);
      }
      PlayercardCache_ShutdownAssetCache();
      DB_ShutdownXAssets();
      DB_MemoryShutdown();
      DB_ShutdownHashLookupMem();
      DB_FreeXAssetPoolMem();
      Stream_Shutdown();
      GameDVR_Shutdown();
      DB_BackendCallbacks_Shutdown();
      CG_Wind_FreeGridMem();
      CL_Transients_OnClosePostUnload();
      PMem_Free(&result, "disk_cache", PMEM_STACK_GAME);
      StreamerMemLoan::~StreamerMemLoan(&result);
      PatchCollision_Shutdown();
      StaticModels_Shutdown();
      WorldCollision_Shutdown();
      DynEnt_Shutdown();
      Cloth_Shutdown();
      Physics_Shutdown();
      for ( m = ScriptContext_GetFirst(); m; m = ScriptContext_GetNext(m) )
      {
        Scr_Shutdown(m);
        Scr_ShutdownAllocNodeUser(m);
        Scr_ShutdownProgramHunkUser(m);
        NET_ShutdownDebug(m);
      }
      Mem_HunkDebug_Shutdown();
      R_Cinematic_SuspendPlayback();
      FileStream_Shutdown();
      if ( g_fileSystem )
      {
        g_fileSystem->Shutdown(g_fileSystem);
        g_fileSystem = NULL;
      }
      SND_Shutdown();
      SND_DeInitMemory();
      Com_Devhost_Shutdown_App();
      cls.soundStarted = 0;
      Com_DCache_Shutdown();
      if ( s_logFileHandle.handle.handle != -1 )
      {
        FS_FCloseLogFile(s_logFileHandle);
        s_logFileHandle.handle.handle = -1i64;
      }
      OnlineMgr::OnDisconnect(&g_onlineMgr, ONLINE_DISCONNECT_ALL);
      OnlineMgr::Uninit(&g_onlineMgr);
      TaskBreaker_Shutdown();
    }
  }
  Sys_Quit();
}

/*
==============
Com_RegisterCommonDvars
==============
*/
void Com_RegisterCommonDvars()
{
  const dvar_t *v38; 
  const dvar_t *v42; 
  const dvar_t *v46; 
  const dvar_t *v50; 
  const dvar_t *v61; 
  const dvar_t *v68; 
  const dvar_t *v87; 
  const dvar_t *v97; 
  const dvar_t *v104; 
  const dvar_t *v108; 
  const dvar_t *v116; 
  bool v120; 
  float flags; 
  float flagsa; 
  float flagsb; 
  float flagsc; 
  float flagsd; 
  float flagse; 
  float flagsf; 
  char v135; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm12
    vmovaps xmmword ptr [rax-68h], xmm13
  }
  Dvar_BeginPermanentRegistration();
  DVARBOOL_cg_autoSkipSplashScreen = Dvar_RegisterBool("NPLRKNKKOP", 0, 0, "Automatically skip the splash screen");
  DCONST_DVARINT_developer = Dvar_RegisterInt("developer", 0, 0, 2, 0x40004u, "Enable development options");
  DCONST_DVARINT_logfile = Dvar_RegisterInt("logfile", 1, 0, 2, 0x40004u, "Write to log file - 0 = disabled, 1 = async file write, 2 = Sync every write");
  DCONST_DVARBOOL_loc_warnings = Dvar_RegisterBool("loc_warnings", 0, 0x40004u, "Enable localization warnings");
  DCONST_DVARBOOL_loc_warningsUI = Dvar_RegisterBool("loc_warningsUI", 0, 0x40004u, "Enable localization warnings for UI");
  DCONST_DVARBOOL_loc_warningsAsErrors = Dvar_RegisterBool("loc_warningsAsErrors", 0, 0x40004u, "Throw an error for any unlocalized string");
  DCONST_DVARINT_gpad_debug = Dvar_RegisterInt("gpad_debug", 0, 0x80000000, 0x7FFFFFFF, 0x40004u, "coder use only");
  DCONST_DVARINT_reliableResendTimeMin = Dvar_RegisterInt("reliableResendTimeMin", 500, 0, 0x7FFFFFFF, 0x40004u, "Minimum amount of time (in ms) to wait before resending an unack'd reliable message");
  DCONST_DVARINT_reliableResendTimeMax = Dvar_RegisterInt("reliableResendTimeMax", 5000, 0, 0x7FFFFFFF, 0x40004u, "Maximum amount of time (in ms) to wait before resending an unack'd reliable message");
  DCONST_DVARINT_reliableTimeoutTime = Dvar_RegisterInt("reliableTimeoutTime", 30000, 0, 0x7FFFFFFF, 0x40004u, "Amount of time (in ms) to wait before timing out a client for not ack'ing a message");
  DCONST_DVARBOOL_reliableDebug = Dvar_RegisterBool("reliableDebug", 0, 0x40004u, "Reliable message debugging");
  DCONST_DVARBOOL_developer_script = Dvar_RegisterBool("developer_script", 0, 0x40004u, "Enable developer script comments");
  DCONST_DVARBOOL_allow_debugger = Dvar_RegisterBool("allow_debugger", 1, 0x40004u, "Set to false to suppress the script debugger");
  DCONST_DVARBOOL_developer_looseScriptLoadConsole = Dvar_RegisterBool("developer_looseScriptLoadConsole", 0, 0x40004u, "Enable loose file loading for gsc on consoles");
  DCONST_DVARBOOL_developer_createfx = Dvar_RegisterBool("developer_createfx", 0, 0x40004u, "Load loose CreateFx effects data, ignoring any data compiled into the map fastfile");
  DCONST_DVARBOOL_developer_looseLoadGoldScripts = Dvar_RegisterBool("developer_looseLoadGoldScripts", 1, 0x40004u, "Enable loose loading SP gold files.  Dev only.");
  DCONST_DVARBOOL_scriptable_enable = Dvar_RegisterBool("scriptable_enable", 1, 0x40004u, "Debug option to enable/disable spawning scriptable instances at run time.");
  DCONST_DVARINT_dev_protocol_version = Dvar_RegisterInt("dev_protocol_version", -1, -1, 0xFFFF, 0x40004u, "Dev only: temporarily override protocol version so as not to join other dev games in progress.");
  DCONST_DVARBOOL_xanim_ik_disable = Dvar_RegisterBool("xanim_ik_disable", 0, 0x40004u, "Disables IK for testing.");
  DCONST_DVARBOOL_xanim_ik_precache_disable = Dvar_RegisterBool("xanim_ik_precache_disable", 0, 0x40004u, "Disables DObj IK information precache.");
  DCONST_DVARBOOL_gpad_rumble = Dvar_RegisterBool("gpad_rumble", 1, 0x40004u, "Disbles for testing ");
  DCONST_DVARBOOL_dconst_tracking_dump_data = Dvar_RegisterBool("dconst_tracking_dump_data", 0, 0x40004u, "Enable writes of modified constant dvar tracking into Blackbox.");
  DVARBOOL_loadDebugShaderFastFiles = Dvar_RegisterBool("LSMSLRNLRK", 0, 0, "Enables debug shaders.  This enables debug shader functionality in devgui->renderer->debug.");
  DCONST_DVARBOOL_pip_camera_debug = Dvar_RegisterBool("pip_camera_debug", 0, 0x40004u, "Draws PIP's camera gizmo.");
  DVARBOOL_sv_generateConstBaselines = Dvar_RegisterBool("LMPKLQRLKT", 0, 0, "Whether or not to generate the const baseline files.");
  DVARINT_savegame_profile = Dvar_RegisterEnum("LKORSLMQKQ", s_saveProfileStrings, 2, 4u, "Profile the size of savegames.  Prints results to console after every save.");
  DVARBOOL_splitscreen = Dvar_RegisterBool("splitscreen", 0, 0, "Current game is a splitscreen game");
  DVARBOOL_splitscreen_ingame = Dvar_RegisterBool("LRNKOQRMNR", 0, 0x80u, "Currently starting or in a splitscreen game");
  DVARINT_reloading = Dvar_RegisterInt("reloading", 0, 0, 4, 0x2000u, "True if the game is reloading");
  DVARBOOL_xblive_competitionmatch = Dvar_RegisterBool("LOMTKQTRTM", 0, 0x480u, "MLG Rules?");
  DVARBOOL_spawnDebug = Dvar_RegisterBool("NKTMKORMPP", 0, 4u, "Turn on debug lines for spawning traces");
  DVARBOOL_mis_cheat_enabled = Dvar_RegisterBool("QLSPTMLOS", 1, 0, "[SP] Allows the mission unlock cheat combination to be performed");
  DVARBOOL_mis_cheat = Dvar_RegisterBool("MSSSNONPLS", 0, 0, "[SP] Set when level unlock cheat is performed");
  DVARINT_stringtable_debug = Dvar_RegisterInt("NSROPNTLNM", 0, 0, 2, 0, "spam debug info for stringtable lookups");
  DVARSTR_default_gametype_mp = Dvar_RegisterString("ORMSMKOKL", "war", 0, "Default front-end game type for MP game settings");
  DVARSTR_default_gametype_cp = Dvar_RegisterString("LLRKOQNLTT", "cp_survival", 0, "Default front-end game type for CP game settings");
  DVARSTR_ui_gametype = Dvar_RegisterString("MOLPOSLOMO", (const char *)&queryFormat.fmt + 3, 0, "Current front-end game type for game settings");
  DVARSTR_ui_mapname = Dvar_RegisterString("NSQLTTMRMP", (const char *)&queryFormat.fmt + 3, 0, "Current front-end map name for game settings");
  DVARSTR_ui_oldmapname = Dvar_RegisterString("NSMSQOMSLO", (const char *)&queryFormat.fmt + 3, 0, "Cached mapname from before going into playlists");
  DVARSTR_ui_cpmission = Dvar_RegisterString("PTNOLQOOP", (const char *)&queryFormat.fmt + 3, 0, "Current front-end mission name for game settings.");
  DVARSTR_ui_saved_mapname = Dvar_RegisterString("OKPMLLKRP", (const char *)&queryFormat.fmt + 3, 0, "Current saved front-end map name for game settings, used for custom games and system link MP");
  DVARBOOL_ui_hardcore = Dvar_RegisterBool("MSQTTNSTNO", 0, 0, "Current front-end hardcore game setting");
  DVARBOOL_ui_tactical = Dvar_RegisterBool("OMKTLMMNPT", 0, 0, "Current front-end tactical game setting");
  DVARBOOL_ui_onlineRequired = Dvar_RegisterBool("MTSTMKPMRM", 0, 0, "UI requires online connection to be present.");
  DVARBOOL_ui_is_magma_gamemode = Dvar_RegisterBool("QTQRQPLNK", 0, 0, "Are we in magma, as opposed to being in SP, MP, or CP.");
  DVARBOOL_uinav_bypasses = Dvar_RegisterBool("OMOPNTNLL", 0, 0, "Launch w/ low level suppression of optional UI (video playback, tutorials) for ui_nav tests");
  DVARSTR_uinav_deferred = Dvar_RegisterString("TLRLKKQNQ", (const char *)&queryFormat.fmt + 3, 0, "Launch arg deferred ui_nav test config name (optional)");
  DVARINT_gw_gas_circle_size = Dvar_RegisterInt("OKSRMNKKOS", 0, 0, 0x7FFFFFFF, 0, "The presets for the size of the gas cirle in GW");
  DVARBOOL_com_force_free_to_play = Dvar_RegisterBool("NPSSNLOLPS", 0, 0, "Forces non-premium user status on Development builds.");
  DVARBOOL_com_force_premium = Dvar_RegisterBool("MROLPRPTPO", 0, 0, "Forces premium user status on Development builds.");
  DVARBOOL_systemlink = Dvar_RegisterBool("LPSPMQSNPQ", 0, 0x80u, "Current game is a system link game");
  DVARBOOL_systemlink_host = Dvar_RegisterBool("LLPNKKORPT", 0, 0x80u, "Local client is hosting system link game");
  DVARBOOL_com_lan_lobby_enabled = Dvar_RegisterBool("LPNMMPKRL", 1, 0, "Should clients/hosts send/process LAN lobby messages.");
  DVARBOOL_lobby_team_select = Dvar_RegisterBool("NQORMNOQQM", 1, 0, "Users can select teams while in the lobby.");
  DVARINT_onlineSystemDebugAll = Dvar_RegisterInt("RONPNRTRT", 0, 0, 1, 0, "online systems debug logging on/off for all inherited systems.");
  DVARINT_cachedContentDebug = Dvar_RegisterInt("PRQROLQOT", 0, 0, 1, 0, "cached content system debug logging on/off.");
  DVARINT_patchSystemDebug = Dvar_RegisterInt("LOQRPKNPON", 0, 0, 1, 0, "patch system debug logging on/off.");
  DVARINT_onlineErrorDebug = Dvar_RegisterInt("QSSORMSLT", 0, 0, 1, 0, "online error reporting system debug logging on/off.");
  DVARSTR_patchmanifestoverride = Dvar_RegisterString("TMKMTKTSS", (const char *)&queryFormat.fmt + 3, 0, "patch manifest file override name");
  DVARINT_patchmanifestversionoverride = Dvar_RegisterInt("MTTNLMRNLO", 0, 0, 0x7FFFFFFF, 0, "patch manifest file override version");
  DVARINT_cachedContentStreamRequestTimeout = Dvar_RegisterInt("LSLNRSTQRO", 30000, 0, 0x7FFFFFFF, 0, "Stream request timeout in msec.");
  DVARINT_purgeDCache = Dvar_RegisterInt("MNKTRNRKO", 0, 0, 1, 0, "purge all dcaches on startup");
  DVARSTR_db_keyServer1 = Dvar_RegisterString("PTLTQPOLP", (const char *)&queryFormat.fmt + 3, 0, "FF Encryption Keyserver Host/IP 1");
  DVARSTR_db_keyServer2 = Dvar_RegisterString("MTQOKOLRKS", (const char *)&queryFormat.fmt + 3, 0, "FF Encryption Keyserver Host/IP 2");
  DVARSTR_db_keyServer3 = Dvar_RegisterString("ROLQTNSOP", (const char *)&queryFormat.fmt + 3, 0, "FF Encryption Keyserver Host/IP 3");
  DVARINT_cl_profileTextHeight = Dvar_RegisterInt("OLNRTRRLQK", 10, 1, 100, 0, "Text size to draw the network profile data");
  DVARINT_cl_profileTextY = Dvar_RegisterInt("MNNTMMKONS", 140, 0, 800, 0, "Y position to draw the profile data");
  DVARINT_bot_DifficultyDefault = Dvar_RegisterEnum("MOLTMTTQON", BOT_STR_TBL_DIFFICULTY, 1, 0, "Default difficulty level of bots.");
  DVARINT_bot_SystemStatus = Dvar_RegisterEnum("OMSOSSSORO", BOT_STR_TBL_SYSTEM, 0, 0, "Default mode that bots will connect and participate in the match");
  DVARBOOL_bot_spawnControlledByDvar = Dvar_RegisterBool("MSLNRKRRKK", 0, 0x80u, "Bot spawning is controlled by the dvar 'scr_spawnBots' and they will not connect/spawn in on their own regardless of current game state setting");
  DVARBOOL_onlinegame = Dvar_RegisterBool("LTSNLQNRKO", 0, 0x80u, "Current game is an online game with stats, custom classes, unlocks");
  DVARBOOL_mlg_gamebattles_match = Dvar_RegisterBool("MTMMPLSRNL", 0, 0, "If we are in a MLG GameBattles match or not");
  DVARBOOL_mlg_gamebattles_inputLock = Dvar_RegisterBool("MQMQRMLRQP", 0, 0, "If we are locking the input in a MLG GameBattles match or not");
  DVARBOOL_mlg_gamebattles_sony_tournament_apis = Dvar_RegisterBool("MQLPTSRKTN", 1, 0, "Killswitch for Sony specific tournament APIs");
  DVARBOOL_mlg_gamebattles_enable_xp = Dvar_RegisterBool("OLLOKOKKSM", 0, 0, "Enable XP if we are in a MLG GameBattles match");
  DVARBOOL_xblive_privatematch = Dvar_RegisterBool("LSTLQTSSRM", 0, 0x80u, "Current game is a private match");
  DVARBOOL_xblive_privatematch_solo = Dvar_RegisterBool("LNQLRSNMQS", 0, 0, "Current game is an Extinction solo match");
  DCONST_DVARINT_reportUserVoteInterval = Dvar_RegisterInt("reportUserVoteInterval", 2, 1, 0x7FFFFFFF, 0x40004u, "The interval in minutes you wait before getting another vote on this console as long as the console is turned on.");
  DVARBOOL_enable_leaderboard_playercards = Dvar_RegisterBool("LNOOMSTSNN", 1, 0, "If set to true playercards will be added for download in the leaderboard menu");
  DVARINT_party_minplayers = Dvar_RegisterInt("LLNLRTQRPO", 2, 1, 200, 0, "Minimum number of players in a party");
  DVARINT_party_maxplayers = Dvar_RegisterInt("OOTQKOTRM", 16, 1, 200, 0, "Maximum number of players in a party");
  DVARINT_party_maxSquadSize = Dvar_RegisterInt("RRNTNNKNP", 1, 1, 200, 0, "The size of squads within a team.");
  DVARINT_party_partyPlayerCountNum = Dvar_RegisterInt("NKSQNMMRRQ", 0, 0, 200, 0x2000u, "Number of players currently in the party/lobby");
  DVARBOOL_party_searchUntilTeamsCanBeMade = Dvar_RegisterBool("SQPPMNLKK", 0, 0x80u, "Force the game to continue searching for a game to join until teams can be made with the local players.");
  DVARINT_mming_minplayers_to_lobby = Dvar_RegisterInt("NMPOOTSSSP", -1, -1, 200, 0, "Minimum number of players needed for a matchmade game to form a lobby");
  DVARBOOL_mming_allow_br_solo_squad = Dvar_RegisterBool("MSNSPNROPN", 1, 0, "Allow matchmaking with a solo br squad so squads are promoted to teams for solo br playlists.");
  DVARBOOL_com_saveGameAvailable = Dvar_RegisterBool("MRLNPKTMKL", 0, 0x2000u, "True if the save game is currently available");
  DVARBOOL_com_loadingSavegame = Dvar_RegisterBool("NLQPKTSRLS", 0, 0x2000u, "True if the save game is being used.");
  DVARINT_ui_maxclients = Dvar_RegisterInt("LOSORKOTOO", 200, 1, 200, 0, "Current front-end setting for maximum number of clients");
  DVARINT_ui_serverFrameDuration = Dvar_RegisterInt("MKQQKMRORQ", 50, 16, 100, 0, "Set this to change the frame duration in MP. Defaults to 50 ms (20hz)");
  DVARINT_ui_serverDevmapFrameDuration = Dvar_RegisterInt("MKMQPNOTSN", 50, 16, 100, 0, "Set this to change the frame duration in MP when devmapping. 50ms by default. [Dev-only]");
  DVARINT_ui_dediServerFrameDuration = Dvar_RegisterInt("LQTMTPRMOS", 16, 16, 100, 0, "Set this to change the frame duration in MP for dedicated servers. Defaults to 16 ms (62.5hz)");
  DVARINT_ui_weaponMapLargeRuntimeSize = Dvar_RegisterInt("NKSQPPMKPM", 511, 1, 1023, 0, "Weapon map size for maps using large weapon maps. Large player mode (and some dev maps) only.");
  DCONST_DVARINT_com_toolsServerFrameDuration = Dvar_RegisterInt("com_toolsServerFrameDuration", 100, 16, 100, 0x40004u, "Set this to change the frame duration for tools such as createfx");
  DVARINT_com_maxStreamedBodiesMp = Dvar_RegisterInt("OQTSTMNOT", 48, 0, 48, 0, "Setting for desired maximum number of bodies streamed in the game at any given time in MP");
  DVARINT_com_maxStreamedHeadsMp = Dvar_RegisterInt("RSQOSOKOK", 48, 0, 48, 0, "Setting for desired maximum number of heads streamed in the game at any given time in MP");
  DVARINT_com_maxStreamedWeaponsMp = Dvar_RegisterInt("LSPTSKORSQ", 64, 0, 64, 0, "Setting for desired maximum number of weapon world models streamed in the game at any given time in MP");
  DVARINT_com_maxStreamedViewArmsMp = Dvar_RegisterInt("OKTKPNOTNL", 3, 0, 20, 0, "Setting for desired maximum number of view arms streamed in the game at any given time in MP");
  DVARINT_com_maxStreamedViewWeaponsMp = Dvar_RegisterInt("LSPORMONL", 24, 0, 24, 0, "Setting for desired maximum number of weapon view models streamed in the game at any given time in MP");
  DVARINT_com_maxStreamedClientModelsMp = Dvar_RegisterInt("MMNSTKNPQQ", 32, 0, 32, 0, "Setting for desired maximum number of client models streamed in the game at any given time in MP");
  DVARINT_com_maxStreamedBodiesCp = Dvar_RegisterInt("LSNLKQPNQN", 48, 0, 48, 0, "Setting for desired maximum number of bodies streamed in the game at any given time in CP");
  DVARINT_com_maxStreamedHeadsCp = Dvar_RegisterInt("MLORQPRKPO", 48, 0, 48, 0, "Setting for desired maximum number of heads streamed in the game at any given time in CP");
  DVARINT_com_maxStreamedWeaponsCp = Dvar_RegisterInt("OKOOKLLOLM", 24, 0, 64, 0, "Setting for desired maximum number of weapon world models streamed in the game at any given time in CP");
  DVARINT_com_maxStreamedViewArmsCp = Dvar_RegisterInt("MRMTNQLTLR", 3, 0, 20, 0, "Setting for desired maximum number of view arms streamed in the game at any given time in CP");
  DVARINT_com_maxStreamedViewWeaponsCp = Dvar_RegisterInt("NRSMRTQTMT", 12, 0, 24, 0, "Setting for desired maximum number of weapon view models streamed in the game at any given time in CP");
  DVARINT_com_maxStreamedClientModelsCp = Dvar_RegisterInt("SRRRNKPPM", 32, 0, 32, 0, "Setting for desired maximum number of client models streamed in the game at any given time in CP");
  DVARINT_com_maxStreamedClientsMp = Dvar_RegisterInt("ROKPOSRQT", 18, 0, 20, 0, "Set this to change the number of clients that streaming buffers are scaled to support in MP.");
  DVARINT_com_maxStreamedAgentsMp = Dvar_RegisterInt("MMSTSSPMRR", 0, 0, 8, 0, "Set this to change the number of agents that streaming buffers are scaled to support in MP.");
  DVARINT_com_maxStreamedCharactersMp = Dvar_RegisterInt("LRQLTSOSKT", 18, 0, 20, 0, "Set this to change the number of characters (clients + agents) that streaming buffers are scaled to support in MP.");
  DVARINT_com_maxStreamedClientsCp = Dvar_RegisterInt("LONSLTLPQR", 4, 0, 20, 0, "Set this to change the number of clients that streaming buffers are scaled to support in CP.");
  DVARINT_com_maxStreamedAgentsCp = Dvar_RegisterInt("NQPLKPSMTL", 5, 0, 8, 0, "Set this to change the number of agents that streaming buffers are scaled to support in CP.");
  DVARINT_com_maxStreamedCharactersCp = Dvar_RegisterInt("NRSQQSSKNT", 9, 0, 20, 0, "Set this to change the number of characters (clients + agents) that streaming buffers are scaled to support in CP.");
  DCONST_DVARBOOL_com_useDynamicStreamingLimits = Dvar_RegisterBool("com_useDynamicStreamingLimits", 0, 0x40004u, "Enable to allow streaming limits to be changed dynamically in-game.");
  DCONST_DVARBOOL_com_streamSyncEnabled = Dvar_RegisterBool("com_streamSyncEnabled", 1, 0x40004u, "Disable to turn off the streamsync.");
  DVARINT_com_maxStreamedHeadsForLargePlayerCounts = Dvar_RegisterInt("MSTKPKSRQO", 22, 0, 48, 0, "Setting for desired maximum number of head models streamed in the game at any given time in MP modes that allow for large player counts.");
  DVARINT_com_maxStreamedBodiesForLargePlayerCounts = Dvar_RegisterInt("NKMOLTTSST", 22, 0, 48, 0, "Setting for desired maximum number of body models streamed in the game at any given time in MP modes that allow for large player counts.");
  DVARINT_com_maxStreamedViewWeaponsForLargePlayerCounts = Dvar_RegisterInt("OMPTLOTRT", 12, 0, 24, 0, "Setting for desired maximum number of weapon view models streamed in the game at any given time in MP modes that allow for large player counts.");
  DVARBOOL_com_maxStreamedModelsForLargePlayerCountEnabled = Dvar_RegisterBool("LTRNMNQTSP", 1, 0, "Setting for enabling an other desired maximum number of models streamed in the game at any given time in MP modes that allow for large player counts.");
  DVARINT_playlist = Dvar_RegisterInt("playlist", 0, 0, 0x7FFFFFFF, 0, "The playlist number");
  DVARINT_playlistID = Dvar_RegisterInt("NLTOPSKPQM", 0, 0, 0x7FFFFFFF, 0, "The playlist ID");
  DVARINT_playlistMode = Dvar_RegisterInt("MQSSQQRPSK", 0, 0, 2, 0, "The playlist mode");
  DVARINT_playlistCategory = Dvar_RegisterInt("LSMOOSQMRP", 0, 0, 0x7FFFFFFF, 0, "The playlist category");
  DVARINT_security_server_modify_statpacket = Dvar_RegisterInt("QNRPTMQRL", -1, -1, 0x7FFFFFFF, 0, "When this is >= 0, the server will pretend to modify random bytes in the specified statpacket");
  DVARINT_mming_classic_test_state = Dvar_RegisterInt("RRLSLRORP", 0, 0, 4, 0, "Indicates if and what test state the matchmaker should run in : 0 == as normal 1 == listen search only 2 == listen host only 3 == dedicated only");
  DVARBOOL_com_gamemode_stress_enabled = Dvar_RegisterBool("OLNKQMORNP", 0, 0, "When enabled, stress tests rapid transition of game modes");
  DVARINT_com_gamemode_stress_jitter_min = Dvar_RegisterInt("MORSNNQTT", 1000, 0, 60000, 0, "The amount of min jitter applied when stress testing");
  DVARINT_com_gamemode_stress_jitter_max = Dvar_RegisterInt("LNNNSSROQT", 3000, 0, 60000, 0, "The amount of max jitter applied when stress testing");
  DVARINT_com_exit_pause_connection_interrupted_delay = Dvar_RegisterInt("LOPTMTQSMS", 1000, 0, 3000, 0, "The amount of time before we will allow the connection interrupted dialog to draw after unpausing a game where the server was paused.");
  DVARINT_com_gamestart_min_transition_time_mp = Dvar_RegisterInt("LPLSNKQQOS", 4000, 0, 60000, 0, "The minimum amount of time to show the multiplayer UI->Game transition screens for");
  DVARINT_com_gamestart_min_transition_time_cp = Dvar_RegisterInt("MSRTORTQQM", 0, 0, 60000, 0, "The minimum amount of time to show the coop UI->Game transition screens for");
  DVARBOOL_com_codcasterEnabled = Dvar_RegisterBool("MOSNOQPOSS", 0, 0, "Indiciates if the CoDCaster feature is on or off");
  DVARBOOL_com_codcasterHighClientSupport = Dvar_RegisterBool("LRQNOKNRRN", 0, 0, "Enable to increase system link player count to 46 (10 PS4 & 36 Codcaster-Observer slots)");
  DVARINT_com_codcasterHighClientCount = Dvar_RegisterInt("LQNKMNMLRR", 46, 24, 46, 0, "Amount of client slots for high client count support");
  DVARBOOL_com_devCodcasterEnabled = Dvar_RegisterBool("MQRSKQTRLT", 0, 0, "Set the player as a CODCaster by default when enabled. For development only.");
  __asm
  {
    vmovss  xmm12, cs:__real@3f800000
    vmovss  xmm3, cs:__real@3fd89d8a; max
    vmovss  xmm2, cs:__real@3c7c0fc1; min
  }
  DVARBOOL_com_checkIfGameModeInstalled = Dvar_RegisterBool("RLSPOOTTT", 0, 0, "If true, we check if a game mode is owned and installed before entering the menu. Be sure to Install the Game via Steam for this to work.");
  __asm { vmovaps xmm1, xmm12; value }
  DVARFLT_com_fovUserScale = Dvar_RegisterFloat("NKPPQTKTST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The user FOV scale, calculated to match the target widescreen (16:9) horizontal Field of View specified in advanced video options");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
    vxorps  xmm13, xmm13, xmm13
  }
  DVARFLT_com_fovUserScaleFactor = Dvar_RegisterFloat("MQPRNMTMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "How much of the user FOV scale is actually applied, from 0% to 100%. Used to lerp to/from the default consoles FoV.");
  __asm
  {
    vmovss  xmm3, cs:__real@42f00000; max
    vmovss  xmm2, cs:__real@42700000; min
    vmovss  xmm1, cs:__real@42a00000; value
  }
  DVARBOOL_com_useAdsFovUserScale = Dvar_RegisterBool("MRMTMQNKKK", 0, 0, "Whether com_fovUserScale is applied while ADS");
  DVARFLT_com_targetWidescreenHorzFov = Dvar_RegisterFloat("NNMSONQSOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Expected value of horizontal field of view when using a 16:9 aspect ratio. com_fovUserScale is adjusted based on this value.");
  DVARINT_comSessionReportThreshold = Dvar_RegisterInt("MMMPQOLMTL", 75, 0, 0x7FFFFFFF, 0, "When com session usage reaches this level a report is sent off to the backend.");
  DVARINT_comSessionCriticalTypeMaskOverride = Dvar_RegisterInt("LSLOKQTQRR", 0, 0, 0x7FFFFFFF, 0, "Critical session type override value. ");
  DVARINT_comSessionStressTest = Dvar_RegisterInt("MTNRTTLPSK", 0, 0, 1, 0, "Fire of a series of random sessions creates.");
  DVARBOOL_replay_time = Dvar_RegisterBool("OLMKKORSTM", 1, 0, "Draw replay time");
  DCONST_DVARINT_com_userCmdMinTimeStep = Dvar_RegisterInt("com_userCmdMinTimeStep", 1, 1, 0x7FFFFFFF, 0x40004u, "The minimum timestep each user command will move.");
  DCONST_DVARINT_com_userCmdMaxTimeStep = Dvar_RegisterInt("com_userCmdMaxTimeStep", 192, 1, 0x7FFFFFFF, 0x40004u, "The maximum timestep each user command will move.");
  DVARBOOL_com_userCmdEnableConstantTime = Dvar_RegisterBool("LNOTNPKNQQ", 1, 0, "Enabled fixed timestep user commands.");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  DVARINT_com_userCmdConstantMsec = Dvar_RegisterInt("NOQQRMNKOQ", 16, 1, 0x7FFFFFFF, 0, "The timestep of each user command when constant user command time is enabled.");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_com_userCmdMaxBufferScale = Dvar_RegisterFloat("TOKPMRPPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The maximum time scale to apply to client input generation for command throttling.");
  DVARBOOL_com_userCmdEnableSmoothTime = Dvar_RegisterBool("SLLKPTMOQ", 0, 0, "Enabled smoothing of the client's accumulation of input time.");
  __asm
  {
    vmovss  xmm6, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@41200000; value
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm12; min
  }
  DCONST_DVARFLT_com_userCmdMaxExtrapTranslation = Dvar_RegisterFloat("com_userCmdMaxExtrapTranslation", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The maximum amount of translation that can be applied on the server for a client's movement (used to calculate bullet origin).");
  DCONST_DVARBOOL_com_userCmdLogExtrapError = Dvar_RegisterBool("com_userCmdLogExtrapError", 0, 0x40004u, "Enable logging instances where client extrapolation exceeds the maximum translation.");
  DVARSTR_package_type = Dvar_RegisterString("LMMLNRSLKS", (const char *)&queryFormat.fmt + 3, 0, "The package type for the current build. This will be read from packageinfo.txt. Eg: 'autobuild', 'autobuild_mp', 'current_mp_fnf'. By default this string would be empty");
  DVARBOOL_force_offline_enabled = Dvar_RegisterBool("MPSSOTQQPM", 1, 0, "Whether forcing to offline mode is enabled");
  DVARBOOL_force_offline_menus = Dvar_RegisterBool("LSTQOKLTRN", 0, 0, "This will force the fences to not be active and take the user to MainMenuOffline mode directly from the MainLockoutScreen (IIS)");
  DCONST_DVARBOOL_map_zone_check = Dvar_RegisterBool("map_zone_check", 1, 0x40004u, "Enables 'map' and 'devmap' zone validation before going through the process");
  DVARBOOL_force_overindulgence_message = Dvar_RegisterBool("MMLNKLNRRN", 0, 0, "Forces to show the next Over Indulgence message.");
  DCONST_DVARINT_force_dw_online_environment = Dvar_RegisterInt("force_dw_online_environment", 0, 0, 3, 0x40004u, "Bypass detection and force an DemonWware environement. 0 auto 1 dev 2 cert 3 prod");
  DCONST_DVARINT_force_battlenet_online_environment = Dvar_RegisterInt("force_battlenet_online_environment", 0, 0, 2, 0x40004u, "Bypass detection and force a Battle.Net environement. 0 auto 1 dev 2 prod");
  DVARSTR_com_force_region = Dvar_RegisterString("OLSPRNOLMP", (const char *)&queryFormat.fmt + 3, 0, "name of the region to force, (worldwide, japan, germany, saudiarabia, korea15, china)");
  DVARBOOL_com_smoothFrames = Dvar_RegisterBool("LTPKOTONNP", 1, 0, "Enable frame times smoothing");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  DVARFLT_com_viewAnimCameraTranslationScale = Dvar_RegisterFloat("NSNOTMNMPP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Scale the amount of animation view camera translation.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  DVARFLT_com_viewAnimCameraRotationScale = Dvar_RegisterFloat("LQTRKQSNMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Scale the amount of animation view camera rotation.");
  DCONST_DVARBOOL_skipItemDetailModelPhysics = Dvar_RegisterBool("skipItemDetailModelPhysics", 1, 0x40004u, "When set item entities do not use detailed model for physics.");
  DVARBOOL_killswitch_dxr_disabled = Dvar_RegisterBool("MTNTQRLL", 0, 0, "When false the DXR option will be available if the player have the hardware to run it");
  DVARBOOL_pump_livecode_in_sp_psowait_enabled = Dvar_RegisterBool("LTPNLQTLPP", 1, 0, "When true demonware and battlenet will be called from the main thread when waiting for PSOs.");
  DVARBOOL_half_psoworkers_during_cinematics = Dvar_RegisterBool("PLNRTNOSN", 1, 0, "When true PSO workers count will be halved when there's a bink movie playing (not fillers though) and the game mode is SP.");
  DVARBOOL_variable_rate_shading_enabled = Dvar_RegisterBool("QKOKLMRQT", 0, 0, "When true the Variable Rate Shading (VRS) will be available if the player have the hardware to run it");
  DCONST_DVARSTR_com_parentFastfileoverride = Dvar_RegisterString("com_parentFastfileoverride", (const char *)&queryFormat.fmt + 3, 0x40004u, "Override the parent fastfile for the level.");
  DVARBOOL_cg_ignoreSubtitle = Dvar_RegisterBool("NRSSTPLOSQ", 0, 0, "Stop displaying subtitles when true ( don't save the value when the program close )");
  DVARBOOL_CDL_restriction_enabled = Dvar_RegisterBool("MMTOPPQOON", 1, 0, "Enable the loadouts restriction functions for the CDL rules when true");
  DVARBOOL_CDL_playlist_enabled = Dvar_RegisterBool("LLMQKSPLSP", 1, 0, "Enable the CDL playlist under quickplay for public CDL matches.");
  DVARBOOL_CDL_has_seen_restricted_loadouts_popup = Dvar_RegisterBool("RQKRQLQPK", 0, 0, "Ensure that we're seeing the restricted popup only once per session.");
  DVARBOOL_killswitch_CDL_restriction_ingame = Dvar_RegisterBool("NTLNTTNNLQ", 0, 0, "When true, disable all CDL restriction in-game as well as changing the public loadouts for the private ones.");
  DCONST_DVARBOOL_com_worldStreamingForceEnable = Dvar_RegisterBool("com_worldStreamingForceEnable", 0, 0x40004u, "Forcibly enables world streaming system (default is system only enables for maps that use the transient grid system). NOTE: Must be set on launch on both the server and client to have desired effect.");
  DVARBOOL_mp_paused = Dvar_RegisterBool("LQMKQLPLKT", 0, 4u, "If true ignore server time advancing.  Handy for taking hi-res screen shots.");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@40000000; value
  }
  DVARINT_sre_notification_duration = Dvar_RegisterInt("LTRNMRRQLK", 5000, 0, 0x7FFFFFFF, 0, "The time (ms) duration to show the SRE notification to clients. 0 = no notification");
  DVARFLT_m_vehMouseSteerSensitivity = Dvar_RegisterFloat("MMMQLQMTKP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Vehicle mouse steering sensitivity");
  DVARINT_cl_packetdup = Dvar_RegisterInt("LTLPPQMKPQ", 2, 0, 5, 0, "Enable packet duplication");
  DVARBOOL_scripted_melee_debug = Dvar_RegisterBool("NPNPPSNSLO", 0, 0, "Enable debug display for the scripted melee system.");
  DVARBOOL_cg_blood = Dvar_RegisterBool("OPOTTRRNQ", 1, 0, "Show blood effects");
  DVARBOOL_cg_fpsCounter = Dvar_RegisterBool("NLLPTKRKKN", 0, 0, "Enable/Disable the FPS counter on PC");
  DVARBOOL_cg_brass = Dvar_RegisterBool("NNRQTQNLRL", 1, 0, "Weapons eject brass");
  DVARBOOL_cg_marks_ents_player_only = Dvar_RegisterBool("MKQRLOOLKS", 0, 0, "Marks on entities from player's bullets only.");
  DVARINT_cg_invalidCmdHintDuration = Dvar_RegisterInt("LLSMPLKOO", 1800, 0, 10000, 0, "Duration of an invalid command hint");
  __asm
  {
    vmovss  xmm10, cs:__real@3a83126f
    vmovss  xmm1, cs:__real@3f19999a; value
  }
  DVARINT_cg_invalidCmdHintBlinkInterval = Dvar_RegisterInt("MNQQNQQPRL", 600, 1, 10000, 0, "Blink rate of an invalid command hint");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vmovaps xmm2, xmm10; min
  }
  v38 = Dvar_RegisterFloat("OKPNTNOLTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Speed of the cursor when selecting a location on the map");
  __asm
  {
    vmovss  xmm3, cs:__real@40000000; max
    vmovss  xmm1, cs:__real@3f933333; value
  }
  DVARFLT_cg_mapLocationSelectionCursorSpeed = v38;
  __asm { vmovaps xmm2, xmm10; min }
  v42 = Dvar_RegisterFloat("LOKRKNNPMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Speed of the cursor when selecting a location on the map when using a MOUSE to control the cursor");
  __asm { vmovss  xmm1, cs:__real@3cb3e78e; x }
  DVARFLT_cg_mapLocationSelectionCursorSpeedMouse = v42;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm12; y
    vmovss  [rsp+0A8h+flags], xmm12
  }
  v46 = Dvar_RegisterVec2("NSPRORPMTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, 0, "Distortion uv scales (Default to 1)");
  __asm { vmovss  xmm1, cs:__real@3d863935; value }
  DVARVEC2_cg_waterSheeting_distortionScaleFactor = v46;
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v50 = Dvar_RegisterFloat("NLTSSQPSTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distortion magnitude");
  __asm
  {
    vmovss  xmm3, cs:__real@42000000; max
    vmovss  xmm1, cs:__real@408e18a8; value
  }
  DVARFLT_cg_waterSheeting_magnitude = v50;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_cg_waterSheeting_radius = Dvar_RegisterFloat("LQNOTRPRQR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Tweak dev var Glow radius in pixels at 640x480");
  DVARINT_cg_weaponCycleDelay = Dvar_RegisterInt("LSKRSKKMPR", 0, 0, 5000, 0, "The delay after cycling to a new weapon to prevent holding down the cycle weapon button from cycling too fast. Gamepad only. KB&M uses the gameplay option weaponSwitchCancelDelay");
  DVARBOOL_cg_velocityBasedBlur_Enable = Dvar_RegisterBool("MORLLPSLTT", 1, 0, "If true radial motion blur will be applied based on the player velocity.");
  DVARBOOL_cg_bloodLimit = Dvar_RegisterBool("NNQMQOLKQL", 0, 0, "Limit blood effects (to 'prevent excess blood stacking')");
  DVARINT_cg_bloodLimitMsec = Dvar_RegisterInt("OKLQRPOOTN", 330, 1, 2000, 0, "When limiting blood effects, number of milliseconds between effects.");
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_cg_voiceIconSize = Dvar_RegisterFloat("LOPNNMQSTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Size of the 'voice' icon");
  DVARBOOL_cg_descriptiveText = Dvar_RegisterBool("STLKQLMN", 1, 0, "Draw descriptive spectator messages");
  DVARBOOL_hud_enable = Dvar_RegisterBool("MSSRKLPNQM", 1, 0, "Enable hud elements");
  DVARBOOL_con_minicon = Dvar_RegisterBool("LMSLLSMONN", 0, 0, "Display the mini console on screen");
  __asm
  {
    vmovss  xmm8, cs:__real@44200000
    vmovss  xmm3, cs:__real@c3480000; min
    vmovss  xmm2, cs:__real@c1a00000; y
    vmovss  xmm1, cs:__real@41a00000; x
  }
  DVARBOOL_cg_dumpViewmodelAnims = Dvar_RegisterBool("NNPRRTSNLM", 0, 0, "Output the animation info for the viewmodel");
  __asm { vmovss  [rsp+0A8h+flags], xmm8 }
  v61 = Dvar_RegisterVec2("MKNSOTRSMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, 0, "[SP] Offset from top-right corner, for cg_drawFPS, etc");
  __asm
  {
    vmovss  xmm3, cs:__real@c3480000; min
    vmovss  xmm2, cs:__real@41200000; y
    vmovss  xmm1, cs:__real@41a00000; x
  }
  DVARVEC2_cg_debugInfoCornerOffsetSP = v61;
  __asm { vmovss  [rsp+0A8h+flags], xmm8 }
  DVARVEC2_cg_debugInfoCornerOffsetMP = Dvar_RegisterVec2("NNTTQRKSNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsb, 0, "[MP] Offset from top-right corner, for cg_drawFPS, etc");
  DVARBOOL_cg_drawFPSLabels = Dvar_RegisterBool("MROMLNPO", 1, 0, "Draw FPS Info Labels");
  DVARBOOL_cg_drawTransients = Dvar_RegisterBool("TNSRKQRLN", 1, 0, "Draw transient fastfile state");
  DCONST_DVARBOOL_cg_drawTransientQueue = Dvar_RegisterBool("cg_drawTransientQueue", 0, 0x40004u, "Draw transient fastfile queue status");
  DCONST_DVARINT_cg_drawTransientQueueXPos = Dvar_RegisterInt("cg_drawTransientQueueXPos", 0, 0, 1000, 0x40004u, "Draw transient fastfile queue status, X screen pos");
  DVARBOOL_cg_drawLevelTransients = Dvar_RegisterBool("LSQOOMOPMR", 1, 0, "Draw transient fastfile state for each level fastfiles (SP only)");
  DVARBOOL_cg_drawCommonTransients = Dvar_RegisterBool("LSNPKMLOMO", 0, 0, "Draw transient fastfile state for each common fastfiles (SP only)");
  DCONST_DVARBOOL_cg_drawTransientCommonLoadCounts = Dvar_RegisterBool("cg_drawTransientCommonLoadCounts", 1, 0x40004u, "Draw transient common load counts");
  DCONST_DVARBOOL_cg_drawWorldTileLoadCounts = Dvar_RegisterBool("cg_drawWorldTileLoadCounts", 1, 0x40004u, "Draw transient world tile load counts");
  DCONST_DVARBOOL_cg_drawClientStreamManualView = Dvar_RegisterBool("cg_drawClientStreamManualView", 0, 0x40004u, "Draw ClientStreamManualView info.");
  DCONST_DVARBOOL_cg_drawImageStreamQuality = Dvar_RegisterBool("cg_drawImageStreamQuality", 1, 0x40004u, "Draw image streaming quality.");
  DCONST_DVARBOOL_cg_drawWantedImageMem = Dvar_RegisterBool("cg_drawWantedImageMem", 1, 0x40004u, "Draw how much more memory is needed to be in a good visual quality.");
  DCONST_DVARBOOL_cg_drawWantedStreamMem = Dvar_RegisterBool("cg_drawWantedStreamMem", 0, 0x40004u, "Draw how much more image/mesh/generic stream memory is needed to be in a good visual quality. Superset of cg_drawWantedImageMem that also includes stream item types other than images.");
  DCONST_DVARBOOL_cg_drawStreamerWantedImageLoads = Dvar_RegisterBool("cg_drawStreamerWantedImageLoads", 1, 0x40004u, "Draw streamer wanted image loads, split into buckets doubling in stream distance in linear space.");
  DVARBOOL_cg_drawStreamMemoryInfo = Dvar_RegisterBool("LLKMNLRLQP", 0, 0, "Draw streamer memory info.");
  DCONST_DVARBOOL_cg_drawFileStreamStatus = Dvar_RegisterBool("cg_drawFileStreamStatus", 0, 0x40004u, "Draw file stream status");
  DCONST_DVARBOOL_cg_drawStreamPos = Dvar_RegisterBool("cg_drawStreamPos", 1, 0x40004u, "Draw streaming position info.");
  DVARINT_cg_drawIWMem = Dvar_RegisterEnum("QLKPNOQRN", cg_drawIWMemNames, 0, 4u, "Draw iwmem HUD");
  DVARBOOL_cg_drawFastfileDebugInfo = Dvar_RegisterBool("MOSSSSTTNL", 1, 0, "Draw fastfile debug info");
  DVARBOOL_cg_drawFrontendSceneDebugInfo = Dvar_RegisterBool("OMPMKKTORN", 1, 0, "Draw frontend scene debug info");
  DVARBOOL_cg_drawCinematicInfo = Dvar_RegisterBool("RSMOKTKTT", 0, 0, "Draw cinematic info");
  DVARBOOL_cg_drawMyChangesDebugInfo = Dvar_RegisterBool("NRTTLPNNOS", 1, 0, "Draw mychanges debug info");
  DCONST_DVARBOOL_cg_drawStreamAOFSizes = Dvar_RegisterBool("cg_drawStreamAOFSizes", 1, 0x40004u, "Draw stream always/optional/free sizes");
  DCONST_DVARBOOL_cg_drawFFCLTSizes = Dvar_RegisterBool("cg_drawFFCLTSizes", 1, 0x40004u, "Draw fastfile common/level/transient sizes");
  DCONST_DVARBOOL_cg_drawXB3FreeTest = Dvar_RegisterBool("cg_drawXB3FreeTest", 0, 0x40004u, "Draw XB3 Free Test size");
  DCONST_DVARBOOL_cg_drawXB3FreeShip = Dvar_RegisterBool("cg_drawXB3FreeShip", 1, 0x40004u, "Draw XB3 Free Ship size");
  DCONST_DVARBOOL_cg_drawMemreportBudget = Dvar_RegisterBool("cg_drawMemreportBudget", 0, 0x40004u, "Draw Memreport total budget size");
  DCONST_DVARBOOL_cg_drawTransientWorldSizes = Dvar_RegisterBool("cg_drawTransientWorldSizes", 1, 0x40004u, "Draw MP Transient World Sizes");
  DCONST_DVARBOOL_cg_drawOverbudget = Dvar_RegisterBool("cg_drawOverbudget", 1, 0x40004u, "Draw XB3 Free Test/Ship sizes");
  DCONST_DVARBOOL_cg_drawBudgets = Dvar_RegisterBool("cg_drawBudgets", 0, 0x40004u, "Always draw every budget (memory) state");
  DVARINT_cg_drawBudgetBars = Dvar_RegisterEnum("MOSRLNPRPN", cg_drawBudgetBarsNames, 0, 4u, "Draw budget (memory) state graphical bars");
  DCONST_DVARBOOL_cg_drawAlwaysloadedWarnings = Dvar_RegisterBool("cg_drawAlwaysloadedWarnings", 1, 0x40004u, "Draw large text for alwaysloaded/forced streaming warnings");
  DVARINT_cg_drawFPS = Dvar_RegisterEnum("OLNTNRTPPL", cg_drawFpsNames, 1, 0, "Draw frames per second");
  DVARBOOL_cg_drawViewpos = Dvar_RegisterBool("LRPLTTOPPL", 1, 0, "Draw viewpos");
  DVARBOOL_cg_drawSystemTime = Dvar_RegisterBool("LONTLKTNS", 1, 0, "Draw system time");
  DVARBOOL_cg_drawBuildName = Dvar_RegisterBool("LSSSQMQPNL", 0, 0, "Draw build name");
  DVARBOOL_cg_drawClientNetPerf = Dvar_RegisterBool("LSRKOMOPMP", 0, 0, "Draw client net performance");
  DVARBOOL_cg_drawScriptableLimits = Dvar_RegisterBool("PRLSTKLKT", 1, 0, "Draw scriptables budget text");
  DVARINT_cg_drawCamAndMovementInfo = Dvar_RegisterEnum("MQPMQQQNL", cg_drawCamAndMovementInfoNames, 1, 0, "Draw camera and movement information");
  DVARBOOL_cg_drawEntityWorkers = Dvar_RegisterBool("MNMTONRMOO", 0, 0, "Draw client entity workers overlay");
  DVARBOOL_cg_drawPaidUserOverlay = Dvar_RegisterBool("TNPKOMTRR", 1, 0, "Draw paid user overlay");
  DVARINT_cg_drawSnapshot = Dvar_RegisterEnum("MLQKLNNLRO", cg_drawSnapshotNames, 1, 0, "Draw debugging information for snapshots.");
  DVARBOOL_cg_drawStatsSource = Dvar_RegisterBool("LSNMNSLKOM", 0, 0, "Draw stats source");
  DVARBOOL_cg_drawentitycounts = Dvar_RegisterBool("MTLPTPMOKP", 1, 0, "Draws entity counts in the top right debug text");
  DVARBOOL_cg_drawservercounts = Dvar_RegisterBool("RNSKRSLMR", 1, 0, "Draws various server-side counts in the top right debug text");
  DVARBOOL_cg_drawpreload = Dvar_RegisterBool("OLTRLMNTTL", 1, 0, "Draws preload information in the top right debug text");
  DVARBOOL_cg_drawteamdebuginfo = Dvar_RegisterBool("LRSMRQQNPQ", 0, 0, "Draws team debug info in the top right debug text");
  __asm
  {
    vmovss  xmm3, cs:__real@c4870000; min
    vmovss  xmm2, cs:__real@c2b40000; y
  }
  DVARBOOL_drawLagometer = Dvar_RegisterBool("MKTQMONRRL", 0, 0, "Enable the 'lagometer'");
  __asm
  {
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+0A8h+flags], xmm13
  }
  v68 = Dvar_RegisterVec2("MRSKONOSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsc, 0, "Lagometer screen position: (X, Y) relative to bottom right");
  __asm
  {
    vmovss  xmm6, cs:__real@42400000
    vmovss  xmm8, cs:__real@43000000
    vmovss  xmm2, cs:__real@42a00000; y
  }
  DVARVEC2_cg_lagometerPos = v68;
  __asm
  {
    vmovaps xmm3, xmm6; min
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+0A8h+flags], xmm8
  }
  DVARVEC2_cg_lagometerSize = Dvar_RegisterVec2("NLKLRNLSMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsd, 0, "Lagometer size: (Width, Height)");
  __asm
  {
    vmovss  xmm3, cs:__real@c4870000; min
    vmovss  xmm2, cs:__real@c33c0000; y
    vmovss  xmm1, cs:__real@c3070000; x
  }
  DVARBOOL_cg_drawDeathMonitor = Dvar_RegisterBool("LLRRTRLQTS", 0, 0, "Enable the Death Monitor");
  __asm { vmovss  [rsp+0A8h+flags], xmm13 }
  DVARVEC2_cg_deathMonitorPos = Dvar_RegisterVec2("PQKPLNLTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagse, 0, "Death Monitor screen position: (X, Y) relative to bottom right");
  __asm
  {
    vmovaps xmm3, xmm6; min
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  [rsp+0A8h+flags], xmm8
  }
  DVARVEC2_cg_deathMonitorSize = Dvar_RegisterVec2("NOLPMLONLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsf, 0, "Death Monitor size: (Width, Height)");
  DVARBOOL_cg_drawClientTasks = Dvar_RegisterBool("MSPMMQLOPR", 1, 0, "Draw client task debug information");
  DCONST_DVARBOOL_cg_drawLiveStatus = Dvar_RegisterBool("cg_drawLiveStatus", 1, 0x40004u, "Draw live/online debug status on HUD");
  DVARINT_ai_corpseLimit = Dvar_RegisterInt("OMTOTLTNRP", 28, 0, 28, 0x80u, "Archived maximum number of AI corpses - for PC config files");
  DVARBOOL_cl_spawnDebug = Dvar_RegisterBool("SMMOTMSSN", 0, 0, "Turn on debug lines for spawning traces");
  DVARINT_debugOverlay = Dvar_RegisterEnum("LTKQRKKPLK", debugOverlayNames, 0, 0, "Toggles the display of various debug info.");
  DVARBOOL_debugOverlayOnly = Dvar_RegisterBool("NOLMRPOORS", 1, 0, "Toggles whether debug Overlay hides the rest of the UI.");
  __asm
  {
    vmovss  xmm3, cs:__real@43480000; max
    vmovss  xmm1, cs:__real@41800000; value
  }
  DVARBOOL_debugViewKickLog = Dvar_RegisterBool("NMKTOTKPLT", 0, 0, "Toggles the visibility for the view kick log.");
  __asm { vmovaps xmm2, xmm12; min }
  DVARFLT_cl_debugTextSize = Dvar_RegisterFloat("MKPKQLRQQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Size of the texts drawn by CL_AddDebugString");
  DVARSTR_con_default_console_filter = Dvar_RegisterString("MTLPRORONQ", "*", 0, "Default channel filter for the console destination.");
  DVARSTR_con_default_file_filter = Dvar_RegisterString("LOLQRTQQQP", "*", 0, "Default channel filter for the file destination.");
  DVARBOOL_com_disableSaving = Dvar_RegisterBool("OSLONKRPP", 0, 0, "DPS ONLY: Turn off SP saving to remove hitch for video recording");
  DVARBOOL_dev_moreSnapshotEntities = Dvar_RegisterBool("RPMKOKQNR", 0, 0, "Development-only switch to allow more entities in MP snapshots");
  DCONST_DVARBOOL_com_streamfile_pause_debugging = Dvar_RegisterBool("com_streamfile_pause_debugging", 0, 0x40004u, "Turns on audio file pause/resume stress test");
  DCONST_DVARBOOL_playlist_localization_errors = Dvar_RegisterBool("playlist_localization_errors", 1, 0x40004u, "Turn off to disable playlist localization errors ");
  DCONST_DVARBOOL_cl_useKeyBindingsFile = Dvar_RegisterBool("cl_useKeyBindingsFile", 0, 0x40004u, "Turn on usage of key bindings file");
  PartyHost_RegisterDvars();
  g_wegame_platform = Dvar_RegisterBool("MRSQLQKNKP", 0, 0, "WeGame platform or not.");
  master_dismemberment_setting = Dvar_RegisterBool("NTMLLPTNLT", 1, 0x2000u, (const char *)&queryFormat.fmt + 3);
  com_dedicated_dhclient = Dvar_RegisterBool("MMQRPRONNQ", 0, 0, "True if we're a client playing on a DH server");
  fastfile_loadDevelopment = Dvar_RegisterBool("NKRTLQQTOL", 1, 0x800u, "Enable/Disable loading of the development fast file.");
  com_statmon = Dvar_RegisterBool("NQKOQPQOLN", 0, 0, "Draw stats monitor");
  __asm { vmovss  xmm6, cs:__real@447a0000 }
  com_statmon_demo = Dvar_RegisterBool("NLNKLORSKT", 1, 0, "Draw stats monitor, high-priority subset. (defaults to on in demo builds)");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm12; value
  }
  v87 = Dvar_RegisterFloat("LNOTRKNRPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x2044u, "[SP] Scale time of each frame");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm12; value
  }
  com_timescale = v87;
  dev_timescale = Dvar_RegisterFloat("MSNTNLNQNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "[SP] Scale time of each frame");
  com_fixedtime = Dvar_RegisterInt("LTNTMTOKNS", 0, 0, 1000, 4u, "Use a fixed time rate for each frame");
  com_maxFrameTime = Dvar_RegisterInt("NRLMOOSKLL", 100, 50, 5000, 0, "Time slows down if a frame takes longer than this many milliseconds");
  cl_pregame = Dvar_RegisterBool("NLONRMOLKS", 0, 0, "Client is still watching the load movie");
  cl_force_paused = Dvar_RegisterInt("NSKTLLKNTN", 0, 0, 2, 1u, "Force the client to be paused. Can't be overridden by LUA scripts, the start button, etc.");
  com_sv_running = Dvar_RegisterBool("NLTTMLSQRQ", 0, 0x2000u, "Server is running");
  com_filter_output = Dvar_RegisterBool("LOTPNRTQTL", 1, 0, "Use console filters for filtering output.");
  intro = Dvar_RegisterBool("intro", 1, 0, "Intro movie should play");
  com_animCheck = Dvar_RegisterBool("MQQLPMTMLK", 0, 0, "Check anim tree");
  com_wideScreen = Dvar_RegisterBool("TQQKORSSM", 1, 0x2000u, "True if the game video is running in 16x9 aspect, false if 4x3.");
  __asm { vmovss  xmm3, cs:__real@461c4000; max }
  com_cinematicEndInWhite = Dvar_RegisterBool("LTTPKKMLTL", 0, 0x40u, "Set by script. True if cinematic ends with a white screen.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  com_cinematicHDRIntensityScale = Dvar_RegisterFloat("LMRRRMSPOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Scales HDR cinematic video output in linear BT2020 space.");
  com_cinematicGPUDecoding = Dvar_RegisterBool("MMLSRTLNMN", 1, 0, "Decode videos via GPU compute.");
  com_cinematicForceName = Dvar_RegisterString("MMKRTTKNRK", (const char *)&queryFormat.fmt + 3, 0, "Cinematic override video with the given name, for debugging");
  com_cinematicForceStartOffsetMSec = Dvar_RegisterInt("MRPSKOMNMS", -1, -1, 1000000, 0, "Cinematic override video with the given start offset in msec, or -1 for no override");
  playlistFilename = Dvar_RegisterString("RLPMRKQQM", "playlists.info", 0, "Playlist filename");
  playlistAggrFilename = Dvar_RegisterString("MRNLPNRSML", "unified_large_playlist_tu24.aggr", 0, "Aggregated playlist filename");
  playListUpdateCheckMinutes = Dvar_RegisterInt("LLKPTKTRSL", 5, 5, 0x7FFFFFFF, 0, "Minutes to wait between checking for updated playlist.");
  patchManifestUpdateCheckMinutes = Dvar_RegisterInt("NMSNTLMPTS", 10, 5, 0x7FFFFFFF, 0, "Minutes to wait between checking for updated patch manifest");
  patchManifestUpdateRetrySeconds = Dvar_RegisterInt("MNNTKLOOPS", 20, 1, 0x7FFFFFFF, 0, "Seconds to wait between retry on manifest failure");
  patchManifestUpdateRetryAttempts = Dvar_RegisterInt("OKRLMSLKON", 3, 0, 0x7FFFFFFF, 0, "Number of retry attempts on a failed manifest check");
  dcacheThrottleEnabled = Dvar_RegisterBool("MSRLLORMPM", 1, 0, "Enable or disable dcache upload throttling.");
  dcacheThrottleKBytesPerSec = Dvar_RegisterInt("PKPSSTTRR", 32, 0, 0x7FFFFFFF, 0, "Dcache upload throttle limit in K Bytes per second.");
  com_showParseTree = Dvar_RegisterBool("QOKPTTNPL", 0, 0, "Show the script parse tree if true");
  createfx = Dvar_RegisterString("LSTTOTKPNP", (const char *)&queryFormat.fmt + 3, 0, "Current createfx mode");
  CL_Main_RegisterCommonDvars();
  UI_RegisterDvars();
  LUI_RegisterDvars();
  LUI_CoD_RegisterDvars();
  DevGui_RegisterDvars();
  CPUTimelineProfilerView_InitDvars();
  band_2players = Dvar_RegisterInt("NLTOKRMTOL", 0x20000, 0, 0x7FFFFFFF, 0, "2 player bandwidth req'd");
  band_4players = Dvar_RegisterInt("MRMOLSQQON", 0x40000, 0, 0x7FFFFFFF, 0, "4 player bandwidth req'd");
  band_8players = Dvar_RegisterInt("OKNORNQSLP", 856064, 0, 0x7FFFFFFF, 0, "8 player bandwidth req'd");
  band_12players = Dvar_RegisterInt("NLTNMSLPQK", 2048000, 0, 0x7FFFFFFF, 0, "12 player bandwidth req'd");
  band_18players = Dvar_RegisterInt("MOMKQPOKTK", 2048000, 0, 0x7FFFFFFF, 0, "18 player bandwidth req'd");
  band_24players = Dvar_RegisterInt("MRSOOPTLQP", 2048000, 0, 0x7FFFFFFF, 0, "24 player bandwidth req'd");
  __asm { vmovss  xmm1, cs:__real@40b66666; value }
  band_lotsplayers = Dvar_RegisterInt("MSNRMNLRQR", 49152000, 0, 0x7FFFFFFF, 0, ">24 player bandwidth req'd");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v97 = Dvar_RegisterFloat("MQNQRQTPMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "8 player sys_configureGHz req'd");
  __asm { vmovss  xmm1, cs:__real@40c00000; value }
  cpu_speed_8players = v97;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  cpu_speed_12players = Dvar_RegisterFloat("OKMQNKSOSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "12 player sys_configureGHz req'd");
  __asm
  {
    vmovss  xmm1, cs:__real@41100000; value
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v104 = Dvar_RegisterFloat("MPPKKRNSOL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "18 player sys_configureGHz req'd");
  __asm { vmovss  xmm1, cs:__real@41400000; value }
  cpu_speed_18players = v104;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v108 = Dvar_RegisterFloat("MMSTQSKTLK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "24 player sys_configureGHz req'd");
  __asm { vmovss  xmm1, cs:__real@41700000; value }
  cpu_speed_24players = v108;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  cpu_speed_lotsplayers = Dvar_RegisterFloat("NKKMTRNNMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, ">24 player sys_configureGHz req'd");
  Migration_InitDvars();
  accessToSubscriberContent = Dvar_RegisterBool("MRLNKSOOKL", 1, 0, "Whether to display the subscriber maps.");
  cl_modifiedDebugPlacement = Dvar_RegisterBool("LKQLMOSOKO", 0, 0, "Modify the location of debug output (outside of safe area)");
  com_unattendedMode = Dvar_RegisterBool("unattended", 0, 0, "Suppress things that might require user interaction");
  com_unattendedAllowDropErrors = Dvar_RegisterBool("NLOOKNQTMQ", 0, 0, "Treat ERR_DROP errors as non-fatal when running in unattended mode");
  com_suppressLoadErrors = Dvar_RegisterBool("NTOSQTRQNN", 0, 0, "Hide the load error popup when loading a level");
  com_remoteAssertMsg = Dvar_RegisterBool("NSPQQSMPMQ", 1, 0, "Send a remote console socket message when an assert is hit.");
  com_testmonkey = Dvar_RegisterInt("TQPKQLSRQ", 0, 0, 2, 0, "Indicate if we are running under testmonkey mode (deterministic and fixed)");
  com_cheats = Dvar_RegisterBool("NTPNRQTKNP", 1, 0x1800u, "Enable server cheats");
  com_disableGodMode = Dvar_RegisterBool("LSRTOMTOTQ", 0, 0x1800u, "Disable godmode cheats");
  __asm
  {
    vmovss  xmm7, cs:__real@bf800000
    vmovss  xmm3, cs:__real@432a0000; max
    vmovss  xmm1, cs:__real@42820000; value
  }
  cl_forceFoVEnabled = Dvar_RegisterBool("LLPRRPKTRO", 0, 4u, "Force a modified FoV calculation for capture");
  __asm { vmovaps xmm2, xmm7; min }
  v116 = Dvar_RegisterFloat("NRPLKPTKSR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Force the X FoV - auto calculate it from aspect ratio and Y FoV if less than 1");
  __asm { vmovss  xmm3, cs:__real@432a0000; max }
  cl_forceFoVx = v116;
  __asm
  {
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm7; value
  }
  cl_forceFoVy = Dvar_RegisterFloat("LQRSONTQPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Force the Y FoV - auto calculate it from aspect ratio and X FoV if less than 1");
  v120 = Sys_FileExists("dev_move_files.cfg");
  dev_move_files = Dvar_RegisterBool("MQMQKSKLNS", v120, 0, "Dev_Move_Files: Debug option to enable/disable moving *.ff to *.ffm and *.pak to *.pakm before opening");
  cl_waterMarkEnabled = Dvar_RegisterBool("LRKNROSQPM", 0, 0, "Do not Distribute.");
  cl_waterMarkText = Dvar_RegisterString("MQQPKKTSNQ", "Company 3", 0, "Do not Distribute.");
  Com_CSpline_RegisterDvars();
  Com_DCache_RegisterDvars();
  ui_errorMessage = Dvar_RegisterString("OMSSQKRMLQ", (const char *)&queryFormat.fmt + 3, 0x2000u, "Most recent error message");
  ui_errorTitle = Dvar_RegisterString("NSNNTPQPNT", (const char *)&queryFormat.fmt + 3, 0x2000u, "Title of the most recent error message");
  Physics_SetupBootDvars();
  Cloth_SetupBootDvars();
  ATClient_RegisterDvars();
  CL_Cameraman_Dvars();
  _R11 = &v135;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-60h]
  }
  Dvar_EndPermanentRegistration();
}

/*
==============
Com_ResetFrametime
==============
*/

void __fastcall Com_ResetFrametime(double _XMM0_8)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  com_frameTime = Sys_Milliseconds();
  __asm
  {
    vmovss  cs:com_lastFrameTime_base, xmm0
    vmovss  cs:com_lastFrameTime_base+4, xmm0
    vmovss  cs:com_lastFrameTime_base+8, xmm0
  }
  *(_QWORD *)com_lastFrameTime = 0i64;
  com_lastFrameTime[2] = 0;
}

/*
==============
Com_ResetSlowMotion
==============
*/
void Com_ResetSlowMotion(void)
{
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewTimescale, xmm0; SlowMotionCommon g_slowmoCommon
  }
  g_slowmoCommon.enable = 0;
  g_slowmoCommon.viewEnable = 0;
}

/*
==============
Com_Restart
==============
*/
void Com_Restart(void)
{
  Com_Restart_Internal(0);
}

/*
==============
Com_RestartForFrontend
==============
*/
void Com_RestartForFrontend(void)
{
  Com_Restart_Internal(1);
}

/*
==============
Com_Restart_Internal
==============
*/
void Com_Restart_Internal(bool isFrontEnd)
{
  SvGameModeApplication *ActiveServerApplication; 
  scrContext_t *i; 
  scrContext_t *j; 
  __int64 v9; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  Com_SyncThreads();
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
  {
    LODWORD(v9) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 10283, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v9) )
      __debugbreak();
  }
  if ( !isFrontEnd )
    CL_Main_ShutdownHunkUsers();
  if ( SvGameModeApplication::HasActiveServerApplication() )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    ActiveServerApplication->ShutdownGameProgs(ActiveServerApplication);
  }
  Mayhem_Shutdown();
  Com_ShutdownDObj();
  DObjShutdown();
  XAnimShutdown();
  BgWeaponMap::ms_runtimeSizeInitialized = 0;
  BgWeaponMap::ms_runtimeSize = 0;
  BgWeaponMap::ms_runtimeIndexBits = 0;
  ComCharacterLimits::ClearGameLimits();
  Mem_HunkDebug_Reset();
  for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
    Scr_CheckProgramHunkUsersClear(i);
  if ( !isFrontEnd )
    DB_ReleaseAllExternalReferences(1);
  for ( j = ScriptContext_GetFirst(); j; j = ScriptContext_GetNext(j) )
    Com_SetScriptSettings(j);
  com_fixedConsolePosition = 0;
  if ( !isFrontEnd )
    InitObfuscationFunctions();
  FakeLag_Init();
  FakeBandwidth_Init();
  XAnimInit();
  XAnimNode_MayhemLink_Init();
  Cloth_XAnimNode_Link_Init();
  MocapStreaming_XAnimNode_Link_Init();
  XAnimMount_Register();
  XAnimAnalogClock_Register();
  XAnimBlendSpace1D_Register();
  XAnimBlendSpace2D_Register();
  XAnim4PtBlend_Register();
  XAnim9PtBlend_Register();
  XAnimToggle_Register();
  XAnimToggleAll_Register();
  XAnimRandom_Register();
  XAnimRandomLoop_Register();
  XAnimLookAt_Register();
  XAnimWobble_Register();
  XAnimScrub1D_Register();
  XAnimTurret_Register();
  XAnimLookAtPlayer_Register();
  XAnimIK_Register();
  XAnimProc_Register();
  XAnimLadderClimb_Register();
  XAnimNode_IKLadder_Register();
  XAnimNode_IKLadderWM_Register();
  Ragdoll_XAnimNode_Register();
  XAnimNode_IKAntiSlide_Register();
  XAnimNullNode_Register();
  DObjInit();
  Com_InitDObj();
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm0, xmm6; timescale
  }
  Com_SetCodeTimeScale(*(const float *)&_XMM0);
  g_slowmoCommon.enable = 0;
  g_slowmoCommon.viewEnable = 0;
  __asm { vmovss  cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewTimescale, xmm6; SlowMotionCommon g_slowmoCommon }
  if ( ((unsigned __int64)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
  {
    LODWORD(v9) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 10375, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v9) )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
}

/*
==============
Com_RunHardwareSurvey
==============
*/
void Com_RunHardwareSurvey()
{
  Online_HardwareSurvey *Instance; 

  Instance = Online_HardwareSurvey::GetInstance();
  Online_HardwareSurvey::GenerateReport(Instance, s_isFromFirstBootForCallback);
}

/*
==============
Com_SendSysErrorToDLog
==============
*/
void Com_SendSysErrorToDLog(const char *text)
{
  char *v1; 
  __int64 v2; 

  v1 = com_errorMessage_dlog;
  if ( !com_errorMessage_dlog[0] )
    v1 = (char *)text;
  DLog_RecordErrorEvent(DLOG_ERROR_CODE_SYS_ERROR, v1, g_stackTrace);
  com_errorMessage_dlog[0] = 0;
  DLog_Send(1);
  if ( Sys_IsMainThread() )
  {
    v2 = 10i64;
    do
    {
      DLog_Frame();
      Sys_Sleep(100);
      --v2;
    }
    while ( v2 );
  }
  else
  {
    Sys_Sleep(1000);
  }
}

/*
==============
Com_SetConnectedPacketsAllowed
==============
*/
void Com_SetConnectedPacketsAllowed(bool allowed)
{
  if ( ((unsigned __int8)&s_allowConnectedPackets & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_allowConnectedPackets) )
    __debugbreak();
  _InterlockedExchange(&s_allowConnectedPackets, allowed);
}

/*
==============
Com_SetErrorMessage
==============
*/
void Com_SetErrorMessage(const char *errorMessage)
{
  const char *v2; 
  __int64 v3; 
  __int64 v4; 
  const char *v5; 
  signed __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 

  Sys_EnterCriticalSection(CRITSECT_COM_SET_ERROR_MSG);
  if ( errorcode == ERR_SERVERDISCONNECT )
  {
LABEL_19:
    v12 = "MENU/NOTICE";
    goto LABEL_20;
  }
  v2 = noticeErrors[0];
  if ( *noticeErrors[0] )
  {
    v3 = 0i64;
LABEL_4:
    v4 = 0x7FFFFFFFi64;
    v5 = errorMessage;
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !errorMessage && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = v2 - errorMessage;
    while ( 1 )
    {
      v7 = (unsigned __int8)v5[v6];
      v8 = v4;
      v9 = *(unsigned __int8 *)v5++;
      --v4;
      if ( !v8 )
        goto LABEL_19;
      if ( v7 != v9 )
      {
        v10 = v7 + 32;
        if ( (unsigned int)(v7 - 65) > 0x19 )
          v10 = v7;
        v7 = v10;
        v11 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v11 = v9;
        if ( v7 != v11 )
        {
          v2 = noticeErrors[++v3];
          if ( *v2 )
            goto LABEL_4;
          break;
        }
      }
      if ( !v7 )
        goto LABEL_19;
    }
  }
  v12 = "MENU/ERROR";
LABEL_20:
  v13 = SEH_LocalizeTextMessage(v12, "error message", LOCMSG_NOERR);
  if ( !v13 )
    v13 = v12;
  if ( !errorMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2776, ASSERT_TYPE_ASSERT, "(errorMessage)", (const char *)&queryFormat, "errorMessage") )
    __debugbreak();
  v14 = errorMessage + 1;
  if ( *errorMessage != 64 )
    v14 = errorMessage;
  v15 = SEH_LocalizeTextMessage(v14, "error message", LOCMSG_NOERR);
  if ( !v15 )
    v15 = v14;
  Com_SetLocalizedErrorMessage(v15, v13);
  Sys_LeaveCriticalSection(CRITSECT_COM_SET_ERROR_MSG);
}

/*
==============
Com_SetLocalServerRestarting
==============
*/
void Com_SetLocalServerRestarting(const bool restarting)
{
  if ( ((unsigned __int8)&s_serverRestarting & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_serverRestarting) )
    __debugbreak();
  _InterlockedExchange(&s_serverRestarting, restarting);
}

/*
==============
Com_SetLocalServerStarting
==============
*/
void Com_SetLocalServerStarting(ComServerStartingMode startingMode)
{
  if ( ((unsigned __int8)&s_serverStarting & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_serverStarting) )
    __debugbreak();
  _InterlockedExchange(&s_serverStarting, startingMode);
}

/*
==============
Com_SetLocalizedErrorMessage
==============
*/
void Com_SetLocalizedErrorMessage(const char *localizedMessage, const char *localizedTitle)
{
  char dest[2032]; 

  Sys_EnterCriticalSection(CRITSECT_COM_SET_ERROR_MSG);
  if ( !*(_BYTE *)ui_errorMessage->current.integer64 )
  {
    Core_strcpy_truncate(dest, 0x7E8ui64, localizedMessage);
    Dvar_SetString_Internal(ui_errorMessage, dest);
  }
  Core_strcpy_truncate(com_errorMessage, 0x4000ui64, localizedMessage);
  Core_strcpy_truncate(dest, 0x7E8ui64, localizedTitle);
  Dvar_SetString_Internal(ui_errorTitle, dest);
  CrashReport_AddKVP("LastErrorTitle", localizedTitle);
  CrashReport_AddKVP("LastErrorMessage", localizedMessage);
  Sys_LeaveCriticalSection(CRITSECT_COM_SET_ERROR_MSG);
}

/*
==============
Com_SetScriptSettings
==============
*/
void Com_SetScriptSettings(scrContext_t *scrContext)
{
  const dvar_t *v1; 
  int integer; 
  const dvar_t *v4; 
  bool enabled; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  int v10; 

  v1 = DCONST_DVARINT_developer;
  if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v4 = DCONST_DVARBOOL_allow_debugger;
  if ( !DCONST_DVARBOOL_allow_debugger && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "allow_debugger") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  enabled = v4->current.enabled;
  v6 = DCONST_DVARBOOL_developer_script;
  if ( !DCONST_DVARBOOL_developer_script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_script") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.color[0];
  v8 = DCONST_DVARINT_developer;
  if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer )
    goto LABEL_19;
  v9 = DCONST_DVARINT_logfile;
  if ( !DCONST_DVARINT_logfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "logfile") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer )
LABEL_19:
    v10 = 1;
  else
    v10 = 0;
  Scr_Settings(scrContext, v10, v7, integer, enabled);
}

/*
==============
Com_SetSlowMotion
==============
*/

void __fastcall Com_SetSlowMotion(double startTimescale, double endTimescale, const int deltaMsec)
{
  __asm
  {
    vucomiss xmm1, xmm0
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm0
    vmovaps xmm6, xmm1
  }
  Com_GetCodeTimeScale();
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vsubss  xmm2, xmm6, xmm7
    vdivss  xmm4, xmm1, xmm2
    vsubss  xmm2, xmm7, xmm0
    vsubss  xmm0, xmm6, xmm0
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, ebx
    vmulss  xmm3, xmm2, xmm5
    vmulss  xmm1, xmm3, xmm4
    vcvttss2si r8d, xmm1
    vmulss  xmm1, xmm0, xmm5
    vsubss  xmm0, xmm7, cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewTimescale; SlowMotionCommon g_slowmoCommon
    vmulss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm0, xmm5
    vsubss  xmm0, xmm6, cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewTimescale; SlowMotionCommon g_slowmoCommon
    vcvttss2si ecx, xmm2
    vmulss  xmm2, xmm1, xmm4
    vcvttss2si eax, xmm2
  }
  g_slowmoCommon.type = 0;
  g_slowmoCommon.viewStartMsec = com_frameTime + _EAX;
  g_slowmoCommon.startMsec = com_frameTime + _ER8;
  __asm
  {
    vmulss  xmm1, xmm0, xmm5
    vmulss  xmm2, xmm1, xmm4
    vcvttss2si eax, xmm2
  }
  g_slowmoCommon.endMsec = com_frameTime + _ECX;
  g_slowmoCommon.enable = 1;
  __asm
  {
    vmovss  cs:?g_slowmoCommon@@3USlowMotionCommon@@A.startTimescale, xmm7; SlowMotionCommon g_slowmoCommon
    vmovss  cs:?g_slowmoCommon@@3USlowMotionCommon@@A.endTimescale, xmm6; SlowMotionCommon g_slowmoCommon
    vmovss  cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewStartTimescale, xmm7; SlowMotionCommon g_slowmoCommon
    vmovss  cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewEndTimescale, xmm6; SlowMotionCommon g_slowmoCommon
  }
  g_slowmoCommon.viewType = 0;
  g_slowmoCommon.viewEndMsec = com_frameTime + _EAX;
  g_slowmoCommon.viewEnable = 1;
  if ( (int)(com_frameTime + _ECX - (com_frameTime + _ER8)) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8499, ASSERT_TYPE_ASSERT, "(g_slowmoCommon.endMsec - g_slowmoCommon.startMsec >= 0)", (const char *)&queryFormat, "g_slowmoCommon.endMsec - g_slowmoCommon.startMsec >= 0") )
    __debugbreak();
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
}

/*
==============
Com_SetWeaponInfoMemory
==============
*/
void Com_SetWeaponInfoMemory(int source)
{
  if ( (unsigned int)(source - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 10421, ASSERT_TYPE_ASSERT, "((source == 1) || (source == 2))", (const char *)&queryFormat, "(source == WEAPMEMSOURCE_SERVER) || (source == WEAPMEMSOURCE_CLIENT)") )
    __debugbreak();
  if ( s_weaponInfoSource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 10422, ASSERT_TYPE_ASSERT, "(s_weaponInfoSource == 0)", (const char *)&queryFormat, "s_weaponInfoSource == WEAPMEMSOURCE_NONE") )
    __debugbreak();
  s_weaponInfoSource = source;
}

/*
==============
Com_Shutdown
==============
*/
void Com_Shutdown(const char *finalmsg)
{
  Com_SyncThreads();
  Com_ShutdownInternal(finalmsg);
  CL_Main_InitRenderer();
}

/*
==============
Com_ShutdownEvents
==============
*/
void Com_ShutdownEvents(void)
{
  ;
}

/*
==============
Com_ShutdownFrontEnd
==============
*/
void Com_ShutdownFrontEnd(void)
{
  SvGameModeApplication *ActiveServerApplication; 

  Com_SyncThreads();
  if ( !CL_AllLocalClientsDisconnected() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2514, ASSERT_TYPE_ASSERT, "(CL_AllLocalClientsDisconnected())", "%s\n\tFront end shutdown should disconnect clients first", "CL_AllLocalClientsDisconnected()") )
    __debugbreak();
  if ( SvGameModeApplication::HasActiveServerApplication() )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    ActiveServerApplication->AllowNetPackets(ActiveServerApplication, 0);
    ActiveServerApplication->FlushLoopbackPackets(ActiveServerApplication);
  }
  CL_Main_ShutdownGameWorld();
  FakeLag_Shutdown();
  SV_ServerShutdownCommon("FrontEndShutdown");
  Com_Restart_Internal(1);
  CL_Main_ShutdownClientMemory();
}

/*
==============
Com_ShutdownInternal
==============
*/
void Com_ShutdownInternal(const char *finalmsg)
{
  int i; 
  SvGameModeApplication *ActiveServerApplication; 

  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 2473, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tShutting down while the front end scene is still active. IT should be cleaned up independently", "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  for ( i = 0; i < 2; ++i )
  {
    if ( CL_Mgr_IsClientActive((LocalClientNum_t)i) )
      CL_Main_Disconnect((LocalClientNum_t)i);
  }
  if ( SvGameModeApplication::HasActiveServerApplication() )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    ActiveServerApplication->AllowNetPackets(ActiveServerApplication, 0);
    ActiveServerApplication->FlushLoopbackPackets(ActiveServerApplication);
  }
  CL_Main_ShutdownAll(0, 1);
  FakeLag_Shutdown();
  SV_ServerShutdownCommon(finalmsg);
  Com_Restart_Internal(0);
  CL_Main_ShutdownClientMemory();
}

/*
==============
Com_SmoothFrameTime
==============
*/
void Com_SmoothFrameTime(const int lastFrameIndex, const int minMsec, int *msec, float *sec)
{
  const dvar_t *v8; 
  int v9; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 

  _RSI = lastFrameIndex;
  _R14 = sec;
  *msec = SV_ClientFrameRateFix(*msec);
  v8 = DVARBOOL_com_smoothFrames;
  if ( !DVARBOOL_com_smoothFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_smoothFrames") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    v9 = *msec;
    _R11 = 0x140000000ui64;
    if ( *msec > 40 )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3d23d70b
        vaddss  xmm1, xmm2, cs:com_lastFrameTime_base
      }
      com_lastFrameTime[0] += 40;
      com_lastFrameTime[1] += 40;
      com_lastFrameTime[2] += 40;
      __asm
      {
        vmovss  cs:com_lastFrameTime_base, xmm1
        vaddss  xmm1, xmm2, cs:com_lastFrameTime_base+4
        vmovss  cs:com_lastFrameTime_base+4, xmm1
        vaddss  xmm1, xmm2, cs:com_lastFrameTime_base+8
        vmovss  cs:com_lastFrameTime_base+8, xmm1
      }
      com_lastFrameTime_base[_RSI] = 0.0;
      com_lastFrameTime[_RSI] = 0;
    }
    else
    {
      v11 = minMsec;
      v12 = v9 + com_lastFrameTime[0];
      v13 = v9 + com_lastFrameTime[1];
      v14 = v9 + com_lastFrameTime[2];
      com_lastFrameTime[1] += v9;
      com_lastFrameTime[2] += v9;
      com_lastFrameTime[0] += v9;
      if ( com_lastFrameTime[_RSI] > minMsec )
        v11 = com_lastFrameTime[_RSI];
      com_lastFrameTime[_RSI] = 2 * (v12 + v14 + v13 - 2 * v11) / 6;
      v15 = (v11 + (int)_RSI) / 3;
      if ( !v15 )
        v15 = 1;
      *msec = v15;
      __asm
      {
        vmovss  xmm1, dword ptr [r14]
        vaddss  xmm3, xmm1, cs:com_lastFrameTime_base
        vaddss  xmm2, xmm1, cs:com_lastFrameTime_base+4
        vaddss  xmm1, xmm1, cs:com_lastFrameTime_base+8
        vmovss  cs:com_lastFrameTime_base+8, xmm1
        vaddss  xmm0, xmm3, xmm2
        vmovss  cs:com_lastFrameTime_base+4, xmm2
        vmovss  cs:com_lastFrameTime_base, xmm3
        vaddss  xmm3, xmm0, xmm1
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebp
        vmulss  xmm2, xmm1, cs:__real@3a83126f
        vmaxss  xmm5, xmm2, rva com_lastFrameTime_base[r11+rsi*4]
        vmulss  xmm0, xmm5, cs:__real@3f2aaaab
        vmulss  xmm1, xmm3, cs:__real@3eaaaaab
        vmulss  xmm2, xmm5, cs:__real@3eaaaaab
        vsubss  xmm1, xmm1, xmm0
        vmovss  rva com_lastFrameTime_base[r11+rsi*4], xmm1
        vmovss  dword ptr [r14], xmm2
      }
    }
  }
}

/*
==============
Com_SortStartupCommands
==============
*/
__int64 Com_SortStartupCommands(const void *a, const void *b)
{
  const char *v3; 
  unsigned __int64 v4; 
  bool v5; 
  const char *v6; 
  unsigned __int64 v7; 
  bool v8; 

  Cmd_TokenizeString(*(const char **)a);
  v3 = Cmd_Argv(0);
  v4 = -1i64;
  do
    ++v4;
  while ( v3[v4] );
  v5 = v4 >= 6 && !I_strncmp("devmap", v3, 6ui64);
  Cmd_EndTokenizedString();
  Cmd_TokenizeString(*(const char **)b);
  v6 = Cmd_Argv(0);
  v7 = -1i64;
  do
    ++v7;
  while ( v6[v7] );
  v8 = v7 >= 6 && !I_strncmp("devmap", v6, 6ui64);
  Cmd_EndTokenizedString();
  if ( v5 )
  {
    if ( !v8 )
      return 1i64;
  }
  else if ( v8 )
  {
    return 0xFFFFFFFFi64;
  }
  return 0i64;
}

/*
==============
Com_StartHunkUsers
==============
*/
void Com_StartHunkUsers()
{
  _JBTYPE *v0; 
  _JBTYPE *Value; 

  if ( s_serverStarting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8024, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerStarting())", (const char *)&queryFormat, "!Com_IsAnyLocalServerStarting()") )
    __debugbreak();
  if ( Com_GameStart_IsRestarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8025, ASSERT_TYPE_ASSERT, "(!Com_GameStart_IsRestarting())", (const char *)&queryFormat, "!Com_GameStart_IsRestarting()") )
    __debugbreak();
  if ( !com_sv_running || !com_sv_running->current.enabled )
  {
    Value = (_JBTYPE *)Sys_GetValue(2);
    if ( setjmp(Value) )
      Sys_Error((const ObfuscateErrorText)&stru_1440111D0, com_errorMessage);
    if ( !cls.rendererStarted )
      CL_Main_InitRenderer();
    if ( s_serverStarting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8037, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerStarting())", (const char *)&queryFormat, "!Com_IsAnyLocalServerStarting()", Value) )
      __debugbreak();
    if ( !com_sv_running || !com_sv_running->current.enabled )
    {
      while ( Content_MountingContentPacksInProgress() )
        Content_CheckOngoingSessionTasks();
      com_allowReadContentPacks = 1;
    }
    if ( !Com_GameStart_IsRestarting() )
    {
      Com_FrontEnd_UnloadLevelFastFiles();
      Com_FrontEnd_EnterFrontEnd();
      UI_SetMap((const char *)&queryFormat.fmt + 3, (const char *)&queryFormat.fmt + 3);
    }
    CL_Main_StartHunkUsers();
    IN_Frame();
    IN_Frame_Mouse();
    v0 = (_JBTYPE *)Sys_GetValue(2);
    if ( !setjmp(v0) )
      Com_EventLoop();
  }
}

/*
==============
Com_StartupDevFastBoot
==============
*/
void Com_StartupDevFastBoot()
{
  int v0; 
  const char **i; 
  __int64 v2; 
  const char *v3; 
  const char *v4; 
  signed __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  const char *v12; 
  const char *v13; 
  signed __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  const char *v20; 
  const char *v21; 

  v0 = 0;
  if ( com_numConsoleLines > 0 )
  {
    for ( i = (const char **)com_consoleLines; ; ++i )
    {
      Cmd_TokenizeString(*i);
      if ( Cmd_Argc() >= 2 )
        break;
LABEL_33:
      Cmd_EndTokenizedString();
      if ( ++v0 >= com_numConsoleLines )
        return;
    }
    v2 = 0x7FFFFFFFi64;
    v3 = "devmap";
    v4 = Cmd_Argv(0);
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v5 = v4 - "devmap";
    do
    {
      v6 = (unsigned __int8)v3[v5];
      v7 = v2;
      v8 = *(unsigned __int8 *)v3++;
      --v2;
      if ( !v7 )
        break;
      if ( v6 != v8 )
      {
        v9 = v6 + 32;
        if ( (unsigned int)(v6 - 65) > 0x19 )
          v9 = v6;
        v6 = v9;
        v10 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v10 = v8;
        if ( v6 != v10 )
        {
          v11 = 0x7FFFFFFFi64;
          v12 = "map";
          v13 = Cmd_Argv(0);
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v14 = v13 - "map";
          while ( 1 )
          {
            v15 = (unsigned __int8)v12[v14];
            v16 = v11;
            v17 = *(unsigned __int8 *)v12++;
            --v11;
            if ( !v16 )
              goto LABEL_16;
            if ( v15 != v17 )
            {
              v18 = v15 + 32;
              if ( (unsigned int)(v15 - 65) > 0x19 )
                v18 = v15;
              v15 = v18;
              v19 = v17 + 32;
              if ( (unsigned int)(v17 - 65) > 0x19 )
                v19 = v17;
              if ( v15 != v19 )
              {
                v20 = Cmd_Argv(0);
                if ( !I_stricmp(v20, "spmap") )
                  goto LABEL_16;
                v21 = Cmd_Argv(0);
                if ( !I_stricmp(v21, "spdevmap") )
                  goto LABEL_16;
                goto LABEL_33;
              }
            }
            if ( !v15 )
              goto LABEL_16;
          }
        }
      }
    }
    while ( v6 );
LABEL_16:
    DB_DevFastBoot_SetUsedDevmap(0);
    Cmd_EndTokenizedString();
  }
}

/*
==============
Com_StartupVariable
==============
*/
void Com_StartupVariable(const char *match)
{
  int v2; 
  const char **v3; 
  const char *v4; 
  const char *v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  const char *v9; 
  const char *v10; 
  signed __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  const char *v18; 
  const char *v19; 
  signed __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  const char *v26; 
  const char *v27; 

  if ( match )
    Dvar_BeginPermanentRegistration();
  v2 = 0;
  if ( com_numConsoleLines > 0 )
  {
    v3 = (const char **)com_consoleLines;
    do
    {
      Cmd_TokenizeString(*v3);
      if ( !match )
        goto LABEL_10;
      v4 = Cmd_Argv(1);
      v5 = (const char *)(match - v4);
      do
      {
        v6 = (unsigned __int8)v5[(_QWORD)v4];
        v7 = *(unsigned __int8 *)v4 - v6;
        if ( v7 )
          break;
        ++v4;
      }
      while ( v6 );
      if ( !v7 )
      {
LABEL_10:
        v8 = 0x7FFFFFFFi64;
        v9 = "set";
        v10 = Cmd_Argv(0);
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v11 = v10 - "set";
        while ( 1 )
        {
          v12 = (unsigned __int8)v9[v11];
          v13 = v8;
          v14 = *(unsigned __int8 *)v9++;
          --v8;
          if ( !v13 )
            goto LABEL_22;
          if ( v12 != v14 )
          {
            v15 = v12 + 32;
            if ( (unsigned int)(v12 - 65) > 0x19 )
              v15 = v12;
            v12 = v15;
            v16 = v14 + 32;
            if ( (unsigned int)(v14 - 65) > 0x19 )
              v16 = v14;
            if ( v12 != v16 )
              break;
          }
          if ( !v12 )
            goto LABEL_22;
        }
        v17 = 0x7FFFFFFFi64;
        v18 = "setc";
        v19 = Cmd_Argv(0);
        if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v20 = v19 - "setc";
        while ( 1 )
        {
          v21 = (unsigned __int8)v18[v20];
          v22 = v17;
          v23 = *(unsigned __int8 *)v18++;
          --v17;
          if ( !v22 )
            goto LABEL_39;
          if ( v21 != v23 )
          {
            v24 = v21 + 32;
            if ( (unsigned int)(v21 - 65) > 0x19 )
              v24 = v21;
            v21 = v24;
            v25 = v23 + 32;
            if ( (unsigned int)(v23 - 65) > 0x19 )
              v25 = v23;
            if ( v21 != v25 )
              break;
          }
          if ( !v21 )
            goto LABEL_39;
        }
        v26 = Cmd_Argv(0);
        if ( !I_stricmp(v26, "seta") )
        {
          Com_Printf(16, "\"SetA\" is deprecated.  Forcing \"%s\" to be a \"Set\" command, instead.\n", *v3);
LABEL_22:
          Dvar_Set_Cmd(1);
          goto LABEL_23;
        }
        v27 = Cmd_Argv(0);
        if ( !I_stricmp(v27, "setcl") )
        {
          Com_Printf(16, "\"SetCL\" is deprecated.  Forcing \"%s\" to be a \"SetC\" command, instead.\n", *v3);
LABEL_39:
          Dvar_SetC_Cmd(1);
        }
      }
LABEL_23:
      Cmd_EndTokenizedString();
      ++v2;
      ++v3;
    }
    while ( v2 < com_numConsoleLines );
  }
  if ( match )
    Dvar_EndPermanentRegistration();
}

/*
==============
Com_SyncThreads
==============
*/
void Com_SyncThreads(void)
{
  SvGameModeApplication *ActiveServerApplication; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 10529, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "Com_SyncThreads");
  R_SyncRenderThread();
  if ( com_sv_running && com_sv_running->current.enabled || s_serverStarting == 2 )
  {
    SV_WaitServer();
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    ActiveServerApplication->AllowNetPackets(ActiveServerApplication, 0);
  }
  Sys_WaitWorkerCmds();
  Sys_ProfEndNamedEvent();
}

/*
==============
Com_SysError_f
==============
*/
void Com_SysError_f()
{
  Sys_Error((const ObfuscateErrorText)&stru_14400AB68);
}

/*
==============
Com_TimeScaleMsec
==============
*/
__int64 Com_TimeScaleMsec(int msec)
{
  bool v5; 
  bool v20; 
  bool v22; 
  bool v23; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  v5 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND);
  if ( v5 )
  {
    if ( !com_timescale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8523, ASSERT_TYPE_ASSERT, "(com_timescale)", (const char *)&queryFormat, "com_timescale") )
      __debugbreak();
    _RAX = com_timescale;
    __asm { vmovss  xmm6, dword ptr [rax+28h] }
  }
  else
  {
    *(double *)&_XMM0 = Com_GetCodeTimeScale();
    __asm { vmovaps xmm6, xmm0 }
  }
  if ( g_slowmoCommon.enable )
  {
    if ( g_slowmoCommon.type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8533, ASSERT_TYPE_ASSERT, "(g_slowmoCommon.type == SLOW_MOTION_LINEAR)", (const char *)&queryFormat, "g_slowmoCommon.type == SLOW_MOTION_LINEAR") )
      __debugbreak();
    __asm { vmovss  xmm3, cs:?g_slowmoCommon@@3USlowMotionCommon@@A.endTimescale; SlowMotionCommon g_slowmoCommon }
    if ( g_slowmoCommon.endMsec != g_slowmoCommon.startMsec )
    {
      __asm
      {
        vmovss  xmm4, cs:?g_slowmoCommon@@3USlowMotionCommon@@A.startTimescale; SlowMotionCommon g_slowmoCommon
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vsubss  xmm1, xmm3, xmm4
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm4, xmm3
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm2, xmm0
        vaddss  xmm0, xmm6, xmm1
      }
      if ( g_slowmoCommon.endMsec >= (unsigned int)g_slowmoCommon.startMsec )
        goto LABEL_15;
      __asm { vcomiss xmm0, xmm3 }
      if ( g_slowmoCommon.endMsec < (unsigned int)g_slowmoCommon.startMsec )
      {
        __asm { vcomiss xmm4, xmm3 }
LABEL_15:
        if ( g_slowmoCommon.endMsec <= (unsigned int)g_slowmoCommon.startMsec )
          goto LABEL_47;
        __asm { vcomiss xmm0, xmm3 }
        if ( g_slowmoCommon.endMsec > (unsigned int)g_slowmoCommon.startMsec )
        {
LABEL_47:
          __asm { vucomiss xmm4, xmm3 }
          if ( g_slowmoCommon.endMsec != g_slowmoCommon.startMsec )
            goto LABEL_19;
        }
      }
    }
    __asm { vmovaps xmm0, xmm3; timescale }
    g_slowmoCommon.enable = 0;
LABEL_19:
    if ( v5 )
    {
      __asm { vmovaps xmm1, xmm0; value }
      Dvar_SetFloat_Internal(com_timescale, *(float *)&_XMM1);
    }
    else
    {
      Com_SetCodeTimeScale(*(const float *)&_XMM0);
    }
  }
  *(double *)&_XMM0 = SV_Demo_GetTimeScale();
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Com_GetCodeTimeScale();
  __asm { vmovaps xmm7, xmm0 }
  v20 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND);
  v22 = !v20;
  if ( v20 )
  {
    if ( !com_timescale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8583, ASSERT_TYPE_ASSERT, "(com_timescale)", (const char *)&queryFormat, "com_timescale") )
      __debugbreak();
    v22 = dev_timescale == NULL;
    if ( !dev_timescale )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8584, ASSERT_TYPE_ASSERT, "(dev_timescale)", (const char *)&queryFormat, "dev_timescale");
      v22 = !v23;
      if ( v23 )
        __debugbreak();
    }
    _RAX = com_timescale;
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vmovss  xmm0, dword ptr [rax+28h]
      vucomiss xmm0, xmm2
    }
    _RAX = dev_timescale;
    __asm { vmovss  xmm1, dword ptr [rax+28h] }
    if ( !v22 )
      goto LABEL_30;
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vmovaps xmm0, xmm2
      vmovaps xmm1, xmm2
    }
  }
  __asm { vucomiss xmm7, xmm2 }
  if ( !v22 )
    goto LABEL_30;
  __asm { vucomiss xmm1, xmm2 }
  if ( !v22 )
    goto LABEL_30;
  __asm { vucomiss xmm6, xmm2 }
  if ( !v22 )
  {
LABEL_30:
    __asm
    {
      vmulss  xmm0, xmm0, xmm7
      vmulss  xmm1, xmm0, xmm1
      vmulss  xmm3, xmm1, xmm6
    }
    goto LABEL_31;
  }
  __asm { vmovaps xmm3, xmm2 }
LABEL_31:
  if ( com_fixedtime->current.integer )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, ecx
      vcvtsi2ss xmm0, xmm0, esi
      vdivss  xmm3, xmm1, xmm0
    }
    msec = com_fixedtime->current.integer;
  }
  else
  {
    __asm
    {
      vucomiss xmm3, xmm2
      vmovaps xmm3, xmm2
    }
  }
  __asm
  {
    vxorps  xmm4, xmm4, xmm4
    vmovss  cs:?com_timescaleValue@@3MA, xmm3; float com_timescaleValue
  }
  if ( msec < 1 )
    msec = 1;
  __asm { vmovss  cs:g_acculMsec, xmm4 }
  if ( !com_testmonkey || (result = 16i64, !com_testmonkey->current.integer) )
    result = (unsigned int)msec;
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return result;
}

/*
==============
Com_UpdateAllGamePadCheats
==============
*/
void Com_UpdateAllGamePadCheats(LocalClientNum_t localClientNum)
{
  __int64 v3; 
  int *p_buttonTimer; 
  __int64 v5; 
  int *v7; 
  _BYTE *v8; 
  int ControllerFromClient; 
  GamePadButton *v10; 
  int v11; 
  char v12; 
  __int64 v13; 
  void (*v14)(void); 
  _BYTE *v15; 
  unsigned __int64 v16; 
  int v17; 
  int cmdsize; 
  int v19; 
  __int64 i; 
  const char *v21; 

  v3 = localClientNum;
  if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_ONE_CLIENT )
  {
    p_buttonTimer = &com_gamePadCheats[0].buttonTimer;
    v5 = 3i64;
    __asm
    {
      vmovaps [rsp+68h+var_38], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      v7 = p_buttonTimer - 20;
      if ( *(p_buttonTimer - 20) )
      {
        if ( p_buttonTimer == (int *)80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 3926, ASSERT_TYPE_ASSERT, "(cheat)", (const char *)&queryFormat, "cheat") )
          __debugbreak();
        if ( (*((_QWORD *)p_buttonTimer - 4) || *((_QWORD *)p_buttonTimer - 3)) && (!*((_BYTE *)p_buttonTimer + 8) || *((_BYTE *)p_buttonTimer + 8) == (unsigned __int8)Com_GameMode_GetActiveGameMode()) )
        {
          v8 = (_BYTE *)*((_QWORD *)p_buttonTimer - 2);
          if ( !v8 || !*v8 || LUI_CoD_InFrontend() && LUI_IsMenuOpenAndVisible((LocalClientNum_t)v3, *((const char **)p_buttonTimer - 2)) )
          {
            if ( CL_Mgr_GetMode() != CLIENT_MANAGER_MODE_ONE_CLIENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 3945, ASSERT_TYPE_ASSERT, "(CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_ONE_CLIENT)", (const char *)&queryFormat, "CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_ONE_CLIENT") )
              __debugbreak();
            ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
            v10 = (GamePadButton *)(p_buttonTimer - 10);
            v11 = 0;
            while ( 1 )
            {
              if ( *v10 )
              {
                *(double *)&_XMM0 = GPad_GetButton(ControllerFromClient, *v10);
                __asm { vucomiss xmm0, xmm6 }
                if ( v12 )
                  break;
              }
              ++v11;
              ++v10;
              if ( v11 >= 2 )
              {
                if ( !GPad_IsButtonPressed(ControllerFromClient, (GamePadButton)v7[p_buttonTimer[1]]) || (v13 = p_buttonTimer[1], *p_buttonTimer = 0, p_buttonTimer[1] = v13 + 1, (int)v13 + 1 < 10) && v7[v13 + 1] )
                {
                  *p_buttonTimer += cls.frametime;
                  if ( *p_buttonTimer > 400 )
                    *(_QWORD *)p_buttonTimer = 0i64;
                }
                else
                {
                  v14 = (void (*)(void))*((_QWORD *)v7 + 6);
                  p_buttonTimer[1] = 0;
                  if ( v14 )
                    v14();
                  v15 = (_BYTE *)*((_QWORD *)v7 + 7);
                  if ( v15 )
                  {
                    Sys_EnterCriticalSection(CRITSECT_CBUF);
                    v16 = -1i64;
                    do
                      ++v16;
                    while ( v15[v16] );
                    v17 = truncate_cast<int,unsigned __int64>(v16);
                    cmdsize = s_cmd_textArray[v3].cmdsize;
                    v19 = v17 + 1;
                    if ( cmdsize + v17 + 1 <= s_cmd_textArray[v3].maxsize )
                    {
                      for ( i = cmdsize - 1; i >= 0; --i )
                        s_cmd_textArray[v3].data[v19 + i] = s_cmd_textArray[v3].data[i];
                      memcpy_0(s_cmd_textArray[v3].data, v15, v17);
                      s_cmd_textArray[v3].data[v19 - 1] = 10;
                      s_cmd_textArray[v3].cmdsize += v19;
                    }
                    else
                    {
                      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
                    }
                    Sys_LeaveCriticalSection(CRITSECT_CBUF);
                  }
                  v21 = (const char *)*((_QWORD *)p_buttonTimer - 1);
                  if ( v21 )
                    SND_PlayLocalSoundAliasAsync((LocalClientNum_t)v3, v21, SASYS_UI);
                }
                goto LABEL_41;
              }
            }
          }
          Com_ClearGamePadCheat((GamePadCheat *)(p_buttonTimer - 20));
        }
      }
LABEL_41:
      p_buttonTimer += 24;
      --v5;
    }
    while ( v5 );
    __asm { vmovaps xmm6, [rsp+68h+var_38] }
  }
}

/*
==============
Com_UseConstantUserCommandTime
==============
*/
__int64 Com_UseConstantUserCommandTime()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_com_userCmdEnableConstantTime;
  if ( !DVARBOOL_com_userCmdEnableConstantTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdEnableConstantTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
Com_ViewScaleMsec
==============
*/

float __fastcall Com_ViewScaleMsec(double sec)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmulss  xmm6, xmm0, cs:__real@447a0000
  }
  if ( !g_slowmoCommon.viewEnable )
  {
    __asm { vmovss  xmm2, cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewTimescale; SlowMotionCommon g_slowmoCommon }
    goto LABEL_14;
  }
  if ( g_slowmoCommon.viewType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 8666, ASSERT_TYPE_ASSERT, "(g_slowmoCommon.viewType == SLOW_MOTION_LINEAR)", (const char *)&queryFormat, "g_slowmoCommon.viewType == SLOW_MOTION_LINEAR") )
    __debugbreak();
  __asm { vmovss  xmm3, cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewEndTimescale; SlowMotionCommon g_slowmoCommon }
  if ( g_slowmoCommon.viewEndMsec == g_slowmoCommon.viewStartMsec )
    goto $finish;
  __asm
  {
    vmovss  xmm4, cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewStartTimescale; SlowMotionCommon g_slowmoCommon
    vsubss  xmm0, xmm3, xmm4
    vmulss  xmm1, xmm0, xmm6
    vcomiss xmm4, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm1, xmm1, xmm0
    vaddss  xmm2, xmm1, cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewTimescale; SlowMotionCommon g_slowmoCommon
    vmovss  cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewTimescale, xmm2; SlowMotionCommon g_slowmoCommon
  }
  if ( g_slowmoCommon.viewEndMsec < (unsigned int)g_slowmoCommon.viewStartMsec )
  {
    __asm { vcomiss xmm2, xmm3 }
    if ( g_slowmoCommon.viewEndMsec >= (unsigned int)g_slowmoCommon.viewStartMsec )
    {
$finish:
      __asm
      {
        vmovss  cs:?g_slowmoCommon@@3USlowMotionCommon@@A.viewTimescale, xmm3; SlowMotionCommon g_slowmoCommon
        vmovaps xmm2, xmm3
      }
      g_slowmoCommon.viewEnable = 0;
      goto LABEL_14;
    }
    __asm { vcomiss xmm4, xmm3 }
  }
  if ( g_slowmoCommon.viewEndMsec > (unsigned int)g_slowmoCommon.viewStartMsec )
  {
    __asm { vcomiss xmm2, xmm3 }
    if ( g_slowmoCommon.viewEndMsec <= (unsigned int)g_slowmoCommon.viewStartMsec )
      goto $finish;
  }
  __asm { vucomiss xmm4, xmm3 }
  if ( g_slowmoCommon.viewEndMsec == g_slowmoCommon.viewStartMsec )
    goto $finish;
LABEL_14:
  __asm
  {
    vmulss  xmm0, xmm2, xmm6
    vmulss  xmm0, xmm0, cs:__real@3a83126f
    vmaxss  xmm0, xmm0, cs:__real@3a83126f
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
Com_WarnUnimplemented
==============
*/
__int64 Com_WarnUnimplemented(const char *file, const int line, const char *func, const char *comment)
{
  unsigned int v8; 
  unsigned __int8 *v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  Com_WarnUnimplemented::__l2::Unimplemented *v17; 
  Com_WarnUnimplemented::__l2::Unimplemented *v26; 
  __int64 v27; 
  char *fmt; 
  unsigned int v29; 
  char dest[96]; 
  char v31[60]; 
  __int64 v32; 
  int v33; 

  if ( dword_14CE9C358 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14CE9C358);
    if ( dword_14CE9C358 == -1 )
    {
      v26 = allUnimplemented;
      v27 = 256i64;
      do
      {
        Com_WarnUnimplemented_::_2_::Unimplemented::Unimplemented(v26++);
        --v27;
      }
      while ( v27 );
      j__Init_thread_footer(&dword_14CE9C358);
    }
  }
  memset_0(&v29, 0, 0xACui64);
  Core_strcpy(dest, 0x60ui64, file);
  Core_strcpy(v31, 0x40ui64, func);
  HIDWORD(v32) = line;
  v8 = -1;
  v9 = (unsigned __int8 *)&v29 + 2;
  v10 = 43i64;
  do
  {
    v11 = (v8 >> 8) ^ g_crc32Table[(unsigned __int8)v8 ^ (unsigned __int64)*(v9 - 2)];
    v12 = (v11 >> 8) ^ g_crc32Table[(unsigned __int8)v11 ^ (unsigned __int64)*(v9 - 1)];
    v13 = (v12 >> 8) ^ g_crc32Table[*v9 ^ (unsigned __int64)(unsigned __int8)v12];
    v8 = (v13 >> 8) ^ g_crc32Table[(unsigned __int8)v13 ^ (unsigned __int64)v9[1]];
    v9 += 4;
    --v10;
  }
  while ( v10 );
  v14 = ~v8;
  v29 = v14;
  v15 = 0;
  v16 = numUnimplemented;
  if ( numUnimplemented )
  {
    v17 = allUnimplemented;
    while ( v17->crc != v14 )
    {
      ++v15;
      ++v17;
      if ( v15 >= numUnimplemented )
        goto LABEL_8;
    }
    ++allUnimplemented[v15].count;
    return v14;
  }
  else
  {
LABEL_8:
    if ( numUnimplemented >= 0x100 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 10841, ASSERT_TYPE_ASSERT, "(numUnimplemented < ( sizeof( *array_counter( allUnimplemented ) ) + 0 ))", (const char *)&queryFormat, "numUnimplemented < ARRAY_COUNT( allUnimplemented )") )
        __debugbreak();
      v16 = numUnimplemented;
    }
    _RDX = &allUnimplemented[v16];
    _RCX = &v29;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rdx], ymm0
      vmovups ymm0, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [rdx+20h], ymm0
      vmovups ymm0, ymmword ptr [rcx+40h]
      vmovups ymmword ptr [rdx+40h], ymm0
      vmovups ymm0, ymmword ptr [rcx+60h]
      vmovups ymmword ptr [rdx+60h], ymm0
      vmovups ymm1, ymmword ptr [rcx+80h]
      vmovups ymmword ptr [rdx+80h], ymm1
    }
    *(_QWORD *)&_RDX->func[60] = v32;
    _RDX->count = v33;
    numUnimplemented = v16 + 1;
    LODWORD(fmt) = v16 + 1;
    Com_PrintWarning(1, "%s(%d): UNIMPLEMENTED(%3d): %s %s\n", file, (unsigned int)line, fmt, func, comment);
    return v29;
  }
}

/*
==============
Com_WriteConfig_f
==============
*/
void Com_WriteConfig_f(void)
{
  const char *v0; 
  LocalClientNum_t v1; 
  const char *v2; 
  fileHandle_t *v3; 
  fileHandle_t v4; 
  fileHandle_t dest[8]; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    Core_strcpy_truncate((char *)dest, 0x40ui64, v0);
    Com_DefaultExtension((char *)dest, 64, ".cfg");
    Com_Printf(0, "Writing %s.\n", (const char *)dest);
    v1 = Cmd_LocalClientNum();
    v3 = FS_FOpenFileWrite(dest, v2);
    v4.handle.handle = (__int64)v3;
    if ( v3 == (fileHandle_t *)-1i64 )
    {
      Com_Printf(16, "Couldn't write %s.\n", (const char *)dest);
    }
    else
    {
      FS_Printf((fileHandle_t)v3, "
      CL_Keys_WriteCheatBindings(v1, v4);
      Dvar_WriteVariables(v4);
      Con_WriteFilterConfigString(v4);
      FS_Flush(v4);
      FS_FCloseFile(v4);
    }
  }
  else
  {
    Com_Printf(0, "Usage: writeconfig <filename>\n");
  }
}

/*
==============
Com_WriteDefaultsToFile
==============
*/
void Com_WriteDefaultsToFile(const char *filename, const char *a2)
{
  fileHandle_t *v3; 
  fileHandle_t v4; 

  v3 = FS_FOpenFileWrite((fileHandle_t *)filename, a2);
  v4.handle.handle = (__int64)v3;
  if ( v3 == (fileHandle_t *)-1i64 )
  {
    Com_Printf(16, "Couldn't write %s.\n", filename);
  }
  else
  {
    FS_Printf((fileHandle_t)v3, "
    Dvar_WriteDefaults(v4);
    FS_FCloseFile(v4);
  }
}

/*
==============
Com_WriteDefaults_f
==============
*/
void Com_WriteDefaults_f(void)
{
  const char *v0; 
  const char *v1; 
  fileHandle_t *v2; 
  fileHandle_t v3; 
  fileHandle_t dest[8]; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    Core_strcpy_truncate((char *)dest, 0x40ui64, v0);
    Com_DefaultExtension((char *)dest, 64, ".cfg");
    Com_Printf(0, "Writing %s.\n", (const char *)dest);
    v2 = FS_FOpenFileWrite(dest, v1);
    v3.handle.handle = (__int64)v2;
    if ( v2 == (fileHandle_t *)-1i64 )
    {
      Com_Printf(16, "Couldn't write %s.\n", (const char *)dest);
    }
    else
    {
      FS_Printf((fileHandle_t)v2, "
      Dvar_WriteDefaults(v3);
      FS_FCloseFile(v3);
    }
  }
  else
  {
    Com_Printf(0, "Usage: writedefaults <filename>\n");
  }
}

/*
==============
Com_XAnimCreateSmallTree
==============
*/
XAnimTree *Com_XAnimCreateSmallTree(XAnim_s *anims, XAnimOwner owner)
{
  return XAnimCreateTree(anims, MT_AllocAnimTree, (XAnimOwner)(unsigned __int8)owner);
}

/*
==============
Com_XAnimFreeSmallTree
==============
*/
void Com_XAnimFreeSmallTree(XAnimTree *animtree)
{
  XAnimFreeTree(animtree, MT_Free);
}

/*
==============
DDLAssert
==============
*/
void DDLAssert(bool expr, const char *exprString, const char *file, const char *function, int line, const char *msg)
{
  if ( !expr )
  {
    Com_PrintError(28, "DDL Assert Failed: %s, in %s:%s%d: %s", exprString, file, function, line, msg);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\common.cpp", 6501, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DDL assertion failed.") )
      __debugbreak();
  }
}

/*
==============
DDLDoesAssetExist
==============
*/

bool __fastcall DDLDoesAssetExist(const char *fileName)
{
  return Com_DDL_DoesAssetExist(fileName);
}

/*
==============
DDLErr
==============
*/
void DDLErr(const char *const msg)
{
  Com_PrintError(28, (const char *)&queryFormat, msg);
}

/*
==============
DDLGetAsset
==============
*/
DDLFile *DDLGetAsset(const char *fileName)
{
  return Com_DDL_FindAsset(fileName, 0);
}

/*
==============
DDLPrint
==============
*/
void DDLPrint(const char *const msg)
{
  Com_Printf(28, (const char *)&queryFormat, msg);
}

/*
==============
DDLWarn
==============
*/
void DDLWarn(const char *const msg)
{
  Com_PrintWarning(28, (const char *)&queryFormat, msg);
}

/*
==============
MT_AllocAnimTree
==============
*/
void MT_AllocAnimTree
{
	//Failed decompiling
}

/*
==============
NetAdr_SetType
==============
*/
void NetAdr_SetType(netadr_t *addr, netadrtype_t type)
{
  addr->type = type;
}

/*
==============
Sys_Printf
==============
*/
void Sys_Printf(const char *msg, ...)
{
  char dest[256]; 
  va_list va; 

  va_start(va, msg);
  Com_vsprintf_truncate(dest, 0x100ui64, 0x100ui64, msg, va);
  Sys_Print(dest);
}

