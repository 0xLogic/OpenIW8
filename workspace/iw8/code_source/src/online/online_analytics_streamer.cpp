/*
==============
AnalyticsStream::StartStream
==============
*/

void __fastcall AnalyticsStream::StartStream(AnalyticsStream *this, const char *fileNamePrefix)
{
  ?StartStream@AnalyticsStream@@QEAAXPEBD@Z(this, fileNamePrefix);
}

/*
==============
AnalyticsStreamer_EnableSystemBasedOnPackageTypeIfRequired
==============
*/

void AnalyticsStreamer_EnableSystemBasedOnPackageTypeIfRequired(void)
{
  ?AnalyticsStreamer_EnableSystemBasedOnPackageTypeIfRequired@@YAXXZ();
}

/*
==============
AnalyticsStreamer_Init
==============
*/

void AnalyticsStreamer_Init(void)
{
  ?AnalyticsStreamer_Init@@YAXXZ();
}

/*
==============
AnalyticsStreamer_Frame
==============
*/

void AnalyticsStreamer_Frame(void)
{
  ?AnalyticsStreamer_Frame@@YAXXZ();
}

/*
==============
AnalyticsStream::ResetBuffer
==============
*/

void __fastcall AnalyticsStream::ResetBuffer(AnalyticsStream *this, AnalyticsBuffer *buffer)
{
  ?ResetBuffer@AnalyticsStream@@QEAAXPEAUAnalyticsBuffer@@@Z(this, buffer);
}

/*
==============
AnalyticsStreamer_EndStream
==============
*/

void __fastcall AnalyticsStreamer_EndStream(PooledStorageFileTypes streamType)
{
  ?AnalyticsStreamer_EndStream@@YAXW4PooledStorageFileTypes@@@Z(streamType);
}

/*
==============
AnalyticsStream::Frame
==============
*/

void __fastcall AnalyticsStream::Frame(AnalyticsStream *this)
{
  ?Frame@AnalyticsStream@@QEAAXXZ(this);
}

/*
==============
AnalyticsStreamer_MarkCurrentBufferToBeFlushedIfStreamActive
==============
*/

void __fastcall AnalyticsStreamer_MarkCurrentBufferToBeFlushedIfStreamActive(PooledStorageFileTypes streamType)
{
  ?AnalyticsStreamer_MarkCurrentBufferToBeFlushedIfStreamActive@@YAXW4PooledStorageFileTypes@@@Z(streamType);
}

/*
==============
AnalyticsStream::ResetPooledStorageWriteInfo
==============
*/

void __fastcall AnalyticsStream::ResetPooledStorageWriteInfo(AnalyticsStream *this, pooledStorageWriteFileInfo *writeInfo)
{
  ?ResetPooledStorageWriteInfo@AnalyticsStream@@QEAAXPEAUpooledStorageWriteFileInfo@@@Z(this, writeInfo);
}

/*
==============
AnalyticsStreamer_StartStream
==============
*/

void __fastcall AnalyticsStreamer_StartStream(PooledStorageFileTypes streamType, const char *fileNamePrefix)
{
  ?AnalyticsStreamer_StartStream@@YAXW4PooledStorageFileTypes@@PEBD@Z(streamType, fileNamePrefix);
}

/*
==============
AnalyticsStream::HasAnyOwnerTag
==============
*/

bool __fastcall AnalyticsStream::HasAnyOwnerTag(AnalyticsStream *this)
{
  return ?HasAnyOwnerTag@AnalyticsStream@@QEAA_NXZ(this);
}

/*
==============
AnalyticsStreamer_WriteToBuffer
==============
*/

void __fastcall AnalyticsStreamer_WriteToBuffer(PooledStorageFileTypes streamType, const char *data, int dataSize)
{
  ?AnalyticsStreamer_WriteToBuffer@@YAXW4PooledStorageFileTypes@@PEBDH@Z(streamType, data, dataSize);
}

/*
==============
AnalyticsStreamer_IsSystemEnabled
==============
*/

bool __fastcall AnalyticsStreamer_IsSystemEnabled()
{
  return ?AnalyticsStreamer_IsSystemEnabled@@YA_NXZ();
}

/*
==============
AnalyticsStream::AddTag
==============
*/

void __fastcall AnalyticsStream::AddTag(AnalyticsStream *this, unsigned __int64 priTag, unsigned __int64 secTag)
{
  ?AddTag@AnalyticsStream@@QEAAX_K0@Z(this, priTag, secTag);
}

/*
==============
AnalyticsStreamer_PublisherVariablesFetched
==============
*/

void __fastcall AnalyticsStreamer_PublisherVariablesFetched()
{
  ?AnalyticsStreamer_PublisherVariablesFetched@@YAXXZ();
}

/*
==============
AnalyticsStream::TryFlush
==============
*/

bool __fastcall AnalyticsStream::TryFlush(AnalyticsStream *this, AnalyticsBuffer *buffer)
{
  return ?TryFlush@AnalyticsStream@@QEAA_NPEAUAnalyticsBuffer@@@Z(this, buffer);
}

/*
==============
AnalyticsStream::WriteToBuffer
==============
*/

void __fastcall AnalyticsStream::WriteToBuffer(AnalyticsStream *this, const char *data, int dataSize)
{
  ?WriteToBuffer@AnalyticsStream@@QEAAXPEBDH@Z(this, data, dataSize);
}

/*
==============
AnalyticsStream::MarkCurrentBufferToBeFlushedIfStreamActive
==============
*/

void __fastcall AnalyticsStream::MarkCurrentBufferToBeFlushedIfStreamActive(AnalyticsStream *this)
{
  ?MarkCurrentBufferToBeFlushedIfStreamActive@AnalyticsStream@@QEAAXXZ(this);
}

/*
==============
AnalyticsStream::EndStream
==============
*/

void __fastcall AnalyticsStream::EndStream(AnalyticsStream *this)
{
  ?EndStream@AnalyticsStream@@QEAAXXZ(this);
}

/*
==============
AnalyticsStream::Init
==============
*/

void __fastcall AnalyticsStream::Init(AnalyticsStream *this, PooledStorageFileTypes streamType, AnalyticsBuffer *buffers, int numBuffers, int maxSizeOfEachBuffer)
{
  ?Init@AnalyticsStream@@QEAAXW4PooledStorageFileTypes@@PEAUAnalyticsBuffer@@HH@Z(this, streamType, buffers, numBuffers, maxSizeOfEachBuffer);
}

/*
==============
AnalyticsStream::AssignNextBufferToWriteTo
==============
*/

