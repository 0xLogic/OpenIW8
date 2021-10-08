/*
==============
LiveRegionInfo_GetCartesian2DLatLong
==============
*/

int __fastcall LiveRegionInfo_GetCartesian2DLatLong(float *lat, float *lon)
{
  return ?LiveRegionInfo_GetCartesian2DLatLong@@YAHPEAM0@Z(lat, lon);
}

/*
==============
dwReportIP
==============
*/

int __fastcall dwReportIP(overlappedTask *const task)
{
  return ?dwReportIP@@YAHQEAUoverlappedTask@@@Z(task);
}

/*
==============
LiveRegionInfo_GetCityString
==============
*/

const char *__fastcall LiveRegionInfo_GetCityString()
{
  return ?LiveRegionInfo_GetCityString@@YAPEBDXZ();
}

/*
==============
LiveRegionInfo_GetRegionString
==============
*/

const char *__fastcall LiveRegionInfo_GetRegionString()
{
  return ?LiveRegionInfo_GetRegionString@@YAPEBDXZ();
}

/*
==============
LiveRegionInfo_GetTimezoneString
==============
*/

const char *__fastcall LiveRegionInfo_GetTimezoneString()
{
  return ?LiveRegionInfo_GetTimezoneString@@YAPEBDXZ();
}

/*
==============
LiveRegionInfo_GetLatLong
==============
*/

int __fastcall LiveRegionInfo_GetLatLong(float *lat, float *lon)
{
  return ?LiveRegionInfo_GetLatLong@@YAHPEAM0@Z(lat, lon);
}

/*
==============
LiveRegionInfo_NeedsRegionSync
==============
*/

int __fastcall LiveRegionInfo_NeedsRegionSync()
{
  return ?LiveRegionInfo_NeedsRegionSync@@YAHXZ();
}

/*
==============
LiveRegionInfo_RegisterDvars
==============
*/

void LiveRegionInfo_RegisterDvars(void)
{
  ?LiveRegionInfo_RegisterDvars@@YAXXZ();
}

/*
==============
LiveRegionInfo_Init
==============
*/

void __fastcall LiveRegionInfo_Init(bool forceRetry)
{
  ?LiveRegionInfo_Init@@YAX_N@Z(forceRetry);
}

/*
==============
LiveRegionInfo_GetASN
==============
*/

int __fastcall LiveRegionInfo_GetASN(unsigned int *asn)
{
  return ?LiveRegionInfo_GetASN@@YAHPEAI@Z(asn);
}

/*
==============
dwReportIPComplete
==============
*/

taskCompleteResults __fastcall dwReportIPComplete(overlappedTask *const task)
{
  return ?dwReportIPComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@@Z(task);
}

/*
==============
LiveRegionInfo_GetCountryString
==============
*/

const char *__fastcall LiveRegionInfo_GetCountryString()
{
  return ?LiveRegionInfo_GetCountryString@@YAPEBDXZ();
}

/*
==============
LiveRegionInfo_GetCountryCodeString
==============
*/

const char *__fastcall LiveRegionInfo_GetCountryCodeString()
{
  return ?LiveRegionInfo_GetCountryCodeString@@YAPEBDXZ();
}

/*
==============
dwRetrieveRegion
==============
*/

int __fastcall dwRetrieveRegion(overlappedTask *const task)
{
  return ?dwRetrieveRegion@@YAHQEAUoverlappedTask@@@Z(task);
}

/*
==============
LiveRegionInfo_GetCountryCode
==============
*/

int __fastcall LiveRegionInfo_GetCountryCode(unsigned int *countryCode)
{
  return ?LiveRegionInfo_GetCountryCode@@YAHPEAI@Z(countryCode);
}

/*
==============
LiveRegionInfo_HasInfo
==============
*/

int __fastcall LiveRegionInfo_HasInfo()
{
  return ?LiveRegionInfo_HasInfo@@YAHXZ();
}

/*
==============
LiveRegionInfo_Pump
==============
*/

void __fastcall LiveRegionInfo_Pump(const int controller)
{
  ?LiveRegionInfo_Pump@@YAXH@Z(controller);
}

/*
==============
dwRegionHandleTaskError
==============
*/

