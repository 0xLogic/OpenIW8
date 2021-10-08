/*
==============
LiveStorage_DoWeHaveMotd
==============
*/

bool __fastcall LiveStorage_DoWeHaveMotd()
{
  return ?LiveStorage_DoWeHaveMotd@@YA_NXZ();
}

/*
==============
LiveStorage_FetchMotd
==============
*/

void __fastcall LiveStorage_FetchMotd(const int controllerIndex)
{
  ?LiveStorage_FetchMotd@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_MotdFetchComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_MotdFetchComplete(const int slot)
{
  return ?LiveStorage_MotdFetchComplete@@YA?AW4taskCompleteResults@@H@Z(slot);
}

/*
==============
LiveStorage_InitMotd
==============
*/

void LiveStorage_InitMotd(void)
{
  ?LiveStorage_InitMotd@@YAXXZ();
}

/*
==============
LiveStorage_DoWeHaveMotd
==============
*/
_BOOL8 LiveStorage_DoWeHaveMotd()
{
  _BOOL8 result; 

  result = g_motdFetched;
  if ( (live_test_onlinedataoff->current.enabled & 0x40) != 0 )
    return 0i64;
  return result;
}

/*
==============
LiveStorage_FetchMotd
==============
*/
void LiveStorage_FetchMotd(const int controllerIndex)
{
  MarketingCommsManager *Instance; 
  int v3; 
  unsigned int v4; 
  MarketingCommsManager *v5; 

  if ( Live_IsUserSignedInToLive(controllerIndex) && !g_motdFetched && !TaskManager_TaskIsInProgress(&storageTasks, 1) && Live_IsUserSignedInToDemonware(controllerIndex) && dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED )
  {
    Instance = MarketingCommsManager::GetInstance();
    if ( !MarketingCommsManager::IsGettingMOTD(Instance) )
    {
      v3 = Sys_Milliseconds();
      v4 = g_NumFetchMotdAttempts;
      if ( g_NumFetchMotdAttempts )
      {
        if ( !Live_GetShouldDemonwareRetry((v3 - g_LastFetchMotdAttemptTime) / 1000, g_NumFetchMotdAttempts, 0x3Cu) )
          return;
        v4 = g_NumFetchMotdAttempts;
      }
      g_LastFetchMotdAttemptTime = v3;
      g_NumFetchMotdAttempts = v4 + 1;
      v5 = MarketingCommsManager::GetInstance();
      MarketingCommsManager::FetchMessagesFromBackendAsync(v5, controllerIndex);
    }
  }
}

/*
==============
LiveStorage_InitMotd
==============
*/
void LiveStorage_InitMotd(void)
{
  ;
}

/*
==============
LiveStorage_MotdFetchComplete
==============
*/
__int64 LiveStorage_MotdFetchComplete(const int slot)
{
  __int64 v1; 
  overlappedTask *v2; 
  DWServicesAccess *Instance; 
  taskCompleteResults FileComplete; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int8 v9; 
  const dvar_t *v10; 
  __int64 integer64; 
  __int64 v12; 
  unsigned __int8 *v13; 
  __int64 v14; 
  unsigned __int8 v15; 
  __int64 v16; 
  char v17; 
  bdRemoteTask *m_ptr; 
  const char *v19; 

  v1 = slot;
  v2 = &storageTasks.tasks[v1];
  if ( !storageTasks.tasks[v1].active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_motd.cpp", 162, ASSERT_TYPE_ASSERT, "(storageTasks.tasks[slot].active)", (const char *)&queryFormat, "storageTasks.tasks[slot].active") )
    __debugbreak();
  if ( storageTasks.tasks[v1].type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_motd.cpp", 163, ASSERT_TYPE_ASSERT, "(storageTasks.tasks[slot].type == TASK_GETTINGMOTD)", (const char *)&queryFormat, "storageTasks.tasks[slot].type == TASK_GETTINGMOTD") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, storageTasks.tasks[v1].controllerIndex) )
    return 0i64;
  FileComplete = dwFetchFileComplete(v2, &g_fetchMessageOfTheDayFileTask);
  v6 = FileComplete;
  if ( FileComplete == TASK_COMPLETE )
  {
    if ( g_fetchMessageOfTheDayFileTask.m_fileSize[0] <= 0x400 )
    {
      Com_Printf(16, "Motd[0] was %u bytes\n", g_fetchMessageOfTheDayFileTask.m_fileSize[0]);
      v7 = g_fetchMessageOfTheDayFileTask.m_fileSize[0];
      if ( g_fetchMessageOfTheDayFileTask.m_fileSize[0] )
      {
        do
        {
          v8 = (unsigned int)(v7 - 1);
          v9 = s_motdBuffer[v8];
          if ( v9 != 10 && v9 != 13 )
            break;
          v7 = (unsigned int)v8;
        }
        while ( (_DWORD)v8 );
        g_fetchMessageOfTheDayFileTask.m_fileSize[0] = v7;
      }
      if ( (unsigned int)v7 >= 0x400ui64 )
      {
        j___report_rangecheckfailure(v7);
        JUMPOUT(0x1413A47BDi64);
      }
      v10 = DVARSTR_motd;
      s_motdBuffer[(unsigned int)v7] = 0;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "motd") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      integer64 = v10->current.integer64;
      v12 = 0x7FFFFFFFi64;
      v13 = s_motdBuffer;
      if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v14 = integer64 - (_QWORD)s_motdBuffer;
      while ( 1 )
      {
        v15 = v13[v14];
        v16 = v12;
        v17 = *v13++;
        --v12;
        if ( !v16 )
          break;
        if ( v15 != v17 )
        {
          Dvar_SetString_Internal(DVARSTR_motd, (const char *)s_motdBuffer);
          break;
        }
        if ( !v15 )
        {
          g_motdFetched = 1;
          goto LABEL_36;
        }
      }
      g_motdFetched = 1;
    }
    else
    {
      v6 = 2;
    }
    goto LABEL_36;
  }
  if ( FileComplete == TASK_ERROR )
  {
    m_ptr = storageTasks.tasks[v1].u.remoteTask.m_ptr;
    if ( m_ptr && bdRemoteTask::getErrorCode(m_ptr) == BD_NO_FILE )
      g_motdFetched = 1;
    goto LABEL_36;
  }
  if ( FileComplete )
  {
LABEL_36:
    TaskManager_ClearTask(v2);
    if ( v6 == 2 )
    {
      if ( g_motdFetched )
      {
        v19 = "NULL";
        if ( g_fetchMessageOfTheDayFileTask.m_fileName[0] )
          v19 = g_fetchMessageOfTheDayFileTask.m_fileName[0];
        Com_Printf(16, "No MOTD file found with name [%s]\n", v19);
      }
      else
      {
        Com_PrintError(131088, "Unable to retrieve MOTD\n");
      }
    }
  }
  return v6;
}