void __fastcall AnalyticsStream::AssignNextBufferToWriteTo(AnalyticsStream *this)
{
  ?AssignNextBufferToWriteTo@AnalyticsStream@@QEAAXXZ(this);
}

/*
==============
AnalyticsStream::MarkCurrentBufferToBeFlushed
==============
*/

void __fastcall AnalyticsStream::MarkCurrentBufferToBeFlushed(AnalyticsStream *this)
{
  ?MarkCurrentBufferToBeFlushed@AnalyticsStream@@QEAAXXZ(this);
}

/*
==============
AnalyticsStream::UploadBufferData
==============
*/

bool __fastcall AnalyticsStream::UploadBufferData(AnalyticsStream *this, AnalyticsBuffer *buffer)
{
  return ?UploadBufferData@AnalyticsStream@@QEAA_NPEAUAnalyticsBuffer@@@Z(this, buffer);
}

/*
==============
AnalyticsStreamer_FileUploadFailure
==============
*/

void __fastcall AnalyticsStreamer_FileUploadFailure(const int controllerIndex, bdLobbyErrorCode error, unsigned __int64 transactionId, void *userData)
{
  ?AnalyticsStreamer_FileUploadFailure@@YAXHW4bdLobbyErrorCode@@_KPEAX@Z(controllerIndex, error, transactionId, userData);
}

/*
==============
AnalyticsStreamer_FileUploadSuccessful
==============
*/

void __fastcall AnalyticsStreamer_FileUploadSuccessful(const int controllerIndex, unsigned __int64 fileID, void *userData)
{
  ?AnalyticsStreamer_FileUploadSuccessful@@YAXH_KPEAX@Z(controllerIndex, fileID, userData);
}

/*
==============
AnalyticsStream::IsAvailableForWrite
==============
*/

bool __fastcall AnalyticsStream::IsAvailableForWrite(AnalyticsStream *this, AnalyticsBuffer *buffer)
{
  return ?IsAvailableForWrite@AnalyticsStream@@QEAA_NPEAUAnalyticsBuffer@@@Z(this, buffer);
}

/*
==============
AnalyticsStream::AnyBufferBeingFlushed
==============
*/

bool __fastcall AnalyticsStream::AnyBufferBeingFlushed(AnalyticsStream *this)
{
  return ?AnyBufferBeingFlushed@AnalyticsStream@@QEAA_NXZ(this);
}

/*
==============
AnalyticsStreamer_AddTag
==============
*/

void __fastcall AnalyticsStreamer_AddTag(PooledStorageFileTypes streamType, unsigned __int64 priTag, unsigned __int64 secTag)
{
  ?AnalyticsStreamer_AddTag@@YAXW4PooledStorageFileTypes@@_K1@Z(streamType, priTag, secTag);
}

/*
==============
AnalyticsStream::AddTag
==============
*/
void AnalyticsStream::AddTag(AnalyticsStream *this, unsigned __int64 priTag, unsigned __int64 secTag)
{
  __int64 m_numTags; 

  m_numTags = this->m_numTags;
  if ( (unsigned int)m_numTags < 0x100 )
  {
    bdTag::set(&this->m_tags[m_numTags], priTag, secTag);
    ++this->m_numTags;
  }
}

/*
==============
AnalyticsStreamer_AddTag
==============
*/
void AnalyticsStreamer_AddTag(PooledStorageFileTypes streamType, unsigned __int64 priTag, unsigned __int64 secTag)
{
  __int64 v3; 
  AnalyticsStream *v6; 
  __int64 m_numTags; 
  int v9; 

  v3 = streamType;
  if ( streamType )
  {
    v9 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 488, ASSERT_TYPE_ASSERT, "(unsigned)( streamType ) < (unsigned)( ( sizeof( *array_counter( s_analyticStreams ) ) + 0 ) )", "streamType doesn't index ARRAY_COUNT( s_analyticStreams )\n\t%i not in [0, %i)", streamType, v9) )
      __debugbreak();
  }
  v6 = &s_analyticStreams[v3];
  m_numTags = v6->m_numTags;
  if ( (unsigned int)m_numTags < 0x100 )
  {
    bdTag::set(&v6->m_tags[m_numTags], priTag, secTag);
    ++v6->m_numTags;
  }
}

/*
==============
AnalyticsStreamer_EnableSystemBasedOnPackageTypeIfRequired
==============
*/
void AnalyticsStreamer_EnableSystemBasedOnPackageTypeIfRequired(void)
{
  const dvar_t *v0; 
  const char *CompassBuildName; 

  v0 = DVARBOOL_online_analytics_streamer_should_be_enabled_based_on_package;
  if ( !DVARBOOL_online_analytics_streamer_should_be_enabled_based_on_package && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_should_be_enabled_based_on_package") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    CompassBuildName = DS_GetCompassBuildName();
    Com_Printf(25, "AnalyticsStreamer_EnableSystemBasedOnPackageTypeIfRequired, with package name %s\n", CompassBuildName);
    if ( !I_strcmp(CompassBuildName, "autobuild") || !I_strcmp(CompassBuildName, "autobuild_mp") || !I_strcmp(CompassBuildName, "current_mp_fnf") )
    {
      Dvar_SetBool_Internal(DVARBOOL_online_analytics_streamer_enabled, 1);
      Dvar_SetBool_Internal(DVARBOOL_online_should_upload_analytics_streamer_log_file, 1);
      Com_Printf(25, "Turning on analytics streamer system\n");
    }
  }
}

/*
==============
AnalyticsStreamer_EndStream
==============
*/
void AnalyticsStreamer_EndStream(PooledStorageFileTypes streamType)
{
  __int64 v1; 
  AnalyticsStream *v2; 
  int v4; 

  v1 = streamType;
  if ( streamType )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 474, ASSERT_TYPE_ASSERT, "(unsigned)( streamType ) < (unsigned)( ( sizeof( *array_counter( s_analyticStreams ) ) + 0 ) )", "streamType doesn't index ARRAY_COUNT( s_analyticStreams )\n\t%i not in [0, %i)", streamType, v4) )
      __debugbreak();
  }
  v2 = &s_analyticStreams[v1];
  AnalyticsStream::MarkCurrentBufferToBeFlushedIfStreamActive(v2);
  Com_Printf(25, "AnalyticsStream::EndStream called for stream %d\n", (unsigned int)v2->m_streamType);
}