void __fastcall dwRegionHandleTaskError(overlappedTask *const task, bdLobbyErrorCode errorCode)
{
  ?dwRegionHandleTaskError@@YAXQEAUoverlappedTask@@W4bdLobbyErrorCode@@@Z(task, errorCode);
}

/*
==============
dwRetrieveRegionComplete
==============
*/

taskCompleteResults __fastcall dwRetrieveRegionComplete(overlappedTask *const task)
{
  return ?dwRetrieveRegionComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@@Z(task);
}

/*
==============
LiveRegionInfo_GetASN
==============
*/
__int64 LiveRegionInfo_GetASN(unsigned int *asn)
{
  bool v2; 

  if ( !asn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 516, ASSERT_TYPE_ASSERT, "(asn)", (const char *)&queryFormat, "asn") )
    __debugbreak();
  v2 = s_dmlState == DML_STATE_COMPLETE;
  *asn = 0;
  if ( !v2 )
    return 0i64;
  *asn = s_regionInfo.m_asn;
  return 1i64;
}

/*
==============
LiveRegionInfo_GetCartesian2DLatLong
==============
*/
__int64 LiveRegionInfo_GetCartesian2DLatLong(float *lat, float *lon)
{
  __int64 result; 
  bool v5; 

  _RBX = lon;
  _RDI = lat;
  if ( !lat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 496, ASSERT_TYPE_ASSERT, "(lat)", (const char *)&queryFormat, "lat") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 497, ASSERT_TYPE_ASSERT, "(lon)", (const char *)&queryFormat, "lon") )
    __debugbreak();
  result = 0i64;
  v5 = s_dmlState == DML_STATE_COMPLETE;
  *_RDI = 0.0;
  *_RBX = 0.0;
  if ( v5 )
  {
    __asm
    {
      vmovss  xmm0, cs:s_regionInfo.m_latitude
      vmovss  xmm3, cs:__real@42340000; standardLatitudeDegrees
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, cs:s_regionInfo.m_longitude
      vmovss  dword ptr [rbx], xmm1
    }
    bdDMLInfo::get2DCartesianLocation(&s_regionInfo, _RDI, _RBX, *(float *)&_XMM3);
    return 1i64;
  }
  return result;
}

/*
==============
LiveRegionInfo_GetCityString
==============
*/
char *LiveRegionInfo_GetCityString()
{
  return s_regionInfo.m_city;
}

/*
==============
LiveRegionInfo_GetCountryCode
==============
*/
__int64 LiveRegionInfo_GetCountryCode(unsigned int *countryCode)
{
  bool v2; 
  __int64 v3; 
  __int64 v4; 
  char v5; 
  __int64 v6; 
  char v7; 
  unsigned int v9; 

  if ( !countryCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 457, ASSERT_TYPE_ASSERT, "(countryCode)", (const char *)&queryFormat, "countryCode") )
    __debugbreak();
  v2 = s_dmlState == DML_STATE_COMPLETE;
  *countryCode = 21333;
  if ( v2 )
  {
    v3 = 0i64;
    v4 = 0x7FFFFFFFi64;
    do
    {
      v5 = asc_143DDEC2C[v3];
      v6 = v4;
      v7 = s_regionInfo.m_country[v3 - 16];
      ++v3;
      --v4;
      if ( !v6 )
        break;
      if ( v5 != v7 )
      {
        v9 = *((char *)&s_regionInfo.__vftable + 16) + (*((char *)&s_regionInfo.__vftable + 17) << 8);
        *countryCode = v9;
        if ( v9 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 472, ASSERT_TYPE_SANITY, "( (*countryCode) <= 0xffff )", (const char *)&queryFormat, "(*countryCode) <= USHRT_MAX") )
          __debugbreak();
        return 1i64;
      }
    }
    while ( v5 );
  }
  return 0i64;
}

/*
==============
LiveRegionInfo_GetCountryCodeString
==============
*/
bdDMLInfo_vtbl **LiveRegionInfo_GetCountryCodeString()
{
  return &s_regionInfo.__vftable + 2;
}

/*
==============
LiveRegionInfo_GetCountryString
==============
*/
const char *LiveRegionInfo_GetCountryString()
{
  return (char *)&s_regionInfo.__vftable + 19;
}

