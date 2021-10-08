/*
==============
LUI_CoD_StartResourceEvent
==============
*/

void __fastcall LUI_CoD_StartResourceEvent(const char *eventName, const char *eventType)
{
  ?LUI_CoD_StartResourceEvent@@YAXPEBD0@Z(eventName, eventType);
}

/*
==============
LUI_CoD_StartResourceEnd
==============
*/

void __fastcall LUI_CoD_StartResourceEnd(const char *eventName, const char *eventType)
{
  ?LUI_CoD_StartResourceEnd@@YAXPEBD0@Z(eventName, eventType);
}

/*
==============
LUI_CoD_StartResourceEnd
==============
*/
void LUI_CoD_StartResourceEnd(const char *eventName, const char *eventType)
{
  int v4; 
  bool v5; 
  LUI_ResourceEntry *v6; 
  char v7; 
  int v8; 
  const char *v9; 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  char _Buffer[128]; 

  memset_0(_Buffer, 32, sizeof(_Buffer));
  v4 = --s_LUIResourceStackCurrentIndex;
  v5 = s_LUIResourceStackCurrentIndex >= 0;
  if ( s_LUIResourceStackCurrentIndex < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_budget.cpp", 115, ASSERT_TYPE_ASSERT, "(indexWithinBounds)", "%s\n\tMeasure resource event mismatch. Ended too may times.\n", "indexWithinBounds") )
      __debugbreak();
    v4 = s_LUIResourceStackCurrentIndex;
  }
  if ( eventName && eventType && v5 )
  {
    v6 = &s_LUIResourceStack[v4];
    v7 = *eventName;
    v8 = 0;
    if ( *eventName )
    {
      v9 = eventName;
      do
      {
        ++v9;
        v8 = v7 + 31 * v8;
        v7 = *v9;
      }
      while ( *v9 );
    }
    if ( v6->m_hash == v8 )
    {
      v10 = LUI_GetAllocatedElements() - v6->m_elementCount;
      v11 = LUI_CoD_GetMemoryTotal() - v6->m_luaMemoryUsed;
      v12 = v11 - LUI_CoD_GetFreeMemoryBytes();
      if ( v12 < 1 )
        v12 = 1;
      j_sprintf(_Buffer, "elements,%d\nmemory,%d\n%s,[end]\n", v10, (unsigned int)v12, eventName);
      if ( IWString_EqualCI("requires", eventType) )
        writeToRequiresReportFile(_Buffer);
      else
        writeToResourceFile(_Buffer);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_budget.cpp", 139, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tMeasure resource event mismatch. Event name does not match. Did you forget to end a nested event?\n", "false") )
    {
      __debugbreak();
    }
  }
}

/*
==============
LUI_CoD_StartResourceEvent
==============
*/
void LUI_CoD_StartResourceEvent(const char *eventName, const char *eventType)
{
  int v4; 
  bool v5; 
  LUI_ResourceEntry *v6; 
  char v7; 
  int v8; 
  const char *v9; 
  unsigned int MemoryTotal; 
  char _Buffer[128]; 

  memset_0(_Buffer, 32, sizeof(_Buffer));
  v4 = s_LUIResourceStackCurrentIndex;
  v5 = s_LUIResourceStackCurrentIndex < 50;
  if ( s_LUIResourceStackCurrentIndex >= 50 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_budget.cpp", 81, ASSERT_TYPE_ASSERT, "(indexWithinBounds)", "%s\n\tExceeded measure resource stack count\n", "indexWithinBounds") )
      __debugbreak();
    v4 = s_LUIResourceStackCurrentIndex;
  }
  if ( eventName && eventType && v5 )
  {
    v6 = &s_LUIResourceStack[v4];
    v7 = *eventName;
    v8 = 0;
    if ( *eventName )
    {
      v9 = eventName;
      do
      {
        ++v9;
        v8 = v7 + 31 * v8;
        v7 = *v9;
      }
      while ( *v9 );
    }
    v6->m_hash = v8;
    v6->m_elementCount = LUI_GetAllocatedElements();
    MemoryTotal = LUI_CoD_GetMemoryTotal();
    v6->m_luaMemoryUsed = MemoryTotal - LUI_CoD_GetFreeMemoryBytes();
    j_sprintf(_Buffer, "%s,[start]\n", eventName);
    if ( IWString_EqualCI("requires", eventType) )
      writeToRequiresReportFile(_Buffer);
    else
      writeToResourceFile(_Buffer);
    ++s_LUIResourceStackCurrentIndex;
  }
}

/*
==============
writeToRequiresReportFile
==============
*/
void writeToRequiresReportFile(const char *str)
{
  unsigned int TimeAsSeconds; 
  const char *v3; 
  fileHandle_t *handle; 
  __int64 v5; 
  fileHandle_t _Buffer[14]; 

  if ( s_requiresReportFileOpened )
  {
    handle = (fileHandle_t *)s_requiresReportFileHandle.handle.handle;
  }
  else
  {
    TimeAsSeconds = s_fileTimestamp;
    if ( s_fileTimestamp == -1 )
    {
      TimeAsSeconds = Sys_GetTimeAsSeconds();
      s_fileTimestamp = TimeAsSeconds;
    }
    j_sprintf((char *const)_Buffer, "%u-requires-report.txt", TimeAsSeconds);
    handle = FS_FOpenTextFileWrite(_Buffer, v3);
    s_requiresReportFileHandle.handle.handle = (__int64)handle;
    s_requiresReportFileOpened = 1;
  }
  v5 = -1i64;
  do
    ++v5;
  while ( str[v5] );
  FS_Write(str, (int)v5, (fileHandle_t)handle);
}

/*
==============
writeToResourceFile
==============
*/
void writeToResourceFile(const char *str)
{
  unsigned int TimeAsSeconds; 
  const char *v3; 
  fileHandle_t *handle; 
  __int64 v5; 
  fileHandle_t _Buffer[14]; 

  if ( s_resourceFileOpened )
  {
    handle = (fileHandle_t *)s_resourceFileHandle.handle.handle;
  }
  else
  {
    TimeAsSeconds = s_fileTimestamp;
    if ( s_fileTimestamp == -1 )
    {
      TimeAsSeconds = Sys_GetTimeAsSeconds();
      s_fileTimestamp = TimeAsSeconds;
    }
    j_sprintf((char *const)_Buffer, "%u-report.txt", TimeAsSeconds);
    handle = FS_FOpenTextFileWrite(_Buffer, v3);
    s_resourceFileHandle.handle.handle = (__int64)handle;
    s_resourceFileOpened = 1;
  }
  v5 = -1i64;
  do
    ++v5;
  while ( str[v5] );
  FS_Write(str, (int)v5, (fileHandle_t)handle);
}