/*
==============
AnalyticsStreamer_FileUploadFailure
==============
*/
void AnalyticsStreamer_FileUploadFailure(const int controllerIndex, bdLobbyErrorCode error, unsigned __int64 transactionId, void *userData)
{
  const dvar_t *v7; 
  int integer; 
  int v9; 
  const dvar_t *v10; 
  int v11; 
  int v12; 
  int v13; 
  Online_ErrorReporting *InstancePtr; 
  char dest[256]; 

  if ( !userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 515, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  Com_PrintError(16, "AnalyticsStreamer_FileUploadFailure: Failed to write file %s\n", (const char *)userData + 28);
  if ( *((_DWORD *)userData + 3) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 517, ASSERT_TYPE_ASSERT, "(buffer->m_flushState == FlushState::Flushing)", (const char *)&queryFormat, "buffer->m_flushState == FlushState::Flushing") )
    __debugbreak();
  v7 = DVARINT_online_analytics_streamer_upload_failure_backoff_count_max;
  if ( !DVARINT_online_analytics_streamer_upload_failure_backoff_count_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_upload_failure_backoff_count_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  if ( ++*((_DWORD *)userData + 4195) > integer )
    *((_DWORD *)userData + 4195) = integer;
  v9 = Sys_Milliseconds();
  v10 = DVARINT_online_analytics_streamer_upload_min_delay_ms;
  v11 = v9;
  v12 = *((_DWORD *)userData + 4195);
  if ( !DVARINT_online_analytics_streamer_upload_min_delay_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_upload_min_delay_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v13 = v10->current.integer;
  *((_DWORD *)userData + 3) = 1;
  *((_DWORD *)userData + 4194) = v11 + (v13 << v12);
  Com_sprintf(dest, 0x100ui64, "%d,%llu", (unsigned int)error, transactionId);
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_ANALYTICS_STREAMER_t)16, dest);
}

/*
==============
AnalyticsStreamer_FileUploadSuccessful
==============
*/
void AnalyticsStreamer_FileUploadSuccessful(const int controllerIndex, unsigned __int64 fileID, void *userData)
{
  Com_Printf(16, "AnalyticsStreamer_FileUploadSuccessful: File %s uploaded\n", (const char *)userData + 28);
  if ( *((_DWORD *)userData + 3) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 499, ASSERT_TYPE_ASSERT, "(buffer->m_flushState == FlushState::Flushing)", (const char *)&queryFormat, "buffer->m_flushState == FlushState::Flushing") )
    __debugbreak();
  *((_QWORD *)userData + 2) = 0i64;
  *((_DWORD *)userData + 6) = 0;
  *((_DWORD *)userData + 4195) = 0;
  *((_DWORD *)userData + 3) = 0;
}

/*
==============
AnalyticsStreamer_Frame
==============
*/
void AnalyticsStreamer_Frame(void)
{
  const dvar_t *v0; 
  int v1; 
  __int64 v2; 
  __int64 v3; 
  int m_numBuffers; 
  __int64 v5; 
  FlushState *p_m_flushState; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 587, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( AnalyticsStreamer_IsSystemEnabled() )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 106, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    v0 = DVARBOOL_online_analytics_streamer_enabled;
    if ( !DVARBOOL_online_analytics_streamer_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.enabled )
    {
      v1 = 0;
      v2 = 0i64;
      if ( s_analyticStreams[0].m_numBuffers > 0 )
      {
        v3 = 0i64;
        do
        {
          if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 84, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
            __debugbreak();
          m_numBuffers = s_analyticStreams[0].m_numBuffers;
          v5 = 0i64;
          if ( s_analyticStreams[0].m_numBuffers <= 0 )
          {
LABEL_21:
            if ( s_analyticStreams[0].m_buffers[v3].m_flushState == ReadyToFlush )
            {
              if ( AnalyticsStream::TryFlush(s_analyticStreams, &s_analyticStreams[0].m_buffers[v1]) )
              {
                s_analyticStreams[0].m_buffers[v2].m_flushState = Flushing;
                return;
              }
              m_numBuffers = s_analyticStreams[0].m_numBuffers;
            }
          }
          else
          {
            p_m_flushState = &s_analyticStreams[0].m_buffers->m_flushState;
            while ( *p_m_flushState != Flushing )
            {
              ++v5;
              p_m_flushState += 4196;
              if ( v5 >= s_analyticStreams[0].m_numBuffers )
                goto LABEL_21;
            }
          }
          ++v1;
          ++v2;
          ++v3;
        }
        while ( v1 < m_numBuffers );
      }
    }
  }
}

/*
==============
AnalyticsStreamer_Init
==============
*/
void AnalyticsStreamer_Init(void)
{
  AnalyticsBuffer *m_buffers; 
  int v1; 
  __int64 v2; 
  AnalyticsBuffer *v3; 
  PublisherVariableManager *Instance; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 569, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(25, "AnalyticsStreamer_Init\n");
  s_mpAnalyticsLogBuffers[0].m_data = s_mpAnalyticsLogBufferData[0];
  s_mpAnalyticsLogBuffers[1].m_data = s_mpAnalyticsLogBufferData[1];
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 37, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  m_buffers = s_mpAnalyticsLogBuffers;
  s_analyticStreams[0].m_streamType = ANALYTICS_STREAMER_LOG_FILE;
  v1 = 0;
  s_analyticStreams[0].m_buffers = s_mpAnalyticsLogBuffers;
  v2 = 0i64;
  s_analyticStreams[0].m_bufferBeingWrittenTo = NULL;
  s_analyticStreams[0].m_numBuffers = 2;
  s_analyticStreams[0].m_maxSizeOfEachBuffer = 0x10000;
  while ( 1 )
  {
    v3 = &m_buffers[v2];
    v3->m_uploadFileWriteInfo.m_successCallback = AnalyticsStreamer_FileUploadSuccessful;
    v3->m_uploadFileWriteInfo.m_failureCallback = AnalyticsStreamer_FileUploadFailure;
    v3->m_uploadFileWriteInfo.m_userData = &s_analyticStreams[0].m_buffers[v1];
    AnalyticsStream::ResetBuffer(s_analyticStreams, &m_buffers[v2]);
    ++v1;
    ++v2;
    if ( v1 >= s_analyticStreams[0].m_numBuffers )
      break;
    m_buffers = s_analyticStreams[0].m_buffers;
  }
  s_analyticStreams[0].m_filenamePrefix[0] = 0;
  s_analyticStreams[0].m_fileChunkIndex = 0;
  Com_Printf(25, "AnalyticsStream::Init called for stream %d\n", (unsigned int)s_analyticStreams[0].m_streamType);
  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::AddRetrievedCallback(Instance, AnalyticsStreamer_PublisherVariablesFetched);
}