/*
==============
LiveRegionInfo_GetLatLong
==============
*/
__int64 LiveRegionInfo_GetLatLong(float *lat, float *lon)
{
  __int64 result; 
  bool v5; 

  _RBX = lon;
  _RDI = lat;
  if ( !lat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 479, ASSERT_TYPE_ASSERT, "(lat)", (const char *)&queryFormat, "lat") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 480, ASSERT_TYPE_ASSERT, "(lon)", (const char *)&queryFormat, "lon") )
    __debugbreak();
  result = 0i64;
  v5 = s_dmlState == DML_STATE_COMPLETE;
  *_RDI = 0.0;
  *_RBX = 0.0;
  if ( v5 )
  {
    __asm
    {
      vmovss  xmm0, cs:s_regionInfo.m_latitude
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, cs:s_regionInfo.m_longitude
      vmovss  dword ptr [rbx], xmm1
    }
    return 1i64;
  }
  return result;
}

/*
==============
LiveRegionInfo_GetRegionString
==============
*/
char *LiveRegionInfo_GetRegionString()
{
  return s_regionInfo.m_region;
}

/*
==============
LiveRegionInfo_GetTimezoneString
==============
*/
char *LiveRegionInfo_GetTimezoneString()
{
  return s_regionInfo.m_timezone;
}

/*
==============
LiveRegionInfo_HasInfo
==============
*/
_BOOL8 LiveRegionInfo_HasInfo()
{
  return s_dmlState == DML_STATE_COMPLETE;
}

/*
==============
LiveRegionInfo_Init
==============
*/
void LiveRegionInfo_Init(bool forceRetry)
{
  if ( s_dmlState != DML_STATE_COMPLETE || forceRetry )
  {
    s_dmlState = DML_STATE_IDLE;
    dwClearTask(&s_task);
    s_task.active = 0;
    s_regionLookupStartTime = Sys_Milliseconds();
  }
}

