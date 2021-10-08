/*
==============
Mem_Error_CannotAlloc_Dev
==============
*/

void Mem_Error_CannotAlloc_Dev(Mem_AllocatorType allocator, const char *function, const char *filename, int line, const char *msg, ...)
{
  ?Mem_Error_CannotAlloc_Dev@@YAXW4Mem_AllocatorType@@PEBD1H1ZZ(allocator, function, filename, line, msg);
}

/*
==============
Mem_Error_CannotAlloc_Dev
==============
*/
void Mem_Error_CannotAlloc_Dev(Mem_AllocatorType allocator, const char *function, const char *filename, int line, const char *msg, ...)
{
  __int64 v5; 
  const char *v9; 
  char *m_activeGameMapName; 
  const char *v11; 
  char *v12; 
  unsigned __int64 DevMemorySize; 
  __int64 v14; 
  __int64 v15; 
  char v16[32]; 
  char v17[128]; 
  char dest[256]; 
  va_list ap; 

  va_start(ap, msg);
  v5 = (unsigned int)allocator;
  Sys_DumpRawHWMemStats(0);
  PMem_DumpMemStats();
  MemBudget_Poll_Dump(1);
  Sys_DumpPlatformMemStats();
  DB_Zones_DumpMemoryUsage();
  Stream_Alloc_Dump();
  if ( !function && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_error.cpp", 97, ASSERT_TYPE_ASSERT, "(function)", (const char *)&queryFormat, "function") )
    __debugbreak();
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_error.cpp", 98, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_error.cpp", 99, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x16 )
  {
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_error.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( allocatorIndex ) < (unsigned)( Mem_AllocatorType::COUNT )", "allocatorIndex doesn't index Mem_AllocatorType::COUNT\n\t%i not in [0, %i)", v14, 22) )
      __debugbreak();
  }
  Com_vsprintf_truncate(dest, 0x100ui64, 0x100ui64, msg, ap);
  v9 = "<none>";
  m_activeGameMapName = "<no map>";
  if ( Com_FrontEndScene_IsActive() || Com_FrontEnd_IsInFrontEnd() )
  {
    v9 = "frontend";
  }
  else if ( cls.m_activeGameMapName[0] )
  {
    m_activeGameMapName = cls.m_activeGameMapName;
    v9 = "local";
    if ( !Com_IsAnyLocalServerRunning() )
      v9 = "dedi";
  }
  v11 = "xbx";
  if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO )
    v11 = "xb3";
  v12 = "normal";
  if ( Mem_Paged_GetDevMemorySize() )
  {
    DevMemorySize = Mem_Paged_GetDevMemorySize();
    Com_sprintf<32>((char (*)[32])v16, "dev=%zu", DevMemorySize >> 20);
    v12 = v16;
  }
  Com_sprintf<128>((char (*)[128])v17, " map=%s server=%s hw=%s mem=%s", m_activeGameMapName, v9, v11, v12);
  Com_PrintError(0, "Unable to allocate memory%s\n%s\nAllocator=%s\nFunction=%s\n%s(%d)", v17, dest, MEM_ALLOCATOR_NAMES[v5], function, filename, line);
  CrashReport_TriggerNow();
  LODWORD(v15) = line;
  Sys_Error((const ObfuscateErrorText)&stru_143E5C180, v17, dest, MEM_ALLOCATOR_NAMES[v5], function, filename, v15);
}