/*
==============
AnalyticsStreamer_IsSystemEnabled
==============
*/
__int64 AnalyticsStreamer_IsSystemEnabled()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_online_analytics_streamer_enabled;
  if ( !DVARBOOL_online_analytics_streamer_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
AnalyticsStreamer_MarkCurrentBufferToBeFlushedIfStreamActive
==============
*/
void AnalyticsStreamer_MarkCurrentBufferToBeFlushedIfStreamActive(PooledStorageFileTypes streamType)
{
  __int64 v1; 

  v1 = streamType;
  if ( AnalyticsStreamer_IsSystemEnabled() )
  {
    Com_Printf(25, "AnalyticsStreamer_MarkCurrentBufferToBeFlushedIfStreamActive called for stream %d\n", (unsigned int)v1);
    AnalyticsStream::MarkCurrentBufferToBeFlushedIfStreamActive(&s_analyticStreams[v1]);
  }
}

/*
==============
AnalyticsStreamer_PublisherVariablesFetched
==============
*/
void AnalyticsStreamer_PublisherVariablesFetched(void)
{
  const dvar_t *v0; 
  const char *CompassBuildName; 

  v0 = DVARBOOL_online_analytics_streamer_should_be_enabled_based_on_package;
  if ( !DVARBOOL_online_analytics_streamer_should_be_enabled_based_on_package && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_should_be_enabled_based_on_package") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    CompassBuildName = DS_GetCompassBuildName();
    Com_Printf(25, "AnalyticsStreamer_EnableSystemBasedOnPackageTypeIfRequired, with package name %s\n", CompassBuildName);
    if ( !I_strcmp(CompassBuildName, "autobuild") || !I_strcmp(CompassBuildName, "autobuild_mp") || !I_strcmp(CompassBuildName, "current_mp_fnf") )
    {
      Dvar_SetBool_Internal(DVARBOOL_online_analytics_streamer_enabled, 1);
      Dvar_SetBool_Internal(DVARBOOL_online_should_upload_analytics_streamer_log_file, 1);
      Com_Printf(25, "Turning on analytics streamer system\n");
    }
  }
}

/*
==============
AnalyticsStreamer_StartStream
==============
*/
void AnalyticsStreamer_StartStream(PooledStorageFileTypes streamType, const char *fileNamePrefix)
{
  __int64 v2; 
  int v5; 

  v2 = streamType;
  if ( streamType )
  {
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 468, ASSERT_TYPE_ASSERT, "(unsigned)( streamType ) < (unsigned)( ( sizeof( *array_counter( s_analyticStreams ) ) + 0 ) )", "streamType doesn't index ARRAY_COUNT( s_analyticStreams )\n\t%i not in [0, %i)", streamType, v5) )
      __debugbreak();
  }
  AnalyticsStream::StartStream(&s_analyticStreams[v2], fileNamePrefix);
}

/*
==============
AnalyticsStreamer_WriteToBuffer
==============
*/
void AnalyticsStreamer_WriteToBuffer(PooledStorageFileTypes streamType, const char *data, int dataSize)
{
  __int64 v3; 
  int v7; 

  v3 = streamType;
  if ( streamType )
  {
    v7 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 481, ASSERT_TYPE_ASSERT, "(unsigned)( streamType ) < (unsigned)( ( sizeof( *array_counter( s_analyticStreams ) ) + 0 ) )", "streamType doesn't index ARRAY_COUNT( s_analyticStreams )\n\t%i not in [0, %i)", streamType, v7) )
      __debugbreak();
  }
  AnalyticsStream::WriteToBuffer(&s_analyticStreams[v3], data, dataSize);
}

/*
==============
AnalyticsStream::AnyBufferBeingFlushed
==============
*/
char AnalyticsStream::AnyBufferBeingFlushed(AnalyticsStream *this)
{
  __int64 v2; 
  FlushState *i; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 84, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( this->m_numBuffers <= 0 )
    return 0;
  v2 = 0i64;
  for ( i = &this->m_buffers->m_flushState; *i != Flushing; i += 4196 )
  {
    if ( ++v2 >= this->m_numBuffers )
      return 0;
  }
  return 1;
}

/*
==============
AnalyticsStream::AssignNextBufferToWriteTo
==============
*/
void AnalyticsStream::AssignNextBufferToWriteTo(AnalyticsStream *this)
{
  unsigned int v2; 

  if ( !this->m_bufferBeingWrittenTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 207, ASSERT_TYPE_ASSERT, "(m_bufferBeingWrittenTo)", (const char *)&queryFormat, "m_bufferBeingWrittenTo") )
    __debugbreak();
  v2 = (this->m_indexOfBufferBeingWrittenTo + 1) % this->m_numBuffers;
  this->m_indexOfBufferBeingWrittenTo = v2;
  Com_Printf(25, "AnalyticsStream::AssignNextBufferToWriteTo Assigning next buffer index to %d\n", v2);
  this->m_bufferBeingWrittenTo = &this->m_buffers[this->m_indexOfBufferBeingWrittenTo];
}

/*
==============
AnalyticsStream::EndStream
==============
*/
void AnalyticsStream::EndStream(AnalyticsStream *this)
{
  AnalyticsStream::MarkCurrentBufferToBeFlushedIfStreamActive(this);
  Com_Printf(25, "AnalyticsStream::EndStream called for stream %d\n", (unsigned int)this->m_streamType);
}

/*
==============
AnalyticsStream::Frame
==============
*/
void AnalyticsStream::Frame(AnalyticsStream *this)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  FlushState *p_m_flushState; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 106, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( AnalyticsStreamer_IsSystemEnabled() )
  {
    v2 = 0;
    if ( this->m_numBuffers > 0 )
    {
      v3 = 0i64;
      do
      {
        if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 84, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
          __debugbreak();
        v4 = 0i64;
        if ( this->m_numBuffers <= 0 )
        {
LABEL_14:
          if ( this->m_buffers[v3].m_flushState == ReadyToFlush && AnalyticsStream::TryFlush(this, &this->m_buffers[v2]) )
          {
            this->m_buffers[v2].m_flushState = Flushing;
            return;
          }
        }
        else
        {
          p_m_flushState = &this->m_buffers->m_flushState;
          while ( *p_m_flushState != Flushing )
          {
            ++v4;
            p_m_flushState += 4196;
            if ( v4 >= this->m_numBuffers )
              goto LABEL_14;
          }
        }
        ++v2;
        ++v3;
      }
      while ( v2 < this->m_numBuffers );
    }
  }
}