/*
==============
LiveRegionInfo_NeedsRegionSync
==============
*/
_BOOL8 LiveRegionInfo_NeedsRegionSync()
{
  int integer; 
  int v1; 
  _BOOL8 result; 

  if ( !dw_region_lookup_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 72, ASSERT_TYPE_ASSERT, "(dw_region_lookup_timeout)", (const char *)&queryFormat, "dw_region_lookup_timeout") )
    __debugbreak();
  result = 0;
  if ( s_dmlState != DML_STATE_COMPLETE )
  {
    integer = dw_region_lookup_timeout->current.integer;
    if ( integer > 0 )
    {
      v1 = Sys_Milliseconds();
      if ( !s_regionLookupStartTime || v1 - s_regionLookupStartTime - integer < 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
LiveRegionInfo_Pump
==============
*/
void LiveRegionInfo_Pump(const int controller)
{
  int ControllerFromClient; 
  int v2; 
  unsigned int v3; 
  DWServicesAccess *v4; 
  bdTask::bdStatus v5; 
  bdLobbyErrorCode v6; 
  bdLobbyErrorCode v7; 
  taskCompleteResults v8; 
  char *v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  DWServicesAccess *Instance; 
  bdTask::bdStatus v15; 
  bdLobbyErrorCode ErrorCode; 
  bdLobbyErrorCode v17; 
  int v18; 
  DmlState v19; 
  int Region; 
  DmlState v21; 
  int v22; 
  char dest[80]; 

  if ( CL_Mgr_GetMode() )
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  else
    ControllerFromClient = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
  switch ( s_dmlState )
  {
    case DML_STATE_IDLE:
      if ( dwGetLogOnStatus(ControllerFromClient) == DW_LIVE_CONNECTED && retry_time < Sys_Milliseconds() && retry_count < 0xEA61 )
      {
        Region = dwRetrieveRegion(&s_task);
        v21 = DML_STATE_ERROR;
        if ( Region )
          v21 = DML_STATE_RETRIEVING_REGION;
        s_dmlState = v21;
      }
      return;
    case DML_STATE_RECORDING_IP:
      if ( dwGetLogOnStatus(s_task.controllerIndex) == DW_LIVE_CONNECTED )
      {
        if ( s_task.u.remoteTask.m_ptr )
        {
          Instance = DWServicesAccess::GetInstance();
          if ( DWServicesAccess::isReady(Instance, s_task.controllerIndex) )
          {
            v15 = s_task.u.remoteTask.m_ptr->getStatus(s_task.u.remoteTask.m_ptr);
            ErrorCode = bdRemoteTask::getErrorCode(s_task.u.remoteTask.m_ptr);
            v17 = ErrorCode;
            if ( v15 == BD_DONE && ErrorCode )
              dwRegionHandleTaskError(&s_task, ErrorCode);
            v8 = dwTaskStatusConvert(v15, v17);
            if ( v8 == TASK_COMPLETE )
            {
              v18 = dwRetrieveRegion(&s_task);
              v19 = DML_STATE_ERROR;
              if ( v18 )
                v19 = DML_STATE_RETRIEVING_REGION;
              goto LABEL_34;
            }
            goto LABEL_36;
          }
        }
        goto LABEL_38;
      }
LABEL_39:
      v19 = DML_STATE_ERROR;
      goto LABEL_34;
    case DML_STATE_RETRIEVING_REGION:
      if ( dwGetLogOnStatus(s_task.controllerIndex) == DW_LIVE_CONNECTED )
      {
        if ( s_task.u.remoteTask.m_ptr )
        {
          v4 = DWServicesAccess::GetInstance();
          if ( DWServicesAccess::isReady(v4, s_task.controllerIndex) )
          {
            v5 = s_task.u.remoteTask.m_ptr->getStatus(s_task.u.remoteTask.m_ptr);
            v6 = bdRemoteTask::getErrorCode(s_task.u.remoteTask.m_ptr);
            v7 = v6;
            if ( v5 == BD_DONE && v6 )
              dwRegionHandleTaskError(&s_task, v6);
            v8 = dwTaskStatusConvert(v5, v7);
            if ( v8 == TASK_COMPLETE )
            {
              Com_sprintf(dest, 0x43ui64, "%s%s", (const char *)&s_regionInfo.__vftable + 16, s_regionInfo.m_region);
              v9 = dest;
              v10 = -1;
              v11 = -1i64;
              do
                ++v11;
              while ( dest[v11] );
              v12 = (unsigned int)v11;
              if ( (_DWORD)v11 )
              {
                do
                {
                  v13 = (unsigned __int8)*v9++;
                  v10 = (v10 >> 8) ^ g_crc32Table[v13 ^ (unsigned __int8)v10];
                  --v12;
                }
                while ( v12 );
              }
              v22 = ~v10 & 0x7FFFFFFF;
              s_regionCountryHash = v22;
              Com_Printf(25, "Region Info : Country Code = %s Country = %s Region = %s hash = %08x\n", (const char *)&s_regionInfo.__vftable + 16, (const char *)&s_regionInfo.__vftable + 19, s_regionInfo.m_region, v22);
              s_dmlState = DML_STATE_COMPLETE;
              return;
            }
LABEL_36:
            if ( v8 != TASK_ERROR )
              return;
            v19 = DML_STATE_ERROR;
LABEL_34:
            s_dmlState = v19;
            return;
          }
        }
LABEL_38:
        Com_Printf(131097, "Failed to report IP\n");
        dwRegionHandleTaskError(&s_task, BD_HANDLE_TASK_FAILED);
        goto LABEL_39;
      }
      goto LABEL_39;
    case DML_STATE_COMPLETE:
LABEL_12:
      dwClearTask(&s_task);
      s_task.active = 0;
      return;
    case DML_STATE_ERROR:
      retry_count *= 2;
      v2 = Sys_Milliseconds();
      v3 = 60000;
      s_dmlState = DML_STATE_IDLE;
      if ( retry_count < 0xEA60 )
        v3 = retry_count;
      retry_time = v3 + v2;
      goto LABEL_12;
  }
}

/*
==============
LiveRegionInfo_RegisterDvars
==============
*/
void LiveRegionInfo_RegisterDvars(void)
{
  dw_region_lookup_timeout = Dvar_RegisterInt("NQONKSKTLQ", 30000, 0, 120000, 0, "Timeout (in MS) after which we will accept not having found a region code and use the default");
}

/*
==============
dwRegionHandleTaskError
==============
*/
void dwRegionHandleTaskError(overlappedTask *const task, bdLobbyErrorCode errorCode)
{
  char buffer[64]; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 530, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  Com_Printf(131097, "%s()\n", "dwRegionHandleTaskError");
  dwLobbyErrorCodeToString(errorCode, buffer, 0x40u);
  Com_PrintError(131097, "\t DW region info task type %d errorCode %i - '%s'\n", (unsigned int)task->type, (unsigned int)errorCode, buffer);
  dwClearTask(task);
  task->active = 0;
  if ( errorCode == BD_TOO_MANY_TASKS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 545, ASSERT_TYPE_ASSERT, "(errorCode != BD_TOO_MANY_TASKS)", (const char *)&queryFormat, "errorCode != BD_TOO_MANY_TASKS") )
    __debugbreak();
}

/*
==============
dwReportIP
==============
*/
__int64 dwReportIP(overlappedTask *const task)
{
  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 320, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  return 0i64;
}

/*
==============
dwReportIPComplete
==============
*/
taskCompleteResults dwReportIPComplete(overlappedTask *const task)
{
  DWServicesAccess *Instance; 
  bdTask::bdStatus v3; 
  bdLobbyErrorCode ErrorCode; 
  bdLobbyErrorCode v5; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 386, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( dwGetLogOnStatus(task->controllerIndex) != DW_LIVE_CONNECTED )
    return 2;
  if ( !task->u.remoteTask.m_ptr || (Instance = DWServicesAccess::GetInstance(), !DWServicesAccess::isReady(Instance, task->controllerIndex)) )
  {
    Com_Printf(131097, "Failed to report IP\n");
    dwRegionHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
  v3 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
  ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
  v5 = ErrorCode;
  if ( v3 == BD_DONE )
  {
    if ( ErrorCode )
      dwRegionHandleTaskError(task, ErrorCode);
  }
  return dwTaskStatusConvert(v3, v5);
}

/*
==============
dwRetrieveRegion
==============
*/
__int64 dwRetrieveRegion(overlappedTask *const task)
{
  unsigned int v2; 
  bdRemoteTask *m_ptr; 
  int ControllerFromClient; 
  int v5; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWDML *DML; 
  const bdReference<bdRemoteTask> *UserData; 
  bdReference<bdRemoteTask> other; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 329, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task", -2i64) )
    __debugbreak();
  v2 = 0;
  m_ptr = NULL;
  other.m_ptr = NULL;
  if ( CL_Mgr_GetMode() )
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  else
    ControllerFromClient = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
  v5 = ControllerFromClient;
  if ( dwGetLogOnStatus(ControllerFromClient) == DW_LIVE_CONNECTED && retry_time <= Sys_Milliseconds() && retry_count < 0xEA61 )
  {
    if ( task )
    {
      Instance = DWServicesAccess::GetInstance();
      if ( DWServicesAccess::isReady(Instance, v5) )
      {
        task->controllerIndex = v5;
        v7 = DWServicesAccess::GetInstance();
        DML = DWServicesAccess::GetDML(v7, v5);
        UserData = DWDML::getUserData(DML, &result, &s_regionInfo);
        bdReference<bdRemoteTask>::operator=(&other, UserData);
        if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        m_ptr = other.m_ptr;
        if ( other.m_ptr )
        {
          bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, &other);
          v2 = 1;
        }
      }
    }
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdRemoteTask *, __int64))other.m_ptr->~bdReferencable)(other.m_ptr, 1i64);
  return v2;
}

/*
==============
dwRetrieveRegionComplete
==============
*/
taskCompleteResults dwRetrieveRegionComplete(overlappedTask *const task)
{
  DWServicesAccess *Instance; 
  bdTask::bdStatus v3; 
  bdLobbyErrorCode ErrorCode; 
  bdLobbyErrorCode v5; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwregioninfo.cpp", 419, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( dwGetLogOnStatus(task->controllerIndex) != DW_LIVE_CONNECTED )
    return 2;
  if ( !task->u.remoteTask.m_ptr || (Instance = DWServicesAccess::GetInstance(), !DWServicesAccess::isReady(Instance, task->controllerIndex)) )
  {
    Com_Printf(131097, "Failed to report IP\n");
    dwRegionHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
  v3 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
  ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
  v5 = ErrorCode;
  if ( v3 == BD_DONE )
  {
    if ( ErrorCode )
      dwRegionHandleTaskError(task, ErrorCode);
  }
  return dwTaskStatusConvert(v3, v5);
}

