/*
==============
CrashReport_Init
==============
*/

void CrashReport_Init(void)
{
  ?CrashReport_Init@@YAXXZ();
}

/*
==============
CrashReport_TriggerNow
==============
*/

void CrashReport_TriggerNow(void)
{
  ?CrashReport_TriggerNow@@YAXXZ();
}

/*
==============
CrashReport_Init
==============
*/
void CrashReport_Init(void)
{
  XB3ConsoleType XB3ConsoleType; 
  const char *v1; 

  SetUnhandledExceptionFilter(CrashReport_UnhandledExceptionFilter);
  CrashReport_Internal_Init();
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v1 = "Base";
  if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
    v1 = "Scorpio";
  CrashReport_AddKVP("ConsoleType", v1);
}

/*
==============
CrashReport_TriggerNow
==============
*/
void CrashReport_TriggerNow(void)
{
  RaiseException(0xC0000005, 0, 0, NULL);
}

/*
==============
CrashReport_UnhandledExceptionFilter
==============
*/
__int64 CrashReport_UnhandledExceptionFilter(_EXCEPTION_POINTERS *exceptionInfo)
{
  _iobuf *v2; 
  FILE *v3; 
  const ntl::fixed_vector_map<char const *,char const *,64,CrashReport_KeyCompare> *KVPList; 
  const char **v5; 
  const ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *MemRegions; 
  const ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *i; 
  const char *v8; 
  FILE *v9; 
  FILE *v10; 
  const char *DevHddPath; 
  size_t PtNumOfCharConverted; 

  SetUnhandledExceptionFilter(NULL);
  CrashReport_Internal_BeginHandler();
  CrashReport_Internal_AddCommonKVPs();
  CrashReport_Internal_AcquireReadLock();
  j_swprintf(&pwzFile, 0x100ui64, L"%s\\dump_kvps.txt", L"T:");
  v2 = _wfopen(&pwzFile, L"wt");
  v3 = v2;
  if ( v2 )
  {
    j_fprintf(v2, "{\n");
    KVPList = CrashReport_Internal_GetKVPList();
    v5 = (const char **)KVPList;
    if ( KVPList != (const ntl::fixed_vector_map<char const *,char const *,64,CrashReport_KeyCompare> *)((char *)KVPList + 16 * KVPList->m_size) )
    {
      do
      {
        j_fprintf(v3, "\"%s\":\"%s\",\n", *v5, v5[1]);
        v5 += 2;
      }
      while ( v5 != (const char **)((char *)KVPList + 16 * KVPList->m_size) );
    }
    j_fprintf(v3, "}\n");
    fflush(v3);
    fclose(v3);
    WerRegisterFile_0(&pwzFile, WerRegFileTypeOther, 0);
  }
  MemRegions = CrashReport_Internal_GetMemRegions();
  for ( i = MemRegions; i != (const ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)MemRegions + 24 * MemRegions->m_size); i = (const ntl::fixed_vector_map<char const *,CrashReport_MemRegion,16,CrashReport_KeyCompare> *)((char *)i + 24) )
  {
    v8 = *(const char **)i->m_data.m_buffer;
    PtNumOfCharConverted = 0i64;
    if ( mbstowcs_s(&PtNumOfCharConverted, &DstBuf, 0x100ui64, v8, 0xFFFFFFFFFFFFFFFFui64) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\crashreport\\crashreport_xb3.cpp", 77, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to convert '%s' to widechars", *(const char **)i->m_data.m_buffer) )
        __debugbreak();
    }
    else
    {
      j_swprintf(&FileName, 0x100ui64, L"%s\\%s.bin", L"T:", &DstBuf);
      v9 = _wfopen(&FileName, L"wb");
      v10 = v9;
      if ( v9 )
      {
        fwrite(*(const void **)&i->m_data.m_buffer[8], 1ui64, *(_QWORD *)&i->m_data.m_buffer[16], v9);
        fflush(v10);
        fclose(v10);
        WerRegisterFile_0(&FileName, WerRegFileTypeOther, 0);
      }
    }
  }
  CrashReport_Internal_ReleaseReadLock();
  FS_GetConsoleLogFilename(qpath);
  DevHddPath = Sys_GetDevHddPath();
  FS_BuildOSPath(DevHddPath, (const char *)&queryFormat.fmt + 3, qpath, (char (*)[256])MultiByteStr);
  MultiByteToWideChar(0xFDE9u, 0, MultiByteStr, -1, &WideCharStr, 256);
  WerRegisterFile_0(&WideCharStr, WerRegFileTypeOther, 0);
  CrashReport_Internal_EndHandler();
  Sys_UnhandledExceptionFilter(exceptionInfo);
  return 0i64;
}