/*
==============
AnalyticsStream::HasAnyOwnerTag
==============
*/
char AnalyticsStream::HasAnyOwnerTag(AnalyticsStream *this)
{
  __int64 m_numTags; 
  __int64 v2; 
  _BYTE *i; 

  m_numTags = this->m_numTags;
  if ( m_numTags <= 0 )
    return 0;
  v2 = 0i64;
  for ( i = this->m_tags[0]._bytes_20; *(_QWORD *)i != 4i64; i += 64 )
  {
    if ( ++v2 >= m_numTags )
      return 0;
  }
  return 1;
}

/*
==============
AnalyticsStream::Init
==============
*/
void AnalyticsStream::Init(AnalyticsStream *this, PooledStorageFileTypes streamType, AnalyticsBuffer *buffers, int numBuffers, int maxSizeOfEachBuffer)
{
  int v9; 
  __int64 v10; 
  AnalyticsBuffer *v11; 
  __int64 m_streamType; 
  __int64 v13; 
  int v14; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 37, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( streamType )
  {
    v14 = 1;
    LODWORD(v13) = streamType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 38, ASSERT_TYPE_ASSERT, "(unsigned)( streamType ) < (unsigned)( ( sizeof( *array_counter( s_analyticStreams ) ) + 0 ) )", "streamType doesn't index ARRAY_COUNT( s_analyticStreams )\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( numBuffers <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 39, ASSERT_TYPE_ASSERT, "(numBuffers > 1)", (const char *)&queryFormat, "numBuffers > 1") )
    __debugbreak();
  this->m_streamType = streamType;
  v9 = 0;
  this->m_bufferBeingWrittenTo = NULL;
  this->m_numBuffers = numBuffers;
  this->m_maxSizeOfEachBuffer = maxSizeOfEachBuffer;
  this->m_buffers = buffers;
  if ( numBuffers > 0 )
  {
    v10 = 0i64;
    do
    {
      v11 = &this->m_buffers[v10];
      v11->m_uploadFileWriteInfo.m_successCallback = AnalyticsStreamer_FileUploadSuccessful;
      v11->m_uploadFileWriteInfo.m_failureCallback = AnalyticsStreamer_FileUploadFailure;
      v11->m_uploadFileWriteInfo.m_userData = &this->m_buffers[v9];
      AnalyticsStream::ResetBuffer(this, v11);
      ++v9;
      ++v10;
    }
    while ( v9 < this->m_numBuffers );
  }
  this->m_filenamePrefix[0] = 0;
  m_streamType = (unsigned int)this->m_streamType;
  this->m_fileChunkIndex = 0;
  Com_Printf(25, "AnalyticsStream::Init called for stream %d\n", m_streamType);
}

/*
==============
AnalyticsStream::IsAvailableForWrite
==============
*/
bool AnalyticsStream::IsAvailableForWrite(AnalyticsStream *this, AnalyticsBuffer *buffer)
{
  return buffer->m_flushState == Idle;
}

/*
==============
AnalyticsStream::MarkCurrentBufferToBeFlushed
==============
*/
void AnalyticsStream::MarkCurrentBufferToBeFlushed(AnalyticsStream *this)
{
  const dvar_t *v1; 
  int v3; 
  unsigned __int64 *bytes_20; 
  char *fmt; 

  v1 = DVARBOOL_online_analytics_streamer_enabled;
  if ( !DVARBOOL_online_analytics_streamer_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 241, ASSERT_TYPE_ASSERT, "(AnalyticsStreamer_IsSystemEnabled())", (const char *)&queryFormat, "AnalyticsStreamer_IsSystemEnabled()") )
    __debugbreak();
  if ( !this->m_bufferBeingWrittenTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 244, ASSERT_TYPE_ASSERT, "(m_bufferBeingWrittenTo)", (const char *)&queryFormat, "m_bufferBeingWrittenTo") )
    __debugbreak();
  if ( this->m_bufferBeingWrittenTo->m_writeOffset <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 247, ASSERT_TYPE_ASSERT, "(m_bufferBeingWrittenTo->m_writeOffset > 0)", (const char *)&queryFormat, "m_bufferBeingWrittenTo->m_writeOffset > 0") )
    __debugbreak();
  if ( this->m_bufferBeingWrittenTo->m_flushState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 250, ASSERT_TYPE_ASSERT, "(IsAvailableForWrite( m_bufferBeingWrittenTo ))", (const char *)&queryFormat, "IsAvailableForWrite( m_bufferBeingWrittenTo )") )
    __debugbreak();
  this->m_bufferBeingWrittenTo->m_uploadFileWriteInfo.m_fileData = this->m_bufferBeingWrittenTo->m_data;
  this->m_bufferBeingWrittenTo->m_uploadFileWriteInfo.m_fileSize = this->m_bufferBeingWrittenTo->m_writeOffset;
  LODWORD(fmt) = this->m_fileChunkIndex;
  Com_sprintf(this->m_bufferBeingWrittenTo->m_uploadFileWriteInfo.m_fileName, 0x100ui64, "%s_%d.txt", this->m_filenamePrefix, fmt);
  v3 = 0;
  this->m_bufferBeingWrittenTo->m_uploadFileWriteInfo.m_numTags = this->m_numTags;
  if ( this->m_numTags > 0 )
  {
    bytes_20 = (unsigned __int64 *)this->m_tags[0]._bytes_20;
    do
    {
      bdTag::set(&this->m_bufferBeingWrittenTo->m_uploadFileWriteInfo.m_tags[(__int64)v3++], *bytes_20, bytes_20[1]);
      bytes_20 += 8;
    }
    while ( v3 < this->m_numTags );
  }
  this->m_bufferBeingWrittenTo->m_writeOffset = 0;
  this->m_bufferBeingWrittenTo->m_flushState = ReadyToFlush;
}

/*
==============
AnalyticsStream::MarkCurrentBufferToBeFlushedIfStreamActive
==============
*/
void AnalyticsStream::MarkCurrentBufferToBeFlushedIfStreamActive(AnalyticsStream *this)
{
  volatile int *p_m_streamLock; 
  __int64 v3; 
  AnalyticsBuffer *m_bufferBeingWrittenTo; 
  int m_numTags; 
  int v6; 
  _BYTE *bytes_20; 

  p_m_streamLock = &this->m_streamLock;
  v3 = ((_BYTE)this + 32) & 3;
  if ( (((_BYTE)this + 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_streamLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_m_streamLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 441, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &m_streamLock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &m_streamLock, 1, 0 ) == 0") )
    __debugbreak();
  if ( AnalyticsStreamer_IsSystemEnabled() )
  {
    m_bufferBeingWrittenTo = this->m_bufferBeingWrittenTo;
    if ( m_bufferBeingWrittenTo )
    {
      if ( m_bufferBeingWrittenTo->m_flushState == Idle && m_bufferBeingWrittenTo->m_writeOffset > 0 )
      {
        m_numTags = this->m_numTags;
        v6 = 0;
        if ( m_numTags > 0 )
        {
          bytes_20 = this->m_tags[0]._bytes_20;
          while ( *(_QWORD *)bytes_20 != 4i64 )
          {
            ++v6;
            bytes_20 += 64;
            if ( v6 >= m_numTags )
              goto LABEL_17;
          }
          AnalyticsStream::MarkCurrentBufferToBeFlushed(this);
        }
      }
LABEL_17:
      this->m_bufferBeingWrittenTo = NULL;
    }
    Com_Printf(25, "AnalyticsStream::MarkCurrentBufferToBeFlushedIfStreamActive called for stream %d\n", (unsigned int)this->m_streamType);
  }
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_streamLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_m_streamLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 462, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &m_streamLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &m_streamLock, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
AnalyticsStream::ResetBuffer
==============
*/
void AnalyticsStream::ResetBuffer(AnalyticsStream *this, AnalyticsBuffer *buffer)
{
  int v4; 
  unsigned int v5; 

  v4 = Sys_Milliseconds();
  v5 = 0;
  *buffer->m_data = 0;
  *(_QWORD *)&buffer->m_writeOffset = 0i64;
  buffer->m_nextStreamUploadAttemptTime = v4;
  buffer->m_uploadFailureCount = 0;
  buffer->m_uploadFileWriteInfo.m_category = 0;
  buffer->m_uploadFileWriteInfo.m_dataCallback = NULL;
  buffer->m_uploadFileWriteInfo.m_uploadHandler = NULL;
  buffer->m_uploadFileWriteInfo.m_fileData = NULL;
  buffer->m_uploadFileWriteInfo.m_fileSize = 0;
  buffer->m_uploadFileWriteInfo.m_fileName[0] = 0;
  buffer->m_uploadFileWriteInfo.m_numTags = 0;
  do
    bdTag::set(&buffer->m_uploadFileWriteInfo.m_tags[(__int64)(int)v5++], 0i64, 0i64);
  while ( v5 < 0x100 );
  Com_Printf(25, "AnalyticsStream::ResetBuffer called for stream %d\n", (unsigned int)this->m_streamType);
}

/*
==============
AnalyticsStream::ResetPooledStorageWriteInfo
==============
*/
void AnalyticsStream::ResetPooledStorageWriteInfo(AnalyticsStream *this, pooledStorageWriteFileInfo *writeInfo)
{
  unsigned int v2; 

  v2 = 0;
  writeInfo->m_category = 0;
  writeInfo->m_dataCallback = NULL;
  writeInfo->m_uploadHandler = NULL;
  writeInfo->m_fileData = NULL;
  writeInfo->m_fileSize = 0;
  writeInfo->m_fileName[0] = 0;
  writeInfo->m_numTags = 0;
  do
    bdTag::set(&writeInfo->m_tags[(__int64)(int)v2++], 0i64, 0i64);
  while ( v2 < 0x100 );
}

/*
==============
AnalyticsStream::StartStream
==============
*/
void AnalyticsStream::StartStream(AnalyticsStream *this, const char *fileNamePrefix)
{
  volatile int *p_m_streamLock; 
  const dvar_t *v5; 
  unsigned __int64 m_streamType; 
  unsigned __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  AnalyticsBuffer *v11; 
  Online_ErrorReporting *InstancePtr; 
  int i; 
  AnalyticsBuffer *m_buffers; 
  char *fmt; 
  __int64 v16; 
  char dest[256]; 

  p_m_streamLock = &this->m_streamLock;
  if ( (((_BYTE)this + 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_streamLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_m_streamLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 273, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &m_streamLock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &m_streamLock, 1, 0 ) == 0") )
    __debugbreak();
  if ( !this->m_numBuffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 275, ASSERT_TYPE_ASSERT, "(m_numBuffers)", (const char *)&queryFormat, "m_numBuffers") )
    __debugbreak();
  if ( !this->m_buffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 276, ASSERT_TYPE_ASSERT, "(m_buffers)", (const char *)&queryFormat, "m_buffers") )
    __debugbreak();
  if ( !this->m_maxSizeOfEachBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 277, ASSERT_TYPE_ASSERT, "(m_maxSizeOfEachBuffer)", (const char *)&queryFormat, "m_maxSizeOfEachBuffer") )
    __debugbreak();
  v5 = DVARBOOL_online_analytics_streamer_enabled;
  if ( !DVARBOOL_online_analytics_streamer_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 280, ASSERT_TYPE_ASSERT, "(AnalyticsStreamer_IsSystemEnabled())", (const char *)&queryFormat, "AnalyticsStreamer_IsSystemEnabled()") )
    __debugbreak();
  if ( this->m_bufferBeingWrittenTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 283, ASSERT_TYPE_ASSERT, "(!m_bufferBeingWrittenTo)", (const char *)&queryFormat, "!m_bufferBeingWrittenTo") )
    __debugbreak();
  m_streamType = this->m_streamType;
  this->m_fileChunkIndex = 0;
  this->m_numTags = 0;
  bdTag::set(this->m_tags, 0i64, m_streamType);
  ++this->m_numTags;
  v7 = -1i64;
  do
    ++v7;
  while ( fileNamePrefix[v7] );
  if ( v7 > 0xF6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 296, ASSERT_TYPE_ASSERT, "(strlen( fileNamePrefix ) <= 256 - 10)", (const char *)&queryFormat, "strlen( fileNamePrefix ) <= ANALYTICS_STREAMER_FILENAME_PREFIX_LENGTH") )
    __debugbreak();
  Com_sprintf(this->m_filenamePrefix, 0xF6ui64, (const char *)&queryFormat, fileNamePrefix);
  v8 = 0;
  if ( this->m_numBuffers > 0 )
  {
    v9 = 0i64;
    do
    {
      if ( this->m_buffers[v9].m_flushState == Idle )
      {
        v10 = v8;
        AnalyticsStream::ResetBuffer(this, &this->m_buffers[v10]);
        if ( !this->m_bufferBeingWrittenTo )
        {
          v11 = &this->m_buffers[v10];
          this->m_indexOfBufferBeingWrittenTo = v8;
          this->m_bufferBeingWrittenTo = v11;
        }
      }
      ++v8;
      ++v9;
    }
    while ( v8 < this->m_numBuffers );
  }
  if ( !this->m_bufferBeingWrittenTo )
  {
    LODWORD(fmt) = this->m_maxSizeOfEachBuffer;
    Com_sprintf(dest, 0x100ui64, "%s,%d", this->m_filenamePrefix, fmt);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_ANALYTICS_STREAMER_t)8, dest);
    for ( i = 0; i < this->m_numBuffers; ++i )
      AnalyticsStream::ResetBuffer(this, &this->m_buffers[i]);
    m_buffers = this->m_buffers;
    this->m_bufferBeingWrittenTo = this->m_buffers;
    this->m_indexOfBufferBeingWrittenTo = 0;
    if ( !m_buffers )
    {
      LODWORD(v16) = this->m_streamType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 332, ASSERT_TYPE_ASSERT, "(m_bufferBeingWrittenTo)", "%s\n\tAnalyticsStream::StartStream no buffers available for writing to stream %d\n", "m_bufferBeingWrittenTo", v16) )
        __debugbreak();
    }
  }
  Com_Printf(25, "AnalyticsStream::StartStream called for stream %d\n", (unsigned int)this->m_streamType);
  if ( ((unsigned __int8)p_m_streamLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_streamLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_m_streamLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 336, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &m_streamLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &m_streamLock, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
AnalyticsStream::TryFlush
==============
*/
char AnalyticsStream::TryFlush(AnalyticsStream *this, AnalyticsBuffer *buffer)
{
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int ControllerFromClient; 
  bool v8; 
  __int64 m_streamType; 
  char *m_fileName; 
  const dvar_t *v12; 
  int integer; 
  const dvar_t *v14; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 160, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v4 = DVARBOOL_online_analytics_streamer_enabled;
  if ( !DVARBOOL_online_analytics_streamer_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 161, ASSERT_TYPE_ASSERT, "(AnalyticsStreamer_IsSystemEnabled())", (const char *)&queryFormat, "AnalyticsStreamer_IsSystemEnabled()") )
    __debugbreak();
  v5 = Sys_Milliseconds();
  if ( v5 - buffer->m_nextStreamUploadAttemptTime > 0 )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 129, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    v6 = DVARBOOL_online_analytics_streamer_enabled;
    if ( !DVARBOOL_online_analytics_streamer_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( !v6->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 131, ASSERT_TYPE_ASSERT, "(AnalyticsStreamer_IsSystemEnabled())", (const char *)&queryFormat, "AnalyticsStreamer_IsSystemEnabled()") )
      __debugbreak();
    if ( !buffer->m_uploadFileWriteInfo.m_fileData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 134, ASSERT_TYPE_ASSERT, "(buffer->m_uploadFileWriteInfo.m_fileData)", (const char *)&queryFormat, "buffer->m_uploadFileWriteInfo.m_fileData") )
      __debugbreak();
    if ( !buffer->m_uploadFileWriteInfo.m_fileSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 135, ASSERT_TYPE_ASSERT, "(buffer->m_uploadFileWriteInfo.m_fileSize > 0)", (const char *)&queryFormat, "buffer->m_uploadFileWriteInfo.m_fileSize > 0") )
      __debugbreak();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    v8 = PooledStorage_FileManager_UploadFile(ControllerFromClient, &buffer->m_uploadFileWriteInfo);
    m_streamType = (unsigned int)this->m_streamType;
    m_fileName = buffer->m_uploadFileWriteInfo.m_fileName;
    if ( v8 )
    {
      Com_Printf(25, "AnalyticsStreamer_UploadBufferData: request attempted for file %s for stream %d\n", m_fileName, m_streamType);
      return 1;
    }
    Com_PrintError(25, "AnalyticsStreamer_UploadBufferData: request cancelled for file %s  for stream %d\n", m_fileName, m_streamType);
    v12 = DVARINT_online_analytics_streamer_upload_failure_backoff_count_max;
    if ( !DVARINT_online_analytics_streamer_upload_failure_backoff_count_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_upload_failure_backoff_count_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    integer = v12->current.integer;
    if ( ++buffer->m_uploadFailureCount <= integer )
      LOBYTE(integer) = buffer->m_uploadFailureCount;
    else
      buffer->m_uploadFailureCount = integer;
    v14 = DVARINT_online_analytics_streamer_upload_min_delay_ms;
    if ( !DVARINT_online_analytics_streamer_upload_min_delay_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_upload_min_delay_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    buffer->m_nextStreamUploadAttemptTime = v5 + (v14->current.integer << integer);
  }
  return 0;
}

/*
==============
AnalyticsStream::UploadBufferData
==============
*/
char AnalyticsStream::UploadBufferData(AnalyticsStream *this, AnalyticsBuffer *buffer)
{
  const dvar_t *v4; 
  int ControllerFromClient; 
  bool v6; 
  __int64 m_streamType; 
  char *m_fileName; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 129, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v4 = DVARBOOL_online_analytics_streamer_enabled;
  if ( !DVARBOOL_online_analytics_streamer_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 131, ASSERT_TYPE_ASSERT, "(AnalyticsStreamer_IsSystemEnabled())", (const char *)&queryFormat, "AnalyticsStreamer_IsSystemEnabled()") )
    __debugbreak();
  if ( !buffer->m_uploadFileWriteInfo.m_fileData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 134, ASSERT_TYPE_ASSERT, "(buffer->m_uploadFileWriteInfo.m_fileData)", (const char *)&queryFormat, "buffer->m_uploadFileWriteInfo.m_fileData") )
    __debugbreak();
  if ( !buffer->m_uploadFileWriteInfo.m_fileSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 135, ASSERT_TYPE_ASSERT, "(buffer->m_uploadFileWriteInfo.m_fileSize > 0)", (const char *)&queryFormat, "buffer->m_uploadFileWriteInfo.m_fileSize > 0") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v6 = PooledStorage_FileManager_UploadFile(ControllerFromClient, &buffer->m_uploadFileWriteInfo);
  m_streamType = (unsigned int)this->m_streamType;
  m_fileName = buffer->m_uploadFileWriteInfo.m_fileName;
  if ( v6 )
  {
    Com_Printf(25, "AnalyticsStreamer_UploadBufferData: request attempted for file %s for stream %d\n", m_fileName, m_streamType);
    return 1;
  }
  else
  {
    Com_PrintError(25, "AnalyticsStreamer_UploadBufferData: request cancelled for file %s  for stream %d\n", m_fileName, m_streamType);
    return 0;
  }
}

/*
==============
AnalyticsStream::WriteToBuffer
==============
*/
void AnalyticsStream::WriteToBuffer(AnalyticsStream *this, const char *data, int dataSize)
{
  volatile int *p_m_streamLock; 
  size_t v4; 
  __int64 v7; 
  const dvar_t *v8; 
  AnalyticsBuffer *m_bufferBeingWrittenTo; 
  int m_maxSizeOfEachBuffer; 
  __int64 m_writeOffset; 
  AnalyticsBuffer *v12; 
  Online_ErrorReporting *InstancePtr; 
  int v14; 
  unsigned __int8 *v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  unsigned int v19; 
  AnalyticsBuffer *v20; 
  AnalyticsBuffer *v21; 
  Online_ErrorReporting *v22; 
  int v23; 
  unsigned __int8 *m_data; 
  char *fmt; 
  char *fmta; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  char dest[256]; 
  char contextString[256]; 

  p_m_streamLock = &this->m_streamLock;
  v4 = dataSize;
  v7 = ((_BYTE)this + 32) & 3;
  if ( (((_BYTE)this + 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_streamLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_m_streamLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 349, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &m_streamLock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &m_streamLock, 1, 0 ) == 0") )
    __debugbreak();
  v8 = DVARBOOL_online_analytics_streamer_enabled;
  if ( !DVARBOOL_online_analytics_streamer_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_analytics_streamer_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 352, ASSERT_TYPE_ASSERT, "(AnalyticsStreamer_IsSystemEnabled())", (const char *)&queryFormat, "AnalyticsStreamer_IsSystemEnabled()") )
    __debugbreak();
  if ( !this->m_bufferBeingWrittenTo )
  {
    LODWORD(v29) = this->m_streamType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 355, ASSERT_TYPE_ASSERT, "(m_bufferBeingWrittenTo)", "%s\n\tNo buffers available in AnalyticsStream::WriteToBuffer for stream %d", "m_bufferBeingWrittenTo", v29) )
      __debugbreak();
  }
  m_bufferBeingWrittenTo = this->m_bufferBeingWrittenTo;
  if ( m_bufferBeingWrittenTo->m_flushState == Idle )
  {
    m_maxSizeOfEachBuffer = this->m_maxSizeOfEachBuffer;
    m_writeOffset = (unsigned int)m_bufferBeingWrittenTo->m_writeOffset;
    if ( (int)m_writeOffset + (int)v4 > this->m_numBuffers * m_maxSizeOfEachBuffer )
    {
      LODWORD(v27) = this->m_streamType;
      LODWORD(fmt) = this->m_numBuffers * this->m_maxSizeOfEachBuffer;
      Com_PrintError(25, "AnalyticsStream::WriteToBuffer: Data buffer exhausted. Received data of size ( %d ), current buffer index ( %d ), total buffer size ( %d ) for stream %d\n", (unsigned int)v4, m_writeOffset, fmt, v27);
      v12 = this->m_bufferBeingWrittenTo;
      LODWORD(v29) = v12->m_writeOffset;
      LODWORD(v28) = v4;
      LODWORD(fmta) = this->m_fileChunkIndex;
      Com_sprintf(dest, 0x100ui64, "%s,%d,%d,%d,%d", v12->m_uploadFileWriteInfo.m_fileName, fmta, v28, v29, this->m_maxSizeOfEachBuffer);
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, DODGE, dest);
      m_bufferBeingWrittenTo = this->m_bufferBeingWrittenTo;
      m_maxSizeOfEachBuffer = this->m_maxSizeOfEachBuffer;
    }
    v14 = m_bufferBeingWrittenTo->m_writeOffset;
    v15 = &m_bufferBeingWrittenTo->m_data[v14];
    if ( v14 + (int)v4 <= m_maxSizeOfEachBuffer )
    {
      memcpy_0(v15, data, v4);
      this->m_bufferBeingWrittenTo->m_writeOffset += v4;
    }
    else
    {
      v16 = m_maxSizeOfEachBuffer - v14;
      v17 = v16;
      memcpy_0(v15, data, v16);
      this->m_bufferBeingWrittenTo->m_writeOffset = this->m_maxSizeOfEachBuffer;
      AnalyticsStream::MarkCurrentBufferToBeFlushed(this);
      ++this->m_fileChunkIndex;
      v18 = v4 - v16;
      if ( !this->m_bufferBeingWrittenTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 207, ASSERT_TYPE_ASSERT, "(m_bufferBeingWrittenTo)", (const char *)&queryFormat, "m_bufferBeingWrittenTo") )
        __debugbreak();
      v19 = (this->m_indexOfBufferBeingWrittenTo + 1) % this->m_numBuffers;
      this->m_indexOfBufferBeingWrittenTo = v19;
      Com_Printf(25, "AnalyticsStream::AssignNextBufferToWriteTo Assigning next buffer index to %d\n", v19);
      v20 = &this->m_buffers[this->m_indexOfBufferBeingWrittenTo];
      this->m_bufferBeingWrittenTo = v20;
      if ( v20->m_writeOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 393, ASSERT_TYPE_ASSERT, "(m_bufferBeingWrittenTo->m_writeOffset == 0)", (const char *)&queryFormat, "m_bufferBeingWrittenTo->m_writeOffset == 0") )
        __debugbreak();
      v21 = this->m_bufferBeingWrittenTo;
      if ( v21->m_flushState )
      {
        Com_Printf(25, "AnalyticsStream::WriteToBuffer: Overflow occured while a write is in progress for stream %d\n", (unsigned int)this->m_streamType);
        LODWORD(v29) = this->m_maxSizeOfEachBuffer;
        LODWORD(v27) = v18;
        LODWORD(fmt) = this->m_fileChunkIndex;
        Com_sprintf(contextString, 0x100ui64, "%s,%d,%d,%d", this->m_filenamePrefix, fmt, v27, v29);
        v22 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v22, COUNT, contextString);
      }
      else
      {
        v23 = this->m_maxSizeOfEachBuffer;
        m_data = v21->m_data;
        if ( v18 <= v23 )
          v23 = v18;
        memcpy_0(m_data, &data[v17], v23);
        this->m_bufferBeingWrittenTo->m_writeOffset += v23;
        if ( this->m_bufferBeingWrittenTo->m_writeOffset > this->m_maxSizeOfEachBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 420, ASSERT_TYPE_ASSERT, "(m_bufferBeingWrittenTo->m_writeOffset <= m_maxSizeOfEachBuffer)", (const char *)&queryFormat, "m_bufferBeingWrittenTo->m_writeOffset <= m_maxSizeOfEachBuffer") )
          __debugbreak();
      }
    }
  }
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_streamLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_m_streamLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_analytics_streamer.cpp", 430, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &m_streamLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &m_streamLock, 0, 1 ) == 1") )
    __debugbreak();
}

